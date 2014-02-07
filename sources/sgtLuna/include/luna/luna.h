#ifndef _LUNA_H_EMMANUEL_ROCHE
#define _LUNA_H_EMMANUEL_ROCHE

#include <lunaCommon.h>

// an optimized version of luna by Taesoo Kwon.
// This luna class is faster than the original luna, lunar. (Faster than OOLUA and luabind too.)


extern "C" {
#include "lua.h"
#include "lauxlib.h"
}

#include <stdio.h>
#include <string.h>
#include <string>
#include <iostream>
#include <sstream>

// Dummy struct used to declare a lua function parameter for a function.
struct lua_Function {};

// Dummy struct used to declare a lua table parameter for a function.
struct lua_Table {};

// Dummy struct used to declare a lua any parameter for a function.
struct lua_Any {};

#define LUNA_DEFINE_DIRECT_CAST(cname) template <typename dstType> \
struct luna_caster<cname, dstType> { \
	static inline dstType* cast(cname* ptr) {  \
		return (dstType*)(ptr); \
	}; \
};

#define LUNA_BEGIN_SETTER(MyClass) namespace sgt { \
inline void pushValue(lua_State* L, const MyClass* arg) { \
	if (!arg) { \
		lua_pushnil(L); \
		return; \
	}

#define LUNA_END_SETTER(MyClass) } \
\
inline void pushValue(lua_State* L, const WebString& arg) { \
	return pushValue(L,&arg); \
} \
};

#define LUNA_BEGIN_GETTER(MyClass) namespace sgt { \
template <> \
inline MyClass getValue(lua_State* L, int index) {

#define LUNA_END_GETTER(MyClass) } \
};

typedef int (*luna_mfp)(lua_State *L);

typedef std::map<std::string, luna_mfp> LunaConverterMap;
typedef std::map<std::string, LunaConverterMap> LunaConverterMapMap;

SGTLUNA_EXPORT void luna_open(lua_State* L);
SGTLUNA_EXPORT void luna_copyParents(lua_State* L, const char* modName);

SGTLUNA_EXPORT LunaConverterMap& luna_getConverterMap(std::string baseName);

SGTLUNA_EXPORT int luna_dynamicCast(lua_State* L, std::string baseName, std::string derivedName);
SGTLUNA_EXPORT int luna_dynamicCast(lua_State* L, LunaConverterMap& converters, std::string baseName, std::string derivedName);

SGTLUNA_EXPORT int luna_pushModule(lua_State* L, const std::string& mname, int index = LUA_GLOBALSINDEX);
SGTLUNA_EXPORT int luna_popModule(lua_State* L);

struct luna_eqstr{
	bool operator()(const char* s1, const char* s2) const {
		return strcmp(s1,s2)==0;
	}
};

template <typename T1, typename T2>
class luna_same_types
{
public: enum {result = false};
};

template <typename T>
class luna_same_types<T, T>
{
public: enum {result = true};
};

// Caster templates used for the convertion of types in gc_T()
template <typename srcType, typename dstType>
struct luna_caster {
	static inline dstType* cast(srcType* ptr) {
		return dynamic_cast<dstType*>(ptr);
	};
};

template <typename srcType, typename dstType, bool b>
struct perform_luna_cast {
	static inline dstType* cast(srcType* ptr) {
		return ptr;
	};
};

template <typename srcType, typename dstType>
struct perform_luna_cast<srcType, dstType, false> {
	static inline dstType* cast(srcType* ptr) {
		return luna_caster<srcType, dstType>::cast(ptr);
	};
};

// template used to specify the container type based on the parent class:
template <typename parentType>
struct luna_container {
	typedef parentType* container_type;
	
	static inline parentType* get(const container_type& cont) {
		return cont;
	};

	static inline void set(container_type& cont, parentType* ptr) {
		cont = ptr;
	};
	
	static inline void release(container_type& cont) {
		cont = NULL;
	};	
};

// container specialization for osg::Referenced:
template <>
struct luna_container<osg::Referenced> {
	typedef osg::ref_ptr<osg::Referenced> container_type;
	
	static inline osg::Referenced* get(const container_type& cont) {
		//std::cout << "Retrieving object ptr=" << (const void*)cont.get() << std::endl;
		return cont.get();
	};

	static inline void set(container_type& cont, osg::Referenced* ptr) {
		/*while(ptr && ptr->referenceCount()<0) {
			logWARN("Invalid ref count=" <<ptr->referenceCount() << " for ptr=" << (const void*)ptr);
			ptr->ref();
		}*/
		
		cont = ptr;
	};
	
	static inline void release(container_type& cont) {
		if(cont.valid()) {
			//std::cout << "Current ref count = " << cont.get()->referenceCount() << std::endl;
			//cont.release();		
			cont = NULL;		
		}
		else {
			//std::cout << "Pointer is invalid." << std::endl;		
		}
	};	
	
};

#ifndef CXX_ENABLED
#include <unordered_map>
//#include <ext/hash_map> 
typedef std::hash<const char*> luna_hash_t; //__gnu_cxx::hash
typedef std::unordered_map<const char*, luna_mfp, luna_hash_t, luna_eqstr> luna__hashmap; // __gnu_cxx::hash_map
#else
#include <unordered_map>
#include <functional>
typedef std::tr1::hash<const char*> luna_hash_t;
typedef std::tr1::unordered_map<const char*, luna_mfp, luna_hash_t, luna_eqstr> luna__hashmap;
//typedef std::hash<const char*> luna_hash_t;
//typedef std::unordered_map<const char*, luna_mfp, luna_hash_t, luna_eqstr> luna__hashmap;
#endif

typedef struct { const char *name; luna_mfp mfunc; } luna_RegType;

typedef struct { const char *name; luna_mfp mfunc; } luna_ConverterType;

typedef struct { const char *name; int val; } luna_RegEnumType;

template <typename T_interface> class LunaModule {
	public:
		static void Register(lua_State* L)
		{
			// T_interface::className is namespace rather than class here. (no constructor, destructor, userdata)
			int methods; 
			luaL_dostring(L, "if not __luna then __luna={} end");
			std::string temp;
			temp="if not __luna.";
			temp+=	T_interface::moduleName; 
			temp+=" then __luna.";
			temp+=T_interface::moduleName;
			temp+=" ={} end";

			luaL_dostring(L,temp.c_str());
			lua_pushstring(L, "__luna");
			lua_gettable(L, LUA_GLOBALSINDEX);
			int __luna= lua_gettop(L);
			lua_pushstring(L, T_interface::moduleName);
			lua_gettable(L, __luna);

			methods= lua_gettop(L);

			// fill method table 
			for (const luna_RegType *l = T_interface::methods; l->name; l++) 
			{
				lua_pushstring(L, l->name);
				lua_pushcfunction(L, l->mfunc);
				lua_settable(L, methods);
			}

			// fill enum table 
			for (const luna_RegEnumType *l = T_interface::enumValues; l->name; l++) 
			{
				lua_pushstring(L, l->name);
				lua_pushinteger(L, l->val);
				lua_settable(L, methods);
			}

			lua_pop(L, 2);  // drop methods and __luna
		}
};


template <int>
class LunaType
{
public:
	typedef void type;
};


std::string SGTLUNA_EXPORT luna_dumpStack(lua_State* L);
void SGTLUNA_EXPORT luna_printStack(lua_State* L, bool compact=false);
void SGTLUNA_EXPORT luna_dostring(lua_State* L, const char* luacode);
SGTLUNA_EXPORT void luna_setTypeName(long hash,const std::string& className);
SGTLUNA_EXPORT std::string luna_getTypeName(long hash);

template <typename T> class Luna;

template <typename T>
class LunaTraits
{
	public:
		typedef Luna<T > luna_t;
		static const char className[];
		static const char fullName[];
        static const char moduleName[];                            // 1051
        static const char* parents[];                            // 1051
		static const int uniqueIDs[];
		static const int hash;
		static luna_RegType methods[];
		static luna_ConverterType converters[];
		static luna_RegEnumType enumValues[];
		static T* _bind_ctor(lua_State *L);
		static void _bind_dtor(T* obj);
		typedef T base_t;
		typedef T parent_t;
};

template <typename T> class Luna {
	public:
		typedef LunaTraits<T > T_interface;
		typedef struct {int* uniqueIDs; typename luna_container<T>::container_type pT; bool gc; bool has_env; int hash; } userdataType;

	inline static void set(lua_State *L, int table_index, const char *key) {
		lua_pushstring(L, key);
		lua_insert(L, -2);  // swap value and key
		lua_settable(L, table_index);
	}

	static void Register(lua_State *L) {
		// register this typename:
		luna_setTypeName(T_interface::hash,T_interface::fullName);

        // assume that the parent module is already on the state at that time.        
        // The parent module must be pushed as a global table with the proper module name.
        int parent = lua_gettop(L);
        
		lua_newtable(L);
		int methods = lua_gettop(L);

		// use a single table 
		// sometimes more convenient 
		int metatable=methods;

		//luaL_dostring(L, "if not __luna then __luna={} end");

		//lua_pushstring(L, "__luna");
		//lua_gettable(L, LUA_GLOBALSINDEX);
		// unlike original luna class, this class uses the same table for methods and metatable
		// store methods table in __luna global table so that
		// scripts can add functions written in Lua.
		lua_pushstring(L, T_interface::className);
		lua_pushvalue(L, methods);
		lua_settable(L, parent); // ParentTable[className]=methods

		lua_pushliteral(L, "__index");
		lua_pushvalue(L, methods);
		lua_settable(L, metatable); // metatable.__index=methods

		/* lua_pushliteral(L, "__tostring"); */
		/* lua_pushcfunction(L, tostring_T); */
		/* lua_settable(L, metatable);// metatable.__tostring=tostring_T */

		lua_pushliteral(L, "__gc");
		lua_pushcfunction(L, gc_T);
		lua_settable(L, metatable);

		if (0)
		{
			// ctor supports only classname:new
			lua_pushliteral(L, "new");
			lua_pushcfunction(L, new_T);
			lua_settable(L, methods);       // add new_T to metatable table
		}
		else
		{   
			// ctor supports both classname:new(...) and classname(...)
			// very slight memory and performance overhead, so 
			// no reason to support only one
			lua_newtable(L);                // mt for method table
			{
				lua_pushcfunction(L, new_noownership_T);
				//lua_pushvalue(L, -1);           // dup new_T function
				set(L, methods, "new");         // add new_T to method table
			}
			lua_pushcfunction(L, new_T);
			set(L, -3, "__call");           // mt.__call = new_T
			lua_setmetatable(L, methods);
		}

		// fill method table with metatable from class T
		for (const luna_RegType *l = T_interface::methods; l->name; l++) {
			lua_pushstring(L, l->name);
			lua_pushcclosure(L, l->mfunc, 0);
			lua_settable(L, methods);
		}

		// Add a copy of the deleter:
		lua_pushliteral(L, "delete");
		lua_pushcfunction(L, gc_T);
		lua_settable(L, methods);

		// Register the converters:
		for (const luna_ConverterType *l = T_interface::converters; l->name; l++) {
			LunaConverterMap& converters = luna_getConverterMap(l->name);
			converters[T_interface::fullName] = l->mfunc;
		}

		// fill enum table 
		for (const luna_RegEnumType *l = T_interface::enumValues; l->name; l++) 
		{
			//luaL_error(L,"Setting enum value : %s=%d",l->name,l->val);

			lua_pushstring(L, l->name);
			lua_pushnumber(L, l->val);
			lua_rawset(L, methods);
		}

		// Also add the class name and parents in the table:
		lua_pushstring(L,"_CLASSNAME_");
		std::ostringstream os;
		os << T_interface::moduleName << "." << T_interface::className;
		lua_pushstring(L,os.str().c_str());
		lua_settable(L, methods);

		// use a table as container for the parents to support multiple
		// inheritance:
		lua_pushstring(L,"_PARENTS_");
		lua_newtable(L); // the parent table
		int parents = lua_gettop(L);
		int count = 1;
		for(const char** ptr = (const char**)T_interface::parents; *ptr; ++ptr ) {
			lua_pushnumber(L,count++);
			lua_pushstring(L,*ptr);
			lua_settable(L,parents);
		}
		lua_settable(L, methods);


		lua_settop(L, parent);  // drop methods 
	}

    inline static bool contains_id(int* ptr, int id) {
        while(*ptr!=0) {
            if(*ptr++ == id)
                return true;
        }
		//return ud->uniqueID;
        return false;// id not found    
    }
    
	inline static bool has_uniqueid(lua_State *L, int narg, int id) {
		userdataType* ud=static_cast<userdataType*>(lua_touserdata(L,narg));
		if (!ud ) return false;
        // check if the uniqueID is available in the list:
        return contains_id(ud->uniqueIDs,id);
	}

	// This is dangerous, but we may need it sometimes:
	inline static T* rawPointer(lua_State *L, int narg){
		userdataType* ud=static_cast<userdataType*>(lua_touserdata(L,narg));
		if(!ud) { printf("checkRaw: ud==nil\n"); luaL_typerror(L, narg, T_interface::className); }
		
		return luna_container<T>::get(ud->pT); 
	}
	inline static T* checkRaw(lua_State *L, int narg){
		userdataType* ud=static_cast<userdataType*>(lua_touserdata(L,narg));
		if(!ud) { printf("checkRaw: ud==nil\n"); luaL_typerror(L, narg, T_interface::className); }
		// assume the requested interface only has one uniqueID.
		// otherwise this means we are trying to check on a non base class anyway !

		if(T_interface::uniqueIDs[1] != 0) {
			printf("Trying to cast to non absolute base class: %s\n", T_interface::className);
			luaL_typerror(L, narg, T_interface::className);
		}

		if(!contains_id(ud->uniqueIDs,T_interface::uniqueIDs[0])) // type checking with almost no overhead
		{
			printf("ud->uid: %ld != interface::uid : %ld\n", ud->uniqueIDs, (int*)T_interface::uniqueIDs);
			luaL_typerror(L, narg, T_interface::className);
		}

		if(ud->uniqueIDs[0] == T_interface::uniqueIDs[0]) {
			// Direct cast is possible.
			return luna_container<T>::get(ud->pT);
		}
		else {
			// Need to cast to the first base class to avoid slicing:
			printf("Non first uniqueID casting not supported yet.");
			luaL_typerror(L, narg, T_interface::className);
		}

		return NULL;  // pointer to T object
	}
	// get userdata from Lua stack and return pointer to T object
	inline static T *check(lua_State *L, int narg) {
		return lua_isnil(L,narg)==1 ? (T*)NULL : checkRaw(L, narg);
	}

	template<typename SubType>
	inline static SubType *checkSubType(lua_State *L, int narg) {
		T* res = check(L,narg);
		return perform_luna_cast<T, SubType, luna_same_types<SubType,T>::result >::cast(res);
	}
	
	// use lunaStack::push if possible. 
	inline static void push(lua_State *L, const T* obj, bool gc, const char* metatable=T_interface::className, const char* module=T_interface::moduleName)
	{
		lua_pushstring(L,module);
		lua_gettable(L, LUA_GLOBALSINDEX);

		if(lua_type(L,-1)!=LUA_TTABLE) {
			luaL_error(L,"Cannot retrieve module '%s' while pushing object of class %s",module,metatable);	
		}

		int __luna= lua_gettop(L);
		
		typedef typename T_interface::parent_t ParentType;
		typedef typename Luna<ParentType>::userdataType UserData;
		
		//userdataType *ud = static_cast<userdataType*>(lua_newuserdata(L, sizeof(userdataType)));
		UserData *ud = static_cast<UserData*>(lua_newuserdata(L, sizeof(UserData)));
		
		// create a new container at the proper location:
		typedef typename luna_container<ParentType>::container_type ContainerType;
		
		void* res = new((void*)(&(ud->pT))) ContainerType();
		
		if(res!=&(ud->pT)) {
			luaL_error(L,"Invalid placement new result : res=%d, pT=%d",res,&(ud->pT));
		}
		
		//ud->pT = (T*)obj;  // store pointer to object in userdata
		//ud->pT = (ParentType*)(const_cast<T*>(obj));  // store pointer to object in userdata
		luna_container<ParentType>::set(ud->pT,(ParentType*)(const_cast<T*>(obj)));

		// ensure that we can retrieve the object properly:
		/*ParentType* p2 = luna_container<ParentType>::get(ud->pT);
		T* obj2 = perform_luna_cast<ParentType, T, luna_same_types<ParentType,T>::result >::cast(p2);
		if(!obj2) {
			luaL_error(L,"Cannot convert back parent pointer '%s' to child pointer '%s'",Luna<ParentType>::T_interface::className,T_interface::className);
		}*/

		ud->gc=gc;   // collect garbage by default
		ud->has_env=false; // does this userdata has a table attached to it?
		ud->uniqueIDs=(int*)T_interface::uniqueIDs;
		ud->hash=T_interface::hash;
		lua_pushstring(L, metatable);
		lua_gettable(L, __luna);

		if(lua_type(L,-1)!=LUA_TTABLE) {
			luaL_error(L,"Cannot retrieve metatable '%s' while pushing object.",metatable);	
		}

		lua_setmetatable(L, -2);
		//luna_printStack(L);
		lua_insert(L, -2);  // swap __luna and userdata 
		lua_pop(L,1);

		// Check the pushed object:
		/*T* obj3 = Luna< ParentType >::checkSubType< T >(L,-1);
		if(!obj3) {
			luaL_error(L,"Cannot convert back parent pointer '%s' to child pointer '%s' (bis).",Luna<ParentType>::T_interface::className,T_interface::className);
		}
		logINFO("Successfully pushed object of type " << T_interface::className);*/
	}

	static int new_modified_T(lua_State *L);

	private:
	Luna();  // hide default constructor

	// create a new T object and
	// push onto the Lua stack a userdata containing a pointer to T object
	static int new_T(lua_State *L) {
		lua_remove(L, 1);   // use classname:new(), instead of classname.new()
		T *obj = T_interface::_bind_ctor(L);  // call constructor for T objects
		if(!obj)
			return 0; // Do not push empty userdata.
			
		push(L,obj,true);

		return 1;  // userdata containing pointer to T object
	}

	static int new_noownership_T(lua_State *L) {
		lua_remove(L, 1);   // use classname:new(), instead of classname.new()
		T *obj = T_interface::_bind_ctor(L);  // call constructor for T objects
		if(!obj)
			return 0; // Do not push empty userdata.
			
		push(L,obj,false);
		return 1;  // userdata containing pointer to T object
	}

	// garbage collection metamethod
	static int gc_T(lua_State *L) {
		typedef typename T_interface::parent_t ParentType;
		typedef typename Luna<ParentType>::userdataType UserData;
		
		//userdataType *ud = static_cast<userdataType*>(lua_touserdata(L, 1));
		UserData *ud = static_cast<UserData*>(lua_touserdata(L, 1));

		if (ud->gc)
		{
			// ParentType* pobj = (ParentType*)(ud->pT);
			ParentType* pobj = luna_container<ParentType>::get(ud->pT);
			if(!pobj)
				return 0; // nothing to do in that case.
				
			//T *obj = dynamic_cast<T*>(pobj);
			T *obj = perform_luna_cast<ParentType,T, luna_same_types<ParentType,T>::result >::cast(pobj);
			if(!obj) {
				luaL_error(L, "in gc_T(): could not convert parent pointer type %s to child pointer %s",LunaTraits<ParentType>::className,T_interface::className);
			}
			T_interface::_bind_dtor(obj);  // call constructor for T objects
			//ud->pT = NULL;
			//luna_container<ParentType>::set(ud->pT,NULL);
			luna_container<ParentType>::release(ud->pT);
			//logDEBUG("Deleting object of type " << T_interface::className);
		}
		else {
			//logDEBUG("Releasing object of type " << T_interface::className);
			luna_container<ParentType>::release(ud->pT);
		}

		return 0;
	}

	static int tostring_T (lua_State *L) {
		char buff[32];
		typedef typename T_interface::parent_t ParentType;
		typedef typename Luna<ParentType>::userdataType UserData;
		
		//userdataType *ud = static_cast<userdataType*>(lua_touserdata(L, 1));
		UserData *ud = static_cast<UserData*>(lua_touserdata(L, 1));

		//T *obj = (T*)(ud->pT);
		ParentType* pobj = luna_container<ParentType>::get(ud->pT);

		sprintf(buff, "%p", pobj);
		lua_pushfstring(L, "%s (%s)", T_interface::className, buff);
		return 1;
	}
};

// helper class for easy use.
// wraps lua-stack and/or lua-environment
class lunaStack
{
 public:
	lua_State* L;
	int currArg;
	int delta;
 lunaStack(lua_State* l, bool upward=true):L(l){
		if (upward){
			// useful for retrieving function argument. Retreieving doesn't remove elements from stack
			setCheckFromBottom();
		} else {
			// useful for retrieving function call results. Retrieving pops elements from stack
			setCheckFromTop();
		}
	}
	~lunaStack();
	inline void setCheckFromTop() { delta=-1; currArg=gettop();}
	inline void setPop() { setCheckFromTop();}
	inline void setCheckFromBottom() { delta=1; currArg=1;}
	
	// check
	inline int gettop() { return lua_gettop(L);}
	inline double tonumber(int i) { return luaL_checknumber(L, i);}
	inline const char* tostring(int i) { return luaL_checkstring(L, i);}
	inline bool toboolean(int i) { return lua_toboolean(L, i)==1;}
	template <class T> T* topointer(int i) { return (T*)Luna<typename LunaTraits<T>::base_t>::check(L,i);}  

	inline void _incr(){
		currArg+=delta;
		if (delta==-1) lua_pop(L,1);
	}

	// retrieve (or pop)
	friend lunaStack& operator>>( lunaStack& os, double& a)      
	{ a=os.tonumber(os.currArg); os._incr(); return os;}
	friend lunaStack& operator>>( lunaStack& os, std::string& a) 
	{ a=os.tostring(os.currArg); os._incr(); return os;}
	friend lunaStack& operator>>( lunaStack& os, bool& a)        
	{ a=os.toboolean(os.currArg); os._incr(); return os;}
	// check and pop 
	template <class T> T* check() { 
		T* a=topointer<T>(currArg);_incr(); return a;}

	inline void pop() { lua_pop(L,1);}

	friend lunaStack& operator<<( lunaStack& os, double a)		    	{ lua_pushnumber(os.L, a); return os;}
	friend lunaStack& operator<<( lunaStack& os, std::string const &a)	{ lua_pushstring(os.L,a.c_str()); return os;}

	// set garbageCollection=true when lua environment needs to adopt the object. 
	// e.g. push<OBJ>(new OBJ(), true);
	//      push<OBJ>(pointerToExistingOBJmanagedInsideCpp, false);
	template <class T> void push(T const* c,bool garbageCollection=false) { Luna<typename LunaTraits<T>::base_t>::push(L,(typename LunaTraits<T>::base_t*)c,garbageCollection, LunaTraits<T>::className);}
	template <class T> void push(T const& c) { Luna<typename LunaTraits<T>::base_t>::push(L,(typename LunaTraits<T>::base_t*)c,false, LunaTraits<T>::className);}

	// stack[top]=_G[key]
	void getglobal(const char* key){
		lua_pushstring(L, key);
		lua_gettable(L,LUA_GLOBALSINDEX); // stack top becomes _G[key] 
	}

	// stack[top]=_G[key1][key2]
	inline void getglobal(const char* key1, const char* key2){
		getglobal(key1);
		replaceTop(key2);
	}
	// stack[top]=_G[key1][key2][key3]
	inline void getglobal(const char* key1, const char* key2, const char* key3){
		getglobal(key1);
		replaceTop(key2);
		replaceTop(key3);
	}
	inline void getglobal(const char* key1, const char* key2, const char* key3, const char* key4){
		getglobal(key1);
		replaceTop(key2);
		replaceTop(key3);
		replaceTop(key4);
	}

	// stack[top]=stack[top][key]
	inline void replaceTop(const char* key){
		if (!lua_istable(L,-1)) luaL_error(L, "Luna<>::replaceTop: non-table object cannot be accessed");
		lua_pushstring(L, key);
		lua_gettable(L, -2);
		lua_insert(L, -2);  // swap table and value 
		lua_pop(L,1); // pop-out prev table
	}
	inline void replaceTopLUD(void* key){
		if (!lua_istable(L,-1)) luaL_error(L, "Luna<>::replaceTop: non-table object cannot be accessed");
		lua_pushlightuserdata(L, key);
		lua_gettable(L, -2);
		lua_insert(L, -2);  // swap table and value 
		lua_pop(L,1); // pop-out prev table
	}

	// assuming stack[-1-numIn]==function. (stack: function -> arg1 -> arg2 -> arg_numIn )
	inline void call(int numIn, int numOut){
		lua_call(L, numIn, numOut);
		setCheckFromTop(); // prepare to read-out results 
	}

	template <class T> T* get(const char* key, int table_index=LUA_GLOBALSINDEX){
		//luna_printStack(L);
		lua_pushstring(L, key);
		lua_gettable(L, table_index);
		T* ptr= topointer<T>(gettop());
		lua_pop(L,1);
		//luna_printStack(L);
		return ptr;
	}

	template <class T> void set(const char* key, T* ptr,  int table_index=LUA_GLOBALSINDEX, bool garbageCollection=false) {
		push<T>(ptr,garbageCollection);
		lua_pushstring(L, key);
		lua_insert(L, -2);  // swap value and key
		lua_settable(L, table_index);
		//printf("%x %x\n", (unsigned int)ptr,(unsigned int) get<T>(key));
	}
	inline void settable(int table_index=LUA_GLOBALSINDEX){
		lua_settable(L, table_index);
	}

};

class luna_wrap_object // inherit this object to enable inheritance from lua
{
 public:
	luna_wrap_object(){}
	std::string _custumMT; // custum metatable
	lua_State* _L;
	void setCustumMT(lua_State* L, const char* mt) { _L=L; _custumMT=mt;}
    // push a member function (__luna[_custumMT][funcName]) and self object to stack
	template <class T>
	bool pushMemberFunc(lunaStack & l, const char* funcName )
	{ 
		/* easy to read but slower version
		l.getglobal("__luna", _custumMT.c_str(), funcName);
		if(!lua_isnil(l.L,-1)){
			l.getglobal("__luna",_custumMT.c_str(), "aUserdata");
			l.replaceTopLUD((void*)(static_cast<typename LunaTraits<T>::base_t*>(this)));
			return true;
		}
		lua_pop(l.L,1);
		return false;
		*/
		lua_State* L=l.L;
		l.getglobal("__luna", _custumMT.c_str()); // get metatable
		lua_pushstring(L, funcName);
		lua_gettable(L,-2);
		if(lua_isnil(L,-1)){
			lua_pop(L,2);
			return false;
		}
		lua_pushstring(L, "aUserdata");
		lua_gettable(L,-3);
		l.replaceTopLUD((void*)(static_cast<typename LunaTraits<T>::base_t*>(this)));
		lua_remove(L,-3); // pop-out metatable
		return true;	
	}
};
template <class T>
int Luna<T>::new_modified_T(lua_State *L) {
	//luna_printStack(L);
	std::string metatable=lua_tostring(L,2);
	lua_remove(L, 1);   // use classname:new(), instead of classname.new()
	lua_remove(L, 1);  
	T *obj = T_interface::_bind_ctor(L);  // call constructor for T objects
	obj->setCustumMT(L, metatable.c_str());
	push(L,obj,true, metatable.c_str());
	//luna_printStack(L);
	lunaStack l(L);
	l.getglobal("__luna", metatable.c_str(), "aUserdata");
	if(lua_isnil(L,-1))
	{
		lua_pop(L,1);
		l.getglobal("__luna", metatable.c_str());
		//printf("getglobal"); luna_printStack(L);
		lua_pushstring(L,"aUserdata");
		lua_newtable(L);
		//luna_printStack(L);
		lua_settable(L,-3);
		//printf("asdf "); luna_printStack(L);
		lua_pushstring(L,"aUserdata");
		lua_gettable(L,-2);
		lua_insert(L,-2); // swap __luna and aUserdata
		lua_pop(L,1);
		//luna_printStack(L);
	}

	//printf("kk ");luna_printStack(L);
	// aUserdata[obj]=userdata
	lua_pushlightuserdata(L, (void*)obj);
	lua_pushvalue(L, -3); // dup userdata
	//luna_printStack(L);
	lua_settable(L, -3);
	lua_pop(L,1);
	//luna_printStack(L);
	return 1;  // userdata containing pointer to T object
}

#if 0
template class SGTLUNA_EXPORT LunaTraits< void >;
#endif

#include "lua/LuaObject.h"

#endif

/*
 * LuaObject.h
 *
 *  Created on: 30 nov. 2012
 *      Author: kenshin
 */

#ifndef LUAOBJECT_H_
#define LUAOBJECT_H_

#include "lunaCommon.h"
#include "lua/LuaRef.h"
#include <OpenThreads/Thread>

namespace sgt {

template<typename T>
struct remove_pointer
{
	typedef T type;
};

template<typename T>
struct remove_pointer<T*>
{
	typedef typename remove_pointer<T>::type type;
};

template <typename T>
struct luna_boxed {
	typedef T Type;
};

template <>
struct luna_boxed<int> {
	typedef void Type;
};

template <>
struct luna_boxed<unsigned int> {
	typedef void Type;
};

template <>
struct luna_boxed<long> {
	typedef void Type;
};

template <>
struct luna_boxed<unsigned long> {
	typedef void Type;
};

template <>
struct luna_boxed<float> {
	typedef void Type;
};

template <>
struct luna_boxed<double> {
	typedef void Type;
};

template <typename ArgType>
void pushValue(lua_State* L, ArgType* arg) {
	Luna< typename luna_boxed<ArgType>::Type >::push(L,(const typename luna_boxed<ArgType>::Type *)arg,false);
};

template < typename ResultType>
inline ResultType getValue(lua_State* L, int index) {
	typedef typename remove_pointer<ResultType>::type RealType;
	
	// Retrieve the result from the stack:
	return (Luna< RealType >::check(L,index));
};

class LuaObject;

template < typename ResultType>
inline ResultType callFunction(const LuaObject& obj, lua_State* L, int nargs);

template <typename ArgType>
void pushValue(lua_State* L, ArgType arg) {
	lua_pushnumber(L,arg);
};

template <typename ArgType>
void pushValue(lua_State* L, const ArgType* arg) {
	Luna< typename luna_boxed<ArgType>::Type >::push(L,(const typename luna_boxed<ArgType>::Type *)arg,false);
};

template <typename ArgType>
void pushValue(lua_State* L, const osg::ref_ptr<ArgType>* arg) {
	Luna< ArgType >::push(L,arg->get(),false);
};

template <typename ArgType>
void pushValue(lua_State* L, const osg::observer_ptr<ArgType>* arg) {
	Luna< ArgType >::push(L,arg->get(),false);
};

template <typename ArgType>
void pushValue(lua_State* L, const osg::ref_ptr<ArgType>& arg) {
	Luna< ArgType >::push(L,arg.get(),false);
};

template <typename ArgType>
void pushValue(lua_State* L,const osg::observer_ptr<ArgType>& arg) {
	Luna< ArgType >::push(L,arg.get(),false);
};

inline void pushValue(lua_State* L, bool& arg) {
	lua_pushboolean(L,arg?1:0);
}

inline void pushValue(lua_State* L, char& arg) {
	lua_pushinteger(L,arg);
}

inline void pushValue(lua_State* L, signed char& arg) {
	lua_pushinteger(L,arg);
}

inline void pushValue(lua_State* L, unsigned char& arg) {
	lua_pushinteger(L,arg);
}

inline void pushValue(lua_State* L, short& arg) {
	lua_pushinteger(L,arg);
}

inline void pushValue(lua_State* L, unsigned short& arg) {
	lua_pushinteger(L,arg);
}

inline void pushValue(lua_State* L, long& arg) {
	lua_pushnumber(L,arg);
}

inline void pushValue(lua_State* L, int& arg) {
	lua_pushnumber(L,arg);
}

inline void pushValue(lua_State* L, unsigned long& arg) {
	lua_pushnumber(L,arg);
}

inline void pushValue(lua_State* L, unsigned int& arg) {
	lua_pushnumber(L,arg);
}

inline void pushValue(lua_State* L, long long& arg) {
	logWARN("LuaObject: pushing long long as integer.");
	lua_pushnumber(L,arg);
}

inline void pushValue(lua_State* L, unsigned long long& arg) {
	logWARN("LuaObject: pushing unsigned long long as integer.");
	lua_pushnumber(L,arg);
}

inline void pushValue(lua_State* L, float& arg) {
	lua_pushnumber(L,arg);
}

inline void pushValue(lua_State* L, double& arg) {
	lua_pushnumber(L,arg);
}

//template <>
inline void pushValue(lua_State* L, unsigned int * arg) {
	lua_pushnil(L);
	//Luna< void >::push(L,(void*)arg,false);
}

//template <>
inline void pushValue(lua_State* L, long * arg) {
	lua_pushnil(L);
	//Luna< void >::push(L,(void*)arg,false);
}

//template <>
inline void pushValue(lua_State* L, bool * arg) {
	lua_pushnil(L);
	//Luna< void >::push(L,(void*)arg,false);
}

inline void pushValue(lua_State* L, char* arg) {
	lua_pushstring(L,arg);
}

inline void pushValue(lua_State* L, const char* arg) {
	lua_pushstring(L,arg);
}

inline void pushValue(lua_State* L, const std::string& arg) {
	lua_pushlstring(L,arg.data(),arg.size());
}

template <>
inline int getValue(lua_State* L, int index) {
	return lua_tointeger(L,index);
}


/*template <>
inline char getValue(lua_State* L, int index) {
	return lua_tointeger(L,index);
}*/

template <>
inline char getValue(lua_State* L, int index) {
	return (char)lua_tointeger(L,index);
}

template <>
inline long getValue(lua_State* L, int index) {
	return lua_tointeger(L,index);
}

template <>
inline unsigned int getValue(lua_State* L, int index) {
	return (unsigned int)lua_tointeger(L,index);
}

template <>
inline unsigned short getValue(lua_State* L, int index) {
	return (unsigned short)lua_tointeger(L,index);
}

template <>
inline unsigned long getValue(lua_State* L, int index) {
	return (unsigned long)lua_tointeger(L,index);
}

template <>
inline unsigned char getValue(lua_State* L, int index) {
	return (unsigned char)lua_tointeger(L,index);
}

template <>
inline long long getValue(lua_State* L, int index) {
	return (long long)lua_tonumber(L,index);
}

template <>
inline bool getValue(lua_State* L, int index) {
	return lua_toboolean(L,index)==1;
}

template <>
inline double getValue(lua_State* L, int index) {
	return lua_tonumber(L,index);
}

template <>
inline float getValue(lua_State* L, int index) {
	return (float)lua_tonumber(L,index);
}

template <>
inline std::string getValue(lua_State* L, int index) {
	return std::string(lua_tostring(L,index));
}

template <>
inline const char* getValue(lua_State* L, int index) {
	return lua_tostring(L,index);
}

class SGTLUNA_EXPORT LuaObject : public sgt::LuaRef {
protected:
	mutable int _nargs;
	// boost::thread::id _threadId;
	// int _threadId;
	
public:
	LuaObject(lua_State* L, int index) : LuaRef(L,index) {
		THROW_IF(!pushLuaItem(),"Cannot push lua item.");

		// ensure this object is a table:
		THROW_IF(lua_type(_state,index)!=LUA_TTABLE,"Invalid non table base for luaObject, type is: "<<lua_type(_state,index));

		// remove from stack:
		lua_pop(_state,1);
		
		// Init the thread ID:
		// _threadId = boost::this_thread::get_id();
		// OpenThreads::Thread* th = OpenThreads::Thread::CurrentThread();
		//THROW_IF(!th,"Invalid current Thread");
		// _threadId = th ? th->getThreadId() : -1;
		
		reset();
	}

	inline lua_State* getState() {
		return _state;
	}

	inline void reset() const {
		_nargs = 1;
	}

	inline void incrementNArgs() {
		++_nargs;
	}

	virtual ~LuaObject() {
	};

	// Will push the function and table on the stack if found and return true in that case.
	// returns false otherwise.
	bool pushFunction(std::string name) const;

	template <typename ArgType>
	void pushArg(ArgType arg) const {
		++_nargs;
		sgt::pushValue((lua_State*)_state,arg);
	};

	template < typename ResultType>
	ResultType callFunction() const {
		return sgt::callFunction<ResultType>(*this,_state,_nargs);
	}
};

template < typename ResultType>
inline ResultType callFunction(const LuaObject& obj, lua_State* L, int nargs) {
	lua_call(L,nargs,1);
	obj.reset();

	ResultType res = sgt::getValue<ResultType>(L,-1);
	lua_pop(L,1);
	return res;
}

template <>
inline void callFunction(const LuaObject& obj, lua_State* L, int nargs) {
	lua_call(L,nargs,0);
	obj.reset();
}

};

// wrapper class is outside the sgt namespace for now.

class SGTLUNA_EXPORT luna_wrapper_base {
protected:
	sgt::LuaObject _obj;

public:
	luna_wrapper_base(lua_State* L) : _obj(L,1) {};

	inline bool pushTable() { return _obj.pushLuaItem(); };

	virtual ~luna_wrapper_base() {};
};

#endif /* LUAOBJECT_H_ */

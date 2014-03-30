#include <plug_common.h>

#include <doxmlintf.h>

// Function checkers:
inline static bool _lg_typecheck_createObjectModel(lua_State *L) {
	if( lua_gettop(L)!=0 ) return false;

	return true;
}

inline static bool _lg_typecheck_toClass(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,27352831)) ) return false;
	return true;
}

inline static bool _lg_typecheck_toFile(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,27352831)) ) return false;
	return true;
}

inline static bool _lg_typecheck_toEnum(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,88829564)) ) return false;
	return true;
}

inline static bool _lg_typecheck_toNamespace(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,27352831)) ) return false;
	return true;
}

inline static bool _lg_typecheck_toLinkText(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,94836970)) ) return false;
	return true;
}

inline static bool _lg_typecheck_toLinkRef(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,94836970)) ) return false;
	return true;
}

inline static bool _lg_typecheck_toDocText(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,2243631)) ) return false;
	return true;
}

inline static bool _lg_typecheck_toDocPara(lua_State *L) {
	if( lua_gettop(L)!=1 ) return false;

	if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,2243631)) ) return false;
	return true;
}


// Function binds:
// IDoxygen * createObjectModel()
static int _bind_createObjectModel(lua_State *L) {
	if (!_lg_typecheck_createObjectModel(L)) {
		luaL_error(L, "luna typecheck failed in IDoxygen * createObjectModel() function, expected prototype:\nIDoxygen * createObjectModel()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
	}


	IDoxygen * lret = ::createObjectModel();
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< IDoxygen >::push(L,lret,false);

	return 1;
}

// IClass * toClass(ICompound * comp)
static int _bind_toClass(lua_State *L) {
	if (!_lg_typecheck_toClass(L)) {
		luaL_error(L, "luna typecheck failed in IClass * toClass(ICompound * comp) function, expected prototype:\nIClass * toClass(ICompound * comp)\nClass arguments details:\narg 1 ID = 27352831\n\n%s",luna_dumpStack(L).c_str());
	}

	ICompound* comp=(Luna< ICompound >::check(L,1));

	IClass * lret = ::toClass(comp);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< IClass >::push(L,lret,false);

	return 1;
}

// IFile * toFile(ICompound * comp)
static int _bind_toFile(lua_State *L) {
	if (!_lg_typecheck_toFile(L)) {
		luaL_error(L, "luna typecheck failed in IFile * toFile(ICompound * comp) function, expected prototype:\nIFile * toFile(ICompound * comp)\nClass arguments details:\narg 1 ID = 27352831\n\n%s",luna_dumpStack(L).c_str());
	}

	ICompound* comp=(Luna< ICompound >::check(L,1));

	IFile * lret = ::toFile(comp);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< IFile >::push(L,lret,false);

	return 1;
}

// IEnum * toEnum(IMember * comp)
static int _bind_toEnum(lua_State *L) {
	if (!_lg_typecheck_toEnum(L)) {
		luaL_error(L, "luna typecheck failed in IEnum * toEnum(IMember * comp) function, expected prototype:\nIEnum * toEnum(IMember * comp)\nClass arguments details:\narg 1 ID = 88829564\n\n%s",luna_dumpStack(L).c_str());
	}

	IMember* comp=(Luna< IMember >::check(L,1));

	IEnum * lret = ::toEnum(comp);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< IEnum >::push(L,lret,false);

	return 1;
}

// INamespace * toNamespace(ICompound * comp)
static int _bind_toNamespace(lua_State *L) {
	if (!_lg_typecheck_toNamespace(L)) {
		luaL_error(L, "luna typecheck failed in INamespace * toNamespace(ICompound * comp) function, expected prototype:\nINamespace * toNamespace(ICompound * comp)\nClass arguments details:\narg 1 ID = 27352831\n\n%s",luna_dumpStack(L).c_str());
	}

	ICompound* comp=(Luna< ICompound >::check(L,1));

	INamespace * lret = ::toNamespace(comp);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< INamespace >::push(L,lret,false);

	return 1;
}

// ILT_Text * toLinkText(ILinkedText * ilt)
static int _bind_toLinkText(lua_State *L) {
	if (!_lg_typecheck_toLinkText(L)) {
		luaL_error(L, "luna typecheck failed in ILT_Text * toLinkText(ILinkedText * ilt) function, expected prototype:\nILT_Text * toLinkText(ILinkedText * ilt)\nClass arguments details:\narg 1 ID = 94836970\n\n%s",luna_dumpStack(L).c_str());
	}

	ILinkedText* ilt=(Luna< ILinkedText >::check(L,1));

	ILT_Text * lret = ::toLinkText(ilt);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< ILT_Text >::push(L,lret,false);

	return 1;
}

// ILT_Ref * toLinkRef(ILinkedText * ilt)
static int _bind_toLinkRef(lua_State *L) {
	if (!_lg_typecheck_toLinkRef(L)) {
		luaL_error(L, "luna typecheck failed in ILT_Ref * toLinkRef(ILinkedText * ilt) function, expected prototype:\nILT_Ref * toLinkRef(ILinkedText * ilt)\nClass arguments details:\narg 1 ID = 94836970\n\n%s",luna_dumpStack(L).c_str());
	}

	ILinkedText* ilt=(Luna< ILinkedText >::check(L,1));

	ILT_Ref * lret = ::toLinkRef(ilt);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< ILT_Ref >::push(L,lret,false);

	return 1;
}

// IDocText * toDocText(IDoc * doc)
static int _bind_toDocText(lua_State *L) {
	if (!_lg_typecheck_toDocText(L)) {
		luaL_error(L, "luna typecheck failed in IDocText * toDocText(IDoc * doc) function, expected prototype:\nIDocText * toDocText(IDoc * doc)\nClass arguments details:\narg 1 ID = 2243631\n\n%s",luna_dumpStack(L).c_str());
	}

	IDoc* doc=(Luna< IDoc >::check(L,1));

	IDocText * lret = ::toDocText(doc);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< IDocText >::push(L,lret,false);

	return 1;
}

// IDocPara * toDocPara(IDoc * doc)
static int _bind_toDocPara(lua_State *L) {
	if (!_lg_typecheck_toDocPara(L)) {
		luaL_error(L, "luna typecheck failed in IDocPara * toDocPara(IDoc * doc) function, expected prototype:\nIDocPara * toDocPara(IDoc * doc)\nClass arguments details:\narg 1 ID = 2243631\n\n%s",luna_dumpStack(L).c_str());
	}

	IDoc* doc=(Luna< IDoc >::check(L,1));

	IDocPara * lret = ::toDocPara(doc);
	if(!lret) return 0; // Do not write NULL pointers.

	Luna< IDocPara >::push(L,lret,false);

	return 1;
}


#ifdef __cplusplus
extern "C" {
#endif

void register_global_functions(lua_State* L) {
	luna_pushModule(L,"doxmlparser");
	lua_pushcfunction(L, _bind_createObjectModel); lua_setfield(L,-2,"createObjectModel");
	lua_pushcfunction(L, _bind_toClass); lua_setfield(L,-2,"toClass");
	lua_pushcfunction(L, _bind_toFile); lua_setfield(L,-2,"toFile");
	lua_pushcfunction(L, _bind_toEnum); lua_setfield(L,-2,"toEnum");
	lua_pushcfunction(L, _bind_toNamespace); lua_setfield(L,-2,"toNamespace");
	lua_pushcfunction(L, _bind_toLinkText); lua_setfield(L,-2,"toLinkText");
	lua_pushcfunction(L, _bind_toLinkRef); lua_setfield(L,-2,"toLinkRef");
	lua_pushcfunction(L, _bind_toDocText); lua_setfield(L,-2,"toDocText");
	lua_pushcfunction(L, _bind_toDocPara); lua_setfield(L,-2,"toDocPara");
	luna_popModule(L);
}

#ifdef __cplusplus
}
#endif


#include <plug_common.h>

class luna_wrapper_osgUtil_IncrementalCompileOperation_CompileList {
public:
	typedef Luna< osgUtil::IncrementalCompileOperation::CompileList > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,36919874) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgUtil::IncrementalCompileOperation::CompileList*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::IncrementalCompileOperation::CompileList* rhs =(Luna< osgUtil::IncrementalCompileOperation::CompileList >::check(L,2));
		osgUtil::IncrementalCompileOperation::CompileList* self=(Luna< osgUtil::IncrementalCompileOperation::CompileList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		lua_pushboolean(L,self==rhs?1:0);

		return 1;
	}

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::IncrementalCompileOperation::CompileList* self= (osgUtil::IncrementalCompileOperation::CompileList*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgUtil::IncrementalCompileOperation::CompileList >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,36919874) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osgUtil::IncrementalCompileOperation::CompileList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgUtil::IncrementalCompileOperation::CompileList* self=(Luna< osgUtil::IncrementalCompileOperation::CompileList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgUtil::IncrementalCompileOperation::CompileList");
		
		return luna_dynamicCast(L,converters,"osgUtil::IncrementalCompileOperation::CompileList",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgUtil::IncrementalCompileOperation::CompileList* LunaTraits< osgUtil::IncrementalCompileOperation::CompileList >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osgUtil::IncrementalCompileOperation::CompileList >::_bind_dtor(osgUtil::IncrementalCompileOperation::CompileList* obj) {
	delete obj;
}

const char LunaTraits< osgUtil::IncrementalCompileOperation::CompileList >::className[] = "IncrementalCompileOperation_CompileList";
const char LunaTraits< osgUtil::IncrementalCompileOperation::CompileList >::fullName[] = "osgUtil::IncrementalCompileOperation::CompileList";
const char LunaTraits< osgUtil::IncrementalCompileOperation::CompileList >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::IncrementalCompileOperation::CompileList >::parents[] = {0};
const int LunaTraits< osgUtil::IncrementalCompileOperation::CompileList >::hash = 36919874;
const int LunaTraits< osgUtil::IncrementalCompileOperation::CompileList >::uniqueIDs[] = {36919874,0};

luna_RegType LunaTraits< osgUtil::IncrementalCompileOperation::CompileList >::methods[] = {
	{"dynCast", &luna_wrapper_osgUtil_IncrementalCompileOperation_CompileList::_bind_dynCast},
	{"__eq", &luna_wrapper_osgUtil_IncrementalCompileOperation_CompileList::_bind___eq},
	{"fromVoid", &luna_wrapper_osgUtil_IncrementalCompileOperation_CompileList::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgUtil_IncrementalCompileOperation_CompileList::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::IncrementalCompileOperation::CompileList >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::IncrementalCompileOperation::CompileList >::enumValues[] = {
	{0,0}
};



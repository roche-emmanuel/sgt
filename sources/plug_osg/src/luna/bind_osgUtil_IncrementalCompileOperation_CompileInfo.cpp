#include <plug_common.h>

class luna_wrapper_osgUtil_IncrementalCompileOperation_CompileInfo {
public:
	typedef Luna< osgUtil::IncrementalCompileOperation::CompileInfo > luna_t;

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::IncrementalCompileOperation::CompileInfo* self= (osgUtil::IncrementalCompileOperation::CompileInfo*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgUtil::IncrementalCompileOperation::CompileInfo >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,2286263) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osg::RenderInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:

	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgUtil::IncrementalCompileOperation::CompileInfo* LunaTraits< osgUtil::IncrementalCompileOperation::CompileInfo >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osgUtil::IncrementalCompileOperation::CompileInfo >::_bind_dtor(osgUtil::IncrementalCompileOperation::CompileInfo* obj) {
	delete obj;
}

const char LunaTraits< osgUtil::IncrementalCompileOperation::CompileInfo >::className[] = "IncrementalCompileOperation_CompileInfo";
const char LunaTraits< osgUtil::IncrementalCompileOperation::CompileInfo >::fullName[] = "osgUtil::IncrementalCompileOperation::CompileInfo";
const char LunaTraits< osgUtil::IncrementalCompileOperation::CompileInfo >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::IncrementalCompileOperation::CompileInfo >::parents[] = {"osg.RenderInfo", 0};
const int LunaTraits< osgUtil::IncrementalCompileOperation::CompileInfo >::hash = 36834898;
const int LunaTraits< osgUtil::IncrementalCompileOperation::CompileInfo >::uniqueIDs[] = {2286263,0};

luna_RegType LunaTraits< osgUtil::IncrementalCompileOperation::CompileInfo >::methods[] = {
	{"fromVoid", &luna_wrapper_osgUtil_IncrementalCompileOperation_CompileInfo::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgUtil_IncrementalCompileOperation_CompileInfo::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::IncrementalCompileOperation::CompileInfo >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::IncrementalCompileOperation::CompileInfo >::enumValues[] = {
	{0,0}
};



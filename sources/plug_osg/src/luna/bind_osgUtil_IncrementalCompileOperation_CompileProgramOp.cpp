#include <plug_common.h>

#include <luna/wrappers/wrapper_osgUtil_IncrementalCompileOperation_CompileProgramOp.h>

class luna_wrapper_osgUtil_IncrementalCompileOperation_CompileProgramOp {
public:
	typedef Luna< osgUtil::IncrementalCompileOperation::CompileProgramOp > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<osg::Referenced,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
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

		osgUtil::IncrementalCompileOperation::CompileProgramOp* self= (osgUtil::IncrementalCompileOperation::CompileProgramOp*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgUtil::IncrementalCompileOperation::CompileProgramOp >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		//osgUtil::IncrementalCompileOperation::CompileProgramOp* ptr= dynamic_cast< osgUtil::IncrementalCompileOperation::CompileProgramOp* >(Luna< osg::Referenced >::check(L,1));
		osgUtil::IncrementalCompileOperation::CompileProgramOp* ptr= luna_caster< osg::Referenced, osgUtil::IncrementalCompileOperation::CompileProgramOp >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::IncrementalCompileOperation::CompileProgramOp >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgUtil::IncrementalCompileOperation::CompileProgramOp* LunaTraits< osgUtil::IncrementalCompileOperation::CompileProgramOp >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osgUtil::IncrementalCompileOperation::CompileProgramOp >::_bind_dtor(osgUtil::IncrementalCompileOperation::CompileProgramOp* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::IncrementalCompileOperation::CompileProgramOp >::className[] = "IncrementalCompileOperation_CompileProgramOp";
const char LunaTraits< osgUtil::IncrementalCompileOperation::CompileProgramOp >::fullName[] = "osgUtil::IncrementalCompileOperation::CompileProgramOp";
const char LunaTraits< osgUtil::IncrementalCompileOperation::CompileProgramOp >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::IncrementalCompileOperation::CompileProgramOp >::parents[] = {"osgUtil.IncrementalCompileOperation_CompileOp", 0};
const int LunaTraits< osgUtil::IncrementalCompileOperation::CompileProgramOp >::hash = 80639499;
const int LunaTraits< osgUtil::IncrementalCompileOperation::CompileProgramOp >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::IncrementalCompileOperation::CompileProgramOp >::methods[] = {
	{"fromVoid", &luna_wrapper_osgUtil_IncrementalCompileOperation_CompileProgramOp::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgUtil_IncrementalCompileOperation_CompileProgramOp::_bind_asVoid},
	{"getTable", &luna_wrapper_osgUtil_IncrementalCompileOperation_CompileProgramOp::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::IncrementalCompileOperation::CompileProgramOp >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_IncrementalCompileOperation_CompileProgramOp::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::IncrementalCompileOperation::CompileProgramOp >::enumValues[] = {
	{0,0}
};



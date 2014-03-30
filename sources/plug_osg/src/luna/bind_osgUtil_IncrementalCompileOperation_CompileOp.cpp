#include <plug_common.h>

#include <luna/wrappers/wrapper_osgUtil_IncrementalCompileOperation_CompileOp.h>

class luna_wrapper_osgUtil_IncrementalCompileOperation_CompileOp {
public:
	typedef Luna< osgUtil::IncrementalCompileOperation::CompileOp > luna_t;

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

		osgUtil::IncrementalCompileOperation::CompileOp* self= (osgUtil::IncrementalCompileOperation::CompileOp*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgUtil::IncrementalCompileOperation::CompileOp >::push(L,self,false);
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
		//osgUtil::IncrementalCompileOperation::CompileOp* ptr= dynamic_cast< osgUtil::IncrementalCompileOperation::CompileOp* >(Luna< osg::Referenced >::check(L,1));
		osgUtil::IncrementalCompileOperation::CompileOp* ptr= luna_caster< osg::Referenced, osgUtil::IncrementalCompileOperation::CompileOp >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::IncrementalCompileOperation::CompileOp >::push(L,ptr,false);
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

osgUtil::IncrementalCompileOperation::CompileOp* LunaTraits< osgUtil::IncrementalCompileOperation::CompileOp >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// double osgUtil::IncrementalCompileOperation::CompileOp::estimatedTimeForCompile(osgUtil::IncrementalCompileOperation::CompileInfo & compileInfo) const
	// bool osgUtil::IncrementalCompileOperation::CompileOp::compile(osgUtil::IncrementalCompileOperation::CompileInfo & compileInfo)
}

void LunaTraits< osgUtil::IncrementalCompileOperation::CompileOp >::_bind_dtor(osgUtil::IncrementalCompileOperation::CompileOp* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::IncrementalCompileOperation::CompileOp >::className[] = "IncrementalCompileOperation_CompileOp";
const char LunaTraits< osgUtil::IncrementalCompileOperation::CompileOp >::fullName[] = "osgUtil::IncrementalCompileOperation::CompileOp";
const char LunaTraits< osgUtil::IncrementalCompileOperation::CompileOp >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::IncrementalCompileOperation::CompileOp >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osgUtil::IncrementalCompileOperation::CompileOp >::hash = 74440215;
const int LunaTraits< osgUtil::IncrementalCompileOperation::CompileOp >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::IncrementalCompileOperation::CompileOp >::methods[] = {
	{"fromVoid", &luna_wrapper_osgUtil_IncrementalCompileOperation_CompileOp::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgUtil_IncrementalCompileOperation_CompileOp::_bind_asVoid},
	{"getTable", &luna_wrapper_osgUtil_IncrementalCompileOperation_CompileOp::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::IncrementalCompileOperation::CompileOp >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_IncrementalCompileOperation_CompileOp::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::IncrementalCompileOperation::CompileOp >::enumValues[] = {
	{0,0}
};



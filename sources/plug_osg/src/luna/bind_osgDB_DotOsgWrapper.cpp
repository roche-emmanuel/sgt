#include <plug_common.h>

#include <luna/wrappers/wrapper_osgDB_DotOsgWrapper.h>

class luna_wrapper_osgDB_DotOsgWrapper {
public:
	typedef Luna< osgDB::DotOsgWrapper > luna_t;

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

		osgDB::DotOsgWrapper* self= (osgDB::DotOsgWrapper*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgDB::DotOsgWrapper >::push(L,self,false);
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
		//osgDB::DotOsgWrapper* ptr= dynamic_cast< osgDB::DotOsgWrapper* >(Luna< osg::Referenced >::check(L,1));
		osgDB::DotOsgWrapper* ptr= luna_caster< osg::Referenced, osgDB::DotOsgWrapper >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgDB::DotOsgWrapper >::push(L,ptr,false);
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

osgDB::DotOsgWrapper* LunaTraits< osgDB::DotOsgWrapper >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osgDB::DotOsgWrapper >::_bind_dtor(osgDB::DotOsgWrapper* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgDB::DotOsgWrapper >::className[] = "DotOsgWrapper";
const char LunaTraits< osgDB::DotOsgWrapper >::fullName[] = "osgDB::DotOsgWrapper";
const char LunaTraits< osgDB::DotOsgWrapper >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::DotOsgWrapper >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osgDB::DotOsgWrapper >::hash = 47273893;
const int LunaTraits< osgDB::DotOsgWrapper >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgDB::DotOsgWrapper >::methods[] = {
	{"fromVoid", &luna_wrapper_osgDB_DotOsgWrapper::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgDB_DotOsgWrapper::_bind_asVoid},
	{"getTable", &luna_wrapper_osgDB_DotOsgWrapper::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::DotOsgWrapper >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgDB_DotOsgWrapper::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::DotOsgWrapper >::enumValues[] = {
	{"READ_AND_WRITE", osgDB::DotOsgWrapper::READ_AND_WRITE},
	{"READ_ONLY", osgDB::DotOsgWrapper::READ_ONLY},
	{0,0}
};



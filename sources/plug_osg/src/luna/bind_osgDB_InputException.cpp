#include <plug_common.h>

#include <luna/wrappers/wrapper_osgDB_InputException.h>

class luna_wrapper_osgDB_InputException {
public:
	typedef Luna< osgDB::InputException > luna_t;

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

		osgDB::InputException* self= (osgDB::InputException*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgDB::InputException >::push(L,self,false);
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
		//osgDB::InputException* ptr= dynamic_cast< osgDB::InputException* >(Luna< osg::Referenced >::check(L,1));
		osgDB::InputException* ptr= luna_caster< osg::Referenced, osgDB::InputException >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgDB::InputException >::push(L,ptr,false);
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

osgDB::InputException* LunaTraits< osgDB::InputException >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osgDB::InputException >::_bind_dtor(osgDB::InputException* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgDB::InputException >::className[] = "InputException";
const char LunaTraits< osgDB::InputException >::fullName[] = "osgDB::InputException";
const char LunaTraits< osgDB::InputException >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::InputException >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osgDB::InputException >::hash = 9962123;
const int LunaTraits< osgDB::InputException >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgDB::InputException >::methods[] = {
	{"fromVoid", &luna_wrapper_osgDB_InputException::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgDB_InputException::_bind_asVoid},
	{"getTable", &luna_wrapper_osgDB_InputException::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::InputException >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgDB_InputException::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::InputException >::enumValues[] = {
	{0,0}
};



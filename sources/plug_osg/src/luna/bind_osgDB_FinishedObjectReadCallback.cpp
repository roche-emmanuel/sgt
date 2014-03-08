#include <plug_common.h>

#include <luna/wrappers/wrapper_osgDB_FinishedObjectReadCallback.h>

class luna_wrapper_osgDB_FinishedObjectReadCallback {
public:
	typedef Luna< osgDB::FinishedObjectReadCallback > luna_t;

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

		osgDB::FinishedObjectReadCallback* self= (osgDB::FinishedObjectReadCallback*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgDB::FinishedObjectReadCallback >::push(L,self,false);
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
		//osgDB::FinishedObjectReadCallback* ptr= dynamic_cast< osgDB::FinishedObjectReadCallback* >(Luna< osg::Referenced >::check(L,1));
		osgDB::FinishedObjectReadCallback* ptr= luna_caster< osg::Referenced, osgDB::FinishedObjectReadCallback >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgDB::FinishedObjectReadCallback >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_objectRead(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,47918182) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgDB::FinishedObjectReadCallback::FinishedObjectReadCallback(lua_Table * data)
	static osgDB::FinishedObjectReadCallback* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::FinishedObjectReadCallback::FinishedObjectReadCallback(lua_Table * data) function, expected prototype:\nosgDB::FinishedObjectReadCallback::FinishedObjectReadCallback(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgDB_FinishedObjectReadCallback(L,NULL);
	}


	// Function binds:
	// void osgDB::FinishedObjectReadCallback::objectRead(osgDB::InputStream & is, osg::Object & obj)
	static int _bind_objectRead(lua_State *L) {
		if (!_lg_typecheck_objectRead(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::FinishedObjectReadCallback::objectRead(osgDB::InputStream & is, osg::Object & obj) function, expected prototype:\nvoid osgDB::FinishedObjectReadCallback::objectRead(osgDB::InputStream & is, osg::Object & obj)\nClass arguments details:\narg 1 ID = 47918182\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::InputStream* is_ptr=(Luna< osgDB::InputStream >::check(L,2));
		if( !is_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg is in osgDB::FinishedObjectReadCallback::objectRead function");
		}
		osgDB::InputStream & is=*is_ptr;
		osg::Object* obj_ptr=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,3));
		if( !obj_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg obj in osgDB::FinishedObjectReadCallback::objectRead function");
		}
		osg::Object & obj=*obj_ptr;

		osgDB::FinishedObjectReadCallback* self=Luna< osg::Referenced >::checkSubType< osgDB::FinishedObjectReadCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::FinishedObjectReadCallback::objectRead(osgDB::InputStream &, osg::Object &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->objectRead(is, obj);

		return 0;
	}

	// void osgDB::FinishedObjectReadCallback::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::FinishedObjectReadCallback::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgDB::FinishedObjectReadCallback::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgDB::FinishedObjectReadCallback* self=Luna< osg::Referenced >::checkSubType< osgDB::FinishedObjectReadCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::FinishedObjectReadCallback::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->FinishedObjectReadCallback::setThreadSafeRefUnref(threadSafe);

		return 0;
	}


	// Operator binds:

};

osgDB::FinishedObjectReadCallback* LunaTraits< osgDB::FinishedObjectReadCallback >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgDB_FinishedObjectReadCallback::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void osgDB::FinishedObjectReadCallback::objectRead(osgDB::InputStream & is, osg::Object & obj)
}

void LunaTraits< osgDB::FinishedObjectReadCallback >::_bind_dtor(osgDB::FinishedObjectReadCallback* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgDB::FinishedObjectReadCallback >::className[] = "FinishedObjectReadCallback";
const char LunaTraits< osgDB::FinishedObjectReadCallback >::fullName[] = "osgDB::FinishedObjectReadCallback";
const char LunaTraits< osgDB::FinishedObjectReadCallback >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::FinishedObjectReadCallback >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osgDB::FinishedObjectReadCallback >::hash = 36083873;
const int LunaTraits< osgDB::FinishedObjectReadCallback >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgDB::FinishedObjectReadCallback >::methods[] = {
	{"objectRead", &luna_wrapper_osgDB_FinishedObjectReadCallback::_bind_objectRead},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgDB_FinishedObjectReadCallback::_bind_base_setThreadSafeRefUnref},
	{"fromVoid", &luna_wrapper_osgDB_FinishedObjectReadCallback::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgDB_FinishedObjectReadCallback::_bind_asVoid},
	{"getTable", &luna_wrapper_osgDB_FinishedObjectReadCallback::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::FinishedObjectReadCallback >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgDB_FinishedObjectReadCallback::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::FinishedObjectReadCallback >::enumValues[] = {
	{0,0}
};



#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_View_Slave_UpdateSlaveCallback.h>

class luna_wrapper_osg_View_Slave_UpdateSlaveCallback {
public:
	typedef Luna< osg::View::Slave::UpdateSlaveCallback > luna_t;

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

		osg::View::Slave::UpdateSlaveCallback* self= (osg::View::Slave::UpdateSlaveCallback*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::View::Slave::UpdateSlaveCallback >::push(L,self,false);
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
		//osg::View::Slave::UpdateSlaveCallback* ptr= dynamic_cast< osg::View::Slave::UpdateSlaveCallback* >(Luna< osg::Referenced >::check(L,1));
		osg::View::Slave::UpdateSlaveCallback* ptr= luna_caster< osg::Referenced, osg::View::Slave::UpdateSlaveCallback >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::View::Slave::UpdateSlaveCallback >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_updateSlave(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,94812983) ) return false;
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
	// osg::View::Slave::UpdateSlaveCallback::UpdateSlaveCallback(lua_Table * data)
	static osg::View::Slave::UpdateSlaveCallback* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in osg::View::Slave::UpdateSlaveCallback::UpdateSlaveCallback(lua_Table * data) function, expected prototype:\nosg::View::Slave::UpdateSlaveCallback::UpdateSlaveCallback(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_View_Slave_UpdateSlaveCallback(L,NULL);
	}


	// Function binds:
	// void osg::View::Slave::UpdateSlaveCallback::updateSlave(osg::View & view, osg::View::Slave & slave)
	static int _bind_updateSlave(lua_State *L) {
		if (!_lg_typecheck_updateSlave(L)) {
			luaL_error(L, "luna typecheck failed in void osg::View::Slave::UpdateSlaveCallback::updateSlave(osg::View & view, osg::View::Slave & slave) function, expected prototype:\nvoid osg::View::Slave::UpdateSlaveCallback::updateSlave(osg::View & view, osg::View::Slave & slave)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 94812983\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::View* view_ptr=(Luna< osg::Referenced >::checkSubType< osg::View >(L,2));
		if( !view_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg view in osg::View::Slave::UpdateSlaveCallback::updateSlave function");
		}
		osg::View & view=*view_ptr;
		osg::View::Slave* slave_ptr=(Luna< osg::View::Slave >::check(L,3));
		if( !slave_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg slave in osg::View::Slave::UpdateSlaveCallback::updateSlave function");
		}
		osg::View::Slave & slave=*slave_ptr;

		osg::View::Slave::UpdateSlaveCallback* self=Luna< osg::Referenced >::checkSubType< osg::View::Slave::UpdateSlaveCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::View::Slave::UpdateSlaveCallback::updateSlave(osg::View &, osg::View::Slave &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->updateSlave(view, slave);

		return 0;
	}

	// void osg::View::Slave::UpdateSlaveCallback::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::View::Slave::UpdateSlaveCallback::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::View::Slave::UpdateSlaveCallback::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::View::Slave::UpdateSlaveCallback* self=Luna< osg::Referenced >::checkSubType< osg::View::Slave::UpdateSlaveCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::View::Slave::UpdateSlaveCallback::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->UpdateSlaveCallback::setThreadSafeRefUnref(threadSafe);

		return 0;
	}


	// Operator binds:

};

osg::View::Slave::UpdateSlaveCallback* LunaTraits< osg::View::Slave::UpdateSlaveCallback >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_View_Slave_UpdateSlaveCallback::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void osg::View::Slave::UpdateSlaveCallback::updateSlave(osg::View & view, osg::View::Slave & slave)
}

void LunaTraits< osg::View::Slave::UpdateSlaveCallback >::_bind_dtor(osg::View::Slave::UpdateSlaveCallback* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::View::Slave::UpdateSlaveCallback >::className[] = "View_Slave_UpdateSlaveCallback";
const char LunaTraits< osg::View::Slave::UpdateSlaveCallback >::fullName[] = "osg::View::Slave::UpdateSlaveCallback";
const char LunaTraits< osg::View::Slave::UpdateSlaveCallback >::moduleName[] = "osg";
const char* LunaTraits< osg::View::Slave::UpdateSlaveCallback >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osg::View::Slave::UpdateSlaveCallback >::hash = 42673855;
const int LunaTraits< osg::View::Slave::UpdateSlaveCallback >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::View::Slave::UpdateSlaveCallback >::methods[] = {
	{"updateSlave", &luna_wrapper_osg_View_Slave_UpdateSlaveCallback::_bind_updateSlave},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_View_Slave_UpdateSlaveCallback::_bind_base_setThreadSafeRefUnref},
	{"fromVoid", &luna_wrapper_osg_View_Slave_UpdateSlaveCallback::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_View_Slave_UpdateSlaveCallback::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_View_Slave_UpdateSlaveCallback::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::View::Slave::UpdateSlaveCallback >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_View_Slave_UpdateSlaveCallback::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::View::Slave::UpdateSlaveCallback >::enumValues[] = {
	{0,0}
};



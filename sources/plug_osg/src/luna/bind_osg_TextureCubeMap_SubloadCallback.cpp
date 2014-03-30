#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_TextureCubeMap_SubloadCallback.h>

class luna_wrapper_osg_TextureCubeMap_SubloadCallback {
public:
	typedef Luna< osg::TextureCubeMap::SubloadCallback > luna_t;

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

		osg::TextureCubeMap::SubloadCallback* self= (osg::TextureCubeMap::SubloadCallback*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::TextureCubeMap::SubloadCallback >::push(L,self,false);
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
		//osg::TextureCubeMap::SubloadCallback* ptr= dynamic_cast< osg::TextureCubeMap::SubloadCallback* >(Luna< osg::Referenced >::check(L,1));
		osg::TextureCubeMap::SubloadCallback* ptr= luna_caster< osg::Referenced, osg::TextureCubeMap::SubloadCallback >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::TextureCubeMap::SubloadCallback >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_load(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_subload(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
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
	// osg::TextureCubeMap::SubloadCallback::SubloadCallback(lua_Table * data)
	static osg::TextureCubeMap::SubloadCallback* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in osg::TextureCubeMap::SubloadCallback::SubloadCallback(lua_Table * data) function, expected prototype:\nosg::TextureCubeMap::SubloadCallback::SubloadCallback(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_TextureCubeMap_SubloadCallback(L,NULL);
	}


	// Function binds:
	// void osg::TextureCubeMap::SubloadCallback::load(const osg::TextureCubeMap & texture, osg::State & state) const
	static int _bind_load(lua_State *L) {
		if (!_lg_typecheck_load(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TextureCubeMap::SubloadCallback::load(const osg::TextureCubeMap & texture, osg::State & state) const function, expected prototype:\nvoid osg::TextureCubeMap::SubloadCallback::load(const osg::TextureCubeMap & texture, osg::State & state) const\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::TextureCubeMap* texture_ptr=(Luna< osg::Referenced >::checkSubType< osg::TextureCubeMap >(L,2));
		if( !texture_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg texture in osg::TextureCubeMap::SubloadCallback::load function");
		}
		const osg::TextureCubeMap & texture=*texture_ptr;
		osg::State* state_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,3));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osg::TextureCubeMap::SubloadCallback::load function");
		}
		osg::State & state=*state_ptr;

		osg::TextureCubeMap::SubloadCallback* self=Luna< osg::Referenced >::checkSubType< osg::TextureCubeMap::SubloadCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TextureCubeMap::SubloadCallback::load(const osg::TextureCubeMap &, osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->load(texture, state);

		return 0;
	}

	// void osg::TextureCubeMap::SubloadCallback::subload(const osg::TextureCubeMap & texture, osg::State & state) const
	static int _bind_subload(lua_State *L) {
		if (!_lg_typecheck_subload(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TextureCubeMap::SubloadCallback::subload(const osg::TextureCubeMap & texture, osg::State & state) const function, expected prototype:\nvoid osg::TextureCubeMap::SubloadCallback::subload(const osg::TextureCubeMap & texture, osg::State & state) const\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::TextureCubeMap* texture_ptr=(Luna< osg::Referenced >::checkSubType< osg::TextureCubeMap >(L,2));
		if( !texture_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg texture in osg::TextureCubeMap::SubloadCallback::subload function");
		}
		const osg::TextureCubeMap & texture=*texture_ptr;
		osg::State* state_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,3));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osg::TextureCubeMap::SubloadCallback::subload function");
		}
		osg::State & state=*state_ptr;

		osg::TextureCubeMap::SubloadCallback* self=Luna< osg::Referenced >::checkSubType< osg::TextureCubeMap::SubloadCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TextureCubeMap::SubloadCallback::subload(const osg::TextureCubeMap &, osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->subload(texture, state);

		return 0;
	}

	// void osg::TextureCubeMap::SubloadCallback::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TextureCubeMap::SubloadCallback::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::TextureCubeMap::SubloadCallback::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::TextureCubeMap::SubloadCallback* self=Luna< osg::Referenced >::checkSubType< osg::TextureCubeMap::SubloadCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TextureCubeMap::SubloadCallback::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SubloadCallback::setThreadSafeRefUnref(threadSafe);

		return 0;
	}


	// Operator binds:

};

osg::TextureCubeMap::SubloadCallback* LunaTraits< osg::TextureCubeMap::SubloadCallback >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_TextureCubeMap_SubloadCallback::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void osg::TextureCubeMap::SubloadCallback::load(const osg::TextureCubeMap & texture, osg::State & state) const
	// void osg::TextureCubeMap::SubloadCallback::subload(const osg::TextureCubeMap & texture, osg::State & state) const
}

void LunaTraits< osg::TextureCubeMap::SubloadCallback >::_bind_dtor(osg::TextureCubeMap::SubloadCallback* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::TextureCubeMap::SubloadCallback >::className[] = "TextureCubeMap_SubloadCallback";
const char LunaTraits< osg::TextureCubeMap::SubloadCallback >::fullName[] = "osg::TextureCubeMap::SubloadCallback";
const char LunaTraits< osg::TextureCubeMap::SubloadCallback >::moduleName[] = "osg";
const char* LunaTraits< osg::TextureCubeMap::SubloadCallback >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osg::TextureCubeMap::SubloadCallback >::hash = 8213071;
const int LunaTraits< osg::TextureCubeMap::SubloadCallback >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::TextureCubeMap::SubloadCallback >::methods[] = {
	{"load", &luna_wrapper_osg_TextureCubeMap_SubloadCallback::_bind_load},
	{"subload", &luna_wrapper_osg_TextureCubeMap_SubloadCallback::_bind_subload},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_TextureCubeMap_SubloadCallback::_bind_base_setThreadSafeRefUnref},
	{"fromVoid", &luna_wrapper_osg_TextureCubeMap_SubloadCallback::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_TextureCubeMap_SubloadCallback::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_TextureCubeMap_SubloadCallback::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::TextureCubeMap::SubloadCallback >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_TextureCubeMap_SubloadCallback::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::TextureCubeMap::SubloadCallback >::enumValues[] = {
	{0,0}
};



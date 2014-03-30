#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_TextureRectangle_SubloadCallback.h>

class luna_wrapper_osg_TextureRectangle_SubloadCallback {
public:
	typedef Luna< osg::TextureRectangle::SubloadCallback > luna_t;

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

		osg::TextureRectangle::SubloadCallback* self= (osg::TextureRectangle::SubloadCallback*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::TextureRectangle::SubloadCallback >::push(L,self,false);
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
		//osg::TextureRectangle::SubloadCallback* ptr= dynamic_cast< osg::TextureRectangle::SubloadCallback* >(Luna< osg::Referenced >::check(L,1));
		osg::TextureRectangle::SubloadCallback* ptr= luna_caster< osg::Referenced, osg::TextureRectangle::SubloadCallback >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::TextureRectangle::SubloadCallback >::push(L,ptr,false);
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
	// osg::TextureRectangle::SubloadCallback::SubloadCallback(lua_Table * data)
	static osg::TextureRectangle::SubloadCallback* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in osg::TextureRectangle::SubloadCallback::SubloadCallback(lua_Table * data) function, expected prototype:\nosg::TextureRectangle::SubloadCallback::SubloadCallback(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_TextureRectangle_SubloadCallback(L,NULL);
	}


	// Function binds:
	// void osg::TextureRectangle::SubloadCallback::load(const osg::TextureRectangle & arg1, osg::State & arg2) const
	static int _bind_load(lua_State *L) {
		if (!_lg_typecheck_load(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TextureRectangle::SubloadCallback::load(const osg::TextureRectangle & arg1, osg::State & arg2) const function, expected prototype:\nvoid osg::TextureRectangle::SubloadCallback::load(const osg::TextureRectangle & arg1, osg::State & arg2) const\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::TextureRectangle* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::TextureRectangle >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::TextureRectangle::SubloadCallback::load function");
		}
		const osg::TextureRectangle & _arg1=*_arg1_ptr;
		osg::State* _arg2_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osg::TextureRectangle::SubloadCallback::load function");
		}
		osg::State & _arg2=*_arg2_ptr;

		osg::TextureRectangle::SubloadCallback* self=Luna< osg::Referenced >::checkSubType< osg::TextureRectangle::SubloadCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TextureRectangle::SubloadCallback::load(const osg::TextureRectangle &, osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->load(_arg1, _arg2);

		return 0;
	}

	// void osg::TextureRectangle::SubloadCallback::subload(const osg::TextureRectangle & arg1, osg::State & arg2) const
	static int _bind_subload(lua_State *L) {
		if (!_lg_typecheck_subload(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TextureRectangle::SubloadCallback::subload(const osg::TextureRectangle & arg1, osg::State & arg2) const function, expected prototype:\nvoid osg::TextureRectangle::SubloadCallback::subload(const osg::TextureRectangle & arg1, osg::State & arg2) const\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::TextureRectangle* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::TextureRectangle >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::TextureRectangle::SubloadCallback::subload function");
		}
		const osg::TextureRectangle & _arg1=*_arg1_ptr;
		osg::State* _arg2_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osg::TextureRectangle::SubloadCallback::subload function");
		}
		osg::State & _arg2=*_arg2_ptr;

		osg::TextureRectangle::SubloadCallback* self=Luna< osg::Referenced >::checkSubType< osg::TextureRectangle::SubloadCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TextureRectangle::SubloadCallback::subload(const osg::TextureRectangle &, osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->subload(_arg1, _arg2);

		return 0;
	}

	// void osg::TextureRectangle::SubloadCallback::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TextureRectangle::SubloadCallback::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::TextureRectangle::SubloadCallback::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::TextureRectangle::SubloadCallback* self=Luna< osg::Referenced >::checkSubType< osg::TextureRectangle::SubloadCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TextureRectangle::SubloadCallback::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SubloadCallback::setThreadSafeRefUnref(threadSafe);

		return 0;
	}


	// Operator binds:

};

osg::TextureRectangle::SubloadCallback* LunaTraits< osg::TextureRectangle::SubloadCallback >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_TextureRectangle_SubloadCallback::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void osg::TextureRectangle::SubloadCallback::load(const osg::TextureRectangle & arg1, osg::State & arg2) const
	// void osg::TextureRectangle::SubloadCallback::subload(const osg::TextureRectangle & arg1, osg::State & arg2) const
}

void LunaTraits< osg::TextureRectangle::SubloadCallback >::_bind_dtor(osg::TextureRectangle::SubloadCallback* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::TextureRectangle::SubloadCallback >::className[] = "TextureRectangle_SubloadCallback";
const char LunaTraits< osg::TextureRectangle::SubloadCallback >::fullName[] = "osg::TextureRectangle::SubloadCallback";
const char LunaTraits< osg::TextureRectangle::SubloadCallback >::moduleName[] = "osg";
const char* LunaTraits< osg::TextureRectangle::SubloadCallback >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osg::TextureRectangle::SubloadCallback >::hash = 97173178;
const int LunaTraits< osg::TextureRectangle::SubloadCallback >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::TextureRectangle::SubloadCallback >::methods[] = {
	{"load", &luna_wrapper_osg_TextureRectangle_SubloadCallback::_bind_load},
	{"subload", &luna_wrapper_osg_TextureRectangle_SubloadCallback::_bind_subload},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_TextureRectangle_SubloadCallback::_bind_base_setThreadSafeRefUnref},
	{"fromVoid", &luna_wrapper_osg_TextureRectangle_SubloadCallback::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_TextureRectangle_SubloadCallback::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_TextureRectangle_SubloadCallback::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::TextureRectangle::SubloadCallback >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_TextureRectangle_SubloadCallback::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::TextureRectangle::SubloadCallback >::enumValues[] = {
	{0,0}
};



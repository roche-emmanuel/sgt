#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_Image_DimensionsChangedCallback.h>

class luna_wrapper_osg_Image_DimensionsChangedCallback {
public:
	typedef Luna< osg::Image::DimensionsChangedCallback > luna_t;

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

		osg::Image::DimensionsChangedCallback* self= (osg::Image::DimensionsChangedCallback*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::Image::DimensionsChangedCallback >::push(L,self,false);
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
		//osg::Image::DimensionsChangedCallback* ptr= dynamic_cast< osg::Image::DimensionsChangedCallback* >(Luna< osg::Referenced >::check(L,1));
		osg::Image::DimensionsChangedCallback* ptr= luna_caster< osg::Referenced, osg::Image::DimensionsChangedCallback >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::Image::DimensionsChangedCallback >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck_op_call(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}


	// Constructor binds:
	// osg::Image::DimensionsChangedCallback::DimensionsChangedCallback(lua_Table * data)
	static osg::Image::DimensionsChangedCallback* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in osg::Image::DimensionsChangedCallback::DimensionsChangedCallback(lua_Table * data) function, expected prototype:\nosg::Image::DimensionsChangedCallback::DimensionsChangedCallback(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_Image_DimensionsChangedCallback(L,NULL);
	}


	// Function binds:
	// void osg::Image::DimensionsChangedCallback::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Image::DimensionsChangedCallback::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::Image::DimensionsChangedCallback::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::Image::DimensionsChangedCallback* self=Luna< osg::Referenced >::checkSubType< osg::Image::DimensionsChangedCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Image::DimensionsChangedCallback::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DimensionsChangedCallback::setThreadSafeRefUnref(threadSafe);

		return 0;
	}


	// Operator binds:
	// void osg::Image::DimensionsChangedCallback::operator()(osg::Image * image)
	static int _bind_op_call(lua_State *L) {
		if (!_lg_typecheck_op_call(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Image::DimensionsChangedCallback::operator()(osg::Image * image) function, expected prototype:\nvoid osg::Image::DimensionsChangedCallback::operator()(osg::Image * image)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Image* image=(Luna< osg::Referenced >::checkSubType< osg::Image >(L,2));

		osg::Image::DimensionsChangedCallback* self=Luna< osg::Referenced >::checkSubType< osg::Image::DimensionsChangedCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Image::DimensionsChangedCallback::operator()(osg::Image *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->operator()(image);

		return 0;
	}


};

osg::Image::DimensionsChangedCallback* LunaTraits< osg::Image::DimensionsChangedCallback >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Image_DimensionsChangedCallback::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void osg::Image::DimensionsChangedCallback::operator()(osg::Image * image)
}

void LunaTraits< osg::Image::DimensionsChangedCallback >::_bind_dtor(osg::Image::DimensionsChangedCallback* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::Image::DimensionsChangedCallback >::className[] = "Image_DimensionsChangedCallback";
const char LunaTraits< osg::Image::DimensionsChangedCallback >::fullName[] = "osg::Image::DimensionsChangedCallback";
const char LunaTraits< osg::Image::DimensionsChangedCallback >::moduleName[] = "osg";
const char* LunaTraits< osg::Image::DimensionsChangedCallback >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osg::Image::DimensionsChangedCallback >::hash = 83757280;
const int LunaTraits< osg::Image::DimensionsChangedCallback >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::Image::DimensionsChangedCallback >::methods[] = {
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_Image_DimensionsChangedCallback::_bind_base_setThreadSafeRefUnref},
	{"op_call", &luna_wrapper_osg_Image_DimensionsChangedCallback::_bind_op_call},
	{"fromVoid", &luna_wrapper_osg_Image_DimensionsChangedCallback::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_Image_DimensionsChangedCallback::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_Image_DimensionsChangedCallback::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Image::DimensionsChangedCallback >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_Image_DimensionsChangedCallback::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Image::DimensionsChangedCallback >::enumValues[] = {
	{0,0}
};



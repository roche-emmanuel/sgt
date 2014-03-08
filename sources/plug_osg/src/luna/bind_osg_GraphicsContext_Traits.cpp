#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_GraphicsContext_Traits.h>

class luna_wrapper_osg_GraphicsContext_Traits {
public:
	typedef Luna< osg::GraphicsContext::Traits > luna_t;

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

		osg::GraphicsContext::Traits* self= (osg::GraphicsContext::Traits*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::GraphicsContext::Traits >::push(L,self,false);
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
		//osg::GraphicsContext::Traits* ptr= dynamic_cast< osg::GraphicsContext::Traits* >(Luna< osg::Referenced >::check(L,1));
		osg::GraphicsContext::Traits* ptr= luna_caster< osg::Referenced, osg::GraphicsContext::Traits >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::GraphicsContext::Traits >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		if( luatop>0 && (lua_isnil(L,1)==0 && !(Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,1)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,2)) ) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getContextVersion(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getX(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getY(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getWindowName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getWindowDecoration(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSupportsResize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRed(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getBlue(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getGreen(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAlpha(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDepth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getStencil(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSampleBuffers(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSamples(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPbuffer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getQuadBufferStereo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDoubleBuffer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTarget(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFormat(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLevel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFace(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMipMapGeneration(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getVsync(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSwapGroupEnabled(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSwapGroup(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSwapBarrier(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUseMultiThreadedOpenGLEngine(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUseCursor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getGlContextVersion(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getGlContextFlags(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getGlContextProfileMask(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSharedContext(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getInheritedWindowData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSetInheritedWindowPixelFormat(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getOverrideRedirect(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSwapMethod(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setX(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setY(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setWidth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setHeight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setWindowName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setWindowDecoration(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSupportsResize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRed(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setBlue(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setGreen(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAlpha(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDepth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setStencil(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSampleBuffers(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSamples(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPbuffer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setQuadBufferStereo(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDoubleBuffer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTarget(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFormat(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLevel(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFace(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMipMapGeneration(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setVsync(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSwapGroupEnabled(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSwapGroup(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSwapBarrier(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUseMultiThreadedOpenGLEngine(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUseCursor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setGlContextVersion(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setGlContextFlags(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setGlContextProfileMask(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSharedContext(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,3930443) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setInheritedWindowData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,84922662) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSetInheritedWindowPixelFormat(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setOverrideRedirect(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSwapMethod(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
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
	// osg::GraphicsContext::Traits::Traits(osg::DisplaySettings * ds = 0)
	static osg::GraphicsContext::Traits* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::GraphicsContext::Traits::Traits(osg::DisplaySettings * ds = 0) function, expected prototype:\nosg::GraphicsContext::Traits::Traits(osg::DisplaySettings * ds = 0)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::DisplaySettings* ds=luatop>0 ? (Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,1)) : (osg::DisplaySettings*)0;

		return new osg::GraphicsContext::Traits(ds);
	}

	// osg::GraphicsContext::Traits::Traits(lua_Table * data, osg::DisplaySettings * ds = 0)
	static osg::GraphicsContext::Traits* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::GraphicsContext::Traits::Traits(lua_Table * data, osg::DisplaySettings * ds = 0) function, expected prototype:\nosg::GraphicsContext::Traits::Traits(lua_Table * data, osg::DisplaySettings * ds = 0)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::DisplaySettings* ds=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::DisplaySettings >(L,2)) : (osg::DisplaySettings*)0;

		return new wrapper_osg_GraphicsContext_Traits(L,NULL, ds);
	}

	// Overload binder for osg::GraphicsContext::Traits::Traits
	static osg::GraphicsContext::Traits* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Traits, cannot match any of the overloads for function Traits:\n  Traits(osg::DisplaySettings *)\n  Traits(lua_Table *, osg::DisplaySettings *)\n");
		return NULL;
	}


	// Function binds:
	// bool osg::GraphicsContext::Traits::getContextVersion(unsigned int & major, unsigned int & minor) const
	static int _bind_getContextVersion(lua_State *L) {
		if (!_lg_typecheck_getContextVersion(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::GraphicsContext::Traits::getContextVersion(unsigned int & major, unsigned int & minor) const function, expected prototype:\nbool osg::GraphicsContext::Traits::getContextVersion(unsigned int & major, unsigned int & minor) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int major=(unsigned int)lua_tointeger(L,2);
		unsigned int minor=(unsigned int)lua_tointeger(L,3);

		osg::GraphicsContext::Traits* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext::Traits >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::GraphicsContext::Traits::getContextVersion(unsigned int &, unsigned int &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getContextVersion(major, minor);
		lua_pushboolean(L,lret?1:0);

		lua_pushnumber(L,major);
		lua_pushnumber(L,minor);
		return 3;
	}

	// int osg::GraphicsContext::Traits::x()
	static int _bind_getX(lua_State *L) {
		if (!_lg_typecheck_getX(L)) {
			luaL_error(L, "luna typecheck failed in int osg::GraphicsContext::Traits::x() function, expected prototype:\nint osg::GraphicsContext::Traits::x()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GraphicsContext::Traits* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext::Traits >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::GraphicsContext::Traits::x(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->x;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::GraphicsContext::Traits::y()
	static int _bind_getY(lua_State *L) {
		if (!_lg_typecheck_getY(L)) {
			luaL_error(L, "luna typecheck failed in int osg::GraphicsContext::Traits::y() function, expected prototype:\nint osg::GraphicsContext::Traits::y()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GraphicsContext::Traits* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext::Traits >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::GraphicsContext::Traits::y(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->y;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::GraphicsContext::Traits::width()
	static int _bind_getWidth(lua_State *L) {
		if (!_lg_typecheck_getWidth(L)) {
			luaL_error(L, "luna typecheck failed in int osg::GraphicsContext::Traits::width() function, expected prototype:\nint osg::GraphicsContext::Traits::width()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GraphicsContext::Traits* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext::Traits >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::GraphicsContext::Traits::width(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->width;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::GraphicsContext::Traits::height()
	static int _bind_getHeight(lua_State *L) {
		if (!_lg_typecheck_getHeight(L)) {
			luaL_error(L, "luna typecheck failed in int osg::GraphicsContext::Traits::height() function, expected prototype:\nint osg::GraphicsContext::Traits::height()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GraphicsContext::Traits* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext::Traits >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::GraphicsContext::Traits::height(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->height;
		lua_pushnumber(L,lret);

		return 1;
	}

	// std::string osg::GraphicsContext::Traits::windowName()
	static int _bind_getWindowName(lua_State *L) {
		if (!_lg_typecheck_getWindowName(L)) {
			luaL_error(L, "luna typecheck failed in std::string osg::GraphicsContext::Traits::windowName() function, expected prototype:\nstd::string osg::GraphicsContext::Traits::windowName()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GraphicsContext::Traits* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext::Traits >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call std::string osg::GraphicsContext::Traits::windowName(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		std::string lret = self->windowName;
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool osg::GraphicsContext::Traits::windowDecoration()
	static int _bind_getWindowDecoration(lua_State *L) {
		if (!_lg_typecheck_getWindowDecoration(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::GraphicsContext::Traits::windowDecoration() function, expected prototype:\nbool osg::GraphicsContext::Traits::windowDecoration()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GraphicsContext::Traits* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext::Traits >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::GraphicsContext::Traits::windowDecoration(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->windowDecoration;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::GraphicsContext::Traits::supportsResize()
	static int _bind_getSupportsResize(lua_State *L) {
		if (!_lg_typecheck_getSupportsResize(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::GraphicsContext::Traits::supportsResize() function, expected prototype:\nbool osg::GraphicsContext::Traits::supportsResize()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GraphicsContext::Traits* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext::Traits >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::GraphicsContext::Traits::supportsResize(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->supportsResize;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// unsigned int osg::GraphicsContext::Traits::red()
	static int _bind_getRed(lua_State *L) {
		if (!_lg_typecheck_getRed(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::GraphicsContext::Traits::red() function, expected prototype:\nunsigned int osg::GraphicsContext::Traits::red()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GraphicsContext::Traits* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext::Traits >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::GraphicsContext::Traits::red(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->red;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::GraphicsContext::Traits::blue()
	static int _bind_getBlue(lua_State *L) {
		if (!_lg_typecheck_getBlue(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::GraphicsContext::Traits::blue() function, expected prototype:\nunsigned int osg::GraphicsContext::Traits::blue()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GraphicsContext::Traits* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext::Traits >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::GraphicsContext::Traits::blue(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->blue;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::GraphicsContext::Traits::green()
	static int _bind_getGreen(lua_State *L) {
		if (!_lg_typecheck_getGreen(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::GraphicsContext::Traits::green() function, expected prototype:\nunsigned int osg::GraphicsContext::Traits::green()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GraphicsContext::Traits* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext::Traits >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::GraphicsContext::Traits::green(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->green;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::GraphicsContext::Traits::alpha()
	static int _bind_getAlpha(lua_State *L) {
		if (!_lg_typecheck_getAlpha(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::GraphicsContext::Traits::alpha() function, expected prototype:\nunsigned int osg::GraphicsContext::Traits::alpha()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GraphicsContext::Traits* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext::Traits >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::GraphicsContext::Traits::alpha(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->alpha;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::GraphicsContext::Traits::depth()
	static int _bind_getDepth(lua_State *L) {
		if (!_lg_typecheck_getDepth(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::GraphicsContext::Traits::depth() function, expected prototype:\nunsigned int osg::GraphicsContext::Traits::depth()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GraphicsContext::Traits* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext::Traits >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::GraphicsContext::Traits::depth(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->depth;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::GraphicsContext::Traits::stencil()
	static int _bind_getStencil(lua_State *L) {
		if (!_lg_typecheck_getStencil(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::GraphicsContext::Traits::stencil() function, expected prototype:\nunsigned int osg::GraphicsContext::Traits::stencil()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GraphicsContext::Traits* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext::Traits >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::GraphicsContext::Traits::stencil(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->stencil;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::GraphicsContext::Traits::sampleBuffers()
	static int _bind_getSampleBuffers(lua_State *L) {
		if (!_lg_typecheck_getSampleBuffers(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::GraphicsContext::Traits::sampleBuffers() function, expected prototype:\nunsigned int osg::GraphicsContext::Traits::sampleBuffers()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GraphicsContext::Traits* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext::Traits >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::GraphicsContext::Traits::sampleBuffers(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->sampleBuffers;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::GraphicsContext::Traits::samples()
	static int _bind_getSamples(lua_State *L) {
		if (!_lg_typecheck_getSamples(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::GraphicsContext::Traits::samples() function, expected prototype:\nunsigned int osg::GraphicsContext::Traits::samples()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GraphicsContext::Traits* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext::Traits >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::GraphicsContext::Traits::samples(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->samples;
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::GraphicsContext::Traits::pbuffer()
	static int _bind_getPbuffer(lua_State *L) {
		if (!_lg_typecheck_getPbuffer(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::GraphicsContext::Traits::pbuffer() function, expected prototype:\nbool osg::GraphicsContext::Traits::pbuffer()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GraphicsContext::Traits* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext::Traits >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::GraphicsContext::Traits::pbuffer(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->pbuffer;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::GraphicsContext::Traits::quadBufferStereo()
	static int _bind_getQuadBufferStereo(lua_State *L) {
		if (!_lg_typecheck_getQuadBufferStereo(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::GraphicsContext::Traits::quadBufferStereo() function, expected prototype:\nbool osg::GraphicsContext::Traits::quadBufferStereo()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GraphicsContext::Traits* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext::Traits >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::GraphicsContext::Traits::quadBufferStereo(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->quadBufferStereo;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::GraphicsContext::Traits::doubleBuffer()
	static int _bind_getDoubleBuffer(lua_State *L) {
		if (!_lg_typecheck_getDoubleBuffer(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::GraphicsContext::Traits::doubleBuffer() function, expected prototype:\nbool osg::GraphicsContext::Traits::doubleBuffer()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GraphicsContext::Traits* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext::Traits >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::GraphicsContext::Traits::doubleBuffer(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->doubleBuffer;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// unsigned int osg::GraphicsContext::Traits::target()
	static int _bind_getTarget(lua_State *L) {
		if (!_lg_typecheck_getTarget(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::GraphicsContext::Traits::target() function, expected prototype:\nunsigned int osg::GraphicsContext::Traits::target()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GraphicsContext::Traits* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext::Traits >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::GraphicsContext::Traits::target(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->target;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::GraphicsContext::Traits::format()
	static int _bind_getFormat(lua_State *L) {
		if (!_lg_typecheck_getFormat(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::GraphicsContext::Traits::format() function, expected prototype:\nunsigned int osg::GraphicsContext::Traits::format()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GraphicsContext::Traits* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext::Traits >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::GraphicsContext::Traits::format(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->format;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::GraphicsContext::Traits::level()
	static int _bind_getLevel(lua_State *L) {
		if (!_lg_typecheck_getLevel(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::GraphicsContext::Traits::level() function, expected prototype:\nunsigned int osg::GraphicsContext::Traits::level()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GraphicsContext::Traits* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext::Traits >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::GraphicsContext::Traits::level(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->level;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::GraphicsContext::Traits::face()
	static int _bind_getFace(lua_State *L) {
		if (!_lg_typecheck_getFace(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::GraphicsContext::Traits::face() function, expected prototype:\nunsigned int osg::GraphicsContext::Traits::face()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GraphicsContext::Traits* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext::Traits >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::GraphicsContext::Traits::face(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->face;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::GraphicsContext::Traits::mipMapGeneration()
	static int _bind_getMipMapGeneration(lua_State *L) {
		if (!_lg_typecheck_getMipMapGeneration(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::GraphicsContext::Traits::mipMapGeneration() function, expected prototype:\nunsigned int osg::GraphicsContext::Traits::mipMapGeneration()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GraphicsContext::Traits* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext::Traits >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::GraphicsContext::Traits::mipMapGeneration(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->mipMapGeneration;
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::GraphicsContext::Traits::vsync()
	static int _bind_getVsync(lua_State *L) {
		if (!_lg_typecheck_getVsync(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::GraphicsContext::Traits::vsync() function, expected prototype:\nbool osg::GraphicsContext::Traits::vsync()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GraphicsContext::Traits* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext::Traits >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::GraphicsContext::Traits::vsync(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->vsync;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::GraphicsContext::Traits::swapGroupEnabled()
	static int _bind_getSwapGroupEnabled(lua_State *L) {
		if (!_lg_typecheck_getSwapGroupEnabled(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::GraphicsContext::Traits::swapGroupEnabled() function, expected prototype:\nbool osg::GraphicsContext::Traits::swapGroupEnabled()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GraphicsContext::Traits* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext::Traits >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::GraphicsContext::Traits::swapGroupEnabled(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->swapGroupEnabled;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// unsigned int osg::GraphicsContext::Traits::swapGroup()
	static int _bind_getSwapGroup(lua_State *L) {
		if (!_lg_typecheck_getSwapGroup(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::GraphicsContext::Traits::swapGroup() function, expected prototype:\nunsigned int osg::GraphicsContext::Traits::swapGroup()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GraphicsContext::Traits* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext::Traits >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::GraphicsContext::Traits::swapGroup(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->swapGroup;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::GraphicsContext::Traits::swapBarrier()
	static int _bind_getSwapBarrier(lua_State *L) {
		if (!_lg_typecheck_getSwapBarrier(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::GraphicsContext::Traits::swapBarrier() function, expected prototype:\nunsigned int osg::GraphicsContext::Traits::swapBarrier()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GraphicsContext::Traits* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext::Traits >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::GraphicsContext::Traits::swapBarrier(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->swapBarrier;
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::GraphicsContext::Traits::useMultiThreadedOpenGLEngine()
	static int _bind_getUseMultiThreadedOpenGLEngine(lua_State *L) {
		if (!_lg_typecheck_getUseMultiThreadedOpenGLEngine(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::GraphicsContext::Traits::useMultiThreadedOpenGLEngine() function, expected prototype:\nbool osg::GraphicsContext::Traits::useMultiThreadedOpenGLEngine()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GraphicsContext::Traits* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext::Traits >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::GraphicsContext::Traits::useMultiThreadedOpenGLEngine(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->useMultiThreadedOpenGLEngine;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::GraphicsContext::Traits::useCursor()
	static int _bind_getUseCursor(lua_State *L) {
		if (!_lg_typecheck_getUseCursor(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::GraphicsContext::Traits::useCursor() function, expected prototype:\nbool osg::GraphicsContext::Traits::useCursor()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GraphicsContext::Traits* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext::Traits >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::GraphicsContext::Traits::useCursor(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->useCursor;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// std::string osg::GraphicsContext::Traits::glContextVersion()
	static int _bind_getGlContextVersion(lua_State *L) {
		if (!_lg_typecheck_getGlContextVersion(L)) {
			luaL_error(L, "luna typecheck failed in std::string osg::GraphicsContext::Traits::glContextVersion() function, expected prototype:\nstd::string osg::GraphicsContext::Traits::glContextVersion()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GraphicsContext::Traits* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext::Traits >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call std::string osg::GraphicsContext::Traits::glContextVersion(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		std::string lret = self->glContextVersion;
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// unsigned int osg::GraphicsContext::Traits::glContextFlags()
	static int _bind_getGlContextFlags(lua_State *L) {
		if (!_lg_typecheck_getGlContextFlags(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::GraphicsContext::Traits::glContextFlags() function, expected prototype:\nunsigned int osg::GraphicsContext::Traits::glContextFlags()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GraphicsContext::Traits* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext::Traits >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::GraphicsContext::Traits::glContextFlags(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->glContextFlags;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::GraphicsContext::Traits::glContextProfileMask()
	static int _bind_getGlContextProfileMask(lua_State *L) {
		if (!_lg_typecheck_getGlContextProfileMask(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::GraphicsContext::Traits::glContextProfileMask() function, expected prototype:\nunsigned int osg::GraphicsContext::Traits::glContextProfileMask()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GraphicsContext::Traits* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext::Traits >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::GraphicsContext::Traits::glContextProfileMask(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->glContextProfileMask;
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::observer_ptr< osg::GraphicsContext > osg::GraphicsContext::Traits::sharedContext()
	static int _bind_getSharedContext(lua_State *L) {
		if (!_lg_typecheck_getSharedContext(L)) {
			luaL_error(L, "luna typecheck failed in osg::observer_ptr< osg::GraphicsContext > osg::GraphicsContext::Traits::sharedContext() function, expected prototype:\nosg::observer_ptr< osg::GraphicsContext > osg::GraphicsContext::Traits::sharedContext()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GraphicsContext::Traits* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext::Traits >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::observer_ptr< osg::GraphicsContext > osg::GraphicsContext::Traits::sharedContext(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::observer_ptr< osg::GraphicsContext > lret = self->sharedContext;
		Luna< osg::GraphicsContext >::push(L,lret.get(),false);

		return 1;
	}

	// osg::ref_ptr< osg::Referenced > osg::GraphicsContext::Traits::inheritedWindowData()
	static int _bind_getInheritedWindowData(lua_State *L) {
		if (!_lg_typecheck_getInheritedWindowData(L)) {
			luaL_error(L, "luna typecheck failed in osg::ref_ptr< osg::Referenced > osg::GraphicsContext::Traits::inheritedWindowData() function, expected prototype:\nosg::ref_ptr< osg::Referenced > osg::GraphicsContext::Traits::inheritedWindowData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GraphicsContext::Traits* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext::Traits >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::ref_ptr< osg::Referenced > osg::GraphicsContext::Traits::inheritedWindowData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::ref_ptr< osg::Referenced > lret = self->inheritedWindowData;
		Luna< osg::Referenced >::push(L,lret.get(),false);

		return 1;
	}

	// bool osg::GraphicsContext::Traits::setInheritedWindowPixelFormat()
	static int _bind_getSetInheritedWindowPixelFormat(lua_State *L) {
		if (!_lg_typecheck_getSetInheritedWindowPixelFormat(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::GraphicsContext::Traits::setInheritedWindowPixelFormat() function, expected prototype:\nbool osg::GraphicsContext::Traits::setInheritedWindowPixelFormat()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GraphicsContext::Traits* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext::Traits >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::GraphicsContext::Traits::setInheritedWindowPixelFormat(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->setInheritedWindowPixelFormat;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::GraphicsContext::Traits::overrideRedirect()
	static int _bind_getOverrideRedirect(lua_State *L) {
		if (!_lg_typecheck_getOverrideRedirect(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::GraphicsContext::Traits::overrideRedirect() function, expected prototype:\nbool osg::GraphicsContext::Traits::overrideRedirect()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GraphicsContext::Traits* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext::Traits >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::GraphicsContext::Traits::overrideRedirect(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->overrideRedirect;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// osg::DisplaySettings::SwapMethod osg::GraphicsContext::Traits::swapMethod()
	static int _bind_getSwapMethod(lua_State *L) {
		if (!_lg_typecheck_getSwapMethod(L)) {
			luaL_error(L, "luna typecheck failed in osg::DisplaySettings::SwapMethod osg::GraphicsContext::Traits::swapMethod() function, expected prototype:\nosg::DisplaySettings::SwapMethod osg::GraphicsContext::Traits::swapMethod()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GraphicsContext::Traits* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext::Traits >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::DisplaySettings::SwapMethod osg::GraphicsContext::Traits::swapMethod(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::DisplaySettings::SwapMethod lret = self->swapMethod;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::GraphicsContext::Traits::x(int value)
	static int _bind_setX(lua_State *L) {
		if (!_lg_typecheck_setX(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::Traits::x(int value) function, expected prototype:\nvoid osg::GraphicsContext::Traits::x(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		osg::GraphicsContext::Traits* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext::Traits >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::Traits::x(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->x = value;

		return 0;
	}

	// void osg::GraphicsContext::Traits::y(int value)
	static int _bind_setY(lua_State *L) {
		if (!_lg_typecheck_setY(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::Traits::y(int value) function, expected prototype:\nvoid osg::GraphicsContext::Traits::y(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		osg::GraphicsContext::Traits* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext::Traits >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::Traits::y(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->y = value;

		return 0;
	}

	// void osg::GraphicsContext::Traits::width(int value)
	static int _bind_setWidth(lua_State *L) {
		if (!_lg_typecheck_setWidth(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::Traits::width(int value) function, expected prototype:\nvoid osg::GraphicsContext::Traits::width(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		osg::GraphicsContext::Traits* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext::Traits >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::Traits::width(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->width = value;

		return 0;
	}

	// void osg::GraphicsContext::Traits::height(int value)
	static int _bind_setHeight(lua_State *L) {
		if (!_lg_typecheck_setHeight(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::Traits::height(int value) function, expected prototype:\nvoid osg::GraphicsContext::Traits::height(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		osg::GraphicsContext::Traits* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext::Traits >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::Traits::height(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->height = value;

		return 0;
	}

	// void osg::GraphicsContext::Traits::windowName(std::string value)
	static int _bind_setWindowName(lua_State *L) {
		if (!_lg_typecheck_setWindowName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::Traits::windowName(std::string value) function, expected prototype:\nvoid osg::GraphicsContext::Traits::windowName(std::string value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string value(lua_tostring(L,2),lua_objlen(L,2));

		osg::GraphicsContext::Traits* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext::Traits >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::Traits::windowName(std::string). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->windowName = value;

		return 0;
	}

	// void osg::GraphicsContext::Traits::windowDecoration(bool value)
	static int _bind_setWindowDecoration(lua_State *L) {
		if (!_lg_typecheck_setWindowDecoration(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::Traits::windowDecoration(bool value) function, expected prototype:\nvoid osg::GraphicsContext::Traits::windowDecoration(bool value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		osg::GraphicsContext::Traits* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext::Traits >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::Traits::windowDecoration(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->windowDecoration = value;

		return 0;
	}

	// void osg::GraphicsContext::Traits::supportsResize(bool value)
	static int _bind_setSupportsResize(lua_State *L) {
		if (!_lg_typecheck_setSupportsResize(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::Traits::supportsResize(bool value) function, expected prototype:\nvoid osg::GraphicsContext::Traits::supportsResize(bool value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		osg::GraphicsContext::Traits* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext::Traits >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::Traits::supportsResize(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->supportsResize = value;

		return 0;
	}

	// void osg::GraphicsContext::Traits::red(unsigned int value)
	static int _bind_setRed(lua_State *L) {
		if (!_lg_typecheck_setRed(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::Traits::red(unsigned int value) function, expected prototype:\nvoid osg::GraphicsContext::Traits::red(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osg::GraphicsContext::Traits* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext::Traits >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::Traits::red(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->red = value;

		return 0;
	}

	// void osg::GraphicsContext::Traits::blue(unsigned int value)
	static int _bind_setBlue(lua_State *L) {
		if (!_lg_typecheck_setBlue(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::Traits::blue(unsigned int value) function, expected prototype:\nvoid osg::GraphicsContext::Traits::blue(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osg::GraphicsContext::Traits* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext::Traits >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::Traits::blue(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->blue = value;

		return 0;
	}

	// void osg::GraphicsContext::Traits::green(unsigned int value)
	static int _bind_setGreen(lua_State *L) {
		if (!_lg_typecheck_setGreen(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::Traits::green(unsigned int value) function, expected prototype:\nvoid osg::GraphicsContext::Traits::green(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osg::GraphicsContext::Traits* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext::Traits >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::Traits::green(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->green = value;

		return 0;
	}

	// void osg::GraphicsContext::Traits::alpha(unsigned int value)
	static int _bind_setAlpha(lua_State *L) {
		if (!_lg_typecheck_setAlpha(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::Traits::alpha(unsigned int value) function, expected prototype:\nvoid osg::GraphicsContext::Traits::alpha(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osg::GraphicsContext::Traits* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext::Traits >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::Traits::alpha(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->alpha = value;

		return 0;
	}

	// void osg::GraphicsContext::Traits::depth(unsigned int value)
	static int _bind_setDepth(lua_State *L) {
		if (!_lg_typecheck_setDepth(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::Traits::depth(unsigned int value) function, expected prototype:\nvoid osg::GraphicsContext::Traits::depth(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osg::GraphicsContext::Traits* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext::Traits >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::Traits::depth(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->depth = value;

		return 0;
	}

	// void osg::GraphicsContext::Traits::stencil(unsigned int value)
	static int _bind_setStencil(lua_State *L) {
		if (!_lg_typecheck_setStencil(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::Traits::stencil(unsigned int value) function, expected prototype:\nvoid osg::GraphicsContext::Traits::stencil(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osg::GraphicsContext::Traits* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext::Traits >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::Traits::stencil(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->stencil = value;

		return 0;
	}

	// void osg::GraphicsContext::Traits::sampleBuffers(unsigned int value)
	static int _bind_setSampleBuffers(lua_State *L) {
		if (!_lg_typecheck_setSampleBuffers(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::Traits::sampleBuffers(unsigned int value) function, expected prototype:\nvoid osg::GraphicsContext::Traits::sampleBuffers(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osg::GraphicsContext::Traits* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext::Traits >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::Traits::sampleBuffers(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->sampleBuffers = value;

		return 0;
	}

	// void osg::GraphicsContext::Traits::samples(unsigned int value)
	static int _bind_setSamples(lua_State *L) {
		if (!_lg_typecheck_setSamples(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::Traits::samples(unsigned int value) function, expected prototype:\nvoid osg::GraphicsContext::Traits::samples(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osg::GraphicsContext::Traits* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext::Traits >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::Traits::samples(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->samples = value;

		return 0;
	}

	// void osg::GraphicsContext::Traits::pbuffer(bool value)
	static int _bind_setPbuffer(lua_State *L) {
		if (!_lg_typecheck_setPbuffer(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::Traits::pbuffer(bool value) function, expected prototype:\nvoid osg::GraphicsContext::Traits::pbuffer(bool value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		osg::GraphicsContext::Traits* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext::Traits >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::Traits::pbuffer(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->pbuffer = value;

		return 0;
	}

	// void osg::GraphicsContext::Traits::quadBufferStereo(bool value)
	static int _bind_setQuadBufferStereo(lua_State *L) {
		if (!_lg_typecheck_setQuadBufferStereo(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::Traits::quadBufferStereo(bool value) function, expected prototype:\nvoid osg::GraphicsContext::Traits::quadBufferStereo(bool value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		osg::GraphicsContext::Traits* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext::Traits >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::Traits::quadBufferStereo(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->quadBufferStereo = value;

		return 0;
	}

	// void osg::GraphicsContext::Traits::doubleBuffer(bool value)
	static int _bind_setDoubleBuffer(lua_State *L) {
		if (!_lg_typecheck_setDoubleBuffer(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::Traits::doubleBuffer(bool value) function, expected prototype:\nvoid osg::GraphicsContext::Traits::doubleBuffer(bool value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		osg::GraphicsContext::Traits* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext::Traits >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::Traits::doubleBuffer(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->doubleBuffer = value;

		return 0;
	}

	// void osg::GraphicsContext::Traits::target(unsigned int value)
	static int _bind_setTarget(lua_State *L) {
		if (!_lg_typecheck_setTarget(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::Traits::target(unsigned int value) function, expected prototype:\nvoid osg::GraphicsContext::Traits::target(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osg::GraphicsContext::Traits* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext::Traits >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::Traits::target(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->target = value;

		return 0;
	}

	// void osg::GraphicsContext::Traits::format(unsigned int value)
	static int _bind_setFormat(lua_State *L) {
		if (!_lg_typecheck_setFormat(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::Traits::format(unsigned int value) function, expected prototype:\nvoid osg::GraphicsContext::Traits::format(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osg::GraphicsContext::Traits* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext::Traits >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::Traits::format(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->format = value;

		return 0;
	}

	// void osg::GraphicsContext::Traits::level(unsigned int value)
	static int _bind_setLevel(lua_State *L) {
		if (!_lg_typecheck_setLevel(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::Traits::level(unsigned int value) function, expected prototype:\nvoid osg::GraphicsContext::Traits::level(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osg::GraphicsContext::Traits* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext::Traits >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::Traits::level(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->level = value;

		return 0;
	}

	// void osg::GraphicsContext::Traits::face(unsigned int value)
	static int _bind_setFace(lua_State *L) {
		if (!_lg_typecheck_setFace(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::Traits::face(unsigned int value) function, expected prototype:\nvoid osg::GraphicsContext::Traits::face(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osg::GraphicsContext::Traits* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext::Traits >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::Traits::face(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->face = value;

		return 0;
	}

	// void osg::GraphicsContext::Traits::mipMapGeneration(unsigned int value)
	static int _bind_setMipMapGeneration(lua_State *L) {
		if (!_lg_typecheck_setMipMapGeneration(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::Traits::mipMapGeneration(unsigned int value) function, expected prototype:\nvoid osg::GraphicsContext::Traits::mipMapGeneration(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osg::GraphicsContext::Traits* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext::Traits >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::Traits::mipMapGeneration(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->mipMapGeneration = value;

		return 0;
	}

	// void osg::GraphicsContext::Traits::vsync(bool value)
	static int _bind_setVsync(lua_State *L) {
		if (!_lg_typecheck_setVsync(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::Traits::vsync(bool value) function, expected prototype:\nvoid osg::GraphicsContext::Traits::vsync(bool value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		osg::GraphicsContext::Traits* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext::Traits >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::Traits::vsync(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->vsync = value;

		return 0;
	}

	// void osg::GraphicsContext::Traits::swapGroupEnabled(bool value)
	static int _bind_setSwapGroupEnabled(lua_State *L) {
		if (!_lg_typecheck_setSwapGroupEnabled(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::Traits::swapGroupEnabled(bool value) function, expected prototype:\nvoid osg::GraphicsContext::Traits::swapGroupEnabled(bool value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		osg::GraphicsContext::Traits* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext::Traits >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::Traits::swapGroupEnabled(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->swapGroupEnabled = value;

		return 0;
	}

	// void osg::GraphicsContext::Traits::swapGroup(unsigned int value)
	static int _bind_setSwapGroup(lua_State *L) {
		if (!_lg_typecheck_setSwapGroup(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::Traits::swapGroup(unsigned int value) function, expected prototype:\nvoid osg::GraphicsContext::Traits::swapGroup(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osg::GraphicsContext::Traits* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext::Traits >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::Traits::swapGroup(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->swapGroup = value;

		return 0;
	}

	// void osg::GraphicsContext::Traits::swapBarrier(unsigned int value)
	static int _bind_setSwapBarrier(lua_State *L) {
		if (!_lg_typecheck_setSwapBarrier(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::Traits::swapBarrier(unsigned int value) function, expected prototype:\nvoid osg::GraphicsContext::Traits::swapBarrier(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osg::GraphicsContext::Traits* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext::Traits >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::Traits::swapBarrier(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->swapBarrier = value;

		return 0;
	}

	// void osg::GraphicsContext::Traits::useMultiThreadedOpenGLEngine(bool value)
	static int _bind_setUseMultiThreadedOpenGLEngine(lua_State *L) {
		if (!_lg_typecheck_setUseMultiThreadedOpenGLEngine(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::Traits::useMultiThreadedOpenGLEngine(bool value) function, expected prototype:\nvoid osg::GraphicsContext::Traits::useMultiThreadedOpenGLEngine(bool value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		osg::GraphicsContext::Traits* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext::Traits >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::Traits::useMultiThreadedOpenGLEngine(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->useMultiThreadedOpenGLEngine = value;

		return 0;
	}

	// void osg::GraphicsContext::Traits::useCursor(bool value)
	static int _bind_setUseCursor(lua_State *L) {
		if (!_lg_typecheck_setUseCursor(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::Traits::useCursor(bool value) function, expected prototype:\nvoid osg::GraphicsContext::Traits::useCursor(bool value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		osg::GraphicsContext::Traits* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext::Traits >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::Traits::useCursor(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->useCursor = value;

		return 0;
	}

	// void osg::GraphicsContext::Traits::glContextVersion(std::string value)
	static int _bind_setGlContextVersion(lua_State *L) {
		if (!_lg_typecheck_setGlContextVersion(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::Traits::glContextVersion(std::string value) function, expected prototype:\nvoid osg::GraphicsContext::Traits::glContextVersion(std::string value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string value(lua_tostring(L,2),lua_objlen(L,2));

		osg::GraphicsContext::Traits* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext::Traits >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::Traits::glContextVersion(std::string). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->glContextVersion = value;

		return 0;
	}

	// void osg::GraphicsContext::Traits::glContextFlags(unsigned int value)
	static int _bind_setGlContextFlags(lua_State *L) {
		if (!_lg_typecheck_setGlContextFlags(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::Traits::glContextFlags(unsigned int value) function, expected prototype:\nvoid osg::GraphicsContext::Traits::glContextFlags(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osg::GraphicsContext::Traits* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext::Traits >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::Traits::glContextFlags(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->glContextFlags = value;

		return 0;
	}

	// void osg::GraphicsContext::Traits::glContextProfileMask(unsigned int value)
	static int _bind_setGlContextProfileMask(lua_State *L) {
		if (!_lg_typecheck_setGlContextProfileMask(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::Traits::glContextProfileMask(unsigned int value) function, expected prototype:\nvoid osg::GraphicsContext::Traits::glContextProfileMask(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osg::GraphicsContext::Traits* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext::Traits >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::Traits::glContextProfileMask(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->glContextProfileMask = value;

		return 0;
	}

	// void osg::GraphicsContext::Traits::sharedContext(osg::observer_ptr< osg::GraphicsContext > value)
	static int _bind_setSharedContext(lua_State *L) {
		if (!_lg_typecheck_setSharedContext(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::Traits::sharedContext(osg::observer_ptr< osg::GraphicsContext > value) function, expected prototype:\nvoid osg::GraphicsContext::Traits::sharedContext(osg::observer_ptr< osg::GraphicsContext > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::observer_ptr< osg::GraphicsContext > value = dynamic_cast< osg::GraphicsContext* >(Luna< osg::Referenced >::check(L,2));

		osg::GraphicsContext::Traits* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext::Traits >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::Traits::sharedContext(osg::observer_ptr< osg::GraphicsContext >). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->sharedContext = value;

		return 0;
	}

	// void osg::GraphicsContext::Traits::inheritedWindowData(osg::ref_ptr< osg::Referenced > value)
	static int _bind_setInheritedWindowData(lua_State *L) {
		if (!_lg_typecheck_setInheritedWindowData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::Traits::inheritedWindowData(osg::ref_ptr< osg::Referenced > value) function, expected prototype:\nvoid osg::GraphicsContext::Traits::inheritedWindowData(osg::ref_ptr< osg::Referenced > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ref_ptr< osg::Referenced > value = dynamic_cast< osg::Referenced* >(Luna< osg::Referenced >::check(L,2));

		osg::GraphicsContext::Traits* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext::Traits >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::Traits::inheritedWindowData(osg::ref_ptr< osg::Referenced >). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->inheritedWindowData = value;

		return 0;
	}

	// void osg::GraphicsContext::Traits::setInheritedWindowPixelFormat(bool value)
	static int _bind_setSetInheritedWindowPixelFormat(lua_State *L) {
		if (!_lg_typecheck_setSetInheritedWindowPixelFormat(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::Traits::setInheritedWindowPixelFormat(bool value) function, expected prototype:\nvoid osg::GraphicsContext::Traits::setInheritedWindowPixelFormat(bool value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		osg::GraphicsContext::Traits* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext::Traits >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::Traits::setInheritedWindowPixelFormat(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setInheritedWindowPixelFormat = value;

		return 0;
	}

	// void osg::GraphicsContext::Traits::overrideRedirect(bool value)
	static int _bind_setOverrideRedirect(lua_State *L) {
		if (!_lg_typecheck_setOverrideRedirect(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::Traits::overrideRedirect(bool value) function, expected prototype:\nvoid osg::GraphicsContext::Traits::overrideRedirect(bool value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		osg::GraphicsContext::Traits* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext::Traits >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::Traits::overrideRedirect(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->overrideRedirect = value;

		return 0;
	}

	// void osg::GraphicsContext::Traits::swapMethod(osg::DisplaySettings::SwapMethod value)
	static int _bind_setSwapMethod(lua_State *L) {
		if (!_lg_typecheck_setSwapMethod(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::Traits::swapMethod(osg::DisplaySettings::SwapMethod value) function, expected prototype:\nvoid osg::GraphicsContext::Traits::swapMethod(osg::DisplaySettings::SwapMethod value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::DisplaySettings::SwapMethod value=(osg::DisplaySettings::SwapMethod)lua_tointeger(L,2);

		osg::GraphicsContext::Traits* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext::Traits >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::Traits::swapMethod(osg::DisplaySettings::SwapMethod). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->swapMethod = value;

		return 0;
	}

	// void osg::GraphicsContext::Traits::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::Traits::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::GraphicsContext::Traits::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::GraphicsContext::Traits* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsContext::Traits >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::Traits::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Traits::setThreadSafeRefUnref(threadSafe);

		return 0;
	}


	// Operator binds:

	inline static bool _lg_typecheck_baseCast_osg_GraphicsContext_ScreenIdentifier(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	static int _bind_baseCast_osg_GraphicsContext_ScreenIdentifier(lua_State *L) {
		if (!_lg_typecheck_baseCast_osg_GraphicsContext_ScreenIdentifier(L)) {
			luaL_error(L, "luna typecheck failed in baseCast_osg_GraphicsContext_ScreenIdentifier function, expected prototype:\nbaseCast(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call baseCast(...)");
		}
		
		osg::GraphicsContext::ScreenIdentifier* res = luna_caster<osg::Referenced,osg::GraphicsContext::ScreenIdentifier>::cast(self); // dynamic_cast<osg::GraphicsContext::ScreenIdentifier*>(self);
		if(!res)
			return 0;
			
		Luna< osg::GraphicsContext::ScreenIdentifier >::push(L,res,false);
		return 1;

	}

};

osg::GraphicsContext::Traits* LunaTraits< osg::GraphicsContext::Traits >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_GraphicsContext_Traits::_bind_ctor(L);
}

void LunaTraits< osg::GraphicsContext::Traits >::_bind_dtor(osg::GraphicsContext::Traits* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::GraphicsContext::Traits >::className[] = "GraphicsContext_Traits";
const char LunaTraits< osg::GraphicsContext::Traits >::fullName[] = "osg::GraphicsContext::Traits";
const char LunaTraits< osg::GraphicsContext::Traits >::moduleName[] = "osg";
const char* LunaTraits< osg::GraphicsContext::Traits >::parents[] = {"osg.Referenced", "osg.GraphicsContext_ScreenIdentifier", 0};
const int LunaTraits< osg::GraphicsContext::Traits >::hash = 19159633;
const int LunaTraits< osg::GraphicsContext::Traits >::uniqueIDs[] = {50169651, 83590106,0};

luna_RegType LunaTraits< osg::GraphicsContext::Traits >::methods[] = {
	{"getContextVersion", &luna_wrapper_osg_GraphicsContext_Traits::_bind_getContextVersion},
	{"getX", &luna_wrapper_osg_GraphicsContext_Traits::_bind_getX},
	{"getY", &luna_wrapper_osg_GraphicsContext_Traits::_bind_getY},
	{"getWidth", &luna_wrapper_osg_GraphicsContext_Traits::_bind_getWidth},
	{"getHeight", &luna_wrapper_osg_GraphicsContext_Traits::_bind_getHeight},
	{"getWindowName", &luna_wrapper_osg_GraphicsContext_Traits::_bind_getWindowName},
	{"getWindowDecoration", &luna_wrapper_osg_GraphicsContext_Traits::_bind_getWindowDecoration},
	{"getSupportsResize", &luna_wrapper_osg_GraphicsContext_Traits::_bind_getSupportsResize},
	{"getRed", &luna_wrapper_osg_GraphicsContext_Traits::_bind_getRed},
	{"getBlue", &luna_wrapper_osg_GraphicsContext_Traits::_bind_getBlue},
	{"getGreen", &luna_wrapper_osg_GraphicsContext_Traits::_bind_getGreen},
	{"getAlpha", &luna_wrapper_osg_GraphicsContext_Traits::_bind_getAlpha},
	{"getDepth", &luna_wrapper_osg_GraphicsContext_Traits::_bind_getDepth},
	{"getStencil", &luna_wrapper_osg_GraphicsContext_Traits::_bind_getStencil},
	{"getSampleBuffers", &luna_wrapper_osg_GraphicsContext_Traits::_bind_getSampleBuffers},
	{"getSamples", &luna_wrapper_osg_GraphicsContext_Traits::_bind_getSamples},
	{"getPbuffer", &luna_wrapper_osg_GraphicsContext_Traits::_bind_getPbuffer},
	{"getQuadBufferStereo", &luna_wrapper_osg_GraphicsContext_Traits::_bind_getQuadBufferStereo},
	{"getDoubleBuffer", &luna_wrapper_osg_GraphicsContext_Traits::_bind_getDoubleBuffer},
	{"getTarget", &luna_wrapper_osg_GraphicsContext_Traits::_bind_getTarget},
	{"getFormat", &luna_wrapper_osg_GraphicsContext_Traits::_bind_getFormat},
	{"getLevel", &luna_wrapper_osg_GraphicsContext_Traits::_bind_getLevel},
	{"getFace", &luna_wrapper_osg_GraphicsContext_Traits::_bind_getFace},
	{"getMipMapGeneration", &luna_wrapper_osg_GraphicsContext_Traits::_bind_getMipMapGeneration},
	{"getVsync", &luna_wrapper_osg_GraphicsContext_Traits::_bind_getVsync},
	{"getSwapGroupEnabled", &luna_wrapper_osg_GraphicsContext_Traits::_bind_getSwapGroupEnabled},
	{"getSwapGroup", &luna_wrapper_osg_GraphicsContext_Traits::_bind_getSwapGroup},
	{"getSwapBarrier", &luna_wrapper_osg_GraphicsContext_Traits::_bind_getSwapBarrier},
	{"getUseMultiThreadedOpenGLEngine", &luna_wrapper_osg_GraphicsContext_Traits::_bind_getUseMultiThreadedOpenGLEngine},
	{"getUseCursor", &luna_wrapper_osg_GraphicsContext_Traits::_bind_getUseCursor},
	{"getGlContextVersion", &luna_wrapper_osg_GraphicsContext_Traits::_bind_getGlContextVersion},
	{"getGlContextFlags", &luna_wrapper_osg_GraphicsContext_Traits::_bind_getGlContextFlags},
	{"getGlContextProfileMask", &luna_wrapper_osg_GraphicsContext_Traits::_bind_getGlContextProfileMask},
	{"getSharedContext", &luna_wrapper_osg_GraphicsContext_Traits::_bind_getSharedContext},
	{"getInheritedWindowData", &luna_wrapper_osg_GraphicsContext_Traits::_bind_getInheritedWindowData},
	{"getSetInheritedWindowPixelFormat", &luna_wrapper_osg_GraphicsContext_Traits::_bind_getSetInheritedWindowPixelFormat},
	{"getOverrideRedirect", &luna_wrapper_osg_GraphicsContext_Traits::_bind_getOverrideRedirect},
	{"getSwapMethod", &luna_wrapper_osg_GraphicsContext_Traits::_bind_getSwapMethod},
	{"setX", &luna_wrapper_osg_GraphicsContext_Traits::_bind_setX},
	{"setY", &luna_wrapper_osg_GraphicsContext_Traits::_bind_setY},
	{"setWidth", &luna_wrapper_osg_GraphicsContext_Traits::_bind_setWidth},
	{"setHeight", &luna_wrapper_osg_GraphicsContext_Traits::_bind_setHeight},
	{"setWindowName", &luna_wrapper_osg_GraphicsContext_Traits::_bind_setWindowName},
	{"setWindowDecoration", &luna_wrapper_osg_GraphicsContext_Traits::_bind_setWindowDecoration},
	{"setSupportsResize", &luna_wrapper_osg_GraphicsContext_Traits::_bind_setSupportsResize},
	{"setRed", &luna_wrapper_osg_GraphicsContext_Traits::_bind_setRed},
	{"setBlue", &luna_wrapper_osg_GraphicsContext_Traits::_bind_setBlue},
	{"setGreen", &luna_wrapper_osg_GraphicsContext_Traits::_bind_setGreen},
	{"setAlpha", &luna_wrapper_osg_GraphicsContext_Traits::_bind_setAlpha},
	{"setDepth", &luna_wrapper_osg_GraphicsContext_Traits::_bind_setDepth},
	{"setStencil", &luna_wrapper_osg_GraphicsContext_Traits::_bind_setStencil},
	{"setSampleBuffers", &luna_wrapper_osg_GraphicsContext_Traits::_bind_setSampleBuffers},
	{"setSamples", &luna_wrapper_osg_GraphicsContext_Traits::_bind_setSamples},
	{"setPbuffer", &luna_wrapper_osg_GraphicsContext_Traits::_bind_setPbuffer},
	{"setQuadBufferStereo", &luna_wrapper_osg_GraphicsContext_Traits::_bind_setQuadBufferStereo},
	{"setDoubleBuffer", &luna_wrapper_osg_GraphicsContext_Traits::_bind_setDoubleBuffer},
	{"setTarget", &luna_wrapper_osg_GraphicsContext_Traits::_bind_setTarget},
	{"setFormat", &luna_wrapper_osg_GraphicsContext_Traits::_bind_setFormat},
	{"setLevel", &luna_wrapper_osg_GraphicsContext_Traits::_bind_setLevel},
	{"setFace", &luna_wrapper_osg_GraphicsContext_Traits::_bind_setFace},
	{"setMipMapGeneration", &luna_wrapper_osg_GraphicsContext_Traits::_bind_setMipMapGeneration},
	{"setVsync", &luna_wrapper_osg_GraphicsContext_Traits::_bind_setVsync},
	{"setSwapGroupEnabled", &luna_wrapper_osg_GraphicsContext_Traits::_bind_setSwapGroupEnabled},
	{"setSwapGroup", &luna_wrapper_osg_GraphicsContext_Traits::_bind_setSwapGroup},
	{"setSwapBarrier", &luna_wrapper_osg_GraphicsContext_Traits::_bind_setSwapBarrier},
	{"setUseMultiThreadedOpenGLEngine", &luna_wrapper_osg_GraphicsContext_Traits::_bind_setUseMultiThreadedOpenGLEngine},
	{"setUseCursor", &luna_wrapper_osg_GraphicsContext_Traits::_bind_setUseCursor},
	{"setGlContextVersion", &luna_wrapper_osg_GraphicsContext_Traits::_bind_setGlContextVersion},
	{"setGlContextFlags", &luna_wrapper_osg_GraphicsContext_Traits::_bind_setGlContextFlags},
	{"setGlContextProfileMask", &luna_wrapper_osg_GraphicsContext_Traits::_bind_setGlContextProfileMask},
	{"setSharedContext", &luna_wrapper_osg_GraphicsContext_Traits::_bind_setSharedContext},
	{"setInheritedWindowData", &luna_wrapper_osg_GraphicsContext_Traits::_bind_setInheritedWindowData},
	{"setSetInheritedWindowPixelFormat", &luna_wrapper_osg_GraphicsContext_Traits::_bind_setSetInheritedWindowPixelFormat},
	{"setOverrideRedirect", &luna_wrapper_osg_GraphicsContext_Traits::_bind_setOverrideRedirect},
	{"setSwapMethod", &luna_wrapper_osg_GraphicsContext_Traits::_bind_setSwapMethod},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_GraphicsContext_Traits::_bind_base_setThreadSafeRefUnref},
	{"fromVoid", &luna_wrapper_osg_GraphicsContext_Traits::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_GraphicsContext_Traits::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_GraphicsContext_Traits::_bind_getTable},
	{"asScreenIdentifier", &luna_wrapper_osg_GraphicsContext_Traits::_bind_baseCast_osg_GraphicsContext_ScreenIdentifier},
	{0,0}
};

luna_ConverterType LunaTraits< osg::GraphicsContext::Traits >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_GraphicsContext_Traits::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::GraphicsContext::Traits >::enumValues[] = {
	{0,0}
};



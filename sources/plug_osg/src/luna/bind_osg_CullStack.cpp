#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_CullStack.h>

class luna_wrapper_osg_CullStack {
public:
	typedef Luna< osg::CullStack > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::CullSettings* self=(Luna< osg::CullSettings >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<osg::CullSettings,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
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

		osg::CullStack* self= (osg::CullStack*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::CullStack >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,31435107) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osg::CullSettings >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_CullSettings(lua_State *L) {
		// all checked are already performed before reaching this point.
		//osg::CullStack* ptr= dynamic_cast< osg::CullStack* >(Luna< osg::CullSettings >::check(L,1));
		osg::CullStack* ptr= luna_caster< osg::CullSettings, osg::CullStack >::cast(Luna< osg::CullSettings >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::CullStack >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,31435107) ) return false;
		if( (!(Luna< osg::CullSettings >::checkSubType< osg::CullStack >(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,31435107) ) return false;
		if( (!(Luna< osg::CullSettings >::checkSubType< osg::CullStack >(L,2))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_pushCullingSet(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_popCullingSet(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setOccluderList(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,75920513) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getOccluderList_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getOccluderList_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_pushViewport(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_popViewport(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_pushProjectionMatrix(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_popProjectionMatrix(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_pushModelViewMatrix(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_popModelViewMatrix(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFrustumVolume(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_pixelSize_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,2))) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_pixelSize_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,65870735) ) return false;
		if( (!(Luna< osg::BoundingSphereImpl< osg::Vec3d > >::checkSubType< osg::BoundingSphered >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_clampedPixelSize_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,2))) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_clampedPixelSize_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,65870735) ) return false;
		if( (!(Luna< osg::BoundingSphereImpl< osg::Vec3d > >::checkSubType< osg::BoundingSphered >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_disableAndPushOccludersCurrentMask(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,52841328) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_popOccludersCurrentMask(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,52841328) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isCulled_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,30220088) ) return false;
		if( (!(Luna< std::vector< osg::Vec3f > >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isCulled_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,41227270) ) return false;
		if( (!(Luna< osg::BoundingBoxImpl< osg::Vec3d > >::checkSubType< osg::BoundingBoxd >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isCulled_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,65870735) ) return false;
		if( (!(Luna< osg::BoundingSphereImpl< osg::Vec3d > >::checkSubType< osg::BoundingSphered >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isCulled_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_pushCurrentMask(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_popCurrentMask(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getClipSpaceCullingStack(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getProjectionCullingStack(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getModelViewCullingStack(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCurrentCullingSet_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCurrentCullingSet_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getViewport(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getModelViewMatrix(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getProjectionMatrix(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getWindowMatrix(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMVPW(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getReferenceViewPoint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_pushReferenceViewPoint(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_popReferenceViewPoint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getEyeLocal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getViewPointLocal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUpLocal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLookVectorLocal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setDefaults(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_inheritCullSettings_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,31435107) ) return false;
		if( (!(Luna< osg::CullSettings >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_inheritCullSettings_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,31435107) ) return false;
		if( (!(Luna< osg::CullSettings >::check(L,2))) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::CullStack::CullStack()
	static osg::CullStack* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::CullStack::CullStack() function, expected prototype:\nosg::CullStack::CullStack()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::CullStack();
	}

	// osg::CullStack::CullStack(const osg::CullStack & cs)
	static osg::CullStack* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::CullStack::CullStack(const osg::CullStack & cs) function, expected prototype:\nosg::CullStack::CullStack(const osg::CullStack & cs)\nClass arguments details:\narg 1 ID = 31435107\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CullStack* cs_ptr=(Luna< osg::CullSettings >::checkSubType< osg::CullStack >(L,1));
		if( !cs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cs in osg::CullStack::CullStack function");
		}
		const osg::CullStack & cs=*cs_ptr;

		return new osg::CullStack(cs);
	}

	// osg::CullStack::CullStack(lua_Table * data)
	static osg::CullStack* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::CullStack::CullStack(lua_Table * data) function, expected prototype:\nosg::CullStack::CullStack(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_CullStack(L,NULL);
	}

	// osg::CullStack::CullStack(lua_Table * data, const osg::CullStack & cs)
	static osg::CullStack* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::CullStack::CullStack(lua_Table * data, const osg::CullStack & cs) function, expected prototype:\nosg::CullStack::CullStack(lua_Table * data, const osg::CullStack & cs)\nClass arguments details:\narg 2 ID = 31435107\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CullStack* cs_ptr=(Luna< osg::CullSettings >::checkSubType< osg::CullStack >(L,2));
		if( !cs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cs in osg::CullStack::CullStack function");
		}
		const osg::CullStack & cs=*cs_ptr;

		return new wrapper_osg_CullStack(L,NULL, cs);
	}

	// Overload binder for osg::CullStack::CullStack
	static osg::CullStack* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function CullStack, cannot match any of the overloads for function CullStack:\n  CullStack()\n  CullStack(const osg::CullStack &)\n  CullStack(lua_Table *)\n  CullStack(lua_Table *, const osg::CullStack &)\n");
		return NULL;
	}


	// Function binds:
	// void osg::CullStack::reset()
	static int _bind_reset(lua_State *L) {
		if (!_lg_typecheck_reset(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CullStack::reset() function, expected prototype:\nvoid osg::CullStack::reset()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CullStack* self=Luna< osg::CullSettings >::checkSubType< osg::CullStack >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CullStack::reset(). Got : '%s'\n%s",typeid(Luna< osg::CullSettings >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->reset();

		return 0;
	}

	// void osg::CullStack::pushCullingSet()
	static int _bind_pushCullingSet(lua_State *L) {
		if (!_lg_typecheck_pushCullingSet(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CullStack::pushCullingSet() function, expected prototype:\nvoid osg::CullStack::pushCullingSet()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CullStack* self=Luna< osg::CullSettings >::checkSubType< osg::CullStack >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CullStack::pushCullingSet(). Got : '%s'\n%s",typeid(Luna< osg::CullSettings >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->pushCullingSet();

		return 0;
	}

	// void osg::CullStack::popCullingSet()
	static int _bind_popCullingSet(lua_State *L) {
		if (!_lg_typecheck_popCullingSet(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CullStack::popCullingSet() function, expected prototype:\nvoid osg::CullStack::popCullingSet()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CullStack* self=Luna< osg::CullSettings >::checkSubType< osg::CullStack >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CullStack::popCullingSet(). Got : '%s'\n%s",typeid(Luna< osg::CullSettings >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->popCullingSet();

		return 0;
	}

	// void osg::CullStack::setOccluderList(const osg::ShadowVolumeOccluderList & svol)
	static int _bind_setOccluderList(lua_State *L) {
		if (!_lg_typecheck_setOccluderList(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CullStack::setOccluderList(const osg::ShadowVolumeOccluderList & svol) function, expected prototype:\nvoid osg::CullStack::setOccluderList(const osg::ShadowVolumeOccluderList & svol)\nClass arguments details:\narg 1 ID = 39369741\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::ShadowVolumeOccluderList* svol_ptr=(Luna< std::vector< osg::ShadowVolumeOccluder > >::checkSubType< osg::ShadowVolumeOccluderList >(L,2));
		if( !svol_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg svol in osg::CullStack::setOccluderList function");
		}
		const osg::ShadowVolumeOccluderList & svol=*svol_ptr;

		osg::CullStack* self=Luna< osg::CullSettings >::checkSubType< osg::CullStack >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CullStack::setOccluderList(const osg::ShadowVolumeOccluderList &). Got : '%s'\n%s",typeid(Luna< osg::CullSettings >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setOccluderList(svol);

		return 0;
	}

	// osg::ShadowVolumeOccluderList & osg::CullStack::getOccluderList()
	static int _bind_getOccluderList_overload_1(lua_State *L) {
		if (!_lg_typecheck_getOccluderList_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::ShadowVolumeOccluderList & osg::CullStack::getOccluderList() function, expected prototype:\nosg::ShadowVolumeOccluderList & osg::CullStack::getOccluderList()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CullStack* self=Luna< osg::CullSettings >::checkSubType< osg::CullStack >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::ShadowVolumeOccluderList & osg::CullStack::getOccluderList(). Got : '%s'\n%s",typeid(Luna< osg::CullSettings >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::ShadowVolumeOccluderList* lret = &self->getOccluderList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::ShadowVolumeOccluderList >::push(L,lret,false);

		return 1;
	}

	// const osg::ShadowVolumeOccluderList & osg::CullStack::getOccluderList() const
	static int _bind_getOccluderList_overload_2(lua_State *L) {
		if (!_lg_typecheck_getOccluderList_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::ShadowVolumeOccluderList & osg::CullStack::getOccluderList() const function, expected prototype:\nconst osg::ShadowVolumeOccluderList & osg::CullStack::getOccluderList() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CullStack* self=Luna< osg::CullSettings >::checkSubType< osg::CullStack >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::ShadowVolumeOccluderList & osg::CullStack::getOccluderList() const. Got : '%s'\n%s",typeid(Luna< osg::CullSettings >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::ShadowVolumeOccluderList* lret = &self->getOccluderList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::ShadowVolumeOccluderList >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::CullStack::getOccluderList
	static int _bind_getOccluderList(lua_State *L) {
		if (_lg_typecheck_getOccluderList_overload_1(L)) return _bind_getOccluderList_overload_1(L);
		if (_lg_typecheck_getOccluderList_overload_2(L)) return _bind_getOccluderList_overload_2(L);

		luaL_error(L, "error in function getOccluderList, cannot match any of the overloads for function getOccluderList:\n  getOccluderList()\n  getOccluderList()\n");
		return 0;
	}

	// void osg::CullStack::pushViewport(osg::Viewport * viewport)
	static int _bind_pushViewport(lua_State *L) {
		if (!_lg_typecheck_pushViewport(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CullStack::pushViewport(osg::Viewport * viewport) function, expected prototype:\nvoid osg::CullStack::pushViewport(osg::Viewport * viewport)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Viewport* viewport=(Luna< osg::Referenced >::checkSubType< osg::Viewport >(L,2));

		osg::CullStack* self=Luna< osg::CullSettings >::checkSubType< osg::CullStack >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CullStack::pushViewport(osg::Viewport *). Got : '%s'\n%s",typeid(Luna< osg::CullSettings >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->pushViewport(viewport);

		return 0;
	}

	// void osg::CullStack::popViewport()
	static int _bind_popViewport(lua_State *L) {
		if (!_lg_typecheck_popViewport(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CullStack::popViewport() function, expected prototype:\nvoid osg::CullStack::popViewport()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CullStack* self=Luna< osg::CullSettings >::checkSubType< osg::CullStack >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CullStack::popViewport(). Got : '%s'\n%s",typeid(Luna< osg::CullSettings >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->popViewport();

		return 0;
	}

	// void osg::CullStack::pushProjectionMatrix(osg::RefMatrixd * matrix)
	static int _bind_pushProjectionMatrix(lua_State *L) {
		if (!_lg_typecheck_pushProjectionMatrix(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CullStack::pushProjectionMatrix(osg::RefMatrixd * matrix) function, expected prototype:\nvoid osg::CullStack::pushProjectionMatrix(osg::RefMatrixd * matrix)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::RefMatrixd* matrix=(Luna< osg::Referenced >::checkSubType< osg::RefMatrixd >(L,2));

		osg::CullStack* self=Luna< osg::CullSettings >::checkSubType< osg::CullStack >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CullStack::pushProjectionMatrix(osg::RefMatrixd *). Got : '%s'\n%s",typeid(Luna< osg::CullSettings >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->pushProjectionMatrix(matrix);

		return 0;
	}

	// void osg::CullStack::popProjectionMatrix()
	static int _bind_popProjectionMatrix(lua_State *L) {
		if (!_lg_typecheck_popProjectionMatrix(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CullStack::popProjectionMatrix() function, expected prototype:\nvoid osg::CullStack::popProjectionMatrix()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CullStack* self=Luna< osg::CullSettings >::checkSubType< osg::CullStack >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CullStack::popProjectionMatrix(). Got : '%s'\n%s",typeid(Luna< osg::CullSettings >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->popProjectionMatrix();

		return 0;
	}

	// void osg::CullStack::pushModelViewMatrix(osg::RefMatrixd * matrix, osg::Transform::ReferenceFrame referenceFrame)
	static int _bind_pushModelViewMatrix(lua_State *L) {
		if (!_lg_typecheck_pushModelViewMatrix(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CullStack::pushModelViewMatrix(osg::RefMatrixd * matrix, osg::Transform::ReferenceFrame referenceFrame) function, expected prototype:\nvoid osg::CullStack::pushModelViewMatrix(osg::RefMatrixd * matrix, osg::Transform::ReferenceFrame referenceFrame)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::RefMatrixd* matrix=(Luna< osg::Referenced >::checkSubType< osg::RefMatrixd >(L,2));
		osg::Transform::ReferenceFrame referenceFrame=(osg::Transform::ReferenceFrame)lua_tointeger(L,3);

		osg::CullStack* self=Luna< osg::CullSettings >::checkSubType< osg::CullStack >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CullStack::pushModelViewMatrix(osg::RefMatrixd *, osg::Transform::ReferenceFrame). Got : '%s'\n%s",typeid(Luna< osg::CullSettings >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->pushModelViewMatrix(matrix, referenceFrame);

		return 0;
	}

	// void osg::CullStack::popModelViewMatrix()
	static int _bind_popModelViewMatrix(lua_State *L) {
		if (!_lg_typecheck_popModelViewMatrix(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CullStack::popModelViewMatrix() function, expected prototype:\nvoid osg::CullStack::popModelViewMatrix()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CullStack* self=Luna< osg::CullSettings >::checkSubType< osg::CullStack >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CullStack::popModelViewMatrix(). Got : '%s'\n%s",typeid(Luna< osg::CullSettings >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->popModelViewMatrix();

		return 0;
	}

	// float osg::CullStack::getFrustumVolume()
	static int _bind_getFrustumVolume(lua_State *L) {
		if (!_lg_typecheck_getFrustumVolume(L)) {
			luaL_error(L, "luna typecheck failed in float osg::CullStack::getFrustumVolume() function, expected prototype:\nfloat osg::CullStack::getFrustumVolume()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CullStack* self=Luna< osg::CullSettings >::checkSubType< osg::CullStack >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osg::CullStack::getFrustumVolume(). Got : '%s'\n%s",typeid(Luna< osg::CullSettings >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getFrustumVolume();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osg::CullStack::pixelSize(const osg::Vec3f & v, float radius) const
	static int _bind_pixelSize_overload_1(lua_State *L) {
		if (!_lg_typecheck_pixelSize_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in float osg::CullStack::pixelSize(const osg::Vec3f & v, float radius) const function, expected prototype:\nfloat osg::CullStack::pixelSize(const osg::Vec3f & v, float radius) const\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* v_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osg::CullStack::pixelSize function");
		}
		const osg::Vec3f & v=*v_ptr;
		float radius=(float)lua_tonumber(L,3);

		osg::CullStack* self=Luna< osg::CullSettings >::checkSubType< osg::CullStack >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osg::CullStack::pixelSize(const osg::Vec3f &, float) const. Got : '%s'\n%s",typeid(Luna< osg::CullSettings >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->pixelSize(v, radius);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osg::CullStack::pixelSize(const osg::BoundingSphered & bs) const
	static int _bind_pixelSize_overload_2(lua_State *L) {
		if (!_lg_typecheck_pixelSize_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in float osg::CullStack::pixelSize(const osg::BoundingSphered & bs) const function, expected prototype:\nfloat osg::CullStack::pixelSize(const osg::BoundingSphered & bs) const\nClass arguments details:\narg 1 ID = 54337300\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::BoundingSphered* bs_ptr=(Luna< osg::BoundingSphereImpl< osg::Vec3d > >::checkSubType< osg::BoundingSphered >(L,2));
		if( !bs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bs in osg::CullStack::pixelSize function");
		}
		const osg::BoundingSphered & bs=*bs_ptr;

		osg::CullStack* self=Luna< osg::CullSettings >::checkSubType< osg::CullStack >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osg::CullStack::pixelSize(const osg::BoundingSphered &) const. Got : '%s'\n%s",typeid(Luna< osg::CullSettings >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->pixelSize(bs);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::CullStack::pixelSize
	static int _bind_pixelSize(lua_State *L) {
		if (_lg_typecheck_pixelSize_overload_1(L)) return _bind_pixelSize_overload_1(L);
		if (_lg_typecheck_pixelSize_overload_2(L)) return _bind_pixelSize_overload_2(L);

		luaL_error(L, "error in function pixelSize, cannot match any of the overloads for function pixelSize:\n  pixelSize(const osg::Vec3f &, float)\n  pixelSize(const osg::BoundingSphered &)\n");
		return 0;
	}

	// float osg::CullStack::clampedPixelSize(const osg::Vec3f & v, float radius) const
	static int _bind_clampedPixelSize_overload_1(lua_State *L) {
		if (!_lg_typecheck_clampedPixelSize_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in float osg::CullStack::clampedPixelSize(const osg::Vec3f & v, float radius) const function, expected prototype:\nfloat osg::CullStack::clampedPixelSize(const osg::Vec3f & v, float radius) const\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* v_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osg::CullStack::clampedPixelSize function");
		}
		const osg::Vec3f & v=*v_ptr;
		float radius=(float)lua_tonumber(L,3);

		osg::CullStack* self=Luna< osg::CullSettings >::checkSubType< osg::CullStack >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osg::CullStack::clampedPixelSize(const osg::Vec3f &, float) const. Got : '%s'\n%s",typeid(Luna< osg::CullSettings >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->clampedPixelSize(v, radius);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osg::CullStack::clampedPixelSize(const osg::BoundingSphered & bs) const
	static int _bind_clampedPixelSize_overload_2(lua_State *L) {
		if (!_lg_typecheck_clampedPixelSize_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in float osg::CullStack::clampedPixelSize(const osg::BoundingSphered & bs) const function, expected prototype:\nfloat osg::CullStack::clampedPixelSize(const osg::BoundingSphered & bs) const\nClass arguments details:\narg 1 ID = 54337300\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::BoundingSphered* bs_ptr=(Luna< osg::BoundingSphereImpl< osg::Vec3d > >::checkSubType< osg::BoundingSphered >(L,2));
		if( !bs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bs in osg::CullStack::clampedPixelSize function");
		}
		const osg::BoundingSphered & bs=*bs_ptr;

		osg::CullStack* self=Luna< osg::CullSettings >::checkSubType< osg::CullStack >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osg::CullStack::clampedPixelSize(const osg::BoundingSphered &) const. Got : '%s'\n%s",typeid(Luna< osg::CullSettings >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->clampedPixelSize(bs);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::CullStack::clampedPixelSize
	static int _bind_clampedPixelSize(lua_State *L) {
		if (_lg_typecheck_clampedPixelSize_overload_1(L)) return _bind_clampedPixelSize_overload_1(L);
		if (_lg_typecheck_clampedPixelSize_overload_2(L)) return _bind_clampedPixelSize_overload_2(L);

		luaL_error(L, "error in function clampedPixelSize, cannot match any of the overloads for function clampedPixelSize:\n  clampedPixelSize(const osg::Vec3f &, float)\n  clampedPixelSize(const osg::BoundingSphered &)\n");
		return 0;
	}

	// void osg::CullStack::disableAndPushOccludersCurrentMask(osg::NodePath & nodePath)
	static int _bind_disableAndPushOccludersCurrentMask(lua_State *L) {
		if (!_lg_typecheck_disableAndPushOccludersCurrentMask(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CullStack::disableAndPushOccludersCurrentMask(osg::NodePath & nodePath) function, expected prototype:\nvoid osg::CullStack::disableAndPushOccludersCurrentMask(osg::NodePath & nodePath)\nClass arguments details:\narg 1 ID = 52841328\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodePath* nodePath_ptr=(Luna< osg::NodePath >::check(L,2));
		if( !nodePath_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nodePath in osg::CullStack::disableAndPushOccludersCurrentMask function");
		}
		osg::NodePath & nodePath=*nodePath_ptr;

		osg::CullStack* self=Luna< osg::CullSettings >::checkSubType< osg::CullStack >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CullStack::disableAndPushOccludersCurrentMask(osg::NodePath &). Got : '%s'\n%s",typeid(Luna< osg::CullSettings >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->disableAndPushOccludersCurrentMask(nodePath);

		return 0;
	}

	// void osg::CullStack::popOccludersCurrentMask(osg::NodePath & nodePath)
	static int _bind_popOccludersCurrentMask(lua_State *L) {
		if (!_lg_typecheck_popOccludersCurrentMask(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CullStack::popOccludersCurrentMask(osg::NodePath & nodePath) function, expected prototype:\nvoid osg::CullStack::popOccludersCurrentMask(osg::NodePath & nodePath)\nClass arguments details:\narg 1 ID = 52841328\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodePath* nodePath_ptr=(Luna< osg::NodePath >::check(L,2));
		if( !nodePath_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nodePath in osg::CullStack::popOccludersCurrentMask function");
		}
		osg::NodePath & nodePath=*nodePath_ptr;

		osg::CullStack* self=Luna< osg::CullSettings >::checkSubType< osg::CullStack >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CullStack::popOccludersCurrentMask(osg::NodePath &). Got : '%s'\n%s",typeid(Luna< osg::CullSettings >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->popOccludersCurrentMask(nodePath);

		return 0;
	}

	// bool osg::CullStack::isCulled(const std::vector< osg::Vec3f > & vertices)
	static int _bind_isCulled_overload_1(lua_State *L) {
		if (!_lg_typecheck_isCulled_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::CullStack::isCulled(const std::vector< osg::Vec3f > & vertices) function, expected prototype:\nbool osg::CullStack::isCulled(const std::vector< osg::Vec3f > & vertices)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		const std::vector< osg::Vec3f >* vertices_ptr=(Luna< std::vector< osg::Vec3f > >::check(L,2));
		if( !vertices_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vertices in osg::CullStack::isCulled function");
		}
		const std::vector< osg::Vec3f > & vertices=*vertices_ptr;

		osg::CullStack* self=Luna< osg::CullSettings >::checkSubType< osg::CullStack >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::CullStack::isCulled(const std::vector< osg::Vec3f > &). Got : '%s'\n%s",typeid(Luna< osg::CullSettings >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isCulled(vertices);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::CullStack::isCulled(const osg::BoundingBoxd & bb)
	static int _bind_isCulled_overload_2(lua_State *L) {
		if (!_lg_typecheck_isCulled_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::CullStack::isCulled(const osg::BoundingBoxd & bb) function, expected prototype:\nbool osg::CullStack::isCulled(const osg::BoundingBoxd & bb)\nClass arguments details:\narg 1 ID = 82744897\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::BoundingBoxd* bb_ptr=(Luna< osg::BoundingBoxImpl< osg::Vec3d > >::checkSubType< osg::BoundingBoxd >(L,2));
		if( !bb_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bb in osg::CullStack::isCulled function");
		}
		const osg::BoundingBoxd & bb=*bb_ptr;

		osg::CullStack* self=Luna< osg::CullSettings >::checkSubType< osg::CullStack >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::CullStack::isCulled(const osg::BoundingBoxd &). Got : '%s'\n%s",typeid(Luna< osg::CullSettings >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isCulled(bb);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::CullStack::isCulled(const osg::BoundingSphered & bs)
	static int _bind_isCulled_overload_3(lua_State *L) {
		if (!_lg_typecheck_isCulled_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::CullStack::isCulled(const osg::BoundingSphered & bs) function, expected prototype:\nbool osg::CullStack::isCulled(const osg::BoundingSphered & bs)\nClass arguments details:\narg 1 ID = 54337300\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::BoundingSphered* bs_ptr=(Luna< osg::BoundingSphereImpl< osg::Vec3d > >::checkSubType< osg::BoundingSphered >(L,2));
		if( !bs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bs in osg::CullStack::isCulled function");
		}
		const osg::BoundingSphered & bs=*bs_ptr;

		osg::CullStack* self=Luna< osg::CullSettings >::checkSubType< osg::CullStack >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::CullStack::isCulled(const osg::BoundingSphered &). Got : '%s'\n%s",typeid(Luna< osg::CullSettings >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isCulled(bs);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::CullStack::isCulled(const osg::Node & node)
	static int _bind_isCulled_overload_4(lua_State *L) {
		if (!_lg_typecheck_isCulled_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::CullStack::isCulled(const osg::Node & node) function, expected prototype:\nbool osg::CullStack::isCulled(const osg::Node & node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Node* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osg::CullStack::isCulled function");
		}
		const osg::Node & node=*node_ptr;

		osg::CullStack* self=Luna< osg::CullSettings >::checkSubType< osg::CullStack >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::CullStack::isCulled(const osg::Node &). Got : '%s'\n%s",typeid(Luna< osg::CullSettings >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isCulled(node);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for osg::CullStack::isCulled
	static int _bind_isCulled(lua_State *L) {
		if (_lg_typecheck_isCulled_overload_1(L)) return _bind_isCulled_overload_1(L);
		if (_lg_typecheck_isCulled_overload_2(L)) return _bind_isCulled_overload_2(L);
		if (_lg_typecheck_isCulled_overload_3(L)) return _bind_isCulled_overload_3(L);
		if (_lg_typecheck_isCulled_overload_4(L)) return _bind_isCulled_overload_4(L);

		luaL_error(L, "error in function isCulled, cannot match any of the overloads for function isCulled:\n  isCulled(const std::vector< osg::Vec3f > &)\n  isCulled(const osg::BoundingBoxd &)\n  isCulled(const osg::BoundingSphered &)\n  isCulled(const osg::Node &)\n");
		return 0;
	}

	// void osg::CullStack::pushCurrentMask()
	static int _bind_pushCurrentMask(lua_State *L) {
		if (!_lg_typecheck_pushCurrentMask(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CullStack::pushCurrentMask() function, expected prototype:\nvoid osg::CullStack::pushCurrentMask()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CullStack* self=Luna< osg::CullSettings >::checkSubType< osg::CullStack >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CullStack::pushCurrentMask(). Got : '%s'\n%s",typeid(Luna< osg::CullSettings >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->pushCurrentMask();

		return 0;
	}

	// void osg::CullStack::popCurrentMask()
	static int _bind_popCurrentMask(lua_State *L) {
		if (!_lg_typecheck_popCurrentMask(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CullStack::popCurrentMask() function, expected prototype:\nvoid osg::CullStack::popCurrentMask()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CullStack* self=Luna< osg::CullSettings >::checkSubType< osg::CullStack >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CullStack::popCurrentMask(). Got : '%s'\n%s",typeid(Luna< osg::CullSettings >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->popCurrentMask();

		return 0;
	}

	// osg::CullStack::CullingStack & osg::CullStack::getClipSpaceCullingStack()
	static int _bind_getClipSpaceCullingStack(lua_State *L) {
		if (!_lg_typecheck_getClipSpaceCullingStack(L)) {
			luaL_error(L, "luna typecheck failed in osg::CullStack::CullingStack & osg::CullStack::getClipSpaceCullingStack() function, expected prototype:\nosg::CullStack::CullingStack & osg::CullStack::getClipSpaceCullingStack()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CullStack* self=Luna< osg::CullSettings >::checkSubType< osg::CullStack >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::CullStack::CullingStack & osg::CullStack::getClipSpaceCullingStack(). Got : '%s'\n%s",typeid(Luna< osg::CullSettings >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::CullStack::CullingStack* lret = &self->getClipSpaceCullingStack();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::CullStack::CullingStack >::push(L,lret,false);

		return 1;
	}

	// osg::CullStack::CullingStack & osg::CullStack::getProjectionCullingStack()
	static int _bind_getProjectionCullingStack(lua_State *L) {
		if (!_lg_typecheck_getProjectionCullingStack(L)) {
			luaL_error(L, "luna typecheck failed in osg::CullStack::CullingStack & osg::CullStack::getProjectionCullingStack() function, expected prototype:\nosg::CullStack::CullingStack & osg::CullStack::getProjectionCullingStack()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CullStack* self=Luna< osg::CullSettings >::checkSubType< osg::CullStack >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::CullStack::CullingStack & osg::CullStack::getProjectionCullingStack(). Got : '%s'\n%s",typeid(Luna< osg::CullSettings >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::CullStack::CullingStack* lret = &self->getProjectionCullingStack();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::CullStack::CullingStack >::push(L,lret,false);

		return 1;
	}

	// osg::CullStack::CullingStack & osg::CullStack::getModelViewCullingStack()
	static int _bind_getModelViewCullingStack(lua_State *L) {
		if (!_lg_typecheck_getModelViewCullingStack(L)) {
			luaL_error(L, "luna typecheck failed in osg::CullStack::CullingStack & osg::CullStack::getModelViewCullingStack() function, expected prototype:\nosg::CullStack::CullingStack & osg::CullStack::getModelViewCullingStack()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CullStack* self=Luna< osg::CullSettings >::checkSubType< osg::CullStack >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::CullStack::CullingStack & osg::CullStack::getModelViewCullingStack(). Got : '%s'\n%s",typeid(Luna< osg::CullSettings >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::CullStack::CullingStack* lret = &self->getModelViewCullingStack();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::CullStack::CullingStack >::push(L,lret,false);

		return 1;
	}

	// osg::CullingSet & osg::CullStack::getCurrentCullingSet()
	static int _bind_getCurrentCullingSet_overload_1(lua_State *L) {
		if (!_lg_typecheck_getCurrentCullingSet_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::CullingSet & osg::CullStack::getCurrentCullingSet() function, expected prototype:\nosg::CullingSet & osg::CullStack::getCurrentCullingSet()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CullStack* self=Luna< osg::CullSettings >::checkSubType< osg::CullStack >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::CullingSet & osg::CullStack::getCurrentCullingSet(). Got : '%s'\n%s",typeid(Luna< osg::CullSettings >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::CullingSet* lret = &self->getCurrentCullingSet();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::CullingSet >::push(L,lret,false);

		return 1;
	}

	// const osg::CullingSet & osg::CullStack::getCurrentCullingSet() const
	static int _bind_getCurrentCullingSet_overload_2(lua_State *L) {
		if (!_lg_typecheck_getCurrentCullingSet_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::CullingSet & osg::CullStack::getCurrentCullingSet() const function, expected prototype:\nconst osg::CullingSet & osg::CullStack::getCurrentCullingSet() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CullStack* self=Luna< osg::CullSettings >::checkSubType< osg::CullStack >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::CullingSet & osg::CullStack::getCurrentCullingSet() const. Got : '%s'\n%s",typeid(Luna< osg::CullSettings >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::CullingSet* lret = &self->getCurrentCullingSet();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::CullingSet >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::CullStack::getCurrentCullingSet
	static int _bind_getCurrentCullingSet(lua_State *L) {
		if (_lg_typecheck_getCurrentCullingSet_overload_1(L)) return _bind_getCurrentCullingSet_overload_1(L);
		if (_lg_typecheck_getCurrentCullingSet_overload_2(L)) return _bind_getCurrentCullingSet_overload_2(L);

		luaL_error(L, "error in function getCurrentCullingSet, cannot match any of the overloads for function getCurrentCullingSet:\n  getCurrentCullingSet()\n  getCurrentCullingSet()\n");
		return 0;
	}

	// osg::Viewport * osg::CullStack::getViewport()
	static int _bind_getViewport(lua_State *L) {
		if (!_lg_typecheck_getViewport(L)) {
			luaL_error(L, "luna typecheck failed in osg::Viewport * osg::CullStack::getViewport() function, expected prototype:\nosg::Viewport * osg::CullStack::getViewport()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CullStack* self=Luna< osg::CullSettings >::checkSubType< osg::CullStack >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Viewport * osg::CullStack::getViewport(). Got : '%s'\n%s",typeid(Luna< osg::CullSettings >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Viewport * lret = self->getViewport();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Viewport >::push(L,lret,false);

		return 1;
	}

	// osg::RefMatrixd * osg::CullStack::getModelViewMatrix()
	static int _bind_getModelViewMatrix(lua_State *L) {
		if (!_lg_typecheck_getModelViewMatrix(L)) {
			luaL_error(L, "luna typecheck failed in osg::RefMatrixd * osg::CullStack::getModelViewMatrix() function, expected prototype:\nosg::RefMatrixd * osg::CullStack::getModelViewMatrix()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CullStack* self=Luna< osg::CullSettings >::checkSubType< osg::CullStack >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::RefMatrixd * osg::CullStack::getModelViewMatrix(). Got : '%s'\n%s",typeid(Luna< osg::CullSettings >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::RefMatrixd * lret = self->getModelViewMatrix();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::RefMatrixd >::push(L,lret,false);

		return 1;
	}

	// osg::RefMatrixd * osg::CullStack::getProjectionMatrix()
	static int _bind_getProjectionMatrix(lua_State *L) {
		if (!_lg_typecheck_getProjectionMatrix(L)) {
			luaL_error(L, "luna typecheck failed in osg::RefMatrixd * osg::CullStack::getProjectionMatrix() function, expected prototype:\nosg::RefMatrixd * osg::CullStack::getProjectionMatrix()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CullStack* self=Luna< osg::CullSettings >::checkSubType< osg::CullStack >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::RefMatrixd * osg::CullStack::getProjectionMatrix(). Got : '%s'\n%s",typeid(Luna< osg::CullSettings >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::RefMatrixd * lret = self->getProjectionMatrix();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::RefMatrixd >::push(L,lret,false);

		return 1;
	}

	// osg::Matrixd osg::CullStack::getWindowMatrix()
	static int _bind_getWindowMatrix(lua_State *L) {
		if (!_lg_typecheck_getWindowMatrix(L)) {
			luaL_error(L, "luna typecheck failed in osg::Matrixd osg::CullStack::getWindowMatrix() function, expected prototype:\nosg::Matrixd osg::CullStack::getWindowMatrix()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CullStack* self=Luna< osg::CullSettings >::checkSubType< osg::CullStack >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Matrixd osg::CullStack::getWindowMatrix(). Got : '%s'\n%s",typeid(Luna< osg::CullSettings >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Matrixd stack_lret = self->getWindowMatrix();
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// const osg::RefMatrixd * osg::CullStack::getMVPW()
	static int _bind_getMVPW(lua_State *L) {
		if (!_lg_typecheck_getMVPW(L)) {
			luaL_error(L, "luna typecheck failed in const osg::RefMatrixd * osg::CullStack::getMVPW() function, expected prototype:\nconst osg::RefMatrixd * osg::CullStack::getMVPW()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CullStack* self=Luna< osg::CullSettings >::checkSubType< osg::CullStack >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::RefMatrixd * osg::CullStack::getMVPW(). Got : '%s'\n%s",typeid(Luna< osg::CullSettings >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::RefMatrixd * lret = self->getMVPW();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::RefMatrixd >::push(L,lret,false);

		return 1;
	}

	// const osg::Vec3f & osg::CullStack::getReferenceViewPoint() const
	static int _bind_getReferenceViewPoint(lua_State *L) {
		if (!_lg_typecheck_getReferenceViewPoint(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec3f & osg::CullStack::getReferenceViewPoint() const function, expected prototype:\nconst osg::Vec3f & osg::CullStack::getReferenceViewPoint() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CullStack* self=Luna< osg::CullSettings >::checkSubType< osg::CullStack >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec3f & osg::CullStack::getReferenceViewPoint() const. Got : '%s'\n%s",typeid(Luna< osg::CullSettings >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec3f* lret = &self->getReferenceViewPoint();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// void osg::CullStack::pushReferenceViewPoint(const osg::Vec3f & viewPoint)
	static int _bind_pushReferenceViewPoint(lua_State *L) {
		if (!_lg_typecheck_pushReferenceViewPoint(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CullStack::pushReferenceViewPoint(const osg::Vec3f & viewPoint) function, expected prototype:\nvoid osg::CullStack::pushReferenceViewPoint(const osg::Vec3f & viewPoint)\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* viewPoint_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !viewPoint_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg viewPoint in osg::CullStack::pushReferenceViewPoint function");
		}
		const osg::Vec3f & viewPoint=*viewPoint_ptr;

		osg::CullStack* self=Luna< osg::CullSettings >::checkSubType< osg::CullStack >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CullStack::pushReferenceViewPoint(const osg::Vec3f &). Got : '%s'\n%s",typeid(Luna< osg::CullSettings >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->pushReferenceViewPoint(viewPoint);

		return 0;
	}

	// void osg::CullStack::popReferenceViewPoint()
	static int _bind_popReferenceViewPoint(lua_State *L) {
		if (!_lg_typecheck_popReferenceViewPoint(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CullStack::popReferenceViewPoint() function, expected prototype:\nvoid osg::CullStack::popReferenceViewPoint()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CullStack* self=Luna< osg::CullSettings >::checkSubType< osg::CullStack >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CullStack::popReferenceViewPoint(). Got : '%s'\n%s",typeid(Luna< osg::CullSettings >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->popReferenceViewPoint();

		return 0;
	}

	// const osg::Vec3f & osg::CullStack::getEyeLocal() const
	static int _bind_getEyeLocal(lua_State *L) {
		if (!_lg_typecheck_getEyeLocal(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec3f & osg::CullStack::getEyeLocal() const function, expected prototype:\nconst osg::Vec3f & osg::CullStack::getEyeLocal() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CullStack* self=Luna< osg::CullSettings >::checkSubType< osg::CullStack >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec3f & osg::CullStack::getEyeLocal() const. Got : '%s'\n%s",typeid(Luna< osg::CullSettings >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec3f* lret = &self->getEyeLocal();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// const osg::Vec3f & osg::CullStack::getViewPointLocal() const
	static int _bind_getViewPointLocal(lua_State *L) {
		if (!_lg_typecheck_getViewPointLocal(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec3f & osg::CullStack::getViewPointLocal() const function, expected prototype:\nconst osg::Vec3f & osg::CullStack::getViewPointLocal() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CullStack* self=Luna< osg::CullSettings >::checkSubType< osg::CullStack >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec3f & osg::CullStack::getViewPointLocal() const. Got : '%s'\n%s",typeid(Luna< osg::CullSettings >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec3f* lret = &self->getViewPointLocal();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// const osg::Vec3f osg::CullStack::getUpLocal() const
	static int _bind_getUpLocal(lua_State *L) {
		if (!_lg_typecheck_getUpLocal(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec3f osg::CullStack::getUpLocal() const function, expected prototype:\nconst osg::Vec3f osg::CullStack::getUpLocal() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CullStack* self=Luna< osg::CullSettings >::checkSubType< osg::CullStack >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec3f osg::CullStack::getUpLocal() const. Got : '%s'\n%s",typeid(Luna< osg::CullSettings >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec3f stack_lret = self->getUpLocal();
		const osg::Vec3f* lret = new const osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// const osg::Vec3f osg::CullStack::getLookVectorLocal() const
	static int _bind_getLookVectorLocal(lua_State *L) {
		if (!_lg_typecheck_getLookVectorLocal(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec3f osg::CullStack::getLookVectorLocal() const function, expected prototype:\nconst osg::Vec3f osg::CullStack::getLookVectorLocal() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CullStack* self=Luna< osg::CullSettings >::checkSubType< osg::CullStack >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec3f osg::CullStack::getLookVectorLocal() const. Got : '%s'\n%s",typeid(Luna< osg::CullSettings >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec3f stack_lret = self->getLookVectorLocal();
		const osg::Vec3f* lret = new const osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// void osg::CullStack::base_setDefaults()
	static int _bind_base_setDefaults(lua_State *L) {
		if (!_lg_typecheck_base_setDefaults(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CullStack::base_setDefaults() function, expected prototype:\nvoid osg::CullStack::base_setDefaults()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CullStack* self=Luna< osg::CullSettings >::checkSubType< osg::CullStack >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CullStack::base_setDefaults(). Got : '%s'\n%s",typeid(Luna< osg::CullSettings >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->CullStack::setDefaults();

		return 0;
	}

	// void osg::CullStack::base_inheritCullSettings(const osg::CullSettings & settings)
	static int _bind_base_inheritCullSettings_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_inheritCullSettings_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CullStack::base_inheritCullSettings(const osg::CullSettings & settings) function, expected prototype:\nvoid osg::CullStack::base_inheritCullSettings(const osg::CullSettings & settings)\nClass arguments details:\narg 1 ID = 31435107\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CullSettings* settings_ptr=(Luna< osg::CullSettings >::check(L,2));
		if( !settings_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg settings in osg::CullStack::base_inheritCullSettings function");
		}
		const osg::CullSettings & settings=*settings_ptr;

		osg::CullStack* self=Luna< osg::CullSettings >::checkSubType< osg::CullStack >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CullStack::base_inheritCullSettings(const osg::CullSettings &). Got : '%s'\n%s",typeid(Luna< osg::CullSettings >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->CullStack::inheritCullSettings(settings);

		return 0;
	}

	// void osg::CullStack::base_inheritCullSettings(const osg::CullSettings & settings, unsigned int inheritanceMask)
	static int _bind_base_inheritCullSettings_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_inheritCullSettings_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CullStack::base_inheritCullSettings(const osg::CullSettings & settings, unsigned int inheritanceMask) function, expected prototype:\nvoid osg::CullStack::base_inheritCullSettings(const osg::CullSettings & settings, unsigned int inheritanceMask)\nClass arguments details:\narg 1 ID = 31435107\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CullSettings* settings_ptr=(Luna< osg::CullSettings >::check(L,2));
		if( !settings_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg settings in osg::CullStack::base_inheritCullSettings function");
		}
		const osg::CullSettings & settings=*settings_ptr;
		unsigned int inheritanceMask=(unsigned int)lua_tointeger(L,3);

		osg::CullStack* self=Luna< osg::CullSettings >::checkSubType< osg::CullStack >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CullStack::base_inheritCullSettings(const osg::CullSettings &, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::CullSettings >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->CullStack::inheritCullSettings(settings, inheritanceMask);

		return 0;
	}

	// Overload binder for osg::CullStack::base_inheritCullSettings
	static int _bind_base_inheritCullSettings(lua_State *L) {
		if (_lg_typecheck_base_inheritCullSettings_overload_1(L)) return _bind_base_inheritCullSettings_overload_1(L);
		if (_lg_typecheck_base_inheritCullSettings_overload_2(L)) return _bind_base_inheritCullSettings_overload_2(L);

		luaL_error(L, "error in function base_inheritCullSettings, cannot match any of the overloads for function base_inheritCullSettings:\n  base_inheritCullSettings(const osg::CullSettings &)\n  base_inheritCullSettings(const osg::CullSettings &, unsigned int)\n");
		return 0;
	}


	// Operator binds:

};

osg::CullStack* LunaTraits< osg::CullStack >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_CullStack::_bind_ctor(L);
}

void LunaTraits< osg::CullStack >::_bind_dtor(osg::CullStack* obj) {
	delete obj;
}

const char LunaTraits< osg::CullStack >::className[] = "CullStack";
const char LunaTraits< osg::CullStack >::fullName[] = "osg::CullStack";
const char LunaTraits< osg::CullStack >::moduleName[] = "osg";
const char* LunaTraits< osg::CullStack >::parents[] = {"osg.CullSettings", 0};
const int LunaTraits< osg::CullStack >::hash = 17122096;
const int LunaTraits< osg::CullStack >::uniqueIDs[] = {31435107,0};

luna_RegType LunaTraits< osg::CullStack >::methods[] = {
	{"reset", &luna_wrapper_osg_CullStack::_bind_reset},
	{"pushCullingSet", &luna_wrapper_osg_CullStack::_bind_pushCullingSet},
	{"popCullingSet", &luna_wrapper_osg_CullStack::_bind_popCullingSet},
	{"setOccluderList", &luna_wrapper_osg_CullStack::_bind_setOccluderList},
	{"getOccluderList", &luna_wrapper_osg_CullStack::_bind_getOccluderList},
	{"pushViewport", &luna_wrapper_osg_CullStack::_bind_pushViewport},
	{"popViewport", &luna_wrapper_osg_CullStack::_bind_popViewport},
	{"pushProjectionMatrix", &luna_wrapper_osg_CullStack::_bind_pushProjectionMatrix},
	{"popProjectionMatrix", &luna_wrapper_osg_CullStack::_bind_popProjectionMatrix},
	{"pushModelViewMatrix", &luna_wrapper_osg_CullStack::_bind_pushModelViewMatrix},
	{"popModelViewMatrix", &luna_wrapper_osg_CullStack::_bind_popModelViewMatrix},
	{"getFrustumVolume", &luna_wrapper_osg_CullStack::_bind_getFrustumVolume},
	{"pixelSize", &luna_wrapper_osg_CullStack::_bind_pixelSize},
	{"clampedPixelSize", &luna_wrapper_osg_CullStack::_bind_clampedPixelSize},
	{"disableAndPushOccludersCurrentMask", &luna_wrapper_osg_CullStack::_bind_disableAndPushOccludersCurrentMask},
	{"popOccludersCurrentMask", &luna_wrapper_osg_CullStack::_bind_popOccludersCurrentMask},
	{"isCulled", &luna_wrapper_osg_CullStack::_bind_isCulled},
	{"pushCurrentMask", &luna_wrapper_osg_CullStack::_bind_pushCurrentMask},
	{"popCurrentMask", &luna_wrapper_osg_CullStack::_bind_popCurrentMask},
	{"getClipSpaceCullingStack", &luna_wrapper_osg_CullStack::_bind_getClipSpaceCullingStack},
	{"getProjectionCullingStack", &luna_wrapper_osg_CullStack::_bind_getProjectionCullingStack},
	{"getModelViewCullingStack", &luna_wrapper_osg_CullStack::_bind_getModelViewCullingStack},
	{"getCurrentCullingSet", &luna_wrapper_osg_CullStack::_bind_getCurrentCullingSet},
	{"getViewport", &luna_wrapper_osg_CullStack::_bind_getViewport},
	{"getModelViewMatrix", &luna_wrapper_osg_CullStack::_bind_getModelViewMatrix},
	{"getProjectionMatrix", &luna_wrapper_osg_CullStack::_bind_getProjectionMatrix},
	{"getWindowMatrix", &luna_wrapper_osg_CullStack::_bind_getWindowMatrix},
	{"getMVPW", &luna_wrapper_osg_CullStack::_bind_getMVPW},
	{"getReferenceViewPoint", &luna_wrapper_osg_CullStack::_bind_getReferenceViewPoint},
	{"pushReferenceViewPoint", &luna_wrapper_osg_CullStack::_bind_pushReferenceViewPoint},
	{"popReferenceViewPoint", &luna_wrapper_osg_CullStack::_bind_popReferenceViewPoint},
	{"getEyeLocal", &luna_wrapper_osg_CullStack::_bind_getEyeLocal},
	{"getViewPointLocal", &luna_wrapper_osg_CullStack::_bind_getViewPointLocal},
	{"getUpLocal", &luna_wrapper_osg_CullStack::_bind_getUpLocal},
	{"getLookVectorLocal", &luna_wrapper_osg_CullStack::_bind_getLookVectorLocal},
	{"base_setDefaults", &luna_wrapper_osg_CullStack::_bind_base_setDefaults},
	{"base_inheritCullSettings", &luna_wrapper_osg_CullStack::_bind_base_inheritCullSettings},
	{"fromVoid", &luna_wrapper_osg_CullStack::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_CullStack::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_CullStack::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::CullStack >::converters[] = {
	{"osg::CullSettings", &luna_wrapper_osg_CullStack::_cast_from_CullSettings},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::CullStack >::enumValues[] = {
	{0,0}
};



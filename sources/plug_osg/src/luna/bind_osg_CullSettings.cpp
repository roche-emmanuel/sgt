#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_CullSettings.h>

class luna_wrapper_osg_CullSettings {
public:
	typedef Luna< osg::CullSettings > luna_t;

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

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,31435107) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::CullSettings*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::CullSettings* rhs =(Luna< osg::CullSettings >::check(L,2));
		osg::CullSettings* self=(Luna< osg::CullSettings >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		lua_pushboolean(L,self==rhs?1:0);

		return 1;
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

		osg::CullSettings* self= (osg::CullSettings*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::CullSettings >::push(L,self,false);
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

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::CullSettings* self=(Luna< osg::CullSettings >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::CullSettings");
		
		return luna_dynamicCast(L,converters,"osg::CullSettings",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,99527028) ) return false;
		if( (!(Luna< osg::ArgumentParser >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,31435107) ) return false;
		if( (!(Luna< osg::CullSettings >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,99527028) ) return false;
		if( (!(Luna< osg::ArgumentParser >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,31435107) ) return false;
		if( (!(Luna< osg::CullSettings >::check(L,2))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_setDefaults(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setInheritanceMask(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getInheritanceMask(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCullSettings(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,31435107) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_inheritCullSettings_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,31435107) ) return false;
		if( (!(Luna< osg::CullSettings >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_inheritCullSettings_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,31435107) ) return false;
		if( (!(Luna< osg::CullSettings >::check(L,2))) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readEnvironmentalVariables(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_readCommandLine(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,99527028) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setInheritanceMaskActionOnAttributeSetting(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getInheritanceMaskActionOnAttributeSetting(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_applyMaskAction(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setImpostorsActive(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getImpostorsActive(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setImpostorPixelErrorThreshold(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getImpostorPixelErrorThreshold(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDepthSortImpostorSprites(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDepthSortImpostorSprites(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setNumberOfFrameToKeepImpostorSprites(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumberOfFrameToKeepImpostorSprites(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setComputeNearFarMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getComputeNearFarMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setNearFarRatio(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNearFarRatio(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCullingMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCullingMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCullMask(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCullMask(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCullMaskLeft(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCullMaskLeft(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCullMaskRight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCullMaskRight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setLODScale(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getLODScale(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setSmallFeatureCullingPixelSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSmallFeatureCullingPixelSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setClampProjectionMatrixCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getClampProjectionMatrixCallback_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getClampProjectionMatrixCallback_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_write(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2993706) ) return false;
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
	// (found 1 valid operators)
	inline static bool _lg_typecheck_op_assign(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,31435107) ) return false;
		return true;
	}


	// Constructor binds:
	// osg::CullSettings::CullSettings()
	static osg::CullSettings* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::CullSettings::CullSettings() function, expected prototype:\nosg::CullSettings::CullSettings()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::CullSettings();
	}

	// osg::CullSettings::CullSettings(osg::ArgumentParser & arguments)
	static osg::CullSettings* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::CullSettings::CullSettings(osg::ArgumentParser & arguments) function, expected prototype:\nosg::CullSettings::CullSettings(osg::ArgumentParser & arguments)\nClass arguments details:\narg 1 ID = 99527028\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ArgumentParser* arguments_ptr=(Luna< osg::ArgumentParser >::check(L,1));
		if( !arguments_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg arguments in osg::CullSettings::CullSettings function");
		}
		osg::ArgumentParser & arguments=*arguments_ptr;

		return new osg::CullSettings(arguments);
	}

	// osg::CullSettings::CullSettings(const osg::CullSettings & cs)
	static osg::CullSettings* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::CullSettings::CullSettings(const osg::CullSettings & cs) function, expected prototype:\nosg::CullSettings::CullSettings(const osg::CullSettings & cs)\nClass arguments details:\narg 1 ID = 31435107\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CullSettings* cs_ptr=(Luna< osg::CullSettings >::check(L,1));
		if( !cs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cs in osg::CullSettings::CullSettings function");
		}
		const osg::CullSettings & cs=*cs_ptr;

		return new osg::CullSettings(cs);
	}

	// osg::CullSettings::CullSettings(lua_Table * data)
	static osg::CullSettings* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::CullSettings::CullSettings(lua_Table * data) function, expected prototype:\nosg::CullSettings::CullSettings(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_CullSettings(L,NULL);
	}

	// osg::CullSettings::CullSettings(lua_Table * data, osg::ArgumentParser & arguments)
	static osg::CullSettings* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in osg::CullSettings::CullSettings(lua_Table * data, osg::ArgumentParser & arguments) function, expected prototype:\nosg::CullSettings::CullSettings(lua_Table * data, osg::ArgumentParser & arguments)\nClass arguments details:\narg 2 ID = 99527028\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ArgumentParser* arguments_ptr=(Luna< osg::ArgumentParser >::check(L,2));
		if( !arguments_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg arguments in osg::CullSettings::CullSettings function");
		}
		osg::ArgumentParser & arguments=*arguments_ptr;

		return new wrapper_osg_CullSettings(L,NULL, arguments);
	}

	// osg::CullSettings::CullSettings(lua_Table * data, const osg::CullSettings & cs)
	static osg::CullSettings* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in osg::CullSettings::CullSettings(lua_Table * data, const osg::CullSettings & cs) function, expected prototype:\nosg::CullSettings::CullSettings(lua_Table * data, const osg::CullSettings & cs)\nClass arguments details:\narg 2 ID = 31435107\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CullSettings* cs_ptr=(Luna< osg::CullSettings >::check(L,2));
		if( !cs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cs in osg::CullSettings::CullSettings function");
		}
		const osg::CullSettings & cs=*cs_ptr;

		return new wrapper_osg_CullSettings(L,NULL, cs);
	}

	// Overload binder for osg::CullSettings::CullSettings
	static osg::CullSettings* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);

		luaL_error(L, "error in function CullSettings, cannot match any of the overloads for function CullSettings:\n  CullSettings()\n  CullSettings(osg::ArgumentParser &)\n  CullSettings(const osg::CullSettings &)\n  CullSettings(lua_Table *)\n  CullSettings(lua_Table *, osg::ArgumentParser &)\n  CullSettings(lua_Table *, const osg::CullSettings &)\n");
		return NULL;
	}


	// Function binds:
	// void osg::CullSettings::setDefaults()
	static int _bind_setDefaults(lua_State *L) {
		if (!_lg_typecheck_setDefaults(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CullSettings::setDefaults() function, expected prototype:\nvoid osg::CullSettings::setDefaults()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CullSettings* self=(Luna< osg::CullSettings >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CullSettings::setDefaults(). Got : '%s'\n%s",typeid(Luna< osg::CullSettings >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setDefaults();

		return 0;
	}

	// void osg::CullSettings::setInheritanceMask(int mask)
	static int _bind_setInheritanceMask(lua_State *L) {
		if (!_lg_typecheck_setInheritanceMask(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CullSettings::setInheritanceMask(int mask) function, expected prototype:\nvoid osg::CullSettings::setInheritanceMask(int mask)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int mask=(int)lua_tointeger(L,2);

		osg::CullSettings* self=(Luna< osg::CullSettings >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CullSettings::setInheritanceMask(int). Got : '%s'\n%s",typeid(Luna< osg::CullSettings >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setInheritanceMask(mask);

		return 0;
	}

	// int osg::CullSettings::getInheritanceMask() const
	static int _bind_getInheritanceMask(lua_State *L) {
		if (!_lg_typecheck_getInheritanceMask(L)) {
			luaL_error(L, "luna typecheck failed in int osg::CullSettings::getInheritanceMask() const function, expected prototype:\nint osg::CullSettings::getInheritanceMask() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CullSettings* self=(Luna< osg::CullSettings >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::CullSettings::getInheritanceMask() const. Got : '%s'\n%s",typeid(Luna< osg::CullSettings >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getInheritanceMask();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::CullSettings::setCullSettings(const osg::CullSettings & settings)
	static int _bind_setCullSettings(lua_State *L) {
		if (!_lg_typecheck_setCullSettings(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CullSettings::setCullSettings(const osg::CullSettings & settings) function, expected prototype:\nvoid osg::CullSettings::setCullSettings(const osg::CullSettings & settings)\nClass arguments details:\narg 1 ID = 31435107\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CullSettings* settings_ptr=(Luna< osg::CullSettings >::check(L,2));
		if( !settings_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg settings in osg::CullSettings::setCullSettings function");
		}
		const osg::CullSettings & settings=*settings_ptr;

		osg::CullSettings* self=(Luna< osg::CullSettings >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CullSettings::setCullSettings(const osg::CullSettings &). Got : '%s'\n%s",typeid(Luna< osg::CullSettings >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setCullSettings(settings);

		return 0;
	}

	// void osg::CullSettings::inheritCullSettings(const osg::CullSettings & settings)
	static int _bind_inheritCullSettings_overload_1(lua_State *L) {
		if (!_lg_typecheck_inheritCullSettings_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CullSettings::inheritCullSettings(const osg::CullSettings & settings) function, expected prototype:\nvoid osg::CullSettings::inheritCullSettings(const osg::CullSettings & settings)\nClass arguments details:\narg 1 ID = 31435107\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CullSettings* settings_ptr=(Luna< osg::CullSettings >::check(L,2));
		if( !settings_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg settings in osg::CullSettings::inheritCullSettings function");
		}
		const osg::CullSettings & settings=*settings_ptr;

		osg::CullSettings* self=(Luna< osg::CullSettings >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CullSettings::inheritCullSettings(const osg::CullSettings &). Got : '%s'\n%s",typeid(Luna< osg::CullSettings >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->inheritCullSettings(settings);

		return 0;
	}

	// void osg::CullSettings::inheritCullSettings(const osg::CullSettings & settings, unsigned int inheritanceMask)
	static int _bind_inheritCullSettings_overload_2(lua_State *L) {
		if (!_lg_typecheck_inheritCullSettings_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CullSettings::inheritCullSettings(const osg::CullSettings & settings, unsigned int inheritanceMask) function, expected prototype:\nvoid osg::CullSettings::inheritCullSettings(const osg::CullSettings & settings, unsigned int inheritanceMask)\nClass arguments details:\narg 1 ID = 31435107\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CullSettings* settings_ptr=(Luna< osg::CullSettings >::check(L,2));
		if( !settings_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg settings in osg::CullSettings::inheritCullSettings function");
		}
		const osg::CullSettings & settings=*settings_ptr;
		unsigned int inheritanceMask=(unsigned int)lua_tointeger(L,3);

		osg::CullSettings* self=(Luna< osg::CullSettings >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CullSettings::inheritCullSettings(const osg::CullSettings &, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::CullSettings >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->inheritCullSettings(settings, inheritanceMask);

		return 0;
	}

	// Overload binder for osg::CullSettings::inheritCullSettings
	static int _bind_inheritCullSettings(lua_State *L) {
		if (_lg_typecheck_inheritCullSettings_overload_1(L)) return _bind_inheritCullSettings_overload_1(L);
		if (_lg_typecheck_inheritCullSettings_overload_2(L)) return _bind_inheritCullSettings_overload_2(L);

		luaL_error(L, "error in function inheritCullSettings, cannot match any of the overloads for function inheritCullSettings:\n  inheritCullSettings(const osg::CullSettings &)\n  inheritCullSettings(const osg::CullSettings &, unsigned int)\n");
		return 0;
	}

	// void osg::CullSettings::readEnvironmentalVariables()
	static int _bind_readEnvironmentalVariables(lua_State *L) {
		if (!_lg_typecheck_readEnvironmentalVariables(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CullSettings::readEnvironmentalVariables() function, expected prototype:\nvoid osg::CullSettings::readEnvironmentalVariables()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CullSettings* self=(Luna< osg::CullSettings >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CullSettings::readEnvironmentalVariables(). Got : '%s'\n%s",typeid(Luna< osg::CullSettings >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->readEnvironmentalVariables();

		return 0;
	}

	// void osg::CullSettings::readCommandLine(osg::ArgumentParser & arguments)
	static int _bind_readCommandLine(lua_State *L) {
		if (!_lg_typecheck_readCommandLine(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CullSettings::readCommandLine(osg::ArgumentParser & arguments) function, expected prototype:\nvoid osg::CullSettings::readCommandLine(osg::ArgumentParser & arguments)\nClass arguments details:\narg 1 ID = 99527028\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ArgumentParser* arguments_ptr=(Luna< osg::ArgumentParser >::check(L,2));
		if( !arguments_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg arguments in osg::CullSettings::readCommandLine function");
		}
		osg::ArgumentParser & arguments=*arguments_ptr;

		osg::CullSettings* self=(Luna< osg::CullSettings >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CullSettings::readCommandLine(osg::ArgumentParser &). Got : '%s'\n%s",typeid(Luna< osg::CullSettings >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->readCommandLine(arguments);

		return 0;
	}

	// void osg::CullSettings::setInheritanceMaskActionOnAttributeSetting(osg::CullSettings::InheritanceMaskActionOnAttributeSetting action)
	static int _bind_setInheritanceMaskActionOnAttributeSetting(lua_State *L) {
		if (!_lg_typecheck_setInheritanceMaskActionOnAttributeSetting(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CullSettings::setInheritanceMaskActionOnAttributeSetting(osg::CullSettings::InheritanceMaskActionOnAttributeSetting action) function, expected prototype:\nvoid osg::CullSettings::setInheritanceMaskActionOnAttributeSetting(osg::CullSettings::InheritanceMaskActionOnAttributeSetting action)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::CullSettings::InheritanceMaskActionOnAttributeSetting action=(osg::CullSettings::InheritanceMaskActionOnAttributeSetting)lua_tointeger(L,2);

		osg::CullSettings* self=(Luna< osg::CullSettings >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CullSettings::setInheritanceMaskActionOnAttributeSetting(osg::CullSettings::InheritanceMaskActionOnAttributeSetting). Got : '%s'\n%s",typeid(Luna< osg::CullSettings >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setInheritanceMaskActionOnAttributeSetting(action);

		return 0;
	}

	// osg::CullSettings::InheritanceMaskActionOnAttributeSetting osg::CullSettings::getInheritanceMaskActionOnAttributeSetting() const
	static int _bind_getInheritanceMaskActionOnAttributeSetting(lua_State *L) {
		if (!_lg_typecheck_getInheritanceMaskActionOnAttributeSetting(L)) {
			luaL_error(L, "luna typecheck failed in osg::CullSettings::InheritanceMaskActionOnAttributeSetting osg::CullSettings::getInheritanceMaskActionOnAttributeSetting() const function, expected prototype:\nosg::CullSettings::InheritanceMaskActionOnAttributeSetting osg::CullSettings::getInheritanceMaskActionOnAttributeSetting() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CullSettings* self=(Luna< osg::CullSettings >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::CullSettings::InheritanceMaskActionOnAttributeSetting osg::CullSettings::getInheritanceMaskActionOnAttributeSetting() const. Got : '%s'\n%s",typeid(Luna< osg::CullSettings >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::CullSettings::InheritanceMaskActionOnAttributeSetting lret = self->getInheritanceMaskActionOnAttributeSetting();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::CullSettings::applyMaskAction(unsigned int maskBit)
	static int _bind_applyMaskAction(lua_State *L) {
		if (!_lg_typecheck_applyMaskAction(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CullSettings::applyMaskAction(unsigned int maskBit) function, expected prototype:\nvoid osg::CullSettings::applyMaskAction(unsigned int maskBit)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int maskBit=(unsigned int)lua_tointeger(L,2);

		osg::CullSettings* self=(Luna< osg::CullSettings >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CullSettings::applyMaskAction(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::CullSettings >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->applyMaskAction(maskBit);

		return 0;
	}

	// void osg::CullSettings::setImpostorsActive(bool active)
	static int _bind_setImpostorsActive(lua_State *L) {
		if (!_lg_typecheck_setImpostorsActive(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CullSettings::setImpostorsActive(bool active) function, expected prototype:\nvoid osg::CullSettings::setImpostorsActive(bool active)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool active=(bool)(lua_toboolean(L,2)==1);

		osg::CullSettings* self=(Luna< osg::CullSettings >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CullSettings::setImpostorsActive(bool). Got : '%s'\n%s",typeid(Luna< osg::CullSettings >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setImpostorsActive(active);

		return 0;
	}

	// bool osg::CullSettings::getImpostorsActive() const
	static int _bind_getImpostorsActive(lua_State *L) {
		if (!_lg_typecheck_getImpostorsActive(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::CullSettings::getImpostorsActive() const function, expected prototype:\nbool osg::CullSettings::getImpostorsActive() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CullSettings* self=(Luna< osg::CullSettings >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::CullSettings::getImpostorsActive() const. Got : '%s'\n%s",typeid(Luna< osg::CullSettings >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getImpostorsActive();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::CullSettings::setImpostorPixelErrorThreshold(float numPixels)
	static int _bind_setImpostorPixelErrorThreshold(lua_State *L) {
		if (!_lg_typecheck_setImpostorPixelErrorThreshold(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CullSettings::setImpostorPixelErrorThreshold(float numPixels) function, expected prototype:\nvoid osg::CullSettings::setImpostorPixelErrorThreshold(float numPixels)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float numPixels=(float)lua_tonumber(L,2);

		osg::CullSettings* self=(Luna< osg::CullSettings >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CullSettings::setImpostorPixelErrorThreshold(float). Got : '%s'\n%s",typeid(Luna< osg::CullSettings >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setImpostorPixelErrorThreshold(numPixels);

		return 0;
	}

	// float osg::CullSettings::getImpostorPixelErrorThreshold() const
	static int _bind_getImpostorPixelErrorThreshold(lua_State *L) {
		if (!_lg_typecheck_getImpostorPixelErrorThreshold(L)) {
			luaL_error(L, "luna typecheck failed in float osg::CullSettings::getImpostorPixelErrorThreshold() const function, expected prototype:\nfloat osg::CullSettings::getImpostorPixelErrorThreshold() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CullSettings* self=(Luna< osg::CullSettings >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float osg::CullSettings::getImpostorPixelErrorThreshold() const. Got : '%s'\n%s",typeid(Luna< osg::CullSettings >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getImpostorPixelErrorThreshold();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::CullSettings::setDepthSortImpostorSprites(bool doDepthSort)
	static int _bind_setDepthSortImpostorSprites(lua_State *L) {
		if (!_lg_typecheck_setDepthSortImpostorSprites(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CullSettings::setDepthSortImpostorSprites(bool doDepthSort) function, expected prototype:\nvoid osg::CullSettings::setDepthSortImpostorSprites(bool doDepthSort)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool doDepthSort=(bool)(lua_toboolean(L,2)==1);

		osg::CullSettings* self=(Luna< osg::CullSettings >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CullSettings::setDepthSortImpostorSprites(bool). Got : '%s'\n%s",typeid(Luna< osg::CullSettings >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setDepthSortImpostorSprites(doDepthSort);

		return 0;
	}

	// bool osg::CullSettings::getDepthSortImpostorSprites() const
	static int _bind_getDepthSortImpostorSprites(lua_State *L) {
		if (!_lg_typecheck_getDepthSortImpostorSprites(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::CullSettings::getDepthSortImpostorSprites() const function, expected prototype:\nbool osg::CullSettings::getDepthSortImpostorSprites() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CullSettings* self=(Luna< osg::CullSettings >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::CullSettings::getDepthSortImpostorSprites() const. Got : '%s'\n%s",typeid(Luna< osg::CullSettings >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getDepthSortImpostorSprites();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::CullSettings::setNumberOfFrameToKeepImpostorSprites(int numFrames)
	static int _bind_setNumberOfFrameToKeepImpostorSprites(lua_State *L) {
		if (!_lg_typecheck_setNumberOfFrameToKeepImpostorSprites(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CullSettings::setNumberOfFrameToKeepImpostorSprites(int numFrames) function, expected prototype:\nvoid osg::CullSettings::setNumberOfFrameToKeepImpostorSprites(int numFrames)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int numFrames=(int)lua_tointeger(L,2);

		osg::CullSettings* self=(Luna< osg::CullSettings >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CullSettings::setNumberOfFrameToKeepImpostorSprites(int). Got : '%s'\n%s",typeid(Luna< osg::CullSettings >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setNumberOfFrameToKeepImpostorSprites(numFrames);

		return 0;
	}

	// int osg::CullSettings::getNumberOfFrameToKeepImpostorSprites() const
	static int _bind_getNumberOfFrameToKeepImpostorSprites(lua_State *L) {
		if (!_lg_typecheck_getNumberOfFrameToKeepImpostorSprites(L)) {
			luaL_error(L, "luna typecheck failed in int osg::CullSettings::getNumberOfFrameToKeepImpostorSprites() const function, expected prototype:\nint osg::CullSettings::getNumberOfFrameToKeepImpostorSprites() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CullSettings* self=(Luna< osg::CullSettings >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::CullSettings::getNumberOfFrameToKeepImpostorSprites() const. Got : '%s'\n%s",typeid(Luna< osg::CullSettings >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getNumberOfFrameToKeepImpostorSprites();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::CullSettings::setComputeNearFarMode(osg::CullSettings::ComputeNearFarMode cnfm)
	static int _bind_setComputeNearFarMode(lua_State *L) {
		if (!_lg_typecheck_setComputeNearFarMode(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CullSettings::setComputeNearFarMode(osg::CullSettings::ComputeNearFarMode cnfm) function, expected prototype:\nvoid osg::CullSettings::setComputeNearFarMode(osg::CullSettings::ComputeNearFarMode cnfm)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::CullSettings::ComputeNearFarMode cnfm=(osg::CullSettings::ComputeNearFarMode)lua_tointeger(L,2);

		osg::CullSettings* self=(Luna< osg::CullSettings >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CullSettings::setComputeNearFarMode(osg::CullSettings::ComputeNearFarMode). Got : '%s'\n%s",typeid(Luna< osg::CullSettings >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setComputeNearFarMode(cnfm);

		return 0;
	}

	// osg::CullSettings::ComputeNearFarMode osg::CullSettings::getComputeNearFarMode() const
	static int _bind_getComputeNearFarMode(lua_State *L) {
		if (!_lg_typecheck_getComputeNearFarMode(L)) {
			luaL_error(L, "luna typecheck failed in osg::CullSettings::ComputeNearFarMode osg::CullSettings::getComputeNearFarMode() const function, expected prototype:\nosg::CullSettings::ComputeNearFarMode osg::CullSettings::getComputeNearFarMode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CullSettings* self=(Luna< osg::CullSettings >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::CullSettings::ComputeNearFarMode osg::CullSettings::getComputeNearFarMode() const. Got : '%s'\n%s",typeid(Luna< osg::CullSettings >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::CullSettings::ComputeNearFarMode lret = self->getComputeNearFarMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::CullSettings::setNearFarRatio(double ratio)
	static int _bind_setNearFarRatio(lua_State *L) {
		if (!_lg_typecheck_setNearFarRatio(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CullSettings::setNearFarRatio(double ratio) function, expected prototype:\nvoid osg::CullSettings::setNearFarRatio(double ratio)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double ratio=(double)lua_tonumber(L,2);

		osg::CullSettings* self=(Luna< osg::CullSettings >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CullSettings::setNearFarRatio(double). Got : '%s'\n%s",typeid(Luna< osg::CullSettings >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setNearFarRatio(ratio);

		return 0;
	}

	// double osg::CullSettings::getNearFarRatio() const
	static int _bind_getNearFarRatio(lua_State *L) {
		if (!_lg_typecheck_getNearFarRatio(L)) {
			luaL_error(L, "luna typecheck failed in double osg::CullSettings::getNearFarRatio() const function, expected prototype:\ndouble osg::CullSettings::getNearFarRatio() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CullSettings* self=(Luna< osg::CullSettings >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double osg::CullSettings::getNearFarRatio() const. Got : '%s'\n%s",typeid(Luna< osg::CullSettings >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getNearFarRatio();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::CullSettings::setCullingMode(int mode)
	static int _bind_setCullingMode(lua_State *L) {
		if (!_lg_typecheck_setCullingMode(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CullSettings::setCullingMode(int mode) function, expected prototype:\nvoid osg::CullSettings::setCullingMode(int mode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int mode=(int)lua_tointeger(L,2);

		osg::CullSettings* self=(Luna< osg::CullSettings >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CullSettings::setCullingMode(int). Got : '%s'\n%s",typeid(Luna< osg::CullSettings >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setCullingMode(mode);

		return 0;
	}

	// int osg::CullSettings::getCullingMode() const
	static int _bind_getCullingMode(lua_State *L) {
		if (!_lg_typecheck_getCullingMode(L)) {
			luaL_error(L, "luna typecheck failed in int osg::CullSettings::getCullingMode() const function, expected prototype:\nint osg::CullSettings::getCullingMode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CullSettings* self=(Luna< osg::CullSettings >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::CullSettings::getCullingMode() const. Got : '%s'\n%s",typeid(Luna< osg::CullSettings >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getCullingMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::CullSettings::setCullMask(unsigned int nm)
	static int _bind_setCullMask(lua_State *L) {
		if (!_lg_typecheck_setCullMask(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CullSettings::setCullMask(unsigned int nm) function, expected prototype:\nvoid osg::CullSettings::setCullMask(unsigned int nm)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int nm=(unsigned int)lua_tointeger(L,2);

		osg::CullSettings* self=(Luna< osg::CullSettings >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CullSettings::setCullMask(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::CullSettings >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setCullMask(nm);

		return 0;
	}

	// unsigned int osg::CullSettings::getCullMask() const
	static int _bind_getCullMask(lua_State *L) {
		if (!_lg_typecheck_getCullMask(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::CullSettings::getCullMask() const function, expected prototype:\nunsigned int osg::CullSettings::getCullMask() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CullSettings* self=(Luna< osg::CullSettings >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::CullSettings::getCullMask() const. Got : '%s'\n%s",typeid(Luna< osg::CullSettings >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getCullMask();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::CullSettings::setCullMaskLeft(unsigned int nm)
	static int _bind_setCullMaskLeft(lua_State *L) {
		if (!_lg_typecheck_setCullMaskLeft(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CullSettings::setCullMaskLeft(unsigned int nm) function, expected prototype:\nvoid osg::CullSettings::setCullMaskLeft(unsigned int nm)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int nm=(unsigned int)lua_tointeger(L,2);

		osg::CullSettings* self=(Luna< osg::CullSettings >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CullSettings::setCullMaskLeft(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::CullSettings >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setCullMaskLeft(nm);

		return 0;
	}

	// unsigned int osg::CullSettings::getCullMaskLeft() const
	static int _bind_getCullMaskLeft(lua_State *L) {
		if (!_lg_typecheck_getCullMaskLeft(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::CullSettings::getCullMaskLeft() const function, expected prototype:\nunsigned int osg::CullSettings::getCullMaskLeft() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CullSettings* self=(Luna< osg::CullSettings >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::CullSettings::getCullMaskLeft() const. Got : '%s'\n%s",typeid(Luna< osg::CullSettings >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getCullMaskLeft();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::CullSettings::setCullMaskRight(unsigned int nm)
	static int _bind_setCullMaskRight(lua_State *L) {
		if (!_lg_typecheck_setCullMaskRight(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CullSettings::setCullMaskRight(unsigned int nm) function, expected prototype:\nvoid osg::CullSettings::setCullMaskRight(unsigned int nm)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int nm=(unsigned int)lua_tointeger(L,2);

		osg::CullSettings* self=(Luna< osg::CullSettings >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CullSettings::setCullMaskRight(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::CullSettings >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setCullMaskRight(nm);

		return 0;
	}

	// unsigned int osg::CullSettings::getCullMaskRight() const
	static int _bind_getCullMaskRight(lua_State *L) {
		if (!_lg_typecheck_getCullMaskRight(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::CullSettings::getCullMaskRight() const function, expected prototype:\nunsigned int osg::CullSettings::getCullMaskRight() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CullSettings* self=(Luna< osg::CullSettings >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::CullSettings::getCullMaskRight() const. Got : '%s'\n%s",typeid(Luna< osg::CullSettings >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getCullMaskRight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::CullSettings::setLODScale(float scale)
	static int _bind_setLODScale(lua_State *L) {
		if (!_lg_typecheck_setLODScale(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CullSettings::setLODScale(float scale) function, expected prototype:\nvoid osg::CullSettings::setLODScale(float scale)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float scale=(float)lua_tonumber(L,2);

		osg::CullSettings* self=(Luna< osg::CullSettings >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CullSettings::setLODScale(float). Got : '%s'\n%s",typeid(Luna< osg::CullSettings >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setLODScale(scale);

		return 0;
	}

	// float osg::CullSettings::getLODScale() const
	static int _bind_getLODScale(lua_State *L) {
		if (!_lg_typecheck_getLODScale(L)) {
			luaL_error(L, "luna typecheck failed in float osg::CullSettings::getLODScale() const function, expected prototype:\nfloat osg::CullSettings::getLODScale() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CullSettings* self=(Luna< osg::CullSettings >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float osg::CullSettings::getLODScale() const. Got : '%s'\n%s",typeid(Luna< osg::CullSettings >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getLODScale();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::CullSettings::setSmallFeatureCullingPixelSize(float value)
	static int _bind_setSmallFeatureCullingPixelSize(lua_State *L) {
		if (!_lg_typecheck_setSmallFeatureCullingPixelSize(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CullSettings::setSmallFeatureCullingPixelSize(float value) function, expected prototype:\nvoid osg::CullSettings::setSmallFeatureCullingPixelSize(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		osg::CullSettings* self=(Luna< osg::CullSettings >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CullSettings::setSmallFeatureCullingPixelSize(float). Got : '%s'\n%s",typeid(Luna< osg::CullSettings >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setSmallFeatureCullingPixelSize(value);

		return 0;
	}

	// float osg::CullSettings::getSmallFeatureCullingPixelSize() const
	static int _bind_getSmallFeatureCullingPixelSize(lua_State *L) {
		if (!_lg_typecheck_getSmallFeatureCullingPixelSize(L)) {
			luaL_error(L, "luna typecheck failed in float osg::CullSettings::getSmallFeatureCullingPixelSize() const function, expected prototype:\nfloat osg::CullSettings::getSmallFeatureCullingPixelSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CullSettings* self=(Luna< osg::CullSettings >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float osg::CullSettings::getSmallFeatureCullingPixelSize() const. Got : '%s'\n%s",typeid(Luna< osg::CullSettings >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getSmallFeatureCullingPixelSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::CullSettings::setClampProjectionMatrixCallback(osg::CullSettings::ClampProjectionMatrixCallback * cpmc)
	static int _bind_setClampProjectionMatrixCallback(lua_State *L) {
		if (!_lg_typecheck_setClampProjectionMatrixCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CullSettings::setClampProjectionMatrixCallback(osg::CullSettings::ClampProjectionMatrixCallback * cpmc) function, expected prototype:\nvoid osg::CullSettings::setClampProjectionMatrixCallback(osg::CullSettings::ClampProjectionMatrixCallback * cpmc)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::CullSettings::ClampProjectionMatrixCallback* cpmc=(Luna< osg::Referenced >::checkSubType< osg::CullSettings::ClampProjectionMatrixCallback >(L,2));

		osg::CullSettings* self=(Luna< osg::CullSettings >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CullSettings::setClampProjectionMatrixCallback(osg::CullSettings::ClampProjectionMatrixCallback *). Got : '%s'\n%s",typeid(Luna< osg::CullSettings >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setClampProjectionMatrixCallback(cpmc);

		return 0;
	}

	// osg::CullSettings::ClampProjectionMatrixCallback * osg::CullSettings::getClampProjectionMatrixCallback()
	static int _bind_getClampProjectionMatrixCallback_overload_1(lua_State *L) {
		if (!_lg_typecheck_getClampProjectionMatrixCallback_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::CullSettings::ClampProjectionMatrixCallback * osg::CullSettings::getClampProjectionMatrixCallback() function, expected prototype:\nosg::CullSettings::ClampProjectionMatrixCallback * osg::CullSettings::getClampProjectionMatrixCallback()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CullSettings* self=(Luna< osg::CullSettings >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::CullSettings::ClampProjectionMatrixCallback * osg::CullSettings::getClampProjectionMatrixCallback(). Got : '%s'\n%s",typeid(Luna< osg::CullSettings >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::CullSettings::ClampProjectionMatrixCallback * lret = self->getClampProjectionMatrixCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::CullSettings::ClampProjectionMatrixCallback >::push(L,lret,false);

		return 1;
	}

	// const osg::CullSettings::ClampProjectionMatrixCallback * osg::CullSettings::getClampProjectionMatrixCallback() const
	static int _bind_getClampProjectionMatrixCallback_overload_2(lua_State *L) {
		if (!_lg_typecheck_getClampProjectionMatrixCallback_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::CullSettings::ClampProjectionMatrixCallback * osg::CullSettings::getClampProjectionMatrixCallback() const function, expected prototype:\nconst osg::CullSettings::ClampProjectionMatrixCallback * osg::CullSettings::getClampProjectionMatrixCallback() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CullSettings* self=(Luna< osg::CullSettings >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::CullSettings::ClampProjectionMatrixCallback * osg::CullSettings::getClampProjectionMatrixCallback() const. Got : '%s'\n%s",typeid(Luna< osg::CullSettings >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::CullSettings::ClampProjectionMatrixCallback * lret = self->getClampProjectionMatrixCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::CullSettings::ClampProjectionMatrixCallback >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::CullSettings::getClampProjectionMatrixCallback
	static int _bind_getClampProjectionMatrixCallback(lua_State *L) {
		if (_lg_typecheck_getClampProjectionMatrixCallback_overload_1(L)) return _bind_getClampProjectionMatrixCallback_overload_1(L);
		if (_lg_typecheck_getClampProjectionMatrixCallback_overload_2(L)) return _bind_getClampProjectionMatrixCallback_overload_2(L);

		luaL_error(L, "error in function getClampProjectionMatrixCallback, cannot match any of the overloads for function getClampProjectionMatrixCallback:\n  getClampProjectionMatrixCallback()\n  getClampProjectionMatrixCallback()\n");
		return 0;
	}

	// void osg::CullSettings::write(std::ostream & out)
	static int _bind_write(lua_State *L) {
		if (!_lg_typecheck_write(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CullSettings::write(std::ostream & out) function, expected prototype:\nvoid osg::CullSettings::write(std::ostream & out)\nClass arguments details:\narg 1 ID = 2993706\n\n%s",luna_dumpStack(L).c_str());
		}

		std::ostream* out_ptr=(Luna< std::ostream >::check(L,2));
		if( !out_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg out in osg::CullSettings::write function");
		}
		std::ostream & out=*out_ptr;

		osg::CullSettings* self=(Luna< osg::CullSettings >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CullSettings::write(std::ostream &). Got : '%s'\n%s",typeid(Luna< osg::CullSettings >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->write(out);

		return 0;
	}

	// void osg::CullSettings::base_setDefaults()
	static int _bind_base_setDefaults(lua_State *L) {
		if (!_lg_typecheck_base_setDefaults(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CullSettings::base_setDefaults() function, expected prototype:\nvoid osg::CullSettings::base_setDefaults()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CullSettings* self=(Luna< osg::CullSettings >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CullSettings::base_setDefaults(). Got : '%s'\n%s",typeid(Luna< osg::CullSettings >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->CullSettings::setDefaults();

		return 0;
	}

	// void osg::CullSettings::base_inheritCullSettings(const osg::CullSettings & settings)
	static int _bind_base_inheritCullSettings_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_inheritCullSettings_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CullSettings::base_inheritCullSettings(const osg::CullSettings & settings) function, expected prototype:\nvoid osg::CullSettings::base_inheritCullSettings(const osg::CullSettings & settings)\nClass arguments details:\narg 1 ID = 31435107\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CullSettings* settings_ptr=(Luna< osg::CullSettings >::check(L,2));
		if( !settings_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg settings in osg::CullSettings::base_inheritCullSettings function");
		}
		const osg::CullSettings & settings=*settings_ptr;

		osg::CullSettings* self=(Luna< osg::CullSettings >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CullSettings::base_inheritCullSettings(const osg::CullSettings &). Got : '%s'\n%s",typeid(Luna< osg::CullSettings >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->CullSettings::inheritCullSettings(settings);

		return 0;
	}

	// void osg::CullSettings::base_inheritCullSettings(const osg::CullSettings & settings, unsigned int inheritanceMask)
	static int _bind_base_inheritCullSettings_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_inheritCullSettings_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CullSettings::base_inheritCullSettings(const osg::CullSettings & settings, unsigned int inheritanceMask) function, expected prototype:\nvoid osg::CullSettings::base_inheritCullSettings(const osg::CullSettings & settings, unsigned int inheritanceMask)\nClass arguments details:\narg 1 ID = 31435107\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CullSettings* settings_ptr=(Luna< osg::CullSettings >::check(L,2));
		if( !settings_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg settings in osg::CullSettings::base_inheritCullSettings function");
		}
		const osg::CullSettings & settings=*settings_ptr;
		unsigned int inheritanceMask=(unsigned int)lua_tointeger(L,3);

		osg::CullSettings* self=(Luna< osg::CullSettings >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CullSettings::base_inheritCullSettings(const osg::CullSettings &, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::CullSettings >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->CullSettings::inheritCullSettings(settings, inheritanceMask);

		return 0;
	}

	// Overload binder for osg::CullSettings::base_inheritCullSettings
	static int _bind_base_inheritCullSettings(lua_State *L) {
		if (_lg_typecheck_base_inheritCullSettings_overload_1(L)) return _bind_base_inheritCullSettings_overload_1(L);
		if (_lg_typecheck_base_inheritCullSettings_overload_2(L)) return _bind_base_inheritCullSettings_overload_2(L);

		luaL_error(L, "error in function base_inheritCullSettings, cannot match any of the overloads for function base_inheritCullSettings:\n  base_inheritCullSettings(const osg::CullSettings &)\n  base_inheritCullSettings(const osg::CullSettings &, unsigned int)\n");
		return 0;
	}


	// Operator binds:
	// osg::CullSettings & osg::CullSettings::operator=(const osg::CullSettings & settings)
	static int _bind_op_assign(lua_State *L) {
		if (!_lg_typecheck_op_assign(L)) {
			luaL_error(L, "luna typecheck failed in osg::CullSettings & osg::CullSettings::operator=(const osg::CullSettings & settings) function, expected prototype:\nosg::CullSettings & osg::CullSettings::operator=(const osg::CullSettings & settings)\nClass arguments details:\narg 1 ID = 31435107\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CullSettings* settings_ptr=(Luna< osg::CullSettings >::check(L,2));
		if( !settings_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg settings in osg::CullSettings::operator= function");
		}
		const osg::CullSettings & settings=*settings_ptr;

		osg::CullSettings* self=(Luna< osg::CullSettings >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::CullSettings & osg::CullSettings::operator=(const osg::CullSettings &). Got : '%s'\n%s",typeid(Luna< osg::CullSettings >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::CullSettings* lret = &self->operator=(settings);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::CullSettings >::push(L,lret,false);

		return 1;
	}


};

osg::CullSettings* LunaTraits< osg::CullSettings >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_CullSettings::_bind_ctor(L);
}

void LunaTraits< osg::CullSettings >::_bind_dtor(osg::CullSettings* obj) {
	delete obj;
}

const char LunaTraits< osg::CullSettings >::className[] = "CullSettings";
const char LunaTraits< osg::CullSettings >::fullName[] = "osg::CullSettings";
const char LunaTraits< osg::CullSettings >::moduleName[] = "osg";
const char* LunaTraits< osg::CullSettings >::parents[] = {0};
const int LunaTraits< osg::CullSettings >::hash = 31435107;
const int LunaTraits< osg::CullSettings >::uniqueIDs[] = {31435107,0};

luna_RegType LunaTraits< osg::CullSettings >::methods[] = {
	{"setDefaults", &luna_wrapper_osg_CullSettings::_bind_setDefaults},
	{"setInheritanceMask", &luna_wrapper_osg_CullSettings::_bind_setInheritanceMask},
	{"getInheritanceMask", &luna_wrapper_osg_CullSettings::_bind_getInheritanceMask},
	{"setCullSettings", &luna_wrapper_osg_CullSettings::_bind_setCullSettings},
	{"inheritCullSettings", &luna_wrapper_osg_CullSettings::_bind_inheritCullSettings},
	{"readEnvironmentalVariables", &luna_wrapper_osg_CullSettings::_bind_readEnvironmentalVariables},
	{"readCommandLine", &luna_wrapper_osg_CullSettings::_bind_readCommandLine},
	{"setInheritanceMaskActionOnAttributeSetting", &luna_wrapper_osg_CullSettings::_bind_setInheritanceMaskActionOnAttributeSetting},
	{"getInheritanceMaskActionOnAttributeSetting", &luna_wrapper_osg_CullSettings::_bind_getInheritanceMaskActionOnAttributeSetting},
	{"applyMaskAction", &luna_wrapper_osg_CullSettings::_bind_applyMaskAction},
	{"setImpostorsActive", &luna_wrapper_osg_CullSettings::_bind_setImpostorsActive},
	{"getImpostorsActive", &luna_wrapper_osg_CullSettings::_bind_getImpostorsActive},
	{"setImpostorPixelErrorThreshold", &luna_wrapper_osg_CullSettings::_bind_setImpostorPixelErrorThreshold},
	{"getImpostorPixelErrorThreshold", &luna_wrapper_osg_CullSettings::_bind_getImpostorPixelErrorThreshold},
	{"setDepthSortImpostorSprites", &luna_wrapper_osg_CullSettings::_bind_setDepthSortImpostorSprites},
	{"getDepthSortImpostorSprites", &luna_wrapper_osg_CullSettings::_bind_getDepthSortImpostorSprites},
	{"setNumberOfFrameToKeepImpostorSprites", &luna_wrapper_osg_CullSettings::_bind_setNumberOfFrameToKeepImpostorSprites},
	{"getNumberOfFrameToKeepImpostorSprites", &luna_wrapper_osg_CullSettings::_bind_getNumberOfFrameToKeepImpostorSprites},
	{"setComputeNearFarMode", &luna_wrapper_osg_CullSettings::_bind_setComputeNearFarMode},
	{"getComputeNearFarMode", &luna_wrapper_osg_CullSettings::_bind_getComputeNearFarMode},
	{"setNearFarRatio", &luna_wrapper_osg_CullSettings::_bind_setNearFarRatio},
	{"getNearFarRatio", &luna_wrapper_osg_CullSettings::_bind_getNearFarRatio},
	{"setCullingMode", &luna_wrapper_osg_CullSettings::_bind_setCullingMode},
	{"getCullingMode", &luna_wrapper_osg_CullSettings::_bind_getCullingMode},
	{"setCullMask", &luna_wrapper_osg_CullSettings::_bind_setCullMask},
	{"getCullMask", &luna_wrapper_osg_CullSettings::_bind_getCullMask},
	{"setCullMaskLeft", &luna_wrapper_osg_CullSettings::_bind_setCullMaskLeft},
	{"getCullMaskLeft", &luna_wrapper_osg_CullSettings::_bind_getCullMaskLeft},
	{"setCullMaskRight", &luna_wrapper_osg_CullSettings::_bind_setCullMaskRight},
	{"getCullMaskRight", &luna_wrapper_osg_CullSettings::_bind_getCullMaskRight},
	{"setLODScale", &luna_wrapper_osg_CullSettings::_bind_setLODScale},
	{"getLODScale", &luna_wrapper_osg_CullSettings::_bind_getLODScale},
	{"setSmallFeatureCullingPixelSize", &luna_wrapper_osg_CullSettings::_bind_setSmallFeatureCullingPixelSize},
	{"getSmallFeatureCullingPixelSize", &luna_wrapper_osg_CullSettings::_bind_getSmallFeatureCullingPixelSize},
	{"setClampProjectionMatrixCallback", &luna_wrapper_osg_CullSettings::_bind_setClampProjectionMatrixCallback},
	{"getClampProjectionMatrixCallback", &luna_wrapper_osg_CullSettings::_bind_getClampProjectionMatrixCallback},
	{"write", &luna_wrapper_osg_CullSettings::_bind_write},
	{"base_setDefaults", &luna_wrapper_osg_CullSettings::_bind_base_setDefaults},
	{"base_inheritCullSettings", &luna_wrapper_osg_CullSettings::_bind_base_inheritCullSettings},
	{"op_assign", &luna_wrapper_osg_CullSettings::_bind_op_assign},
	{"dynCast", &luna_wrapper_osg_CullSettings::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_CullSettings::_bind___eq},
	{"fromVoid", &luna_wrapper_osg_CullSettings::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_CullSettings::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_CullSettings::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::CullSettings >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::CullSettings >::enumValues[] = {
	{"COMPUTE_NEAR_FAR_MODE", osg::CullSettings::COMPUTE_NEAR_FAR_MODE},
	{"CULLING_MODE", osg::CullSettings::CULLING_MODE},
	{"LOD_SCALE", osg::CullSettings::LOD_SCALE},
	{"SMALL_FEATURE_CULLING_PIXEL_SIZE", osg::CullSettings::SMALL_FEATURE_CULLING_PIXEL_SIZE},
	{"CLAMP_PROJECTION_MATRIX_CALLBACK", osg::CullSettings::CLAMP_PROJECTION_MATRIX_CALLBACK},
	{"NEAR_FAR_RATIO", osg::CullSettings::NEAR_FAR_RATIO},
	{"IMPOSTOR_ACTIVE", osg::CullSettings::IMPOSTOR_ACTIVE},
	{"DEPTH_SORT_IMPOSTOR_SPRITES", osg::CullSettings::DEPTH_SORT_IMPOSTOR_SPRITES},
	{"IMPOSTOR_PIXEL_ERROR_THRESHOLD", osg::CullSettings::IMPOSTOR_PIXEL_ERROR_THRESHOLD},
	{"NUM_FRAMES_TO_KEEP_IMPOSTORS_SPRITES", osg::CullSettings::NUM_FRAMES_TO_KEEP_IMPOSTORS_SPRITES},
	{"CULL_MASK", osg::CullSettings::CULL_MASK},
	{"CULL_MASK_LEFT", osg::CullSettings::CULL_MASK_LEFT},
	{"CULL_MASK_RIGHT", osg::CullSettings::CULL_MASK_RIGHT},
	{"CLEAR_COLOR", osg::CullSettings::CLEAR_COLOR},
	{"CLEAR_MASK", osg::CullSettings::CLEAR_MASK},
	{"LIGHTING_MODE", osg::CullSettings::LIGHTING_MODE},
	{"LIGHT", osg::CullSettings::LIGHT},
	{"DRAW_BUFFER", osg::CullSettings::DRAW_BUFFER},
	{"READ_BUFFER", osg::CullSettings::READ_BUFFER},
	{"NO_VARIABLES", osg::CullSettings::NO_VARIABLES},
	{"ALL_VARIABLES", osg::CullSettings::ALL_VARIABLES},
	{"DISABLE_ASSOCIATED_INHERITANCE_MASK_BIT", osg::CullSettings::DISABLE_ASSOCIATED_INHERITANCE_MASK_BIT},
	{"DO_NOT_MODIFY_INHERITANCE_MASK", osg::CullSettings::DO_NOT_MODIFY_INHERITANCE_MASK},
	{"DO_NOT_COMPUTE_NEAR_FAR", osg::CullSettings::DO_NOT_COMPUTE_NEAR_FAR},
	{"COMPUTE_NEAR_FAR_USING_BOUNDING_VOLUMES", osg::CullSettings::COMPUTE_NEAR_FAR_USING_BOUNDING_VOLUMES},
	{"COMPUTE_NEAR_FAR_USING_PRIMITIVES", osg::CullSettings::COMPUTE_NEAR_FAR_USING_PRIMITIVES},
	{"COMPUTE_NEAR_USING_PRIMITIVES", osg::CullSettings::COMPUTE_NEAR_USING_PRIMITIVES},
	{"NO_CULLING", osg::CullSettings::NO_CULLING},
	{"VIEW_FRUSTUM_SIDES_CULLING", osg::CullSettings::VIEW_FRUSTUM_SIDES_CULLING},
	{"NEAR_PLANE_CULLING", osg::CullSettings::NEAR_PLANE_CULLING},
	{"FAR_PLANE_CULLING", osg::CullSettings::FAR_PLANE_CULLING},
	{"VIEW_FRUSTUM_CULLING", osg::CullSettings::VIEW_FRUSTUM_CULLING},
	{"SMALL_FEATURE_CULLING", osg::CullSettings::SMALL_FEATURE_CULLING},
	{"SHADOW_OCCLUSION_CULLING", osg::CullSettings::SHADOW_OCCLUSION_CULLING},
	{"CLUSTER_CULLING", osg::CullSettings::CLUSTER_CULLING},
	{"DEFAULT_CULLING", osg::CullSettings::DEFAULT_CULLING},
	{"ENABLE_ALL_CULLING", osg::CullSettings::ENABLE_ALL_CULLING},
	{0,0}
};



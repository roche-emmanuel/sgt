#include <plug_common.h>

#include <luna/wrappers/wrapper_osgUtil_Simplifier.h>

class luna_wrapper_osgUtil_Simplifier {
public:
	typedef Luna< osgUtil::Simplifier > luna_t;

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

		osgUtil::Simplifier* self= (osgUtil::Simplifier*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgUtil::Simplifier >::push(L,self,false);
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
		//osgUtil::Simplifier* ptr= dynamic_cast< osgUtil::Simplifier* >(Luna< osg::Referenced >::check(L,1));
		osgUtil::Simplifier* ptr= luna_caster< osg::Referenced, osgUtil::Simplifier >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::Simplifier >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>3 ) return false;

		if( luatop>0 && lua_type(L,1)!=LUA_TNUMBER ) return false;
		if( luatop>1 && lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setSampleRatio(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSampleRatio(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setMaximumError(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMaximumError(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setMaximumLength(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMaximumLength(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDoTriStrip(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDoTriStrip(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setSmoothing(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSmoothing(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setContinueSimplificationCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getContinueSimplificationCallback_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getContinueSimplificationCallback_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_continueSimplification(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_continueSimplificationImplementation(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_simplify_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_simplify_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,27834872) ) return false;
		if( (!(Luna< std::vector< unsigned int > >::checkSubType< osgUtil::Simplifier::IndexList >(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getEyePoint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getViewPoint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getDistanceToEyePoint(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getDistanceFromEyePoint(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getDistanceToViewPoint(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_continueSimplificationImplementation(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgUtil::Simplifier::Simplifier(double sampleRatio = 1.0, double maximumError = FLT_MAX, double maximumLength = 0.0)
	static osgUtil::Simplifier* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::Simplifier::Simplifier(double sampleRatio = 1.0, double maximumError = FLT_MAX, double maximumLength = 0.0) function, expected prototype:\nosgUtil::Simplifier::Simplifier(double sampleRatio = 1.0, double maximumError = FLT_MAX, double maximumLength = 0.0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		double sampleRatio=luatop>0 ? (double)lua_tonumber(L,1) : (double)1.0;
		double maximumError=luatop>1 ? (double)lua_tonumber(L,2) : (double)FLT_MAX;
		double maximumLength=luatop>2 ? (double)lua_tonumber(L,3) : (double)0.0;

		return new osgUtil::Simplifier(sampleRatio, maximumError, maximumLength);
	}

	// osgUtil::Simplifier::Simplifier(lua_Table * data, double sampleRatio = 1.0, double maximumError = FLT_MAX, double maximumLength = 0.0)
	static osgUtil::Simplifier* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::Simplifier::Simplifier(lua_Table * data, double sampleRatio = 1.0, double maximumError = FLT_MAX, double maximumLength = 0.0) function, expected prototype:\nosgUtil::Simplifier::Simplifier(lua_Table * data, double sampleRatio = 1.0, double maximumError = FLT_MAX, double maximumLength = 0.0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		double sampleRatio=luatop>1 ? (double)lua_tonumber(L,2) : (double)1.0;
		double maximumError=luatop>2 ? (double)lua_tonumber(L,3) : (double)FLT_MAX;
		double maximumLength=luatop>3 ? (double)lua_tonumber(L,4) : (double)0.0;

		return new wrapper_osgUtil_Simplifier(L,NULL, sampleRatio, maximumError, maximumLength);
	}

	// Overload binder for osgUtil::Simplifier::Simplifier
	static osgUtil::Simplifier* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Simplifier, cannot match any of the overloads for function Simplifier:\n  Simplifier(double, double, double)\n  Simplifier(lua_Table *, double, double, double)\n");
		return NULL;
	}


	// Function binds:
	// const char * osgUtil::Simplifier::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgUtil::Simplifier::libraryName() const function, expected prototype:\nconst char * osgUtil::Simplifier::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::Simplifier* self=Luna< osg::Referenced >::checkSubType< osgUtil::Simplifier >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgUtil::Simplifier::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgUtil::Simplifier::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgUtil::Simplifier::className() const function, expected prototype:\nconst char * osgUtil::Simplifier::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::Simplifier* self=Luna< osg::Referenced >::checkSubType< osgUtil::Simplifier >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgUtil::Simplifier::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgUtil::Simplifier::setSampleRatio(float sampleRatio)
	static int _bind_setSampleRatio(lua_State *L) {
		if (!_lg_typecheck_setSampleRatio(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Simplifier::setSampleRatio(float sampleRatio) function, expected prototype:\nvoid osgUtil::Simplifier::setSampleRatio(float sampleRatio)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float sampleRatio=(float)lua_tonumber(L,2);

		osgUtil::Simplifier* self=Luna< osg::Referenced >::checkSubType< osgUtil::Simplifier >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Simplifier::setSampleRatio(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setSampleRatio(sampleRatio);

		return 0;
	}

	// float osgUtil::Simplifier::getSampleRatio() const
	static int _bind_getSampleRatio(lua_State *L) {
		if (!_lg_typecheck_getSampleRatio(L)) {
			luaL_error(L, "luna typecheck failed in float osgUtil::Simplifier::getSampleRatio() const function, expected prototype:\nfloat osgUtil::Simplifier::getSampleRatio() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::Simplifier* self=Luna< osg::Referenced >::checkSubType< osgUtil::Simplifier >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgUtil::Simplifier::getSampleRatio() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getSampleRatio();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgUtil::Simplifier::setMaximumError(float error)
	static int _bind_setMaximumError(lua_State *L) {
		if (!_lg_typecheck_setMaximumError(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Simplifier::setMaximumError(float error) function, expected prototype:\nvoid osgUtil::Simplifier::setMaximumError(float error)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float error=(float)lua_tonumber(L,2);

		osgUtil::Simplifier* self=Luna< osg::Referenced >::checkSubType< osgUtil::Simplifier >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Simplifier::setMaximumError(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setMaximumError(error);

		return 0;
	}

	// float osgUtil::Simplifier::getMaximumError() const
	static int _bind_getMaximumError(lua_State *L) {
		if (!_lg_typecheck_getMaximumError(L)) {
			luaL_error(L, "luna typecheck failed in float osgUtil::Simplifier::getMaximumError() const function, expected prototype:\nfloat osgUtil::Simplifier::getMaximumError() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::Simplifier* self=Luna< osg::Referenced >::checkSubType< osgUtil::Simplifier >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgUtil::Simplifier::getMaximumError() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getMaximumError();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgUtil::Simplifier::setMaximumLength(float length)
	static int _bind_setMaximumLength(lua_State *L) {
		if (!_lg_typecheck_setMaximumLength(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Simplifier::setMaximumLength(float length) function, expected prototype:\nvoid osgUtil::Simplifier::setMaximumLength(float length)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float length=(float)lua_tonumber(L,2);

		osgUtil::Simplifier* self=Luna< osg::Referenced >::checkSubType< osgUtil::Simplifier >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Simplifier::setMaximumLength(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setMaximumLength(length);

		return 0;
	}

	// float osgUtil::Simplifier::getMaximumLength() const
	static int _bind_getMaximumLength(lua_State *L) {
		if (!_lg_typecheck_getMaximumLength(L)) {
			luaL_error(L, "luna typecheck failed in float osgUtil::Simplifier::getMaximumLength() const function, expected prototype:\nfloat osgUtil::Simplifier::getMaximumLength() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::Simplifier* self=Luna< osg::Referenced >::checkSubType< osgUtil::Simplifier >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgUtil::Simplifier::getMaximumLength() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getMaximumLength();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgUtil::Simplifier::setDoTriStrip(bool on)
	static int _bind_setDoTriStrip(lua_State *L) {
		if (!_lg_typecheck_setDoTriStrip(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Simplifier::setDoTriStrip(bool on) function, expected prototype:\nvoid osgUtil::Simplifier::setDoTriStrip(bool on)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool on=(bool)(lua_toboolean(L,2)==1);

		osgUtil::Simplifier* self=Luna< osg::Referenced >::checkSubType< osgUtil::Simplifier >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Simplifier::setDoTriStrip(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setDoTriStrip(on);

		return 0;
	}

	// bool osgUtil::Simplifier::getDoTriStrip() const
	static int _bind_getDoTriStrip(lua_State *L) {
		if (!_lg_typecheck_getDoTriStrip(L)) {
			luaL_error(L, "luna typecheck failed in bool osgUtil::Simplifier::getDoTriStrip() const function, expected prototype:\nbool osgUtil::Simplifier::getDoTriStrip() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::Simplifier* self=Luna< osg::Referenced >::checkSubType< osgUtil::Simplifier >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgUtil::Simplifier::getDoTriStrip() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getDoTriStrip();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgUtil::Simplifier::setSmoothing(bool on)
	static int _bind_setSmoothing(lua_State *L) {
		if (!_lg_typecheck_setSmoothing(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Simplifier::setSmoothing(bool on) function, expected prototype:\nvoid osgUtil::Simplifier::setSmoothing(bool on)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool on=(bool)(lua_toboolean(L,2)==1);

		osgUtil::Simplifier* self=Luna< osg::Referenced >::checkSubType< osgUtil::Simplifier >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Simplifier::setSmoothing(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setSmoothing(on);

		return 0;
	}

	// bool osgUtil::Simplifier::getSmoothing() const
	static int _bind_getSmoothing(lua_State *L) {
		if (!_lg_typecheck_getSmoothing(L)) {
			luaL_error(L, "luna typecheck failed in bool osgUtil::Simplifier::getSmoothing() const function, expected prototype:\nbool osgUtil::Simplifier::getSmoothing() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::Simplifier* self=Luna< osg::Referenced >::checkSubType< osgUtil::Simplifier >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgUtil::Simplifier::getSmoothing() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getSmoothing();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgUtil::Simplifier::setContinueSimplificationCallback(osgUtil::Simplifier::ContinueSimplificationCallback * cb)
	static int _bind_setContinueSimplificationCallback(lua_State *L) {
		if (!_lg_typecheck_setContinueSimplificationCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Simplifier::setContinueSimplificationCallback(osgUtil::Simplifier::ContinueSimplificationCallback * cb) function, expected prototype:\nvoid osgUtil::Simplifier::setContinueSimplificationCallback(osgUtil::Simplifier::ContinueSimplificationCallback * cb)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::Simplifier::ContinueSimplificationCallback* cb=(Luna< osg::Referenced >::checkSubType< osgUtil::Simplifier::ContinueSimplificationCallback >(L,2));

		osgUtil::Simplifier* self=Luna< osg::Referenced >::checkSubType< osgUtil::Simplifier >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Simplifier::setContinueSimplificationCallback(osgUtil::Simplifier::ContinueSimplificationCallback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setContinueSimplificationCallback(cb);

		return 0;
	}

	// osgUtil::Simplifier::ContinueSimplificationCallback * osgUtil::Simplifier::getContinueSimplificationCallback()
	static int _bind_getContinueSimplificationCallback_overload_1(lua_State *L) {
		if (!_lg_typecheck_getContinueSimplificationCallback_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::Simplifier::ContinueSimplificationCallback * osgUtil::Simplifier::getContinueSimplificationCallback() function, expected prototype:\nosgUtil::Simplifier::ContinueSimplificationCallback * osgUtil::Simplifier::getContinueSimplificationCallback()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::Simplifier* self=Luna< osg::Referenced >::checkSubType< osgUtil::Simplifier >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgUtil::Simplifier::ContinueSimplificationCallback * osgUtil::Simplifier::getContinueSimplificationCallback(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgUtil::Simplifier::ContinueSimplificationCallback * lret = self->getContinueSimplificationCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::Simplifier::ContinueSimplificationCallback >::push(L,lret,false);

		return 1;
	}

	// const osgUtil::Simplifier::ContinueSimplificationCallback * osgUtil::Simplifier::getContinueSimplificationCallback() const
	static int _bind_getContinueSimplificationCallback_overload_2(lua_State *L) {
		if (!_lg_typecheck_getContinueSimplificationCallback_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osgUtil::Simplifier::ContinueSimplificationCallback * osgUtil::Simplifier::getContinueSimplificationCallback() const function, expected prototype:\nconst osgUtil::Simplifier::ContinueSimplificationCallback * osgUtil::Simplifier::getContinueSimplificationCallback() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::Simplifier* self=Luna< osg::Referenced >::checkSubType< osgUtil::Simplifier >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgUtil::Simplifier::ContinueSimplificationCallback * osgUtil::Simplifier::getContinueSimplificationCallback() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgUtil::Simplifier::ContinueSimplificationCallback * lret = self->getContinueSimplificationCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::Simplifier::ContinueSimplificationCallback >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgUtil::Simplifier::getContinueSimplificationCallback
	static int _bind_getContinueSimplificationCallback(lua_State *L) {
		if (_lg_typecheck_getContinueSimplificationCallback_overload_1(L)) return _bind_getContinueSimplificationCallback_overload_1(L);
		if (_lg_typecheck_getContinueSimplificationCallback_overload_2(L)) return _bind_getContinueSimplificationCallback_overload_2(L);

		luaL_error(L, "error in function getContinueSimplificationCallback, cannot match any of the overloads for function getContinueSimplificationCallback:\n  getContinueSimplificationCallback()\n  getContinueSimplificationCallback()\n");
		return 0;
	}

	// bool osgUtil::Simplifier::continueSimplification(float nextError, unsigned int numOriginalPrimitives, unsigned int numRemainingPrimitives) const
	static int _bind_continueSimplification(lua_State *L) {
		if (!_lg_typecheck_continueSimplification(L)) {
			luaL_error(L, "luna typecheck failed in bool osgUtil::Simplifier::continueSimplification(float nextError, unsigned int numOriginalPrimitives, unsigned int numRemainingPrimitives) const function, expected prototype:\nbool osgUtil::Simplifier::continueSimplification(float nextError, unsigned int numOriginalPrimitives, unsigned int numRemainingPrimitives) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float nextError=(float)lua_tonumber(L,2);
		unsigned int numOriginalPrimitives=(unsigned int)lua_tointeger(L,3);
		unsigned int numRemainingPrimitives=(unsigned int)lua_tointeger(L,4);

		osgUtil::Simplifier* self=Luna< osg::Referenced >::checkSubType< osgUtil::Simplifier >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgUtil::Simplifier::continueSimplification(float, unsigned int, unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->continueSimplification(nextError, numOriginalPrimitives, numRemainingPrimitives);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgUtil::Simplifier::continueSimplificationImplementation(float nextError, unsigned int numOriginalPrimitives, unsigned int numRemainingPrimitives) const
	static int _bind_continueSimplificationImplementation(lua_State *L) {
		if (!_lg_typecheck_continueSimplificationImplementation(L)) {
			luaL_error(L, "luna typecheck failed in bool osgUtil::Simplifier::continueSimplificationImplementation(float nextError, unsigned int numOriginalPrimitives, unsigned int numRemainingPrimitives) const function, expected prototype:\nbool osgUtil::Simplifier::continueSimplificationImplementation(float nextError, unsigned int numOriginalPrimitives, unsigned int numRemainingPrimitives) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float nextError=(float)lua_tonumber(L,2);
		unsigned int numOriginalPrimitives=(unsigned int)lua_tointeger(L,3);
		unsigned int numRemainingPrimitives=(unsigned int)lua_tointeger(L,4);

		osgUtil::Simplifier* self=Luna< osg::Referenced >::checkSubType< osgUtil::Simplifier >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgUtil::Simplifier::continueSimplificationImplementation(float, unsigned int, unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->continueSimplificationImplementation(nextError, numOriginalPrimitives, numRemainingPrimitives);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgUtil::Simplifier::apply(osg::Geode & geode)
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Simplifier::apply(osg::Geode & geode) function, expected prototype:\nvoid osgUtil::Simplifier::apply(osg::Geode & geode)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Geode* geode_ptr=(Luna< osg::Referenced >::checkSubType< osg::Geode >(L,2));
		if( !geode_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg geode in osgUtil::Simplifier::apply function");
		}
		osg::Geode & geode=*geode_ptr;

		osgUtil::Simplifier* self=Luna< osg::Referenced >::checkSubType< osgUtil::Simplifier >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Simplifier::apply(osg::Geode &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(geode);

		return 0;
	}

	// void osgUtil::Simplifier::simplify(osg::Geometry & geometry)
	static int _bind_simplify_overload_1(lua_State *L) {
		if (!_lg_typecheck_simplify_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Simplifier::simplify(osg::Geometry & geometry) function, expected prototype:\nvoid osgUtil::Simplifier::simplify(osg::Geometry & geometry)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Geometry* geometry_ptr=(Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,2));
		if( !geometry_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg geometry in osgUtil::Simplifier::simplify function");
		}
		osg::Geometry & geometry=*geometry_ptr;

		osgUtil::Simplifier* self=Luna< osg::Referenced >::checkSubType< osgUtil::Simplifier >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Simplifier::simplify(osg::Geometry &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->simplify(geometry);

		return 0;
	}

	// void osgUtil::Simplifier::simplify(osg::Geometry & geometry, const osgUtil::Simplifier::IndexList & protectedPoints)
	static int _bind_simplify_overload_2(lua_State *L) {
		if (!_lg_typecheck_simplify_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Simplifier::simplify(osg::Geometry & geometry, const osgUtil::Simplifier::IndexList & protectedPoints) function, expected prototype:\nvoid osgUtil::Simplifier::simplify(osg::Geometry & geometry, const osgUtil::Simplifier::IndexList & protectedPoints)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 12058436\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Geometry* geometry_ptr=(Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,2));
		if( !geometry_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg geometry in osgUtil::Simplifier::simplify function");
		}
		osg::Geometry & geometry=*geometry_ptr;
		const osgUtil::Simplifier::IndexList* protectedPoints_ptr=(Luna< std::vector< unsigned int > >::checkSubType< osgUtil::Simplifier::IndexList >(L,3));
		if( !protectedPoints_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg protectedPoints in osgUtil::Simplifier::simplify function");
		}
		const osgUtil::Simplifier::IndexList & protectedPoints=*protectedPoints_ptr;

		osgUtil::Simplifier* self=Luna< osg::Referenced >::checkSubType< osgUtil::Simplifier >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Simplifier::simplify(osg::Geometry &, const osgUtil::Simplifier::IndexList &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->simplify(geometry, protectedPoints);

		return 0;
	}

	// Overload binder for osgUtil::Simplifier::simplify
	static int _bind_simplify(lua_State *L) {
		if (_lg_typecheck_simplify_overload_1(L)) return _bind_simplify_overload_1(L);
		if (_lg_typecheck_simplify_overload_2(L)) return _bind_simplify_overload_2(L);

		luaL_error(L, "error in function simplify, cannot match any of the overloads for function simplify:\n  simplify(osg::Geometry &)\n  simplify(osg::Geometry &, const osgUtil::Simplifier::IndexList &)\n");
		return 0;
	}

	// void osgUtil::Simplifier::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Simplifier::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgUtil::Simplifier::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgUtil::Simplifier* self=Luna< osg::Referenced >::checkSubType< osgUtil::Simplifier >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Simplifier::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Simplifier::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osgUtil::Simplifier::base_reset()
	static int _bind_base_reset(lua_State *L) {
		if (!_lg_typecheck_base_reset(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Simplifier::base_reset() function, expected prototype:\nvoid osgUtil::Simplifier::base_reset()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::Simplifier* self=Luna< osg::Referenced >::checkSubType< osgUtil::Simplifier >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Simplifier::base_reset(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Simplifier::reset();

		return 0;
	}

	// osg::Vec3f osgUtil::Simplifier::base_getEyePoint() const
	static int _bind_base_getEyePoint(lua_State *L) {
		if (!_lg_typecheck_base_getEyePoint(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3f osgUtil::Simplifier::base_getEyePoint() const function, expected prototype:\nosg::Vec3f osgUtil::Simplifier::base_getEyePoint() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::Simplifier* self=Luna< osg::Referenced >::checkSubType< osgUtil::Simplifier >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3f osgUtil::Simplifier::base_getEyePoint() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec3f stack_lret = self->Simplifier::getEyePoint();
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// osg::Vec3f osgUtil::Simplifier::base_getViewPoint() const
	static int _bind_base_getViewPoint(lua_State *L) {
		if (!_lg_typecheck_base_getViewPoint(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3f osgUtil::Simplifier::base_getViewPoint() const function, expected prototype:\nosg::Vec3f osgUtil::Simplifier::base_getViewPoint() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::Simplifier* self=Luna< osg::Referenced >::checkSubType< osgUtil::Simplifier >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3f osgUtil::Simplifier::base_getViewPoint() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec3f stack_lret = self->Simplifier::getViewPoint();
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// float osgUtil::Simplifier::base_getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const
	static int _bind_base_getDistanceToEyePoint(lua_State *L) {
		if (!_lg_typecheck_base_getDistanceToEyePoint(L)) {
			luaL_error(L, "luna typecheck failed in float osgUtil::Simplifier::base_getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const function, expected prototype:\nfloat osgUtil::Simplifier::base_getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgUtil::Simplifier::base_getDistanceToEyePoint function");
		}
		const osg::Vec3f & _arg1=*_arg1_ptr;
		bool _arg2=(bool)(lua_toboolean(L,3)==1);

		osgUtil::Simplifier* self=Luna< osg::Referenced >::checkSubType< osgUtil::Simplifier >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgUtil::Simplifier::base_getDistanceToEyePoint(const osg::Vec3f &, bool) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->Simplifier::getDistanceToEyePoint(_arg1, _arg2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osgUtil::Simplifier::base_getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const
	static int _bind_base_getDistanceFromEyePoint(lua_State *L) {
		if (!_lg_typecheck_base_getDistanceFromEyePoint(L)) {
			luaL_error(L, "luna typecheck failed in float osgUtil::Simplifier::base_getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const function, expected prototype:\nfloat osgUtil::Simplifier::base_getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgUtil::Simplifier::base_getDistanceFromEyePoint function");
		}
		const osg::Vec3f & _arg1=*_arg1_ptr;
		bool _arg2=(bool)(lua_toboolean(L,3)==1);

		osgUtil::Simplifier* self=Luna< osg::Referenced >::checkSubType< osgUtil::Simplifier >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgUtil::Simplifier::base_getDistanceFromEyePoint(const osg::Vec3f &, bool) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->Simplifier::getDistanceFromEyePoint(_arg1, _arg2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osgUtil::Simplifier::base_getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const
	static int _bind_base_getDistanceToViewPoint(lua_State *L) {
		if (!_lg_typecheck_base_getDistanceToViewPoint(L)) {
			luaL_error(L, "luna typecheck failed in float osgUtil::Simplifier::base_getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const function, expected prototype:\nfloat osgUtil::Simplifier::base_getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgUtil::Simplifier::base_getDistanceToViewPoint function");
		}
		const osg::Vec3f & _arg1=*_arg1_ptr;
		bool _arg2=(bool)(lua_toboolean(L,3)==1);

		osgUtil::Simplifier* self=Luna< osg::Referenced >::checkSubType< osgUtil::Simplifier >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgUtil::Simplifier::base_getDistanceToViewPoint(const osg::Vec3f &, bool) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->Simplifier::getDistanceToViewPoint(_arg1, _arg2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// const char * osgUtil::Simplifier::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgUtil::Simplifier::base_libraryName() const function, expected prototype:\nconst char * osgUtil::Simplifier::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::Simplifier* self=Luna< osg::Referenced >::checkSubType< osgUtil::Simplifier >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgUtil::Simplifier::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Simplifier::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgUtil::Simplifier::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgUtil::Simplifier::base_className() const function, expected prototype:\nconst char * osgUtil::Simplifier::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::Simplifier* self=Luna< osg::Referenced >::checkSubType< osgUtil::Simplifier >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgUtil::Simplifier::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Simplifier::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// bool osgUtil::Simplifier::base_continueSimplificationImplementation(float nextError, unsigned int numOriginalPrimitives, unsigned int numRemainingPrimitives) const
	static int _bind_base_continueSimplificationImplementation(lua_State *L) {
		if (!_lg_typecheck_base_continueSimplificationImplementation(L)) {
			luaL_error(L, "luna typecheck failed in bool osgUtil::Simplifier::base_continueSimplificationImplementation(float nextError, unsigned int numOriginalPrimitives, unsigned int numRemainingPrimitives) const function, expected prototype:\nbool osgUtil::Simplifier::base_continueSimplificationImplementation(float nextError, unsigned int numOriginalPrimitives, unsigned int numRemainingPrimitives) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float nextError=(float)lua_tonumber(L,2);
		unsigned int numOriginalPrimitives=(unsigned int)lua_tointeger(L,3);
		unsigned int numRemainingPrimitives=(unsigned int)lua_tointeger(L,4);

		osgUtil::Simplifier* self=Luna< osg::Referenced >::checkSubType< osgUtil::Simplifier >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgUtil::Simplifier::base_continueSimplificationImplementation(float, unsigned int, unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Simplifier::continueSimplificationImplementation(nextError, numOriginalPrimitives, numRemainingPrimitives);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgUtil::Simplifier::base_apply(osg::Geode & geode)
	static int _bind_base_apply(lua_State *L) {
		if (!_lg_typecheck_base_apply(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Simplifier::base_apply(osg::Geode & geode) function, expected prototype:\nvoid osgUtil::Simplifier::base_apply(osg::Geode & geode)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Geode* geode_ptr=(Luna< osg::Referenced >::checkSubType< osg::Geode >(L,2));
		if( !geode_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg geode in osgUtil::Simplifier::base_apply function");
		}
		osg::Geode & geode=*geode_ptr;

		osgUtil::Simplifier* self=Luna< osg::Referenced >::checkSubType< osgUtil::Simplifier >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Simplifier::base_apply(osg::Geode &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Simplifier::apply(geode);

		return 0;
	}


	// Operator binds:

};

osgUtil::Simplifier* LunaTraits< osgUtil::Simplifier >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_Simplifier::_bind_ctor(L);
}

void LunaTraits< osgUtil::Simplifier >::_bind_dtor(osgUtil::Simplifier* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::Simplifier >::className[] = "Simplifier";
const char LunaTraits< osgUtil::Simplifier >::fullName[] = "osgUtil::Simplifier";
const char LunaTraits< osgUtil::Simplifier >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::Simplifier >::parents[] = {"osg.NodeVisitor", 0};
const int LunaTraits< osgUtil::Simplifier >::hash = 73625148;
const int LunaTraits< osgUtil::Simplifier >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::Simplifier >::methods[] = {
	{"libraryName", &luna_wrapper_osgUtil_Simplifier::_bind_libraryName},
	{"className", &luna_wrapper_osgUtil_Simplifier::_bind_className},
	{"setSampleRatio", &luna_wrapper_osgUtil_Simplifier::_bind_setSampleRatio},
	{"getSampleRatio", &luna_wrapper_osgUtil_Simplifier::_bind_getSampleRatio},
	{"setMaximumError", &luna_wrapper_osgUtil_Simplifier::_bind_setMaximumError},
	{"getMaximumError", &luna_wrapper_osgUtil_Simplifier::_bind_getMaximumError},
	{"setMaximumLength", &luna_wrapper_osgUtil_Simplifier::_bind_setMaximumLength},
	{"getMaximumLength", &luna_wrapper_osgUtil_Simplifier::_bind_getMaximumLength},
	{"setDoTriStrip", &luna_wrapper_osgUtil_Simplifier::_bind_setDoTriStrip},
	{"getDoTriStrip", &luna_wrapper_osgUtil_Simplifier::_bind_getDoTriStrip},
	{"setSmoothing", &luna_wrapper_osgUtil_Simplifier::_bind_setSmoothing},
	{"getSmoothing", &luna_wrapper_osgUtil_Simplifier::_bind_getSmoothing},
	{"setContinueSimplificationCallback", &luna_wrapper_osgUtil_Simplifier::_bind_setContinueSimplificationCallback},
	{"getContinueSimplificationCallback", &luna_wrapper_osgUtil_Simplifier::_bind_getContinueSimplificationCallback},
	{"continueSimplification", &luna_wrapper_osgUtil_Simplifier::_bind_continueSimplification},
	{"continueSimplificationImplementation", &luna_wrapper_osgUtil_Simplifier::_bind_continueSimplificationImplementation},
	{"apply", &luna_wrapper_osgUtil_Simplifier::_bind_apply},
	{"simplify", &luna_wrapper_osgUtil_Simplifier::_bind_simplify},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgUtil_Simplifier::_bind_base_setThreadSafeRefUnref},
	{"base_reset", &luna_wrapper_osgUtil_Simplifier::_bind_base_reset},
	{"base_getEyePoint", &luna_wrapper_osgUtil_Simplifier::_bind_base_getEyePoint},
	{"base_getViewPoint", &luna_wrapper_osgUtil_Simplifier::_bind_base_getViewPoint},
	{"base_getDistanceToEyePoint", &luna_wrapper_osgUtil_Simplifier::_bind_base_getDistanceToEyePoint},
	{"base_getDistanceFromEyePoint", &luna_wrapper_osgUtil_Simplifier::_bind_base_getDistanceFromEyePoint},
	{"base_getDistanceToViewPoint", &luna_wrapper_osgUtil_Simplifier::_bind_base_getDistanceToViewPoint},
	{"base_libraryName", &luna_wrapper_osgUtil_Simplifier::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osgUtil_Simplifier::_bind_base_className},
	{"base_continueSimplificationImplementation", &luna_wrapper_osgUtil_Simplifier::_bind_base_continueSimplificationImplementation},
	{"base_apply", &luna_wrapper_osgUtil_Simplifier::_bind_base_apply},
	{"fromVoid", &luna_wrapper_osgUtil_Simplifier::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgUtil_Simplifier::_bind_asVoid},
	{"getTable", &luna_wrapper_osgUtil_Simplifier::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::Simplifier >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_Simplifier::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::Simplifier >::enumValues[] = {
	{0,0}
};



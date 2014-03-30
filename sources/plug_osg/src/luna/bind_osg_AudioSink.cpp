#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_AudioSink.h>

class luna_wrapper_osg_AudioSink {
public:
	typedef Luna< osg::AudioSink > luna_t;

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

		osg::AudioSink* self= (osg::AudioSink*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::AudioSink >::push(L,self,false);
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
		//osg::AudioSink* ptr= dynamic_cast< osg::AudioSink* >(Luna< osg::Referenced >::check(L,1));
		osg::AudioSink* ptr= luna_caster< osg::Referenced, osg::AudioSink >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::AudioSink >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
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

	inline static bool _lg_typecheck_play(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_pause(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_stop(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_playing(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDelay(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDelay(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setVolume(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getVolume(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_isSameKindAs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_computeDataVariance(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setUserData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getUserData_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getUserData_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_releaseGLObjects(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
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

	inline static bool _lg_typecheck_base_getDelay(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setDelay(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setVolume(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getVolume(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::AudioSink::AudioSink(lua_Table * data)
	static osg::AudioSink* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in osg::AudioSink::AudioSink(lua_Table * data) function, expected prototype:\nosg::AudioSink::AudioSink(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_AudioSink(L,NULL);
	}


	// Function binds:
	// const char * osg::AudioSink::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::AudioSink::libraryName() const function, expected prototype:\nconst char * osg::AudioSink::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AudioSink* self=Luna< osg::Referenced >::checkSubType< osg::AudioSink >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::AudioSink::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::AudioSink::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::AudioSink::className() const function, expected prototype:\nconst char * osg::AudioSink::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AudioSink* self=Luna< osg::Referenced >::checkSubType< osg::AudioSink >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::AudioSink::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::AudioSink::play()
	static int _bind_play(lua_State *L) {
		if (!_lg_typecheck_play(L)) {
			luaL_error(L, "luna typecheck failed in void osg::AudioSink::play() function, expected prototype:\nvoid osg::AudioSink::play()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AudioSink* self=Luna< osg::Referenced >::checkSubType< osg::AudioSink >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::AudioSink::play(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->play();

		return 0;
	}

	// void osg::AudioSink::pause()
	static int _bind_pause(lua_State *L) {
		if (!_lg_typecheck_pause(L)) {
			luaL_error(L, "luna typecheck failed in void osg::AudioSink::pause() function, expected prototype:\nvoid osg::AudioSink::pause()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AudioSink* self=Luna< osg::Referenced >::checkSubType< osg::AudioSink >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::AudioSink::pause(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->pause();

		return 0;
	}

	// void osg::AudioSink::stop()
	static int _bind_stop(lua_State *L) {
		if (!_lg_typecheck_stop(L)) {
			luaL_error(L, "luna typecheck failed in void osg::AudioSink::stop() function, expected prototype:\nvoid osg::AudioSink::stop()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AudioSink* self=Luna< osg::Referenced >::checkSubType< osg::AudioSink >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::AudioSink::stop(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->stop();

		return 0;
	}

	// bool osg::AudioSink::playing() const
	static int _bind_playing(lua_State *L) {
		if (!_lg_typecheck_playing(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::AudioSink::playing() const function, expected prototype:\nbool osg::AudioSink::playing() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AudioSink* self=Luna< osg::Referenced >::checkSubType< osg::AudioSink >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::AudioSink::playing() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->playing();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// double osg::AudioSink::getDelay() const
	static int _bind_getDelay(lua_State *L) {
		if (!_lg_typecheck_getDelay(L)) {
			luaL_error(L, "luna typecheck failed in double osg::AudioSink::getDelay() const function, expected prototype:\ndouble osg::AudioSink::getDelay() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AudioSink* self=Luna< osg::Referenced >::checkSubType< osg::AudioSink >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double osg::AudioSink::getDelay() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getDelay();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::AudioSink::setDelay(const double delay)
	static int _bind_setDelay(lua_State *L) {
		if (!_lg_typecheck_setDelay(L)) {
			luaL_error(L, "luna typecheck failed in void osg::AudioSink::setDelay(const double delay) function, expected prototype:\nvoid osg::AudioSink::setDelay(const double delay)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const double delay=(const double)lua_tonumber(L,2);

		osg::AudioSink* self=Luna< osg::Referenced >::checkSubType< osg::AudioSink >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::AudioSink::setDelay(const double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setDelay(delay);

		return 0;
	}

	// void osg::AudioSink::setVolume(float arg1)
	static int _bind_setVolume(lua_State *L) {
		if (!_lg_typecheck_setVolume(L)) {
			luaL_error(L, "luna typecheck failed in void osg::AudioSink::setVolume(float arg1) function, expected prototype:\nvoid osg::AudioSink::setVolume(float arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float _arg1=(float)lua_tonumber(L,2);

		osg::AudioSink* self=Luna< osg::Referenced >::checkSubType< osg::AudioSink >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::AudioSink::setVolume(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setVolume(_arg1);

		return 0;
	}

	// float osg::AudioSink::getVolume() const
	static int _bind_getVolume(lua_State *L) {
		if (!_lg_typecheck_getVolume(L)) {
			luaL_error(L, "luna typecheck failed in float osg::AudioSink::getVolume() const function, expected prototype:\nfloat osg::AudioSink::getVolume() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AudioSink* self=Luna< osg::Referenced >::checkSubType< osg::AudioSink >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osg::AudioSink::getVolume() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getVolume();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::AudioSink::base_isSameKindAs(const osg::Object * arg1) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::AudioSink::base_isSameKindAs(const osg::Object * arg1) const function, expected prototype:\nbool osg::AudioSink::base_isSameKindAs(const osg::Object * arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* _arg1=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::AudioSink* self=Luna< osg::Referenced >::checkSubType< osg::AudioSink >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::AudioSink::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->AudioSink::isSameKindAs(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::AudioSink::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::AudioSink::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::AudioSink::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::AudioSink* self=Luna< osg::Referenced >::checkSubType< osg::AudioSink >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::AudioSink::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AudioSink::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::AudioSink::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::AudioSink::base_setName(const std::string & name) function, expected prototype:\nvoid osg::AudioSink::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::AudioSink* self=Luna< osg::Referenced >::checkSubType< osg::AudioSink >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::AudioSink::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AudioSink::setName(name);

		return 0;
	}

	// void osg::AudioSink::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::AudioSink::base_computeDataVariance() function, expected prototype:\nvoid osg::AudioSink::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AudioSink* self=Luna< osg::Referenced >::checkSubType< osg::AudioSink >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::AudioSink::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AudioSink::computeDataVariance();

		return 0;
	}

	// void osg::AudioSink::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::AudioSink::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::AudioSink::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::AudioSink* self=Luna< osg::Referenced >::checkSubType< osg::AudioSink >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::AudioSink::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AudioSink::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::AudioSink::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::AudioSink::base_getUserData() function, expected prototype:\nosg::Referenced * osg::AudioSink::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AudioSink* self=Luna< osg::Referenced >::checkSubType< osg::AudioSink >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::AudioSink::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->AudioSink::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::AudioSink::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::AudioSink::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::AudioSink::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AudioSink* self=Luna< osg::Referenced >::checkSubType< osg::AudioSink >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::AudioSink::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->AudioSink::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::AudioSink::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osg::AudioSink::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::AudioSink::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::AudioSink::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::AudioSink* self=Luna< osg::Referenced >::checkSubType< osg::AudioSink >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::AudioSink::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AudioSink::releaseGLObjects(_arg1);

		return 0;
	}

	// const char * osg::AudioSink::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::AudioSink::base_libraryName() const function, expected prototype:\nconst char * osg::AudioSink::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AudioSink* self=Luna< osg::Referenced >::checkSubType< osg::AudioSink >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::AudioSink::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->AudioSink::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::AudioSink::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::AudioSink::base_className() const function, expected prototype:\nconst char * osg::AudioSink::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AudioSink* self=Luna< osg::Referenced >::checkSubType< osg::AudioSink >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::AudioSink::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->AudioSink::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// double osg::AudioSink::base_getDelay() const
	static int _bind_base_getDelay(lua_State *L) {
		if (!_lg_typecheck_base_getDelay(L)) {
			luaL_error(L, "luna typecheck failed in double osg::AudioSink::base_getDelay() const function, expected prototype:\ndouble osg::AudioSink::base_getDelay() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AudioSink* self=Luna< osg::Referenced >::checkSubType< osg::AudioSink >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double osg::AudioSink::base_getDelay() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->AudioSink::getDelay();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::AudioSink::base_setDelay(const double delay)
	static int _bind_base_setDelay(lua_State *L) {
		if (!_lg_typecheck_base_setDelay(L)) {
			luaL_error(L, "luna typecheck failed in void osg::AudioSink::base_setDelay(const double delay) function, expected prototype:\nvoid osg::AudioSink::base_setDelay(const double delay)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const double delay=(const double)lua_tonumber(L,2);

		osg::AudioSink* self=Luna< osg::Referenced >::checkSubType< osg::AudioSink >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::AudioSink::base_setDelay(const double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AudioSink::setDelay(delay);

		return 0;
	}

	// void osg::AudioSink::base_setVolume(float arg1)
	static int _bind_base_setVolume(lua_State *L) {
		if (!_lg_typecheck_base_setVolume(L)) {
			luaL_error(L, "luna typecheck failed in void osg::AudioSink::base_setVolume(float arg1) function, expected prototype:\nvoid osg::AudioSink::base_setVolume(float arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float _arg1=(float)lua_tonumber(L,2);

		osg::AudioSink* self=Luna< osg::Referenced >::checkSubType< osg::AudioSink >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::AudioSink::base_setVolume(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AudioSink::setVolume(_arg1);

		return 0;
	}

	// float osg::AudioSink::base_getVolume() const
	static int _bind_base_getVolume(lua_State *L) {
		if (!_lg_typecheck_base_getVolume(L)) {
			luaL_error(L, "luna typecheck failed in float osg::AudioSink::base_getVolume() const function, expected prototype:\nfloat osg::AudioSink::base_getVolume() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AudioSink* self=Luna< osg::Referenced >::checkSubType< osg::AudioSink >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osg::AudioSink::base_getVolume() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->AudioSink::getVolume();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

osg::AudioSink* LunaTraits< osg::AudioSink >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_AudioSink::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void osg::AudioSink::play()
	// void osg::AudioSink::pause()
	// void osg::AudioSink::stop()
	// bool osg::AudioSink::playing() const
	// osg::Object * osg::Object::cloneType() const
	// osg::Object * osg::Object::clone(const osg::CopyOp & arg1) const
}

void LunaTraits< osg::AudioSink >::_bind_dtor(osg::AudioSink* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::AudioSink >::className[] = "AudioSink";
const char LunaTraits< osg::AudioSink >::fullName[] = "osg::AudioSink";
const char LunaTraits< osg::AudioSink >::moduleName[] = "osg";
const char* LunaTraits< osg::AudioSink >::parents[] = {"osg.Object", 0};
const int LunaTraits< osg::AudioSink >::hash = 74189446;
const int LunaTraits< osg::AudioSink >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::AudioSink >::methods[] = {
	{"libraryName", &luna_wrapper_osg_AudioSink::_bind_libraryName},
	{"className", &luna_wrapper_osg_AudioSink::_bind_className},
	{"play", &luna_wrapper_osg_AudioSink::_bind_play},
	{"pause", &luna_wrapper_osg_AudioSink::_bind_pause},
	{"stop", &luna_wrapper_osg_AudioSink::_bind_stop},
	{"playing", &luna_wrapper_osg_AudioSink::_bind_playing},
	{"getDelay", &luna_wrapper_osg_AudioSink::_bind_getDelay},
	{"setDelay", &luna_wrapper_osg_AudioSink::_bind_setDelay},
	{"setVolume", &luna_wrapper_osg_AudioSink::_bind_setVolume},
	{"getVolume", &luna_wrapper_osg_AudioSink::_bind_getVolume},
	{"base_isSameKindAs", &luna_wrapper_osg_AudioSink::_bind_base_isSameKindAs},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_AudioSink::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osg_AudioSink::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_AudioSink::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_AudioSink::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_AudioSink::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osg_AudioSink::_bind_base_releaseGLObjects},
	{"base_libraryName", &luna_wrapper_osg_AudioSink::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_AudioSink::_bind_base_className},
	{"base_getDelay", &luna_wrapper_osg_AudioSink::_bind_base_getDelay},
	{"base_setDelay", &luna_wrapper_osg_AudioSink::_bind_base_setDelay},
	{"base_setVolume", &luna_wrapper_osg_AudioSink::_bind_base_setVolume},
	{"base_getVolume", &luna_wrapper_osg_AudioSink::_bind_base_getVolume},
	{"fromVoid", &luna_wrapper_osg_AudioSink::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_AudioSink::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_AudioSink::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::AudioSink >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_AudioSink::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::AudioSink >::enumValues[] = {
	{0,0}
};



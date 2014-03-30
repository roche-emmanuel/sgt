#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_AudioStream.h>

class luna_wrapper_osg_AudioStream {
public:
	typedef Luna< osg::AudioStream > luna_t;

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

		osg::AudioStream* self= (osg::AudioStream*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::AudioStream >::push(L,self,false);
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
		//osg::AudioStream* ptr= dynamic_cast< osg::AudioStream* >(Luna< osg::Referenced >::check(L,1));
		osg::AudioStream* ptr= luna_caster< osg::Referenced, osg::AudioStream >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::AudioStream >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::AudioStream >(L,2))) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,27134364) ) return false;
		if( luatop>2 && (!(Luna< osg::CopyOp >::check(L,3))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_isSameKindAs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setAudioSink(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_consumeAudioBuffer(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_audioFrequency(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_audioNbChannels(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_audioSampleFormat(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_base_isSameKindAs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::AudioStream::AudioStream(lua_Table * data)
	static osg::AudioStream* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::AudioStream::AudioStream(lua_Table * data) function, expected prototype:\nosg::AudioStream::AudioStream(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_AudioStream(L,NULL);
	}

	// osg::AudioStream::AudioStream(lua_Table * data, const osg::AudioStream & audio, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::AudioStream* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::AudioStream::AudioStream(lua_Table * data, const osg::AudioStream & audio, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::AudioStream::AudioStream(lua_Table * data, const osg::AudioStream & audio, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::AudioStream* audio_ptr=(Luna< osg::Referenced >::checkSubType< osg::AudioStream >(L,2));
		if( !audio_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg audio in osg::AudioStream::AudioStream function");
		}
		const osg::AudioStream & audio=*audio_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::AudioStream::AudioStream function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_AudioStream(L,NULL, audio, copyop);
	}

	// Overload binder for osg::AudioStream::AudioStream
	static osg::AudioStream* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function AudioStream, cannot match any of the overloads for function AudioStream:\n  AudioStream(lua_Table *)\n  AudioStream(lua_Table *, const osg::AudioStream &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// bool osg::AudioStream::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::AudioStream::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::AudioStream::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::AudioStream* self=Luna< osg::Referenced >::checkSubType< osg::AudioStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::AudioStream::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::AudioStream::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::AudioStream::libraryName() const function, expected prototype:\nconst char * osg::AudioStream::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AudioStream* self=Luna< osg::Referenced >::checkSubType< osg::AudioStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::AudioStream::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::AudioStream::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::AudioStream::className() const function, expected prototype:\nconst char * osg::AudioStream::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AudioStream* self=Luna< osg::Referenced >::checkSubType< osg::AudioStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::AudioStream::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::AudioStream::setAudioSink(osg::AudioSink * audio_sink)
	static int _bind_setAudioSink(lua_State *L) {
		if (!_lg_typecheck_setAudioSink(L)) {
			luaL_error(L, "luna typecheck failed in void osg::AudioStream::setAudioSink(osg::AudioSink * audio_sink) function, expected prototype:\nvoid osg::AudioStream::setAudioSink(osg::AudioSink * audio_sink)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::AudioSink* audio_sink=(Luna< osg::Referenced >::checkSubType< osg::AudioSink >(L,2));

		osg::AudioStream* self=Luna< osg::Referenced >::checkSubType< osg::AudioStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::AudioStream::setAudioSink(osg::AudioSink *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setAudioSink(audio_sink);

		return 0;
	}

	// void osg::AudioStream::consumeAudioBuffer(void *const buffer, const size_t size)
	static int _bind_consumeAudioBuffer(lua_State *L) {
		if (!_lg_typecheck_consumeAudioBuffer(L)) {
			luaL_error(L, "luna typecheck failed in void osg::AudioStream::consumeAudioBuffer(void *const buffer, const size_t size) function, expected prototype:\nvoid osg::AudioStream::consumeAudioBuffer(void *const buffer, const size_t size)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		void* buffer=(Luna< void >::check(L,2));
		const size_t size=(const size_t)lua_tointeger(L,3);

		osg::AudioStream* self=Luna< osg::Referenced >::checkSubType< osg::AudioStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::AudioStream::consumeAudioBuffer(void *const, const size_t). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->consumeAudioBuffer(buffer, size);

		return 0;
	}

	// int osg::AudioStream::audioFrequency() const
	static int _bind_audioFrequency(lua_State *L) {
		if (!_lg_typecheck_audioFrequency(L)) {
			luaL_error(L, "luna typecheck failed in int osg::AudioStream::audioFrequency() const function, expected prototype:\nint osg::AudioStream::audioFrequency() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AudioStream* self=Luna< osg::Referenced >::checkSubType< osg::AudioStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::AudioStream::audioFrequency() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->audioFrequency();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::AudioStream::audioNbChannels() const
	static int _bind_audioNbChannels(lua_State *L) {
		if (!_lg_typecheck_audioNbChannels(L)) {
			luaL_error(L, "luna typecheck failed in int osg::AudioStream::audioNbChannels() const function, expected prototype:\nint osg::AudioStream::audioNbChannels() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AudioStream* self=Luna< osg::Referenced >::checkSubType< osg::AudioStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::AudioStream::audioNbChannels() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->audioNbChannels();
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::AudioStream::SampleFormat osg::AudioStream::audioSampleFormat() const
	static int _bind_audioSampleFormat(lua_State *L) {
		if (!_lg_typecheck_audioSampleFormat(L)) {
			luaL_error(L, "luna typecheck failed in osg::AudioStream::SampleFormat osg::AudioStream::audioSampleFormat() const function, expected prototype:\nosg::AudioStream::SampleFormat osg::AudioStream::audioSampleFormat() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AudioStream* self=Luna< osg::Referenced >::checkSubType< osg::AudioStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::AudioStream::SampleFormat osg::AudioStream::audioSampleFormat() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::AudioStream::SampleFormat lret = self->audioSampleFormat();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::AudioStream::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::AudioStream::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::AudioStream::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::AudioStream* self=Luna< osg::Referenced >::checkSubType< osg::AudioStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::AudioStream::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AudioStream::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::AudioStream::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::AudioStream::base_setName(const std::string & name) function, expected prototype:\nvoid osg::AudioStream::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::AudioStream* self=Luna< osg::Referenced >::checkSubType< osg::AudioStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::AudioStream::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AudioStream::setName(name);

		return 0;
	}

	// void osg::AudioStream::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::AudioStream::base_computeDataVariance() function, expected prototype:\nvoid osg::AudioStream::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AudioStream* self=Luna< osg::Referenced >::checkSubType< osg::AudioStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::AudioStream::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AudioStream::computeDataVariance();

		return 0;
	}

	// void osg::AudioStream::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::AudioStream::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::AudioStream::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::AudioStream* self=Luna< osg::Referenced >::checkSubType< osg::AudioStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::AudioStream::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AudioStream::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::AudioStream::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::AudioStream::base_getUserData() function, expected prototype:\nosg::Referenced * osg::AudioStream::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AudioStream* self=Luna< osg::Referenced >::checkSubType< osg::AudioStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::AudioStream::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->AudioStream::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::AudioStream::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::AudioStream::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::AudioStream::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AudioStream* self=Luna< osg::Referenced >::checkSubType< osg::AudioStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::AudioStream::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->AudioStream::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::AudioStream::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osg::AudioStream::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::AudioStream::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::AudioStream::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::AudioStream* self=Luna< osg::Referenced >::checkSubType< osg::AudioStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::AudioStream::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AudioStream::releaseGLObjects(_arg1);

		return 0;
	}

	// bool osg::AudioStream::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::AudioStream::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::AudioStream::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::AudioStream* self=Luna< osg::Referenced >::checkSubType< osg::AudioStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::AudioStream::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->AudioStream::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::AudioStream::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::AudioStream::base_libraryName() const function, expected prototype:\nconst char * osg::AudioStream::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AudioStream* self=Luna< osg::Referenced >::checkSubType< osg::AudioStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::AudioStream::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->AudioStream::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::AudioStream::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::AudioStream::base_className() const function, expected prototype:\nconst char * osg::AudioStream::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::AudioStream* self=Luna< osg::Referenced >::checkSubType< osg::AudioStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::AudioStream::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->AudioStream::className();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

osg::AudioStream* LunaTraits< osg::AudioStream >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_AudioStream::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void osg::AudioStream::setAudioSink(osg::AudioSink * audio_sink)
	// void osg::AudioStream::consumeAudioBuffer(void *const buffer, const size_t size)
	// int osg::AudioStream::audioFrequency() const
	// int osg::AudioStream::audioNbChannels() const
	// osg::AudioStream::SampleFormat osg::AudioStream::audioSampleFormat() const
	// osg::Object * osg::Object::cloneType() const
	// osg::Object * osg::Object::clone(const osg::CopyOp & arg1) const
}

void LunaTraits< osg::AudioStream >::_bind_dtor(osg::AudioStream* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::AudioStream >::className[] = "AudioStream";
const char LunaTraits< osg::AudioStream >::fullName[] = "osg::AudioStream";
const char LunaTraits< osg::AudioStream >::moduleName[] = "osg";
const char* LunaTraits< osg::AudioStream >::parents[] = {"osg.Object", 0};
const int LunaTraits< osg::AudioStream >::hash = 6322156;
const int LunaTraits< osg::AudioStream >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::AudioStream >::methods[] = {
	{"isSameKindAs", &luna_wrapper_osg_AudioStream::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_AudioStream::_bind_libraryName},
	{"className", &luna_wrapper_osg_AudioStream::_bind_className},
	{"setAudioSink", &luna_wrapper_osg_AudioStream::_bind_setAudioSink},
	{"consumeAudioBuffer", &luna_wrapper_osg_AudioStream::_bind_consumeAudioBuffer},
	{"audioFrequency", &luna_wrapper_osg_AudioStream::_bind_audioFrequency},
	{"audioNbChannels", &luna_wrapper_osg_AudioStream::_bind_audioNbChannels},
	{"audioSampleFormat", &luna_wrapper_osg_AudioStream::_bind_audioSampleFormat},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_AudioStream::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osg_AudioStream::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_AudioStream::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_AudioStream::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_AudioStream::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osg_AudioStream::_bind_base_releaseGLObjects},
	{"base_isSameKindAs", &luna_wrapper_osg_AudioStream::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_AudioStream::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_AudioStream::_bind_base_className},
	{"fromVoid", &luna_wrapper_osg_AudioStream::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_AudioStream::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_AudioStream::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::AudioStream >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_AudioStream::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::AudioStream >::enumValues[] = {
	{"SAMPLE_FORMAT_U8", osg::AudioStream::SAMPLE_FORMAT_U8},
	{"SAMPLE_FORMAT_S16", osg::AudioStream::SAMPLE_FORMAT_S16},
	{"SAMPLE_FORMAT_S24", osg::AudioStream::SAMPLE_FORMAT_S24},
	{"SAMPLE_FORMAT_S32", osg::AudioStream::SAMPLE_FORMAT_S32},
	{"SAMPLE_FORMAT_F32", osg::AudioStream::SAMPLE_FORMAT_F32},
	{0,0}
};



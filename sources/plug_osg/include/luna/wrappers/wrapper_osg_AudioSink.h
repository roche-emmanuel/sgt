#ifndef _WRAPPERS_WRAPPER_OSG_AUDIOSINK_H_
#define _WRAPPERS_WRAPPER_OSG_AUDIOSINK_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <osg/AudioStream>

class wrapper_osg_AudioSink : public osg::AudioSink, public luna_wrapper_base {

public:
		

	~wrapper_osg_AudioSink() {
		logDEBUG3("Calling delete function for wrapper osg_AudioSink");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osg::AudioSink*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_AudioSink(lua_State* L, lua_Table* dum) 
		: osg::AudioSink(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osg::AudioSink*)this);
			_obj.callFunction<void>();
		}
	};

private:
	// Private virtual methods:
	// osg::AudioSink * osg::AudioSink::cloneType() const
	osg::AudioSink * cloneType() const {
		THROW_IF(!_obj.pushFunction("cloneType"),"No implementation for abstract function osg::AudioSink::cloneType");
		_obj.pushArg((osg::AudioSink*)this);
		return (_obj.callFunction<osg::AudioSink*>());
	};

	// osg::AudioSink * osg::AudioSink::clone(const osg::CopyOp & arg1) const
	osg::AudioSink * clone(const osg::CopyOp & arg1) const {
		THROW_IF(!_obj.pushFunction("clone"),"No implementation for abstract function osg::AudioSink::clone");
		_obj.pushArg((osg::AudioSink*)this);
		_obj.pushArg(&arg1);
		return (_obj.callFunction<osg::AudioSink*>());
	};


	// Protected virtual methods:
public:
	// Public virtual methods:
	// bool osg::Object::isSameKindAs(const osg::Object * arg1) const
	bool isSameKindAs(const osg::Object * arg1) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg((osg::AudioSink*)this);
			_obj.pushArg(arg1);
			return (_obj.callFunction<bool>());
		}

		return AudioSink::isSameKindAs(arg1);
	};

	// void osg::Object::setThreadSafeRefUnref(bool threadSafe)
	void setThreadSafeRefUnref(bool threadSafe) {
		if(_obj.pushFunction("setThreadSafeRefUnref")) {
			_obj.pushArg((osg::AudioSink*)this);
			_obj.pushArg(threadSafe);
			return (_obj.callFunction<void>());
		}

		return AudioSink::setThreadSafeRefUnref(threadSafe);
	};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg((osg::AudioSink*)this);
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return AudioSink::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			_obj.pushArg((osg::AudioSink*)this);
			return (_obj.callFunction<void>());
		}

		return AudioSink::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg((osg::AudioSink*)this);
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return AudioSink::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			_obj.pushArg((osg::AudioSink*)this);
			return (_obj.callFunction<osg::Referenced*>());
		}

		return AudioSink::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			_obj.pushArg((osg::AudioSink*)this);
			return (_obj.callFunction<osg::Referenced*>());
		}

		return AudioSink::getUserData();
	};

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg((osg::AudioSink*)this);
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return AudioSink::releaseGLObjects(arg1);
	};

	// const char * osg::AudioSink::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			_obj.pushArg((osg::AudioSink*)this);
			return (_obj.callFunction<const char*>());
		}

		return AudioSink::libraryName();
	};

	// const char * osg::AudioSink::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			_obj.pushArg((osg::AudioSink*)this);
			return (_obj.callFunction<const char*>());
		}

		return AudioSink::className();
	};

	// void osg::AudioSink::play()
	void play() {
		THROW_IF(!_obj.pushFunction("play"),"No implementation for abstract function osg::AudioSink::play");
		_obj.pushArg((osg::AudioSink*)this);
		return (_obj.callFunction<void>());
	};

	// void osg::AudioSink::pause()
	void pause() {
		THROW_IF(!_obj.pushFunction("pause"),"No implementation for abstract function osg::AudioSink::pause");
		_obj.pushArg((osg::AudioSink*)this);
		return (_obj.callFunction<void>());
	};

	// void osg::AudioSink::stop()
	void stop() {
		THROW_IF(!_obj.pushFunction("stop"),"No implementation for abstract function osg::AudioSink::stop");
		_obj.pushArg((osg::AudioSink*)this);
		return (_obj.callFunction<void>());
	};

	// bool osg::AudioSink::playing() const
	bool playing() const {
		THROW_IF(!_obj.pushFunction("playing"),"No implementation for abstract function osg::AudioSink::playing");
		_obj.pushArg((osg::AudioSink*)this);
		return (_obj.callFunction<bool>());
	};

	// double osg::AudioSink::getDelay() const
	double getDelay() const {
		if(_obj.pushFunction("getDelay")) {
			_obj.pushArg((osg::AudioSink*)this);
			return (_obj.callFunction<double>());
		}

		return AudioSink::getDelay();
	};

	// void osg::AudioSink::setDelay(const double delay)
	void setDelay(const double delay) {
		if(_obj.pushFunction("setDelay")) {
			_obj.pushArg((osg::AudioSink*)this);
			_obj.pushArg(delay);
			return (_obj.callFunction<void>());
		}

		return AudioSink::setDelay(delay);
	};

	// void osg::AudioSink::setVolume(float arg1)
	void setVolume(float arg1) {
		if(_obj.pushFunction("setVolume")) {
			_obj.pushArg((osg::AudioSink*)this);
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return AudioSink::setVolume(arg1);
	};

	// float osg::AudioSink::getVolume() const
	float getVolume() const {
		if(_obj.pushFunction("getVolume")) {
			_obj.pushArg((osg::AudioSink*)this);
			return (_obj.callFunction<float>());
		}

		return AudioSink::getVolume();
	};


	// Protected non-virtual methods:
	// void osg::Referenced::signalObserversAndDelete(bool signalDelete, bool doDelete) const
	void public_signalObserversAndDelete(bool signalDelete, bool doDelete) const {
		return osg::Referenced::signalObserversAndDelete(signalDelete, doDelete);
	};

	// void osg::Referenced::deleteUsingDeleteHandler() const
	void public_deleteUsingDeleteHandler() const {
		return osg::Referenced::deleteUsingDeleteHandler();
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_signalObserversAndDelete(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_deleteUsingDeleteHandler(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Protected non-virtual function binds:
	// void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const
	static int _bind_public_signalObserversAndDelete(lua_State *L) {
		if (!_lg_typecheck_public_signalObserversAndDelete(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const function, expected prototype:\nvoid osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool signalDelete=(bool)(lua_toboolean(L,2)==1);
		bool doDelete=(bool)(lua_toboolean(L,3)==1);

		wrapper_osg_AudioSink* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_AudioSink >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_signalObserversAndDelete(bool, bool) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_signalObserversAndDelete(signalDelete, doDelete);

		return 0;
	}

	// void osg::Referenced::public_deleteUsingDeleteHandler() const
	static int _bind_public_deleteUsingDeleteHandler(lua_State *L) {
		if (!_lg_typecheck_public_deleteUsingDeleteHandler(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Referenced::public_deleteUsingDeleteHandler() const function, expected prototype:\nvoid osg::Referenced::public_deleteUsingDeleteHandler() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wrapper_osg_AudioSink* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_AudioSink >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_deleteUsingDeleteHandler() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_deleteUsingDeleteHandler();

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"signalObserversAndDelete",_bind_public_signalObserversAndDelete},
		{"deleteUsingDeleteHandler",_bind_public_deleteUsingDeleteHandler},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif


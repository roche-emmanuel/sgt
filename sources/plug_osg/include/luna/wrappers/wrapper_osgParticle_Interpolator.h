#ifndef _WRAPPERS_WRAPPER_OSGPARTICLE_INTERPOLATOR_H_
#define _WRAPPERS_WRAPPER_OSGPARTICLE_INTERPOLATOR_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <osgParticle/Interpolator>

class wrapper_osgParticle_Interpolator : public osgParticle::Interpolator, public luna_wrapper_base {

public:
		

	~wrapper_osgParticle_Interpolator() {
		logDEBUG3("Calling delete function for wrapper osgParticle_Interpolator");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osgParticle::Interpolator*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgParticle_Interpolator(lua_State* L, lua_Table* dum) 
		: osgParticle::Interpolator(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osgParticle::Interpolator*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_osgParticle_Interpolator(lua_State* L, lua_Table* dum, const osgParticle::Interpolator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) 
		: osgParticle::Interpolator(copy, copyop), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osgParticle::Interpolator*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// osg::Object * osg::Object::cloneType() const
	osg::Object * cloneType() const {
		THROW_IF(!_obj.pushFunction("cloneType"),"No implementation for abstract function osg::Object::cloneType");
		_obj.pushArg((osgParticle::Interpolator*)this);
		return (_obj.callFunction<osg::Object*>());
	};

	// osg::Object * osg::Object::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		THROW_IF(!_obj.pushFunction("clone"),"No implementation for abstract function osg::Object::clone");
		_obj.pushArg((osgParticle::Interpolator*)this);
		_obj.pushArg(&arg1);
		return (_obj.callFunction<osg::Object*>());
	};

	// void osg::Object::setThreadSafeRefUnref(bool threadSafe)
	void setThreadSafeRefUnref(bool threadSafe) {
		if(_obj.pushFunction("setThreadSafeRefUnref")) {
			_obj.pushArg((osgParticle::Interpolator*)this);
			_obj.pushArg(threadSafe);
			return (_obj.callFunction<void>());
		}

		return Interpolator::setThreadSafeRefUnref(threadSafe);
	};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg((osgParticle::Interpolator*)this);
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return Interpolator::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			_obj.pushArg((osgParticle::Interpolator*)this);
			return (_obj.callFunction<void>());
		}

		return Interpolator::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg((osgParticle::Interpolator*)this);
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return Interpolator::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			_obj.pushArg((osgParticle::Interpolator*)this);
			return (_obj.callFunction<osg::Referenced*>());
		}

		return Interpolator::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			_obj.pushArg((osgParticle::Interpolator*)this);
			return (_obj.callFunction<osg::Referenced*>());
		}

		return Interpolator::getUserData();
	};

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg((osgParticle::Interpolator*)this);
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return Interpolator::releaseGLObjects(arg1);
	};

	// const char * osgParticle::Interpolator::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			_obj.pushArg((osgParticle::Interpolator*)this);
			return (_obj.callFunction<const char*>());
		}

		return Interpolator::libraryName();
	};

	// const char * osgParticle::Interpolator::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			_obj.pushArg((osgParticle::Interpolator*)this);
			return (_obj.callFunction<const char*>());
		}

		return Interpolator::className();
	};

	// bool osgParticle::Interpolator::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg((osgParticle::Interpolator*)this);
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return Interpolator::isSameKindAs(obj);
	};

	// float osgParticle::Interpolator::interpolate(float t, float y1, float y2) const
	float interpolate(float t, float y1, float y2) const {
		THROW_IF(!_obj.pushFunction("interpolate"),"No implementation for abstract function osgParticle::Interpolator::interpolate");
		_obj.pushArg((osgParticle::Interpolator*)this);
		_obj.pushArg(t);
		_obj.pushArg(y1);
		_obj.pushArg(y2);
		return (_obj.callFunction<float>());
	};

	// osg::Vec2f osgParticle::Interpolator::interpolate(float t, const osg::Vec2f & y1, const osg::Vec2f & y2) const
	osg::Vec2f interpolate(float t, const osg::Vec2f & y1, const osg::Vec2f & y2) const {
		if(_obj.pushFunction("interpolate")) {
			_obj.pushArg((osgParticle::Interpolator*)this);
			_obj.pushArg(t);
			_obj.pushArg(&y1);
			_obj.pushArg(&y2);
			return *(_obj.callFunction<osg::Vec2f*>());
		}

		return Interpolator::interpolate(t, y1, y2);
	};

	// osg::Vec3f osgParticle::Interpolator::interpolate(float t, const osg::Vec3f & y1, const osg::Vec3f & y2) const
	osg::Vec3f interpolate(float t, const osg::Vec3f & y1, const osg::Vec3f & y2) const {
		if(_obj.pushFunction("interpolate")) {
			_obj.pushArg((osgParticle::Interpolator*)this);
			_obj.pushArg(t);
			_obj.pushArg(&y1);
			_obj.pushArg(&y2);
			return *(_obj.callFunction<osg::Vec3f*>());
		}

		return Interpolator::interpolate(t, y1, y2);
	};

	// osg::Vec4f osgParticle::Interpolator::interpolate(float t, const osg::Vec4f & y1, const osg::Vec4f & y2) const
	osg::Vec4f interpolate(float t, const osg::Vec4f & y1, const osg::Vec4f & y2) const {
		if(_obj.pushFunction("interpolate")) {
			_obj.pushArg((osgParticle::Interpolator*)this);
			_obj.pushArg(t);
			_obj.pushArg(&y1);
			_obj.pushArg(&y2);
			return *(_obj.callFunction<osg::Vec4f*>());
		}

		return Interpolator::interpolate(t, y1, y2);
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

		wrapper_osgParticle_Interpolator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgParticle_Interpolator >(L,1);
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


		wrapper_osgParticle_Interpolator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgParticle_Interpolator >(L,1);
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


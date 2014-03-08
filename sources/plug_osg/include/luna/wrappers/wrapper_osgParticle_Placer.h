#ifndef _WRAPPERS_WRAPPER_OSGPARTICLE_PLACER_H_
#define _WRAPPERS_WRAPPER_OSGPARTICLE_PLACER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <osgParticle/Placer>

class wrapper_osgParticle_Placer : public osgParticle::Placer, public luna_wrapper_base {

public:
		

	~wrapper_osgParticle_Placer() {
		logDEBUG3("Calling delete function for wrapper osgParticle_Placer");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osgParticle::Placer*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgParticle_Placer(lua_State* L, lua_Table* dum) 
		: osgParticle::Placer(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osgParticle::Placer*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_osgParticle_Placer(lua_State* L, lua_Table* dum, const osgParticle::Placer & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) 
		: osgParticle::Placer(copy, copyop), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osgParticle::Placer*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// osg::Object * osg::Object::cloneType() const
	osg::Object * cloneType() const {
		THROW_IF(!_obj.pushFunction("cloneType"),"No implementation for abstract function osg::Object::cloneType");
		_obj.pushArg((osgParticle::Placer*)this);
		return (_obj.callFunction<osg::Object*>());
	};

	// osg::Object * osg::Object::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		THROW_IF(!_obj.pushFunction("clone"),"No implementation for abstract function osg::Object::clone");
		_obj.pushArg((osgParticle::Placer*)this);
		_obj.pushArg(&arg1);
		return (_obj.callFunction<osg::Object*>());
	};

	// void osg::Object::setThreadSafeRefUnref(bool threadSafe)
	void setThreadSafeRefUnref(bool threadSafe) {
		if(_obj.pushFunction("setThreadSafeRefUnref")) {
			_obj.pushArg((osgParticle::Placer*)this);
			_obj.pushArg(threadSafe);
			return (_obj.callFunction<void>());
		}

		return Placer::setThreadSafeRefUnref(threadSafe);
	};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg((osgParticle::Placer*)this);
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return Placer::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			_obj.pushArg((osgParticle::Placer*)this);
			return (_obj.callFunction<void>());
		}

		return Placer::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg((osgParticle::Placer*)this);
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return Placer::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			_obj.pushArg((osgParticle::Placer*)this);
			return (_obj.callFunction<osg::Referenced*>());
		}

		return Placer::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			_obj.pushArg((osgParticle::Placer*)this);
			return (_obj.callFunction<osg::Referenced*>());
		}

		return Placer::getUserData();
	};

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg((osgParticle::Placer*)this);
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return Placer::releaseGLObjects(arg1);
	};

	// const char * osgParticle::Placer::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			_obj.pushArg((osgParticle::Placer*)this);
			return (_obj.callFunction<const char*>());
		}

		return Placer::libraryName();
	};

	// const char * osgParticle::Placer::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			_obj.pushArg((osgParticle::Placer*)this);
			return (_obj.callFunction<const char*>());
		}

		return Placer::className();
	};

	// bool osgParticle::Placer::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg((osgParticle::Placer*)this);
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return Placer::isSameKindAs(obj);
	};

	// void osgParticle::Placer::place(osgParticle::Particle * P) const
	void place(osgParticle::Particle * P) const {
		THROW_IF(!_obj.pushFunction("place"),"No implementation for abstract function osgParticle::Placer::place");
		_obj.pushArg((osgParticle::Placer*)this);
		_obj.pushArg(P);
		return (_obj.callFunction<void>());
	};

	// float osgParticle::Placer::volume() const
	float volume() const {
		if(_obj.pushFunction("volume")) {
			_obj.pushArg((osgParticle::Placer*)this);
			return (_obj.callFunction<float>());
		}

		return Placer::volume();
	};

	// osg::Vec3f osgParticle::Placer::getControlPosition() const
	osg::Vec3f getControlPosition() const {
		THROW_IF(!_obj.pushFunction("getControlPosition"),"No implementation for abstract function osgParticle::Placer::getControlPosition");
		_obj.pushArg((osgParticle::Placer*)this);
		return *(_obj.callFunction<osg::Vec3f*>());
	};


	// Protected non-virtual methods:
	// osgParticle::Placer & osgParticle::Placer::operator=(const osgParticle::Placer & arg1)
	osgParticle::Placer & public_op_assign(const osgParticle::Placer & arg1) {
		return osgParticle::Placer::operator=(arg1);
	};

	// void osg::Referenced::signalObserversAndDelete(bool signalDelete, bool doDelete) const
	void public_signalObserversAndDelete(bool signalDelete, bool doDelete) const {
		return osg::Referenced::signalObserversAndDelete(signalDelete, doDelete);
	};

	// void osg::Referenced::deleteUsingDeleteHandler() const
	void public_deleteUsingDeleteHandler() const {
		return osg::Referenced::deleteUsingDeleteHandler();
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_op_assign(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

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
	// osgParticle::Placer & osgParticle::Placer::public_op_assign(const osgParticle::Placer & arg1)
	static int _bind_public_op_assign(lua_State *L) {
		if (!_lg_typecheck_public_op_assign(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::Placer & osgParticle::Placer::public_op_assign(const osgParticle::Placer & arg1) function, expected prototype:\nosgParticle::Placer & osgParticle::Placer::public_op_assign(const osgParticle::Placer & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgParticle::Placer* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osgParticle::Placer >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgParticle::Placer::public_op_assign function");
		}
		const osgParticle::Placer & _arg1=*_arg1_ptr;

		wrapper_osgParticle_Placer* self=Luna< osg::Referenced >::checkSubType< wrapper_osgParticle_Placer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgParticle::Placer & osgParticle::Placer::public_op_assign(const osgParticle::Placer &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgParticle::Placer* lret = &self->public_op_assign(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::Placer >::push(L,lret,false);

		return 1;
	}

	// void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const
	static int _bind_public_signalObserversAndDelete(lua_State *L) {
		if (!_lg_typecheck_public_signalObserversAndDelete(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const function, expected prototype:\nvoid osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool signalDelete=(bool)(lua_toboolean(L,2)==1);
		bool doDelete=(bool)(lua_toboolean(L,3)==1);

		wrapper_osgParticle_Placer* self=Luna< osg::Referenced >::checkSubType< wrapper_osgParticle_Placer >(L,1);
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


		wrapper_osgParticle_Placer* self=Luna< osg::Referenced >::checkSubType< wrapper_osgParticle_Placer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_deleteUsingDeleteHandler() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_deleteUsingDeleteHandler();

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"op_assign",_bind_public_op_assign},
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


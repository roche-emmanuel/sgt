#ifndef _WRAPPERS_WRAPPER_OSGPARTICLE_ANGULARACCELOPERATOR_H_
#define _WRAPPERS_WRAPPER_OSGPARTICLE_ANGULARACCELOPERATOR_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <osgParticle/AngularAccelOperator>

class wrapper_osgParticle_AngularAccelOperator : public osgParticle::AngularAccelOperator, public luna_wrapper_base {

public:
		

	~wrapper_osgParticle_AngularAccelOperator() {
		logDEBUG3("Calling delete function for wrapper osgParticle_AngularAccelOperator");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osgParticle::AngularAccelOperator*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgParticle_AngularAccelOperator(lua_State* L, lua_Table* dum) 
		: osgParticle::AngularAccelOperator(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osgParticle::AngularAccelOperator*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_osgParticle_AngularAccelOperator(lua_State* L, lua_Table* dum, const osgParticle::AngularAccelOperator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) 
		: osgParticle::AngularAccelOperator(copy, copyop), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osgParticle::AngularAccelOperator*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void osg::Object::setThreadSafeRefUnref(bool threadSafe)
	void setThreadSafeRefUnref(bool threadSafe) {
		if(_obj.pushFunction("setThreadSafeRefUnref")) {
			_obj.pushArg((osgParticle::AngularAccelOperator*)this);
			_obj.pushArg(threadSafe);
			return (_obj.callFunction<void>());
		}

		return AngularAccelOperator::setThreadSafeRefUnref(threadSafe);
	};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg((osgParticle::AngularAccelOperator*)this);
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return AngularAccelOperator::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			_obj.pushArg((osgParticle::AngularAccelOperator*)this);
			return (_obj.callFunction<void>());
		}

		return AngularAccelOperator::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg((osgParticle::AngularAccelOperator*)this);
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return AngularAccelOperator::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			_obj.pushArg((osgParticle::AngularAccelOperator*)this);
			return (_obj.callFunction<osg::Referenced*>());
		}

		return AngularAccelOperator::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			_obj.pushArg((osgParticle::AngularAccelOperator*)this);
			return (_obj.callFunction<osg::Referenced*>());
		}

		return AngularAccelOperator::getUserData();
	};

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg((osgParticle::AngularAccelOperator*)this);
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return AngularAccelOperator::releaseGLObjects(arg1);
	};

	// void osgParticle::Operator::operateParticles(osgParticle::ParticleSystem * ps, double dt)
	void operateParticles(osgParticle::ParticleSystem * ps, double dt) {
		if(_obj.pushFunction("operateParticles")) {
			_obj.pushArg((osgParticle::AngularAccelOperator*)this);
			_obj.pushArg(ps);
			_obj.pushArg(dt);
			return (_obj.callFunction<void>());
		}

		return AngularAccelOperator::operateParticles(ps, dt);
	};

	// void osgParticle::Operator::endOperate()
	void endOperate() {
		if(_obj.pushFunction("endOperate")) {
			_obj.pushArg((osgParticle::AngularAccelOperator*)this);
			return (_obj.callFunction<void>());
		}

		return AngularAccelOperator::endOperate();
	};

	// osg::Object * osgParticle::AngularAccelOperator::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			_obj.pushArg((osgParticle::AngularAccelOperator*)this);
			return (_obj.callFunction<osg::Object*>());
		}

		return AngularAccelOperator::cloneType();
	};

	// osg::Object * osgParticle::AngularAccelOperator::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg((osgParticle::AngularAccelOperator*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return AngularAccelOperator::clone(arg1);
	};

	// bool osgParticle::AngularAccelOperator::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg((osgParticle::AngularAccelOperator*)this);
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return AngularAccelOperator::isSameKindAs(obj);
	};

	// const char * osgParticle::AngularAccelOperator::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			_obj.pushArg((osgParticle::AngularAccelOperator*)this);
			return (_obj.callFunction<const char*>());
		}

		return AngularAccelOperator::libraryName();
	};

	// const char * osgParticle::AngularAccelOperator::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			_obj.pushArg((osgParticle::AngularAccelOperator*)this);
			return (_obj.callFunction<const char*>());
		}

		return AngularAccelOperator::className();
	};

	// void osgParticle::AngularAccelOperator::operate(osgParticle::Particle * P, double dt)
	void operate(osgParticle::Particle * P, double dt) {
		if(_obj.pushFunction("operate")) {
			_obj.pushArg((osgParticle::AngularAccelOperator*)this);
			_obj.pushArg(P);
			_obj.pushArg(dt);
			return (_obj.callFunction<void>());
		}

		return AngularAccelOperator::operate(P, dt);
	};

	// void osgParticle::AngularAccelOperator::beginOperate(osgParticle::Program * prg)
	void beginOperate(osgParticle::Program * prg) {
		if(_obj.pushFunction("beginOperate")) {
			_obj.pushArg((osgParticle::AngularAccelOperator*)this);
			_obj.pushArg(prg);
			return (_obj.callFunction<void>());
		}

		return AngularAccelOperator::beginOperate(prg);
	};


	// Protected non-virtual methods:
	// osgParticle::AngularAccelOperator & osgParticle::AngularAccelOperator::operator=(const osgParticle::AngularAccelOperator & arg1)
	osgParticle::AngularAccelOperator & public_op_assign(const osgParticle::AngularAccelOperator & arg1) {
		return osgParticle::AngularAccelOperator::operator=(arg1);
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
	// osgParticle::AngularAccelOperator & osgParticle::AngularAccelOperator::public_op_assign(const osgParticle::AngularAccelOperator & arg1)
	static int _bind_public_op_assign(lua_State *L) {
		if (!_lg_typecheck_public_op_assign(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::AngularAccelOperator & osgParticle::AngularAccelOperator::public_op_assign(const osgParticle::AngularAccelOperator & arg1) function, expected prototype:\nosgParticle::AngularAccelOperator & osgParticle::AngularAccelOperator::public_op_assign(const osgParticle::AngularAccelOperator & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgParticle::AngularAccelOperator* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osgParticle::AngularAccelOperator >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgParticle::AngularAccelOperator::public_op_assign function");
		}
		const osgParticle::AngularAccelOperator & _arg1=*_arg1_ptr;

		wrapper_osgParticle_AngularAccelOperator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgParticle_AngularAccelOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgParticle::AngularAccelOperator & osgParticle::AngularAccelOperator::public_op_assign(const osgParticle::AngularAccelOperator &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgParticle::AngularAccelOperator* lret = &self->public_op_assign(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::AngularAccelOperator >::push(L,lret,false);

		return 1;
	}

	// void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const
	static int _bind_public_signalObserversAndDelete(lua_State *L) {
		if (!_lg_typecheck_public_signalObserversAndDelete(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const function, expected prototype:\nvoid osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool signalDelete=(bool)(lua_toboolean(L,2)==1);
		bool doDelete=(bool)(lua_toboolean(L,3)==1);

		wrapper_osgParticle_AngularAccelOperator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgParticle_AngularAccelOperator >(L,1);
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


		wrapper_osgParticle_AngularAccelOperator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgParticle_AngularAccelOperator >(L,1);
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


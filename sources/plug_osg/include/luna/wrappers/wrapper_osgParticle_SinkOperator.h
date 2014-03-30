#ifndef _WRAPPERS_WRAPPER_OSGPARTICLE_SINKOPERATOR_H_
#define _WRAPPERS_WRAPPER_OSGPARTICLE_SINKOPERATOR_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <osgParticle/SinkOperator>

class wrapper_osgParticle_SinkOperator : public osgParticle::SinkOperator, public luna_wrapper_base {

public:
		

	~wrapper_osgParticle_SinkOperator() {
		logDEBUG3("Calling delete function for wrapper osgParticle_SinkOperator");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osgParticle::SinkOperator*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgParticle_SinkOperator(lua_State* L, lua_Table* dum) 
		: osgParticle::SinkOperator(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osgParticle::SinkOperator*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_osgParticle_SinkOperator(lua_State* L, lua_Table* dum, const osgParticle::SinkOperator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) 
		: osgParticle::SinkOperator(copy, copyop), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osgParticle::SinkOperator*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void osgParticle::SinkOperator::handlePoint(const osgParticle::DomainOperator::Domain & domain, osgParticle::Particle * P, double dt)
	void handlePoint(const osgParticle::DomainOperator::Domain & domain, osgParticle::Particle * P, double dt) {
		if(_obj.pushFunction("handlePoint")) {
			_obj.pushArg((osgParticle::SinkOperator*)this);
			_obj.pushArg(&domain);
			_obj.pushArg(P);
			_obj.pushArg(dt);
			return (_obj.callFunction<void>());
		}

		return SinkOperator::handlePoint(domain, P, dt);
	};

	// void osgParticle::SinkOperator::handleLineSegment(const osgParticle::DomainOperator::Domain & domain, osgParticle::Particle * P, double dt)
	void handleLineSegment(const osgParticle::DomainOperator::Domain & domain, osgParticle::Particle * P, double dt) {
		if(_obj.pushFunction("handleLineSegment")) {
			_obj.pushArg((osgParticle::SinkOperator*)this);
			_obj.pushArg(&domain);
			_obj.pushArg(P);
			_obj.pushArg(dt);
			return (_obj.callFunction<void>());
		}

		return SinkOperator::handleLineSegment(domain, P, dt);
	};

	// void osgParticle::SinkOperator::handleTriangle(const osgParticle::DomainOperator::Domain & domain, osgParticle::Particle * P, double dt)
	void handleTriangle(const osgParticle::DomainOperator::Domain & domain, osgParticle::Particle * P, double dt) {
		if(_obj.pushFunction("handleTriangle")) {
			_obj.pushArg((osgParticle::SinkOperator*)this);
			_obj.pushArg(&domain);
			_obj.pushArg(P);
			_obj.pushArg(dt);
			return (_obj.callFunction<void>());
		}

		return SinkOperator::handleTriangle(domain, P, dt);
	};

	// void osgParticle::SinkOperator::handleRectangle(const osgParticle::DomainOperator::Domain & domain, osgParticle::Particle * P, double dt)
	void handleRectangle(const osgParticle::DomainOperator::Domain & domain, osgParticle::Particle * P, double dt) {
		if(_obj.pushFunction("handleRectangle")) {
			_obj.pushArg((osgParticle::SinkOperator*)this);
			_obj.pushArg(&domain);
			_obj.pushArg(P);
			_obj.pushArg(dt);
			return (_obj.callFunction<void>());
		}

		return SinkOperator::handleRectangle(domain, P, dt);
	};

	// void osgParticle::SinkOperator::handlePlane(const osgParticle::DomainOperator::Domain & domain, osgParticle::Particle * P, double dt)
	void handlePlane(const osgParticle::DomainOperator::Domain & domain, osgParticle::Particle * P, double dt) {
		if(_obj.pushFunction("handlePlane")) {
			_obj.pushArg((osgParticle::SinkOperator*)this);
			_obj.pushArg(&domain);
			_obj.pushArg(P);
			_obj.pushArg(dt);
			return (_obj.callFunction<void>());
		}

		return SinkOperator::handlePlane(domain, P, dt);
	};

	// void osgParticle::SinkOperator::handleSphere(const osgParticle::DomainOperator::Domain & domain, osgParticle::Particle * P, double dt)
	void handleSphere(const osgParticle::DomainOperator::Domain & domain, osgParticle::Particle * P, double dt) {
		if(_obj.pushFunction("handleSphere")) {
			_obj.pushArg((osgParticle::SinkOperator*)this);
			_obj.pushArg(&domain);
			_obj.pushArg(P);
			_obj.pushArg(dt);
			return (_obj.callFunction<void>());
		}

		return SinkOperator::handleSphere(domain, P, dt);
	};

	// void osgParticle::SinkOperator::handleBox(const osgParticle::DomainOperator::Domain & domain, osgParticle::Particle * P, double dt)
	void handleBox(const osgParticle::DomainOperator::Domain & domain, osgParticle::Particle * P, double dt) {
		if(_obj.pushFunction("handleBox")) {
			_obj.pushArg((osgParticle::SinkOperator*)this);
			_obj.pushArg(&domain);
			_obj.pushArg(P);
			_obj.pushArg(dt);
			return (_obj.callFunction<void>());
		}

		return SinkOperator::handleBox(domain, P, dt);
	};

	// void osgParticle::SinkOperator::handleDisk(const osgParticle::DomainOperator::Domain & domain, osgParticle::Particle * P, double dt)
	void handleDisk(const osgParticle::DomainOperator::Domain & domain, osgParticle::Particle * P, double dt) {
		if(_obj.pushFunction("handleDisk")) {
			_obj.pushArg((osgParticle::SinkOperator*)this);
			_obj.pushArg(&domain);
			_obj.pushArg(P);
			_obj.pushArg(dt);
			return (_obj.callFunction<void>());
		}

		return SinkOperator::handleDisk(domain, P, dt);
	};

public:
	// Public virtual methods:
	// void osg::Object::setThreadSafeRefUnref(bool threadSafe)
	void setThreadSafeRefUnref(bool threadSafe) {
		if(_obj.pushFunction("setThreadSafeRefUnref")) {
			_obj.pushArg((osgParticle::SinkOperator*)this);
			_obj.pushArg(threadSafe);
			return (_obj.callFunction<void>());
		}

		return SinkOperator::setThreadSafeRefUnref(threadSafe);
	};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg((osgParticle::SinkOperator*)this);
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return SinkOperator::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			_obj.pushArg((osgParticle::SinkOperator*)this);
			return (_obj.callFunction<void>());
		}

		return SinkOperator::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg((osgParticle::SinkOperator*)this);
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return SinkOperator::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			_obj.pushArg((osgParticle::SinkOperator*)this);
			return (_obj.callFunction<osg::Referenced*>());
		}

		return SinkOperator::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			_obj.pushArg((osgParticle::SinkOperator*)this);
			return (_obj.callFunction<osg::Referenced*>());
		}

		return SinkOperator::getUserData();
	};

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg((osgParticle::SinkOperator*)this);
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return SinkOperator::releaseGLObjects(arg1);
	};

	// void osgParticle::Operator::operateParticles(osgParticle::ParticleSystem * ps, double dt)
	void operateParticles(osgParticle::ParticleSystem * ps, double dt) {
		if(_obj.pushFunction("operateParticles")) {
			_obj.pushArg((osgParticle::SinkOperator*)this);
			_obj.pushArg(ps);
			_obj.pushArg(dt);
			return (_obj.callFunction<void>());
		}

		return SinkOperator::operateParticles(ps, dt);
	};

	// void osgParticle::DomainOperator::operate(osgParticle::Particle * P, double dt)
	void operate(osgParticle::Particle * P, double dt) {
		if(_obj.pushFunction("operate")) {
			_obj.pushArg((osgParticle::SinkOperator*)this);
			_obj.pushArg(P);
			_obj.pushArg(dt);
			return (_obj.callFunction<void>());
		}

		return SinkOperator::operate(P, dt);
	};

	// void osgParticle::DomainOperator::endOperate()
	void endOperate() {
		if(_obj.pushFunction("endOperate")) {
			_obj.pushArg((osgParticle::SinkOperator*)this);
			return (_obj.callFunction<void>());
		}

		return SinkOperator::endOperate();
	};

	// osg::Object * osgParticle::SinkOperator::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			_obj.pushArg((osgParticle::SinkOperator*)this);
			return (_obj.callFunction<osg::Object*>());
		}

		return SinkOperator::cloneType();
	};

	// osg::Object * osgParticle::SinkOperator::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg((osgParticle::SinkOperator*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return SinkOperator::clone(arg1);
	};

	// bool osgParticle::SinkOperator::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg((osgParticle::SinkOperator*)this);
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return SinkOperator::isSameKindAs(obj);
	};

	// const char * osgParticle::SinkOperator::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			_obj.pushArg((osgParticle::SinkOperator*)this);
			return (_obj.callFunction<const char*>());
		}

		return SinkOperator::libraryName();
	};

	// const char * osgParticle::SinkOperator::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			_obj.pushArg((osgParticle::SinkOperator*)this);
			return (_obj.callFunction<const char*>());
		}

		return SinkOperator::className();
	};

	// void osgParticle::SinkOperator::beginOperate(osgParticle::Program * prg)
	void beginOperate(osgParticle::Program * prg) {
		if(_obj.pushFunction("beginOperate")) {
			_obj.pushArg((osgParticle::SinkOperator*)this);
			_obj.pushArg(prg);
			return (_obj.callFunction<void>());
		}

		return SinkOperator::beginOperate(prg);
	};


	// Protected non-virtual methods:
	// const osg::Vec3f & osgParticle::SinkOperator::getValue(osgParticle::Particle * P)
	const osg::Vec3f & public_getValue(osgParticle::Particle * P) {
		return osgParticle::SinkOperator::getValue(P);
	};

	// void osgParticle::SinkOperator::kill(osgParticle::Particle * P, bool insideDomain)
	void public_kill(osgParticle::Particle * P, bool insideDomain) {
		return osgParticle::SinkOperator::kill(P, insideDomain);
	};

	// osgParticle::SinkOperator & osgParticle::SinkOperator::operator=(const osgParticle::SinkOperator & arg1)
	osgParticle::SinkOperator & public_op_assign(const osgParticle::SinkOperator & arg1) {
		return osgParticle::SinkOperator::operator=(arg1);
	};

	// void osgParticle::DomainOperator::computeNewBasis(const osg::Vec3f & arg1, const osg::Vec3f & arg2, osg::Vec3f & arg3, osg::Vec3f & arg4)
	void public_computeNewBasis(const osg::Vec3f & arg1, const osg::Vec3f & arg2, osg::Vec3f & arg3, osg::Vec3f & arg4) {
		return osgParticle::DomainOperator::computeNewBasis(arg1, arg2, arg3, arg4);
	};

	// void osgParticle::DomainOperator::ignore(const std::string & func)
	void public_ignore(const std::string & func) {
		return osgParticle::DomainOperator::ignore(func);
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
	inline static bool _lg_typecheck_public_getValue(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,81629555)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_kill(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,81629555)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_op_assign(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_computeNewBasis(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303204) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,92303204) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_ignore(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
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
	// const osg::Vec3f & osgParticle::SinkOperator::public_getValue(osgParticle::Particle * P)
	static int _bind_public_getValue(lua_State *L) {
		if (!_lg_typecheck_public_getValue(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec3f & osgParticle::SinkOperator::public_getValue(osgParticle::Particle * P) function, expected prototype:\nconst osg::Vec3f & osgParticle::SinkOperator::public_getValue(osgParticle::Particle * P)\nClass arguments details:\narg 1 ID = 81629555\n\n%s",luna_dumpStack(L).c_str());
		}

		osgParticle::Particle* P=(Luna< osgParticle::Particle >::check(L,2));

		wrapper_osgParticle_SinkOperator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgParticle_SinkOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec3f & osgParticle::SinkOperator::public_getValue(osgParticle::Particle *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec3f* lret = &self->public_getValue(P);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// void osgParticle::SinkOperator::public_kill(osgParticle::Particle * P, bool insideDomain)
	static int _bind_public_kill(lua_State *L) {
		if (!_lg_typecheck_public_kill(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::SinkOperator::public_kill(osgParticle::Particle * P, bool insideDomain) function, expected prototype:\nvoid osgParticle::SinkOperator::public_kill(osgParticle::Particle * P, bool insideDomain)\nClass arguments details:\narg 1 ID = 81629555\n\n%s",luna_dumpStack(L).c_str());
		}

		osgParticle::Particle* P=(Luna< osgParticle::Particle >::check(L,2));
		bool insideDomain=(bool)(lua_toboolean(L,3)==1);

		wrapper_osgParticle_SinkOperator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgParticle_SinkOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::SinkOperator::public_kill(osgParticle::Particle *, bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_kill(P, insideDomain);

		return 0;
	}

	// osgParticle::SinkOperator & osgParticle::SinkOperator::public_op_assign(const osgParticle::SinkOperator & arg1)
	static int _bind_public_op_assign(lua_State *L) {
		if (!_lg_typecheck_public_op_assign(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::SinkOperator & osgParticle::SinkOperator::public_op_assign(const osgParticle::SinkOperator & arg1) function, expected prototype:\nosgParticle::SinkOperator & osgParticle::SinkOperator::public_op_assign(const osgParticle::SinkOperator & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgParticle::SinkOperator* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osgParticle::SinkOperator >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgParticle::SinkOperator::public_op_assign function");
		}
		const osgParticle::SinkOperator & _arg1=*_arg1_ptr;

		wrapper_osgParticle_SinkOperator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgParticle_SinkOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgParticle::SinkOperator & osgParticle::SinkOperator::public_op_assign(const osgParticle::SinkOperator &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgParticle::SinkOperator* lret = &self->public_op_assign(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::SinkOperator >::push(L,lret,false);

		return 1;
	}

	// void osgParticle::DomainOperator::public_computeNewBasis(const osg::Vec3f & arg1, const osg::Vec3f & arg2, osg::Vec3f & arg3, osg::Vec3f & arg4)
	static int _bind_public_computeNewBasis(lua_State *L) {
		if (!_lg_typecheck_public_computeNewBasis(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::DomainOperator::public_computeNewBasis(const osg::Vec3f & arg1, const osg::Vec3f & arg2, osg::Vec3f & arg3, osg::Vec3f & arg4) function, expected prototype:\nvoid osgParticle::DomainOperator::public_computeNewBasis(const osg::Vec3f & arg1, const osg::Vec3f & arg2, osg::Vec3f & arg3, osg::Vec3f & arg4)\nClass arguments details:\narg 1 ID = 92303204\narg 2 ID = 92303204\narg 3 ID = 92303204\narg 4 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgParticle::DomainOperator::public_computeNewBasis function");
		}
		const osg::Vec3f & _arg1=*_arg1_ptr;
		const osg::Vec3f* _arg2_ptr=(Luna< osg::Vec3f >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osgParticle::DomainOperator::public_computeNewBasis function");
		}
		const osg::Vec3f & _arg2=*_arg2_ptr;
		osg::Vec3f* _arg3_ptr=(Luna< osg::Vec3f >::check(L,4));
		if( !_arg3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg3 in osgParticle::DomainOperator::public_computeNewBasis function");
		}
		osg::Vec3f & _arg3=*_arg3_ptr;
		osg::Vec3f* _arg4_ptr=(Luna< osg::Vec3f >::check(L,5));
		if( !_arg4_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg4 in osgParticle::DomainOperator::public_computeNewBasis function");
		}
		osg::Vec3f & _arg4=*_arg4_ptr;

		wrapper_osgParticle_SinkOperator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgParticle_SinkOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::DomainOperator::public_computeNewBasis(const osg::Vec3f &, const osg::Vec3f &, osg::Vec3f &, osg::Vec3f &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_computeNewBasis(_arg1, _arg2, _arg3, _arg4);

		return 0;
	}

	// void osgParticle::DomainOperator::public_ignore(const std::string & func)
	static int _bind_public_ignore(lua_State *L) {
		if (!_lg_typecheck_public_ignore(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::DomainOperator::public_ignore(const std::string & func) function, expected prototype:\nvoid osgParticle::DomainOperator::public_ignore(const std::string & func)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string func(lua_tostring(L,2),lua_objlen(L,2));

		wrapper_osgParticle_SinkOperator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgParticle_SinkOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::DomainOperator::public_ignore(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_ignore(func);

		return 0;
	}

	// void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const
	static int _bind_public_signalObserversAndDelete(lua_State *L) {
		if (!_lg_typecheck_public_signalObserversAndDelete(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const function, expected prototype:\nvoid osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool signalDelete=(bool)(lua_toboolean(L,2)==1);
		bool doDelete=(bool)(lua_toboolean(L,3)==1);

		wrapper_osgParticle_SinkOperator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgParticle_SinkOperator >(L,1);
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


		wrapper_osgParticle_SinkOperator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgParticle_SinkOperator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_deleteUsingDeleteHandler() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_deleteUsingDeleteHandler();

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"getValue",_bind_public_getValue},
		{"kill",_bind_public_kill},
		{"op_assign",_bind_public_op_assign},
		{"computeNewBasis",_bind_public_computeNewBasis},
		{"ignore",_bind_public_ignore},
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


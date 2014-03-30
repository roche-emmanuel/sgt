#ifndef _WRAPPERS_WRAPPER_OSG_ELLIPSOIDMODEL_H_
#define _WRAPPERS_WRAPPER_OSG_ELLIPSOIDMODEL_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <osg/CoordinateSystemNode>

class wrapper_osg_EllipsoidModel : public osg::EllipsoidModel, public luna_wrapper_base {

public:
		

	~wrapper_osg_EllipsoidModel() {
		logDEBUG3("Calling delete function for wrapper osg_EllipsoidModel");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osg::EllipsoidModel*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_EllipsoidModel(lua_State* L, lua_Table* dum, double radiusEquator = osg::WGS_84_RADIUS_EQUATOR, double radiusPolar = osg::WGS_84_RADIUS_POLAR) 
		: osg::EllipsoidModel(radiusEquator, radiusPolar), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osg::EllipsoidModel*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_osg_EllipsoidModel(lua_State* L, lua_Table* dum, const osg::EllipsoidModel & et, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) 
		: osg::EllipsoidModel(et, copyop), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osg::EllipsoidModel*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void osg::Object::setThreadSafeRefUnref(bool threadSafe)
	void setThreadSafeRefUnref(bool threadSafe) {
		if(_obj.pushFunction("setThreadSafeRefUnref")) {
			_obj.pushArg((osg::EllipsoidModel*)this);
			_obj.pushArg(threadSafe);
			return (_obj.callFunction<void>());
		}

		return EllipsoidModel::setThreadSafeRefUnref(threadSafe);
	};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg((osg::EllipsoidModel*)this);
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return EllipsoidModel::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			_obj.pushArg((osg::EllipsoidModel*)this);
			return (_obj.callFunction<void>());
		}

		return EllipsoidModel::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg((osg::EllipsoidModel*)this);
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return EllipsoidModel::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			_obj.pushArg((osg::EllipsoidModel*)this);
			return (_obj.callFunction<osg::Referenced*>());
		}

		return EllipsoidModel::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			_obj.pushArg((osg::EllipsoidModel*)this);
			return (_obj.callFunction<osg::Referenced*>());
		}

		return EllipsoidModel::getUserData();
	};

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg((osg::EllipsoidModel*)this);
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return EllipsoidModel::releaseGLObjects(arg1);
	};

	// osg::Object * osg::EllipsoidModel::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			_obj.pushArg((osg::EllipsoidModel*)this);
			return (_obj.callFunction<osg::Object*>());
		}

		return EllipsoidModel::cloneType();
	};

	// osg::Object * osg::EllipsoidModel::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg((osg::EllipsoidModel*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return EllipsoidModel::clone(arg1);
	};

	// bool osg::EllipsoidModel::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg((osg::EllipsoidModel*)this);
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return EllipsoidModel::isSameKindAs(obj);
	};

	// const char * osg::EllipsoidModel::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			_obj.pushArg((osg::EllipsoidModel*)this);
			return (_obj.callFunction<const char*>());
		}

		return EllipsoidModel::libraryName();
	};

	// const char * osg::EllipsoidModel::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			_obj.pushArg((osg::EllipsoidModel*)this);
			return (_obj.callFunction<const char*>());
		}

		return EllipsoidModel::className();
	};


	// Protected non-virtual methods:
	// void osg::EllipsoidModel::computeCoefficients()
	void public_computeCoefficients() {
		return osg::EllipsoidModel::computeCoefficients();
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
	inline static bool _lg_typecheck_public_computeCoefficients(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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
	// void osg::EllipsoidModel::public_computeCoefficients()
	static int _bind_public_computeCoefficients(lua_State *L) {
		if (!_lg_typecheck_public_computeCoefficients(L)) {
			luaL_error(L, "luna typecheck failed in void osg::EllipsoidModel::public_computeCoefficients() function, expected prototype:\nvoid osg::EllipsoidModel::public_computeCoefficients()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wrapper_osg_EllipsoidModel* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_EllipsoidModel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::EllipsoidModel::public_computeCoefficients(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_computeCoefficients();

		return 0;
	}

	// void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const
	static int _bind_public_signalObserversAndDelete(lua_State *L) {
		if (!_lg_typecheck_public_signalObserversAndDelete(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const function, expected prototype:\nvoid osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool signalDelete=(bool)(lua_toboolean(L,2)==1);
		bool doDelete=(bool)(lua_toboolean(L,3)==1);

		wrapper_osg_EllipsoidModel* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_EllipsoidModel >(L,1);
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


		wrapper_osg_EllipsoidModel* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_EllipsoidModel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_deleteUsingDeleteHandler() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_deleteUsingDeleteHandler();

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"computeCoefficients",_bind_public_computeCoefficients},
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


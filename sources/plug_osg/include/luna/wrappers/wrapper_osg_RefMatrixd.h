#ifndef _WRAPPERS_WRAPPER_OSG_REFMATRIXD_H_
#define _WRAPPERS_WRAPPER_OSG_REFMATRIXD_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <osg/Matrixd>

class wrapper_osg_RefMatrixd : public osg::RefMatrixd, public luna_wrapper_base {

public:
		

	~wrapper_osg_RefMatrixd() {
		logDEBUG3("Calling delete function for wrapper osg_RefMatrixd");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osg::RefMatrixd*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_RefMatrixd(lua_State* L, lua_Table* dum) 
		: osg::RefMatrixd(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osg::RefMatrixd*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_osg_RefMatrixd(lua_State* L, lua_Table* dum, const osg::Matrixd & other) 
		: osg::RefMatrixd(other), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osg::RefMatrixd*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_osg_RefMatrixd(lua_State* L, lua_Table* dum, const osg::Matrixf & other) 
		: osg::RefMatrixd(other), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osg::RefMatrixd*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_osg_RefMatrixd(lua_State* L, lua_Table* dum, const osg::RefMatrixd & other) 
		: osg::RefMatrixd(other), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osg::RefMatrixd*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_osg_RefMatrixd(lua_State* L, lua_Table* dum, double a00, double a01, double a02, double a03, double a10, double a11, double a12, double a13, double a20, double a21, double a22, double a23, double a30, double a31, double a32, double a33) 
		: osg::RefMatrixd(a00, a01, a02, a03, a10, a11, a12, a13, a20, a21, a22, a23, a30, a31, a32, a33), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osg::RefMatrixd*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void osg::Object::setThreadSafeRefUnref(bool threadSafe)
	void setThreadSafeRefUnref(bool threadSafe) {
		if(_obj.pushFunction("setThreadSafeRefUnref")) {
			_obj.pushArg((osg::RefMatrixd*)this);
			_obj.pushArg(threadSafe);
			return (_obj.callFunction<void>());
		}

		return RefMatrixd::setThreadSafeRefUnref(threadSafe);
	};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg((osg::RefMatrixd*)this);
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return RefMatrixd::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			_obj.pushArg((osg::RefMatrixd*)this);
			return (_obj.callFunction<void>());
		}

		return RefMatrixd::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg((osg::RefMatrixd*)this);
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return RefMatrixd::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			_obj.pushArg((osg::RefMatrixd*)this);
			return (_obj.callFunction<osg::Referenced*>());
		}

		return RefMatrixd::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			_obj.pushArg((osg::RefMatrixd*)this);
			return (_obj.callFunction<osg::Referenced*>());
		}

		return RefMatrixd::getUserData();
	};

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg((osg::RefMatrixd*)this);
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return RefMatrixd::releaseGLObjects(arg1);
	};

	// osg::Object * osg::RefMatrixd::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			_obj.pushArg((osg::RefMatrixd*)this);
			return (_obj.callFunction<osg::Object*>());
		}

		return RefMatrixd::cloneType();
	};

	// osg::Object * osg::RefMatrixd::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg((osg::RefMatrixd*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return RefMatrixd::clone(arg1);
	};

	// bool osg::RefMatrixd::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg((osg::RefMatrixd*)this);
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return RefMatrixd::isSameKindAs(obj);
	};

	// const char * osg::RefMatrixd::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			_obj.pushArg((osg::RefMatrixd*)this);
			return (_obj.callFunction<const char*>());
		}

		return RefMatrixd::libraryName();
	};

	// const char * osg::RefMatrixd::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			_obj.pushArg((osg::RefMatrixd*)this);
			return (_obj.callFunction<const char*>());
		}

		return RefMatrixd::className();
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

		wrapper_osg_RefMatrixd* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_RefMatrixd >(L,1);
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


		wrapper_osg_RefMatrixd* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_RefMatrixd >(L,1);
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


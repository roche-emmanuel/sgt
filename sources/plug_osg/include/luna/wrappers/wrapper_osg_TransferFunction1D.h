#ifndef _WRAPPERS_WRAPPER_OSG_TRANSFERFUNCTION_D_H_
#define _WRAPPERS_WRAPPER_OSG_TRANSFERFUNCTION_D_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <osg/TransferFunction>

class wrapper_osg_TransferFunction1D : public osg::TransferFunction1D, public luna_wrapper_base {

public:
		

	~wrapper_osg_TransferFunction1D() {
		logDEBUG3("Calling delete function for wrapper osg_TransferFunction1D");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osg::TransferFunction1D*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_TransferFunction1D(lua_State* L, lua_Table* dum) 
		: osg::TransferFunction1D(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osg::TransferFunction1D*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_osg_TransferFunction1D(lua_State* L, lua_Table* dum, const osg::TransferFunction1D & tf, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) 
		: osg::TransferFunction1D(tf, copyop), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osg::TransferFunction1D*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void osg::Object::setThreadSafeRefUnref(bool threadSafe)
	void setThreadSafeRefUnref(bool threadSafe) {
		if(_obj.pushFunction("setThreadSafeRefUnref")) {
			_obj.pushArg((osg::TransferFunction1D*)this);
			_obj.pushArg(threadSafe);
			return (_obj.callFunction<void>());
		}

		return TransferFunction1D::setThreadSafeRefUnref(threadSafe);
	};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg((osg::TransferFunction1D*)this);
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return TransferFunction1D::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			_obj.pushArg((osg::TransferFunction1D*)this);
			return (_obj.callFunction<void>());
		}

		return TransferFunction1D::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg((osg::TransferFunction1D*)this);
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return TransferFunction1D::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			_obj.pushArg((osg::TransferFunction1D*)this);
			return (_obj.callFunction<osg::Referenced*>());
		}

		return TransferFunction1D::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			_obj.pushArg((osg::TransferFunction1D*)this);
			return (_obj.callFunction<osg::Referenced*>());
		}

		return TransferFunction1D::getUserData();
	};

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg((osg::TransferFunction1D*)this);
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return TransferFunction1D::releaseGLObjects(arg1);
	};

	// osg::Object * osg::TransferFunction1D::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			_obj.pushArg((osg::TransferFunction1D*)this);
			return (_obj.callFunction<osg::Object*>());
		}

		return TransferFunction1D::cloneType();
	};

	// osg::Object * osg::TransferFunction1D::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg((osg::TransferFunction1D*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return TransferFunction1D::clone(arg1);
	};

	// bool osg::TransferFunction1D::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg((osg::TransferFunction1D*)this);
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return TransferFunction1D::isSameKindAs(obj);
	};

	// const char * osg::TransferFunction1D::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			_obj.pushArg((osg::TransferFunction1D*)this);
			return (_obj.callFunction<const char*>());
		}

		return TransferFunction1D::libraryName();
	};

	// const char * osg::TransferFunction1D::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			_obj.pushArg((osg::TransferFunction1D*)this);
			return (_obj.callFunction<const char*>());
		}

		return TransferFunction1D::className();
	};


	// Protected non-virtual methods:
	// void osg::TransferFunction1D::assignToImage(float lower_v, const osg::Vec4f & lower_c, float upper_v, const osg::Vec4f & upper_c)
	void public_assignToImage(float lower_v, const osg::Vec4f & lower_c, float upper_v, const osg::Vec4f & upper_c) {
		return osg::TransferFunction1D::assignToImage(lower_v, lower_c, upper_v, upper_c);
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
	inline static bool _lg_typecheck_public_assignToImage(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303235) ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,5,92303235) ) return false;
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
	// void osg::TransferFunction1D::public_assignToImage(float lower_v, const osg::Vec4f & lower_c, float upper_v, const osg::Vec4f & upper_c)
	static int _bind_public_assignToImage(lua_State *L) {
		if (!_lg_typecheck_public_assignToImage(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TransferFunction1D::public_assignToImage(float lower_v, const osg::Vec4f & lower_c, float upper_v, const osg::Vec4f & upper_c) function, expected prototype:\nvoid osg::TransferFunction1D::public_assignToImage(float lower_v, const osg::Vec4f & lower_c, float upper_v, const osg::Vec4f & upper_c)\nClass arguments details:\narg 2 ID = 92303235\narg 4 ID = 92303235\n\n%s",luna_dumpStack(L).c_str());
		}

		float lower_v=(float)lua_tonumber(L,2);
		const osg::Vec4f* lower_c_ptr=(Luna< osg::Vec4f >::check(L,3));
		if( !lower_c_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg lower_c in osg::TransferFunction1D::public_assignToImage function");
		}
		const osg::Vec4f & lower_c=*lower_c_ptr;
		float upper_v=(float)lua_tonumber(L,4);
		const osg::Vec4f* upper_c_ptr=(Luna< osg::Vec4f >::check(L,5));
		if( !upper_c_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg upper_c in osg::TransferFunction1D::public_assignToImage function");
		}
		const osg::Vec4f & upper_c=*upper_c_ptr;

		wrapper_osg_TransferFunction1D* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_TransferFunction1D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TransferFunction1D::public_assignToImage(float, const osg::Vec4f &, float, const osg::Vec4f &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_assignToImage(lower_v, lower_c, upper_v, upper_c);

		return 0;
	}

	// void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const
	static int _bind_public_signalObserversAndDelete(lua_State *L) {
		if (!_lg_typecheck_public_signalObserversAndDelete(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const function, expected prototype:\nvoid osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool signalDelete=(bool)(lua_toboolean(L,2)==1);
		bool doDelete=(bool)(lua_toboolean(L,3)==1);

		wrapper_osg_TransferFunction1D* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_TransferFunction1D >(L,1);
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


		wrapper_osg_TransferFunction1D* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_TransferFunction1D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_deleteUsingDeleteHandler() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_deleteUsingDeleteHandler();

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"assignToImage",_bind_public_assignToImage},
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


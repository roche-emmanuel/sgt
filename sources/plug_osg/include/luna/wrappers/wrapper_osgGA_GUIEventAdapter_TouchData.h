#ifndef _WRAPPERS_WRAPPER_OSGGA_GUIEVENTADAPTER_TOUCHDATA_H_
#define _WRAPPERS_WRAPPER_OSGGA_GUIEVENTADAPTER_TOUCHDATA_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <osgGA/GUIEventAdapter>

class wrapper_osgGA_GUIEventAdapter_TouchData : public osgGA::GUIEventAdapter::TouchData, public luna_wrapper_base {

public:
		

	~wrapper_osgGA_GUIEventAdapter_TouchData() {
		logDEBUG3("Calling delete function for wrapper osgGA_GUIEventAdapter_TouchData");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osgGA::GUIEventAdapter::TouchData*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgGA_GUIEventAdapter_TouchData(lua_State* L, lua_Table* dum) 
		: osgGA::GUIEventAdapter::TouchData(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osgGA::GUIEventAdapter::TouchData*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_osgGA_GUIEventAdapter_TouchData(lua_State* L, lua_Table* dum, const osgGA::GUIEventAdapter::TouchData & td, const osg::CopyOp & copyop) 
		: osgGA::GUIEventAdapter::TouchData(td, copyop), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osgGA::GUIEventAdapter::TouchData*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void osg::Object::setThreadSafeRefUnref(bool threadSafe)
	void setThreadSafeRefUnref(bool threadSafe) {
		if(_obj.pushFunction("setThreadSafeRefUnref")) {
			_obj.pushArg((osgGA::GUIEventAdapter::TouchData*)this);
			_obj.pushArg(threadSafe);
			return (_obj.callFunction<void>());
		}

		return TouchData::setThreadSafeRefUnref(threadSafe);
	};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg((osgGA::GUIEventAdapter::TouchData*)this);
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return TouchData::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			_obj.pushArg((osgGA::GUIEventAdapter::TouchData*)this);
			return (_obj.callFunction<void>());
		}

		return TouchData::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg((osgGA::GUIEventAdapter::TouchData*)this);
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return TouchData::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			_obj.pushArg((osgGA::GUIEventAdapter::TouchData*)this);
			return (_obj.callFunction<osg::Referenced*>());
		}

		return TouchData::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			_obj.pushArg((osgGA::GUIEventAdapter::TouchData*)this);
			return (_obj.callFunction<osg::Referenced*>());
		}

		return TouchData::getUserData();
	};

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg((osgGA::GUIEventAdapter::TouchData*)this);
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return TouchData::releaseGLObjects(arg1);
	};

	// osg::Object * osgGA::GUIEventAdapter::TouchData::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			_obj.pushArg((osgGA::GUIEventAdapter::TouchData*)this);
			return (_obj.callFunction<osg::Object*>());
		}

		return TouchData::cloneType();
	};

	// osg::Object * osgGA::GUIEventAdapter::TouchData::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg((osgGA::GUIEventAdapter::TouchData*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return TouchData::clone(arg1);
	};

	// bool osgGA::GUIEventAdapter::TouchData::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg((osgGA::GUIEventAdapter::TouchData*)this);
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return TouchData::isSameKindAs(obj);
	};

	// const char * osgGA::GUIEventAdapter::TouchData::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			_obj.pushArg((osgGA::GUIEventAdapter::TouchData*)this);
			return (_obj.callFunction<const char*>());
		}

		return TouchData::libraryName();
	};

	// const char * osgGA::GUIEventAdapter::TouchData::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			_obj.pushArg((osgGA::GUIEventAdapter::TouchData*)this);
			return (_obj.callFunction<const char*>());
		}

		return TouchData::className();
	};


	// Protected non-virtual methods:
	// void osgGA::GUIEventAdapter::TouchData::addTouchPoint(unsigned int id, osgGA::GUIEventAdapter::TouchPhase phase, float x, float y, unsigned int tap_count)
	void public_addTouchPoint(unsigned int id, osgGA::GUIEventAdapter::TouchPhase phase, float x, float y, unsigned int tap_count) {
		return osgGA::GUIEventAdapter::TouchData::addTouchPoint(id, phase, x, y, tap_count);
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
	inline static bool _lg_typecheck_public_addTouchPoint(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
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
	// void osgGA::GUIEventAdapter::TouchData::public_addTouchPoint(unsigned int id, osgGA::GUIEventAdapter::TouchPhase phase, float x, float y, unsigned int tap_count)
	static int _bind_public_addTouchPoint(lua_State *L) {
		if (!_lg_typecheck_public_addTouchPoint(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::GUIEventAdapter::TouchData::public_addTouchPoint(unsigned int id, osgGA::GUIEventAdapter::TouchPhase phase, float x, float y, unsigned int tap_count) function, expected prototype:\nvoid osgGA::GUIEventAdapter::TouchData::public_addTouchPoint(unsigned int id, osgGA::GUIEventAdapter::TouchPhase phase, float x, float y, unsigned int tap_count)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int id=(unsigned int)lua_tointeger(L,2);
		osgGA::GUIEventAdapter::TouchPhase phase=(osgGA::GUIEventAdapter::TouchPhase)lua_tointeger(L,3);
		float x=(float)lua_tonumber(L,4);
		float y=(float)lua_tonumber(L,5);
		unsigned int tap_count=(unsigned int)lua_tointeger(L,6);

		wrapper_osgGA_GUIEventAdapter_TouchData* self=Luna< osg::Referenced >::checkSubType< wrapper_osgGA_GUIEventAdapter_TouchData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::GUIEventAdapter::TouchData::public_addTouchPoint(unsigned int, osgGA::GUIEventAdapter::TouchPhase, float, float, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_addTouchPoint(id, phase, x, y, tap_count);

		return 0;
	}

	// void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const
	static int _bind_public_signalObserversAndDelete(lua_State *L) {
		if (!_lg_typecheck_public_signalObserversAndDelete(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const function, expected prototype:\nvoid osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool signalDelete=(bool)(lua_toboolean(L,2)==1);
		bool doDelete=(bool)(lua_toboolean(L,3)==1);

		wrapper_osgGA_GUIEventAdapter_TouchData* self=Luna< osg::Referenced >::checkSubType< wrapper_osgGA_GUIEventAdapter_TouchData >(L,1);
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


		wrapper_osgGA_GUIEventAdapter_TouchData* self=Luna< osg::Referenced >::checkSubType< wrapper_osgGA_GUIEventAdapter_TouchData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_deleteUsingDeleteHandler() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_deleteUsingDeleteHandler();

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"addTouchPoint",_bind_public_addTouchPoint},
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


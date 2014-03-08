#ifndef _WRAPPERS_WRAPPER_OSGGA_STATESETMANIPULATOR_H_
#define _WRAPPERS_WRAPPER_OSGGA_STATESETMANIPULATOR_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <osgGA/StateSetManipulator>

class wrapper_osgGA_StateSetManipulator : public osgGA::StateSetManipulator, public luna_wrapper_base {

public:
		

	~wrapper_osgGA_StateSetManipulator() {
		logDEBUG3("Calling delete function for wrapper osgGA_StateSetManipulator");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osgGA::StateSetManipulator*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgGA_StateSetManipulator(lua_State* L, lua_Table* dum, osg::StateSet * stateset = 0) 
		: osgGA::StateSetManipulator(stateset), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osgGA::StateSetManipulator*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void osg::Object::setThreadSafeRefUnref(bool threadSafe)
	void setThreadSafeRefUnref(bool threadSafe) {
		if(_obj.pushFunction("setThreadSafeRefUnref")) {
			_obj.pushArg((osgGA::StateSetManipulator*)this);
			_obj.pushArg(threadSafe);
			return (_obj.callFunction<void>());
		}

		return StateSetManipulator::setThreadSafeRefUnref(threadSafe);
	};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg((osgGA::StateSetManipulator*)this);
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return StateSetManipulator::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			_obj.pushArg((osgGA::StateSetManipulator*)this);
			return (_obj.callFunction<void>());
		}

		return StateSetManipulator::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg((osgGA::StateSetManipulator*)this);
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return StateSetManipulator::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			_obj.pushArg((osgGA::StateSetManipulator*)this);
			return (_obj.callFunction<osg::Referenced*>());
		}

		return StateSetManipulator::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			_obj.pushArg((osgGA::StateSetManipulator*)this);
			return (_obj.callFunction<osg::Referenced*>());
		}

		return StateSetManipulator::getUserData();
	};

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg((osgGA::StateSetManipulator*)this);
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return StateSetManipulator::releaseGLObjects(arg1);
	};

	// bool osgGA::GUIEventHandler::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg((osgGA::StateSetManipulator*)this);
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return StateSetManipulator::isSameKindAs(obj);
	};

	// const char * osgGA::GUIEventHandler::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			_obj.pushArg((osgGA::StateSetManipulator*)this);
			return (_obj.callFunction<const char*>());
		}

		return StateSetManipulator::libraryName();
	};

	// void osgGA::GUIEventHandler::event(osg::NodeVisitor * nv, osg::Drawable * drawable)
	void event(osg::NodeVisitor * nv, osg::Drawable * drawable) {
		if(_obj.pushFunction("event")) {
			_obj.pushArg((osgGA::StateSetManipulator*)this);
			_obj.pushArg(nv);
			_obj.pushArg(drawable);
			return (_obj.callFunction<void>());
		}

		return StateSetManipulator::event(nv, drawable);
	};

	// void osgGA::GUIEventHandler::operator()(osg::Node * node, osg::NodeVisitor * nv)
	void operator()(osg::Node * node, osg::NodeVisitor * nv) {
		if(_obj.pushFunction("op_call")) {
			_obj.pushArg((osgGA::StateSetManipulator*)this);
			_obj.pushArg(node);
			_obj.pushArg(nv);
			return (_obj.callFunction<void>());
		}

		return StateSetManipulator::operator()(node, nv);
	};

	// const char * osgGA::StateSetManipulator::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			_obj.pushArg((osgGA::StateSetManipulator*)this);
			return (_obj.callFunction<const char*>());
		}

		return StateSetManipulator::className();
	};

	// void osgGA::StateSetManipulator::setStateSet(osg::StateSet * arg1)
	void setStateSet(osg::StateSet * arg1) {
		if(_obj.pushFunction("setStateSet")) {
			_obj.pushArg((osgGA::StateSetManipulator*)this);
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return StateSetManipulator::setStateSet(arg1);
	};

	// osg::StateSet * osgGA::StateSetManipulator::getStateSet()
	osg::StateSet * getStateSet() {
		if(_obj.pushFunction("getStateSet")) {
			_obj.pushArg((osgGA::StateSetManipulator*)this);
			return (_obj.callFunction<osg::StateSet*>());
		}

		return StateSetManipulator::getStateSet();
	};

	// const osg::StateSet * osgGA::StateSetManipulator::getStateSet() const
	const osg::StateSet * getStateSet() const {
		if(_obj.pushFunction("getStateSet")) {
			_obj.pushArg((osgGA::StateSetManipulator*)this);
			return (_obj.callFunction<osg::StateSet*>());
		}

		return StateSetManipulator::getStateSet();
	};

	// bool osgGA::StateSetManipulator::handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)
	bool handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us) {
		if(_obj.pushFunction("handle")) {
			_obj.pushArg((osgGA::StateSetManipulator*)this);
			_obj.pushArg(&ea);
			_obj.pushArg(&us);
			return (_obj.callFunction<bool>());
		}

		return StateSetManipulator::handle(ea, us);
	};

	// void osgGA::StateSetManipulator::getUsage(osg::ApplicationUsage & usage) const
	void getUsage(osg::ApplicationUsage & usage) const {
		if(_obj.pushFunction("getUsage")) {
			_obj.pushArg((osgGA::StateSetManipulator*)this);
			_obj.pushArg(&usage);
			return (_obj.callFunction<void>());
		}

		return StateSetManipulator::getUsage(usage);
	};


	// Protected non-virtual methods:
	// osg::PolygonMode * osgGA::StateSetManipulator::getOrCreatePolygonMode()
	osg::PolygonMode * public_getOrCreatePolygonMode() {
		return osgGA::StateSetManipulator::getOrCreatePolygonMode();
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
	inline static bool _lg_typecheck_public_getOrCreatePolygonMode(lua_State *L) {
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
	// osg::PolygonMode * osgGA::StateSetManipulator::public_getOrCreatePolygonMode()
	static int _bind_public_getOrCreatePolygonMode(lua_State *L) {
		if (!_lg_typecheck_public_getOrCreatePolygonMode(L)) {
			luaL_error(L, "luna typecheck failed in osg::PolygonMode * osgGA::StateSetManipulator::public_getOrCreatePolygonMode() function, expected prototype:\nosg::PolygonMode * osgGA::StateSetManipulator::public_getOrCreatePolygonMode()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wrapper_osgGA_StateSetManipulator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgGA_StateSetManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::PolygonMode * osgGA::StateSetManipulator::public_getOrCreatePolygonMode(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::PolygonMode * lret = self->public_getOrCreatePolygonMode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::PolygonMode >::push(L,lret,false);

		return 1;
	}

	// void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const
	static int _bind_public_signalObserversAndDelete(lua_State *L) {
		if (!_lg_typecheck_public_signalObserversAndDelete(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const function, expected prototype:\nvoid osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool signalDelete=(bool)(lua_toboolean(L,2)==1);
		bool doDelete=(bool)(lua_toboolean(L,3)==1);

		wrapper_osgGA_StateSetManipulator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgGA_StateSetManipulator >(L,1);
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


		wrapper_osgGA_StateSetManipulator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgGA_StateSetManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_deleteUsingDeleteHandler() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_deleteUsingDeleteHandler();

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"getOrCreatePolygonMode",_bind_public_getOrCreatePolygonMode},
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


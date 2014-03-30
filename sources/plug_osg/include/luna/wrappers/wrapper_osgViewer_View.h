#ifndef _WRAPPERS_WRAPPER_OSGVIEWER_VIEW_H_
#define _WRAPPERS_WRAPPER_OSGVIEWER_VIEW_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <osgViewer/View>

class wrapper_osgViewer_View : public osgViewer::View, public luna_wrapper_base {

public:
		

	~wrapper_osgViewer_View() {
		logDEBUG3("Calling delete function for wrapper osgViewer_View");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osgViewer::View*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgViewer_View(lua_State* L, lua_Table* dum) 
		: osgViewer::View(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osgViewer::View*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_osgViewer_View(lua_State* L, lua_Table* dum, const osgViewer::View & view, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) 
		: osgViewer::View(view, copyop), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osgViewer::View*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// osg::GraphicsOperation * osgViewer::View::createRenderer(osg::Camera * camera)
	osg::GraphicsOperation * createRenderer(osg::Camera * camera) {
		if(_obj.pushFunction("createRenderer")) {
			_obj.pushArg((osgViewer::View*)this);
			_obj.pushArg(camera);
			return (_obj.callFunction<osg::GraphicsOperation*>());
		}

		return View::createRenderer(camera);
	};

public:
	// Public virtual methods:
	// void osg::Object::setThreadSafeRefUnref(bool threadSafe)
	void setThreadSafeRefUnref(bool threadSafe) {
		if(_obj.pushFunction("setThreadSafeRefUnref")) {
			_obj.pushArg((osgViewer::View*)this);
			_obj.pushArg(threadSafe);
			return (_obj.callFunction<void>());
		}

		return View::setThreadSafeRefUnref(threadSafe);
	};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg((osgViewer::View*)this);
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return View::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			_obj.pushArg((osgViewer::View*)this);
			return (_obj.callFunction<void>());
		}

		return View::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg((osgViewer::View*)this);
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return View::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			_obj.pushArg((osgViewer::View*)this);
			return (_obj.callFunction<osg::Referenced*>());
		}

		return View::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			_obj.pushArg((osgViewer::View*)this);
			return (_obj.callFunction<osg::Referenced*>());
		}

		return View::getUserData();
	};

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg((osgViewer::View*)this);
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return View::releaseGLObjects(arg1);
	};

	// osg::Object * osgViewer::View::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			_obj.pushArg((osgViewer::View*)this);
			return (_obj.callFunction<osg::Object*>());
		}

		return View::cloneType();
	};

	// osg::Object * osgViewer::View::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg((osgViewer::View*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return View::clone(arg1);
	};

	// bool osgViewer::View::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg((osgViewer::View*)this);
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return View::isSameKindAs(obj);
	};

	// const char * osgViewer::View::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			_obj.pushArg((osgViewer::View*)this);
			return (_obj.callFunction<const char*>());
		}

		return View::libraryName();
	};

	// const char * osgViewer::View::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			_obj.pushArg((osgViewer::View*)this);
			return (_obj.callFunction<const char*>());
		}

		return View::className();
	};

	// osg::View * osgViewer::View::asView()
	osg::View * asView() {
		if(_obj.pushFunction("asView")) {
			_obj.pushArg((osgViewer::View*)this);
			return (_obj.callFunction<osg::View*>());
		}

		return View::asView();
	};

	// void osgViewer::View::take(osg::View & rhs)
	void take(osg::View & rhs) {
		if(_obj.pushFunction("take")) {
			_obj.pushArg((osgViewer::View*)this);
			_obj.pushArg(&rhs);
			return (_obj.callFunction<void>());
		}

		return View::take(rhs);
	};

	// void osgViewer::View::setStartTick(__int64 tick)
	void setStartTick(__int64 tick) {
		if(_obj.pushFunction("setStartTick")) {
			_obj.pushArg((osgViewer::View*)this);
			_obj.pushArg(&tick);
			return (_obj.callFunction<void>());
		}

		return View::setStartTick(tick);
	};

	// void osgViewer::View::setSceneData(osg::Node * node)
	void setSceneData(osg::Node * node) {
		if(_obj.pushFunction("setSceneData")) {
			_obj.pushArg((osgViewer::View*)this);
			_obj.pushArg(node);
			return (_obj.callFunction<void>());
		}

		return View::setSceneData(node);
	};

	// void osgViewer::View::requestRedraw()
	void requestRedraw() {
		if(_obj.pushFunction("requestRedraw")) {
			_obj.pushArg((osgViewer::View*)this);
			return (_obj.callFunction<void>());
		}

		return View::requestRedraw();
	};

	// void osgViewer::View::requestContinuousUpdate(bool needed = true)
	void requestContinuousUpdate(bool needed = true) {
		if(_obj.pushFunction("requestContinuousUpdate")) {
			_obj.pushArg((osgViewer::View*)this);
			_obj.pushArg(needed);
			return (_obj.callFunction<void>());
		}

		return View::requestContinuousUpdate(needed);
	};

	// void osgViewer::View::requestWarpPointer(float x, float y)
	void requestWarpPointer(float x, float y) {
		if(_obj.pushFunction("requestWarpPointer")) {
			_obj.pushArg((osgViewer::View*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<void>());
		}

		return View::requestWarpPointer(x, y);
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

		wrapper_osgViewer_View* self=Luna< osg::Referenced >::checkSubType< wrapper_osgViewer_View >(L,1);
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


		wrapper_osgViewer_View* self=Luna< osg::Referenced >::checkSubType< wrapper_osgViewer_View >(L,1);
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


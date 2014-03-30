#ifndef _WRAPPERS_WRAPPER_OSGVIEWER_GRAPHICSWINDOW_H_
#define _WRAPPERS_WRAPPER_OSGVIEWER_GRAPHICSWINDOW_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <osgViewer/GraphicsWindow>

class wrapper_osgViewer_GraphicsWindow : public osgViewer::GraphicsWindow, public luna_wrapper_base {

public:
		

	~wrapper_osgViewer_GraphicsWindow() {
		logDEBUG3("Calling delete function for wrapper osgViewer_GraphicsWindow");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osgViewer::GraphicsWindow*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgViewer_GraphicsWindow(lua_State* L, lua_Table* dum) 
		: osgViewer::GraphicsWindow(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osgViewer::GraphicsWindow*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// osg::Object * osg::GraphicsContext::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			_obj.pushArg((osgViewer::GraphicsWindow*)this);
			return (_obj.callFunction<osg::Object*>());
		}

		return GraphicsWindow::cloneType();
	};

	// osg::Object * osg::GraphicsContext::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg((osgViewer::GraphicsWindow*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return GraphicsWindow::clone(arg1);
	};

public:
	// Public virtual methods:
	// void osg::Object::setThreadSafeRefUnref(bool threadSafe)
	void setThreadSafeRefUnref(bool threadSafe) {
		if(_obj.pushFunction("setThreadSafeRefUnref")) {
			_obj.pushArg((osgViewer::GraphicsWindow*)this);
			_obj.pushArg(threadSafe);
			return (_obj.callFunction<void>());
		}

		return GraphicsWindow::setThreadSafeRefUnref(threadSafe);
	};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg((osgViewer::GraphicsWindow*)this);
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return GraphicsWindow::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			_obj.pushArg((osgViewer::GraphicsWindow*)this);
			return (_obj.callFunction<void>());
		}

		return GraphicsWindow::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg((osgViewer::GraphicsWindow*)this);
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return GraphicsWindow::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			_obj.pushArg((osgViewer::GraphicsWindow*)this);
			return (_obj.callFunction<osg::Referenced*>());
		}

		return GraphicsWindow::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			_obj.pushArg((osgViewer::GraphicsWindow*)this);
			return (_obj.callFunction<osg::Referenced*>());
		}

		return GraphicsWindow::getUserData();
	};

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg((osgViewer::GraphicsWindow*)this);
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return GraphicsWindow::releaseGLObjects(arg1);
	};

	// void osg::GraphicsContext::runOperations()
	void runOperations() {
		if(_obj.pushFunction("runOperations")) {
			_obj.pushArg((osgViewer::GraphicsWindow*)this);
			return (_obj.callFunction<void>());
		}

		return GraphicsWindow::runOperations();
	};

	// void osg::GraphicsContext::clear()
	void clear() {
		if(_obj.pushFunction("clear")) {
			_obj.pushArg((osgViewer::GraphicsWindow*)this);
			return (_obj.callFunction<void>());
		}

		return GraphicsWindow::clear();
	};

	// void osg::GraphicsContext::resizedImplementation(int x, int y, int width, int height)
	void resizedImplementation(int x, int y, int width, int height) {
		if(_obj.pushFunction("resizedImplementation")) {
			_obj.pushArg((osgViewer::GraphicsWindow*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			_obj.pushArg(width);
			_obj.pushArg(height);
			return (_obj.callFunction<void>());
		}

		return GraphicsWindow::resizedImplementation(x, y, width, height);
	};

	// osg::View * osgGA::GUIActionAdapter::asView()
	osg::View * asView() {
		if(_obj.pushFunction("asView")) {
			_obj.pushArg((osgViewer::GraphicsWindow*)this);
			return (_obj.callFunction<osg::View*>());
		}

		return GraphicsWindow::asView();
	};

	// const char * osgViewer::GraphicsWindow::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			_obj.pushArg((osgViewer::GraphicsWindow*)this);
			return (_obj.callFunction<const char*>());
		}

		return GraphicsWindow::libraryName();
	};

	// const char * osgViewer::GraphicsWindow::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			_obj.pushArg((osgViewer::GraphicsWindow*)this);
			return (_obj.callFunction<const char*>());
		}

		return GraphicsWindow::className();
	};

	// void osgViewer::GraphicsWindow::checkEvents()
	void checkEvents() {
		if(_obj.pushFunction("checkEvents")) {
			_obj.pushArg((osgViewer::GraphicsWindow*)this);
			return (_obj.callFunction<void>());
		}

		return GraphicsWindow::checkEvents();
	};

	// bool osgViewer::GraphicsWindow::setWindowRectangleImplementation(int arg1, int arg2, int arg3, int arg4)
	bool setWindowRectangleImplementation(int arg1, int arg2, int arg3, int arg4) {
		if(_obj.pushFunction("setWindowRectangleImplementation")) {
			_obj.pushArg((osgViewer::GraphicsWindow*)this);
			_obj.pushArg(arg1);
			_obj.pushArg(arg2);
			_obj.pushArg(arg3);
			_obj.pushArg(arg4);
			return (_obj.callFunction<bool>());
		}

		return GraphicsWindow::setWindowRectangleImplementation(arg1, arg2, arg3, arg4);
	};

	// void osgViewer::GraphicsWindow::getWindowRectangle(int & x, int & y, int & width, int & height)
	void getWindowRectangle(int & x, int & y, int & width, int & height) {
		if(_obj.pushFunction("getWindowRectangle")) {
			_obj.pushArg((osgViewer::GraphicsWindow*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			_obj.pushArg(width);
			_obj.pushArg(height);
			return (_obj.callFunction<void>());
		}

		return GraphicsWindow::getWindowRectangle(x, y, width, height);
	};

	// bool osgViewer::GraphicsWindow::setWindowDecorationImplementation(bool arg1)
	bool setWindowDecorationImplementation(bool arg1) {
		if(_obj.pushFunction("setWindowDecorationImplementation")) {
			_obj.pushArg((osgViewer::GraphicsWindow*)this);
			_obj.pushArg(arg1);
			return (_obj.callFunction<bool>());
		}

		return GraphicsWindow::setWindowDecorationImplementation(arg1);
	};

	// bool osgViewer::GraphicsWindow::getWindowDecoration() const
	bool getWindowDecoration() const {
		if(_obj.pushFunction("getWindowDecoration")) {
			_obj.pushArg((osgViewer::GraphicsWindow*)this);
			return (_obj.callFunction<bool>());
		}

		return GraphicsWindow::getWindowDecoration();
	};

	// void osgViewer::GraphicsWindow::grabFocus()
	void grabFocus() {
		if(_obj.pushFunction("grabFocus")) {
			_obj.pushArg((osgViewer::GraphicsWindow*)this);
			return (_obj.callFunction<void>());
		}

		return GraphicsWindow::grabFocus();
	};

	// void osgViewer::GraphicsWindow::grabFocusIfPointerInWindow()
	void grabFocusIfPointerInWindow() {
		if(_obj.pushFunction("grabFocusIfPointerInWindow")) {
			_obj.pushArg((osgViewer::GraphicsWindow*)this);
			return (_obj.callFunction<void>());
		}

		return GraphicsWindow::grabFocusIfPointerInWindow();
	};

	// void osgViewer::GraphicsWindow::raiseWindow()
	void raiseWindow() {
		if(_obj.pushFunction("raiseWindow")) {
			_obj.pushArg((osgViewer::GraphicsWindow*)this);
			return (_obj.callFunction<void>());
		}

		return GraphicsWindow::raiseWindow();
	};

	// void osgViewer::GraphicsWindow::setWindowName(const std::string & arg1)
	void setWindowName(const std::string & arg1) {
		if(_obj.pushFunction("setWindowName")) {
			_obj.pushArg((osgViewer::GraphicsWindow*)this);
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return GraphicsWindow::setWindowName(arg1);
	};

	// std::string osgViewer::GraphicsWindow::getWindowName()
	std::string getWindowName() {
		if(_obj.pushFunction("getWindowName")) {
			_obj.pushArg((osgViewer::GraphicsWindow*)this);
			return (_obj.callFunction<std::string>());
		}

		return GraphicsWindow::getWindowName();
	};

	// void osgViewer::GraphicsWindow::useCursor(bool cursorOn)
	void useCursor(bool cursorOn) {
		if(_obj.pushFunction("useCursor")) {
			_obj.pushArg((osgViewer::GraphicsWindow*)this);
			_obj.pushArg(cursorOn);
			return (_obj.callFunction<void>());
		}

		return GraphicsWindow::useCursor(cursorOn);
	};

	// void osgViewer::GraphicsWindow::setCursor(osgViewer::GraphicsWindow::MouseCursor arg1)
	void setCursor(osgViewer::GraphicsWindow::MouseCursor arg1) {
		if(_obj.pushFunction("setCursor")) {
			_obj.pushArg((osgViewer::GraphicsWindow*)this);
			_obj.pushArg((int)arg1);
			return (_obj.callFunction<void>());
		}

		return GraphicsWindow::setCursor(arg1);
	};

	// void osgViewer::GraphicsWindow::setSyncToVBlank(bool on)
	void setSyncToVBlank(bool on) {
		if(_obj.pushFunction("setSyncToVBlank")) {
			_obj.pushArg((osgViewer::GraphicsWindow*)this);
			_obj.pushArg(on);
			return (_obj.callFunction<void>());
		}

		return GraphicsWindow::setSyncToVBlank(on);
	};

	// void osgViewer::GraphicsWindow::setSwapGroup(bool on, unsigned int group, unsigned int barrier)
	void setSwapGroup(bool on, unsigned int group, unsigned int barrier) {
		if(_obj.pushFunction("setSwapGroup")) {
			_obj.pushArg((osgViewer::GraphicsWindow*)this);
			_obj.pushArg(on);
			_obj.pushArg(group);
			_obj.pushArg(barrier);
			return (_obj.callFunction<void>());
		}

		return GraphicsWindow::setSwapGroup(on, group, barrier);
	};

	// bool osgViewer::GraphicsWindow::valid() const
	bool valid() const {
		if(_obj.pushFunction("valid")) {
			_obj.pushArg((osgViewer::GraphicsWindow*)this);
			return (_obj.callFunction<bool>());
		}

		return GraphicsWindow::valid();
	};

	// bool osgViewer::GraphicsWindow::realizeImplementation()
	bool realizeImplementation() {
		if(_obj.pushFunction("realizeImplementation")) {
			_obj.pushArg((osgViewer::GraphicsWindow*)this);
			return (_obj.callFunction<bool>());
		}

		return GraphicsWindow::realizeImplementation();
	};

	// bool osgViewer::GraphicsWindow::isRealizedImplementation() const
	bool isRealizedImplementation() const {
		if(_obj.pushFunction("isRealizedImplementation")) {
			_obj.pushArg((osgViewer::GraphicsWindow*)this);
			return (_obj.callFunction<bool>());
		}

		return GraphicsWindow::isRealizedImplementation();
	};

	// void osgViewer::GraphicsWindow::closeImplementation()
	void closeImplementation() {
		if(_obj.pushFunction("closeImplementation")) {
			_obj.pushArg((osgViewer::GraphicsWindow*)this);
			return (_obj.callFunction<void>());
		}

		return GraphicsWindow::closeImplementation();
	};

	// bool osgViewer::GraphicsWindow::makeCurrentImplementation()
	bool makeCurrentImplementation() {
		if(_obj.pushFunction("makeCurrentImplementation")) {
			_obj.pushArg((osgViewer::GraphicsWindow*)this);
			return (_obj.callFunction<bool>());
		}

		return GraphicsWindow::makeCurrentImplementation();
	};

	// bool osgViewer::GraphicsWindow::releaseContextImplementation()
	bool releaseContextImplementation() {
		if(_obj.pushFunction("releaseContextImplementation")) {
			_obj.pushArg((osgViewer::GraphicsWindow*)this);
			return (_obj.callFunction<bool>());
		}

		return GraphicsWindow::releaseContextImplementation();
	};

	// void osgViewer::GraphicsWindow::bindPBufferToTextureImplementation(unsigned int arg1)
	void bindPBufferToTextureImplementation(unsigned int arg1) {
		if(_obj.pushFunction("bindPBufferToTextureImplementation")) {
			_obj.pushArg((osgViewer::GraphicsWindow*)this);
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return GraphicsWindow::bindPBufferToTextureImplementation(arg1);
	};

	// void osgViewer::GraphicsWindow::swapBuffersImplementation()
	void swapBuffersImplementation() {
		if(_obj.pushFunction("swapBuffersImplementation")) {
			_obj.pushArg((osgViewer::GraphicsWindow*)this);
			return (_obj.callFunction<void>());
		}

		return GraphicsWindow::swapBuffersImplementation();
	};

	// void osgViewer::GraphicsWindow::requestRedraw()
	void requestRedraw() {
		if(_obj.pushFunction("requestRedraw")) {
			_obj.pushArg((osgViewer::GraphicsWindow*)this);
			return (_obj.callFunction<void>());
		}

		return GraphicsWindow::requestRedraw();
	};

	// void osgViewer::GraphicsWindow::requestContinuousUpdate(bool needed = true)
	void requestContinuousUpdate(bool needed = true) {
		if(_obj.pushFunction("requestContinuousUpdate")) {
			_obj.pushArg((osgViewer::GraphicsWindow*)this);
			_obj.pushArg(needed);
			return (_obj.callFunction<void>());
		}

		return GraphicsWindow::requestContinuousUpdate(needed);
	};

	// void osgViewer::GraphicsWindow::requestWarpPointer(float x, float y)
	void requestWarpPointer(float x, float y) {
		if(_obj.pushFunction("requestWarpPointer")) {
			_obj.pushArg((osgViewer::GraphicsWindow*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<void>());
		}

		return GraphicsWindow::requestWarpPointer(x, y);
	};


	// Protected non-virtual methods:
	// void osg::GraphicsContext::addCamera(osg::Camera * camera)
	void public_addCamera(osg::Camera * camera) {
		return osg::GraphicsContext::addCamera(camera);
	};

	// void osg::GraphicsContext::removeCamera(osg::Camera * camera)
	void public_removeCamera(osg::Camera * camera) {
		return osg::GraphicsContext::removeCamera(camera);
	};

	// static void osg::GraphicsContext::registerGraphicsContext(osg::GraphicsContext * gc)
	static void public_registerGraphicsContext(osg::GraphicsContext * gc) {
		return osg::GraphicsContext::registerGraphicsContext(gc);
	};

	// static void osg::GraphicsContext::unregisterGraphicsContext(osg::GraphicsContext * gc)
	static void public_unregisterGraphicsContext(osg::GraphicsContext * gc) {
		return osg::GraphicsContext::unregisterGraphicsContext(gc);
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
	inline static bool _lg_typecheck_public_addCamera(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_removeCamera(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_registerGraphicsContext(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_unregisterGraphicsContext(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
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
	// void osg::GraphicsContext::public_addCamera(osg::Camera * camera)
	static int _bind_public_addCamera(lua_State *L) {
		if (!_lg_typecheck_public_addCamera(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::public_addCamera(osg::Camera * camera) function, expected prototype:\nvoid osg::GraphicsContext::public_addCamera(osg::Camera * camera)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Camera* camera=(Luna< osg::Referenced >::checkSubType< osg::Camera >(L,2));

		wrapper_osgViewer_GraphicsWindow* self=Luna< osg::Referenced >::checkSubType< wrapper_osgViewer_GraphicsWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::public_addCamera(osg::Camera *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_addCamera(camera);

		return 0;
	}

	// void osg::GraphicsContext::public_removeCamera(osg::Camera * camera)
	static int _bind_public_removeCamera(lua_State *L) {
		if (!_lg_typecheck_public_removeCamera(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GraphicsContext::public_removeCamera(osg::Camera * camera) function, expected prototype:\nvoid osg::GraphicsContext::public_removeCamera(osg::Camera * camera)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Camera* camera=(Luna< osg::Referenced >::checkSubType< osg::Camera >(L,2));

		wrapper_osgViewer_GraphicsWindow* self=Luna< osg::Referenced >::checkSubType< wrapper_osgViewer_GraphicsWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GraphicsContext::public_removeCamera(osg::Camera *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_removeCamera(camera);

		return 0;
	}

	// static void osg::GraphicsContext::public_registerGraphicsContext(osg::GraphicsContext * gc)
	static int _bind_public_registerGraphicsContext(lua_State *L) {
		if (!_lg_typecheck_public_registerGraphicsContext(L)) {
			luaL_error(L, "luna typecheck failed in static void osg::GraphicsContext::public_registerGraphicsContext(osg::GraphicsContext * gc) function, expected prototype:\nstatic void osg::GraphicsContext::public_registerGraphicsContext(osg::GraphicsContext * gc)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::GraphicsContext* gc=(Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,1));

		wrapper_osgViewer_GraphicsWindow* self=Luna< osg::Referenced >::checkSubType< wrapper_osgViewer_GraphicsWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call static void osg::GraphicsContext::public_registerGraphicsContext(osg::GraphicsContext *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_registerGraphicsContext(gc);

		return 0;
	}

	// static void osg::GraphicsContext::public_unregisterGraphicsContext(osg::GraphicsContext * gc)
	static int _bind_public_unregisterGraphicsContext(lua_State *L) {
		if (!_lg_typecheck_public_unregisterGraphicsContext(L)) {
			luaL_error(L, "luna typecheck failed in static void osg::GraphicsContext::public_unregisterGraphicsContext(osg::GraphicsContext * gc) function, expected prototype:\nstatic void osg::GraphicsContext::public_unregisterGraphicsContext(osg::GraphicsContext * gc)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::GraphicsContext* gc=(Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,1));

		wrapper_osgViewer_GraphicsWindow* self=Luna< osg::Referenced >::checkSubType< wrapper_osgViewer_GraphicsWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call static void osg::GraphicsContext::public_unregisterGraphicsContext(osg::GraphicsContext *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_unregisterGraphicsContext(gc);

		return 0;
	}

	// void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const
	static int _bind_public_signalObserversAndDelete(lua_State *L) {
		if (!_lg_typecheck_public_signalObserversAndDelete(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const function, expected prototype:\nvoid osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool signalDelete=(bool)(lua_toboolean(L,2)==1);
		bool doDelete=(bool)(lua_toboolean(L,3)==1);

		wrapper_osgViewer_GraphicsWindow* self=Luna< osg::Referenced >::checkSubType< wrapper_osgViewer_GraphicsWindow >(L,1);
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


		wrapper_osgViewer_GraphicsWindow* self=Luna< osg::Referenced >::checkSubType< wrapper_osgViewer_GraphicsWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_deleteUsingDeleteHandler() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_deleteUsingDeleteHandler();

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"addCamera",_bind_public_addCamera},
		{"removeCamera",_bind_public_removeCamera},
		{"registerGraphicsContext",_bind_public_registerGraphicsContext},
		{"unregisterGraphicsContext",_bind_public_unregisterGraphicsContext},
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


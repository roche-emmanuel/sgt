#ifndef _WRAPPERS_WRAPPER_OSGVIEWER_VIEWER_H_
#define _WRAPPERS_WRAPPER_OSGVIEWER_VIEWER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <osgViewer/Viewer>

class wrapper_osgViewer_Viewer : public osgViewer::Viewer, public luna_wrapper_base {

public:
		

	~wrapper_osgViewer_Viewer() {
		logDEBUG3("Calling delete function for wrapper osgViewer_Viewer");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osgViewer::Viewer*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgViewer_Viewer(lua_State* L, lua_Table* dum) 
		: osgViewer::Viewer(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osgViewer::Viewer*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_osgViewer_Viewer(lua_State* L, lua_Table* dum, osg::ArgumentParser & arguments) 
		: osgViewer::Viewer(arguments), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osgViewer::Viewer*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_osgViewer_Viewer(lua_State* L, lua_Table* dum, const osgViewer::Viewer & viewer, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) 
		: osgViewer::Viewer(viewer, copyop), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osgViewer::Viewer*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// osg::GraphicsOperation * osgViewer::View::createRenderer(osg::Camera * camera)
	osg::GraphicsOperation * createRenderer(osg::Camera * camera) {
		if(_obj.pushFunction("createRenderer")) {
			_obj.pushArg((osgViewer::Viewer*)this);
			_obj.pushArg(camera);
			return (_obj.callFunction<osg::GraphicsOperation*>());
		}

		return Viewer::createRenderer(camera);
	};

	// void osgViewer::Viewer::viewerInit()
	void viewerInit() {
		if(_obj.pushFunction("viewerInit")) {
			_obj.pushArg((osgViewer::Viewer*)this);
			return (_obj.callFunction<void>());
		}

		return Viewer::viewerInit();
	};

public:
	// Public virtual methods:
	// void osg::Object::setThreadSafeRefUnref(bool threadSafe)
	void setThreadSafeRefUnref(bool threadSafe) {
		if(_obj.pushFunction("setThreadSafeRefUnref")) {
			_obj.pushArg((osgViewer::Viewer*)this);
			_obj.pushArg(threadSafe);
			return (_obj.callFunction<void>());
		}

		return Viewer::setThreadSafeRefUnref(threadSafe);
	};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg((osgViewer::Viewer*)this);
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return Viewer::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			_obj.pushArg((osgViewer::Viewer*)this);
			return (_obj.callFunction<void>());
		}

		return Viewer::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg((osgViewer::Viewer*)this);
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return Viewer::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			_obj.pushArg((osgViewer::Viewer*)this);
			return (_obj.callFunction<osg::Referenced*>());
		}

		return Viewer::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			_obj.pushArg((osgViewer::Viewer*)this);
			return (_obj.callFunction<osg::Referenced*>());
		}

		return Viewer::getUserData();
	};

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg((osgViewer::Viewer*)this);
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return Viewer::releaseGLObjects(arg1);
	};

	// void osgViewer::ViewerBase::setThreadingModel(osgViewer::ViewerBase::ThreadingModel threadingModel)
	void setThreadingModel(osgViewer::ViewerBase::ThreadingModel threadingModel) {
		if(_obj.pushFunction("setThreadingModel")) {
			_obj.pushArg((osgViewer::Viewer*)this);
			_obj.pushArg((int)threadingModel);
			return (_obj.callFunction<void>());
		}

		return Viewer::setThreadingModel(threadingModel);
	};

	// osgViewer::ViewerBase::ThreadingModel osgViewer::ViewerBase::suggestBestThreadingModel()
	osgViewer::ViewerBase::ThreadingModel suggestBestThreadingModel() {
		if(_obj.pushFunction("suggestBestThreadingModel")) {
			_obj.pushArg((osgViewer::Viewer*)this);
			return (osgViewer::ViewerBase::ThreadingModel)(_obj.callFunction<int>());
		}

		return Viewer::suggestBestThreadingModel();
	};

	// void osgViewer::ViewerBase::setUpThreading()
	void setUpThreading() {
		if(_obj.pushFunction("setUpThreading")) {
			_obj.pushArg((osgViewer::Viewer*)this);
			return (_obj.callFunction<void>());
		}

		return Viewer::setUpThreading();
	};

	// void osgViewer::ViewerBase::stopThreading()
	void stopThreading() {
		if(_obj.pushFunction("stopThreading")) {
			_obj.pushArg((osgViewer::Viewer*)this);
			return (_obj.callFunction<void>());
		}

		return Viewer::stopThreading();
	};

	// void osgViewer::ViewerBase::startThreading()
	void startThreading() {
		if(_obj.pushFunction("startThreading")) {
			_obj.pushArg((osgViewer::Viewer*)this);
			return (_obj.callFunction<void>());
		}

		return Viewer::startThreading();
	};

	// void osgViewer::ViewerBase::frame(double simulationTime = DBL_MAX)
	void frame(double simulationTime = DBL_MAX) {
		if(_obj.pushFunction("frame")) {
			_obj.pushArg((osgViewer::Viewer*)this);
			_obj.pushArg(simulationTime);
			return (_obj.callFunction<void>());
		}

		return Viewer::frame(simulationTime);
	};

	// void osgViewer::ViewerBase::renderingTraversals()
	void renderingTraversals() {
		if(_obj.pushFunction("renderingTraversals")) {
			_obj.pushArg((osgViewer::Viewer*)this);
			return (_obj.callFunction<void>());
		}

		return Viewer::renderingTraversals();
	};

	// void osgViewer::ViewerBase::getWindows(osgViewer::ViewerBase::Windows & windows, bool onlyValid = true)
	void getWindows(osgViewer::ViewerBase::Windows & windows, bool onlyValid = true) {
		if(_obj.pushFunction("getWindows")) {
			_obj.pushArg((osgViewer::Viewer*)this);
			_obj.pushArg(&windows);
			_obj.pushArg(onlyValid);
			return (_obj.callFunction<void>());
		}

		return Viewer::getWindows(windows, onlyValid);
	};

	// osg::View * osgViewer::View::asView()
	osg::View * asView() {
		if(_obj.pushFunction("asView")) {
			_obj.pushArg((osgViewer::Viewer*)this);
			return (_obj.callFunction<osg::View*>());
		}

		return Viewer::asView();
	};

	// void osgViewer::View::requestRedraw()
	void requestRedraw() {
		if(_obj.pushFunction("requestRedraw")) {
			_obj.pushArg((osgViewer::Viewer*)this);
			return (_obj.callFunction<void>());
		}

		return Viewer::requestRedraw();
	};

	// void osgViewer::View::requestContinuousUpdate(bool needed = true)
	void requestContinuousUpdate(bool needed = true) {
		if(_obj.pushFunction("requestContinuousUpdate")) {
			_obj.pushArg((osgViewer::Viewer*)this);
			_obj.pushArg(needed);
			return (_obj.callFunction<void>());
		}

		return Viewer::requestContinuousUpdate(needed);
	};

	// void osgViewer::View::requestWarpPointer(float x, float y)
	void requestWarpPointer(float x, float y) {
		if(_obj.pushFunction("requestWarpPointer")) {
			_obj.pushArg((osgViewer::Viewer*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<void>());
		}

		return Viewer::requestWarpPointer(x, y);
	};

	// osg::Object * osgViewer::Viewer::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			_obj.pushArg((osgViewer::Viewer*)this);
			return (_obj.callFunction<osg::Object*>());
		}

		return Viewer::cloneType();
	};

	// osg::Object * osgViewer::Viewer::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg((osgViewer::Viewer*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return Viewer::clone(arg1);
	};

	// bool osgViewer::Viewer::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg((osgViewer::Viewer*)this);
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return Viewer::isSameKindAs(obj);
	};

	// const char * osgViewer::Viewer::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			_obj.pushArg((osgViewer::Viewer*)this);
			return (_obj.callFunction<const char*>());
		}

		return Viewer::libraryName();
	};

	// const char * osgViewer::Viewer::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			_obj.pushArg((osgViewer::Viewer*)this);
			return (_obj.callFunction<const char*>());
		}

		return Viewer::className();
	};

	// void osgViewer::Viewer::take(osg::View & rhs)
	void take(osg::View & rhs) {
		if(_obj.pushFunction("take")) {
			_obj.pushArg((osgViewer::Viewer*)this);
			_obj.pushArg(&rhs);
			return (_obj.callFunction<void>());
		}

		return Viewer::take(rhs);
	};

	// void osgViewer::Viewer::setViewerStats(osg::Stats * stats)
	void setViewerStats(osg::Stats * stats) {
		if(_obj.pushFunction("setViewerStats")) {
			_obj.pushArg((osgViewer::Viewer*)this);
			_obj.pushArg(stats);
			return (_obj.callFunction<void>());
		}

		return Viewer::setViewerStats(stats);
	};

	// osg::Stats * osgViewer::Viewer::getViewerStats()
	osg::Stats * getViewerStats() {
		if(_obj.pushFunction("getViewerStats")) {
			_obj.pushArg((osgViewer::Viewer*)this);
			return (_obj.callFunction<osg::Stats*>());
		}

		return Viewer::getViewerStats();
	};

	// const osg::Stats * osgViewer::Viewer::getViewerStats() const
	const osg::Stats * getViewerStats() const {
		if(_obj.pushFunction("getViewerStats")) {
			_obj.pushArg((osgViewer::Viewer*)this);
			return (_obj.callFunction<osg::Stats*>());
		}

		return Viewer::getViewerStats();
	};

	// bool osgViewer::Viewer::readConfiguration(const std::string & filename)
	bool readConfiguration(const std::string & filename) {
		if(_obj.pushFunction("readConfiguration")) {
			_obj.pushArg((osgViewer::Viewer*)this);
			_obj.pushArg(filename);
			return (_obj.callFunction<bool>());
		}

		return Viewer::readConfiguration(filename);
	};

	// bool osgViewer::Viewer::isRealized() const
	bool isRealized() const {
		if(_obj.pushFunction("isRealized")) {
			_obj.pushArg((osgViewer::Viewer*)this);
			return (_obj.callFunction<bool>());
		}

		return Viewer::isRealized();
	};

	// void osgViewer::Viewer::realize()
	void realize() {
		if(_obj.pushFunction("realize")) {
			_obj.pushArg((osgViewer::Viewer*)this);
			return (_obj.callFunction<void>());
		}

		return Viewer::realize();
	};

	// void osgViewer::Viewer::setStartTick(__int64 tick)
	void setStartTick(__int64 tick) {
		if(_obj.pushFunction("setStartTick")) {
			_obj.pushArg((osgViewer::Viewer*)this);
			_obj.pushArg(&tick);
			return (_obj.callFunction<void>());
		}

		return Viewer::setStartTick(tick);
	};

	// void osgViewer::Viewer::setSceneData(osg::Node * node)
	void setSceneData(osg::Node * node) {
		if(_obj.pushFunction("setSceneData")) {
			_obj.pushArg((osgViewer::Viewer*)this);
			_obj.pushArg(node);
			return (_obj.callFunction<void>());
		}

		return Viewer::setSceneData(node);
	};

	// osgViewer::GraphicsWindowEmbedded * osgViewer::Viewer::setUpViewerAsEmbeddedInWindow(int x, int y, int width, int height)
	osgViewer::GraphicsWindowEmbedded * setUpViewerAsEmbeddedInWindow(int x, int y, int width, int height) {
		if(_obj.pushFunction("setUpViewerAsEmbeddedInWindow")) {
			_obj.pushArg((osgViewer::Viewer*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			_obj.pushArg(width);
			_obj.pushArg(height);
			return (_obj.callFunction<osgViewer::GraphicsWindowEmbedded*>());
		}

		return Viewer::setUpViewerAsEmbeddedInWindow(x, y, width, height);
	};

	// double osgViewer::Viewer::elapsedTime()
	double elapsedTime() {
		if(_obj.pushFunction("elapsedTime")) {
			_obj.pushArg((osgViewer::Viewer*)this);
			return (_obj.callFunction<double>());
		}

		return Viewer::elapsedTime();
	};

	// osg::FrameStamp * osgViewer::Viewer::getViewerFrameStamp()
	osg::FrameStamp * getViewerFrameStamp() {
		if(_obj.pushFunction("getViewerFrameStamp")) {
			_obj.pushArg((osgViewer::Viewer*)this);
			return (_obj.callFunction<osg::FrameStamp*>());
		}

		return Viewer::getViewerFrameStamp();
	};

	// int osgViewer::Viewer::run()
	int run() {
		if(_obj.pushFunction("run")) {
			_obj.pushArg((osgViewer::Viewer*)this);
			return (_obj.callFunction<int>());
		}

		return Viewer::run();
	};

	// bool osgViewer::Viewer::checkNeedToDoFrame()
	bool checkNeedToDoFrame() {
		if(_obj.pushFunction("checkNeedToDoFrame")) {
			_obj.pushArg((osgViewer::Viewer*)this);
			return (_obj.callFunction<bool>());
		}

		return Viewer::checkNeedToDoFrame();
	};

	// void osgViewer::Viewer::advance(double simulationTime = DBL_MAX)
	void advance(double simulationTime = DBL_MAX) {
		if(_obj.pushFunction("advance")) {
			_obj.pushArg((osgViewer::Viewer*)this);
			_obj.pushArg(simulationTime);
			return (_obj.callFunction<void>());
		}

		return Viewer::advance(simulationTime);
	};

	// void osgViewer::Viewer::eventTraversal()
	void eventTraversal() {
		if(_obj.pushFunction("eventTraversal")) {
			_obj.pushArg((osgViewer::Viewer*)this);
			return (_obj.callFunction<void>());
		}

		return Viewer::eventTraversal();
	};

	// void osgViewer::Viewer::updateTraversal()
	void updateTraversal() {
		if(_obj.pushFunction("updateTraversal")) {
			_obj.pushArg((osgViewer::Viewer*)this);
			return (_obj.callFunction<void>());
		}

		return Viewer::updateTraversal();
	};

	// void osgViewer::Viewer::getCameras(osgViewer::ViewerBase::Cameras & cameras, bool onlyActive = true)
	void getCameras(osgViewer::ViewerBase::Cameras & cameras, bool onlyActive = true) {
		if(_obj.pushFunction("getCameras")) {
			_obj.pushArg((osgViewer::Viewer*)this);
			_obj.pushArg(&cameras);
			_obj.pushArg(onlyActive);
			return (_obj.callFunction<void>());
		}

		return Viewer::getCameras(cameras, onlyActive);
	};

	// void osgViewer::Viewer::getContexts(osgViewer::ViewerBase::Contexts & contexts, bool onlyValid = true)
	void getContexts(osgViewer::ViewerBase::Contexts & contexts, bool onlyValid = true) {
		if(_obj.pushFunction("getContexts")) {
			_obj.pushArg((osgViewer::Viewer*)this);
			_obj.pushArg(&contexts);
			_obj.pushArg(onlyValid);
			return (_obj.callFunction<void>());
		}

		return Viewer::getContexts(contexts, onlyValid);
	};

	// void osgViewer::Viewer::getAllThreads(osgViewer::ViewerBase::Threads & threads, bool onlyActive = true)
	void getAllThreads(osgViewer::ViewerBase::Threads & threads, bool onlyActive = true) {
		if(_obj.pushFunction("getAllThreads")) {
			_obj.pushArg((osgViewer::Viewer*)this);
			_obj.pushArg(&threads);
			_obj.pushArg(onlyActive);
			return (_obj.callFunction<void>());
		}

		return Viewer::getAllThreads(threads, onlyActive);
	};

	// void osgViewer::Viewer::getOperationThreads(osgViewer::ViewerBase::OperationThreads & threads, bool onlyActive = true)
	void getOperationThreads(osgViewer::ViewerBase::OperationThreads & threads, bool onlyActive = true) {
		if(_obj.pushFunction("getOperationThreads")) {
			_obj.pushArg((osgViewer::Viewer*)this);
			_obj.pushArg(&threads);
			_obj.pushArg(onlyActive);
			return (_obj.callFunction<void>());
		}

		return Viewer::getOperationThreads(threads, onlyActive);
	};

	// void osgViewer::Viewer::getScenes(osgViewer::ViewerBase::Scenes & scenes, bool onlyValid = true)
	void getScenes(osgViewer::ViewerBase::Scenes & scenes, bool onlyValid = true) {
		if(_obj.pushFunction("getScenes")) {
			_obj.pushArg((osgViewer::Viewer*)this);
			_obj.pushArg(&scenes);
			_obj.pushArg(onlyValid);
			return (_obj.callFunction<void>());
		}

		return Viewer::getScenes(scenes, onlyValid);
	};

	// void osgViewer::Viewer::getViews(osgViewer::ViewerBase::Views & views, bool onlyValid = true)
	void getViews(osgViewer::ViewerBase::Views & views, bool onlyValid = true) {
		if(_obj.pushFunction("getViews")) {
			_obj.pushArg((osgViewer::Viewer*)this);
			_obj.pushArg(&views);
			_obj.pushArg(onlyValid);
			return (_obj.callFunction<void>());
		}

		return Viewer::getViews(views, onlyValid);
	};

	// void osgViewer::Viewer::getUsage(osg::ApplicationUsage & usage) const
	void getUsage(osg::ApplicationUsage & usage) const {
		if(_obj.pushFunction("getUsage")) {
			_obj.pushArg((osgViewer::Viewer*)this);
			_obj.pushArg(&usage);
			return (_obj.callFunction<void>());
		}

		return Viewer::getUsage(usage);
	};


	// Protected non-virtual methods:
	// void osgViewer::Viewer::constructorInit()
	void public_constructorInit() {
		return osgViewer::Viewer::constructorInit();
	};

	// void osgViewer::ViewerBase::viewerBaseInit()
	void public_viewerBaseInit() {
		return osgViewer::ViewerBase::viewerBaseInit();
	};

	// void osgViewer::ViewerBase::makeCurrent(osg::GraphicsContext * gc)
	void public_makeCurrent(osg::GraphicsContext * gc) {
		return osgViewer::ViewerBase::makeCurrent(gc);
	};

	// void osgViewer::ViewerBase::releaseContext()
	void public_releaseContext() {
		return osgViewer::ViewerBase::releaseContext();
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
	inline static bool _lg_typecheck_public_constructorInit(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_viewerBaseInit(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_makeCurrent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_releaseContext(lua_State *L) {
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
	// void osgViewer::Viewer::public_constructorInit()
	static int _bind_public_constructorInit(lua_State *L) {
		if (!_lg_typecheck_public_constructorInit(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::Viewer::public_constructorInit() function, expected prototype:\nvoid osgViewer::Viewer::public_constructorInit()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wrapper_osgViewer_Viewer* self=Luna< osg::Referenced >::checkSubType< wrapper_osgViewer_Viewer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::Viewer::public_constructorInit(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_constructorInit();

		return 0;
	}

	// void osgViewer::ViewerBase::public_viewerBaseInit()
	static int _bind_public_viewerBaseInit(lua_State *L) {
		if (!_lg_typecheck_public_viewerBaseInit(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::ViewerBase::public_viewerBaseInit() function, expected prototype:\nvoid osgViewer::ViewerBase::public_viewerBaseInit()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wrapper_osgViewer_Viewer* self=Luna< osg::Referenced >::checkSubType< wrapper_osgViewer_Viewer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::ViewerBase::public_viewerBaseInit(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_viewerBaseInit();

		return 0;
	}

	// void osgViewer::ViewerBase::public_makeCurrent(osg::GraphicsContext * gc)
	static int _bind_public_makeCurrent(lua_State *L) {
		if (!_lg_typecheck_public_makeCurrent(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::ViewerBase::public_makeCurrent(osg::GraphicsContext * gc) function, expected prototype:\nvoid osgViewer::ViewerBase::public_makeCurrent(osg::GraphicsContext * gc)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::GraphicsContext* gc=(Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,2));

		wrapper_osgViewer_Viewer* self=Luna< osg::Referenced >::checkSubType< wrapper_osgViewer_Viewer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::ViewerBase::public_makeCurrent(osg::GraphicsContext *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_makeCurrent(gc);

		return 0;
	}

	// void osgViewer::ViewerBase::public_releaseContext()
	static int _bind_public_releaseContext(lua_State *L) {
		if (!_lg_typecheck_public_releaseContext(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::ViewerBase::public_releaseContext() function, expected prototype:\nvoid osgViewer::ViewerBase::public_releaseContext()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wrapper_osgViewer_Viewer* self=Luna< osg::Referenced >::checkSubType< wrapper_osgViewer_Viewer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::ViewerBase::public_releaseContext(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_releaseContext();

		return 0;
	}

	// void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const
	static int _bind_public_signalObserversAndDelete(lua_State *L) {
		if (!_lg_typecheck_public_signalObserversAndDelete(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const function, expected prototype:\nvoid osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool signalDelete=(bool)(lua_toboolean(L,2)==1);
		bool doDelete=(bool)(lua_toboolean(L,3)==1);

		wrapper_osgViewer_Viewer* self=Luna< osg::Referenced >::checkSubType< wrapper_osgViewer_Viewer >(L,1);
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


		wrapper_osgViewer_Viewer* self=Luna< osg::Referenced >::checkSubType< wrapper_osgViewer_Viewer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_deleteUsingDeleteHandler() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_deleteUsingDeleteHandler();

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"constructorInit",_bind_public_constructorInit},
		{"viewerBaseInit",_bind_public_viewerBaseInit},
		{"makeCurrent",_bind_public_makeCurrent},
		{"releaseContext",_bind_public_releaseContext},
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


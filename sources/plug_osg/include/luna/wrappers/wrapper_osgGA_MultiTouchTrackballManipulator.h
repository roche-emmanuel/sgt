#ifndef _WRAPPERS_WRAPPER_OSGGA_MULTITOUCHTRACKBALLMANIPULATOR_H_
#define _WRAPPERS_WRAPPER_OSGGA_MULTITOUCHTRACKBALLMANIPULATOR_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <osgGA/MultiTouchTrackballManipulator>

class wrapper_osgGA_MultiTouchTrackballManipulator : public osgGA::MultiTouchTrackballManipulator, public luna_wrapper_base {

public:
		

	~wrapper_osgGA_MultiTouchTrackballManipulator() {
		logDEBUG3("Calling delete function for wrapper osgGA_MultiTouchTrackballManipulator");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osgGA::MultiTouchTrackballManipulator*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgGA_MultiTouchTrackballManipulator(lua_State* L, lua_Table* dum, int flags = osgGA::StandardManipulator::DEFAULT_SETTINGS) 
		: osgGA::MultiTouchTrackballManipulator(flags), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osgGA::MultiTouchTrackballManipulator*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_osgGA_MultiTouchTrackballManipulator(lua_State* L, lua_Table* dum, const osgGA::MultiTouchTrackballManipulator & tm, const osg::CopyOp & copyOp = osg::CopyOp::SHALLOW_COPY) 
		: osgGA::MultiTouchTrackballManipulator(tm, copyOp), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osgGA::MultiTouchTrackballManipulator*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// bool osgGA::StandardManipulator::handleFrame(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)
	bool handleFrame(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us) {
		if(_obj.pushFunction("handleFrame")) {
			_obj.pushArg((osgGA::MultiTouchTrackballManipulator*)this);
			_obj.pushArg(&ea);
			_obj.pushArg(&us);
			return (_obj.callFunction<bool>());
		}

		return MultiTouchTrackballManipulator::handleFrame(ea, us);
	};

	// bool osgGA::StandardManipulator::handleResize(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)
	bool handleResize(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us) {
		if(_obj.pushFunction("handleResize")) {
			_obj.pushArg((osgGA::MultiTouchTrackballManipulator*)this);
			_obj.pushArg(&ea);
			_obj.pushArg(&us);
			return (_obj.callFunction<bool>());
		}

		return MultiTouchTrackballManipulator::handleResize(ea, us);
	};

	// bool osgGA::StandardManipulator::handleMouseMove(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)
	bool handleMouseMove(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us) {
		if(_obj.pushFunction("handleMouseMove")) {
			_obj.pushArg((osgGA::MultiTouchTrackballManipulator*)this);
			_obj.pushArg(&ea);
			_obj.pushArg(&us);
			return (_obj.callFunction<bool>());
		}

		return MultiTouchTrackballManipulator::handleMouseMove(ea, us);
	};

	// bool osgGA::StandardManipulator::handleMouseDrag(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)
	bool handleMouseDrag(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us) {
		if(_obj.pushFunction("handleMouseDrag")) {
			_obj.pushArg((osgGA::MultiTouchTrackballManipulator*)this);
			_obj.pushArg(&ea);
			_obj.pushArg(&us);
			return (_obj.callFunction<bool>());
		}

		return MultiTouchTrackballManipulator::handleMouseDrag(ea, us);
	};

	// bool osgGA::StandardManipulator::handleMousePush(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)
	bool handleMousePush(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us) {
		if(_obj.pushFunction("handleMousePush")) {
			_obj.pushArg((osgGA::MultiTouchTrackballManipulator*)this);
			_obj.pushArg(&ea);
			_obj.pushArg(&us);
			return (_obj.callFunction<bool>());
		}

		return MultiTouchTrackballManipulator::handleMousePush(ea, us);
	};

	// bool osgGA::StandardManipulator::handleMouseRelease(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)
	bool handleMouseRelease(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us) {
		if(_obj.pushFunction("handleMouseRelease")) {
			_obj.pushArg((osgGA::MultiTouchTrackballManipulator*)this);
			_obj.pushArg(&ea);
			_obj.pushArg(&us);
			return (_obj.callFunction<bool>());
		}

		return MultiTouchTrackballManipulator::handleMouseRelease(ea, us);
	};

	// bool osgGA::StandardManipulator::handleKeyDown(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)
	bool handleKeyDown(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us) {
		if(_obj.pushFunction("handleKeyDown")) {
			_obj.pushArg((osgGA::MultiTouchTrackballManipulator*)this);
			_obj.pushArg(&ea);
			_obj.pushArg(&us);
			return (_obj.callFunction<bool>());
		}

		return MultiTouchTrackballManipulator::handleKeyDown(ea, us);
	};

	// bool osgGA::StandardManipulator::handleKeyUp(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)
	bool handleKeyUp(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us) {
		if(_obj.pushFunction("handleKeyUp")) {
			_obj.pushArg((osgGA::MultiTouchTrackballManipulator*)this);
			_obj.pushArg(&ea);
			_obj.pushArg(&us);
			return (_obj.callFunction<bool>());
		}

		return MultiTouchTrackballManipulator::handleKeyUp(ea, us);
	};

	// bool osgGA::StandardManipulator::handleMouseDeltaMovement(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)
	bool handleMouseDeltaMovement(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us) {
		if(_obj.pushFunction("handleMouseDeltaMovement")) {
			_obj.pushArg((osgGA::MultiTouchTrackballManipulator*)this);
			_obj.pushArg(&ea);
			_obj.pushArg(&us);
			return (_obj.callFunction<bool>());
		}

		return MultiTouchTrackballManipulator::handleMouseDeltaMovement(ea, us);
	};

	// bool osgGA::StandardManipulator::performMovement()
	bool performMovement() {
		if(_obj.pushFunction("performMovement")) {
			_obj.pushArg((osgGA::MultiTouchTrackballManipulator*)this);
			return (_obj.callFunction<bool>());
		}

		return MultiTouchTrackballManipulator::performMovement();
	};

	// bool osgGA::StandardManipulator::performAnimationMovement(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)
	bool performAnimationMovement(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us) {
		if(_obj.pushFunction("performAnimationMovement")) {
			_obj.pushArg((osgGA::MultiTouchTrackballManipulator*)this);
			_obj.pushArg(&ea);
			_obj.pushArg(&us);
			return (_obj.callFunction<bool>());
		}

		return MultiTouchTrackballManipulator::performAnimationMovement(ea, us);
	};

	// bool osgGA::StandardManipulator::isMouseMoving() const
	bool isMouseMoving() const {
		if(_obj.pushFunction("isMouseMoving")) {
			_obj.pushArg((osgGA::MultiTouchTrackballManipulator*)this);
			return (_obj.callFunction<bool>());
		}

		return MultiTouchTrackballManipulator::isMouseMoving();
	};

	// void osgGA::StandardManipulator::centerMousePointer(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)
	void centerMousePointer(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us) {
		if(_obj.pushFunction("centerMousePointer")) {
			_obj.pushArg((osgGA::MultiTouchTrackballManipulator*)this);
			_obj.pushArg(&ea);
			_obj.pushArg(&us);
			return (_obj.callFunction<void>());
		}

		return MultiTouchTrackballManipulator::centerMousePointer(ea, us);
	};

	// bool osgGA::StandardManipulator::setCenterByMousePointerIntersection(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)
	bool setCenterByMousePointerIntersection(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us) {
		if(_obj.pushFunction("setCenterByMousePointerIntersection")) {
			_obj.pushArg((osgGA::MultiTouchTrackballManipulator*)this);
			_obj.pushArg(&ea);
			_obj.pushArg(&us);
			return (_obj.callFunction<bool>());
		}

		return MultiTouchTrackballManipulator::setCenterByMousePointerIntersection(ea, us);
	};

	// bool osgGA::OrbitManipulator::handleMouseWheel(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)
	bool handleMouseWheel(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us) {
		if(_obj.pushFunction("handleMouseWheel")) {
			_obj.pushArg((osgGA::MultiTouchTrackballManipulator*)this);
			_obj.pushArg(&ea);
			_obj.pushArg(&us);
			return (_obj.callFunction<bool>());
		}

		return MultiTouchTrackballManipulator::handleMouseWheel(ea, us);
	};

	// bool osgGA::OrbitManipulator::performMovementLeftMouseButton(const double eventTimeDelta, const double dx, const double dy)
	bool performMovementLeftMouseButton(const double eventTimeDelta, const double dx, const double dy) {
		if(_obj.pushFunction("performMovementLeftMouseButton")) {
			_obj.pushArg((osgGA::MultiTouchTrackballManipulator*)this);
			_obj.pushArg(eventTimeDelta);
			_obj.pushArg(dx);
			_obj.pushArg(dy);
			return (_obj.callFunction<bool>());
		}

		return MultiTouchTrackballManipulator::performMovementLeftMouseButton(eventTimeDelta, dx, dy);
	};

	// bool osgGA::OrbitManipulator::performMovementMiddleMouseButton(const double eventTimeDelta, const double dx, const double dy)
	bool performMovementMiddleMouseButton(const double eventTimeDelta, const double dx, const double dy) {
		if(_obj.pushFunction("performMovementMiddleMouseButton")) {
			_obj.pushArg((osgGA::MultiTouchTrackballManipulator*)this);
			_obj.pushArg(eventTimeDelta);
			_obj.pushArg(dx);
			_obj.pushArg(dy);
			return (_obj.callFunction<bool>());
		}

		return MultiTouchTrackballManipulator::performMovementMiddleMouseButton(eventTimeDelta, dx, dy);
	};

	// bool osgGA::OrbitManipulator::performMovementRightMouseButton(const double eventTimeDelta, const double dx, const double dy)
	bool performMovementRightMouseButton(const double eventTimeDelta, const double dx, const double dy) {
		if(_obj.pushFunction("performMovementRightMouseButton")) {
			_obj.pushArg((osgGA::MultiTouchTrackballManipulator*)this);
			_obj.pushArg(eventTimeDelta);
			_obj.pushArg(dx);
			_obj.pushArg(dy);
			return (_obj.callFunction<bool>());
		}

		return MultiTouchTrackballManipulator::performMovementRightMouseButton(eventTimeDelta, dx, dy);
	};

	// bool osgGA::OrbitManipulator::performMouseDeltaMovement(const float dx, const float dy)
	bool performMouseDeltaMovement(const float dx, const float dy) {
		if(_obj.pushFunction("performMouseDeltaMovement")) {
			_obj.pushArg((osgGA::MultiTouchTrackballManipulator*)this);
			_obj.pushArg(dx);
			_obj.pushArg(dy);
			return (_obj.callFunction<bool>());
		}

		return MultiTouchTrackballManipulator::performMouseDeltaMovement(dx, dy);
	};

	// void osgGA::OrbitManipulator::applyAnimationStep(const double currentProgress, const double prevProgress)
	void applyAnimationStep(const double currentProgress, const double prevProgress) {
		if(_obj.pushFunction("applyAnimationStep")) {
			_obj.pushArg((osgGA::MultiTouchTrackballManipulator*)this);
			_obj.pushArg(currentProgress);
			_obj.pushArg(prevProgress);
			return (_obj.callFunction<void>());
		}

		return MultiTouchTrackballManipulator::applyAnimationStep(currentProgress, prevProgress);
	};

	// void osgGA::OrbitManipulator::rotateTrackball(const float px0, const float py0, const float px1, const float py1, const float scale)
	void rotateTrackball(const float px0, const float py0, const float px1, const float py1, const float scale) {
		if(_obj.pushFunction("rotateTrackball")) {
			_obj.pushArg((osgGA::MultiTouchTrackballManipulator*)this);
			_obj.pushArg(px0);
			_obj.pushArg(py0);
			_obj.pushArg(px1);
			_obj.pushArg(py1);
			_obj.pushArg(scale);
			return (_obj.callFunction<void>());
		}

		return MultiTouchTrackballManipulator::rotateTrackball(px0, py0, px1, py1, scale);
	};

	// void osgGA::OrbitManipulator::rotateWithFixedVertical(const float dx, const float dy)
	void rotateWithFixedVertical(const float dx, const float dy) {
		if(_obj.pushFunction("rotateWithFixedVertical")) {
			_obj.pushArg((osgGA::MultiTouchTrackballManipulator*)this);
			_obj.pushArg(dx);
			_obj.pushArg(dy);
			return (_obj.callFunction<void>());
		}

		return MultiTouchTrackballManipulator::rotateWithFixedVertical(dx, dy);
	};

	// void osgGA::OrbitManipulator::rotateWithFixedVertical(const float dx, const float dy, const osg::Vec3f & up)
	void rotateWithFixedVertical(const float dx, const float dy, const osg::Vec3f & up) {
		if(_obj.pushFunction("rotateWithFixedVertical")) {
			_obj.pushArg((osgGA::MultiTouchTrackballManipulator*)this);
			_obj.pushArg(dx);
			_obj.pushArg(dy);
			_obj.pushArg(&up);
			return (_obj.callFunction<void>());
		}

		return MultiTouchTrackballManipulator::rotateWithFixedVertical(dx, dy, up);
	};

	// void osgGA::OrbitManipulator::panModel(const float dx, const float dy, const float dz = 0.f)
	void panModel(const float dx, const float dy, const float dz = 0.f) {
		if(_obj.pushFunction("panModel")) {
			_obj.pushArg((osgGA::MultiTouchTrackballManipulator*)this);
			_obj.pushArg(dx);
			_obj.pushArg(dy);
			_obj.pushArg(dz);
			return (_obj.callFunction<void>());
		}

		return MultiTouchTrackballManipulator::panModel(dx, dy, dz);
	};

	// void osgGA::OrbitManipulator::zoomModel(const float dy, bool pushForwardIfNeeded = true)
	void zoomModel(const float dy, bool pushForwardIfNeeded = true) {
		if(_obj.pushFunction("zoomModel")) {
			_obj.pushArg((osgGA::MultiTouchTrackballManipulator*)this);
			_obj.pushArg(dy);
			_obj.pushArg(pushForwardIfNeeded);
			return (_obj.callFunction<void>());
		}

		return MultiTouchTrackballManipulator::zoomModel(dy, pushForwardIfNeeded);
	};

	// bool osgGA::OrbitManipulator::startAnimationByMousePointerIntersection(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)
	bool startAnimationByMousePointerIntersection(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us) {
		if(_obj.pushFunction("startAnimationByMousePointerIntersection")) {
			_obj.pushArg((osgGA::MultiTouchTrackballManipulator*)this);
			_obj.pushArg(&ea);
			_obj.pushArg(&us);
			return (_obj.callFunction<bool>());
		}

		return MultiTouchTrackballManipulator::startAnimationByMousePointerIntersection(ea, us);
	};

	// void osgGA::OrbitManipulator::allocAnimationData()
	void allocAnimationData() {
		if(_obj.pushFunction("allocAnimationData")) {
			_obj.pushArg((osgGA::MultiTouchTrackballManipulator*)this);
			return (_obj.callFunction<void>());
		}

		return MultiTouchTrackballManipulator::allocAnimationData();
	};

public:
	// Public virtual methods:
	// void osg::Object::setThreadSafeRefUnref(bool threadSafe)
	void setThreadSafeRefUnref(bool threadSafe) {
		if(_obj.pushFunction("setThreadSafeRefUnref")) {
			_obj.pushArg((osgGA::MultiTouchTrackballManipulator*)this);
			_obj.pushArg(threadSafe);
			return (_obj.callFunction<void>());
		}

		return MultiTouchTrackballManipulator::setThreadSafeRefUnref(threadSafe);
	};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg((osgGA::MultiTouchTrackballManipulator*)this);
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return MultiTouchTrackballManipulator::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			_obj.pushArg((osgGA::MultiTouchTrackballManipulator*)this);
			return (_obj.callFunction<void>());
		}

		return MultiTouchTrackballManipulator::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg((osgGA::MultiTouchTrackballManipulator*)this);
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return MultiTouchTrackballManipulator::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			_obj.pushArg((osgGA::MultiTouchTrackballManipulator*)this);
			return (_obj.callFunction<osg::Referenced*>());
		}

		return MultiTouchTrackballManipulator::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			_obj.pushArg((osgGA::MultiTouchTrackballManipulator*)this);
			return (_obj.callFunction<osg::Referenced*>());
		}

		return MultiTouchTrackballManipulator::getUserData();
	};

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg((osgGA::MultiTouchTrackballManipulator*)this);
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return MultiTouchTrackballManipulator::releaseGLObjects(arg1);
	};

	// void osgGA::GUIEventHandler::event(osg::NodeVisitor * nv, osg::Drawable * drawable)
	void event(osg::NodeVisitor * nv, osg::Drawable * drawable) {
		if(_obj.pushFunction("event")) {
			_obj.pushArg((osgGA::MultiTouchTrackballManipulator*)this);
			_obj.pushArg(nv);
			_obj.pushArg(drawable);
			return (_obj.callFunction<void>());
		}

		return MultiTouchTrackballManipulator::event(nv, drawable);
	};

	// void osgGA::GUIEventHandler::operator()(osg::Node * node, osg::NodeVisitor * nv)
	void operator()(osg::Node * node, osg::NodeVisitor * nv) {
		if(_obj.pushFunction("op_call")) {
			_obj.pushArg((osgGA::MultiTouchTrackballManipulator*)this);
			_obj.pushArg(node);
			_obj.pushArg(nv);
			return (_obj.callFunction<void>());
		}

		return MultiTouchTrackballManipulator::operator()(node, nv);
	};

	// void osgGA::CameraManipulator::setCoordinateFrameCallback(osgGA::CameraManipulator::CoordinateFrameCallback * cb)
	void setCoordinateFrameCallback(osgGA::CameraManipulator::CoordinateFrameCallback * cb) {
		if(_obj.pushFunction("setCoordinateFrameCallback")) {
			_obj.pushArg((osgGA::MultiTouchTrackballManipulator*)this);
			_obj.pushArg(cb);
			return (_obj.callFunction<void>());
		}

		return MultiTouchTrackballManipulator::setCoordinateFrameCallback(cb);
	};

	// void osgGA::CameraManipulator::updateCamera(osg::Camera & camera)
	void updateCamera(osg::Camera & camera) {
		if(_obj.pushFunction("updateCamera")) {
			_obj.pushArg((osgGA::MultiTouchTrackballManipulator*)this);
			_obj.pushArg(&camera);
			return (_obj.callFunction<void>());
		}

		return MultiTouchTrackballManipulator::updateCamera(camera);
	};

	// void osgGA::CameraManipulator::setHomePosition(const osg::Vec3d & eye, const osg::Vec3d & center, const osg::Vec3d & up, bool autoComputeHomePosition = false)
	void setHomePosition(const osg::Vec3d & eye, const osg::Vec3d & center, const osg::Vec3d & up, bool autoComputeHomePosition = false) {
		if(_obj.pushFunction("setHomePosition")) {
			_obj.pushArg((osgGA::MultiTouchTrackballManipulator*)this);
			_obj.pushArg(&eye);
			_obj.pushArg(&center);
			_obj.pushArg(&up);
			_obj.pushArg(autoComputeHomePosition);
			return (_obj.callFunction<void>());
		}

		return MultiTouchTrackballManipulator::setHomePosition(eye, center, up, autoComputeHomePosition);
	};

	// void osgGA::CameraManipulator::getHomePosition(osg::Vec3d & eye, osg::Vec3d & center, osg::Vec3d & up) const
	void getHomePosition(osg::Vec3d & eye, osg::Vec3d & center, osg::Vec3d & up) const {
		if(_obj.pushFunction("getHomePosition")) {
			_obj.pushArg((osgGA::MultiTouchTrackballManipulator*)this);
			_obj.pushArg(&eye);
			_obj.pushArg(&center);
			_obj.pushArg(&up);
			return (_obj.callFunction<void>());
		}

		return MultiTouchTrackballManipulator::getHomePosition(eye, center, up);
	};

	// void osgGA::CameraManipulator::setAutoComputeHomePosition(bool flag)
	void setAutoComputeHomePosition(bool flag) {
		if(_obj.pushFunction("setAutoComputeHomePosition")) {
			_obj.pushArg((osgGA::MultiTouchTrackballManipulator*)this);
			_obj.pushArg(flag);
			return (_obj.callFunction<void>());
		}

		return MultiTouchTrackballManipulator::setAutoComputeHomePosition(flag);
	};

	// void osgGA::CameraManipulator::computeHomePosition(const osg::Camera * camera = NULL, bool useBoundingBox = false)
	void computeHomePosition(const osg::Camera * camera = NULL, bool useBoundingBox = false) {
		if(_obj.pushFunction("computeHomePosition")) {
			_obj.pushArg((osgGA::MultiTouchTrackballManipulator*)this);
			_obj.pushArg(camera);
			_obj.pushArg(useBoundingBox);
			return (_obj.callFunction<void>());
		}

		return MultiTouchTrackballManipulator::computeHomePosition(camera, useBoundingBox);
	};

	// void osgGA::StandardManipulator::setNode(osg::Node * arg1)
	void setNode(osg::Node * arg1) {
		if(_obj.pushFunction("setNode")) {
			_obj.pushArg((osgGA::MultiTouchTrackballManipulator*)this);
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return MultiTouchTrackballManipulator::setNode(arg1);
	};

	// const osg::Node * osgGA::StandardManipulator::getNode() const
	const osg::Node * getNode() const {
		if(_obj.pushFunction("getNode")) {
			_obj.pushArg((osgGA::MultiTouchTrackballManipulator*)this);
			return (_obj.callFunction<osg::Node*>());
		}

		return MultiTouchTrackballManipulator::getNode();
	};

	// osg::Node * osgGA::StandardManipulator::getNode()
	osg::Node * getNode() {
		if(_obj.pushFunction("getNode")) {
			_obj.pushArg((osgGA::MultiTouchTrackballManipulator*)this);
			return (_obj.callFunction<osg::Node*>());
		}

		return MultiTouchTrackballManipulator::getNode();
	};

	// void osgGA::StandardManipulator::setVerticalAxisFixed(bool value)
	void setVerticalAxisFixed(bool value) {
		if(_obj.pushFunction("setVerticalAxisFixed")) {
			_obj.pushArg((osgGA::MultiTouchTrackballManipulator*)this);
			_obj.pushArg(value);
			return (_obj.callFunction<void>());
		}

		return MultiTouchTrackballManipulator::setVerticalAxisFixed(value);
	};

	// void osgGA::StandardManipulator::setAllowThrow(bool allowThrow)
	void setAllowThrow(bool allowThrow) {
		if(_obj.pushFunction("setAllowThrow")) {
			_obj.pushArg((osgGA::MultiTouchTrackballManipulator*)this);
			_obj.pushArg(allowThrow);
			return (_obj.callFunction<void>());
		}

		return MultiTouchTrackballManipulator::setAllowThrow(allowThrow);
	};

	// void osgGA::StandardManipulator::setAnimationTime(const double t)
	void setAnimationTime(const double t) {
		if(_obj.pushFunction("setAnimationTime")) {
			_obj.pushArg((osgGA::MultiTouchTrackballManipulator*)this);
			_obj.pushArg(t);
			return (_obj.callFunction<void>());
		}

		return MultiTouchTrackballManipulator::setAnimationTime(t);
	};

	// void osgGA::StandardManipulator::finishAnimation()
	void finishAnimation() {
		if(_obj.pushFunction("finishAnimation")) {
			_obj.pushArg((osgGA::MultiTouchTrackballManipulator*)this);
			return (_obj.callFunction<void>());
		}

		return MultiTouchTrackballManipulator::finishAnimation();
	};

	// void osgGA::StandardManipulator::home(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2)
	void home(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2) {
		if(_obj.pushFunction("home")) {
			_obj.pushArg((osgGA::MultiTouchTrackballManipulator*)this);
			_obj.pushArg(&arg1);
			_obj.pushArg(&arg2);
			return (_obj.callFunction<void>());
		}

		return MultiTouchTrackballManipulator::home(arg1, arg2);
	};

	// void osgGA::StandardManipulator::home(double arg1)
	void home(double arg1) {
		if(_obj.pushFunction("home")) {
			_obj.pushArg((osgGA::MultiTouchTrackballManipulator*)this);
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return MultiTouchTrackballManipulator::home(arg1);
	};

	// void osgGA::StandardManipulator::init(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2)
	void init(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2) {
		if(_obj.pushFunction("init")) {
			_obj.pushArg((osgGA::MultiTouchTrackballManipulator*)this);
			_obj.pushArg(&arg1);
			_obj.pushArg(&arg2);
			return (_obj.callFunction<void>());
		}

		return MultiTouchTrackballManipulator::init(arg1, arg2);
	};

	// void osgGA::StandardManipulator::getUsage(osg::ApplicationUsage & arg1) const
	void getUsage(osg::ApplicationUsage & arg1) const {
		if(_obj.pushFunction("getUsage")) {
			_obj.pushArg((osgGA::MultiTouchTrackballManipulator*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return MultiTouchTrackballManipulator::getUsage(arg1);
	};

	// void osgGA::OrbitManipulator::setByMatrix(const osg::Matrixd & matrix)
	void setByMatrix(const osg::Matrixd & matrix) {
		if(_obj.pushFunction("setByMatrix")) {
			_obj.pushArg((osgGA::MultiTouchTrackballManipulator*)this);
			_obj.pushArg(&matrix);
			return (_obj.callFunction<void>());
		}

		return MultiTouchTrackballManipulator::setByMatrix(matrix);
	};

	// void osgGA::OrbitManipulator::setByInverseMatrix(const osg::Matrixd & matrix)
	void setByInverseMatrix(const osg::Matrixd & matrix) {
		if(_obj.pushFunction("setByInverseMatrix")) {
			_obj.pushArg((osgGA::MultiTouchTrackballManipulator*)this);
			_obj.pushArg(&matrix);
			return (_obj.callFunction<void>());
		}

		return MultiTouchTrackballManipulator::setByInverseMatrix(matrix);
	};

	// osg::Matrixd osgGA::OrbitManipulator::getMatrix() const
	osg::Matrixd getMatrix() const {
		if(_obj.pushFunction("getMatrix")) {
			_obj.pushArg((osgGA::MultiTouchTrackballManipulator*)this);
			return *(_obj.callFunction<osg::Matrixd*>());
		}

		return MultiTouchTrackballManipulator::getMatrix();
	};

	// osg::Matrixd osgGA::OrbitManipulator::getInverseMatrix() const
	osg::Matrixd getInverseMatrix() const {
		if(_obj.pushFunction("getInverseMatrix")) {
			_obj.pushArg((osgGA::MultiTouchTrackballManipulator*)this);
			return *(_obj.callFunction<osg::Matrixd*>());
		}

		return MultiTouchTrackballManipulator::getInverseMatrix();
	};

	// void osgGA::OrbitManipulator::setTransformation(const osg::Vec3d & eye, const osg::Quat & rotation)
	void setTransformation(const osg::Vec3d & eye, const osg::Quat & rotation) {
		if(_obj.pushFunction("setTransformation")) {
			_obj.pushArg((osgGA::MultiTouchTrackballManipulator*)this);
			_obj.pushArg(&eye);
			_obj.pushArg(&rotation);
			return (_obj.callFunction<void>());
		}

		return MultiTouchTrackballManipulator::setTransformation(eye, rotation);
	};

	// void osgGA::OrbitManipulator::setTransformation(const osg::Vec3d & eye, const osg::Vec3d & center, const osg::Vec3d & up)
	void setTransformation(const osg::Vec3d & eye, const osg::Vec3d & center, const osg::Vec3d & up) {
		if(_obj.pushFunction("setTransformation")) {
			_obj.pushArg((osgGA::MultiTouchTrackballManipulator*)this);
			_obj.pushArg(&eye);
			_obj.pushArg(&center);
			_obj.pushArg(&up);
			return (_obj.callFunction<void>());
		}

		return MultiTouchTrackballManipulator::setTransformation(eye, center, up);
	};

	// void osgGA::OrbitManipulator::getTransformation(osg::Vec3d & eye, osg::Quat & rotation) const
	void getTransformation(osg::Vec3d & eye, osg::Quat & rotation) const {
		if(_obj.pushFunction("getTransformation")) {
			_obj.pushArg((osgGA::MultiTouchTrackballManipulator*)this);
			_obj.pushArg(&eye);
			_obj.pushArg(&rotation);
			return (_obj.callFunction<void>());
		}

		return MultiTouchTrackballManipulator::getTransformation(eye, rotation);
	};

	// void osgGA::OrbitManipulator::getTransformation(osg::Vec3d & eye, osg::Vec3d & center, osg::Vec3d & up) const
	void getTransformation(osg::Vec3d & eye, osg::Vec3d & center, osg::Vec3d & up) const {
		if(_obj.pushFunction("getTransformation")) {
			_obj.pushArg((osgGA::MultiTouchTrackballManipulator*)this);
			_obj.pushArg(&eye);
			_obj.pushArg(&center);
			_obj.pushArg(&up);
			return (_obj.callFunction<void>());
		}

		return MultiTouchTrackballManipulator::getTransformation(eye, center, up);
	};

	// void osgGA::OrbitManipulator::setCenter(const osg::Vec3d & center)
	void setCenter(const osg::Vec3d & center) {
		if(_obj.pushFunction("setCenter")) {
			_obj.pushArg((osgGA::MultiTouchTrackballManipulator*)this);
			_obj.pushArg(&center);
			return (_obj.callFunction<void>());
		}

		return MultiTouchTrackballManipulator::setCenter(center);
	};

	// void osgGA::OrbitManipulator::setRotation(const osg::Quat & rotation)
	void setRotation(const osg::Quat & rotation) {
		if(_obj.pushFunction("setRotation")) {
			_obj.pushArg((osgGA::MultiTouchTrackballManipulator*)this);
			_obj.pushArg(&rotation);
			return (_obj.callFunction<void>());
		}

		return MultiTouchTrackballManipulator::setRotation(rotation);
	};

	// void osgGA::OrbitManipulator::setDistance(double distance)
	void setDistance(double distance) {
		if(_obj.pushFunction("setDistance")) {
			_obj.pushArg((osgGA::MultiTouchTrackballManipulator*)this);
			_obj.pushArg(distance);
			return (_obj.callFunction<void>());
		}

		return MultiTouchTrackballManipulator::setDistance(distance);
	};

	// void osgGA::OrbitManipulator::setTrackballSize(const double & size)
	void setTrackballSize(const double & size) {
		if(_obj.pushFunction("setTrackballSize")) {
			_obj.pushArg((osgGA::MultiTouchTrackballManipulator*)this);
			_obj.pushArg(size);
			return (_obj.callFunction<void>());
		}

		return MultiTouchTrackballManipulator::setTrackballSize(size);
	};

	// void osgGA::OrbitManipulator::setWheelZoomFactor(double wheelZoomFactor)
	void setWheelZoomFactor(double wheelZoomFactor) {
		if(_obj.pushFunction("setWheelZoomFactor")) {
			_obj.pushArg((osgGA::MultiTouchTrackballManipulator*)this);
			_obj.pushArg(wheelZoomFactor);
			return (_obj.callFunction<void>());
		}

		return MultiTouchTrackballManipulator::setWheelZoomFactor(wheelZoomFactor);
	};

	// void osgGA::OrbitManipulator::setMinimumDistance(const double & minimumDistance, bool relativeToModelSize = false)
	void setMinimumDistance(const double & minimumDistance, bool relativeToModelSize = false) {
		if(_obj.pushFunction("setMinimumDistance")) {
			_obj.pushArg((osgGA::MultiTouchTrackballManipulator*)this);
			_obj.pushArg(minimumDistance);
			_obj.pushArg(relativeToModelSize);
			return (_obj.callFunction<void>());
		}

		return MultiTouchTrackballManipulator::setMinimumDistance(minimumDistance, relativeToModelSize);
	};

	// osgUtil::SceneView::FusionDistanceMode osgGA::OrbitManipulator::getFusionDistanceMode() const
	osgUtil::SceneView::FusionDistanceMode getFusionDistanceMode() const {
		if(_obj.pushFunction("getFusionDistanceMode")) {
			_obj.pushArg((osgGA::MultiTouchTrackballManipulator*)this);
			return (osgUtil::SceneView::FusionDistanceMode)(_obj.callFunction<int>());
		}

		return MultiTouchTrackballManipulator::getFusionDistanceMode();
	};

	// float osgGA::OrbitManipulator::getFusionDistanceValue() const
	float getFusionDistanceValue() const {
		if(_obj.pushFunction("getFusionDistanceValue")) {
			_obj.pushArg((osgGA::MultiTouchTrackballManipulator*)this);
			return (_obj.callFunction<float>());
		}

		return MultiTouchTrackballManipulator::getFusionDistanceValue();
	};

	// osg::Object * osgGA::MultiTouchTrackballManipulator::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			_obj.pushArg((osgGA::MultiTouchTrackballManipulator*)this);
			return (_obj.callFunction<osg::Object*>());
		}

		return MultiTouchTrackballManipulator::cloneType();
	};

	// osg::Object * osgGA::MultiTouchTrackballManipulator::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg((osgGA::MultiTouchTrackballManipulator*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return MultiTouchTrackballManipulator::clone(arg1);
	};

	// bool osgGA::MultiTouchTrackballManipulator::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg((osgGA::MultiTouchTrackballManipulator*)this);
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return MultiTouchTrackballManipulator::isSameKindAs(obj);
	};

	// const char * osgGA::MultiTouchTrackballManipulator::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			_obj.pushArg((osgGA::MultiTouchTrackballManipulator*)this);
			return (_obj.callFunction<const char*>());
		}

		return MultiTouchTrackballManipulator::libraryName();
	};

	// const char * osgGA::MultiTouchTrackballManipulator::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			_obj.pushArg((osgGA::MultiTouchTrackballManipulator*)this);
			return (_obj.callFunction<const char*>());
		}

		return MultiTouchTrackballManipulator::className();
	};

	// bool osgGA::MultiTouchTrackballManipulator::handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)
	bool handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us) {
		if(_obj.pushFunction("handle")) {
			_obj.pushArg((osgGA::MultiTouchTrackballManipulator*)this);
			_obj.pushArg(&ea);
			_obj.pushArg(&us);
			return (_obj.callFunction<bool>());
		}

		return MultiTouchTrackballManipulator::handle(ea, us);
	};


	// Protected non-virtual methods:
	// void osgGA::MultiTouchTrackballManipulator::handleMultiTouchDrag(osgGA::GUIEventAdapter::TouchData * now, osgGA::GUIEventAdapter::TouchData * last, const double eventTimeDelta)
	void public_handleMultiTouchDrag(osgGA::GUIEventAdapter::TouchData * now, osgGA::GUIEventAdapter::TouchData * last, const double eventTimeDelta) {
		return osgGA::MultiTouchTrackballManipulator::handleMultiTouchDrag(now, last, eventTimeDelta);
	};

	// void osgGA::OrbitManipulator::trackball(osg::Vec3d & axis, float & angle, float p1x, float p1y, float p2x, float p2y)
	void public_trackball(osg::Vec3d & axis, float & angle, float p1x, float p1y, float p2x, float p2y) {
		return osgGA::OrbitManipulator::trackball(axis, angle, p1x, p1y, p2x, p2y);
	};

	// float osgGA::OrbitManipulator::tb_project_to_sphere(float r, float x, float y)
	float public_tb_project_to_sphere(float r, float x, float y) {
		return osgGA::OrbitManipulator::tb_project_to_sphere(r, x, y);
	};

	// void osgGA::StandardManipulator::addMouseEvent(const osgGA::GUIEventAdapter & ea)
	void public_addMouseEvent(const osgGA::GUIEventAdapter & ea) {
		return osgGA::StandardManipulator::addMouseEvent(ea);
	};

	// void osgGA::StandardManipulator::flushMouseEventStack()
	void public_flushMouseEventStack() {
		return osgGA::StandardManipulator::flushMouseEventStack();
	};

	// float osgGA::StandardManipulator::getThrowScale(const double eventTimeDelta) const
	float public_getThrowScale(const double eventTimeDelta) const {
		return osgGA::StandardManipulator::getThrowScale(eventTimeDelta);
	};

	// void osgGA::StandardManipulator::fixVerticalAxis(osg::Vec3d & eye, osg::Quat & rotation, bool disallowFlipOver)
	void public_fixVerticalAxis(osg::Vec3d & eye, osg::Quat & rotation, bool disallowFlipOver) {
		return osgGA::StandardManipulator::fixVerticalAxis(eye, rotation, disallowFlipOver);
	};

	// bool osgGA::StandardManipulator::getRelativeFlag(int index) const
	bool public_getRelativeFlag(int index) const {
		return osgGA::StandardManipulator::getRelativeFlag(index);
	};

	// void osgGA::StandardManipulator::setRelativeFlag(int index, bool value)
	void public_setRelativeFlag(int index, bool value) {
		return osgGA::StandardManipulator::setRelativeFlag(index, value);
	};

	// static void osgGA::StandardManipulator::rotateYawPitch(osg::Quat & rotation, const double yaw, const double pitch, const osg::Vec3d & localUp = osg::Vec3d (0., 0., 0.))
	static void public_rotateYawPitch(osg::Quat & rotation, const double yaw, const double pitch, const osg::Vec3d & localUp = osg::Vec3d (0., 0., 0.)) {
		return osgGA::StandardManipulator::rotateYawPitch(rotation, yaw, pitch, localUp);
	};

	// static int osgGA::StandardManipulator::allocateRelativeFlag()
	static int public_allocateRelativeFlag() {
		return osgGA::StandardManipulator::allocateRelativeFlag();
	};

	// std::string osgGA::CameraManipulator::getManipulatorName() const
	std::string public_getManipulatorName() const {
		return osgGA::CameraManipulator::getManipulatorName();
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
	inline static bool _lg_typecheck_public_handleMultiTouchDrag(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_trackball(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( lua_type(L,6)!=LUA_TNUMBER ) return false;
		if( lua_type(L,7)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_tb_project_to_sphere(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_addMouseEvent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_flushMouseEventStack(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_getThrowScale(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_fixVerticalAxis(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,80263306) ) return false;
		if( lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_getRelativeFlag(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_setRelativeFlag(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_rotateYawPitch(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,80263306) ) return false;
		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,92303202) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_allocateRelativeFlag(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_getManipulatorName(lua_State *L) {
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
	// void osgGA::MultiTouchTrackballManipulator::public_handleMultiTouchDrag(osgGA::GUIEventAdapter::TouchData * now, osgGA::GUIEventAdapter::TouchData * last, const double eventTimeDelta)
	static int _bind_public_handleMultiTouchDrag(lua_State *L) {
		if (!_lg_typecheck_public_handleMultiTouchDrag(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::MultiTouchTrackballManipulator::public_handleMultiTouchDrag(osgGA::GUIEventAdapter::TouchData * now, osgGA::GUIEventAdapter::TouchData * last, const double eventTimeDelta) function, expected prototype:\nvoid osgGA::MultiTouchTrackballManipulator::public_handleMultiTouchDrag(osgGA::GUIEventAdapter::TouchData * now, osgGA::GUIEventAdapter::TouchData * last, const double eventTimeDelta)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgGA::GUIEventAdapter::TouchData* now=(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter::TouchData >(L,2));
		osgGA::GUIEventAdapter::TouchData* last=(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter::TouchData >(L,3));
		const double eventTimeDelta=(const double)lua_tonumber(L,4);

		wrapper_osgGA_MultiTouchTrackballManipulator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgGA_MultiTouchTrackballManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::MultiTouchTrackballManipulator::public_handleMultiTouchDrag(osgGA::GUIEventAdapter::TouchData *, osgGA::GUIEventAdapter::TouchData *, const double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_handleMultiTouchDrag(now, last, eventTimeDelta);

		return 0;
	}

	// void osgGA::OrbitManipulator::public_trackball(osg::Vec3d & axis, float & angle, float p1x, float p1y, float p2x, float p2y)
	static int _bind_public_trackball(lua_State *L) {
		if (!_lg_typecheck_public_trackball(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::OrbitManipulator::public_trackball(osg::Vec3d & axis, float & angle, float p1x, float p1y, float p2x, float p2y) function, expected prototype:\nvoid osgGA::OrbitManipulator::public_trackball(osg::Vec3d & axis, float & angle, float p1x, float p1y, float p2x, float p2y)\nClass arguments details:\narg 1 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec3d* axis_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !axis_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg axis in osgGA::OrbitManipulator::public_trackball function");
		}
		osg::Vec3d & axis=*axis_ptr;
		float angle=(float)lua_tonumber(L,3);
		float p1x=(float)lua_tonumber(L,4);
		float p1y=(float)lua_tonumber(L,5);
		float p2x=(float)lua_tonumber(L,6);
		float p2y=(float)lua_tonumber(L,7);

		wrapper_osgGA_MultiTouchTrackballManipulator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgGA_MultiTouchTrackballManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::OrbitManipulator::public_trackball(osg::Vec3d &, float &, float, float, float, float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_trackball(axis, angle, p1x, p1y, p2x, p2y);

		lua_pushnumber(L,angle);
		return 1;
	}

	// float osgGA::OrbitManipulator::public_tb_project_to_sphere(float r, float x, float y)
	static int _bind_public_tb_project_to_sphere(lua_State *L) {
		if (!_lg_typecheck_public_tb_project_to_sphere(L)) {
			luaL_error(L, "luna typecheck failed in float osgGA::OrbitManipulator::public_tb_project_to_sphere(float r, float x, float y) function, expected prototype:\nfloat osgGA::OrbitManipulator::public_tb_project_to_sphere(float r, float x, float y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float r=(float)lua_tonumber(L,2);
		float x=(float)lua_tonumber(L,3);
		float y=(float)lua_tonumber(L,4);

		wrapper_osgGA_MultiTouchTrackballManipulator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgGA_MultiTouchTrackballManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgGA::OrbitManipulator::public_tb_project_to_sphere(float, float, float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->public_tb_project_to_sphere(r, x, y);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::StandardManipulator::public_addMouseEvent(const osgGA::GUIEventAdapter & ea)
	static int _bind_public_addMouseEvent(lua_State *L) {
		if (!_lg_typecheck_public_addMouseEvent(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::StandardManipulator::public_addMouseEvent(const osgGA::GUIEventAdapter & ea) function, expected prototype:\nvoid osgGA::StandardManipulator::public_addMouseEvent(const osgGA::GUIEventAdapter & ea)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgGA::GUIEventAdapter* ea_ptr=(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,2));
		if( !ea_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ea in osgGA::StandardManipulator::public_addMouseEvent function");
		}
		const osgGA::GUIEventAdapter & ea=*ea_ptr;

		wrapper_osgGA_MultiTouchTrackballManipulator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgGA_MultiTouchTrackballManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::StandardManipulator::public_addMouseEvent(const osgGA::GUIEventAdapter &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_addMouseEvent(ea);

		return 0;
	}

	// void osgGA::StandardManipulator::public_flushMouseEventStack()
	static int _bind_public_flushMouseEventStack(lua_State *L) {
		if (!_lg_typecheck_public_flushMouseEventStack(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::StandardManipulator::public_flushMouseEventStack() function, expected prototype:\nvoid osgGA::StandardManipulator::public_flushMouseEventStack()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wrapper_osgGA_MultiTouchTrackballManipulator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgGA_MultiTouchTrackballManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::StandardManipulator::public_flushMouseEventStack(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_flushMouseEventStack();

		return 0;
	}

	// float osgGA::StandardManipulator::public_getThrowScale(const double eventTimeDelta) const
	static int _bind_public_getThrowScale(lua_State *L) {
		if (!_lg_typecheck_public_getThrowScale(L)) {
			luaL_error(L, "luna typecheck failed in float osgGA::StandardManipulator::public_getThrowScale(const double eventTimeDelta) const function, expected prototype:\nfloat osgGA::StandardManipulator::public_getThrowScale(const double eventTimeDelta) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const double eventTimeDelta=(const double)lua_tonumber(L,2);

		wrapper_osgGA_MultiTouchTrackballManipulator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgGA_MultiTouchTrackballManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgGA::StandardManipulator::public_getThrowScale(const double) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->public_getThrowScale(eventTimeDelta);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::StandardManipulator::public_fixVerticalAxis(osg::Vec3d & eye, osg::Quat & rotation, bool disallowFlipOver)
	static int _bind_public_fixVerticalAxis(lua_State *L) {
		if (!_lg_typecheck_public_fixVerticalAxis(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::StandardManipulator::public_fixVerticalAxis(osg::Vec3d & eye, osg::Quat & rotation, bool disallowFlipOver) function, expected prototype:\nvoid osgGA::StandardManipulator::public_fixVerticalAxis(osg::Vec3d & eye, osg::Quat & rotation, bool disallowFlipOver)\nClass arguments details:\narg 1 ID = 92303202\narg 2 ID = 80263306\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec3d* eye_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !eye_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg eye in osgGA::StandardManipulator::public_fixVerticalAxis function");
		}
		osg::Vec3d & eye=*eye_ptr;
		osg::Quat* rotation_ptr=(Luna< osg::Quat >::check(L,3));
		if( !rotation_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rotation in osgGA::StandardManipulator::public_fixVerticalAxis function");
		}
		osg::Quat & rotation=*rotation_ptr;
		bool disallowFlipOver=(bool)(lua_toboolean(L,4)==1);

		wrapper_osgGA_MultiTouchTrackballManipulator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgGA_MultiTouchTrackballManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::StandardManipulator::public_fixVerticalAxis(osg::Vec3d &, osg::Quat &, bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_fixVerticalAxis(eye, rotation, disallowFlipOver);

		return 0;
	}

	// bool osgGA::StandardManipulator::public_getRelativeFlag(int index) const
	static int _bind_public_getRelativeFlag(lua_State *L) {
		if (!_lg_typecheck_public_getRelativeFlag(L)) {
			luaL_error(L, "luna typecheck failed in bool osgGA::StandardManipulator::public_getRelativeFlag(int index) const function, expected prototype:\nbool osgGA::StandardManipulator::public_getRelativeFlag(int index) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);

		wrapper_osgGA_MultiTouchTrackballManipulator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgGA_MultiTouchTrackballManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgGA::StandardManipulator::public_getRelativeFlag(int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->public_getRelativeFlag(index);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgGA::StandardManipulator::public_setRelativeFlag(int index, bool value)
	static int _bind_public_setRelativeFlag(lua_State *L) {
		if (!_lg_typecheck_public_setRelativeFlag(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::StandardManipulator::public_setRelativeFlag(int index, bool value) function, expected prototype:\nvoid osgGA::StandardManipulator::public_setRelativeFlag(int index, bool value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);
		bool value=(bool)(lua_toboolean(L,3)==1);

		wrapper_osgGA_MultiTouchTrackballManipulator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgGA_MultiTouchTrackballManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::StandardManipulator::public_setRelativeFlag(int, bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_setRelativeFlag(index, value);

		return 0;
	}

	// static void osgGA::StandardManipulator::public_rotateYawPitch(osg::Quat & rotation, const double yaw, const double pitch, const osg::Vec3d & localUp = osg::Vec3d (0., 0., 0.))
	static int _bind_public_rotateYawPitch(lua_State *L) {
		if (!_lg_typecheck_public_rotateYawPitch(L)) {
			luaL_error(L, "luna typecheck failed in static void osgGA::StandardManipulator::public_rotateYawPitch(osg::Quat & rotation, const double yaw, const double pitch, const osg::Vec3d & localUp = osg::Vec3d (0., 0., 0.)) function, expected prototype:\nstatic void osgGA::StandardManipulator::public_rotateYawPitch(osg::Quat & rotation, const double yaw, const double pitch, const osg::Vec3d & localUp = osg::Vec3d (0., 0., 0.))\nClass arguments details:\narg 1 ID = 80263306\narg 4 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::Quat* rotation_ptr=(Luna< osg::Quat >::check(L,1));
		if( !rotation_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rotation in osgGA::StandardManipulator::public_rotateYawPitch function");
		}
		osg::Quat & rotation=*rotation_ptr;
		const double yaw=(const double)lua_tonumber(L,2);
		const double pitch=(const double)lua_tonumber(L,3);
		const osg::Vec3d* localUp_ptr=luatop>3 ? (Luna< osg::Vec3d >::check(L,4)) : NULL;
		if( luatop>3 && !localUp_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg localUp in osgGA::StandardManipulator::public_rotateYawPitch function");
		}
		const osg::Vec3d & localUp=luatop>3 ? *localUp_ptr : (const osg::Vec3d&)osg::Vec3d (0., 0., 0.);

		wrapper_osgGA_MultiTouchTrackballManipulator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgGA_MultiTouchTrackballManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call static void osgGA::StandardManipulator::public_rotateYawPitch(osg::Quat &, const double, const double, const osg::Vec3d &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_rotateYawPitch(rotation, yaw, pitch, localUp);

		return 0;
	}

	// static int osgGA::StandardManipulator::public_allocateRelativeFlag()
	static int _bind_public_allocateRelativeFlag(lua_State *L) {
		if (!_lg_typecheck_public_allocateRelativeFlag(L)) {
			luaL_error(L, "luna typecheck failed in static int osgGA::StandardManipulator::public_allocateRelativeFlag() function, expected prototype:\nstatic int osgGA::StandardManipulator::public_allocateRelativeFlag()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wrapper_osgGA_MultiTouchTrackballManipulator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgGA_MultiTouchTrackballManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call static int osgGA::StandardManipulator::public_allocateRelativeFlag(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->public_allocateRelativeFlag();
		lua_pushnumber(L,lret);

		return 1;
	}

	// std::string osgGA::CameraManipulator::public_getManipulatorName() const
	static int _bind_public_getManipulatorName(lua_State *L) {
		if (!_lg_typecheck_public_getManipulatorName(L)) {
			luaL_error(L, "luna typecheck failed in std::string osgGA::CameraManipulator::public_getManipulatorName() const function, expected prototype:\nstd::string osgGA::CameraManipulator::public_getManipulatorName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wrapper_osgGA_MultiTouchTrackballManipulator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgGA_MultiTouchTrackballManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call std::string osgGA::CameraManipulator::public_getManipulatorName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		std::string lret = self->public_getManipulatorName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const
	static int _bind_public_signalObserversAndDelete(lua_State *L) {
		if (!_lg_typecheck_public_signalObserversAndDelete(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const function, expected prototype:\nvoid osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool signalDelete=(bool)(lua_toboolean(L,2)==1);
		bool doDelete=(bool)(lua_toboolean(L,3)==1);

		wrapper_osgGA_MultiTouchTrackballManipulator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgGA_MultiTouchTrackballManipulator >(L,1);
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


		wrapper_osgGA_MultiTouchTrackballManipulator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgGA_MultiTouchTrackballManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_deleteUsingDeleteHandler() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_deleteUsingDeleteHandler();

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"handleMultiTouchDrag",_bind_public_handleMultiTouchDrag},
		{"trackball",_bind_public_trackball},
		{"tb_project_to_sphere",_bind_public_tb_project_to_sphere},
		{"addMouseEvent",_bind_public_addMouseEvent},
		{"flushMouseEventStack",_bind_public_flushMouseEventStack},
		{"getThrowScale",_bind_public_getThrowScale},
		{"fixVerticalAxis",_bind_public_fixVerticalAxis},
		{"getRelativeFlag",_bind_public_getRelativeFlag},
		{"setRelativeFlag",_bind_public_setRelativeFlag},
		{"rotateYawPitch",_bind_public_rotateYawPitch},
		{"allocateRelativeFlag",_bind_public_allocateRelativeFlag},
		{"getManipulatorName",_bind_public_getManipulatorName},
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


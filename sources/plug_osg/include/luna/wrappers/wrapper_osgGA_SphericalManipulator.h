#ifndef _WRAPPERS_WRAPPER_OSGGA_SPHERICALMANIPULATOR_H_
#define _WRAPPERS_WRAPPER_OSGGA_SPHERICALMANIPULATOR_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <osgGA/SphericalManipulator>

class wrapper_osgGA_SphericalManipulator : public osgGA::SphericalManipulator, public luna_wrapper_base {

public:
		

	~wrapper_osgGA_SphericalManipulator() {
		logDEBUG3("Calling delete function for wrapper osgGA_SphericalManipulator");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osgGA::SphericalManipulator*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgGA_SphericalManipulator(lua_State* L, lua_Table* dum) 
		: osgGA::SphericalManipulator(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osgGA::SphericalManipulator*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void osg::Object::setThreadSafeRefUnref(bool threadSafe)
	void setThreadSafeRefUnref(bool threadSafe) {
		if(_obj.pushFunction("setThreadSafeRefUnref")) {
			_obj.pushArg((osgGA::SphericalManipulator*)this);
			_obj.pushArg(threadSafe);
			return (_obj.callFunction<void>());
		}

		return SphericalManipulator::setThreadSafeRefUnref(threadSafe);
	};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg((osgGA::SphericalManipulator*)this);
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return SphericalManipulator::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			_obj.pushArg((osgGA::SphericalManipulator*)this);
			return (_obj.callFunction<void>());
		}

		return SphericalManipulator::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg((osgGA::SphericalManipulator*)this);
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return SphericalManipulator::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			_obj.pushArg((osgGA::SphericalManipulator*)this);
			return (_obj.callFunction<osg::Referenced*>());
		}

		return SphericalManipulator::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			_obj.pushArg((osgGA::SphericalManipulator*)this);
			return (_obj.callFunction<osg::Referenced*>());
		}

		return SphericalManipulator::getUserData();
	};

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg((osgGA::SphericalManipulator*)this);
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return SphericalManipulator::releaseGLObjects(arg1);
	};

	// osg::Object * osgGA::GUIEventHandler::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			_obj.pushArg((osgGA::SphericalManipulator*)this);
			return (_obj.callFunction<osg::Object*>());
		}

		return SphericalManipulator::cloneType();
	};

	// osg::Object * osgGA::GUIEventHandler::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg((osgGA::SphericalManipulator*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return SphericalManipulator::clone(arg1);
	};

	// bool osgGA::GUIEventHandler::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg((osgGA::SphericalManipulator*)this);
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return SphericalManipulator::isSameKindAs(obj);
	};

	// const char * osgGA::GUIEventHandler::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			_obj.pushArg((osgGA::SphericalManipulator*)this);
			return (_obj.callFunction<const char*>());
		}

		return SphericalManipulator::libraryName();
	};

	// void osgGA::GUIEventHandler::event(osg::NodeVisitor * nv, osg::Drawable * drawable)
	void event(osg::NodeVisitor * nv, osg::Drawable * drawable) {
		if(_obj.pushFunction("event")) {
			_obj.pushArg((osgGA::SphericalManipulator*)this);
			_obj.pushArg(nv);
			_obj.pushArg(drawable);
			return (_obj.callFunction<void>());
		}

		return SphericalManipulator::event(nv, drawable);
	};

	// void osgGA::GUIEventHandler::operator()(osg::Node * node, osg::NodeVisitor * nv)
	void operator()(osg::Node * node, osg::NodeVisitor * nv) {
		if(_obj.pushFunction("op_call")) {
			_obj.pushArg((osgGA::SphericalManipulator*)this);
			_obj.pushArg(node);
			_obj.pushArg(nv);
			return (_obj.callFunction<void>());
		}

		return SphericalManipulator::operator()(node, nv);
	};

	// void osgGA::CameraManipulator::setCoordinateFrameCallback(osgGA::CameraManipulator::CoordinateFrameCallback * cb)
	void setCoordinateFrameCallback(osgGA::CameraManipulator::CoordinateFrameCallback * cb) {
		if(_obj.pushFunction("setCoordinateFrameCallback")) {
			_obj.pushArg((osgGA::SphericalManipulator*)this);
			_obj.pushArg(cb);
			return (_obj.callFunction<void>());
		}

		return SphericalManipulator::setCoordinateFrameCallback(cb);
	};

	// void osgGA::CameraManipulator::updateCamera(osg::Camera & camera)
	void updateCamera(osg::Camera & camera) {
		if(_obj.pushFunction("updateCamera")) {
			_obj.pushArg((osgGA::SphericalManipulator*)this);
			_obj.pushArg(&camera);
			return (_obj.callFunction<void>());
		}

		return SphericalManipulator::updateCamera(camera);
	};

	// void osgGA::CameraManipulator::setHomePosition(const osg::Vec3d & eye, const osg::Vec3d & center, const osg::Vec3d & up, bool autoComputeHomePosition = false)
	void setHomePosition(const osg::Vec3d & eye, const osg::Vec3d & center, const osg::Vec3d & up, bool autoComputeHomePosition = false) {
		if(_obj.pushFunction("setHomePosition")) {
			_obj.pushArg((osgGA::SphericalManipulator*)this);
			_obj.pushArg(&eye);
			_obj.pushArg(&center);
			_obj.pushArg(&up);
			_obj.pushArg(autoComputeHomePosition);
			return (_obj.callFunction<void>());
		}

		return SphericalManipulator::setHomePosition(eye, center, up, autoComputeHomePosition);
	};

	// void osgGA::CameraManipulator::getHomePosition(osg::Vec3d & eye, osg::Vec3d & center, osg::Vec3d & up) const
	void getHomePosition(osg::Vec3d & eye, osg::Vec3d & center, osg::Vec3d & up) const {
		if(_obj.pushFunction("getHomePosition")) {
			_obj.pushArg((osgGA::SphericalManipulator*)this);
			_obj.pushArg(&eye);
			_obj.pushArg(&center);
			_obj.pushArg(&up);
			return (_obj.callFunction<void>());
		}

		return SphericalManipulator::getHomePosition(eye, center, up);
	};

	// void osgGA::CameraManipulator::setAutoComputeHomePosition(bool flag)
	void setAutoComputeHomePosition(bool flag) {
		if(_obj.pushFunction("setAutoComputeHomePosition")) {
			_obj.pushArg((osgGA::SphericalManipulator*)this);
			_obj.pushArg(flag);
			return (_obj.callFunction<void>());
		}

		return SphericalManipulator::setAutoComputeHomePosition(flag);
	};

	// const char * osgGA::SphericalManipulator::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			_obj.pushArg((osgGA::SphericalManipulator*)this);
			return (_obj.callFunction<const char*>());
		}

		return SphericalManipulator::className();
	};

	// void osgGA::SphericalManipulator::setByMatrix(const osg::Matrixd & matrix)
	void setByMatrix(const osg::Matrixd & matrix) {
		if(_obj.pushFunction("setByMatrix")) {
			_obj.pushArg((osgGA::SphericalManipulator*)this);
			_obj.pushArg(&matrix);
			return (_obj.callFunction<void>());
		}

		return SphericalManipulator::setByMatrix(matrix);
	};

	// void osgGA::SphericalManipulator::setByInverseMatrix(const osg::Matrixd & matrix)
	void setByInverseMatrix(const osg::Matrixd & matrix) {
		if(_obj.pushFunction("setByInverseMatrix")) {
			_obj.pushArg((osgGA::SphericalManipulator*)this);
			_obj.pushArg(&matrix);
			return (_obj.callFunction<void>());
		}

		return SphericalManipulator::setByInverseMatrix(matrix);
	};

	// osg::Matrixd osgGA::SphericalManipulator::getMatrix() const
	osg::Matrixd getMatrix() const {
		if(_obj.pushFunction("getMatrix")) {
			_obj.pushArg((osgGA::SphericalManipulator*)this);
			return *(_obj.callFunction<osg::Matrixd*>());
		}

		return SphericalManipulator::getMatrix();
	};

	// osg::Matrixd osgGA::SphericalManipulator::getInverseMatrix() const
	osg::Matrixd getInverseMatrix() const {
		if(_obj.pushFunction("getInverseMatrix")) {
			_obj.pushArg((osgGA::SphericalManipulator*)this);
			return *(_obj.callFunction<osg::Matrixd*>());
		}

		return SphericalManipulator::getInverseMatrix();
	};

	// osgUtil::SceneView::FusionDistanceMode osgGA::SphericalManipulator::getFusionDistanceMode() const
	osgUtil::SceneView::FusionDistanceMode getFusionDistanceMode() const {
		if(_obj.pushFunction("getFusionDistanceMode")) {
			_obj.pushArg((osgGA::SphericalManipulator*)this);
			return (osgUtil::SceneView::FusionDistanceMode)(_obj.callFunction<int>());
		}

		return SphericalManipulator::getFusionDistanceMode();
	};

	// float osgGA::SphericalManipulator::getFusionDistanceValue() const
	float getFusionDistanceValue() const {
		if(_obj.pushFunction("getFusionDistanceValue")) {
			_obj.pushArg((osgGA::SphericalManipulator*)this);
			return (_obj.callFunction<float>());
		}

		return SphericalManipulator::getFusionDistanceValue();
	};

	// void osgGA::SphericalManipulator::setNode(osg::Node * arg1)
	void setNode(osg::Node * arg1) {
		if(_obj.pushFunction("setNode")) {
			_obj.pushArg((osgGA::SphericalManipulator*)this);
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return SphericalManipulator::setNode(arg1);
	};

	// const osg::Node * osgGA::SphericalManipulator::getNode() const
	const osg::Node * getNode() const {
		if(_obj.pushFunction("getNode")) {
			_obj.pushArg((osgGA::SphericalManipulator*)this);
			return (_obj.callFunction<osg::Node*>());
		}

		return SphericalManipulator::getNode();
	};

	// osg::Node * osgGA::SphericalManipulator::getNode()
	osg::Node * getNode() {
		if(_obj.pushFunction("getNode")) {
			_obj.pushArg((osgGA::SphericalManipulator*)this);
			return (_obj.callFunction<osg::Node*>());
		}

		return SphericalManipulator::getNode();
	};

	// void osgGA::SphericalManipulator::home(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)
	void home(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us) {
		if(_obj.pushFunction("home")) {
			_obj.pushArg((osgGA::SphericalManipulator*)this);
			_obj.pushArg(&ea);
			_obj.pushArg(&us);
			return (_obj.callFunction<void>());
		}

		return SphericalManipulator::home(ea, us);
	};

	// void osgGA::SphericalManipulator::home(double arg1)
	void home(double arg1) {
		if(_obj.pushFunction("home")) {
			_obj.pushArg((osgGA::SphericalManipulator*)this);
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return SphericalManipulator::home(arg1);
	};

	// void osgGA::SphericalManipulator::init(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)
	void init(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us) {
		if(_obj.pushFunction("init")) {
			_obj.pushArg((osgGA::SphericalManipulator*)this);
			_obj.pushArg(&ea);
			_obj.pushArg(&us);
			return (_obj.callFunction<void>());
		}

		return SphericalManipulator::init(ea, us);
	};

	// bool osgGA::SphericalManipulator::handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us)
	bool handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & us) {
		if(_obj.pushFunction("handle")) {
			_obj.pushArg((osgGA::SphericalManipulator*)this);
			_obj.pushArg(&ea);
			_obj.pushArg(&us);
			return (_obj.callFunction<bool>());
		}

		return SphericalManipulator::handle(ea, us);
	};

	// void osgGA::SphericalManipulator::computeHomePosition()
	void computeHomePosition() {
		if(_obj.pushFunction("computeHomePosition")) {
			_obj.pushArg((osgGA::SphericalManipulator*)this);
			return (_obj.callFunction<void>());
		}

		return SphericalManipulator::computeHomePosition();
	};

	// void osgGA::SphericalManipulator::getUsage(osg::ApplicationUsage & usage) const
	void getUsage(osg::ApplicationUsage & usage) const {
		if(_obj.pushFunction("getUsage")) {
			_obj.pushArg((osgGA::SphericalManipulator*)this);
			_obj.pushArg(&usage);
			return (_obj.callFunction<void>());
		}

		return SphericalManipulator::getUsage(usage);
	};


	// Protected non-virtual methods:
	// void osgGA::SphericalManipulator::flushMouseEventStack()
	void public_flushMouseEventStack() {
		return osgGA::SphericalManipulator::flushMouseEventStack();
	};

	// void osgGA::SphericalManipulator::addMouseEvent(const osgGA::GUIEventAdapter & ea)
	void public_addMouseEvent(const osgGA::GUIEventAdapter & ea) {
		return osgGA::SphericalManipulator::addMouseEvent(ea);
	};

	// bool osgGA::SphericalManipulator::calcMovement()
	bool public_calcMovement() {
		return osgGA::SphericalManipulator::calcMovement();
	};

	// bool osgGA::SphericalManipulator::isMouseMoving()
	bool public_isMouseMoving() {
		return osgGA::SphericalManipulator::isMouseMoving();
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
	inline static bool _lg_typecheck_public_flushMouseEventStack(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_addMouseEvent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_calcMovement(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_isMouseMoving(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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
	// void osgGA::SphericalManipulator::public_flushMouseEventStack()
	static int _bind_public_flushMouseEventStack(lua_State *L) {
		if (!_lg_typecheck_public_flushMouseEventStack(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::SphericalManipulator::public_flushMouseEventStack() function, expected prototype:\nvoid osgGA::SphericalManipulator::public_flushMouseEventStack()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wrapper_osgGA_SphericalManipulator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgGA_SphericalManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::SphericalManipulator::public_flushMouseEventStack(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_flushMouseEventStack();

		return 0;
	}

	// void osgGA::SphericalManipulator::public_addMouseEvent(const osgGA::GUIEventAdapter & ea)
	static int _bind_public_addMouseEvent(lua_State *L) {
		if (!_lg_typecheck_public_addMouseEvent(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::SphericalManipulator::public_addMouseEvent(const osgGA::GUIEventAdapter & ea) function, expected prototype:\nvoid osgGA::SphericalManipulator::public_addMouseEvent(const osgGA::GUIEventAdapter & ea)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgGA::GUIEventAdapter* ea_ptr=(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,2));
		if( !ea_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ea in osgGA::SphericalManipulator::public_addMouseEvent function");
		}
		const osgGA::GUIEventAdapter & ea=*ea_ptr;

		wrapper_osgGA_SphericalManipulator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgGA_SphericalManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::SphericalManipulator::public_addMouseEvent(const osgGA::GUIEventAdapter &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_addMouseEvent(ea);

		return 0;
	}

	// bool osgGA::SphericalManipulator::public_calcMovement()
	static int _bind_public_calcMovement(lua_State *L) {
		if (!_lg_typecheck_public_calcMovement(L)) {
			luaL_error(L, "luna typecheck failed in bool osgGA::SphericalManipulator::public_calcMovement() function, expected prototype:\nbool osgGA::SphericalManipulator::public_calcMovement()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wrapper_osgGA_SphericalManipulator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgGA_SphericalManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgGA::SphericalManipulator::public_calcMovement(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->public_calcMovement();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgGA::SphericalManipulator::public_isMouseMoving()
	static int _bind_public_isMouseMoving(lua_State *L) {
		if (!_lg_typecheck_public_isMouseMoving(L)) {
			luaL_error(L, "luna typecheck failed in bool osgGA::SphericalManipulator::public_isMouseMoving() function, expected prototype:\nbool osgGA::SphericalManipulator::public_isMouseMoving()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wrapper_osgGA_SphericalManipulator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgGA_SphericalManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgGA::SphericalManipulator::public_isMouseMoving(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->public_isMouseMoving();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// std::string osgGA::CameraManipulator::public_getManipulatorName() const
	static int _bind_public_getManipulatorName(lua_State *L) {
		if (!_lg_typecheck_public_getManipulatorName(L)) {
			luaL_error(L, "luna typecheck failed in std::string osgGA::CameraManipulator::public_getManipulatorName() const function, expected prototype:\nstd::string osgGA::CameraManipulator::public_getManipulatorName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wrapper_osgGA_SphericalManipulator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgGA_SphericalManipulator >(L,1);
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

		wrapper_osgGA_SphericalManipulator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgGA_SphericalManipulator >(L,1);
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


		wrapper_osgGA_SphericalManipulator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgGA_SphericalManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_deleteUsingDeleteHandler() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_deleteUsingDeleteHandler();

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"flushMouseEventStack",_bind_public_flushMouseEventStack},
		{"addMouseEvent",_bind_public_addMouseEvent},
		{"calcMovement",_bind_public_calcMovement},
		{"isMouseMoving",_bind_public_isMouseMoving},
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


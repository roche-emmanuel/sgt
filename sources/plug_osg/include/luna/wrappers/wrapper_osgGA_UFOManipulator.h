#ifndef _WRAPPERS_WRAPPER_OSGGA_UFOMANIPULATOR_H_
#define _WRAPPERS_WRAPPER_OSGGA_UFOMANIPULATOR_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <osgGA/UFOManipulator>

class wrapper_osgGA_UFOManipulator : public osgGA::UFOManipulator, public luna_wrapper_base {

public:
		

	~wrapper_osgGA_UFOManipulator() {
		logDEBUG3("Calling delete function for wrapper osgGA_UFOManipulator");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osgGA::UFOManipulator*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgGA_UFOManipulator(lua_State* L, lua_Table* dum) 
		: osgGA::UFOManipulator(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osgGA::UFOManipulator*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void osg::Object::setThreadSafeRefUnref(bool threadSafe)
	void setThreadSafeRefUnref(bool threadSafe) {
		if(_obj.pushFunction("setThreadSafeRefUnref")) {
			_obj.pushArg((osgGA::UFOManipulator*)this);
			_obj.pushArg(threadSafe);
			return (_obj.callFunction<void>());
		}

		return UFOManipulator::setThreadSafeRefUnref(threadSafe);
	};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg((osgGA::UFOManipulator*)this);
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return UFOManipulator::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			_obj.pushArg((osgGA::UFOManipulator*)this);
			return (_obj.callFunction<void>());
		}

		return UFOManipulator::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg((osgGA::UFOManipulator*)this);
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return UFOManipulator::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			_obj.pushArg((osgGA::UFOManipulator*)this);
			return (_obj.callFunction<osg::Referenced*>());
		}

		return UFOManipulator::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			_obj.pushArg((osgGA::UFOManipulator*)this);
			return (_obj.callFunction<osg::Referenced*>());
		}

		return UFOManipulator::getUserData();
	};

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg((osgGA::UFOManipulator*)this);
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return UFOManipulator::releaseGLObjects(arg1);
	};

	// osg::Object * osgGA::GUIEventHandler::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			_obj.pushArg((osgGA::UFOManipulator*)this);
			return (_obj.callFunction<osg::Object*>());
		}

		return UFOManipulator::cloneType();
	};

	// osg::Object * osgGA::GUIEventHandler::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg((osgGA::UFOManipulator*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return UFOManipulator::clone(arg1);
	};

	// bool osgGA::GUIEventHandler::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg((osgGA::UFOManipulator*)this);
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return UFOManipulator::isSameKindAs(obj);
	};

	// const char * osgGA::GUIEventHandler::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			_obj.pushArg((osgGA::UFOManipulator*)this);
			return (_obj.callFunction<const char*>());
		}

		return UFOManipulator::libraryName();
	};

	// void osgGA::GUIEventHandler::event(osg::NodeVisitor * nv, osg::Drawable * drawable)
	void event(osg::NodeVisitor * nv, osg::Drawable * drawable) {
		if(_obj.pushFunction("event")) {
			_obj.pushArg((osgGA::UFOManipulator*)this);
			_obj.pushArg(nv);
			_obj.pushArg(drawable);
			return (_obj.callFunction<void>());
		}

		return UFOManipulator::event(nv, drawable);
	};

	// void osgGA::GUIEventHandler::operator()(osg::Node * node, osg::NodeVisitor * nv)
	void operator()(osg::Node * node, osg::NodeVisitor * nv) {
		if(_obj.pushFunction("op_call")) {
			_obj.pushArg((osgGA::UFOManipulator*)this);
			_obj.pushArg(node);
			_obj.pushArg(nv);
			return (_obj.callFunction<void>());
		}

		return UFOManipulator::operator()(node, nv);
	};

	// void osgGA::CameraManipulator::setCoordinateFrameCallback(osgGA::CameraManipulator::CoordinateFrameCallback * cb)
	void setCoordinateFrameCallback(osgGA::CameraManipulator::CoordinateFrameCallback * cb) {
		if(_obj.pushFunction("setCoordinateFrameCallback")) {
			_obj.pushArg((osgGA::UFOManipulator*)this);
			_obj.pushArg(cb);
			return (_obj.callFunction<void>());
		}

		return UFOManipulator::setCoordinateFrameCallback(cb);
	};

	// void osgGA::CameraManipulator::updateCamera(osg::Camera & camera)
	void updateCamera(osg::Camera & camera) {
		if(_obj.pushFunction("updateCamera")) {
			_obj.pushArg((osgGA::UFOManipulator*)this);
			_obj.pushArg(&camera);
			return (_obj.callFunction<void>());
		}

		return UFOManipulator::updateCamera(camera);
	};

	// osgUtil::SceneView::FusionDistanceMode osgGA::CameraManipulator::getFusionDistanceMode() const
	osgUtil::SceneView::FusionDistanceMode getFusionDistanceMode() const {
		if(_obj.pushFunction("getFusionDistanceMode")) {
			_obj.pushArg((osgGA::UFOManipulator*)this);
			return (osgUtil::SceneView::FusionDistanceMode)(_obj.callFunction<int>());
		}

		return UFOManipulator::getFusionDistanceMode();
	};

	// float osgGA::CameraManipulator::getFusionDistanceValue() const
	float getFusionDistanceValue() const {
		if(_obj.pushFunction("getFusionDistanceValue")) {
			_obj.pushArg((osgGA::UFOManipulator*)this);
			return (_obj.callFunction<float>());
		}

		return UFOManipulator::getFusionDistanceValue();
	};

	// void osgGA::CameraManipulator::setHomePosition(const osg::Vec3d & eye, const osg::Vec3d & center, const osg::Vec3d & up, bool autoComputeHomePosition = false)
	void setHomePosition(const osg::Vec3d & eye, const osg::Vec3d & center, const osg::Vec3d & up, bool autoComputeHomePosition = false) {
		if(_obj.pushFunction("setHomePosition")) {
			_obj.pushArg((osgGA::UFOManipulator*)this);
			_obj.pushArg(&eye);
			_obj.pushArg(&center);
			_obj.pushArg(&up);
			_obj.pushArg(autoComputeHomePosition);
			return (_obj.callFunction<void>());
		}

		return UFOManipulator::setHomePosition(eye, center, up, autoComputeHomePosition);
	};

	// void osgGA::CameraManipulator::getHomePosition(osg::Vec3d & eye, osg::Vec3d & center, osg::Vec3d & up) const
	void getHomePosition(osg::Vec3d & eye, osg::Vec3d & center, osg::Vec3d & up) const {
		if(_obj.pushFunction("getHomePosition")) {
			_obj.pushArg((osgGA::UFOManipulator*)this);
			_obj.pushArg(&eye);
			_obj.pushArg(&center);
			_obj.pushArg(&up);
			return (_obj.callFunction<void>());
		}

		return UFOManipulator::getHomePosition(eye, center, up);
	};

	// void osgGA::CameraManipulator::setAutoComputeHomePosition(bool flag)
	void setAutoComputeHomePosition(bool flag) {
		if(_obj.pushFunction("setAutoComputeHomePosition")) {
			_obj.pushArg((osgGA::UFOManipulator*)this);
			_obj.pushArg(flag);
			return (_obj.callFunction<void>());
		}

		return UFOManipulator::setAutoComputeHomePosition(flag);
	};

	// const char * osgGA::UFOManipulator::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			_obj.pushArg((osgGA::UFOManipulator*)this);
			return (_obj.callFunction<const char*>());
		}

		return UFOManipulator::className();
	};

	// void osgGA::UFOManipulator::setByMatrix(const osg::Matrixd & matrix)
	void setByMatrix(const osg::Matrixd & matrix) {
		if(_obj.pushFunction("setByMatrix")) {
			_obj.pushArg((osgGA::UFOManipulator*)this);
			_obj.pushArg(&matrix);
			return (_obj.callFunction<void>());
		}

		return UFOManipulator::setByMatrix(matrix);
	};

	// void osgGA::UFOManipulator::setByInverseMatrix(const osg::Matrixd & invmat)
	void setByInverseMatrix(const osg::Matrixd & invmat) {
		if(_obj.pushFunction("setByInverseMatrix")) {
			_obj.pushArg((osgGA::UFOManipulator*)this);
			_obj.pushArg(&invmat);
			return (_obj.callFunction<void>());
		}

		return UFOManipulator::setByInverseMatrix(invmat);
	};

	// osg::Matrixd osgGA::UFOManipulator::getMatrix() const
	osg::Matrixd getMatrix() const {
		if(_obj.pushFunction("getMatrix")) {
			_obj.pushArg((osgGA::UFOManipulator*)this);
			return *(_obj.callFunction<osg::Matrixd*>());
		}

		return UFOManipulator::getMatrix();
	};

	// osg::Matrixd osgGA::UFOManipulator::getInverseMatrix() const
	osg::Matrixd getInverseMatrix() const {
		if(_obj.pushFunction("getInverseMatrix")) {
			_obj.pushArg((osgGA::UFOManipulator*)this);
			return *(_obj.callFunction<osg::Matrixd*>());
		}

		return UFOManipulator::getInverseMatrix();
	};

	// void osgGA::UFOManipulator::setNode(osg::Node * node)
	void setNode(osg::Node * node) {
		if(_obj.pushFunction("setNode")) {
			_obj.pushArg((osgGA::UFOManipulator*)this);
			_obj.pushArg(node);
			return (_obj.callFunction<void>());
		}

		return UFOManipulator::setNode(node);
	};

	// const osg::Node * osgGA::UFOManipulator::getNode() const
	const osg::Node * getNode() const {
		if(_obj.pushFunction("getNode")) {
			_obj.pushArg((osgGA::UFOManipulator*)this);
			return (_obj.callFunction<osg::Node*>());
		}

		return UFOManipulator::getNode();
	};

	// osg::Node * osgGA::UFOManipulator::getNode()
	osg::Node * getNode() {
		if(_obj.pushFunction("getNode")) {
			_obj.pushArg((osgGA::UFOManipulator*)this);
			return (_obj.callFunction<osg::Node*>());
		}

		return UFOManipulator::getNode();
	};

	// void osgGA::UFOManipulator::computeHomePosition()
	void computeHomePosition() {
		if(_obj.pushFunction("computeHomePosition")) {
			_obj.pushArg((osgGA::UFOManipulator*)this);
			return (_obj.callFunction<void>());
		}

		return UFOManipulator::computeHomePosition();
	};

	// void osgGA::UFOManipulator::home(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2)
	void home(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2) {
		if(_obj.pushFunction("home")) {
			_obj.pushArg((osgGA::UFOManipulator*)this);
			_obj.pushArg(&arg1);
			_obj.pushArg(&arg2);
			return (_obj.callFunction<void>());
		}

		return UFOManipulator::home(arg1, arg2);
	};

	// void osgGA::UFOManipulator::home(double arg1)
	void home(double arg1) {
		if(_obj.pushFunction("home")) {
			_obj.pushArg((osgGA::UFOManipulator*)this);
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return UFOManipulator::home(arg1);
	};

	// void osgGA::UFOManipulator::init(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2)
	void init(const osgGA::GUIEventAdapter & arg1, osgGA::GUIActionAdapter & arg2) {
		if(_obj.pushFunction("init")) {
			_obj.pushArg((osgGA::UFOManipulator*)this);
			_obj.pushArg(&arg1);
			_obj.pushArg(&arg2);
			return (_obj.callFunction<void>());
		}

		return UFOManipulator::init(arg1, arg2);
	};

	// bool osgGA::UFOManipulator::handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & aa)
	bool handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & aa) {
		if(_obj.pushFunction("handle")) {
			_obj.pushArg((osgGA::UFOManipulator*)this);
			_obj.pushArg(&ea);
			_obj.pushArg(&aa);
			return (_obj.callFunction<bool>());
		}

		return UFOManipulator::handle(ea, aa);
	};

	// void osgGA::UFOManipulator::getUsage(osg::ApplicationUsage & usage) const
	void getUsage(osg::ApplicationUsage & usage) const {
		if(_obj.pushFunction("getUsage")) {
			_obj.pushArg((osgGA::UFOManipulator*)this);
			_obj.pushArg(&usage);
			return (_obj.callFunction<void>());
		}

		return UFOManipulator::getUsage(usage);
	};


	// Protected non-virtual methods:
	// bool osgGA::UFOManipulator::intersect(const osg::Vec3d & start, const osg::Vec3d & end, osg::Vec3d & intersection) const
	bool public_intersect(const osg::Vec3d & start, const osg::Vec3d & end, osg::Vec3d & intersection) const {
		return osgGA::UFOManipulator::intersect(start, end, intersection);
	};

	// void osgGA::UFOManipulator::_stop()
	void public__stop() {
		return osgGA::UFOManipulator::_stop();
	};

	// void osgGA::UFOManipulator::_keyDown(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & arg2)
	void public__keyDown(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & arg2) {
		return osgGA::UFOManipulator::_keyDown(ea, arg2);
	};

	// void osgGA::UFOManipulator::_keyUp(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & arg2)
	void public__keyUp(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & arg2) {
		return osgGA::UFOManipulator::_keyUp(ea, arg2);
	};

	// void osgGA::UFOManipulator::_frame(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & arg2)
	void public__frame(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & arg2) {
		return osgGA::UFOManipulator::_frame(ea, arg2);
	};

	// void osgGA::UFOManipulator::_adjustPosition()
	void public__adjustPosition() {
		return osgGA::UFOManipulator::_adjustPosition();
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
	inline static bool _lg_typecheck_public_intersect(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303202) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,92303202) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public__stop(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public__keyDown(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,85302998) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public__keyUp(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,85302998) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public__frame(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,85302998) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public__adjustPosition(lua_State *L) {
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
	// bool osgGA::UFOManipulator::public_intersect(const osg::Vec3d & start, const osg::Vec3d & end, osg::Vec3d & intersection) const
	static int _bind_public_intersect(lua_State *L) {
		if (!_lg_typecheck_public_intersect(L)) {
			luaL_error(L, "luna typecheck failed in bool osgGA::UFOManipulator::public_intersect(const osg::Vec3d & start, const osg::Vec3d & end, osg::Vec3d & intersection) const function, expected prototype:\nbool osgGA::UFOManipulator::public_intersect(const osg::Vec3d & start, const osg::Vec3d & end, osg::Vec3d & intersection) const\nClass arguments details:\narg 1 ID = 92303202\narg 2 ID = 92303202\narg 3 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3d* start_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !start_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg start in osgGA::UFOManipulator::public_intersect function");
		}
		const osg::Vec3d & start=*start_ptr;
		const osg::Vec3d* end_ptr=(Luna< osg::Vec3d >::check(L,3));
		if( !end_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg end in osgGA::UFOManipulator::public_intersect function");
		}
		const osg::Vec3d & end=*end_ptr;
		osg::Vec3d* intersection_ptr=(Luna< osg::Vec3d >::check(L,4));
		if( !intersection_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg intersection in osgGA::UFOManipulator::public_intersect function");
		}
		osg::Vec3d & intersection=*intersection_ptr;

		wrapper_osgGA_UFOManipulator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgGA_UFOManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgGA::UFOManipulator::public_intersect(const osg::Vec3d &, const osg::Vec3d &, osg::Vec3d &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->public_intersect(start, end, intersection);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgGA::UFOManipulator::public__stop()
	static int _bind_public__stop(lua_State *L) {
		if (!_lg_typecheck_public__stop(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::UFOManipulator::public__stop() function, expected prototype:\nvoid osgGA::UFOManipulator::public__stop()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wrapper_osgGA_UFOManipulator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgGA_UFOManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::UFOManipulator::public__stop(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public__stop();

		return 0;
	}

	// void osgGA::UFOManipulator::public__keyDown(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & arg2)
	static int _bind_public__keyDown(lua_State *L) {
		if (!_lg_typecheck_public__keyDown(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::UFOManipulator::public__keyDown(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & arg2) function, expected prototype:\nvoid osgGA::UFOManipulator::public__keyDown(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & arg2)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgGA::GUIEventAdapter* ea_ptr=(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,2));
		if( !ea_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ea in osgGA::UFOManipulator::public__keyDown function");
		}
		const osgGA::GUIEventAdapter & ea=*ea_ptr;
		osgGA::GUIActionAdapter* _arg2_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osgGA::UFOManipulator::public__keyDown function");
		}
		osgGA::GUIActionAdapter & _arg2=*_arg2_ptr;

		wrapper_osgGA_UFOManipulator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgGA_UFOManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::UFOManipulator::public__keyDown(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public__keyDown(ea, _arg2);

		return 0;
	}

	// void osgGA::UFOManipulator::public__keyUp(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & arg2)
	static int _bind_public__keyUp(lua_State *L) {
		if (!_lg_typecheck_public__keyUp(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::UFOManipulator::public__keyUp(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & arg2) function, expected prototype:\nvoid osgGA::UFOManipulator::public__keyUp(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & arg2)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgGA::GUIEventAdapter* ea_ptr=(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,2));
		if( !ea_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ea in osgGA::UFOManipulator::public__keyUp function");
		}
		const osgGA::GUIEventAdapter & ea=*ea_ptr;
		osgGA::GUIActionAdapter* _arg2_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osgGA::UFOManipulator::public__keyUp function");
		}
		osgGA::GUIActionAdapter & _arg2=*_arg2_ptr;

		wrapper_osgGA_UFOManipulator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgGA_UFOManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::UFOManipulator::public__keyUp(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public__keyUp(ea, _arg2);

		return 0;
	}

	// void osgGA::UFOManipulator::public__frame(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & arg2)
	static int _bind_public__frame(lua_State *L) {
		if (!_lg_typecheck_public__frame(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::UFOManipulator::public__frame(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & arg2) function, expected prototype:\nvoid osgGA::UFOManipulator::public__frame(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & arg2)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgGA::GUIEventAdapter* ea_ptr=(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,2));
		if( !ea_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ea in osgGA::UFOManipulator::public__frame function");
		}
		const osgGA::GUIEventAdapter & ea=*ea_ptr;
		osgGA::GUIActionAdapter* _arg2_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osgGA::UFOManipulator::public__frame function");
		}
		osgGA::GUIActionAdapter & _arg2=*_arg2_ptr;

		wrapper_osgGA_UFOManipulator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgGA_UFOManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::UFOManipulator::public__frame(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public__frame(ea, _arg2);

		return 0;
	}

	// void osgGA::UFOManipulator::public__adjustPosition()
	static int _bind_public__adjustPosition(lua_State *L) {
		if (!_lg_typecheck_public__adjustPosition(L)) {
			luaL_error(L, "luna typecheck failed in void osgGA::UFOManipulator::public__adjustPosition() function, expected prototype:\nvoid osgGA::UFOManipulator::public__adjustPosition()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wrapper_osgGA_UFOManipulator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgGA_UFOManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgGA::UFOManipulator::public__adjustPosition(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public__adjustPosition();

		return 0;
	}

	// std::string osgGA::CameraManipulator::public_getManipulatorName() const
	static int _bind_public_getManipulatorName(lua_State *L) {
		if (!_lg_typecheck_public_getManipulatorName(L)) {
			luaL_error(L, "luna typecheck failed in std::string osgGA::CameraManipulator::public_getManipulatorName() const function, expected prototype:\nstd::string osgGA::CameraManipulator::public_getManipulatorName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wrapper_osgGA_UFOManipulator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgGA_UFOManipulator >(L,1);
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

		wrapper_osgGA_UFOManipulator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgGA_UFOManipulator >(L,1);
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


		wrapper_osgGA_UFOManipulator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgGA_UFOManipulator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_deleteUsingDeleteHandler() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_deleteUsingDeleteHandler();

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"intersect",_bind_public_intersect},
		{"_stop",_bind_public__stop},
		{"_keyDown",_bind_public__keyDown},
		{"_keyUp",_bind_public__keyUp},
		{"_frame",_bind_public__frame},
		{"_adjustPosition",_bind_public__adjustPosition},
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


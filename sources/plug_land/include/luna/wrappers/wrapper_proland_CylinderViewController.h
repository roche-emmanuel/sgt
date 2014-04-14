#ifndef _WRAPPERS_WRAPPER_PROLAND_CYLINDERVIEWCONTROLLER_H_
#define _WRAPPERS_WRAPPER_PROLAND_CYLINDERVIEWCONTROLLER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <proland/util/CylinderViewController.h>

class wrapper_proland_CylinderViewController : public proland::CylinderViewController, public luna_wrapper_base {

public:
		

	~wrapper_proland_CylinderViewController() {
		logDEBUG3("Calling delete function for wrapper proland_CylinderViewController");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::CylinderViewController*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_CylinderViewController(lua_State* L, lua_Table* dum, ork::ptr< ork::SceneNode > node, double R) 
		: proland::CylinderViewController(node, R), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::CylinderViewController*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((proland::CylinderViewController*)this);
			return (_obj.callFunction<void>());
		}

		return CylinderViewController::doRelease();
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((proland::CylinderViewController*)this);
			return (_obj.callFunction<const char*>());
		}

		return CylinderViewController::toString();
	};

	// void proland::TerrainViewController::moveForward(double distance)
	void moveForward(double distance) {
		if(_obj.pushFunction("moveForward")) {
			_obj.pushArg((proland::CylinderViewController*)this);
			_obj.pushArg(distance);
			return (_obj.callFunction<void>());
		}

		return CylinderViewController::moveForward(distance);
	};

	// void proland::TerrainViewController::turn(double angle)
	void turn(double angle) {
		if(_obj.pushFunction("turn")) {
			_obj.pushArg((proland::CylinderViewController*)this);
			_obj.pushArg(angle);
			return (_obj.callFunction<void>());
		}

		return CylinderViewController::turn(angle);
	};

	// double proland::TerrainViewController::interpolate(double sx0, double sy0, double stheta, double sphi, double sd, double dx0, double dy0, double dtheta, double dphi, double dd, double t)
	double interpolate(double sx0, double sy0, double stheta, double sphi, double sd, double dx0, double dy0, double dtheta, double dphi, double dd, double t) {
		if(_obj.pushFunction("interpolate")) {
			_obj.pushArg((proland::CylinderViewController*)this);
			_obj.pushArg(sx0);
			_obj.pushArg(sy0);
			_obj.pushArg(stheta);
			_obj.pushArg(sphi);
			_obj.pushArg(sd);
			_obj.pushArg(dx0);
			_obj.pushArg(dy0);
			_obj.pushArg(dtheta);
			_obj.pushArg(dphi);
			_obj.pushArg(dd);
			_obj.pushArg(t);
			return (_obj.callFunction<double>());
		}

		return CylinderViewController::interpolate(sx0, sy0, stheta, sphi, sd, dx0, dy0, dtheta, dphi, dd, t);
	};

	// void proland::TerrainViewController::interpolatePos(double sx0, double sy0, double dx0, double dy0, double t, double & x0, double & y0)
	void interpolatePos(double sx0, double sy0, double dx0, double dy0, double t, double & x0, double & y0) {
		if(_obj.pushFunction("interpolatePos")) {
			_obj.pushArg((proland::CylinderViewController*)this);
			_obj.pushArg(sx0);
			_obj.pushArg(sy0);
			_obj.pushArg(dx0);
			_obj.pushArg(dy0);
			_obj.pushArg(t);
			_obj.pushArg(x0);
			_obj.pushArg(y0);
			return (_obj.callFunction<void>());
		}

		return CylinderViewController::interpolatePos(sx0, sy0, dx0, dy0, t, x0, y0);
	};

	// void proland::TerrainViewController::setProjection(float znear = 0.0f, float zfar = 0.0f, ork::vec4f viewport = ork::vec4f (-1.0f, 1.0f,-1.0f, 1.0f))
	void setProjection(float znear = 0.0f, float zfar = 0.0f, ork::vec4f viewport = ork::vec4f (-1.0f, 1.0f,-1.0f, 1.0f)) {
		if(_obj.pushFunction("setProjection")) {
			_obj.pushArg((proland::CylinderViewController*)this);
			_obj.pushArg(znear);
			_obj.pushArg(zfar);
			_obj.pushArg(&viewport);
			return (_obj.callFunction<void>());
		}

		return CylinderViewController::setProjection(znear, zfar, viewport);
	};

	// double proland::CylinderViewController::getHeight()
	double getHeight() {
		if(_obj.pushFunction("getHeight")) {
			_obj.pushArg((proland::CylinderViewController*)this);
			return (_obj.callFunction<double>());
		}

		return CylinderViewController::getHeight();
	};

	// void proland::CylinderViewController::move(ork::vec3d & oldp, ork::vec3d & p)
	void move(ork::vec3d & oldp, ork::vec3d & p) {
		if(_obj.pushFunction("move")) {
			_obj.pushArg((proland::CylinderViewController*)this);
			_obj.pushArg(&oldp);
			_obj.pushArg(&p);
			return (_obj.callFunction<void>());
		}

		return CylinderViewController::move(oldp, p);
	};

	// void proland::CylinderViewController::update()
	void update() {
		if(_obj.pushFunction("update")) {
			_obj.pushArg((proland::CylinderViewController*)this);
			return (_obj.callFunction<void>());
		}

		return CylinderViewController::update();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


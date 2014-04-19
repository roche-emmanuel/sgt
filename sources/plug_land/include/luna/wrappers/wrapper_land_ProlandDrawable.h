#ifndef _WRAPPERS_WRAPPER_LAND_PROLANDDRAWABLE_H_
#define _WRAPPERS_WRAPPER_LAND_PROLANDDRAWABLE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <plug_extensions.h>

class wrapper_land_ProlandDrawable : public land::ProlandDrawable, public luna_wrapper_base {

public:
		

	~wrapper_land_ProlandDrawable() {
		logDEBUG3("Calling delete function for wrapper land_ProlandDrawable");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((land::ProlandDrawable*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_land_ProlandDrawable(lua_State* L, lua_Table* dum, ork::SceneManager * sman, proland::TerrainViewController * con) 
		: land::ProlandDrawable(sman, con), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((land::ProlandDrawable*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// ork::vec3d land::ProlandDrawable::getWorldCoordinates(int x, int y)
	ork::vec3d getWorldCoordinates(int x, int y) {
		if(_obj.pushFunction("getWorldCoordinates")) {
			_obj.pushArg((land::ProlandDrawable*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return *(_obj.callFunction<ork::vec3d*>());
		}

		return ProlandDrawable::getWorldCoordinates(x, y);
	};

	// ork::ptr< proland::TerrainViewController > land::ProlandDrawable::getViewController()
	ork::ptr< proland::TerrainViewController > getViewController() {
		if(_obj.pushFunction("getViewController")) {
			_obj.pushArg((land::ProlandDrawable*)this);
			return _obj.callFunction< proland::TerrainViewController* >();
		}

		return ProlandDrawable::getViewController();
	};

	// ork::ptr< ork::SceneManager > land::ProlandDrawable::getScene()
	ork::ptr< ork::SceneManager > getScene() {
		if(_obj.pushFunction("getScene")) {
			_obj.pushArg((land::ProlandDrawable*)this);
			return _obj.callFunction< ork::SceneManager* >();
		}

		return ProlandDrawable::getScene();
	};

	// void land::ProlandDrawable::drawImplementation(osg::RenderInfo & renderInfo) const
	void drawImplementation(osg::RenderInfo & renderInfo) const {
		if(_obj.pushFunction("drawImplementation")) {
			_obj.pushArg((land::ProlandDrawable*)this);
			_obj.pushArg(&renderInfo);
			return (_obj.callFunction<void>());
		}

		return ProlandDrawable::drawImplementation(renderInfo);
	};

	// osg::BoundingBox land::ProlandDrawable::computeBound() const
	osg::BoundingBox computeBound() const {
		if(_obj.pushFunction("computeBound")) {
			_obj.pushArg((land::ProlandDrawable*)this);
			return (_obj.callFunction<osg::BoundingBox>());
		}

		return ProlandDrawable::computeBound();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


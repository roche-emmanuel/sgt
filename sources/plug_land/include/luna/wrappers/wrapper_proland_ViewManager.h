#ifndef _WRAPPERS_WRAPPER_PROLAND_VIEWMANAGER_H_
#define _WRAPPERS_WRAPPER_PROLAND_VIEWMANAGER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <W:/Cloud/Projects/sgt/sources/proland/sources/core/proland/ui/BasicViewHandler.h>

class wrapper_proland_ViewManager : public proland::ViewManager, public luna_wrapper_base {

public:
		

	~wrapper_proland_ViewManager() {
		logDEBUG3("Calling delete function for wrapper proland_ViewManager");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::ViewManager*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_ViewManager(lua_State* L, lua_Table* dum) 
		: proland::ViewManager(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::ViewManager*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// ork::ptr< ork::SceneManager > proland::ViewManager::getScene()
	ork::ptr< ork::SceneManager > getScene() {
		THROW_IF(!_obj.pushFunction("getScene"),"No implementation for abstract function proland::ViewManager::getScene");
		_obj.pushArg((proland::ViewManager*)this);
		return _obj.callFunction< ork::SceneManager* >();
	};

	// ork::ptr< proland::TerrainViewController > proland::ViewManager::getViewController()
	ork::ptr< proland::TerrainViewController > getViewController() {
		THROW_IF(!_obj.pushFunction("getViewController"),"No implementation for abstract function proland::ViewManager::getViewController");
		_obj.pushArg((proland::ViewManager*)this);
		return _obj.callFunction< proland::TerrainViewController* >();
	};

	// ork::vec3d proland::ViewManager::getWorldCoordinates(int x, int y)
	ork::vec3d getWorldCoordinates(int x, int y) {
		THROW_IF(!_obj.pushFunction("getWorldCoordinates"),"No implementation for abstract function proland::ViewManager::getWorldCoordinates");
		_obj.pushArg((proland::ViewManager*)this);
		_obj.pushArg(x);
		_obj.pushArg(y);
		return *(_obj.callFunction<ork::vec3d*>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


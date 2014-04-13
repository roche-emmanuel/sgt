#ifndef _WRAPPERS_WRAPPER_ORK_RESOURCE_H_
#define _WRAPPERS_WRAPPER_ORK_RESOURCE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <ork/resource/Resource.h>

class wrapper_ork_Resource : public ork::Resource, public luna_wrapper_base {

public:
		

	~wrapper_ork_Resource() {
		logDEBUG3("Calling delete function for wrapper ork_Resource");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((ork::Resource*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_ork_Resource(lua_State* L, lua_Table* dum, ork::ptr< ork::ResourceManager > manager, const std::string & name, ork::ptr< ork::ResourceDescriptor > desc) 
		: ork::Resource(manager, name, desc), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((ork::Resource*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// std::string ork::Resource::getName()
	std::string getName() {
		if(_obj.pushFunction("getName")) {
			_obj.pushArg((ork::Resource*)this);
			return (_obj.callFunction<std::string>());
		}

		return Resource::getName();
	};

	// int ork::Resource::getUpdateOrder()
	int getUpdateOrder() {
		THROW_IF(!_obj.pushFunction("getUpdateOrder"),"No implementation for abstract function ork::Resource::getUpdateOrder");
		_obj.pushArg((ork::Resource*)this);
		return (_obj.callFunction<int>());
	};

	// bool ork::Resource::prepareUpdate()
	bool prepareUpdate() {
		if(_obj.pushFunction("prepareUpdate")) {
			_obj.pushArg((ork::Resource*)this);
			return (_obj.callFunction<bool>());
		}

		return Resource::prepareUpdate();
	};

	// void ork::Resource::doUpdate(bool commit)
	void doUpdate(bool commit) {
		THROW_IF(!_obj.pushFunction("doUpdate"),"No implementation for abstract function ork::Resource::doUpdate");
		_obj.pushArg((ork::Resource*)this);
		_obj.pushArg(commit);
		return (_obj.callFunction<void>());
	};

	// bool ork::Resource::changed()
	bool changed() {
		if(_obj.pushFunction("changed")) {
			_obj.pushArg((ork::Resource*)this);
			return (_obj.callFunction<bool>());
		}

		return Resource::changed();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


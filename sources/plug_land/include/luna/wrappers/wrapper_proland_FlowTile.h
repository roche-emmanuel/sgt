#ifndef _WRAPPERS_WRAPPER_PROLAND_FLOWTILE_H_
#define _WRAPPERS_WRAPPER_PROLAND_FLOWTILE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <W:/Cloud/Projects/sgt/sources/proland/sources/core/proland/particles/terrain/FlowTile.h>

class wrapper_proland_FlowTile : public proland::FlowTile, public luna_wrapper_base {

public:
		

	~wrapper_proland_FlowTile() {
		logDEBUG3("Calling delete function for wrapper proland_FlowTile");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::FlowTile*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_FlowTile(lua_State* L, lua_Table* dum, float ox, float oy, float size) 
		: proland::FlowTile(ox, oy, size), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::FlowTile*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((proland::FlowTile*)this);
			return (_obj.callFunction<void>());
		}

		return FlowTile::doRelease();
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((proland::FlowTile*)this);
			return (_obj.callFunction<const char*>());
		}

		return FlowTile::toString();
	};

	// int proland::FlowTile::getType(ork::vec2d & pos)
	int getType(ork::vec2d & pos) {
		if(_obj.pushFunction("getType")) {
			_obj.pushArg((proland::FlowTile*)this);
			_obj.pushArg(&pos);
			return (_obj.callFunction<int>());
		}

		return FlowTile::getType(pos);
	};

	// void proland::FlowTile::getVelocity(ork::vec2d & pos, ork::vec2d & velocity, int & type)
	void getVelocity(ork::vec2d & pos, ork::vec2d & velocity, int & type) {
		THROW_IF(!_obj.pushFunction("getVelocity"),"No implementation for abstract function proland::FlowTile::getVelocity");
		_obj.pushArg((proland::FlowTile*)this);
		_obj.pushArg(&pos);
		_obj.pushArg(&velocity);
		_obj.pushArg(type);
		return (_obj.callFunction<void>());
	};

	// void proland::FlowTile::getDataType(ork::vec2d & pos, int & type)
	void getDataType(ork::vec2d & pos, int & type) {
		if(_obj.pushFunction("getDataType")) {
			_obj.pushArg((proland::FlowTile*)this);
			_obj.pushArg(&pos);
			_obj.pushArg(type);
			return (_obj.callFunction<void>());
		}

		return FlowTile::getDataType(pos, type);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


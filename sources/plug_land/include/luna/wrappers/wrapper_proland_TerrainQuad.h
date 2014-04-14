#ifndef _WRAPPERS_WRAPPER_PROLAND_TERRAINQUAD_H_
#define _WRAPPERS_WRAPPER_PROLAND_TERRAINQUAD_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <proland/terrain/TerrainQuad.h>

class wrapper_proland_TerrainQuad : public proland::TerrainQuad, public luna_wrapper_base {

public:
		

	~wrapper_proland_TerrainQuad() {
		logDEBUG3("Calling delete function for wrapper proland_TerrainQuad");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::TerrainQuad*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_TerrainQuad(lua_State* L, lua_Table* dum, proland::TerrainNode * owner, const proland::TerrainQuad * parent, int tx, int ty, double ox, double oy, double l, float zmin, float zmax) 
		: proland::TerrainQuad(owner, parent, tx, ty, ox, oy, l, zmin, zmax), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::TerrainQuad*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((proland::TerrainQuad*)this);
			return (_obj.callFunction<void>());
		}

		return TerrainQuad::doRelease();
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((proland::TerrainQuad*)this);
			return (_obj.callFunction<const char*>());
		}

		return TerrainQuad::toString();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


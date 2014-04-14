#ifndef _WRAPPERS_WRAPPER_PROLAND_TILESAMPLER_TILEFILTER_H_
#define _WRAPPERS_WRAPPER_PROLAND_TILESAMPLER_TILEFILTER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <W:/Cloud/Projects/sgt/sources/proland/sources/core/proland/terrain/TileSampler.h>

class wrapper_proland_TileSampler_TileFilter : public proland::TileSampler::TileFilter, public luna_wrapper_base {

public:
		

	~wrapper_proland_TileSampler_TileFilter() {
		logDEBUG3("Calling delete function for wrapper proland_TileSampler_TileFilter");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::TileSampler::TileFilter*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_TileSampler_TileFilter(lua_State* L, lua_Table* dum) 
		: proland::TileSampler::TileFilter(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::TileSampler::TileFilter*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// bool proland::TileSampler::TileFilter::storeTile(ork::ptr< proland::TerrainQuad > q)
	bool storeTile(ork::ptr< proland::TerrainQuad > q) {
		THROW_IF(!_obj.pushFunction("storeTile"),"No implementation for abstract function proland::TileSampler::TileFilter::storeTile");
		_obj.pushArg((proland::TileSampler::TileFilter*)this);
		_obj.pushArg((proland::TerrainQuad*)q.get());
		return (_obj.callFunction<bool>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


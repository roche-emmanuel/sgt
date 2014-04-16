#ifndef _WRAPPERS_WRAPPER_PROLAND_CURVEDATA_H_
#define _WRAPPERS_WRAPPER_PROLAND_CURVEDATA_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <W:/Cloud/Projects/sgt/sources/proland/sources/graph/proland/graph/producer/CurveData.h>

class wrapper_proland_CurveData : public proland::CurveData, public luna_wrapper_base {

public:
		

	~wrapper_proland_CurveData() {
		logDEBUG3("Calling delete function for wrapper proland_CurveData");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::CurveData*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_CurveData(lua_State* L, lua_Table* dum, proland::CurveId id, proland::CurvePtr flattenCurve) 
		: proland::CurveData(id, flattenCurve), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::CurveData*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// float proland::CurveData::getCapLength(proland::NodePtr p, ork::vec2d q)
	float getCapLength(proland::NodePtr p, ork::vec2d q) {
		if(_obj.pushFunction("getCapLength")) {
			_obj.pushArg((proland::CurveData*)this);
			_obj.pushArg(&p);
			_obj.pushArg(&q);
			return (_obj.callFunction<float>());
		}

		return CurveData::getCapLength(p, q);
	};

public:
	// Public virtual methods:
	// void proland::CurveData::getUsedTiles(set< proland::TileCache::Tile::Id > & tiles, float rootSampleLength)
	void getUsedTiles(set< proland::TileCache::Tile::Id > & tiles, float rootSampleLength) {
		if(_obj.pushFunction("getUsedTiles")) {
			_obj.pushArg((proland::CurveData*)this);
			_obj.pushArg(&tiles);
			_obj.pushArg(rootSampleLength);
			return (_obj.callFunction<void>());
		}

		return CurveData::getUsedTiles(tiles, rootSampleLength);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


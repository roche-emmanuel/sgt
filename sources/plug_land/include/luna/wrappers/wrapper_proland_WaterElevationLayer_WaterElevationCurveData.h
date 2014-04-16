#ifndef _WRAPPERS_WRAPPER_PROLAND_WATERELEVATIONLAYER_WATERELEVATIONCURVEDATA_H_
#define _WRAPPERS_WRAPPER_PROLAND_WATERELEVATIONLAYER_WATERELEVATIONCURVEDATA_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <W:/Cloud/Projects/sgt/sources/proland/sources/graph/proland/dem/WaterElevationLayer.h>

class wrapper_proland_WaterElevationLayer_WaterElevationCurveData : public proland::WaterElevationLayer::WaterElevationCurveData, public luna_wrapper_base {

public:
		

	~wrapper_proland_WaterElevationLayer_WaterElevationCurveData() {
		logDEBUG3("Calling delete function for wrapper proland_WaterElevationLayer_WaterElevationCurveData");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::WaterElevationLayer::WaterElevationCurveData*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_WaterElevationLayer_WaterElevationCurveData(lua_State* L, lua_Table* dum, proland::CurveId id, proland::CurvePtr flattenCurve, ork::ptr< proland::TileProducer > elevations) 
		: proland::WaterElevationLayer::WaterElevationCurveData(id, flattenCurve, elevations), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::WaterElevationLayer::WaterElevationCurveData*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// float proland::WaterElevationLayer::WaterElevationCurveData::getCapLength(proland::NodePtr p, ork::vec2d q)
	float getCapLength(proland::NodePtr p, ork::vec2d q) {
		if(_obj.pushFunction("getCapLength")) {
			_obj.pushArg((proland::WaterElevationLayer::WaterElevationCurveData*)this);
			_obj.pushArg(&p);
			_obj.pushArg(&q);
			return (_obj.callFunction<float>());
		}

		return WaterElevationCurveData::getCapLength(p, q);
	};

public:
	// Public virtual methods:
	// float proland::ElevationCurveData::getStartHeight()
	float getStartHeight() {
		if(_obj.pushFunction("getStartHeight")) {
			_obj.pushArg((proland::WaterElevationLayer::WaterElevationCurveData*)this);
			return (_obj.callFunction<float>());
		}

		return WaterElevationCurveData::getStartHeight();
	};

	// float proland::ElevationCurveData::getEndHeight()
	float getEndHeight() {
		if(_obj.pushFunction("getEndHeight")) {
			_obj.pushArg((proland::WaterElevationLayer::WaterElevationCurveData*)this);
			return (_obj.callFunction<float>());
		}

		return WaterElevationCurveData::getEndHeight();
	};

	// int proland::ElevationCurveData::getSmoothFactor(proland::CurvePtr c)
	int getSmoothFactor(proland::CurvePtr c) {
		if(_obj.pushFunction("getSmoothFactor")) {
			_obj.pushArg((proland::WaterElevationLayer::WaterElevationCurveData*)this);
			_obj.pushArg(&c);
			return (_obj.callFunction<int>());
		}

		return WaterElevationCurveData::getSmoothFactor(c);
	};

	// void proland::ElevationCurveData::getUsedTiles(set< proland::TileCache::Tile::Id > & tiles, float rootSampleLength)
	void getUsedTiles(set< proland::TileCache::Tile::Id > & tiles, float rootSampleLength) {
		if(_obj.pushFunction("getUsedTiles")) {
			_obj.pushArg((proland::WaterElevationLayer::WaterElevationCurveData*)this);
			_obj.pushArg(&tiles);
			_obj.pushArg(rootSampleLength);
			return (_obj.callFunction<void>());
		}

		return WaterElevationCurveData::getUsedTiles(tiles, rootSampleLength);
	};

	// float proland::WaterElevationLayer::WaterElevationCurveData::getAltitude(float s)
	float getAltitude(float s) {
		if(_obj.pushFunction("getAltitude")) {
			_obj.pushArg((proland::WaterElevationLayer::WaterElevationCurveData*)this);
			_obj.pushArg(s);
			return (_obj.callFunction<float>());
		}

		return WaterElevationCurveData::getAltitude(s);
	};

	// float proland::WaterElevationLayer::WaterElevationCurveData::getSampleLength(proland::CurvePtr c)
	float getSampleLength(proland::CurvePtr c) {
		if(_obj.pushFunction("getSampleLength")) {
			_obj.pushArg((proland::WaterElevationLayer::WaterElevationCurveData*)this);
			_obj.pushArg(&c);
			return (_obj.callFunction<float>());
		}

		return WaterElevationCurveData::getSampleLength(c);
	};


	// Protected non-virtual methods:
	// float proland::ElevationCurveData::getSample(const ork::vec2d & p)
	float public_getSample(const ork::vec2d & p) {
		return proland::ElevationCurveData::getSample(p);
	};

	// float proland::ElevationCurveData::getMonotonicSample(int i)
	float public_getMonotonicSample(int i) {
		return proland::ElevationCurveData::getMonotonicSample(i);
	};

	// float proland::ElevationCurveData::getSymetricSample(int i)
	float public_getSymetricSample(int i) {
		return proland::ElevationCurveData::getSymetricSample(i);
	};

	// float proland::ElevationCurveData::getSmoothedSample(int i)
	float public_getSmoothedSample(int i) {
		return proland::ElevationCurveData::getSmoothedSample(i);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_getSample(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304238) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_getMonotonicSample(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_getSymetricSample(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_getSmoothedSample(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// float proland::ElevationCurveData::public_getSample(const ork::vec2d & p)
	static int _bind_public_getSample(lua_State *L) {
		if (!_lg_typecheck_public_getSample(L)) {
			luaL_error(L, "luna typecheck failed in float proland::ElevationCurveData::public_getSample(const ork::vec2d & p) function, expected prototype:\nfloat proland::ElevationCurveData::public_getSample(const ork::vec2d & p)\nClass arguments details:\narg 1 ID = 81304238\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec2d* p_ptr=(Luna< ork::vec2d >::check(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in proland::ElevationCurveData::public_getSample function");
		}
		const ork::vec2d & p=*p_ptr;

		wrapper_proland_WaterElevationLayer_WaterElevationCurveData* self=Luna< proland::CurveData >::checkSubType< wrapper_proland_WaterElevationLayer_WaterElevationCurveData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::ElevationCurveData::public_getSample(const ork::vec2d &). Got : '%s'\n%s",typeid(Luna< proland::CurveData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->public_getSample(p);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float proland::ElevationCurveData::public_getMonotonicSample(int i)
	static int _bind_public_getMonotonicSample(lua_State *L) {
		if (!_lg_typecheck_public_getMonotonicSample(L)) {
			luaL_error(L, "luna typecheck failed in float proland::ElevationCurveData::public_getMonotonicSample(int i) function, expected prototype:\nfloat proland::ElevationCurveData::public_getMonotonicSample(int i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);

		wrapper_proland_WaterElevationLayer_WaterElevationCurveData* self=Luna< proland::CurveData >::checkSubType< wrapper_proland_WaterElevationLayer_WaterElevationCurveData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::ElevationCurveData::public_getMonotonicSample(int). Got : '%s'\n%s",typeid(Luna< proland::CurveData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->public_getMonotonicSample(i);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float proland::ElevationCurveData::public_getSymetricSample(int i)
	static int _bind_public_getSymetricSample(lua_State *L) {
		if (!_lg_typecheck_public_getSymetricSample(L)) {
			luaL_error(L, "luna typecheck failed in float proland::ElevationCurveData::public_getSymetricSample(int i) function, expected prototype:\nfloat proland::ElevationCurveData::public_getSymetricSample(int i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);

		wrapper_proland_WaterElevationLayer_WaterElevationCurveData* self=Luna< proland::CurveData >::checkSubType< wrapper_proland_WaterElevationLayer_WaterElevationCurveData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::ElevationCurveData::public_getSymetricSample(int). Got : '%s'\n%s",typeid(Luna< proland::CurveData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->public_getSymetricSample(i);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float proland::ElevationCurveData::public_getSmoothedSample(int i)
	static int _bind_public_getSmoothedSample(lua_State *L) {
		if (!_lg_typecheck_public_getSmoothedSample(L)) {
			luaL_error(L, "luna typecheck failed in float proland::ElevationCurveData::public_getSmoothedSample(int i) function, expected prototype:\nfloat proland::ElevationCurveData::public_getSmoothedSample(int i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);

		wrapper_proland_WaterElevationLayer_WaterElevationCurveData* self=Luna< proland::CurveData >::checkSubType< wrapper_proland_WaterElevationLayer_WaterElevationCurveData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::ElevationCurveData::public_getSmoothedSample(int). Got : '%s'\n%s",typeid(Luna< proland::CurveData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->public_getSmoothedSample(i);
		lua_pushnumber(L,lret);

		return 1;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"getSample",_bind_public_getSample},
		{"getMonotonicSample",_bind_public_getMonotonicSample},
		{"getSymetricSample",_bind_public_getSymetricSample},
		{"getSmoothedSample",_bind_public_getSmoothedSample},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif


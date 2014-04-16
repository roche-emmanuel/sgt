#ifndef _WRAPPERS_WRAPPER_PROLAND_PERLINWAVETILE_H_
#define _WRAPPERS_WRAPPER_PROLAND_PERLINWAVETILE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <W:/Cloud/Projects/sgt/sources/proland/sources/river/proland/rivers/PerlinWaveTile.h>

class wrapper_proland_PerlinWaveTile : public proland::PerlinWaveTile, public luna_wrapper_base {

public:
		

	~wrapper_proland_PerlinWaveTile() {
		logDEBUG3("Calling delete function for wrapper proland_PerlinWaveTile");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::PerlinWaveTile*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_PerlinWaveTile(lua_State* L, lua_Table* dum, std::string & name, int tileSize, int gridSize, float waveLength, int timeLoop) 
		: proland::PerlinWaveTile(name, tileSize, gridSize, waveLength, timeLoop), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::PerlinWaveTile*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_proland_PerlinWaveTile(lua_State* L, lua_Table* dum) 
		: proland::PerlinWaveTile(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::PerlinWaveTile*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((proland::PerlinWaveTile*)this);
			return (_obj.callFunction<void>());
		}

		return PerlinWaveTile::doRelease();
	};

	// void proland::PerlinWaveTile::init(std::string & name, int tileSize, int gridSize, float waveLength, int timeLoop)
	void init(std::string & name, int tileSize, int gridSize, float waveLength, int timeLoop) {
		if(_obj.pushFunction("init")) {
			_obj.pushArg((proland::PerlinWaveTile*)this);
			_obj.pushArg(name);
			_obj.pushArg(tileSize);
			_obj.pushArg(gridSize);
			_obj.pushArg(waveLength);
			_obj.pushArg(timeLoop);
			return (_obj.callFunction<void>());
		}

		return PerlinWaveTile::init(name, tileSize, gridSize, waveLength, timeLoop);
	};

	// void proland::PerlinWaveTile::swap(ork::ptr< proland::PerlinWaveTile > t)
	void swap(ork::ptr< proland::PerlinWaveTile > t) {
		if(_obj.pushFunction("swap")) {
			_obj.pushArg((proland::PerlinWaveTile*)this);
			_obj.pushArg((proland::PerlinWaveTile*)t.get());
			return (_obj.callFunction<void>());
		}

		return PerlinWaveTile::swap(t);
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((proland::PerlinWaveTile*)this);
			return (_obj.callFunction<const char*>());
		}

		return PerlinWaveTile::toString();
	};

	// void proland::WaveTile::timeStep(float dt)
	void timeStep(float dt) {
		if(_obj.pushFunction("timeStep")) {
			_obj.pushArg((proland::PerlinWaveTile*)this);
			_obj.pushArg(dt);
			return (_obj.callFunction<void>());
		}

		return PerlinWaveTile::timeStep(dt);
	};

	// void proland::WaveTile::updateUniform(ork::ptr< ork::Program > p)
	void updateUniform(ork::ptr< ork::Program > p) {
		if(_obj.pushFunction("updateUniform")) {
			_obj.pushArg((proland::PerlinWaveTile*)this);
			_obj.pushArg((ork::Program*)p.get());
			return (_obj.callFunction<void>());
		}

		return PerlinWaveTile::updateUniform(p);
	};

	// void proland::WaveTile::checkUniforms(ork::ptr< ork::Program > p)
	void checkUniforms(ork::ptr< ork::Program > p) {
		if(_obj.pushFunction("checkUniforms")) {
			_obj.pushArg((proland::PerlinWaveTile*)this);
			_obj.pushArg((ork::Program*)p.get());
			return (_obj.callFunction<void>());
		}

		return PerlinWaveTile::checkUniforms(p);
	};


	// Protected non-virtual methods:
	// void proland::PerlinWaveTile::init(ork::ptr< ork::Texture2D > tex, int size, int numLodLevel)
	void public_init(ork::ptr< ork::Texture2D > tex, int size, int numLodLevel) {
		return proland::PerlinWaveTile::init(tex, size, numLodLevel);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_init(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Texture2D >(L,2) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void proland::PerlinWaveTile::public_init(ork::ptr< ork::Texture2D > tex, int size, int numLodLevel)
	static int _bind_public_init(lua_State *L) {
		if (!_lg_typecheck_public_init(L)) {
			luaL_error(L, "luna typecheck failed in void proland::PerlinWaveTile::public_init(ork::ptr< ork::Texture2D > tex, int size, int numLodLevel) function, expected prototype:\nvoid proland::PerlinWaveTile::public_init(ork::ptr< ork::Texture2D > tex, int size, int numLodLevel)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Texture2D > tex = Luna< ork::Object >::checkSubType< ork::Texture2D >(L,2);
		int size=(int)lua_tointeger(L,3);
		int numLodLevel=(int)lua_tointeger(L,4);

		wrapper_proland_PerlinWaveTile* self=Luna< ork::Object >::checkSubType< wrapper_proland_PerlinWaveTile >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::PerlinWaveTile::public_init(ork::ptr< ork::Texture2D >, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_init(tex, size, numLodLevel);

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"init",_bind_public_init},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif


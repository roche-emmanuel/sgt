#ifndef _WRAPPERS_WRAPPER_PROLAND_ANIMATEDPERLINWAVETILE_H_
#define _WRAPPERS_WRAPPER_PROLAND_ANIMATEDPERLINWAVETILE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <W:/Cloud/Projects/sgt/sources/proland/sources/river/proland/rivers/AnimatedPerlinWaveTile.h>

class wrapper_proland_AnimatedPerlinWaveTile : public proland::AnimatedPerlinWaveTile, public luna_wrapper_base {

public:
		

	~wrapper_proland_AnimatedPerlinWaveTile() {
		logDEBUG3("Calling delete function for wrapper proland_AnimatedPerlinWaveTile");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::AnimatedPerlinWaveTile*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_AnimatedPerlinWaveTile(lua_State* L, lua_Table* dum, std::string & name, int tileSize, int gridSize, float waveLength, int timeLoop) 
		: proland::AnimatedPerlinWaveTile(name, tileSize, gridSize, waveLength, timeLoop), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::AnimatedPerlinWaveTile*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_proland_AnimatedPerlinWaveTile(lua_State* L, lua_Table* dum) 
		: proland::AnimatedPerlinWaveTile(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::AnimatedPerlinWaveTile*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((proland::AnimatedPerlinWaveTile*)this);
			return (_obj.callFunction<void>());
		}

		return AnimatedPerlinWaveTile::doRelease();
	};

	// void proland::AnimatedPerlinWaveTile::init(std::string & name, int tileSize, int gridSize, float waveLength, int timeLoop)
	void init(std::string & name, int tileSize, int gridSize, float waveLength, int timeLoop) {
		if(_obj.pushFunction("init")) {
			_obj.pushArg((proland::AnimatedPerlinWaveTile*)this);
			_obj.pushArg(name);
			_obj.pushArg(tileSize);
			_obj.pushArg(gridSize);
			_obj.pushArg(waveLength);
			_obj.pushArg(timeLoop);
			return (_obj.callFunction<void>());
		}

		return AnimatedPerlinWaveTile::init(name, tileSize, gridSize, waveLength, timeLoop);
	};

	// void proland::AnimatedPerlinWaveTile::swap(ork::ptr< proland::AnimatedPerlinWaveTile > t)
	void swap(ork::ptr< proland::AnimatedPerlinWaveTile > t) {
		if(_obj.pushFunction("swap")) {
			_obj.pushArg((proland::AnimatedPerlinWaveTile*)this);
			_obj.pushArg((proland::AnimatedPerlinWaveTile*)t.get());
			return (_obj.callFunction<void>());
		}

		return AnimatedPerlinWaveTile::swap(t);
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((proland::AnimatedPerlinWaveTile*)this);
			return (_obj.callFunction<const char*>());
		}

		return AnimatedPerlinWaveTile::toString();
	};

	// void proland::WaveTile::timeStep(float dt)
	void timeStep(float dt) {
		if(_obj.pushFunction("timeStep")) {
			_obj.pushArg((proland::AnimatedPerlinWaveTile*)this);
			_obj.pushArg(dt);
			return (_obj.callFunction<void>());
		}

		return AnimatedPerlinWaveTile::timeStep(dt);
	};

	// void proland::WaveTile::checkUniforms(ork::ptr< ork::Program > p)
	void checkUniforms(ork::ptr< ork::Program > p) {
		if(_obj.pushFunction("checkUniforms")) {
			_obj.pushArg((proland::AnimatedPerlinWaveTile*)this);
			_obj.pushArg((ork::Program*)p.get());
			return (_obj.callFunction<void>());
		}

		return AnimatedPerlinWaveTile::checkUniforms(p);
	};

	// void proland::AnimatedPerlinWaveTile::updateUniform(ork::ptr< ork::Program > p)
	void updateUniform(ork::ptr< ork::Program > p) {
		if(_obj.pushFunction("updateUniform")) {
			_obj.pushArg((proland::AnimatedPerlinWaveTile*)this);
			_obj.pushArg((ork::Program*)p.get());
			return (_obj.callFunction<void>());
		}

		return AnimatedPerlinWaveTile::updateUniform(p);
	};


	// Protected non-virtual methods:
	// void proland::AnimatedPerlinWaveTile::init(ork::ptr< ork::Texture2D > t, int size, int numLodLevels, int timeLoop, unsigned int seed)
	void public_init(ork::ptr< ork::Texture2D > t, int size, int numLodLevels, int timeLoop, unsigned int seed) {
		return proland::AnimatedPerlinWaveTile::init(t, size, numLodLevels, timeLoop, seed);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_init(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Texture2D >(L,2) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void proland::AnimatedPerlinWaveTile::public_init(ork::ptr< ork::Texture2D > t, int size, int numLodLevels, int timeLoop, unsigned int seed)
	static int _bind_public_init(lua_State *L) {
		if (!_lg_typecheck_public_init(L)) {
			luaL_error(L, "luna typecheck failed in void proland::AnimatedPerlinWaveTile::public_init(ork::ptr< ork::Texture2D > t, int size, int numLodLevels, int timeLoop, unsigned int seed) function, expected prototype:\nvoid proland::AnimatedPerlinWaveTile::public_init(ork::ptr< ork::Texture2D > t, int size, int numLodLevels, int timeLoop, unsigned int seed)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Texture2D > t = Luna< ork::Object >::checkSubType< ork::Texture2D >(L,2);
		int size=(int)lua_tointeger(L,3);
		int numLodLevels=(int)lua_tointeger(L,4);
		int timeLoop=(int)lua_tointeger(L,5);
		unsigned int seed=(unsigned int)lua_tointeger(L,6);

		wrapper_proland_AnimatedPerlinWaveTile* self=Luna< ork::Object >::checkSubType< wrapper_proland_AnimatedPerlinWaveTile >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::AnimatedPerlinWaveTile::public_init(ork::ptr< ork::Texture2D >, int, int, int, unsigned int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_init(t, size, numLodLevels, timeLoop, seed);

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


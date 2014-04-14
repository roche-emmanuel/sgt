#ifndef _WRAPPERS_WRAPPER_PROLAND_TILESAMPLER_H_
#define _WRAPPERS_WRAPPER_PROLAND_TILESAMPLER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <W:/Cloud/Projects/sgt/sources/proland/sources/core/proland/terrain/TileSampler.h>

class wrapper_proland_TileSampler : public proland::TileSampler, public luna_wrapper_base {

public:
		

	~wrapper_proland_TileSampler() {
		logDEBUG3("Calling delete function for wrapper proland_TileSampler");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::TileSampler*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_TileSampler(lua_State* L, lua_Table* dum, const std::string & name, ork::ptr< proland::TileProducer > producer = NULL) 
		: proland::TileSampler(name, producer), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::TileSampler*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_proland_TileSampler(lua_State* L, lua_Table* dum) 
		: proland::TileSampler(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::TileSampler*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((proland::TileSampler*)this);
			return (_obj.callFunction<void>());
		}

		return TileSampler::doRelease();
	};

	// void proland::TileSampler::init(const std::string & name, ork::ptr< proland::TileProducer > producer = NULL)
	void init(const std::string & name, ork::ptr< proland::TileProducer > producer = NULL) {
		if(_obj.pushFunction("init")) {
			_obj.pushArg((proland::TileSampler*)this);
			_obj.pushArg(name);
			_obj.pushArg((proland::TileProducer*)producer.get());
			return (_obj.callFunction<void>());
		}

		return TileSampler::init(name, producer);
	};

	// bool proland::TileSampler::needTile(ork::ptr< proland::TerrainQuad > q)
	bool needTile(ork::ptr< proland::TerrainQuad > q) {
		if(_obj.pushFunction("needTile")) {
			_obj.pushArg((proland::TileSampler*)this);
			_obj.pushArg((proland::TerrainQuad*)q.get());
			return (_obj.callFunction<bool>());
		}

		return TileSampler::needTile(q);
	};

	// void proland::TileSampler::swap(ork::ptr< proland::TileSampler > p)
	void swap(ork::ptr< proland::TileSampler > p) {
		if(_obj.pushFunction("swap")) {
			_obj.pushArg((proland::TileSampler*)this);
			_obj.pushArg((proland::TileSampler*)p.get());
			return (_obj.callFunction<void>());
		}

		return TileSampler::swap(p);
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((proland::TileSampler*)this);
			return (_obj.callFunction<const char*>());
		}

		return TileSampler::toString();
	};

	// ork::ptr< ork::Task > proland::TileSampler::update(ork::ptr< ork::SceneManager > scene, ork::ptr< proland::TerrainQuad > root)
	ork::ptr< ork::Task > update(ork::ptr< ork::SceneManager > scene, ork::ptr< proland::TerrainQuad > root) {
		if(_obj.pushFunction("update")) {
			_obj.pushArg((proland::TileSampler*)this);
			_obj.pushArg((ork::SceneManager*)scene.get());
			_obj.pushArg((proland::TerrainQuad*)root.get());
			return _obj.callFunction< ork::Task* >();
		}

		return TileSampler::update(scene, root);
	};


	// Protected non-virtual methods:
	// void proland::TileSampler::checkUniforms()
	void public_checkUniforms() {
		return proland::TileSampler::checkUniforms();
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_checkUniforms(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Protected non-virtual function binds:
	// void proland::TileSampler::public_checkUniforms()
	static int _bind_public_checkUniforms(lua_State *L) {
		if (!_lg_typecheck_public_checkUniforms(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TileSampler::public_checkUniforms() function, expected prototype:\nvoid proland::TileSampler::public_checkUniforms()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wrapper_proland_TileSampler* self=Luna< ork::Object >::checkSubType< wrapper_proland_TileSampler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TileSampler::public_checkUniforms(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_checkUniforms();

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"checkUniforms",_bind_public_checkUniforms},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif


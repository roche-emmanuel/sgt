#ifndef _WRAPPERS_WRAPPER_PROLAND_ATMOPROCESSOR_H_
#define _WRAPPERS_WRAPPER_PROLAND_ATMOPROCESSOR_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <W:/Cloud/Projects/sgt/sources/proland/sources/atmo/proland/preprocess/atmo/PreprocessAtmo.h>

class wrapper_proland_AtmoProcessor : public proland::AtmoProcessor, public luna_wrapper_base {

public:
		

	~wrapper_proland_AtmoProcessor() {
		logDEBUG3("Calling delete function for wrapper proland_AtmoProcessor");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::AtmoProcessor*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_AtmoProcessor(lua_State* L, lua_Table* dum, const proland::AtmoParameters & params, const char * output) 
		: proland::AtmoProcessor(params, output), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::AtmoProcessor*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((proland::AtmoProcessor*)this);
			return (_obj.callFunction<void>());
		}

		return AtmoProcessor::doRelease();
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((proland::AtmoProcessor*)this);
			return (_obj.callFunction<const char*>());
		}

		return AtmoProcessor::toString();
	};


	// Protected non-virtual methods:
	// void proland::AtmoProcessor::setParameters(ork::ptr< ork::Program > p)
	void public_setParameters(ork::ptr< ork::Program > p) {
		return proland::AtmoProcessor::setParameters(p);
	};

	// void proland::AtmoProcessor::setLayer(ork::ptr< ork::Program > p, int layer)
	void public_setLayer(ork::ptr< ork::Program > p, int layer) {
		return proland::AtmoProcessor::setLayer(p, layer);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_setParameters(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_setLayer(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,2) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void proland::AtmoProcessor::public_setParameters(ork::ptr< ork::Program > p)
	static int _bind_public_setParameters(lua_State *L) {
		if (!_lg_typecheck_public_setParameters(L)) {
			luaL_error(L, "luna typecheck failed in void proland::AtmoProcessor::public_setParameters(ork::ptr< ork::Program > p) function, expected prototype:\nvoid proland::AtmoProcessor::public_setParameters(ork::ptr< ork::Program > p)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Program > p = Luna< ork::Object >::checkSubType< ork::Program >(L,2);

		wrapper_proland_AtmoProcessor* self=Luna< ork::Object >::checkSubType< wrapper_proland_AtmoProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::AtmoProcessor::public_setParameters(ork::ptr< ork::Program >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_setParameters(p);

		return 0;
	}

	// void proland::AtmoProcessor::public_setLayer(ork::ptr< ork::Program > p, int layer)
	static int _bind_public_setLayer(lua_State *L) {
		if (!_lg_typecheck_public_setLayer(L)) {
			luaL_error(L, "luna typecheck failed in void proland::AtmoProcessor::public_setLayer(ork::ptr< ork::Program > p, int layer) function, expected prototype:\nvoid proland::AtmoProcessor::public_setLayer(ork::ptr< ork::Program > p, int layer)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Program > p = Luna< ork::Object >::checkSubType< ork::Program >(L,2);
		int layer=(int)lua_tointeger(L,3);

		wrapper_proland_AtmoProcessor* self=Luna< ork::Object >::checkSubType< wrapper_proland_AtmoProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::AtmoProcessor::public_setLayer(ork::ptr< ork::Program >, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_setLayer(p, layer);

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"setParameters",_bind_public_setParameters},
		{"setLayer",_bind_public_setLayer},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif


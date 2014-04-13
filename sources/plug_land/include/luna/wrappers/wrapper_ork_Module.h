#ifndef _WRAPPERS_WRAPPER_ORK_MODULE_H_
#define _WRAPPERS_WRAPPER_ORK_MODULE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <ork/render/Module.h>

class wrapper_ork_Module : public ork::Module, public luna_wrapper_base {

public:
		

	~wrapper_ork_Module() {
		logDEBUG3("Calling delete function for wrapper ork_Module");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((ork::Module*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_ork_Module(lua_State* L, lua_Table* dum, int version, const char * source) 
		: ork::Module(version, source), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((ork::Module*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_ork_Module(lua_State* L, lua_Table* dum, int version, const char * vertex, const char * fragment) 
		: ork::Module(version, vertex, fragment), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((ork::Module*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_ork_Module(lua_State* L, lua_Table* dum, int version, const char * vertex, const char * geometry, const char * fragment) 
		: ork::Module(version, vertex, geometry, fragment), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((ork::Module*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_ork_Module(lua_State* L, lua_Table* dum, int version, const char * vertex, const char * tessControl, const char * tessEvaluation, const char * geometry, const char * fragment) 
		: ork::Module(version, vertex, tessControl, tessEvaluation, geometry, fragment), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((ork::Module*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_ork_Module(lua_State* L, lua_Table* dum) 
		: ork::Module(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((ork::Module*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((ork::Module*)this);
			return (_obj.callFunction<void>());
		}

		return Module::doRelease();
	};

	// void ork::Module::swap(ork::ptr< ork::Module > s)
	void swap(ork::ptr< ork::Module > s) {
		if(_obj.pushFunction("swap")) {
			_obj.pushArg((ork::Module*)this);
			_obj.pushArg((ork::Module*)s.get());
			return (_obj.callFunction<void>());
		}

		return Module::swap(s);
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((ork::Module*)this);
			return (_obj.callFunction<const char*>());
		}

		return Module::toString();
	};


	// Protected non-virtual methods:
	// void ork::Module::init(int version, const char * source)
	void public_init(int version, const char * source) {
		return ork::Module::init(version, source);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_init(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void ork::Module::public_init(int version, const char * source)
	static int _bind_public_init(lua_State *L) {
		if (!_lg_typecheck_public_init(L)) {
			luaL_error(L, "luna typecheck failed in void ork::Module::public_init(int version, const char * source) function, expected prototype:\nvoid ork::Module::public_init(int version, const char * source)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int version=(int)lua_tointeger(L,2);
		const char * source=(const char *)lua_tostring(L,3);

		wrapper_ork_Module* self=Luna< ork::Object >::checkSubType< wrapper_ork_Module >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::Module::public_init(int, const char *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_init(version, source);

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


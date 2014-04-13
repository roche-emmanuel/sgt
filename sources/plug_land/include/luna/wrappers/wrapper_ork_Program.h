#ifndef _WRAPPERS_WRAPPER_ORK_PROGRAM_H_
#define _WRAPPERS_WRAPPER_ORK_PROGRAM_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <ork/render/Program.h>

class wrapper_ork_Program : public ork::Program, public luna_wrapper_base {

public:
		

	~wrapper_ork_Program() {
		logDEBUG3("Calling delete function for wrapper ork_Program");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((ork::Program*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_ork_Program(lua_State* L, lua_Table* dum, const std::vector< ork::ptr< ork::Module > > & modules, bool separable = false) 
		: ork::Program(modules, separable), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((ork::Program*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_ork_Program(lua_State* L, lua_Table* dum, ork::ptr< ork::Module > module, bool separable = false) 
		: ork::Program(module, separable), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((ork::Program*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_ork_Program(lua_State* L, lua_Table* dum, unsigned int format, int length, unsigned char * binary, bool separable = false) 
		: ork::Program(format, length, binary, separable), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((ork::Program*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_ork_Program(lua_State* L, lua_Table* dum, ork::ptr< ork::Program > vertex, ork::ptr< ork::Program > tessControl, ork::ptr< ork::Program > tessEval, ork::ptr< ork::Program > geometry, ork::ptr< ork::Program > fragment) 
		: ork::Program(vertex, tessControl, tessEval, geometry, fragment), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((ork::Program*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_ork_Program(lua_State* L, lua_Table* dum) 
		: ork::Program(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((ork::Program*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((ork::Program*)this);
			return (_obj.callFunction<void>());
		}

		return Program::doRelease();
	};

	// void ork::Program::swap(ork::ptr< ork::Program > t)
	void swap(ork::ptr< ork::Program > t) {
		if(_obj.pushFunction("swap")) {
			_obj.pushArg((ork::Program*)this);
			_obj.pushArg((ork::Program*)t.get());
			return (_obj.callFunction<void>());
		}

		return Program::swap(t);
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((ork::Program*)this);
			return (_obj.callFunction<const char*>());
		}

		return Program::toString();
	};

	// int ork::Program::getId() const
	int getId() const {
		if(_obj.pushFunction("getId")) {
			_obj.pushArg((ork::Program*)this);
			return (_obj.callFunction<int>());
		}

		return Program::getId();
	};


	// Protected non-virtual methods:
	// void ork::Program::init(const std::vector< ork::ptr< ork::Module > > & modules, bool separable)
	void public_init(const std::vector< ork::ptr< ork::Module > > & modules, bool separable) {
		return ork::Program::init(modules, separable);
	};

	// void ork::Program::initUniforms()
	void public_initUniforms() {
		return ork::Program::initUniforms();
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_init(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,8893137) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_initUniforms(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Protected non-virtual function binds:
	// void ork::Program::public_init(const std::vector< ork::ptr< ork::Module > > & modules, bool separable)
	static int _bind_public_init(lua_State *L) {
		if (!_lg_typecheck_public_init(L)) {
			luaL_error(L, "luna typecheck failed in void ork::Program::public_init(const std::vector< ork::ptr< ork::Module > > & modules, bool separable) function, expected prototype:\nvoid ork::Program::public_init(const std::vector< ork::ptr< ork::Module > > & modules, bool separable)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		const std::vector< ork::ptr< ork::Module > >* modules_ptr=(Luna< std::vector< ork::ptr< ork::Module > > >::check(L,2));
		if( !modules_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg modules in ork::Program::public_init function");
		}
		const std::vector< ork::ptr< ork::Module > > & modules=*modules_ptr;
		bool separable=(bool)(lua_toboolean(L,3)==1);

		wrapper_ork_Program* self=Luna< ork::Object >::checkSubType< wrapper_ork_Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::Program::public_init(const std::vector< ork::ptr< ork::Module > > &, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_init(modules, separable);

		return 0;
	}

	// void ork::Program::public_initUniforms()
	static int _bind_public_initUniforms(lua_State *L) {
		if (!_lg_typecheck_public_initUniforms(L)) {
			luaL_error(L, "luna typecheck failed in void ork::Program::public_initUniforms() function, expected prototype:\nvoid ork::Program::public_initUniforms()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wrapper_ork_Program* self=Luna< ork::Object >::checkSubType< wrapper_ork_Program >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::Program::public_initUniforms(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_initUniforms();

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"init",_bind_public_init},
		{"initUniforms",_bind_public_initUniforms},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif


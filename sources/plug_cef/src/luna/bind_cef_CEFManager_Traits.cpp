#include <plug_common.h>

class luna_wrapper_cef_CEFManager_Traits {
public:
	typedef Luna< cef::CEFManager::Traits > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,49043676) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(cef::CEFManager::Traits*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		cef::CEFManager::Traits* rhs =(Luna< cef::CEFManager::Traits >::check(L,2));
		cef::CEFManager::Traits* self=(Luna< cef::CEFManager::Traits >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		lua_pushboolean(L,self==rhs?1:0);

		return 1;
	}

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		cef::CEFManager::Traits* self= (cef::CEFManager::Traits*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< cef::CEFManager::Traits >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,49043676) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< cef::CEFManager::Traits >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		cef::CEFManager::Traits* self=(Luna< cef::CEFManager::Traits >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("cef::CEFManager::Traits");
		
		return luna_dynamicCast(L,converters,"cef::CEFManager::Traits",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,49043676) ) return false;
		if( (!(Luna< cef::CEFManager::Traits >::check(L,1))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_processPath_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_processPath_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_messageLoop_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_messageLoop_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck_op_assign(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,49043676) ) return false;
		return true;
	}


	// Constructor binds:
	// cef::CEFManager::Traits::Traits()
	static cef::CEFManager::Traits* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in cef::CEFManager::Traits::Traits() function, expected prototype:\ncef::CEFManager::Traits::Traits()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new cef::CEFManager::Traits();
	}

	// cef::CEFManager::Traits::Traits(const cef::CEFManager::Traits & rhs)
	static cef::CEFManager::Traits* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in cef::CEFManager::Traits::Traits(const cef::CEFManager::Traits & rhs) function, expected prototype:\ncef::CEFManager::Traits::Traits(const cef::CEFManager::Traits & rhs)\nClass arguments details:\narg 1 ID = 49043676\n\n%s",luna_dumpStack(L).c_str());
		}

		const cef::CEFManager::Traits* rhs_ptr=(Luna< cef::CEFManager::Traits >::check(L,1));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in cef::CEFManager::Traits::Traits function");
		}
		const cef::CEFManager::Traits & rhs=*rhs_ptr;

		return new cef::CEFManager::Traits(rhs);
	}

	// Overload binder for cef::CEFManager::Traits::Traits
	static cef::CEFManager::Traits* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Traits, cannot match any of the overloads for function Traits:\n  Traits()\n  Traits(const cef::CEFManager::Traits &)\n");
		return NULL;
	}


	// Function binds:
	// std::string cef::CEFManager::Traits::processPath() const
	static int _bind_processPath_overload_1(lua_State *L) {
		if (!_lg_typecheck_processPath_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in std::string cef::CEFManager::Traits::processPath() const function, expected prototype:\nstd::string cef::CEFManager::Traits::processPath() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		cef::CEFManager::Traits* self=(Luna< cef::CEFManager::Traits >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call std::string cef::CEFManager::Traits::processPath() const. Got : '%s'\n%s",typeid(Luna< cef::CEFManager::Traits >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		std::string lret = self->processPath();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// cef::CEFManager::Traits & cef::CEFManager::Traits::processPath(const std::string & path)
	static int _bind_processPath_overload_2(lua_State *L) {
		if (!_lg_typecheck_processPath_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in cef::CEFManager::Traits & cef::CEFManager::Traits::processPath(const std::string & path) function, expected prototype:\ncef::CEFManager::Traits & cef::CEFManager::Traits::processPath(const std::string & path)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string path(lua_tostring(L,2),lua_objlen(L,2));

		cef::CEFManager::Traits* self=(Luna< cef::CEFManager::Traits >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call cef::CEFManager::Traits & cef::CEFManager::Traits::processPath(const std::string &). Got : '%s'\n%s",typeid(Luna< cef::CEFManager::Traits >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const cef::CEFManager::Traits* lret = &self->processPath(path);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< cef::CEFManager::Traits >::push(L,lret,false);

		return 1;
	}

	// Overload binder for cef::CEFManager::Traits::processPath
	static int _bind_processPath(lua_State *L) {
		if (_lg_typecheck_processPath_overload_1(L)) return _bind_processPath_overload_1(L);
		if (_lg_typecheck_processPath_overload_2(L)) return _bind_processPath_overload_2(L);

		luaL_error(L, "error in function processPath, cannot match any of the overloads for function processPath:\n  processPath()\n  processPath(const std::string &)\n");
		return 0;
	}

	// bool cef::CEFManager::Traits::messageLoop() const
	static int _bind_messageLoop_overload_1(lua_State *L) {
		if (!_lg_typecheck_messageLoop_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool cef::CEFManager::Traits::messageLoop() const function, expected prototype:\nbool cef::CEFManager::Traits::messageLoop() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		cef::CEFManager::Traits* self=(Luna< cef::CEFManager::Traits >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool cef::CEFManager::Traits::messageLoop() const. Got : '%s'\n%s",typeid(Luna< cef::CEFManager::Traits >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->messageLoop();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// cef::CEFManager::Traits & cef::CEFManager::Traits::messageLoop(bool enabled)
	static int _bind_messageLoop_overload_2(lua_State *L) {
		if (!_lg_typecheck_messageLoop_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in cef::CEFManager::Traits & cef::CEFManager::Traits::messageLoop(bool enabled) function, expected prototype:\ncef::CEFManager::Traits & cef::CEFManager::Traits::messageLoop(bool enabled)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool enabled=(bool)(lua_toboolean(L,2)==1);

		cef::CEFManager::Traits* self=(Luna< cef::CEFManager::Traits >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call cef::CEFManager::Traits & cef::CEFManager::Traits::messageLoop(bool). Got : '%s'\n%s",typeid(Luna< cef::CEFManager::Traits >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const cef::CEFManager::Traits* lret = &self->messageLoop(enabled);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< cef::CEFManager::Traits >::push(L,lret,false);

		return 1;
	}

	// Overload binder for cef::CEFManager::Traits::messageLoop
	static int _bind_messageLoop(lua_State *L) {
		if (_lg_typecheck_messageLoop_overload_1(L)) return _bind_messageLoop_overload_1(L);
		if (_lg_typecheck_messageLoop_overload_2(L)) return _bind_messageLoop_overload_2(L);

		luaL_error(L, "error in function messageLoop, cannot match any of the overloads for function messageLoop:\n  messageLoop()\n  messageLoop(bool)\n");
		return 0;
	}


	// Operator binds:
	// cef::CEFManager::Traits & cef::CEFManager::Traits::operator=(const cef::CEFManager::Traits & rhs)
	static int _bind_op_assign(lua_State *L) {
		if (!_lg_typecheck_op_assign(L)) {
			luaL_error(L, "luna typecheck failed in cef::CEFManager::Traits & cef::CEFManager::Traits::operator=(const cef::CEFManager::Traits & rhs) function, expected prototype:\ncef::CEFManager::Traits & cef::CEFManager::Traits::operator=(const cef::CEFManager::Traits & rhs)\nClass arguments details:\narg 1 ID = 49043676\n\n%s",luna_dumpStack(L).c_str());
		}

		const cef::CEFManager::Traits* rhs_ptr=(Luna< cef::CEFManager::Traits >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in cef::CEFManager::Traits::operator= function");
		}
		const cef::CEFManager::Traits & rhs=*rhs_ptr;

		cef::CEFManager::Traits* self=(Luna< cef::CEFManager::Traits >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call cef::CEFManager::Traits & cef::CEFManager::Traits::operator=(const cef::CEFManager::Traits &). Got : '%s'\n%s",typeid(Luna< cef::CEFManager::Traits >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const cef::CEFManager::Traits* lret = &self->operator=(rhs);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< cef::CEFManager::Traits >::push(L,lret,false);

		return 1;
	}


};

cef::CEFManager::Traits* LunaTraits< cef::CEFManager::Traits >::_bind_ctor(lua_State *L) {
	return luna_wrapper_cef_CEFManager_Traits::_bind_ctor(L);
}

void LunaTraits< cef::CEFManager::Traits >::_bind_dtor(cef::CEFManager::Traits* obj) {
	delete obj;
}

const char LunaTraits< cef::CEFManager::Traits >::className[] = "CEFManager_Traits";
const char LunaTraits< cef::CEFManager::Traits >::fullName[] = "cef::CEFManager::Traits";
const char LunaTraits< cef::CEFManager::Traits >::moduleName[] = "cef";
const char* LunaTraits< cef::CEFManager::Traits >::parents[] = {0};
const int LunaTraits< cef::CEFManager::Traits >::hash = 49043676;
const int LunaTraits< cef::CEFManager::Traits >::uniqueIDs[] = {49043676,0};

luna_RegType LunaTraits< cef::CEFManager::Traits >::methods[] = {
	{"processPath", &luna_wrapper_cef_CEFManager_Traits::_bind_processPath},
	{"messageLoop", &luna_wrapper_cef_CEFManager_Traits::_bind_messageLoop},
	{"op_assign", &luna_wrapper_cef_CEFManager_Traits::_bind_op_assign},
	{"dynCast", &luna_wrapper_cef_CEFManager_Traits::_bind_dynCast},
	{"__eq", &luna_wrapper_cef_CEFManager_Traits::_bind___eq},
	{"fromVoid", &luna_wrapper_cef_CEFManager_Traits::_bind_fromVoid},
	{"asVoid", &luna_wrapper_cef_CEFManager_Traits::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< cef::CEFManager::Traits >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< cef::CEFManager::Traits >::enumValues[] = {
	{0,0}
};



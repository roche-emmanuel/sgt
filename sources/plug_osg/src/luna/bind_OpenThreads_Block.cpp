#include <plug_common.h>

class luna_wrapper_OpenThreads_Block {
public:
	typedef Luna< OpenThreads::Block > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92736679) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(OpenThreads::Block*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		OpenThreads::Block* rhs =(Luna< OpenThreads::Block >::check(L,2));
		OpenThreads::Block* self=(Luna< OpenThreads::Block >::check(L,1));
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

		OpenThreads::Block* self= (OpenThreads::Block*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< OpenThreads::Block >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92736679) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< OpenThreads::Block >::check(L,1));
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

		OpenThreads::Block* self=(Luna< OpenThreads::Block >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("OpenThreads::Block");
		
		return luna_dynamicCast(L,converters,"OpenThreads::Block",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_block_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_block_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_release(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_set(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// OpenThreads::Block::Block()
	static OpenThreads::Block* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in OpenThreads::Block::Block() function, expected prototype:\nOpenThreads::Block::Block()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new OpenThreads::Block();
	}


	// Function binds:
	// bool OpenThreads::Block::block()
	static int _bind_block_overload_1(lua_State *L) {
		if (!_lg_typecheck_block_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool OpenThreads::Block::block() function, expected prototype:\nbool OpenThreads::Block::block()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		OpenThreads::Block* self=(Luna< OpenThreads::Block >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool OpenThreads::Block::block(). Got : '%s'\n%s",typeid(Luna< OpenThreads::Block >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->block();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool OpenThreads::Block::block(unsigned long timeout)
	static int _bind_block_overload_2(lua_State *L) {
		if (!_lg_typecheck_block_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool OpenThreads::Block::block(unsigned long timeout) function, expected prototype:\nbool OpenThreads::Block::block(unsigned long timeout)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long timeout=(unsigned long)lua_tonumber(L,2);

		OpenThreads::Block* self=(Luna< OpenThreads::Block >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool OpenThreads::Block::block(unsigned long). Got : '%s'\n%s",typeid(Luna< OpenThreads::Block >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->block(timeout);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for OpenThreads::Block::block
	static int _bind_block(lua_State *L) {
		if (_lg_typecheck_block_overload_1(L)) return _bind_block_overload_1(L);
		if (_lg_typecheck_block_overload_2(L)) return _bind_block_overload_2(L);

		luaL_error(L, "error in function block, cannot match any of the overloads for function block:\n  block()\n  block(unsigned long)\n");
		return 0;
	}

	// void OpenThreads::Block::release()
	static int _bind_release(lua_State *L) {
		if (!_lg_typecheck_release(L)) {
			luaL_error(L, "luna typecheck failed in void OpenThreads::Block::release() function, expected prototype:\nvoid OpenThreads::Block::release()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		OpenThreads::Block* self=(Luna< OpenThreads::Block >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void OpenThreads::Block::release(). Got : '%s'\n%s",typeid(Luna< OpenThreads::Block >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->release();

		return 0;
	}

	// void OpenThreads::Block::reset()
	static int _bind_reset(lua_State *L) {
		if (!_lg_typecheck_reset(L)) {
			luaL_error(L, "luna typecheck failed in void OpenThreads::Block::reset() function, expected prototype:\nvoid OpenThreads::Block::reset()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		OpenThreads::Block* self=(Luna< OpenThreads::Block >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void OpenThreads::Block::reset(). Got : '%s'\n%s",typeid(Luna< OpenThreads::Block >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->reset();

		return 0;
	}

	// void OpenThreads::Block::set(bool doRelease)
	static int _bind_set(lua_State *L) {
		if (!_lg_typecheck_set(L)) {
			luaL_error(L, "luna typecheck failed in void OpenThreads::Block::set(bool doRelease) function, expected prototype:\nvoid OpenThreads::Block::set(bool doRelease)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool doRelease=(bool)(lua_toboolean(L,2)==1);

		OpenThreads::Block* self=(Luna< OpenThreads::Block >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void OpenThreads::Block::set(bool). Got : '%s'\n%s",typeid(Luna< OpenThreads::Block >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set(doRelease);

		return 0;
	}


	// Operator binds:

};

OpenThreads::Block* LunaTraits< OpenThreads::Block >::_bind_ctor(lua_State *L) {
	return luna_wrapper_OpenThreads_Block::_bind_ctor(L);
}

void LunaTraits< OpenThreads::Block >::_bind_dtor(OpenThreads::Block* obj) {
	delete obj;
}

const char LunaTraits< OpenThreads::Block >::className[] = "Block";
const char LunaTraits< OpenThreads::Block >::fullName[] = "OpenThreads::Block";
const char LunaTraits< OpenThreads::Block >::moduleName[] = "OpenThreads";
const char* LunaTraits< OpenThreads::Block >::parents[] = {0};
const int LunaTraits< OpenThreads::Block >::hash = 92736679;
const int LunaTraits< OpenThreads::Block >::uniqueIDs[] = {92736679,0};

luna_RegType LunaTraits< OpenThreads::Block >::methods[] = {
	{"block", &luna_wrapper_OpenThreads_Block::_bind_block},
	{"release", &luna_wrapper_OpenThreads_Block::_bind_release},
	{"reset", &luna_wrapper_OpenThreads_Block::_bind_reset},
	{"set", &luna_wrapper_OpenThreads_Block::_bind_set},
	{"dynCast", &luna_wrapper_OpenThreads_Block::_bind_dynCast},
	{"__eq", &luna_wrapper_OpenThreads_Block::_bind___eq},
	{"fromVoid", &luna_wrapper_OpenThreads_Block::_bind_fromVoid},
	{"asVoid", &luna_wrapper_OpenThreads_Block::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< OpenThreads::Block >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< OpenThreads::Block >::enumValues[] = {
	{0,0}
};



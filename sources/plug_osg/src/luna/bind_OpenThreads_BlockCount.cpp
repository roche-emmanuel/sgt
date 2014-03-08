#include <plug_common.h>

class luna_wrapper_OpenThreads_BlockCount {
public:
	typedef Luna< OpenThreads::BlockCount > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,46486281) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(OpenThreads::BlockCount*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		OpenThreads::BlockCount* rhs =(Luna< OpenThreads::BlockCount >::check(L,2));
		OpenThreads::BlockCount* self=(Luna< OpenThreads::BlockCount >::check(L,1));
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

		OpenThreads::BlockCount* self= (OpenThreads::BlockCount*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< OpenThreads::BlockCount >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,46486281) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< OpenThreads::BlockCount >::check(L,1));
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

		OpenThreads::BlockCount* self=(Luna< OpenThreads::BlockCount >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("OpenThreads::BlockCount");
		
		return luna_dynamicCast(L,converters,"OpenThreads::BlockCount",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_completed(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_block(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_release(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setBlockCount(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getBlockCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCurrentCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// OpenThreads::BlockCount::BlockCount(unsigned int blockCount)
	static OpenThreads::BlockCount* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in OpenThreads::BlockCount::BlockCount(unsigned int blockCount) function, expected prototype:\nOpenThreads::BlockCount::BlockCount(unsigned int blockCount)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int blockCount=(unsigned int)lua_tointeger(L,1);

		return new OpenThreads::BlockCount(blockCount);
	}


	// Function binds:
	// void OpenThreads::BlockCount::completed()
	static int _bind_completed(lua_State *L) {
		if (!_lg_typecheck_completed(L)) {
			luaL_error(L, "luna typecheck failed in void OpenThreads::BlockCount::completed() function, expected prototype:\nvoid OpenThreads::BlockCount::completed()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		OpenThreads::BlockCount* self=(Luna< OpenThreads::BlockCount >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void OpenThreads::BlockCount::completed(). Got : '%s'\n%s",typeid(Luna< OpenThreads::BlockCount >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->completed();

		return 0;
	}

	// void OpenThreads::BlockCount::block()
	static int _bind_block(lua_State *L) {
		if (!_lg_typecheck_block(L)) {
			luaL_error(L, "luna typecheck failed in void OpenThreads::BlockCount::block() function, expected prototype:\nvoid OpenThreads::BlockCount::block()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		OpenThreads::BlockCount* self=(Luna< OpenThreads::BlockCount >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void OpenThreads::BlockCount::block(). Got : '%s'\n%s",typeid(Luna< OpenThreads::BlockCount >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->block();

		return 0;
	}

	// void OpenThreads::BlockCount::reset()
	static int _bind_reset(lua_State *L) {
		if (!_lg_typecheck_reset(L)) {
			luaL_error(L, "luna typecheck failed in void OpenThreads::BlockCount::reset() function, expected prototype:\nvoid OpenThreads::BlockCount::reset()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		OpenThreads::BlockCount* self=(Luna< OpenThreads::BlockCount >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void OpenThreads::BlockCount::reset(). Got : '%s'\n%s",typeid(Luna< OpenThreads::BlockCount >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->reset();

		return 0;
	}

	// void OpenThreads::BlockCount::release()
	static int _bind_release(lua_State *L) {
		if (!_lg_typecheck_release(L)) {
			luaL_error(L, "luna typecheck failed in void OpenThreads::BlockCount::release() function, expected prototype:\nvoid OpenThreads::BlockCount::release()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		OpenThreads::BlockCount* self=(Luna< OpenThreads::BlockCount >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void OpenThreads::BlockCount::release(). Got : '%s'\n%s",typeid(Luna< OpenThreads::BlockCount >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->release();

		return 0;
	}

	// void OpenThreads::BlockCount::setBlockCount(unsigned int blockCount)
	static int _bind_setBlockCount(lua_State *L) {
		if (!_lg_typecheck_setBlockCount(L)) {
			luaL_error(L, "luna typecheck failed in void OpenThreads::BlockCount::setBlockCount(unsigned int blockCount) function, expected prototype:\nvoid OpenThreads::BlockCount::setBlockCount(unsigned int blockCount)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int blockCount=(unsigned int)lua_tointeger(L,2);

		OpenThreads::BlockCount* self=(Luna< OpenThreads::BlockCount >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void OpenThreads::BlockCount::setBlockCount(unsigned int). Got : '%s'\n%s",typeid(Luna< OpenThreads::BlockCount >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setBlockCount(blockCount);

		return 0;
	}

	// unsigned int OpenThreads::BlockCount::getBlockCount() const
	static int _bind_getBlockCount(lua_State *L) {
		if (!_lg_typecheck_getBlockCount(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int OpenThreads::BlockCount::getBlockCount() const function, expected prototype:\nunsigned int OpenThreads::BlockCount::getBlockCount() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		OpenThreads::BlockCount* self=(Luna< OpenThreads::BlockCount >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int OpenThreads::BlockCount::getBlockCount() const. Got : '%s'\n%s",typeid(Luna< OpenThreads::BlockCount >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getBlockCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int OpenThreads::BlockCount::getCurrentCount() const
	static int _bind_getCurrentCount(lua_State *L) {
		if (!_lg_typecheck_getCurrentCount(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int OpenThreads::BlockCount::getCurrentCount() const function, expected prototype:\nunsigned int OpenThreads::BlockCount::getCurrentCount() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		OpenThreads::BlockCount* self=(Luna< OpenThreads::BlockCount >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int OpenThreads::BlockCount::getCurrentCount() const. Got : '%s'\n%s",typeid(Luna< OpenThreads::BlockCount >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getCurrentCount();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

OpenThreads::BlockCount* LunaTraits< OpenThreads::BlockCount >::_bind_ctor(lua_State *L) {
	return luna_wrapper_OpenThreads_BlockCount::_bind_ctor(L);
}

void LunaTraits< OpenThreads::BlockCount >::_bind_dtor(OpenThreads::BlockCount* obj) {
	delete obj;
}

const char LunaTraits< OpenThreads::BlockCount >::className[] = "BlockCount";
const char LunaTraits< OpenThreads::BlockCount >::fullName[] = "OpenThreads::BlockCount";
const char LunaTraits< OpenThreads::BlockCount >::moduleName[] = "OpenThreads";
const char* LunaTraits< OpenThreads::BlockCount >::parents[] = {0};
const int LunaTraits< OpenThreads::BlockCount >::hash = 46486281;
const int LunaTraits< OpenThreads::BlockCount >::uniqueIDs[] = {46486281,0};

luna_RegType LunaTraits< OpenThreads::BlockCount >::methods[] = {
	{"completed", &luna_wrapper_OpenThreads_BlockCount::_bind_completed},
	{"block", &luna_wrapper_OpenThreads_BlockCount::_bind_block},
	{"reset", &luna_wrapper_OpenThreads_BlockCount::_bind_reset},
	{"release", &luna_wrapper_OpenThreads_BlockCount::_bind_release},
	{"setBlockCount", &luna_wrapper_OpenThreads_BlockCount::_bind_setBlockCount},
	{"getBlockCount", &luna_wrapper_OpenThreads_BlockCount::_bind_getBlockCount},
	{"getCurrentCount", &luna_wrapper_OpenThreads_BlockCount::_bind_getCurrentCount},
	{"dynCast", &luna_wrapper_OpenThreads_BlockCount::_bind_dynCast},
	{"__eq", &luna_wrapper_OpenThreads_BlockCount::_bind___eq},
	{"fromVoid", &luna_wrapper_OpenThreads_BlockCount::_bind_fromVoid},
	{"asVoid", &luna_wrapper_OpenThreads_BlockCount::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< OpenThreads::BlockCount >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< OpenThreads::BlockCount >::enumValues[] = {
	{0,0}
};



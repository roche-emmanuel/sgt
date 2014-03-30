#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_vector_void_ptr {
public:
	typedef Luna< std::vector< void * > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,87530881) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::vector< void * >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::vector< void * >* rhs =(Luna< std::vector< void * > >::check(L,2));
		std::vector< void * >* self=(Luna< std::vector< void * > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
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

		std::vector< void * >* self=(Luna< std::vector< void * > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::vector< void * >");
		
		return luna_dynamicCast(L,converters,"std::vector< void * >",name);
	}

	inline static bool _lg_typecheck_assign(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_at(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_back(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_front(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_clear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_empty(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_size(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_resize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_pop_back(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_push_back(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_index(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// void std::vector< void * >::assign(unsigned int arg1, void * arg2)
	static int _bind_assign(lua_State *L) {
		if (!_lg_typecheck_assign(L)) {
			luaL_error(L, "luna typecheck failed in void std::vector< void * >::assign(unsigned int arg1, void * arg2) function, expected prototype:\nvoid std::vector< void * >::assign(unsigned int arg1, void * arg2)\nClass arguments details:\narg 2 ID = 3625364\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int arg1=(unsigned int)lua_tointeger(L,2);
		void* arg2=(Luna< void >::check(L,3));

		std::vector< void * >* self=(Luna< std::vector< void * > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void std::vector< void * >::assign(unsigned int, void *). Got : '%s'\n%s",typeid(Luna< std::vector< void * > >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->assign(arg1, arg2);

		return 0;
	}

	// void * std::vector< void * >::at(unsigned int arg1)
	static int _bind_at(lua_State *L) {
		if (!_lg_typecheck_at(L)) {
			luaL_error(L, "luna typecheck failed in void * std::vector< void * >::at(unsigned int arg1) function, expected prototype:\nvoid * std::vector< void * >::at(unsigned int arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int arg1=(unsigned int)lua_tointeger(L,2);

		std::vector< void * >* self=(Luna< std::vector< void * > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void * std::vector< void * >::at(unsigned int). Got : '%s'\n%s",typeid(Luna< std::vector< void * > >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		void * lret = self->at(arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// void * std::vector< void * >::back()
	static int _bind_back(lua_State *L) {
		if (!_lg_typecheck_back(L)) {
			luaL_error(L, "luna typecheck failed in void * std::vector< void * >::back() function, expected prototype:\nvoid * std::vector< void * >::back()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		std::vector< void * >* self=(Luna< std::vector< void * > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void * std::vector< void * >::back(). Got : '%s'\n%s",typeid(Luna< std::vector< void * > >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		void * lret = self->back();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// void * std::vector< void * >::front()
	static int _bind_front(lua_State *L) {
		if (!_lg_typecheck_front(L)) {
			luaL_error(L, "luna typecheck failed in void * std::vector< void * >::front() function, expected prototype:\nvoid * std::vector< void * >::front()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		std::vector< void * >* self=(Luna< std::vector< void * > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void * std::vector< void * >::front(). Got : '%s'\n%s",typeid(Luna< std::vector< void * > >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		void * lret = self->front();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// void std::vector< void * >::clear()
	static int _bind_clear(lua_State *L) {
		if (!_lg_typecheck_clear(L)) {
			luaL_error(L, "luna typecheck failed in void std::vector< void * >::clear() function, expected prototype:\nvoid std::vector< void * >::clear()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		std::vector< void * >* self=(Luna< std::vector< void * > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void std::vector< void * >::clear(). Got : '%s'\n%s",typeid(Luna< std::vector< void * > >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->clear();

		return 0;
	}

	// bool std::vector< void * >::empty()
	static int _bind_empty(lua_State *L) {
		if (!_lg_typecheck_empty(L)) {
			luaL_error(L, "luna typecheck failed in bool std::vector< void * >::empty() function, expected prototype:\nbool std::vector< void * >::empty()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		std::vector< void * >* self=(Luna< std::vector< void * > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool std::vector< void * >::empty(). Got : '%s'\n%s",typeid(Luna< std::vector< void * > >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->empty();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// unsigned int std::vector< void * >::size()
	static int _bind_size(lua_State *L) {
		if (!_lg_typecheck_size(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int std::vector< void * >::size() function, expected prototype:\nunsigned int std::vector< void * >::size()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		std::vector< void * >* self=(Luna< std::vector< void * > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int std::vector< void * >::size(). Got : '%s'\n%s",typeid(Luna< std::vector< void * > >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->size();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void std::vector< void * >::resize(unsigned int arg1)
	static int _bind_resize(lua_State *L) {
		if (!_lg_typecheck_resize(L)) {
			luaL_error(L, "luna typecheck failed in void std::vector< void * >::resize(unsigned int arg1) function, expected prototype:\nvoid std::vector< void * >::resize(unsigned int arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int arg1=(unsigned int)lua_tointeger(L,2);

		std::vector< void * >* self=(Luna< std::vector< void * > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void std::vector< void * >::resize(unsigned int). Got : '%s'\n%s",typeid(Luna< std::vector< void * > >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->resize(arg1);

		return 0;
	}

	// void std::vector< void * >::pop_back()
	static int _bind_pop_back(lua_State *L) {
		if (!_lg_typecheck_pop_back(L)) {
			luaL_error(L, "luna typecheck failed in void std::vector< void * >::pop_back() function, expected prototype:\nvoid std::vector< void * >::pop_back()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		std::vector< void * >* self=(Luna< std::vector< void * > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void std::vector< void * >::pop_back(). Got : '%s'\n%s",typeid(Luna< std::vector< void * > >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->pop_back();

		return 0;
	}

	// void std::vector< void * >::push_back(void * arg1)
	static int _bind_push_back(lua_State *L) {
		if (!_lg_typecheck_push_back(L)) {
			luaL_error(L, "luna typecheck failed in void std::vector< void * >::push_back(void * arg1) function, expected prototype:\nvoid std::vector< void * >::push_back(void * arg1)\nClass arguments details:\narg 1 ID = 3625364\n\n%s",luna_dumpStack(L).c_str());
		}

		void* arg1=(Luna< void >::check(L,2));

		std::vector< void * >* self=(Luna< std::vector< void * > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void std::vector< void * >::push_back(void *). Got : '%s'\n%s",typeid(Luna< std::vector< void * > >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->push_back(arg1);

		return 0;
	}

	// void * std::vector< void * >::operator[](unsigned int arg1)
	static int _bind_op_index(lua_State *L) {
		if (!_lg_typecheck_op_index(L)) {
			luaL_error(L, "luna typecheck failed in void * std::vector< void * >::operator[](unsigned int arg1) function, expected prototype:\nvoid * std::vector< void * >::operator[](unsigned int arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int arg1=(unsigned int)lua_tointeger(L,2);

		std::vector< void * >* self=(Luna< std::vector< void * > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void * std::vector< void * >::operator[](unsigned int). Got : '%s'\n%s",typeid(Luna< std::vector< void * > >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		void * lret = self->operator[](arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

};

std::vector< void * >* LunaTraits< std::vector< void * > >::_bind_ctor(lua_State *L) {
	return new std::vector< void * >();
}

void LunaTraits< std::vector< void * > >::_bind_dtor(std::vector< void * >* obj) {
	delete obj;
}

const char LunaTraits< std::vector< void * > >::className[] = "std_vector_void_ptr";
const char LunaTraits< std::vector< void * > >::fullName[] = "std::vector< void * >";
const char LunaTraits< std::vector< void * > >::moduleName[] = "sgt";
const char* LunaTraits< std::vector< void * > >::parents[] = {0};
const int LunaTraits< std::vector< void * > >::hash = 87530881;
const int LunaTraits< std::vector< void * > >::uniqueIDs[] = {87530881,0};

luna_RegType LunaTraits< std::vector< void * > >::methods[] = {
	{"dynCast", &luna_wrapper_std_vector_void_ptr::_bind_dynCast},
	{"__eq", &luna_wrapper_std_vector_void_ptr::_bind___eq},
	
	{"assign", &luna_wrapper_std_vector_void_ptr::_bind_assign},
	{"at", &luna_wrapper_std_vector_void_ptr::_bind_at},
	{"back", &luna_wrapper_std_vector_void_ptr::_bind_back},
	{"front", &luna_wrapper_std_vector_void_ptr::_bind_front},
	{"clear", &luna_wrapper_std_vector_void_ptr::_bind_clear},
	{"empty", &luna_wrapper_std_vector_void_ptr::_bind_empty},
	{"size", &luna_wrapper_std_vector_void_ptr::_bind_size},
	{"resize", &luna_wrapper_std_vector_void_ptr::_bind_resize},
	{"pop_back", &luna_wrapper_std_vector_void_ptr::_bind_pop_back},
	{"push_back", &luna_wrapper_std_vector_void_ptr::_bind_push_back},
	{"op_index", &luna_wrapper_std_vector_void_ptr::_bind_op_index},
	{0,0}
};

luna_ConverterType LunaTraits< std::vector< void * > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::vector< void * > >::enumValues[] = {
	{0,0}
};



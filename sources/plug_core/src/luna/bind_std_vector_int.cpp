#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_vector_int {
public:
	typedef Luna< std::vector< int > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92299338) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::vector< int >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::vector< int >* rhs =(Luna< std::vector< int > >::check(L,2));
		std::vector< int >* self=(Luna< std::vector< int > >::check(L,1));
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

		std::vector< int >* self=(Luna< std::vector< int > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::vector< int >");
		
		return luna_dynamicCast(L,converters,"std::vector< int >",name);
	}

	inline static bool _lg_typecheck_assign(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
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

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_index(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// void std::vector< int >::assign(unsigned int arg1, int arg2)
	static int _bind_assign(lua_State *L) {
		if (!_lg_typecheck_assign(L)) {
			luaL_error(L, "luna typecheck failed in void std::vector< int >::assign(unsigned int arg1, int arg2) function, expected prototype:\nvoid std::vector< int >::assign(unsigned int arg1, int arg2)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int arg1=(unsigned int)lua_tointeger(L,2);
		int arg2=(int)lua_tointeger(L,3);

		std::vector< int >* self=(Luna< std::vector< int > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void std::vector< int >::assign(unsigned int, int). Got : '%s'\n%s",typeid(Luna< std::vector< int > >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->assign(arg1, arg2);

		return 0;
	}

	// int std::vector< int >::at(unsigned int arg1)
	static int _bind_at(lua_State *L) {
		if (!_lg_typecheck_at(L)) {
			luaL_error(L, "luna typecheck failed in int std::vector< int >::at(unsigned int arg1) function, expected prototype:\nint std::vector< int >::at(unsigned int arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int arg1=(unsigned int)lua_tointeger(L,2);

		std::vector< int >* self=(Luna< std::vector< int > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int std::vector< int >::at(unsigned int). Got : '%s'\n%s",typeid(Luna< std::vector< int > >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->at(arg1);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int std::vector< int >::back()
	static int _bind_back(lua_State *L) {
		if (!_lg_typecheck_back(L)) {
			luaL_error(L, "luna typecheck failed in int std::vector< int >::back() function, expected prototype:\nint std::vector< int >::back()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		std::vector< int >* self=(Luna< std::vector< int > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int std::vector< int >::back(). Got : '%s'\n%s",typeid(Luna< std::vector< int > >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->back();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int std::vector< int >::front()
	static int _bind_front(lua_State *L) {
		if (!_lg_typecheck_front(L)) {
			luaL_error(L, "luna typecheck failed in int std::vector< int >::front() function, expected prototype:\nint std::vector< int >::front()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		std::vector< int >* self=(Luna< std::vector< int > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int std::vector< int >::front(). Got : '%s'\n%s",typeid(Luna< std::vector< int > >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->front();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void std::vector< int >::clear()
	static int _bind_clear(lua_State *L) {
		if (!_lg_typecheck_clear(L)) {
			luaL_error(L, "luna typecheck failed in void std::vector< int >::clear() function, expected prototype:\nvoid std::vector< int >::clear()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		std::vector< int >* self=(Luna< std::vector< int > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void std::vector< int >::clear(). Got : '%s'\n%s",typeid(Luna< std::vector< int > >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->clear();

		return 0;
	}

	// bool std::vector< int >::empty()
	static int _bind_empty(lua_State *L) {
		if (!_lg_typecheck_empty(L)) {
			luaL_error(L, "luna typecheck failed in bool std::vector< int >::empty() function, expected prototype:\nbool std::vector< int >::empty()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		std::vector< int >* self=(Luna< std::vector< int > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool std::vector< int >::empty(). Got : '%s'\n%s",typeid(Luna< std::vector< int > >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->empty();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// unsigned int std::vector< int >::size()
	static int _bind_size(lua_State *L) {
		if (!_lg_typecheck_size(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int std::vector< int >::size() function, expected prototype:\nunsigned int std::vector< int >::size()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		std::vector< int >* self=(Luna< std::vector< int > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int std::vector< int >::size(). Got : '%s'\n%s",typeid(Luna< std::vector< int > >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->size();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void std::vector< int >::resize(unsigned int arg1)
	static int _bind_resize(lua_State *L) {
		if (!_lg_typecheck_resize(L)) {
			luaL_error(L, "luna typecheck failed in void std::vector< int >::resize(unsigned int arg1) function, expected prototype:\nvoid std::vector< int >::resize(unsigned int arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int arg1=(unsigned int)lua_tointeger(L,2);

		std::vector< int >* self=(Luna< std::vector< int > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void std::vector< int >::resize(unsigned int). Got : '%s'\n%s",typeid(Luna< std::vector< int > >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->resize(arg1);

		return 0;
	}

	// void std::vector< int >::pop_back()
	static int _bind_pop_back(lua_State *L) {
		if (!_lg_typecheck_pop_back(L)) {
			luaL_error(L, "luna typecheck failed in void std::vector< int >::pop_back() function, expected prototype:\nvoid std::vector< int >::pop_back()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		std::vector< int >* self=(Luna< std::vector< int > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void std::vector< int >::pop_back(). Got : '%s'\n%s",typeid(Luna< std::vector< int > >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->pop_back();

		return 0;
	}

	// void std::vector< int >::push_back(int arg1)
	static int _bind_push_back(lua_State *L) {
		if (!_lg_typecheck_push_back(L)) {
			luaL_error(L, "luna typecheck failed in void std::vector< int >::push_back(int arg1) function, expected prototype:\nvoid std::vector< int >::push_back(int arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int arg1=(int)lua_tointeger(L,2);

		std::vector< int >* self=(Luna< std::vector< int > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void std::vector< int >::push_back(int). Got : '%s'\n%s",typeid(Luna< std::vector< int > >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->push_back(arg1);

		return 0;
	}

	// int std::vector< int >::operator[](unsigned int arg1)
	static int _bind_op_index(lua_State *L) {
		if (!_lg_typecheck_op_index(L)) {
			luaL_error(L, "luna typecheck failed in int std::vector< int >::operator[](unsigned int arg1) function, expected prototype:\nint std::vector< int >::operator[](unsigned int arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int arg1=(unsigned int)lua_tointeger(L,2);

		std::vector< int >* self=(Luna< std::vector< int > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int std::vector< int >::operator[](unsigned int). Got : '%s'\n%s",typeid(Luna< std::vector< int > >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->operator[](arg1);
		lua_pushnumber(L,lret);

		return 1;
	}

};

std::vector< int >* LunaTraits< std::vector< int > >::_bind_ctor(lua_State *L) {
	return new std::vector< int >();
}

void LunaTraits< std::vector< int > >::_bind_dtor(std::vector< int >* obj) {
	delete obj;
}

const char LunaTraits< std::vector< int > >::className[] = "std_vector_int";
const char LunaTraits< std::vector< int > >::fullName[] = "std::vector< int >";
const char LunaTraits< std::vector< int > >::moduleName[] = "sgt";
const char* LunaTraits< std::vector< int > >::parents[] = {0};
const int LunaTraits< std::vector< int > >::hash = 92299338;
const int LunaTraits< std::vector< int > >::uniqueIDs[] = {92299338,0};

luna_RegType LunaTraits< std::vector< int > >::methods[] = {
	{"dynCast", &luna_wrapper_std_vector_int::_bind_dynCast},
	{"__eq", &luna_wrapper_std_vector_int::_bind___eq},
	
	{"assign", &luna_wrapper_std_vector_int::_bind_assign},
	{"at", &luna_wrapper_std_vector_int::_bind_at},
	{"back", &luna_wrapper_std_vector_int::_bind_back},
	{"front", &luna_wrapper_std_vector_int::_bind_front},
	{"clear", &luna_wrapper_std_vector_int::_bind_clear},
	{"empty", &luna_wrapper_std_vector_int::_bind_empty},
	{"size", &luna_wrapper_std_vector_int::_bind_size},
	{"resize", &luna_wrapper_std_vector_int::_bind_resize},
	{"pop_back", &luna_wrapper_std_vector_int::_bind_pop_back},
	{"push_back", &luna_wrapper_std_vector_int::_bind_push_back},
	{"op_index", &luna_wrapper_std_vector_int::_bind_op_index},
	{0,0}
};

luna_ConverterType LunaTraits< std::vector< int > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::vector< int > >::enumValues[] = {
	{0,0}
};



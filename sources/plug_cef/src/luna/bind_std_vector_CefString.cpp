#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_vector_CefString {
public:
	typedef Luna< std::vector< CefString > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,64498953) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::vector< CefString >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::vector< CefString >* rhs =(Luna< std::vector< CefString > >::check(L,2));
		std::vector< CefString >* self=(Luna< std::vector< CefString > >::check(L,1));
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

		std::vector< CefString >* self=(Luna< std::vector< CefString > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::vector< CefString >");
		
		return luna_dynamicCast(L,converters,"std::vector< CefString >",name);
	}

	inline static bool _lg_typecheck_assign(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TSTRING) ) return false;
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

		if( (lua_type(L,2)!=LUA_TSTRING) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_index(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// void std::vector< CefString >::assign(unsigned int arg1, CefString arg2)
	static int _bind_assign(lua_State *L) {
		if (!_lg_typecheck_assign(L)) {
			luaL_error(L, "luna typecheck failed in void std::vector< CefString >::assign(unsigned int arg1, CefString arg2) function, expected prototype:\nvoid std::vector< CefString >::assign(unsigned int arg1, CefString arg2)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int arg1=(unsigned int)lua_tointeger(L,2);
		CefString arg2; std::string arg2_str(lua_tostring(L,3),lua_objlen(L,3));
		arg2.FromString(arg2_str);

		std::vector< CefString >* self=(Luna< std::vector< CefString > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void std::vector< CefString >::assign(unsigned int, CefString). Got : '%s'\n%s",typeid(Luna< std::vector< CefString > >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->assign(arg1, arg2);

		return 0;
	}

	// CefString std::vector< CefString >::at(unsigned int arg1)
	static int _bind_at(lua_State *L) {
		if (!_lg_typecheck_at(L)) {
			luaL_error(L, "luna typecheck failed in CefString std::vector< CefString >::at(unsigned int arg1) function, expected prototype:\nCefString std::vector< CefString >::at(unsigned int arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int arg1=(unsigned int)lua_tointeger(L,2);

		std::vector< CefString >* self=(Luna< std::vector< CefString > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call CefString std::vector< CefString >::at(unsigned int). Got : '%s'\n%s",typeid(Luna< std::vector< CefString > >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		CefString lret = self->at(arg1);
		std::string lret_str = lret.ToString();
		lua_pushlstring(L,lret_str.data(),lret_str.size());

		return 1;
	}

	// CefString std::vector< CefString >::back()
	static int _bind_back(lua_State *L) {
		if (!_lg_typecheck_back(L)) {
			luaL_error(L, "luna typecheck failed in CefString std::vector< CefString >::back() function, expected prototype:\nCefString std::vector< CefString >::back()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		std::vector< CefString >* self=(Luna< std::vector< CefString > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call CefString std::vector< CefString >::back(). Got : '%s'\n%s",typeid(Luna< std::vector< CefString > >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		CefString lret = self->back();
		std::string lret_str = lret.ToString();
		lua_pushlstring(L,lret_str.data(),lret_str.size());

		return 1;
	}

	// CefString std::vector< CefString >::front()
	static int _bind_front(lua_State *L) {
		if (!_lg_typecheck_front(L)) {
			luaL_error(L, "luna typecheck failed in CefString std::vector< CefString >::front() function, expected prototype:\nCefString std::vector< CefString >::front()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		std::vector< CefString >* self=(Luna< std::vector< CefString > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call CefString std::vector< CefString >::front(). Got : '%s'\n%s",typeid(Luna< std::vector< CefString > >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		CefString lret = self->front();
		std::string lret_str = lret.ToString();
		lua_pushlstring(L,lret_str.data(),lret_str.size());

		return 1;
	}

	// void std::vector< CefString >::clear()
	static int _bind_clear(lua_State *L) {
		if (!_lg_typecheck_clear(L)) {
			luaL_error(L, "luna typecheck failed in void std::vector< CefString >::clear() function, expected prototype:\nvoid std::vector< CefString >::clear()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		std::vector< CefString >* self=(Luna< std::vector< CefString > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void std::vector< CefString >::clear(). Got : '%s'\n%s",typeid(Luna< std::vector< CefString > >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->clear();

		return 0;
	}

	// bool std::vector< CefString >::empty()
	static int _bind_empty(lua_State *L) {
		if (!_lg_typecheck_empty(L)) {
			luaL_error(L, "luna typecheck failed in bool std::vector< CefString >::empty() function, expected prototype:\nbool std::vector< CefString >::empty()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		std::vector< CefString >* self=(Luna< std::vector< CefString > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool std::vector< CefString >::empty(). Got : '%s'\n%s",typeid(Luna< std::vector< CefString > >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->empty();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// unsigned int std::vector< CefString >::size()
	static int _bind_size(lua_State *L) {
		if (!_lg_typecheck_size(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int std::vector< CefString >::size() function, expected prototype:\nunsigned int std::vector< CefString >::size()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		std::vector< CefString >* self=(Luna< std::vector< CefString > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int std::vector< CefString >::size(). Got : '%s'\n%s",typeid(Luna< std::vector< CefString > >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->size();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void std::vector< CefString >::resize(unsigned int arg1)
	static int _bind_resize(lua_State *L) {
		if (!_lg_typecheck_resize(L)) {
			luaL_error(L, "luna typecheck failed in void std::vector< CefString >::resize(unsigned int arg1) function, expected prototype:\nvoid std::vector< CefString >::resize(unsigned int arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int arg1=(unsigned int)lua_tointeger(L,2);

		std::vector< CefString >* self=(Luna< std::vector< CefString > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void std::vector< CefString >::resize(unsigned int). Got : '%s'\n%s",typeid(Luna< std::vector< CefString > >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->resize(arg1);

		return 0;
	}

	// void std::vector< CefString >::pop_back()
	static int _bind_pop_back(lua_State *L) {
		if (!_lg_typecheck_pop_back(L)) {
			luaL_error(L, "luna typecheck failed in void std::vector< CefString >::pop_back() function, expected prototype:\nvoid std::vector< CefString >::pop_back()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		std::vector< CefString >* self=(Luna< std::vector< CefString > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void std::vector< CefString >::pop_back(). Got : '%s'\n%s",typeid(Luna< std::vector< CefString > >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->pop_back();

		return 0;
	}

	// void std::vector< CefString >::push_back(CefString arg1)
	static int _bind_push_back(lua_State *L) {
		if (!_lg_typecheck_push_back(L)) {
			luaL_error(L, "luna typecheck failed in void std::vector< CefString >::push_back(CefString arg1) function, expected prototype:\nvoid std::vector< CefString >::push_back(CefString arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		CefString arg1; std::string arg1_str(lua_tostring(L,2),lua_objlen(L,2));
		arg1.FromString(arg1_str);

		std::vector< CefString >* self=(Luna< std::vector< CefString > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void std::vector< CefString >::push_back(CefString). Got : '%s'\n%s",typeid(Luna< std::vector< CefString > >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->push_back(arg1);

		return 0;
	}

	// CefString std::vector< CefString >::operator[](unsigned int arg1)
	static int _bind_op_index(lua_State *L) {
		if (!_lg_typecheck_op_index(L)) {
			luaL_error(L, "luna typecheck failed in CefString std::vector< CefString >::operator[](unsigned int arg1) function, expected prototype:\nCefString std::vector< CefString >::operator[](unsigned int arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int arg1=(unsigned int)lua_tointeger(L,2);

		std::vector< CefString >* self=(Luna< std::vector< CefString > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call CefString std::vector< CefString >::operator[](unsigned int). Got : '%s'\n%s",typeid(Luna< std::vector< CefString > >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		CefString lret = self->operator[](arg1);
		std::string lret_str = lret.ToString();
		lua_pushlstring(L,lret_str.data(),lret_str.size());

		return 1;
	}

};

std::vector< CefString >* LunaTraits< std::vector< CefString > >::_bind_ctor(lua_State *L) {
	return new std::vector< CefString >();
}

void LunaTraits< std::vector< CefString > >::_bind_dtor(std::vector< CefString >* obj) {
	delete obj;
}

const char LunaTraits< std::vector< CefString > >::className[] = "std_vector_CefString";
const char LunaTraits< std::vector< CefString > >::fullName[] = "std::vector< CefString >";
const char LunaTraits< std::vector< CefString > >::moduleName[] = "cef";
const char* LunaTraits< std::vector< CefString > >::parents[] = {0};
const int LunaTraits< std::vector< CefString > >::hash = 64498953;
const int LunaTraits< std::vector< CefString > >::uniqueIDs[] = {64498953,0};

luna_RegType LunaTraits< std::vector< CefString > >::methods[] = {
	{"dynCast", &luna_wrapper_std_vector_CefString::_bind_dynCast},
	{"__eq", &luna_wrapper_std_vector_CefString::_bind___eq},
	
	{"assign", &luna_wrapper_std_vector_CefString::_bind_assign},
	{"at", &luna_wrapper_std_vector_CefString::_bind_at},
	{"back", &luna_wrapper_std_vector_CefString::_bind_back},
	{"front", &luna_wrapper_std_vector_CefString::_bind_front},
	{"clear", &luna_wrapper_std_vector_CefString::_bind_clear},
	{"empty", &luna_wrapper_std_vector_CefString::_bind_empty},
	{"size", &luna_wrapper_std_vector_CefString::_bind_size},
	{"resize", &luna_wrapper_std_vector_CefString::_bind_resize},
	{"pop_back", &luna_wrapper_std_vector_CefString::_bind_pop_back},
	{"push_back", &luna_wrapper_std_vector_CefString::_bind_push_back},
	{"op_index", &luna_wrapper_std_vector_CefString::_bind_op_index},
	{0,0}
};

luna_ConverterType LunaTraits< std::vector< CefString > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::vector< CefString > >::enumValues[] = {
	{0,0}
};



#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_vector_CefRefPtr_CefProcessMessage {
public:
	typedef Luna< std::vector< CefRefPtr< CefProcessMessage > > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,82505097) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::vector< CefRefPtr< CefProcessMessage > >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::vector< CefRefPtr< CefProcessMessage > >* rhs =(Luna< std::vector< CefRefPtr< CefProcessMessage > > >::check(L,2));
		std::vector< CefRefPtr< CefProcessMessage > >* self=(Luna< std::vector< CefRefPtr< CefProcessMessage > > >::check(L,1));
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

		std::vector< CefRefPtr< CefProcessMessage > >* self=(Luna< std::vector< CefRefPtr< CefProcessMessage > > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::vector< CefRefPtr< CefProcessMessage > >");
		
		return luna_dynamicCast(L,converters,"std::vector< CefRefPtr< CefProcessMessage > >",name);
	}

	inline static bool _lg_typecheck_assign(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,50549361) ) return false;
		if( !Luna< CefBase >::checkSubType< CefProcessMessage >(L,3) ) return false;
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

		if( !Luna<void>::has_uniqueid(L,2,50549361) ) return false;
		if( !Luna< CefBase >::checkSubType< CefProcessMessage >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_index(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// void std::vector< CefRefPtr< CefProcessMessage > >::assign(unsigned int arg1, CefRefPtr< CefProcessMessage > arg2)
	static int _bind_assign(lua_State *L) {
		if (!_lg_typecheck_assign(L)) {
			luaL_error(L, "luna typecheck failed in void std::vector< CefRefPtr< CefProcessMessage > >::assign(unsigned int arg1, CefRefPtr< CefProcessMessage > arg2) function, expected prototype:\nvoid std::vector< CefRefPtr< CefProcessMessage > >::assign(unsigned int arg1, CefRefPtr< CefProcessMessage > arg2)\nClass arguments details:\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int arg1=(unsigned int)lua_tointeger(L,2);
		CefRefPtr< CefProcessMessage > arg2 = Luna< CefBase >::checkSubType< CefProcessMessage >(L,3);

		std::vector< CefRefPtr< CefProcessMessage > >* self=(Luna< std::vector< CefRefPtr< CefProcessMessage > > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void std::vector< CefRefPtr< CefProcessMessage > >::assign(unsigned int, CefRefPtr< CefProcessMessage >). Got : '%s'\n%s",typeid(Luna< std::vector< CefRefPtr< CefProcessMessage > > >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->assign(arg1, arg2);

		return 0;
	}

	// CefRefPtr< CefProcessMessage > std::vector< CefRefPtr< CefProcessMessage > >::at(unsigned int arg1)
	static int _bind_at(lua_State *L) {
		if (!_lg_typecheck_at(L)) {
			luaL_error(L, "luna typecheck failed in CefRefPtr< CefProcessMessage > std::vector< CefRefPtr< CefProcessMessage > >::at(unsigned int arg1) function, expected prototype:\nCefRefPtr< CefProcessMessage > std::vector< CefRefPtr< CefProcessMessage > >::at(unsigned int arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int arg1=(unsigned int)lua_tointeger(L,2);

		std::vector< CefRefPtr< CefProcessMessage > >* self=(Luna< std::vector< CefRefPtr< CefProcessMessage > > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call CefRefPtr< CefProcessMessage > std::vector< CefRefPtr< CefProcessMessage > >::at(unsigned int). Got : '%s'\n%s",typeid(Luna< std::vector< CefRefPtr< CefProcessMessage > > >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		CefRefPtr< CefProcessMessage > lret = self->at(arg1);
		Luna< CefProcessMessage >::push(L,lret.get(),false);

		return 1;
	}

	// CefRefPtr< CefProcessMessage > std::vector< CefRefPtr< CefProcessMessage > >::back()
	static int _bind_back(lua_State *L) {
		if (!_lg_typecheck_back(L)) {
			luaL_error(L, "luna typecheck failed in CefRefPtr< CefProcessMessage > std::vector< CefRefPtr< CefProcessMessage > >::back() function, expected prototype:\nCefRefPtr< CefProcessMessage > std::vector< CefRefPtr< CefProcessMessage > >::back()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		std::vector< CefRefPtr< CefProcessMessage > >* self=(Luna< std::vector< CefRefPtr< CefProcessMessage > > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call CefRefPtr< CefProcessMessage > std::vector< CefRefPtr< CefProcessMessage > >::back(). Got : '%s'\n%s",typeid(Luna< std::vector< CefRefPtr< CefProcessMessage > > >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		CefRefPtr< CefProcessMessage > lret = self->back();
		Luna< CefProcessMessage >::push(L,lret.get(),false);

		return 1;
	}

	// CefRefPtr< CefProcessMessage > std::vector< CefRefPtr< CefProcessMessage > >::front()
	static int _bind_front(lua_State *L) {
		if (!_lg_typecheck_front(L)) {
			luaL_error(L, "luna typecheck failed in CefRefPtr< CefProcessMessage > std::vector< CefRefPtr< CefProcessMessage > >::front() function, expected prototype:\nCefRefPtr< CefProcessMessage > std::vector< CefRefPtr< CefProcessMessage > >::front()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		std::vector< CefRefPtr< CefProcessMessage > >* self=(Luna< std::vector< CefRefPtr< CefProcessMessage > > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call CefRefPtr< CefProcessMessage > std::vector< CefRefPtr< CefProcessMessage > >::front(). Got : '%s'\n%s",typeid(Luna< std::vector< CefRefPtr< CefProcessMessage > > >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		CefRefPtr< CefProcessMessage > lret = self->front();
		Luna< CefProcessMessage >::push(L,lret.get(),false);

		return 1;
	}

	// void std::vector< CefRefPtr< CefProcessMessage > >::clear()
	static int _bind_clear(lua_State *L) {
		if (!_lg_typecheck_clear(L)) {
			luaL_error(L, "luna typecheck failed in void std::vector< CefRefPtr< CefProcessMessage > >::clear() function, expected prototype:\nvoid std::vector< CefRefPtr< CefProcessMessage > >::clear()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		std::vector< CefRefPtr< CefProcessMessage > >* self=(Luna< std::vector< CefRefPtr< CefProcessMessage > > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void std::vector< CefRefPtr< CefProcessMessage > >::clear(). Got : '%s'\n%s",typeid(Luna< std::vector< CefRefPtr< CefProcessMessage > > >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->clear();

		return 0;
	}

	// bool std::vector< CefRefPtr< CefProcessMessage > >::empty()
	static int _bind_empty(lua_State *L) {
		if (!_lg_typecheck_empty(L)) {
			luaL_error(L, "luna typecheck failed in bool std::vector< CefRefPtr< CefProcessMessage > >::empty() function, expected prototype:\nbool std::vector< CefRefPtr< CefProcessMessage > >::empty()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		std::vector< CefRefPtr< CefProcessMessage > >* self=(Luna< std::vector< CefRefPtr< CefProcessMessage > > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool std::vector< CefRefPtr< CefProcessMessage > >::empty(). Got : '%s'\n%s",typeid(Luna< std::vector< CefRefPtr< CefProcessMessage > > >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->empty();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// unsigned int std::vector< CefRefPtr< CefProcessMessage > >::size()
	static int _bind_size(lua_State *L) {
		if (!_lg_typecheck_size(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int std::vector< CefRefPtr< CefProcessMessage > >::size() function, expected prototype:\nunsigned int std::vector< CefRefPtr< CefProcessMessage > >::size()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		std::vector< CefRefPtr< CefProcessMessage > >* self=(Luna< std::vector< CefRefPtr< CefProcessMessage > > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int std::vector< CefRefPtr< CefProcessMessage > >::size(). Got : '%s'\n%s",typeid(Luna< std::vector< CefRefPtr< CefProcessMessage > > >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->size();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void std::vector< CefRefPtr< CefProcessMessage > >::resize(unsigned int arg1)
	static int _bind_resize(lua_State *L) {
		if (!_lg_typecheck_resize(L)) {
			luaL_error(L, "luna typecheck failed in void std::vector< CefRefPtr< CefProcessMessage > >::resize(unsigned int arg1) function, expected prototype:\nvoid std::vector< CefRefPtr< CefProcessMessage > >::resize(unsigned int arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int arg1=(unsigned int)lua_tointeger(L,2);

		std::vector< CefRefPtr< CefProcessMessage > >* self=(Luna< std::vector< CefRefPtr< CefProcessMessage > > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void std::vector< CefRefPtr< CefProcessMessage > >::resize(unsigned int). Got : '%s'\n%s",typeid(Luna< std::vector< CefRefPtr< CefProcessMessage > > >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->resize(arg1);

		return 0;
	}

	// void std::vector< CefRefPtr< CefProcessMessage > >::pop_back()
	static int _bind_pop_back(lua_State *L) {
		if (!_lg_typecheck_pop_back(L)) {
			luaL_error(L, "luna typecheck failed in void std::vector< CefRefPtr< CefProcessMessage > >::pop_back() function, expected prototype:\nvoid std::vector< CefRefPtr< CefProcessMessage > >::pop_back()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		std::vector< CefRefPtr< CefProcessMessage > >* self=(Luna< std::vector< CefRefPtr< CefProcessMessage > > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void std::vector< CefRefPtr< CefProcessMessage > >::pop_back(). Got : '%s'\n%s",typeid(Luna< std::vector< CefRefPtr< CefProcessMessage > > >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->pop_back();

		return 0;
	}

	// void std::vector< CefRefPtr< CefProcessMessage > >::push_back(CefRefPtr< CefProcessMessage > arg1)
	static int _bind_push_back(lua_State *L) {
		if (!_lg_typecheck_push_back(L)) {
			luaL_error(L, "luna typecheck failed in void std::vector< CefRefPtr< CefProcessMessage > >::push_back(CefRefPtr< CefProcessMessage > arg1) function, expected prototype:\nvoid std::vector< CefRefPtr< CefProcessMessage > >::push_back(CefRefPtr< CefProcessMessage > arg1)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		CefRefPtr< CefProcessMessage > arg1 = Luna< CefBase >::checkSubType< CefProcessMessage >(L,2);

		std::vector< CefRefPtr< CefProcessMessage > >* self=(Luna< std::vector< CefRefPtr< CefProcessMessage > > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void std::vector< CefRefPtr< CefProcessMessage > >::push_back(CefRefPtr< CefProcessMessage >). Got : '%s'\n%s",typeid(Luna< std::vector< CefRefPtr< CefProcessMessage > > >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->push_back(arg1);

		return 0;
	}

	// CefRefPtr< CefProcessMessage > std::vector< CefRefPtr< CefProcessMessage > >::operator[](unsigned int arg1)
	static int _bind_op_index(lua_State *L) {
		if (!_lg_typecheck_op_index(L)) {
			luaL_error(L, "luna typecheck failed in CefRefPtr< CefProcessMessage > std::vector< CefRefPtr< CefProcessMessage > >::operator[](unsigned int arg1) function, expected prototype:\nCefRefPtr< CefProcessMessage > std::vector< CefRefPtr< CefProcessMessage > >::operator[](unsigned int arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int arg1=(unsigned int)lua_tointeger(L,2);

		std::vector< CefRefPtr< CefProcessMessage > >* self=(Luna< std::vector< CefRefPtr< CefProcessMessage > > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call CefRefPtr< CefProcessMessage > std::vector< CefRefPtr< CefProcessMessage > >::operator[](unsigned int). Got : '%s'\n%s",typeid(Luna< std::vector< CefRefPtr< CefProcessMessage > > >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		CefRefPtr< CefProcessMessage > lret = self->operator[](arg1);
		Luna< CefProcessMessage >::push(L,lret.get(),false);

		return 1;
	}

};

std::vector< CefRefPtr< CefProcessMessage > >* LunaTraits< std::vector< CefRefPtr< CefProcessMessage > > >::_bind_ctor(lua_State *L) {
	return new std::vector< CefRefPtr< CefProcessMessage > >();
}

void LunaTraits< std::vector< CefRefPtr< CefProcessMessage > > >::_bind_dtor(std::vector< CefRefPtr< CefProcessMessage > >* obj) {
	delete obj;
}

const char LunaTraits< std::vector< CefRefPtr< CefProcessMessage > > >::className[] = "std_vector_CefRefPtr_CefProcessMessage";
const char LunaTraits< std::vector< CefRefPtr< CefProcessMessage > > >::fullName[] = "std::vector< CefRefPtr< CefProcessMessage > >";
const char LunaTraits< std::vector< CefRefPtr< CefProcessMessage > > >::moduleName[] = "cef";
const char* LunaTraits< std::vector< CefRefPtr< CefProcessMessage > > >::parents[] = {0};
const int LunaTraits< std::vector< CefRefPtr< CefProcessMessage > > >::hash = 82505097;
const int LunaTraits< std::vector< CefRefPtr< CefProcessMessage > > >::uniqueIDs[] = {82505097,0};

luna_RegType LunaTraits< std::vector< CefRefPtr< CefProcessMessage > > >::methods[] = {
	{"dynCast", &luna_wrapper_std_vector_CefRefPtr_CefProcessMessage::_bind_dynCast},
	{"__eq", &luna_wrapper_std_vector_CefRefPtr_CefProcessMessage::_bind___eq},
	
	{"assign", &luna_wrapper_std_vector_CefRefPtr_CefProcessMessage::_bind_assign},
	{"at", &luna_wrapper_std_vector_CefRefPtr_CefProcessMessage::_bind_at},
	{"back", &luna_wrapper_std_vector_CefRefPtr_CefProcessMessage::_bind_back},
	{"front", &luna_wrapper_std_vector_CefRefPtr_CefProcessMessage::_bind_front},
	{"clear", &luna_wrapper_std_vector_CefRefPtr_CefProcessMessage::_bind_clear},
	{"empty", &luna_wrapper_std_vector_CefRefPtr_CefProcessMessage::_bind_empty},
	{"size", &luna_wrapper_std_vector_CefRefPtr_CefProcessMessage::_bind_size},
	{"resize", &luna_wrapper_std_vector_CefRefPtr_CefProcessMessage::_bind_resize},
	{"pop_back", &luna_wrapper_std_vector_CefRefPtr_CefProcessMessage::_bind_pop_back},
	{"push_back", &luna_wrapper_std_vector_CefRefPtr_CefProcessMessage::_bind_push_back},
	{"op_index", &luna_wrapper_std_vector_CefRefPtr_CefProcessMessage::_bind_op_index},
	{0,0}
};

luna_ConverterType LunaTraits< std::vector< CefRefPtr< CefProcessMessage > > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::vector< CefRefPtr< CefProcessMessage > > >::enumValues[] = {
	{0,0}
};



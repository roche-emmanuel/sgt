#include <plug_common.h>

class luna_wrapper_cef_CEFViewBase_Traits {
public:
	typedef Luna< cef::CEFViewBase::Traits > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,59758032) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(cef::CEFViewBase::Traits*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		cef::CEFViewBase::Traits* rhs =(Luna< cef::CEFViewBase::Traits >::check(L,2));
		cef::CEFViewBase::Traits* self=(Luna< cef::CEFViewBase::Traits >::check(L,1));
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

		cef::CEFViewBase::Traits* self= (cef::CEFViewBase::Traits*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< cef::CEFViewBase::Traits >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,59758032) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< cef::CEFViewBase::Traits >::check(L,1));
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

		cef::CEFViewBase::Traits* self=(Luna< cef::CEFViewBase::Traits >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("cef::CEFViewBase::Traits");
		
		return luna_dynamicCast(L,converters,"cef::CEFViewBase::Traits",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_width(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_height(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_url_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_url_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_size(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// cef::CEFViewBase::Traits::Traits()
	static cef::CEFViewBase::Traits* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in cef::CEFViewBase::Traits::Traits() function, expected prototype:\ncef::CEFViewBase::Traits::Traits()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new cef::CEFViewBase::Traits();
	}


	// Function binds:
	// int cef::CEFViewBase::Traits::width() const
	static int _bind_width(lua_State *L) {
		if (!_lg_typecheck_width(L)) {
			luaL_error(L, "luna typecheck failed in int cef::CEFViewBase::Traits::width() const function, expected prototype:\nint cef::CEFViewBase::Traits::width() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		cef::CEFViewBase::Traits* self=(Luna< cef::CEFViewBase::Traits >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int cef::CEFViewBase::Traits::width() const. Got : '%s'\n%s",typeid(Luna< cef::CEFViewBase::Traits >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->width();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int cef::CEFViewBase::Traits::height() const
	static int _bind_height(lua_State *L) {
		if (!_lg_typecheck_height(L)) {
			luaL_error(L, "luna typecheck failed in int cef::CEFViewBase::Traits::height() const function, expected prototype:\nint cef::CEFViewBase::Traits::height() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		cef::CEFViewBase::Traits* self=(Luna< cef::CEFViewBase::Traits >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int cef::CEFViewBase::Traits::height() const. Got : '%s'\n%s",typeid(Luna< cef::CEFViewBase::Traits >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->height();
		lua_pushnumber(L,lret);

		return 1;
	}

	// std::string cef::CEFViewBase::Traits::url() const
	static int _bind_url_overload_1(lua_State *L) {
		if (!_lg_typecheck_url_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in std::string cef::CEFViewBase::Traits::url() const function, expected prototype:\nstd::string cef::CEFViewBase::Traits::url() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		cef::CEFViewBase::Traits* self=(Luna< cef::CEFViewBase::Traits >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call std::string cef::CEFViewBase::Traits::url() const. Got : '%s'\n%s",typeid(Luna< cef::CEFViewBase::Traits >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		std::string lret = self->url();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// cef::CEFViewBase::Traits & cef::CEFViewBase::Traits::url(const std::string & url)
	static int _bind_url_overload_2(lua_State *L) {
		if (!_lg_typecheck_url_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in cef::CEFViewBase::Traits & cef::CEFViewBase::Traits::url(const std::string & url) function, expected prototype:\ncef::CEFViewBase::Traits & cef::CEFViewBase::Traits::url(const std::string & url)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string url(lua_tostring(L,2),lua_objlen(L,2));

		cef::CEFViewBase::Traits* self=(Luna< cef::CEFViewBase::Traits >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call cef::CEFViewBase::Traits & cef::CEFViewBase::Traits::url(const std::string &). Got : '%s'\n%s",typeid(Luna< cef::CEFViewBase::Traits >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const cef::CEFViewBase::Traits* lret = &self->url(url);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< cef::CEFViewBase::Traits >::push(L,lret,false);

		return 1;
	}

	// Overload binder for cef::CEFViewBase::Traits::url
	static int _bind_url(lua_State *L) {
		if (_lg_typecheck_url_overload_1(L)) return _bind_url_overload_1(L);
		if (_lg_typecheck_url_overload_2(L)) return _bind_url_overload_2(L);

		luaL_error(L, "error in function url, cannot match any of the overloads for function url:\n  url()\n  url(const std::string &)\n");
		return 0;
	}

	// cef::CEFViewBase::Traits & cef::CEFViewBase::Traits::size(int width, int height)
	static int _bind_size(lua_State *L) {
		if (!_lg_typecheck_size(L)) {
			luaL_error(L, "luna typecheck failed in cef::CEFViewBase::Traits & cef::CEFViewBase::Traits::size(int width, int height) function, expected prototype:\ncef::CEFViewBase::Traits & cef::CEFViewBase::Traits::size(int width, int height)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int width=(int)lua_tointeger(L,2);
		int height=(int)lua_tointeger(L,3);

		cef::CEFViewBase::Traits* self=(Luna< cef::CEFViewBase::Traits >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call cef::CEFViewBase::Traits & cef::CEFViewBase::Traits::size(int, int). Got : '%s'\n%s",typeid(Luna< cef::CEFViewBase::Traits >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const cef::CEFViewBase::Traits* lret = &self->size(width, height);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< cef::CEFViewBase::Traits >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

cef::CEFViewBase::Traits* LunaTraits< cef::CEFViewBase::Traits >::_bind_ctor(lua_State *L) {
	return luna_wrapper_cef_CEFViewBase_Traits::_bind_ctor(L);
}

void LunaTraits< cef::CEFViewBase::Traits >::_bind_dtor(cef::CEFViewBase::Traits* obj) {
	delete obj;
}

const char LunaTraits< cef::CEFViewBase::Traits >::className[] = "CEFViewBase_Traits";
const char LunaTraits< cef::CEFViewBase::Traits >::fullName[] = "cef::CEFViewBase::Traits";
const char LunaTraits< cef::CEFViewBase::Traits >::moduleName[] = "cef";
const char* LunaTraits< cef::CEFViewBase::Traits >::parents[] = {0};
const int LunaTraits< cef::CEFViewBase::Traits >::hash = 59758032;
const int LunaTraits< cef::CEFViewBase::Traits >::uniqueIDs[] = {59758032,0};

luna_RegType LunaTraits< cef::CEFViewBase::Traits >::methods[] = {
	{"width", &luna_wrapper_cef_CEFViewBase_Traits::_bind_width},
	{"height", &luna_wrapper_cef_CEFViewBase_Traits::_bind_height},
	{"url", &luna_wrapper_cef_CEFViewBase_Traits::_bind_url},
	{"size", &luna_wrapper_cef_CEFViewBase_Traits::_bind_size},
	{"dynCast", &luna_wrapper_cef_CEFViewBase_Traits::_bind_dynCast},
	{"__eq", &luna_wrapper_cef_CEFViewBase_Traits::_bind___eq},
	{"fromVoid", &luna_wrapper_cef_CEFViewBase_Traits::_bind_fromVoid},
	{"asVoid", &luna_wrapper_cef_CEFViewBase_Traits::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< cef::CEFViewBase::Traits >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< cef::CEFViewBase::Traits >::enumValues[] = {
	{0,0}
};



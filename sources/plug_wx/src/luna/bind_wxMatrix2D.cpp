#include <plug_common.h>

class luna_wrapper_wxMatrix2D {
public:
	typedef Luna< wxMatrix2D > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,83648097) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxMatrix2D*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxMatrix2D* rhs =(Luna< wxMatrix2D >::check(L,2));
		wxMatrix2D* self=(Luna< wxMatrix2D >::check(L,1));
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

		wxMatrix2D* self= (wxMatrix2D*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxMatrix2D >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,83648097) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxMatrix2D >::check(L,1));
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

		wxMatrix2D* self=(Luna< wxMatrix2D >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxMatrix2D");
		
		return luna_dynamicCast(L,converters,"wxMatrix2D",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>4 ) return false;

		if( luatop>0 && lua_type(L,1)!=LUA_TNUMBER ) return false;
		if( luatop>1 && lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_get11(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get12(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get21(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get22(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_set11(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set12(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set21(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set22(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxMatrix2D::wxMatrix2D(double v11 = 1, double v12 = 0, double v21 = 0, double v22 = 1)
	static wxMatrix2D* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxMatrix2D::wxMatrix2D(double v11 = 1, double v12 = 0, double v21 = 0, double v22 = 1) function, expected prototype:\nwxMatrix2D::wxMatrix2D(double v11 = 1, double v12 = 0, double v21 = 0, double v22 = 1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		double v11=luatop>0 ? (double)lua_tonumber(L,1) : (double)1;
		double v12=luatop>1 ? (double)lua_tonumber(L,2) : (double)0;
		double v21=luatop>2 ? (double)lua_tonumber(L,3) : (double)0;
		double v22=luatop>3 ? (double)lua_tonumber(L,4) : (double)1;

		return new wxMatrix2D(v11, v12, v21, v22);
	}


	// Function binds:
	// double wxMatrix2D::m_11()
	static int _bind_get11(lua_State *L) {
		if (!_lg_typecheck_get11(L)) {
			luaL_error(L, "luna typecheck failed in double wxMatrix2D::m_11() function, expected prototype:\ndouble wxMatrix2D::m_11()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMatrix2D* self=(Luna< wxMatrix2D >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double wxMatrix2D::m_11(). Got : '%s'\n%s",typeid(Luna< wxMatrix2D >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->m_11;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double wxMatrix2D::m_12()
	static int _bind_get12(lua_State *L) {
		if (!_lg_typecheck_get12(L)) {
			luaL_error(L, "luna typecheck failed in double wxMatrix2D::m_12() function, expected prototype:\ndouble wxMatrix2D::m_12()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMatrix2D* self=(Luna< wxMatrix2D >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double wxMatrix2D::m_12(). Got : '%s'\n%s",typeid(Luna< wxMatrix2D >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->m_12;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double wxMatrix2D::m_21()
	static int _bind_get21(lua_State *L) {
		if (!_lg_typecheck_get21(L)) {
			luaL_error(L, "luna typecheck failed in double wxMatrix2D::m_21() function, expected prototype:\ndouble wxMatrix2D::m_21()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMatrix2D* self=(Luna< wxMatrix2D >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double wxMatrix2D::m_21(). Got : '%s'\n%s",typeid(Luna< wxMatrix2D >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->m_21;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double wxMatrix2D::m_22()
	static int _bind_get22(lua_State *L) {
		if (!_lg_typecheck_get22(L)) {
			luaL_error(L, "luna typecheck failed in double wxMatrix2D::m_22() function, expected prototype:\ndouble wxMatrix2D::m_22()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMatrix2D* self=(Luna< wxMatrix2D >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double wxMatrix2D::m_22(). Got : '%s'\n%s",typeid(Luna< wxMatrix2D >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->m_22;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxMatrix2D::m_11(double value)
	static int _bind_set11(lua_State *L) {
		if (!_lg_typecheck_set11(L)) {
			luaL_error(L, "luna typecheck failed in void wxMatrix2D::m_11(double value) function, expected prototype:\nvoid wxMatrix2D::m_11(double value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double value=(double)lua_tonumber(L,2);

		wxMatrix2D* self=(Luna< wxMatrix2D >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMatrix2D::m_11(double). Got : '%s'\n%s",typeid(Luna< wxMatrix2D >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_11 = value;

		return 0;
	}

	// void wxMatrix2D::m_12(double value)
	static int _bind_set12(lua_State *L) {
		if (!_lg_typecheck_set12(L)) {
			luaL_error(L, "luna typecheck failed in void wxMatrix2D::m_12(double value) function, expected prototype:\nvoid wxMatrix2D::m_12(double value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double value=(double)lua_tonumber(L,2);

		wxMatrix2D* self=(Luna< wxMatrix2D >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMatrix2D::m_12(double). Got : '%s'\n%s",typeid(Luna< wxMatrix2D >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_12 = value;

		return 0;
	}

	// void wxMatrix2D::m_21(double value)
	static int _bind_set21(lua_State *L) {
		if (!_lg_typecheck_set21(L)) {
			luaL_error(L, "luna typecheck failed in void wxMatrix2D::m_21(double value) function, expected prototype:\nvoid wxMatrix2D::m_21(double value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double value=(double)lua_tonumber(L,2);

		wxMatrix2D* self=(Luna< wxMatrix2D >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMatrix2D::m_21(double). Got : '%s'\n%s",typeid(Luna< wxMatrix2D >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_21 = value;

		return 0;
	}

	// void wxMatrix2D::m_22(double value)
	static int _bind_set22(lua_State *L) {
		if (!_lg_typecheck_set22(L)) {
			luaL_error(L, "luna typecheck failed in void wxMatrix2D::m_22(double value) function, expected prototype:\nvoid wxMatrix2D::m_22(double value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double value=(double)lua_tonumber(L,2);

		wxMatrix2D* self=(Luna< wxMatrix2D >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMatrix2D::m_22(double). Got : '%s'\n%s",typeid(Luna< wxMatrix2D >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_22 = value;

		return 0;
	}


	// Operator binds:

};

wxMatrix2D* LunaTraits< wxMatrix2D >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxMatrix2D::_bind_ctor(L);
}

void LunaTraits< wxMatrix2D >::_bind_dtor(wxMatrix2D* obj) {
	delete obj;
}

const char LunaTraits< wxMatrix2D >::className[] = "wxMatrix2D";
const char LunaTraits< wxMatrix2D >::fullName[] = "wxMatrix2D";
const char LunaTraits< wxMatrix2D >::moduleName[] = "wx";
const char* LunaTraits< wxMatrix2D >::parents[] = {0};
const int LunaTraits< wxMatrix2D >::hash = 83648097;
const int LunaTraits< wxMatrix2D >::uniqueIDs[] = {83648097,0};

luna_RegType LunaTraits< wxMatrix2D >::methods[] = {
	{"get11", &luna_wrapper_wxMatrix2D::_bind_get11},
	{"get12", &luna_wrapper_wxMatrix2D::_bind_get12},
	{"get21", &luna_wrapper_wxMatrix2D::_bind_get21},
	{"get22", &luna_wrapper_wxMatrix2D::_bind_get22},
	{"set11", &luna_wrapper_wxMatrix2D::_bind_set11},
	{"set12", &luna_wrapper_wxMatrix2D::_bind_set12},
	{"set21", &luna_wrapper_wxMatrix2D::_bind_set21},
	{"set22", &luna_wrapper_wxMatrix2D::_bind_set22},
	{"dynCast", &luna_wrapper_wxMatrix2D::_bind_dynCast},
	{"__eq", &luna_wrapper_wxMatrix2D::_bind___eq},
	{"fromVoid", &luna_wrapper_wxMatrix2D::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxMatrix2D::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< wxMatrix2D >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxMatrix2D >::enumValues[] = {
	{0,0}
};



#include <plug_common.h>

class luna_wrapper_wxGridSizesInfo {
public:
	typedef Luna< wxGridSizesInfo > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,73467241) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxGridSizesInfo*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxGridSizesInfo* rhs =(Luna< wxGridSizesInfo >::check(L,2));
		wxGridSizesInfo* self=(Luna< wxGridSizesInfo >::check(L,1));
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

		wxGridSizesInfo* self= (wxGridSizesInfo*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxGridSizesInfo >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,73467241) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxGridSizesInfo >::check(L,1));
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

		wxGridSizesInfo* self=(Luna< wxGridSizesInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxGridSizesInfo");
		
		return luna_dynamicCast(L,converters,"wxGridSizesInfo",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,47342076) ) return false;
		if( (!(Luna< wxArrayInt >::check(L,2))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSizeDefault(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setSizeDefault(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxGridSizesInfo::wxGridSizesInfo()
	static wxGridSizesInfo* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxGridSizesInfo::wxGridSizesInfo() function, expected prototype:\nwxGridSizesInfo::wxGridSizesInfo()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxGridSizesInfo();
	}

	// wxGridSizesInfo::wxGridSizesInfo(int defSize, const wxArrayInt & allSizes)
	static wxGridSizesInfo* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxGridSizesInfo::wxGridSizesInfo(int defSize, const wxArrayInt & allSizes) function, expected prototype:\nwxGridSizesInfo::wxGridSizesInfo(int defSize, const wxArrayInt & allSizes)\nClass arguments details:\narg 2 ID = 47342076\n\n%s",luna_dumpStack(L).c_str());
		}

		int defSize=(int)lua_tointeger(L,1);
		const wxArrayInt* allSizes_ptr=(Luna< wxArrayInt >::check(L,2));
		if( !allSizes_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg allSizes in wxGridSizesInfo::wxGridSizesInfo function");
		}
		const wxArrayInt & allSizes=*allSizes_ptr;

		return new wxGridSizesInfo(defSize, allSizes);
	}

	// Overload binder for wxGridSizesInfo::wxGridSizesInfo
	static wxGridSizesInfo* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxGridSizesInfo, cannot match any of the overloads for function wxGridSizesInfo:\n  wxGridSizesInfo()\n  wxGridSizesInfo(int, const wxArrayInt &)\n");
		return NULL;
	}


	// Function binds:
	// int wxGridSizesInfo::GetSize(unsigned int pos) const
	static int _bind_GetSize(lua_State *L) {
		if (!_lg_typecheck_GetSize(L)) {
			luaL_error(L, "luna typecheck failed in int wxGridSizesInfo::GetSize(unsigned int pos) const function, expected prototype:\nint wxGridSizesInfo::GetSize(unsigned int pos) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int pos=(unsigned int)lua_tointeger(L,2);

		wxGridSizesInfo* self=(Luna< wxGridSizesInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxGridSizesInfo::GetSize(unsigned int) const. Got : '%s'\n%s",typeid(Luna< wxGridSizesInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetSize(pos);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxGridSizesInfo::m_sizeDefault()
	static int _bind_getSizeDefault(lua_State *L) {
		if (!_lg_typecheck_getSizeDefault(L)) {
			luaL_error(L, "luna typecheck failed in int wxGridSizesInfo::m_sizeDefault() function, expected prototype:\nint wxGridSizesInfo::m_sizeDefault()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGridSizesInfo* self=(Luna< wxGridSizesInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxGridSizesInfo::m_sizeDefault(). Got : '%s'\n%s",typeid(Luna< wxGridSizesInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->m_sizeDefault;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxGridSizesInfo::m_sizeDefault(int value)
	static int _bind_setSizeDefault(lua_State *L) {
		if (!_lg_typecheck_setSizeDefault(L)) {
			luaL_error(L, "luna typecheck failed in void wxGridSizesInfo::m_sizeDefault(int value) function, expected prototype:\nvoid wxGridSizesInfo::m_sizeDefault(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		wxGridSizesInfo* self=(Luna< wxGridSizesInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGridSizesInfo::m_sizeDefault(int). Got : '%s'\n%s",typeid(Luna< wxGridSizesInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_sizeDefault = value;

		return 0;
	}


	// Operator binds:

};

wxGridSizesInfo* LunaTraits< wxGridSizesInfo >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxGridSizesInfo::_bind_ctor(L);
}

void LunaTraits< wxGridSizesInfo >::_bind_dtor(wxGridSizesInfo* obj) {
	delete obj;
}

const char LunaTraits< wxGridSizesInfo >::className[] = "wxGridSizesInfo";
const char LunaTraits< wxGridSizesInfo >::fullName[] = "wxGridSizesInfo";
const char LunaTraits< wxGridSizesInfo >::moduleName[] = "wx";
const char* LunaTraits< wxGridSizesInfo >::parents[] = {0};
const int LunaTraits< wxGridSizesInfo >::hash = 73467241;
const int LunaTraits< wxGridSizesInfo >::uniqueIDs[] = {73467241,0};

luna_RegType LunaTraits< wxGridSizesInfo >::methods[] = {
	{"GetSize", &luna_wrapper_wxGridSizesInfo::_bind_GetSize},
	{"getSizeDefault", &luna_wrapper_wxGridSizesInfo::_bind_getSizeDefault},
	{"setSizeDefault", &luna_wrapper_wxGridSizesInfo::_bind_setSizeDefault},
	{"dynCast", &luna_wrapper_wxGridSizesInfo::_bind_dynCast},
	{"__eq", &luna_wrapper_wxGridSizesInfo::_bind___eq},
	{"fromVoid", &luna_wrapper_wxGridSizesInfo::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxGridSizesInfo::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< wxGridSizesInfo >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxGridSizesInfo >::enumValues[] = {
	{0,0}
};



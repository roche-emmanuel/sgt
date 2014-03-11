#include <plug_common.h>

class luna_wrapper_wxDataViewItemAttr {
public:
	typedef Luna< wxDataViewItemAttr > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,11637659) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxDataViewItemAttr*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxDataViewItemAttr* rhs =(Luna< wxDataViewItemAttr >::check(L,2));
		wxDataViewItemAttr* self=(Luna< wxDataViewItemAttr >::check(L,1));
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

		wxDataViewItemAttr* self= (wxDataViewItemAttr*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxDataViewItemAttr >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,11637659) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxDataViewItemAttr >::check(L,1));
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

		wxDataViewItemAttr* self=(Luna< wxDataViewItemAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxDataViewItemAttr");
		
		return luna_dynamicCast(L,converters,"wxDataViewItemAttr",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_SetBold(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItalic(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxDataViewItemAttr::wxDataViewItemAttr()
	static wxDataViewItemAttr* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxDataViewItemAttr::wxDataViewItemAttr() function, expected prototype:\nwxDataViewItemAttr::wxDataViewItemAttr()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxDataViewItemAttr();
	}


	// Function binds:
	// void wxDataViewItemAttr::SetBold(bool set)
	static int _bind_SetBold(lua_State *L) {
		if (!_lg_typecheck_SetBold(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewItemAttr::SetBold(bool set) function, expected prototype:\nvoid wxDataViewItemAttr::SetBold(bool set)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool set=(bool)(lua_toboolean(L,2)==1);

		wxDataViewItemAttr* self=(Luna< wxDataViewItemAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewItemAttr::SetBold(bool). Got : '%s'\n%s",typeid(Luna< wxDataViewItemAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetBold(set);

		return 0;
	}

	// void wxDataViewItemAttr::SetColour(const wxColour & colour)
	static int _bind_SetColour(lua_State *L) {
		if (!_lg_typecheck_SetColour(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewItemAttr::SetColour(const wxColour & colour) function, expected prototype:\nvoid wxDataViewItemAttr::SetColour(const wxColour & colour)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxColour* colour_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,2));
		if( !colour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colour in wxDataViewItemAttr::SetColour function");
		}
		const wxColour & colour=*colour_ptr;

		wxDataViewItemAttr* self=(Luna< wxDataViewItemAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewItemAttr::SetColour(const wxColour &). Got : '%s'\n%s",typeid(Luna< wxDataViewItemAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetColour(colour);

		return 0;
	}

	// void wxDataViewItemAttr::SetItalic(bool set)
	static int _bind_SetItalic(lua_State *L) {
		if (!_lg_typecheck_SetItalic(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewItemAttr::SetItalic(bool set) function, expected prototype:\nvoid wxDataViewItemAttr::SetItalic(bool set)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool set=(bool)(lua_toboolean(L,2)==1);

		wxDataViewItemAttr* self=(Luna< wxDataViewItemAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewItemAttr::SetItalic(bool). Got : '%s'\n%s",typeid(Luna< wxDataViewItemAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetItalic(set);

		return 0;
	}


	// Operator binds:

};

wxDataViewItemAttr* LunaTraits< wxDataViewItemAttr >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxDataViewItemAttr::_bind_ctor(L);
}

void LunaTraits< wxDataViewItemAttr >::_bind_dtor(wxDataViewItemAttr* obj) {
	delete obj;
}

const char LunaTraits< wxDataViewItemAttr >::className[] = "wxDataViewItemAttr";
const char LunaTraits< wxDataViewItemAttr >::fullName[] = "wxDataViewItemAttr";
const char LunaTraits< wxDataViewItemAttr >::moduleName[] = "wx";
const char* LunaTraits< wxDataViewItemAttr >::parents[] = {0};
const int LunaTraits< wxDataViewItemAttr >::hash = 11637659;
const int LunaTraits< wxDataViewItemAttr >::uniqueIDs[] = {11637659,0};

luna_RegType LunaTraits< wxDataViewItemAttr >::methods[] = {
	{"SetBold", &luna_wrapper_wxDataViewItemAttr::_bind_SetBold},
	{"SetColour", &luna_wrapper_wxDataViewItemAttr::_bind_SetColour},
	{"SetItalic", &luna_wrapper_wxDataViewItemAttr::_bind_SetItalic},
	{"dynCast", &luna_wrapper_wxDataViewItemAttr::_bind_dynCast},
	{"__eq", &luna_wrapper_wxDataViewItemAttr::_bind___eq},
	{"fromVoid", &luna_wrapper_wxDataViewItemAttr::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxDataViewItemAttr::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< wxDataViewItemAttr >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxDataViewItemAttr >::enumValues[] = {
	{0,0}
};



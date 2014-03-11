#include <plug_common.h>

class luna_wrapper_wxTextAttrDimensionConverter {
public:
	typedef Luna< wxTextAttrDimensionConverter > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,6148370) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxTextAttrDimensionConverter*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxTextAttrDimensionConverter* rhs =(Luna< wxTextAttrDimensionConverter >::check(L,2));
		wxTextAttrDimensionConverter* self=(Luna< wxTextAttrDimensionConverter >::check(L,1));
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

		wxTextAttrDimensionConverter* self= (wxTextAttrDimensionConverter*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxTextAttrDimensionConverter >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,6148370) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxTextAttrDimensionConverter >::check(L,1));
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

		wxTextAttrDimensionConverter* self=(Luna< wxTextAttrDimensionConverter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxTextAttrDimensionConverter");
		
		return luna_dynamicCast(L,converters,"wxTextAttrDimensionConverter",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxDC >(L,1))) ) return false;
		if( luatop>1 && lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,20268751) ) return false;
		if( luatop>2 && (!(Luna< wxSize >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( luatop>1 && lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,20268751) ) return false;
		if( luatop>2 && (!(Luna< wxSize >::check(L,3))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetPixels(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25580455) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetTenthsMM(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25580455) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ConvertTenthsMMToPixels(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ConvertPixelsToTenthsMM(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPpi(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getScale(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getParentSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setPpi(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setScale(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setParentSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxTextAttrDimensionConverter::wxTextAttrDimensionConverter(wxDC & dc, double scale = 1.0, const wxSize & parentSize = wxDefaultSize)
	static wxTextAttrDimensionConverter* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxTextAttrDimensionConverter::wxTextAttrDimensionConverter(wxDC & dc, double scale = 1.0, const wxSize & parentSize = wxDefaultSize) function, expected prototype:\nwxTextAttrDimensionConverter::wxTextAttrDimensionConverter(wxDC & dc, double scale = 1.0, const wxSize & parentSize = wxDefaultSize)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,1));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxTextAttrDimensionConverter::wxTextAttrDimensionConverter function");
		}
		wxDC & dc=*dc_ptr;
		double scale=luatop>1 ? (double)lua_tonumber(L,2) : (double)1.0;
		const wxSize* parentSize_ptr=luatop>2 ? (Luna< wxSize >::check(L,3)) : NULL;
		if( luatop>2 && !parentSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parentSize in wxTextAttrDimensionConverter::wxTextAttrDimensionConverter function");
		}
		const wxSize & parentSize=luatop>2 ? *parentSize_ptr : (const wxSize&)wxDefaultSize;

		return new wxTextAttrDimensionConverter(dc, scale, parentSize);
	}

	// wxTextAttrDimensionConverter::wxTextAttrDimensionConverter(int ppi, double scale = 1.0, const wxSize & parentSize = wxDefaultSize)
	static wxTextAttrDimensionConverter* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxTextAttrDimensionConverter::wxTextAttrDimensionConverter(int ppi, double scale = 1.0, const wxSize & parentSize = wxDefaultSize) function, expected prototype:\nwxTextAttrDimensionConverter::wxTextAttrDimensionConverter(int ppi, double scale = 1.0, const wxSize & parentSize = wxDefaultSize)\nClass arguments details:\narg 3 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int ppi=(int)lua_tointeger(L,1);
		double scale=luatop>1 ? (double)lua_tonumber(L,2) : (double)1.0;
		const wxSize* parentSize_ptr=luatop>2 ? (Luna< wxSize >::check(L,3)) : NULL;
		if( luatop>2 && !parentSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parentSize in wxTextAttrDimensionConverter::wxTextAttrDimensionConverter function");
		}
		const wxSize & parentSize=luatop>2 ? *parentSize_ptr : (const wxSize&)wxDefaultSize;

		return new wxTextAttrDimensionConverter(ppi, scale, parentSize);
	}

	// Overload binder for wxTextAttrDimensionConverter::wxTextAttrDimensionConverter
	static wxTextAttrDimensionConverter* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxTextAttrDimensionConverter, cannot match any of the overloads for function wxTextAttrDimensionConverter:\n  wxTextAttrDimensionConverter(wxDC &, double, const wxSize &)\n  wxTextAttrDimensionConverter(int, double, const wxSize &)\n");
		return NULL;
	}


	// Function binds:
	// int wxTextAttrDimensionConverter::GetPixels(const wxTextAttrDimension & dim, int direction = ::wxHORIZONTAL) const
	static int _bind_GetPixels(lua_State *L) {
		if (!_lg_typecheck_GetPixels(L)) {
			luaL_error(L, "luna typecheck failed in int wxTextAttrDimensionConverter::GetPixels(const wxTextAttrDimension & dim, int direction = ::wxHORIZONTAL) const function, expected prototype:\nint wxTextAttrDimensionConverter::GetPixels(const wxTextAttrDimension & dim, int direction = ::wxHORIZONTAL) const\nClass arguments details:\narg 1 ID = 25580455\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxTextAttrDimension* dim_ptr=(Luna< wxTextAttrDimension >::check(L,2));
		if( !dim_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dim in wxTextAttrDimensionConverter::GetPixels function");
		}
		const wxTextAttrDimension & dim=*dim_ptr;
		int direction=luatop>2 ? (int)lua_tointeger(L,3) : (int)::wxHORIZONTAL;

		wxTextAttrDimensionConverter* self=(Luna< wxTextAttrDimensionConverter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxTextAttrDimensionConverter::GetPixels(const wxTextAttrDimension &, int) const. Got : '%s'\n%s",typeid(Luna< wxTextAttrDimensionConverter >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetPixels(dim, direction);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxTextAttrDimensionConverter::GetTenthsMM(const wxTextAttrDimension & dim) const
	static int _bind_GetTenthsMM(lua_State *L) {
		if (!_lg_typecheck_GetTenthsMM(L)) {
			luaL_error(L, "luna typecheck failed in int wxTextAttrDimensionConverter::GetTenthsMM(const wxTextAttrDimension & dim) const function, expected prototype:\nint wxTextAttrDimensionConverter::GetTenthsMM(const wxTextAttrDimension & dim) const\nClass arguments details:\narg 1 ID = 25580455\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTextAttrDimension* dim_ptr=(Luna< wxTextAttrDimension >::check(L,2));
		if( !dim_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dim in wxTextAttrDimensionConverter::GetTenthsMM function");
		}
		const wxTextAttrDimension & dim=*dim_ptr;

		wxTextAttrDimensionConverter* self=(Luna< wxTextAttrDimensionConverter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxTextAttrDimensionConverter::GetTenthsMM(const wxTextAttrDimension &) const. Got : '%s'\n%s",typeid(Luna< wxTextAttrDimensionConverter >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetTenthsMM(dim);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxTextAttrDimensionConverter::ConvertTenthsMMToPixels(int units) const
	static int _bind_ConvertTenthsMMToPixels(lua_State *L) {
		if (!_lg_typecheck_ConvertTenthsMMToPixels(L)) {
			luaL_error(L, "luna typecheck failed in int wxTextAttrDimensionConverter::ConvertTenthsMMToPixels(int units) const function, expected prototype:\nint wxTextAttrDimensionConverter::ConvertTenthsMMToPixels(int units) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int units=(int)lua_tointeger(L,2);

		wxTextAttrDimensionConverter* self=(Luna< wxTextAttrDimensionConverter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxTextAttrDimensionConverter::ConvertTenthsMMToPixels(int) const. Got : '%s'\n%s",typeid(Luna< wxTextAttrDimensionConverter >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->ConvertTenthsMMToPixels(units);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxTextAttrDimensionConverter::ConvertPixelsToTenthsMM(int pixels) const
	static int _bind_ConvertPixelsToTenthsMM(lua_State *L) {
		if (!_lg_typecheck_ConvertPixelsToTenthsMM(L)) {
			luaL_error(L, "luna typecheck failed in int wxTextAttrDimensionConverter::ConvertPixelsToTenthsMM(int pixels) const function, expected prototype:\nint wxTextAttrDimensionConverter::ConvertPixelsToTenthsMM(int pixels) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int pixels=(int)lua_tointeger(L,2);

		wxTextAttrDimensionConverter* self=(Luna< wxTextAttrDimensionConverter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxTextAttrDimensionConverter::ConvertPixelsToTenthsMM(int) const. Got : '%s'\n%s",typeid(Luna< wxTextAttrDimensionConverter >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->ConvertPixelsToTenthsMM(pixels);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxTextAttrDimensionConverter::m_ppi()
	static int _bind_getPpi(lua_State *L) {
		if (!_lg_typecheck_getPpi(L)) {
			luaL_error(L, "luna typecheck failed in int wxTextAttrDimensionConverter::m_ppi() function, expected prototype:\nint wxTextAttrDimensionConverter::m_ppi()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttrDimensionConverter* self=(Luna< wxTextAttrDimensionConverter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxTextAttrDimensionConverter::m_ppi(). Got : '%s'\n%s",typeid(Luna< wxTextAttrDimensionConverter >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->m_ppi;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double wxTextAttrDimensionConverter::m_scale()
	static int _bind_getScale(lua_State *L) {
		if (!_lg_typecheck_getScale(L)) {
			luaL_error(L, "luna typecheck failed in double wxTextAttrDimensionConverter::m_scale() function, expected prototype:\ndouble wxTextAttrDimensionConverter::m_scale()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttrDimensionConverter* self=(Luna< wxTextAttrDimensionConverter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double wxTextAttrDimensionConverter::m_scale(). Got : '%s'\n%s",typeid(Luna< wxTextAttrDimensionConverter >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->m_scale;
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxSize wxTextAttrDimensionConverter::m_parentSize()
	static int _bind_getParentSize(lua_State *L) {
		if (!_lg_typecheck_getParentSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxTextAttrDimensionConverter::m_parentSize() function, expected prototype:\nwxSize wxTextAttrDimensionConverter::m_parentSize()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttrDimensionConverter* self=(Luna< wxTextAttrDimensionConverter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxTextAttrDimensionConverter::m_parentSize(). Got : '%s'\n%s",typeid(Luna< wxTextAttrDimensionConverter >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxSize* lret = &self->m_parentSize;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,false);

		return 1;
	}

	// void wxTextAttrDimensionConverter::m_ppi(int value)
	static int _bind_setPpi(lua_State *L) {
		if (!_lg_typecheck_setPpi(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextAttrDimensionConverter::m_ppi(int value) function, expected prototype:\nvoid wxTextAttrDimensionConverter::m_ppi(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		wxTextAttrDimensionConverter* self=(Luna< wxTextAttrDimensionConverter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextAttrDimensionConverter::m_ppi(int). Got : '%s'\n%s",typeid(Luna< wxTextAttrDimensionConverter >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_ppi = value;

		return 0;
	}

	// void wxTextAttrDimensionConverter::m_scale(double value)
	static int _bind_setScale(lua_State *L) {
		if (!_lg_typecheck_setScale(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextAttrDimensionConverter::m_scale(double value) function, expected prototype:\nvoid wxTextAttrDimensionConverter::m_scale(double value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double value=(double)lua_tonumber(L,2);

		wxTextAttrDimensionConverter* self=(Luna< wxTextAttrDimensionConverter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextAttrDimensionConverter::m_scale(double). Got : '%s'\n%s",typeid(Luna< wxTextAttrDimensionConverter >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_scale = value;

		return 0;
	}

	// void wxTextAttrDimensionConverter::m_parentSize(wxSize value)
	static int _bind_setParentSize(lua_State *L) {
		if (!_lg_typecheck_setParentSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextAttrDimensionConverter::m_parentSize(wxSize value) function, expected prototype:\nvoid wxTextAttrDimensionConverter::m_parentSize(wxSize value)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		wxSize* value_ptr=(Luna< wxSize >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in wxTextAttrDimensionConverter::m_parentSize function");
		}
		wxSize value=*value_ptr;

		wxTextAttrDimensionConverter* self=(Luna< wxTextAttrDimensionConverter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextAttrDimensionConverter::m_parentSize(wxSize). Got : '%s'\n%s",typeid(Luna< wxTextAttrDimensionConverter >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_parentSize = value;

		return 0;
	}


	// Operator binds:

};

wxTextAttrDimensionConverter* LunaTraits< wxTextAttrDimensionConverter >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxTextAttrDimensionConverter::_bind_ctor(L);
}

void LunaTraits< wxTextAttrDimensionConverter >::_bind_dtor(wxTextAttrDimensionConverter* obj) {
	delete obj;
}

const char LunaTraits< wxTextAttrDimensionConverter >::className[] = "wxTextAttrDimensionConverter";
const char LunaTraits< wxTextAttrDimensionConverter >::fullName[] = "wxTextAttrDimensionConverter";
const char LunaTraits< wxTextAttrDimensionConverter >::moduleName[] = "wx";
const char* LunaTraits< wxTextAttrDimensionConverter >::parents[] = {0};
const int LunaTraits< wxTextAttrDimensionConverter >::hash = 6148370;
const int LunaTraits< wxTextAttrDimensionConverter >::uniqueIDs[] = {6148370,0};

luna_RegType LunaTraits< wxTextAttrDimensionConverter >::methods[] = {
	{"GetPixels", &luna_wrapper_wxTextAttrDimensionConverter::_bind_GetPixels},
	{"GetTenthsMM", &luna_wrapper_wxTextAttrDimensionConverter::_bind_GetTenthsMM},
	{"ConvertTenthsMMToPixels", &luna_wrapper_wxTextAttrDimensionConverter::_bind_ConvertTenthsMMToPixels},
	{"ConvertPixelsToTenthsMM", &luna_wrapper_wxTextAttrDimensionConverter::_bind_ConvertPixelsToTenthsMM},
	{"getPpi", &luna_wrapper_wxTextAttrDimensionConverter::_bind_getPpi},
	{"getScale", &luna_wrapper_wxTextAttrDimensionConverter::_bind_getScale},
	{"getParentSize", &luna_wrapper_wxTextAttrDimensionConverter::_bind_getParentSize},
	{"setPpi", &luna_wrapper_wxTextAttrDimensionConverter::_bind_setPpi},
	{"setScale", &luna_wrapper_wxTextAttrDimensionConverter::_bind_setScale},
	{"setParentSize", &luna_wrapper_wxTextAttrDimensionConverter::_bind_setParentSize},
	{"dynCast", &luna_wrapper_wxTextAttrDimensionConverter::_bind_dynCast},
	{"__eq", &luna_wrapper_wxTextAttrDimensionConverter::_bind___eq},
	{"fromVoid", &luna_wrapper_wxTextAttrDimensionConverter::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxTextAttrDimensionConverter::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< wxTextAttrDimensionConverter >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxTextAttrDimensionConverter >::enumValues[] = {
	{0,0}
};



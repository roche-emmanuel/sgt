#include <plug_common.h>

class luna_wrapper_wxNativeFontInfo {
public:
	typedef Luna< wxNativeFontInfo > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,26059272) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxNativeFontInfo*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxNativeFontInfo* rhs =(Luna< wxNativeFontInfo >::check(L,2));
		wxNativeFontInfo* self=(Luna< wxNativeFontInfo >::check(L,1));
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

		wxNativeFontInfo* self= (wxNativeFontInfo*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxNativeFontInfo >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,26059272) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxNativeFontInfo >::check(L,1));
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

		wxNativeFontInfo* self=(Luna< wxNativeFontInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxNativeFontInfo");
		
		return luna_dynamicCast(L,converters,"wxNativeFontInfo",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,26059272) ) return false;
		if( (!(Luna< wxNativeFontInfo >::check(L,1))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Init(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_InitFromFont(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetPointSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPixelSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetStyle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetWeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetUnderlined(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFaceName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFamily(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetEncoding(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetPointSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPixelSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetStyle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetWeight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetUnderlined(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFaceName_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFaceName_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,59507769) ) return false;
		if( (!(Luna< wxArrayString >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFamily(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetEncoding(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FromString(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ToString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_FromUserString(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ToUserString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck_op_assign(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,26059272) ) return false;
		return true;
	}


	// Constructor binds:
	// wxNativeFontInfo::wxNativeFontInfo()
	static wxNativeFontInfo* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxNativeFontInfo::wxNativeFontInfo() function, expected prototype:\nwxNativeFontInfo::wxNativeFontInfo()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxNativeFontInfo();
	}

	// wxNativeFontInfo::wxNativeFontInfo(const wxNativeFontInfo & info)
	static wxNativeFontInfo* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxNativeFontInfo::wxNativeFontInfo(const wxNativeFontInfo & info) function, expected prototype:\nwxNativeFontInfo::wxNativeFontInfo(const wxNativeFontInfo & info)\nClass arguments details:\narg 1 ID = 26059272\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxNativeFontInfo* info_ptr=(Luna< wxNativeFontInfo >::check(L,1));
		if( !info_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg info in wxNativeFontInfo::wxNativeFontInfo function");
		}
		const wxNativeFontInfo & info=*info_ptr;

		return new wxNativeFontInfo(info);
	}

	// Overload binder for wxNativeFontInfo::wxNativeFontInfo
	static wxNativeFontInfo* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxNativeFontInfo, cannot match any of the overloads for function wxNativeFontInfo:\n  wxNativeFontInfo()\n  wxNativeFontInfo(const wxNativeFontInfo &)\n");
		return NULL;
	}


	// Function binds:
	// void wxNativeFontInfo::Init()
	static int _bind_Init(lua_State *L) {
		if (!_lg_typecheck_Init(L)) {
			luaL_error(L, "luna typecheck failed in void wxNativeFontInfo::Init() function, expected prototype:\nvoid wxNativeFontInfo::Init()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxNativeFontInfo* self=(Luna< wxNativeFontInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxNativeFontInfo::Init(). Got : '%s'\n%s",typeid(Luna< wxNativeFontInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Init();

		return 0;
	}

	// void wxNativeFontInfo::InitFromFont(const wxFont & font)
	static int _bind_InitFromFont(lua_State *L) {
		if (!_lg_typecheck_InitFromFont(L)) {
			luaL_error(L, "luna typecheck failed in void wxNativeFontInfo::InitFromFont(const wxFont & font) function, expected prototype:\nvoid wxNativeFontInfo::InitFromFont(const wxFont & font)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxFont* font_ptr=(Luna< wxObject >::checkSubType< wxFont >(L,2));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxNativeFontInfo::InitFromFont function");
		}
		const wxFont & font=*font_ptr;

		wxNativeFontInfo* self=(Luna< wxNativeFontInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxNativeFontInfo::InitFromFont(const wxFont &). Got : '%s'\n%s",typeid(Luna< wxNativeFontInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->InitFromFont(font);

		return 0;
	}

	// int wxNativeFontInfo::GetPointSize() const
	static int _bind_GetPointSize(lua_State *L) {
		if (!_lg_typecheck_GetPointSize(L)) {
			luaL_error(L, "luna typecheck failed in int wxNativeFontInfo::GetPointSize() const function, expected prototype:\nint wxNativeFontInfo::GetPointSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxNativeFontInfo* self=(Luna< wxNativeFontInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxNativeFontInfo::GetPointSize() const. Got : '%s'\n%s",typeid(Luna< wxNativeFontInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetPointSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxSize wxNativeFontInfo::GetPixelSize() const
	static int _bind_GetPixelSize(lua_State *L) {
		if (!_lg_typecheck_GetPixelSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxNativeFontInfo::GetPixelSize() const function, expected prototype:\nwxSize wxNativeFontInfo::GetPixelSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxNativeFontInfo* self=(Luna< wxNativeFontInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxNativeFontInfo::GetPixelSize() const. Got : '%s'\n%s",typeid(Luna< wxNativeFontInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->GetPixelSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxFontStyle wxNativeFontInfo::GetStyle() const
	static int _bind_GetStyle(lua_State *L) {
		if (!_lg_typecheck_GetStyle(L)) {
			luaL_error(L, "luna typecheck failed in wxFontStyle wxNativeFontInfo::GetStyle() const function, expected prototype:\nwxFontStyle wxNativeFontInfo::GetStyle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxNativeFontInfo* self=(Luna< wxNativeFontInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxFontStyle wxNativeFontInfo::GetStyle() const. Got : '%s'\n%s",typeid(Luna< wxNativeFontInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxFontStyle lret = self->GetStyle();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxFontWeight wxNativeFontInfo::GetWeight() const
	static int _bind_GetWeight(lua_State *L) {
		if (!_lg_typecheck_GetWeight(L)) {
			luaL_error(L, "luna typecheck failed in wxFontWeight wxNativeFontInfo::GetWeight() const function, expected prototype:\nwxFontWeight wxNativeFontInfo::GetWeight() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxNativeFontInfo* self=(Luna< wxNativeFontInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxFontWeight wxNativeFontInfo::GetWeight() const. Got : '%s'\n%s",typeid(Luna< wxNativeFontInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxFontWeight lret = self->GetWeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxNativeFontInfo::GetUnderlined() const
	static int _bind_GetUnderlined(lua_State *L) {
		if (!_lg_typecheck_GetUnderlined(L)) {
			luaL_error(L, "luna typecheck failed in bool wxNativeFontInfo::GetUnderlined() const function, expected prototype:\nbool wxNativeFontInfo::GetUnderlined() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxNativeFontInfo* self=(Luna< wxNativeFontInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxNativeFontInfo::GetUnderlined() const. Got : '%s'\n%s",typeid(Luna< wxNativeFontInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GetUnderlined();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxNativeFontInfo::GetFaceName() const
	static int _bind_GetFaceName(lua_State *L) {
		if (!_lg_typecheck_GetFaceName(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxNativeFontInfo::GetFaceName() const function, expected prototype:\nwxString wxNativeFontInfo::GetFaceName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxNativeFontInfo* self=(Luna< wxNativeFontInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxNativeFontInfo::GetFaceName() const. Got : '%s'\n%s",typeid(Luna< wxNativeFontInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetFaceName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxFontFamily wxNativeFontInfo::GetFamily() const
	static int _bind_GetFamily(lua_State *L) {
		if (!_lg_typecheck_GetFamily(L)) {
			luaL_error(L, "luna typecheck failed in wxFontFamily wxNativeFontInfo::GetFamily() const function, expected prototype:\nwxFontFamily wxNativeFontInfo::GetFamily() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxNativeFontInfo* self=(Luna< wxNativeFontInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxFontFamily wxNativeFontInfo::GetFamily() const. Got : '%s'\n%s",typeid(Luna< wxNativeFontInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxFontFamily lret = self->GetFamily();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxFontEncoding wxNativeFontInfo::GetEncoding() const
	static int _bind_GetEncoding(lua_State *L) {
		if (!_lg_typecheck_GetEncoding(L)) {
			luaL_error(L, "luna typecheck failed in wxFontEncoding wxNativeFontInfo::GetEncoding() const function, expected prototype:\nwxFontEncoding wxNativeFontInfo::GetEncoding() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxNativeFontInfo* self=(Luna< wxNativeFontInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxFontEncoding wxNativeFontInfo::GetEncoding() const. Got : '%s'\n%s",typeid(Luna< wxNativeFontInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxFontEncoding lret = self->GetEncoding();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxNativeFontInfo::SetPointSize(int pointsize)
	static int _bind_SetPointSize(lua_State *L) {
		if (!_lg_typecheck_SetPointSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxNativeFontInfo::SetPointSize(int pointsize) function, expected prototype:\nvoid wxNativeFontInfo::SetPointSize(int pointsize)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int pointsize=(int)lua_tointeger(L,2);

		wxNativeFontInfo* self=(Luna< wxNativeFontInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxNativeFontInfo::SetPointSize(int). Got : '%s'\n%s",typeid(Luna< wxNativeFontInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetPointSize(pointsize);

		return 0;
	}

	// void wxNativeFontInfo::SetPixelSize(const wxSize & pixelSize)
	static int _bind_SetPixelSize(lua_State *L) {
		if (!_lg_typecheck_SetPixelSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxNativeFontInfo::SetPixelSize(const wxSize & pixelSize) function, expected prototype:\nvoid wxNativeFontInfo::SetPixelSize(const wxSize & pixelSize)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* pixelSize_ptr=(Luna< wxSize >::check(L,2));
		if( !pixelSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pixelSize in wxNativeFontInfo::SetPixelSize function");
		}
		const wxSize & pixelSize=*pixelSize_ptr;

		wxNativeFontInfo* self=(Luna< wxNativeFontInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxNativeFontInfo::SetPixelSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxNativeFontInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetPixelSize(pixelSize);

		return 0;
	}

	// void wxNativeFontInfo::SetStyle(wxFontStyle style)
	static int _bind_SetStyle(lua_State *L) {
		if (!_lg_typecheck_SetStyle(L)) {
			luaL_error(L, "luna typecheck failed in void wxNativeFontInfo::SetStyle(wxFontStyle style) function, expected prototype:\nvoid wxNativeFontInfo::SetStyle(wxFontStyle style)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxFontStyle style=(wxFontStyle)lua_tointeger(L,2);

		wxNativeFontInfo* self=(Luna< wxNativeFontInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxNativeFontInfo::SetStyle(wxFontStyle). Got : '%s'\n%s",typeid(Luna< wxNativeFontInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetStyle(style);

		return 0;
	}

	// void wxNativeFontInfo::SetWeight(wxFontWeight weight)
	static int _bind_SetWeight(lua_State *L) {
		if (!_lg_typecheck_SetWeight(L)) {
			luaL_error(L, "luna typecheck failed in void wxNativeFontInfo::SetWeight(wxFontWeight weight) function, expected prototype:\nvoid wxNativeFontInfo::SetWeight(wxFontWeight weight)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxFontWeight weight=(wxFontWeight)lua_tointeger(L,2);

		wxNativeFontInfo* self=(Luna< wxNativeFontInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxNativeFontInfo::SetWeight(wxFontWeight). Got : '%s'\n%s",typeid(Luna< wxNativeFontInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetWeight(weight);

		return 0;
	}

	// void wxNativeFontInfo::SetUnderlined(bool underlined)
	static int _bind_SetUnderlined(lua_State *L) {
		if (!_lg_typecheck_SetUnderlined(L)) {
			luaL_error(L, "luna typecheck failed in void wxNativeFontInfo::SetUnderlined(bool underlined) function, expected prototype:\nvoid wxNativeFontInfo::SetUnderlined(bool underlined)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool underlined=(bool)(lua_toboolean(L,2)==1);

		wxNativeFontInfo* self=(Luna< wxNativeFontInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxNativeFontInfo::SetUnderlined(bool). Got : '%s'\n%s",typeid(Luna< wxNativeFontInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetUnderlined(underlined);

		return 0;
	}

	// bool wxNativeFontInfo::SetFaceName(const wxString & facename)
	static int _bind_SetFaceName_overload_1(lua_State *L) {
		if (!_lg_typecheck_SetFaceName_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool wxNativeFontInfo::SetFaceName(const wxString & facename) function, expected prototype:\nbool wxNativeFontInfo::SetFaceName(const wxString & facename)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString facename(lua_tostring(L,2),lua_objlen(L,2));

		wxNativeFontInfo* self=(Luna< wxNativeFontInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxNativeFontInfo::SetFaceName(const wxString &). Got : '%s'\n%s",typeid(Luna< wxNativeFontInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetFaceName(facename);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxNativeFontInfo::SetFaceName(const wxArrayString & facenames)
	static int _bind_SetFaceName_overload_2(lua_State *L) {
		if (!_lg_typecheck_SetFaceName_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxNativeFontInfo::SetFaceName(const wxArrayString & facenames) function, expected prototype:\nvoid wxNativeFontInfo::SetFaceName(const wxArrayString & facenames)\nClass arguments details:\narg 1 ID = 59507769\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxArrayString* facenames_ptr=(Luna< wxArrayString >::check(L,2));
		if( !facenames_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg facenames in wxNativeFontInfo::SetFaceName function");
		}
		const wxArrayString & facenames=*facenames_ptr;

		wxNativeFontInfo* self=(Luna< wxNativeFontInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxNativeFontInfo::SetFaceName(const wxArrayString &). Got : '%s'\n%s",typeid(Luna< wxNativeFontInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetFaceName(facenames);

		return 0;
	}

	// Overload binder for wxNativeFontInfo::SetFaceName
	static int _bind_SetFaceName(lua_State *L) {
		if (_lg_typecheck_SetFaceName_overload_1(L)) return _bind_SetFaceName_overload_1(L);
		if (_lg_typecheck_SetFaceName_overload_2(L)) return _bind_SetFaceName_overload_2(L);

		luaL_error(L, "error in function SetFaceName, cannot match any of the overloads for function SetFaceName:\n  SetFaceName(const wxString &)\n  SetFaceName(const wxArrayString &)\n");
		return 0;
	}

	// void wxNativeFontInfo::SetFamily(wxFontFamily family)
	static int _bind_SetFamily(lua_State *L) {
		if (!_lg_typecheck_SetFamily(L)) {
			luaL_error(L, "luna typecheck failed in void wxNativeFontInfo::SetFamily(wxFontFamily family) function, expected prototype:\nvoid wxNativeFontInfo::SetFamily(wxFontFamily family)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxFontFamily family=(wxFontFamily)lua_tointeger(L,2);

		wxNativeFontInfo* self=(Luna< wxNativeFontInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxNativeFontInfo::SetFamily(wxFontFamily). Got : '%s'\n%s",typeid(Luna< wxNativeFontInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetFamily(family);

		return 0;
	}

	// void wxNativeFontInfo::SetEncoding(wxFontEncoding encoding)
	static int _bind_SetEncoding(lua_State *L) {
		if (!_lg_typecheck_SetEncoding(L)) {
			luaL_error(L, "luna typecheck failed in void wxNativeFontInfo::SetEncoding(wxFontEncoding encoding) function, expected prototype:\nvoid wxNativeFontInfo::SetEncoding(wxFontEncoding encoding)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxFontEncoding encoding=(wxFontEncoding)lua_tointeger(L,2);

		wxNativeFontInfo* self=(Luna< wxNativeFontInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxNativeFontInfo::SetEncoding(wxFontEncoding). Got : '%s'\n%s",typeid(Luna< wxNativeFontInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetEncoding(encoding);

		return 0;
	}

	// bool wxNativeFontInfo::FromString(const wxString & s)
	static int _bind_FromString(lua_State *L) {
		if (!_lg_typecheck_FromString(L)) {
			luaL_error(L, "luna typecheck failed in bool wxNativeFontInfo::FromString(const wxString & s) function, expected prototype:\nbool wxNativeFontInfo::FromString(const wxString & s)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString s(lua_tostring(L,2),lua_objlen(L,2));

		wxNativeFontInfo* self=(Luna< wxNativeFontInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxNativeFontInfo::FromString(const wxString &). Got : '%s'\n%s",typeid(Luna< wxNativeFontInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->FromString(s);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxNativeFontInfo::ToString() const
	static int _bind_ToString(lua_State *L) {
		if (!_lg_typecheck_ToString(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxNativeFontInfo::ToString() const function, expected prototype:\nwxString wxNativeFontInfo::ToString() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxNativeFontInfo* self=(Luna< wxNativeFontInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxNativeFontInfo::ToString() const. Got : '%s'\n%s",typeid(Luna< wxNativeFontInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->ToString();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool wxNativeFontInfo::FromUserString(const wxString & s)
	static int _bind_FromUserString(lua_State *L) {
		if (!_lg_typecheck_FromUserString(L)) {
			luaL_error(L, "luna typecheck failed in bool wxNativeFontInfo::FromUserString(const wxString & s) function, expected prototype:\nbool wxNativeFontInfo::FromUserString(const wxString & s)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString s(lua_tostring(L,2),lua_objlen(L,2));

		wxNativeFontInfo* self=(Luna< wxNativeFontInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxNativeFontInfo::FromUserString(const wxString &). Got : '%s'\n%s",typeid(Luna< wxNativeFontInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->FromUserString(s);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxNativeFontInfo::ToUserString() const
	static int _bind_ToUserString(lua_State *L) {
		if (!_lg_typecheck_ToUserString(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxNativeFontInfo::ToUserString() const function, expected prototype:\nwxString wxNativeFontInfo::ToUserString() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxNativeFontInfo* self=(Luna< wxNativeFontInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxNativeFontInfo::ToUserString() const. Got : '%s'\n%s",typeid(Luna< wxNativeFontInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->ToUserString();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}


	// Operator binds:
	// wxNativeFontInfo & wxNativeFontInfo::operator=(const wxNativeFontInfo & info)
	static int _bind_op_assign(lua_State *L) {
		if (!_lg_typecheck_op_assign(L)) {
			luaL_error(L, "luna typecheck failed in wxNativeFontInfo & wxNativeFontInfo::operator=(const wxNativeFontInfo & info) function, expected prototype:\nwxNativeFontInfo & wxNativeFontInfo::operator=(const wxNativeFontInfo & info)\nClass arguments details:\narg 1 ID = 26059272\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxNativeFontInfo* info_ptr=(Luna< wxNativeFontInfo >::check(L,2));
		if( !info_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg info in wxNativeFontInfo::operator= function");
		}
		const wxNativeFontInfo & info=*info_ptr;

		wxNativeFontInfo* self=(Luna< wxNativeFontInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxNativeFontInfo & wxNativeFontInfo::operator=(const wxNativeFontInfo &). Got : '%s'\n%s",typeid(Luna< wxNativeFontInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxNativeFontInfo* lret = &self->operator=(info);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxNativeFontInfo >::push(L,lret,false);

		return 1;
	}


};

wxNativeFontInfo* LunaTraits< wxNativeFontInfo >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxNativeFontInfo::_bind_ctor(L);
}

void LunaTraits< wxNativeFontInfo >::_bind_dtor(wxNativeFontInfo* obj) {
	delete obj;
}

const char LunaTraits< wxNativeFontInfo >::className[] = "wxNativeFontInfo";
const char LunaTraits< wxNativeFontInfo >::fullName[] = "wxNativeFontInfo";
const char LunaTraits< wxNativeFontInfo >::moduleName[] = "wx";
const char* LunaTraits< wxNativeFontInfo >::parents[] = {0};
const int LunaTraits< wxNativeFontInfo >::hash = 26059272;
const int LunaTraits< wxNativeFontInfo >::uniqueIDs[] = {26059272,0};

luna_RegType LunaTraits< wxNativeFontInfo >::methods[] = {
	{"Init", &luna_wrapper_wxNativeFontInfo::_bind_Init},
	{"InitFromFont", &luna_wrapper_wxNativeFontInfo::_bind_InitFromFont},
	{"GetPointSize", &luna_wrapper_wxNativeFontInfo::_bind_GetPointSize},
	{"GetPixelSize", &luna_wrapper_wxNativeFontInfo::_bind_GetPixelSize},
	{"GetStyle", &luna_wrapper_wxNativeFontInfo::_bind_GetStyle},
	{"GetWeight", &luna_wrapper_wxNativeFontInfo::_bind_GetWeight},
	{"GetUnderlined", &luna_wrapper_wxNativeFontInfo::_bind_GetUnderlined},
	{"GetFaceName", &luna_wrapper_wxNativeFontInfo::_bind_GetFaceName},
	{"GetFamily", &luna_wrapper_wxNativeFontInfo::_bind_GetFamily},
	{"GetEncoding", &luna_wrapper_wxNativeFontInfo::_bind_GetEncoding},
	{"SetPointSize", &luna_wrapper_wxNativeFontInfo::_bind_SetPointSize},
	{"SetPixelSize", &luna_wrapper_wxNativeFontInfo::_bind_SetPixelSize},
	{"SetStyle", &luna_wrapper_wxNativeFontInfo::_bind_SetStyle},
	{"SetWeight", &luna_wrapper_wxNativeFontInfo::_bind_SetWeight},
	{"SetUnderlined", &luna_wrapper_wxNativeFontInfo::_bind_SetUnderlined},
	{"SetFaceName", &luna_wrapper_wxNativeFontInfo::_bind_SetFaceName},
	{"SetFamily", &luna_wrapper_wxNativeFontInfo::_bind_SetFamily},
	{"SetEncoding", &luna_wrapper_wxNativeFontInfo::_bind_SetEncoding},
	{"FromString", &luna_wrapper_wxNativeFontInfo::_bind_FromString},
	{"ToString", &luna_wrapper_wxNativeFontInfo::_bind_ToString},
	{"FromUserString", &luna_wrapper_wxNativeFontInfo::_bind_FromUserString},
	{"ToUserString", &luna_wrapper_wxNativeFontInfo::_bind_ToUserString},
	{"op_assign", &luna_wrapper_wxNativeFontInfo::_bind_op_assign},
	{"dynCast", &luna_wrapper_wxNativeFontInfo::_bind_dynCast},
	{"__eq", &luna_wrapper_wxNativeFontInfo::_bind___eq},
	{"fromVoid", &luna_wrapper_wxNativeFontInfo::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxNativeFontInfo::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< wxNativeFontInfo >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxNativeFontInfo >::enumValues[] = {
	{0,0}
};



#include <plug_common.h>

class luna_wrapper_wxTextAttr {
public:
	typedef Luna< wxTextAttr > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,37117058) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxTextAttr*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxTextAttr* rhs =(Luna< wxTextAttr >::check(L,2));
		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
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

		wxTextAttr* self= (wxTextAttr*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxTextAttr >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,37117058) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxTextAttr >::check(L,1));
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

		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxTextAttr");
		
		return luna_dynamicCast(L,converters,"wxTextAttr",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxColour >(L,1))) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( luatop>1 && (!(Luna< wxObject >::checkSubType< wxColour >(L,2))) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( luatop>2 && (!(Luna< wxObject >::checkSubType< wxFont >(L,3))) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,37117058) ) return false;
		if( (!(Luna< wxTextAttr >::check(L,1))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Apply(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,37117058) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,37117058)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Merge_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,37117058) ) return false;
		if( (!(Luna< wxTextAttr >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Merge_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,37117058) ) return false;
		if( (!(Luna< wxTextAttr >::check(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,37117058) ) return false;
		if( (!(Luna< wxTextAttr >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetAlignment(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetBackgroundColour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetBulletFont(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetBulletName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetBulletNumber(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetBulletStyle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetBulletText(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetCharacterStyleName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFlags(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFont(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFontAttributes(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetFontEncoding(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFontFaceName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFontFamily(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFontSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFontStyle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFontUnderlined(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFontWeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLeftIndent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLeftSubIndent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLineSpacing(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetListStyleName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetOutlineLevel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetParagraphSpacingAfter(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetParagraphSpacingBefore(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetParagraphStyleName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetRightIndent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetTabs(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetTextColour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetTextEffectFlags(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetTextEffects(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetURL(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasAlignment(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasBackgroundColour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasBulletName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasBulletNumber(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasBulletStyle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasBulletText(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasCharacterStyleName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasFlag(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_HasFont(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasFontEncoding(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasFontFaceName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasFontFamily(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasFontItalic(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasFontSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasFontUnderlined(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasFontWeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasLeftIndent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasLineSpacing(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasListStyleName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasOutlineLevel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasPageBreak(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasParagraphSpacingAfter(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasParagraphSpacingBefore(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasParagraphStyleName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasRightIndent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasTabs(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasTextColour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasTextEffects(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasURL(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsCharacterStyle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsDefault(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsParagraphStyle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetAlignment(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetBackgroundColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetBulletFont(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetBulletName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetBulletNumber(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetBulletStyle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetBulletText(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetCharacterStyleName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFlags(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFont(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFontEncoding(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFontFaceName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFontFamily(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFontSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFontStyle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFontUnderlined(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFontWeight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetLeftIndent(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetLineSpacing(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetListStyleName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetOutlineLevel(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPageBreak(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetParagraphSpacingAfter(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetParagraphSpacingBefore(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetParagraphStyleName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetRightIndent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetTabs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,47342076) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetTextColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetTextEffectFlags(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetTextEffects(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetURL(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck_op_assign(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,37117058) ) return false;
		return true;
	}


	// Constructor binds:
	// wxTextAttr::wxTextAttr()
	static wxTextAttr* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxTextAttr::wxTextAttr() function, expected prototype:\nwxTextAttr::wxTextAttr()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxTextAttr();
	}

	// wxTextAttr::wxTextAttr(const wxColour & colText, const wxColour & colBack = wxNullColour, const wxFont & font = wxNullFont, wxTextAttrAlignment alignment = ::wxTEXT_ALIGNMENT_DEFAULT)
	static wxTextAttr* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxTextAttr::wxTextAttr(const wxColour & colText, const wxColour & colBack = wxNullColour, const wxFont & font = wxNullFont, wxTextAttrAlignment alignment = ::wxTEXT_ALIGNMENT_DEFAULT) function, expected prototype:\nwxTextAttr::wxTextAttr(const wxColour & colText, const wxColour & colBack = wxNullColour, const wxFont & font = wxNullFont, wxTextAttrAlignment alignment = ::wxTEXT_ALIGNMENT_DEFAULT)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxColour* colText_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,1));
		if( !colText_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colText in wxTextAttr::wxTextAttr function");
		}
		const wxColour & colText=*colText_ptr;
		const wxColour* colBack_ptr=luatop>1 ? (Luna< wxObject >::checkSubType< wxColour >(L,2)) : NULL;
		if( luatop>1 && !colBack_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colBack in wxTextAttr::wxTextAttr function");
		}
		const wxColour & colBack=luatop>1 ? *colBack_ptr : (const wxColour&)wxNullColour;
		const wxFont* font_ptr=luatop>2 ? (Luna< wxObject >::checkSubType< wxFont >(L,3)) : NULL;
		if( luatop>2 && !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxTextAttr::wxTextAttr function");
		}
		const wxFont & font=luatop>2 ? *font_ptr : (const wxFont&)wxNullFont;
		wxTextAttrAlignment alignment=luatop>3 ? (wxTextAttrAlignment)lua_tointeger(L,4) : (wxTextAttrAlignment)::wxTEXT_ALIGNMENT_DEFAULT;

		return new wxTextAttr(colText, colBack, font, alignment);
	}

	// wxTextAttr::wxTextAttr(const wxTextAttr & attr)
	static wxTextAttr* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in wxTextAttr::wxTextAttr(const wxTextAttr & attr) function, expected prototype:\nwxTextAttr::wxTextAttr(const wxTextAttr & attr)\nClass arguments details:\narg 1 ID = 37117058\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTextAttr* attr_ptr=(Luna< wxTextAttr >::check(L,1));
		if( !attr_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg attr in wxTextAttr::wxTextAttr function");
		}
		const wxTextAttr & attr=*attr_ptr;

		return new wxTextAttr(attr);
	}

	// Overload binder for wxTextAttr::wxTextAttr
	static wxTextAttr* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function wxTextAttr, cannot match any of the overloads for function wxTextAttr:\n  wxTextAttr()\n  wxTextAttr(const wxColour &, const wxColour &, const wxFont &, wxTextAttrAlignment)\n  wxTextAttr(const wxTextAttr &)\n");
		return NULL;
	}


	// Function binds:
	// bool wxTextAttr::Apply(const wxTextAttr & style, const wxTextAttr * compareWith = NULL)
	static int _bind_Apply(lua_State *L) {
		if (!_lg_typecheck_Apply(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextAttr::Apply(const wxTextAttr & style, const wxTextAttr * compareWith = NULL) function, expected prototype:\nbool wxTextAttr::Apply(const wxTextAttr & style, const wxTextAttr * compareWith = NULL)\nClass arguments details:\narg 1 ID = 37117058\narg 2 ID = 37117058\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxTextAttr* style_ptr=(Luna< wxTextAttr >::check(L,2));
		if( !style_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg style in wxTextAttr::Apply function");
		}
		const wxTextAttr & style=*style_ptr;
		const wxTextAttr* compareWith=luatop>2 ? (Luna< wxTextAttr >::check(L,3)) : (const wxTextAttr*)NULL;

		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextAttr::Apply(const wxTextAttr &, const wxTextAttr *). Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Apply(style, compareWith);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxTextAttr::Merge(const wxTextAttr & overlay)
	static int _bind_Merge_overload_1(lua_State *L) {
		if (!_lg_typecheck_Merge_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextAttr::Merge(const wxTextAttr & overlay) function, expected prototype:\nvoid wxTextAttr::Merge(const wxTextAttr & overlay)\nClass arguments details:\narg 1 ID = 37117058\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTextAttr* overlay_ptr=(Luna< wxTextAttr >::check(L,2));
		if( !overlay_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg overlay in wxTextAttr::Merge function");
		}
		const wxTextAttr & overlay=*overlay_ptr;

		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextAttr::Merge(const wxTextAttr &). Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Merge(overlay);

		return 0;
	}

	// static wxTextAttr wxTextAttr::Merge(const wxTextAttr & base, const wxTextAttr & overlay)
	static int _bind_Merge_overload_2(lua_State *L) {
		if (!_lg_typecheck_Merge_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in static wxTextAttr wxTextAttr::Merge(const wxTextAttr & base, const wxTextAttr & overlay) function, expected prototype:\nstatic wxTextAttr wxTextAttr::Merge(const wxTextAttr & base, const wxTextAttr & overlay)\nClass arguments details:\narg 1 ID = 37117058\narg 2 ID = 37117058\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTextAttr* base_ptr=(Luna< wxTextAttr >::check(L,1));
		if( !base_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg base in wxTextAttr::Merge function");
		}
		const wxTextAttr & base=*base_ptr;
		const wxTextAttr* overlay_ptr=(Luna< wxTextAttr >::check(L,2));
		if( !overlay_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg overlay in wxTextAttr::Merge function");
		}
		const wxTextAttr & overlay=*overlay_ptr;

		wxTextAttr stack_lret = wxTextAttr::Merge(base, overlay);
		wxTextAttr* lret = new wxTextAttr(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttr >::push(L,lret,true);

		return 1;
	}

	// Overload binder for wxTextAttr::Merge
	static int _bind_Merge(lua_State *L) {
		if (_lg_typecheck_Merge_overload_1(L)) return _bind_Merge_overload_1(L);
		if (_lg_typecheck_Merge_overload_2(L)) return _bind_Merge_overload_2(L);

		luaL_error(L, "error in function Merge, cannot match any of the overloads for function Merge:\n  Merge(const wxTextAttr &)\n  Merge(const wxTextAttr &, const wxTextAttr &)\n");
		return 0;
	}

	// wxTextAttrAlignment wxTextAttr::GetAlignment() const
	static int _bind_GetAlignment(lua_State *L) {
		if (!_lg_typecheck_GetAlignment(L)) {
			luaL_error(L, "luna typecheck failed in wxTextAttrAlignment wxTextAttr::GetAlignment() const function, expected prototype:\nwxTextAttrAlignment wxTextAttr::GetAlignment() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTextAttrAlignment wxTextAttr::GetAlignment() const. Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxTextAttrAlignment lret = self->GetAlignment();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const wxColour & wxTextAttr::GetBackgroundColour() const
	static int _bind_GetBackgroundColour(lua_State *L) {
		if (!_lg_typecheck_GetBackgroundColour(L)) {
			luaL_error(L, "luna typecheck failed in const wxColour & wxTextAttr::GetBackgroundColour() const function, expected prototype:\nconst wxColour & wxTextAttr::GetBackgroundColour() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxColour & wxTextAttr::GetBackgroundColour() const. Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxColour* lret = &self->GetBackgroundColour();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,false);

		return 1;
	}

	// const wxString & wxTextAttr::GetBulletFont() const
	static int _bind_GetBulletFont(lua_State *L) {
		if (!_lg_typecheck_GetBulletFont(L)) {
			luaL_error(L, "luna typecheck failed in const wxString & wxTextAttr::GetBulletFont() const function, expected prototype:\nconst wxString & wxTextAttr::GetBulletFont() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxString & wxTextAttr::GetBulletFont() const. Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxString & lret = self->GetBulletFont();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// const wxString & wxTextAttr::GetBulletName() const
	static int _bind_GetBulletName(lua_State *L) {
		if (!_lg_typecheck_GetBulletName(L)) {
			luaL_error(L, "luna typecheck failed in const wxString & wxTextAttr::GetBulletName() const function, expected prototype:\nconst wxString & wxTextAttr::GetBulletName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxString & wxTextAttr::GetBulletName() const. Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxString & lret = self->GetBulletName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// int wxTextAttr::GetBulletNumber() const
	static int _bind_GetBulletNumber(lua_State *L) {
		if (!_lg_typecheck_GetBulletNumber(L)) {
			luaL_error(L, "luna typecheck failed in int wxTextAttr::GetBulletNumber() const function, expected prototype:\nint wxTextAttr::GetBulletNumber() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxTextAttr::GetBulletNumber() const. Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetBulletNumber();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxTextAttr::GetBulletStyle() const
	static int _bind_GetBulletStyle(lua_State *L) {
		if (!_lg_typecheck_GetBulletStyle(L)) {
			luaL_error(L, "luna typecheck failed in int wxTextAttr::GetBulletStyle() const function, expected prototype:\nint wxTextAttr::GetBulletStyle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxTextAttr::GetBulletStyle() const. Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetBulletStyle();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const wxString & wxTextAttr::GetBulletText() const
	static int _bind_GetBulletText(lua_State *L) {
		if (!_lg_typecheck_GetBulletText(L)) {
			luaL_error(L, "luna typecheck failed in const wxString & wxTextAttr::GetBulletText() const function, expected prototype:\nconst wxString & wxTextAttr::GetBulletText() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxString & wxTextAttr::GetBulletText() const. Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxString & lret = self->GetBulletText();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// const wxString & wxTextAttr::GetCharacterStyleName() const
	static int _bind_GetCharacterStyleName(lua_State *L) {
		if (!_lg_typecheck_GetCharacterStyleName(L)) {
			luaL_error(L, "luna typecheck failed in const wxString & wxTextAttr::GetCharacterStyleName() const function, expected prototype:\nconst wxString & wxTextAttr::GetCharacterStyleName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxString & wxTextAttr::GetCharacterStyleName() const. Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxString & lret = self->GetCharacterStyleName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// long wxTextAttr::GetFlags() const
	static int _bind_GetFlags(lua_State *L) {
		if (!_lg_typecheck_GetFlags(L)) {
			luaL_error(L, "luna typecheck failed in long wxTextAttr::GetFlags() const function, expected prototype:\nlong wxTextAttr::GetFlags() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long wxTextAttr::GetFlags() const. Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->GetFlags();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxFont wxTextAttr::GetFont() const
	static int _bind_GetFont(lua_State *L) {
		if (!_lg_typecheck_GetFont(L)) {
			luaL_error(L, "luna typecheck failed in wxFont wxTextAttr::GetFont() const function, expected prototype:\nwxFont wxTextAttr::GetFont() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxFont wxTextAttr::GetFont() const. Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxFont stack_lret = self->GetFont();
		wxFont* lret = new wxFont(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFont >::push(L,lret,true);

		return 1;
	}

	// bool wxTextAttr::GetFontAttributes(const wxFont & font, int flags = ::wxTEXT_ATTR_FONT)
	static int _bind_GetFontAttributes(lua_State *L) {
		if (!_lg_typecheck_GetFontAttributes(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextAttr::GetFontAttributes(const wxFont & font, int flags = ::wxTEXT_ATTR_FONT) function, expected prototype:\nbool wxTextAttr::GetFontAttributes(const wxFont & font, int flags = ::wxTEXT_ATTR_FONT)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxFont* font_ptr=(Luna< wxObject >::checkSubType< wxFont >(L,2));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxTextAttr::GetFontAttributes function");
		}
		const wxFont & font=*font_ptr;
		int flags=luatop>2 ? (int)lua_tointeger(L,3) : (int)::wxTEXT_ATTR_FONT;

		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextAttr::GetFontAttributes(const wxFont &, int). Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GetFontAttributes(font, flags);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxFontEncoding wxTextAttr::GetFontEncoding() const
	static int _bind_GetFontEncoding(lua_State *L) {
		if (!_lg_typecheck_GetFontEncoding(L)) {
			luaL_error(L, "luna typecheck failed in wxFontEncoding wxTextAttr::GetFontEncoding() const function, expected prototype:\nwxFontEncoding wxTextAttr::GetFontEncoding() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxFontEncoding wxTextAttr::GetFontEncoding() const. Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxFontEncoding lret = self->GetFontEncoding();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const wxString & wxTextAttr::GetFontFaceName() const
	static int _bind_GetFontFaceName(lua_State *L) {
		if (!_lg_typecheck_GetFontFaceName(L)) {
			luaL_error(L, "luna typecheck failed in const wxString & wxTextAttr::GetFontFaceName() const function, expected prototype:\nconst wxString & wxTextAttr::GetFontFaceName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxString & wxTextAttr::GetFontFaceName() const. Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxString & lret = self->GetFontFaceName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxFontFamily wxTextAttr::GetFontFamily() const
	static int _bind_GetFontFamily(lua_State *L) {
		if (!_lg_typecheck_GetFontFamily(L)) {
			luaL_error(L, "luna typecheck failed in wxFontFamily wxTextAttr::GetFontFamily() const function, expected prototype:\nwxFontFamily wxTextAttr::GetFontFamily() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxFontFamily wxTextAttr::GetFontFamily() const. Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxFontFamily lret = self->GetFontFamily();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxTextAttr::GetFontSize() const
	static int _bind_GetFontSize(lua_State *L) {
		if (!_lg_typecheck_GetFontSize(L)) {
			luaL_error(L, "luna typecheck failed in int wxTextAttr::GetFontSize() const function, expected prototype:\nint wxTextAttr::GetFontSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxTextAttr::GetFontSize() const. Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetFontSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxFontStyle wxTextAttr::GetFontStyle() const
	static int _bind_GetFontStyle(lua_State *L) {
		if (!_lg_typecheck_GetFontStyle(L)) {
			luaL_error(L, "luna typecheck failed in wxFontStyle wxTextAttr::GetFontStyle() const function, expected prototype:\nwxFontStyle wxTextAttr::GetFontStyle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxFontStyle wxTextAttr::GetFontStyle() const. Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxFontStyle lret = self->GetFontStyle();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxTextAttr::GetFontUnderlined() const
	static int _bind_GetFontUnderlined(lua_State *L) {
		if (!_lg_typecheck_GetFontUnderlined(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextAttr::GetFontUnderlined() const function, expected prototype:\nbool wxTextAttr::GetFontUnderlined() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextAttr::GetFontUnderlined() const. Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GetFontUnderlined();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxFontWeight wxTextAttr::GetFontWeight() const
	static int _bind_GetFontWeight(lua_State *L) {
		if (!_lg_typecheck_GetFontWeight(L)) {
			luaL_error(L, "luna typecheck failed in wxFontWeight wxTextAttr::GetFontWeight() const function, expected prototype:\nwxFontWeight wxTextAttr::GetFontWeight() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxFontWeight wxTextAttr::GetFontWeight() const. Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxFontWeight lret = self->GetFontWeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// long wxTextAttr::GetLeftIndent() const
	static int _bind_GetLeftIndent(lua_State *L) {
		if (!_lg_typecheck_GetLeftIndent(L)) {
			luaL_error(L, "luna typecheck failed in long wxTextAttr::GetLeftIndent() const function, expected prototype:\nlong wxTextAttr::GetLeftIndent() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long wxTextAttr::GetLeftIndent() const. Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->GetLeftIndent();
		lua_pushnumber(L,lret);

		return 1;
	}

	// long wxTextAttr::GetLeftSubIndent() const
	static int _bind_GetLeftSubIndent(lua_State *L) {
		if (!_lg_typecheck_GetLeftSubIndent(L)) {
			luaL_error(L, "luna typecheck failed in long wxTextAttr::GetLeftSubIndent() const function, expected prototype:\nlong wxTextAttr::GetLeftSubIndent() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long wxTextAttr::GetLeftSubIndent() const. Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->GetLeftSubIndent();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxTextAttr::GetLineSpacing() const
	static int _bind_GetLineSpacing(lua_State *L) {
		if (!_lg_typecheck_GetLineSpacing(L)) {
			luaL_error(L, "luna typecheck failed in int wxTextAttr::GetLineSpacing() const function, expected prototype:\nint wxTextAttr::GetLineSpacing() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxTextAttr::GetLineSpacing() const. Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetLineSpacing();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const wxString & wxTextAttr::GetListStyleName() const
	static int _bind_GetListStyleName(lua_State *L) {
		if (!_lg_typecheck_GetListStyleName(L)) {
			luaL_error(L, "luna typecheck failed in const wxString & wxTextAttr::GetListStyleName() const function, expected prototype:\nconst wxString & wxTextAttr::GetListStyleName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxString & wxTextAttr::GetListStyleName() const. Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxString & lret = self->GetListStyleName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// int wxTextAttr::GetOutlineLevel() const
	static int _bind_GetOutlineLevel(lua_State *L) {
		if (!_lg_typecheck_GetOutlineLevel(L)) {
			luaL_error(L, "luna typecheck failed in int wxTextAttr::GetOutlineLevel() const function, expected prototype:\nint wxTextAttr::GetOutlineLevel() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxTextAttr::GetOutlineLevel() const. Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetOutlineLevel();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxTextAttr::GetParagraphSpacingAfter() const
	static int _bind_GetParagraphSpacingAfter(lua_State *L) {
		if (!_lg_typecheck_GetParagraphSpacingAfter(L)) {
			luaL_error(L, "luna typecheck failed in int wxTextAttr::GetParagraphSpacingAfter() const function, expected prototype:\nint wxTextAttr::GetParagraphSpacingAfter() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxTextAttr::GetParagraphSpacingAfter() const. Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetParagraphSpacingAfter();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxTextAttr::GetParagraphSpacingBefore() const
	static int _bind_GetParagraphSpacingBefore(lua_State *L) {
		if (!_lg_typecheck_GetParagraphSpacingBefore(L)) {
			luaL_error(L, "luna typecheck failed in int wxTextAttr::GetParagraphSpacingBefore() const function, expected prototype:\nint wxTextAttr::GetParagraphSpacingBefore() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxTextAttr::GetParagraphSpacingBefore() const. Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetParagraphSpacingBefore();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const wxString & wxTextAttr::GetParagraphStyleName() const
	static int _bind_GetParagraphStyleName(lua_State *L) {
		if (!_lg_typecheck_GetParagraphStyleName(L)) {
			luaL_error(L, "luna typecheck failed in const wxString & wxTextAttr::GetParagraphStyleName() const function, expected prototype:\nconst wxString & wxTextAttr::GetParagraphStyleName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxString & wxTextAttr::GetParagraphStyleName() const. Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxString & lret = self->GetParagraphStyleName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// long wxTextAttr::GetRightIndent() const
	static int _bind_GetRightIndent(lua_State *L) {
		if (!_lg_typecheck_GetRightIndent(L)) {
			luaL_error(L, "luna typecheck failed in long wxTextAttr::GetRightIndent() const function, expected prototype:\nlong wxTextAttr::GetRightIndent() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long wxTextAttr::GetRightIndent() const. Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->GetRightIndent();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const wxArrayInt & wxTextAttr::GetTabs() const
	static int _bind_GetTabs(lua_State *L) {
		if (!_lg_typecheck_GetTabs(L)) {
			luaL_error(L, "luna typecheck failed in const wxArrayInt & wxTextAttr::GetTabs() const function, expected prototype:\nconst wxArrayInt & wxTextAttr::GetTabs() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxArrayInt & wxTextAttr::GetTabs() const. Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxArrayInt* lret = &self->GetTabs();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxArrayInt >::push(L,lret,false);

		return 1;
	}

	// const wxColour & wxTextAttr::GetTextColour() const
	static int _bind_GetTextColour(lua_State *L) {
		if (!_lg_typecheck_GetTextColour(L)) {
			luaL_error(L, "luna typecheck failed in const wxColour & wxTextAttr::GetTextColour() const function, expected prototype:\nconst wxColour & wxTextAttr::GetTextColour() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxColour & wxTextAttr::GetTextColour() const. Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxColour* lret = &self->GetTextColour();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,false);

		return 1;
	}

	// int wxTextAttr::GetTextEffectFlags() const
	static int _bind_GetTextEffectFlags(lua_State *L) {
		if (!_lg_typecheck_GetTextEffectFlags(L)) {
			luaL_error(L, "luna typecheck failed in int wxTextAttr::GetTextEffectFlags() const function, expected prototype:\nint wxTextAttr::GetTextEffectFlags() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxTextAttr::GetTextEffectFlags() const. Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetTextEffectFlags();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxTextAttr::GetTextEffects() const
	static int _bind_GetTextEffects(lua_State *L) {
		if (!_lg_typecheck_GetTextEffects(L)) {
			luaL_error(L, "luna typecheck failed in int wxTextAttr::GetTextEffects() const function, expected prototype:\nint wxTextAttr::GetTextEffects() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxTextAttr::GetTextEffects() const. Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetTextEffects();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const wxString & wxTextAttr::GetURL() const
	static int _bind_GetURL(lua_State *L) {
		if (!_lg_typecheck_GetURL(L)) {
			luaL_error(L, "luna typecheck failed in const wxString & wxTextAttr::GetURL() const function, expected prototype:\nconst wxString & wxTextAttr::GetURL() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxString & wxTextAttr::GetURL() const. Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxString & lret = self->GetURL();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool wxTextAttr::HasAlignment() const
	static int _bind_HasAlignment(lua_State *L) {
		if (!_lg_typecheck_HasAlignment(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextAttr::HasAlignment() const function, expected prototype:\nbool wxTextAttr::HasAlignment() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextAttr::HasAlignment() const. Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasAlignment();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextAttr::HasBackgroundColour() const
	static int _bind_HasBackgroundColour(lua_State *L) {
		if (!_lg_typecheck_HasBackgroundColour(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextAttr::HasBackgroundColour() const function, expected prototype:\nbool wxTextAttr::HasBackgroundColour() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextAttr::HasBackgroundColour() const. Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasBackgroundColour();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextAttr::HasBulletName() const
	static int _bind_HasBulletName(lua_State *L) {
		if (!_lg_typecheck_HasBulletName(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextAttr::HasBulletName() const function, expected prototype:\nbool wxTextAttr::HasBulletName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextAttr::HasBulletName() const. Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasBulletName();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextAttr::HasBulletNumber() const
	static int _bind_HasBulletNumber(lua_State *L) {
		if (!_lg_typecheck_HasBulletNumber(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextAttr::HasBulletNumber() const function, expected prototype:\nbool wxTextAttr::HasBulletNumber() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextAttr::HasBulletNumber() const. Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasBulletNumber();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextAttr::HasBulletStyle() const
	static int _bind_HasBulletStyle(lua_State *L) {
		if (!_lg_typecheck_HasBulletStyle(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextAttr::HasBulletStyle() const function, expected prototype:\nbool wxTextAttr::HasBulletStyle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextAttr::HasBulletStyle() const. Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasBulletStyle();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextAttr::HasBulletText() const
	static int _bind_HasBulletText(lua_State *L) {
		if (!_lg_typecheck_HasBulletText(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextAttr::HasBulletText() const function, expected prototype:\nbool wxTextAttr::HasBulletText() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextAttr::HasBulletText() const. Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasBulletText();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextAttr::HasCharacterStyleName() const
	static int _bind_HasCharacterStyleName(lua_State *L) {
		if (!_lg_typecheck_HasCharacterStyleName(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextAttr::HasCharacterStyleName() const function, expected prototype:\nbool wxTextAttr::HasCharacterStyleName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextAttr::HasCharacterStyleName() const. Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasCharacterStyleName();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextAttr::HasFlag(long flag) const
	static int _bind_HasFlag(lua_State *L) {
		if (!_lg_typecheck_HasFlag(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextAttr::HasFlag(long flag) const function, expected prototype:\nbool wxTextAttr::HasFlag(long flag) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long flag=(long)lua_tonumber(L,2);

		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextAttr::HasFlag(long) const. Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasFlag(flag);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextAttr::HasFont() const
	static int _bind_HasFont(lua_State *L) {
		if (!_lg_typecheck_HasFont(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextAttr::HasFont() const function, expected prototype:\nbool wxTextAttr::HasFont() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextAttr::HasFont() const. Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasFont();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextAttr::HasFontEncoding() const
	static int _bind_HasFontEncoding(lua_State *L) {
		if (!_lg_typecheck_HasFontEncoding(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextAttr::HasFontEncoding() const function, expected prototype:\nbool wxTextAttr::HasFontEncoding() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextAttr::HasFontEncoding() const. Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasFontEncoding();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextAttr::HasFontFaceName() const
	static int _bind_HasFontFaceName(lua_State *L) {
		if (!_lg_typecheck_HasFontFaceName(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextAttr::HasFontFaceName() const function, expected prototype:\nbool wxTextAttr::HasFontFaceName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextAttr::HasFontFaceName() const. Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasFontFaceName();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextAttr::HasFontFamily() const
	static int _bind_HasFontFamily(lua_State *L) {
		if (!_lg_typecheck_HasFontFamily(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextAttr::HasFontFamily() const function, expected prototype:\nbool wxTextAttr::HasFontFamily() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextAttr::HasFontFamily() const. Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasFontFamily();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextAttr::HasFontItalic() const
	static int _bind_HasFontItalic(lua_State *L) {
		if (!_lg_typecheck_HasFontItalic(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextAttr::HasFontItalic() const function, expected prototype:\nbool wxTextAttr::HasFontItalic() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextAttr::HasFontItalic() const. Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasFontItalic();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextAttr::HasFontSize() const
	static int _bind_HasFontSize(lua_State *L) {
		if (!_lg_typecheck_HasFontSize(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextAttr::HasFontSize() const function, expected prototype:\nbool wxTextAttr::HasFontSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextAttr::HasFontSize() const. Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasFontSize();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextAttr::HasFontUnderlined() const
	static int _bind_HasFontUnderlined(lua_State *L) {
		if (!_lg_typecheck_HasFontUnderlined(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextAttr::HasFontUnderlined() const function, expected prototype:\nbool wxTextAttr::HasFontUnderlined() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextAttr::HasFontUnderlined() const. Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasFontUnderlined();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextAttr::HasFontWeight() const
	static int _bind_HasFontWeight(lua_State *L) {
		if (!_lg_typecheck_HasFontWeight(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextAttr::HasFontWeight() const function, expected prototype:\nbool wxTextAttr::HasFontWeight() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextAttr::HasFontWeight() const. Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasFontWeight();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextAttr::HasLeftIndent() const
	static int _bind_HasLeftIndent(lua_State *L) {
		if (!_lg_typecheck_HasLeftIndent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextAttr::HasLeftIndent() const function, expected prototype:\nbool wxTextAttr::HasLeftIndent() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextAttr::HasLeftIndent() const. Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasLeftIndent();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextAttr::HasLineSpacing() const
	static int _bind_HasLineSpacing(lua_State *L) {
		if (!_lg_typecheck_HasLineSpacing(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextAttr::HasLineSpacing() const function, expected prototype:\nbool wxTextAttr::HasLineSpacing() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextAttr::HasLineSpacing() const. Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasLineSpacing();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextAttr::HasListStyleName() const
	static int _bind_HasListStyleName(lua_State *L) {
		if (!_lg_typecheck_HasListStyleName(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextAttr::HasListStyleName() const function, expected prototype:\nbool wxTextAttr::HasListStyleName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextAttr::HasListStyleName() const. Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasListStyleName();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextAttr::HasOutlineLevel() const
	static int _bind_HasOutlineLevel(lua_State *L) {
		if (!_lg_typecheck_HasOutlineLevel(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextAttr::HasOutlineLevel() const function, expected prototype:\nbool wxTextAttr::HasOutlineLevel() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextAttr::HasOutlineLevel() const. Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasOutlineLevel();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextAttr::HasPageBreak() const
	static int _bind_HasPageBreak(lua_State *L) {
		if (!_lg_typecheck_HasPageBreak(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextAttr::HasPageBreak() const function, expected prototype:\nbool wxTextAttr::HasPageBreak() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextAttr::HasPageBreak() const. Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasPageBreak();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextAttr::HasParagraphSpacingAfter() const
	static int _bind_HasParagraphSpacingAfter(lua_State *L) {
		if (!_lg_typecheck_HasParagraphSpacingAfter(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextAttr::HasParagraphSpacingAfter() const function, expected prototype:\nbool wxTextAttr::HasParagraphSpacingAfter() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextAttr::HasParagraphSpacingAfter() const. Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasParagraphSpacingAfter();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextAttr::HasParagraphSpacingBefore() const
	static int _bind_HasParagraphSpacingBefore(lua_State *L) {
		if (!_lg_typecheck_HasParagraphSpacingBefore(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextAttr::HasParagraphSpacingBefore() const function, expected prototype:\nbool wxTextAttr::HasParagraphSpacingBefore() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextAttr::HasParagraphSpacingBefore() const. Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasParagraphSpacingBefore();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextAttr::HasParagraphStyleName() const
	static int _bind_HasParagraphStyleName(lua_State *L) {
		if (!_lg_typecheck_HasParagraphStyleName(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextAttr::HasParagraphStyleName() const function, expected prototype:\nbool wxTextAttr::HasParagraphStyleName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextAttr::HasParagraphStyleName() const. Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasParagraphStyleName();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextAttr::HasRightIndent() const
	static int _bind_HasRightIndent(lua_State *L) {
		if (!_lg_typecheck_HasRightIndent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextAttr::HasRightIndent() const function, expected prototype:\nbool wxTextAttr::HasRightIndent() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextAttr::HasRightIndent() const. Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasRightIndent();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextAttr::HasTabs() const
	static int _bind_HasTabs(lua_State *L) {
		if (!_lg_typecheck_HasTabs(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextAttr::HasTabs() const function, expected prototype:\nbool wxTextAttr::HasTabs() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextAttr::HasTabs() const. Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasTabs();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextAttr::HasTextColour() const
	static int _bind_HasTextColour(lua_State *L) {
		if (!_lg_typecheck_HasTextColour(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextAttr::HasTextColour() const function, expected prototype:\nbool wxTextAttr::HasTextColour() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextAttr::HasTextColour() const. Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasTextColour();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextAttr::HasTextEffects() const
	static int _bind_HasTextEffects(lua_State *L) {
		if (!_lg_typecheck_HasTextEffects(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextAttr::HasTextEffects() const function, expected prototype:\nbool wxTextAttr::HasTextEffects() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextAttr::HasTextEffects() const. Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasTextEffects();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextAttr::HasURL() const
	static int _bind_HasURL(lua_State *L) {
		if (!_lg_typecheck_HasURL(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextAttr::HasURL() const function, expected prototype:\nbool wxTextAttr::HasURL() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextAttr::HasURL() const. Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasURL();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextAttr::IsCharacterStyle() const
	static int _bind_IsCharacterStyle(lua_State *L) {
		if (!_lg_typecheck_IsCharacterStyle(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextAttr::IsCharacterStyle() const function, expected prototype:\nbool wxTextAttr::IsCharacterStyle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextAttr::IsCharacterStyle() const. Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsCharacterStyle();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextAttr::IsDefault() const
	static int _bind_IsDefault(lua_State *L) {
		if (!_lg_typecheck_IsDefault(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextAttr::IsDefault() const function, expected prototype:\nbool wxTextAttr::IsDefault() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextAttr::IsDefault() const. Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsDefault();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextAttr::IsParagraphStyle() const
	static int _bind_IsParagraphStyle(lua_State *L) {
		if (!_lg_typecheck_IsParagraphStyle(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextAttr::IsParagraphStyle() const function, expected prototype:\nbool wxTextAttr::IsParagraphStyle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextAttr::IsParagraphStyle() const. Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsParagraphStyle();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxTextAttr::SetAlignment(wxTextAttrAlignment alignment)
	static int _bind_SetAlignment(lua_State *L) {
		if (!_lg_typecheck_SetAlignment(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextAttr::SetAlignment(wxTextAttrAlignment alignment) function, expected prototype:\nvoid wxTextAttr::SetAlignment(wxTextAttrAlignment alignment)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxTextAttrAlignment alignment=(wxTextAttrAlignment)lua_tointeger(L,2);

		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextAttr::SetAlignment(wxTextAttrAlignment). Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetAlignment(alignment);

		return 0;
	}

	// void wxTextAttr::SetBackgroundColour(const wxColour & colBack)
	static int _bind_SetBackgroundColour(lua_State *L) {
		if (!_lg_typecheck_SetBackgroundColour(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextAttr::SetBackgroundColour(const wxColour & colBack) function, expected prototype:\nvoid wxTextAttr::SetBackgroundColour(const wxColour & colBack)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxColour* colBack_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,2));
		if( !colBack_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colBack in wxTextAttr::SetBackgroundColour function");
		}
		const wxColour & colBack=*colBack_ptr;

		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextAttr::SetBackgroundColour(const wxColour &). Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetBackgroundColour(colBack);

		return 0;
	}

	// void wxTextAttr::SetBulletFont(const wxString & font)
	static int _bind_SetBulletFont(lua_State *L) {
		if (!_lg_typecheck_SetBulletFont(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextAttr::SetBulletFont(const wxString & font) function, expected prototype:\nvoid wxTextAttr::SetBulletFont(const wxString & font)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString font(lua_tostring(L,2),lua_objlen(L,2));

		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextAttr::SetBulletFont(const wxString &). Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetBulletFont(font);

		return 0;
	}

	// void wxTextAttr::SetBulletName(const wxString & name)
	static int _bind_SetBulletName(lua_State *L) {
		if (!_lg_typecheck_SetBulletName(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextAttr::SetBulletName(const wxString & name) function, expected prototype:\nvoid wxTextAttr::SetBulletName(const wxString & name)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextAttr::SetBulletName(const wxString &). Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetBulletName(name);

		return 0;
	}

	// void wxTextAttr::SetBulletNumber(int n)
	static int _bind_SetBulletNumber(lua_State *L) {
		if (!_lg_typecheck_SetBulletNumber(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextAttr::SetBulletNumber(int n) function, expected prototype:\nvoid wxTextAttr::SetBulletNumber(int n)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int n=(int)lua_tointeger(L,2);

		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextAttr::SetBulletNumber(int). Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetBulletNumber(n);

		return 0;
	}

	// void wxTextAttr::SetBulletStyle(int style)
	static int _bind_SetBulletStyle(lua_State *L) {
		if (!_lg_typecheck_SetBulletStyle(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextAttr::SetBulletStyle(int style) function, expected prototype:\nvoid wxTextAttr::SetBulletStyle(int style)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int style=(int)lua_tointeger(L,2);

		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextAttr::SetBulletStyle(int). Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetBulletStyle(style);

		return 0;
	}

	// void wxTextAttr::SetBulletText(const wxString & text)
	static int _bind_SetBulletText(lua_State *L) {
		if (!_lg_typecheck_SetBulletText(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextAttr::SetBulletText(const wxString & text) function, expected prototype:\nvoid wxTextAttr::SetBulletText(const wxString & text)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString text(lua_tostring(L,2),lua_objlen(L,2));

		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextAttr::SetBulletText(const wxString &). Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetBulletText(text);

		return 0;
	}

	// void wxTextAttr::SetCharacterStyleName(const wxString & name)
	static int _bind_SetCharacterStyleName(lua_State *L) {
		if (!_lg_typecheck_SetCharacterStyleName(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextAttr::SetCharacterStyleName(const wxString & name) function, expected prototype:\nvoid wxTextAttr::SetCharacterStyleName(const wxString & name)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextAttr::SetCharacterStyleName(const wxString &). Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetCharacterStyleName(name);

		return 0;
	}

	// void wxTextAttr::SetFlags(long flags)
	static int _bind_SetFlags(lua_State *L) {
		if (!_lg_typecheck_SetFlags(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextAttr::SetFlags(long flags) function, expected prototype:\nvoid wxTextAttr::SetFlags(long flags)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long flags=(long)lua_tonumber(L,2);

		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextAttr::SetFlags(long). Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetFlags(flags);

		return 0;
	}

	// void wxTextAttr::SetFont(const wxFont & font, int flags = ::wxTEXT_ATTR_FONT)
	static int _bind_SetFont(lua_State *L) {
		if (!_lg_typecheck_SetFont(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextAttr::SetFont(const wxFont & font, int flags = ::wxTEXT_ATTR_FONT) function, expected prototype:\nvoid wxTextAttr::SetFont(const wxFont & font, int flags = ::wxTEXT_ATTR_FONT)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxFont* font_ptr=(Luna< wxObject >::checkSubType< wxFont >(L,2));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxTextAttr::SetFont function");
		}
		const wxFont & font=*font_ptr;
		int flags=luatop>2 ? (int)lua_tointeger(L,3) : (int)::wxTEXT_ATTR_FONT;

		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextAttr::SetFont(const wxFont &, int). Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetFont(font, flags);

		return 0;
	}

	// void wxTextAttr::SetFontEncoding(wxFontEncoding encoding)
	static int _bind_SetFontEncoding(lua_State *L) {
		if (!_lg_typecheck_SetFontEncoding(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextAttr::SetFontEncoding(wxFontEncoding encoding) function, expected prototype:\nvoid wxTextAttr::SetFontEncoding(wxFontEncoding encoding)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxFontEncoding encoding=(wxFontEncoding)lua_tointeger(L,2);

		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextAttr::SetFontEncoding(wxFontEncoding). Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetFontEncoding(encoding);

		return 0;
	}

	// void wxTextAttr::SetFontFaceName(const wxString & faceName)
	static int _bind_SetFontFaceName(lua_State *L) {
		if (!_lg_typecheck_SetFontFaceName(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextAttr::SetFontFaceName(const wxString & faceName) function, expected prototype:\nvoid wxTextAttr::SetFontFaceName(const wxString & faceName)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString faceName(lua_tostring(L,2),lua_objlen(L,2));

		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextAttr::SetFontFaceName(const wxString &). Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetFontFaceName(faceName);

		return 0;
	}

	// void wxTextAttr::SetFontFamily(wxFontFamily family)
	static int _bind_SetFontFamily(lua_State *L) {
		if (!_lg_typecheck_SetFontFamily(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextAttr::SetFontFamily(wxFontFamily family) function, expected prototype:\nvoid wxTextAttr::SetFontFamily(wxFontFamily family)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxFontFamily family=(wxFontFamily)lua_tointeger(L,2);

		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextAttr::SetFontFamily(wxFontFamily). Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetFontFamily(family);

		return 0;
	}

	// void wxTextAttr::SetFontSize(int pointSize)
	static int _bind_SetFontSize(lua_State *L) {
		if (!_lg_typecheck_SetFontSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextAttr::SetFontSize(int pointSize) function, expected prototype:\nvoid wxTextAttr::SetFontSize(int pointSize)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int pointSize=(int)lua_tointeger(L,2);

		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextAttr::SetFontSize(int). Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetFontSize(pointSize);

		return 0;
	}

	// void wxTextAttr::SetFontStyle(wxFontStyle fontStyle)
	static int _bind_SetFontStyle(lua_State *L) {
		if (!_lg_typecheck_SetFontStyle(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextAttr::SetFontStyle(wxFontStyle fontStyle) function, expected prototype:\nvoid wxTextAttr::SetFontStyle(wxFontStyle fontStyle)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxFontStyle fontStyle=(wxFontStyle)lua_tointeger(L,2);

		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextAttr::SetFontStyle(wxFontStyle). Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetFontStyle(fontStyle);

		return 0;
	}

	// void wxTextAttr::SetFontUnderlined(bool underlined)
	static int _bind_SetFontUnderlined(lua_State *L) {
		if (!_lg_typecheck_SetFontUnderlined(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextAttr::SetFontUnderlined(bool underlined) function, expected prototype:\nvoid wxTextAttr::SetFontUnderlined(bool underlined)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool underlined=(bool)(lua_toboolean(L,2)==1);

		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextAttr::SetFontUnderlined(bool). Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetFontUnderlined(underlined);

		return 0;
	}

	// void wxTextAttr::SetFontWeight(wxFontWeight fontWeight)
	static int _bind_SetFontWeight(lua_State *L) {
		if (!_lg_typecheck_SetFontWeight(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextAttr::SetFontWeight(wxFontWeight fontWeight) function, expected prototype:\nvoid wxTextAttr::SetFontWeight(wxFontWeight fontWeight)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxFontWeight fontWeight=(wxFontWeight)lua_tointeger(L,2);

		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextAttr::SetFontWeight(wxFontWeight). Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetFontWeight(fontWeight);

		return 0;
	}

	// void wxTextAttr::SetLeftIndent(int indent, int subIndent = 0)
	static int _bind_SetLeftIndent(lua_State *L) {
		if (!_lg_typecheck_SetLeftIndent(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextAttr::SetLeftIndent(int indent, int subIndent = 0) function, expected prototype:\nvoid wxTextAttr::SetLeftIndent(int indent, int subIndent = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int indent=(int)lua_tointeger(L,2);
		int subIndent=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;

		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextAttr::SetLeftIndent(int, int). Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetLeftIndent(indent, subIndent);

		return 0;
	}

	// void wxTextAttr::SetLineSpacing(int spacing)
	static int _bind_SetLineSpacing(lua_State *L) {
		if (!_lg_typecheck_SetLineSpacing(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextAttr::SetLineSpacing(int spacing) function, expected prototype:\nvoid wxTextAttr::SetLineSpacing(int spacing)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int spacing=(int)lua_tointeger(L,2);

		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextAttr::SetLineSpacing(int). Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetLineSpacing(spacing);

		return 0;
	}

	// void wxTextAttr::SetListStyleName(const wxString & name)
	static int _bind_SetListStyleName(lua_State *L) {
		if (!_lg_typecheck_SetListStyleName(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextAttr::SetListStyleName(const wxString & name) function, expected prototype:\nvoid wxTextAttr::SetListStyleName(const wxString & name)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextAttr::SetListStyleName(const wxString &). Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetListStyleName(name);

		return 0;
	}

	// void wxTextAttr::SetOutlineLevel(int level)
	static int _bind_SetOutlineLevel(lua_State *L) {
		if (!_lg_typecheck_SetOutlineLevel(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextAttr::SetOutlineLevel(int level) function, expected prototype:\nvoid wxTextAttr::SetOutlineLevel(int level)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);

		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextAttr::SetOutlineLevel(int). Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetOutlineLevel(level);

		return 0;
	}

	// void wxTextAttr::SetPageBreak(bool pageBreak = true)
	static int _bind_SetPageBreak(lua_State *L) {
		if (!_lg_typecheck_SetPageBreak(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextAttr::SetPageBreak(bool pageBreak = true) function, expected prototype:\nvoid wxTextAttr::SetPageBreak(bool pageBreak = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool pageBreak=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextAttr::SetPageBreak(bool). Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetPageBreak(pageBreak);

		return 0;
	}

	// void wxTextAttr::SetParagraphSpacingAfter(int spacing)
	static int _bind_SetParagraphSpacingAfter(lua_State *L) {
		if (!_lg_typecheck_SetParagraphSpacingAfter(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextAttr::SetParagraphSpacingAfter(int spacing) function, expected prototype:\nvoid wxTextAttr::SetParagraphSpacingAfter(int spacing)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int spacing=(int)lua_tointeger(L,2);

		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextAttr::SetParagraphSpacingAfter(int). Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetParagraphSpacingAfter(spacing);

		return 0;
	}

	// void wxTextAttr::SetParagraphSpacingBefore(int spacing)
	static int _bind_SetParagraphSpacingBefore(lua_State *L) {
		if (!_lg_typecheck_SetParagraphSpacingBefore(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextAttr::SetParagraphSpacingBefore(int spacing) function, expected prototype:\nvoid wxTextAttr::SetParagraphSpacingBefore(int spacing)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int spacing=(int)lua_tointeger(L,2);

		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextAttr::SetParagraphSpacingBefore(int). Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetParagraphSpacingBefore(spacing);

		return 0;
	}

	// void wxTextAttr::SetParagraphStyleName(const wxString & name)
	static int _bind_SetParagraphStyleName(lua_State *L) {
		if (!_lg_typecheck_SetParagraphStyleName(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextAttr::SetParagraphStyleName(const wxString & name) function, expected prototype:\nvoid wxTextAttr::SetParagraphStyleName(const wxString & name)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextAttr::SetParagraphStyleName(const wxString &). Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetParagraphStyleName(name);

		return 0;
	}

	// void wxTextAttr::SetRightIndent(int indent)
	static int _bind_SetRightIndent(lua_State *L) {
		if (!_lg_typecheck_SetRightIndent(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextAttr::SetRightIndent(int indent) function, expected prototype:\nvoid wxTextAttr::SetRightIndent(int indent)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int indent=(int)lua_tointeger(L,2);

		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextAttr::SetRightIndent(int). Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetRightIndent(indent);

		return 0;
	}

	// void wxTextAttr::SetTabs(const wxArrayInt & tabs)
	static int _bind_SetTabs(lua_State *L) {
		if (!_lg_typecheck_SetTabs(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextAttr::SetTabs(const wxArrayInt & tabs) function, expected prototype:\nvoid wxTextAttr::SetTabs(const wxArrayInt & tabs)\nClass arguments details:\narg 1 ID = 47342076\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxArrayInt* tabs_ptr=(Luna< wxArrayInt >::check(L,2));
		if( !tabs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg tabs in wxTextAttr::SetTabs function");
		}
		const wxArrayInt & tabs=*tabs_ptr;

		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextAttr::SetTabs(const wxArrayInt &). Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetTabs(tabs);

		return 0;
	}

	// void wxTextAttr::SetTextColour(const wxColour & colText)
	static int _bind_SetTextColour(lua_State *L) {
		if (!_lg_typecheck_SetTextColour(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextAttr::SetTextColour(const wxColour & colText) function, expected prototype:\nvoid wxTextAttr::SetTextColour(const wxColour & colText)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxColour* colText_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,2));
		if( !colText_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colText in wxTextAttr::SetTextColour function");
		}
		const wxColour & colText=*colText_ptr;

		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextAttr::SetTextColour(const wxColour &). Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetTextColour(colText);

		return 0;
	}

	// void wxTextAttr::SetTextEffectFlags(int flags)
	static int _bind_SetTextEffectFlags(lua_State *L) {
		if (!_lg_typecheck_SetTextEffectFlags(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextAttr::SetTextEffectFlags(int flags) function, expected prototype:\nvoid wxTextAttr::SetTextEffectFlags(int flags)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int flags=(int)lua_tointeger(L,2);

		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextAttr::SetTextEffectFlags(int). Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetTextEffectFlags(flags);

		return 0;
	}

	// void wxTextAttr::SetTextEffects(int effects)
	static int _bind_SetTextEffects(lua_State *L) {
		if (!_lg_typecheck_SetTextEffects(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextAttr::SetTextEffects(int effects) function, expected prototype:\nvoid wxTextAttr::SetTextEffects(int effects)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int effects=(int)lua_tointeger(L,2);

		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextAttr::SetTextEffects(int). Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetTextEffects(effects);

		return 0;
	}

	// void wxTextAttr::SetURL(const wxString & url)
	static int _bind_SetURL(lua_State *L) {
		if (!_lg_typecheck_SetURL(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextAttr::SetURL(const wxString & url) function, expected prototype:\nvoid wxTextAttr::SetURL(const wxString & url)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString url(lua_tostring(L,2),lua_objlen(L,2));

		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextAttr::SetURL(const wxString &). Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetURL(url);

		return 0;
	}


	// Operator binds:
	// void wxTextAttr::operator=(const wxTextAttr & attr)
	static int _bind_op_assign(lua_State *L) {
		if (!_lg_typecheck_op_assign(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextAttr::operator=(const wxTextAttr & attr) function, expected prototype:\nvoid wxTextAttr::operator=(const wxTextAttr & attr)\nClass arguments details:\narg 1 ID = 37117058\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTextAttr* attr_ptr=(Luna< wxTextAttr >::check(L,2));
		if( !attr_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg attr in wxTextAttr::operator= function");
		}
		const wxTextAttr & attr=*attr_ptr;

		wxTextAttr* self=(Luna< wxTextAttr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextAttr::operator=(const wxTextAttr &). Got : '%s'\n%s",typeid(Luna< wxTextAttr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->operator=(attr);

		return 0;
	}


};

wxTextAttr* LunaTraits< wxTextAttr >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxTextAttr::_bind_ctor(L);
}

void LunaTraits< wxTextAttr >::_bind_dtor(wxTextAttr* obj) {
	delete obj;
}

const char LunaTraits< wxTextAttr >::className[] = "wxTextAttr";
const char LunaTraits< wxTextAttr >::fullName[] = "wxTextAttr";
const char LunaTraits< wxTextAttr >::moduleName[] = "wx";
const char* LunaTraits< wxTextAttr >::parents[] = {0};
const int LunaTraits< wxTextAttr >::hash = 37117058;
const int LunaTraits< wxTextAttr >::uniqueIDs[] = {37117058,0};

luna_RegType LunaTraits< wxTextAttr >::methods[] = {
	{"Apply", &luna_wrapper_wxTextAttr::_bind_Apply},
	{"Merge", &luna_wrapper_wxTextAttr::_bind_Merge},
	{"GetAlignment", &luna_wrapper_wxTextAttr::_bind_GetAlignment},
	{"GetBackgroundColour", &luna_wrapper_wxTextAttr::_bind_GetBackgroundColour},
	{"GetBulletFont", &luna_wrapper_wxTextAttr::_bind_GetBulletFont},
	{"GetBulletName", &luna_wrapper_wxTextAttr::_bind_GetBulletName},
	{"GetBulletNumber", &luna_wrapper_wxTextAttr::_bind_GetBulletNumber},
	{"GetBulletStyle", &luna_wrapper_wxTextAttr::_bind_GetBulletStyle},
	{"GetBulletText", &luna_wrapper_wxTextAttr::_bind_GetBulletText},
	{"GetCharacterStyleName", &luna_wrapper_wxTextAttr::_bind_GetCharacterStyleName},
	{"GetFlags", &luna_wrapper_wxTextAttr::_bind_GetFlags},
	{"GetFont", &luna_wrapper_wxTextAttr::_bind_GetFont},
	{"GetFontAttributes", &luna_wrapper_wxTextAttr::_bind_GetFontAttributes},
	{"GetFontEncoding", &luna_wrapper_wxTextAttr::_bind_GetFontEncoding},
	{"GetFontFaceName", &luna_wrapper_wxTextAttr::_bind_GetFontFaceName},
	{"GetFontFamily", &luna_wrapper_wxTextAttr::_bind_GetFontFamily},
	{"GetFontSize", &luna_wrapper_wxTextAttr::_bind_GetFontSize},
	{"GetFontStyle", &luna_wrapper_wxTextAttr::_bind_GetFontStyle},
	{"GetFontUnderlined", &luna_wrapper_wxTextAttr::_bind_GetFontUnderlined},
	{"GetFontWeight", &luna_wrapper_wxTextAttr::_bind_GetFontWeight},
	{"GetLeftIndent", &luna_wrapper_wxTextAttr::_bind_GetLeftIndent},
	{"GetLeftSubIndent", &luna_wrapper_wxTextAttr::_bind_GetLeftSubIndent},
	{"GetLineSpacing", &luna_wrapper_wxTextAttr::_bind_GetLineSpacing},
	{"GetListStyleName", &luna_wrapper_wxTextAttr::_bind_GetListStyleName},
	{"GetOutlineLevel", &luna_wrapper_wxTextAttr::_bind_GetOutlineLevel},
	{"GetParagraphSpacingAfter", &luna_wrapper_wxTextAttr::_bind_GetParagraphSpacingAfter},
	{"GetParagraphSpacingBefore", &luna_wrapper_wxTextAttr::_bind_GetParagraphSpacingBefore},
	{"GetParagraphStyleName", &luna_wrapper_wxTextAttr::_bind_GetParagraphStyleName},
	{"GetRightIndent", &luna_wrapper_wxTextAttr::_bind_GetRightIndent},
	{"GetTabs", &luna_wrapper_wxTextAttr::_bind_GetTabs},
	{"GetTextColour", &luna_wrapper_wxTextAttr::_bind_GetTextColour},
	{"GetTextEffectFlags", &luna_wrapper_wxTextAttr::_bind_GetTextEffectFlags},
	{"GetTextEffects", &luna_wrapper_wxTextAttr::_bind_GetTextEffects},
	{"GetURL", &luna_wrapper_wxTextAttr::_bind_GetURL},
	{"HasAlignment", &luna_wrapper_wxTextAttr::_bind_HasAlignment},
	{"HasBackgroundColour", &luna_wrapper_wxTextAttr::_bind_HasBackgroundColour},
	{"HasBulletName", &luna_wrapper_wxTextAttr::_bind_HasBulletName},
	{"HasBulletNumber", &luna_wrapper_wxTextAttr::_bind_HasBulletNumber},
	{"HasBulletStyle", &luna_wrapper_wxTextAttr::_bind_HasBulletStyle},
	{"HasBulletText", &luna_wrapper_wxTextAttr::_bind_HasBulletText},
	{"HasCharacterStyleName", &luna_wrapper_wxTextAttr::_bind_HasCharacterStyleName},
	{"HasFlag", &luna_wrapper_wxTextAttr::_bind_HasFlag},
	{"HasFont", &luna_wrapper_wxTextAttr::_bind_HasFont},
	{"HasFontEncoding", &luna_wrapper_wxTextAttr::_bind_HasFontEncoding},
	{"HasFontFaceName", &luna_wrapper_wxTextAttr::_bind_HasFontFaceName},
	{"HasFontFamily", &luna_wrapper_wxTextAttr::_bind_HasFontFamily},
	{"HasFontItalic", &luna_wrapper_wxTextAttr::_bind_HasFontItalic},
	{"HasFontSize", &luna_wrapper_wxTextAttr::_bind_HasFontSize},
	{"HasFontUnderlined", &luna_wrapper_wxTextAttr::_bind_HasFontUnderlined},
	{"HasFontWeight", &luna_wrapper_wxTextAttr::_bind_HasFontWeight},
	{"HasLeftIndent", &luna_wrapper_wxTextAttr::_bind_HasLeftIndent},
	{"HasLineSpacing", &luna_wrapper_wxTextAttr::_bind_HasLineSpacing},
	{"HasListStyleName", &luna_wrapper_wxTextAttr::_bind_HasListStyleName},
	{"HasOutlineLevel", &luna_wrapper_wxTextAttr::_bind_HasOutlineLevel},
	{"HasPageBreak", &luna_wrapper_wxTextAttr::_bind_HasPageBreak},
	{"HasParagraphSpacingAfter", &luna_wrapper_wxTextAttr::_bind_HasParagraphSpacingAfter},
	{"HasParagraphSpacingBefore", &luna_wrapper_wxTextAttr::_bind_HasParagraphSpacingBefore},
	{"HasParagraphStyleName", &luna_wrapper_wxTextAttr::_bind_HasParagraphStyleName},
	{"HasRightIndent", &luna_wrapper_wxTextAttr::_bind_HasRightIndent},
	{"HasTabs", &luna_wrapper_wxTextAttr::_bind_HasTabs},
	{"HasTextColour", &luna_wrapper_wxTextAttr::_bind_HasTextColour},
	{"HasTextEffects", &luna_wrapper_wxTextAttr::_bind_HasTextEffects},
	{"HasURL", &luna_wrapper_wxTextAttr::_bind_HasURL},
	{"IsCharacterStyle", &luna_wrapper_wxTextAttr::_bind_IsCharacterStyle},
	{"IsDefault", &luna_wrapper_wxTextAttr::_bind_IsDefault},
	{"IsParagraphStyle", &luna_wrapper_wxTextAttr::_bind_IsParagraphStyle},
	{"SetAlignment", &luna_wrapper_wxTextAttr::_bind_SetAlignment},
	{"SetBackgroundColour", &luna_wrapper_wxTextAttr::_bind_SetBackgroundColour},
	{"SetBulletFont", &luna_wrapper_wxTextAttr::_bind_SetBulletFont},
	{"SetBulletName", &luna_wrapper_wxTextAttr::_bind_SetBulletName},
	{"SetBulletNumber", &luna_wrapper_wxTextAttr::_bind_SetBulletNumber},
	{"SetBulletStyle", &luna_wrapper_wxTextAttr::_bind_SetBulletStyle},
	{"SetBulletText", &luna_wrapper_wxTextAttr::_bind_SetBulletText},
	{"SetCharacterStyleName", &luna_wrapper_wxTextAttr::_bind_SetCharacterStyleName},
	{"SetFlags", &luna_wrapper_wxTextAttr::_bind_SetFlags},
	{"SetFont", &luna_wrapper_wxTextAttr::_bind_SetFont},
	{"SetFontEncoding", &luna_wrapper_wxTextAttr::_bind_SetFontEncoding},
	{"SetFontFaceName", &luna_wrapper_wxTextAttr::_bind_SetFontFaceName},
	{"SetFontFamily", &luna_wrapper_wxTextAttr::_bind_SetFontFamily},
	{"SetFontSize", &luna_wrapper_wxTextAttr::_bind_SetFontSize},
	{"SetFontStyle", &luna_wrapper_wxTextAttr::_bind_SetFontStyle},
	{"SetFontUnderlined", &luna_wrapper_wxTextAttr::_bind_SetFontUnderlined},
	{"SetFontWeight", &luna_wrapper_wxTextAttr::_bind_SetFontWeight},
	{"SetLeftIndent", &luna_wrapper_wxTextAttr::_bind_SetLeftIndent},
	{"SetLineSpacing", &luna_wrapper_wxTextAttr::_bind_SetLineSpacing},
	{"SetListStyleName", &luna_wrapper_wxTextAttr::_bind_SetListStyleName},
	{"SetOutlineLevel", &luna_wrapper_wxTextAttr::_bind_SetOutlineLevel},
	{"SetPageBreak", &luna_wrapper_wxTextAttr::_bind_SetPageBreak},
	{"SetParagraphSpacingAfter", &luna_wrapper_wxTextAttr::_bind_SetParagraphSpacingAfter},
	{"SetParagraphSpacingBefore", &luna_wrapper_wxTextAttr::_bind_SetParagraphSpacingBefore},
	{"SetParagraphStyleName", &luna_wrapper_wxTextAttr::_bind_SetParagraphStyleName},
	{"SetRightIndent", &luna_wrapper_wxTextAttr::_bind_SetRightIndent},
	{"SetTabs", &luna_wrapper_wxTextAttr::_bind_SetTabs},
	{"SetTextColour", &luna_wrapper_wxTextAttr::_bind_SetTextColour},
	{"SetTextEffectFlags", &luna_wrapper_wxTextAttr::_bind_SetTextEffectFlags},
	{"SetTextEffects", &luna_wrapper_wxTextAttr::_bind_SetTextEffects},
	{"SetURL", &luna_wrapper_wxTextAttr::_bind_SetURL},
	{"op_assign", &luna_wrapper_wxTextAttr::_bind_op_assign},
	{"dynCast", &luna_wrapper_wxTextAttr::_bind_dynCast},
	{"__eq", &luna_wrapper_wxTextAttr::_bind___eq},
	{"fromVoid", &luna_wrapper_wxTextAttr::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxTextAttr::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< wxTextAttr >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxTextAttr >::enumValues[] = {
	{0,0}
};



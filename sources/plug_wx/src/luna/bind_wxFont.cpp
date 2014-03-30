#include <plug_common.h>

#include <luna/wrappers/wrapper_wxFont.h>

class luna_wrapper_wxFont {
public:
	typedef Luna< wxFont > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxObject* self=(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<wxObject,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
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

		wxFont* self= (wxFont*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxFont >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		//wxFont* ptr= dynamic_cast< wxFont* >(Luna< wxObject >::check(L,1));
		wxFont* ptr= luna_caster< wxObject, wxFont >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxFont >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxFont >(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>7 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && lua_isboolean(L,5)==0 ) return false;
		if( luatop>5 && lua_type(L,6)!=LUA_TSTRING ) return false;
		if( luatop>6 && (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>7 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,20268751) ) return false;
		if( (!(Luna< wxSize >::check(L,1))) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && lua_isboolean(L,5)==0 ) return false;
		if( luatop>5 && lua_type(L,6)!=LUA_TSTRING ) return false;
		if( luatop>6 && (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,26059272) ) return false;
		if( (!(Luna< wxNativeFontInfo >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_7(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_8(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxFont >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_9(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>8 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && lua_isboolean(L,6)==0 ) return false;
		if( luatop>6 && lua_type(L,7)!=LUA_TSTRING ) return false;
		if( luatop>7 && (lua_type(L,8)!=LUA_TNUMBER || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_10(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>8 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		if( (!(Luna< wxSize >::check(L,2))) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && lua_isboolean(L,6)==0 ) return false;
		if( luatop>6 && lua_type(L,7)!=LUA_TSTRING ) return false;
		if( luatop>7 && (lua_type(L,8)!=LUA_TNUMBER || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_11(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_12(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,26059272) ) return false;
		if( (!(Luna< wxNativeFontInfo >::check(L,2))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetEncoding(lua_State *L) {
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

	inline static bool _lg_typecheck_GetNativeFontInfoDesc(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetNativeFontInfoUserDesc(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetNativeFontInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_GetUnderlined(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetWeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsFixedWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsOk(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Bold(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Italic(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Larger(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Smaller(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Underlined(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_MakeBold(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_MakeItalic(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_MakeLarger(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_MakeSmaller(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_MakeUnderlined(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Scale(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Scaled(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetEncoding(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFaceName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFamily(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetNativeFontInfo_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetNativeFontInfo_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,26059272) ) return false;
		if( (!(Luna< wxNativeFontInfo >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetNativeFontInfoUserDesc(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
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

	inline static bool _lg_typecheck_SetSymbolicSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSymbolicSizeRelativeTo(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetUnderlined(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetWeight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetDefaultEncoding(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetDefaultEncoding(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_New_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>7 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && lua_isboolean(L,5)==0 ) return false;
		if( luatop>5 && lua_type(L,6)!=LUA_TSTRING ) return false;
		if( luatop>6 && (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_New_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>5 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TSTRING ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_New_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>7 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,20268751) ) return false;
		if( (!(Luna< wxSize >::check(L,1))) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && lua_isboolean(L,5)==0 ) return false;
		if( luatop>5 && lua_type(L,6)!=LUA_TSTRING ) return false;
		if( luatop>6 && (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_New_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,20268751) ) return false;
		if( (!(Luna< wxSize >::check(L,1))) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TSTRING ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_New_overload_5(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,26059272) ) return false;
		if( (!(Luna< wxNativeFontInfo >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_New_overload_6(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetEncoding(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetFaceName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetFamily(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetPointSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetPixelSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetStyle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetUnderlined(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetWeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_IsFixedWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_IsOk(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetEncoding(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetFaceName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetFamily(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetPointSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetPixelSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetStyle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetUnderlined(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetWeight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 3 valid operators)
	inline static bool _lg_typecheck_op_neq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_assign(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}


	// Constructor binds:
	// wxFont::wxFont()
	static wxFont* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxFont::wxFont() function, expected prototype:\nwxFont::wxFont()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxFont();
	}

	// wxFont::wxFont(const wxFont & font)
	static wxFont* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxFont::wxFont(const wxFont & font) function, expected prototype:\nwxFont::wxFont(const wxFont & font)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxFont* font_ptr=(Luna< wxObject >::checkSubType< wxFont >(L,1));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxFont::wxFont function");
		}
		const wxFont & font=*font_ptr;

		return new wxFont(font);
	}

	// wxFont::wxFont(int pointSize, wxFontFamily family, wxFontStyle style, wxFontWeight weight, bool underline = false, const wxString & faceName = wxEmptyString, wxFontEncoding encoding = ::wxFONTENCODING_DEFAULT)
	static wxFont* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in wxFont::wxFont(int pointSize, wxFontFamily family, wxFontStyle style, wxFontWeight weight, bool underline = false, const wxString & faceName = wxEmptyString, wxFontEncoding encoding = ::wxFONTENCODING_DEFAULT) function, expected prototype:\nwxFont::wxFont(int pointSize, wxFontFamily family, wxFontStyle style, wxFontWeight weight, bool underline = false, const wxString & faceName = wxEmptyString, wxFontEncoding encoding = ::wxFONTENCODING_DEFAULT)\nClass arguments details:\narg 6 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int pointSize=(int)lua_tointeger(L,1);
		wxFontFamily family=(wxFontFamily)lua_tointeger(L,2);
		wxFontStyle style=(wxFontStyle)lua_tointeger(L,3);
		wxFontWeight weight=(wxFontWeight)lua_tointeger(L,4);
		bool underline=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : (bool)false;
		wxString faceName(lua_tostring(L,6),lua_objlen(L,6));
		wxFontEncoding encoding=luatop>6 ? (wxFontEncoding)lua_tointeger(L,7) : (wxFontEncoding)::wxFONTENCODING_DEFAULT;

		return new wxFont(pointSize, family, style, weight, underline, faceName, encoding);
	}

	// wxFont::wxFont(const wxSize & pixelSize, wxFontFamily family, wxFontStyle style, wxFontWeight weight, bool underline = false, const wxString & faceName = wxEmptyString, wxFontEncoding encoding = ::wxFONTENCODING_DEFAULT)
	static wxFont* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in wxFont::wxFont(const wxSize & pixelSize, wxFontFamily family, wxFontStyle style, wxFontWeight weight, bool underline = false, const wxString & faceName = wxEmptyString, wxFontEncoding encoding = ::wxFONTENCODING_DEFAULT) function, expected prototype:\nwxFont::wxFont(const wxSize & pixelSize, wxFontFamily family, wxFontStyle style, wxFontWeight weight, bool underline = false, const wxString & faceName = wxEmptyString, wxFontEncoding encoding = ::wxFONTENCODING_DEFAULT)\nClass arguments details:\narg 1 ID = 20268751\narg 6 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxSize* pixelSize_ptr=(Luna< wxSize >::check(L,1));
		if( !pixelSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pixelSize in wxFont::wxFont function");
		}
		const wxSize & pixelSize=*pixelSize_ptr;
		wxFontFamily family=(wxFontFamily)lua_tointeger(L,2);
		wxFontStyle style=(wxFontStyle)lua_tointeger(L,3);
		wxFontWeight weight=(wxFontWeight)lua_tointeger(L,4);
		bool underline=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : (bool)false;
		wxString faceName(lua_tostring(L,6),lua_objlen(L,6));
		wxFontEncoding encoding=luatop>6 ? (wxFontEncoding)lua_tointeger(L,7) : (wxFontEncoding)::wxFONTENCODING_DEFAULT;

		return new wxFont(pixelSize, family, style, weight, underline, faceName, encoding);
	}

	// wxFont::wxFont(const wxString & nativeInfoString)
	static wxFont* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in wxFont::wxFont(const wxString & nativeInfoString) function, expected prototype:\nwxFont::wxFont(const wxString & nativeInfoString)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString nativeInfoString(lua_tostring(L,1),lua_objlen(L,1));

		return new wxFont(nativeInfoString);
	}

	// wxFont::wxFont(const wxNativeFontInfo & nativeInfo)
	static wxFont* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in wxFont::wxFont(const wxNativeFontInfo & nativeInfo) function, expected prototype:\nwxFont::wxFont(const wxNativeFontInfo & nativeInfo)\nClass arguments details:\narg 1 ID = 26059272\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxNativeFontInfo* nativeInfo_ptr=(Luna< wxNativeFontInfo >::check(L,1));
		if( !nativeInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nativeInfo in wxFont::wxFont function");
		}
		const wxNativeFontInfo & nativeInfo=*nativeInfo_ptr;

		return new wxFont(nativeInfo);
	}

	// wxFont::wxFont(lua_Table * data)
	static wxFont* _bind_ctor_overload_7(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_7(L)) {
			luaL_error(L, "luna typecheck failed in wxFont::wxFont(lua_Table * data) function, expected prototype:\nwxFont::wxFont(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxFont(L,NULL);
	}

	// wxFont::wxFont(lua_Table * data, const wxFont & font)
	static wxFont* _bind_ctor_overload_8(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_8(L)) {
			luaL_error(L, "luna typecheck failed in wxFont::wxFont(lua_Table * data, const wxFont & font) function, expected prototype:\nwxFont::wxFont(lua_Table * data, const wxFont & font)\nClass arguments details:\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxFont* font_ptr=(Luna< wxObject >::checkSubType< wxFont >(L,2));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxFont::wxFont function");
		}
		const wxFont & font=*font_ptr;

		return new wrapper_wxFont(L,NULL, font);
	}

	// wxFont::wxFont(lua_Table * data, int pointSize, wxFontFamily family, wxFontStyle style, wxFontWeight weight, bool underline = false, const wxString & faceName = wxEmptyString, wxFontEncoding encoding = ::wxFONTENCODING_DEFAULT)
	static wxFont* _bind_ctor_overload_9(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_9(L)) {
			luaL_error(L, "luna typecheck failed in wxFont::wxFont(lua_Table * data, int pointSize, wxFontFamily family, wxFontStyle style, wxFontWeight weight, bool underline = false, const wxString & faceName = wxEmptyString, wxFontEncoding encoding = ::wxFONTENCODING_DEFAULT) function, expected prototype:\nwxFont::wxFont(lua_Table * data, int pointSize, wxFontFamily family, wxFontStyle style, wxFontWeight weight, bool underline = false, const wxString & faceName = wxEmptyString, wxFontEncoding encoding = ::wxFONTENCODING_DEFAULT)\nClass arguments details:\narg 7 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int pointSize=(int)lua_tointeger(L,2);
		wxFontFamily family=(wxFontFamily)lua_tointeger(L,3);
		wxFontStyle style=(wxFontStyle)lua_tointeger(L,4);
		wxFontWeight weight=(wxFontWeight)lua_tointeger(L,5);
		bool underline=luatop>5 ? (bool)(lua_toboolean(L,6)==1) : (bool)false;
		wxString faceName(lua_tostring(L,7),lua_objlen(L,7));
		wxFontEncoding encoding=luatop>7 ? (wxFontEncoding)lua_tointeger(L,8) : (wxFontEncoding)::wxFONTENCODING_DEFAULT;

		return new wrapper_wxFont(L,NULL, pointSize, family, style, weight, underline, faceName, encoding);
	}

	// wxFont::wxFont(lua_Table * data, const wxSize & pixelSize, wxFontFamily family, wxFontStyle style, wxFontWeight weight, bool underline = false, const wxString & faceName = wxEmptyString, wxFontEncoding encoding = ::wxFONTENCODING_DEFAULT)
	static wxFont* _bind_ctor_overload_10(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_10(L)) {
			luaL_error(L, "luna typecheck failed in wxFont::wxFont(lua_Table * data, const wxSize & pixelSize, wxFontFamily family, wxFontStyle style, wxFontWeight weight, bool underline = false, const wxString & faceName = wxEmptyString, wxFontEncoding encoding = ::wxFONTENCODING_DEFAULT) function, expected prototype:\nwxFont::wxFont(lua_Table * data, const wxSize & pixelSize, wxFontFamily family, wxFontStyle style, wxFontWeight weight, bool underline = false, const wxString & faceName = wxEmptyString, wxFontEncoding encoding = ::wxFONTENCODING_DEFAULT)\nClass arguments details:\narg 2 ID = 20268751\narg 7 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxSize* pixelSize_ptr=(Luna< wxSize >::check(L,2));
		if( !pixelSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pixelSize in wxFont::wxFont function");
		}
		const wxSize & pixelSize=*pixelSize_ptr;
		wxFontFamily family=(wxFontFamily)lua_tointeger(L,3);
		wxFontStyle style=(wxFontStyle)lua_tointeger(L,4);
		wxFontWeight weight=(wxFontWeight)lua_tointeger(L,5);
		bool underline=luatop>5 ? (bool)(lua_toboolean(L,6)==1) : (bool)false;
		wxString faceName(lua_tostring(L,7),lua_objlen(L,7));
		wxFontEncoding encoding=luatop>7 ? (wxFontEncoding)lua_tointeger(L,8) : (wxFontEncoding)::wxFONTENCODING_DEFAULT;

		return new wrapper_wxFont(L,NULL, pixelSize, family, style, weight, underline, faceName, encoding);
	}

	// wxFont::wxFont(lua_Table * data, const wxString & nativeInfoString)
	static wxFont* _bind_ctor_overload_11(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_11(L)) {
			luaL_error(L, "luna typecheck failed in wxFont::wxFont(lua_Table * data, const wxString & nativeInfoString) function, expected prototype:\nwxFont::wxFont(lua_Table * data, const wxString & nativeInfoString)\nClass arguments details:\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString nativeInfoString(lua_tostring(L,2),lua_objlen(L,2));

		return new wrapper_wxFont(L,NULL, nativeInfoString);
	}

	// wxFont::wxFont(lua_Table * data, const wxNativeFontInfo & nativeInfo)
	static wxFont* _bind_ctor_overload_12(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_12(L)) {
			luaL_error(L, "luna typecheck failed in wxFont::wxFont(lua_Table * data, const wxNativeFontInfo & nativeInfo) function, expected prototype:\nwxFont::wxFont(lua_Table * data, const wxNativeFontInfo & nativeInfo)\nClass arguments details:\narg 2 ID = 26059272\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxNativeFontInfo* nativeInfo_ptr=(Luna< wxNativeFontInfo >::check(L,2));
		if( !nativeInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nativeInfo in wxFont::wxFont function");
		}
		const wxNativeFontInfo & nativeInfo=*nativeInfo_ptr;

		return new wrapper_wxFont(L,NULL, nativeInfo);
	}

	// Overload binder for wxFont::wxFont
	static wxFont* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);
		if (_lg_typecheck_ctor_overload_7(L)) return _bind_ctor_overload_7(L);
		if (_lg_typecheck_ctor_overload_8(L)) return _bind_ctor_overload_8(L);
		if (_lg_typecheck_ctor_overload_9(L)) return _bind_ctor_overload_9(L);
		if (_lg_typecheck_ctor_overload_10(L)) return _bind_ctor_overload_10(L);
		if (_lg_typecheck_ctor_overload_11(L)) return _bind_ctor_overload_11(L);
		if (_lg_typecheck_ctor_overload_12(L)) return _bind_ctor_overload_12(L);

		luaL_error(L, "error in function wxFont, cannot match any of the overloads for function wxFont:\n  wxFont()\n  wxFont(const wxFont &)\n  wxFont(int, wxFontFamily, wxFontStyle, wxFontWeight, bool, const wxString &, wxFontEncoding)\n  wxFont(const wxSize &, wxFontFamily, wxFontStyle, wxFontWeight, bool, const wxString &, wxFontEncoding)\n  wxFont(const wxString &)\n  wxFont(const wxNativeFontInfo &)\n  wxFont(lua_Table *)\n  wxFont(lua_Table *, const wxFont &)\n  wxFont(lua_Table *, int, wxFontFamily, wxFontStyle, wxFontWeight, bool, const wxString &, wxFontEncoding)\n  wxFont(lua_Table *, const wxSize &, wxFontFamily, wxFontStyle, wxFontWeight, bool, const wxString &, wxFontEncoding)\n  wxFont(lua_Table *, const wxString &)\n  wxFont(lua_Table *, const wxNativeFontInfo &)\n");
		return NULL;
	}


	// Function binds:
	// wxFontEncoding wxFont::GetEncoding() const
	static int _bind_GetEncoding(lua_State *L) {
		if (!_lg_typecheck_GetEncoding(L)) {
			luaL_error(L, "luna typecheck failed in wxFontEncoding wxFont::GetEncoding() const function, expected prototype:\nwxFontEncoding wxFont::GetEncoding() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFont* self=Luna< wxObject >::checkSubType< wxFont >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxFontEncoding wxFont::GetEncoding() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxFontEncoding lret = self->GetEncoding();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxFont::GetFaceName() const
	static int _bind_GetFaceName(lua_State *L) {
		if (!_lg_typecheck_GetFaceName(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxFont::GetFaceName() const function, expected prototype:\nwxString wxFont::GetFaceName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFont* self=Luna< wxObject >::checkSubType< wxFont >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxFont::GetFaceName() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetFaceName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxFontFamily wxFont::GetFamily() const
	static int _bind_GetFamily(lua_State *L) {
		if (!_lg_typecheck_GetFamily(L)) {
			luaL_error(L, "luna typecheck failed in wxFontFamily wxFont::GetFamily() const function, expected prototype:\nwxFontFamily wxFont::GetFamily() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFont* self=Luna< wxObject >::checkSubType< wxFont >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxFontFamily wxFont::GetFamily() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxFontFamily lret = self->GetFamily();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxFont::GetNativeFontInfoDesc() const
	static int _bind_GetNativeFontInfoDesc(lua_State *L) {
		if (!_lg_typecheck_GetNativeFontInfoDesc(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxFont::GetNativeFontInfoDesc() const function, expected prototype:\nwxString wxFont::GetNativeFontInfoDesc() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFont* self=Luna< wxObject >::checkSubType< wxFont >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxFont::GetNativeFontInfoDesc() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetNativeFontInfoDesc();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxFont::GetNativeFontInfoUserDesc() const
	static int _bind_GetNativeFontInfoUserDesc(lua_State *L) {
		if (!_lg_typecheck_GetNativeFontInfoUserDesc(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxFont::GetNativeFontInfoUserDesc() const function, expected prototype:\nwxString wxFont::GetNativeFontInfoUserDesc() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFont* self=Luna< wxObject >::checkSubType< wxFont >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxFont::GetNativeFontInfoUserDesc() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetNativeFontInfoUserDesc();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// const wxNativeFontInfo * wxFont::GetNativeFontInfo() const
	static int _bind_GetNativeFontInfo(lua_State *L) {
		if (!_lg_typecheck_GetNativeFontInfo(L)) {
			luaL_error(L, "luna typecheck failed in const wxNativeFontInfo * wxFont::GetNativeFontInfo() const function, expected prototype:\nconst wxNativeFontInfo * wxFont::GetNativeFontInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFont* self=Luna< wxObject >::checkSubType< wxFont >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxNativeFontInfo * wxFont::GetNativeFontInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxNativeFontInfo * lret = self->GetNativeFontInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxNativeFontInfo >::push(L,lret,false);

		return 1;
	}

	// int wxFont::GetPointSize() const
	static int _bind_GetPointSize(lua_State *L) {
		if (!_lg_typecheck_GetPointSize(L)) {
			luaL_error(L, "luna typecheck failed in int wxFont::GetPointSize() const function, expected prototype:\nint wxFont::GetPointSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFont* self=Luna< wxObject >::checkSubType< wxFont >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxFont::GetPointSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetPointSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxSize wxFont::GetPixelSize() const
	static int _bind_GetPixelSize(lua_State *L) {
		if (!_lg_typecheck_GetPixelSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxFont::GetPixelSize() const function, expected prototype:\nwxSize wxFont::GetPixelSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFont* self=Luna< wxObject >::checkSubType< wxFont >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxFont::GetPixelSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->GetPixelSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxFontStyle wxFont::GetStyle() const
	static int _bind_GetStyle(lua_State *L) {
		if (!_lg_typecheck_GetStyle(L)) {
			luaL_error(L, "luna typecheck failed in wxFontStyle wxFont::GetStyle() const function, expected prototype:\nwxFontStyle wxFont::GetStyle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFont* self=Luna< wxObject >::checkSubType< wxFont >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxFontStyle wxFont::GetStyle() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxFontStyle lret = self->GetStyle();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxFont::GetUnderlined() const
	static int _bind_GetUnderlined(lua_State *L) {
		if (!_lg_typecheck_GetUnderlined(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFont::GetUnderlined() const function, expected prototype:\nbool wxFont::GetUnderlined() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFont* self=Luna< wxObject >::checkSubType< wxFont >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFont::GetUnderlined() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GetUnderlined();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxFontWeight wxFont::GetWeight() const
	static int _bind_GetWeight(lua_State *L) {
		if (!_lg_typecheck_GetWeight(L)) {
			luaL_error(L, "luna typecheck failed in wxFontWeight wxFont::GetWeight() const function, expected prototype:\nwxFontWeight wxFont::GetWeight() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFont* self=Luna< wxObject >::checkSubType< wxFont >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxFontWeight wxFont::GetWeight() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxFontWeight lret = self->GetWeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxFont::IsFixedWidth() const
	static int _bind_IsFixedWidth(lua_State *L) {
		if (!_lg_typecheck_IsFixedWidth(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFont::IsFixedWidth() const function, expected prototype:\nbool wxFont::IsFixedWidth() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFont* self=Luna< wxObject >::checkSubType< wxFont >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFont::IsFixedWidth() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsFixedWidth();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFont::IsOk() const
	static int _bind_IsOk(lua_State *L) {
		if (!_lg_typecheck_IsOk(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFont::IsOk() const function, expected prototype:\nbool wxFont::IsOk() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFont* self=Luna< wxObject >::checkSubType< wxFont >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFont::IsOk() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsOk();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxFont wxFont::Bold() const
	static int _bind_Bold(lua_State *L) {
		if (!_lg_typecheck_Bold(L)) {
			luaL_error(L, "luna typecheck failed in wxFont wxFont::Bold() const function, expected prototype:\nwxFont wxFont::Bold() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFont* self=Luna< wxObject >::checkSubType< wxFont >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxFont wxFont::Bold() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxFont stack_lret = self->Bold();
		wxFont* lret = new wxFont(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFont >::push(L,lret,true);

		return 1;
	}

	// wxFont wxFont::Italic() const
	static int _bind_Italic(lua_State *L) {
		if (!_lg_typecheck_Italic(L)) {
			luaL_error(L, "luna typecheck failed in wxFont wxFont::Italic() const function, expected prototype:\nwxFont wxFont::Italic() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFont* self=Luna< wxObject >::checkSubType< wxFont >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxFont wxFont::Italic() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxFont stack_lret = self->Italic();
		wxFont* lret = new wxFont(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFont >::push(L,lret,true);

		return 1;
	}

	// wxFont wxFont::Larger() const
	static int _bind_Larger(lua_State *L) {
		if (!_lg_typecheck_Larger(L)) {
			luaL_error(L, "luna typecheck failed in wxFont wxFont::Larger() const function, expected prototype:\nwxFont wxFont::Larger() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFont* self=Luna< wxObject >::checkSubType< wxFont >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxFont wxFont::Larger() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxFont stack_lret = self->Larger();
		wxFont* lret = new wxFont(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFont >::push(L,lret,true);

		return 1;
	}

	// wxFont wxFont::Smaller() const
	static int _bind_Smaller(lua_State *L) {
		if (!_lg_typecheck_Smaller(L)) {
			luaL_error(L, "luna typecheck failed in wxFont wxFont::Smaller() const function, expected prototype:\nwxFont wxFont::Smaller() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFont* self=Luna< wxObject >::checkSubType< wxFont >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxFont wxFont::Smaller() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxFont stack_lret = self->Smaller();
		wxFont* lret = new wxFont(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFont >::push(L,lret,true);

		return 1;
	}

	// wxFont wxFont::Underlined() const
	static int _bind_Underlined(lua_State *L) {
		if (!_lg_typecheck_Underlined(L)) {
			luaL_error(L, "luna typecheck failed in wxFont wxFont::Underlined() const function, expected prototype:\nwxFont wxFont::Underlined() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFont* self=Luna< wxObject >::checkSubType< wxFont >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxFont wxFont::Underlined() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxFont stack_lret = self->Underlined();
		wxFont* lret = new wxFont(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFont >::push(L,lret,true);

		return 1;
	}

	// wxFont & wxFont::MakeBold()
	static int _bind_MakeBold(lua_State *L) {
		if (!_lg_typecheck_MakeBold(L)) {
			luaL_error(L, "luna typecheck failed in wxFont & wxFont::MakeBold() function, expected prototype:\nwxFont & wxFont::MakeBold()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFont* self=Luna< wxObject >::checkSubType< wxFont >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxFont & wxFont::MakeBold(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxFont* lret = &self->MakeBold();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFont >::push(L,lret,false);

		return 1;
	}

	// wxFont & wxFont::MakeItalic()
	static int _bind_MakeItalic(lua_State *L) {
		if (!_lg_typecheck_MakeItalic(L)) {
			luaL_error(L, "luna typecheck failed in wxFont & wxFont::MakeItalic() function, expected prototype:\nwxFont & wxFont::MakeItalic()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFont* self=Luna< wxObject >::checkSubType< wxFont >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxFont & wxFont::MakeItalic(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxFont* lret = &self->MakeItalic();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFont >::push(L,lret,false);

		return 1;
	}

	// wxFont & wxFont::MakeLarger()
	static int _bind_MakeLarger(lua_State *L) {
		if (!_lg_typecheck_MakeLarger(L)) {
			luaL_error(L, "luna typecheck failed in wxFont & wxFont::MakeLarger() function, expected prototype:\nwxFont & wxFont::MakeLarger()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFont* self=Luna< wxObject >::checkSubType< wxFont >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxFont & wxFont::MakeLarger(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxFont* lret = &self->MakeLarger();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFont >::push(L,lret,false);

		return 1;
	}

	// wxFont & wxFont::MakeSmaller()
	static int _bind_MakeSmaller(lua_State *L) {
		if (!_lg_typecheck_MakeSmaller(L)) {
			luaL_error(L, "luna typecheck failed in wxFont & wxFont::MakeSmaller() function, expected prototype:\nwxFont & wxFont::MakeSmaller()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFont* self=Luna< wxObject >::checkSubType< wxFont >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxFont & wxFont::MakeSmaller(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxFont* lret = &self->MakeSmaller();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFont >::push(L,lret,false);

		return 1;
	}

	// wxFont & wxFont::MakeUnderlined()
	static int _bind_MakeUnderlined(lua_State *L) {
		if (!_lg_typecheck_MakeUnderlined(L)) {
			luaL_error(L, "luna typecheck failed in wxFont & wxFont::MakeUnderlined() function, expected prototype:\nwxFont & wxFont::MakeUnderlined()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFont* self=Luna< wxObject >::checkSubType< wxFont >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxFont & wxFont::MakeUnderlined(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxFont* lret = &self->MakeUnderlined();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFont >::push(L,lret,false);

		return 1;
	}

	// wxFont & wxFont::Scale(float x)
	static int _bind_Scale(lua_State *L) {
		if (!_lg_typecheck_Scale(L)) {
			luaL_error(L, "luna typecheck failed in wxFont & wxFont::Scale(float x) function, expected prototype:\nwxFont & wxFont::Scale(float x)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float x=(float)lua_tonumber(L,2);

		wxFont* self=Luna< wxObject >::checkSubType< wxFont >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxFont & wxFont::Scale(float). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxFont* lret = &self->Scale(x);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFont >::push(L,lret,false);

		return 1;
	}

	// wxFont wxFont::Scaled(float x) const
	static int _bind_Scaled(lua_State *L) {
		if (!_lg_typecheck_Scaled(L)) {
			luaL_error(L, "luna typecheck failed in wxFont wxFont::Scaled(float x) const function, expected prototype:\nwxFont wxFont::Scaled(float x) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float x=(float)lua_tonumber(L,2);

		wxFont* self=Luna< wxObject >::checkSubType< wxFont >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxFont wxFont::Scaled(float) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxFont stack_lret = self->Scaled(x);
		wxFont* lret = new wxFont(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFont >::push(L,lret,true);

		return 1;
	}

	// void wxFont::SetEncoding(wxFontEncoding encoding)
	static int _bind_SetEncoding(lua_State *L) {
		if (!_lg_typecheck_SetEncoding(L)) {
			luaL_error(L, "luna typecheck failed in void wxFont::SetEncoding(wxFontEncoding encoding) function, expected prototype:\nvoid wxFont::SetEncoding(wxFontEncoding encoding)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxFontEncoding encoding=(wxFontEncoding)lua_tointeger(L,2);

		wxFont* self=Luna< wxObject >::checkSubType< wxFont >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFont::SetEncoding(wxFontEncoding). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetEncoding(encoding);

		return 0;
	}

	// bool wxFont::SetFaceName(const wxString & faceName)
	static int _bind_SetFaceName(lua_State *L) {
		if (!_lg_typecheck_SetFaceName(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFont::SetFaceName(const wxString & faceName) function, expected prototype:\nbool wxFont::SetFaceName(const wxString & faceName)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString faceName(lua_tostring(L,2),lua_objlen(L,2));

		wxFont* self=Luna< wxObject >::checkSubType< wxFont >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFont::SetFaceName(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetFaceName(faceName);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxFont::SetFamily(wxFontFamily family)
	static int _bind_SetFamily(lua_State *L) {
		if (!_lg_typecheck_SetFamily(L)) {
			luaL_error(L, "luna typecheck failed in void wxFont::SetFamily(wxFontFamily family) function, expected prototype:\nvoid wxFont::SetFamily(wxFontFamily family)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxFontFamily family=(wxFontFamily)lua_tointeger(L,2);

		wxFont* self=Luna< wxObject >::checkSubType< wxFont >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFont::SetFamily(wxFontFamily). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetFamily(family);

		return 0;
	}

	// bool wxFont::SetNativeFontInfo(const wxString & info)
	static int _bind_SetNativeFontInfo_overload_1(lua_State *L) {
		if (!_lg_typecheck_SetNativeFontInfo_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFont::SetNativeFontInfo(const wxString & info) function, expected prototype:\nbool wxFont::SetNativeFontInfo(const wxString & info)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString info(lua_tostring(L,2),lua_objlen(L,2));

		wxFont* self=Luna< wxObject >::checkSubType< wxFont >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFont::SetNativeFontInfo(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetNativeFontInfo(info);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxFont::SetNativeFontInfo(const wxNativeFontInfo & info)
	static int _bind_SetNativeFontInfo_overload_2(lua_State *L) {
		if (!_lg_typecheck_SetNativeFontInfo_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxFont::SetNativeFontInfo(const wxNativeFontInfo & info) function, expected prototype:\nvoid wxFont::SetNativeFontInfo(const wxNativeFontInfo & info)\nClass arguments details:\narg 1 ID = 26059272\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxNativeFontInfo* info_ptr=(Luna< wxNativeFontInfo >::check(L,2));
		if( !info_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg info in wxFont::SetNativeFontInfo function");
		}
		const wxNativeFontInfo & info=*info_ptr;

		wxFont* self=Luna< wxObject >::checkSubType< wxFont >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFont::SetNativeFontInfo(const wxNativeFontInfo &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetNativeFontInfo(info);

		return 0;
	}

	// Overload binder for wxFont::SetNativeFontInfo
	static int _bind_SetNativeFontInfo(lua_State *L) {
		if (_lg_typecheck_SetNativeFontInfo_overload_1(L)) return _bind_SetNativeFontInfo_overload_1(L);
		if (_lg_typecheck_SetNativeFontInfo_overload_2(L)) return _bind_SetNativeFontInfo_overload_2(L);

		luaL_error(L, "error in function SetNativeFontInfo, cannot match any of the overloads for function SetNativeFontInfo:\n  SetNativeFontInfo(const wxString &)\n  SetNativeFontInfo(const wxNativeFontInfo &)\n");
		return 0;
	}

	// bool wxFont::SetNativeFontInfoUserDesc(const wxString & info)
	static int _bind_SetNativeFontInfoUserDesc(lua_State *L) {
		if (!_lg_typecheck_SetNativeFontInfoUserDesc(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFont::SetNativeFontInfoUserDesc(const wxString & info) function, expected prototype:\nbool wxFont::SetNativeFontInfoUserDesc(const wxString & info)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString info(lua_tostring(L,2),lua_objlen(L,2));

		wxFont* self=Luna< wxObject >::checkSubType< wxFont >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFont::SetNativeFontInfoUserDesc(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetNativeFontInfoUserDesc(info);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxFont::SetPointSize(int pointSize)
	static int _bind_SetPointSize(lua_State *L) {
		if (!_lg_typecheck_SetPointSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxFont::SetPointSize(int pointSize) function, expected prototype:\nvoid wxFont::SetPointSize(int pointSize)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int pointSize=(int)lua_tointeger(L,2);

		wxFont* self=Luna< wxObject >::checkSubType< wxFont >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFont::SetPointSize(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetPointSize(pointSize);

		return 0;
	}

	// void wxFont::SetPixelSize(const wxSize & pixelSize)
	static int _bind_SetPixelSize(lua_State *L) {
		if (!_lg_typecheck_SetPixelSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxFont::SetPixelSize(const wxSize & pixelSize) function, expected prototype:\nvoid wxFont::SetPixelSize(const wxSize & pixelSize)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* pixelSize_ptr=(Luna< wxSize >::check(L,2));
		if( !pixelSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pixelSize in wxFont::SetPixelSize function");
		}
		const wxSize & pixelSize=*pixelSize_ptr;

		wxFont* self=Luna< wxObject >::checkSubType< wxFont >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFont::SetPixelSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetPixelSize(pixelSize);

		return 0;
	}

	// void wxFont::SetStyle(wxFontStyle style)
	static int _bind_SetStyle(lua_State *L) {
		if (!_lg_typecheck_SetStyle(L)) {
			luaL_error(L, "luna typecheck failed in void wxFont::SetStyle(wxFontStyle style) function, expected prototype:\nvoid wxFont::SetStyle(wxFontStyle style)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxFontStyle style=(wxFontStyle)lua_tointeger(L,2);

		wxFont* self=Luna< wxObject >::checkSubType< wxFont >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFont::SetStyle(wxFontStyle). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetStyle(style);

		return 0;
	}

	// void wxFont::SetSymbolicSize(wxFontSymbolicSize size)
	static int _bind_SetSymbolicSize(lua_State *L) {
		if (!_lg_typecheck_SetSymbolicSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxFont::SetSymbolicSize(wxFontSymbolicSize size) function, expected prototype:\nvoid wxFont::SetSymbolicSize(wxFontSymbolicSize size)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxFontSymbolicSize size=(wxFontSymbolicSize)lua_tointeger(L,2);

		wxFont* self=Luna< wxObject >::checkSubType< wxFont >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFont::SetSymbolicSize(wxFontSymbolicSize). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetSymbolicSize(size);

		return 0;
	}

	// void wxFont::SetSymbolicSizeRelativeTo(wxFontSymbolicSize size, int base)
	static int _bind_SetSymbolicSizeRelativeTo(lua_State *L) {
		if (!_lg_typecheck_SetSymbolicSizeRelativeTo(L)) {
			luaL_error(L, "luna typecheck failed in void wxFont::SetSymbolicSizeRelativeTo(wxFontSymbolicSize size, int base) function, expected prototype:\nvoid wxFont::SetSymbolicSizeRelativeTo(wxFontSymbolicSize size, int base)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxFontSymbolicSize size=(wxFontSymbolicSize)lua_tointeger(L,2);
		int base=(int)lua_tointeger(L,3);

		wxFont* self=Luna< wxObject >::checkSubType< wxFont >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFont::SetSymbolicSizeRelativeTo(wxFontSymbolicSize, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetSymbolicSizeRelativeTo(size, base);

		return 0;
	}

	// void wxFont::SetUnderlined(bool underlined)
	static int _bind_SetUnderlined(lua_State *L) {
		if (!_lg_typecheck_SetUnderlined(L)) {
			luaL_error(L, "luna typecheck failed in void wxFont::SetUnderlined(bool underlined) function, expected prototype:\nvoid wxFont::SetUnderlined(bool underlined)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool underlined=(bool)(lua_toboolean(L,2)==1);

		wxFont* self=Luna< wxObject >::checkSubType< wxFont >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFont::SetUnderlined(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetUnderlined(underlined);

		return 0;
	}

	// void wxFont::SetWeight(wxFontWeight weight)
	static int _bind_SetWeight(lua_State *L) {
		if (!_lg_typecheck_SetWeight(L)) {
			luaL_error(L, "luna typecheck failed in void wxFont::SetWeight(wxFontWeight weight) function, expected prototype:\nvoid wxFont::SetWeight(wxFontWeight weight)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxFontWeight weight=(wxFontWeight)lua_tointeger(L,2);

		wxFont* self=Luna< wxObject >::checkSubType< wxFont >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFont::SetWeight(wxFontWeight). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetWeight(weight);

		return 0;
	}

	// static wxFontEncoding wxFont::GetDefaultEncoding()
	static int _bind_GetDefaultEncoding(lua_State *L) {
		if (!_lg_typecheck_GetDefaultEncoding(L)) {
			luaL_error(L, "luna typecheck failed in static wxFontEncoding wxFont::GetDefaultEncoding() function, expected prototype:\nstatic wxFontEncoding wxFont::GetDefaultEncoding()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFontEncoding lret = wxFont::GetDefaultEncoding();
		lua_pushnumber(L,lret);

		return 1;
	}

	// static void wxFont::SetDefaultEncoding(wxFontEncoding encoding)
	static int _bind_SetDefaultEncoding(lua_State *L) {
		if (!_lg_typecheck_SetDefaultEncoding(L)) {
			luaL_error(L, "luna typecheck failed in static void wxFont::SetDefaultEncoding(wxFontEncoding encoding) function, expected prototype:\nstatic void wxFont::SetDefaultEncoding(wxFontEncoding encoding)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxFontEncoding encoding=(wxFontEncoding)lua_tointeger(L,1);

		wxFont::SetDefaultEncoding(encoding);

		return 0;
	}

	// static wxFont * wxFont::New(int pointSize, wxFontFamily family, wxFontStyle style, wxFontWeight weight, bool underline = false, const wxString & faceName = wxEmptyString, wxFontEncoding encoding = ::wxFONTENCODING_DEFAULT)
	static int _bind_New_overload_1(lua_State *L) {
		if (!_lg_typecheck_New_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in static wxFont * wxFont::New(int pointSize, wxFontFamily family, wxFontStyle style, wxFontWeight weight, bool underline = false, const wxString & faceName = wxEmptyString, wxFontEncoding encoding = ::wxFONTENCODING_DEFAULT) function, expected prototype:\nstatic wxFont * wxFont::New(int pointSize, wxFontFamily family, wxFontStyle style, wxFontWeight weight, bool underline = false, const wxString & faceName = wxEmptyString, wxFontEncoding encoding = ::wxFONTENCODING_DEFAULT)\nClass arguments details:\narg 6 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int pointSize=(int)lua_tointeger(L,1);
		wxFontFamily family=(wxFontFamily)lua_tointeger(L,2);
		wxFontStyle style=(wxFontStyle)lua_tointeger(L,3);
		wxFontWeight weight=(wxFontWeight)lua_tointeger(L,4);
		bool underline=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : (bool)false;
		wxString faceName(lua_tostring(L,6),lua_objlen(L,6));
		wxFontEncoding encoding=luatop>6 ? (wxFontEncoding)lua_tointeger(L,7) : (wxFontEncoding)::wxFONTENCODING_DEFAULT;

		wxFont * lret = wxFont::New(pointSize, family, style, weight, underline, faceName, encoding);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFont >::push(L,lret,false);

		return 1;
	}

	// static wxFont * wxFont::New(int pointSize, wxFontFamily family, int flags = ::wxFONTFLAG_DEFAULT, const wxString & faceName = wxEmptyString, wxFontEncoding encoding = ::wxFONTENCODING_DEFAULT)
	static int _bind_New_overload_2(lua_State *L) {
		if (!_lg_typecheck_New_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in static wxFont * wxFont::New(int pointSize, wxFontFamily family, int flags = ::wxFONTFLAG_DEFAULT, const wxString & faceName = wxEmptyString, wxFontEncoding encoding = ::wxFONTENCODING_DEFAULT) function, expected prototype:\nstatic wxFont * wxFont::New(int pointSize, wxFontFamily family, int flags = ::wxFONTFLAG_DEFAULT, const wxString & faceName = wxEmptyString, wxFontEncoding encoding = ::wxFONTENCODING_DEFAULT)\nClass arguments details:\narg 4 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int pointSize=(int)lua_tointeger(L,1);
		wxFontFamily family=(wxFontFamily)lua_tointeger(L,2);
		int flags=luatop>2 ? (int)lua_tointeger(L,3) : (int)::wxFONTFLAG_DEFAULT;
		wxString faceName(lua_tostring(L,4),lua_objlen(L,4));
		wxFontEncoding encoding=luatop>4 ? (wxFontEncoding)lua_tointeger(L,5) : (wxFontEncoding)::wxFONTENCODING_DEFAULT;

		wxFont * lret = wxFont::New(pointSize, family, flags, faceName, encoding);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFont >::push(L,lret,false);

		return 1;
	}

	// static wxFont * wxFont::New(const wxSize & pixelSize, wxFontFamily family, wxFontStyle style, wxFontWeight weight, bool underline = false, const wxString & faceName = wxEmptyString, wxFontEncoding encoding = ::wxFONTENCODING_DEFAULT)
	static int _bind_New_overload_3(lua_State *L) {
		if (!_lg_typecheck_New_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in static wxFont * wxFont::New(const wxSize & pixelSize, wxFontFamily family, wxFontStyle style, wxFontWeight weight, bool underline = false, const wxString & faceName = wxEmptyString, wxFontEncoding encoding = ::wxFONTENCODING_DEFAULT) function, expected prototype:\nstatic wxFont * wxFont::New(const wxSize & pixelSize, wxFontFamily family, wxFontStyle style, wxFontWeight weight, bool underline = false, const wxString & faceName = wxEmptyString, wxFontEncoding encoding = ::wxFONTENCODING_DEFAULT)\nClass arguments details:\narg 1 ID = 20268751\narg 6 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxSize* pixelSize_ptr=(Luna< wxSize >::check(L,1));
		if( !pixelSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pixelSize in wxFont::New function");
		}
		const wxSize & pixelSize=*pixelSize_ptr;
		wxFontFamily family=(wxFontFamily)lua_tointeger(L,2);
		wxFontStyle style=(wxFontStyle)lua_tointeger(L,3);
		wxFontWeight weight=(wxFontWeight)lua_tointeger(L,4);
		bool underline=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : (bool)false;
		wxString faceName(lua_tostring(L,6),lua_objlen(L,6));
		wxFontEncoding encoding=luatop>6 ? (wxFontEncoding)lua_tointeger(L,7) : (wxFontEncoding)::wxFONTENCODING_DEFAULT;

		wxFont * lret = wxFont::New(pixelSize, family, style, weight, underline, faceName, encoding);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFont >::push(L,lret,false);

		return 1;
	}

	// static wxFont * wxFont::New(const wxSize & pixelSize, wxFontFamily family, int flags = ::wxFONTFLAG_DEFAULT, const wxString & faceName = wxEmptyString, wxFontEncoding encoding = ::wxFONTENCODING_DEFAULT)
	static int _bind_New_overload_4(lua_State *L) {
		if (!_lg_typecheck_New_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in static wxFont * wxFont::New(const wxSize & pixelSize, wxFontFamily family, int flags = ::wxFONTFLAG_DEFAULT, const wxString & faceName = wxEmptyString, wxFontEncoding encoding = ::wxFONTENCODING_DEFAULT) function, expected prototype:\nstatic wxFont * wxFont::New(const wxSize & pixelSize, wxFontFamily family, int flags = ::wxFONTFLAG_DEFAULT, const wxString & faceName = wxEmptyString, wxFontEncoding encoding = ::wxFONTENCODING_DEFAULT)\nClass arguments details:\narg 1 ID = 20268751\narg 4 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxSize* pixelSize_ptr=(Luna< wxSize >::check(L,1));
		if( !pixelSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pixelSize in wxFont::New function");
		}
		const wxSize & pixelSize=*pixelSize_ptr;
		wxFontFamily family=(wxFontFamily)lua_tointeger(L,2);
		int flags=luatop>2 ? (int)lua_tointeger(L,3) : (int)::wxFONTFLAG_DEFAULT;
		wxString faceName(lua_tostring(L,4),lua_objlen(L,4));
		wxFontEncoding encoding=luatop>4 ? (wxFontEncoding)lua_tointeger(L,5) : (wxFontEncoding)::wxFONTENCODING_DEFAULT;

		wxFont * lret = wxFont::New(pixelSize, family, flags, faceName, encoding);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFont >::push(L,lret,false);

		return 1;
	}

	// static wxFont * wxFont::New(const wxNativeFontInfo & nativeInfo)
	static int _bind_New_overload_5(lua_State *L) {
		if (!_lg_typecheck_New_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in static wxFont * wxFont::New(const wxNativeFontInfo & nativeInfo) function, expected prototype:\nstatic wxFont * wxFont::New(const wxNativeFontInfo & nativeInfo)\nClass arguments details:\narg 1 ID = 26059272\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxNativeFontInfo* nativeInfo_ptr=(Luna< wxNativeFontInfo >::check(L,1));
		if( !nativeInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nativeInfo in wxFont::New function");
		}
		const wxNativeFontInfo & nativeInfo=*nativeInfo_ptr;

		wxFont * lret = wxFont::New(nativeInfo);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFont >::push(L,lret,false);

		return 1;
	}

	// static wxFont * wxFont::New(const wxString & nativeInfoString)
	static int _bind_New_overload_6(lua_State *L) {
		if (!_lg_typecheck_New_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in static wxFont * wxFont::New(const wxString & nativeInfoString) function, expected prototype:\nstatic wxFont * wxFont::New(const wxString & nativeInfoString)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString nativeInfoString(lua_tostring(L,1),lua_objlen(L,1));

		wxFont * lret = wxFont::New(nativeInfoString);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFont >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxFont::New
	static int _bind_New(lua_State *L) {
		if (_lg_typecheck_New_overload_1(L)) return _bind_New_overload_1(L);
		if (_lg_typecheck_New_overload_2(L)) return _bind_New_overload_2(L);
		if (_lg_typecheck_New_overload_3(L)) return _bind_New_overload_3(L);
		if (_lg_typecheck_New_overload_4(L)) return _bind_New_overload_4(L);
		if (_lg_typecheck_New_overload_5(L)) return _bind_New_overload_5(L);
		if (_lg_typecheck_New_overload_6(L)) return _bind_New_overload_6(L);

		luaL_error(L, "error in function New, cannot match any of the overloads for function New:\n  New(int, wxFontFamily, wxFontStyle, wxFontWeight, bool, const wxString &, wxFontEncoding)\n  New(int, wxFontFamily, int, const wxString &, wxFontEncoding)\n  New(const wxSize &, wxFontFamily, wxFontStyle, wxFontWeight, bool, const wxString &, wxFontEncoding)\n  New(const wxSize &, wxFontFamily, int, const wxString &, wxFontEncoding)\n  New(const wxNativeFontInfo &)\n  New(const wxString &)\n");
		return 0;
	}

	// wxClassInfo * wxFont::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxFont::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxFont::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFont* self=Luna< wxObject >::checkSubType< wxFont >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxFont::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxFont::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxFontEncoding wxFont::base_GetEncoding() const
	static int _bind_base_GetEncoding(lua_State *L) {
		if (!_lg_typecheck_base_GetEncoding(L)) {
			luaL_error(L, "luna typecheck failed in wxFontEncoding wxFont::base_GetEncoding() const function, expected prototype:\nwxFontEncoding wxFont::base_GetEncoding() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFont* self=Luna< wxObject >::checkSubType< wxFont >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxFontEncoding wxFont::base_GetEncoding() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxFontEncoding lret = self->wxFont::GetEncoding();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxFont::base_GetFaceName() const
	static int _bind_base_GetFaceName(lua_State *L) {
		if (!_lg_typecheck_base_GetFaceName(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxFont::base_GetFaceName() const function, expected prototype:\nwxString wxFont::base_GetFaceName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFont* self=Luna< wxObject >::checkSubType< wxFont >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxFont::base_GetFaceName() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxFont::GetFaceName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxFontFamily wxFont::base_GetFamily() const
	static int _bind_base_GetFamily(lua_State *L) {
		if (!_lg_typecheck_base_GetFamily(L)) {
			luaL_error(L, "luna typecheck failed in wxFontFamily wxFont::base_GetFamily() const function, expected prototype:\nwxFontFamily wxFont::base_GetFamily() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFont* self=Luna< wxObject >::checkSubType< wxFont >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxFontFamily wxFont::base_GetFamily() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxFontFamily lret = self->wxFont::GetFamily();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxFont::base_GetPointSize() const
	static int _bind_base_GetPointSize(lua_State *L) {
		if (!_lg_typecheck_base_GetPointSize(L)) {
			luaL_error(L, "luna typecheck failed in int wxFont::base_GetPointSize() const function, expected prototype:\nint wxFont::base_GetPointSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFont* self=Luna< wxObject >::checkSubType< wxFont >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxFont::base_GetPointSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxFont::GetPointSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxSize wxFont::base_GetPixelSize() const
	static int _bind_base_GetPixelSize(lua_State *L) {
		if (!_lg_typecheck_base_GetPixelSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxFont::base_GetPixelSize() const function, expected prototype:\nwxSize wxFont::base_GetPixelSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFont* self=Luna< wxObject >::checkSubType< wxFont >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxFont::base_GetPixelSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxFont::GetPixelSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxFontStyle wxFont::base_GetStyle() const
	static int _bind_base_GetStyle(lua_State *L) {
		if (!_lg_typecheck_base_GetStyle(L)) {
			luaL_error(L, "luna typecheck failed in wxFontStyle wxFont::base_GetStyle() const function, expected prototype:\nwxFontStyle wxFont::base_GetStyle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFont* self=Luna< wxObject >::checkSubType< wxFont >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxFontStyle wxFont::base_GetStyle() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxFontStyle lret = self->wxFont::GetStyle();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxFont::base_GetUnderlined() const
	static int _bind_base_GetUnderlined(lua_State *L) {
		if (!_lg_typecheck_base_GetUnderlined(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFont::base_GetUnderlined() const function, expected prototype:\nbool wxFont::base_GetUnderlined() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFont* self=Luna< wxObject >::checkSubType< wxFont >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFont::base_GetUnderlined() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxFont::GetUnderlined();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxFontWeight wxFont::base_GetWeight() const
	static int _bind_base_GetWeight(lua_State *L) {
		if (!_lg_typecheck_base_GetWeight(L)) {
			luaL_error(L, "luna typecheck failed in wxFontWeight wxFont::base_GetWeight() const function, expected prototype:\nwxFontWeight wxFont::base_GetWeight() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFont* self=Luna< wxObject >::checkSubType< wxFont >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxFontWeight wxFont::base_GetWeight() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxFontWeight lret = self->wxFont::GetWeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxFont::base_IsFixedWidth() const
	static int _bind_base_IsFixedWidth(lua_State *L) {
		if (!_lg_typecheck_base_IsFixedWidth(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFont::base_IsFixedWidth() const function, expected prototype:\nbool wxFont::base_IsFixedWidth() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFont* self=Luna< wxObject >::checkSubType< wxFont >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFont::base_IsFixedWidth() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxFont::IsFixedWidth();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFont::base_IsOk() const
	static int _bind_base_IsOk(lua_State *L) {
		if (!_lg_typecheck_base_IsOk(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFont::base_IsOk() const function, expected prototype:\nbool wxFont::base_IsOk() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFont* self=Luna< wxObject >::checkSubType< wxFont >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFont::base_IsOk() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxFont::IsOk();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxFont::base_SetEncoding(wxFontEncoding encoding)
	static int _bind_base_SetEncoding(lua_State *L) {
		if (!_lg_typecheck_base_SetEncoding(L)) {
			luaL_error(L, "luna typecheck failed in void wxFont::base_SetEncoding(wxFontEncoding encoding) function, expected prototype:\nvoid wxFont::base_SetEncoding(wxFontEncoding encoding)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxFontEncoding encoding=(wxFontEncoding)lua_tointeger(L,2);

		wxFont* self=Luna< wxObject >::checkSubType< wxFont >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFont::base_SetEncoding(wxFontEncoding). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxFont::SetEncoding(encoding);

		return 0;
	}

	// bool wxFont::base_SetFaceName(const wxString & faceName)
	static int _bind_base_SetFaceName(lua_State *L) {
		if (!_lg_typecheck_base_SetFaceName(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFont::base_SetFaceName(const wxString & faceName) function, expected prototype:\nbool wxFont::base_SetFaceName(const wxString & faceName)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString faceName(lua_tostring(L,2),lua_objlen(L,2));

		wxFont* self=Luna< wxObject >::checkSubType< wxFont >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFont::base_SetFaceName(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxFont::SetFaceName(faceName);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxFont::base_SetFamily(wxFontFamily family)
	static int _bind_base_SetFamily(lua_State *L) {
		if (!_lg_typecheck_base_SetFamily(L)) {
			luaL_error(L, "luna typecheck failed in void wxFont::base_SetFamily(wxFontFamily family) function, expected prototype:\nvoid wxFont::base_SetFamily(wxFontFamily family)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxFontFamily family=(wxFontFamily)lua_tointeger(L,2);

		wxFont* self=Luna< wxObject >::checkSubType< wxFont >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFont::base_SetFamily(wxFontFamily). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxFont::SetFamily(family);

		return 0;
	}

	// void wxFont::base_SetPointSize(int pointSize)
	static int _bind_base_SetPointSize(lua_State *L) {
		if (!_lg_typecheck_base_SetPointSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxFont::base_SetPointSize(int pointSize) function, expected prototype:\nvoid wxFont::base_SetPointSize(int pointSize)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int pointSize=(int)lua_tointeger(L,2);

		wxFont* self=Luna< wxObject >::checkSubType< wxFont >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFont::base_SetPointSize(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxFont::SetPointSize(pointSize);

		return 0;
	}

	// void wxFont::base_SetPixelSize(const wxSize & pixelSize)
	static int _bind_base_SetPixelSize(lua_State *L) {
		if (!_lg_typecheck_base_SetPixelSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxFont::base_SetPixelSize(const wxSize & pixelSize) function, expected prototype:\nvoid wxFont::base_SetPixelSize(const wxSize & pixelSize)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* pixelSize_ptr=(Luna< wxSize >::check(L,2));
		if( !pixelSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pixelSize in wxFont::base_SetPixelSize function");
		}
		const wxSize & pixelSize=*pixelSize_ptr;

		wxFont* self=Luna< wxObject >::checkSubType< wxFont >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFont::base_SetPixelSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxFont::SetPixelSize(pixelSize);

		return 0;
	}

	// void wxFont::base_SetStyle(wxFontStyle style)
	static int _bind_base_SetStyle(lua_State *L) {
		if (!_lg_typecheck_base_SetStyle(L)) {
			luaL_error(L, "luna typecheck failed in void wxFont::base_SetStyle(wxFontStyle style) function, expected prototype:\nvoid wxFont::base_SetStyle(wxFontStyle style)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxFontStyle style=(wxFontStyle)lua_tointeger(L,2);

		wxFont* self=Luna< wxObject >::checkSubType< wxFont >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFont::base_SetStyle(wxFontStyle). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxFont::SetStyle(style);

		return 0;
	}

	// void wxFont::base_SetUnderlined(bool underlined)
	static int _bind_base_SetUnderlined(lua_State *L) {
		if (!_lg_typecheck_base_SetUnderlined(L)) {
			luaL_error(L, "luna typecheck failed in void wxFont::base_SetUnderlined(bool underlined) function, expected prototype:\nvoid wxFont::base_SetUnderlined(bool underlined)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool underlined=(bool)(lua_toboolean(L,2)==1);

		wxFont* self=Luna< wxObject >::checkSubType< wxFont >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFont::base_SetUnderlined(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxFont::SetUnderlined(underlined);

		return 0;
	}

	// void wxFont::base_SetWeight(wxFontWeight weight)
	static int _bind_base_SetWeight(lua_State *L) {
		if (!_lg_typecheck_base_SetWeight(L)) {
			luaL_error(L, "luna typecheck failed in void wxFont::base_SetWeight(wxFontWeight weight) function, expected prototype:\nvoid wxFont::base_SetWeight(wxFontWeight weight)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxFontWeight weight=(wxFontWeight)lua_tointeger(L,2);

		wxFont* self=Luna< wxObject >::checkSubType< wxFont >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFont::base_SetWeight(wxFontWeight). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxFont::SetWeight(weight);

		return 0;
	}


	// Operator binds:
	// bool wxFont::operator!=(const wxFont & font) const
	static int _bind_op_neq(lua_State *L) {
		if (!_lg_typecheck_op_neq(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFont::operator!=(const wxFont & font) const function, expected prototype:\nbool wxFont::operator!=(const wxFont & font) const\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxFont* font_ptr=(Luna< wxObject >::checkSubType< wxFont >(L,2));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxFont::operator!= function");
		}
		const wxFont & font=*font_ptr;

		wxFont* self=Luna< wxObject >::checkSubType< wxFont >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFont::operator!=(const wxFont &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator!=(font);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFont::operator==(const wxFont & font) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFont::operator==(const wxFont & font) const function, expected prototype:\nbool wxFont::operator==(const wxFont & font) const\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxFont* font_ptr=(Luna< wxObject >::checkSubType< wxFont >(L,2));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxFont::operator== function");
		}
		const wxFont & font=*font_ptr;

		wxFont* self=Luna< wxObject >::checkSubType< wxFont >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFont::operator==(const wxFont &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator==(font);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxFont & wxFont::operator=(const wxFont & font)
	static int _bind_op_assign(lua_State *L) {
		if (!_lg_typecheck_op_assign(L)) {
			luaL_error(L, "luna typecheck failed in wxFont & wxFont::operator=(const wxFont & font) function, expected prototype:\nwxFont & wxFont::operator=(const wxFont & font)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxFont* font_ptr=(Luna< wxObject >::checkSubType< wxFont >(L,2));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxFont::operator= function");
		}
		const wxFont & font=*font_ptr;

		wxFont* self=Luna< wxObject >::checkSubType< wxFont >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxFont & wxFont::operator=(const wxFont &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxFont* lret = &self->operator=(font);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFont >::push(L,lret,false);

		return 1;
	}


};

wxFont* LunaTraits< wxFont >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxFont::_bind_ctor(L);
}

void LunaTraits< wxFont >::_bind_dtor(wxFont* obj) {
	delete obj;
}

const char LunaTraits< wxFont >::className[] = "wxFont";
const char LunaTraits< wxFont >::fullName[] = "wxFont";
const char LunaTraits< wxFont >::moduleName[] = "wx";
const char* LunaTraits< wxFont >::parents[] = {"wx.wxGDIObject", 0};
const int LunaTraits< wxFont >::hash = 19886877;
const int LunaTraits< wxFont >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxFont >::methods[] = {
	{"GetEncoding", &luna_wrapper_wxFont::_bind_GetEncoding},
	{"GetFaceName", &luna_wrapper_wxFont::_bind_GetFaceName},
	{"GetFamily", &luna_wrapper_wxFont::_bind_GetFamily},
	{"GetNativeFontInfoDesc", &luna_wrapper_wxFont::_bind_GetNativeFontInfoDesc},
	{"GetNativeFontInfoUserDesc", &luna_wrapper_wxFont::_bind_GetNativeFontInfoUserDesc},
	{"GetNativeFontInfo", &luna_wrapper_wxFont::_bind_GetNativeFontInfo},
	{"GetPointSize", &luna_wrapper_wxFont::_bind_GetPointSize},
	{"GetPixelSize", &luna_wrapper_wxFont::_bind_GetPixelSize},
	{"GetStyle", &luna_wrapper_wxFont::_bind_GetStyle},
	{"GetUnderlined", &luna_wrapper_wxFont::_bind_GetUnderlined},
	{"GetWeight", &luna_wrapper_wxFont::_bind_GetWeight},
	{"IsFixedWidth", &luna_wrapper_wxFont::_bind_IsFixedWidth},
	{"IsOk", &luna_wrapper_wxFont::_bind_IsOk},
	{"Bold", &luna_wrapper_wxFont::_bind_Bold},
	{"Italic", &luna_wrapper_wxFont::_bind_Italic},
	{"Larger", &luna_wrapper_wxFont::_bind_Larger},
	{"Smaller", &luna_wrapper_wxFont::_bind_Smaller},
	{"Underlined", &luna_wrapper_wxFont::_bind_Underlined},
	{"MakeBold", &luna_wrapper_wxFont::_bind_MakeBold},
	{"MakeItalic", &luna_wrapper_wxFont::_bind_MakeItalic},
	{"MakeLarger", &luna_wrapper_wxFont::_bind_MakeLarger},
	{"MakeSmaller", &luna_wrapper_wxFont::_bind_MakeSmaller},
	{"MakeUnderlined", &luna_wrapper_wxFont::_bind_MakeUnderlined},
	{"Scale", &luna_wrapper_wxFont::_bind_Scale},
	{"Scaled", &luna_wrapper_wxFont::_bind_Scaled},
	{"SetEncoding", &luna_wrapper_wxFont::_bind_SetEncoding},
	{"SetFaceName", &luna_wrapper_wxFont::_bind_SetFaceName},
	{"SetFamily", &luna_wrapper_wxFont::_bind_SetFamily},
	{"SetNativeFontInfo", &luna_wrapper_wxFont::_bind_SetNativeFontInfo},
	{"SetNativeFontInfoUserDesc", &luna_wrapper_wxFont::_bind_SetNativeFontInfoUserDesc},
	{"SetPointSize", &luna_wrapper_wxFont::_bind_SetPointSize},
	{"SetPixelSize", &luna_wrapper_wxFont::_bind_SetPixelSize},
	{"SetStyle", &luna_wrapper_wxFont::_bind_SetStyle},
	{"SetSymbolicSize", &luna_wrapper_wxFont::_bind_SetSymbolicSize},
	{"SetSymbolicSizeRelativeTo", &luna_wrapper_wxFont::_bind_SetSymbolicSizeRelativeTo},
	{"SetUnderlined", &luna_wrapper_wxFont::_bind_SetUnderlined},
	{"SetWeight", &luna_wrapper_wxFont::_bind_SetWeight},
	{"GetDefaultEncoding", &luna_wrapper_wxFont::_bind_GetDefaultEncoding},
	{"SetDefaultEncoding", &luna_wrapper_wxFont::_bind_SetDefaultEncoding},
	{"New", &luna_wrapper_wxFont::_bind_New},
	{"base_GetClassInfo", &luna_wrapper_wxFont::_bind_base_GetClassInfo},
	{"base_GetEncoding", &luna_wrapper_wxFont::_bind_base_GetEncoding},
	{"base_GetFaceName", &luna_wrapper_wxFont::_bind_base_GetFaceName},
	{"base_GetFamily", &luna_wrapper_wxFont::_bind_base_GetFamily},
	{"base_GetPointSize", &luna_wrapper_wxFont::_bind_base_GetPointSize},
	{"base_GetPixelSize", &luna_wrapper_wxFont::_bind_base_GetPixelSize},
	{"base_GetStyle", &luna_wrapper_wxFont::_bind_base_GetStyle},
	{"base_GetUnderlined", &luna_wrapper_wxFont::_bind_base_GetUnderlined},
	{"base_GetWeight", &luna_wrapper_wxFont::_bind_base_GetWeight},
	{"base_IsFixedWidth", &luna_wrapper_wxFont::_bind_base_IsFixedWidth},
	{"base_IsOk", &luna_wrapper_wxFont::_bind_base_IsOk},
	{"base_SetEncoding", &luna_wrapper_wxFont::_bind_base_SetEncoding},
	{"base_SetFaceName", &luna_wrapper_wxFont::_bind_base_SetFaceName},
	{"base_SetFamily", &luna_wrapper_wxFont::_bind_base_SetFamily},
	{"base_SetPointSize", &luna_wrapper_wxFont::_bind_base_SetPointSize},
	{"base_SetPixelSize", &luna_wrapper_wxFont::_bind_base_SetPixelSize},
	{"base_SetStyle", &luna_wrapper_wxFont::_bind_base_SetStyle},
	{"base_SetUnderlined", &luna_wrapper_wxFont::_bind_base_SetUnderlined},
	{"base_SetWeight", &luna_wrapper_wxFont::_bind_base_SetWeight},
	{"op_neq", &luna_wrapper_wxFont::_bind_op_neq},
	{"__eq", &luna_wrapper_wxFont::_bind___eq},
	{"op_assign", &luna_wrapper_wxFont::_bind_op_assign},
	{"fromVoid", &luna_wrapper_wxFont::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxFont::_bind_asVoid},
	{"getTable", &luna_wrapper_wxFont::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxFont >::converters[] = {
	{"wxObject", &luna_wrapper_wxFont::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxFont >::enumValues[] = {
	{0,0}
};



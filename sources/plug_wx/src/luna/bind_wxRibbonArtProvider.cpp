#include <plug_common.h>

#include <luna/wrappers/wrapper_wxRibbonArtProvider.h>

class luna_wrapper_wxRibbonArtProvider {
public:
	typedef Luna< wxRibbonArtProvider > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxRibbonArtProvider* self=(Luna< wxRibbonArtProvider >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<wxRibbonArtProvider,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,48201749) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxRibbonArtProvider*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxRibbonArtProvider* rhs =(Luna< wxRibbonArtProvider >::check(L,2));
		wxRibbonArtProvider* self=(Luna< wxRibbonArtProvider >::check(L,1));
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

		wxRibbonArtProvider* self= (wxRibbonArtProvider*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxRibbonArtProvider >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,48201749) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxRibbonArtProvider >::check(L,1));
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

		wxRibbonArtProvider* self=(Luna< wxRibbonArtProvider >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxRibbonArtProvider");
		
		return luna_dynamicCast(L,converters,"wxRibbonArtProvider",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Clone(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetFlags(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetFlags(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMetric(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMetric(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFont(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetFont(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetColour(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetColor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetColor(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetColourScheme(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetColourScheme(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawTabCtrlBackground(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,20234418) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawTab(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,51496344) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawTabSeparator(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,20234418) ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawPageBackground(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,20234418) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawScrollButton(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,20234418) ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawPanelBackground(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,20234418) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawGalleryBackground(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,20234418) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawGalleryItemBackground(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,20234418) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,56057674)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawMinimisedPanel(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,20234418) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawButtonBarBackground(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,20234418) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawButtonBarButton(lua_State *L) {
		if( lua_gettop(L)!=9 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,20234418) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( lua_type(L,6)!=LUA_TNUMBER ) return false;
		if( lua_type(L,7)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,8,56813631) ) return false;
		if( !Luna<void>::has_uniqueid(L,9,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawToolBarBackground(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,20234418) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawToolGroupBackground(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,20234418) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawTool(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,20234418) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,56813631) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( lua_type(L,7)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetBarTabWidth(lua_State *L) {
		if( lua_gettop(L)!=9 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,5,56813631) ) return false;
		if( (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,3625364)) ) return false;
		if( (lua_isnil(L,7)==0 && !Luna<void>::has_uniqueid(L,7,3625364)) ) return false;
		if( (lua_isnil(L,8)==0 && !Luna<void>::has_uniqueid(L,8,3625364)) ) return false;
		if( (lua_isnil(L,9)==0 && !Luna<void>::has_uniqueid(L,9,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetTabCtrlHeight(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,76085772) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetScrollButtonMinimumSize(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetPanelSize(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,20268751) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,25723480)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetPanelClientSize(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,20268751) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,25723480)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetGallerySize(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,20268751) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetGalleryClientSize(lua_State *L) {
		if( lua_gettop(L)!=8 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,20268751) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,25723480)) ) return false;
		if( (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,20234418)) ) return false;
		if( (lua_isnil(L,7)==0 && !Luna<void>::has_uniqueid(L,7,20234418)) ) return false;
		if( (lua_isnil(L,8)==0 && !Luna<void>::has_uniqueid(L,8,20234418)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetPageBackgroundRedrawArea(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,20268751) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,20268751) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetButtonBarButtonSize(lua_State *L) {
		if( lua_gettop(L)!=11 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( lua_type(L,6)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,7,20268751) ) return false;
		if( !Luna<void>::has_uniqueid(L,8,20268751) ) return false;
		if( (lua_isnil(L,9)==0 && !Luna<void>::has_uniqueid(L,9,20268751)) ) return false;
		if( (lua_isnil(L,10)==0 && !Luna<void>::has_uniqueid(L,10,20234418)) ) return false;
		if( (lua_isnil(L,11)==0 && !Luna<void>::has_uniqueid(L,11,20234418)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetMinimisedPanelMinimumSize(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,20268751)) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetToolSize(lua_State *L) {
		if( lua_gettop(L)!=8 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,20268751) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( lua_isboolean(L,6)==0 ) return false;
		if( lua_isboolean(L,7)==0 ) return false;
		if( (lua_isnil(L,8)==0 && !Luna<void>::has_uniqueid(L,8,20234418)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxRibbonArtProvider::wxRibbonArtProvider(lua_Table * data)
	static wxRibbonArtProvider* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxRibbonArtProvider::wxRibbonArtProvider(lua_Table * data) function, expected prototype:\nwxRibbonArtProvider::wxRibbonArtProvider(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxRibbonArtProvider(L,NULL);
	}


	// Function binds:
	// wxRibbonArtProvider * wxRibbonArtProvider::Clone() const
	static int _bind_Clone(lua_State *L) {
		if (!_lg_typecheck_Clone(L)) {
			luaL_error(L, "luna typecheck failed in wxRibbonArtProvider * wxRibbonArtProvider::Clone() const function, expected prototype:\nwxRibbonArtProvider * wxRibbonArtProvider::Clone() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRibbonArtProvider* self=(Luna< wxRibbonArtProvider >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxRibbonArtProvider * wxRibbonArtProvider::Clone() const. Got : '%s'\n%s",typeid(Luna< wxRibbonArtProvider >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxRibbonArtProvider * lret = self->Clone();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRibbonArtProvider >::push(L,lret,false);

		return 1;
	}

	// void wxRibbonArtProvider::SetFlags(long flags)
	static int _bind_SetFlags(lua_State *L) {
		if (!_lg_typecheck_SetFlags(L)) {
			luaL_error(L, "luna typecheck failed in void wxRibbonArtProvider::SetFlags(long flags) function, expected prototype:\nvoid wxRibbonArtProvider::SetFlags(long flags)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long flags=(long)lua_tonumber(L,2);

		wxRibbonArtProvider* self=(Luna< wxRibbonArtProvider >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRibbonArtProvider::SetFlags(long). Got : '%s'\n%s",typeid(Luna< wxRibbonArtProvider >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetFlags(flags);

		return 0;
	}

	// long wxRibbonArtProvider::GetFlags() const
	static int _bind_GetFlags(lua_State *L) {
		if (!_lg_typecheck_GetFlags(L)) {
			luaL_error(L, "luna typecheck failed in long wxRibbonArtProvider::GetFlags() const function, expected prototype:\nlong wxRibbonArtProvider::GetFlags() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRibbonArtProvider* self=(Luna< wxRibbonArtProvider >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long wxRibbonArtProvider::GetFlags() const. Got : '%s'\n%s",typeid(Luna< wxRibbonArtProvider >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->GetFlags();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxRibbonArtProvider::GetMetric(int id) const
	static int _bind_GetMetric(lua_State *L) {
		if (!_lg_typecheck_GetMetric(L)) {
			luaL_error(L, "luna typecheck failed in int wxRibbonArtProvider::GetMetric(int id) const function, expected prototype:\nint wxRibbonArtProvider::GetMetric(int id) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int id=(int)lua_tointeger(L,2);

		wxRibbonArtProvider* self=(Luna< wxRibbonArtProvider >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxRibbonArtProvider::GetMetric(int) const. Got : '%s'\n%s",typeid(Luna< wxRibbonArtProvider >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetMetric(id);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxRibbonArtProvider::SetMetric(int id, int new_val)
	static int _bind_SetMetric(lua_State *L) {
		if (!_lg_typecheck_SetMetric(L)) {
			luaL_error(L, "luna typecheck failed in void wxRibbonArtProvider::SetMetric(int id, int new_val) function, expected prototype:\nvoid wxRibbonArtProvider::SetMetric(int id, int new_val)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int id=(int)lua_tointeger(L,2);
		int new_val=(int)lua_tointeger(L,3);

		wxRibbonArtProvider* self=(Luna< wxRibbonArtProvider >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRibbonArtProvider::SetMetric(int, int). Got : '%s'\n%s",typeid(Luna< wxRibbonArtProvider >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetMetric(id, new_val);

		return 0;
	}

	// void wxRibbonArtProvider::SetFont(int id, const wxFont & font)
	static int _bind_SetFont(lua_State *L) {
		if (!_lg_typecheck_SetFont(L)) {
			luaL_error(L, "luna typecheck failed in void wxRibbonArtProvider::SetFont(int id, const wxFont & font) function, expected prototype:\nvoid wxRibbonArtProvider::SetFont(int id, const wxFont & font)\nClass arguments details:\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int id=(int)lua_tointeger(L,2);
		const wxFont* font_ptr=(Luna< wxObject >::checkSubType< wxFont >(L,3));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxRibbonArtProvider::SetFont function");
		}
		const wxFont & font=*font_ptr;

		wxRibbonArtProvider* self=(Luna< wxRibbonArtProvider >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRibbonArtProvider::SetFont(int, const wxFont &). Got : '%s'\n%s",typeid(Luna< wxRibbonArtProvider >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetFont(id, font);

		return 0;
	}

	// wxFont wxRibbonArtProvider::GetFont(int id) const
	static int _bind_GetFont(lua_State *L) {
		if (!_lg_typecheck_GetFont(L)) {
			luaL_error(L, "luna typecheck failed in wxFont wxRibbonArtProvider::GetFont(int id) const function, expected prototype:\nwxFont wxRibbonArtProvider::GetFont(int id) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int id=(int)lua_tointeger(L,2);

		wxRibbonArtProvider* self=(Luna< wxRibbonArtProvider >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxFont wxRibbonArtProvider::GetFont(int) const. Got : '%s'\n%s",typeid(Luna< wxRibbonArtProvider >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxFont stack_lret = self->GetFont(id);
		wxFont* lret = new wxFont(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFont >::push(L,lret,true);

		return 1;
	}

	// wxColour wxRibbonArtProvider::GetColour(int id) const
	static int _bind_GetColour(lua_State *L) {
		if (!_lg_typecheck_GetColour(L)) {
			luaL_error(L, "luna typecheck failed in wxColour wxRibbonArtProvider::GetColour(int id) const function, expected prototype:\nwxColour wxRibbonArtProvider::GetColour(int id) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int id=(int)lua_tointeger(L,2);

		wxRibbonArtProvider* self=(Luna< wxRibbonArtProvider >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxColour wxRibbonArtProvider::GetColour(int) const. Got : '%s'\n%s",typeid(Luna< wxRibbonArtProvider >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxColour stack_lret = self->GetColour(id);
		wxColour* lret = new wxColour(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,true);

		return 1;
	}

	// void wxRibbonArtProvider::SetColour(int id, const wxColour & colour)
	static int _bind_SetColour(lua_State *L) {
		if (!_lg_typecheck_SetColour(L)) {
			luaL_error(L, "luna typecheck failed in void wxRibbonArtProvider::SetColour(int id, const wxColour & colour) function, expected prototype:\nvoid wxRibbonArtProvider::SetColour(int id, const wxColour & colour)\nClass arguments details:\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int id=(int)lua_tointeger(L,2);
		const wxColour* colour_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,3));
		if( !colour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colour in wxRibbonArtProvider::SetColour function");
		}
		const wxColour & colour=*colour_ptr;

		wxRibbonArtProvider* self=(Luna< wxRibbonArtProvider >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRibbonArtProvider::SetColour(int, const wxColour &). Got : '%s'\n%s",typeid(Luna< wxRibbonArtProvider >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetColour(id, colour);

		return 0;
	}

	// wxColour wxRibbonArtProvider::GetColor(int id) const
	static int _bind_GetColor(lua_State *L) {
		if (!_lg_typecheck_GetColor(L)) {
			luaL_error(L, "luna typecheck failed in wxColour wxRibbonArtProvider::GetColor(int id) const function, expected prototype:\nwxColour wxRibbonArtProvider::GetColor(int id) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int id=(int)lua_tointeger(L,2);

		wxRibbonArtProvider* self=(Luna< wxRibbonArtProvider >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxColour wxRibbonArtProvider::GetColor(int) const. Got : '%s'\n%s",typeid(Luna< wxRibbonArtProvider >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxColour stack_lret = self->GetColor(id);
		wxColour* lret = new wxColour(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,true);

		return 1;
	}

	// void wxRibbonArtProvider::SetColor(int id, const wxColour & color)
	static int _bind_SetColor(lua_State *L) {
		if (!_lg_typecheck_SetColor(L)) {
			luaL_error(L, "luna typecheck failed in void wxRibbonArtProvider::SetColor(int id, const wxColour & color) function, expected prototype:\nvoid wxRibbonArtProvider::SetColor(int id, const wxColour & color)\nClass arguments details:\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int id=(int)lua_tointeger(L,2);
		const wxColour* color_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,3));
		if( !color_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg color in wxRibbonArtProvider::SetColor function");
		}
		const wxColour & color=*color_ptr;

		wxRibbonArtProvider* self=(Luna< wxRibbonArtProvider >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRibbonArtProvider::SetColor(int, const wxColour &). Got : '%s'\n%s",typeid(Luna< wxRibbonArtProvider >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetColor(id, color);

		return 0;
	}

	// void wxRibbonArtProvider::GetColourScheme(wxColour * primary, wxColour * secondary, wxColour * tertiary) const
	static int _bind_GetColourScheme(lua_State *L) {
		if (!_lg_typecheck_GetColourScheme(L)) {
			luaL_error(L, "luna typecheck failed in void wxRibbonArtProvider::GetColourScheme(wxColour * primary, wxColour * secondary, wxColour * tertiary) const function, expected prototype:\nvoid wxRibbonArtProvider::GetColourScheme(wxColour * primary, wxColour * secondary, wxColour * tertiary) const\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxColour* primary=(Luna< wxObject >::checkSubType< wxColour >(L,2));
		wxColour* secondary=(Luna< wxObject >::checkSubType< wxColour >(L,3));
		wxColour* tertiary=(Luna< wxObject >::checkSubType< wxColour >(L,4));

		wxRibbonArtProvider* self=(Luna< wxRibbonArtProvider >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRibbonArtProvider::GetColourScheme(wxColour *, wxColour *, wxColour *) const. Got : '%s'\n%s",typeid(Luna< wxRibbonArtProvider >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GetColourScheme(primary, secondary, tertiary);

		return 0;
	}

	// void wxRibbonArtProvider::SetColourScheme(const wxColour & primary, const wxColour & secondary, const wxColour & tertiary)
	static int _bind_SetColourScheme(lua_State *L) {
		if (!_lg_typecheck_SetColourScheme(L)) {
			luaL_error(L, "luna typecheck failed in void wxRibbonArtProvider::SetColourScheme(const wxColour & primary, const wxColour & secondary, const wxColour & tertiary) function, expected prototype:\nvoid wxRibbonArtProvider::SetColourScheme(const wxColour & primary, const wxColour & secondary, const wxColour & tertiary)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxColour* primary_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,2));
		if( !primary_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg primary in wxRibbonArtProvider::SetColourScheme function");
		}
		const wxColour & primary=*primary_ptr;
		const wxColour* secondary_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,3));
		if( !secondary_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg secondary in wxRibbonArtProvider::SetColourScheme function");
		}
		const wxColour & secondary=*secondary_ptr;
		const wxColour* tertiary_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,4));
		if( !tertiary_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg tertiary in wxRibbonArtProvider::SetColourScheme function");
		}
		const wxColour & tertiary=*tertiary_ptr;

		wxRibbonArtProvider* self=(Luna< wxRibbonArtProvider >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRibbonArtProvider::SetColourScheme(const wxColour &, const wxColour &, const wxColour &). Got : '%s'\n%s",typeid(Luna< wxRibbonArtProvider >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetColourScheme(primary, secondary, tertiary);

		return 0;
	}

	// void wxRibbonArtProvider::DrawTabCtrlBackground(wxDC & dc, wxWindow * wnd, const wxRect & rect)
	static int _bind_DrawTabCtrlBackground(lua_State *L) {
		if (!_lg_typecheck_DrawTabCtrlBackground(L)) {
			luaL_error(L, "luna typecheck failed in void wxRibbonArtProvider::DrawTabCtrlBackground(wxDC & dc, wxWindow * wnd, const wxRect & rect) function, expected prototype:\nvoid wxRibbonArtProvider::DrawTabCtrlBackground(wxDC & dc, wxWindow * wnd, const wxRect & rect)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxRibbonArtProvider::DrawTabCtrlBackground function");
		}
		wxDC & dc=*dc_ptr;
		wxWindow* wnd=(Luna< wxObject >::checkSubType< wxWindow >(L,3));
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,4));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxRibbonArtProvider::DrawTabCtrlBackground function");
		}
		const wxRect & rect=*rect_ptr;

		wxRibbonArtProvider* self=(Luna< wxRibbonArtProvider >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRibbonArtProvider::DrawTabCtrlBackground(wxDC &, wxWindow *, const wxRect &). Got : '%s'\n%s",typeid(Luna< wxRibbonArtProvider >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawTabCtrlBackground(dc, wnd, rect);

		return 0;
	}

	// void wxRibbonArtProvider::DrawTab(wxDC & dc, wxWindow * wnd, const wxRibbonPageTabInfo & tab)
	static int _bind_DrawTab(lua_State *L) {
		if (!_lg_typecheck_DrawTab(L)) {
			luaL_error(L, "luna typecheck failed in void wxRibbonArtProvider::DrawTab(wxDC & dc, wxWindow * wnd, const wxRibbonPageTabInfo & tab) function, expected prototype:\nvoid wxRibbonArtProvider::DrawTab(wxDC & dc, wxWindow * wnd, const wxRibbonPageTabInfo & tab)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 51496344\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxRibbonArtProvider::DrawTab function");
		}
		wxDC & dc=*dc_ptr;
		wxWindow* wnd=(Luna< wxObject >::checkSubType< wxWindow >(L,3));
		const wxRibbonPageTabInfo* tab_ptr=(Luna< wxRibbonPageTabInfo >::check(L,4));
		if( !tab_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg tab in wxRibbonArtProvider::DrawTab function");
		}
		const wxRibbonPageTabInfo & tab=*tab_ptr;

		wxRibbonArtProvider* self=(Luna< wxRibbonArtProvider >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRibbonArtProvider::DrawTab(wxDC &, wxWindow *, const wxRibbonPageTabInfo &). Got : '%s'\n%s",typeid(Luna< wxRibbonArtProvider >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawTab(dc, wnd, tab);

		return 0;
	}

	// void wxRibbonArtProvider::DrawTabSeparator(wxDC & dc, wxWindow * wnd, const wxRect & rect, double visibility)
	static int _bind_DrawTabSeparator(lua_State *L) {
		if (!_lg_typecheck_DrawTabSeparator(L)) {
			luaL_error(L, "luna typecheck failed in void wxRibbonArtProvider::DrawTabSeparator(wxDC & dc, wxWindow * wnd, const wxRect & rect, double visibility) function, expected prototype:\nvoid wxRibbonArtProvider::DrawTabSeparator(wxDC & dc, wxWindow * wnd, const wxRect & rect, double visibility)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxRibbonArtProvider::DrawTabSeparator function");
		}
		wxDC & dc=*dc_ptr;
		wxWindow* wnd=(Luna< wxObject >::checkSubType< wxWindow >(L,3));
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,4));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxRibbonArtProvider::DrawTabSeparator function");
		}
		const wxRect & rect=*rect_ptr;
		double visibility=(double)lua_tonumber(L,5);

		wxRibbonArtProvider* self=(Luna< wxRibbonArtProvider >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRibbonArtProvider::DrawTabSeparator(wxDC &, wxWindow *, const wxRect &, double). Got : '%s'\n%s",typeid(Luna< wxRibbonArtProvider >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawTabSeparator(dc, wnd, rect, visibility);

		return 0;
	}

	// void wxRibbonArtProvider::DrawPageBackground(wxDC & dc, wxWindow * wnd, const wxRect & rect)
	static int _bind_DrawPageBackground(lua_State *L) {
		if (!_lg_typecheck_DrawPageBackground(L)) {
			luaL_error(L, "luna typecheck failed in void wxRibbonArtProvider::DrawPageBackground(wxDC & dc, wxWindow * wnd, const wxRect & rect) function, expected prototype:\nvoid wxRibbonArtProvider::DrawPageBackground(wxDC & dc, wxWindow * wnd, const wxRect & rect)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxRibbonArtProvider::DrawPageBackground function");
		}
		wxDC & dc=*dc_ptr;
		wxWindow* wnd=(Luna< wxObject >::checkSubType< wxWindow >(L,3));
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,4));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxRibbonArtProvider::DrawPageBackground function");
		}
		const wxRect & rect=*rect_ptr;

		wxRibbonArtProvider* self=(Luna< wxRibbonArtProvider >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRibbonArtProvider::DrawPageBackground(wxDC &, wxWindow *, const wxRect &). Got : '%s'\n%s",typeid(Luna< wxRibbonArtProvider >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawPageBackground(dc, wnd, rect);

		return 0;
	}

	// void wxRibbonArtProvider::DrawScrollButton(wxDC & dc, wxWindow * wnd, const wxRect & rect, long style)
	static int _bind_DrawScrollButton(lua_State *L) {
		if (!_lg_typecheck_DrawScrollButton(L)) {
			luaL_error(L, "luna typecheck failed in void wxRibbonArtProvider::DrawScrollButton(wxDC & dc, wxWindow * wnd, const wxRect & rect, long style) function, expected prototype:\nvoid wxRibbonArtProvider::DrawScrollButton(wxDC & dc, wxWindow * wnd, const wxRect & rect, long style)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxRibbonArtProvider::DrawScrollButton function");
		}
		wxDC & dc=*dc_ptr;
		wxWindow* wnd=(Luna< wxObject >::checkSubType< wxWindow >(L,3));
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,4));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxRibbonArtProvider::DrawScrollButton function");
		}
		const wxRect & rect=*rect_ptr;
		long style=(long)lua_tonumber(L,5);

		wxRibbonArtProvider* self=(Luna< wxRibbonArtProvider >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRibbonArtProvider::DrawScrollButton(wxDC &, wxWindow *, const wxRect &, long). Got : '%s'\n%s",typeid(Luna< wxRibbonArtProvider >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawScrollButton(dc, wnd, rect, style);

		return 0;
	}

	// void wxRibbonArtProvider::DrawPanelBackground(wxDC & dc, wxRibbonPanel * wnd, const wxRect & rect)
	static int _bind_DrawPanelBackground(lua_State *L) {
		if (!_lg_typecheck_DrawPanelBackground(L)) {
			luaL_error(L, "luna typecheck failed in void wxRibbonArtProvider::DrawPanelBackground(wxDC & dc, wxRibbonPanel * wnd, const wxRect & rect) function, expected prototype:\nvoid wxRibbonArtProvider::DrawPanelBackground(wxDC & dc, wxRibbonPanel * wnd, const wxRect & rect)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxRibbonArtProvider::DrawPanelBackground function");
		}
		wxDC & dc=*dc_ptr;
		wxRibbonPanel* wnd=(Luna< wxObject >::checkSubType< wxRibbonPanel >(L,3));
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,4));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxRibbonArtProvider::DrawPanelBackground function");
		}
		const wxRect & rect=*rect_ptr;

		wxRibbonArtProvider* self=(Luna< wxRibbonArtProvider >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRibbonArtProvider::DrawPanelBackground(wxDC &, wxRibbonPanel *, const wxRect &). Got : '%s'\n%s",typeid(Luna< wxRibbonArtProvider >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawPanelBackground(dc, wnd, rect);

		return 0;
	}

	// void wxRibbonArtProvider::DrawGalleryBackground(wxDC & dc, wxRibbonGallery * wnd, const wxRect & rect)
	static int _bind_DrawGalleryBackground(lua_State *L) {
		if (!_lg_typecheck_DrawGalleryBackground(L)) {
			luaL_error(L, "luna typecheck failed in void wxRibbonArtProvider::DrawGalleryBackground(wxDC & dc, wxRibbonGallery * wnd, const wxRect & rect) function, expected prototype:\nvoid wxRibbonArtProvider::DrawGalleryBackground(wxDC & dc, wxRibbonGallery * wnd, const wxRect & rect)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxRibbonArtProvider::DrawGalleryBackground function");
		}
		wxDC & dc=*dc_ptr;
		wxRibbonGallery* wnd=(Luna< wxObject >::checkSubType< wxRibbonGallery >(L,3));
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,4));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxRibbonArtProvider::DrawGalleryBackground function");
		}
		const wxRect & rect=*rect_ptr;

		wxRibbonArtProvider* self=(Luna< wxRibbonArtProvider >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRibbonArtProvider::DrawGalleryBackground(wxDC &, wxRibbonGallery *, const wxRect &). Got : '%s'\n%s",typeid(Luna< wxRibbonArtProvider >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawGalleryBackground(dc, wnd, rect);

		return 0;
	}

	// void wxRibbonArtProvider::DrawGalleryItemBackground(wxDC & dc, wxRibbonGallery * wnd, const wxRect & rect, wxRibbonGalleryItem * item)
	static int _bind_DrawGalleryItemBackground(lua_State *L) {
		if (!_lg_typecheck_DrawGalleryItemBackground(L)) {
			luaL_error(L, "luna typecheck failed in void wxRibbonArtProvider::DrawGalleryItemBackground(wxDC & dc, wxRibbonGallery * wnd, const wxRect & rect, wxRibbonGalleryItem * item) function, expected prototype:\nvoid wxRibbonArtProvider::DrawGalleryItemBackground(wxDC & dc, wxRibbonGallery * wnd, const wxRect & rect, wxRibbonGalleryItem * item)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20234418\narg 4 ID = 56057674\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxRibbonArtProvider::DrawGalleryItemBackground function");
		}
		wxDC & dc=*dc_ptr;
		wxRibbonGallery* wnd=(Luna< wxObject >::checkSubType< wxRibbonGallery >(L,3));
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,4));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxRibbonArtProvider::DrawGalleryItemBackground function");
		}
		const wxRect & rect=*rect_ptr;
		wxRibbonGalleryItem* item=(Luna< wxRibbonGalleryItem >::check(L,5));

		wxRibbonArtProvider* self=(Luna< wxRibbonArtProvider >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRibbonArtProvider::DrawGalleryItemBackground(wxDC &, wxRibbonGallery *, const wxRect &, wxRibbonGalleryItem *). Got : '%s'\n%s",typeid(Luna< wxRibbonArtProvider >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawGalleryItemBackground(dc, wnd, rect, item);

		return 0;
	}

	// void wxRibbonArtProvider::DrawMinimisedPanel(wxDC & dc, wxRibbonPanel * wnd, const wxRect & rect, wxBitmap & bitmap)
	static int _bind_DrawMinimisedPanel(lua_State *L) {
		if (!_lg_typecheck_DrawMinimisedPanel(L)) {
			luaL_error(L, "luna typecheck failed in void wxRibbonArtProvider::DrawMinimisedPanel(wxDC & dc, wxRibbonPanel * wnd, const wxRect & rect, wxBitmap & bitmap) function, expected prototype:\nvoid wxRibbonArtProvider::DrawMinimisedPanel(wxDC & dc, wxRibbonPanel * wnd, const wxRect & rect, wxBitmap & bitmap)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20234418\narg 4 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxRibbonArtProvider::DrawMinimisedPanel function");
		}
		wxDC & dc=*dc_ptr;
		wxRibbonPanel* wnd=(Luna< wxObject >::checkSubType< wxRibbonPanel >(L,3));
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,4));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxRibbonArtProvider::DrawMinimisedPanel function");
		}
		const wxRect & rect=*rect_ptr;
		wxBitmap* bitmap_ptr=(Luna< wxObject >::checkSubType< wxBitmap >(L,5));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxRibbonArtProvider::DrawMinimisedPanel function");
		}
		wxBitmap & bitmap=*bitmap_ptr;

		wxRibbonArtProvider* self=(Luna< wxRibbonArtProvider >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRibbonArtProvider::DrawMinimisedPanel(wxDC &, wxRibbonPanel *, const wxRect &, wxBitmap &). Got : '%s'\n%s",typeid(Luna< wxRibbonArtProvider >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawMinimisedPanel(dc, wnd, rect, bitmap);

		return 0;
	}

	// void wxRibbonArtProvider::DrawButtonBarBackground(wxDC & dc, wxWindow * wnd, const wxRect & rect)
	static int _bind_DrawButtonBarBackground(lua_State *L) {
		if (!_lg_typecheck_DrawButtonBarBackground(L)) {
			luaL_error(L, "luna typecheck failed in void wxRibbonArtProvider::DrawButtonBarBackground(wxDC & dc, wxWindow * wnd, const wxRect & rect) function, expected prototype:\nvoid wxRibbonArtProvider::DrawButtonBarBackground(wxDC & dc, wxWindow * wnd, const wxRect & rect)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxRibbonArtProvider::DrawButtonBarBackground function");
		}
		wxDC & dc=*dc_ptr;
		wxWindow* wnd=(Luna< wxObject >::checkSubType< wxWindow >(L,3));
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,4));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxRibbonArtProvider::DrawButtonBarBackground function");
		}
		const wxRect & rect=*rect_ptr;

		wxRibbonArtProvider* self=(Luna< wxRibbonArtProvider >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRibbonArtProvider::DrawButtonBarBackground(wxDC &, wxWindow *, const wxRect &). Got : '%s'\n%s",typeid(Luna< wxRibbonArtProvider >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawButtonBarBackground(dc, wnd, rect);

		return 0;
	}

	// void wxRibbonArtProvider::DrawButtonBarButton(wxDC & dc, wxWindow * wnd, const wxRect & rect, wxRibbonButtonKind kind, long state, const wxString & label, const wxBitmap & bitmap_large, const wxBitmap & bitmap_small)
	static int _bind_DrawButtonBarButton(lua_State *L) {
		if (!_lg_typecheck_DrawButtonBarButton(L)) {
			luaL_error(L, "luna typecheck failed in void wxRibbonArtProvider::DrawButtonBarButton(wxDC & dc, wxWindow * wnd, const wxRect & rect, wxRibbonButtonKind kind, long state, const wxString & label, const wxBitmap & bitmap_large, const wxBitmap & bitmap_small) function, expected prototype:\nvoid wxRibbonArtProvider::DrawButtonBarButton(wxDC & dc, wxWindow * wnd, const wxRect & rect, wxRibbonButtonKind kind, long state, const wxString & label, const wxBitmap & bitmap_large, const wxBitmap & bitmap_small)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20234418\narg 6 ID = 88196105\narg 7 ID = 56813631\narg 8 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxRibbonArtProvider::DrawButtonBarButton function");
		}
		wxDC & dc=*dc_ptr;
		wxWindow* wnd=(Luna< wxObject >::checkSubType< wxWindow >(L,3));
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,4));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxRibbonArtProvider::DrawButtonBarButton function");
		}
		const wxRect & rect=*rect_ptr;
		wxRibbonButtonKind kind=(wxRibbonButtonKind)lua_tointeger(L,5);
		long state=(long)lua_tonumber(L,6);
		wxString label(lua_tostring(L,7),lua_objlen(L,7));
		const wxBitmap* bitmap_large_ptr=(Luna< wxObject >::checkSubType< wxBitmap >(L,8));
		if( !bitmap_large_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap_large in wxRibbonArtProvider::DrawButtonBarButton function");
		}
		const wxBitmap & bitmap_large=*bitmap_large_ptr;
		const wxBitmap* bitmap_small_ptr=(Luna< wxObject >::checkSubType< wxBitmap >(L,9));
		if( !bitmap_small_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap_small in wxRibbonArtProvider::DrawButtonBarButton function");
		}
		const wxBitmap & bitmap_small=*bitmap_small_ptr;

		wxRibbonArtProvider* self=(Luna< wxRibbonArtProvider >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRibbonArtProvider::DrawButtonBarButton(wxDC &, wxWindow *, const wxRect &, wxRibbonButtonKind, long, const wxString &, const wxBitmap &, const wxBitmap &). Got : '%s'\n%s",typeid(Luna< wxRibbonArtProvider >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawButtonBarButton(dc, wnd, rect, kind, state, label, bitmap_large, bitmap_small);

		return 0;
	}

	// void wxRibbonArtProvider::DrawToolBarBackground(wxDC & dc, wxWindow * wnd, const wxRect & rect)
	static int _bind_DrawToolBarBackground(lua_State *L) {
		if (!_lg_typecheck_DrawToolBarBackground(L)) {
			luaL_error(L, "luna typecheck failed in void wxRibbonArtProvider::DrawToolBarBackground(wxDC & dc, wxWindow * wnd, const wxRect & rect) function, expected prototype:\nvoid wxRibbonArtProvider::DrawToolBarBackground(wxDC & dc, wxWindow * wnd, const wxRect & rect)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxRibbonArtProvider::DrawToolBarBackground function");
		}
		wxDC & dc=*dc_ptr;
		wxWindow* wnd=(Luna< wxObject >::checkSubType< wxWindow >(L,3));
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,4));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxRibbonArtProvider::DrawToolBarBackground function");
		}
		const wxRect & rect=*rect_ptr;

		wxRibbonArtProvider* self=(Luna< wxRibbonArtProvider >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRibbonArtProvider::DrawToolBarBackground(wxDC &, wxWindow *, const wxRect &). Got : '%s'\n%s",typeid(Luna< wxRibbonArtProvider >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawToolBarBackground(dc, wnd, rect);

		return 0;
	}

	// void wxRibbonArtProvider::DrawToolGroupBackground(wxDC & dc, wxWindow * wnd, const wxRect & rect)
	static int _bind_DrawToolGroupBackground(lua_State *L) {
		if (!_lg_typecheck_DrawToolGroupBackground(L)) {
			luaL_error(L, "luna typecheck failed in void wxRibbonArtProvider::DrawToolGroupBackground(wxDC & dc, wxWindow * wnd, const wxRect & rect) function, expected prototype:\nvoid wxRibbonArtProvider::DrawToolGroupBackground(wxDC & dc, wxWindow * wnd, const wxRect & rect)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxRibbonArtProvider::DrawToolGroupBackground function");
		}
		wxDC & dc=*dc_ptr;
		wxWindow* wnd=(Luna< wxObject >::checkSubType< wxWindow >(L,3));
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,4));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxRibbonArtProvider::DrawToolGroupBackground function");
		}
		const wxRect & rect=*rect_ptr;

		wxRibbonArtProvider* self=(Luna< wxRibbonArtProvider >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRibbonArtProvider::DrawToolGroupBackground(wxDC &, wxWindow *, const wxRect &). Got : '%s'\n%s",typeid(Luna< wxRibbonArtProvider >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawToolGroupBackground(dc, wnd, rect);

		return 0;
	}

	// void wxRibbonArtProvider::DrawTool(wxDC & dc, wxWindow * wnd, const wxRect & rect, const wxBitmap & bitmap, wxRibbonButtonKind kind, long state)
	static int _bind_DrawTool(lua_State *L) {
		if (!_lg_typecheck_DrawTool(L)) {
			luaL_error(L, "luna typecheck failed in void wxRibbonArtProvider::DrawTool(wxDC & dc, wxWindow * wnd, const wxRect & rect, const wxBitmap & bitmap, wxRibbonButtonKind kind, long state) function, expected prototype:\nvoid wxRibbonArtProvider::DrawTool(wxDC & dc, wxWindow * wnd, const wxRect & rect, const wxBitmap & bitmap, wxRibbonButtonKind kind, long state)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20234418\narg 4 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxRibbonArtProvider::DrawTool function");
		}
		wxDC & dc=*dc_ptr;
		wxWindow* wnd=(Luna< wxObject >::checkSubType< wxWindow >(L,3));
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,4));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxRibbonArtProvider::DrawTool function");
		}
		const wxRect & rect=*rect_ptr;
		const wxBitmap* bitmap_ptr=(Luna< wxObject >::checkSubType< wxBitmap >(L,5));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxRibbonArtProvider::DrawTool function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;
		wxRibbonButtonKind kind=(wxRibbonButtonKind)lua_tointeger(L,6);
		long state=(long)lua_tonumber(L,7);

		wxRibbonArtProvider* self=(Luna< wxRibbonArtProvider >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRibbonArtProvider::DrawTool(wxDC &, wxWindow *, const wxRect &, const wxBitmap &, wxRibbonButtonKind, long). Got : '%s'\n%s",typeid(Luna< wxRibbonArtProvider >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawTool(dc, wnd, rect, bitmap, kind, state);

		return 0;
	}

	// void wxRibbonArtProvider::GetBarTabWidth(wxDC & dc, wxWindow * wnd, const wxString & label, const wxBitmap & bitmap, int * ideal, int * small_begin_need_separator, int * small_must_have_separator, int * minimum)
	static int _bind_GetBarTabWidth(lua_State *L) {
		if (!_lg_typecheck_GetBarTabWidth(L)) {
			luaL_error(L, "luna typecheck failed in void wxRibbonArtProvider::GetBarTabWidth(wxDC & dc, wxWindow * wnd, const wxString & label, const wxBitmap & bitmap, int * ideal, int * small_begin_need_separator, int * small_must_have_separator, int * minimum) function, expected prototype:\nvoid wxRibbonArtProvider::GetBarTabWidth(wxDC & dc, wxWindow * wnd, const wxString & label, const wxBitmap & bitmap, int * ideal, int * small_begin_need_separator, int * small_must_have_separator, int * minimum)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 88196105\narg 4 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxRibbonArtProvider::GetBarTabWidth function");
		}
		wxDC & dc=*dc_ptr;
		wxWindow* wnd=(Luna< wxObject >::checkSubType< wxWindow >(L,3));
		wxString label(lua_tostring(L,4),lua_objlen(L,4));
		const wxBitmap* bitmap_ptr=(Luna< wxObject >::checkSubType< wxBitmap >(L,5));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxRibbonArtProvider::GetBarTabWidth function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;
		int* ideal=(int*)Luna< void >::check(L,6);
		int* small_begin_need_separator=(int*)Luna< void >::check(L,7);
		int* small_must_have_separator=(int*)Luna< void >::check(L,8);
		int* minimum=(int*)Luna< void >::check(L,9);

		wxRibbonArtProvider* self=(Luna< wxRibbonArtProvider >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRibbonArtProvider::GetBarTabWidth(wxDC &, wxWindow *, const wxString &, const wxBitmap &, int *, int *, int *, int *). Got : '%s'\n%s",typeid(Luna< wxRibbonArtProvider >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GetBarTabWidth(dc, wnd, label, bitmap, ideal, small_begin_need_separator, small_must_have_separator, minimum);

		return 0;
	}

	// int wxRibbonArtProvider::GetTabCtrlHeight(wxDC & dc, wxWindow * wnd, const wxRibbonPageTabInfoArray & pages)
	static int _bind_GetTabCtrlHeight(lua_State *L) {
		if (!_lg_typecheck_GetTabCtrlHeight(L)) {
			luaL_error(L, "luna typecheck failed in int wxRibbonArtProvider::GetTabCtrlHeight(wxDC & dc, wxWindow * wnd, const wxRibbonPageTabInfoArray & pages) function, expected prototype:\nint wxRibbonArtProvider::GetTabCtrlHeight(wxDC & dc, wxWindow * wnd, const wxRibbonPageTabInfoArray & pages)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 76085772\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxRibbonArtProvider::GetTabCtrlHeight function");
		}
		wxDC & dc=*dc_ptr;
		wxWindow* wnd=(Luna< wxObject >::checkSubType< wxWindow >(L,3));
		const wxRibbonPageTabInfoArray* pages_ptr=(Luna< wxRibbonPageTabInfoArray >::check(L,4));
		if( !pages_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pages in wxRibbonArtProvider::GetTabCtrlHeight function");
		}
		const wxRibbonPageTabInfoArray & pages=*pages_ptr;

		wxRibbonArtProvider* self=(Luna< wxRibbonArtProvider >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxRibbonArtProvider::GetTabCtrlHeight(wxDC &, wxWindow *, const wxRibbonPageTabInfoArray &). Got : '%s'\n%s",typeid(Luna< wxRibbonArtProvider >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetTabCtrlHeight(dc, wnd, pages);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxSize wxRibbonArtProvider::GetScrollButtonMinimumSize(wxDC & dc, wxWindow * wnd, long style)
	static int _bind_GetScrollButtonMinimumSize(lua_State *L) {
		if (!_lg_typecheck_GetScrollButtonMinimumSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxRibbonArtProvider::GetScrollButtonMinimumSize(wxDC & dc, wxWindow * wnd, long style) function, expected prototype:\nwxSize wxRibbonArtProvider::GetScrollButtonMinimumSize(wxDC & dc, wxWindow * wnd, long style)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxRibbonArtProvider::GetScrollButtonMinimumSize function");
		}
		wxDC & dc=*dc_ptr;
		wxWindow* wnd=(Luna< wxObject >::checkSubType< wxWindow >(L,3));
		long style=(long)lua_tonumber(L,4);

		wxRibbonArtProvider* self=(Luna< wxRibbonArtProvider >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxRibbonArtProvider::GetScrollButtonMinimumSize(wxDC &, wxWindow *, long). Got : '%s'\n%s",typeid(Luna< wxRibbonArtProvider >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->GetScrollButtonMinimumSize(dc, wnd, style);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxRibbonArtProvider::GetPanelSize(wxDC & dc, const wxRibbonPanel * wnd, wxSize client_size, wxPoint * client_offset)
	static int _bind_GetPanelSize(lua_State *L) {
		if (!_lg_typecheck_GetPanelSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxRibbonArtProvider::GetPanelSize(wxDC & dc, const wxRibbonPanel * wnd, wxSize client_size, wxPoint * client_offset) function, expected prototype:\nwxSize wxRibbonArtProvider::GetPanelSize(wxDC & dc, const wxRibbonPanel * wnd, wxSize client_size, wxPoint * client_offset)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20268751\narg 4 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxRibbonArtProvider::GetPanelSize function");
		}
		wxDC & dc=*dc_ptr;
		const wxRibbonPanel* wnd=(Luna< wxObject >::checkSubType< wxRibbonPanel >(L,3));
		wxSize* client_size_ptr=(Luna< wxSize >::check(L,4));
		if( !client_size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg client_size in wxRibbonArtProvider::GetPanelSize function");
		}
		wxSize client_size=*client_size_ptr;
		wxPoint* client_offset=(Luna< wxPoint >::check(L,5));

		wxRibbonArtProvider* self=(Luna< wxRibbonArtProvider >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxRibbonArtProvider::GetPanelSize(wxDC &, const wxRibbonPanel *, wxSize, wxPoint *). Got : '%s'\n%s",typeid(Luna< wxRibbonArtProvider >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->GetPanelSize(dc, wnd, client_size, client_offset);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxRibbonArtProvider::GetPanelClientSize(wxDC & dc, const wxRibbonPanel * wnd, wxSize size, wxPoint * client_offset)
	static int _bind_GetPanelClientSize(lua_State *L) {
		if (!_lg_typecheck_GetPanelClientSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxRibbonArtProvider::GetPanelClientSize(wxDC & dc, const wxRibbonPanel * wnd, wxSize size, wxPoint * client_offset) function, expected prototype:\nwxSize wxRibbonArtProvider::GetPanelClientSize(wxDC & dc, const wxRibbonPanel * wnd, wxSize size, wxPoint * client_offset)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20268751\narg 4 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxRibbonArtProvider::GetPanelClientSize function");
		}
		wxDC & dc=*dc_ptr;
		const wxRibbonPanel* wnd=(Luna< wxObject >::checkSubType< wxRibbonPanel >(L,3));
		wxSize* size_ptr=(Luna< wxSize >::check(L,4));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxRibbonArtProvider::GetPanelClientSize function");
		}
		wxSize size=*size_ptr;
		wxPoint* client_offset=(Luna< wxPoint >::check(L,5));

		wxRibbonArtProvider* self=(Luna< wxRibbonArtProvider >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxRibbonArtProvider::GetPanelClientSize(wxDC &, const wxRibbonPanel *, wxSize, wxPoint *). Got : '%s'\n%s",typeid(Luna< wxRibbonArtProvider >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->GetPanelClientSize(dc, wnd, size, client_offset);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxRibbonArtProvider::GetGallerySize(wxDC & dc, const wxRibbonGallery * wnd, wxSize client_size)
	static int _bind_GetGallerySize(lua_State *L) {
		if (!_lg_typecheck_GetGallerySize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxRibbonArtProvider::GetGallerySize(wxDC & dc, const wxRibbonGallery * wnd, wxSize client_size) function, expected prototype:\nwxSize wxRibbonArtProvider::GetGallerySize(wxDC & dc, const wxRibbonGallery * wnd, wxSize client_size)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxRibbonArtProvider::GetGallerySize function");
		}
		wxDC & dc=*dc_ptr;
		const wxRibbonGallery* wnd=(Luna< wxObject >::checkSubType< wxRibbonGallery >(L,3));
		wxSize* client_size_ptr=(Luna< wxSize >::check(L,4));
		if( !client_size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg client_size in wxRibbonArtProvider::GetGallerySize function");
		}
		wxSize client_size=*client_size_ptr;

		wxRibbonArtProvider* self=(Luna< wxRibbonArtProvider >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxRibbonArtProvider::GetGallerySize(wxDC &, const wxRibbonGallery *, wxSize). Got : '%s'\n%s",typeid(Luna< wxRibbonArtProvider >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->GetGallerySize(dc, wnd, client_size);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxRibbonArtProvider::GetGalleryClientSize(wxDC & dc, const wxRibbonGallery * wnd, wxSize size, wxPoint * client_offset, wxRect * scroll_up_button, wxRect * scroll_down_button, wxRect * extension_button)
	static int _bind_GetGalleryClientSize(lua_State *L) {
		if (!_lg_typecheck_GetGalleryClientSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxRibbonArtProvider::GetGalleryClientSize(wxDC & dc, const wxRibbonGallery * wnd, wxSize size, wxPoint * client_offset, wxRect * scroll_up_button, wxRect * scroll_down_button, wxRect * extension_button) function, expected prototype:\nwxSize wxRibbonArtProvider::GetGalleryClientSize(wxDC & dc, const wxRibbonGallery * wnd, wxSize size, wxPoint * client_offset, wxRect * scroll_up_button, wxRect * scroll_down_button, wxRect * extension_button)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20268751\narg 4 ID = 25723480\narg 5 ID = 20234418\narg 6 ID = 20234418\narg 7 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxRibbonArtProvider::GetGalleryClientSize function");
		}
		wxDC & dc=*dc_ptr;
		const wxRibbonGallery* wnd=(Luna< wxObject >::checkSubType< wxRibbonGallery >(L,3));
		wxSize* size_ptr=(Luna< wxSize >::check(L,4));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxRibbonArtProvider::GetGalleryClientSize function");
		}
		wxSize size=*size_ptr;
		wxPoint* client_offset=(Luna< wxPoint >::check(L,5));
		wxRect* scroll_up_button=(Luna< wxRect >::check(L,6));
		wxRect* scroll_down_button=(Luna< wxRect >::check(L,7));
		wxRect* extension_button=(Luna< wxRect >::check(L,8));

		wxRibbonArtProvider* self=(Luna< wxRibbonArtProvider >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxRibbonArtProvider::GetGalleryClientSize(wxDC &, const wxRibbonGallery *, wxSize, wxPoint *, wxRect *, wxRect *, wxRect *). Got : '%s'\n%s",typeid(Luna< wxRibbonArtProvider >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->GetGalleryClientSize(dc, wnd, size, client_offset, scroll_up_button, scroll_down_button, extension_button);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxRect wxRibbonArtProvider::GetPageBackgroundRedrawArea(wxDC & dc, const wxRibbonPage * wnd, wxSize page_old_size, wxSize page_new_size)
	static int _bind_GetPageBackgroundRedrawArea(lua_State *L) {
		if (!_lg_typecheck_GetPageBackgroundRedrawArea(L)) {
			luaL_error(L, "luna typecheck failed in wxRect wxRibbonArtProvider::GetPageBackgroundRedrawArea(wxDC & dc, const wxRibbonPage * wnd, wxSize page_old_size, wxSize page_new_size) function, expected prototype:\nwxRect wxRibbonArtProvider::GetPageBackgroundRedrawArea(wxDC & dc, const wxRibbonPage * wnd, wxSize page_old_size, wxSize page_new_size)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20268751\narg 4 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxRibbonArtProvider::GetPageBackgroundRedrawArea function");
		}
		wxDC & dc=*dc_ptr;
		const wxRibbonPage* wnd=(Luna< wxObject >::checkSubType< wxRibbonPage >(L,3));
		wxSize* page_old_size_ptr=(Luna< wxSize >::check(L,4));
		if( !page_old_size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg page_old_size in wxRibbonArtProvider::GetPageBackgroundRedrawArea function");
		}
		wxSize page_old_size=*page_old_size_ptr;
		wxSize* page_new_size_ptr=(Luna< wxSize >::check(L,5));
		if( !page_new_size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg page_new_size in wxRibbonArtProvider::GetPageBackgroundRedrawArea function");
		}
		wxSize page_new_size=*page_new_size_ptr;

		wxRibbonArtProvider* self=(Luna< wxRibbonArtProvider >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxRect wxRibbonArtProvider::GetPageBackgroundRedrawArea(wxDC &, const wxRibbonPage *, wxSize, wxSize). Got : '%s'\n%s",typeid(Luna< wxRibbonArtProvider >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxRect stack_lret = self->GetPageBackgroundRedrawArea(dc, wnd, page_old_size, page_new_size);
		wxRect* lret = new wxRect(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRect >::push(L,lret,true);

		return 1;
	}

	// bool wxRibbonArtProvider::GetButtonBarButtonSize(wxDC & dc, wxWindow * wnd, wxRibbonButtonKind kind, wxRibbonButtonBarButtonState size, const wxString & label, wxSize bitmap_size_large, wxSize bitmap_size_small, wxSize * button_size, wxRect * normal_region, wxRect * dropdown_region)
	static int _bind_GetButtonBarButtonSize(lua_State *L) {
		if (!_lg_typecheck_GetButtonBarButtonSize(L)) {
			luaL_error(L, "luna typecheck failed in bool wxRibbonArtProvider::GetButtonBarButtonSize(wxDC & dc, wxWindow * wnd, wxRibbonButtonKind kind, wxRibbonButtonBarButtonState size, const wxString & label, wxSize bitmap_size_large, wxSize bitmap_size_small, wxSize * button_size, wxRect * normal_region, wxRect * dropdown_region) function, expected prototype:\nbool wxRibbonArtProvider::GetButtonBarButtonSize(wxDC & dc, wxWindow * wnd, wxRibbonButtonKind kind, wxRibbonButtonBarButtonState size, const wxString & label, wxSize bitmap_size_large, wxSize bitmap_size_small, wxSize * button_size, wxRect * normal_region, wxRect * dropdown_region)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 5 ID = 88196105\narg 6 ID = 20268751\narg 7 ID = 20268751\narg 8 ID = 20268751\narg 9 ID = 20234418\narg 10 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxRibbonArtProvider::GetButtonBarButtonSize function");
		}
		wxDC & dc=*dc_ptr;
		wxWindow* wnd=(Luna< wxObject >::checkSubType< wxWindow >(L,3));
		wxRibbonButtonKind kind=(wxRibbonButtonKind)lua_tointeger(L,4);
		wxRibbonButtonBarButtonState size=(wxRibbonButtonBarButtonState)lua_tointeger(L,5);
		wxString label(lua_tostring(L,6),lua_objlen(L,6));
		wxSize* bitmap_size_large_ptr=(Luna< wxSize >::check(L,7));
		if( !bitmap_size_large_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap_size_large in wxRibbonArtProvider::GetButtonBarButtonSize function");
		}
		wxSize bitmap_size_large=*bitmap_size_large_ptr;
		wxSize* bitmap_size_small_ptr=(Luna< wxSize >::check(L,8));
		if( !bitmap_size_small_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap_size_small in wxRibbonArtProvider::GetButtonBarButtonSize function");
		}
		wxSize bitmap_size_small=*bitmap_size_small_ptr;
		wxSize* button_size=(Luna< wxSize >::check(L,9));
		wxRect* normal_region=(Luna< wxRect >::check(L,10));
		wxRect* dropdown_region=(Luna< wxRect >::check(L,11));

		wxRibbonArtProvider* self=(Luna< wxRibbonArtProvider >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxRibbonArtProvider::GetButtonBarButtonSize(wxDC &, wxWindow *, wxRibbonButtonKind, wxRibbonButtonBarButtonState, const wxString &, wxSize, wxSize, wxSize *, wxRect *, wxRect *). Got : '%s'\n%s",typeid(Luna< wxRibbonArtProvider >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GetButtonBarButtonSize(dc, wnd, kind, size, label, bitmap_size_large, bitmap_size_small, button_size, normal_region, dropdown_region);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxSize wxRibbonArtProvider::GetMinimisedPanelMinimumSize(wxDC & dc, const wxRibbonPanel * wnd, wxSize * desired_bitmap_size, wxDirection * expanded_panel_direction)
	static int _bind_GetMinimisedPanelMinimumSize(lua_State *L) {
		if (!_lg_typecheck_GetMinimisedPanelMinimumSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxRibbonArtProvider::GetMinimisedPanelMinimumSize(wxDC & dc, const wxRibbonPanel * wnd, wxSize * desired_bitmap_size, wxDirection * expanded_panel_direction) function, expected prototype:\nwxSize wxRibbonArtProvider::GetMinimisedPanelMinimumSize(wxDC & dc, const wxRibbonPanel * wnd, wxSize * desired_bitmap_size, wxDirection * expanded_panel_direction)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxRibbonArtProvider::GetMinimisedPanelMinimumSize function");
		}
		wxDC & dc=*dc_ptr;
		const wxRibbonPanel* wnd=(Luna< wxObject >::checkSubType< wxRibbonPanel >(L,3));
		wxSize* desired_bitmap_size=(Luna< wxSize >::check(L,4));
		wxDirection* expanded_panel_direction=(wxDirection*)Luna< void >::check(L,5);

		wxRibbonArtProvider* self=(Luna< wxRibbonArtProvider >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxRibbonArtProvider::GetMinimisedPanelMinimumSize(wxDC &, const wxRibbonPanel *, wxSize *, wxDirection *). Got : '%s'\n%s",typeid(Luna< wxRibbonArtProvider >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->GetMinimisedPanelMinimumSize(dc, wnd, desired_bitmap_size, expanded_panel_direction);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxRibbonArtProvider::GetToolSize(wxDC & dc, wxWindow * wnd, wxSize bitmap_size, wxRibbonButtonKind kind, bool is_first, bool is_last, wxRect * dropdown_region)
	static int _bind_GetToolSize(lua_State *L) {
		if (!_lg_typecheck_GetToolSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxRibbonArtProvider::GetToolSize(wxDC & dc, wxWindow * wnd, wxSize bitmap_size, wxRibbonButtonKind kind, bool is_first, bool is_last, wxRect * dropdown_region) function, expected prototype:\nwxSize wxRibbonArtProvider::GetToolSize(wxDC & dc, wxWindow * wnd, wxSize bitmap_size, wxRibbonButtonKind kind, bool is_first, bool is_last, wxRect * dropdown_region)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20268751\narg 7 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxRibbonArtProvider::GetToolSize function");
		}
		wxDC & dc=*dc_ptr;
		wxWindow* wnd=(Luna< wxObject >::checkSubType< wxWindow >(L,3));
		wxSize* bitmap_size_ptr=(Luna< wxSize >::check(L,4));
		if( !bitmap_size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap_size in wxRibbonArtProvider::GetToolSize function");
		}
		wxSize bitmap_size=*bitmap_size_ptr;
		wxRibbonButtonKind kind=(wxRibbonButtonKind)lua_tointeger(L,5);
		bool is_first=(bool)(lua_toboolean(L,6)==1);
		bool is_last=(bool)(lua_toboolean(L,7)==1);
		wxRect* dropdown_region=(Luna< wxRect >::check(L,8));

		wxRibbonArtProvider* self=(Luna< wxRibbonArtProvider >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxRibbonArtProvider::GetToolSize(wxDC &, wxWindow *, wxSize, wxRibbonButtonKind, bool, bool, wxRect *). Got : '%s'\n%s",typeid(Luna< wxRibbonArtProvider >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->GetToolSize(dc, wnd, bitmap_size, kind, is_first, is_last, dropdown_region);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

wxRibbonArtProvider* LunaTraits< wxRibbonArtProvider >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxRibbonArtProvider::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// wxRibbonArtProvider * wxRibbonArtProvider::Clone() const
	// void wxRibbonArtProvider::SetFlags(long flags)
	// long wxRibbonArtProvider::GetFlags() const
	// int wxRibbonArtProvider::GetMetric(int id) const
	// void wxRibbonArtProvider::SetMetric(int id, int new_val)
	// void wxRibbonArtProvider::SetFont(int id, const wxFont & font)
	// wxFont wxRibbonArtProvider::GetFont(int id) const
	// wxColour wxRibbonArtProvider::GetColour(int id) const
	// void wxRibbonArtProvider::SetColour(int id, const wxColour & colour)
	// void wxRibbonArtProvider::GetColourScheme(wxColour * primary, wxColour * secondary, wxColour * tertiary) const
	// void wxRibbonArtProvider::SetColourScheme(const wxColour & primary, const wxColour & secondary, const wxColour & tertiary)
	// void wxRibbonArtProvider::DrawTabCtrlBackground(wxDC & dc, wxWindow * wnd, const wxRect & rect)
	// void wxRibbonArtProvider::DrawTab(wxDC & dc, wxWindow * wnd, const wxRibbonPageTabInfo & tab)
	// void wxRibbonArtProvider::DrawTabSeparator(wxDC & dc, wxWindow * wnd, const wxRect & rect, double visibility)
	// void wxRibbonArtProvider::DrawPageBackground(wxDC & dc, wxWindow * wnd, const wxRect & rect)
	// void wxRibbonArtProvider::DrawScrollButton(wxDC & dc, wxWindow * wnd, const wxRect & rect, long style)
	// void wxRibbonArtProvider::DrawPanelBackground(wxDC & dc, wxRibbonPanel * wnd, const wxRect & rect)
	// void wxRibbonArtProvider::DrawGalleryBackground(wxDC & dc, wxRibbonGallery * wnd, const wxRect & rect)
	// void wxRibbonArtProvider::DrawGalleryItemBackground(wxDC & dc, wxRibbonGallery * wnd, const wxRect & rect, wxRibbonGalleryItem * item)
	// void wxRibbonArtProvider::DrawMinimisedPanel(wxDC & dc, wxRibbonPanel * wnd, const wxRect & rect, wxBitmap & bitmap)
	// void wxRibbonArtProvider::DrawButtonBarBackground(wxDC & dc, wxWindow * wnd, const wxRect & rect)
	// void wxRibbonArtProvider::DrawButtonBarButton(wxDC & dc, wxWindow * wnd, const wxRect & rect, wxRibbonButtonKind kind, long state, const wxString & label, const wxBitmap & bitmap_large, const wxBitmap & bitmap_small)
	// void wxRibbonArtProvider::DrawToolBarBackground(wxDC & dc, wxWindow * wnd, const wxRect & rect)
	// void wxRibbonArtProvider::DrawToolGroupBackground(wxDC & dc, wxWindow * wnd, const wxRect & rect)
	// void wxRibbonArtProvider::DrawTool(wxDC & dc, wxWindow * wnd, const wxRect & rect, const wxBitmap & bitmap, wxRibbonButtonKind kind, long state)
	// void wxRibbonArtProvider::GetBarTabWidth(wxDC & dc, wxWindow * wnd, const wxString & label, const wxBitmap & bitmap, int * ideal, int * small_begin_need_separator, int * small_must_have_separator, int * minimum)
	// int wxRibbonArtProvider::GetTabCtrlHeight(wxDC & dc, wxWindow * wnd, const wxRibbonPageTabInfoArray & pages)
	// wxSize wxRibbonArtProvider::GetScrollButtonMinimumSize(wxDC & dc, wxWindow * wnd, long style)
	// wxSize wxRibbonArtProvider::GetPanelSize(wxDC & dc, const wxRibbonPanel * wnd, wxSize client_size, wxPoint * client_offset)
	// wxSize wxRibbonArtProvider::GetPanelClientSize(wxDC & dc, const wxRibbonPanel * wnd, wxSize size, wxPoint * client_offset)
	// wxSize wxRibbonArtProvider::GetGallerySize(wxDC & dc, const wxRibbonGallery * wnd, wxSize client_size)
	// wxSize wxRibbonArtProvider::GetGalleryClientSize(wxDC & dc, const wxRibbonGallery * wnd, wxSize size, wxPoint * client_offset, wxRect * scroll_up_button, wxRect * scroll_down_button, wxRect * extension_button)
	// wxRect wxRibbonArtProvider::GetPageBackgroundRedrawArea(wxDC & dc, const wxRibbonPage * wnd, wxSize page_old_size, wxSize page_new_size)
	// bool wxRibbonArtProvider::GetButtonBarButtonSize(wxDC & dc, wxWindow * wnd, wxRibbonButtonKind kind, wxRibbonButtonBarButtonState size, const wxString & label, wxSize bitmap_size_large, wxSize bitmap_size_small, wxSize * button_size, wxRect * normal_region, wxRect * dropdown_region)
	// wxSize wxRibbonArtProvider::GetMinimisedPanelMinimumSize(wxDC & dc, const wxRibbonPanel * wnd, wxSize * desired_bitmap_size, wxDirection * expanded_panel_direction)
	// wxSize wxRibbonArtProvider::GetToolSize(wxDC & dc, wxWindow * wnd, wxSize bitmap_size, wxRibbonButtonKind kind, bool is_first, bool is_last, wxRect * dropdown_region)
}

void LunaTraits< wxRibbonArtProvider >::_bind_dtor(wxRibbonArtProvider* obj) {
	delete obj;
}

const char LunaTraits< wxRibbonArtProvider >::className[] = "wxRibbonArtProvider";
const char LunaTraits< wxRibbonArtProvider >::fullName[] = "wxRibbonArtProvider";
const char LunaTraits< wxRibbonArtProvider >::moduleName[] = "wx";
const char* LunaTraits< wxRibbonArtProvider >::parents[] = {0};
const int LunaTraits< wxRibbonArtProvider >::hash = 48201749;
const int LunaTraits< wxRibbonArtProvider >::uniqueIDs[] = {48201749,0};

luna_RegType LunaTraits< wxRibbonArtProvider >::methods[] = {
	{"Clone", &luna_wrapper_wxRibbonArtProvider::_bind_Clone},
	{"SetFlags", &luna_wrapper_wxRibbonArtProvider::_bind_SetFlags},
	{"GetFlags", &luna_wrapper_wxRibbonArtProvider::_bind_GetFlags},
	{"GetMetric", &luna_wrapper_wxRibbonArtProvider::_bind_GetMetric},
	{"SetMetric", &luna_wrapper_wxRibbonArtProvider::_bind_SetMetric},
	{"SetFont", &luna_wrapper_wxRibbonArtProvider::_bind_SetFont},
	{"GetFont", &luna_wrapper_wxRibbonArtProvider::_bind_GetFont},
	{"GetColour", &luna_wrapper_wxRibbonArtProvider::_bind_GetColour},
	{"SetColour", &luna_wrapper_wxRibbonArtProvider::_bind_SetColour},
	{"GetColor", &luna_wrapper_wxRibbonArtProvider::_bind_GetColor},
	{"SetColor", &luna_wrapper_wxRibbonArtProvider::_bind_SetColor},
	{"GetColourScheme", &luna_wrapper_wxRibbonArtProvider::_bind_GetColourScheme},
	{"SetColourScheme", &luna_wrapper_wxRibbonArtProvider::_bind_SetColourScheme},
	{"DrawTabCtrlBackground", &luna_wrapper_wxRibbonArtProvider::_bind_DrawTabCtrlBackground},
	{"DrawTab", &luna_wrapper_wxRibbonArtProvider::_bind_DrawTab},
	{"DrawTabSeparator", &luna_wrapper_wxRibbonArtProvider::_bind_DrawTabSeparator},
	{"DrawPageBackground", &luna_wrapper_wxRibbonArtProvider::_bind_DrawPageBackground},
	{"DrawScrollButton", &luna_wrapper_wxRibbonArtProvider::_bind_DrawScrollButton},
	{"DrawPanelBackground", &luna_wrapper_wxRibbonArtProvider::_bind_DrawPanelBackground},
	{"DrawGalleryBackground", &luna_wrapper_wxRibbonArtProvider::_bind_DrawGalleryBackground},
	{"DrawGalleryItemBackground", &luna_wrapper_wxRibbonArtProvider::_bind_DrawGalleryItemBackground},
	{"DrawMinimisedPanel", &luna_wrapper_wxRibbonArtProvider::_bind_DrawMinimisedPanel},
	{"DrawButtonBarBackground", &luna_wrapper_wxRibbonArtProvider::_bind_DrawButtonBarBackground},
	{"DrawButtonBarButton", &luna_wrapper_wxRibbonArtProvider::_bind_DrawButtonBarButton},
	{"DrawToolBarBackground", &luna_wrapper_wxRibbonArtProvider::_bind_DrawToolBarBackground},
	{"DrawToolGroupBackground", &luna_wrapper_wxRibbonArtProvider::_bind_DrawToolGroupBackground},
	{"DrawTool", &luna_wrapper_wxRibbonArtProvider::_bind_DrawTool},
	{"GetBarTabWidth", &luna_wrapper_wxRibbonArtProvider::_bind_GetBarTabWidth},
	{"GetTabCtrlHeight", &luna_wrapper_wxRibbonArtProvider::_bind_GetTabCtrlHeight},
	{"GetScrollButtonMinimumSize", &luna_wrapper_wxRibbonArtProvider::_bind_GetScrollButtonMinimumSize},
	{"GetPanelSize", &luna_wrapper_wxRibbonArtProvider::_bind_GetPanelSize},
	{"GetPanelClientSize", &luna_wrapper_wxRibbonArtProvider::_bind_GetPanelClientSize},
	{"GetGallerySize", &luna_wrapper_wxRibbonArtProvider::_bind_GetGallerySize},
	{"GetGalleryClientSize", &luna_wrapper_wxRibbonArtProvider::_bind_GetGalleryClientSize},
	{"GetPageBackgroundRedrawArea", &luna_wrapper_wxRibbonArtProvider::_bind_GetPageBackgroundRedrawArea},
	{"GetButtonBarButtonSize", &luna_wrapper_wxRibbonArtProvider::_bind_GetButtonBarButtonSize},
	{"GetMinimisedPanelMinimumSize", &luna_wrapper_wxRibbonArtProvider::_bind_GetMinimisedPanelMinimumSize},
	{"GetToolSize", &luna_wrapper_wxRibbonArtProvider::_bind_GetToolSize},
	{"dynCast", &luna_wrapper_wxRibbonArtProvider::_bind_dynCast},
	{"__eq", &luna_wrapper_wxRibbonArtProvider::_bind___eq},
	{"fromVoid", &luna_wrapper_wxRibbonArtProvider::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxRibbonArtProvider::_bind_asVoid},
	{"getTable", &luna_wrapper_wxRibbonArtProvider::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxRibbonArtProvider >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxRibbonArtProvider >::enumValues[] = {
	{0,0}
};



#include <plug_common.h>

class luna_wrapper_wxAuiPaneInfo {
public:
	typedef Luna< wxAuiPaneInfo > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,42930508) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxAuiPaneInfo*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxAuiPaneInfo* rhs =(Luna< wxAuiPaneInfo >::check(L,2));
		wxAuiPaneInfo* self=(Luna< wxAuiPaneInfo >::check(L,1));
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

		wxAuiPaneInfo* self= (wxAuiPaneInfo*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxAuiPaneInfo >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,42930508) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxAuiPaneInfo >::check(L,1));
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

		wxAuiPaneInfo* self=(Luna< wxAuiPaneInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxAuiPaneInfo");
		
		return luna_dynamicCast(L,converters,"wxAuiPaneInfo",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,42930508) ) return false;
		if( (!(Luna< wxAuiPaneInfo >::check(L,1))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_BestSize_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		if( (!(Luna< wxSize >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_BestSize_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Bottom(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_BottomDockable(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Caption(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CaptionVisible(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Centre(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Center(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CentrePane(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CenterPane(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CloseButton(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DefaultPane(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_DestroyOnClose(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Direction(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Dock(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_DockFixed(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Dockable(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Fixed(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Float(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Floatable(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FloatingPosition_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		if( (!(Luna< wxPoint >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FloatingPosition_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FloatingSize_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		if( (!(Luna< wxSize >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FloatingSize_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Gripper(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GripperTop(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_HasBorder(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasCaption(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasCloseButton(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasFlag(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_HasGripper(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasGripperTop(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasMaximizeButton(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasMinimizeButton(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasPinButton(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Hide(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Icon(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsBottomDockable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsDockable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsDocked(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsFixed(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsFloatable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsFloating(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsLeftDockable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsMovable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsOk(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsResizable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsRightDockable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsShown(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsToolbar(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsTopDockable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Layer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Left(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_LeftDockable(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MaxSize_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		if( (!(Luna< wxSize >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MaxSize_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MaximizeButton(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MinSize_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		if( (!(Luna< wxSize >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MinSize_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MinimizeButton(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Movable(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Name(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_PaneBorder(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_PinButton(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Position(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Resizable(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Right(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_RightDockable(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Row(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SafeSet(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,42930508) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFlag(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Show(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ToolbarPane(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Top(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_TopDockable(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Window(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck_op_assign(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,42930508) ) return false;
		return true;
	}


	// Constructor binds:
	// wxAuiPaneInfo::wxAuiPaneInfo()
	static wxAuiPaneInfo* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxAuiPaneInfo::wxAuiPaneInfo() function, expected prototype:\nwxAuiPaneInfo::wxAuiPaneInfo()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxAuiPaneInfo();
	}

	// wxAuiPaneInfo::wxAuiPaneInfo(const wxAuiPaneInfo & c)
	static wxAuiPaneInfo* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxAuiPaneInfo::wxAuiPaneInfo(const wxAuiPaneInfo & c) function, expected prototype:\nwxAuiPaneInfo::wxAuiPaneInfo(const wxAuiPaneInfo & c)\nClass arguments details:\narg 1 ID = 42930508\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxAuiPaneInfo* c_ptr=(Luna< wxAuiPaneInfo >::check(L,1));
		if( !c_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg c in wxAuiPaneInfo::wxAuiPaneInfo function");
		}
		const wxAuiPaneInfo & c=*c_ptr;

		return new wxAuiPaneInfo(c);
	}

	// Overload binder for wxAuiPaneInfo::wxAuiPaneInfo
	static wxAuiPaneInfo* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxAuiPaneInfo, cannot match any of the overloads for function wxAuiPaneInfo:\n  wxAuiPaneInfo()\n  wxAuiPaneInfo(const wxAuiPaneInfo &)\n");
		return NULL;
	}


	// Function binds:
	// wxAuiPaneInfo & wxAuiPaneInfo::BestSize(const wxSize & size)
	static int _bind_BestSize_overload_1(lua_State *L) {
		if (!_lg_typecheck_BestSize_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxAuiPaneInfo & wxAuiPaneInfo::BestSize(const wxSize & size) function, expected prototype:\nwxAuiPaneInfo & wxAuiPaneInfo::BestSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxAuiPaneInfo::BestSize function");
		}
		const wxSize & size=*size_ptr;

		wxAuiPaneInfo* self=(Luna< wxAuiPaneInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxAuiPaneInfo & wxAuiPaneInfo::BestSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxAuiPaneInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxAuiPaneInfo* lret = &self->BestSize(size);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxAuiPaneInfo >::push(L,lret,false);

		return 1;
	}

	// wxAuiPaneInfo & wxAuiPaneInfo::BestSize(int x, int y)
	static int _bind_BestSize_overload_2(lua_State *L) {
		if (!_lg_typecheck_BestSize_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxAuiPaneInfo & wxAuiPaneInfo::BestSize(int x, int y) function, expected prototype:\nwxAuiPaneInfo & wxAuiPaneInfo::BestSize(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxAuiPaneInfo* self=(Luna< wxAuiPaneInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxAuiPaneInfo & wxAuiPaneInfo::BestSize(int, int). Got : '%s'\n%s",typeid(Luna< wxAuiPaneInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxAuiPaneInfo* lret = &self->BestSize(x, y);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxAuiPaneInfo >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxAuiPaneInfo::BestSize
	static int _bind_BestSize(lua_State *L) {
		if (_lg_typecheck_BestSize_overload_1(L)) return _bind_BestSize_overload_1(L);
		if (_lg_typecheck_BestSize_overload_2(L)) return _bind_BestSize_overload_2(L);

		luaL_error(L, "error in function BestSize, cannot match any of the overloads for function BestSize:\n  BestSize(const wxSize &)\n  BestSize(int, int)\n");
		return 0;
	}

	// wxAuiPaneInfo & wxAuiPaneInfo::Bottom()
	static int _bind_Bottom(lua_State *L) {
		if (!_lg_typecheck_Bottom(L)) {
			luaL_error(L, "luna typecheck failed in wxAuiPaneInfo & wxAuiPaneInfo::Bottom() function, expected prototype:\nwxAuiPaneInfo & wxAuiPaneInfo::Bottom()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiPaneInfo* self=(Luna< wxAuiPaneInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxAuiPaneInfo & wxAuiPaneInfo::Bottom(). Got : '%s'\n%s",typeid(Luna< wxAuiPaneInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxAuiPaneInfo* lret = &self->Bottom();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxAuiPaneInfo >::push(L,lret,false);

		return 1;
	}

	// wxAuiPaneInfo & wxAuiPaneInfo::BottomDockable(bool b = true)
	static int _bind_BottomDockable(lua_State *L) {
		if (!_lg_typecheck_BottomDockable(L)) {
			luaL_error(L, "luna typecheck failed in wxAuiPaneInfo & wxAuiPaneInfo::BottomDockable(bool b = true) function, expected prototype:\nwxAuiPaneInfo & wxAuiPaneInfo::BottomDockable(bool b = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool b=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxAuiPaneInfo* self=(Luna< wxAuiPaneInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxAuiPaneInfo & wxAuiPaneInfo::BottomDockable(bool). Got : '%s'\n%s",typeid(Luna< wxAuiPaneInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxAuiPaneInfo* lret = &self->BottomDockable(b);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxAuiPaneInfo >::push(L,lret,false);

		return 1;
	}

	// wxAuiPaneInfo & wxAuiPaneInfo::Caption(const wxString & c)
	static int _bind_Caption(lua_State *L) {
		if (!_lg_typecheck_Caption(L)) {
			luaL_error(L, "luna typecheck failed in wxAuiPaneInfo & wxAuiPaneInfo::Caption(const wxString & c) function, expected prototype:\nwxAuiPaneInfo & wxAuiPaneInfo::Caption(const wxString & c)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString c(lua_tostring(L,2),lua_objlen(L,2));

		wxAuiPaneInfo* self=(Luna< wxAuiPaneInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxAuiPaneInfo & wxAuiPaneInfo::Caption(const wxString &). Got : '%s'\n%s",typeid(Luna< wxAuiPaneInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxAuiPaneInfo* lret = &self->Caption(c);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxAuiPaneInfo >::push(L,lret,false);

		return 1;
	}

	// wxAuiPaneInfo & wxAuiPaneInfo::CaptionVisible(bool visible = true)
	static int _bind_CaptionVisible(lua_State *L) {
		if (!_lg_typecheck_CaptionVisible(L)) {
			luaL_error(L, "luna typecheck failed in wxAuiPaneInfo & wxAuiPaneInfo::CaptionVisible(bool visible = true) function, expected prototype:\nwxAuiPaneInfo & wxAuiPaneInfo::CaptionVisible(bool visible = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool visible=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxAuiPaneInfo* self=(Luna< wxAuiPaneInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxAuiPaneInfo & wxAuiPaneInfo::CaptionVisible(bool). Got : '%s'\n%s",typeid(Luna< wxAuiPaneInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxAuiPaneInfo* lret = &self->CaptionVisible(visible);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxAuiPaneInfo >::push(L,lret,false);

		return 1;
	}

	// wxAuiPaneInfo & wxAuiPaneInfo::Centre()
	static int _bind_Centre(lua_State *L) {
		if (!_lg_typecheck_Centre(L)) {
			luaL_error(L, "luna typecheck failed in wxAuiPaneInfo & wxAuiPaneInfo::Centre() function, expected prototype:\nwxAuiPaneInfo & wxAuiPaneInfo::Centre()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiPaneInfo* self=(Luna< wxAuiPaneInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxAuiPaneInfo & wxAuiPaneInfo::Centre(). Got : '%s'\n%s",typeid(Luna< wxAuiPaneInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxAuiPaneInfo* lret = &self->Centre();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxAuiPaneInfo >::push(L,lret,false);

		return 1;
	}

	// wxAuiPaneInfo & wxAuiPaneInfo::Center()
	static int _bind_Center(lua_State *L) {
		if (!_lg_typecheck_Center(L)) {
			luaL_error(L, "luna typecheck failed in wxAuiPaneInfo & wxAuiPaneInfo::Center() function, expected prototype:\nwxAuiPaneInfo & wxAuiPaneInfo::Center()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiPaneInfo* self=(Luna< wxAuiPaneInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxAuiPaneInfo & wxAuiPaneInfo::Center(). Got : '%s'\n%s",typeid(Luna< wxAuiPaneInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxAuiPaneInfo* lret = &self->Center();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxAuiPaneInfo >::push(L,lret,false);

		return 1;
	}

	// wxAuiPaneInfo & wxAuiPaneInfo::CentrePane()
	static int _bind_CentrePane(lua_State *L) {
		if (!_lg_typecheck_CentrePane(L)) {
			luaL_error(L, "luna typecheck failed in wxAuiPaneInfo & wxAuiPaneInfo::CentrePane() function, expected prototype:\nwxAuiPaneInfo & wxAuiPaneInfo::CentrePane()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiPaneInfo* self=(Luna< wxAuiPaneInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxAuiPaneInfo & wxAuiPaneInfo::CentrePane(). Got : '%s'\n%s",typeid(Luna< wxAuiPaneInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxAuiPaneInfo* lret = &self->CentrePane();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxAuiPaneInfo >::push(L,lret,false);

		return 1;
	}

	// wxAuiPaneInfo & wxAuiPaneInfo::CenterPane()
	static int _bind_CenterPane(lua_State *L) {
		if (!_lg_typecheck_CenterPane(L)) {
			luaL_error(L, "luna typecheck failed in wxAuiPaneInfo & wxAuiPaneInfo::CenterPane() function, expected prototype:\nwxAuiPaneInfo & wxAuiPaneInfo::CenterPane()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiPaneInfo* self=(Luna< wxAuiPaneInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxAuiPaneInfo & wxAuiPaneInfo::CenterPane(). Got : '%s'\n%s",typeid(Luna< wxAuiPaneInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxAuiPaneInfo* lret = &self->CenterPane();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxAuiPaneInfo >::push(L,lret,false);

		return 1;
	}

	// wxAuiPaneInfo & wxAuiPaneInfo::CloseButton(bool visible = true)
	static int _bind_CloseButton(lua_State *L) {
		if (!_lg_typecheck_CloseButton(L)) {
			luaL_error(L, "luna typecheck failed in wxAuiPaneInfo & wxAuiPaneInfo::CloseButton(bool visible = true) function, expected prototype:\nwxAuiPaneInfo & wxAuiPaneInfo::CloseButton(bool visible = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool visible=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxAuiPaneInfo* self=(Luna< wxAuiPaneInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxAuiPaneInfo & wxAuiPaneInfo::CloseButton(bool). Got : '%s'\n%s",typeid(Luna< wxAuiPaneInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxAuiPaneInfo* lret = &self->CloseButton(visible);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxAuiPaneInfo >::push(L,lret,false);

		return 1;
	}

	// wxAuiPaneInfo & wxAuiPaneInfo::DefaultPane()
	static int _bind_DefaultPane(lua_State *L) {
		if (!_lg_typecheck_DefaultPane(L)) {
			luaL_error(L, "luna typecheck failed in wxAuiPaneInfo & wxAuiPaneInfo::DefaultPane() function, expected prototype:\nwxAuiPaneInfo & wxAuiPaneInfo::DefaultPane()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiPaneInfo* self=(Luna< wxAuiPaneInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxAuiPaneInfo & wxAuiPaneInfo::DefaultPane(). Got : '%s'\n%s",typeid(Luna< wxAuiPaneInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxAuiPaneInfo* lret = &self->DefaultPane();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxAuiPaneInfo >::push(L,lret,false);

		return 1;
	}

	// wxAuiPaneInfo & wxAuiPaneInfo::DestroyOnClose(bool b = true)
	static int _bind_DestroyOnClose(lua_State *L) {
		if (!_lg_typecheck_DestroyOnClose(L)) {
			luaL_error(L, "luna typecheck failed in wxAuiPaneInfo & wxAuiPaneInfo::DestroyOnClose(bool b = true) function, expected prototype:\nwxAuiPaneInfo & wxAuiPaneInfo::DestroyOnClose(bool b = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool b=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxAuiPaneInfo* self=(Luna< wxAuiPaneInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxAuiPaneInfo & wxAuiPaneInfo::DestroyOnClose(bool). Got : '%s'\n%s",typeid(Luna< wxAuiPaneInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxAuiPaneInfo* lret = &self->DestroyOnClose(b);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxAuiPaneInfo >::push(L,lret,false);

		return 1;
	}

	// wxAuiPaneInfo & wxAuiPaneInfo::Direction(int direction)
	static int _bind_Direction(lua_State *L) {
		if (!_lg_typecheck_Direction(L)) {
			luaL_error(L, "luna typecheck failed in wxAuiPaneInfo & wxAuiPaneInfo::Direction(int direction) function, expected prototype:\nwxAuiPaneInfo & wxAuiPaneInfo::Direction(int direction)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int direction=(int)lua_tointeger(L,2);

		wxAuiPaneInfo* self=(Luna< wxAuiPaneInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxAuiPaneInfo & wxAuiPaneInfo::Direction(int). Got : '%s'\n%s",typeid(Luna< wxAuiPaneInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxAuiPaneInfo* lret = &self->Direction(direction);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxAuiPaneInfo >::push(L,lret,false);

		return 1;
	}

	// wxAuiPaneInfo & wxAuiPaneInfo::Dock()
	static int _bind_Dock(lua_State *L) {
		if (!_lg_typecheck_Dock(L)) {
			luaL_error(L, "luna typecheck failed in wxAuiPaneInfo & wxAuiPaneInfo::Dock() function, expected prototype:\nwxAuiPaneInfo & wxAuiPaneInfo::Dock()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiPaneInfo* self=(Luna< wxAuiPaneInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxAuiPaneInfo & wxAuiPaneInfo::Dock(). Got : '%s'\n%s",typeid(Luna< wxAuiPaneInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxAuiPaneInfo* lret = &self->Dock();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxAuiPaneInfo >::push(L,lret,false);

		return 1;
	}

	// wxAuiPaneInfo & wxAuiPaneInfo::DockFixed(bool b = true)
	static int _bind_DockFixed(lua_State *L) {
		if (!_lg_typecheck_DockFixed(L)) {
			luaL_error(L, "luna typecheck failed in wxAuiPaneInfo & wxAuiPaneInfo::DockFixed(bool b = true) function, expected prototype:\nwxAuiPaneInfo & wxAuiPaneInfo::DockFixed(bool b = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool b=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxAuiPaneInfo* self=(Luna< wxAuiPaneInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxAuiPaneInfo & wxAuiPaneInfo::DockFixed(bool). Got : '%s'\n%s",typeid(Luna< wxAuiPaneInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxAuiPaneInfo* lret = &self->DockFixed(b);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxAuiPaneInfo >::push(L,lret,false);

		return 1;
	}

	// wxAuiPaneInfo & wxAuiPaneInfo::Dockable(bool b = true)
	static int _bind_Dockable(lua_State *L) {
		if (!_lg_typecheck_Dockable(L)) {
			luaL_error(L, "luna typecheck failed in wxAuiPaneInfo & wxAuiPaneInfo::Dockable(bool b = true) function, expected prototype:\nwxAuiPaneInfo & wxAuiPaneInfo::Dockable(bool b = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool b=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxAuiPaneInfo* self=(Luna< wxAuiPaneInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxAuiPaneInfo & wxAuiPaneInfo::Dockable(bool). Got : '%s'\n%s",typeid(Luna< wxAuiPaneInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxAuiPaneInfo* lret = &self->Dockable(b);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxAuiPaneInfo >::push(L,lret,false);

		return 1;
	}

	// wxAuiPaneInfo & wxAuiPaneInfo::Fixed()
	static int _bind_Fixed(lua_State *L) {
		if (!_lg_typecheck_Fixed(L)) {
			luaL_error(L, "luna typecheck failed in wxAuiPaneInfo & wxAuiPaneInfo::Fixed() function, expected prototype:\nwxAuiPaneInfo & wxAuiPaneInfo::Fixed()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiPaneInfo* self=(Luna< wxAuiPaneInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxAuiPaneInfo & wxAuiPaneInfo::Fixed(). Got : '%s'\n%s",typeid(Luna< wxAuiPaneInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxAuiPaneInfo* lret = &self->Fixed();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxAuiPaneInfo >::push(L,lret,false);

		return 1;
	}

	// wxAuiPaneInfo & wxAuiPaneInfo::Float()
	static int _bind_Float(lua_State *L) {
		if (!_lg_typecheck_Float(L)) {
			luaL_error(L, "luna typecheck failed in wxAuiPaneInfo & wxAuiPaneInfo::Float() function, expected prototype:\nwxAuiPaneInfo & wxAuiPaneInfo::Float()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiPaneInfo* self=(Luna< wxAuiPaneInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxAuiPaneInfo & wxAuiPaneInfo::Float(). Got : '%s'\n%s",typeid(Luna< wxAuiPaneInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxAuiPaneInfo* lret = &self->Float();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxAuiPaneInfo >::push(L,lret,false);

		return 1;
	}

	// wxAuiPaneInfo & wxAuiPaneInfo::Floatable(bool b = true)
	static int _bind_Floatable(lua_State *L) {
		if (!_lg_typecheck_Floatable(L)) {
			luaL_error(L, "luna typecheck failed in wxAuiPaneInfo & wxAuiPaneInfo::Floatable(bool b = true) function, expected prototype:\nwxAuiPaneInfo & wxAuiPaneInfo::Floatable(bool b = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool b=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxAuiPaneInfo* self=(Luna< wxAuiPaneInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxAuiPaneInfo & wxAuiPaneInfo::Floatable(bool). Got : '%s'\n%s",typeid(Luna< wxAuiPaneInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxAuiPaneInfo* lret = &self->Floatable(b);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxAuiPaneInfo >::push(L,lret,false);

		return 1;
	}

	// wxAuiPaneInfo & wxAuiPaneInfo::FloatingPosition(const wxPoint & pos)
	static int _bind_FloatingPosition_overload_1(lua_State *L) {
		if (!_lg_typecheck_FloatingPosition_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxAuiPaneInfo & wxAuiPaneInfo::FloatingPosition(const wxPoint & pos) function, expected prototype:\nwxAuiPaneInfo & wxAuiPaneInfo::FloatingPosition(const wxPoint & pos)\nClass arguments details:\narg 1 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint* pos_ptr=(Luna< wxPoint >::check(L,2));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxAuiPaneInfo::FloatingPosition function");
		}
		const wxPoint & pos=*pos_ptr;

		wxAuiPaneInfo* self=(Luna< wxAuiPaneInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxAuiPaneInfo & wxAuiPaneInfo::FloatingPosition(const wxPoint &). Got : '%s'\n%s",typeid(Luna< wxAuiPaneInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxAuiPaneInfo* lret = &self->FloatingPosition(pos);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxAuiPaneInfo >::push(L,lret,false);

		return 1;
	}

	// wxAuiPaneInfo & wxAuiPaneInfo::FloatingPosition(int x, int y)
	static int _bind_FloatingPosition_overload_2(lua_State *L) {
		if (!_lg_typecheck_FloatingPosition_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxAuiPaneInfo & wxAuiPaneInfo::FloatingPosition(int x, int y) function, expected prototype:\nwxAuiPaneInfo & wxAuiPaneInfo::FloatingPosition(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxAuiPaneInfo* self=(Luna< wxAuiPaneInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxAuiPaneInfo & wxAuiPaneInfo::FloatingPosition(int, int). Got : '%s'\n%s",typeid(Luna< wxAuiPaneInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxAuiPaneInfo* lret = &self->FloatingPosition(x, y);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxAuiPaneInfo >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxAuiPaneInfo::FloatingPosition
	static int _bind_FloatingPosition(lua_State *L) {
		if (_lg_typecheck_FloatingPosition_overload_1(L)) return _bind_FloatingPosition_overload_1(L);
		if (_lg_typecheck_FloatingPosition_overload_2(L)) return _bind_FloatingPosition_overload_2(L);

		luaL_error(L, "error in function FloatingPosition, cannot match any of the overloads for function FloatingPosition:\n  FloatingPosition(const wxPoint &)\n  FloatingPosition(int, int)\n");
		return 0;
	}

	// wxAuiPaneInfo & wxAuiPaneInfo::FloatingSize(const wxSize & size)
	static int _bind_FloatingSize_overload_1(lua_State *L) {
		if (!_lg_typecheck_FloatingSize_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxAuiPaneInfo & wxAuiPaneInfo::FloatingSize(const wxSize & size) function, expected prototype:\nwxAuiPaneInfo & wxAuiPaneInfo::FloatingSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxAuiPaneInfo::FloatingSize function");
		}
		const wxSize & size=*size_ptr;

		wxAuiPaneInfo* self=(Luna< wxAuiPaneInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxAuiPaneInfo & wxAuiPaneInfo::FloatingSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxAuiPaneInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxAuiPaneInfo* lret = &self->FloatingSize(size);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxAuiPaneInfo >::push(L,lret,false);

		return 1;
	}

	// wxAuiPaneInfo & wxAuiPaneInfo::FloatingSize(int x, int y)
	static int _bind_FloatingSize_overload_2(lua_State *L) {
		if (!_lg_typecheck_FloatingSize_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxAuiPaneInfo & wxAuiPaneInfo::FloatingSize(int x, int y) function, expected prototype:\nwxAuiPaneInfo & wxAuiPaneInfo::FloatingSize(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxAuiPaneInfo* self=(Luna< wxAuiPaneInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxAuiPaneInfo & wxAuiPaneInfo::FloatingSize(int, int). Got : '%s'\n%s",typeid(Luna< wxAuiPaneInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxAuiPaneInfo* lret = &self->FloatingSize(x, y);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxAuiPaneInfo >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxAuiPaneInfo::FloatingSize
	static int _bind_FloatingSize(lua_State *L) {
		if (_lg_typecheck_FloatingSize_overload_1(L)) return _bind_FloatingSize_overload_1(L);
		if (_lg_typecheck_FloatingSize_overload_2(L)) return _bind_FloatingSize_overload_2(L);

		luaL_error(L, "error in function FloatingSize, cannot match any of the overloads for function FloatingSize:\n  FloatingSize(const wxSize &)\n  FloatingSize(int, int)\n");
		return 0;
	}

	// wxAuiPaneInfo & wxAuiPaneInfo::Gripper(bool visible = true)
	static int _bind_Gripper(lua_State *L) {
		if (!_lg_typecheck_Gripper(L)) {
			luaL_error(L, "luna typecheck failed in wxAuiPaneInfo & wxAuiPaneInfo::Gripper(bool visible = true) function, expected prototype:\nwxAuiPaneInfo & wxAuiPaneInfo::Gripper(bool visible = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool visible=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxAuiPaneInfo* self=(Luna< wxAuiPaneInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxAuiPaneInfo & wxAuiPaneInfo::Gripper(bool). Got : '%s'\n%s",typeid(Luna< wxAuiPaneInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxAuiPaneInfo* lret = &self->Gripper(visible);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxAuiPaneInfo >::push(L,lret,false);

		return 1;
	}

	// wxAuiPaneInfo & wxAuiPaneInfo::GripperTop(bool attop = true)
	static int _bind_GripperTop(lua_State *L) {
		if (!_lg_typecheck_GripperTop(L)) {
			luaL_error(L, "luna typecheck failed in wxAuiPaneInfo & wxAuiPaneInfo::GripperTop(bool attop = true) function, expected prototype:\nwxAuiPaneInfo & wxAuiPaneInfo::GripperTop(bool attop = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool attop=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxAuiPaneInfo* self=(Luna< wxAuiPaneInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxAuiPaneInfo & wxAuiPaneInfo::GripperTop(bool). Got : '%s'\n%s",typeid(Luna< wxAuiPaneInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxAuiPaneInfo* lret = &self->GripperTop(attop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxAuiPaneInfo >::push(L,lret,false);

		return 1;
	}

	// bool wxAuiPaneInfo::HasBorder() const
	static int _bind_HasBorder(lua_State *L) {
		if (!_lg_typecheck_HasBorder(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAuiPaneInfo::HasBorder() const function, expected prototype:\nbool wxAuiPaneInfo::HasBorder() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiPaneInfo* self=(Luna< wxAuiPaneInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAuiPaneInfo::HasBorder() const. Got : '%s'\n%s",typeid(Luna< wxAuiPaneInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasBorder();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAuiPaneInfo::HasCaption() const
	static int _bind_HasCaption(lua_State *L) {
		if (!_lg_typecheck_HasCaption(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAuiPaneInfo::HasCaption() const function, expected prototype:\nbool wxAuiPaneInfo::HasCaption() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiPaneInfo* self=(Luna< wxAuiPaneInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAuiPaneInfo::HasCaption() const. Got : '%s'\n%s",typeid(Luna< wxAuiPaneInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasCaption();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAuiPaneInfo::HasCloseButton() const
	static int _bind_HasCloseButton(lua_State *L) {
		if (!_lg_typecheck_HasCloseButton(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAuiPaneInfo::HasCloseButton() const function, expected prototype:\nbool wxAuiPaneInfo::HasCloseButton() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiPaneInfo* self=(Luna< wxAuiPaneInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAuiPaneInfo::HasCloseButton() const. Got : '%s'\n%s",typeid(Luna< wxAuiPaneInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasCloseButton();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAuiPaneInfo::HasFlag(int flag) const
	static int _bind_HasFlag(lua_State *L) {
		if (!_lg_typecheck_HasFlag(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAuiPaneInfo::HasFlag(int flag) const function, expected prototype:\nbool wxAuiPaneInfo::HasFlag(int flag) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int flag=(int)lua_tointeger(L,2);

		wxAuiPaneInfo* self=(Luna< wxAuiPaneInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAuiPaneInfo::HasFlag(int) const. Got : '%s'\n%s",typeid(Luna< wxAuiPaneInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasFlag(flag);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAuiPaneInfo::HasGripper() const
	static int _bind_HasGripper(lua_State *L) {
		if (!_lg_typecheck_HasGripper(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAuiPaneInfo::HasGripper() const function, expected prototype:\nbool wxAuiPaneInfo::HasGripper() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiPaneInfo* self=(Luna< wxAuiPaneInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAuiPaneInfo::HasGripper() const. Got : '%s'\n%s",typeid(Luna< wxAuiPaneInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasGripper();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAuiPaneInfo::HasGripperTop() const
	static int _bind_HasGripperTop(lua_State *L) {
		if (!_lg_typecheck_HasGripperTop(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAuiPaneInfo::HasGripperTop() const function, expected prototype:\nbool wxAuiPaneInfo::HasGripperTop() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiPaneInfo* self=(Luna< wxAuiPaneInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAuiPaneInfo::HasGripperTop() const. Got : '%s'\n%s",typeid(Luna< wxAuiPaneInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasGripperTop();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAuiPaneInfo::HasMaximizeButton() const
	static int _bind_HasMaximizeButton(lua_State *L) {
		if (!_lg_typecheck_HasMaximizeButton(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAuiPaneInfo::HasMaximizeButton() const function, expected prototype:\nbool wxAuiPaneInfo::HasMaximizeButton() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiPaneInfo* self=(Luna< wxAuiPaneInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAuiPaneInfo::HasMaximizeButton() const. Got : '%s'\n%s",typeid(Luna< wxAuiPaneInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasMaximizeButton();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAuiPaneInfo::HasMinimizeButton() const
	static int _bind_HasMinimizeButton(lua_State *L) {
		if (!_lg_typecheck_HasMinimizeButton(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAuiPaneInfo::HasMinimizeButton() const function, expected prototype:\nbool wxAuiPaneInfo::HasMinimizeButton() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiPaneInfo* self=(Luna< wxAuiPaneInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAuiPaneInfo::HasMinimizeButton() const. Got : '%s'\n%s",typeid(Luna< wxAuiPaneInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasMinimizeButton();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAuiPaneInfo::HasPinButton() const
	static int _bind_HasPinButton(lua_State *L) {
		if (!_lg_typecheck_HasPinButton(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAuiPaneInfo::HasPinButton() const function, expected prototype:\nbool wxAuiPaneInfo::HasPinButton() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiPaneInfo* self=(Luna< wxAuiPaneInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAuiPaneInfo::HasPinButton() const. Got : '%s'\n%s",typeid(Luna< wxAuiPaneInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasPinButton();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxAuiPaneInfo & wxAuiPaneInfo::Hide()
	static int _bind_Hide(lua_State *L) {
		if (!_lg_typecheck_Hide(L)) {
			luaL_error(L, "luna typecheck failed in wxAuiPaneInfo & wxAuiPaneInfo::Hide() function, expected prototype:\nwxAuiPaneInfo & wxAuiPaneInfo::Hide()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiPaneInfo* self=(Luna< wxAuiPaneInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxAuiPaneInfo & wxAuiPaneInfo::Hide(). Got : '%s'\n%s",typeid(Luna< wxAuiPaneInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxAuiPaneInfo* lret = &self->Hide();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxAuiPaneInfo >::push(L,lret,false);

		return 1;
	}

	// wxAuiPaneInfo & wxAuiPaneInfo::Icon(const wxBitmap & b)
	static int _bind_Icon(lua_State *L) {
		if (!_lg_typecheck_Icon(L)) {
			luaL_error(L, "luna typecheck failed in wxAuiPaneInfo & wxAuiPaneInfo::Icon(const wxBitmap & b) function, expected prototype:\nwxAuiPaneInfo & wxAuiPaneInfo::Icon(const wxBitmap & b)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxBitmap* b_ptr=(Luna< wxObject >::checkSubType< wxBitmap >(L,2));
		if( !b_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg b in wxAuiPaneInfo::Icon function");
		}
		const wxBitmap & b=*b_ptr;

		wxAuiPaneInfo* self=(Luna< wxAuiPaneInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxAuiPaneInfo & wxAuiPaneInfo::Icon(const wxBitmap &). Got : '%s'\n%s",typeid(Luna< wxAuiPaneInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxAuiPaneInfo* lret = &self->Icon(b);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxAuiPaneInfo >::push(L,lret,false);

		return 1;
	}

	// bool wxAuiPaneInfo::IsBottomDockable() const
	static int _bind_IsBottomDockable(lua_State *L) {
		if (!_lg_typecheck_IsBottomDockable(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAuiPaneInfo::IsBottomDockable() const function, expected prototype:\nbool wxAuiPaneInfo::IsBottomDockable() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiPaneInfo* self=(Luna< wxAuiPaneInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAuiPaneInfo::IsBottomDockable() const. Got : '%s'\n%s",typeid(Luna< wxAuiPaneInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsBottomDockable();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAuiPaneInfo::IsDockable() const
	static int _bind_IsDockable(lua_State *L) {
		if (!_lg_typecheck_IsDockable(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAuiPaneInfo::IsDockable() const function, expected prototype:\nbool wxAuiPaneInfo::IsDockable() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiPaneInfo* self=(Luna< wxAuiPaneInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAuiPaneInfo::IsDockable() const. Got : '%s'\n%s",typeid(Luna< wxAuiPaneInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsDockable();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAuiPaneInfo::IsDocked() const
	static int _bind_IsDocked(lua_State *L) {
		if (!_lg_typecheck_IsDocked(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAuiPaneInfo::IsDocked() const function, expected prototype:\nbool wxAuiPaneInfo::IsDocked() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiPaneInfo* self=(Luna< wxAuiPaneInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAuiPaneInfo::IsDocked() const. Got : '%s'\n%s",typeid(Luna< wxAuiPaneInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsDocked();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAuiPaneInfo::IsFixed() const
	static int _bind_IsFixed(lua_State *L) {
		if (!_lg_typecheck_IsFixed(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAuiPaneInfo::IsFixed() const function, expected prototype:\nbool wxAuiPaneInfo::IsFixed() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiPaneInfo* self=(Luna< wxAuiPaneInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAuiPaneInfo::IsFixed() const. Got : '%s'\n%s",typeid(Luna< wxAuiPaneInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsFixed();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAuiPaneInfo::IsFloatable() const
	static int _bind_IsFloatable(lua_State *L) {
		if (!_lg_typecheck_IsFloatable(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAuiPaneInfo::IsFloatable() const function, expected prototype:\nbool wxAuiPaneInfo::IsFloatable() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiPaneInfo* self=(Luna< wxAuiPaneInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAuiPaneInfo::IsFloatable() const. Got : '%s'\n%s",typeid(Luna< wxAuiPaneInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsFloatable();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAuiPaneInfo::IsFloating() const
	static int _bind_IsFloating(lua_State *L) {
		if (!_lg_typecheck_IsFloating(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAuiPaneInfo::IsFloating() const function, expected prototype:\nbool wxAuiPaneInfo::IsFloating() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiPaneInfo* self=(Luna< wxAuiPaneInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAuiPaneInfo::IsFloating() const. Got : '%s'\n%s",typeid(Luna< wxAuiPaneInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsFloating();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAuiPaneInfo::IsLeftDockable() const
	static int _bind_IsLeftDockable(lua_State *L) {
		if (!_lg_typecheck_IsLeftDockable(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAuiPaneInfo::IsLeftDockable() const function, expected prototype:\nbool wxAuiPaneInfo::IsLeftDockable() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiPaneInfo* self=(Luna< wxAuiPaneInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAuiPaneInfo::IsLeftDockable() const. Got : '%s'\n%s",typeid(Luna< wxAuiPaneInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsLeftDockable();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAuiPaneInfo::IsMovable() const
	static int _bind_IsMovable(lua_State *L) {
		if (!_lg_typecheck_IsMovable(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAuiPaneInfo::IsMovable() const function, expected prototype:\nbool wxAuiPaneInfo::IsMovable() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiPaneInfo* self=(Luna< wxAuiPaneInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAuiPaneInfo::IsMovable() const. Got : '%s'\n%s",typeid(Luna< wxAuiPaneInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsMovable();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAuiPaneInfo::IsOk() const
	static int _bind_IsOk(lua_State *L) {
		if (!_lg_typecheck_IsOk(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAuiPaneInfo::IsOk() const function, expected prototype:\nbool wxAuiPaneInfo::IsOk() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiPaneInfo* self=(Luna< wxAuiPaneInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAuiPaneInfo::IsOk() const. Got : '%s'\n%s",typeid(Luna< wxAuiPaneInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsOk();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAuiPaneInfo::IsResizable() const
	static int _bind_IsResizable(lua_State *L) {
		if (!_lg_typecheck_IsResizable(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAuiPaneInfo::IsResizable() const function, expected prototype:\nbool wxAuiPaneInfo::IsResizable() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiPaneInfo* self=(Luna< wxAuiPaneInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAuiPaneInfo::IsResizable() const. Got : '%s'\n%s",typeid(Luna< wxAuiPaneInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsResizable();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAuiPaneInfo::IsRightDockable() const
	static int _bind_IsRightDockable(lua_State *L) {
		if (!_lg_typecheck_IsRightDockable(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAuiPaneInfo::IsRightDockable() const function, expected prototype:\nbool wxAuiPaneInfo::IsRightDockable() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiPaneInfo* self=(Luna< wxAuiPaneInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAuiPaneInfo::IsRightDockable() const. Got : '%s'\n%s",typeid(Luna< wxAuiPaneInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsRightDockable();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAuiPaneInfo::IsShown() const
	static int _bind_IsShown(lua_State *L) {
		if (!_lg_typecheck_IsShown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAuiPaneInfo::IsShown() const function, expected prototype:\nbool wxAuiPaneInfo::IsShown() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiPaneInfo* self=(Luna< wxAuiPaneInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAuiPaneInfo::IsShown() const. Got : '%s'\n%s",typeid(Luna< wxAuiPaneInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsShown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAuiPaneInfo::IsToolbar() const
	static int _bind_IsToolbar(lua_State *L) {
		if (!_lg_typecheck_IsToolbar(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAuiPaneInfo::IsToolbar() const function, expected prototype:\nbool wxAuiPaneInfo::IsToolbar() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiPaneInfo* self=(Luna< wxAuiPaneInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAuiPaneInfo::IsToolbar() const. Got : '%s'\n%s",typeid(Luna< wxAuiPaneInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsToolbar();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAuiPaneInfo::IsTopDockable() const
	static int _bind_IsTopDockable(lua_State *L) {
		if (!_lg_typecheck_IsTopDockable(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAuiPaneInfo::IsTopDockable() const function, expected prototype:\nbool wxAuiPaneInfo::IsTopDockable() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiPaneInfo* self=(Luna< wxAuiPaneInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAuiPaneInfo::IsTopDockable() const. Got : '%s'\n%s",typeid(Luna< wxAuiPaneInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsTopDockable();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxAuiPaneInfo & wxAuiPaneInfo::Layer(int layer)
	static int _bind_Layer(lua_State *L) {
		if (!_lg_typecheck_Layer(L)) {
			luaL_error(L, "luna typecheck failed in wxAuiPaneInfo & wxAuiPaneInfo::Layer(int layer) function, expected prototype:\nwxAuiPaneInfo & wxAuiPaneInfo::Layer(int layer)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int layer=(int)lua_tointeger(L,2);

		wxAuiPaneInfo* self=(Luna< wxAuiPaneInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxAuiPaneInfo & wxAuiPaneInfo::Layer(int). Got : '%s'\n%s",typeid(Luna< wxAuiPaneInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxAuiPaneInfo* lret = &self->Layer(layer);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxAuiPaneInfo >::push(L,lret,false);

		return 1;
	}

	// wxAuiPaneInfo & wxAuiPaneInfo::Left()
	static int _bind_Left(lua_State *L) {
		if (!_lg_typecheck_Left(L)) {
			luaL_error(L, "luna typecheck failed in wxAuiPaneInfo & wxAuiPaneInfo::Left() function, expected prototype:\nwxAuiPaneInfo & wxAuiPaneInfo::Left()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiPaneInfo* self=(Luna< wxAuiPaneInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxAuiPaneInfo & wxAuiPaneInfo::Left(). Got : '%s'\n%s",typeid(Luna< wxAuiPaneInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxAuiPaneInfo* lret = &self->Left();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxAuiPaneInfo >::push(L,lret,false);

		return 1;
	}

	// wxAuiPaneInfo & wxAuiPaneInfo::LeftDockable(bool b = true)
	static int _bind_LeftDockable(lua_State *L) {
		if (!_lg_typecheck_LeftDockable(L)) {
			luaL_error(L, "luna typecheck failed in wxAuiPaneInfo & wxAuiPaneInfo::LeftDockable(bool b = true) function, expected prototype:\nwxAuiPaneInfo & wxAuiPaneInfo::LeftDockable(bool b = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool b=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxAuiPaneInfo* self=(Luna< wxAuiPaneInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxAuiPaneInfo & wxAuiPaneInfo::LeftDockable(bool). Got : '%s'\n%s",typeid(Luna< wxAuiPaneInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxAuiPaneInfo* lret = &self->LeftDockable(b);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxAuiPaneInfo >::push(L,lret,false);

		return 1;
	}

	// wxAuiPaneInfo & wxAuiPaneInfo::MaxSize(const wxSize & size)
	static int _bind_MaxSize_overload_1(lua_State *L) {
		if (!_lg_typecheck_MaxSize_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxAuiPaneInfo & wxAuiPaneInfo::MaxSize(const wxSize & size) function, expected prototype:\nwxAuiPaneInfo & wxAuiPaneInfo::MaxSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxAuiPaneInfo::MaxSize function");
		}
		const wxSize & size=*size_ptr;

		wxAuiPaneInfo* self=(Luna< wxAuiPaneInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxAuiPaneInfo & wxAuiPaneInfo::MaxSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxAuiPaneInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxAuiPaneInfo* lret = &self->MaxSize(size);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxAuiPaneInfo >::push(L,lret,false);

		return 1;
	}

	// wxAuiPaneInfo & wxAuiPaneInfo::MaxSize(int x, int y)
	static int _bind_MaxSize_overload_2(lua_State *L) {
		if (!_lg_typecheck_MaxSize_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxAuiPaneInfo & wxAuiPaneInfo::MaxSize(int x, int y) function, expected prototype:\nwxAuiPaneInfo & wxAuiPaneInfo::MaxSize(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxAuiPaneInfo* self=(Luna< wxAuiPaneInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxAuiPaneInfo & wxAuiPaneInfo::MaxSize(int, int). Got : '%s'\n%s",typeid(Luna< wxAuiPaneInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxAuiPaneInfo* lret = &self->MaxSize(x, y);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxAuiPaneInfo >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxAuiPaneInfo::MaxSize
	static int _bind_MaxSize(lua_State *L) {
		if (_lg_typecheck_MaxSize_overload_1(L)) return _bind_MaxSize_overload_1(L);
		if (_lg_typecheck_MaxSize_overload_2(L)) return _bind_MaxSize_overload_2(L);

		luaL_error(L, "error in function MaxSize, cannot match any of the overloads for function MaxSize:\n  MaxSize(const wxSize &)\n  MaxSize(int, int)\n");
		return 0;
	}

	// wxAuiPaneInfo & wxAuiPaneInfo::MaximizeButton(bool visible = true)
	static int _bind_MaximizeButton(lua_State *L) {
		if (!_lg_typecheck_MaximizeButton(L)) {
			luaL_error(L, "luna typecheck failed in wxAuiPaneInfo & wxAuiPaneInfo::MaximizeButton(bool visible = true) function, expected prototype:\nwxAuiPaneInfo & wxAuiPaneInfo::MaximizeButton(bool visible = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool visible=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxAuiPaneInfo* self=(Luna< wxAuiPaneInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxAuiPaneInfo & wxAuiPaneInfo::MaximizeButton(bool). Got : '%s'\n%s",typeid(Luna< wxAuiPaneInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxAuiPaneInfo* lret = &self->MaximizeButton(visible);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxAuiPaneInfo >::push(L,lret,false);

		return 1;
	}

	// wxAuiPaneInfo & wxAuiPaneInfo::MinSize(const wxSize & size)
	static int _bind_MinSize_overload_1(lua_State *L) {
		if (!_lg_typecheck_MinSize_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxAuiPaneInfo & wxAuiPaneInfo::MinSize(const wxSize & size) function, expected prototype:\nwxAuiPaneInfo & wxAuiPaneInfo::MinSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxAuiPaneInfo::MinSize function");
		}
		const wxSize & size=*size_ptr;

		wxAuiPaneInfo* self=(Luna< wxAuiPaneInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxAuiPaneInfo & wxAuiPaneInfo::MinSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxAuiPaneInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxAuiPaneInfo* lret = &self->MinSize(size);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxAuiPaneInfo >::push(L,lret,false);

		return 1;
	}

	// wxAuiPaneInfo & wxAuiPaneInfo::MinSize(int x, int y)
	static int _bind_MinSize_overload_2(lua_State *L) {
		if (!_lg_typecheck_MinSize_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxAuiPaneInfo & wxAuiPaneInfo::MinSize(int x, int y) function, expected prototype:\nwxAuiPaneInfo & wxAuiPaneInfo::MinSize(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxAuiPaneInfo* self=(Luna< wxAuiPaneInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxAuiPaneInfo & wxAuiPaneInfo::MinSize(int, int). Got : '%s'\n%s",typeid(Luna< wxAuiPaneInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxAuiPaneInfo* lret = &self->MinSize(x, y);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxAuiPaneInfo >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxAuiPaneInfo::MinSize
	static int _bind_MinSize(lua_State *L) {
		if (_lg_typecheck_MinSize_overload_1(L)) return _bind_MinSize_overload_1(L);
		if (_lg_typecheck_MinSize_overload_2(L)) return _bind_MinSize_overload_2(L);

		luaL_error(L, "error in function MinSize, cannot match any of the overloads for function MinSize:\n  MinSize(const wxSize &)\n  MinSize(int, int)\n");
		return 0;
	}

	// wxAuiPaneInfo & wxAuiPaneInfo::MinimizeButton(bool visible = true)
	static int _bind_MinimizeButton(lua_State *L) {
		if (!_lg_typecheck_MinimizeButton(L)) {
			luaL_error(L, "luna typecheck failed in wxAuiPaneInfo & wxAuiPaneInfo::MinimizeButton(bool visible = true) function, expected prototype:\nwxAuiPaneInfo & wxAuiPaneInfo::MinimizeButton(bool visible = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool visible=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxAuiPaneInfo* self=(Luna< wxAuiPaneInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxAuiPaneInfo & wxAuiPaneInfo::MinimizeButton(bool). Got : '%s'\n%s",typeid(Luna< wxAuiPaneInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxAuiPaneInfo* lret = &self->MinimizeButton(visible);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxAuiPaneInfo >::push(L,lret,false);

		return 1;
	}

	// wxAuiPaneInfo & wxAuiPaneInfo::Movable(bool b = true)
	static int _bind_Movable(lua_State *L) {
		if (!_lg_typecheck_Movable(L)) {
			luaL_error(L, "luna typecheck failed in wxAuiPaneInfo & wxAuiPaneInfo::Movable(bool b = true) function, expected prototype:\nwxAuiPaneInfo & wxAuiPaneInfo::Movable(bool b = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool b=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxAuiPaneInfo* self=(Luna< wxAuiPaneInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxAuiPaneInfo & wxAuiPaneInfo::Movable(bool). Got : '%s'\n%s",typeid(Luna< wxAuiPaneInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxAuiPaneInfo* lret = &self->Movable(b);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxAuiPaneInfo >::push(L,lret,false);

		return 1;
	}

	// wxAuiPaneInfo & wxAuiPaneInfo::Name(const wxString & n)
	static int _bind_Name(lua_State *L) {
		if (!_lg_typecheck_Name(L)) {
			luaL_error(L, "luna typecheck failed in wxAuiPaneInfo & wxAuiPaneInfo::Name(const wxString & n) function, expected prototype:\nwxAuiPaneInfo & wxAuiPaneInfo::Name(const wxString & n)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString n(lua_tostring(L,2),lua_objlen(L,2));

		wxAuiPaneInfo* self=(Luna< wxAuiPaneInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxAuiPaneInfo & wxAuiPaneInfo::Name(const wxString &). Got : '%s'\n%s",typeid(Luna< wxAuiPaneInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxAuiPaneInfo* lret = &self->Name(n);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxAuiPaneInfo >::push(L,lret,false);

		return 1;
	}

	// wxAuiPaneInfo & wxAuiPaneInfo::PaneBorder(bool visible = true)
	static int _bind_PaneBorder(lua_State *L) {
		if (!_lg_typecheck_PaneBorder(L)) {
			luaL_error(L, "luna typecheck failed in wxAuiPaneInfo & wxAuiPaneInfo::PaneBorder(bool visible = true) function, expected prototype:\nwxAuiPaneInfo & wxAuiPaneInfo::PaneBorder(bool visible = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool visible=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxAuiPaneInfo* self=(Luna< wxAuiPaneInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxAuiPaneInfo & wxAuiPaneInfo::PaneBorder(bool). Got : '%s'\n%s",typeid(Luna< wxAuiPaneInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxAuiPaneInfo* lret = &self->PaneBorder(visible);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxAuiPaneInfo >::push(L,lret,false);

		return 1;
	}

	// wxAuiPaneInfo & wxAuiPaneInfo::PinButton(bool visible = true)
	static int _bind_PinButton(lua_State *L) {
		if (!_lg_typecheck_PinButton(L)) {
			luaL_error(L, "luna typecheck failed in wxAuiPaneInfo & wxAuiPaneInfo::PinButton(bool visible = true) function, expected prototype:\nwxAuiPaneInfo & wxAuiPaneInfo::PinButton(bool visible = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool visible=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxAuiPaneInfo* self=(Luna< wxAuiPaneInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxAuiPaneInfo & wxAuiPaneInfo::PinButton(bool). Got : '%s'\n%s",typeid(Luna< wxAuiPaneInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxAuiPaneInfo* lret = &self->PinButton(visible);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxAuiPaneInfo >::push(L,lret,false);

		return 1;
	}

	// wxAuiPaneInfo & wxAuiPaneInfo::Position(int pos)
	static int _bind_Position(lua_State *L) {
		if (!_lg_typecheck_Position(L)) {
			luaL_error(L, "luna typecheck failed in wxAuiPaneInfo & wxAuiPaneInfo::Position(int pos) function, expected prototype:\nwxAuiPaneInfo & wxAuiPaneInfo::Position(int pos)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int pos=(int)lua_tointeger(L,2);

		wxAuiPaneInfo* self=(Luna< wxAuiPaneInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxAuiPaneInfo & wxAuiPaneInfo::Position(int). Got : '%s'\n%s",typeid(Luna< wxAuiPaneInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxAuiPaneInfo* lret = &self->Position(pos);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxAuiPaneInfo >::push(L,lret,false);

		return 1;
	}

	// wxAuiPaneInfo & wxAuiPaneInfo::Resizable(bool resizable = true)
	static int _bind_Resizable(lua_State *L) {
		if (!_lg_typecheck_Resizable(L)) {
			luaL_error(L, "luna typecheck failed in wxAuiPaneInfo & wxAuiPaneInfo::Resizable(bool resizable = true) function, expected prototype:\nwxAuiPaneInfo & wxAuiPaneInfo::Resizable(bool resizable = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool resizable=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxAuiPaneInfo* self=(Luna< wxAuiPaneInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxAuiPaneInfo & wxAuiPaneInfo::Resizable(bool). Got : '%s'\n%s",typeid(Luna< wxAuiPaneInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxAuiPaneInfo* lret = &self->Resizable(resizable);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxAuiPaneInfo >::push(L,lret,false);

		return 1;
	}

	// wxAuiPaneInfo & wxAuiPaneInfo::Right()
	static int _bind_Right(lua_State *L) {
		if (!_lg_typecheck_Right(L)) {
			luaL_error(L, "luna typecheck failed in wxAuiPaneInfo & wxAuiPaneInfo::Right() function, expected prototype:\nwxAuiPaneInfo & wxAuiPaneInfo::Right()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiPaneInfo* self=(Luna< wxAuiPaneInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxAuiPaneInfo & wxAuiPaneInfo::Right(). Got : '%s'\n%s",typeid(Luna< wxAuiPaneInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxAuiPaneInfo* lret = &self->Right();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxAuiPaneInfo >::push(L,lret,false);

		return 1;
	}

	// wxAuiPaneInfo & wxAuiPaneInfo::RightDockable(bool b = true)
	static int _bind_RightDockable(lua_State *L) {
		if (!_lg_typecheck_RightDockable(L)) {
			luaL_error(L, "luna typecheck failed in wxAuiPaneInfo & wxAuiPaneInfo::RightDockable(bool b = true) function, expected prototype:\nwxAuiPaneInfo & wxAuiPaneInfo::RightDockable(bool b = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool b=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxAuiPaneInfo* self=(Luna< wxAuiPaneInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxAuiPaneInfo & wxAuiPaneInfo::RightDockable(bool). Got : '%s'\n%s",typeid(Luna< wxAuiPaneInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxAuiPaneInfo* lret = &self->RightDockable(b);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxAuiPaneInfo >::push(L,lret,false);

		return 1;
	}

	// wxAuiPaneInfo & wxAuiPaneInfo::Row(int row)
	static int _bind_Row(lua_State *L) {
		if (!_lg_typecheck_Row(L)) {
			luaL_error(L, "luna typecheck failed in wxAuiPaneInfo & wxAuiPaneInfo::Row(int row) function, expected prototype:\nwxAuiPaneInfo & wxAuiPaneInfo::Row(int row)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int row=(int)lua_tointeger(L,2);

		wxAuiPaneInfo* self=(Luna< wxAuiPaneInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxAuiPaneInfo & wxAuiPaneInfo::Row(int). Got : '%s'\n%s",typeid(Luna< wxAuiPaneInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxAuiPaneInfo* lret = &self->Row(row);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxAuiPaneInfo >::push(L,lret,false);

		return 1;
	}

	// void wxAuiPaneInfo::SafeSet(wxAuiPaneInfo source)
	static int _bind_SafeSet(lua_State *L) {
		if (!_lg_typecheck_SafeSet(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiPaneInfo::SafeSet(wxAuiPaneInfo source) function, expected prototype:\nvoid wxAuiPaneInfo::SafeSet(wxAuiPaneInfo source)\nClass arguments details:\narg 1 ID = 42930508\n\n%s",luna_dumpStack(L).c_str());
		}

		wxAuiPaneInfo* source_ptr=(Luna< wxAuiPaneInfo >::check(L,2));
		if( !source_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg source in wxAuiPaneInfo::SafeSet function");
		}
		wxAuiPaneInfo source=*source_ptr;

		wxAuiPaneInfo* self=(Luna< wxAuiPaneInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiPaneInfo::SafeSet(wxAuiPaneInfo). Got : '%s'\n%s",typeid(Luna< wxAuiPaneInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SafeSet(source);

		return 0;
	}

	// wxAuiPaneInfo & wxAuiPaneInfo::SetFlag(int flag, bool option_state)
	static int _bind_SetFlag(lua_State *L) {
		if (!_lg_typecheck_SetFlag(L)) {
			luaL_error(L, "luna typecheck failed in wxAuiPaneInfo & wxAuiPaneInfo::SetFlag(int flag, bool option_state) function, expected prototype:\nwxAuiPaneInfo & wxAuiPaneInfo::SetFlag(int flag, bool option_state)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int flag=(int)lua_tointeger(L,2);
		bool option_state=(bool)(lua_toboolean(L,3)==1);

		wxAuiPaneInfo* self=(Luna< wxAuiPaneInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxAuiPaneInfo & wxAuiPaneInfo::SetFlag(int, bool). Got : '%s'\n%s",typeid(Luna< wxAuiPaneInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxAuiPaneInfo* lret = &self->SetFlag(flag, option_state);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxAuiPaneInfo >::push(L,lret,false);

		return 1;
	}

	// wxAuiPaneInfo & wxAuiPaneInfo::Show(bool show = true)
	static int _bind_Show(lua_State *L) {
		if (!_lg_typecheck_Show(L)) {
			luaL_error(L, "luna typecheck failed in wxAuiPaneInfo & wxAuiPaneInfo::Show(bool show = true) function, expected prototype:\nwxAuiPaneInfo & wxAuiPaneInfo::Show(bool show = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool show=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxAuiPaneInfo* self=(Luna< wxAuiPaneInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxAuiPaneInfo & wxAuiPaneInfo::Show(bool). Got : '%s'\n%s",typeid(Luna< wxAuiPaneInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxAuiPaneInfo* lret = &self->Show(show);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxAuiPaneInfo >::push(L,lret,false);

		return 1;
	}

	// wxAuiPaneInfo & wxAuiPaneInfo::ToolbarPane()
	static int _bind_ToolbarPane(lua_State *L) {
		if (!_lg_typecheck_ToolbarPane(L)) {
			luaL_error(L, "luna typecheck failed in wxAuiPaneInfo & wxAuiPaneInfo::ToolbarPane() function, expected prototype:\nwxAuiPaneInfo & wxAuiPaneInfo::ToolbarPane()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiPaneInfo* self=(Luna< wxAuiPaneInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxAuiPaneInfo & wxAuiPaneInfo::ToolbarPane(). Got : '%s'\n%s",typeid(Luna< wxAuiPaneInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxAuiPaneInfo* lret = &self->ToolbarPane();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxAuiPaneInfo >::push(L,lret,false);

		return 1;
	}

	// wxAuiPaneInfo & wxAuiPaneInfo::Top()
	static int _bind_Top(lua_State *L) {
		if (!_lg_typecheck_Top(L)) {
			luaL_error(L, "luna typecheck failed in wxAuiPaneInfo & wxAuiPaneInfo::Top() function, expected prototype:\nwxAuiPaneInfo & wxAuiPaneInfo::Top()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiPaneInfo* self=(Luna< wxAuiPaneInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxAuiPaneInfo & wxAuiPaneInfo::Top(). Got : '%s'\n%s",typeid(Luna< wxAuiPaneInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxAuiPaneInfo* lret = &self->Top();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxAuiPaneInfo >::push(L,lret,false);

		return 1;
	}

	// wxAuiPaneInfo & wxAuiPaneInfo::TopDockable(bool b = true)
	static int _bind_TopDockable(lua_State *L) {
		if (!_lg_typecheck_TopDockable(L)) {
			luaL_error(L, "luna typecheck failed in wxAuiPaneInfo & wxAuiPaneInfo::TopDockable(bool b = true) function, expected prototype:\nwxAuiPaneInfo & wxAuiPaneInfo::TopDockable(bool b = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool b=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxAuiPaneInfo* self=(Luna< wxAuiPaneInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxAuiPaneInfo & wxAuiPaneInfo::TopDockable(bool). Got : '%s'\n%s",typeid(Luna< wxAuiPaneInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxAuiPaneInfo* lret = &self->TopDockable(b);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxAuiPaneInfo >::push(L,lret,false);

		return 1;
	}

	// wxAuiPaneInfo & wxAuiPaneInfo::Window(wxWindow * w)
	static int _bind_Window(lua_State *L) {
		if (!_lg_typecheck_Window(L)) {
			luaL_error(L, "luna typecheck failed in wxAuiPaneInfo & wxAuiPaneInfo::Window(wxWindow * w) function, expected prototype:\nwxAuiPaneInfo & wxAuiPaneInfo::Window(wxWindow * w)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* w=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxAuiPaneInfo* self=(Luna< wxAuiPaneInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxAuiPaneInfo & wxAuiPaneInfo::Window(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxAuiPaneInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxAuiPaneInfo* lret = &self->Window(w);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxAuiPaneInfo >::push(L,lret,false);

		return 1;
	}


	// Operator binds:
	// wxAuiPaneInfo & wxAuiPaneInfo::operator=(const wxAuiPaneInfo & c)
	static int _bind_op_assign(lua_State *L) {
		if (!_lg_typecheck_op_assign(L)) {
			luaL_error(L, "luna typecheck failed in wxAuiPaneInfo & wxAuiPaneInfo::operator=(const wxAuiPaneInfo & c) function, expected prototype:\nwxAuiPaneInfo & wxAuiPaneInfo::operator=(const wxAuiPaneInfo & c)\nClass arguments details:\narg 1 ID = 42930508\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxAuiPaneInfo* c_ptr=(Luna< wxAuiPaneInfo >::check(L,2));
		if( !c_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg c in wxAuiPaneInfo::operator= function");
		}
		const wxAuiPaneInfo & c=*c_ptr;

		wxAuiPaneInfo* self=(Luna< wxAuiPaneInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxAuiPaneInfo & wxAuiPaneInfo::operator=(const wxAuiPaneInfo &). Got : '%s'\n%s",typeid(Luna< wxAuiPaneInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxAuiPaneInfo* lret = &self->operator=(c);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxAuiPaneInfo >::push(L,lret,false);

		return 1;
	}


};

wxAuiPaneInfo* LunaTraits< wxAuiPaneInfo >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxAuiPaneInfo::_bind_ctor(L);
}

void LunaTraits< wxAuiPaneInfo >::_bind_dtor(wxAuiPaneInfo* obj) {
	delete obj;
}

const char LunaTraits< wxAuiPaneInfo >::className[] = "wxAuiPaneInfo";
const char LunaTraits< wxAuiPaneInfo >::fullName[] = "wxAuiPaneInfo";
const char LunaTraits< wxAuiPaneInfo >::moduleName[] = "wx";
const char* LunaTraits< wxAuiPaneInfo >::parents[] = {0};
const int LunaTraits< wxAuiPaneInfo >::hash = 42930508;
const int LunaTraits< wxAuiPaneInfo >::uniqueIDs[] = {42930508,0};

luna_RegType LunaTraits< wxAuiPaneInfo >::methods[] = {
	{"BestSize", &luna_wrapper_wxAuiPaneInfo::_bind_BestSize},
	{"Bottom", &luna_wrapper_wxAuiPaneInfo::_bind_Bottom},
	{"BottomDockable", &luna_wrapper_wxAuiPaneInfo::_bind_BottomDockable},
	{"Caption", &luna_wrapper_wxAuiPaneInfo::_bind_Caption},
	{"CaptionVisible", &luna_wrapper_wxAuiPaneInfo::_bind_CaptionVisible},
	{"Centre", &luna_wrapper_wxAuiPaneInfo::_bind_Centre},
	{"Center", &luna_wrapper_wxAuiPaneInfo::_bind_Center},
	{"CentrePane", &luna_wrapper_wxAuiPaneInfo::_bind_CentrePane},
	{"CenterPane", &luna_wrapper_wxAuiPaneInfo::_bind_CenterPane},
	{"CloseButton", &luna_wrapper_wxAuiPaneInfo::_bind_CloseButton},
	{"DefaultPane", &luna_wrapper_wxAuiPaneInfo::_bind_DefaultPane},
	{"DestroyOnClose", &luna_wrapper_wxAuiPaneInfo::_bind_DestroyOnClose},
	{"Direction", &luna_wrapper_wxAuiPaneInfo::_bind_Direction},
	{"Dock", &luna_wrapper_wxAuiPaneInfo::_bind_Dock},
	{"DockFixed", &luna_wrapper_wxAuiPaneInfo::_bind_DockFixed},
	{"Dockable", &luna_wrapper_wxAuiPaneInfo::_bind_Dockable},
	{"Fixed", &luna_wrapper_wxAuiPaneInfo::_bind_Fixed},
	{"Float", &luna_wrapper_wxAuiPaneInfo::_bind_Float},
	{"Floatable", &luna_wrapper_wxAuiPaneInfo::_bind_Floatable},
	{"FloatingPosition", &luna_wrapper_wxAuiPaneInfo::_bind_FloatingPosition},
	{"FloatingSize", &luna_wrapper_wxAuiPaneInfo::_bind_FloatingSize},
	{"Gripper", &luna_wrapper_wxAuiPaneInfo::_bind_Gripper},
	{"GripperTop", &luna_wrapper_wxAuiPaneInfo::_bind_GripperTop},
	{"HasBorder", &luna_wrapper_wxAuiPaneInfo::_bind_HasBorder},
	{"HasCaption", &luna_wrapper_wxAuiPaneInfo::_bind_HasCaption},
	{"HasCloseButton", &luna_wrapper_wxAuiPaneInfo::_bind_HasCloseButton},
	{"HasFlag", &luna_wrapper_wxAuiPaneInfo::_bind_HasFlag},
	{"HasGripper", &luna_wrapper_wxAuiPaneInfo::_bind_HasGripper},
	{"HasGripperTop", &luna_wrapper_wxAuiPaneInfo::_bind_HasGripperTop},
	{"HasMaximizeButton", &luna_wrapper_wxAuiPaneInfo::_bind_HasMaximizeButton},
	{"HasMinimizeButton", &luna_wrapper_wxAuiPaneInfo::_bind_HasMinimizeButton},
	{"HasPinButton", &luna_wrapper_wxAuiPaneInfo::_bind_HasPinButton},
	{"Hide", &luna_wrapper_wxAuiPaneInfo::_bind_Hide},
	{"Icon", &luna_wrapper_wxAuiPaneInfo::_bind_Icon},
	{"IsBottomDockable", &luna_wrapper_wxAuiPaneInfo::_bind_IsBottomDockable},
	{"IsDockable", &luna_wrapper_wxAuiPaneInfo::_bind_IsDockable},
	{"IsDocked", &luna_wrapper_wxAuiPaneInfo::_bind_IsDocked},
	{"IsFixed", &luna_wrapper_wxAuiPaneInfo::_bind_IsFixed},
	{"IsFloatable", &luna_wrapper_wxAuiPaneInfo::_bind_IsFloatable},
	{"IsFloating", &luna_wrapper_wxAuiPaneInfo::_bind_IsFloating},
	{"IsLeftDockable", &luna_wrapper_wxAuiPaneInfo::_bind_IsLeftDockable},
	{"IsMovable", &luna_wrapper_wxAuiPaneInfo::_bind_IsMovable},
	{"IsOk", &luna_wrapper_wxAuiPaneInfo::_bind_IsOk},
	{"IsResizable", &luna_wrapper_wxAuiPaneInfo::_bind_IsResizable},
	{"IsRightDockable", &luna_wrapper_wxAuiPaneInfo::_bind_IsRightDockable},
	{"IsShown", &luna_wrapper_wxAuiPaneInfo::_bind_IsShown},
	{"IsToolbar", &luna_wrapper_wxAuiPaneInfo::_bind_IsToolbar},
	{"IsTopDockable", &luna_wrapper_wxAuiPaneInfo::_bind_IsTopDockable},
	{"Layer", &luna_wrapper_wxAuiPaneInfo::_bind_Layer},
	{"Left", &luna_wrapper_wxAuiPaneInfo::_bind_Left},
	{"LeftDockable", &luna_wrapper_wxAuiPaneInfo::_bind_LeftDockable},
	{"MaxSize", &luna_wrapper_wxAuiPaneInfo::_bind_MaxSize},
	{"MaximizeButton", &luna_wrapper_wxAuiPaneInfo::_bind_MaximizeButton},
	{"MinSize", &luna_wrapper_wxAuiPaneInfo::_bind_MinSize},
	{"MinimizeButton", &luna_wrapper_wxAuiPaneInfo::_bind_MinimizeButton},
	{"Movable", &luna_wrapper_wxAuiPaneInfo::_bind_Movable},
	{"Name", &luna_wrapper_wxAuiPaneInfo::_bind_Name},
	{"PaneBorder", &luna_wrapper_wxAuiPaneInfo::_bind_PaneBorder},
	{"PinButton", &luna_wrapper_wxAuiPaneInfo::_bind_PinButton},
	{"Position", &luna_wrapper_wxAuiPaneInfo::_bind_Position},
	{"Resizable", &luna_wrapper_wxAuiPaneInfo::_bind_Resizable},
	{"Right", &luna_wrapper_wxAuiPaneInfo::_bind_Right},
	{"RightDockable", &luna_wrapper_wxAuiPaneInfo::_bind_RightDockable},
	{"Row", &luna_wrapper_wxAuiPaneInfo::_bind_Row},
	{"SafeSet", &luna_wrapper_wxAuiPaneInfo::_bind_SafeSet},
	{"SetFlag", &luna_wrapper_wxAuiPaneInfo::_bind_SetFlag},
	{"Show", &luna_wrapper_wxAuiPaneInfo::_bind_Show},
	{"ToolbarPane", &luna_wrapper_wxAuiPaneInfo::_bind_ToolbarPane},
	{"Top", &luna_wrapper_wxAuiPaneInfo::_bind_Top},
	{"TopDockable", &luna_wrapper_wxAuiPaneInfo::_bind_TopDockable},
	{"Window", &luna_wrapper_wxAuiPaneInfo::_bind_Window},
	{"op_assign", &luna_wrapper_wxAuiPaneInfo::_bind_op_assign},
	{"dynCast", &luna_wrapper_wxAuiPaneInfo::_bind_dynCast},
	{"__eq", &luna_wrapper_wxAuiPaneInfo::_bind___eq},
	{"fromVoid", &luna_wrapper_wxAuiPaneInfo::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxAuiPaneInfo::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< wxAuiPaneInfo >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxAuiPaneInfo >::enumValues[] = {
	{0,0}
};



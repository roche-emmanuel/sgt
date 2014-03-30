#include <plug_common.h>

#include <luna/wrappers/wrapper_wxSizerItem.h>

class luna_wrapper_wxSizerItem {
public:
	typedef Luna< wxSizerItem > luna_t;

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

		wxSizerItem* self= (wxSizerItem*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxSizerItem >::push(L,self,false);
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
		//wxSizerItem* ptr= dynamic_cast< wxSizerItem* >(Luna< wxObject >::check(L,1));
		wxSizerItem* ptr= luna_caster< wxObject, wxSizerItem >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxSizerItem >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>6 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,56813631)) ) return false;
		if( luatop>5 && (lua_isnil(L,6)==0 && !(Luna< wxObject >::check(L,6)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,1)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,85412581) ) return false;
		if( (!(Luna< wxSizerFlags >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>5 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,1)) ) ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,56813631)) ) return false;
		if( luatop>4 && (lua_isnil(L,5)==0 && !(Luna< wxObject >::check(L,5)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< wxObject >::checkSubType< wxSizer >(L,1)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,85412581) ) return false;
		if( (!(Luna< wxSizerFlags >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>5 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< wxObject >::checkSubType< wxSizer >(L,1)) ) ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,56813631)) ) return false;
		if( luatop>4 && (lua_isnil(L,5)==0 && !(Luna< wxObject >::check(L,5)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>7 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_isnil(L,7)==0 && !Luna<void>::has_uniqueid(L,7,56813631)) ) return false;
		if( luatop>6 && (lua_isnil(L,7)==0 && !(Luna< wxObject >::check(L,7)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_7(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,2)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,85412581) ) return false;
		if( (!(Luna< wxSizerFlags >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_8(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>6 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,2)) ) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,56813631)) ) return false;
		if( luatop>5 && (lua_isnil(L,6)==0 && !(Luna< wxObject >::check(L,6)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_9(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxSizer >(L,2)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,85412581) ) return false;
		if( (!(Luna< wxSizerFlags >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_10(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>6 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxSizer >(L,2)) ) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,56813631)) ) return false;
		if( luatop>5 && (lua_isnil(L,6)==0 && !(Luna< wxObject >::check(L,6)) ) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_AssignWindow(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AssignSizer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AssignSpacer_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		if( (!(Luna< wxSize >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AssignSpacer_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CalcMin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_DeleteWindows(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_DetachSizer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetBorder(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFlag(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMinSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetMinSize_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		if( (!(Luna< wxSize >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMinSize_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetPosition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetProportion(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetRatio(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetRect(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSizer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSpacer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetUserData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetWindow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsShown(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsSizer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsSpacer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsWindow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetBorder(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDimension(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,20268751) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFlag(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetId(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetInitSize(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetProportion(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetRatio_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetRatio_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		if( (!(Luna< wxSize >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetRatio_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSizer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSpacer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetUserData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetWindow(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Show(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_CalcMin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_DeleteWindows(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetRect(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetDimension(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,20268751) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxSizerItem::wxSizerItem(int width, int height, int proportion = 0, int flag = 0, int border = 0, wxObject * userData = NULL)
	static wxSizerItem* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxSizerItem::wxSizerItem(int width, int height, int proportion = 0, int flag = 0, int border = 0, wxObject * userData = NULL) function, expected prototype:\nwxSizerItem::wxSizerItem(int width, int height, int proportion = 0, int flag = 0, int border = 0, wxObject * userData = NULL)\nClass arguments details:\narg 6 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int width=(int)lua_tointeger(L,1);
		int height=(int)lua_tointeger(L,2);
		int proportion=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;
		int flag=luatop>3 ? (int)lua_tointeger(L,4) : (int)0;
		int border=luatop>4 ? (int)lua_tointeger(L,5) : (int)0;
		wxObject* userData=luatop>5 ? (Luna< wxObject >::check(L,6)) : (wxObject*)NULL;

		return new wxSizerItem(width, height, proportion, flag, border, userData);
	}

	// wxSizerItem::wxSizerItem(wxWindow * window, const wxSizerFlags & flags)
	static wxSizerItem* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxSizerItem::wxSizerItem(wxWindow * window, const wxSizerFlags & flags) function, expected prototype:\nwxSizerItem::wxSizerItem(wxWindow * window, const wxSizerFlags & flags)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 85412581\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* window=(Luna< wxObject >::checkSubType< wxWindow >(L,1));
		const wxSizerFlags* flags_ptr=(Luna< wxSizerFlags >::check(L,2));
		if( !flags_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg flags in wxSizerItem::wxSizerItem function");
		}
		const wxSizerFlags & flags=*flags_ptr;

		return new wxSizerItem(window, flags);
	}

	// wxSizerItem::wxSizerItem(wxWindow * window, int proportion = 0, int flag = 0, int border = 0, wxObject * userData = NULL)
	static wxSizerItem* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in wxSizerItem::wxSizerItem(wxWindow * window, int proportion = 0, int flag = 0, int border = 0, wxObject * userData = NULL) function, expected prototype:\nwxSizerItem::wxSizerItem(wxWindow * window, int proportion = 0, int flag = 0, int border = 0, wxObject * userData = NULL)\nClass arguments details:\narg 1 ID = 56813631\narg 5 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* window=(Luna< wxObject >::checkSubType< wxWindow >(L,1));
		int proportion=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;
		int flag=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;
		int border=luatop>3 ? (int)lua_tointeger(L,4) : (int)0;
		wxObject* userData=luatop>4 ? (Luna< wxObject >::check(L,5)) : (wxObject*)NULL;

		return new wxSizerItem(window, proportion, flag, border, userData);
	}

	// wxSizerItem::wxSizerItem(wxSizer * sizer, const wxSizerFlags & flags)
	static wxSizerItem* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in wxSizerItem::wxSizerItem(wxSizer * sizer, const wxSizerFlags & flags) function, expected prototype:\nwxSizerItem::wxSizerItem(wxSizer * sizer, const wxSizerFlags & flags)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 85412581\n\n%s",luna_dumpStack(L).c_str());
		}

		wxSizer* sizer=(Luna< wxObject >::checkSubType< wxSizer >(L,1));
		const wxSizerFlags* flags_ptr=(Luna< wxSizerFlags >::check(L,2));
		if( !flags_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg flags in wxSizerItem::wxSizerItem function");
		}
		const wxSizerFlags & flags=*flags_ptr;

		return new wxSizerItem(sizer, flags);
	}

	// wxSizerItem::wxSizerItem(wxSizer * sizer, int proportion = 0, int flag = 0, int border = 0, wxObject * userData = NULL)
	static wxSizerItem* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in wxSizerItem::wxSizerItem(wxSizer * sizer, int proportion = 0, int flag = 0, int border = 0, wxObject * userData = NULL) function, expected prototype:\nwxSizerItem::wxSizerItem(wxSizer * sizer, int proportion = 0, int flag = 0, int border = 0, wxObject * userData = NULL)\nClass arguments details:\narg 1 ID = 56813631\narg 5 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxSizer* sizer=(Luna< wxObject >::checkSubType< wxSizer >(L,1));
		int proportion=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;
		int flag=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;
		int border=luatop>3 ? (int)lua_tointeger(L,4) : (int)0;
		wxObject* userData=luatop>4 ? (Luna< wxObject >::check(L,5)) : (wxObject*)NULL;

		return new wxSizerItem(sizer, proportion, flag, border, userData);
	}

	// wxSizerItem::wxSizerItem(lua_Table * data, int width, int height, int proportion = 0, int flag = 0, int border = 0, wxObject * userData = NULL)
	static wxSizerItem* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in wxSizerItem::wxSizerItem(lua_Table * data, int width, int height, int proportion = 0, int flag = 0, int border = 0, wxObject * userData = NULL) function, expected prototype:\nwxSizerItem::wxSizerItem(lua_Table * data, int width, int height, int proportion = 0, int flag = 0, int border = 0, wxObject * userData = NULL)\nClass arguments details:\narg 7 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int width=(int)lua_tointeger(L,2);
		int height=(int)lua_tointeger(L,3);
		int proportion=luatop>3 ? (int)lua_tointeger(L,4) : (int)0;
		int flag=luatop>4 ? (int)lua_tointeger(L,5) : (int)0;
		int border=luatop>5 ? (int)lua_tointeger(L,6) : (int)0;
		wxObject* userData=luatop>6 ? (Luna< wxObject >::check(L,7)) : (wxObject*)NULL;

		return new wrapper_wxSizerItem(L,NULL, width, height, proportion, flag, border, userData);
	}

	// wxSizerItem::wxSizerItem(lua_Table * data, wxWindow * window, const wxSizerFlags & flags)
	static wxSizerItem* _bind_ctor_overload_7(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_7(L)) {
			luaL_error(L, "luna typecheck failed in wxSizerItem::wxSizerItem(lua_Table * data, wxWindow * window, const wxSizerFlags & flags) function, expected prototype:\nwxSizerItem::wxSizerItem(lua_Table * data, wxWindow * window, const wxSizerFlags & flags)\nClass arguments details:\narg 2 ID = 56813631\narg 3 ID = 85412581\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* window=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		const wxSizerFlags* flags_ptr=(Luna< wxSizerFlags >::check(L,3));
		if( !flags_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg flags in wxSizerItem::wxSizerItem function");
		}
		const wxSizerFlags & flags=*flags_ptr;

		return new wrapper_wxSizerItem(L,NULL, window, flags);
	}

	// wxSizerItem::wxSizerItem(lua_Table * data, wxWindow * window, int proportion = 0, int flag = 0, int border = 0, wxObject * userData = NULL)
	static wxSizerItem* _bind_ctor_overload_8(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_8(L)) {
			luaL_error(L, "luna typecheck failed in wxSizerItem::wxSizerItem(lua_Table * data, wxWindow * window, int proportion = 0, int flag = 0, int border = 0, wxObject * userData = NULL) function, expected prototype:\nwxSizerItem::wxSizerItem(lua_Table * data, wxWindow * window, int proportion = 0, int flag = 0, int border = 0, wxObject * userData = NULL)\nClass arguments details:\narg 2 ID = 56813631\narg 6 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* window=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		int proportion=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;
		int flag=luatop>3 ? (int)lua_tointeger(L,4) : (int)0;
		int border=luatop>4 ? (int)lua_tointeger(L,5) : (int)0;
		wxObject* userData=luatop>5 ? (Luna< wxObject >::check(L,6)) : (wxObject*)NULL;

		return new wrapper_wxSizerItem(L,NULL, window, proportion, flag, border, userData);
	}

	// wxSizerItem::wxSizerItem(lua_Table * data, wxSizer * sizer, const wxSizerFlags & flags)
	static wxSizerItem* _bind_ctor_overload_9(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_9(L)) {
			luaL_error(L, "luna typecheck failed in wxSizerItem::wxSizerItem(lua_Table * data, wxSizer * sizer, const wxSizerFlags & flags) function, expected prototype:\nwxSizerItem::wxSizerItem(lua_Table * data, wxSizer * sizer, const wxSizerFlags & flags)\nClass arguments details:\narg 2 ID = 56813631\narg 3 ID = 85412581\n\n%s",luna_dumpStack(L).c_str());
		}

		wxSizer* sizer=(Luna< wxObject >::checkSubType< wxSizer >(L,2));
		const wxSizerFlags* flags_ptr=(Luna< wxSizerFlags >::check(L,3));
		if( !flags_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg flags in wxSizerItem::wxSizerItem function");
		}
		const wxSizerFlags & flags=*flags_ptr;

		return new wrapper_wxSizerItem(L,NULL, sizer, flags);
	}

	// wxSizerItem::wxSizerItem(lua_Table * data, wxSizer * sizer, int proportion = 0, int flag = 0, int border = 0, wxObject * userData = NULL)
	static wxSizerItem* _bind_ctor_overload_10(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_10(L)) {
			luaL_error(L, "luna typecheck failed in wxSizerItem::wxSizerItem(lua_Table * data, wxSizer * sizer, int proportion = 0, int flag = 0, int border = 0, wxObject * userData = NULL) function, expected prototype:\nwxSizerItem::wxSizerItem(lua_Table * data, wxSizer * sizer, int proportion = 0, int flag = 0, int border = 0, wxObject * userData = NULL)\nClass arguments details:\narg 2 ID = 56813631\narg 6 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxSizer* sizer=(Luna< wxObject >::checkSubType< wxSizer >(L,2));
		int proportion=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;
		int flag=luatop>3 ? (int)lua_tointeger(L,4) : (int)0;
		int border=luatop>4 ? (int)lua_tointeger(L,5) : (int)0;
		wxObject* userData=luatop>5 ? (Luna< wxObject >::check(L,6)) : (wxObject*)NULL;

		return new wrapper_wxSizerItem(L,NULL, sizer, proportion, flag, border, userData);
	}

	// Overload binder for wxSizerItem::wxSizerItem
	static wxSizerItem* _bind_ctor(lua_State *L) {
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

		luaL_error(L, "error in function wxSizerItem, cannot match any of the overloads for function wxSizerItem:\n  wxSizerItem(int, int, int, int, int, wxObject *)\n  wxSizerItem(wxWindow *, const wxSizerFlags &)\n  wxSizerItem(wxWindow *, int, int, int, wxObject *)\n  wxSizerItem(wxSizer *, const wxSizerFlags &)\n  wxSizerItem(wxSizer *, int, int, int, wxObject *)\n  wxSizerItem(lua_Table *, int, int, int, int, int, wxObject *)\n  wxSizerItem(lua_Table *, wxWindow *, const wxSizerFlags &)\n  wxSizerItem(lua_Table *, wxWindow *, int, int, int, wxObject *)\n  wxSizerItem(lua_Table *, wxSizer *, const wxSizerFlags &)\n  wxSizerItem(lua_Table *, wxSizer *, int, int, int, wxObject *)\n");
		return NULL;
	}


	// Function binds:
	// void wxSizerItem::AssignWindow(wxWindow * window)
	static int _bind_AssignWindow(lua_State *L) {
		if (!_lg_typecheck_AssignWindow(L)) {
			luaL_error(L, "luna typecheck failed in void wxSizerItem::AssignWindow(wxWindow * window) function, expected prototype:\nvoid wxSizerItem::AssignWindow(wxWindow * window)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* window=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxSizerItem* self=Luna< wxObject >::checkSubType< wxSizerItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSizerItem::AssignWindow(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AssignWindow(window);

		return 0;
	}

	// void wxSizerItem::AssignSizer(wxSizer * sizer)
	static int _bind_AssignSizer(lua_State *L) {
		if (!_lg_typecheck_AssignSizer(L)) {
			luaL_error(L, "luna typecheck failed in void wxSizerItem::AssignSizer(wxSizer * sizer) function, expected prototype:\nvoid wxSizerItem::AssignSizer(wxSizer * sizer)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxSizer* sizer=(Luna< wxObject >::checkSubType< wxSizer >(L,2));

		wxSizerItem* self=Luna< wxObject >::checkSubType< wxSizerItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSizerItem::AssignSizer(wxSizer *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AssignSizer(sizer);

		return 0;
	}

	// void wxSizerItem::AssignSpacer(const wxSize & size)
	static int _bind_AssignSpacer_overload_1(lua_State *L) {
		if (!_lg_typecheck_AssignSpacer_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxSizerItem::AssignSpacer(const wxSize & size) function, expected prototype:\nvoid wxSizerItem::AssignSpacer(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxSizerItem::AssignSpacer function");
		}
		const wxSize & size=*size_ptr;

		wxSizerItem* self=Luna< wxObject >::checkSubType< wxSizerItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSizerItem::AssignSpacer(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AssignSpacer(size);

		return 0;
	}

	// void wxSizerItem::AssignSpacer(int w, int h)
	static int _bind_AssignSpacer_overload_2(lua_State *L) {
		if (!_lg_typecheck_AssignSpacer_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxSizerItem::AssignSpacer(int w, int h) function, expected prototype:\nvoid wxSizerItem::AssignSpacer(int w, int h)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int w=(int)lua_tointeger(L,2);
		int h=(int)lua_tointeger(L,3);

		wxSizerItem* self=Luna< wxObject >::checkSubType< wxSizerItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSizerItem::AssignSpacer(int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AssignSpacer(w, h);

		return 0;
	}

	// Overload binder for wxSizerItem::AssignSpacer
	static int _bind_AssignSpacer(lua_State *L) {
		if (_lg_typecheck_AssignSpacer_overload_1(L)) return _bind_AssignSpacer_overload_1(L);
		if (_lg_typecheck_AssignSpacer_overload_2(L)) return _bind_AssignSpacer_overload_2(L);

		luaL_error(L, "error in function AssignSpacer, cannot match any of the overloads for function AssignSpacer:\n  AssignSpacer(const wxSize &)\n  AssignSpacer(int, int)\n");
		return 0;
	}

	// wxSize wxSizerItem::CalcMin()
	static int _bind_CalcMin(lua_State *L) {
		if (!_lg_typecheck_CalcMin(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxSizerItem::CalcMin() function, expected prototype:\nwxSize wxSizerItem::CalcMin()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSizerItem* self=Luna< wxObject >::checkSubType< wxSizerItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxSizerItem::CalcMin(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->CalcMin();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// void wxSizerItem::DeleteWindows()
	static int _bind_DeleteWindows(lua_State *L) {
		if (!_lg_typecheck_DeleteWindows(L)) {
			luaL_error(L, "luna typecheck failed in void wxSizerItem::DeleteWindows() function, expected prototype:\nvoid wxSizerItem::DeleteWindows()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSizerItem* self=Luna< wxObject >::checkSubType< wxSizerItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSizerItem::DeleteWindows(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DeleteWindows();

		return 0;
	}

	// void wxSizerItem::DetachSizer()
	static int _bind_DetachSizer(lua_State *L) {
		if (!_lg_typecheck_DetachSizer(L)) {
			luaL_error(L, "luna typecheck failed in void wxSizerItem::DetachSizer() function, expected prototype:\nvoid wxSizerItem::DetachSizer()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSizerItem* self=Luna< wxObject >::checkSubType< wxSizerItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSizerItem::DetachSizer(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DetachSizer();

		return 0;
	}

	// int wxSizerItem::GetBorder() const
	static int _bind_GetBorder(lua_State *L) {
		if (!_lg_typecheck_GetBorder(L)) {
			luaL_error(L, "luna typecheck failed in int wxSizerItem::GetBorder() const function, expected prototype:\nint wxSizerItem::GetBorder() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSizerItem* self=Luna< wxObject >::checkSubType< wxSizerItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxSizerItem::GetBorder() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetBorder();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxSizerItem::GetFlag() const
	static int _bind_GetFlag(lua_State *L) {
		if (!_lg_typecheck_GetFlag(L)) {
			luaL_error(L, "luna typecheck failed in int wxSizerItem::GetFlag() const function, expected prototype:\nint wxSizerItem::GetFlag() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSizerItem* self=Luna< wxObject >::checkSubType< wxSizerItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxSizerItem::GetFlag() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetFlag();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxSizerItem::GetId() const
	static int _bind_GetId(lua_State *L) {
		if (!_lg_typecheck_GetId(L)) {
			luaL_error(L, "luna typecheck failed in int wxSizerItem::GetId() const function, expected prototype:\nint wxSizerItem::GetId() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSizerItem* self=Luna< wxObject >::checkSubType< wxSizerItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxSizerItem::GetId() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetId();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxSize wxSizerItem::GetMinSize() const
	static int _bind_GetMinSize(lua_State *L) {
		if (!_lg_typecheck_GetMinSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxSizerItem::GetMinSize() const function, expected prototype:\nwxSize wxSizerItem::GetMinSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSizerItem* self=Luna< wxObject >::checkSubType< wxSizerItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxSizerItem::GetMinSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->GetMinSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// void wxSizerItem::SetMinSize(const wxSize & size)
	static int _bind_SetMinSize_overload_1(lua_State *L) {
		if (!_lg_typecheck_SetMinSize_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxSizerItem::SetMinSize(const wxSize & size) function, expected prototype:\nvoid wxSizerItem::SetMinSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxSizerItem::SetMinSize function");
		}
		const wxSize & size=*size_ptr;

		wxSizerItem* self=Luna< wxObject >::checkSubType< wxSizerItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSizerItem::SetMinSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetMinSize(size);

		return 0;
	}

	// void wxSizerItem::SetMinSize(int x, int y)
	static int _bind_SetMinSize_overload_2(lua_State *L) {
		if (!_lg_typecheck_SetMinSize_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxSizerItem::SetMinSize(int x, int y) function, expected prototype:\nvoid wxSizerItem::SetMinSize(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxSizerItem* self=Luna< wxObject >::checkSubType< wxSizerItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSizerItem::SetMinSize(int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetMinSize(x, y);

		return 0;
	}

	// Overload binder for wxSizerItem::SetMinSize
	static int _bind_SetMinSize(lua_State *L) {
		if (_lg_typecheck_SetMinSize_overload_1(L)) return _bind_SetMinSize_overload_1(L);
		if (_lg_typecheck_SetMinSize_overload_2(L)) return _bind_SetMinSize_overload_2(L);

		luaL_error(L, "error in function SetMinSize, cannot match any of the overloads for function SetMinSize:\n  SetMinSize(const wxSize &)\n  SetMinSize(int, int)\n");
		return 0;
	}

	// wxPoint wxSizerItem::GetPosition() const
	static int _bind_GetPosition(lua_State *L) {
		if (!_lg_typecheck_GetPosition(L)) {
			luaL_error(L, "luna typecheck failed in wxPoint wxSizerItem::GetPosition() const function, expected prototype:\nwxPoint wxSizerItem::GetPosition() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSizerItem* self=Luna< wxObject >::checkSubType< wxSizerItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPoint wxSizerItem::GetPosition() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPoint stack_lret = self->GetPosition();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// int wxSizerItem::GetProportion() const
	static int _bind_GetProportion(lua_State *L) {
		if (!_lg_typecheck_GetProportion(L)) {
			luaL_error(L, "luna typecheck failed in int wxSizerItem::GetProportion() const function, expected prototype:\nint wxSizerItem::GetProportion() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSizerItem* self=Luna< wxObject >::checkSubType< wxSizerItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxSizerItem::GetProportion() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetProportion();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float wxSizerItem::GetRatio() const
	static int _bind_GetRatio(lua_State *L) {
		if (!_lg_typecheck_GetRatio(L)) {
			luaL_error(L, "luna typecheck failed in float wxSizerItem::GetRatio() const function, expected prototype:\nfloat wxSizerItem::GetRatio() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSizerItem* self=Luna< wxObject >::checkSubType< wxSizerItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float wxSizerItem::GetRatio() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->GetRatio();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxRect wxSizerItem::GetRect()
	static int _bind_GetRect(lua_State *L) {
		if (!_lg_typecheck_GetRect(L)) {
			luaL_error(L, "luna typecheck failed in wxRect wxSizerItem::GetRect() function, expected prototype:\nwxRect wxSizerItem::GetRect()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSizerItem* self=Luna< wxObject >::checkSubType< wxSizerItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxRect wxSizerItem::GetRect(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxRect stack_lret = self->GetRect();
		wxRect* lret = new wxRect(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRect >::push(L,lret,true);

		return 1;
	}

	// wxSize wxSizerItem::GetSize() const
	static int _bind_GetSize(lua_State *L) {
		if (!_lg_typecheck_GetSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxSizerItem::GetSize() const function, expected prototype:\nwxSize wxSizerItem::GetSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSizerItem* self=Luna< wxObject >::checkSubType< wxSizerItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxSizerItem::GetSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->GetSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSizer * wxSizerItem::GetSizer() const
	static int _bind_GetSizer(lua_State *L) {
		if (!_lg_typecheck_GetSizer(L)) {
			luaL_error(L, "luna typecheck failed in wxSizer * wxSizerItem::GetSizer() const function, expected prototype:\nwxSizer * wxSizerItem::GetSizer() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSizerItem* self=Luna< wxObject >::checkSubType< wxSizerItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSizer * wxSizerItem::GetSizer() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSizer * lret = self->GetSizer();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizer >::push(L,lret,false);

		return 1;
	}

	// wxSize wxSizerItem::GetSpacer() const
	static int _bind_GetSpacer(lua_State *L) {
		if (!_lg_typecheck_GetSpacer(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxSizerItem::GetSpacer() const function, expected prototype:\nwxSize wxSizerItem::GetSpacer() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSizerItem* self=Luna< wxObject >::checkSubType< wxSizerItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxSizerItem::GetSpacer() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->GetSpacer();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxObject * wxSizerItem::GetUserData() const
	static int _bind_GetUserData(lua_State *L) {
		if (!_lg_typecheck_GetUserData(L)) {
			luaL_error(L, "luna typecheck failed in wxObject * wxSizerItem::GetUserData() const function, expected prototype:\nwxObject * wxSizerItem::GetUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSizerItem* self=Luna< wxObject >::checkSubType< wxSizerItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxObject * wxSizerItem::GetUserData() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxObject * lret = self->GetUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxObject >::push(L,lret,false);

		return 1;
	}

	// wxWindow * wxSizerItem::GetWindow() const
	static int _bind_GetWindow(lua_State *L) {
		if (!_lg_typecheck_GetWindow(L)) {
			luaL_error(L, "luna typecheck failed in wxWindow * wxSizerItem::GetWindow() const function, expected prototype:\nwxWindow * wxSizerItem::GetWindow() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSizerItem* self=Luna< wxObject >::checkSubType< wxSizerItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxWindow * wxSizerItem::GetWindow() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxWindow * lret = self->GetWindow();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}

	// bool wxSizerItem::IsShown() const
	static int _bind_IsShown(lua_State *L) {
		if (!_lg_typecheck_IsShown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSizerItem::IsShown() const function, expected prototype:\nbool wxSizerItem::IsShown() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSizerItem* self=Luna< wxObject >::checkSubType< wxSizerItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSizerItem::IsShown() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsShown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSizerItem::IsSizer() const
	static int _bind_IsSizer(lua_State *L) {
		if (!_lg_typecheck_IsSizer(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSizerItem::IsSizer() const function, expected prototype:\nbool wxSizerItem::IsSizer() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSizerItem* self=Luna< wxObject >::checkSubType< wxSizerItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSizerItem::IsSizer() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsSizer();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSizerItem::IsSpacer() const
	static int _bind_IsSpacer(lua_State *L) {
		if (!_lg_typecheck_IsSpacer(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSizerItem::IsSpacer() const function, expected prototype:\nbool wxSizerItem::IsSpacer() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSizerItem* self=Luna< wxObject >::checkSubType< wxSizerItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSizerItem::IsSpacer() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsSpacer();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSizerItem::IsWindow() const
	static int _bind_IsWindow(lua_State *L) {
		if (!_lg_typecheck_IsWindow(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSizerItem::IsWindow() const function, expected prototype:\nbool wxSizerItem::IsWindow() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSizerItem* self=Luna< wxObject >::checkSubType< wxSizerItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSizerItem::IsWindow() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxSizerItem::SetBorder(int border)
	static int _bind_SetBorder(lua_State *L) {
		if (!_lg_typecheck_SetBorder(L)) {
			luaL_error(L, "luna typecheck failed in void wxSizerItem::SetBorder(int border) function, expected prototype:\nvoid wxSizerItem::SetBorder(int border)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int border=(int)lua_tointeger(L,2);

		wxSizerItem* self=Luna< wxObject >::checkSubType< wxSizerItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSizerItem::SetBorder(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetBorder(border);

		return 0;
	}

	// void wxSizerItem::SetDimension(const wxPoint & pos, const wxSize & size)
	static int _bind_SetDimension(lua_State *L) {
		if (!_lg_typecheck_SetDimension(L)) {
			luaL_error(L, "luna typecheck failed in void wxSizerItem::SetDimension(const wxPoint & pos, const wxSize & size) function, expected prototype:\nvoid wxSizerItem::SetDimension(const wxPoint & pos, const wxSize & size)\nClass arguments details:\narg 1 ID = 25723480\narg 2 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint* pos_ptr=(Luna< wxPoint >::check(L,2));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxSizerItem::SetDimension function");
		}
		const wxPoint & pos=*pos_ptr;
		const wxSize* size_ptr=(Luna< wxSize >::check(L,3));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxSizerItem::SetDimension function");
		}
		const wxSize & size=*size_ptr;

		wxSizerItem* self=Luna< wxObject >::checkSubType< wxSizerItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSizerItem::SetDimension(const wxPoint &, const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetDimension(pos, size);

		return 0;
	}

	// void wxSizerItem::SetFlag(int flag)
	static int _bind_SetFlag(lua_State *L) {
		if (!_lg_typecheck_SetFlag(L)) {
			luaL_error(L, "luna typecheck failed in void wxSizerItem::SetFlag(int flag) function, expected prototype:\nvoid wxSizerItem::SetFlag(int flag)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int flag=(int)lua_tointeger(L,2);

		wxSizerItem* self=Luna< wxObject >::checkSubType< wxSizerItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSizerItem::SetFlag(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetFlag(flag);

		return 0;
	}

	// void wxSizerItem::SetId(int id)
	static int _bind_SetId(lua_State *L) {
		if (!_lg_typecheck_SetId(L)) {
			luaL_error(L, "luna typecheck failed in void wxSizerItem::SetId(int id) function, expected prototype:\nvoid wxSizerItem::SetId(int id)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int id=(int)lua_tointeger(L,2);

		wxSizerItem* self=Luna< wxObject >::checkSubType< wxSizerItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSizerItem::SetId(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetId(id);

		return 0;
	}

	// void wxSizerItem::SetInitSize(int x, int y)
	static int _bind_SetInitSize(lua_State *L) {
		if (!_lg_typecheck_SetInitSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxSizerItem::SetInitSize(int x, int y) function, expected prototype:\nvoid wxSizerItem::SetInitSize(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxSizerItem* self=Luna< wxObject >::checkSubType< wxSizerItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSizerItem::SetInitSize(int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetInitSize(x, y);

		return 0;
	}

	// void wxSizerItem::SetProportion(int proportion)
	static int _bind_SetProportion(lua_State *L) {
		if (!_lg_typecheck_SetProportion(L)) {
			luaL_error(L, "luna typecheck failed in void wxSizerItem::SetProportion(int proportion) function, expected prototype:\nvoid wxSizerItem::SetProportion(int proportion)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int proportion=(int)lua_tointeger(L,2);

		wxSizerItem* self=Luna< wxObject >::checkSubType< wxSizerItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSizerItem::SetProportion(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetProportion(proportion);

		return 0;
	}

	// void wxSizerItem::SetRatio(int width, int height)
	static int _bind_SetRatio_overload_1(lua_State *L) {
		if (!_lg_typecheck_SetRatio_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxSizerItem::SetRatio(int width, int height) function, expected prototype:\nvoid wxSizerItem::SetRatio(int width, int height)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int width=(int)lua_tointeger(L,2);
		int height=(int)lua_tointeger(L,3);

		wxSizerItem* self=Luna< wxObject >::checkSubType< wxSizerItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSizerItem::SetRatio(int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetRatio(width, height);

		return 0;
	}

	// void wxSizerItem::SetRatio(wxSize size)
	static int _bind_SetRatio_overload_2(lua_State *L) {
		if (!_lg_typecheck_SetRatio_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxSizerItem::SetRatio(wxSize size) function, expected prototype:\nvoid wxSizerItem::SetRatio(wxSize size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxSizerItem::SetRatio function");
		}
		wxSize size=*size_ptr;

		wxSizerItem* self=Luna< wxObject >::checkSubType< wxSizerItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSizerItem::SetRatio(wxSize). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetRatio(size);

		return 0;
	}

	// void wxSizerItem::SetRatio(float ratio)
	static int _bind_SetRatio_overload_3(lua_State *L) {
		if (!_lg_typecheck_SetRatio_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in void wxSizerItem::SetRatio(float ratio) function, expected prototype:\nvoid wxSizerItem::SetRatio(float ratio)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float ratio=(float)lua_tonumber(L,2);

		wxSizerItem* self=Luna< wxObject >::checkSubType< wxSizerItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSizerItem::SetRatio(float). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetRatio(ratio);

		return 0;
	}

	// Overload binder for wxSizerItem::SetRatio
	static int _bind_SetRatio(lua_State *L) {
		if (_lg_typecheck_SetRatio_overload_1(L)) return _bind_SetRatio_overload_1(L);
		if (_lg_typecheck_SetRatio_overload_2(L)) return _bind_SetRatio_overload_2(L);
		if (_lg_typecheck_SetRatio_overload_3(L)) return _bind_SetRatio_overload_3(L);

		luaL_error(L, "error in function SetRatio, cannot match any of the overloads for function SetRatio:\n  SetRatio(int, int)\n  SetRatio(wxSize)\n  SetRatio(float)\n");
		return 0;
	}

	// void wxSizerItem::SetSizer(wxSizer * sizer)
	static int _bind_SetSizer(lua_State *L) {
		if (!_lg_typecheck_SetSizer(L)) {
			luaL_error(L, "luna typecheck failed in void wxSizerItem::SetSizer(wxSizer * sizer) function, expected prototype:\nvoid wxSizerItem::SetSizer(wxSizer * sizer)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxSizer* sizer=(Luna< wxObject >::checkSubType< wxSizer >(L,2));

		wxSizerItem* self=Luna< wxObject >::checkSubType< wxSizerItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSizerItem::SetSizer(wxSizer *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetSizer(sizer);

		return 0;
	}

	// void wxSizerItem::SetSpacer(const wxSize & size)
	static int _bind_SetSpacer(lua_State *L) {
		if (!_lg_typecheck_SetSpacer(L)) {
			luaL_error(L, "luna typecheck failed in void wxSizerItem::SetSpacer(const wxSize & size) function, expected prototype:\nvoid wxSizerItem::SetSpacer(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxSizerItem::SetSpacer function");
		}
		const wxSize & size=*size_ptr;

		wxSizerItem* self=Luna< wxObject >::checkSubType< wxSizerItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSizerItem::SetSpacer(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetSpacer(size);

		return 0;
	}

	// void wxSizerItem::SetUserData(wxObject * userData)
	static int _bind_SetUserData(lua_State *L) {
		if (!_lg_typecheck_SetUserData(L)) {
			luaL_error(L, "luna typecheck failed in void wxSizerItem::SetUserData(wxObject * userData) function, expected prototype:\nvoid wxSizerItem::SetUserData(wxObject * userData)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxObject* userData=(Luna< wxObject >::check(L,2));

		wxSizerItem* self=Luna< wxObject >::checkSubType< wxSizerItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSizerItem::SetUserData(wxObject *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetUserData(userData);

		return 0;
	}

	// void wxSizerItem::SetWindow(wxWindow * window)
	static int _bind_SetWindow(lua_State *L) {
		if (!_lg_typecheck_SetWindow(L)) {
			luaL_error(L, "luna typecheck failed in void wxSizerItem::SetWindow(wxWindow * window) function, expected prototype:\nvoid wxSizerItem::SetWindow(wxWindow * window)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* window=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxSizerItem* self=Luna< wxObject >::checkSubType< wxSizerItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSizerItem::SetWindow(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetWindow(window);

		return 0;
	}

	// void wxSizerItem::Show(bool show)
	static int _bind_Show(lua_State *L) {
		if (!_lg_typecheck_Show(L)) {
			luaL_error(L, "luna typecheck failed in void wxSizerItem::Show(bool show) function, expected prototype:\nvoid wxSizerItem::Show(bool show)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool show=(bool)(lua_toboolean(L,2)==1);

		wxSizerItem* self=Luna< wxObject >::checkSubType< wxSizerItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSizerItem::Show(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Show(show);

		return 0;
	}

	// wxClassInfo * wxSizerItem::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxSizerItem::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxSizerItem::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSizerItem* self=Luna< wxObject >::checkSubType< wxSizerItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxSizerItem::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxSizerItem::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxSize wxSizerItem::base_CalcMin()
	static int _bind_base_CalcMin(lua_State *L) {
		if (!_lg_typecheck_base_CalcMin(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxSizerItem::base_CalcMin() function, expected prototype:\nwxSize wxSizerItem::base_CalcMin()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSizerItem* self=Luna< wxObject >::checkSubType< wxSizerItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxSizerItem::base_CalcMin(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxSizerItem::CalcMin();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// void wxSizerItem::base_DeleteWindows()
	static int _bind_base_DeleteWindows(lua_State *L) {
		if (!_lg_typecheck_base_DeleteWindows(L)) {
			luaL_error(L, "luna typecheck failed in void wxSizerItem::base_DeleteWindows() function, expected prototype:\nvoid wxSizerItem::base_DeleteWindows()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSizerItem* self=Luna< wxObject >::checkSubType< wxSizerItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSizerItem::base_DeleteWindows(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSizerItem::DeleteWindows();

		return 0;
	}

	// wxRect wxSizerItem::base_GetRect()
	static int _bind_base_GetRect(lua_State *L) {
		if (!_lg_typecheck_base_GetRect(L)) {
			luaL_error(L, "luna typecheck failed in wxRect wxSizerItem::base_GetRect() function, expected prototype:\nwxRect wxSizerItem::base_GetRect()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSizerItem* self=Luna< wxObject >::checkSubType< wxSizerItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxRect wxSizerItem::base_GetRect(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxRect stack_lret = self->wxSizerItem::GetRect();
		wxRect* lret = new wxRect(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRect >::push(L,lret,true);

		return 1;
	}

	// wxSize wxSizerItem::base_GetSize() const
	static int _bind_base_GetSize(lua_State *L) {
		if (!_lg_typecheck_base_GetSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxSizerItem::base_GetSize() const function, expected prototype:\nwxSize wxSizerItem::base_GetSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSizerItem* self=Luna< wxObject >::checkSubType< wxSizerItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxSizerItem::base_GetSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxSizerItem::GetSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// void wxSizerItem::base_SetDimension(const wxPoint & pos, const wxSize & size)
	static int _bind_base_SetDimension(lua_State *L) {
		if (!_lg_typecheck_base_SetDimension(L)) {
			luaL_error(L, "luna typecheck failed in void wxSizerItem::base_SetDimension(const wxPoint & pos, const wxSize & size) function, expected prototype:\nvoid wxSizerItem::base_SetDimension(const wxPoint & pos, const wxSize & size)\nClass arguments details:\narg 1 ID = 25723480\narg 2 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint* pos_ptr=(Luna< wxPoint >::check(L,2));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxSizerItem::base_SetDimension function");
		}
		const wxPoint & pos=*pos_ptr;
		const wxSize* size_ptr=(Luna< wxSize >::check(L,3));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxSizerItem::base_SetDimension function");
		}
		const wxSize & size=*size_ptr;

		wxSizerItem* self=Luna< wxObject >::checkSubType< wxSizerItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSizerItem::base_SetDimension(const wxPoint &, const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSizerItem::SetDimension(pos, size);

		return 0;
	}


	// Operator binds:

};

wxSizerItem* LunaTraits< wxSizerItem >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxSizerItem::_bind_ctor(L);
}

void LunaTraits< wxSizerItem >::_bind_dtor(wxSizerItem* obj) {
	delete obj;
}

const char LunaTraits< wxSizerItem >::className[] = "wxSizerItem";
const char LunaTraits< wxSizerItem >::fullName[] = "wxSizerItem";
const char LunaTraits< wxSizerItem >::moduleName[] = "wx";
const char* LunaTraits< wxSizerItem >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxSizerItem >::hash = 99626637;
const int LunaTraits< wxSizerItem >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxSizerItem >::methods[] = {
	{"AssignWindow", &luna_wrapper_wxSizerItem::_bind_AssignWindow},
	{"AssignSizer", &luna_wrapper_wxSizerItem::_bind_AssignSizer},
	{"AssignSpacer", &luna_wrapper_wxSizerItem::_bind_AssignSpacer},
	{"CalcMin", &luna_wrapper_wxSizerItem::_bind_CalcMin},
	{"DeleteWindows", &luna_wrapper_wxSizerItem::_bind_DeleteWindows},
	{"DetachSizer", &luna_wrapper_wxSizerItem::_bind_DetachSizer},
	{"GetBorder", &luna_wrapper_wxSizerItem::_bind_GetBorder},
	{"GetFlag", &luna_wrapper_wxSizerItem::_bind_GetFlag},
	{"GetId", &luna_wrapper_wxSizerItem::_bind_GetId},
	{"GetMinSize", &luna_wrapper_wxSizerItem::_bind_GetMinSize},
	{"SetMinSize", &luna_wrapper_wxSizerItem::_bind_SetMinSize},
	{"GetPosition", &luna_wrapper_wxSizerItem::_bind_GetPosition},
	{"GetProportion", &luna_wrapper_wxSizerItem::_bind_GetProportion},
	{"GetRatio", &luna_wrapper_wxSizerItem::_bind_GetRatio},
	{"GetRect", &luna_wrapper_wxSizerItem::_bind_GetRect},
	{"GetSize", &luna_wrapper_wxSizerItem::_bind_GetSize},
	{"GetSizer", &luna_wrapper_wxSizerItem::_bind_GetSizer},
	{"GetSpacer", &luna_wrapper_wxSizerItem::_bind_GetSpacer},
	{"GetUserData", &luna_wrapper_wxSizerItem::_bind_GetUserData},
	{"GetWindow", &luna_wrapper_wxSizerItem::_bind_GetWindow},
	{"IsShown", &luna_wrapper_wxSizerItem::_bind_IsShown},
	{"IsSizer", &luna_wrapper_wxSizerItem::_bind_IsSizer},
	{"IsSpacer", &luna_wrapper_wxSizerItem::_bind_IsSpacer},
	{"IsWindow", &luna_wrapper_wxSizerItem::_bind_IsWindow},
	{"SetBorder", &luna_wrapper_wxSizerItem::_bind_SetBorder},
	{"SetDimension", &luna_wrapper_wxSizerItem::_bind_SetDimension},
	{"SetFlag", &luna_wrapper_wxSizerItem::_bind_SetFlag},
	{"SetId", &luna_wrapper_wxSizerItem::_bind_SetId},
	{"SetInitSize", &luna_wrapper_wxSizerItem::_bind_SetInitSize},
	{"SetProportion", &luna_wrapper_wxSizerItem::_bind_SetProportion},
	{"SetRatio", &luna_wrapper_wxSizerItem::_bind_SetRatio},
	{"SetSizer", &luna_wrapper_wxSizerItem::_bind_SetSizer},
	{"SetSpacer", &luna_wrapper_wxSizerItem::_bind_SetSpacer},
	{"SetUserData", &luna_wrapper_wxSizerItem::_bind_SetUserData},
	{"SetWindow", &luna_wrapper_wxSizerItem::_bind_SetWindow},
	{"Show", &luna_wrapper_wxSizerItem::_bind_Show},
	{"base_GetClassInfo", &luna_wrapper_wxSizerItem::_bind_base_GetClassInfo},
	{"base_CalcMin", &luna_wrapper_wxSizerItem::_bind_base_CalcMin},
	{"base_DeleteWindows", &luna_wrapper_wxSizerItem::_bind_base_DeleteWindows},
	{"base_GetRect", &luna_wrapper_wxSizerItem::_bind_base_GetRect},
	{"base_GetSize", &luna_wrapper_wxSizerItem::_bind_base_GetSize},
	{"base_SetDimension", &luna_wrapper_wxSizerItem::_bind_base_SetDimension},
	{"fromVoid", &luna_wrapper_wxSizerItem::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxSizerItem::_bind_asVoid},
	{"getTable", &luna_wrapper_wxSizerItem::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxSizerItem >::converters[] = {
	{"wxObject", &luna_wrapper_wxSizerItem::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxSizerItem >::enumValues[] = {
	{0,0}
};



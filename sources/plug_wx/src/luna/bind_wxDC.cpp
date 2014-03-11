#include <plug_common.h>

#include <luna/wrappers/wrapper_wxDC.h>

class luna_wrapper_wxDC {
public:
	typedef Luna< wxDC > luna_t;

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

		wxDC* self= (wxDC*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxDC >::push(L,self,false);
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
		//wxDC* ptr= dynamic_cast< wxDC* >(Luna< wxObject >::check(L,1));
		wxDC* ptr= luna_caster< wxObject, wxDC >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxDC >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_DeviceToLogicalX(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DeviceToLogicalXRel(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DeviceToLogicalY(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DeviceToLogicalYRel(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_LogicalToDeviceX(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_LogicalToDeviceXRel(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_LogicalToDeviceY(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_LogicalToDeviceYRel(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Clear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_DrawArc_overload_1(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawArc_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		if( (!(Luna< wxPoint >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,25723480) ) return false;
		if( (!(Luna< wxPoint >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,25723480) ) return false;
		if( (!(Luna< wxPoint >::check(L,4))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawBitmap_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxBitmap >(L,2))) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && lua_isboolean(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawBitmap_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxBitmap >(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,25723480) ) return false;
		if( (!(Luna< wxPoint >::check(L,3))) ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawCheckMark_overload_1(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawCheckMark_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20234418) ) return false;
		if( (!(Luna< wxRect >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawCircle_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawCircle_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		if( (!(Luna< wxPoint >::check(L,2))) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawEllipse_overload_1(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawEllipse_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		if( (!(Luna< wxPoint >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,20268751) ) return false;
		if( (!(Luna< wxSize >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawEllipse_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20234418) ) return false;
		if( (!(Luna< wxRect >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawEllipticArc_overload_1(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( lua_type(L,6)!=LUA_TNUMBER ) return false;
		if( lua_type(L,7)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawEllipticArc_overload_2(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		if( (!(Luna< wxPoint >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,20268751) ) return false;
		if( (!(Luna< wxSize >::check(L,3))) ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawIcon_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxIcon >(L,2))) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawIcon_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxIcon >(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,25723480) ) return false;
		if( (!(Luna< wxPoint >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawLabel_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>7 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxBitmap >(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,20234418) ) return false;
		if( (!(Luna< wxRect >::check(L,4))) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_isnil(L,7)==0 && !Luna<void>::has_uniqueid(L,7,20234418)) ) return false;
		if( luatop>6 && (lua_isnil(L,7)==0 && !(Luna< wxRect >::check(L,7)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawLabel_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,3,20234418) ) return false;
		if( (!(Luna< wxRect >::check(L,3))) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawLine_overload_1(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawLine_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		if( (!(Luna< wxPoint >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,25723480) ) return false;
		if( (!(Luna< wxPoint >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawLines(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,74412068)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawPoint_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawPoint_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		if( (!(Luna< wxPoint >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawPolygon(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,74412068)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawRectangle_overload_1(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawRectangle_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		if( (!(Luna< wxPoint >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,20268751) ) return false;
		if( (!(Luna< wxSize >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawRectangle_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20234418) ) return false;
		if( (!(Luna< wxRect >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawRotatedText_overload_1(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawRotatedText_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,3,25723480) ) return false;
		if( (!(Luna< wxPoint >::check(L,3))) ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawRoundedRectangle_overload_1(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( lua_type(L,6)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawRoundedRectangle_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		if( (!(Luna< wxPoint >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,20268751) ) return false;
		if( (!(Luna< wxSize >::check(L,3))) ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawRoundedRectangle_overload_3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20234418) ) return false;
		if( (!(Luna< wxRect >::check(L,2))) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawSpline_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,74412068)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxPointList >::check(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawSpline_overload_2(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawText_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawText_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,3,25723480) ) return false;
		if( (!(Luna< wxPoint >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GradientFillConcentric_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20234418) ) return false;
		if( (!(Luna< wxRect >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxColour >(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxColour >(L,4))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GradientFillConcentric_overload_2(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20234418) ) return false;
		if( (!(Luna< wxRect >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxColour >(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxColour >(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,25723480) ) return false;
		if( (!(Luna< wxPoint >::check(L,5))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GradientFillLinear(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20234418) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,56813631) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FloodFill_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxColour >(L,4))) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FloodFill_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		if( (!(Luna< wxPoint >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxColour >(L,3))) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CrossHair_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CrossHair_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		if( (!(Luna< wxPoint >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DestroyClippingRegion(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetClippingBox(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetClippingRegion_overload_1(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetClippingRegion_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		if( (!(Luna< wxPoint >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,20268751) ) return false;
		if( (!(Luna< wxSize >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetClippingRegion_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20234418) ) return false;
		if( (!(Luna< wxRect >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDeviceClippingRegion(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetCharHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetCharWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFontMetrics(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMultiLineTextExtent_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>6 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
		if( luatop>4 && (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,3625364)) ) return false;
		if( luatop>5 && (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,56813631)) ) return false;
		if( luatop>5 && (lua_isnil(L,6)==0 && !(Luna< wxObject >::checkSubType< wxFont >(L,6)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetMultiLineTextExtent_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetPartialTextExtents(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,3,47342076) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetTextExtent_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>7 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
		if( luatop>4 && (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,3625364)) ) return false;
		if( luatop>5 && (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,3625364)) ) return false;
		if( luatop>6 && (lua_isnil(L,7)==0 && !Luna<void>::has_uniqueid(L,7,56813631)) ) return false;
		if( luatop>6 && (lua_isnil(L,7)==0 && !(Luna< wxObject >::checkSubType< wxFont >(L,7)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetTextExtent_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetBackgroundMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFont(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLayoutDirection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetTextBackground(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetTextForeground(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetBackgroundMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFont(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetTextBackground(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetTextForeground(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetLayoutDirection(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CalcBoundingBox(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MaxX(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_MaxY(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_MinX(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_MinY(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ResetBoundingBox(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_StartDoc(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_StartPage(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_EndDoc(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_EndPage(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Blit(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<8 || luatop>12 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,56813631)) ) return false;
		if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( (lua_type(L,8)!=LUA_TNUMBER || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		if( luatop>8 && (lua_type(L,9)!=LUA_TNUMBER || lua_tointeger(L,9) != lua_tonumber(L,9)) ) return false;
		if( luatop>9 && lua_isboolean(L,10)==0 ) return false;
		if( luatop>10 && (lua_type(L,11)!=LUA_TNUMBER || lua_tointeger(L,11) != lua_tonumber(L,11)) ) return false;
		if( luatop>11 && (lua_type(L,12)!=LUA_TNUMBER || lua_tointeger(L,12) != lua_tonumber(L,12)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_StretchBlit(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<10 || luatop>14 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,56813631)) ) return false;
		if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( (lua_type(L,8)!=LUA_TNUMBER || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		if( (lua_type(L,9)!=LUA_TNUMBER || lua_tointeger(L,9) != lua_tonumber(L,9)) ) return false;
		if( (lua_type(L,10)!=LUA_TNUMBER || lua_tointeger(L,10) != lua_tonumber(L,10)) ) return false;
		if( luatop>10 && (lua_type(L,11)!=LUA_TNUMBER || lua_tointeger(L,11) != lua_tonumber(L,11)) ) return false;
		if( luatop>11 && lua_isboolean(L,12)==0 ) return false;
		if( luatop>12 && (lua_type(L,13)!=LUA_TNUMBER || lua_tointeger(L,13) != lua_tonumber(L,13)) ) return false;
		if( luatop>13 && (lua_type(L,14)!=LUA_TNUMBER || lua_tointeger(L,14) != lua_tonumber(L,14)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetBackground(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetBrush(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPen(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetBackground(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetBrush(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPen(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CopyAttributes(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetDepth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetDeviceOrigin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLogicalFunction(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMapMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPixel(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetPPI(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSize_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetSize_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSizeMM_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetSizeMM_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetUserScale(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsOk(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetAxisOrientation(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDeviceOrigin(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetLogicalFunction(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMapMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPalette(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetUserScale(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CanUseTransformMatrix(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetTransformMatrix(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,87852021) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetTransformMatrix(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ResetTransformMatrix(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetLogicalScale(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetLogicalScale(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetLogicalOrigin(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetLogicalOrigin_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetLogicalOrigin_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// int wxDC::DeviceToLogicalX(int x) const
	static int _bind_DeviceToLogicalX(lua_State *L) {
		if (!_lg_typecheck_DeviceToLogicalX(L)) {
			luaL_error(L, "luna typecheck failed in int wxDC::DeviceToLogicalX(int x) const function, expected prototype:\nint wxDC::DeviceToLogicalX(int x) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);

		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxDC::DeviceToLogicalX(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->DeviceToLogicalX(x);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxDC::DeviceToLogicalXRel(int x) const
	static int _bind_DeviceToLogicalXRel(lua_State *L) {
		if (!_lg_typecheck_DeviceToLogicalXRel(L)) {
			luaL_error(L, "luna typecheck failed in int wxDC::DeviceToLogicalXRel(int x) const function, expected prototype:\nint wxDC::DeviceToLogicalXRel(int x) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);

		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxDC::DeviceToLogicalXRel(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->DeviceToLogicalXRel(x);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxDC::DeviceToLogicalY(int y) const
	static int _bind_DeviceToLogicalY(lua_State *L) {
		if (!_lg_typecheck_DeviceToLogicalY(L)) {
			luaL_error(L, "luna typecheck failed in int wxDC::DeviceToLogicalY(int y) const function, expected prototype:\nint wxDC::DeviceToLogicalY(int y) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int y=(int)lua_tointeger(L,2);

		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxDC::DeviceToLogicalY(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->DeviceToLogicalY(y);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxDC::DeviceToLogicalYRel(int y) const
	static int _bind_DeviceToLogicalYRel(lua_State *L) {
		if (!_lg_typecheck_DeviceToLogicalYRel(L)) {
			luaL_error(L, "luna typecheck failed in int wxDC::DeviceToLogicalYRel(int y) const function, expected prototype:\nint wxDC::DeviceToLogicalYRel(int y) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int y=(int)lua_tointeger(L,2);

		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxDC::DeviceToLogicalYRel(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->DeviceToLogicalYRel(y);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxDC::LogicalToDeviceX(int x) const
	static int _bind_LogicalToDeviceX(lua_State *L) {
		if (!_lg_typecheck_LogicalToDeviceX(L)) {
			luaL_error(L, "luna typecheck failed in int wxDC::LogicalToDeviceX(int x) const function, expected prototype:\nint wxDC::LogicalToDeviceX(int x) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);

		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxDC::LogicalToDeviceX(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->LogicalToDeviceX(x);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxDC::LogicalToDeviceXRel(int x) const
	static int _bind_LogicalToDeviceXRel(lua_State *L) {
		if (!_lg_typecheck_LogicalToDeviceXRel(L)) {
			luaL_error(L, "luna typecheck failed in int wxDC::LogicalToDeviceXRel(int x) const function, expected prototype:\nint wxDC::LogicalToDeviceXRel(int x) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);

		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxDC::LogicalToDeviceXRel(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->LogicalToDeviceXRel(x);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxDC::LogicalToDeviceY(int y) const
	static int _bind_LogicalToDeviceY(lua_State *L) {
		if (!_lg_typecheck_LogicalToDeviceY(L)) {
			luaL_error(L, "luna typecheck failed in int wxDC::LogicalToDeviceY(int y) const function, expected prototype:\nint wxDC::LogicalToDeviceY(int y) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int y=(int)lua_tointeger(L,2);

		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxDC::LogicalToDeviceY(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->LogicalToDeviceY(y);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxDC::LogicalToDeviceYRel(int y) const
	static int _bind_LogicalToDeviceYRel(lua_State *L) {
		if (!_lg_typecheck_LogicalToDeviceYRel(L)) {
			luaL_error(L, "luna typecheck failed in int wxDC::LogicalToDeviceYRel(int y) const function, expected prototype:\nint wxDC::LogicalToDeviceYRel(int y) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int y=(int)lua_tointeger(L,2);

		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxDC::LogicalToDeviceYRel(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->LogicalToDeviceYRel(y);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxDC::Clear()
	static int _bind_Clear(lua_State *L) {
		if (!_lg_typecheck_Clear(L)) {
			luaL_error(L, "luna typecheck failed in void wxDC::Clear() function, expected prototype:\nvoid wxDC::Clear()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDC::Clear(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Clear();

		return 0;
	}

	// void wxDC::DrawArc(int xStart, int yStart, int xEnd, int yEnd, int xc, int yc)
	static int _bind_DrawArc_overload_1(lua_State *L) {
		if (!_lg_typecheck_DrawArc_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxDC::DrawArc(int xStart, int yStart, int xEnd, int yEnd, int xc, int yc) function, expected prototype:\nvoid wxDC::DrawArc(int xStart, int yStart, int xEnd, int yEnd, int xc, int yc)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int xStart=(int)lua_tointeger(L,2);
		int yStart=(int)lua_tointeger(L,3);
		int xEnd=(int)lua_tointeger(L,4);
		int yEnd=(int)lua_tointeger(L,5);
		int xc=(int)lua_tointeger(L,6);
		int yc=(int)lua_tointeger(L,7);

		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDC::DrawArc(int, int, int, int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawArc(xStart, yStart, xEnd, yEnd, xc, yc);

		return 0;
	}

	// void wxDC::DrawArc(const wxPoint & ptStart, const wxPoint & ptEnd, const wxPoint & centre)
	static int _bind_DrawArc_overload_2(lua_State *L) {
		if (!_lg_typecheck_DrawArc_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxDC::DrawArc(const wxPoint & ptStart, const wxPoint & ptEnd, const wxPoint & centre) function, expected prototype:\nvoid wxDC::DrawArc(const wxPoint & ptStart, const wxPoint & ptEnd, const wxPoint & centre)\nClass arguments details:\narg 1 ID = 25723480\narg 2 ID = 25723480\narg 3 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint* ptStart_ptr=(Luna< wxPoint >::check(L,2));
		if( !ptStart_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ptStart in wxDC::DrawArc function");
		}
		const wxPoint & ptStart=*ptStart_ptr;
		const wxPoint* ptEnd_ptr=(Luna< wxPoint >::check(L,3));
		if( !ptEnd_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ptEnd in wxDC::DrawArc function");
		}
		const wxPoint & ptEnd=*ptEnd_ptr;
		const wxPoint* centre_ptr=(Luna< wxPoint >::check(L,4));
		if( !centre_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg centre in wxDC::DrawArc function");
		}
		const wxPoint & centre=*centre_ptr;

		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDC::DrawArc(const wxPoint &, const wxPoint &, const wxPoint &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawArc(ptStart, ptEnd, centre);

		return 0;
	}

	// Overload binder for wxDC::DrawArc
	static int _bind_DrawArc(lua_State *L) {
		if (_lg_typecheck_DrawArc_overload_1(L)) return _bind_DrawArc_overload_1(L);
		if (_lg_typecheck_DrawArc_overload_2(L)) return _bind_DrawArc_overload_2(L);

		luaL_error(L, "error in function DrawArc, cannot match any of the overloads for function DrawArc:\n  DrawArc(int, int, int, int, int, int)\n  DrawArc(const wxPoint &, const wxPoint &, const wxPoint &)\n");
		return 0;
	}

	// void wxDC::DrawBitmap(const wxBitmap & bitmap, int x, int y, bool useMask = false)
	static int _bind_DrawBitmap_overload_1(lua_State *L) {
		if (!_lg_typecheck_DrawBitmap_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxDC::DrawBitmap(const wxBitmap & bitmap, int x, int y, bool useMask = false) function, expected prototype:\nvoid wxDC::DrawBitmap(const wxBitmap & bitmap, int x, int y, bool useMask = false)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxBitmap* bitmap_ptr=(Luna< wxObject >::checkSubType< wxBitmap >(L,2));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxDC::DrawBitmap function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;
		int x=(int)lua_tointeger(L,3);
		int y=(int)lua_tointeger(L,4);
		bool useMask=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : (bool)false;

		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDC::DrawBitmap(const wxBitmap &, int, int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawBitmap(bitmap, x, y, useMask);

		return 0;
	}

	// void wxDC::DrawBitmap(const wxBitmap & bmp, const wxPoint & pt, bool useMask = false)
	static int _bind_DrawBitmap_overload_2(lua_State *L) {
		if (!_lg_typecheck_DrawBitmap_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxDC::DrawBitmap(const wxBitmap & bmp, const wxPoint & pt, bool useMask = false) function, expected prototype:\nvoid wxDC::DrawBitmap(const wxBitmap & bmp, const wxPoint & pt, bool useMask = false)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxBitmap* bmp_ptr=(Luna< wxObject >::checkSubType< wxBitmap >(L,2));
		if( !bmp_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bmp in wxDC::DrawBitmap function");
		}
		const wxBitmap & bmp=*bmp_ptr;
		const wxPoint* pt_ptr=(Luna< wxPoint >::check(L,3));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxDC::DrawBitmap function");
		}
		const wxPoint & pt=*pt_ptr;
		bool useMask=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)false;

		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDC::DrawBitmap(const wxBitmap &, const wxPoint &, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawBitmap(bmp, pt, useMask);

		return 0;
	}

	// Overload binder for wxDC::DrawBitmap
	static int _bind_DrawBitmap(lua_State *L) {
		if (_lg_typecheck_DrawBitmap_overload_1(L)) return _bind_DrawBitmap_overload_1(L);
		if (_lg_typecheck_DrawBitmap_overload_2(L)) return _bind_DrawBitmap_overload_2(L);

		luaL_error(L, "error in function DrawBitmap, cannot match any of the overloads for function DrawBitmap:\n  DrawBitmap(const wxBitmap &, int, int, bool)\n  DrawBitmap(const wxBitmap &, const wxPoint &, bool)\n");
		return 0;
	}

	// void wxDC::DrawCheckMark(int x, int y, int width, int height)
	static int _bind_DrawCheckMark_overload_1(lua_State *L) {
		if (!_lg_typecheck_DrawCheckMark_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxDC::DrawCheckMark(int x, int y, int width, int height) function, expected prototype:\nvoid wxDC::DrawCheckMark(int x, int y, int width, int height)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		int width=(int)lua_tointeger(L,4);
		int height=(int)lua_tointeger(L,5);

		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDC::DrawCheckMark(int, int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawCheckMark(x, y, width, height);

		return 0;
	}

	// void wxDC::DrawCheckMark(const wxRect & rect)
	static int _bind_DrawCheckMark_overload_2(lua_State *L) {
		if (!_lg_typecheck_DrawCheckMark_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxDC::DrawCheckMark(const wxRect & rect) function, expected prototype:\nvoid wxDC::DrawCheckMark(const wxRect & rect)\nClass arguments details:\narg 1 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxRect* rect_ptr=(Luna< wxRect >::check(L,2));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxDC::DrawCheckMark function");
		}
		const wxRect & rect=*rect_ptr;

		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDC::DrawCheckMark(const wxRect &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawCheckMark(rect);

		return 0;
	}

	// Overload binder for wxDC::DrawCheckMark
	static int _bind_DrawCheckMark(lua_State *L) {
		if (_lg_typecheck_DrawCheckMark_overload_1(L)) return _bind_DrawCheckMark_overload_1(L);
		if (_lg_typecheck_DrawCheckMark_overload_2(L)) return _bind_DrawCheckMark_overload_2(L);

		luaL_error(L, "error in function DrawCheckMark, cannot match any of the overloads for function DrawCheckMark:\n  DrawCheckMark(int, int, int, int)\n  DrawCheckMark(const wxRect &)\n");
		return 0;
	}

	// void wxDC::DrawCircle(int x, int y, int radius)
	static int _bind_DrawCircle_overload_1(lua_State *L) {
		if (!_lg_typecheck_DrawCircle_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxDC::DrawCircle(int x, int y, int radius) function, expected prototype:\nvoid wxDC::DrawCircle(int x, int y, int radius)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		int radius=(int)lua_tointeger(L,4);

		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDC::DrawCircle(int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawCircle(x, y, radius);

		return 0;
	}

	// void wxDC::DrawCircle(const wxPoint & pt, int radius)
	static int _bind_DrawCircle_overload_2(lua_State *L) {
		if (!_lg_typecheck_DrawCircle_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxDC::DrawCircle(const wxPoint & pt, int radius) function, expected prototype:\nvoid wxDC::DrawCircle(const wxPoint & pt, int radius)\nClass arguments details:\narg 1 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint* pt_ptr=(Luna< wxPoint >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxDC::DrawCircle function");
		}
		const wxPoint & pt=*pt_ptr;
		int radius=(int)lua_tointeger(L,3);

		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDC::DrawCircle(const wxPoint &, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawCircle(pt, radius);

		return 0;
	}

	// Overload binder for wxDC::DrawCircle
	static int _bind_DrawCircle(lua_State *L) {
		if (_lg_typecheck_DrawCircle_overload_1(L)) return _bind_DrawCircle_overload_1(L);
		if (_lg_typecheck_DrawCircle_overload_2(L)) return _bind_DrawCircle_overload_2(L);

		luaL_error(L, "error in function DrawCircle, cannot match any of the overloads for function DrawCircle:\n  DrawCircle(int, int, int)\n  DrawCircle(const wxPoint &, int)\n");
		return 0;
	}

	// void wxDC::DrawEllipse(int x, int y, int width, int height)
	static int _bind_DrawEllipse_overload_1(lua_State *L) {
		if (!_lg_typecheck_DrawEllipse_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxDC::DrawEllipse(int x, int y, int width, int height) function, expected prototype:\nvoid wxDC::DrawEllipse(int x, int y, int width, int height)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		int width=(int)lua_tointeger(L,4);
		int height=(int)lua_tointeger(L,5);

		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDC::DrawEllipse(int, int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawEllipse(x, y, width, height);

		return 0;
	}

	// void wxDC::DrawEllipse(const wxPoint & pt, const wxSize & size)
	static int _bind_DrawEllipse_overload_2(lua_State *L) {
		if (!_lg_typecheck_DrawEllipse_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxDC::DrawEllipse(const wxPoint & pt, const wxSize & size) function, expected prototype:\nvoid wxDC::DrawEllipse(const wxPoint & pt, const wxSize & size)\nClass arguments details:\narg 1 ID = 25723480\narg 2 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint* pt_ptr=(Luna< wxPoint >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxDC::DrawEllipse function");
		}
		const wxPoint & pt=*pt_ptr;
		const wxSize* size_ptr=(Luna< wxSize >::check(L,3));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxDC::DrawEllipse function");
		}
		const wxSize & size=*size_ptr;

		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDC::DrawEllipse(const wxPoint &, const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawEllipse(pt, size);

		return 0;
	}

	// void wxDC::DrawEllipse(const wxRect & rect)
	static int _bind_DrawEllipse_overload_3(lua_State *L) {
		if (!_lg_typecheck_DrawEllipse_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in void wxDC::DrawEllipse(const wxRect & rect) function, expected prototype:\nvoid wxDC::DrawEllipse(const wxRect & rect)\nClass arguments details:\narg 1 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxRect* rect_ptr=(Luna< wxRect >::check(L,2));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxDC::DrawEllipse function");
		}
		const wxRect & rect=*rect_ptr;

		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDC::DrawEllipse(const wxRect &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawEllipse(rect);

		return 0;
	}

	// Overload binder for wxDC::DrawEllipse
	static int _bind_DrawEllipse(lua_State *L) {
		if (_lg_typecheck_DrawEllipse_overload_1(L)) return _bind_DrawEllipse_overload_1(L);
		if (_lg_typecheck_DrawEllipse_overload_2(L)) return _bind_DrawEllipse_overload_2(L);
		if (_lg_typecheck_DrawEllipse_overload_3(L)) return _bind_DrawEllipse_overload_3(L);

		luaL_error(L, "error in function DrawEllipse, cannot match any of the overloads for function DrawEllipse:\n  DrawEllipse(int, int, int, int)\n  DrawEllipse(const wxPoint &, const wxSize &)\n  DrawEllipse(const wxRect &)\n");
		return 0;
	}

	// void wxDC::DrawEllipticArc(int x, int y, int width, int height, double start, double end)
	static int _bind_DrawEllipticArc_overload_1(lua_State *L) {
		if (!_lg_typecheck_DrawEllipticArc_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxDC::DrawEllipticArc(int x, int y, int width, int height, double start, double end) function, expected prototype:\nvoid wxDC::DrawEllipticArc(int x, int y, int width, int height, double start, double end)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		int width=(int)lua_tointeger(L,4);
		int height=(int)lua_tointeger(L,5);
		double start=(double)lua_tonumber(L,6);
		double end=(double)lua_tonumber(L,7);

		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDC::DrawEllipticArc(int, int, int, int, double, double). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawEllipticArc(x, y, width, height, start, end);

		return 0;
	}

	// void wxDC::DrawEllipticArc(const wxPoint & pt, const wxSize & sz, double sa, double ea)
	static int _bind_DrawEllipticArc_overload_2(lua_State *L) {
		if (!_lg_typecheck_DrawEllipticArc_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxDC::DrawEllipticArc(const wxPoint & pt, const wxSize & sz, double sa, double ea) function, expected prototype:\nvoid wxDC::DrawEllipticArc(const wxPoint & pt, const wxSize & sz, double sa, double ea)\nClass arguments details:\narg 1 ID = 25723480\narg 2 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint* pt_ptr=(Luna< wxPoint >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxDC::DrawEllipticArc function");
		}
		const wxPoint & pt=*pt_ptr;
		const wxSize* sz_ptr=(Luna< wxSize >::check(L,3));
		if( !sz_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sz in wxDC::DrawEllipticArc function");
		}
		const wxSize & sz=*sz_ptr;
		double sa=(double)lua_tonumber(L,4);
		double ea=(double)lua_tonumber(L,5);

		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDC::DrawEllipticArc(const wxPoint &, const wxSize &, double, double). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawEllipticArc(pt, sz, sa, ea);

		return 0;
	}

	// Overload binder for wxDC::DrawEllipticArc
	static int _bind_DrawEllipticArc(lua_State *L) {
		if (_lg_typecheck_DrawEllipticArc_overload_1(L)) return _bind_DrawEllipticArc_overload_1(L);
		if (_lg_typecheck_DrawEllipticArc_overload_2(L)) return _bind_DrawEllipticArc_overload_2(L);

		luaL_error(L, "error in function DrawEllipticArc, cannot match any of the overloads for function DrawEllipticArc:\n  DrawEllipticArc(int, int, int, int, double, double)\n  DrawEllipticArc(const wxPoint &, const wxSize &, double, double)\n");
		return 0;
	}

	// void wxDC::DrawIcon(const wxIcon & icon, int x, int y)
	static int _bind_DrawIcon_overload_1(lua_State *L) {
		if (!_lg_typecheck_DrawIcon_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxDC::DrawIcon(const wxIcon & icon, int x, int y) function, expected prototype:\nvoid wxDC::DrawIcon(const wxIcon & icon, int x, int y)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxIcon* icon_ptr=(Luna< wxObject >::checkSubType< wxIcon >(L,2));
		if( !icon_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg icon in wxDC::DrawIcon function");
		}
		const wxIcon & icon=*icon_ptr;
		int x=(int)lua_tointeger(L,3);
		int y=(int)lua_tointeger(L,4);

		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDC::DrawIcon(const wxIcon &, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawIcon(icon, x, y);

		return 0;
	}

	// void wxDC::DrawIcon(const wxIcon & icon, const wxPoint & pt)
	static int _bind_DrawIcon_overload_2(lua_State *L) {
		if (!_lg_typecheck_DrawIcon_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxDC::DrawIcon(const wxIcon & icon, const wxPoint & pt) function, expected prototype:\nvoid wxDC::DrawIcon(const wxIcon & icon, const wxPoint & pt)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxIcon* icon_ptr=(Luna< wxObject >::checkSubType< wxIcon >(L,2));
		if( !icon_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg icon in wxDC::DrawIcon function");
		}
		const wxIcon & icon=*icon_ptr;
		const wxPoint* pt_ptr=(Luna< wxPoint >::check(L,3));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxDC::DrawIcon function");
		}
		const wxPoint & pt=*pt_ptr;

		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDC::DrawIcon(const wxIcon &, const wxPoint &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawIcon(icon, pt);

		return 0;
	}

	// Overload binder for wxDC::DrawIcon
	static int _bind_DrawIcon(lua_State *L) {
		if (_lg_typecheck_DrawIcon_overload_1(L)) return _bind_DrawIcon_overload_1(L);
		if (_lg_typecheck_DrawIcon_overload_2(L)) return _bind_DrawIcon_overload_2(L);

		luaL_error(L, "error in function DrawIcon, cannot match any of the overloads for function DrawIcon:\n  DrawIcon(const wxIcon &, int, int)\n  DrawIcon(const wxIcon &, const wxPoint &)\n");
		return 0;
	}

	// void wxDC::DrawLabel(const wxString & text, const wxBitmap & bitmap, const wxRect & rect, int alignment = ::wxALIGN_LEFT | ::wxALIGN_TOP, int indexAccel = -1, wxRect * rectBounding = NULL)
	static int _bind_DrawLabel_overload_1(lua_State *L) {
		if (!_lg_typecheck_DrawLabel_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxDC::DrawLabel(const wxString & text, const wxBitmap & bitmap, const wxRect & rect, int alignment = ::wxALIGN_LEFT | ::wxALIGN_TOP, int indexAccel = -1, wxRect * rectBounding = NULL) function, expected prototype:\nvoid wxDC::DrawLabel(const wxString & text, const wxBitmap & bitmap, const wxRect & rect, int alignment = ::wxALIGN_LEFT | ::wxALIGN_TOP, int indexAccel = -1, wxRect * rectBounding = NULL)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 56813631\narg 3 ID = 20234418\narg 6 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString text(lua_tostring(L,2),lua_objlen(L,2));
		const wxBitmap* bitmap_ptr=(Luna< wxObject >::checkSubType< wxBitmap >(L,3));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxDC::DrawLabel function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,4));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxDC::DrawLabel function");
		}
		const wxRect & rect=*rect_ptr;
		int alignment=luatop>4 ? (int)lua_tointeger(L,5) : (int)::wxALIGN_LEFT | ::wxALIGN_TOP;
		int indexAccel=luatop>5 ? (int)lua_tointeger(L,6) : (int)-1;
		wxRect* rectBounding=luatop>6 ? (Luna< wxRect >::check(L,7)) : (wxRect*)NULL;

		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDC::DrawLabel(const wxString &, const wxBitmap &, const wxRect &, int, int, wxRect *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawLabel(text, bitmap, rect, alignment, indexAccel, rectBounding);

		return 0;
	}

	// void wxDC::DrawLabel(const wxString & text, const wxRect & rect, int alignment = ::wxALIGN_LEFT | ::wxALIGN_TOP, int indexAccel = -1)
	static int _bind_DrawLabel_overload_2(lua_State *L) {
		if (!_lg_typecheck_DrawLabel_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxDC::DrawLabel(const wxString & text, const wxRect & rect, int alignment = ::wxALIGN_LEFT | ::wxALIGN_TOP, int indexAccel = -1) function, expected prototype:\nvoid wxDC::DrawLabel(const wxString & text, const wxRect & rect, int alignment = ::wxALIGN_LEFT | ::wxALIGN_TOP, int indexAccel = -1)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString text(lua_tostring(L,2),lua_objlen(L,2));
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,3));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxDC::DrawLabel function");
		}
		const wxRect & rect=*rect_ptr;
		int alignment=luatop>3 ? (int)lua_tointeger(L,4) : (int)::wxALIGN_LEFT | ::wxALIGN_TOP;
		int indexAccel=luatop>4 ? (int)lua_tointeger(L,5) : (int)-1;

		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDC::DrawLabel(const wxString &, const wxRect &, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawLabel(text, rect, alignment, indexAccel);

		return 0;
	}

	// Overload binder for wxDC::DrawLabel
	static int _bind_DrawLabel(lua_State *L) {
		if (_lg_typecheck_DrawLabel_overload_1(L)) return _bind_DrawLabel_overload_1(L);
		if (_lg_typecheck_DrawLabel_overload_2(L)) return _bind_DrawLabel_overload_2(L);

		luaL_error(L, "error in function DrawLabel, cannot match any of the overloads for function DrawLabel:\n  DrawLabel(const wxString &, const wxBitmap &, const wxRect &, int, int, wxRect *)\n  DrawLabel(const wxString &, const wxRect &, int, int)\n");
		return 0;
	}

	// void wxDC::DrawLine(int x1, int y1, int x2, int y2)
	static int _bind_DrawLine_overload_1(lua_State *L) {
		if (!_lg_typecheck_DrawLine_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxDC::DrawLine(int x1, int y1, int x2, int y2) function, expected prototype:\nvoid wxDC::DrawLine(int x1, int y1, int x2, int y2)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x1=(int)lua_tointeger(L,2);
		int y1=(int)lua_tointeger(L,3);
		int x2=(int)lua_tointeger(L,4);
		int y2=(int)lua_tointeger(L,5);

		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDC::DrawLine(int, int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawLine(x1, y1, x2, y2);

		return 0;
	}

	// void wxDC::DrawLine(const wxPoint & pt1, const wxPoint & pt2)
	static int _bind_DrawLine_overload_2(lua_State *L) {
		if (!_lg_typecheck_DrawLine_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxDC::DrawLine(const wxPoint & pt1, const wxPoint & pt2) function, expected prototype:\nvoid wxDC::DrawLine(const wxPoint & pt1, const wxPoint & pt2)\nClass arguments details:\narg 1 ID = 25723480\narg 2 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint* pt1_ptr=(Luna< wxPoint >::check(L,2));
		if( !pt1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt1 in wxDC::DrawLine function");
		}
		const wxPoint & pt1=*pt1_ptr;
		const wxPoint* pt2_ptr=(Luna< wxPoint >::check(L,3));
		if( !pt2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt2 in wxDC::DrawLine function");
		}
		const wxPoint & pt2=*pt2_ptr;

		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDC::DrawLine(const wxPoint &, const wxPoint &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawLine(pt1, pt2);

		return 0;
	}

	// Overload binder for wxDC::DrawLine
	static int _bind_DrawLine(lua_State *L) {
		if (_lg_typecheck_DrawLine_overload_1(L)) return _bind_DrawLine_overload_1(L);
		if (_lg_typecheck_DrawLine_overload_2(L)) return _bind_DrawLine_overload_2(L);

		luaL_error(L, "error in function DrawLine, cannot match any of the overloads for function DrawLine:\n  DrawLine(int, int, int, int)\n  DrawLine(const wxPoint &, const wxPoint &)\n");
		return 0;
	}

	// void wxDC::DrawLines(const wxPointList * points, int xoffset = 0, int yoffset = 0)
	static int _bind_DrawLines(lua_State *L) {
		if (!_lg_typecheck_DrawLines(L)) {
			luaL_error(L, "luna typecheck failed in void wxDC::DrawLines(const wxPointList * points, int xoffset = 0, int yoffset = 0) function, expected prototype:\nvoid wxDC::DrawLines(const wxPointList * points, int xoffset = 0, int yoffset = 0)\nClass arguments details:\narg 1 ID = 74412068\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxPointList* points=(Luna< wxPointList >::check(L,2));
		int xoffset=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;
		int yoffset=luatop>3 ? (int)lua_tointeger(L,4) : (int)0;

		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDC::DrawLines(const wxPointList *, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawLines(points, xoffset, yoffset);

		return 0;
	}

	// void wxDC::DrawPoint(int x, int y)
	static int _bind_DrawPoint_overload_1(lua_State *L) {
		if (!_lg_typecheck_DrawPoint_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxDC::DrawPoint(int x, int y) function, expected prototype:\nvoid wxDC::DrawPoint(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDC::DrawPoint(int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawPoint(x, y);

		return 0;
	}

	// void wxDC::DrawPoint(const wxPoint & pt)
	static int _bind_DrawPoint_overload_2(lua_State *L) {
		if (!_lg_typecheck_DrawPoint_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxDC::DrawPoint(const wxPoint & pt) function, expected prototype:\nvoid wxDC::DrawPoint(const wxPoint & pt)\nClass arguments details:\narg 1 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint* pt_ptr=(Luna< wxPoint >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxDC::DrawPoint function");
		}
		const wxPoint & pt=*pt_ptr;

		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDC::DrawPoint(const wxPoint &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawPoint(pt);

		return 0;
	}

	// Overload binder for wxDC::DrawPoint
	static int _bind_DrawPoint(lua_State *L) {
		if (_lg_typecheck_DrawPoint_overload_1(L)) return _bind_DrawPoint_overload_1(L);
		if (_lg_typecheck_DrawPoint_overload_2(L)) return _bind_DrawPoint_overload_2(L);

		luaL_error(L, "error in function DrawPoint, cannot match any of the overloads for function DrawPoint:\n  DrawPoint(int, int)\n  DrawPoint(const wxPoint &)\n");
		return 0;
	}

	// void wxDC::DrawPolygon(const wxPointList * points, int xoffset = 0, int yoffset = 0, wxPolygonFillMode fill_style = ::wxODDEVEN_RULE)
	static int _bind_DrawPolygon(lua_State *L) {
		if (!_lg_typecheck_DrawPolygon(L)) {
			luaL_error(L, "luna typecheck failed in void wxDC::DrawPolygon(const wxPointList * points, int xoffset = 0, int yoffset = 0, wxPolygonFillMode fill_style = ::wxODDEVEN_RULE) function, expected prototype:\nvoid wxDC::DrawPolygon(const wxPointList * points, int xoffset = 0, int yoffset = 0, wxPolygonFillMode fill_style = ::wxODDEVEN_RULE)\nClass arguments details:\narg 1 ID = 74412068\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxPointList* points=(Luna< wxPointList >::check(L,2));
		int xoffset=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;
		int yoffset=luatop>3 ? (int)lua_tointeger(L,4) : (int)0;
		wxPolygonFillMode fill_style=luatop>4 ? (wxPolygonFillMode)lua_tointeger(L,5) : (wxPolygonFillMode)::wxODDEVEN_RULE;

		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDC::DrawPolygon(const wxPointList *, int, int, wxPolygonFillMode). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawPolygon(points, xoffset, yoffset, fill_style);

		return 0;
	}

	// void wxDC::DrawRectangle(int x, int y, int width, int height)
	static int _bind_DrawRectangle_overload_1(lua_State *L) {
		if (!_lg_typecheck_DrawRectangle_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxDC::DrawRectangle(int x, int y, int width, int height) function, expected prototype:\nvoid wxDC::DrawRectangle(int x, int y, int width, int height)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		int width=(int)lua_tointeger(L,4);
		int height=(int)lua_tointeger(L,5);

		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDC::DrawRectangle(int, int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawRectangle(x, y, width, height);

		return 0;
	}

	// void wxDC::DrawRectangle(const wxPoint & pt, const wxSize & sz)
	static int _bind_DrawRectangle_overload_2(lua_State *L) {
		if (!_lg_typecheck_DrawRectangle_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxDC::DrawRectangle(const wxPoint & pt, const wxSize & sz) function, expected prototype:\nvoid wxDC::DrawRectangle(const wxPoint & pt, const wxSize & sz)\nClass arguments details:\narg 1 ID = 25723480\narg 2 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint* pt_ptr=(Luna< wxPoint >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxDC::DrawRectangle function");
		}
		const wxPoint & pt=*pt_ptr;
		const wxSize* sz_ptr=(Luna< wxSize >::check(L,3));
		if( !sz_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sz in wxDC::DrawRectangle function");
		}
		const wxSize & sz=*sz_ptr;

		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDC::DrawRectangle(const wxPoint &, const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawRectangle(pt, sz);

		return 0;
	}

	// void wxDC::DrawRectangle(const wxRect & rect)
	static int _bind_DrawRectangle_overload_3(lua_State *L) {
		if (!_lg_typecheck_DrawRectangle_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in void wxDC::DrawRectangle(const wxRect & rect) function, expected prototype:\nvoid wxDC::DrawRectangle(const wxRect & rect)\nClass arguments details:\narg 1 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxRect* rect_ptr=(Luna< wxRect >::check(L,2));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxDC::DrawRectangle function");
		}
		const wxRect & rect=*rect_ptr;

		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDC::DrawRectangle(const wxRect &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawRectangle(rect);

		return 0;
	}

	// Overload binder for wxDC::DrawRectangle
	static int _bind_DrawRectangle(lua_State *L) {
		if (_lg_typecheck_DrawRectangle_overload_1(L)) return _bind_DrawRectangle_overload_1(L);
		if (_lg_typecheck_DrawRectangle_overload_2(L)) return _bind_DrawRectangle_overload_2(L);
		if (_lg_typecheck_DrawRectangle_overload_3(L)) return _bind_DrawRectangle_overload_3(L);

		luaL_error(L, "error in function DrawRectangle, cannot match any of the overloads for function DrawRectangle:\n  DrawRectangle(int, int, int, int)\n  DrawRectangle(const wxPoint &, const wxSize &)\n  DrawRectangle(const wxRect &)\n");
		return 0;
	}

	// void wxDC::DrawRotatedText(const wxString & text, int x, int y, double angle)
	static int _bind_DrawRotatedText_overload_1(lua_State *L) {
		if (!_lg_typecheck_DrawRotatedText_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxDC::DrawRotatedText(const wxString & text, int x, int y, double angle) function, expected prototype:\nvoid wxDC::DrawRotatedText(const wxString & text, int x, int y, double angle)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString text(lua_tostring(L,2),lua_objlen(L,2));
		int x=(int)lua_tointeger(L,3);
		int y=(int)lua_tointeger(L,4);
		double angle=(double)lua_tonumber(L,5);

		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDC::DrawRotatedText(const wxString &, int, int, double). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawRotatedText(text, x, y, angle);

		return 0;
	}

	// void wxDC::DrawRotatedText(const wxString & text, const wxPoint & point, double angle)
	static int _bind_DrawRotatedText_overload_2(lua_State *L) {
		if (!_lg_typecheck_DrawRotatedText_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxDC::DrawRotatedText(const wxString & text, const wxPoint & point, double angle) function, expected prototype:\nvoid wxDC::DrawRotatedText(const wxString & text, const wxPoint & point, double angle)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString text(lua_tostring(L,2),lua_objlen(L,2));
		const wxPoint* point_ptr=(Luna< wxPoint >::check(L,3));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in wxDC::DrawRotatedText function");
		}
		const wxPoint & point=*point_ptr;
		double angle=(double)lua_tonumber(L,4);

		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDC::DrawRotatedText(const wxString &, const wxPoint &, double). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawRotatedText(text, point, angle);

		return 0;
	}

	// Overload binder for wxDC::DrawRotatedText
	static int _bind_DrawRotatedText(lua_State *L) {
		if (_lg_typecheck_DrawRotatedText_overload_1(L)) return _bind_DrawRotatedText_overload_1(L);
		if (_lg_typecheck_DrawRotatedText_overload_2(L)) return _bind_DrawRotatedText_overload_2(L);

		luaL_error(L, "error in function DrawRotatedText, cannot match any of the overloads for function DrawRotatedText:\n  DrawRotatedText(const wxString &, int, int, double)\n  DrawRotatedText(const wxString &, const wxPoint &, double)\n");
		return 0;
	}

	// void wxDC::DrawRoundedRectangle(int x, int y, int width, int height, double radius)
	static int _bind_DrawRoundedRectangle_overload_1(lua_State *L) {
		if (!_lg_typecheck_DrawRoundedRectangle_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxDC::DrawRoundedRectangle(int x, int y, int width, int height, double radius) function, expected prototype:\nvoid wxDC::DrawRoundedRectangle(int x, int y, int width, int height, double radius)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		int width=(int)lua_tointeger(L,4);
		int height=(int)lua_tointeger(L,5);
		double radius=(double)lua_tonumber(L,6);

		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDC::DrawRoundedRectangle(int, int, int, int, double). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawRoundedRectangle(x, y, width, height, radius);

		return 0;
	}

	// void wxDC::DrawRoundedRectangle(const wxPoint & pt, const wxSize & sz, double radius)
	static int _bind_DrawRoundedRectangle_overload_2(lua_State *L) {
		if (!_lg_typecheck_DrawRoundedRectangle_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxDC::DrawRoundedRectangle(const wxPoint & pt, const wxSize & sz, double radius) function, expected prototype:\nvoid wxDC::DrawRoundedRectangle(const wxPoint & pt, const wxSize & sz, double radius)\nClass arguments details:\narg 1 ID = 25723480\narg 2 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint* pt_ptr=(Luna< wxPoint >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxDC::DrawRoundedRectangle function");
		}
		const wxPoint & pt=*pt_ptr;
		const wxSize* sz_ptr=(Luna< wxSize >::check(L,3));
		if( !sz_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sz in wxDC::DrawRoundedRectangle function");
		}
		const wxSize & sz=*sz_ptr;
		double radius=(double)lua_tonumber(L,4);

		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDC::DrawRoundedRectangle(const wxPoint &, const wxSize &, double). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawRoundedRectangle(pt, sz, radius);

		return 0;
	}

	// void wxDC::DrawRoundedRectangle(const wxRect & rect, double radius)
	static int _bind_DrawRoundedRectangle_overload_3(lua_State *L) {
		if (!_lg_typecheck_DrawRoundedRectangle_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in void wxDC::DrawRoundedRectangle(const wxRect & rect, double radius) function, expected prototype:\nvoid wxDC::DrawRoundedRectangle(const wxRect & rect, double radius)\nClass arguments details:\narg 1 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxRect* rect_ptr=(Luna< wxRect >::check(L,2));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxDC::DrawRoundedRectangle function");
		}
		const wxRect & rect=*rect_ptr;
		double radius=(double)lua_tonumber(L,3);

		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDC::DrawRoundedRectangle(const wxRect &, double). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawRoundedRectangle(rect, radius);

		return 0;
	}

	// Overload binder for wxDC::DrawRoundedRectangle
	static int _bind_DrawRoundedRectangle(lua_State *L) {
		if (_lg_typecheck_DrawRoundedRectangle_overload_1(L)) return _bind_DrawRoundedRectangle_overload_1(L);
		if (_lg_typecheck_DrawRoundedRectangle_overload_2(L)) return _bind_DrawRoundedRectangle_overload_2(L);
		if (_lg_typecheck_DrawRoundedRectangle_overload_3(L)) return _bind_DrawRoundedRectangle_overload_3(L);

		luaL_error(L, "error in function DrawRoundedRectangle, cannot match any of the overloads for function DrawRoundedRectangle:\n  DrawRoundedRectangle(int, int, int, int, double)\n  DrawRoundedRectangle(const wxPoint &, const wxSize &, double)\n  DrawRoundedRectangle(const wxRect &, double)\n");
		return 0;
	}

	// void wxDC::DrawSpline(const wxPointList * points)
	static int _bind_DrawSpline_overload_1(lua_State *L) {
		if (!_lg_typecheck_DrawSpline_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxDC::DrawSpline(const wxPointList * points) function, expected prototype:\nvoid wxDC::DrawSpline(const wxPointList * points)\nClass arguments details:\narg 1 ID = 74412068\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPointList* points=(Luna< wxPointList >::check(L,2));

		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDC::DrawSpline(const wxPointList *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawSpline(points);

		return 0;
	}

	// void wxDC::DrawSpline(int x1, int y1, int x2, int y2, int x3, int y3)
	static int _bind_DrawSpline_overload_2(lua_State *L) {
		if (!_lg_typecheck_DrawSpline_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxDC::DrawSpline(int x1, int y1, int x2, int y2, int x3, int y3) function, expected prototype:\nvoid wxDC::DrawSpline(int x1, int y1, int x2, int y2, int x3, int y3)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x1=(int)lua_tointeger(L,2);
		int y1=(int)lua_tointeger(L,3);
		int x2=(int)lua_tointeger(L,4);
		int y2=(int)lua_tointeger(L,5);
		int x3=(int)lua_tointeger(L,6);
		int y3=(int)lua_tointeger(L,7);

		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDC::DrawSpline(int, int, int, int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawSpline(x1, y1, x2, y2, x3, y3);

		return 0;
	}

	// Overload binder for wxDC::DrawSpline
	static int _bind_DrawSpline(lua_State *L) {
		if (_lg_typecheck_DrawSpline_overload_1(L)) return _bind_DrawSpline_overload_1(L);
		if (_lg_typecheck_DrawSpline_overload_2(L)) return _bind_DrawSpline_overload_2(L);

		luaL_error(L, "error in function DrawSpline, cannot match any of the overloads for function DrawSpline:\n  DrawSpline(const wxPointList *)\n  DrawSpline(int, int, int, int, int, int)\n");
		return 0;
	}

	// void wxDC::DrawText(const wxString & text, int x, int y)
	static int _bind_DrawText_overload_1(lua_State *L) {
		if (!_lg_typecheck_DrawText_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxDC::DrawText(const wxString & text, int x, int y) function, expected prototype:\nvoid wxDC::DrawText(const wxString & text, int x, int y)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString text(lua_tostring(L,2),lua_objlen(L,2));
		int x=(int)lua_tointeger(L,3);
		int y=(int)lua_tointeger(L,4);

		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDC::DrawText(const wxString &, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawText(text, x, y);

		return 0;
	}

	// void wxDC::DrawText(const wxString & text, const wxPoint & pt)
	static int _bind_DrawText_overload_2(lua_State *L) {
		if (!_lg_typecheck_DrawText_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxDC::DrawText(const wxString & text, const wxPoint & pt) function, expected prototype:\nvoid wxDC::DrawText(const wxString & text, const wxPoint & pt)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString text(lua_tostring(L,2),lua_objlen(L,2));
		const wxPoint* pt_ptr=(Luna< wxPoint >::check(L,3));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxDC::DrawText function");
		}
		const wxPoint & pt=*pt_ptr;

		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDC::DrawText(const wxString &, const wxPoint &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawText(text, pt);

		return 0;
	}

	// Overload binder for wxDC::DrawText
	static int _bind_DrawText(lua_State *L) {
		if (_lg_typecheck_DrawText_overload_1(L)) return _bind_DrawText_overload_1(L);
		if (_lg_typecheck_DrawText_overload_2(L)) return _bind_DrawText_overload_2(L);

		luaL_error(L, "error in function DrawText, cannot match any of the overloads for function DrawText:\n  DrawText(const wxString &, int, int)\n  DrawText(const wxString &, const wxPoint &)\n");
		return 0;
	}

	// void wxDC::GradientFillConcentric(const wxRect & rect, const wxColour & initialColour, const wxColour & destColour)
	static int _bind_GradientFillConcentric_overload_1(lua_State *L) {
		if (!_lg_typecheck_GradientFillConcentric_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxDC::GradientFillConcentric(const wxRect & rect, const wxColour & initialColour, const wxColour & destColour) function, expected prototype:\nvoid wxDC::GradientFillConcentric(const wxRect & rect, const wxColour & initialColour, const wxColour & destColour)\nClass arguments details:\narg 1 ID = 20234418\narg 2 ID = 56813631\narg 3 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxRect* rect_ptr=(Luna< wxRect >::check(L,2));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxDC::GradientFillConcentric function");
		}
		const wxRect & rect=*rect_ptr;
		const wxColour* initialColour_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,3));
		if( !initialColour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg initialColour in wxDC::GradientFillConcentric function");
		}
		const wxColour & initialColour=*initialColour_ptr;
		const wxColour* destColour_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,4));
		if( !destColour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg destColour in wxDC::GradientFillConcentric function");
		}
		const wxColour & destColour=*destColour_ptr;

		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDC::GradientFillConcentric(const wxRect &, const wxColour &, const wxColour &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GradientFillConcentric(rect, initialColour, destColour);

		return 0;
	}

	// void wxDC::GradientFillConcentric(const wxRect & rect, const wxColour & initialColour, const wxColour & destColour, const wxPoint & circleCenter)
	static int _bind_GradientFillConcentric_overload_2(lua_State *L) {
		if (!_lg_typecheck_GradientFillConcentric_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxDC::GradientFillConcentric(const wxRect & rect, const wxColour & initialColour, const wxColour & destColour, const wxPoint & circleCenter) function, expected prototype:\nvoid wxDC::GradientFillConcentric(const wxRect & rect, const wxColour & initialColour, const wxColour & destColour, const wxPoint & circleCenter)\nClass arguments details:\narg 1 ID = 20234418\narg 2 ID = 56813631\narg 3 ID = 56813631\narg 4 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxRect* rect_ptr=(Luna< wxRect >::check(L,2));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxDC::GradientFillConcentric function");
		}
		const wxRect & rect=*rect_ptr;
		const wxColour* initialColour_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,3));
		if( !initialColour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg initialColour in wxDC::GradientFillConcentric function");
		}
		const wxColour & initialColour=*initialColour_ptr;
		const wxColour* destColour_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,4));
		if( !destColour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg destColour in wxDC::GradientFillConcentric function");
		}
		const wxColour & destColour=*destColour_ptr;
		const wxPoint* circleCenter_ptr=(Luna< wxPoint >::check(L,5));
		if( !circleCenter_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg circleCenter in wxDC::GradientFillConcentric function");
		}
		const wxPoint & circleCenter=*circleCenter_ptr;

		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDC::GradientFillConcentric(const wxRect &, const wxColour &, const wxColour &, const wxPoint &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GradientFillConcentric(rect, initialColour, destColour, circleCenter);

		return 0;
	}

	// Overload binder for wxDC::GradientFillConcentric
	static int _bind_GradientFillConcentric(lua_State *L) {
		if (_lg_typecheck_GradientFillConcentric_overload_1(L)) return _bind_GradientFillConcentric_overload_1(L);
		if (_lg_typecheck_GradientFillConcentric_overload_2(L)) return _bind_GradientFillConcentric_overload_2(L);

		luaL_error(L, "error in function GradientFillConcentric, cannot match any of the overloads for function GradientFillConcentric:\n  GradientFillConcentric(const wxRect &, const wxColour &, const wxColour &)\n  GradientFillConcentric(const wxRect &, const wxColour &, const wxColour &, const wxPoint &)\n");
		return 0;
	}

	// void wxDC::GradientFillLinear(const wxRect & rect, const wxColour & initialColour, const wxColour & destColour, wxDirection nDirection = ::wxRIGHT)
	static int _bind_GradientFillLinear(lua_State *L) {
		if (!_lg_typecheck_GradientFillLinear(L)) {
			luaL_error(L, "luna typecheck failed in void wxDC::GradientFillLinear(const wxRect & rect, const wxColour & initialColour, const wxColour & destColour, wxDirection nDirection = ::wxRIGHT) function, expected prototype:\nvoid wxDC::GradientFillLinear(const wxRect & rect, const wxColour & initialColour, const wxColour & destColour, wxDirection nDirection = ::wxRIGHT)\nClass arguments details:\narg 1 ID = 20234418\narg 2 ID = 56813631\narg 3 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxRect* rect_ptr=(Luna< wxRect >::check(L,2));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxDC::GradientFillLinear function");
		}
		const wxRect & rect=*rect_ptr;
		const wxColour* initialColour_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,3));
		if( !initialColour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg initialColour in wxDC::GradientFillLinear function");
		}
		const wxColour & initialColour=*initialColour_ptr;
		const wxColour* destColour_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,4));
		if( !destColour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg destColour in wxDC::GradientFillLinear function");
		}
		const wxColour & destColour=*destColour_ptr;
		wxDirection nDirection=luatop>4 ? (wxDirection)lua_tointeger(L,5) : (wxDirection)::wxRIGHT;

		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDC::GradientFillLinear(const wxRect &, const wxColour &, const wxColour &, wxDirection). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GradientFillLinear(rect, initialColour, destColour, nDirection);

		return 0;
	}

	// bool wxDC::FloodFill(int x, int y, const wxColour & colour, wxFloodFillStyle style = ::wxFLOOD_SURFACE)
	static int _bind_FloodFill_overload_1(lua_State *L) {
		if (!_lg_typecheck_FloodFill_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDC::FloodFill(int x, int y, const wxColour & colour, wxFloodFillStyle style = ::wxFLOOD_SURFACE) function, expected prototype:\nbool wxDC::FloodFill(int x, int y, const wxColour & colour, wxFloodFillStyle style = ::wxFLOOD_SURFACE)\nClass arguments details:\narg 3 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		const wxColour* colour_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,4));
		if( !colour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colour in wxDC::FloodFill function");
		}
		const wxColour & colour=*colour_ptr;
		wxFloodFillStyle style=luatop>4 ? (wxFloodFillStyle)lua_tointeger(L,5) : (wxFloodFillStyle)::wxFLOOD_SURFACE;

		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDC::FloodFill(int, int, const wxColour &, wxFloodFillStyle). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->FloodFill(x, y, colour, style);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDC::FloodFill(const wxPoint & pt, const wxColour & col, wxFloodFillStyle style = ::wxFLOOD_SURFACE)
	static int _bind_FloodFill_overload_2(lua_State *L) {
		if (!_lg_typecheck_FloodFill_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDC::FloodFill(const wxPoint & pt, const wxColour & col, wxFloodFillStyle style = ::wxFLOOD_SURFACE) function, expected prototype:\nbool wxDC::FloodFill(const wxPoint & pt, const wxColour & col, wxFloodFillStyle style = ::wxFLOOD_SURFACE)\nClass arguments details:\narg 1 ID = 25723480\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxPoint* pt_ptr=(Luna< wxPoint >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxDC::FloodFill function");
		}
		const wxPoint & pt=*pt_ptr;
		const wxColour* col_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,3));
		if( !col_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg col in wxDC::FloodFill function");
		}
		const wxColour & col=*col_ptr;
		wxFloodFillStyle style=luatop>3 ? (wxFloodFillStyle)lua_tointeger(L,4) : (wxFloodFillStyle)::wxFLOOD_SURFACE;

		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDC::FloodFill(const wxPoint &, const wxColour &, wxFloodFillStyle). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->FloodFill(pt, col, style);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxDC::FloodFill
	static int _bind_FloodFill(lua_State *L) {
		if (_lg_typecheck_FloodFill_overload_1(L)) return _bind_FloodFill_overload_1(L);
		if (_lg_typecheck_FloodFill_overload_2(L)) return _bind_FloodFill_overload_2(L);

		luaL_error(L, "error in function FloodFill, cannot match any of the overloads for function FloodFill:\n  FloodFill(int, int, const wxColour &, wxFloodFillStyle)\n  FloodFill(const wxPoint &, const wxColour &, wxFloodFillStyle)\n");
		return 0;
	}

	// void wxDC::CrossHair(int x, int y)
	static int _bind_CrossHair_overload_1(lua_State *L) {
		if (!_lg_typecheck_CrossHair_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxDC::CrossHair(int x, int y) function, expected prototype:\nvoid wxDC::CrossHair(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDC::CrossHair(int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->CrossHair(x, y);

		return 0;
	}

	// void wxDC::CrossHair(const wxPoint & pt)
	static int _bind_CrossHair_overload_2(lua_State *L) {
		if (!_lg_typecheck_CrossHair_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxDC::CrossHair(const wxPoint & pt) function, expected prototype:\nvoid wxDC::CrossHair(const wxPoint & pt)\nClass arguments details:\narg 1 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint* pt_ptr=(Luna< wxPoint >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxDC::CrossHair function");
		}
		const wxPoint & pt=*pt_ptr;

		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDC::CrossHair(const wxPoint &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->CrossHair(pt);

		return 0;
	}

	// Overload binder for wxDC::CrossHair
	static int _bind_CrossHair(lua_State *L) {
		if (_lg_typecheck_CrossHair_overload_1(L)) return _bind_CrossHair_overload_1(L);
		if (_lg_typecheck_CrossHair_overload_2(L)) return _bind_CrossHair_overload_2(L);

		luaL_error(L, "error in function CrossHair, cannot match any of the overloads for function CrossHair:\n  CrossHair(int, int)\n  CrossHair(const wxPoint &)\n");
		return 0;
	}

	// void wxDC::DestroyClippingRegion()
	static int _bind_DestroyClippingRegion(lua_State *L) {
		if (!_lg_typecheck_DestroyClippingRegion(L)) {
			luaL_error(L, "luna typecheck failed in void wxDC::DestroyClippingRegion() function, expected prototype:\nvoid wxDC::DestroyClippingRegion()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDC::DestroyClippingRegion(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DestroyClippingRegion();

		return 0;
	}

	// void wxDC::GetClippingBox(int * x, int * y, int * width, int * height) const
	static int _bind_GetClippingBox(lua_State *L) {
		if (!_lg_typecheck_GetClippingBox(L)) {
			luaL_error(L, "luna typecheck failed in void wxDC::GetClippingBox(int * x, int * y, int * width, int * height) const function, expected prototype:\nvoid wxDC::GetClippingBox(int * x, int * y, int * width, int * height) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int* x=(int*)Luna< void >::check(L,2);
		int* y=(int*)Luna< void >::check(L,3);
		int* width=(int*)Luna< void >::check(L,4);
		int* height=(int*)Luna< void >::check(L,5);

		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDC::GetClippingBox(int *, int *, int *, int *) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GetClippingBox(x, y, width, height);

		return 0;
	}

	// void wxDC::SetClippingRegion(int x, int y, int width, int height)
	static int _bind_SetClippingRegion_overload_1(lua_State *L) {
		if (!_lg_typecheck_SetClippingRegion_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxDC::SetClippingRegion(int x, int y, int width, int height) function, expected prototype:\nvoid wxDC::SetClippingRegion(int x, int y, int width, int height)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		int width=(int)lua_tointeger(L,4);
		int height=(int)lua_tointeger(L,5);

		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDC::SetClippingRegion(int, int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetClippingRegion(x, y, width, height);

		return 0;
	}

	// void wxDC::SetClippingRegion(const wxPoint & pt, const wxSize & sz)
	static int _bind_SetClippingRegion_overload_2(lua_State *L) {
		if (!_lg_typecheck_SetClippingRegion_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxDC::SetClippingRegion(const wxPoint & pt, const wxSize & sz) function, expected prototype:\nvoid wxDC::SetClippingRegion(const wxPoint & pt, const wxSize & sz)\nClass arguments details:\narg 1 ID = 25723480\narg 2 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint* pt_ptr=(Luna< wxPoint >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxDC::SetClippingRegion function");
		}
		const wxPoint & pt=*pt_ptr;
		const wxSize* sz_ptr=(Luna< wxSize >::check(L,3));
		if( !sz_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sz in wxDC::SetClippingRegion function");
		}
		const wxSize & sz=*sz_ptr;

		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDC::SetClippingRegion(const wxPoint &, const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetClippingRegion(pt, sz);

		return 0;
	}

	// void wxDC::SetClippingRegion(const wxRect & rect)
	static int _bind_SetClippingRegion_overload_3(lua_State *L) {
		if (!_lg_typecheck_SetClippingRegion_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in void wxDC::SetClippingRegion(const wxRect & rect) function, expected prototype:\nvoid wxDC::SetClippingRegion(const wxRect & rect)\nClass arguments details:\narg 1 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxRect* rect_ptr=(Luna< wxRect >::check(L,2));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxDC::SetClippingRegion function");
		}
		const wxRect & rect=*rect_ptr;

		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDC::SetClippingRegion(const wxRect &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetClippingRegion(rect);

		return 0;
	}

	// Overload binder for wxDC::SetClippingRegion
	static int _bind_SetClippingRegion(lua_State *L) {
		if (_lg_typecheck_SetClippingRegion_overload_1(L)) return _bind_SetClippingRegion_overload_1(L);
		if (_lg_typecheck_SetClippingRegion_overload_2(L)) return _bind_SetClippingRegion_overload_2(L);
		if (_lg_typecheck_SetClippingRegion_overload_3(L)) return _bind_SetClippingRegion_overload_3(L);

		luaL_error(L, "error in function SetClippingRegion, cannot match any of the overloads for function SetClippingRegion:\n  SetClippingRegion(int, int, int, int)\n  SetClippingRegion(const wxPoint &, const wxSize &)\n  SetClippingRegion(const wxRect &)\n");
		return 0;
	}

	// void wxDC::SetDeviceClippingRegion(const wxRegion & region)
	static int _bind_SetDeviceClippingRegion(lua_State *L) {
		if (!_lg_typecheck_SetDeviceClippingRegion(L)) {
			luaL_error(L, "luna typecheck failed in void wxDC::SetDeviceClippingRegion(const wxRegion & region) function, expected prototype:\nvoid wxDC::SetDeviceClippingRegion(const wxRegion & region)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxRegion* region_ptr=(Luna< wxObject >::checkSubType< wxRegion >(L,2));
		if( !region_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg region in wxDC::SetDeviceClippingRegion function");
		}
		const wxRegion & region=*region_ptr;

		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDC::SetDeviceClippingRegion(const wxRegion &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetDeviceClippingRegion(region);

		return 0;
	}

	// int wxDC::GetCharHeight() const
	static int _bind_GetCharHeight(lua_State *L) {
		if (!_lg_typecheck_GetCharHeight(L)) {
			luaL_error(L, "luna typecheck failed in int wxDC::GetCharHeight() const function, expected prototype:\nint wxDC::GetCharHeight() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxDC::GetCharHeight() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetCharHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxDC::GetCharWidth() const
	static int _bind_GetCharWidth(lua_State *L) {
		if (!_lg_typecheck_GetCharWidth(L)) {
			luaL_error(L, "luna typecheck failed in int wxDC::GetCharWidth() const function, expected prototype:\nint wxDC::GetCharWidth() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxDC::GetCharWidth() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetCharWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxFontMetrics wxDC::GetFontMetrics() const
	static int _bind_GetFontMetrics(lua_State *L) {
		if (!_lg_typecheck_GetFontMetrics(L)) {
			luaL_error(L, "luna typecheck failed in wxFontMetrics wxDC::GetFontMetrics() const function, expected prototype:\nwxFontMetrics wxDC::GetFontMetrics() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxFontMetrics wxDC::GetFontMetrics() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxFontMetrics stack_lret = self->GetFontMetrics();
		wxFontMetrics* lret = new wxFontMetrics(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFontMetrics >::push(L,lret,true);

		return 1;
	}

	// void wxDC::GetMultiLineTextExtent(const wxString & string, int * w, int * h, int * heightLine = NULL, const wxFont * font = NULL) const
	static int _bind_GetMultiLineTextExtent_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetMultiLineTextExtent_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxDC::GetMultiLineTextExtent(const wxString & string, int * w, int * h, int * heightLine = NULL, const wxFont * font = NULL) const function, expected prototype:\nvoid wxDC::GetMultiLineTextExtent(const wxString & string, int * w, int * h, int * heightLine = NULL, const wxFont * font = NULL) const\nClass arguments details:\narg 1 ID = 88196105\narg 5 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString string(lua_tostring(L,2),lua_objlen(L,2));
		int* w=(int*)Luna< void >::check(L,3);
		int* h=(int*)Luna< void >::check(L,4);
		int* heightLine=luatop>4 ? (int*)Luna< void >::check(L,5) : (int*)NULL;
		const wxFont* font=luatop>5 ? (Luna< wxObject >::checkSubType< wxFont >(L,6)) : (const wxFont*)NULL;

		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDC::GetMultiLineTextExtent(const wxString &, int *, int *, int *, const wxFont *) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GetMultiLineTextExtent(string, w, h, heightLine, font);

		return 0;
	}

	// wxSize wxDC::GetMultiLineTextExtent(const wxString & string) const
	static int _bind_GetMultiLineTextExtent_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetMultiLineTextExtent_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxDC::GetMultiLineTextExtent(const wxString & string) const function, expected prototype:\nwxSize wxDC::GetMultiLineTextExtent(const wxString & string) const\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString string(lua_tostring(L,2),lua_objlen(L,2));

		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxDC::GetMultiLineTextExtent(const wxString &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->GetMultiLineTextExtent(string);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// Overload binder for wxDC::GetMultiLineTextExtent
	static int _bind_GetMultiLineTextExtent(lua_State *L) {
		if (_lg_typecheck_GetMultiLineTextExtent_overload_1(L)) return _bind_GetMultiLineTextExtent_overload_1(L);
		if (_lg_typecheck_GetMultiLineTextExtent_overload_2(L)) return _bind_GetMultiLineTextExtent_overload_2(L);

		luaL_error(L, "error in function GetMultiLineTextExtent, cannot match any of the overloads for function GetMultiLineTextExtent:\n  GetMultiLineTextExtent(const wxString &, int *, int *, int *, const wxFont *)\n  GetMultiLineTextExtent(const wxString &)\n");
		return 0;
	}

	// bool wxDC::GetPartialTextExtents(const wxString & text, wxArrayInt & widths) const
	static int _bind_GetPartialTextExtents(lua_State *L) {
		if (!_lg_typecheck_GetPartialTextExtents(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDC::GetPartialTextExtents(const wxString & text, wxArrayInt & widths) const function, expected prototype:\nbool wxDC::GetPartialTextExtents(const wxString & text, wxArrayInt & widths) const\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 47342076\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString text(lua_tostring(L,2),lua_objlen(L,2));
		wxArrayInt* widths_ptr=(Luna< wxArrayInt >::check(L,3));
		if( !widths_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg widths in wxDC::GetPartialTextExtents function");
		}
		wxArrayInt & widths=*widths_ptr;

		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDC::GetPartialTextExtents(const wxString &, wxArrayInt &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GetPartialTextExtents(text, widths);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDC::GetTextExtent(const wxString & string, int * w, int * h, int * descent = NULL, int * externalLeading = NULL, const wxFont * font = NULL) const
	static int _bind_GetTextExtent_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetTextExtent_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxDC::GetTextExtent(const wxString & string, int * w, int * h, int * descent = NULL, int * externalLeading = NULL, const wxFont * font = NULL) const function, expected prototype:\nvoid wxDC::GetTextExtent(const wxString & string, int * w, int * h, int * descent = NULL, int * externalLeading = NULL, const wxFont * font = NULL) const\nClass arguments details:\narg 1 ID = 88196105\narg 6 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString string(lua_tostring(L,2),lua_objlen(L,2));
		int* w=(int*)Luna< void >::check(L,3);
		int* h=(int*)Luna< void >::check(L,4);
		int* descent=luatop>4 ? (int*)Luna< void >::check(L,5) : (int*)NULL;
		int* externalLeading=luatop>5 ? (int*)Luna< void >::check(L,6) : (int*)NULL;
		const wxFont* font=luatop>6 ? (Luna< wxObject >::checkSubType< wxFont >(L,7)) : (const wxFont*)NULL;

		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDC::GetTextExtent(const wxString &, int *, int *, int *, int *, const wxFont *) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GetTextExtent(string, w, h, descent, externalLeading, font);

		return 0;
	}

	// wxSize wxDC::GetTextExtent(const wxString & string) const
	static int _bind_GetTextExtent_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetTextExtent_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxDC::GetTextExtent(const wxString & string) const function, expected prototype:\nwxSize wxDC::GetTextExtent(const wxString & string) const\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString string(lua_tostring(L,2),lua_objlen(L,2));

		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxDC::GetTextExtent(const wxString &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->GetTextExtent(string);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// Overload binder for wxDC::GetTextExtent
	static int _bind_GetTextExtent(lua_State *L) {
		if (_lg_typecheck_GetTextExtent_overload_1(L)) return _bind_GetTextExtent_overload_1(L);
		if (_lg_typecheck_GetTextExtent_overload_2(L)) return _bind_GetTextExtent_overload_2(L);

		luaL_error(L, "error in function GetTextExtent, cannot match any of the overloads for function GetTextExtent:\n  GetTextExtent(const wxString &, int *, int *, int *, int *, const wxFont *)\n  GetTextExtent(const wxString &)\n");
		return 0;
	}

	// int wxDC::GetBackgroundMode() const
	static int _bind_GetBackgroundMode(lua_State *L) {
		if (!_lg_typecheck_GetBackgroundMode(L)) {
			luaL_error(L, "luna typecheck failed in int wxDC::GetBackgroundMode() const function, expected prototype:\nint wxDC::GetBackgroundMode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxDC::GetBackgroundMode() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetBackgroundMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const wxFont & wxDC::GetFont() const
	static int _bind_GetFont(lua_State *L) {
		if (!_lg_typecheck_GetFont(L)) {
			luaL_error(L, "luna typecheck failed in const wxFont & wxDC::GetFont() const function, expected prototype:\nconst wxFont & wxDC::GetFont() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxFont & wxDC::GetFont() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxFont* lret = &self->GetFont();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFont >::push(L,lret,false);

		return 1;
	}

	// wxLayoutDirection wxDC::GetLayoutDirection() const
	static int _bind_GetLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_GetLayoutDirection(L)) {
			luaL_error(L, "luna typecheck failed in wxLayoutDirection wxDC::GetLayoutDirection() const function, expected prototype:\nwxLayoutDirection wxDC::GetLayoutDirection() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxLayoutDirection wxDC::GetLayoutDirection() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxLayoutDirection lret = self->GetLayoutDirection();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const wxColour & wxDC::GetTextBackground() const
	static int _bind_GetTextBackground(lua_State *L) {
		if (!_lg_typecheck_GetTextBackground(L)) {
			luaL_error(L, "luna typecheck failed in const wxColour & wxDC::GetTextBackground() const function, expected prototype:\nconst wxColour & wxDC::GetTextBackground() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxColour & wxDC::GetTextBackground() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxColour* lret = &self->GetTextBackground();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,false);

		return 1;
	}

	// const wxColour & wxDC::GetTextForeground() const
	static int _bind_GetTextForeground(lua_State *L) {
		if (!_lg_typecheck_GetTextForeground(L)) {
			luaL_error(L, "luna typecheck failed in const wxColour & wxDC::GetTextForeground() const function, expected prototype:\nconst wxColour & wxDC::GetTextForeground() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxColour & wxDC::GetTextForeground() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxColour* lret = &self->GetTextForeground();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,false);

		return 1;
	}

	// void wxDC::SetBackgroundMode(int mode)
	static int _bind_SetBackgroundMode(lua_State *L) {
		if (!_lg_typecheck_SetBackgroundMode(L)) {
			luaL_error(L, "luna typecheck failed in void wxDC::SetBackgroundMode(int mode) function, expected prototype:\nvoid wxDC::SetBackgroundMode(int mode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int mode=(int)lua_tointeger(L,2);

		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDC::SetBackgroundMode(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetBackgroundMode(mode);

		return 0;
	}

	// void wxDC::SetFont(const wxFont & font)
	static int _bind_SetFont(lua_State *L) {
		if (!_lg_typecheck_SetFont(L)) {
			luaL_error(L, "luna typecheck failed in void wxDC::SetFont(const wxFont & font) function, expected prototype:\nvoid wxDC::SetFont(const wxFont & font)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxFont* font_ptr=(Luna< wxObject >::checkSubType< wxFont >(L,2));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxDC::SetFont function");
		}
		const wxFont & font=*font_ptr;

		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDC::SetFont(const wxFont &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetFont(font);

		return 0;
	}

	// void wxDC::SetTextBackground(const wxColour & colour)
	static int _bind_SetTextBackground(lua_State *L) {
		if (!_lg_typecheck_SetTextBackground(L)) {
			luaL_error(L, "luna typecheck failed in void wxDC::SetTextBackground(const wxColour & colour) function, expected prototype:\nvoid wxDC::SetTextBackground(const wxColour & colour)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxColour* colour_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,2));
		if( !colour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colour in wxDC::SetTextBackground function");
		}
		const wxColour & colour=*colour_ptr;

		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDC::SetTextBackground(const wxColour &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetTextBackground(colour);

		return 0;
	}

	// void wxDC::SetTextForeground(const wxColour & colour)
	static int _bind_SetTextForeground(lua_State *L) {
		if (!_lg_typecheck_SetTextForeground(L)) {
			luaL_error(L, "luna typecheck failed in void wxDC::SetTextForeground(const wxColour & colour) function, expected prototype:\nvoid wxDC::SetTextForeground(const wxColour & colour)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxColour* colour_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,2));
		if( !colour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colour in wxDC::SetTextForeground function");
		}
		const wxColour & colour=*colour_ptr;

		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDC::SetTextForeground(const wxColour &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetTextForeground(colour);

		return 0;
	}

	// void wxDC::SetLayoutDirection(wxLayoutDirection dir)
	static int _bind_SetLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_SetLayoutDirection(L)) {
			luaL_error(L, "luna typecheck failed in void wxDC::SetLayoutDirection(wxLayoutDirection dir) function, expected prototype:\nvoid wxDC::SetLayoutDirection(wxLayoutDirection dir)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxLayoutDirection dir=(wxLayoutDirection)lua_tointeger(L,2);

		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDC::SetLayoutDirection(wxLayoutDirection). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetLayoutDirection(dir);

		return 0;
	}

	// void wxDC::CalcBoundingBox(int x, int y)
	static int _bind_CalcBoundingBox(lua_State *L) {
		if (!_lg_typecheck_CalcBoundingBox(L)) {
			luaL_error(L, "luna typecheck failed in void wxDC::CalcBoundingBox(int x, int y) function, expected prototype:\nvoid wxDC::CalcBoundingBox(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDC::CalcBoundingBox(int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->CalcBoundingBox(x, y);

		return 0;
	}

	// int wxDC::MaxX() const
	static int _bind_MaxX(lua_State *L) {
		if (!_lg_typecheck_MaxX(L)) {
			luaL_error(L, "luna typecheck failed in int wxDC::MaxX() const function, expected prototype:\nint wxDC::MaxX() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxDC::MaxX() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->MaxX();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxDC::MaxY() const
	static int _bind_MaxY(lua_State *L) {
		if (!_lg_typecheck_MaxY(L)) {
			luaL_error(L, "luna typecheck failed in int wxDC::MaxY() const function, expected prototype:\nint wxDC::MaxY() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxDC::MaxY() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->MaxY();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxDC::MinX() const
	static int _bind_MinX(lua_State *L) {
		if (!_lg_typecheck_MinX(L)) {
			luaL_error(L, "luna typecheck failed in int wxDC::MinX() const function, expected prototype:\nint wxDC::MinX() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxDC::MinX() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->MinX();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxDC::MinY() const
	static int _bind_MinY(lua_State *L) {
		if (!_lg_typecheck_MinY(L)) {
			luaL_error(L, "luna typecheck failed in int wxDC::MinY() const function, expected prototype:\nint wxDC::MinY() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxDC::MinY() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->MinY();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxDC::ResetBoundingBox()
	static int _bind_ResetBoundingBox(lua_State *L) {
		if (!_lg_typecheck_ResetBoundingBox(L)) {
			luaL_error(L, "luna typecheck failed in void wxDC::ResetBoundingBox() function, expected prototype:\nvoid wxDC::ResetBoundingBox()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDC::ResetBoundingBox(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ResetBoundingBox();

		return 0;
	}

	// bool wxDC::StartDoc(const wxString & message)
	static int _bind_StartDoc(lua_State *L) {
		if (!_lg_typecheck_StartDoc(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDC::StartDoc(const wxString & message) function, expected prototype:\nbool wxDC::StartDoc(const wxString & message)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString message(lua_tostring(L,2),lua_objlen(L,2));

		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDC::StartDoc(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->StartDoc(message);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDC::StartPage()
	static int _bind_StartPage(lua_State *L) {
		if (!_lg_typecheck_StartPage(L)) {
			luaL_error(L, "luna typecheck failed in void wxDC::StartPage() function, expected prototype:\nvoid wxDC::StartPage()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDC::StartPage(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->StartPage();

		return 0;
	}

	// void wxDC::EndDoc()
	static int _bind_EndDoc(lua_State *L) {
		if (!_lg_typecheck_EndDoc(L)) {
			luaL_error(L, "luna typecheck failed in void wxDC::EndDoc() function, expected prototype:\nvoid wxDC::EndDoc()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDC::EndDoc(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EndDoc();

		return 0;
	}

	// void wxDC::EndPage()
	static int _bind_EndPage(lua_State *L) {
		if (!_lg_typecheck_EndPage(L)) {
			luaL_error(L, "luna typecheck failed in void wxDC::EndPage() function, expected prototype:\nvoid wxDC::EndPage()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDC::EndPage(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EndPage();

		return 0;
	}

	// bool wxDC::Blit(int xdest, int ydest, int width, int height, wxDC * source, int xsrc, int ysrc, wxRasterOperationMode logicalFunc = ::wxCOPY, bool useMask = false, int xsrcMask = ::wxDefaultCoord, int ysrcMask = ::wxDefaultCoord)
	static int _bind_Blit(lua_State *L) {
		if (!_lg_typecheck_Blit(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDC::Blit(int xdest, int ydest, int width, int height, wxDC * source, int xsrc, int ysrc, wxRasterOperationMode logicalFunc = ::wxCOPY, bool useMask = false, int xsrcMask = ::wxDefaultCoord, int ysrcMask = ::wxDefaultCoord) function, expected prototype:\nbool wxDC::Blit(int xdest, int ydest, int width, int height, wxDC * source, int xsrc, int ysrc, wxRasterOperationMode logicalFunc = ::wxCOPY, bool useMask = false, int xsrcMask = ::wxDefaultCoord, int ysrcMask = ::wxDefaultCoord)\nClass arguments details:\narg 5 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int xdest=(int)lua_tointeger(L,2);
		int ydest=(int)lua_tointeger(L,3);
		int width=(int)lua_tointeger(L,4);
		int height=(int)lua_tointeger(L,5);
		wxDC* source=(Luna< wxObject >::checkSubType< wxDC >(L,6));
		int xsrc=(int)lua_tointeger(L,7);
		int ysrc=(int)lua_tointeger(L,8);
		wxRasterOperationMode logicalFunc=luatop>8 ? (wxRasterOperationMode)lua_tointeger(L,9) : (wxRasterOperationMode)::wxCOPY;
		bool useMask=luatop>9 ? (bool)(lua_toboolean(L,10)==1) : (bool)false;
		int xsrcMask=luatop>10 ? (int)lua_tointeger(L,11) : (int)::wxDefaultCoord;
		int ysrcMask=luatop>11 ? (int)lua_tointeger(L,12) : (int)::wxDefaultCoord;

		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDC::Blit(int, int, int, int, wxDC *, int, int, wxRasterOperationMode, bool, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Blit(xdest, ydest, width, height, source, xsrc, ysrc, logicalFunc, useMask, xsrcMask, ysrcMask);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDC::StretchBlit(int xdest, int ydest, int dstWidth, int dstHeight, wxDC * source, int xsrc, int ysrc, int srcWidth, int srcHeight, wxRasterOperationMode logicalFunc = ::wxCOPY, bool useMask = false, int xsrcMask = ::wxDefaultCoord, int ysrcMask = ::wxDefaultCoord)
	static int _bind_StretchBlit(lua_State *L) {
		if (!_lg_typecheck_StretchBlit(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDC::StretchBlit(int xdest, int ydest, int dstWidth, int dstHeight, wxDC * source, int xsrc, int ysrc, int srcWidth, int srcHeight, wxRasterOperationMode logicalFunc = ::wxCOPY, bool useMask = false, int xsrcMask = ::wxDefaultCoord, int ysrcMask = ::wxDefaultCoord) function, expected prototype:\nbool wxDC::StretchBlit(int xdest, int ydest, int dstWidth, int dstHeight, wxDC * source, int xsrc, int ysrc, int srcWidth, int srcHeight, wxRasterOperationMode logicalFunc = ::wxCOPY, bool useMask = false, int xsrcMask = ::wxDefaultCoord, int ysrcMask = ::wxDefaultCoord)\nClass arguments details:\narg 5 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int xdest=(int)lua_tointeger(L,2);
		int ydest=(int)lua_tointeger(L,3);
		int dstWidth=(int)lua_tointeger(L,4);
		int dstHeight=(int)lua_tointeger(L,5);
		wxDC* source=(Luna< wxObject >::checkSubType< wxDC >(L,6));
		int xsrc=(int)lua_tointeger(L,7);
		int ysrc=(int)lua_tointeger(L,8);
		int srcWidth=(int)lua_tointeger(L,9);
		int srcHeight=(int)lua_tointeger(L,10);
		wxRasterOperationMode logicalFunc=luatop>10 ? (wxRasterOperationMode)lua_tointeger(L,11) : (wxRasterOperationMode)::wxCOPY;
		bool useMask=luatop>11 ? (bool)(lua_toboolean(L,12)==1) : (bool)false;
		int xsrcMask=luatop>12 ? (int)lua_tointeger(L,13) : (int)::wxDefaultCoord;
		int ysrcMask=luatop>13 ? (int)lua_tointeger(L,14) : (int)::wxDefaultCoord;

		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDC::StretchBlit(int, int, int, int, wxDC *, int, int, int, int, wxRasterOperationMode, bool, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->StretchBlit(xdest, ydest, dstWidth, dstHeight, source, xsrc, ysrc, srcWidth, srcHeight, logicalFunc, useMask, xsrcMask, ysrcMask);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const wxBrush & wxDC::GetBackground() const
	static int _bind_GetBackground(lua_State *L) {
		if (!_lg_typecheck_GetBackground(L)) {
			luaL_error(L, "luna typecheck failed in const wxBrush & wxDC::GetBackground() const function, expected prototype:\nconst wxBrush & wxDC::GetBackground() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxBrush & wxDC::GetBackground() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxBrush* lret = &self->GetBackground();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxBrush >::push(L,lret,false);

		return 1;
	}

	// const wxBrush & wxDC::GetBrush() const
	static int _bind_GetBrush(lua_State *L) {
		if (!_lg_typecheck_GetBrush(L)) {
			luaL_error(L, "luna typecheck failed in const wxBrush & wxDC::GetBrush() const function, expected prototype:\nconst wxBrush & wxDC::GetBrush() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxBrush & wxDC::GetBrush() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxBrush* lret = &self->GetBrush();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxBrush >::push(L,lret,false);

		return 1;
	}

	// const wxPen & wxDC::GetPen() const
	static int _bind_GetPen(lua_State *L) {
		if (!_lg_typecheck_GetPen(L)) {
			luaL_error(L, "luna typecheck failed in const wxPen & wxDC::GetPen() const function, expected prototype:\nconst wxPen & wxDC::GetPen() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxPen & wxDC::GetPen() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxPen* lret = &self->GetPen();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPen >::push(L,lret,false);

		return 1;
	}

	// void wxDC::SetBackground(const wxBrush & brush)
	static int _bind_SetBackground(lua_State *L) {
		if (!_lg_typecheck_SetBackground(L)) {
			luaL_error(L, "luna typecheck failed in void wxDC::SetBackground(const wxBrush & brush) function, expected prototype:\nvoid wxDC::SetBackground(const wxBrush & brush)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxBrush* brush_ptr=(Luna< wxObject >::checkSubType< wxBrush >(L,2));
		if( !brush_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg brush in wxDC::SetBackground function");
		}
		const wxBrush & brush=*brush_ptr;

		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDC::SetBackground(const wxBrush &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetBackground(brush);

		return 0;
	}

	// void wxDC::SetBrush(const wxBrush & brush)
	static int _bind_SetBrush(lua_State *L) {
		if (!_lg_typecheck_SetBrush(L)) {
			luaL_error(L, "luna typecheck failed in void wxDC::SetBrush(const wxBrush & brush) function, expected prototype:\nvoid wxDC::SetBrush(const wxBrush & brush)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxBrush* brush_ptr=(Luna< wxObject >::checkSubType< wxBrush >(L,2));
		if( !brush_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg brush in wxDC::SetBrush function");
		}
		const wxBrush & brush=*brush_ptr;

		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDC::SetBrush(const wxBrush &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetBrush(brush);

		return 0;
	}

	// void wxDC::SetPen(const wxPen & pen)
	static int _bind_SetPen(lua_State *L) {
		if (!_lg_typecheck_SetPen(L)) {
			luaL_error(L, "luna typecheck failed in void wxDC::SetPen(const wxPen & pen) function, expected prototype:\nvoid wxDC::SetPen(const wxPen & pen)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPen* pen_ptr=(Luna< wxObject >::checkSubType< wxPen >(L,2));
		if( !pen_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pen in wxDC::SetPen function");
		}
		const wxPen & pen=*pen_ptr;

		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDC::SetPen(const wxPen &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetPen(pen);

		return 0;
	}

	// void wxDC::CopyAttributes(const wxDC & dc)
	static int _bind_CopyAttributes(lua_State *L) {
		if (!_lg_typecheck_CopyAttributes(L)) {
			luaL_error(L, "luna typecheck failed in void wxDC::CopyAttributes(const wxDC & dc) function, expected prototype:\nvoid wxDC::CopyAttributes(const wxDC & dc)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxDC::CopyAttributes function");
		}
		const wxDC & dc=*dc_ptr;

		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDC::CopyAttributes(const wxDC &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->CopyAttributes(dc);

		return 0;
	}

	// int wxDC::GetDepth() const
	static int _bind_GetDepth(lua_State *L) {
		if (!_lg_typecheck_GetDepth(L)) {
			luaL_error(L, "luna typecheck failed in int wxDC::GetDepth() const function, expected prototype:\nint wxDC::GetDepth() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxDC::GetDepth() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetDepth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxPoint wxDC::GetDeviceOrigin() const
	static int _bind_GetDeviceOrigin(lua_State *L) {
		if (!_lg_typecheck_GetDeviceOrigin(L)) {
			luaL_error(L, "luna typecheck failed in wxPoint wxDC::GetDeviceOrigin() const function, expected prototype:\nwxPoint wxDC::GetDeviceOrigin() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPoint wxDC::GetDeviceOrigin() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPoint stack_lret = self->GetDeviceOrigin();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// wxRasterOperationMode wxDC::GetLogicalFunction() const
	static int _bind_GetLogicalFunction(lua_State *L) {
		if (!_lg_typecheck_GetLogicalFunction(L)) {
			luaL_error(L, "luna typecheck failed in wxRasterOperationMode wxDC::GetLogicalFunction() const function, expected prototype:\nwxRasterOperationMode wxDC::GetLogicalFunction() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxRasterOperationMode wxDC::GetLogicalFunction() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxRasterOperationMode lret = self->GetLogicalFunction();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxMappingMode wxDC::GetMapMode() const
	static int _bind_GetMapMode(lua_State *L) {
		if (!_lg_typecheck_GetMapMode(L)) {
			luaL_error(L, "luna typecheck failed in wxMappingMode wxDC::GetMapMode() const function, expected prototype:\nwxMappingMode wxDC::GetMapMode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxMappingMode wxDC::GetMapMode() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxMappingMode lret = self->GetMapMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxDC::GetPixel(int x, int y, wxColour * colour) const
	static int _bind_GetPixel(lua_State *L) {
		if (!_lg_typecheck_GetPixel(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDC::GetPixel(int x, int y, wxColour * colour) const function, expected prototype:\nbool wxDC::GetPixel(int x, int y, wxColour * colour) const\nClass arguments details:\narg 3 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		wxColour* colour=(Luna< wxObject >::checkSubType< wxColour >(L,4));

		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDC::GetPixel(int, int, wxColour *) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GetPixel(x, y, colour);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxSize wxDC::GetPPI() const
	static int _bind_GetPPI(lua_State *L) {
		if (!_lg_typecheck_GetPPI(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxDC::GetPPI() const function, expected prototype:\nwxSize wxDC::GetPPI() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxDC::GetPPI() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->GetPPI();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// void wxDC::GetSize(int * width, int * height) const
	static int _bind_GetSize_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetSize_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxDC::GetSize(int * width, int * height) const function, expected prototype:\nvoid wxDC::GetSize(int * width, int * height) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int* width=(int*)Luna< void >::check(L,2);
		int* height=(int*)Luna< void >::check(L,3);

		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDC::GetSize(int *, int *) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GetSize(width, height);

		return 0;
	}

	// wxSize wxDC::GetSize() const
	static int _bind_GetSize_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetSize_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxDC::GetSize() const function, expected prototype:\nwxSize wxDC::GetSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxDC::GetSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->GetSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// Overload binder for wxDC::GetSize
	static int _bind_GetSize(lua_State *L) {
		if (_lg_typecheck_GetSize_overload_1(L)) return _bind_GetSize_overload_1(L);
		if (_lg_typecheck_GetSize_overload_2(L)) return _bind_GetSize_overload_2(L);

		luaL_error(L, "error in function GetSize, cannot match any of the overloads for function GetSize:\n  GetSize(int *, int *)\n  GetSize()\n");
		return 0;
	}

	// void wxDC::GetSizeMM(int * width, int * height) const
	static int _bind_GetSizeMM_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetSizeMM_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxDC::GetSizeMM(int * width, int * height) const function, expected prototype:\nvoid wxDC::GetSizeMM(int * width, int * height) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int* width=(int*)Luna< void >::check(L,2);
		int* height=(int*)Luna< void >::check(L,3);

		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDC::GetSizeMM(int *, int *) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GetSizeMM(width, height);

		return 0;
	}

	// wxSize wxDC::GetSizeMM() const
	static int _bind_GetSizeMM_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetSizeMM_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxDC::GetSizeMM() const function, expected prototype:\nwxSize wxDC::GetSizeMM() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxDC::GetSizeMM() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->GetSizeMM();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// Overload binder for wxDC::GetSizeMM
	static int _bind_GetSizeMM(lua_State *L) {
		if (_lg_typecheck_GetSizeMM_overload_1(L)) return _bind_GetSizeMM_overload_1(L);
		if (_lg_typecheck_GetSizeMM_overload_2(L)) return _bind_GetSizeMM_overload_2(L);

		luaL_error(L, "error in function GetSizeMM, cannot match any of the overloads for function GetSizeMM:\n  GetSizeMM(int *, int *)\n  GetSizeMM()\n");
		return 0;
	}

	// void wxDC::GetUserScale(double * x, double * y) const
	static int _bind_GetUserScale(lua_State *L) {
		if (!_lg_typecheck_GetUserScale(L)) {
			luaL_error(L, "luna typecheck failed in void wxDC::GetUserScale(double * x, double * y) const function, expected prototype:\nvoid wxDC::GetUserScale(double * x, double * y) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double* x=(double*)Luna< void >::check(L,2);
		double* y=(double*)Luna< void >::check(L,3);

		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDC::GetUserScale(double *, double *) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GetUserScale(x, y);

		return 0;
	}

	// bool wxDC::IsOk() const
	static int _bind_IsOk(lua_State *L) {
		if (!_lg_typecheck_IsOk(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDC::IsOk() const function, expected prototype:\nbool wxDC::IsOk() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDC::IsOk() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsOk();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDC::SetAxisOrientation(bool xLeftRight, bool yBottomUp)
	static int _bind_SetAxisOrientation(lua_State *L) {
		if (!_lg_typecheck_SetAxisOrientation(L)) {
			luaL_error(L, "luna typecheck failed in void wxDC::SetAxisOrientation(bool xLeftRight, bool yBottomUp) function, expected prototype:\nvoid wxDC::SetAxisOrientation(bool xLeftRight, bool yBottomUp)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool xLeftRight=(bool)(lua_toboolean(L,2)==1);
		bool yBottomUp=(bool)(lua_toboolean(L,3)==1);

		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDC::SetAxisOrientation(bool, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetAxisOrientation(xLeftRight, yBottomUp);

		return 0;
	}

	// void wxDC::SetDeviceOrigin(int x, int y)
	static int _bind_SetDeviceOrigin(lua_State *L) {
		if (!_lg_typecheck_SetDeviceOrigin(L)) {
			luaL_error(L, "luna typecheck failed in void wxDC::SetDeviceOrigin(int x, int y) function, expected prototype:\nvoid wxDC::SetDeviceOrigin(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDC::SetDeviceOrigin(int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetDeviceOrigin(x, y);

		return 0;
	}

	// void wxDC::SetLogicalFunction(wxRasterOperationMode function)
	static int _bind_SetLogicalFunction(lua_State *L) {
		if (!_lg_typecheck_SetLogicalFunction(L)) {
			luaL_error(L, "luna typecheck failed in void wxDC::SetLogicalFunction(wxRasterOperationMode function) function, expected prototype:\nvoid wxDC::SetLogicalFunction(wxRasterOperationMode function)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxRasterOperationMode function=(wxRasterOperationMode)lua_tointeger(L,2);

		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDC::SetLogicalFunction(wxRasterOperationMode). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetLogicalFunction(function);

		return 0;
	}

	// void wxDC::SetMapMode(wxMappingMode mode)
	static int _bind_SetMapMode(lua_State *L) {
		if (!_lg_typecheck_SetMapMode(L)) {
			luaL_error(L, "luna typecheck failed in void wxDC::SetMapMode(wxMappingMode mode) function, expected prototype:\nvoid wxDC::SetMapMode(wxMappingMode mode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxMappingMode mode=(wxMappingMode)lua_tointeger(L,2);

		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDC::SetMapMode(wxMappingMode). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetMapMode(mode);

		return 0;
	}

	// void wxDC::SetPalette(const wxPalette & palette)
	static int _bind_SetPalette(lua_State *L) {
		if (!_lg_typecheck_SetPalette(L)) {
			luaL_error(L, "luna typecheck failed in void wxDC::SetPalette(const wxPalette & palette) function, expected prototype:\nvoid wxDC::SetPalette(const wxPalette & palette)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPalette* palette_ptr=(Luna< wxObject >::checkSubType< wxPalette >(L,2));
		if( !palette_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg palette in wxDC::SetPalette function");
		}
		const wxPalette & palette=*palette_ptr;

		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDC::SetPalette(const wxPalette &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetPalette(palette);

		return 0;
	}

	// void wxDC::SetUserScale(double xScale, double yScale)
	static int _bind_SetUserScale(lua_State *L) {
		if (!_lg_typecheck_SetUserScale(L)) {
			luaL_error(L, "luna typecheck failed in void wxDC::SetUserScale(double xScale, double yScale) function, expected prototype:\nvoid wxDC::SetUserScale(double xScale, double yScale)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double xScale=(double)lua_tonumber(L,2);
		double yScale=(double)lua_tonumber(L,3);

		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDC::SetUserScale(double, double). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetUserScale(xScale, yScale);

		return 0;
	}

	// bool wxDC::CanUseTransformMatrix() const
	static int _bind_CanUseTransformMatrix(lua_State *L) {
		if (!_lg_typecheck_CanUseTransformMatrix(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDC::CanUseTransformMatrix() const function, expected prototype:\nbool wxDC::CanUseTransformMatrix() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDC::CanUseTransformMatrix() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->CanUseTransformMatrix();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDC::SetTransformMatrix(const wxAffineMatrix2D & matrix)
	static int _bind_SetTransformMatrix(lua_State *L) {
		if (!_lg_typecheck_SetTransformMatrix(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDC::SetTransformMatrix(const wxAffineMatrix2D & matrix) function, expected prototype:\nbool wxDC::SetTransformMatrix(const wxAffineMatrix2D & matrix)\nClass arguments details:\narg 1 ID = 87852021\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxAffineMatrix2D* matrix_ptr=(Luna< wxAffineMatrix2D >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in wxDC::SetTransformMatrix function");
		}
		const wxAffineMatrix2D & matrix=*matrix_ptr;

		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDC::SetTransformMatrix(const wxAffineMatrix2D &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetTransformMatrix(matrix);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxAffineMatrix2D wxDC::GetTransformMatrix() const
	static int _bind_GetTransformMatrix(lua_State *L) {
		if (!_lg_typecheck_GetTransformMatrix(L)) {
			luaL_error(L, "luna typecheck failed in wxAffineMatrix2D wxDC::GetTransformMatrix() const function, expected prototype:\nwxAffineMatrix2D wxDC::GetTransformMatrix() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxAffineMatrix2D wxDC::GetTransformMatrix() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxAffineMatrix2D stack_lret = self->GetTransformMatrix();
		wxAffineMatrix2D* lret = new wxAffineMatrix2D(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxAffineMatrix2D >::push(L,lret,true);

		return 1;
	}

	// void wxDC::ResetTransformMatrix()
	static int _bind_ResetTransformMatrix(lua_State *L) {
		if (!_lg_typecheck_ResetTransformMatrix(L)) {
			luaL_error(L, "luna typecheck failed in void wxDC::ResetTransformMatrix() function, expected prototype:\nvoid wxDC::ResetTransformMatrix()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDC::ResetTransformMatrix(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ResetTransformMatrix();

		return 0;
	}

	// void wxDC::SetLogicalScale(double x, double y)
	static int _bind_SetLogicalScale(lua_State *L) {
		if (!_lg_typecheck_SetLogicalScale(L)) {
			luaL_error(L, "luna typecheck failed in void wxDC::SetLogicalScale(double x, double y) function, expected prototype:\nvoid wxDC::SetLogicalScale(double x, double y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double x=(double)lua_tonumber(L,2);
		double y=(double)lua_tonumber(L,3);

		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDC::SetLogicalScale(double, double). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetLogicalScale(x, y);

		return 0;
	}

	// void wxDC::GetLogicalScale(double * x, double * y) const
	static int _bind_GetLogicalScale(lua_State *L) {
		if (!_lg_typecheck_GetLogicalScale(L)) {
			luaL_error(L, "luna typecheck failed in void wxDC::GetLogicalScale(double * x, double * y) const function, expected prototype:\nvoid wxDC::GetLogicalScale(double * x, double * y) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double* x=(double*)Luna< void >::check(L,2);
		double* y=(double*)Luna< void >::check(L,3);

		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDC::GetLogicalScale(double *, double *) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GetLogicalScale(x, y);

		return 0;
	}

	// void wxDC::SetLogicalOrigin(int x, int y)
	static int _bind_SetLogicalOrigin(lua_State *L) {
		if (!_lg_typecheck_SetLogicalOrigin(L)) {
			luaL_error(L, "luna typecheck failed in void wxDC::SetLogicalOrigin(int x, int y) function, expected prototype:\nvoid wxDC::SetLogicalOrigin(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDC::SetLogicalOrigin(int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetLogicalOrigin(x, y);

		return 0;
	}

	// void wxDC::GetLogicalOrigin(int * x, int * y) const
	static int _bind_GetLogicalOrigin_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetLogicalOrigin_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxDC::GetLogicalOrigin(int * x, int * y) const function, expected prototype:\nvoid wxDC::GetLogicalOrigin(int * x, int * y) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int* x=(int*)Luna< void >::check(L,2);
		int* y=(int*)Luna< void >::check(L,3);

		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDC::GetLogicalOrigin(int *, int *) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GetLogicalOrigin(x, y);

		return 0;
	}

	// wxPoint wxDC::GetLogicalOrigin() const
	static int _bind_GetLogicalOrigin_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetLogicalOrigin_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxPoint wxDC::GetLogicalOrigin() const function, expected prototype:\nwxPoint wxDC::GetLogicalOrigin() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPoint wxDC::GetLogicalOrigin() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPoint stack_lret = self->GetLogicalOrigin();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// Overload binder for wxDC::GetLogicalOrigin
	static int _bind_GetLogicalOrigin(lua_State *L) {
		if (_lg_typecheck_GetLogicalOrigin_overload_1(L)) return _bind_GetLogicalOrigin_overload_1(L);
		if (_lg_typecheck_GetLogicalOrigin_overload_2(L)) return _bind_GetLogicalOrigin_overload_2(L);

		luaL_error(L, "error in function GetLogicalOrigin, cannot match any of the overloads for function GetLogicalOrigin:\n  GetLogicalOrigin(int *, int *)\n  GetLogicalOrigin()\n");
		return 0;
	}

	// wxClassInfo * wxDC::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxDC::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxDC::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDC* self=Luna< wxObject >::checkSubType< wxDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxDC::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxDC::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxDC* LunaTraits< wxDC >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxDC >::_bind_dtor(wxDC* obj) {
	delete obj;
}

const char LunaTraits< wxDC >::className[] = "wxDC";
const char LunaTraits< wxDC >::fullName[] = "wxDC";
const char LunaTraits< wxDC >::moduleName[] = "wx";
const char* LunaTraits< wxDC >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxDC >::hash = 3662624;
const int LunaTraits< wxDC >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxDC >::methods[] = {
	{"DeviceToLogicalX", &luna_wrapper_wxDC::_bind_DeviceToLogicalX},
	{"DeviceToLogicalXRel", &luna_wrapper_wxDC::_bind_DeviceToLogicalXRel},
	{"DeviceToLogicalY", &luna_wrapper_wxDC::_bind_DeviceToLogicalY},
	{"DeviceToLogicalYRel", &luna_wrapper_wxDC::_bind_DeviceToLogicalYRel},
	{"LogicalToDeviceX", &luna_wrapper_wxDC::_bind_LogicalToDeviceX},
	{"LogicalToDeviceXRel", &luna_wrapper_wxDC::_bind_LogicalToDeviceXRel},
	{"LogicalToDeviceY", &luna_wrapper_wxDC::_bind_LogicalToDeviceY},
	{"LogicalToDeviceYRel", &luna_wrapper_wxDC::_bind_LogicalToDeviceYRel},
	{"Clear", &luna_wrapper_wxDC::_bind_Clear},
	{"DrawArc", &luna_wrapper_wxDC::_bind_DrawArc},
	{"DrawBitmap", &luna_wrapper_wxDC::_bind_DrawBitmap},
	{"DrawCheckMark", &luna_wrapper_wxDC::_bind_DrawCheckMark},
	{"DrawCircle", &luna_wrapper_wxDC::_bind_DrawCircle},
	{"DrawEllipse", &luna_wrapper_wxDC::_bind_DrawEllipse},
	{"DrawEllipticArc", &luna_wrapper_wxDC::_bind_DrawEllipticArc},
	{"DrawIcon", &luna_wrapper_wxDC::_bind_DrawIcon},
	{"DrawLabel", &luna_wrapper_wxDC::_bind_DrawLabel},
	{"DrawLine", &luna_wrapper_wxDC::_bind_DrawLine},
	{"DrawLines", &luna_wrapper_wxDC::_bind_DrawLines},
	{"DrawPoint", &luna_wrapper_wxDC::_bind_DrawPoint},
	{"DrawPolygon", &luna_wrapper_wxDC::_bind_DrawPolygon},
	{"DrawRectangle", &luna_wrapper_wxDC::_bind_DrawRectangle},
	{"DrawRotatedText", &luna_wrapper_wxDC::_bind_DrawRotatedText},
	{"DrawRoundedRectangle", &luna_wrapper_wxDC::_bind_DrawRoundedRectangle},
	{"DrawSpline", &luna_wrapper_wxDC::_bind_DrawSpline},
	{"DrawText", &luna_wrapper_wxDC::_bind_DrawText},
	{"GradientFillConcentric", &luna_wrapper_wxDC::_bind_GradientFillConcentric},
	{"GradientFillLinear", &luna_wrapper_wxDC::_bind_GradientFillLinear},
	{"FloodFill", &luna_wrapper_wxDC::_bind_FloodFill},
	{"CrossHair", &luna_wrapper_wxDC::_bind_CrossHair},
	{"DestroyClippingRegion", &luna_wrapper_wxDC::_bind_DestroyClippingRegion},
	{"GetClippingBox", &luna_wrapper_wxDC::_bind_GetClippingBox},
	{"SetClippingRegion", &luna_wrapper_wxDC::_bind_SetClippingRegion},
	{"SetDeviceClippingRegion", &luna_wrapper_wxDC::_bind_SetDeviceClippingRegion},
	{"GetCharHeight", &luna_wrapper_wxDC::_bind_GetCharHeight},
	{"GetCharWidth", &luna_wrapper_wxDC::_bind_GetCharWidth},
	{"GetFontMetrics", &luna_wrapper_wxDC::_bind_GetFontMetrics},
	{"GetMultiLineTextExtent", &luna_wrapper_wxDC::_bind_GetMultiLineTextExtent},
	{"GetPartialTextExtents", &luna_wrapper_wxDC::_bind_GetPartialTextExtents},
	{"GetTextExtent", &luna_wrapper_wxDC::_bind_GetTextExtent},
	{"GetBackgroundMode", &luna_wrapper_wxDC::_bind_GetBackgroundMode},
	{"GetFont", &luna_wrapper_wxDC::_bind_GetFont},
	{"GetLayoutDirection", &luna_wrapper_wxDC::_bind_GetLayoutDirection},
	{"GetTextBackground", &luna_wrapper_wxDC::_bind_GetTextBackground},
	{"GetTextForeground", &luna_wrapper_wxDC::_bind_GetTextForeground},
	{"SetBackgroundMode", &luna_wrapper_wxDC::_bind_SetBackgroundMode},
	{"SetFont", &luna_wrapper_wxDC::_bind_SetFont},
	{"SetTextBackground", &luna_wrapper_wxDC::_bind_SetTextBackground},
	{"SetTextForeground", &luna_wrapper_wxDC::_bind_SetTextForeground},
	{"SetLayoutDirection", &luna_wrapper_wxDC::_bind_SetLayoutDirection},
	{"CalcBoundingBox", &luna_wrapper_wxDC::_bind_CalcBoundingBox},
	{"MaxX", &luna_wrapper_wxDC::_bind_MaxX},
	{"MaxY", &luna_wrapper_wxDC::_bind_MaxY},
	{"MinX", &luna_wrapper_wxDC::_bind_MinX},
	{"MinY", &luna_wrapper_wxDC::_bind_MinY},
	{"ResetBoundingBox", &luna_wrapper_wxDC::_bind_ResetBoundingBox},
	{"StartDoc", &luna_wrapper_wxDC::_bind_StartDoc},
	{"StartPage", &luna_wrapper_wxDC::_bind_StartPage},
	{"EndDoc", &luna_wrapper_wxDC::_bind_EndDoc},
	{"EndPage", &luna_wrapper_wxDC::_bind_EndPage},
	{"Blit", &luna_wrapper_wxDC::_bind_Blit},
	{"StretchBlit", &luna_wrapper_wxDC::_bind_StretchBlit},
	{"GetBackground", &luna_wrapper_wxDC::_bind_GetBackground},
	{"GetBrush", &luna_wrapper_wxDC::_bind_GetBrush},
	{"GetPen", &luna_wrapper_wxDC::_bind_GetPen},
	{"SetBackground", &luna_wrapper_wxDC::_bind_SetBackground},
	{"SetBrush", &luna_wrapper_wxDC::_bind_SetBrush},
	{"SetPen", &luna_wrapper_wxDC::_bind_SetPen},
	{"CopyAttributes", &luna_wrapper_wxDC::_bind_CopyAttributes},
	{"GetDepth", &luna_wrapper_wxDC::_bind_GetDepth},
	{"GetDeviceOrigin", &luna_wrapper_wxDC::_bind_GetDeviceOrigin},
	{"GetLogicalFunction", &luna_wrapper_wxDC::_bind_GetLogicalFunction},
	{"GetMapMode", &luna_wrapper_wxDC::_bind_GetMapMode},
	{"GetPixel", &luna_wrapper_wxDC::_bind_GetPixel},
	{"GetPPI", &luna_wrapper_wxDC::_bind_GetPPI},
	{"GetSize", &luna_wrapper_wxDC::_bind_GetSize},
	{"GetSizeMM", &luna_wrapper_wxDC::_bind_GetSizeMM},
	{"GetUserScale", &luna_wrapper_wxDC::_bind_GetUserScale},
	{"IsOk", &luna_wrapper_wxDC::_bind_IsOk},
	{"SetAxisOrientation", &luna_wrapper_wxDC::_bind_SetAxisOrientation},
	{"SetDeviceOrigin", &luna_wrapper_wxDC::_bind_SetDeviceOrigin},
	{"SetLogicalFunction", &luna_wrapper_wxDC::_bind_SetLogicalFunction},
	{"SetMapMode", &luna_wrapper_wxDC::_bind_SetMapMode},
	{"SetPalette", &luna_wrapper_wxDC::_bind_SetPalette},
	{"SetUserScale", &luna_wrapper_wxDC::_bind_SetUserScale},
	{"CanUseTransformMatrix", &luna_wrapper_wxDC::_bind_CanUseTransformMatrix},
	{"SetTransformMatrix", &luna_wrapper_wxDC::_bind_SetTransformMatrix},
	{"GetTransformMatrix", &luna_wrapper_wxDC::_bind_GetTransformMatrix},
	{"ResetTransformMatrix", &luna_wrapper_wxDC::_bind_ResetTransformMatrix},
	{"SetLogicalScale", &luna_wrapper_wxDC::_bind_SetLogicalScale},
	{"GetLogicalScale", &luna_wrapper_wxDC::_bind_GetLogicalScale},
	{"SetLogicalOrigin", &luna_wrapper_wxDC::_bind_SetLogicalOrigin},
	{"GetLogicalOrigin", &luna_wrapper_wxDC::_bind_GetLogicalOrigin},
	{"base_GetClassInfo", &luna_wrapper_wxDC::_bind_base_GetClassInfo},
	{"fromVoid", &luna_wrapper_wxDC::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxDC::_bind_asVoid},
	{"getTable", &luna_wrapper_wxDC::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxDC >::converters[] = {
	{"wxObject", &luna_wrapper_wxDC::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxDC >::enumValues[] = {
	{0,0}
};



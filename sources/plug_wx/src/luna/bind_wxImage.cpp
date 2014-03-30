#include <plug_common.h>

#include <luna/wrappers/wrapper_wxImage.h>

class luna_wrapper_wxImage {
public:
	typedef Luna< wxImage > luna_t;

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

		wxImage* self= (wxImage*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxImage >::push(L,self,false);
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
		//wxImage* ptr= dynamic_cast< wxImage* >(Luna< wxObject >::check(L,1));
		wxImage* ptr= luna_caster< wxObject, wxImage >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxImage >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,20268751) ) return false;
		if( (!(Luna< wxSize >::check(L,1))) ) return false;
		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,20268751) ) return false;
		if( (!(Luna< wxSize >::check(L,1))) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && lua_isboolean(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_7(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,20268751) ) return false;
		if( (!(Luna< wxSize >::check(L,1))) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_8(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_9(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_10(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxInputStream >(L,1))) ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_11(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxInputStream >(L,1))) ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_12(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_13(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_14(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		if( (!(Luna< wxSize >::check(L,2))) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_15(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && lua_isboolean(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_16(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		if( (!(Luna< wxSize >::check(L,2))) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_17(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>6 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && lua_isboolean(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_18(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		if( (!(Luna< wxSize >::check(L,2))) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && lua_isboolean(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_19(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_20(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_21(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxInputStream >(L,2))) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_22(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxInputStream >(L,2))) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Copy(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Create_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Create_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		if( (!(Luna< wxSize >::check(L,2))) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Create_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && lua_isboolean(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Create_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		if( (!(Luna< wxSize >::check(L,2))) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Create_overload_5(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>6 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && lua_isboolean(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Create_overload_6(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		if( (!(Luna< wxSize >::check(L,2))) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && lua_isboolean(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Clear(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Destroy(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_InitAlpha(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Blur(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_BlurHorizontal(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_BlurVertical(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Mirror(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Paste(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Replace(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Rescale(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Resize(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,25723480) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Rotate(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,3,25723480) ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		if( luatop>4 && (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,25723480)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Rotate90(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Rotate180(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_RotateHue(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Scale(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Size(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,25723480) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ConvertAlphaToMask_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ConvertAlphaToMask_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ConvertToGreyscale_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ConvertToGreyscale_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ConvertToMono(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ConvertToDisabled(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ComputeHistogram(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,75442299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FindFirstUnusedColour(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>7 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetAlpha_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetAlpha_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetRed(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetGreen(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetBlue(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetMaskRed(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMaskGreen(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMaskBlue(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetOption(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetOptionInt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetOrFindMaskColour(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetPalette(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSubImage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20234418) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasAlpha(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasMask(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasOption(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsOk(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsTransparent(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_LoadFile_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxInputStream >(L,2))) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_LoadFile_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_LoadFile_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_LoadFile_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxInputStream >(L,2))) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SaveFile_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxOutputStream >(L,2))) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SaveFile_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SaveFile_overload_3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SaveFile_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SaveFile_overload_5(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxOutputStream >(L,2))) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetAlpha_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetAlpha_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ClearAlpha(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetData_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetData_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && lua_isboolean(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMask(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMaskColour(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMaskFromImage(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetOption_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetOption_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPalette(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetRGB(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20234418) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddHandler(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CleanUpHandlers(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_InitStandardHandlers(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_InsertHandler(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RemoveHandler(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CanRead_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CanRead_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxInputStream >(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetImageCount_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetImageCount_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxInputStream >(L,1))) ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetImageExtWildcard(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_RGBtoHSV(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,45106465) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_HSVtoRGB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,41631892) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_composeWith(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_LoadFile_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxInputStream >(L,2))) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_LoadFile_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_LoadFile_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_LoadFile_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxInputStream >(L,2))) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SaveFile_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxOutputStream >(L,2))) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SaveFile_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SaveFile_overload_3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SaveFile_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SaveFile_overload_5(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxOutputStream >(L,2))) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck_op_assign(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}


	// Constructor binds:
	// wxImage::wxImage()
	static wxImage* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxImage::wxImage() function, expected prototype:\nwxImage::wxImage()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxImage();
	}

	// wxImage::wxImage(int width, int height, bool clear = true)
	static wxImage* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxImage::wxImage(int width, int height, bool clear = true) function, expected prototype:\nwxImage::wxImage(int width, int height, bool clear = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int width=(int)lua_tointeger(L,1);
		int height=(int)lua_tointeger(L,2);
		bool clear=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		return new wxImage(width, height, clear);
	}

	// wxImage::wxImage(const wxSize & sz, bool clear = true)
	static wxImage* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in wxImage::wxImage(const wxSize & sz, bool clear = true) function, expected prototype:\nwxImage::wxImage(const wxSize & sz, bool clear = true)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxSize* sz_ptr=(Luna< wxSize >::check(L,1));
		if( !sz_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sz in wxImage::wxImage function");
		}
		const wxSize & sz=*sz_ptr;
		bool clear=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		return new wxImage(sz, clear);
	}

	// wxImage::wxImage(int width, int height, unsigned char * data, bool static_data = false)
	static wxImage* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in wxImage::wxImage(int width, int height, unsigned char * data, bool static_data = false) function, expected prototype:\nwxImage::wxImage(int width, int height, unsigned char * data, bool static_data = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int width=(int)lua_tointeger(L,1);
		int height=(int)lua_tointeger(L,2);
		unsigned char data = (unsigned char)(lua_tointeger(L,3));
		bool static_data=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)false;

		return new wxImage(width, height, &data, static_data);
	}

	// wxImage::wxImage(const wxSize & sz, unsigned char * data, bool static_data = false)
	static wxImage* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in wxImage::wxImage(const wxSize & sz, unsigned char * data, bool static_data = false) function, expected prototype:\nwxImage::wxImage(const wxSize & sz, unsigned char * data, bool static_data = false)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxSize* sz_ptr=(Luna< wxSize >::check(L,1));
		if( !sz_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sz in wxImage::wxImage function");
		}
		const wxSize & sz=*sz_ptr;
		unsigned char data = (unsigned char)(lua_tointeger(L,2));
		bool static_data=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)false;

		return new wxImage(sz, &data, static_data);
	}

	// wxImage::wxImage(int width, int height, unsigned char * data, unsigned char * alpha, bool static_data = false)
	static wxImage* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in wxImage::wxImage(int width, int height, unsigned char * data, unsigned char * alpha, bool static_data = false) function, expected prototype:\nwxImage::wxImage(int width, int height, unsigned char * data, unsigned char * alpha, bool static_data = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int width=(int)lua_tointeger(L,1);
		int height=(int)lua_tointeger(L,2);
		unsigned char data = (unsigned char)(lua_tointeger(L,3));
		unsigned char alpha = (unsigned char)(lua_tointeger(L,4));
		bool static_data=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : (bool)false;

		return new wxImage(width, height, &data, &alpha, static_data);
	}

	// wxImage::wxImage(const wxSize & sz, unsigned char * data, unsigned char * alpha, bool static_data = false)
	static wxImage* _bind_ctor_overload_7(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_7(L)) {
			luaL_error(L, "luna typecheck failed in wxImage::wxImage(const wxSize & sz, unsigned char * data, unsigned char * alpha, bool static_data = false) function, expected prototype:\nwxImage::wxImage(const wxSize & sz, unsigned char * data, unsigned char * alpha, bool static_data = false)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxSize* sz_ptr=(Luna< wxSize >::check(L,1));
		if( !sz_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sz in wxImage::wxImage function");
		}
		const wxSize & sz=*sz_ptr;
		unsigned char data = (unsigned char)(lua_tointeger(L,2));
		unsigned char alpha = (unsigned char)(lua_tointeger(L,3));
		bool static_data=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)false;

		return new wxImage(sz, &data, &alpha, static_data);
	}

	// wxImage::wxImage(const wxString & name, wxBitmapType type = ::wxBITMAP_TYPE_ANY, int index = -1)
	static wxImage* _bind_ctor_overload_8(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_8(L)) {
			luaL_error(L, "luna typecheck failed in wxImage::wxImage(const wxString & name, wxBitmapType type = ::wxBITMAP_TYPE_ANY, int index = -1) function, expected prototype:\nwxImage::wxImage(const wxString & name, wxBitmapType type = ::wxBITMAP_TYPE_ANY, int index = -1)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString name(lua_tostring(L,1),lua_objlen(L,1));
		wxBitmapType type=luatop>1 ? (wxBitmapType)lua_tointeger(L,2) : (wxBitmapType)::wxBITMAP_TYPE_ANY;
		int index=luatop>2 ? (int)lua_tointeger(L,3) : (int)-1;

		return new wxImage(name, type, index);
	}

	// wxImage::wxImage(const wxString & name, const wxString & mimetype, int index = -1)
	static wxImage* _bind_ctor_overload_9(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_9(L)) {
			luaL_error(L, "luna typecheck failed in wxImage::wxImage(const wxString & name, const wxString & mimetype, int index = -1) function, expected prototype:\nwxImage::wxImage(const wxString & name, const wxString & mimetype, int index = -1)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString name(lua_tostring(L,1),lua_objlen(L,1));
		wxString mimetype(lua_tostring(L,2),lua_objlen(L,2));
		int index=luatop>2 ? (int)lua_tointeger(L,3) : (int)-1;

		return new wxImage(name, mimetype, index);
	}

	// wxImage::wxImage(wxInputStream & stream, wxBitmapType type = ::wxBITMAP_TYPE_ANY, int index = -1)
	static wxImage* _bind_ctor_overload_10(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_10(L)) {
			luaL_error(L, "luna typecheck failed in wxImage::wxImage(wxInputStream & stream, wxBitmapType type = ::wxBITMAP_TYPE_ANY, int index = -1) function, expected prototype:\nwxImage::wxImage(wxInputStream & stream, wxBitmapType type = ::wxBITMAP_TYPE_ANY, int index = -1)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxInputStream* stream_ptr=(Luna< wxObject >::checkSubType< wxInputStream >(L,1));
		if( !stream_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg stream in wxImage::wxImage function");
		}
		wxInputStream & stream=*stream_ptr;
		wxBitmapType type=luatop>1 ? (wxBitmapType)lua_tointeger(L,2) : (wxBitmapType)::wxBITMAP_TYPE_ANY;
		int index=luatop>2 ? (int)lua_tointeger(L,3) : (int)-1;

		return new wxImage(stream, type, index);
	}

	// wxImage::wxImage(wxInputStream & stream, const wxString & mimetype, int index = -1)
	static wxImage* _bind_ctor_overload_11(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_11(L)) {
			luaL_error(L, "luna typecheck failed in wxImage::wxImage(wxInputStream & stream, const wxString & mimetype, int index = -1) function, expected prototype:\nwxImage::wxImage(wxInputStream & stream, const wxString & mimetype, int index = -1)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxInputStream* stream_ptr=(Luna< wxObject >::checkSubType< wxInputStream >(L,1));
		if( !stream_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg stream in wxImage::wxImage function");
		}
		wxInputStream & stream=*stream_ptr;
		wxString mimetype(lua_tostring(L,2),lua_objlen(L,2));
		int index=luatop>2 ? (int)lua_tointeger(L,3) : (int)-1;

		return new wxImage(stream, mimetype, index);
	}

	// wxImage::wxImage(lua_Table * data)
	static wxImage* _bind_ctor_overload_12(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_12(L)) {
			luaL_error(L, "luna typecheck failed in wxImage::wxImage(lua_Table * data) function, expected prototype:\nwxImage::wxImage(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxImage(L,NULL);
	}

	// wxImage::wxImage(lua_Table * data, int width, int height, bool clear = true)
	static wxImage* _bind_ctor_overload_13(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_13(L)) {
			luaL_error(L, "luna typecheck failed in wxImage::wxImage(lua_Table * data, int width, int height, bool clear = true) function, expected prototype:\nwxImage::wxImage(lua_Table * data, int width, int height, bool clear = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int width=(int)lua_tointeger(L,2);
		int height=(int)lua_tointeger(L,3);
		bool clear=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)true;

		return new wrapper_wxImage(L,NULL, width, height, clear);
	}

	// wxImage::wxImage(lua_Table * data, const wxSize & sz, bool clear = true)
	static wxImage* _bind_ctor_overload_14(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_14(L)) {
			luaL_error(L, "luna typecheck failed in wxImage::wxImage(lua_Table * data, const wxSize & sz, bool clear = true) function, expected prototype:\nwxImage::wxImage(lua_Table * data, const wxSize & sz, bool clear = true)\nClass arguments details:\narg 2 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxSize* sz_ptr=(Luna< wxSize >::check(L,2));
		if( !sz_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sz in wxImage::wxImage function");
		}
		const wxSize & sz=*sz_ptr;
		bool clear=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		return new wrapper_wxImage(L,NULL, sz, clear);
	}

	// wxImage::wxImage(lua_Table * data, int width, int height, unsigned char * data, bool static_data = false)
	static wxImage* _bind_ctor_overload_15(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_15(L)) {
			luaL_error(L, "luna typecheck failed in wxImage::wxImage(lua_Table * data, int width, int height, unsigned char * data, bool static_data = false) function, expected prototype:\nwxImage::wxImage(lua_Table * data, int width, int height, unsigned char * data, bool static_data = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int width=(int)lua_tointeger(L,2);
		int height=(int)lua_tointeger(L,3);
		unsigned char data = (unsigned char)(lua_tointeger(L,4));
		bool static_data=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : (bool)false;

		return new wrapper_wxImage(L,NULL, width, height, &data, static_data);
	}

	// wxImage::wxImage(lua_Table * data, const wxSize & sz, unsigned char * data, bool static_data = false)
	static wxImage* _bind_ctor_overload_16(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_16(L)) {
			luaL_error(L, "luna typecheck failed in wxImage::wxImage(lua_Table * data, const wxSize & sz, unsigned char * data, bool static_data = false) function, expected prototype:\nwxImage::wxImage(lua_Table * data, const wxSize & sz, unsigned char * data, bool static_data = false)\nClass arguments details:\narg 2 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxSize* sz_ptr=(Luna< wxSize >::check(L,2));
		if( !sz_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sz in wxImage::wxImage function");
		}
		const wxSize & sz=*sz_ptr;
		unsigned char data = (unsigned char)(lua_tointeger(L,3));
		bool static_data=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)false;

		return new wrapper_wxImage(L,NULL, sz, &data, static_data);
	}

	// wxImage::wxImage(lua_Table * data, int width, int height, unsigned char * data, unsigned char * alpha, bool static_data = false)
	static wxImage* _bind_ctor_overload_17(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_17(L)) {
			luaL_error(L, "luna typecheck failed in wxImage::wxImage(lua_Table * data, int width, int height, unsigned char * data, unsigned char * alpha, bool static_data = false) function, expected prototype:\nwxImage::wxImage(lua_Table * data, int width, int height, unsigned char * data, unsigned char * alpha, bool static_data = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int width=(int)lua_tointeger(L,2);
		int height=(int)lua_tointeger(L,3);
		unsigned char data = (unsigned char)(lua_tointeger(L,4));
		unsigned char alpha = (unsigned char)(lua_tointeger(L,5));
		bool static_data=luatop>5 ? (bool)(lua_toboolean(L,6)==1) : (bool)false;

		return new wrapper_wxImage(L,NULL, width, height, &data, &alpha, static_data);
	}

	// wxImage::wxImage(lua_Table * data, const wxSize & sz, unsigned char * data, unsigned char * alpha, bool static_data = false)
	static wxImage* _bind_ctor_overload_18(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_18(L)) {
			luaL_error(L, "luna typecheck failed in wxImage::wxImage(lua_Table * data, const wxSize & sz, unsigned char * data, unsigned char * alpha, bool static_data = false) function, expected prototype:\nwxImage::wxImage(lua_Table * data, const wxSize & sz, unsigned char * data, unsigned char * alpha, bool static_data = false)\nClass arguments details:\narg 2 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxSize* sz_ptr=(Luna< wxSize >::check(L,2));
		if( !sz_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sz in wxImage::wxImage function");
		}
		const wxSize & sz=*sz_ptr;
		unsigned char data = (unsigned char)(lua_tointeger(L,3));
		unsigned char alpha = (unsigned char)(lua_tointeger(L,4));
		bool static_data=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : (bool)false;

		return new wrapper_wxImage(L,NULL, sz, &data, &alpha, static_data);
	}

	// wxImage::wxImage(lua_Table * data, const wxString & name, wxBitmapType type = ::wxBITMAP_TYPE_ANY, int index = -1)
	static wxImage* _bind_ctor_overload_19(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_19(L)) {
			luaL_error(L, "luna typecheck failed in wxImage::wxImage(lua_Table * data, const wxString & name, wxBitmapType type = ::wxBITMAP_TYPE_ANY, int index = -1) function, expected prototype:\nwxImage::wxImage(lua_Table * data, const wxString & name, wxBitmapType type = ::wxBITMAP_TYPE_ANY, int index = -1)\nClass arguments details:\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString name(lua_tostring(L,2),lua_objlen(L,2));
		wxBitmapType type=luatop>2 ? (wxBitmapType)lua_tointeger(L,3) : (wxBitmapType)::wxBITMAP_TYPE_ANY;
		int index=luatop>3 ? (int)lua_tointeger(L,4) : (int)-1;

		return new wrapper_wxImage(L,NULL, name, type, index);
	}

	// wxImage::wxImage(lua_Table * data, const wxString & name, const wxString & mimetype, int index = -1)
	static wxImage* _bind_ctor_overload_20(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_20(L)) {
			luaL_error(L, "luna typecheck failed in wxImage::wxImage(lua_Table * data, const wxString & name, const wxString & mimetype, int index = -1) function, expected prototype:\nwxImage::wxImage(lua_Table * data, const wxString & name, const wxString & mimetype, int index = -1)\nClass arguments details:\narg 2 ID = 88196105\narg 3 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString name(lua_tostring(L,2),lua_objlen(L,2));
		wxString mimetype(lua_tostring(L,3),lua_objlen(L,3));
		int index=luatop>3 ? (int)lua_tointeger(L,4) : (int)-1;

		return new wrapper_wxImage(L,NULL, name, mimetype, index);
	}

	// wxImage::wxImage(lua_Table * data, wxInputStream & stream, wxBitmapType type = ::wxBITMAP_TYPE_ANY, int index = -1)
	static wxImage* _bind_ctor_overload_21(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_21(L)) {
			luaL_error(L, "luna typecheck failed in wxImage::wxImage(lua_Table * data, wxInputStream & stream, wxBitmapType type = ::wxBITMAP_TYPE_ANY, int index = -1) function, expected prototype:\nwxImage::wxImage(lua_Table * data, wxInputStream & stream, wxBitmapType type = ::wxBITMAP_TYPE_ANY, int index = -1)\nClass arguments details:\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxInputStream* stream_ptr=(Luna< wxObject >::checkSubType< wxInputStream >(L,2));
		if( !stream_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg stream in wxImage::wxImage function");
		}
		wxInputStream & stream=*stream_ptr;
		wxBitmapType type=luatop>2 ? (wxBitmapType)lua_tointeger(L,3) : (wxBitmapType)::wxBITMAP_TYPE_ANY;
		int index=luatop>3 ? (int)lua_tointeger(L,4) : (int)-1;

		return new wrapper_wxImage(L,NULL, stream, type, index);
	}

	// wxImage::wxImage(lua_Table * data, wxInputStream & stream, const wxString & mimetype, int index = -1)
	static wxImage* _bind_ctor_overload_22(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_22(L)) {
			luaL_error(L, "luna typecheck failed in wxImage::wxImage(lua_Table * data, wxInputStream & stream, const wxString & mimetype, int index = -1) function, expected prototype:\nwxImage::wxImage(lua_Table * data, wxInputStream & stream, const wxString & mimetype, int index = -1)\nClass arguments details:\narg 2 ID = 56813631\narg 3 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxInputStream* stream_ptr=(Luna< wxObject >::checkSubType< wxInputStream >(L,2));
		if( !stream_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg stream in wxImage::wxImage function");
		}
		wxInputStream & stream=*stream_ptr;
		wxString mimetype(lua_tostring(L,3),lua_objlen(L,3));
		int index=luatop>3 ? (int)lua_tointeger(L,4) : (int)-1;

		return new wrapper_wxImage(L,NULL, stream, mimetype, index);
	}

	// Overload binder for wxImage::wxImage
	static wxImage* _bind_ctor(lua_State *L) {
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
		if (_lg_typecheck_ctor_overload_13(L)) return _bind_ctor_overload_13(L);
		if (_lg_typecheck_ctor_overload_14(L)) return _bind_ctor_overload_14(L);
		if (_lg_typecheck_ctor_overload_15(L)) return _bind_ctor_overload_15(L);
		if (_lg_typecheck_ctor_overload_16(L)) return _bind_ctor_overload_16(L);
		if (_lg_typecheck_ctor_overload_17(L)) return _bind_ctor_overload_17(L);
		if (_lg_typecheck_ctor_overload_18(L)) return _bind_ctor_overload_18(L);
		if (_lg_typecheck_ctor_overload_19(L)) return _bind_ctor_overload_19(L);
		if (_lg_typecheck_ctor_overload_20(L)) return _bind_ctor_overload_20(L);
		if (_lg_typecheck_ctor_overload_21(L)) return _bind_ctor_overload_21(L);
		if (_lg_typecheck_ctor_overload_22(L)) return _bind_ctor_overload_22(L);

		luaL_error(L, "error in function wxImage, cannot match any of the overloads for function wxImage:\n  wxImage()\n  wxImage(int, int, bool)\n  wxImage(const wxSize &, bool)\n  wxImage(int, int, unsigned char *, bool)\n  wxImage(const wxSize &, unsigned char *, bool)\n  wxImage(int, int, unsigned char *, unsigned char *, bool)\n  wxImage(const wxSize &, unsigned char *, unsigned char *, bool)\n  wxImage(const wxString &, wxBitmapType, int)\n  wxImage(const wxString &, const wxString &, int)\n  wxImage(wxInputStream &, wxBitmapType, int)\n  wxImage(wxInputStream &, const wxString &, int)\n  wxImage(lua_Table *)\n  wxImage(lua_Table *, int, int, bool)\n  wxImage(lua_Table *, const wxSize &, bool)\n  wxImage(lua_Table *, int, int, unsigned char *, bool)\n  wxImage(lua_Table *, const wxSize &, unsigned char *, bool)\n  wxImage(lua_Table *, int, int, unsigned char *, unsigned char *, bool)\n  wxImage(lua_Table *, const wxSize &, unsigned char *, unsigned char *, bool)\n  wxImage(lua_Table *, const wxString &, wxBitmapType, int)\n  wxImage(lua_Table *, const wxString &, const wxString &, int)\n  wxImage(lua_Table *, wxInputStream &, wxBitmapType, int)\n  wxImage(lua_Table *, wxInputStream &, const wxString &, int)\n");
		return NULL;
	}


	// Function binds:
	// wxImage wxImage::Copy() const
	static int _bind_Copy(lua_State *L) {
		if (!_lg_typecheck_Copy(L)) {
			luaL_error(L, "luna typecheck failed in wxImage wxImage::Copy() const function, expected prototype:\nwxImage wxImage::Copy() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxImage* self=Luna< wxObject >::checkSubType< wxImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxImage wxImage::Copy() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxImage stack_lret = self->Copy();
		wxImage* lret = new wxImage(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxImage >::push(L,lret,true);

		return 1;
	}

	// bool wxImage::Create(int width, int height, bool clear = true)
	static int _bind_Create_overload_1(lua_State *L) {
		if (!_lg_typecheck_Create_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool wxImage::Create(int width, int height, bool clear = true) function, expected prototype:\nbool wxImage::Create(int width, int height, bool clear = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int width=(int)lua_tointeger(L,2);
		int height=(int)lua_tointeger(L,3);
		bool clear=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)true;

		wxImage* self=Luna< wxObject >::checkSubType< wxImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxImage::Create(int, int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Create(width, height, clear);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxImage::Create(const wxSize & sz, bool clear = true)
	static int _bind_Create_overload_2(lua_State *L) {
		if (!_lg_typecheck_Create_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool wxImage::Create(const wxSize & sz, bool clear = true) function, expected prototype:\nbool wxImage::Create(const wxSize & sz, bool clear = true)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxSize* sz_ptr=(Luna< wxSize >::check(L,2));
		if( !sz_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sz in wxImage::Create function");
		}
		const wxSize & sz=*sz_ptr;
		bool clear=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		wxImage* self=Luna< wxObject >::checkSubType< wxImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxImage::Create(const wxSize &, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Create(sz, clear);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxImage::Create(int width, int height, unsigned char * data, bool static_data = false)
	static int _bind_Create_overload_3(lua_State *L) {
		if (!_lg_typecheck_Create_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in bool wxImage::Create(int width, int height, unsigned char * data, bool static_data = false) function, expected prototype:\nbool wxImage::Create(int width, int height, unsigned char * data, bool static_data = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int width=(int)lua_tointeger(L,2);
		int height=(int)lua_tointeger(L,3);
		unsigned char data = (unsigned char)(lua_tointeger(L,4));
		bool static_data=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : (bool)false;

		wxImage* self=Luna< wxObject >::checkSubType< wxImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxImage::Create(int, int, unsigned char *, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Create(width, height, &data, static_data);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxImage::Create(const wxSize & sz, unsigned char * data, bool static_data = false)
	static int _bind_Create_overload_4(lua_State *L) {
		if (!_lg_typecheck_Create_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in bool wxImage::Create(const wxSize & sz, unsigned char * data, bool static_data = false) function, expected prototype:\nbool wxImage::Create(const wxSize & sz, unsigned char * data, bool static_data = false)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxSize* sz_ptr=(Luna< wxSize >::check(L,2));
		if( !sz_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sz in wxImage::Create function");
		}
		const wxSize & sz=*sz_ptr;
		unsigned char data = (unsigned char)(lua_tointeger(L,3));
		bool static_data=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)false;

		wxImage* self=Luna< wxObject >::checkSubType< wxImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxImage::Create(const wxSize &, unsigned char *, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Create(sz, &data, static_data);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxImage::Create(int width, int height, unsigned char * data, unsigned char * alpha, bool static_data = false)
	static int _bind_Create_overload_5(lua_State *L) {
		if (!_lg_typecheck_Create_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in bool wxImage::Create(int width, int height, unsigned char * data, unsigned char * alpha, bool static_data = false) function, expected prototype:\nbool wxImage::Create(int width, int height, unsigned char * data, unsigned char * alpha, bool static_data = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int width=(int)lua_tointeger(L,2);
		int height=(int)lua_tointeger(L,3);
		unsigned char data = (unsigned char)(lua_tointeger(L,4));
		unsigned char alpha = (unsigned char)(lua_tointeger(L,5));
		bool static_data=luatop>5 ? (bool)(lua_toboolean(L,6)==1) : (bool)false;

		wxImage* self=Luna< wxObject >::checkSubType< wxImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxImage::Create(int, int, unsigned char *, unsigned char *, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Create(width, height, &data, &alpha, static_data);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxImage::Create(const wxSize & sz, unsigned char * data, unsigned char * alpha, bool static_data = false)
	static int _bind_Create_overload_6(lua_State *L) {
		if (!_lg_typecheck_Create_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in bool wxImage::Create(const wxSize & sz, unsigned char * data, unsigned char * alpha, bool static_data = false) function, expected prototype:\nbool wxImage::Create(const wxSize & sz, unsigned char * data, unsigned char * alpha, bool static_data = false)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxSize* sz_ptr=(Luna< wxSize >::check(L,2));
		if( !sz_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sz in wxImage::Create function");
		}
		const wxSize & sz=*sz_ptr;
		unsigned char data = (unsigned char)(lua_tointeger(L,3));
		unsigned char alpha = (unsigned char)(lua_tointeger(L,4));
		bool static_data=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : (bool)false;

		wxImage* self=Luna< wxObject >::checkSubType< wxImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxImage::Create(const wxSize &, unsigned char *, unsigned char *, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Create(sz, &data, &alpha, static_data);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxImage::Create
	static int _bind_Create(lua_State *L) {
		if (_lg_typecheck_Create_overload_1(L)) return _bind_Create_overload_1(L);
		if (_lg_typecheck_Create_overload_2(L)) return _bind_Create_overload_2(L);
		if (_lg_typecheck_Create_overload_3(L)) return _bind_Create_overload_3(L);
		if (_lg_typecheck_Create_overload_4(L)) return _bind_Create_overload_4(L);
		if (_lg_typecheck_Create_overload_5(L)) return _bind_Create_overload_5(L);
		if (_lg_typecheck_Create_overload_6(L)) return _bind_Create_overload_6(L);

		luaL_error(L, "error in function Create, cannot match any of the overloads for function Create:\n  Create(int, int, bool)\n  Create(const wxSize &, bool)\n  Create(int, int, unsigned char *, bool)\n  Create(const wxSize &, unsigned char *, bool)\n  Create(int, int, unsigned char *, unsigned char *, bool)\n  Create(const wxSize &, unsigned char *, unsigned char *, bool)\n");
		return 0;
	}

	// void wxImage::Clear(unsigned char value = 0)
	static int _bind_Clear(lua_State *L) {
		if (!_lg_typecheck_Clear(L)) {
			luaL_error(L, "luna typecheck failed in void wxImage::Clear(unsigned char value = 0) function, expected prototype:\nvoid wxImage::Clear(unsigned char value = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		unsigned char value = (unsigned char)(lua_tointeger(L,2));

		wxImage* self=Luna< wxObject >::checkSubType< wxImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxImage::Clear(unsigned char). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Clear(value);

		return 0;
	}

	// void wxImage::Destroy()
	static int _bind_Destroy(lua_State *L) {
		if (!_lg_typecheck_Destroy(L)) {
			luaL_error(L, "luna typecheck failed in void wxImage::Destroy() function, expected prototype:\nvoid wxImage::Destroy()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxImage* self=Luna< wxObject >::checkSubType< wxImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxImage::Destroy(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Destroy();

		return 0;
	}

	// void wxImage::InitAlpha()
	static int _bind_InitAlpha(lua_State *L) {
		if (!_lg_typecheck_InitAlpha(L)) {
			luaL_error(L, "luna typecheck failed in void wxImage::InitAlpha() function, expected prototype:\nvoid wxImage::InitAlpha()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxImage* self=Luna< wxObject >::checkSubType< wxImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxImage::InitAlpha(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->InitAlpha();

		return 0;
	}

	// wxImage wxImage::Blur(int blurRadius) const
	static int _bind_Blur(lua_State *L) {
		if (!_lg_typecheck_Blur(L)) {
			luaL_error(L, "luna typecheck failed in wxImage wxImage::Blur(int blurRadius) const function, expected prototype:\nwxImage wxImage::Blur(int blurRadius) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int blurRadius=(int)lua_tointeger(L,2);

		wxImage* self=Luna< wxObject >::checkSubType< wxImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxImage wxImage::Blur(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxImage stack_lret = self->Blur(blurRadius);
		wxImage* lret = new wxImage(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxImage >::push(L,lret,true);

		return 1;
	}

	// wxImage wxImage::BlurHorizontal(int blurRadius) const
	static int _bind_BlurHorizontal(lua_State *L) {
		if (!_lg_typecheck_BlurHorizontal(L)) {
			luaL_error(L, "luna typecheck failed in wxImage wxImage::BlurHorizontal(int blurRadius) const function, expected prototype:\nwxImage wxImage::BlurHorizontal(int blurRadius) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int blurRadius=(int)lua_tointeger(L,2);

		wxImage* self=Luna< wxObject >::checkSubType< wxImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxImage wxImage::BlurHorizontal(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxImage stack_lret = self->BlurHorizontal(blurRadius);
		wxImage* lret = new wxImage(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxImage >::push(L,lret,true);

		return 1;
	}

	// wxImage wxImage::BlurVertical(int blurRadius) const
	static int _bind_BlurVertical(lua_State *L) {
		if (!_lg_typecheck_BlurVertical(L)) {
			luaL_error(L, "luna typecheck failed in wxImage wxImage::BlurVertical(int blurRadius) const function, expected prototype:\nwxImage wxImage::BlurVertical(int blurRadius) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int blurRadius=(int)lua_tointeger(L,2);

		wxImage* self=Luna< wxObject >::checkSubType< wxImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxImage wxImage::BlurVertical(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxImage stack_lret = self->BlurVertical(blurRadius);
		wxImage* lret = new wxImage(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxImage >::push(L,lret,true);

		return 1;
	}

	// wxImage wxImage::Mirror(bool horizontally = true) const
	static int _bind_Mirror(lua_State *L) {
		if (!_lg_typecheck_Mirror(L)) {
			luaL_error(L, "luna typecheck failed in wxImage wxImage::Mirror(bool horizontally = true) const function, expected prototype:\nwxImage wxImage::Mirror(bool horizontally = true) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool horizontally=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxImage* self=Luna< wxObject >::checkSubType< wxImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxImage wxImage::Mirror(bool) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxImage stack_lret = self->Mirror(horizontally);
		wxImage* lret = new wxImage(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxImage >::push(L,lret,true);

		return 1;
	}

	// void wxImage::Paste(const wxImage & image, int x, int y)
	static int _bind_Paste(lua_State *L) {
		if (!_lg_typecheck_Paste(L)) {
			luaL_error(L, "luna typecheck failed in void wxImage::Paste(const wxImage & image, int x, int y) function, expected prototype:\nvoid wxImage::Paste(const wxImage & image, int x, int y)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxImage* image_ptr=(Luna< wxObject >::checkSubType< wxImage >(L,2));
		if( !image_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg image in wxImage::Paste function");
		}
		const wxImage & image=*image_ptr;
		int x=(int)lua_tointeger(L,3);
		int y=(int)lua_tointeger(L,4);

		wxImage* self=Luna< wxObject >::checkSubType< wxImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxImage::Paste(const wxImage &, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Paste(image, x, y);

		return 0;
	}

	// void wxImage::Replace(unsigned char r1, unsigned char g1, unsigned char b1, unsigned char r2, unsigned char g2, unsigned char b2)
	static int _bind_Replace(lua_State *L) {
		if (!_lg_typecheck_Replace(L)) {
			luaL_error(L, "luna typecheck failed in void wxImage::Replace(unsigned char r1, unsigned char g1, unsigned char b1, unsigned char r2, unsigned char g2, unsigned char b2) function, expected prototype:\nvoid wxImage::Replace(unsigned char r1, unsigned char g1, unsigned char b1, unsigned char r2, unsigned char g2, unsigned char b2)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char r1 = (unsigned char)(lua_tointeger(L,2));
		unsigned char g1 = (unsigned char)(lua_tointeger(L,3));
		unsigned char b1 = (unsigned char)(lua_tointeger(L,4));
		unsigned char r2 = (unsigned char)(lua_tointeger(L,5));
		unsigned char g2 = (unsigned char)(lua_tointeger(L,6));
		unsigned char b2 = (unsigned char)(lua_tointeger(L,7));

		wxImage* self=Luna< wxObject >::checkSubType< wxImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxImage::Replace(unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Replace(r1, g1, b1, r2, g2, b2);

		return 0;
	}

	// wxImage & wxImage::Rescale(int width, int height, wxImageResizeQuality quality = ::wxIMAGE_QUALITY_NORMAL)
	static int _bind_Rescale(lua_State *L) {
		if (!_lg_typecheck_Rescale(L)) {
			luaL_error(L, "luna typecheck failed in wxImage & wxImage::Rescale(int width, int height, wxImageResizeQuality quality = ::wxIMAGE_QUALITY_NORMAL) function, expected prototype:\nwxImage & wxImage::Rescale(int width, int height, wxImageResizeQuality quality = ::wxIMAGE_QUALITY_NORMAL)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int width=(int)lua_tointeger(L,2);
		int height=(int)lua_tointeger(L,3);
		wxImageResizeQuality quality=luatop>3 ? (wxImageResizeQuality)lua_tointeger(L,4) : (wxImageResizeQuality)::wxIMAGE_QUALITY_NORMAL;

		wxImage* self=Luna< wxObject >::checkSubType< wxImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxImage & wxImage::Rescale(int, int, wxImageResizeQuality). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxImage* lret = &self->Rescale(width, height, quality);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxImage >::push(L,lret,false);

		return 1;
	}

	// wxImage & wxImage::Resize(const wxSize & size, const wxPoint & pos, int red = -1, int green = -1, int blue = -1)
	static int _bind_Resize(lua_State *L) {
		if (!_lg_typecheck_Resize(L)) {
			luaL_error(L, "luna typecheck failed in wxImage & wxImage::Resize(const wxSize & size, const wxPoint & pos, int red = -1, int green = -1, int blue = -1) function, expected prototype:\nwxImage & wxImage::Resize(const wxSize & size, const wxPoint & pos, int red = -1, int green = -1, int blue = -1)\nClass arguments details:\narg 1 ID = 20268751\narg 2 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxImage::Resize function");
		}
		const wxSize & size=*size_ptr;
		const wxPoint* pos_ptr=(Luna< wxPoint >::check(L,3));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxImage::Resize function");
		}
		const wxPoint & pos=*pos_ptr;
		int red=luatop>3 ? (int)lua_tointeger(L,4) : (int)-1;
		int green=luatop>4 ? (int)lua_tointeger(L,5) : (int)-1;
		int blue=luatop>5 ? (int)lua_tointeger(L,6) : (int)-1;

		wxImage* self=Luna< wxObject >::checkSubType< wxImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxImage & wxImage::Resize(const wxSize &, const wxPoint &, int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxImage* lret = &self->Resize(size, pos, red, green, blue);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxImage >::push(L,lret,false);

		return 1;
	}

	// wxImage wxImage::Rotate(double angle, const wxPoint & rotationCentre, bool interpolating = true, wxPoint * offsetAfterRotation = NULL) const
	static int _bind_Rotate(lua_State *L) {
		if (!_lg_typecheck_Rotate(L)) {
			luaL_error(L, "luna typecheck failed in wxImage wxImage::Rotate(double angle, const wxPoint & rotationCentre, bool interpolating = true, wxPoint * offsetAfterRotation = NULL) const function, expected prototype:\nwxImage wxImage::Rotate(double angle, const wxPoint & rotationCentre, bool interpolating = true, wxPoint * offsetAfterRotation = NULL) const\nClass arguments details:\narg 2 ID = 25723480\narg 4 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		double angle=(double)lua_tonumber(L,2);
		const wxPoint* rotationCentre_ptr=(Luna< wxPoint >::check(L,3));
		if( !rotationCentre_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rotationCentre in wxImage::Rotate function");
		}
		const wxPoint & rotationCentre=*rotationCentre_ptr;
		bool interpolating=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)true;
		wxPoint* offsetAfterRotation=luatop>4 ? (Luna< wxPoint >::check(L,5)) : (wxPoint*)NULL;

		wxImage* self=Luna< wxObject >::checkSubType< wxImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxImage wxImage::Rotate(double, const wxPoint &, bool, wxPoint *) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxImage stack_lret = self->Rotate(angle, rotationCentre, interpolating, offsetAfterRotation);
		wxImage* lret = new wxImage(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxImage >::push(L,lret,true);

		return 1;
	}

	// wxImage wxImage::Rotate90(bool clockwise = true) const
	static int _bind_Rotate90(lua_State *L) {
		if (!_lg_typecheck_Rotate90(L)) {
			luaL_error(L, "luna typecheck failed in wxImage wxImage::Rotate90(bool clockwise = true) const function, expected prototype:\nwxImage wxImage::Rotate90(bool clockwise = true) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool clockwise=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxImage* self=Luna< wxObject >::checkSubType< wxImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxImage wxImage::Rotate90(bool) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxImage stack_lret = self->Rotate90(clockwise);
		wxImage* lret = new wxImage(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxImage >::push(L,lret,true);

		return 1;
	}

	// wxImage wxImage::Rotate180() const
	static int _bind_Rotate180(lua_State *L) {
		if (!_lg_typecheck_Rotate180(L)) {
			luaL_error(L, "luna typecheck failed in wxImage wxImage::Rotate180() const function, expected prototype:\nwxImage wxImage::Rotate180() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxImage* self=Luna< wxObject >::checkSubType< wxImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxImage wxImage::Rotate180() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxImage stack_lret = self->Rotate180();
		wxImage* lret = new wxImage(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxImage >::push(L,lret,true);

		return 1;
	}

	// void wxImage::RotateHue(double angle)
	static int _bind_RotateHue(lua_State *L) {
		if (!_lg_typecheck_RotateHue(L)) {
			luaL_error(L, "luna typecheck failed in void wxImage::RotateHue(double angle) function, expected prototype:\nvoid wxImage::RotateHue(double angle)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double angle=(double)lua_tonumber(L,2);

		wxImage* self=Luna< wxObject >::checkSubType< wxImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxImage::RotateHue(double). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RotateHue(angle);

		return 0;
	}

	// wxImage wxImage::Scale(int width, int height, wxImageResizeQuality quality = ::wxIMAGE_QUALITY_NORMAL) const
	static int _bind_Scale(lua_State *L) {
		if (!_lg_typecheck_Scale(L)) {
			luaL_error(L, "luna typecheck failed in wxImage wxImage::Scale(int width, int height, wxImageResizeQuality quality = ::wxIMAGE_QUALITY_NORMAL) const function, expected prototype:\nwxImage wxImage::Scale(int width, int height, wxImageResizeQuality quality = ::wxIMAGE_QUALITY_NORMAL) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int width=(int)lua_tointeger(L,2);
		int height=(int)lua_tointeger(L,3);
		wxImageResizeQuality quality=luatop>3 ? (wxImageResizeQuality)lua_tointeger(L,4) : (wxImageResizeQuality)::wxIMAGE_QUALITY_NORMAL;

		wxImage* self=Luna< wxObject >::checkSubType< wxImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxImage wxImage::Scale(int, int, wxImageResizeQuality) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxImage stack_lret = self->Scale(width, height, quality);
		wxImage* lret = new wxImage(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxImage >::push(L,lret,true);

		return 1;
	}

	// wxImage wxImage::Size(const wxSize & size, const wxPoint & pos, int red = -1, int green = -1, int blue = -1) const
	static int _bind_Size(lua_State *L) {
		if (!_lg_typecheck_Size(L)) {
			luaL_error(L, "luna typecheck failed in wxImage wxImage::Size(const wxSize & size, const wxPoint & pos, int red = -1, int green = -1, int blue = -1) const function, expected prototype:\nwxImage wxImage::Size(const wxSize & size, const wxPoint & pos, int red = -1, int green = -1, int blue = -1) const\nClass arguments details:\narg 1 ID = 20268751\narg 2 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxImage::Size function");
		}
		const wxSize & size=*size_ptr;
		const wxPoint* pos_ptr=(Luna< wxPoint >::check(L,3));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxImage::Size function");
		}
		const wxPoint & pos=*pos_ptr;
		int red=luatop>3 ? (int)lua_tointeger(L,4) : (int)-1;
		int green=luatop>4 ? (int)lua_tointeger(L,5) : (int)-1;
		int blue=luatop>5 ? (int)lua_tointeger(L,6) : (int)-1;

		wxImage* self=Luna< wxObject >::checkSubType< wxImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxImage wxImage::Size(const wxSize &, const wxPoint &, int, int, int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxImage stack_lret = self->Size(size, pos, red, green, blue);
		wxImage* lret = new wxImage(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxImage >::push(L,lret,true);

		return 1;
	}

	// bool wxImage::ConvertAlphaToMask(unsigned char threshold = wxIMAGE_ALPHA_THRESHOLD)
	static int _bind_ConvertAlphaToMask_overload_1(lua_State *L) {
		if (!_lg_typecheck_ConvertAlphaToMask_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool wxImage::ConvertAlphaToMask(unsigned char threshold = wxIMAGE_ALPHA_THRESHOLD) function, expected prototype:\nbool wxImage::ConvertAlphaToMask(unsigned char threshold = wxIMAGE_ALPHA_THRESHOLD)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		unsigned char threshold = (unsigned char)(lua_tointeger(L,2));

		wxImage* self=Luna< wxObject >::checkSubType< wxImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxImage::ConvertAlphaToMask(unsigned char). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ConvertAlphaToMask(threshold);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxImage::ConvertAlphaToMask(unsigned char mr, unsigned char mg, unsigned char mb, unsigned char threshold = wxIMAGE_ALPHA_THRESHOLD)
	static int _bind_ConvertAlphaToMask_overload_2(lua_State *L) {
		if (!_lg_typecheck_ConvertAlphaToMask_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool wxImage::ConvertAlphaToMask(unsigned char mr, unsigned char mg, unsigned char mb, unsigned char threshold = wxIMAGE_ALPHA_THRESHOLD) function, expected prototype:\nbool wxImage::ConvertAlphaToMask(unsigned char mr, unsigned char mg, unsigned char mb, unsigned char threshold = wxIMAGE_ALPHA_THRESHOLD)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		unsigned char mr = (unsigned char)(lua_tointeger(L,2));
		unsigned char mg = (unsigned char)(lua_tointeger(L,3));
		unsigned char mb = (unsigned char)(lua_tointeger(L,4));
		unsigned char threshold = (unsigned char)(lua_tointeger(L,5));

		wxImage* self=Luna< wxObject >::checkSubType< wxImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxImage::ConvertAlphaToMask(unsigned char, unsigned char, unsigned char, unsigned char). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ConvertAlphaToMask(mr, mg, mb, threshold);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxImage::ConvertAlphaToMask
	static int _bind_ConvertAlphaToMask(lua_State *L) {
		if (_lg_typecheck_ConvertAlphaToMask_overload_1(L)) return _bind_ConvertAlphaToMask_overload_1(L);
		if (_lg_typecheck_ConvertAlphaToMask_overload_2(L)) return _bind_ConvertAlphaToMask_overload_2(L);

		luaL_error(L, "error in function ConvertAlphaToMask, cannot match any of the overloads for function ConvertAlphaToMask:\n  ConvertAlphaToMask(unsigned char)\n  ConvertAlphaToMask(unsigned char, unsigned char, unsigned char, unsigned char)\n");
		return 0;
	}

	// wxImage wxImage::ConvertToGreyscale(double weight_r, double weight_g, double weight_b) const
	static int _bind_ConvertToGreyscale_overload_1(lua_State *L) {
		if (!_lg_typecheck_ConvertToGreyscale_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxImage wxImage::ConvertToGreyscale(double weight_r, double weight_g, double weight_b) const function, expected prototype:\nwxImage wxImage::ConvertToGreyscale(double weight_r, double weight_g, double weight_b) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double weight_r=(double)lua_tonumber(L,2);
		double weight_g=(double)lua_tonumber(L,3);
		double weight_b=(double)lua_tonumber(L,4);

		wxImage* self=Luna< wxObject >::checkSubType< wxImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxImage wxImage::ConvertToGreyscale(double, double, double) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxImage stack_lret = self->ConvertToGreyscale(weight_r, weight_g, weight_b);
		wxImage* lret = new wxImage(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxImage >::push(L,lret,true);

		return 1;
	}

	// wxImage wxImage::ConvertToGreyscale() const
	static int _bind_ConvertToGreyscale_overload_2(lua_State *L) {
		if (!_lg_typecheck_ConvertToGreyscale_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxImage wxImage::ConvertToGreyscale() const function, expected prototype:\nwxImage wxImage::ConvertToGreyscale() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxImage* self=Luna< wxObject >::checkSubType< wxImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxImage wxImage::ConvertToGreyscale() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxImage stack_lret = self->ConvertToGreyscale();
		wxImage* lret = new wxImage(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxImage >::push(L,lret,true);

		return 1;
	}

	// Overload binder for wxImage::ConvertToGreyscale
	static int _bind_ConvertToGreyscale(lua_State *L) {
		if (_lg_typecheck_ConvertToGreyscale_overload_1(L)) return _bind_ConvertToGreyscale_overload_1(L);
		if (_lg_typecheck_ConvertToGreyscale_overload_2(L)) return _bind_ConvertToGreyscale_overload_2(L);

		luaL_error(L, "error in function ConvertToGreyscale, cannot match any of the overloads for function ConvertToGreyscale:\n  ConvertToGreyscale(double, double, double)\n  ConvertToGreyscale()\n");
		return 0;
	}

	// wxImage wxImage::ConvertToMono(unsigned char r, unsigned char g, unsigned char b) const
	static int _bind_ConvertToMono(lua_State *L) {
		if (!_lg_typecheck_ConvertToMono(L)) {
			luaL_error(L, "luna typecheck failed in wxImage wxImage::ConvertToMono(unsigned char r, unsigned char g, unsigned char b) const function, expected prototype:\nwxImage wxImage::ConvertToMono(unsigned char r, unsigned char g, unsigned char b) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char r = (unsigned char)(lua_tointeger(L,2));
		unsigned char g = (unsigned char)(lua_tointeger(L,3));
		unsigned char b = (unsigned char)(lua_tointeger(L,4));

		wxImage* self=Luna< wxObject >::checkSubType< wxImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxImage wxImage::ConvertToMono(unsigned char, unsigned char, unsigned char) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxImage stack_lret = self->ConvertToMono(r, g, b);
		wxImage* lret = new wxImage(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxImage >::push(L,lret,true);

		return 1;
	}

	// wxImage wxImage::ConvertToDisabled(unsigned char brightness = 255) const
	static int _bind_ConvertToDisabled(lua_State *L) {
		if (!_lg_typecheck_ConvertToDisabled(L)) {
			luaL_error(L, "luna typecheck failed in wxImage wxImage::ConvertToDisabled(unsigned char brightness = 255) const function, expected prototype:\nwxImage wxImage::ConvertToDisabled(unsigned char brightness = 255) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		unsigned char brightness = (unsigned char)(lua_tointeger(L,2));

		wxImage* self=Luna< wxObject >::checkSubType< wxImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxImage wxImage::ConvertToDisabled(unsigned char) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxImage stack_lret = self->ConvertToDisabled(brightness);
		wxImage* lret = new wxImage(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxImage >::push(L,lret,true);

		return 1;
	}

	// unsigned long wxImage::ComputeHistogram(wxImageHistogram & histogram) const
	static int _bind_ComputeHistogram(lua_State *L) {
		if (!_lg_typecheck_ComputeHistogram(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long wxImage::ComputeHistogram(wxImageHistogram & histogram) const function, expected prototype:\nunsigned long wxImage::ComputeHistogram(wxImageHistogram & histogram) const\nClass arguments details:\narg 1 ID = 75442299\n\n%s",luna_dumpStack(L).c_str());
		}

		wxImageHistogram* histogram_ptr=(Luna< wxImageHistogram >::check(L,2));
		if( !histogram_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg histogram in wxImage::ComputeHistogram function");
		}
		wxImageHistogram & histogram=*histogram_ptr;

		wxImage* self=Luna< wxObject >::checkSubType< wxImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long wxImage::ComputeHistogram(wxImageHistogram &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->ComputeHistogram(histogram);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxImage::FindFirstUnusedColour(unsigned char * r, unsigned char * g, unsigned char * b, unsigned char startR = 1, unsigned char startG = 0, unsigned char startB = 0) const
	static int _bind_FindFirstUnusedColour(lua_State *L) {
		if (!_lg_typecheck_FindFirstUnusedColour(L)) {
			luaL_error(L, "luna typecheck failed in bool wxImage::FindFirstUnusedColour(unsigned char * r, unsigned char * g, unsigned char * b, unsigned char startR = 1, unsigned char startG = 0, unsigned char startB = 0) const function, expected prototype:\nbool wxImage::FindFirstUnusedColour(unsigned char * r, unsigned char * g, unsigned char * b, unsigned char startR = 1, unsigned char startG = 0, unsigned char startB = 0) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		unsigned char r = (unsigned char)(lua_tointeger(L,2));
		unsigned char g = (unsigned char)(lua_tointeger(L,3));
		unsigned char b = (unsigned char)(lua_tointeger(L,4));
		unsigned char startR = (unsigned char)(lua_tointeger(L,5));
		unsigned char startG = (unsigned char)(lua_tointeger(L,6));
		unsigned char startB = (unsigned char)(lua_tointeger(L,7));

		wxImage* self=Luna< wxObject >::checkSubType< wxImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxImage::FindFirstUnusedColour(unsigned char *, unsigned char *, unsigned char *, unsigned char, unsigned char, unsigned char) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->FindFirstUnusedColour(&r, &g, &b, startR, startG, startB);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// unsigned char * wxImage::GetAlpha() const
	static int _bind_GetAlpha_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetAlpha_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char * wxImage::GetAlpha() const function, expected prototype:\nunsigned char * wxImage::GetAlpha() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxImage* self=Luna< wxObject >::checkSubType< wxImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char * wxImage::GetAlpha() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char * lret = self->GetAlpha();
		luaL_error(L,"Trying to convert pointer on unsigned char lret to lua. This usage should be clarifierd.");

		return 1;
	}

	// unsigned char wxImage::GetAlpha(int x, int y) const
	static int _bind_GetAlpha_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetAlpha_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char wxImage::GetAlpha(int x, int y) const function, expected prototype:\nunsigned char wxImage::GetAlpha(int x, int y) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxImage* self=Luna< wxObject >::checkSubType< wxImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char wxImage::GetAlpha(int, int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char lret = self->GetAlpha(x, y);
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// Overload binder for wxImage::GetAlpha
	static int _bind_GetAlpha(lua_State *L) {
		if (_lg_typecheck_GetAlpha_overload_1(L)) return _bind_GetAlpha_overload_1(L);
		if (_lg_typecheck_GetAlpha_overload_2(L)) return _bind_GetAlpha_overload_2(L);

		luaL_error(L, "error in function GetAlpha, cannot match any of the overloads for function GetAlpha:\n  GetAlpha()\n  GetAlpha(int, int)\n");
		return 0;
	}

	// unsigned char * wxImage::GetData() const
	static int _bind_GetData(lua_State *L) {
		if (!_lg_typecheck_GetData(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char * wxImage::GetData() const function, expected prototype:\nunsigned char * wxImage::GetData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxImage* self=Luna< wxObject >::checkSubType< wxImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char * wxImage::GetData() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char * lret = self->GetData();
		luaL_error(L,"Trying to convert pointer on unsigned char lret to lua. This usage should be clarifierd.");

		return 1;
	}

	// unsigned char wxImage::GetRed(int x, int y) const
	static int _bind_GetRed(lua_State *L) {
		if (!_lg_typecheck_GetRed(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char wxImage::GetRed(int x, int y) const function, expected prototype:\nunsigned char wxImage::GetRed(int x, int y) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxImage* self=Luna< wxObject >::checkSubType< wxImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char wxImage::GetRed(int, int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char lret = self->GetRed(x, y);
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// unsigned char wxImage::GetGreen(int x, int y) const
	static int _bind_GetGreen(lua_State *L) {
		if (!_lg_typecheck_GetGreen(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char wxImage::GetGreen(int x, int y) const function, expected prototype:\nunsigned char wxImage::GetGreen(int x, int y) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxImage* self=Luna< wxObject >::checkSubType< wxImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char wxImage::GetGreen(int, int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char lret = self->GetGreen(x, y);
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// unsigned char wxImage::GetBlue(int x, int y) const
	static int _bind_GetBlue(lua_State *L) {
		if (!_lg_typecheck_GetBlue(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char wxImage::GetBlue(int x, int y) const function, expected prototype:\nunsigned char wxImage::GetBlue(int x, int y) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxImage* self=Luna< wxObject >::checkSubType< wxImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char wxImage::GetBlue(int, int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char lret = self->GetBlue(x, y);
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// unsigned char wxImage::GetMaskRed() const
	static int _bind_GetMaskRed(lua_State *L) {
		if (!_lg_typecheck_GetMaskRed(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char wxImage::GetMaskRed() const function, expected prototype:\nunsigned char wxImage::GetMaskRed() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxImage* self=Luna< wxObject >::checkSubType< wxImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char wxImage::GetMaskRed() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char lret = self->GetMaskRed();
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// unsigned char wxImage::GetMaskGreen() const
	static int _bind_GetMaskGreen(lua_State *L) {
		if (!_lg_typecheck_GetMaskGreen(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char wxImage::GetMaskGreen() const function, expected prototype:\nunsigned char wxImage::GetMaskGreen() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxImage* self=Luna< wxObject >::checkSubType< wxImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char wxImage::GetMaskGreen() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char lret = self->GetMaskGreen();
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// unsigned char wxImage::GetMaskBlue() const
	static int _bind_GetMaskBlue(lua_State *L) {
		if (!_lg_typecheck_GetMaskBlue(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char wxImage::GetMaskBlue() const function, expected prototype:\nunsigned char wxImage::GetMaskBlue() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxImage* self=Luna< wxObject >::checkSubType< wxImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char wxImage::GetMaskBlue() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char lret = self->GetMaskBlue();
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// int wxImage::GetWidth() const
	static int _bind_GetWidth(lua_State *L) {
		if (!_lg_typecheck_GetWidth(L)) {
			luaL_error(L, "luna typecheck failed in int wxImage::GetWidth() const function, expected prototype:\nint wxImage::GetWidth() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxImage* self=Luna< wxObject >::checkSubType< wxImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxImage::GetWidth() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxImage::GetHeight() const
	static int _bind_GetHeight(lua_State *L) {
		if (!_lg_typecheck_GetHeight(L)) {
			luaL_error(L, "luna typecheck failed in int wxImage::GetHeight() const function, expected prototype:\nint wxImage::GetHeight() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxImage* self=Luna< wxObject >::checkSubType< wxImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxImage::GetHeight() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxSize wxImage::GetSize() const
	static int _bind_GetSize(lua_State *L) {
		if (!_lg_typecheck_GetSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxImage::GetSize() const function, expected prototype:\nwxSize wxImage::GetSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxImage* self=Luna< wxObject >::checkSubType< wxImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxImage::GetSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->GetSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxString wxImage::GetOption(const wxString & name) const
	static int _bind_GetOption(lua_State *L) {
		if (!_lg_typecheck_GetOption(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxImage::GetOption(const wxString & name) const function, expected prototype:\nwxString wxImage::GetOption(const wxString & name) const\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxImage* self=Luna< wxObject >::checkSubType< wxImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxImage::GetOption(const wxString &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetOption(name);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// int wxImage::GetOptionInt(const wxString & name) const
	static int _bind_GetOptionInt(lua_State *L) {
		if (!_lg_typecheck_GetOptionInt(L)) {
			luaL_error(L, "luna typecheck failed in int wxImage::GetOptionInt(const wxString & name) const function, expected prototype:\nint wxImage::GetOptionInt(const wxString & name) const\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxImage* self=Luna< wxObject >::checkSubType< wxImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxImage::GetOptionInt(const wxString &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetOptionInt(name);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxImage::GetOrFindMaskColour(unsigned char * r, unsigned char * g, unsigned char * b) const
	static int _bind_GetOrFindMaskColour(lua_State *L) {
		if (!_lg_typecheck_GetOrFindMaskColour(L)) {
			luaL_error(L, "luna typecheck failed in bool wxImage::GetOrFindMaskColour(unsigned char * r, unsigned char * g, unsigned char * b) const function, expected prototype:\nbool wxImage::GetOrFindMaskColour(unsigned char * r, unsigned char * g, unsigned char * b) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char r = (unsigned char)(lua_tointeger(L,2));
		unsigned char g = (unsigned char)(lua_tointeger(L,3));
		unsigned char b = (unsigned char)(lua_tointeger(L,4));

		wxImage* self=Luna< wxObject >::checkSubType< wxImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxImage::GetOrFindMaskColour(unsigned char *, unsigned char *, unsigned char *) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GetOrFindMaskColour(&r, &g, &b);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const wxPalette & wxImage::GetPalette() const
	static int _bind_GetPalette(lua_State *L) {
		if (!_lg_typecheck_GetPalette(L)) {
			luaL_error(L, "luna typecheck failed in const wxPalette & wxImage::GetPalette() const function, expected prototype:\nconst wxPalette & wxImage::GetPalette() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxImage* self=Luna< wxObject >::checkSubType< wxImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxPalette & wxImage::GetPalette() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxPalette* lret = &self->GetPalette();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPalette >::push(L,lret,false);

		return 1;
	}

	// wxImage wxImage::GetSubImage(const wxRect & rect) const
	static int _bind_GetSubImage(lua_State *L) {
		if (!_lg_typecheck_GetSubImage(L)) {
			luaL_error(L, "luna typecheck failed in wxImage wxImage::GetSubImage(const wxRect & rect) const function, expected prototype:\nwxImage wxImage::GetSubImage(const wxRect & rect) const\nClass arguments details:\narg 1 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxRect* rect_ptr=(Luna< wxRect >::check(L,2));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxImage::GetSubImage function");
		}
		const wxRect & rect=*rect_ptr;

		wxImage* self=Luna< wxObject >::checkSubType< wxImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxImage wxImage::GetSubImage(const wxRect &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxImage stack_lret = self->GetSubImage(rect);
		wxImage* lret = new wxImage(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxImage >::push(L,lret,true);

		return 1;
	}

	// wxBitmapType wxImage::GetType() const
	static int _bind_GetType(lua_State *L) {
		if (!_lg_typecheck_GetType(L)) {
			luaL_error(L, "luna typecheck failed in wxBitmapType wxImage::GetType() const function, expected prototype:\nwxBitmapType wxImage::GetType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxImage* self=Luna< wxObject >::checkSubType< wxImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxBitmapType wxImage::GetType() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxBitmapType lret = self->GetType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxImage::HasAlpha() const
	static int _bind_HasAlpha(lua_State *L) {
		if (!_lg_typecheck_HasAlpha(L)) {
			luaL_error(L, "luna typecheck failed in bool wxImage::HasAlpha() const function, expected prototype:\nbool wxImage::HasAlpha() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxImage* self=Luna< wxObject >::checkSubType< wxImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxImage::HasAlpha() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasAlpha();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxImage::HasMask() const
	static int _bind_HasMask(lua_State *L) {
		if (!_lg_typecheck_HasMask(L)) {
			luaL_error(L, "luna typecheck failed in bool wxImage::HasMask() const function, expected prototype:\nbool wxImage::HasMask() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxImage* self=Luna< wxObject >::checkSubType< wxImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxImage::HasMask() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasMask();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxImage::HasOption(const wxString & name) const
	static int _bind_HasOption(lua_State *L) {
		if (!_lg_typecheck_HasOption(L)) {
			luaL_error(L, "luna typecheck failed in bool wxImage::HasOption(const wxString & name) const function, expected prototype:\nbool wxImage::HasOption(const wxString & name) const\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxImage* self=Luna< wxObject >::checkSubType< wxImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxImage::HasOption(const wxString &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasOption(name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxImage::IsOk() const
	static int _bind_IsOk(lua_State *L) {
		if (!_lg_typecheck_IsOk(L)) {
			luaL_error(L, "luna typecheck failed in bool wxImage::IsOk() const function, expected prototype:\nbool wxImage::IsOk() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxImage* self=Luna< wxObject >::checkSubType< wxImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxImage::IsOk() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsOk();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxImage::IsTransparent(int x, int y, unsigned char threshold = wxIMAGE_ALPHA_THRESHOLD) const
	static int _bind_IsTransparent(lua_State *L) {
		if (!_lg_typecheck_IsTransparent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxImage::IsTransparent(int x, int y, unsigned char threshold = wxIMAGE_ALPHA_THRESHOLD) const function, expected prototype:\nbool wxImage::IsTransparent(int x, int y, unsigned char threshold = wxIMAGE_ALPHA_THRESHOLD) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		unsigned char threshold = (unsigned char)(lua_tointeger(L,4));

		wxImage* self=Luna< wxObject >::checkSubType< wxImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxImage::IsTransparent(int, int, unsigned char) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsTransparent(x, y, threshold);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxImage::LoadFile(wxInputStream & stream, wxBitmapType type = ::wxBITMAP_TYPE_ANY, int index = -1)
	static int _bind_LoadFile_overload_1(lua_State *L) {
		if (!_lg_typecheck_LoadFile_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool wxImage::LoadFile(wxInputStream & stream, wxBitmapType type = ::wxBITMAP_TYPE_ANY, int index = -1) function, expected prototype:\nbool wxImage::LoadFile(wxInputStream & stream, wxBitmapType type = ::wxBITMAP_TYPE_ANY, int index = -1)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxInputStream* stream_ptr=(Luna< wxObject >::checkSubType< wxInputStream >(L,2));
		if( !stream_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg stream in wxImage::LoadFile function");
		}
		wxInputStream & stream=*stream_ptr;
		wxBitmapType type=luatop>2 ? (wxBitmapType)lua_tointeger(L,3) : (wxBitmapType)::wxBITMAP_TYPE_ANY;
		int index=luatop>3 ? (int)lua_tointeger(L,4) : (int)-1;

		wxImage* self=Luna< wxObject >::checkSubType< wxImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxImage::LoadFile(wxInputStream &, wxBitmapType, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->LoadFile(stream, type, index);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxImage::LoadFile(const wxString & name, wxBitmapType type = ::wxBITMAP_TYPE_ANY, int index = -1)
	static int _bind_LoadFile_overload_2(lua_State *L) {
		if (!_lg_typecheck_LoadFile_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool wxImage::LoadFile(const wxString & name, wxBitmapType type = ::wxBITMAP_TYPE_ANY, int index = -1) function, expected prototype:\nbool wxImage::LoadFile(const wxString & name, wxBitmapType type = ::wxBITMAP_TYPE_ANY, int index = -1)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString name(lua_tostring(L,2),lua_objlen(L,2));
		wxBitmapType type=luatop>2 ? (wxBitmapType)lua_tointeger(L,3) : (wxBitmapType)::wxBITMAP_TYPE_ANY;
		int index=luatop>3 ? (int)lua_tointeger(L,4) : (int)-1;

		wxImage* self=Luna< wxObject >::checkSubType< wxImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxImage::LoadFile(const wxString &, wxBitmapType, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->LoadFile(name, type, index);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxImage::LoadFile(const wxString & name, const wxString & mimetype, int index = -1)
	static int _bind_LoadFile_overload_3(lua_State *L) {
		if (!_lg_typecheck_LoadFile_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in bool wxImage::LoadFile(const wxString & name, const wxString & mimetype, int index = -1) function, expected prototype:\nbool wxImage::LoadFile(const wxString & name, const wxString & mimetype, int index = -1)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString name(lua_tostring(L,2),lua_objlen(L,2));
		wxString mimetype(lua_tostring(L,3),lua_objlen(L,3));
		int index=luatop>3 ? (int)lua_tointeger(L,4) : (int)-1;

		wxImage* self=Luna< wxObject >::checkSubType< wxImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxImage::LoadFile(const wxString &, const wxString &, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->LoadFile(name, mimetype, index);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxImage::LoadFile(wxInputStream & stream, const wxString & mimetype, int index = -1)
	static int _bind_LoadFile_overload_4(lua_State *L) {
		if (!_lg_typecheck_LoadFile_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in bool wxImage::LoadFile(wxInputStream & stream, const wxString & mimetype, int index = -1) function, expected prototype:\nbool wxImage::LoadFile(wxInputStream & stream, const wxString & mimetype, int index = -1)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxInputStream* stream_ptr=(Luna< wxObject >::checkSubType< wxInputStream >(L,2));
		if( !stream_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg stream in wxImage::LoadFile function");
		}
		wxInputStream & stream=*stream_ptr;
		wxString mimetype(lua_tostring(L,3),lua_objlen(L,3));
		int index=luatop>3 ? (int)lua_tointeger(L,4) : (int)-1;

		wxImage* self=Luna< wxObject >::checkSubType< wxImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxImage::LoadFile(wxInputStream &, const wxString &, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->LoadFile(stream, mimetype, index);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxImage::LoadFile
	static int _bind_LoadFile(lua_State *L) {
		if (_lg_typecheck_LoadFile_overload_1(L)) return _bind_LoadFile_overload_1(L);
		if (_lg_typecheck_LoadFile_overload_2(L)) return _bind_LoadFile_overload_2(L);
		if (_lg_typecheck_LoadFile_overload_3(L)) return _bind_LoadFile_overload_3(L);
		if (_lg_typecheck_LoadFile_overload_4(L)) return _bind_LoadFile_overload_4(L);

		luaL_error(L, "error in function LoadFile, cannot match any of the overloads for function LoadFile:\n  LoadFile(wxInputStream &, wxBitmapType, int)\n  LoadFile(const wxString &, wxBitmapType, int)\n  LoadFile(const wxString &, const wxString &, int)\n  LoadFile(wxInputStream &, const wxString &, int)\n");
		return 0;
	}

	// bool wxImage::SaveFile(wxOutputStream & stream, const wxString & mimetype) const
	static int _bind_SaveFile_overload_1(lua_State *L) {
		if (!_lg_typecheck_SaveFile_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool wxImage::SaveFile(wxOutputStream & stream, const wxString & mimetype) const function, expected prototype:\nbool wxImage::SaveFile(wxOutputStream & stream, const wxString & mimetype) const\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxOutputStream* stream_ptr=(Luna< wxObject >::checkSubType< wxOutputStream >(L,2));
		if( !stream_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg stream in wxImage::SaveFile function");
		}
		wxOutputStream & stream=*stream_ptr;
		wxString mimetype(lua_tostring(L,3),lua_objlen(L,3));

		wxImage* self=Luna< wxObject >::checkSubType< wxImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxImage::SaveFile(wxOutputStream &, const wxString &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SaveFile(stream, mimetype);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxImage::SaveFile(const wxString & name, wxBitmapType type) const
	static int _bind_SaveFile_overload_2(lua_State *L) {
		if (!_lg_typecheck_SaveFile_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool wxImage::SaveFile(const wxString & name, wxBitmapType type) const function, expected prototype:\nbool wxImage::SaveFile(const wxString & name, wxBitmapType type) const\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));
		wxBitmapType type=(wxBitmapType)lua_tointeger(L,3);

		wxImage* self=Luna< wxObject >::checkSubType< wxImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxImage::SaveFile(const wxString &, wxBitmapType) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SaveFile(name, type);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxImage::SaveFile(const wxString & name, const wxString & mimetype) const
	static int _bind_SaveFile_overload_3(lua_State *L) {
		if (!_lg_typecheck_SaveFile_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in bool wxImage::SaveFile(const wxString & name, const wxString & mimetype) const function, expected prototype:\nbool wxImage::SaveFile(const wxString & name, const wxString & mimetype) const\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));
		wxString mimetype(lua_tostring(L,3),lua_objlen(L,3));

		wxImage* self=Luna< wxObject >::checkSubType< wxImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxImage::SaveFile(const wxString &, const wxString &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SaveFile(name, mimetype);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxImage::SaveFile(const wxString & name) const
	static int _bind_SaveFile_overload_4(lua_State *L) {
		if (!_lg_typecheck_SaveFile_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in bool wxImage::SaveFile(const wxString & name) const function, expected prototype:\nbool wxImage::SaveFile(const wxString & name) const\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxImage* self=Luna< wxObject >::checkSubType< wxImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxImage::SaveFile(const wxString &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SaveFile(name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxImage::SaveFile(wxOutputStream & stream, wxBitmapType type) const
	static int _bind_SaveFile_overload_5(lua_State *L) {
		if (!_lg_typecheck_SaveFile_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in bool wxImage::SaveFile(wxOutputStream & stream, wxBitmapType type) const function, expected prototype:\nbool wxImage::SaveFile(wxOutputStream & stream, wxBitmapType type) const\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxOutputStream* stream_ptr=(Luna< wxObject >::checkSubType< wxOutputStream >(L,2));
		if( !stream_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg stream in wxImage::SaveFile function");
		}
		wxOutputStream & stream=*stream_ptr;
		wxBitmapType type=(wxBitmapType)lua_tointeger(L,3);

		wxImage* self=Luna< wxObject >::checkSubType< wxImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxImage::SaveFile(wxOutputStream &, wxBitmapType) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SaveFile(stream, type);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxImage::SaveFile
	static int _bind_SaveFile(lua_State *L) {
		if (_lg_typecheck_SaveFile_overload_1(L)) return _bind_SaveFile_overload_1(L);
		if (_lg_typecheck_SaveFile_overload_2(L)) return _bind_SaveFile_overload_2(L);
		if (_lg_typecheck_SaveFile_overload_3(L)) return _bind_SaveFile_overload_3(L);
		if (_lg_typecheck_SaveFile_overload_4(L)) return _bind_SaveFile_overload_4(L);
		if (_lg_typecheck_SaveFile_overload_5(L)) return _bind_SaveFile_overload_5(L);

		luaL_error(L, "error in function SaveFile, cannot match any of the overloads for function SaveFile:\n  SaveFile(wxOutputStream &, const wxString &)\n  SaveFile(const wxString &, wxBitmapType)\n  SaveFile(const wxString &, const wxString &)\n  SaveFile(const wxString &)\n  SaveFile(wxOutputStream &, wxBitmapType)\n");
		return 0;
	}

	// void wxImage::SetAlpha(unsigned char * alpha = NULL, bool static_data = false)
	static int _bind_SetAlpha_overload_1(lua_State *L) {
		if (!_lg_typecheck_SetAlpha_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxImage::SetAlpha(unsigned char * alpha = NULL, bool static_data = false) function, expected prototype:\nvoid wxImage::SetAlpha(unsigned char * alpha = NULL, bool static_data = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		unsigned char alpha = (unsigned char)(lua_tointeger(L,2));
		bool static_data=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)false;

		wxImage* self=Luna< wxObject >::checkSubType< wxImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxImage::SetAlpha(unsigned char *, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetAlpha(&alpha, static_data);

		return 0;
	}

	// void wxImage::SetAlpha(int x, int y, unsigned char alpha)
	static int _bind_SetAlpha_overload_2(lua_State *L) {
		if (!_lg_typecheck_SetAlpha_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxImage::SetAlpha(int x, int y, unsigned char alpha) function, expected prototype:\nvoid wxImage::SetAlpha(int x, int y, unsigned char alpha)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		unsigned char alpha = (unsigned char)(lua_tointeger(L,4));

		wxImage* self=Luna< wxObject >::checkSubType< wxImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxImage::SetAlpha(int, int, unsigned char). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetAlpha(x, y, alpha);

		return 0;
	}

	// Overload binder for wxImage::SetAlpha
	static int _bind_SetAlpha(lua_State *L) {
		if (_lg_typecheck_SetAlpha_overload_1(L)) return _bind_SetAlpha_overload_1(L);
		if (_lg_typecheck_SetAlpha_overload_2(L)) return _bind_SetAlpha_overload_2(L);

		luaL_error(L, "error in function SetAlpha, cannot match any of the overloads for function SetAlpha:\n  SetAlpha(unsigned char *, bool)\n  SetAlpha(int, int, unsigned char)\n");
		return 0;
	}

	// void wxImage::ClearAlpha()
	static int _bind_ClearAlpha(lua_State *L) {
		if (!_lg_typecheck_ClearAlpha(L)) {
			luaL_error(L, "luna typecheck failed in void wxImage::ClearAlpha() function, expected prototype:\nvoid wxImage::ClearAlpha()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxImage* self=Luna< wxObject >::checkSubType< wxImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxImage::ClearAlpha(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ClearAlpha();

		return 0;
	}

	// void wxImage::SetData(unsigned char * data, bool static_data = false)
	static int _bind_SetData_overload_1(lua_State *L) {
		if (!_lg_typecheck_SetData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxImage::SetData(unsigned char * data, bool static_data = false) function, expected prototype:\nvoid wxImage::SetData(unsigned char * data, bool static_data = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		unsigned char data = (unsigned char)(lua_tointeger(L,2));
		bool static_data=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)false;

		wxImage* self=Luna< wxObject >::checkSubType< wxImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxImage::SetData(unsigned char *, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetData(&data, static_data);

		return 0;
	}

	// void wxImage::SetData(unsigned char * data, int new_width, int new_height, bool static_data = false)
	static int _bind_SetData_overload_2(lua_State *L) {
		if (!_lg_typecheck_SetData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxImage::SetData(unsigned char * data, int new_width, int new_height, bool static_data = false) function, expected prototype:\nvoid wxImage::SetData(unsigned char * data, int new_width, int new_height, bool static_data = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		unsigned char data = (unsigned char)(lua_tointeger(L,2));
		int new_width=(int)lua_tointeger(L,3);
		int new_height=(int)lua_tointeger(L,4);
		bool static_data=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : (bool)false;

		wxImage* self=Luna< wxObject >::checkSubType< wxImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxImage::SetData(unsigned char *, int, int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetData(&data, new_width, new_height, static_data);

		return 0;
	}

	// Overload binder for wxImage::SetData
	static int _bind_SetData(lua_State *L) {
		if (_lg_typecheck_SetData_overload_1(L)) return _bind_SetData_overload_1(L);
		if (_lg_typecheck_SetData_overload_2(L)) return _bind_SetData_overload_2(L);

		luaL_error(L, "error in function SetData, cannot match any of the overloads for function SetData:\n  SetData(unsigned char *, bool)\n  SetData(unsigned char *, int, int, bool)\n");
		return 0;
	}

	// void wxImage::SetMask(bool hasMask = true)
	static int _bind_SetMask(lua_State *L) {
		if (!_lg_typecheck_SetMask(L)) {
			luaL_error(L, "luna typecheck failed in void wxImage::SetMask(bool hasMask = true) function, expected prototype:\nvoid wxImage::SetMask(bool hasMask = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool hasMask=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxImage* self=Luna< wxObject >::checkSubType< wxImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxImage::SetMask(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetMask(hasMask);

		return 0;
	}

	// void wxImage::SetMaskColour(unsigned char red, unsigned char green, unsigned char blue)
	static int _bind_SetMaskColour(lua_State *L) {
		if (!_lg_typecheck_SetMaskColour(L)) {
			luaL_error(L, "luna typecheck failed in void wxImage::SetMaskColour(unsigned char red, unsigned char green, unsigned char blue) function, expected prototype:\nvoid wxImage::SetMaskColour(unsigned char red, unsigned char green, unsigned char blue)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char red = (unsigned char)(lua_tointeger(L,2));
		unsigned char green = (unsigned char)(lua_tointeger(L,3));
		unsigned char blue = (unsigned char)(lua_tointeger(L,4));

		wxImage* self=Luna< wxObject >::checkSubType< wxImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxImage::SetMaskColour(unsigned char, unsigned char, unsigned char). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetMaskColour(red, green, blue);

		return 0;
	}

	// bool wxImage::SetMaskFromImage(const wxImage & mask, unsigned char mr, unsigned char mg, unsigned char mb)
	static int _bind_SetMaskFromImage(lua_State *L) {
		if (!_lg_typecheck_SetMaskFromImage(L)) {
			luaL_error(L, "luna typecheck failed in bool wxImage::SetMaskFromImage(const wxImage & mask, unsigned char mr, unsigned char mg, unsigned char mb) function, expected prototype:\nbool wxImage::SetMaskFromImage(const wxImage & mask, unsigned char mr, unsigned char mg, unsigned char mb)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxImage* mask_ptr=(Luna< wxObject >::checkSubType< wxImage >(L,2));
		if( !mask_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mask in wxImage::SetMaskFromImage function");
		}
		const wxImage & mask=*mask_ptr;
		unsigned char mr = (unsigned char)(lua_tointeger(L,3));
		unsigned char mg = (unsigned char)(lua_tointeger(L,4));
		unsigned char mb = (unsigned char)(lua_tointeger(L,5));

		wxImage* self=Luna< wxObject >::checkSubType< wxImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxImage::SetMaskFromImage(const wxImage &, unsigned char, unsigned char, unsigned char). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetMaskFromImage(mask, mr, mg, mb);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxImage::SetOption(const wxString & name, const wxString & value)
	static int _bind_SetOption_overload_1(lua_State *L) {
		if (!_lg_typecheck_SetOption_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxImage::SetOption(const wxString & name, const wxString & value) function, expected prototype:\nvoid wxImage::SetOption(const wxString & name, const wxString & value)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));
		wxString value(lua_tostring(L,3),lua_objlen(L,3));

		wxImage* self=Luna< wxObject >::checkSubType< wxImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxImage::SetOption(const wxString &, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetOption(name, value);

		return 0;
	}

	// void wxImage::SetOption(const wxString & name, int value)
	static int _bind_SetOption_overload_2(lua_State *L) {
		if (!_lg_typecheck_SetOption_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxImage::SetOption(const wxString & name, int value) function, expected prototype:\nvoid wxImage::SetOption(const wxString & name, int value)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));
		int value=(int)lua_tointeger(L,3);

		wxImage* self=Luna< wxObject >::checkSubType< wxImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxImage::SetOption(const wxString &, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetOption(name, value);

		return 0;
	}

	// Overload binder for wxImage::SetOption
	static int _bind_SetOption(lua_State *L) {
		if (_lg_typecheck_SetOption_overload_1(L)) return _bind_SetOption_overload_1(L);
		if (_lg_typecheck_SetOption_overload_2(L)) return _bind_SetOption_overload_2(L);

		luaL_error(L, "error in function SetOption, cannot match any of the overloads for function SetOption:\n  SetOption(const wxString &, const wxString &)\n  SetOption(const wxString &, int)\n");
		return 0;
	}

	// void wxImage::SetPalette(const wxPalette & palette)
	static int _bind_SetPalette(lua_State *L) {
		if (!_lg_typecheck_SetPalette(L)) {
			luaL_error(L, "luna typecheck failed in void wxImage::SetPalette(const wxPalette & palette) function, expected prototype:\nvoid wxImage::SetPalette(const wxPalette & palette)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPalette* palette_ptr=(Luna< wxObject >::checkSubType< wxPalette >(L,2));
		if( !palette_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg palette in wxImage::SetPalette function");
		}
		const wxPalette & palette=*palette_ptr;

		wxImage* self=Luna< wxObject >::checkSubType< wxImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxImage::SetPalette(const wxPalette &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetPalette(palette);

		return 0;
	}

	// void wxImage::SetRGB(const wxRect & rect, unsigned char red, unsigned char green, unsigned char blue)
	static int _bind_SetRGB(lua_State *L) {
		if (!_lg_typecheck_SetRGB(L)) {
			luaL_error(L, "luna typecheck failed in void wxImage::SetRGB(const wxRect & rect, unsigned char red, unsigned char green, unsigned char blue) function, expected prototype:\nvoid wxImage::SetRGB(const wxRect & rect, unsigned char red, unsigned char green, unsigned char blue)\nClass arguments details:\narg 1 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxRect* rect_ptr=(Luna< wxRect >::check(L,2));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxImage::SetRGB function");
		}
		const wxRect & rect=*rect_ptr;
		unsigned char red = (unsigned char)(lua_tointeger(L,3));
		unsigned char green = (unsigned char)(lua_tointeger(L,4));
		unsigned char blue = (unsigned char)(lua_tointeger(L,5));

		wxImage* self=Luna< wxObject >::checkSubType< wxImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxImage::SetRGB(const wxRect &, unsigned char, unsigned char, unsigned char). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetRGB(rect, red, green, blue);

		return 0;
	}

	// void wxImage::SetType(wxBitmapType type)
	static int _bind_SetType(lua_State *L) {
		if (!_lg_typecheck_SetType(L)) {
			luaL_error(L, "luna typecheck failed in void wxImage::SetType(wxBitmapType type) function, expected prototype:\nvoid wxImage::SetType(wxBitmapType type)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxBitmapType type=(wxBitmapType)lua_tointeger(L,2);

		wxImage* self=Luna< wxObject >::checkSubType< wxImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxImage::SetType(wxBitmapType). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetType(type);

		return 0;
	}

	// static void wxImage::AddHandler(wxImageHandler * handler)
	static int _bind_AddHandler(lua_State *L) {
		if (!_lg_typecheck_AddHandler(L)) {
			luaL_error(L, "luna typecheck failed in static void wxImage::AddHandler(wxImageHandler * handler) function, expected prototype:\nstatic void wxImage::AddHandler(wxImageHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxImageHandler* handler=(Luna< wxObject >::checkSubType< wxImageHandler >(L,1));

		wxImage::AddHandler(handler);

		return 0;
	}

	// static void wxImage::CleanUpHandlers()
	static int _bind_CleanUpHandlers(lua_State *L) {
		if (!_lg_typecheck_CleanUpHandlers(L)) {
			luaL_error(L, "luna typecheck failed in static void wxImage::CleanUpHandlers() function, expected prototype:\nstatic void wxImage::CleanUpHandlers()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxImage::CleanUpHandlers();

		return 0;
	}

	// static void wxImage::InitStandardHandlers()
	static int _bind_InitStandardHandlers(lua_State *L) {
		if (!_lg_typecheck_InitStandardHandlers(L)) {
			luaL_error(L, "luna typecheck failed in static void wxImage::InitStandardHandlers() function, expected prototype:\nstatic void wxImage::InitStandardHandlers()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxImage::InitStandardHandlers();

		return 0;
	}

	// static void wxImage::InsertHandler(wxImageHandler * handler)
	static int _bind_InsertHandler(lua_State *L) {
		if (!_lg_typecheck_InsertHandler(L)) {
			luaL_error(L, "luna typecheck failed in static void wxImage::InsertHandler(wxImageHandler * handler) function, expected prototype:\nstatic void wxImage::InsertHandler(wxImageHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxImageHandler* handler=(Luna< wxObject >::checkSubType< wxImageHandler >(L,1));

		wxImage::InsertHandler(handler);

		return 0;
	}

	// static bool wxImage::RemoveHandler(const wxString & name)
	static int _bind_RemoveHandler(lua_State *L) {
		if (!_lg_typecheck_RemoveHandler(L)) {
			luaL_error(L, "luna typecheck failed in static bool wxImage::RemoveHandler(const wxString & name) function, expected prototype:\nstatic bool wxImage::RemoveHandler(const wxString & name)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,1),lua_objlen(L,1));

		bool lret = wxImage::RemoveHandler(name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static bool wxImage::CanRead(const wxString & filename)
	static int _bind_CanRead_overload_1(lua_State *L) {
		if (!_lg_typecheck_CanRead_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in static bool wxImage::CanRead(const wxString & filename) function, expected prototype:\nstatic bool wxImage::CanRead(const wxString & filename)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString filename(lua_tostring(L,1),lua_objlen(L,1));

		bool lret = wxImage::CanRead(filename);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static bool wxImage::CanRead(wxInputStream & stream)
	static int _bind_CanRead_overload_2(lua_State *L) {
		if (!_lg_typecheck_CanRead_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in static bool wxImage::CanRead(wxInputStream & stream) function, expected prototype:\nstatic bool wxImage::CanRead(wxInputStream & stream)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxInputStream* stream_ptr=(Luna< wxObject >::checkSubType< wxInputStream >(L,1));
		if( !stream_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg stream in wxImage::CanRead function");
		}
		wxInputStream & stream=*stream_ptr;

		bool lret = wxImage::CanRead(stream);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxImage::CanRead
	static int _bind_CanRead(lua_State *L) {
		if (_lg_typecheck_CanRead_overload_1(L)) return _bind_CanRead_overload_1(L);
		if (_lg_typecheck_CanRead_overload_2(L)) return _bind_CanRead_overload_2(L);

		luaL_error(L, "error in function CanRead, cannot match any of the overloads for function CanRead:\n  CanRead(const wxString &)\n  CanRead(wxInputStream &)\n");
		return 0;
	}

	// static int wxImage::GetImageCount(const wxString & filename, wxBitmapType type = ::wxBITMAP_TYPE_ANY)
	static int _bind_GetImageCount_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetImageCount_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in static int wxImage::GetImageCount(const wxString & filename, wxBitmapType type = ::wxBITMAP_TYPE_ANY) function, expected prototype:\nstatic int wxImage::GetImageCount(const wxString & filename, wxBitmapType type = ::wxBITMAP_TYPE_ANY)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString filename(lua_tostring(L,1),lua_objlen(L,1));
		wxBitmapType type=luatop>1 ? (wxBitmapType)lua_tointeger(L,2) : (wxBitmapType)::wxBITMAP_TYPE_ANY;

		int lret = wxImage::GetImageCount(filename, type);
		lua_pushnumber(L,lret);

		return 1;
	}

	// static int wxImage::GetImageCount(wxInputStream & stream, wxBitmapType type = ::wxBITMAP_TYPE_ANY)
	static int _bind_GetImageCount_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetImageCount_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in static int wxImage::GetImageCount(wxInputStream & stream, wxBitmapType type = ::wxBITMAP_TYPE_ANY) function, expected prototype:\nstatic int wxImage::GetImageCount(wxInputStream & stream, wxBitmapType type = ::wxBITMAP_TYPE_ANY)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxInputStream* stream_ptr=(Luna< wxObject >::checkSubType< wxInputStream >(L,1));
		if( !stream_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg stream in wxImage::GetImageCount function");
		}
		wxInputStream & stream=*stream_ptr;
		wxBitmapType type=luatop>1 ? (wxBitmapType)lua_tointeger(L,2) : (wxBitmapType)::wxBITMAP_TYPE_ANY;

		int lret = wxImage::GetImageCount(stream, type);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for wxImage::GetImageCount
	static int _bind_GetImageCount(lua_State *L) {
		if (_lg_typecheck_GetImageCount_overload_1(L)) return _bind_GetImageCount_overload_1(L);
		if (_lg_typecheck_GetImageCount_overload_2(L)) return _bind_GetImageCount_overload_2(L);

		luaL_error(L, "error in function GetImageCount, cannot match any of the overloads for function GetImageCount:\n  GetImageCount(const wxString &, wxBitmapType)\n  GetImageCount(wxInputStream &, wxBitmapType)\n");
		return 0;
	}

	// static wxString wxImage::GetImageExtWildcard()
	static int _bind_GetImageExtWildcard(lua_State *L) {
		if (!_lg_typecheck_GetImageExtWildcard(L)) {
			luaL_error(L, "luna typecheck failed in static wxString wxImage::GetImageExtWildcard() function, expected prototype:\nstatic wxString wxImage::GetImageExtWildcard()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxString lret = wxImage::GetImageExtWildcard();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// static wxImage::HSVValue wxImage::RGBtoHSV(const wxImage::RGBValue & rgb)
	static int _bind_RGBtoHSV(lua_State *L) {
		if (!_lg_typecheck_RGBtoHSV(L)) {
			luaL_error(L, "luna typecheck failed in static wxImage::HSVValue wxImage::RGBtoHSV(const wxImage::RGBValue & rgb) function, expected prototype:\nstatic wxImage::HSVValue wxImage::RGBtoHSV(const wxImage::RGBValue & rgb)\nClass arguments details:\narg 1 ID = 45106465\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxImage::RGBValue* rgb_ptr=(Luna< wxImage::RGBValue >::check(L,1));
		if( !rgb_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rgb in wxImage::RGBtoHSV function");
		}
		const wxImage::RGBValue & rgb=*rgb_ptr;

		wxImage::HSVValue stack_lret = wxImage::RGBtoHSV(rgb);
		wxImage::HSVValue* lret = new wxImage::HSVValue(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxImage::HSVValue >::push(L,lret,true);

		return 1;
	}

	// static wxImage::RGBValue wxImage::HSVtoRGB(const wxImage::HSVValue & hsv)
	static int _bind_HSVtoRGB(lua_State *L) {
		if (!_lg_typecheck_HSVtoRGB(L)) {
			luaL_error(L, "luna typecheck failed in static wxImage::RGBValue wxImage::HSVtoRGB(const wxImage::HSVValue & hsv) function, expected prototype:\nstatic wxImage::RGBValue wxImage::HSVtoRGB(const wxImage::HSVValue & hsv)\nClass arguments details:\narg 1 ID = 41631892\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxImage::HSVValue* hsv_ptr=(Luna< wxImage::HSVValue >::check(L,1));
		if( !hsv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg hsv in wxImage::HSVtoRGB function");
		}
		const wxImage::HSVValue & hsv=*hsv_ptr;

		wxImage::RGBValue stack_lret = wxImage::HSVtoRGB(hsv);
		wxImage::RGBValue* lret = new wxImage::RGBValue(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxImage::RGBValue >::push(L,lret,true);

		return 1;
	}

	// void wxImage::composeWith(wxImage * mainImg, wxImage * subImg, int corner = ::CORNER_BOTTOM_RIGHT)
	static int _bind_composeWith(lua_State *L) {
		if (!_lg_typecheck_composeWith(L)) {
			luaL_error(L, "luna typecheck failed in void wxImage::composeWith(wxImage * mainImg, wxImage * subImg, int corner = ::CORNER_BOTTOM_RIGHT) function, expected prototype:\nvoid wxImage::composeWith(wxImage * mainImg, wxImage * subImg, int corner = ::CORNER_BOTTOM_RIGHT)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxImage* mainImg=(Luna< wxObject >::checkSubType< wxImage >(L,1));
		wxImage* subImg=(Luna< wxObject >::checkSubType< wxImage >(L,2));
		int corner=luatop>2 ? (int)lua_tointeger(L,3) : (int)::CORNER_BOTTOM_RIGHT;

		composeWith(mainImg, subImg, corner);

		return 0;
	}

	// wxClassInfo * wxImage::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxImage::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxImage::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxImage* self=Luna< wxObject >::checkSubType< wxImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxImage::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxImage::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// bool wxImage::base_LoadFile(wxInputStream & stream, wxBitmapType type = ::wxBITMAP_TYPE_ANY, int index = -1)
	static int _bind_base_LoadFile_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_LoadFile_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool wxImage::base_LoadFile(wxInputStream & stream, wxBitmapType type = ::wxBITMAP_TYPE_ANY, int index = -1) function, expected prototype:\nbool wxImage::base_LoadFile(wxInputStream & stream, wxBitmapType type = ::wxBITMAP_TYPE_ANY, int index = -1)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxInputStream* stream_ptr=(Luna< wxObject >::checkSubType< wxInputStream >(L,2));
		if( !stream_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg stream in wxImage::base_LoadFile function");
		}
		wxInputStream & stream=*stream_ptr;
		wxBitmapType type=luatop>2 ? (wxBitmapType)lua_tointeger(L,3) : (wxBitmapType)::wxBITMAP_TYPE_ANY;
		int index=luatop>3 ? (int)lua_tointeger(L,4) : (int)-1;

		wxImage* self=Luna< wxObject >::checkSubType< wxImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxImage::base_LoadFile(wxInputStream &, wxBitmapType, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxImage::LoadFile(stream, type, index);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxImage::base_LoadFile(const wxString & name, wxBitmapType type = ::wxBITMAP_TYPE_ANY, int index = -1)
	static int _bind_base_LoadFile_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_LoadFile_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool wxImage::base_LoadFile(const wxString & name, wxBitmapType type = ::wxBITMAP_TYPE_ANY, int index = -1) function, expected prototype:\nbool wxImage::base_LoadFile(const wxString & name, wxBitmapType type = ::wxBITMAP_TYPE_ANY, int index = -1)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString name(lua_tostring(L,2),lua_objlen(L,2));
		wxBitmapType type=luatop>2 ? (wxBitmapType)lua_tointeger(L,3) : (wxBitmapType)::wxBITMAP_TYPE_ANY;
		int index=luatop>3 ? (int)lua_tointeger(L,4) : (int)-1;

		wxImage* self=Luna< wxObject >::checkSubType< wxImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxImage::base_LoadFile(const wxString &, wxBitmapType, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxImage::LoadFile(name, type, index);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxImage::base_LoadFile(const wxString & name, const wxString & mimetype, int index = -1)
	static int _bind_base_LoadFile_overload_3(lua_State *L) {
		if (!_lg_typecheck_base_LoadFile_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in bool wxImage::base_LoadFile(const wxString & name, const wxString & mimetype, int index = -1) function, expected prototype:\nbool wxImage::base_LoadFile(const wxString & name, const wxString & mimetype, int index = -1)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString name(lua_tostring(L,2),lua_objlen(L,2));
		wxString mimetype(lua_tostring(L,3),lua_objlen(L,3));
		int index=luatop>3 ? (int)lua_tointeger(L,4) : (int)-1;

		wxImage* self=Luna< wxObject >::checkSubType< wxImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxImage::base_LoadFile(const wxString &, const wxString &, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxImage::LoadFile(name, mimetype, index);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxImage::base_LoadFile(wxInputStream & stream, const wxString & mimetype, int index = -1)
	static int _bind_base_LoadFile_overload_4(lua_State *L) {
		if (!_lg_typecheck_base_LoadFile_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in bool wxImage::base_LoadFile(wxInputStream & stream, const wxString & mimetype, int index = -1) function, expected prototype:\nbool wxImage::base_LoadFile(wxInputStream & stream, const wxString & mimetype, int index = -1)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxInputStream* stream_ptr=(Luna< wxObject >::checkSubType< wxInputStream >(L,2));
		if( !stream_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg stream in wxImage::base_LoadFile function");
		}
		wxInputStream & stream=*stream_ptr;
		wxString mimetype(lua_tostring(L,3),lua_objlen(L,3));
		int index=luatop>3 ? (int)lua_tointeger(L,4) : (int)-1;

		wxImage* self=Luna< wxObject >::checkSubType< wxImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxImage::base_LoadFile(wxInputStream &, const wxString &, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxImage::LoadFile(stream, mimetype, index);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxImage::base_LoadFile
	static int _bind_base_LoadFile(lua_State *L) {
		if (_lg_typecheck_base_LoadFile_overload_1(L)) return _bind_base_LoadFile_overload_1(L);
		if (_lg_typecheck_base_LoadFile_overload_2(L)) return _bind_base_LoadFile_overload_2(L);
		if (_lg_typecheck_base_LoadFile_overload_3(L)) return _bind_base_LoadFile_overload_3(L);
		if (_lg_typecheck_base_LoadFile_overload_4(L)) return _bind_base_LoadFile_overload_4(L);

		luaL_error(L, "error in function base_LoadFile, cannot match any of the overloads for function base_LoadFile:\n  base_LoadFile(wxInputStream &, wxBitmapType, int)\n  base_LoadFile(const wxString &, wxBitmapType, int)\n  base_LoadFile(const wxString &, const wxString &, int)\n  base_LoadFile(wxInputStream &, const wxString &, int)\n");
		return 0;
	}

	// bool wxImage::base_SaveFile(wxOutputStream & stream, const wxString & mimetype) const
	static int _bind_base_SaveFile_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_SaveFile_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool wxImage::base_SaveFile(wxOutputStream & stream, const wxString & mimetype) const function, expected prototype:\nbool wxImage::base_SaveFile(wxOutputStream & stream, const wxString & mimetype) const\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxOutputStream* stream_ptr=(Luna< wxObject >::checkSubType< wxOutputStream >(L,2));
		if( !stream_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg stream in wxImage::base_SaveFile function");
		}
		wxOutputStream & stream=*stream_ptr;
		wxString mimetype(lua_tostring(L,3),lua_objlen(L,3));

		wxImage* self=Luna< wxObject >::checkSubType< wxImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxImage::base_SaveFile(wxOutputStream &, const wxString &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxImage::SaveFile(stream, mimetype);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxImage::base_SaveFile(const wxString & name, wxBitmapType type) const
	static int _bind_base_SaveFile_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_SaveFile_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool wxImage::base_SaveFile(const wxString & name, wxBitmapType type) const function, expected prototype:\nbool wxImage::base_SaveFile(const wxString & name, wxBitmapType type) const\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));
		wxBitmapType type=(wxBitmapType)lua_tointeger(L,3);

		wxImage* self=Luna< wxObject >::checkSubType< wxImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxImage::base_SaveFile(const wxString &, wxBitmapType) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxImage::SaveFile(name, type);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxImage::base_SaveFile(const wxString & name, const wxString & mimetype) const
	static int _bind_base_SaveFile_overload_3(lua_State *L) {
		if (!_lg_typecheck_base_SaveFile_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in bool wxImage::base_SaveFile(const wxString & name, const wxString & mimetype) const function, expected prototype:\nbool wxImage::base_SaveFile(const wxString & name, const wxString & mimetype) const\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));
		wxString mimetype(lua_tostring(L,3),lua_objlen(L,3));

		wxImage* self=Luna< wxObject >::checkSubType< wxImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxImage::base_SaveFile(const wxString &, const wxString &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxImage::SaveFile(name, mimetype);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxImage::base_SaveFile(const wxString & name) const
	static int _bind_base_SaveFile_overload_4(lua_State *L) {
		if (!_lg_typecheck_base_SaveFile_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in bool wxImage::base_SaveFile(const wxString & name) const function, expected prototype:\nbool wxImage::base_SaveFile(const wxString & name) const\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxImage* self=Luna< wxObject >::checkSubType< wxImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxImage::base_SaveFile(const wxString &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxImage::SaveFile(name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxImage::base_SaveFile(wxOutputStream & stream, wxBitmapType type) const
	static int _bind_base_SaveFile_overload_5(lua_State *L) {
		if (!_lg_typecheck_base_SaveFile_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in bool wxImage::base_SaveFile(wxOutputStream & stream, wxBitmapType type) const function, expected prototype:\nbool wxImage::base_SaveFile(wxOutputStream & stream, wxBitmapType type) const\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxOutputStream* stream_ptr=(Luna< wxObject >::checkSubType< wxOutputStream >(L,2));
		if( !stream_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg stream in wxImage::base_SaveFile function");
		}
		wxOutputStream & stream=*stream_ptr;
		wxBitmapType type=(wxBitmapType)lua_tointeger(L,3);

		wxImage* self=Luna< wxObject >::checkSubType< wxImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxImage::base_SaveFile(wxOutputStream &, wxBitmapType) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxImage::SaveFile(stream, type);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxImage::base_SaveFile
	static int _bind_base_SaveFile(lua_State *L) {
		if (_lg_typecheck_base_SaveFile_overload_1(L)) return _bind_base_SaveFile_overload_1(L);
		if (_lg_typecheck_base_SaveFile_overload_2(L)) return _bind_base_SaveFile_overload_2(L);
		if (_lg_typecheck_base_SaveFile_overload_3(L)) return _bind_base_SaveFile_overload_3(L);
		if (_lg_typecheck_base_SaveFile_overload_4(L)) return _bind_base_SaveFile_overload_4(L);
		if (_lg_typecheck_base_SaveFile_overload_5(L)) return _bind_base_SaveFile_overload_5(L);

		luaL_error(L, "error in function base_SaveFile, cannot match any of the overloads for function base_SaveFile:\n  base_SaveFile(wxOutputStream &, const wxString &)\n  base_SaveFile(const wxString &, wxBitmapType)\n  base_SaveFile(const wxString &, const wxString &)\n  base_SaveFile(const wxString &)\n  base_SaveFile(wxOutputStream &, wxBitmapType)\n");
		return 0;
	}


	// Operator binds:
	// wxImage & wxImage::operator=(const wxImage & image)
	static int _bind_op_assign(lua_State *L) {
		if (!_lg_typecheck_op_assign(L)) {
			luaL_error(L, "luna typecheck failed in wxImage & wxImage::operator=(const wxImage & image) function, expected prototype:\nwxImage & wxImage::operator=(const wxImage & image)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxImage* image_ptr=(Luna< wxObject >::checkSubType< wxImage >(L,2));
		if( !image_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg image in wxImage::operator= function");
		}
		const wxImage & image=*image_ptr;

		wxImage* self=Luna< wxObject >::checkSubType< wxImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxImage & wxImage::operator=(const wxImage &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxImage* lret = &self->operator=(image);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxImage >::push(L,lret,false);

		return 1;
	}


};

wxImage* LunaTraits< wxImage >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxImage::_bind_ctor(L);
}

void LunaTraits< wxImage >::_bind_dtor(wxImage* obj) {
	delete obj;
}

const char LunaTraits< wxImage >::className[] = "wxImage";
const char LunaTraits< wxImage >::fullName[] = "wxImage";
const char LunaTraits< wxImage >::moduleName[] = "wx";
const char* LunaTraits< wxImage >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxImage >::hash = 19191331;
const int LunaTraits< wxImage >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxImage >::methods[] = {
	{"Copy", &luna_wrapper_wxImage::_bind_Copy},
	{"Create", &luna_wrapper_wxImage::_bind_Create},
	{"Clear", &luna_wrapper_wxImage::_bind_Clear},
	{"Destroy", &luna_wrapper_wxImage::_bind_Destroy},
	{"InitAlpha", &luna_wrapper_wxImage::_bind_InitAlpha},
	{"Blur", &luna_wrapper_wxImage::_bind_Blur},
	{"BlurHorizontal", &luna_wrapper_wxImage::_bind_BlurHorizontal},
	{"BlurVertical", &luna_wrapper_wxImage::_bind_BlurVertical},
	{"Mirror", &luna_wrapper_wxImage::_bind_Mirror},
	{"Paste", &luna_wrapper_wxImage::_bind_Paste},
	{"Replace", &luna_wrapper_wxImage::_bind_Replace},
	{"Rescale", &luna_wrapper_wxImage::_bind_Rescale},
	{"Resize", &luna_wrapper_wxImage::_bind_Resize},
	{"Rotate", &luna_wrapper_wxImage::_bind_Rotate},
	{"Rotate90", &luna_wrapper_wxImage::_bind_Rotate90},
	{"Rotate180", &luna_wrapper_wxImage::_bind_Rotate180},
	{"RotateHue", &luna_wrapper_wxImage::_bind_RotateHue},
	{"Scale", &luna_wrapper_wxImage::_bind_Scale},
	{"Size", &luna_wrapper_wxImage::_bind_Size},
	{"ConvertAlphaToMask", &luna_wrapper_wxImage::_bind_ConvertAlphaToMask},
	{"ConvertToGreyscale", &luna_wrapper_wxImage::_bind_ConvertToGreyscale},
	{"ConvertToMono", &luna_wrapper_wxImage::_bind_ConvertToMono},
	{"ConvertToDisabled", &luna_wrapper_wxImage::_bind_ConvertToDisabled},
	{"ComputeHistogram", &luna_wrapper_wxImage::_bind_ComputeHistogram},
	{"FindFirstUnusedColour", &luna_wrapper_wxImage::_bind_FindFirstUnusedColour},
	{"GetAlpha", &luna_wrapper_wxImage::_bind_GetAlpha},
	{"GetData", &luna_wrapper_wxImage::_bind_GetData},
	{"GetRed", &luna_wrapper_wxImage::_bind_GetRed},
	{"GetGreen", &luna_wrapper_wxImage::_bind_GetGreen},
	{"GetBlue", &luna_wrapper_wxImage::_bind_GetBlue},
	{"GetMaskRed", &luna_wrapper_wxImage::_bind_GetMaskRed},
	{"GetMaskGreen", &luna_wrapper_wxImage::_bind_GetMaskGreen},
	{"GetMaskBlue", &luna_wrapper_wxImage::_bind_GetMaskBlue},
	{"GetWidth", &luna_wrapper_wxImage::_bind_GetWidth},
	{"GetHeight", &luna_wrapper_wxImage::_bind_GetHeight},
	{"GetSize", &luna_wrapper_wxImage::_bind_GetSize},
	{"GetOption", &luna_wrapper_wxImage::_bind_GetOption},
	{"GetOptionInt", &luna_wrapper_wxImage::_bind_GetOptionInt},
	{"GetOrFindMaskColour", &luna_wrapper_wxImage::_bind_GetOrFindMaskColour},
	{"GetPalette", &luna_wrapper_wxImage::_bind_GetPalette},
	{"GetSubImage", &luna_wrapper_wxImage::_bind_GetSubImage},
	{"GetType", &luna_wrapper_wxImage::_bind_GetType},
	{"HasAlpha", &luna_wrapper_wxImage::_bind_HasAlpha},
	{"HasMask", &luna_wrapper_wxImage::_bind_HasMask},
	{"HasOption", &luna_wrapper_wxImage::_bind_HasOption},
	{"IsOk", &luna_wrapper_wxImage::_bind_IsOk},
	{"IsTransparent", &luna_wrapper_wxImage::_bind_IsTransparent},
	{"LoadFile", &luna_wrapper_wxImage::_bind_LoadFile},
	{"SaveFile", &luna_wrapper_wxImage::_bind_SaveFile},
	{"SetAlpha", &luna_wrapper_wxImage::_bind_SetAlpha},
	{"ClearAlpha", &luna_wrapper_wxImage::_bind_ClearAlpha},
	{"SetData", &luna_wrapper_wxImage::_bind_SetData},
	{"SetMask", &luna_wrapper_wxImage::_bind_SetMask},
	{"SetMaskColour", &luna_wrapper_wxImage::_bind_SetMaskColour},
	{"SetMaskFromImage", &luna_wrapper_wxImage::_bind_SetMaskFromImage},
	{"SetOption", &luna_wrapper_wxImage::_bind_SetOption},
	{"SetPalette", &luna_wrapper_wxImage::_bind_SetPalette},
	{"SetRGB", &luna_wrapper_wxImage::_bind_SetRGB},
	{"SetType", &luna_wrapper_wxImage::_bind_SetType},
	{"AddHandler", &luna_wrapper_wxImage::_bind_AddHandler},
	{"CleanUpHandlers", &luna_wrapper_wxImage::_bind_CleanUpHandlers},
	{"InitStandardHandlers", &luna_wrapper_wxImage::_bind_InitStandardHandlers},
	{"InsertHandler", &luna_wrapper_wxImage::_bind_InsertHandler},
	{"RemoveHandler", &luna_wrapper_wxImage::_bind_RemoveHandler},
	{"CanRead", &luna_wrapper_wxImage::_bind_CanRead},
	{"GetImageCount", &luna_wrapper_wxImage::_bind_GetImageCount},
	{"GetImageExtWildcard", &luna_wrapper_wxImage::_bind_GetImageExtWildcard},
	{"RGBtoHSV", &luna_wrapper_wxImage::_bind_RGBtoHSV},
	{"HSVtoRGB", &luna_wrapper_wxImage::_bind_HSVtoRGB},
	{"composeWith", &luna_wrapper_wxImage::_bind_composeWith},
	{"base_GetClassInfo", &luna_wrapper_wxImage::_bind_base_GetClassInfo},
	{"base_LoadFile", &luna_wrapper_wxImage::_bind_base_LoadFile},
	{"base_SaveFile", &luna_wrapper_wxImage::_bind_base_SaveFile},
	{"op_assign", &luna_wrapper_wxImage::_bind_op_assign},
	{"fromVoid", &luna_wrapper_wxImage::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxImage::_bind_asVoid},
	{"getTable", &luna_wrapper_wxImage::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxImage >::converters[] = {
	{"wxObject", &luna_wrapper_wxImage::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxImage >::enumValues[] = {
	{0,0}
};



#include <plug_common.h>

#include <luna/wrappers/wrapper_wxFlexGridSizer.h>

class luna_wrapper_wxFlexGridSizer {
public:
	typedef Luna< wxFlexGridSizer > luna_t;

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

		wxFlexGridSizer* self= (wxFlexGridSizer*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxFlexGridSizer >::push(L,self,false);
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
		//wxFlexGridSizer* ptr= dynamic_cast< wxFlexGridSizer* >(Luna< wxObject >::check(L,1));
		wxFlexGridSizer* ptr= luna_caster< wxObject, wxFlexGridSizer >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxFlexGridSizer >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		if( luatop>1 && (!(Luna< wxSize >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,20268751) ) return false;
		if( (!(Luna< wxSize >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,20268751) ) return false;
		if( luatop>2 && (!(Luna< wxSize >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_7(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_8(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,20268751) ) return false;
		if( (!(Luna< wxSize >::check(L,4))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_AddGrowableCol(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddGrowableRow(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetFlexibleDirection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetNonFlexibleGrowMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsColGrowable(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsRowGrowable(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RemoveGrowableCol(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RemoveGrowableRow(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFlexibleDirection(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetNonFlexibleGrowMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RecalcSizes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CalcMin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_AddSpacer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Clear(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Detach_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Detach_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxSizer >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Detach_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_InformFirstDirection(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Layout(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Remove_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxSizer >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Remove_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Replace_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,2)) ) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,3)) ) ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Replace_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxSizer >(L,2)) ) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< wxObject >::checkSubType< wxSizer >(L,3)) ) ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Replace_overload_3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< wxObject >::checkSubType< wxSizerItem >(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_RecalcSizes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_CalcMin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxFlexGridSizer::wxFlexGridSizer(int cols, int vgap, int hgap)
	static wxFlexGridSizer* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxFlexGridSizer::wxFlexGridSizer(int cols, int vgap, int hgap) function, expected prototype:\nwxFlexGridSizer::wxFlexGridSizer(int cols, int vgap, int hgap)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int cols=(int)lua_tointeger(L,1);
		int vgap=(int)lua_tointeger(L,2);
		int hgap=(int)lua_tointeger(L,3);

		return new wxFlexGridSizer(cols, vgap, hgap);
	}

	// wxFlexGridSizer::wxFlexGridSizer(int cols, const wxSize & gap = wxSize (0, 0))
	static wxFlexGridSizer* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxFlexGridSizer::wxFlexGridSizer(int cols, const wxSize & gap = wxSize (0, 0)) function, expected prototype:\nwxFlexGridSizer::wxFlexGridSizer(int cols, const wxSize & gap = wxSize (0, 0))\nClass arguments details:\narg 2 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int cols=(int)lua_tointeger(L,1);
		const wxSize* gap_ptr=luatop>1 ? (Luna< wxSize >::check(L,2)) : NULL;
		if( luatop>1 && !gap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg gap in wxFlexGridSizer::wxFlexGridSizer function");
		}
		const wxSize & gap=luatop>1 ? *gap_ptr : (const wxSize&)wxSize (0, 0);

		return new wxFlexGridSizer(cols, gap);
	}

	// wxFlexGridSizer::wxFlexGridSizer(int rows, int cols, int vgap, int hgap)
	static wxFlexGridSizer* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in wxFlexGridSizer::wxFlexGridSizer(int rows, int cols, int vgap, int hgap) function, expected prototype:\nwxFlexGridSizer::wxFlexGridSizer(int rows, int cols, int vgap, int hgap)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int rows=(int)lua_tointeger(L,1);
		int cols=(int)lua_tointeger(L,2);
		int vgap=(int)lua_tointeger(L,3);
		int hgap=(int)lua_tointeger(L,4);

		return new wxFlexGridSizer(rows, cols, vgap, hgap);
	}

	// wxFlexGridSizer::wxFlexGridSizer(int rows, int cols, const wxSize & gap)
	static wxFlexGridSizer* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in wxFlexGridSizer::wxFlexGridSizer(int rows, int cols, const wxSize & gap) function, expected prototype:\nwxFlexGridSizer::wxFlexGridSizer(int rows, int cols, const wxSize & gap)\nClass arguments details:\narg 3 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		int rows=(int)lua_tointeger(L,1);
		int cols=(int)lua_tointeger(L,2);
		const wxSize* gap_ptr=(Luna< wxSize >::check(L,3));
		if( !gap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg gap in wxFlexGridSizer::wxFlexGridSizer function");
		}
		const wxSize & gap=*gap_ptr;

		return new wxFlexGridSizer(rows, cols, gap);
	}

	// wxFlexGridSizer::wxFlexGridSizer(lua_Table * data, int cols, int vgap, int hgap)
	static wxFlexGridSizer* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in wxFlexGridSizer::wxFlexGridSizer(lua_Table * data, int cols, int vgap, int hgap) function, expected prototype:\nwxFlexGridSizer::wxFlexGridSizer(lua_Table * data, int cols, int vgap, int hgap)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int cols=(int)lua_tointeger(L,2);
		int vgap=(int)lua_tointeger(L,3);
		int hgap=(int)lua_tointeger(L,4);

		return new wrapper_wxFlexGridSizer(L,NULL, cols, vgap, hgap);
	}

	// wxFlexGridSizer::wxFlexGridSizer(lua_Table * data, int cols, const wxSize & gap = wxSize (0, 0))
	static wxFlexGridSizer* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in wxFlexGridSizer::wxFlexGridSizer(lua_Table * data, int cols, const wxSize & gap = wxSize (0, 0)) function, expected prototype:\nwxFlexGridSizer::wxFlexGridSizer(lua_Table * data, int cols, const wxSize & gap = wxSize (0, 0))\nClass arguments details:\narg 3 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int cols=(int)lua_tointeger(L,2);
		const wxSize* gap_ptr=luatop>2 ? (Luna< wxSize >::check(L,3)) : NULL;
		if( luatop>2 && !gap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg gap in wxFlexGridSizer::wxFlexGridSizer function");
		}
		const wxSize & gap=luatop>2 ? *gap_ptr : (const wxSize&)wxSize (0, 0);

		return new wrapper_wxFlexGridSizer(L,NULL, cols, gap);
	}

	// wxFlexGridSizer::wxFlexGridSizer(lua_Table * data, int rows, int cols, int vgap, int hgap)
	static wxFlexGridSizer* _bind_ctor_overload_7(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_7(L)) {
			luaL_error(L, "luna typecheck failed in wxFlexGridSizer::wxFlexGridSizer(lua_Table * data, int rows, int cols, int vgap, int hgap) function, expected prototype:\nwxFlexGridSizer::wxFlexGridSizer(lua_Table * data, int rows, int cols, int vgap, int hgap)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int rows=(int)lua_tointeger(L,2);
		int cols=(int)lua_tointeger(L,3);
		int vgap=(int)lua_tointeger(L,4);
		int hgap=(int)lua_tointeger(L,5);

		return new wrapper_wxFlexGridSizer(L,NULL, rows, cols, vgap, hgap);
	}

	// wxFlexGridSizer::wxFlexGridSizer(lua_Table * data, int rows, int cols, const wxSize & gap)
	static wxFlexGridSizer* _bind_ctor_overload_8(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_8(L)) {
			luaL_error(L, "luna typecheck failed in wxFlexGridSizer::wxFlexGridSizer(lua_Table * data, int rows, int cols, const wxSize & gap) function, expected prototype:\nwxFlexGridSizer::wxFlexGridSizer(lua_Table * data, int rows, int cols, const wxSize & gap)\nClass arguments details:\narg 4 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		int rows=(int)lua_tointeger(L,2);
		int cols=(int)lua_tointeger(L,3);
		const wxSize* gap_ptr=(Luna< wxSize >::check(L,4));
		if( !gap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg gap in wxFlexGridSizer::wxFlexGridSizer function");
		}
		const wxSize & gap=*gap_ptr;

		return new wrapper_wxFlexGridSizer(L,NULL, rows, cols, gap);
	}

	// Overload binder for wxFlexGridSizer::wxFlexGridSizer
	static wxFlexGridSizer* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);
		if (_lg_typecheck_ctor_overload_7(L)) return _bind_ctor_overload_7(L);
		if (_lg_typecheck_ctor_overload_8(L)) return _bind_ctor_overload_8(L);

		luaL_error(L, "error in function wxFlexGridSizer, cannot match any of the overloads for function wxFlexGridSizer:\n  wxFlexGridSizer(int, int, int)\n  wxFlexGridSizer(int, const wxSize &)\n  wxFlexGridSizer(int, int, int, int)\n  wxFlexGridSizer(int, int, const wxSize &)\n  wxFlexGridSizer(lua_Table *, int, int, int)\n  wxFlexGridSizer(lua_Table *, int, const wxSize &)\n  wxFlexGridSizer(lua_Table *, int, int, int, int)\n  wxFlexGridSizer(lua_Table *, int, int, const wxSize &)\n");
		return NULL;
	}


	// Function binds:
	// void wxFlexGridSizer::AddGrowableCol(size_t idx, int proportion = 0)
	static int _bind_AddGrowableCol(lua_State *L) {
		if (!_lg_typecheck_AddGrowableCol(L)) {
			luaL_error(L, "luna typecheck failed in void wxFlexGridSizer::AddGrowableCol(size_t idx, int proportion = 0) function, expected prototype:\nvoid wxFlexGridSizer::AddGrowableCol(size_t idx, int proportion = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		size_t idx=(size_t)lua_tointeger(L,2);
		int proportion=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;

		wxFlexGridSizer* self=Luna< wxObject >::checkSubType< wxFlexGridSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFlexGridSizer::AddGrowableCol(size_t, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AddGrowableCol(idx, proportion);

		return 0;
	}

	// void wxFlexGridSizer::AddGrowableRow(size_t idx, int proportion = 0)
	static int _bind_AddGrowableRow(lua_State *L) {
		if (!_lg_typecheck_AddGrowableRow(L)) {
			luaL_error(L, "luna typecheck failed in void wxFlexGridSizer::AddGrowableRow(size_t idx, int proportion = 0) function, expected prototype:\nvoid wxFlexGridSizer::AddGrowableRow(size_t idx, int proportion = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		size_t idx=(size_t)lua_tointeger(L,2);
		int proportion=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;

		wxFlexGridSizer* self=Luna< wxObject >::checkSubType< wxFlexGridSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFlexGridSizer::AddGrowableRow(size_t, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AddGrowableRow(idx, proportion);

		return 0;
	}

	// int wxFlexGridSizer::GetFlexibleDirection() const
	static int _bind_GetFlexibleDirection(lua_State *L) {
		if (!_lg_typecheck_GetFlexibleDirection(L)) {
			luaL_error(L, "luna typecheck failed in int wxFlexGridSizer::GetFlexibleDirection() const function, expected prototype:\nint wxFlexGridSizer::GetFlexibleDirection() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFlexGridSizer* self=Luna< wxObject >::checkSubType< wxFlexGridSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxFlexGridSizer::GetFlexibleDirection() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetFlexibleDirection();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxFlexSizerGrowMode wxFlexGridSizer::GetNonFlexibleGrowMode() const
	static int _bind_GetNonFlexibleGrowMode(lua_State *L) {
		if (!_lg_typecheck_GetNonFlexibleGrowMode(L)) {
			luaL_error(L, "luna typecheck failed in wxFlexSizerGrowMode wxFlexGridSizer::GetNonFlexibleGrowMode() const function, expected prototype:\nwxFlexSizerGrowMode wxFlexGridSizer::GetNonFlexibleGrowMode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFlexGridSizer* self=Luna< wxObject >::checkSubType< wxFlexGridSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxFlexSizerGrowMode wxFlexGridSizer::GetNonFlexibleGrowMode() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxFlexSizerGrowMode lret = self->GetNonFlexibleGrowMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxFlexGridSizer::IsColGrowable(size_t idx)
	static int _bind_IsColGrowable(lua_State *L) {
		if (!_lg_typecheck_IsColGrowable(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFlexGridSizer::IsColGrowable(size_t idx) function, expected prototype:\nbool wxFlexGridSizer::IsColGrowable(size_t idx)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t idx=(size_t)lua_tointeger(L,2);

		wxFlexGridSizer* self=Luna< wxObject >::checkSubType< wxFlexGridSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFlexGridSizer::IsColGrowable(size_t). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsColGrowable(idx);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFlexGridSizer::IsRowGrowable(size_t idx)
	static int _bind_IsRowGrowable(lua_State *L) {
		if (!_lg_typecheck_IsRowGrowable(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFlexGridSizer::IsRowGrowable(size_t idx) function, expected prototype:\nbool wxFlexGridSizer::IsRowGrowable(size_t idx)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t idx=(size_t)lua_tointeger(L,2);

		wxFlexGridSizer* self=Luna< wxObject >::checkSubType< wxFlexGridSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFlexGridSizer::IsRowGrowable(size_t). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsRowGrowable(idx);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxFlexGridSizer::RemoveGrowableCol(size_t idx)
	static int _bind_RemoveGrowableCol(lua_State *L) {
		if (!_lg_typecheck_RemoveGrowableCol(L)) {
			luaL_error(L, "luna typecheck failed in void wxFlexGridSizer::RemoveGrowableCol(size_t idx) function, expected prototype:\nvoid wxFlexGridSizer::RemoveGrowableCol(size_t idx)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t idx=(size_t)lua_tointeger(L,2);

		wxFlexGridSizer* self=Luna< wxObject >::checkSubType< wxFlexGridSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFlexGridSizer::RemoveGrowableCol(size_t). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RemoveGrowableCol(idx);

		return 0;
	}

	// void wxFlexGridSizer::RemoveGrowableRow(size_t idx)
	static int _bind_RemoveGrowableRow(lua_State *L) {
		if (!_lg_typecheck_RemoveGrowableRow(L)) {
			luaL_error(L, "luna typecheck failed in void wxFlexGridSizer::RemoveGrowableRow(size_t idx) function, expected prototype:\nvoid wxFlexGridSizer::RemoveGrowableRow(size_t idx)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t idx=(size_t)lua_tointeger(L,2);

		wxFlexGridSizer* self=Luna< wxObject >::checkSubType< wxFlexGridSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFlexGridSizer::RemoveGrowableRow(size_t). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RemoveGrowableRow(idx);

		return 0;
	}

	// void wxFlexGridSizer::SetFlexibleDirection(int direction)
	static int _bind_SetFlexibleDirection(lua_State *L) {
		if (!_lg_typecheck_SetFlexibleDirection(L)) {
			luaL_error(L, "luna typecheck failed in void wxFlexGridSizer::SetFlexibleDirection(int direction) function, expected prototype:\nvoid wxFlexGridSizer::SetFlexibleDirection(int direction)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int direction=(int)lua_tointeger(L,2);

		wxFlexGridSizer* self=Luna< wxObject >::checkSubType< wxFlexGridSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFlexGridSizer::SetFlexibleDirection(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetFlexibleDirection(direction);

		return 0;
	}

	// void wxFlexGridSizer::SetNonFlexibleGrowMode(wxFlexSizerGrowMode mode)
	static int _bind_SetNonFlexibleGrowMode(lua_State *L) {
		if (!_lg_typecheck_SetNonFlexibleGrowMode(L)) {
			luaL_error(L, "luna typecheck failed in void wxFlexGridSizer::SetNonFlexibleGrowMode(wxFlexSizerGrowMode mode) function, expected prototype:\nvoid wxFlexGridSizer::SetNonFlexibleGrowMode(wxFlexSizerGrowMode mode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxFlexSizerGrowMode mode=(wxFlexSizerGrowMode)lua_tointeger(L,2);

		wxFlexGridSizer* self=Luna< wxObject >::checkSubType< wxFlexGridSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFlexGridSizer::SetNonFlexibleGrowMode(wxFlexSizerGrowMode). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetNonFlexibleGrowMode(mode);

		return 0;
	}

	// void wxFlexGridSizer::RecalcSizes()
	static int _bind_RecalcSizes(lua_State *L) {
		if (!_lg_typecheck_RecalcSizes(L)) {
			luaL_error(L, "luna typecheck failed in void wxFlexGridSizer::RecalcSizes() function, expected prototype:\nvoid wxFlexGridSizer::RecalcSizes()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFlexGridSizer* self=Luna< wxObject >::checkSubType< wxFlexGridSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFlexGridSizer::RecalcSizes(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RecalcSizes();

		return 0;
	}

	// wxSize wxFlexGridSizer::CalcMin()
	static int _bind_CalcMin(lua_State *L) {
		if (!_lg_typecheck_CalcMin(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxFlexGridSizer::CalcMin() function, expected prototype:\nwxSize wxFlexGridSizer::CalcMin()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFlexGridSizer* self=Luna< wxObject >::checkSubType< wxFlexGridSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxFlexGridSizer::CalcMin(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->CalcMin();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxClassInfo * wxFlexGridSizer::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxFlexGridSizer::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxFlexGridSizer::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFlexGridSizer* self=Luna< wxObject >::checkSubType< wxFlexGridSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxFlexGridSizer::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxFlexGridSizer::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxSizerItem * wxFlexGridSizer::base_AddSpacer(int size)
	static int _bind_base_AddSpacer(lua_State *L) {
		if (!_lg_typecheck_base_AddSpacer(L)) {
			luaL_error(L, "luna typecheck failed in wxSizerItem * wxFlexGridSizer::base_AddSpacer(int size) function, expected prototype:\nwxSizerItem * wxFlexGridSizer::base_AddSpacer(int size)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int size=(int)lua_tointeger(L,2);

		wxFlexGridSizer* self=Luna< wxObject >::checkSubType< wxFlexGridSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSizerItem * wxFlexGridSizer::base_AddSpacer(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSizerItem * lret = self->wxFlexGridSizer::AddSpacer(size);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerItem >::push(L,lret,false);

		return 1;
	}

	// void wxFlexGridSizer::base_Clear(bool delete_windows = false)
	static int _bind_base_Clear(lua_State *L) {
		if (!_lg_typecheck_base_Clear(L)) {
			luaL_error(L, "luna typecheck failed in void wxFlexGridSizer::base_Clear(bool delete_windows = false) function, expected prototype:\nvoid wxFlexGridSizer::base_Clear(bool delete_windows = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool delete_windows=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)false;

		wxFlexGridSizer* self=Luna< wxObject >::checkSubType< wxFlexGridSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFlexGridSizer::base_Clear(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxFlexGridSizer::Clear(delete_windows);

		return 0;
	}

	// bool wxFlexGridSizer::base_Detach(wxWindow * window)
	static int _bind_base_Detach_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_Detach_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFlexGridSizer::base_Detach(wxWindow * window) function, expected prototype:\nbool wxFlexGridSizer::base_Detach(wxWindow * window)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* window=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxFlexGridSizer* self=Luna< wxObject >::checkSubType< wxFlexGridSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFlexGridSizer::base_Detach(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxFlexGridSizer::Detach(window);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFlexGridSizer::base_Detach(wxSizer * sizer)
	static int _bind_base_Detach_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_Detach_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFlexGridSizer::base_Detach(wxSizer * sizer) function, expected prototype:\nbool wxFlexGridSizer::base_Detach(wxSizer * sizer)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxSizer* sizer=(Luna< wxObject >::checkSubType< wxSizer >(L,2));

		wxFlexGridSizer* self=Luna< wxObject >::checkSubType< wxFlexGridSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFlexGridSizer::base_Detach(wxSizer *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxFlexGridSizer::Detach(sizer);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFlexGridSizer::base_Detach(int index)
	static int _bind_base_Detach_overload_3(lua_State *L) {
		if (!_lg_typecheck_base_Detach_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFlexGridSizer::base_Detach(int index) function, expected prototype:\nbool wxFlexGridSizer::base_Detach(int index)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);

		wxFlexGridSizer* self=Luna< wxObject >::checkSubType< wxFlexGridSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFlexGridSizer::base_Detach(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxFlexGridSizer::Detach(index);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxFlexGridSizer::base_Detach
	static int _bind_base_Detach(lua_State *L) {
		if (_lg_typecheck_base_Detach_overload_1(L)) return _bind_base_Detach_overload_1(L);
		if (_lg_typecheck_base_Detach_overload_2(L)) return _bind_base_Detach_overload_2(L);
		if (_lg_typecheck_base_Detach_overload_3(L)) return _bind_base_Detach_overload_3(L);

		luaL_error(L, "error in function base_Detach, cannot match any of the overloads for function base_Detach:\n  base_Detach(wxWindow *)\n  base_Detach(wxSizer *)\n  base_Detach(int)\n");
		return 0;
	}

	// bool wxFlexGridSizer::base_InformFirstDirection(int direction, int size, int availableOtherDir)
	static int _bind_base_InformFirstDirection(lua_State *L) {
		if (!_lg_typecheck_base_InformFirstDirection(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFlexGridSizer::base_InformFirstDirection(int direction, int size, int availableOtherDir) function, expected prototype:\nbool wxFlexGridSizer::base_InformFirstDirection(int direction, int size, int availableOtherDir)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int direction=(int)lua_tointeger(L,2);
		int size=(int)lua_tointeger(L,3);
		int availableOtherDir=(int)lua_tointeger(L,4);

		wxFlexGridSizer* self=Luna< wxObject >::checkSubType< wxFlexGridSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFlexGridSizer::base_InformFirstDirection(int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxFlexGridSizer::InformFirstDirection(direction, size, availableOtherDir);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxFlexGridSizer::base_Layout()
	static int _bind_base_Layout(lua_State *L) {
		if (!_lg_typecheck_base_Layout(L)) {
			luaL_error(L, "luna typecheck failed in void wxFlexGridSizer::base_Layout() function, expected prototype:\nvoid wxFlexGridSizer::base_Layout()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFlexGridSizer* self=Luna< wxObject >::checkSubType< wxFlexGridSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFlexGridSizer::base_Layout(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxFlexGridSizer::Layout();

		return 0;
	}

	// bool wxFlexGridSizer::base_Remove(wxSizer * sizer)
	static int _bind_base_Remove_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_Remove_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFlexGridSizer::base_Remove(wxSizer * sizer) function, expected prototype:\nbool wxFlexGridSizer::base_Remove(wxSizer * sizer)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxSizer* sizer=(Luna< wxObject >::checkSubType< wxSizer >(L,2));

		wxFlexGridSizer* self=Luna< wxObject >::checkSubType< wxFlexGridSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFlexGridSizer::base_Remove(wxSizer *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxFlexGridSizer::Remove(sizer);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFlexGridSizer::base_Remove(int index)
	static int _bind_base_Remove_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_Remove_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFlexGridSizer::base_Remove(int index) function, expected prototype:\nbool wxFlexGridSizer::base_Remove(int index)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);

		wxFlexGridSizer* self=Luna< wxObject >::checkSubType< wxFlexGridSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFlexGridSizer::base_Remove(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxFlexGridSizer::Remove(index);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxFlexGridSizer::base_Remove
	static int _bind_base_Remove(lua_State *L) {
		if (_lg_typecheck_base_Remove_overload_1(L)) return _bind_base_Remove_overload_1(L);
		if (_lg_typecheck_base_Remove_overload_2(L)) return _bind_base_Remove_overload_2(L);

		luaL_error(L, "error in function base_Remove, cannot match any of the overloads for function base_Remove:\n  base_Remove(wxSizer *)\n  base_Remove(int)\n");
		return 0;
	}

	// bool wxFlexGridSizer::base_Replace(wxWindow * oldwin, wxWindow * newwin, bool recursive = false)
	static int _bind_base_Replace_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_Replace_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFlexGridSizer::base_Replace(wxWindow * oldwin, wxWindow * newwin, bool recursive = false) function, expected prototype:\nbool wxFlexGridSizer::base_Replace(wxWindow * oldwin, wxWindow * newwin, bool recursive = false)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* oldwin=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		wxWindow* newwin=(Luna< wxObject >::checkSubType< wxWindow >(L,3));
		bool recursive=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)false;

		wxFlexGridSizer* self=Luna< wxObject >::checkSubType< wxFlexGridSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFlexGridSizer::base_Replace(wxWindow *, wxWindow *, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxFlexGridSizer::Replace(oldwin, newwin, recursive);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFlexGridSizer::base_Replace(wxSizer * oldsz, wxSizer * newsz, bool recursive = false)
	static int _bind_base_Replace_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_Replace_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFlexGridSizer::base_Replace(wxSizer * oldsz, wxSizer * newsz, bool recursive = false) function, expected prototype:\nbool wxFlexGridSizer::base_Replace(wxSizer * oldsz, wxSizer * newsz, bool recursive = false)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxSizer* oldsz=(Luna< wxObject >::checkSubType< wxSizer >(L,2));
		wxSizer* newsz=(Luna< wxObject >::checkSubType< wxSizer >(L,3));
		bool recursive=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)false;

		wxFlexGridSizer* self=Luna< wxObject >::checkSubType< wxFlexGridSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFlexGridSizer::base_Replace(wxSizer *, wxSizer *, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxFlexGridSizer::Replace(oldsz, newsz, recursive);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFlexGridSizer::base_Replace(size_t index, wxSizerItem * newitem)
	static int _bind_base_Replace_overload_3(lua_State *L) {
		if (!_lg_typecheck_base_Replace_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFlexGridSizer::base_Replace(size_t index, wxSizerItem * newitem) function, expected prototype:\nbool wxFlexGridSizer::base_Replace(size_t index, wxSizerItem * newitem)\nClass arguments details:\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t index=(size_t)lua_tointeger(L,2);
		wxSizerItem* newitem=(Luna< wxObject >::checkSubType< wxSizerItem >(L,3));

		wxFlexGridSizer* self=Luna< wxObject >::checkSubType< wxFlexGridSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFlexGridSizer::base_Replace(size_t, wxSizerItem *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxFlexGridSizer::Replace(index, newitem);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxFlexGridSizer::base_Replace
	static int _bind_base_Replace(lua_State *L) {
		if (_lg_typecheck_base_Replace_overload_1(L)) return _bind_base_Replace_overload_1(L);
		if (_lg_typecheck_base_Replace_overload_2(L)) return _bind_base_Replace_overload_2(L);
		if (_lg_typecheck_base_Replace_overload_3(L)) return _bind_base_Replace_overload_3(L);

		luaL_error(L, "error in function base_Replace, cannot match any of the overloads for function base_Replace:\n  base_Replace(wxWindow *, wxWindow *, bool)\n  base_Replace(wxSizer *, wxSizer *, bool)\n  base_Replace(size_t, wxSizerItem *)\n");
		return 0;
	}

	// void wxFlexGridSizer::base_RecalcSizes()
	static int _bind_base_RecalcSizes(lua_State *L) {
		if (!_lg_typecheck_base_RecalcSizes(L)) {
			luaL_error(L, "luna typecheck failed in void wxFlexGridSizer::base_RecalcSizes() function, expected prototype:\nvoid wxFlexGridSizer::base_RecalcSizes()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFlexGridSizer* self=Luna< wxObject >::checkSubType< wxFlexGridSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFlexGridSizer::base_RecalcSizes(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxFlexGridSizer::RecalcSizes();

		return 0;
	}

	// wxSize wxFlexGridSizer::base_CalcMin()
	static int _bind_base_CalcMin(lua_State *L) {
		if (!_lg_typecheck_base_CalcMin(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxFlexGridSizer::base_CalcMin() function, expected prototype:\nwxSize wxFlexGridSizer::base_CalcMin()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFlexGridSizer* self=Luna< wxObject >::checkSubType< wxFlexGridSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxFlexGridSizer::base_CalcMin(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxFlexGridSizer::CalcMin();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

wxFlexGridSizer* LunaTraits< wxFlexGridSizer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxFlexGridSizer::_bind_ctor(L);
}

void LunaTraits< wxFlexGridSizer >::_bind_dtor(wxFlexGridSizer* obj) {
	delete obj;
}

const char LunaTraits< wxFlexGridSizer >::className[] = "wxFlexGridSizer";
const char LunaTraits< wxFlexGridSizer >::fullName[] = "wxFlexGridSizer";
const char LunaTraits< wxFlexGridSizer >::moduleName[] = "wx";
const char* LunaTraits< wxFlexGridSizer >::parents[] = {"wx.wxGridSizer", 0};
const int LunaTraits< wxFlexGridSizer >::hash = 13113834;
const int LunaTraits< wxFlexGridSizer >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxFlexGridSizer >::methods[] = {
	{"AddGrowableCol", &luna_wrapper_wxFlexGridSizer::_bind_AddGrowableCol},
	{"AddGrowableRow", &luna_wrapper_wxFlexGridSizer::_bind_AddGrowableRow},
	{"GetFlexibleDirection", &luna_wrapper_wxFlexGridSizer::_bind_GetFlexibleDirection},
	{"GetNonFlexibleGrowMode", &luna_wrapper_wxFlexGridSizer::_bind_GetNonFlexibleGrowMode},
	{"IsColGrowable", &luna_wrapper_wxFlexGridSizer::_bind_IsColGrowable},
	{"IsRowGrowable", &luna_wrapper_wxFlexGridSizer::_bind_IsRowGrowable},
	{"RemoveGrowableCol", &luna_wrapper_wxFlexGridSizer::_bind_RemoveGrowableCol},
	{"RemoveGrowableRow", &luna_wrapper_wxFlexGridSizer::_bind_RemoveGrowableRow},
	{"SetFlexibleDirection", &luna_wrapper_wxFlexGridSizer::_bind_SetFlexibleDirection},
	{"SetNonFlexibleGrowMode", &luna_wrapper_wxFlexGridSizer::_bind_SetNonFlexibleGrowMode},
	{"RecalcSizes", &luna_wrapper_wxFlexGridSizer::_bind_RecalcSizes},
	{"CalcMin", &luna_wrapper_wxFlexGridSizer::_bind_CalcMin},
	{"base_GetClassInfo", &luna_wrapper_wxFlexGridSizer::_bind_base_GetClassInfo},
	{"base_AddSpacer", &luna_wrapper_wxFlexGridSizer::_bind_base_AddSpacer},
	{"base_Clear", &luna_wrapper_wxFlexGridSizer::_bind_base_Clear},
	{"base_Detach", &luna_wrapper_wxFlexGridSizer::_bind_base_Detach},
	{"base_InformFirstDirection", &luna_wrapper_wxFlexGridSizer::_bind_base_InformFirstDirection},
	{"base_Layout", &luna_wrapper_wxFlexGridSizer::_bind_base_Layout},
	{"base_Remove", &luna_wrapper_wxFlexGridSizer::_bind_base_Remove},
	{"base_Replace", &luna_wrapper_wxFlexGridSizer::_bind_base_Replace},
	{"base_RecalcSizes", &luna_wrapper_wxFlexGridSizer::_bind_base_RecalcSizes},
	{"base_CalcMin", &luna_wrapper_wxFlexGridSizer::_bind_base_CalcMin},
	{"fromVoid", &luna_wrapper_wxFlexGridSizer::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxFlexGridSizer::_bind_asVoid},
	{"getTable", &luna_wrapper_wxFlexGridSizer::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxFlexGridSizer >::converters[] = {
	{"wxObject", &luna_wrapper_wxFlexGridSizer::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxFlexGridSizer >::enumValues[] = {
	{0,0}
};



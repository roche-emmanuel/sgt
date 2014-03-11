#include <plug_common.h>

#include <luna/wrappers/wrapper_wxGridSizer.h>

class luna_wrapper_wxGridSizer {
public:
	typedef Luna< wxGridSizer > luna_t;

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

		wxGridSizer* self= (wxGridSizer*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxGridSizer >::push(L,self,false);
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
		//wxGridSizer* ptr= dynamic_cast< wxGridSizer* >(Luna< wxObject >::check(L,1));
		wxGridSizer* ptr= luna_caster< wxObject, wxGridSizer >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxGridSizer >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_GetCols(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetRows(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetEffectiveColsCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetEffectiveRowsCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetHGap(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetVGap(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetCols(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetHGap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetRows(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetVGap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CalcMin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_RecalcSizes(lua_State *L) {
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

	inline static bool _lg_typecheck_base_CalcMin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_RecalcSizes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxGridSizer::wxGridSizer(int cols, int vgap, int hgap)
	static wxGridSizer* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxGridSizer::wxGridSizer(int cols, int vgap, int hgap) function, expected prototype:\nwxGridSizer::wxGridSizer(int cols, int vgap, int hgap)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int cols=(int)lua_tointeger(L,1);
		int vgap=(int)lua_tointeger(L,2);
		int hgap=(int)lua_tointeger(L,3);

		return new wxGridSizer(cols, vgap, hgap);
	}

	// wxGridSizer::wxGridSizer(int cols, const wxSize & gap = wxSize (0, 0))
	static wxGridSizer* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxGridSizer::wxGridSizer(int cols, const wxSize & gap = wxSize (0, 0)) function, expected prototype:\nwxGridSizer::wxGridSizer(int cols, const wxSize & gap = wxSize (0, 0))\nClass arguments details:\narg 2 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int cols=(int)lua_tointeger(L,1);
		const wxSize* gap_ptr=luatop>1 ? (Luna< wxSize >::check(L,2)) : NULL;
		if( luatop>1 && !gap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg gap in wxGridSizer::wxGridSizer function");
		}
		const wxSize & gap=luatop>1 ? *gap_ptr : (const wxSize&)wxSize (0, 0);

		return new wxGridSizer(cols, gap);
	}

	// wxGridSizer::wxGridSizer(int rows, int cols, int vgap, int hgap)
	static wxGridSizer* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in wxGridSizer::wxGridSizer(int rows, int cols, int vgap, int hgap) function, expected prototype:\nwxGridSizer::wxGridSizer(int rows, int cols, int vgap, int hgap)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int rows=(int)lua_tointeger(L,1);
		int cols=(int)lua_tointeger(L,2);
		int vgap=(int)lua_tointeger(L,3);
		int hgap=(int)lua_tointeger(L,4);

		return new wxGridSizer(rows, cols, vgap, hgap);
	}

	// wxGridSizer::wxGridSizer(int rows, int cols, const wxSize & gap)
	static wxGridSizer* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in wxGridSizer::wxGridSizer(int rows, int cols, const wxSize & gap) function, expected prototype:\nwxGridSizer::wxGridSizer(int rows, int cols, const wxSize & gap)\nClass arguments details:\narg 3 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		int rows=(int)lua_tointeger(L,1);
		int cols=(int)lua_tointeger(L,2);
		const wxSize* gap_ptr=(Luna< wxSize >::check(L,3));
		if( !gap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg gap in wxGridSizer::wxGridSizer function");
		}
		const wxSize & gap=*gap_ptr;

		return new wxGridSizer(rows, cols, gap);
	}

	// wxGridSizer::wxGridSizer(lua_Table * data, int cols, int vgap, int hgap)
	static wxGridSizer* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in wxGridSizer::wxGridSizer(lua_Table * data, int cols, int vgap, int hgap) function, expected prototype:\nwxGridSizer::wxGridSizer(lua_Table * data, int cols, int vgap, int hgap)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int cols=(int)lua_tointeger(L,2);
		int vgap=(int)lua_tointeger(L,3);
		int hgap=(int)lua_tointeger(L,4);

		return new wrapper_wxGridSizer(L,NULL, cols, vgap, hgap);
	}

	// wxGridSizer::wxGridSizer(lua_Table * data, int cols, const wxSize & gap = wxSize (0, 0))
	static wxGridSizer* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in wxGridSizer::wxGridSizer(lua_Table * data, int cols, const wxSize & gap = wxSize (0, 0)) function, expected prototype:\nwxGridSizer::wxGridSizer(lua_Table * data, int cols, const wxSize & gap = wxSize (0, 0))\nClass arguments details:\narg 3 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int cols=(int)lua_tointeger(L,2);
		const wxSize* gap_ptr=luatop>2 ? (Luna< wxSize >::check(L,3)) : NULL;
		if( luatop>2 && !gap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg gap in wxGridSizer::wxGridSizer function");
		}
		const wxSize & gap=luatop>2 ? *gap_ptr : (const wxSize&)wxSize (0, 0);

		return new wrapper_wxGridSizer(L,NULL, cols, gap);
	}

	// wxGridSizer::wxGridSizer(lua_Table * data, int rows, int cols, int vgap, int hgap)
	static wxGridSizer* _bind_ctor_overload_7(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_7(L)) {
			luaL_error(L, "luna typecheck failed in wxGridSizer::wxGridSizer(lua_Table * data, int rows, int cols, int vgap, int hgap) function, expected prototype:\nwxGridSizer::wxGridSizer(lua_Table * data, int rows, int cols, int vgap, int hgap)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int rows=(int)lua_tointeger(L,2);
		int cols=(int)lua_tointeger(L,3);
		int vgap=(int)lua_tointeger(L,4);
		int hgap=(int)lua_tointeger(L,5);

		return new wrapper_wxGridSizer(L,NULL, rows, cols, vgap, hgap);
	}

	// wxGridSizer::wxGridSizer(lua_Table * data, int rows, int cols, const wxSize & gap)
	static wxGridSizer* _bind_ctor_overload_8(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_8(L)) {
			luaL_error(L, "luna typecheck failed in wxGridSizer::wxGridSizer(lua_Table * data, int rows, int cols, const wxSize & gap) function, expected prototype:\nwxGridSizer::wxGridSizer(lua_Table * data, int rows, int cols, const wxSize & gap)\nClass arguments details:\narg 4 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		int rows=(int)lua_tointeger(L,2);
		int cols=(int)lua_tointeger(L,3);
		const wxSize* gap_ptr=(Luna< wxSize >::check(L,4));
		if( !gap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg gap in wxGridSizer::wxGridSizer function");
		}
		const wxSize & gap=*gap_ptr;

		return new wrapper_wxGridSizer(L,NULL, rows, cols, gap);
	}

	// Overload binder for wxGridSizer::wxGridSizer
	static wxGridSizer* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);
		if (_lg_typecheck_ctor_overload_7(L)) return _bind_ctor_overload_7(L);
		if (_lg_typecheck_ctor_overload_8(L)) return _bind_ctor_overload_8(L);

		luaL_error(L, "error in function wxGridSizer, cannot match any of the overloads for function wxGridSizer:\n  wxGridSizer(int, int, int)\n  wxGridSizer(int, const wxSize &)\n  wxGridSizer(int, int, int, int)\n  wxGridSizer(int, int, const wxSize &)\n  wxGridSizer(lua_Table *, int, int, int)\n  wxGridSizer(lua_Table *, int, const wxSize &)\n  wxGridSizer(lua_Table *, int, int, int, int)\n  wxGridSizer(lua_Table *, int, int, const wxSize &)\n");
		return NULL;
	}


	// Function binds:
	// int wxGridSizer::GetCols() const
	static int _bind_GetCols(lua_State *L) {
		if (!_lg_typecheck_GetCols(L)) {
			luaL_error(L, "luna typecheck failed in int wxGridSizer::GetCols() const function, expected prototype:\nint wxGridSizer::GetCols() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGridSizer* self=Luna< wxObject >::checkSubType< wxGridSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxGridSizer::GetCols() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetCols();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxGridSizer::GetRows() const
	static int _bind_GetRows(lua_State *L) {
		if (!_lg_typecheck_GetRows(L)) {
			luaL_error(L, "luna typecheck failed in int wxGridSizer::GetRows() const function, expected prototype:\nint wxGridSizer::GetRows() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGridSizer* self=Luna< wxObject >::checkSubType< wxGridSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxGridSizer::GetRows() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetRows();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxGridSizer::GetEffectiveColsCount() const
	static int _bind_GetEffectiveColsCount(lua_State *L) {
		if (!_lg_typecheck_GetEffectiveColsCount(L)) {
			luaL_error(L, "luna typecheck failed in int wxGridSizer::GetEffectiveColsCount() const function, expected prototype:\nint wxGridSizer::GetEffectiveColsCount() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGridSizer* self=Luna< wxObject >::checkSubType< wxGridSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxGridSizer::GetEffectiveColsCount() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetEffectiveColsCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxGridSizer::GetEffectiveRowsCount() const
	static int _bind_GetEffectiveRowsCount(lua_State *L) {
		if (!_lg_typecheck_GetEffectiveRowsCount(L)) {
			luaL_error(L, "luna typecheck failed in int wxGridSizer::GetEffectiveRowsCount() const function, expected prototype:\nint wxGridSizer::GetEffectiveRowsCount() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGridSizer* self=Luna< wxObject >::checkSubType< wxGridSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxGridSizer::GetEffectiveRowsCount() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetEffectiveRowsCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxGridSizer::GetHGap() const
	static int _bind_GetHGap(lua_State *L) {
		if (!_lg_typecheck_GetHGap(L)) {
			luaL_error(L, "luna typecheck failed in int wxGridSizer::GetHGap() const function, expected prototype:\nint wxGridSizer::GetHGap() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGridSizer* self=Luna< wxObject >::checkSubType< wxGridSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxGridSizer::GetHGap() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetHGap();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxGridSizer::GetVGap() const
	static int _bind_GetVGap(lua_State *L) {
		if (!_lg_typecheck_GetVGap(L)) {
			luaL_error(L, "luna typecheck failed in int wxGridSizer::GetVGap() const function, expected prototype:\nint wxGridSizer::GetVGap() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGridSizer* self=Luna< wxObject >::checkSubType< wxGridSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxGridSizer::GetVGap() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetVGap();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxGridSizer::SetCols(int cols)
	static int _bind_SetCols(lua_State *L) {
		if (!_lg_typecheck_SetCols(L)) {
			luaL_error(L, "luna typecheck failed in void wxGridSizer::SetCols(int cols) function, expected prototype:\nvoid wxGridSizer::SetCols(int cols)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int cols=(int)lua_tointeger(L,2);

		wxGridSizer* self=Luna< wxObject >::checkSubType< wxGridSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGridSizer::SetCols(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetCols(cols);

		return 0;
	}

	// void wxGridSizer::SetHGap(int gap)
	static int _bind_SetHGap(lua_State *L) {
		if (!_lg_typecheck_SetHGap(L)) {
			luaL_error(L, "luna typecheck failed in void wxGridSizer::SetHGap(int gap) function, expected prototype:\nvoid wxGridSizer::SetHGap(int gap)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int gap=(int)lua_tointeger(L,2);

		wxGridSizer* self=Luna< wxObject >::checkSubType< wxGridSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGridSizer::SetHGap(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetHGap(gap);

		return 0;
	}

	// void wxGridSizer::SetRows(int rows)
	static int _bind_SetRows(lua_State *L) {
		if (!_lg_typecheck_SetRows(L)) {
			luaL_error(L, "luna typecheck failed in void wxGridSizer::SetRows(int rows) function, expected prototype:\nvoid wxGridSizer::SetRows(int rows)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int rows=(int)lua_tointeger(L,2);

		wxGridSizer* self=Luna< wxObject >::checkSubType< wxGridSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGridSizer::SetRows(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetRows(rows);

		return 0;
	}

	// void wxGridSizer::SetVGap(int gap)
	static int _bind_SetVGap(lua_State *L) {
		if (!_lg_typecheck_SetVGap(L)) {
			luaL_error(L, "luna typecheck failed in void wxGridSizer::SetVGap(int gap) function, expected prototype:\nvoid wxGridSizer::SetVGap(int gap)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int gap=(int)lua_tointeger(L,2);

		wxGridSizer* self=Luna< wxObject >::checkSubType< wxGridSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGridSizer::SetVGap(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetVGap(gap);

		return 0;
	}

	// wxSize wxGridSizer::CalcMin()
	static int _bind_CalcMin(lua_State *L) {
		if (!_lg_typecheck_CalcMin(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxGridSizer::CalcMin() function, expected prototype:\nwxSize wxGridSizer::CalcMin()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGridSizer* self=Luna< wxObject >::checkSubType< wxGridSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxGridSizer::CalcMin(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->CalcMin();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// void wxGridSizer::RecalcSizes()
	static int _bind_RecalcSizes(lua_State *L) {
		if (!_lg_typecheck_RecalcSizes(L)) {
			luaL_error(L, "luna typecheck failed in void wxGridSizer::RecalcSizes() function, expected prototype:\nvoid wxGridSizer::RecalcSizes()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGridSizer* self=Luna< wxObject >::checkSubType< wxGridSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGridSizer::RecalcSizes(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RecalcSizes();

		return 0;
	}

	// wxClassInfo * wxGridSizer::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxGridSizer::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxGridSizer::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGridSizer* self=Luna< wxObject >::checkSubType< wxGridSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxGridSizer::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxGridSizer::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxSizerItem * wxGridSizer::base_AddSpacer(int size)
	static int _bind_base_AddSpacer(lua_State *L) {
		if (!_lg_typecheck_base_AddSpacer(L)) {
			luaL_error(L, "luna typecheck failed in wxSizerItem * wxGridSizer::base_AddSpacer(int size) function, expected prototype:\nwxSizerItem * wxGridSizer::base_AddSpacer(int size)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int size=(int)lua_tointeger(L,2);

		wxGridSizer* self=Luna< wxObject >::checkSubType< wxGridSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSizerItem * wxGridSizer::base_AddSpacer(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSizerItem * lret = self->wxGridSizer::AddSpacer(size);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerItem >::push(L,lret,false);

		return 1;
	}

	// void wxGridSizer::base_Clear(bool delete_windows = false)
	static int _bind_base_Clear(lua_State *L) {
		if (!_lg_typecheck_base_Clear(L)) {
			luaL_error(L, "luna typecheck failed in void wxGridSizer::base_Clear(bool delete_windows = false) function, expected prototype:\nvoid wxGridSizer::base_Clear(bool delete_windows = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool delete_windows=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)false;

		wxGridSizer* self=Luna< wxObject >::checkSubType< wxGridSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGridSizer::base_Clear(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGridSizer::Clear(delete_windows);

		return 0;
	}

	// bool wxGridSizer::base_Detach(wxWindow * window)
	static int _bind_base_Detach_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_Detach_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGridSizer::base_Detach(wxWindow * window) function, expected prototype:\nbool wxGridSizer::base_Detach(wxWindow * window)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* window=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxGridSizer* self=Luna< wxObject >::checkSubType< wxGridSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGridSizer::base_Detach(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGridSizer::Detach(window);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGridSizer::base_Detach(wxSizer * sizer)
	static int _bind_base_Detach_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_Detach_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGridSizer::base_Detach(wxSizer * sizer) function, expected prototype:\nbool wxGridSizer::base_Detach(wxSizer * sizer)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxSizer* sizer=(Luna< wxObject >::checkSubType< wxSizer >(L,2));

		wxGridSizer* self=Luna< wxObject >::checkSubType< wxGridSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGridSizer::base_Detach(wxSizer *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGridSizer::Detach(sizer);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGridSizer::base_Detach(int index)
	static int _bind_base_Detach_overload_3(lua_State *L) {
		if (!_lg_typecheck_base_Detach_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGridSizer::base_Detach(int index) function, expected prototype:\nbool wxGridSizer::base_Detach(int index)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);

		wxGridSizer* self=Luna< wxObject >::checkSubType< wxGridSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGridSizer::base_Detach(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGridSizer::Detach(index);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxGridSizer::base_Detach
	static int _bind_base_Detach(lua_State *L) {
		if (_lg_typecheck_base_Detach_overload_1(L)) return _bind_base_Detach_overload_1(L);
		if (_lg_typecheck_base_Detach_overload_2(L)) return _bind_base_Detach_overload_2(L);
		if (_lg_typecheck_base_Detach_overload_3(L)) return _bind_base_Detach_overload_3(L);

		luaL_error(L, "error in function base_Detach, cannot match any of the overloads for function base_Detach:\n  base_Detach(wxWindow *)\n  base_Detach(wxSizer *)\n  base_Detach(int)\n");
		return 0;
	}

	// bool wxGridSizer::base_InformFirstDirection(int direction, int size, int availableOtherDir)
	static int _bind_base_InformFirstDirection(lua_State *L) {
		if (!_lg_typecheck_base_InformFirstDirection(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGridSizer::base_InformFirstDirection(int direction, int size, int availableOtherDir) function, expected prototype:\nbool wxGridSizer::base_InformFirstDirection(int direction, int size, int availableOtherDir)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int direction=(int)lua_tointeger(L,2);
		int size=(int)lua_tointeger(L,3);
		int availableOtherDir=(int)lua_tointeger(L,4);

		wxGridSizer* self=Luna< wxObject >::checkSubType< wxGridSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGridSizer::base_InformFirstDirection(int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGridSizer::InformFirstDirection(direction, size, availableOtherDir);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxGridSizer::base_Layout()
	static int _bind_base_Layout(lua_State *L) {
		if (!_lg_typecheck_base_Layout(L)) {
			luaL_error(L, "luna typecheck failed in void wxGridSizer::base_Layout() function, expected prototype:\nvoid wxGridSizer::base_Layout()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGridSizer* self=Luna< wxObject >::checkSubType< wxGridSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGridSizer::base_Layout(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGridSizer::Layout();

		return 0;
	}

	// bool wxGridSizer::base_Remove(wxSizer * sizer)
	static int _bind_base_Remove_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_Remove_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGridSizer::base_Remove(wxSizer * sizer) function, expected prototype:\nbool wxGridSizer::base_Remove(wxSizer * sizer)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxSizer* sizer=(Luna< wxObject >::checkSubType< wxSizer >(L,2));

		wxGridSizer* self=Luna< wxObject >::checkSubType< wxGridSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGridSizer::base_Remove(wxSizer *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGridSizer::Remove(sizer);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGridSizer::base_Remove(int index)
	static int _bind_base_Remove_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_Remove_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGridSizer::base_Remove(int index) function, expected prototype:\nbool wxGridSizer::base_Remove(int index)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);

		wxGridSizer* self=Luna< wxObject >::checkSubType< wxGridSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGridSizer::base_Remove(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGridSizer::Remove(index);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxGridSizer::base_Remove
	static int _bind_base_Remove(lua_State *L) {
		if (_lg_typecheck_base_Remove_overload_1(L)) return _bind_base_Remove_overload_1(L);
		if (_lg_typecheck_base_Remove_overload_2(L)) return _bind_base_Remove_overload_2(L);

		luaL_error(L, "error in function base_Remove, cannot match any of the overloads for function base_Remove:\n  base_Remove(wxSizer *)\n  base_Remove(int)\n");
		return 0;
	}

	// bool wxGridSizer::base_Replace(wxWindow * oldwin, wxWindow * newwin, bool recursive = false)
	static int _bind_base_Replace_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_Replace_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGridSizer::base_Replace(wxWindow * oldwin, wxWindow * newwin, bool recursive = false) function, expected prototype:\nbool wxGridSizer::base_Replace(wxWindow * oldwin, wxWindow * newwin, bool recursive = false)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* oldwin=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		wxWindow* newwin=(Luna< wxObject >::checkSubType< wxWindow >(L,3));
		bool recursive=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)false;

		wxGridSizer* self=Luna< wxObject >::checkSubType< wxGridSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGridSizer::base_Replace(wxWindow *, wxWindow *, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGridSizer::Replace(oldwin, newwin, recursive);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGridSizer::base_Replace(wxSizer * oldsz, wxSizer * newsz, bool recursive = false)
	static int _bind_base_Replace_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_Replace_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGridSizer::base_Replace(wxSizer * oldsz, wxSizer * newsz, bool recursive = false) function, expected prototype:\nbool wxGridSizer::base_Replace(wxSizer * oldsz, wxSizer * newsz, bool recursive = false)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxSizer* oldsz=(Luna< wxObject >::checkSubType< wxSizer >(L,2));
		wxSizer* newsz=(Luna< wxObject >::checkSubType< wxSizer >(L,3));
		bool recursive=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)false;

		wxGridSizer* self=Luna< wxObject >::checkSubType< wxGridSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGridSizer::base_Replace(wxSizer *, wxSizer *, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGridSizer::Replace(oldsz, newsz, recursive);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGridSizer::base_Replace(size_t index, wxSizerItem * newitem)
	static int _bind_base_Replace_overload_3(lua_State *L) {
		if (!_lg_typecheck_base_Replace_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGridSizer::base_Replace(size_t index, wxSizerItem * newitem) function, expected prototype:\nbool wxGridSizer::base_Replace(size_t index, wxSizerItem * newitem)\nClass arguments details:\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t index=(size_t)lua_tointeger(L,2);
		wxSizerItem* newitem=(Luna< wxObject >::checkSubType< wxSizerItem >(L,3));

		wxGridSizer* self=Luna< wxObject >::checkSubType< wxGridSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGridSizer::base_Replace(size_t, wxSizerItem *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGridSizer::Replace(index, newitem);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxGridSizer::base_Replace
	static int _bind_base_Replace(lua_State *L) {
		if (_lg_typecheck_base_Replace_overload_1(L)) return _bind_base_Replace_overload_1(L);
		if (_lg_typecheck_base_Replace_overload_2(L)) return _bind_base_Replace_overload_2(L);
		if (_lg_typecheck_base_Replace_overload_3(L)) return _bind_base_Replace_overload_3(L);

		luaL_error(L, "error in function base_Replace, cannot match any of the overloads for function base_Replace:\n  base_Replace(wxWindow *, wxWindow *, bool)\n  base_Replace(wxSizer *, wxSizer *, bool)\n  base_Replace(size_t, wxSizerItem *)\n");
		return 0;
	}

	// wxSize wxGridSizer::base_CalcMin()
	static int _bind_base_CalcMin(lua_State *L) {
		if (!_lg_typecheck_base_CalcMin(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxGridSizer::base_CalcMin() function, expected prototype:\nwxSize wxGridSizer::base_CalcMin()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGridSizer* self=Luna< wxObject >::checkSubType< wxGridSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxGridSizer::base_CalcMin(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxGridSizer::CalcMin();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// void wxGridSizer::base_RecalcSizes()
	static int _bind_base_RecalcSizes(lua_State *L) {
		if (!_lg_typecheck_base_RecalcSizes(L)) {
			luaL_error(L, "luna typecheck failed in void wxGridSizer::base_RecalcSizes() function, expected prototype:\nvoid wxGridSizer::base_RecalcSizes()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGridSizer* self=Luna< wxObject >::checkSubType< wxGridSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGridSizer::base_RecalcSizes(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGridSizer::RecalcSizes();

		return 0;
	}


	// Operator binds:

};

wxGridSizer* LunaTraits< wxGridSizer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxGridSizer::_bind_ctor(L);
}

void LunaTraits< wxGridSizer >::_bind_dtor(wxGridSizer* obj) {
	delete obj;
}

const char LunaTraits< wxGridSizer >::className[] = "wxGridSizer";
const char LunaTraits< wxGridSizer >::fullName[] = "wxGridSizer";
const char LunaTraits< wxGridSizer >::moduleName[] = "wx";
const char* LunaTraits< wxGridSizer >::parents[] = {"wx.wxSizer", 0};
const int LunaTraits< wxGridSizer >::hash = 77653436;
const int LunaTraits< wxGridSizer >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxGridSizer >::methods[] = {
	{"GetCols", &luna_wrapper_wxGridSizer::_bind_GetCols},
	{"GetRows", &luna_wrapper_wxGridSizer::_bind_GetRows},
	{"GetEffectiveColsCount", &luna_wrapper_wxGridSizer::_bind_GetEffectiveColsCount},
	{"GetEffectiveRowsCount", &luna_wrapper_wxGridSizer::_bind_GetEffectiveRowsCount},
	{"GetHGap", &luna_wrapper_wxGridSizer::_bind_GetHGap},
	{"GetVGap", &luna_wrapper_wxGridSizer::_bind_GetVGap},
	{"SetCols", &luna_wrapper_wxGridSizer::_bind_SetCols},
	{"SetHGap", &luna_wrapper_wxGridSizer::_bind_SetHGap},
	{"SetRows", &luna_wrapper_wxGridSizer::_bind_SetRows},
	{"SetVGap", &luna_wrapper_wxGridSizer::_bind_SetVGap},
	{"CalcMin", &luna_wrapper_wxGridSizer::_bind_CalcMin},
	{"RecalcSizes", &luna_wrapper_wxGridSizer::_bind_RecalcSizes},
	{"base_GetClassInfo", &luna_wrapper_wxGridSizer::_bind_base_GetClassInfo},
	{"base_AddSpacer", &luna_wrapper_wxGridSizer::_bind_base_AddSpacer},
	{"base_Clear", &luna_wrapper_wxGridSizer::_bind_base_Clear},
	{"base_Detach", &luna_wrapper_wxGridSizer::_bind_base_Detach},
	{"base_InformFirstDirection", &luna_wrapper_wxGridSizer::_bind_base_InformFirstDirection},
	{"base_Layout", &luna_wrapper_wxGridSizer::_bind_base_Layout},
	{"base_Remove", &luna_wrapper_wxGridSizer::_bind_base_Remove},
	{"base_Replace", &luna_wrapper_wxGridSizer::_bind_base_Replace},
	{"base_CalcMin", &luna_wrapper_wxGridSizer::_bind_base_CalcMin},
	{"base_RecalcSizes", &luna_wrapper_wxGridSizer::_bind_base_RecalcSizes},
	{"fromVoid", &luna_wrapper_wxGridSizer::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxGridSizer::_bind_asVoid},
	{"getTable", &luna_wrapper_wxGridSizer::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxGridSizer >::converters[] = {
	{"wxObject", &luna_wrapper_wxGridSizer::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxGridSizer >::enumValues[] = {
	{0,0}
};



#include <plug_common.h>

#include <luna/wrappers/wrapper_wxPen.h>

class luna_wrapper_wxPen {
public:
	typedef Luna< wxPen > luna_t;

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

		wxPen* self= (wxPen*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxPen >::push(L,self,false);
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
		//wxPen* ptr= dynamic_cast< wxPen* >(Luna< wxObject >::check(L,1));
		wxPen* ptr= luna_caster< wxObject, wxPen >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxPen >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxColour >(L,1))) ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxBitmap >(L,1))) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxPen >(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxColour >(L,2))) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_7(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxBitmap >(L,2))) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_8(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxPen >(L,2))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetCap(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetColour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetJoin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetStipple(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetStyle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsOk(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsNonTransparent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsTransparent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetCap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetColour_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxColour >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetColour_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetJoin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetStipple(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetStyle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetWidth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetCap(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetColour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetJoin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetStipple(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetStyle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_IsOk(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetCap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetColour_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxColour >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetColour_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetJoin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetStipple(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetStyle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetWidth(lua_State *L) {
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

	inline static bool _lg_typecheck_op_assign(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}


	// Constructor binds:
	// wxPen::wxPen()
	static wxPen* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxPen::wxPen() function, expected prototype:\nwxPen::wxPen()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxPen();
	}

	// wxPen::wxPen(const wxColour & colour, int width = 1, wxPenStyle style = ::wxPENSTYLE_SOLID)
	static wxPen* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxPen::wxPen(const wxColour & colour, int width = 1, wxPenStyle style = ::wxPENSTYLE_SOLID) function, expected prototype:\nwxPen::wxPen(const wxColour & colour, int width = 1, wxPenStyle style = ::wxPENSTYLE_SOLID)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxColour* colour_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,1));
		if( !colour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colour in wxPen::wxPen function");
		}
		const wxColour & colour=*colour_ptr;
		int width=luatop>1 ? (int)lua_tointeger(L,2) : (int)1;
		wxPenStyle style=luatop>2 ? (wxPenStyle)lua_tointeger(L,3) : (wxPenStyle)::wxPENSTYLE_SOLID;

		return new wxPen(colour, width, style);
	}

	// wxPen::wxPen(const wxBitmap & stipple, int width)
	static wxPen* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in wxPen::wxPen(const wxBitmap & stipple, int width) function, expected prototype:\nwxPen::wxPen(const wxBitmap & stipple, int width)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxBitmap* stipple_ptr=(Luna< wxObject >::checkSubType< wxBitmap >(L,1));
		if( !stipple_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg stipple in wxPen::wxPen function");
		}
		const wxBitmap & stipple=*stipple_ptr;
		int width=(int)lua_tointeger(L,2);

		return new wxPen(stipple, width);
	}

	// wxPen::wxPen(const wxPen & pen)
	static wxPen* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in wxPen::wxPen(const wxPen & pen) function, expected prototype:\nwxPen::wxPen(const wxPen & pen)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPen* pen_ptr=(Luna< wxObject >::checkSubType< wxPen >(L,1));
		if( !pen_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pen in wxPen::wxPen function");
		}
		const wxPen & pen=*pen_ptr;

		return new wxPen(pen);
	}

	// wxPen::wxPen(lua_Table * data)
	static wxPen* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in wxPen::wxPen(lua_Table * data) function, expected prototype:\nwxPen::wxPen(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxPen(L,NULL);
	}

	// wxPen::wxPen(lua_Table * data, const wxColour & colour, int width = 1, wxPenStyle style = ::wxPENSTYLE_SOLID)
	static wxPen* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in wxPen::wxPen(lua_Table * data, const wxColour & colour, int width = 1, wxPenStyle style = ::wxPENSTYLE_SOLID) function, expected prototype:\nwxPen::wxPen(lua_Table * data, const wxColour & colour, int width = 1, wxPenStyle style = ::wxPENSTYLE_SOLID)\nClass arguments details:\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxColour* colour_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,2));
		if( !colour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colour in wxPen::wxPen function");
		}
		const wxColour & colour=*colour_ptr;
		int width=luatop>2 ? (int)lua_tointeger(L,3) : (int)1;
		wxPenStyle style=luatop>3 ? (wxPenStyle)lua_tointeger(L,4) : (wxPenStyle)::wxPENSTYLE_SOLID;

		return new wrapper_wxPen(L,NULL, colour, width, style);
	}

	// wxPen::wxPen(lua_Table * data, const wxBitmap & stipple, int width)
	static wxPen* _bind_ctor_overload_7(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_7(L)) {
			luaL_error(L, "luna typecheck failed in wxPen::wxPen(lua_Table * data, const wxBitmap & stipple, int width) function, expected prototype:\nwxPen::wxPen(lua_Table * data, const wxBitmap & stipple, int width)\nClass arguments details:\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxBitmap* stipple_ptr=(Luna< wxObject >::checkSubType< wxBitmap >(L,2));
		if( !stipple_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg stipple in wxPen::wxPen function");
		}
		const wxBitmap & stipple=*stipple_ptr;
		int width=(int)lua_tointeger(L,3);

		return new wrapper_wxPen(L,NULL, stipple, width);
	}

	// wxPen::wxPen(lua_Table * data, const wxPen & pen)
	static wxPen* _bind_ctor_overload_8(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_8(L)) {
			luaL_error(L, "luna typecheck failed in wxPen::wxPen(lua_Table * data, const wxPen & pen) function, expected prototype:\nwxPen::wxPen(lua_Table * data, const wxPen & pen)\nClass arguments details:\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPen* pen_ptr=(Luna< wxObject >::checkSubType< wxPen >(L,2));
		if( !pen_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pen in wxPen::wxPen function");
		}
		const wxPen & pen=*pen_ptr;

		return new wrapper_wxPen(L,NULL, pen);
	}

	// Overload binder for wxPen::wxPen
	static wxPen* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);
		if (_lg_typecheck_ctor_overload_7(L)) return _bind_ctor_overload_7(L);
		if (_lg_typecheck_ctor_overload_8(L)) return _bind_ctor_overload_8(L);

		luaL_error(L, "error in function wxPen, cannot match any of the overloads for function wxPen:\n  wxPen()\n  wxPen(const wxColour &, int, wxPenStyle)\n  wxPen(const wxBitmap &, int)\n  wxPen(const wxPen &)\n  wxPen(lua_Table *)\n  wxPen(lua_Table *, const wxColour &, int, wxPenStyle)\n  wxPen(lua_Table *, const wxBitmap &, int)\n  wxPen(lua_Table *, const wxPen &)\n");
		return NULL;
	}


	// Function binds:
	// wxPenCap wxPen::GetCap() const
	static int _bind_GetCap(lua_State *L) {
		if (!_lg_typecheck_GetCap(L)) {
			luaL_error(L, "luna typecheck failed in wxPenCap wxPen::GetCap() const function, expected prototype:\nwxPenCap wxPen::GetCap() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPen* self=Luna< wxObject >::checkSubType< wxPen >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPenCap wxPen::GetCap() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPenCap lret = self->GetCap();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxColour wxPen::GetColour() const
	static int _bind_GetColour(lua_State *L) {
		if (!_lg_typecheck_GetColour(L)) {
			luaL_error(L, "luna typecheck failed in wxColour wxPen::GetColour() const function, expected prototype:\nwxColour wxPen::GetColour() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPen* self=Luna< wxObject >::checkSubType< wxPen >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxColour wxPen::GetColour() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxColour stack_lret = self->GetColour();
		wxColour* lret = new wxColour(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,true);

		return 1;
	}

	// wxPenJoin wxPen::GetJoin() const
	static int _bind_GetJoin(lua_State *L) {
		if (!_lg_typecheck_GetJoin(L)) {
			luaL_error(L, "luna typecheck failed in wxPenJoin wxPen::GetJoin() const function, expected prototype:\nwxPenJoin wxPen::GetJoin() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPen* self=Luna< wxObject >::checkSubType< wxPen >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPenJoin wxPen::GetJoin() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPenJoin lret = self->GetJoin();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxBitmap * wxPen::GetStipple() const
	static int _bind_GetStipple(lua_State *L) {
		if (!_lg_typecheck_GetStipple(L)) {
			luaL_error(L, "luna typecheck failed in wxBitmap * wxPen::GetStipple() const function, expected prototype:\nwxBitmap * wxPen::GetStipple() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPen* self=Luna< wxObject >::checkSubType< wxPen >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxBitmap * wxPen::GetStipple() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxBitmap * lret = self->GetStipple();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxBitmap >::push(L,lret,false);

		return 1;
	}

	// wxPenStyle wxPen::GetStyle() const
	static int _bind_GetStyle(lua_State *L) {
		if (!_lg_typecheck_GetStyle(L)) {
			luaL_error(L, "luna typecheck failed in wxPenStyle wxPen::GetStyle() const function, expected prototype:\nwxPenStyle wxPen::GetStyle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPen* self=Luna< wxObject >::checkSubType< wxPen >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPenStyle wxPen::GetStyle() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPenStyle lret = self->GetStyle();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxPen::GetWidth() const
	static int _bind_GetWidth(lua_State *L) {
		if (!_lg_typecheck_GetWidth(L)) {
			luaL_error(L, "luna typecheck failed in int wxPen::GetWidth() const function, expected prototype:\nint wxPen::GetWidth() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPen* self=Luna< wxObject >::checkSubType< wxPen >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxPen::GetWidth() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxPen::IsOk() const
	static int _bind_IsOk(lua_State *L) {
		if (!_lg_typecheck_IsOk(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPen::IsOk() const function, expected prototype:\nbool wxPen::IsOk() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPen* self=Luna< wxObject >::checkSubType< wxPen >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPen::IsOk() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsOk();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPen::IsNonTransparent() const
	static int _bind_IsNonTransparent(lua_State *L) {
		if (!_lg_typecheck_IsNonTransparent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPen::IsNonTransparent() const function, expected prototype:\nbool wxPen::IsNonTransparent() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPen* self=Luna< wxObject >::checkSubType< wxPen >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPen::IsNonTransparent() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsNonTransparent();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPen::IsTransparent() const
	static int _bind_IsTransparent(lua_State *L) {
		if (!_lg_typecheck_IsTransparent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPen::IsTransparent() const function, expected prototype:\nbool wxPen::IsTransparent() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPen* self=Luna< wxObject >::checkSubType< wxPen >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPen::IsTransparent() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsTransparent();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxPen::SetCap(wxPenCap capStyle)
	static int _bind_SetCap(lua_State *L) {
		if (!_lg_typecheck_SetCap(L)) {
			luaL_error(L, "luna typecheck failed in void wxPen::SetCap(wxPenCap capStyle) function, expected prototype:\nvoid wxPen::SetCap(wxPenCap capStyle)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxPenCap capStyle=(wxPenCap)lua_tointeger(L,2);

		wxPen* self=Luna< wxObject >::checkSubType< wxPen >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPen::SetCap(wxPenCap). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetCap(capStyle);

		return 0;
	}

	// void wxPen::SetColour(wxColour & colour)
	static int _bind_SetColour_overload_1(lua_State *L) {
		if (!_lg_typecheck_SetColour_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxPen::SetColour(wxColour & colour) function, expected prototype:\nvoid wxPen::SetColour(wxColour & colour)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxColour* colour_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,2));
		if( !colour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colour in wxPen::SetColour function");
		}
		wxColour & colour=*colour_ptr;

		wxPen* self=Luna< wxObject >::checkSubType< wxPen >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPen::SetColour(wxColour &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetColour(colour);

		return 0;
	}

	// void wxPen::SetColour(unsigned char red, unsigned char green, unsigned char blue)
	static int _bind_SetColour_overload_2(lua_State *L) {
		if (!_lg_typecheck_SetColour_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxPen::SetColour(unsigned char red, unsigned char green, unsigned char blue) function, expected prototype:\nvoid wxPen::SetColour(unsigned char red, unsigned char green, unsigned char blue)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char red = (unsigned char)(lua_tointeger(L,2));
		unsigned char green = (unsigned char)(lua_tointeger(L,3));
		unsigned char blue = (unsigned char)(lua_tointeger(L,4));

		wxPen* self=Luna< wxObject >::checkSubType< wxPen >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPen::SetColour(unsigned char, unsigned char, unsigned char). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetColour(red, green, blue);

		return 0;
	}

	// Overload binder for wxPen::SetColour
	static int _bind_SetColour(lua_State *L) {
		if (_lg_typecheck_SetColour_overload_1(L)) return _bind_SetColour_overload_1(L);
		if (_lg_typecheck_SetColour_overload_2(L)) return _bind_SetColour_overload_2(L);

		luaL_error(L, "error in function SetColour, cannot match any of the overloads for function SetColour:\n  SetColour(wxColour &)\n  SetColour(unsigned char, unsigned char, unsigned char)\n");
		return 0;
	}

	// void wxPen::SetJoin(wxPenJoin join_style)
	static int _bind_SetJoin(lua_State *L) {
		if (!_lg_typecheck_SetJoin(L)) {
			luaL_error(L, "luna typecheck failed in void wxPen::SetJoin(wxPenJoin join_style) function, expected prototype:\nvoid wxPen::SetJoin(wxPenJoin join_style)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxPenJoin join_style=(wxPenJoin)lua_tointeger(L,2);

		wxPen* self=Luna< wxObject >::checkSubType< wxPen >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPen::SetJoin(wxPenJoin). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetJoin(join_style);

		return 0;
	}

	// void wxPen::SetStipple(const wxBitmap & stipple)
	static int _bind_SetStipple(lua_State *L) {
		if (!_lg_typecheck_SetStipple(L)) {
			luaL_error(L, "luna typecheck failed in void wxPen::SetStipple(const wxBitmap & stipple) function, expected prototype:\nvoid wxPen::SetStipple(const wxBitmap & stipple)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxBitmap* stipple_ptr=(Luna< wxObject >::checkSubType< wxBitmap >(L,2));
		if( !stipple_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg stipple in wxPen::SetStipple function");
		}
		const wxBitmap & stipple=*stipple_ptr;

		wxPen* self=Luna< wxObject >::checkSubType< wxPen >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPen::SetStipple(const wxBitmap &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetStipple(stipple);

		return 0;
	}

	// void wxPen::SetStyle(wxPenStyle style)
	static int _bind_SetStyle(lua_State *L) {
		if (!_lg_typecheck_SetStyle(L)) {
			luaL_error(L, "luna typecheck failed in void wxPen::SetStyle(wxPenStyle style) function, expected prototype:\nvoid wxPen::SetStyle(wxPenStyle style)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxPenStyle style=(wxPenStyle)lua_tointeger(L,2);

		wxPen* self=Luna< wxObject >::checkSubType< wxPen >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPen::SetStyle(wxPenStyle). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetStyle(style);

		return 0;
	}

	// void wxPen::SetWidth(int width)
	static int _bind_SetWidth(lua_State *L) {
		if (!_lg_typecheck_SetWidth(L)) {
			luaL_error(L, "luna typecheck failed in void wxPen::SetWidth(int width) function, expected prototype:\nvoid wxPen::SetWidth(int width)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int width=(int)lua_tointeger(L,2);

		wxPen* self=Luna< wxObject >::checkSubType< wxPen >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPen::SetWidth(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetWidth(width);

		return 0;
	}

	// wxClassInfo * wxPen::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxPen::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxPen::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPen* self=Luna< wxObject >::checkSubType< wxPen >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxPen::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxPen::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxPenCap wxPen::base_GetCap() const
	static int _bind_base_GetCap(lua_State *L) {
		if (!_lg_typecheck_base_GetCap(L)) {
			luaL_error(L, "luna typecheck failed in wxPenCap wxPen::base_GetCap() const function, expected prototype:\nwxPenCap wxPen::base_GetCap() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPen* self=Luna< wxObject >::checkSubType< wxPen >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPenCap wxPen::base_GetCap() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPenCap lret = self->wxPen::GetCap();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxColour wxPen::base_GetColour() const
	static int _bind_base_GetColour(lua_State *L) {
		if (!_lg_typecheck_base_GetColour(L)) {
			luaL_error(L, "luna typecheck failed in wxColour wxPen::base_GetColour() const function, expected prototype:\nwxColour wxPen::base_GetColour() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPen* self=Luna< wxObject >::checkSubType< wxPen >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxColour wxPen::base_GetColour() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxColour stack_lret = self->wxPen::GetColour();
		wxColour* lret = new wxColour(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,true);

		return 1;
	}

	// wxPenJoin wxPen::base_GetJoin() const
	static int _bind_base_GetJoin(lua_State *L) {
		if (!_lg_typecheck_base_GetJoin(L)) {
			luaL_error(L, "luna typecheck failed in wxPenJoin wxPen::base_GetJoin() const function, expected prototype:\nwxPenJoin wxPen::base_GetJoin() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPen* self=Luna< wxObject >::checkSubType< wxPen >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPenJoin wxPen::base_GetJoin() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPenJoin lret = self->wxPen::GetJoin();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxBitmap * wxPen::base_GetStipple() const
	static int _bind_base_GetStipple(lua_State *L) {
		if (!_lg_typecheck_base_GetStipple(L)) {
			luaL_error(L, "luna typecheck failed in wxBitmap * wxPen::base_GetStipple() const function, expected prototype:\nwxBitmap * wxPen::base_GetStipple() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPen* self=Luna< wxObject >::checkSubType< wxPen >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxBitmap * wxPen::base_GetStipple() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxBitmap * lret = self->wxPen::GetStipple();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxBitmap >::push(L,lret,false);

		return 1;
	}

	// wxPenStyle wxPen::base_GetStyle() const
	static int _bind_base_GetStyle(lua_State *L) {
		if (!_lg_typecheck_base_GetStyle(L)) {
			luaL_error(L, "luna typecheck failed in wxPenStyle wxPen::base_GetStyle() const function, expected prototype:\nwxPenStyle wxPen::base_GetStyle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPen* self=Luna< wxObject >::checkSubType< wxPen >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPenStyle wxPen::base_GetStyle() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPenStyle lret = self->wxPen::GetStyle();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxPen::base_GetWidth() const
	static int _bind_base_GetWidth(lua_State *L) {
		if (!_lg_typecheck_base_GetWidth(L)) {
			luaL_error(L, "luna typecheck failed in int wxPen::base_GetWidth() const function, expected prototype:\nint wxPen::base_GetWidth() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPen* self=Luna< wxObject >::checkSubType< wxPen >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxPen::base_GetWidth() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxPen::GetWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxPen::base_IsOk() const
	static int _bind_base_IsOk(lua_State *L) {
		if (!_lg_typecheck_base_IsOk(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPen::base_IsOk() const function, expected prototype:\nbool wxPen::base_IsOk() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPen* self=Luna< wxObject >::checkSubType< wxPen >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPen::base_IsOk() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxPen::IsOk();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxPen::base_SetCap(wxPenCap capStyle)
	static int _bind_base_SetCap(lua_State *L) {
		if (!_lg_typecheck_base_SetCap(L)) {
			luaL_error(L, "luna typecheck failed in void wxPen::base_SetCap(wxPenCap capStyle) function, expected prototype:\nvoid wxPen::base_SetCap(wxPenCap capStyle)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxPenCap capStyle=(wxPenCap)lua_tointeger(L,2);

		wxPen* self=Luna< wxObject >::checkSubType< wxPen >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPen::base_SetCap(wxPenCap). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPen::SetCap(capStyle);

		return 0;
	}

	// void wxPen::base_SetColour(wxColour & colour)
	static int _bind_base_SetColour_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_SetColour_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxPen::base_SetColour(wxColour & colour) function, expected prototype:\nvoid wxPen::base_SetColour(wxColour & colour)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxColour* colour_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,2));
		if( !colour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colour in wxPen::base_SetColour function");
		}
		wxColour & colour=*colour_ptr;

		wxPen* self=Luna< wxObject >::checkSubType< wxPen >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPen::base_SetColour(wxColour &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPen::SetColour(colour);

		return 0;
	}

	// void wxPen::base_SetColour(unsigned char red, unsigned char green, unsigned char blue)
	static int _bind_base_SetColour_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_SetColour_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxPen::base_SetColour(unsigned char red, unsigned char green, unsigned char blue) function, expected prototype:\nvoid wxPen::base_SetColour(unsigned char red, unsigned char green, unsigned char blue)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char red = (unsigned char)(lua_tointeger(L,2));
		unsigned char green = (unsigned char)(lua_tointeger(L,3));
		unsigned char blue = (unsigned char)(lua_tointeger(L,4));

		wxPen* self=Luna< wxObject >::checkSubType< wxPen >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPen::base_SetColour(unsigned char, unsigned char, unsigned char). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPen::SetColour(red, green, blue);

		return 0;
	}

	// Overload binder for wxPen::base_SetColour
	static int _bind_base_SetColour(lua_State *L) {
		if (_lg_typecheck_base_SetColour_overload_1(L)) return _bind_base_SetColour_overload_1(L);
		if (_lg_typecheck_base_SetColour_overload_2(L)) return _bind_base_SetColour_overload_2(L);

		luaL_error(L, "error in function base_SetColour, cannot match any of the overloads for function base_SetColour:\n  base_SetColour(wxColour &)\n  base_SetColour(unsigned char, unsigned char, unsigned char)\n");
		return 0;
	}

	// void wxPen::base_SetJoin(wxPenJoin join_style)
	static int _bind_base_SetJoin(lua_State *L) {
		if (!_lg_typecheck_base_SetJoin(L)) {
			luaL_error(L, "luna typecheck failed in void wxPen::base_SetJoin(wxPenJoin join_style) function, expected prototype:\nvoid wxPen::base_SetJoin(wxPenJoin join_style)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxPenJoin join_style=(wxPenJoin)lua_tointeger(L,2);

		wxPen* self=Luna< wxObject >::checkSubType< wxPen >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPen::base_SetJoin(wxPenJoin). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPen::SetJoin(join_style);

		return 0;
	}

	// void wxPen::base_SetStipple(const wxBitmap & stipple)
	static int _bind_base_SetStipple(lua_State *L) {
		if (!_lg_typecheck_base_SetStipple(L)) {
			luaL_error(L, "luna typecheck failed in void wxPen::base_SetStipple(const wxBitmap & stipple) function, expected prototype:\nvoid wxPen::base_SetStipple(const wxBitmap & stipple)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxBitmap* stipple_ptr=(Luna< wxObject >::checkSubType< wxBitmap >(L,2));
		if( !stipple_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg stipple in wxPen::base_SetStipple function");
		}
		const wxBitmap & stipple=*stipple_ptr;

		wxPen* self=Luna< wxObject >::checkSubType< wxPen >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPen::base_SetStipple(const wxBitmap &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPen::SetStipple(stipple);

		return 0;
	}

	// void wxPen::base_SetStyle(wxPenStyle style)
	static int _bind_base_SetStyle(lua_State *L) {
		if (!_lg_typecheck_base_SetStyle(L)) {
			luaL_error(L, "luna typecheck failed in void wxPen::base_SetStyle(wxPenStyle style) function, expected prototype:\nvoid wxPen::base_SetStyle(wxPenStyle style)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxPenStyle style=(wxPenStyle)lua_tointeger(L,2);

		wxPen* self=Luna< wxObject >::checkSubType< wxPen >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPen::base_SetStyle(wxPenStyle). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPen::SetStyle(style);

		return 0;
	}

	// void wxPen::base_SetWidth(int width)
	static int _bind_base_SetWidth(lua_State *L) {
		if (!_lg_typecheck_base_SetWidth(L)) {
			luaL_error(L, "luna typecheck failed in void wxPen::base_SetWidth(int width) function, expected prototype:\nvoid wxPen::base_SetWidth(int width)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int width=(int)lua_tointeger(L,2);

		wxPen* self=Luna< wxObject >::checkSubType< wxPen >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPen::base_SetWidth(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPen::SetWidth(width);

		return 0;
	}


	// Operator binds:
	// bool wxPen::operator!=(const wxPen & pen) const
	static int _bind_op_neq(lua_State *L) {
		if (!_lg_typecheck_op_neq(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPen::operator!=(const wxPen & pen) const function, expected prototype:\nbool wxPen::operator!=(const wxPen & pen) const\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPen* pen_ptr=(Luna< wxObject >::checkSubType< wxPen >(L,2));
		if( !pen_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pen in wxPen::operator!= function");
		}
		const wxPen & pen=*pen_ptr;

		wxPen* self=Luna< wxObject >::checkSubType< wxPen >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPen::operator!=(const wxPen &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator!=(pen);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxPen & wxPen::operator=(const wxPen & pen)
	static int _bind_op_assign(lua_State *L) {
		if (!_lg_typecheck_op_assign(L)) {
			luaL_error(L, "luna typecheck failed in wxPen & wxPen::operator=(const wxPen & pen) function, expected prototype:\nwxPen & wxPen::operator=(const wxPen & pen)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPen* pen_ptr=(Luna< wxObject >::checkSubType< wxPen >(L,2));
		if( !pen_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pen in wxPen::operator= function");
		}
		const wxPen & pen=*pen_ptr;

		wxPen* self=Luna< wxObject >::checkSubType< wxPen >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPen & wxPen::operator=(const wxPen &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxPen* lret = &self->operator=(pen);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPen >::push(L,lret,false);

		return 1;
	}

	// bool wxPen::operator==(const wxPen & pen) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPen::operator==(const wxPen & pen) const function, expected prototype:\nbool wxPen::operator==(const wxPen & pen) const\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPen* pen_ptr=(Luna< wxObject >::checkSubType< wxPen >(L,2));
		if( !pen_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pen in wxPen::operator== function");
		}
		const wxPen & pen=*pen_ptr;

		wxPen* self=Luna< wxObject >::checkSubType< wxPen >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPen::operator==(const wxPen &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator==(pen);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

wxPen* LunaTraits< wxPen >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxPen::_bind_ctor(L);
}

void LunaTraits< wxPen >::_bind_dtor(wxPen* obj) {
	delete obj;
}

const char LunaTraits< wxPen >::className[] = "wxPen";
const char LunaTraits< wxPen >::fullName[] = "wxPen";
const char LunaTraits< wxPen >::moduleName[] = "wx";
const char* LunaTraits< wxPen >::parents[] = {"wx.wxGDIObject", 0};
const int LunaTraits< wxPen >::hash = 13554035;
const int LunaTraits< wxPen >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxPen >::methods[] = {
	{"GetCap", &luna_wrapper_wxPen::_bind_GetCap},
	{"GetColour", &luna_wrapper_wxPen::_bind_GetColour},
	{"GetJoin", &luna_wrapper_wxPen::_bind_GetJoin},
	{"GetStipple", &luna_wrapper_wxPen::_bind_GetStipple},
	{"GetStyle", &luna_wrapper_wxPen::_bind_GetStyle},
	{"GetWidth", &luna_wrapper_wxPen::_bind_GetWidth},
	{"IsOk", &luna_wrapper_wxPen::_bind_IsOk},
	{"IsNonTransparent", &luna_wrapper_wxPen::_bind_IsNonTransparent},
	{"IsTransparent", &luna_wrapper_wxPen::_bind_IsTransparent},
	{"SetCap", &luna_wrapper_wxPen::_bind_SetCap},
	{"SetColour", &luna_wrapper_wxPen::_bind_SetColour},
	{"SetJoin", &luna_wrapper_wxPen::_bind_SetJoin},
	{"SetStipple", &luna_wrapper_wxPen::_bind_SetStipple},
	{"SetStyle", &luna_wrapper_wxPen::_bind_SetStyle},
	{"SetWidth", &luna_wrapper_wxPen::_bind_SetWidth},
	{"base_GetClassInfo", &luna_wrapper_wxPen::_bind_base_GetClassInfo},
	{"base_GetCap", &luna_wrapper_wxPen::_bind_base_GetCap},
	{"base_GetColour", &luna_wrapper_wxPen::_bind_base_GetColour},
	{"base_GetJoin", &luna_wrapper_wxPen::_bind_base_GetJoin},
	{"base_GetStipple", &luna_wrapper_wxPen::_bind_base_GetStipple},
	{"base_GetStyle", &luna_wrapper_wxPen::_bind_base_GetStyle},
	{"base_GetWidth", &luna_wrapper_wxPen::_bind_base_GetWidth},
	{"base_IsOk", &luna_wrapper_wxPen::_bind_base_IsOk},
	{"base_SetCap", &luna_wrapper_wxPen::_bind_base_SetCap},
	{"base_SetColour", &luna_wrapper_wxPen::_bind_base_SetColour},
	{"base_SetJoin", &luna_wrapper_wxPen::_bind_base_SetJoin},
	{"base_SetStipple", &luna_wrapper_wxPen::_bind_base_SetStipple},
	{"base_SetStyle", &luna_wrapper_wxPen::_bind_base_SetStyle},
	{"base_SetWidth", &luna_wrapper_wxPen::_bind_base_SetWidth},
	{"op_neq", &luna_wrapper_wxPen::_bind_op_neq},
	{"op_assign", &luna_wrapper_wxPen::_bind_op_assign},
	{"__eq", &luna_wrapper_wxPen::_bind___eq},
	{"fromVoid", &luna_wrapper_wxPen::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxPen::_bind_asVoid},
	{"getTable", &luna_wrapper_wxPen::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxPen >::converters[] = {
	{"wxObject", &luna_wrapper_wxPen::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxPen >::enumValues[] = {
	{0,0}
};



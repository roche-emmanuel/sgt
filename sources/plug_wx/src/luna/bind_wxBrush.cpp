#include <plug_common.h>

#include <luna/wrappers/wrapper_wxBrush.h>

class luna_wrapper_wxBrush {
public:
	typedef Luna< wxBrush > luna_t;

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

		wxBrush* self= (wxBrush*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxBrush >::push(L,self,false);
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
		//wxBrush* ptr= dynamic_cast< wxBrush* >(Luna< wxObject >::check(L,1));
		wxBrush* ptr= luna_caster< wxObject, wxBrush >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxBrush >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxColour >(L,1))) ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxBitmap >(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxBrush >(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxColour >(L,2))) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_7(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxBitmap >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_8(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxBrush >(L,2))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetColour(lua_State *L) {
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

	inline static bool _lg_typecheck_IsHatch(lua_State *L) {
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

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetColour(lua_State *L) {
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

	inline static bool _lg_typecheck_base_IsHatch(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_IsOk(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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


	// Operator checkers:
	// (found 2 valid operators)
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


	// Constructor binds:
	// wxBrush::wxBrush()
	static wxBrush* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxBrush::wxBrush() function, expected prototype:\nwxBrush::wxBrush()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxBrush();
	}

	// wxBrush::wxBrush(const wxColour & colour, wxBrushStyle style = ::wxBRUSHSTYLE_SOLID)
	static wxBrush* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxBrush::wxBrush(const wxColour & colour, wxBrushStyle style = ::wxBRUSHSTYLE_SOLID) function, expected prototype:\nwxBrush::wxBrush(const wxColour & colour, wxBrushStyle style = ::wxBRUSHSTYLE_SOLID)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxColour* colour_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,1));
		if( !colour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colour in wxBrush::wxBrush function");
		}
		const wxColour & colour=*colour_ptr;
		wxBrushStyle style=luatop>1 ? (wxBrushStyle)lua_tointeger(L,2) : (wxBrushStyle)::wxBRUSHSTYLE_SOLID;

		return new wxBrush(colour, style);
	}

	// wxBrush::wxBrush(const wxBitmap & stippleBitmap)
	static wxBrush* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in wxBrush::wxBrush(const wxBitmap & stippleBitmap) function, expected prototype:\nwxBrush::wxBrush(const wxBitmap & stippleBitmap)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxBitmap* stippleBitmap_ptr=(Luna< wxObject >::checkSubType< wxBitmap >(L,1));
		if( !stippleBitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg stippleBitmap in wxBrush::wxBrush function");
		}
		const wxBitmap & stippleBitmap=*stippleBitmap_ptr;

		return new wxBrush(stippleBitmap);
	}

	// wxBrush::wxBrush(const wxBrush & brush)
	static wxBrush* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in wxBrush::wxBrush(const wxBrush & brush) function, expected prototype:\nwxBrush::wxBrush(const wxBrush & brush)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxBrush* brush_ptr=(Luna< wxObject >::checkSubType< wxBrush >(L,1));
		if( !brush_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg brush in wxBrush::wxBrush function");
		}
		const wxBrush & brush=*brush_ptr;

		return new wxBrush(brush);
	}

	// wxBrush::wxBrush(lua_Table * data)
	static wxBrush* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in wxBrush::wxBrush(lua_Table * data) function, expected prototype:\nwxBrush::wxBrush(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxBrush(L,NULL);
	}

	// wxBrush::wxBrush(lua_Table * data, const wxColour & colour, wxBrushStyle style = ::wxBRUSHSTYLE_SOLID)
	static wxBrush* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in wxBrush::wxBrush(lua_Table * data, const wxColour & colour, wxBrushStyle style = ::wxBRUSHSTYLE_SOLID) function, expected prototype:\nwxBrush::wxBrush(lua_Table * data, const wxColour & colour, wxBrushStyle style = ::wxBRUSHSTYLE_SOLID)\nClass arguments details:\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxColour* colour_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,2));
		if( !colour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colour in wxBrush::wxBrush function");
		}
		const wxColour & colour=*colour_ptr;
		wxBrushStyle style=luatop>2 ? (wxBrushStyle)lua_tointeger(L,3) : (wxBrushStyle)::wxBRUSHSTYLE_SOLID;

		return new wrapper_wxBrush(L,NULL, colour, style);
	}

	// wxBrush::wxBrush(lua_Table * data, const wxBitmap & stippleBitmap)
	static wxBrush* _bind_ctor_overload_7(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_7(L)) {
			luaL_error(L, "luna typecheck failed in wxBrush::wxBrush(lua_Table * data, const wxBitmap & stippleBitmap) function, expected prototype:\nwxBrush::wxBrush(lua_Table * data, const wxBitmap & stippleBitmap)\nClass arguments details:\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxBitmap* stippleBitmap_ptr=(Luna< wxObject >::checkSubType< wxBitmap >(L,2));
		if( !stippleBitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg stippleBitmap in wxBrush::wxBrush function");
		}
		const wxBitmap & stippleBitmap=*stippleBitmap_ptr;

		return new wrapper_wxBrush(L,NULL, stippleBitmap);
	}

	// wxBrush::wxBrush(lua_Table * data, const wxBrush & brush)
	static wxBrush* _bind_ctor_overload_8(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_8(L)) {
			luaL_error(L, "luna typecheck failed in wxBrush::wxBrush(lua_Table * data, const wxBrush & brush) function, expected prototype:\nwxBrush::wxBrush(lua_Table * data, const wxBrush & brush)\nClass arguments details:\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxBrush* brush_ptr=(Luna< wxObject >::checkSubType< wxBrush >(L,2));
		if( !brush_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg brush in wxBrush::wxBrush function");
		}
		const wxBrush & brush=*brush_ptr;

		return new wrapper_wxBrush(L,NULL, brush);
	}

	// Overload binder for wxBrush::wxBrush
	static wxBrush* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);
		if (_lg_typecheck_ctor_overload_7(L)) return _bind_ctor_overload_7(L);
		if (_lg_typecheck_ctor_overload_8(L)) return _bind_ctor_overload_8(L);

		luaL_error(L, "error in function wxBrush, cannot match any of the overloads for function wxBrush:\n  wxBrush()\n  wxBrush(const wxColour &, wxBrushStyle)\n  wxBrush(const wxBitmap &)\n  wxBrush(const wxBrush &)\n  wxBrush(lua_Table *)\n  wxBrush(lua_Table *, const wxColour &, wxBrushStyle)\n  wxBrush(lua_Table *, const wxBitmap &)\n  wxBrush(lua_Table *, const wxBrush &)\n");
		return NULL;
	}


	// Function binds:
	// wxColour wxBrush::GetColour() const
	static int _bind_GetColour(lua_State *L) {
		if (!_lg_typecheck_GetColour(L)) {
			luaL_error(L, "luna typecheck failed in wxColour wxBrush::GetColour() const function, expected prototype:\nwxColour wxBrush::GetColour() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBrush* self=Luna< wxObject >::checkSubType< wxBrush >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxColour wxBrush::GetColour() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxColour stack_lret = self->GetColour();
		wxColour* lret = new wxColour(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,true);

		return 1;
	}

	// wxBitmap * wxBrush::GetStipple() const
	static int _bind_GetStipple(lua_State *L) {
		if (!_lg_typecheck_GetStipple(L)) {
			luaL_error(L, "luna typecheck failed in wxBitmap * wxBrush::GetStipple() const function, expected prototype:\nwxBitmap * wxBrush::GetStipple() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBrush* self=Luna< wxObject >::checkSubType< wxBrush >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxBitmap * wxBrush::GetStipple() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxBitmap * lret = self->GetStipple();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxBitmap >::push(L,lret,false);

		return 1;
	}

	// wxBrushStyle wxBrush::GetStyle() const
	static int _bind_GetStyle(lua_State *L) {
		if (!_lg_typecheck_GetStyle(L)) {
			luaL_error(L, "luna typecheck failed in wxBrushStyle wxBrush::GetStyle() const function, expected prototype:\nwxBrushStyle wxBrush::GetStyle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBrush* self=Luna< wxObject >::checkSubType< wxBrush >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxBrushStyle wxBrush::GetStyle() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxBrushStyle lret = self->GetStyle();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxBrush::IsHatch() const
	static int _bind_IsHatch(lua_State *L) {
		if (!_lg_typecheck_IsHatch(L)) {
			luaL_error(L, "luna typecheck failed in bool wxBrush::IsHatch() const function, expected prototype:\nbool wxBrush::IsHatch() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBrush* self=Luna< wxObject >::checkSubType< wxBrush >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxBrush::IsHatch() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsHatch();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxBrush::IsOk() const
	static int _bind_IsOk(lua_State *L) {
		if (!_lg_typecheck_IsOk(L)) {
			luaL_error(L, "luna typecheck failed in bool wxBrush::IsOk() const function, expected prototype:\nbool wxBrush::IsOk() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBrush* self=Luna< wxObject >::checkSubType< wxBrush >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxBrush::IsOk() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsOk();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxBrush::IsNonTransparent() const
	static int _bind_IsNonTransparent(lua_State *L) {
		if (!_lg_typecheck_IsNonTransparent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxBrush::IsNonTransparent() const function, expected prototype:\nbool wxBrush::IsNonTransparent() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBrush* self=Luna< wxObject >::checkSubType< wxBrush >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxBrush::IsNonTransparent() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsNonTransparent();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxBrush::IsTransparent() const
	static int _bind_IsTransparent(lua_State *L) {
		if (!_lg_typecheck_IsTransparent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxBrush::IsTransparent() const function, expected prototype:\nbool wxBrush::IsTransparent() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBrush* self=Luna< wxObject >::checkSubType< wxBrush >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxBrush::IsTransparent() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsTransparent();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxBrush::SetColour(const wxColour & colour)
	static int _bind_SetColour_overload_1(lua_State *L) {
		if (!_lg_typecheck_SetColour_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxBrush::SetColour(const wxColour & colour) function, expected prototype:\nvoid wxBrush::SetColour(const wxColour & colour)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxColour* colour_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,2));
		if( !colour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colour in wxBrush::SetColour function");
		}
		const wxColour & colour=*colour_ptr;

		wxBrush* self=Luna< wxObject >::checkSubType< wxBrush >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxBrush::SetColour(const wxColour &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetColour(colour);

		return 0;
	}

	// void wxBrush::SetColour(unsigned char red, unsigned char green, unsigned char blue)
	static int _bind_SetColour_overload_2(lua_State *L) {
		if (!_lg_typecheck_SetColour_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxBrush::SetColour(unsigned char red, unsigned char green, unsigned char blue) function, expected prototype:\nvoid wxBrush::SetColour(unsigned char red, unsigned char green, unsigned char blue)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char red = (unsigned char)(lua_tointeger(L,2));
		unsigned char green = (unsigned char)(lua_tointeger(L,3));
		unsigned char blue = (unsigned char)(lua_tointeger(L,4));

		wxBrush* self=Luna< wxObject >::checkSubType< wxBrush >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxBrush::SetColour(unsigned char, unsigned char, unsigned char). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetColour(red, green, blue);

		return 0;
	}

	// Overload binder for wxBrush::SetColour
	static int _bind_SetColour(lua_State *L) {
		if (_lg_typecheck_SetColour_overload_1(L)) return _bind_SetColour_overload_1(L);
		if (_lg_typecheck_SetColour_overload_2(L)) return _bind_SetColour_overload_2(L);

		luaL_error(L, "error in function SetColour, cannot match any of the overloads for function SetColour:\n  SetColour(const wxColour &)\n  SetColour(unsigned char, unsigned char, unsigned char)\n");
		return 0;
	}

	// void wxBrush::SetStipple(const wxBitmap & bitmap)
	static int _bind_SetStipple(lua_State *L) {
		if (!_lg_typecheck_SetStipple(L)) {
			luaL_error(L, "luna typecheck failed in void wxBrush::SetStipple(const wxBitmap & bitmap) function, expected prototype:\nvoid wxBrush::SetStipple(const wxBitmap & bitmap)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxBitmap* bitmap_ptr=(Luna< wxObject >::checkSubType< wxBitmap >(L,2));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxBrush::SetStipple function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;

		wxBrush* self=Luna< wxObject >::checkSubType< wxBrush >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxBrush::SetStipple(const wxBitmap &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetStipple(bitmap);

		return 0;
	}

	// void wxBrush::SetStyle(wxBrushStyle style)
	static int _bind_SetStyle(lua_State *L) {
		if (!_lg_typecheck_SetStyle(L)) {
			luaL_error(L, "luna typecheck failed in void wxBrush::SetStyle(wxBrushStyle style) function, expected prototype:\nvoid wxBrush::SetStyle(wxBrushStyle style)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxBrushStyle style=(wxBrushStyle)lua_tointeger(L,2);

		wxBrush* self=Luna< wxObject >::checkSubType< wxBrush >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxBrush::SetStyle(wxBrushStyle). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetStyle(style);

		return 0;
	}

	// wxClassInfo * wxBrush::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxBrush::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxBrush::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBrush* self=Luna< wxObject >::checkSubType< wxBrush >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxBrush::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxBrush::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxColour wxBrush::base_GetColour() const
	static int _bind_base_GetColour(lua_State *L) {
		if (!_lg_typecheck_base_GetColour(L)) {
			luaL_error(L, "luna typecheck failed in wxColour wxBrush::base_GetColour() const function, expected prototype:\nwxColour wxBrush::base_GetColour() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBrush* self=Luna< wxObject >::checkSubType< wxBrush >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxColour wxBrush::base_GetColour() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxColour stack_lret = self->wxBrush::GetColour();
		wxColour* lret = new wxColour(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,true);

		return 1;
	}

	// wxBitmap * wxBrush::base_GetStipple() const
	static int _bind_base_GetStipple(lua_State *L) {
		if (!_lg_typecheck_base_GetStipple(L)) {
			luaL_error(L, "luna typecheck failed in wxBitmap * wxBrush::base_GetStipple() const function, expected prototype:\nwxBitmap * wxBrush::base_GetStipple() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBrush* self=Luna< wxObject >::checkSubType< wxBrush >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxBitmap * wxBrush::base_GetStipple() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxBitmap * lret = self->wxBrush::GetStipple();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxBitmap >::push(L,lret,false);

		return 1;
	}

	// wxBrushStyle wxBrush::base_GetStyle() const
	static int _bind_base_GetStyle(lua_State *L) {
		if (!_lg_typecheck_base_GetStyle(L)) {
			luaL_error(L, "luna typecheck failed in wxBrushStyle wxBrush::base_GetStyle() const function, expected prototype:\nwxBrushStyle wxBrush::base_GetStyle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBrush* self=Luna< wxObject >::checkSubType< wxBrush >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxBrushStyle wxBrush::base_GetStyle() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxBrushStyle lret = self->wxBrush::GetStyle();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxBrush::base_IsHatch() const
	static int _bind_base_IsHatch(lua_State *L) {
		if (!_lg_typecheck_base_IsHatch(L)) {
			luaL_error(L, "luna typecheck failed in bool wxBrush::base_IsHatch() const function, expected prototype:\nbool wxBrush::base_IsHatch() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBrush* self=Luna< wxObject >::checkSubType< wxBrush >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxBrush::base_IsHatch() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxBrush::IsHatch();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxBrush::base_IsOk() const
	static int _bind_base_IsOk(lua_State *L) {
		if (!_lg_typecheck_base_IsOk(L)) {
			luaL_error(L, "luna typecheck failed in bool wxBrush::base_IsOk() const function, expected prototype:\nbool wxBrush::base_IsOk() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxBrush* self=Luna< wxObject >::checkSubType< wxBrush >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxBrush::base_IsOk() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxBrush::IsOk();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxBrush::base_SetColour(const wxColour & colour)
	static int _bind_base_SetColour_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_SetColour_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxBrush::base_SetColour(const wxColour & colour) function, expected prototype:\nvoid wxBrush::base_SetColour(const wxColour & colour)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxColour* colour_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,2));
		if( !colour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colour in wxBrush::base_SetColour function");
		}
		const wxColour & colour=*colour_ptr;

		wxBrush* self=Luna< wxObject >::checkSubType< wxBrush >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxBrush::base_SetColour(const wxColour &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxBrush::SetColour(colour);

		return 0;
	}

	// void wxBrush::base_SetColour(unsigned char red, unsigned char green, unsigned char blue)
	static int _bind_base_SetColour_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_SetColour_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxBrush::base_SetColour(unsigned char red, unsigned char green, unsigned char blue) function, expected prototype:\nvoid wxBrush::base_SetColour(unsigned char red, unsigned char green, unsigned char blue)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char red = (unsigned char)(lua_tointeger(L,2));
		unsigned char green = (unsigned char)(lua_tointeger(L,3));
		unsigned char blue = (unsigned char)(lua_tointeger(L,4));

		wxBrush* self=Luna< wxObject >::checkSubType< wxBrush >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxBrush::base_SetColour(unsigned char, unsigned char, unsigned char). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxBrush::SetColour(red, green, blue);

		return 0;
	}

	// Overload binder for wxBrush::base_SetColour
	static int _bind_base_SetColour(lua_State *L) {
		if (_lg_typecheck_base_SetColour_overload_1(L)) return _bind_base_SetColour_overload_1(L);
		if (_lg_typecheck_base_SetColour_overload_2(L)) return _bind_base_SetColour_overload_2(L);

		luaL_error(L, "error in function base_SetColour, cannot match any of the overloads for function base_SetColour:\n  base_SetColour(const wxColour &)\n  base_SetColour(unsigned char, unsigned char, unsigned char)\n");
		return 0;
	}

	// void wxBrush::base_SetStipple(const wxBitmap & bitmap)
	static int _bind_base_SetStipple(lua_State *L) {
		if (!_lg_typecheck_base_SetStipple(L)) {
			luaL_error(L, "luna typecheck failed in void wxBrush::base_SetStipple(const wxBitmap & bitmap) function, expected prototype:\nvoid wxBrush::base_SetStipple(const wxBitmap & bitmap)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxBitmap* bitmap_ptr=(Luna< wxObject >::checkSubType< wxBitmap >(L,2));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxBrush::base_SetStipple function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;

		wxBrush* self=Luna< wxObject >::checkSubType< wxBrush >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxBrush::base_SetStipple(const wxBitmap &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxBrush::SetStipple(bitmap);

		return 0;
	}

	// void wxBrush::base_SetStyle(wxBrushStyle style)
	static int _bind_base_SetStyle(lua_State *L) {
		if (!_lg_typecheck_base_SetStyle(L)) {
			luaL_error(L, "luna typecheck failed in void wxBrush::base_SetStyle(wxBrushStyle style) function, expected prototype:\nvoid wxBrush::base_SetStyle(wxBrushStyle style)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxBrushStyle style=(wxBrushStyle)lua_tointeger(L,2);

		wxBrush* self=Luna< wxObject >::checkSubType< wxBrush >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxBrush::base_SetStyle(wxBrushStyle). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxBrush::SetStyle(style);

		return 0;
	}


	// Operator binds:
	// bool wxBrush::operator!=(const wxBrush & brush) const
	static int _bind_op_neq(lua_State *L) {
		if (!_lg_typecheck_op_neq(L)) {
			luaL_error(L, "luna typecheck failed in bool wxBrush::operator!=(const wxBrush & brush) const function, expected prototype:\nbool wxBrush::operator!=(const wxBrush & brush) const\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxBrush* brush_ptr=(Luna< wxObject >::checkSubType< wxBrush >(L,2));
		if( !brush_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg brush in wxBrush::operator!= function");
		}
		const wxBrush & brush=*brush_ptr;

		wxBrush* self=Luna< wxObject >::checkSubType< wxBrush >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxBrush::operator!=(const wxBrush &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator!=(brush);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxBrush::operator==(const wxBrush & brush) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in bool wxBrush::operator==(const wxBrush & brush) const function, expected prototype:\nbool wxBrush::operator==(const wxBrush & brush) const\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxBrush* brush_ptr=(Luna< wxObject >::checkSubType< wxBrush >(L,2));
		if( !brush_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg brush in wxBrush::operator== function");
		}
		const wxBrush & brush=*brush_ptr;

		wxBrush* self=Luna< wxObject >::checkSubType< wxBrush >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxBrush::operator==(const wxBrush &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator==(brush);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

wxBrush* LunaTraits< wxBrush >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxBrush::_bind_ctor(L);
}

void LunaTraits< wxBrush >::_bind_dtor(wxBrush* obj) {
	delete obj;
}

const char LunaTraits< wxBrush >::className[] = "wxBrush";
const char LunaTraits< wxBrush >::fullName[] = "wxBrush";
const char LunaTraits< wxBrush >::moduleName[] = "wx";
const char* LunaTraits< wxBrush >::parents[] = {"wx.wxGDIObject", 0};
const int LunaTraits< wxBrush >::hash = 12895234;
const int LunaTraits< wxBrush >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxBrush >::methods[] = {
	{"GetColour", &luna_wrapper_wxBrush::_bind_GetColour},
	{"GetStipple", &luna_wrapper_wxBrush::_bind_GetStipple},
	{"GetStyle", &luna_wrapper_wxBrush::_bind_GetStyle},
	{"IsHatch", &luna_wrapper_wxBrush::_bind_IsHatch},
	{"IsOk", &luna_wrapper_wxBrush::_bind_IsOk},
	{"IsNonTransparent", &luna_wrapper_wxBrush::_bind_IsNonTransparent},
	{"IsTransparent", &luna_wrapper_wxBrush::_bind_IsTransparent},
	{"SetColour", &luna_wrapper_wxBrush::_bind_SetColour},
	{"SetStipple", &luna_wrapper_wxBrush::_bind_SetStipple},
	{"SetStyle", &luna_wrapper_wxBrush::_bind_SetStyle},
	{"base_GetClassInfo", &luna_wrapper_wxBrush::_bind_base_GetClassInfo},
	{"base_GetColour", &luna_wrapper_wxBrush::_bind_base_GetColour},
	{"base_GetStipple", &luna_wrapper_wxBrush::_bind_base_GetStipple},
	{"base_GetStyle", &luna_wrapper_wxBrush::_bind_base_GetStyle},
	{"base_IsHatch", &luna_wrapper_wxBrush::_bind_base_IsHatch},
	{"base_IsOk", &luna_wrapper_wxBrush::_bind_base_IsOk},
	{"base_SetColour", &luna_wrapper_wxBrush::_bind_base_SetColour},
	{"base_SetStipple", &luna_wrapper_wxBrush::_bind_base_SetStipple},
	{"base_SetStyle", &luna_wrapper_wxBrush::_bind_base_SetStyle},
	{"op_neq", &luna_wrapper_wxBrush::_bind_op_neq},
	{"__eq", &luna_wrapper_wxBrush::_bind___eq},
	{"fromVoid", &luna_wrapper_wxBrush::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxBrush::_bind_asVoid},
	{"getTable", &luna_wrapper_wxBrush::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxBrush >::converters[] = {
	{"wxObject", &luna_wrapper_wxBrush::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxBrush >::enumValues[] = {
	{0,0}
};



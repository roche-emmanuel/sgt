#include <plug_common.h>

class luna_wrapper_wxTextAttrBorder {
public:
	typedef Luna< wxTextAttrBorder > luna_t;

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxTextAttrBorder* self= (wxTextAttrBorder*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxTextAttrBorder >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,59699915) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxTextAttrBorder >::check(L,1));
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

		wxTextAttrBorder* self=(Luna< wxTextAttrBorder >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxTextAttrBorder");
		
		return luna_dynamicCast(L,converters,"wxTextAttrBorder",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_EqPartial(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,59699915) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Apply(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,59699915) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,59699915)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RemoveStyle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,59699915) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CollectCommonAttributes(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,59699915) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,59699915) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,59699915) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetStyle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetStyle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetColour_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetColour_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxColour >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetColourLong(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetColour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetWidth_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetWidth_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetWidth_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25580455) ) return false;
		if( (!(Luna< wxTextAttrDimension >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetWidth_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_HasStyle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasColour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsValid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_MakeValid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFlags(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetFlags(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddFlag(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RemoveFlag(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getBorderStyle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getBorderColour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getBorderWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFlags(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setBorderStyle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setBorderColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setBorderWidth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25580455) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFlags(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,59699915) ) return false;
		return true;
	}


	// Constructor binds:
	// wxTextAttrBorder::wxTextAttrBorder()
	static wxTextAttrBorder* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxTextAttrBorder::wxTextAttrBorder() function, expected prototype:\nwxTextAttrBorder::wxTextAttrBorder()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxTextAttrBorder();
	}


	// Function binds:
	// void wxTextAttrBorder::Reset()
	static int _bind_Reset(lua_State *L) {
		if (!_lg_typecheck_Reset(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextAttrBorder::Reset() function, expected prototype:\nvoid wxTextAttrBorder::Reset()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttrBorder* self=(Luna< wxTextAttrBorder >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextAttrBorder::Reset(). Got : '%s'\n%s",typeid(Luna< wxTextAttrBorder >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Reset();

		return 0;
	}

	// bool wxTextAttrBorder::EqPartial(const wxTextAttrBorder & border) const
	static int _bind_EqPartial(lua_State *L) {
		if (!_lg_typecheck_EqPartial(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextAttrBorder::EqPartial(const wxTextAttrBorder & border) const function, expected prototype:\nbool wxTextAttrBorder::EqPartial(const wxTextAttrBorder & border) const\nClass arguments details:\narg 1 ID = 59699915\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTextAttrBorder* border_ptr=(Luna< wxTextAttrBorder >::check(L,2));
		if( !border_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg border in wxTextAttrBorder::EqPartial function");
		}
		const wxTextAttrBorder & border=*border_ptr;

		wxTextAttrBorder* self=(Luna< wxTextAttrBorder >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextAttrBorder::EqPartial(const wxTextAttrBorder &) const. Got : '%s'\n%s",typeid(Luna< wxTextAttrBorder >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->EqPartial(border);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextAttrBorder::Apply(const wxTextAttrBorder & border, const wxTextAttrBorder * compareWith = NULL)
	static int _bind_Apply(lua_State *L) {
		if (!_lg_typecheck_Apply(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextAttrBorder::Apply(const wxTextAttrBorder & border, const wxTextAttrBorder * compareWith = NULL) function, expected prototype:\nbool wxTextAttrBorder::Apply(const wxTextAttrBorder & border, const wxTextAttrBorder * compareWith = NULL)\nClass arguments details:\narg 1 ID = 59699915\narg 2 ID = 59699915\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxTextAttrBorder* border_ptr=(Luna< wxTextAttrBorder >::check(L,2));
		if( !border_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg border in wxTextAttrBorder::Apply function");
		}
		const wxTextAttrBorder & border=*border_ptr;
		const wxTextAttrBorder* compareWith=luatop>2 ? (Luna< wxTextAttrBorder >::check(L,3)) : (const wxTextAttrBorder*)NULL;

		wxTextAttrBorder* self=(Luna< wxTextAttrBorder >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextAttrBorder::Apply(const wxTextAttrBorder &, const wxTextAttrBorder *). Got : '%s'\n%s",typeid(Luna< wxTextAttrBorder >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Apply(border, compareWith);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextAttrBorder::RemoveStyle(const wxTextAttrBorder & attr)
	static int _bind_RemoveStyle(lua_State *L) {
		if (!_lg_typecheck_RemoveStyle(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextAttrBorder::RemoveStyle(const wxTextAttrBorder & attr) function, expected prototype:\nbool wxTextAttrBorder::RemoveStyle(const wxTextAttrBorder & attr)\nClass arguments details:\narg 1 ID = 59699915\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTextAttrBorder* attr_ptr=(Luna< wxTextAttrBorder >::check(L,2));
		if( !attr_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg attr in wxTextAttrBorder::RemoveStyle function");
		}
		const wxTextAttrBorder & attr=*attr_ptr;

		wxTextAttrBorder* self=(Luna< wxTextAttrBorder >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextAttrBorder::RemoveStyle(const wxTextAttrBorder &). Got : '%s'\n%s",typeid(Luna< wxTextAttrBorder >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->RemoveStyle(attr);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxTextAttrBorder::CollectCommonAttributes(const wxTextAttrBorder & attr, wxTextAttrBorder & clashingAttr, wxTextAttrBorder & absentAttr)
	static int _bind_CollectCommonAttributes(lua_State *L) {
		if (!_lg_typecheck_CollectCommonAttributes(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextAttrBorder::CollectCommonAttributes(const wxTextAttrBorder & attr, wxTextAttrBorder & clashingAttr, wxTextAttrBorder & absentAttr) function, expected prototype:\nvoid wxTextAttrBorder::CollectCommonAttributes(const wxTextAttrBorder & attr, wxTextAttrBorder & clashingAttr, wxTextAttrBorder & absentAttr)\nClass arguments details:\narg 1 ID = 59699915\narg 2 ID = 59699915\narg 3 ID = 59699915\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTextAttrBorder* attr_ptr=(Luna< wxTextAttrBorder >::check(L,2));
		if( !attr_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg attr in wxTextAttrBorder::CollectCommonAttributes function");
		}
		const wxTextAttrBorder & attr=*attr_ptr;
		wxTextAttrBorder* clashingAttr_ptr=(Luna< wxTextAttrBorder >::check(L,3));
		if( !clashingAttr_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg clashingAttr in wxTextAttrBorder::CollectCommonAttributes function");
		}
		wxTextAttrBorder & clashingAttr=*clashingAttr_ptr;
		wxTextAttrBorder* absentAttr_ptr=(Luna< wxTextAttrBorder >::check(L,4));
		if( !absentAttr_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg absentAttr in wxTextAttrBorder::CollectCommonAttributes function");
		}
		wxTextAttrBorder & absentAttr=*absentAttr_ptr;

		wxTextAttrBorder* self=(Luna< wxTextAttrBorder >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextAttrBorder::CollectCommonAttributes(const wxTextAttrBorder &, wxTextAttrBorder &, wxTextAttrBorder &). Got : '%s'\n%s",typeid(Luna< wxTextAttrBorder >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->CollectCommonAttributes(attr, clashingAttr, absentAttr);

		return 0;
	}

	// void wxTextAttrBorder::SetStyle(int style)
	static int _bind_SetStyle(lua_State *L) {
		if (!_lg_typecheck_SetStyle(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextAttrBorder::SetStyle(int style) function, expected prototype:\nvoid wxTextAttrBorder::SetStyle(int style)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int style=(int)lua_tointeger(L,2);

		wxTextAttrBorder* self=(Luna< wxTextAttrBorder >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextAttrBorder::SetStyle(int). Got : '%s'\n%s",typeid(Luna< wxTextAttrBorder >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetStyle(style);

		return 0;
	}

	// int wxTextAttrBorder::GetStyle() const
	static int _bind_GetStyle(lua_State *L) {
		if (!_lg_typecheck_GetStyle(L)) {
			luaL_error(L, "luna typecheck failed in int wxTextAttrBorder::GetStyle() const function, expected prototype:\nint wxTextAttrBorder::GetStyle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttrBorder* self=(Luna< wxTextAttrBorder >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxTextAttrBorder::GetStyle() const. Got : '%s'\n%s",typeid(Luna< wxTextAttrBorder >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetStyle();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxTextAttrBorder::SetColour(unsigned long colour)
	static int _bind_SetColour_overload_1(lua_State *L) {
		if (!_lg_typecheck_SetColour_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextAttrBorder::SetColour(unsigned long colour) function, expected prototype:\nvoid wxTextAttrBorder::SetColour(unsigned long colour)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long colour=(unsigned long)lua_tonumber(L,2);

		wxTextAttrBorder* self=(Luna< wxTextAttrBorder >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextAttrBorder::SetColour(unsigned long). Got : '%s'\n%s",typeid(Luna< wxTextAttrBorder >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetColour(colour);

		return 0;
	}

	// void wxTextAttrBorder::SetColour(const wxColour & colour)
	static int _bind_SetColour_overload_2(lua_State *L) {
		if (!_lg_typecheck_SetColour_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextAttrBorder::SetColour(const wxColour & colour) function, expected prototype:\nvoid wxTextAttrBorder::SetColour(const wxColour & colour)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxColour* colour_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,2));
		if( !colour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colour in wxTextAttrBorder::SetColour function");
		}
		const wxColour & colour=*colour_ptr;

		wxTextAttrBorder* self=(Luna< wxTextAttrBorder >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextAttrBorder::SetColour(const wxColour &). Got : '%s'\n%s",typeid(Luna< wxTextAttrBorder >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetColour(colour);

		return 0;
	}

	// Overload binder for wxTextAttrBorder::SetColour
	static int _bind_SetColour(lua_State *L) {
		if (_lg_typecheck_SetColour_overload_1(L)) return _bind_SetColour_overload_1(L);
		if (_lg_typecheck_SetColour_overload_2(L)) return _bind_SetColour_overload_2(L);

		luaL_error(L, "error in function SetColour, cannot match any of the overloads for function SetColour:\n  SetColour(unsigned long)\n  SetColour(const wxColour &)\n");
		return 0;
	}

	// unsigned long wxTextAttrBorder::GetColourLong() const
	static int _bind_GetColourLong(lua_State *L) {
		if (!_lg_typecheck_GetColourLong(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long wxTextAttrBorder::GetColourLong() const function, expected prototype:\nunsigned long wxTextAttrBorder::GetColourLong() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttrBorder* self=(Luna< wxTextAttrBorder >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long wxTextAttrBorder::GetColourLong() const. Got : '%s'\n%s",typeid(Luna< wxTextAttrBorder >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->GetColourLong();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxColour wxTextAttrBorder::GetColour() const
	static int _bind_GetColour(lua_State *L) {
		if (!_lg_typecheck_GetColour(L)) {
			luaL_error(L, "luna typecheck failed in wxColour wxTextAttrBorder::GetColour() const function, expected prototype:\nwxColour wxTextAttrBorder::GetColour() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttrBorder* self=(Luna< wxTextAttrBorder >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxColour wxTextAttrBorder::GetColour() const. Got : '%s'\n%s",typeid(Luna< wxTextAttrBorder >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxColour stack_lret = self->GetColour();
		wxColour* lret = new wxColour(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,true);

		return 1;
	}

	// wxTextAttrDimension & wxTextAttrBorder::GetWidth()
	static int _bind_GetWidth_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetWidth_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxTextAttrDimension & wxTextAttrBorder::GetWidth() function, expected prototype:\nwxTextAttrDimension & wxTextAttrBorder::GetWidth()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttrBorder* self=(Luna< wxTextAttrBorder >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTextAttrDimension & wxTextAttrBorder::GetWidth(). Got : '%s'\n%s",typeid(Luna< wxTextAttrBorder >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxTextAttrDimension* lret = &self->GetWidth();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttrDimension >::push(L,lret,false);

		return 1;
	}

	// const wxTextAttrDimension & wxTextAttrBorder::GetWidth() const
	static int _bind_GetWidth_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetWidth_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const wxTextAttrDimension & wxTextAttrBorder::GetWidth() const function, expected prototype:\nconst wxTextAttrDimension & wxTextAttrBorder::GetWidth() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttrBorder* self=(Luna< wxTextAttrBorder >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxTextAttrDimension & wxTextAttrBorder::GetWidth() const. Got : '%s'\n%s",typeid(Luna< wxTextAttrBorder >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxTextAttrDimension* lret = &self->GetWidth();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttrDimension >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxTextAttrBorder::GetWidth
	static int _bind_GetWidth(lua_State *L) {
		if (_lg_typecheck_GetWidth_overload_1(L)) return _bind_GetWidth_overload_1(L);
		if (_lg_typecheck_GetWidth_overload_2(L)) return _bind_GetWidth_overload_2(L);

		luaL_error(L, "error in function GetWidth, cannot match any of the overloads for function GetWidth:\n  GetWidth()\n  GetWidth()\n");
		return 0;
	}

	// void wxTextAttrBorder::SetWidth(const wxTextAttrDimension & width)
	static int _bind_SetWidth_overload_1(lua_State *L) {
		if (!_lg_typecheck_SetWidth_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextAttrBorder::SetWidth(const wxTextAttrDimension & width) function, expected prototype:\nvoid wxTextAttrBorder::SetWidth(const wxTextAttrDimension & width)\nClass arguments details:\narg 1 ID = 25580455\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTextAttrDimension* width_ptr=(Luna< wxTextAttrDimension >::check(L,2));
		if( !width_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg width in wxTextAttrBorder::SetWidth function");
		}
		const wxTextAttrDimension & width=*width_ptr;

		wxTextAttrBorder* self=(Luna< wxTextAttrBorder >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextAttrBorder::SetWidth(const wxTextAttrDimension &). Got : '%s'\n%s",typeid(Luna< wxTextAttrBorder >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetWidth(width);

		return 0;
	}

	// void wxTextAttrBorder::SetWidth(int value, wxTextAttrUnits units = ::wxTEXT_ATTR_UNITS_TENTHS_MM)
	static int _bind_SetWidth_overload_2(lua_State *L) {
		if (!_lg_typecheck_SetWidth_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextAttrBorder::SetWidth(int value, wxTextAttrUnits units = ::wxTEXT_ATTR_UNITS_TENTHS_MM) function, expected prototype:\nvoid wxTextAttrBorder::SetWidth(int value, wxTextAttrUnits units = ::wxTEXT_ATTR_UNITS_TENTHS_MM)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int value=(int)lua_tointeger(L,2);
		wxTextAttrUnits units=luatop>2 ? (wxTextAttrUnits)lua_tointeger(L,3) : (wxTextAttrUnits)::wxTEXT_ATTR_UNITS_TENTHS_MM;

		wxTextAttrBorder* self=(Luna< wxTextAttrBorder >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextAttrBorder::SetWidth(int, wxTextAttrUnits). Got : '%s'\n%s",typeid(Luna< wxTextAttrBorder >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetWidth(value, units);

		return 0;
	}

	// Overload binder for wxTextAttrBorder::SetWidth
	static int _bind_SetWidth(lua_State *L) {
		if (_lg_typecheck_SetWidth_overload_1(L)) return _bind_SetWidth_overload_1(L);
		if (_lg_typecheck_SetWidth_overload_2(L)) return _bind_SetWidth_overload_2(L);

		luaL_error(L, "error in function SetWidth, cannot match any of the overloads for function SetWidth:\n  SetWidth(const wxTextAttrDimension &)\n  SetWidth(int, wxTextAttrUnits)\n");
		return 0;
	}

	// bool wxTextAttrBorder::HasStyle() const
	static int _bind_HasStyle(lua_State *L) {
		if (!_lg_typecheck_HasStyle(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextAttrBorder::HasStyle() const function, expected prototype:\nbool wxTextAttrBorder::HasStyle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttrBorder* self=(Luna< wxTextAttrBorder >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextAttrBorder::HasStyle() const. Got : '%s'\n%s",typeid(Luna< wxTextAttrBorder >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasStyle();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextAttrBorder::HasColour() const
	static int _bind_HasColour(lua_State *L) {
		if (!_lg_typecheck_HasColour(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextAttrBorder::HasColour() const function, expected prototype:\nbool wxTextAttrBorder::HasColour() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttrBorder* self=(Luna< wxTextAttrBorder >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextAttrBorder::HasColour() const. Got : '%s'\n%s",typeid(Luna< wxTextAttrBorder >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasColour();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextAttrBorder::HasWidth() const
	static int _bind_HasWidth(lua_State *L) {
		if (!_lg_typecheck_HasWidth(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextAttrBorder::HasWidth() const function, expected prototype:\nbool wxTextAttrBorder::HasWidth() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttrBorder* self=(Luna< wxTextAttrBorder >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextAttrBorder::HasWidth() const. Got : '%s'\n%s",typeid(Luna< wxTextAttrBorder >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasWidth();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextAttrBorder::IsValid() const
	static int _bind_IsValid(lua_State *L) {
		if (!_lg_typecheck_IsValid(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextAttrBorder::IsValid() const function, expected prototype:\nbool wxTextAttrBorder::IsValid() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttrBorder* self=(Luna< wxTextAttrBorder >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextAttrBorder::IsValid() const. Got : '%s'\n%s",typeid(Luna< wxTextAttrBorder >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsValid();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxTextAttrBorder::MakeValid()
	static int _bind_MakeValid(lua_State *L) {
		if (!_lg_typecheck_MakeValid(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextAttrBorder::MakeValid() function, expected prototype:\nvoid wxTextAttrBorder::MakeValid()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttrBorder* self=(Luna< wxTextAttrBorder >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextAttrBorder::MakeValid(). Got : '%s'\n%s",typeid(Luna< wxTextAttrBorder >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->MakeValid();

		return 0;
	}

	// int wxTextAttrBorder::GetFlags() const
	static int _bind_GetFlags(lua_State *L) {
		if (!_lg_typecheck_GetFlags(L)) {
			luaL_error(L, "luna typecheck failed in int wxTextAttrBorder::GetFlags() const function, expected prototype:\nint wxTextAttrBorder::GetFlags() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttrBorder* self=(Luna< wxTextAttrBorder >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxTextAttrBorder::GetFlags() const. Got : '%s'\n%s",typeid(Luna< wxTextAttrBorder >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetFlags();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxTextAttrBorder::SetFlags(int flags)
	static int _bind_SetFlags(lua_State *L) {
		if (!_lg_typecheck_SetFlags(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextAttrBorder::SetFlags(int flags) function, expected prototype:\nvoid wxTextAttrBorder::SetFlags(int flags)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int flags=(int)lua_tointeger(L,2);

		wxTextAttrBorder* self=(Luna< wxTextAttrBorder >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextAttrBorder::SetFlags(int). Got : '%s'\n%s",typeid(Luna< wxTextAttrBorder >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetFlags(flags);

		return 0;
	}

	// void wxTextAttrBorder::AddFlag(int flag)
	static int _bind_AddFlag(lua_State *L) {
		if (!_lg_typecheck_AddFlag(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextAttrBorder::AddFlag(int flag) function, expected prototype:\nvoid wxTextAttrBorder::AddFlag(int flag)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int flag=(int)lua_tointeger(L,2);

		wxTextAttrBorder* self=(Luna< wxTextAttrBorder >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextAttrBorder::AddFlag(int). Got : '%s'\n%s",typeid(Luna< wxTextAttrBorder >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AddFlag(flag);

		return 0;
	}

	// void wxTextAttrBorder::RemoveFlag(int flag)
	static int _bind_RemoveFlag(lua_State *L) {
		if (!_lg_typecheck_RemoveFlag(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextAttrBorder::RemoveFlag(int flag) function, expected prototype:\nvoid wxTextAttrBorder::RemoveFlag(int flag)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int flag=(int)lua_tointeger(L,2);

		wxTextAttrBorder* self=(Luna< wxTextAttrBorder >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextAttrBorder::RemoveFlag(int). Got : '%s'\n%s",typeid(Luna< wxTextAttrBorder >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RemoveFlag(flag);

		return 0;
	}

	// int wxTextAttrBorder::m_borderStyle()
	static int _bind_getBorderStyle(lua_State *L) {
		if (!_lg_typecheck_getBorderStyle(L)) {
			luaL_error(L, "luna typecheck failed in int wxTextAttrBorder::m_borderStyle() function, expected prototype:\nint wxTextAttrBorder::m_borderStyle()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttrBorder* self=(Luna< wxTextAttrBorder >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxTextAttrBorder::m_borderStyle(). Got : '%s'\n%s",typeid(Luna< wxTextAttrBorder >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->m_borderStyle;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned long wxTextAttrBorder::m_borderColour()
	static int _bind_getBorderColour(lua_State *L) {
		if (!_lg_typecheck_getBorderColour(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long wxTextAttrBorder::m_borderColour() function, expected prototype:\nunsigned long wxTextAttrBorder::m_borderColour()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttrBorder* self=(Luna< wxTextAttrBorder >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long wxTextAttrBorder::m_borderColour(). Got : '%s'\n%s",typeid(Luna< wxTextAttrBorder >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->m_borderColour;
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxTextAttrDimension wxTextAttrBorder::m_borderWidth()
	static int _bind_getBorderWidth(lua_State *L) {
		if (!_lg_typecheck_getBorderWidth(L)) {
			luaL_error(L, "luna typecheck failed in wxTextAttrDimension wxTextAttrBorder::m_borderWidth() function, expected prototype:\nwxTextAttrDimension wxTextAttrBorder::m_borderWidth()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttrBorder* self=(Luna< wxTextAttrBorder >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTextAttrDimension wxTextAttrBorder::m_borderWidth(). Got : '%s'\n%s",typeid(Luna< wxTextAttrBorder >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxTextAttrDimension* lret = &self->m_borderWidth;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttrDimension >::push(L,lret,false);

		return 1;
	}

	// int wxTextAttrBorder::m_flags()
	static int _bind_getFlags(lua_State *L) {
		if (!_lg_typecheck_getFlags(L)) {
			luaL_error(L, "luna typecheck failed in int wxTextAttrBorder::m_flags() function, expected prototype:\nint wxTextAttrBorder::m_flags()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttrBorder* self=(Luna< wxTextAttrBorder >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxTextAttrBorder::m_flags(). Got : '%s'\n%s",typeid(Luna< wxTextAttrBorder >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->m_flags;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxTextAttrBorder::m_borderStyle(int value)
	static int _bind_setBorderStyle(lua_State *L) {
		if (!_lg_typecheck_setBorderStyle(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextAttrBorder::m_borderStyle(int value) function, expected prototype:\nvoid wxTextAttrBorder::m_borderStyle(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		wxTextAttrBorder* self=(Luna< wxTextAttrBorder >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextAttrBorder::m_borderStyle(int). Got : '%s'\n%s",typeid(Luna< wxTextAttrBorder >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_borderStyle = value;

		return 0;
	}

	// void wxTextAttrBorder::m_borderColour(unsigned long value)
	static int _bind_setBorderColour(lua_State *L) {
		if (!_lg_typecheck_setBorderColour(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextAttrBorder::m_borderColour(unsigned long value) function, expected prototype:\nvoid wxTextAttrBorder::m_borderColour(unsigned long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long value=(unsigned long)lua_tonumber(L,2);

		wxTextAttrBorder* self=(Luna< wxTextAttrBorder >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextAttrBorder::m_borderColour(unsigned long). Got : '%s'\n%s",typeid(Luna< wxTextAttrBorder >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_borderColour = value;

		return 0;
	}

	// void wxTextAttrBorder::m_borderWidth(wxTextAttrDimension value)
	static int _bind_setBorderWidth(lua_State *L) {
		if (!_lg_typecheck_setBorderWidth(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextAttrBorder::m_borderWidth(wxTextAttrDimension value) function, expected prototype:\nvoid wxTextAttrBorder::m_borderWidth(wxTextAttrDimension value)\nClass arguments details:\narg 1 ID = 25580455\n\n%s",luna_dumpStack(L).c_str());
		}

		wxTextAttrDimension* value_ptr=(Luna< wxTextAttrDimension >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in wxTextAttrBorder::m_borderWidth function");
		}
		wxTextAttrDimension value=*value_ptr;

		wxTextAttrBorder* self=(Luna< wxTextAttrBorder >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextAttrBorder::m_borderWidth(wxTextAttrDimension). Got : '%s'\n%s",typeid(Luna< wxTextAttrBorder >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_borderWidth = value;

		return 0;
	}

	// void wxTextAttrBorder::m_flags(int value)
	static int _bind_setFlags(lua_State *L) {
		if (!_lg_typecheck_setFlags(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextAttrBorder::m_flags(int value) function, expected prototype:\nvoid wxTextAttrBorder::m_flags(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		wxTextAttrBorder* self=(Luna< wxTextAttrBorder >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextAttrBorder::m_flags(int). Got : '%s'\n%s",typeid(Luna< wxTextAttrBorder >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_flags = value;

		return 0;
	}


	// Operator binds:
	// bool wxTextAttrBorder::operator==(const wxTextAttrBorder & border) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextAttrBorder::operator==(const wxTextAttrBorder & border) const function, expected prototype:\nbool wxTextAttrBorder::operator==(const wxTextAttrBorder & border) const\nClass arguments details:\narg 1 ID = 59699915\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTextAttrBorder* border_ptr=(Luna< wxTextAttrBorder >::check(L,2));
		if( !border_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg border in wxTextAttrBorder::operator== function");
		}
		const wxTextAttrBorder & border=*border_ptr;

		wxTextAttrBorder* self=(Luna< wxTextAttrBorder >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextAttrBorder::operator==(const wxTextAttrBorder &) const. Got : '%s'\n%s",typeid(Luna< wxTextAttrBorder >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator==(border);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

wxTextAttrBorder* LunaTraits< wxTextAttrBorder >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxTextAttrBorder::_bind_ctor(L);
}

void LunaTraits< wxTextAttrBorder >::_bind_dtor(wxTextAttrBorder* obj) {
	delete obj;
}

const char LunaTraits< wxTextAttrBorder >::className[] = "wxTextAttrBorder";
const char LunaTraits< wxTextAttrBorder >::fullName[] = "wxTextAttrBorder";
const char LunaTraits< wxTextAttrBorder >::moduleName[] = "wx";
const char* LunaTraits< wxTextAttrBorder >::parents[] = {0};
const int LunaTraits< wxTextAttrBorder >::hash = 59699915;
const int LunaTraits< wxTextAttrBorder >::uniqueIDs[] = {59699915,0};

luna_RegType LunaTraits< wxTextAttrBorder >::methods[] = {
	{"Reset", &luna_wrapper_wxTextAttrBorder::_bind_Reset},
	{"EqPartial", &luna_wrapper_wxTextAttrBorder::_bind_EqPartial},
	{"Apply", &luna_wrapper_wxTextAttrBorder::_bind_Apply},
	{"RemoveStyle", &luna_wrapper_wxTextAttrBorder::_bind_RemoveStyle},
	{"CollectCommonAttributes", &luna_wrapper_wxTextAttrBorder::_bind_CollectCommonAttributes},
	{"SetStyle", &luna_wrapper_wxTextAttrBorder::_bind_SetStyle},
	{"GetStyle", &luna_wrapper_wxTextAttrBorder::_bind_GetStyle},
	{"SetColour", &luna_wrapper_wxTextAttrBorder::_bind_SetColour},
	{"GetColourLong", &luna_wrapper_wxTextAttrBorder::_bind_GetColourLong},
	{"GetColour", &luna_wrapper_wxTextAttrBorder::_bind_GetColour},
	{"GetWidth", &luna_wrapper_wxTextAttrBorder::_bind_GetWidth},
	{"SetWidth", &luna_wrapper_wxTextAttrBorder::_bind_SetWidth},
	{"HasStyle", &luna_wrapper_wxTextAttrBorder::_bind_HasStyle},
	{"HasColour", &luna_wrapper_wxTextAttrBorder::_bind_HasColour},
	{"HasWidth", &luna_wrapper_wxTextAttrBorder::_bind_HasWidth},
	{"IsValid", &luna_wrapper_wxTextAttrBorder::_bind_IsValid},
	{"MakeValid", &luna_wrapper_wxTextAttrBorder::_bind_MakeValid},
	{"GetFlags", &luna_wrapper_wxTextAttrBorder::_bind_GetFlags},
	{"SetFlags", &luna_wrapper_wxTextAttrBorder::_bind_SetFlags},
	{"AddFlag", &luna_wrapper_wxTextAttrBorder::_bind_AddFlag},
	{"RemoveFlag", &luna_wrapper_wxTextAttrBorder::_bind_RemoveFlag},
	{"getBorderStyle", &luna_wrapper_wxTextAttrBorder::_bind_getBorderStyle},
	{"getBorderColour", &luna_wrapper_wxTextAttrBorder::_bind_getBorderColour},
	{"getBorderWidth", &luna_wrapper_wxTextAttrBorder::_bind_getBorderWidth},
	{"getFlags", &luna_wrapper_wxTextAttrBorder::_bind_getFlags},
	{"setBorderStyle", &luna_wrapper_wxTextAttrBorder::_bind_setBorderStyle},
	{"setBorderColour", &luna_wrapper_wxTextAttrBorder::_bind_setBorderColour},
	{"setBorderWidth", &luna_wrapper_wxTextAttrBorder::_bind_setBorderWidth},
	{"setFlags", &luna_wrapper_wxTextAttrBorder::_bind_setFlags},
	{"__eq", &luna_wrapper_wxTextAttrBorder::_bind___eq},
	{"dynCast", &luna_wrapper_wxTextAttrBorder::_bind_dynCast},
	{"fromVoid", &luna_wrapper_wxTextAttrBorder::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxTextAttrBorder::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< wxTextAttrBorder >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxTextAttrBorder >::enumValues[] = {
	{0,0}
};



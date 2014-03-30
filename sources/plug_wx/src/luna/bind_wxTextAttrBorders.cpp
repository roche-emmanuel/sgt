#include <plug_common.h>

class luna_wrapper_wxTextAttrBorders {
public:
	typedef Luna< wxTextAttrBorders > luna_t;

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxTextAttrBorders* self= (wxTextAttrBorders*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxTextAttrBorders >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50697174) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxTextAttrBorders >::check(L,1));
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

		wxTextAttrBorders* self=(Luna< wxTextAttrBorders >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxTextAttrBorders");
		
		return luna_dynamicCast(L,converters,"wxTextAttrBorders",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_SetStyle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
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

	inline static bool _lg_typecheck_Reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_EqPartial(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50697174) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Apply(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50697174) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50697174)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RemoveStyle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50697174) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CollectCommonAttributes(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50697174) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,50697174) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,50697174) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsValid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLeft_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLeft_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetRight_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetRight_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetTop_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetTop_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetBottom_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetBottom_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLeft(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTop(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getBottom(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setLeft(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,59699915) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,59699915) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTop(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,59699915) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setBottom(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,59699915) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50697174) ) return false;
		return true;
	}


	// Constructor binds:
	// wxTextAttrBorders::wxTextAttrBorders()
	static wxTextAttrBorders* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxTextAttrBorders::wxTextAttrBorders() function, expected prototype:\nwxTextAttrBorders::wxTextAttrBorders()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxTextAttrBorders();
	}


	// Function binds:
	// void wxTextAttrBorders::SetStyle(int style)
	static int _bind_SetStyle(lua_State *L) {
		if (!_lg_typecheck_SetStyle(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextAttrBorders::SetStyle(int style) function, expected prototype:\nvoid wxTextAttrBorders::SetStyle(int style)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int style=(int)lua_tointeger(L,2);

		wxTextAttrBorders* self=(Luna< wxTextAttrBorders >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextAttrBorders::SetStyle(int). Got : '%s'\n%s",typeid(Luna< wxTextAttrBorders >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetStyle(style);

		return 0;
	}

	// void wxTextAttrBorders::SetColour(unsigned long colour)
	static int _bind_SetColour_overload_1(lua_State *L) {
		if (!_lg_typecheck_SetColour_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextAttrBorders::SetColour(unsigned long colour) function, expected prototype:\nvoid wxTextAttrBorders::SetColour(unsigned long colour)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long colour=(unsigned long)lua_tonumber(L,2);

		wxTextAttrBorders* self=(Luna< wxTextAttrBorders >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextAttrBorders::SetColour(unsigned long). Got : '%s'\n%s",typeid(Luna< wxTextAttrBorders >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetColour(colour);

		return 0;
	}

	// void wxTextAttrBorders::SetColour(const wxColour & colour)
	static int _bind_SetColour_overload_2(lua_State *L) {
		if (!_lg_typecheck_SetColour_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextAttrBorders::SetColour(const wxColour & colour) function, expected prototype:\nvoid wxTextAttrBorders::SetColour(const wxColour & colour)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxColour* colour_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,2));
		if( !colour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colour in wxTextAttrBorders::SetColour function");
		}
		const wxColour & colour=*colour_ptr;

		wxTextAttrBorders* self=(Luna< wxTextAttrBorders >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextAttrBorders::SetColour(const wxColour &). Got : '%s'\n%s",typeid(Luna< wxTextAttrBorders >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetColour(colour);

		return 0;
	}

	// Overload binder for wxTextAttrBorders::SetColour
	static int _bind_SetColour(lua_State *L) {
		if (_lg_typecheck_SetColour_overload_1(L)) return _bind_SetColour_overload_1(L);
		if (_lg_typecheck_SetColour_overload_2(L)) return _bind_SetColour_overload_2(L);

		luaL_error(L, "error in function SetColour, cannot match any of the overloads for function SetColour:\n  SetColour(unsigned long)\n  SetColour(const wxColour &)\n");
		return 0;
	}

	// void wxTextAttrBorders::SetWidth(const wxTextAttrDimension & width)
	static int _bind_SetWidth_overload_1(lua_State *L) {
		if (!_lg_typecheck_SetWidth_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextAttrBorders::SetWidth(const wxTextAttrDimension & width) function, expected prototype:\nvoid wxTextAttrBorders::SetWidth(const wxTextAttrDimension & width)\nClass arguments details:\narg 1 ID = 25580455\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTextAttrDimension* width_ptr=(Luna< wxTextAttrDimension >::check(L,2));
		if( !width_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg width in wxTextAttrBorders::SetWidth function");
		}
		const wxTextAttrDimension & width=*width_ptr;

		wxTextAttrBorders* self=(Luna< wxTextAttrBorders >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextAttrBorders::SetWidth(const wxTextAttrDimension &). Got : '%s'\n%s",typeid(Luna< wxTextAttrBorders >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetWidth(width);

		return 0;
	}

	// void wxTextAttrBorders::SetWidth(int value, wxTextAttrUnits units = ::wxTEXT_ATTR_UNITS_TENTHS_MM)
	static int _bind_SetWidth_overload_2(lua_State *L) {
		if (!_lg_typecheck_SetWidth_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextAttrBorders::SetWidth(int value, wxTextAttrUnits units = ::wxTEXT_ATTR_UNITS_TENTHS_MM) function, expected prototype:\nvoid wxTextAttrBorders::SetWidth(int value, wxTextAttrUnits units = ::wxTEXT_ATTR_UNITS_TENTHS_MM)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int value=(int)lua_tointeger(L,2);
		wxTextAttrUnits units=luatop>2 ? (wxTextAttrUnits)lua_tointeger(L,3) : (wxTextAttrUnits)::wxTEXT_ATTR_UNITS_TENTHS_MM;

		wxTextAttrBorders* self=(Luna< wxTextAttrBorders >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextAttrBorders::SetWidth(int, wxTextAttrUnits). Got : '%s'\n%s",typeid(Luna< wxTextAttrBorders >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetWidth(value, units);

		return 0;
	}

	// Overload binder for wxTextAttrBorders::SetWidth
	static int _bind_SetWidth(lua_State *L) {
		if (_lg_typecheck_SetWidth_overload_1(L)) return _bind_SetWidth_overload_1(L);
		if (_lg_typecheck_SetWidth_overload_2(L)) return _bind_SetWidth_overload_2(L);

		luaL_error(L, "error in function SetWidth, cannot match any of the overloads for function SetWidth:\n  SetWidth(const wxTextAttrDimension &)\n  SetWidth(int, wxTextAttrUnits)\n");
		return 0;
	}

	// void wxTextAttrBorders::Reset()
	static int _bind_Reset(lua_State *L) {
		if (!_lg_typecheck_Reset(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextAttrBorders::Reset() function, expected prototype:\nvoid wxTextAttrBorders::Reset()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttrBorders* self=(Luna< wxTextAttrBorders >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextAttrBorders::Reset(). Got : '%s'\n%s",typeid(Luna< wxTextAttrBorders >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Reset();

		return 0;
	}

	// bool wxTextAttrBorders::EqPartial(const wxTextAttrBorders & borders) const
	static int _bind_EqPartial(lua_State *L) {
		if (!_lg_typecheck_EqPartial(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextAttrBorders::EqPartial(const wxTextAttrBorders & borders) const function, expected prototype:\nbool wxTextAttrBorders::EqPartial(const wxTextAttrBorders & borders) const\nClass arguments details:\narg 1 ID = 50697174\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTextAttrBorders* borders_ptr=(Luna< wxTextAttrBorders >::check(L,2));
		if( !borders_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg borders in wxTextAttrBorders::EqPartial function");
		}
		const wxTextAttrBorders & borders=*borders_ptr;

		wxTextAttrBorders* self=(Luna< wxTextAttrBorders >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextAttrBorders::EqPartial(const wxTextAttrBorders &) const. Got : '%s'\n%s",typeid(Luna< wxTextAttrBorders >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->EqPartial(borders);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextAttrBorders::Apply(const wxTextAttrBorders & borders, const wxTextAttrBorders * compareWith = NULL)
	static int _bind_Apply(lua_State *L) {
		if (!_lg_typecheck_Apply(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextAttrBorders::Apply(const wxTextAttrBorders & borders, const wxTextAttrBorders * compareWith = NULL) function, expected prototype:\nbool wxTextAttrBorders::Apply(const wxTextAttrBorders & borders, const wxTextAttrBorders * compareWith = NULL)\nClass arguments details:\narg 1 ID = 50697174\narg 2 ID = 50697174\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxTextAttrBorders* borders_ptr=(Luna< wxTextAttrBorders >::check(L,2));
		if( !borders_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg borders in wxTextAttrBorders::Apply function");
		}
		const wxTextAttrBorders & borders=*borders_ptr;
		const wxTextAttrBorders* compareWith=luatop>2 ? (Luna< wxTextAttrBorders >::check(L,3)) : (const wxTextAttrBorders*)NULL;

		wxTextAttrBorders* self=(Luna< wxTextAttrBorders >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextAttrBorders::Apply(const wxTextAttrBorders &, const wxTextAttrBorders *). Got : '%s'\n%s",typeid(Luna< wxTextAttrBorders >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Apply(borders, compareWith);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextAttrBorders::RemoveStyle(const wxTextAttrBorders & attr)
	static int _bind_RemoveStyle(lua_State *L) {
		if (!_lg_typecheck_RemoveStyle(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextAttrBorders::RemoveStyle(const wxTextAttrBorders & attr) function, expected prototype:\nbool wxTextAttrBorders::RemoveStyle(const wxTextAttrBorders & attr)\nClass arguments details:\narg 1 ID = 50697174\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTextAttrBorders* attr_ptr=(Luna< wxTextAttrBorders >::check(L,2));
		if( !attr_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg attr in wxTextAttrBorders::RemoveStyle function");
		}
		const wxTextAttrBorders & attr=*attr_ptr;

		wxTextAttrBorders* self=(Luna< wxTextAttrBorders >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextAttrBorders::RemoveStyle(const wxTextAttrBorders &). Got : '%s'\n%s",typeid(Luna< wxTextAttrBorders >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->RemoveStyle(attr);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxTextAttrBorders::CollectCommonAttributes(const wxTextAttrBorders & attr, wxTextAttrBorders & clashingAttr, wxTextAttrBorders & absentAttr)
	static int _bind_CollectCommonAttributes(lua_State *L) {
		if (!_lg_typecheck_CollectCommonAttributes(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextAttrBorders::CollectCommonAttributes(const wxTextAttrBorders & attr, wxTextAttrBorders & clashingAttr, wxTextAttrBorders & absentAttr) function, expected prototype:\nvoid wxTextAttrBorders::CollectCommonAttributes(const wxTextAttrBorders & attr, wxTextAttrBorders & clashingAttr, wxTextAttrBorders & absentAttr)\nClass arguments details:\narg 1 ID = 50697174\narg 2 ID = 50697174\narg 3 ID = 50697174\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTextAttrBorders* attr_ptr=(Luna< wxTextAttrBorders >::check(L,2));
		if( !attr_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg attr in wxTextAttrBorders::CollectCommonAttributes function");
		}
		const wxTextAttrBorders & attr=*attr_ptr;
		wxTextAttrBorders* clashingAttr_ptr=(Luna< wxTextAttrBorders >::check(L,3));
		if( !clashingAttr_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg clashingAttr in wxTextAttrBorders::CollectCommonAttributes function");
		}
		wxTextAttrBorders & clashingAttr=*clashingAttr_ptr;
		wxTextAttrBorders* absentAttr_ptr=(Luna< wxTextAttrBorders >::check(L,4));
		if( !absentAttr_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg absentAttr in wxTextAttrBorders::CollectCommonAttributes function");
		}
		wxTextAttrBorders & absentAttr=*absentAttr_ptr;

		wxTextAttrBorders* self=(Luna< wxTextAttrBorders >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextAttrBorders::CollectCommonAttributes(const wxTextAttrBorders &, wxTextAttrBorders &, wxTextAttrBorders &). Got : '%s'\n%s",typeid(Luna< wxTextAttrBorders >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->CollectCommonAttributes(attr, clashingAttr, absentAttr);

		return 0;
	}

	// bool wxTextAttrBorders::IsValid() const
	static int _bind_IsValid(lua_State *L) {
		if (!_lg_typecheck_IsValid(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextAttrBorders::IsValid() const function, expected prototype:\nbool wxTextAttrBorders::IsValid() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttrBorders* self=(Luna< wxTextAttrBorders >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextAttrBorders::IsValid() const. Got : '%s'\n%s",typeid(Luna< wxTextAttrBorders >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsValid();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const wxTextAttrBorder & wxTextAttrBorders::GetLeft() const
	static int _bind_GetLeft_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetLeft_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const wxTextAttrBorder & wxTextAttrBorders::GetLeft() const function, expected prototype:\nconst wxTextAttrBorder & wxTextAttrBorders::GetLeft() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttrBorders* self=(Luna< wxTextAttrBorders >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxTextAttrBorder & wxTextAttrBorders::GetLeft() const. Got : '%s'\n%s",typeid(Luna< wxTextAttrBorders >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxTextAttrBorder* lret = &self->GetLeft();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttrBorder >::push(L,lret,false);

		return 1;
	}

	// wxTextAttrBorder & wxTextAttrBorders::GetLeft()
	static int _bind_GetLeft_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetLeft_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxTextAttrBorder & wxTextAttrBorders::GetLeft() function, expected prototype:\nwxTextAttrBorder & wxTextAttrBorders::GetLeft()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttrBorders* self=(Luna< wxTextAttrBorders >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTextAttrBorder & wxTextAttrBorders::GetLeft(). Got : '%s'\n%s",typeid(Luna< wxTextAttrBorders >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxTextAttrBorder* lret = &self->GetLeft();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttrBorder >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxTextAttrBorders::GetLeft
	static int _bind_GetLeft(lua_State *L) {
		if (_lg_typecheck_GetLeft_overload_1(L)) return _bind_GetLeft_overload_1(L);
		if (_lg_typecheck_GetLeft_overload_2(L)) return _bind_GetLeft_overload_2(L);

		luaL_error(L, "error in function GetLeft, cannot match any of the overloads for function GetLeft:\n  GetLeft()\n  GetLeft()\n");
		return 0;
	}

	// const wxTextAttrBorder & wxTextAttrBorders::GetRight() const
	static int _bind_GetRight_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetRight_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const wxTextAttrBorder & wxTextAttrBorders::GetRight() const function, expected prototype:\nconst wxTextAttrBorder & wxTextAttrBorders::GetRight() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttrBorders* self=(Luna< wxTextAttrBorders >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxTextAttrBorder & wxTextAttrBorders::GetRight() const. Got : '%s'\n%s",typeid(Luna< wxTextAttrBorders >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxTextAttrBorder* lret = &self->GetRight();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttrBorder >::push(L,lret,false);

		return 1;
	}

	// wxTextAttrBorder & wxTextAttrBorders::GetRight()
	static int _bind_GetRight_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetRight_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxTextAttrBorder & wxTextAttrBorders::GetRight() function, expected prototype:\nwxTextAttrBorder & wxTextAttrBorders::GetRight()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttrBorders* self=(Luna< wxTextAttrBorders >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTextAttrBorder & wxTextAttrBorders::GetRight(). Got : '%s'\n%s",typeid(Luna< wxTextAttrBorders >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxTextAttrBorder* lret = &self->GetRight();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttrBorder >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxTextAttrBorders::GetRight
	static int _bind_GetRight(lua_State *L) {
		if (_lg_typecheck_GetRight_overload_1(L)) return _bind_GetRight_overload_1(L);
		if (_lg_typecheck_GetRight_overload_2(L)) return _bind_GetRight_overload_2(L);

		luaL_error(L, "error in function GetRight, cannot match any of the overloads for function GetRight:\n  GetRight()\n  GetRight()\n");
		return 0;
	}

	// const wxTextAttrBorder & wxTextAttrBorders::GetTop() const
	static int _bind_GetTop_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetTop_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const wxTextAttrBorder & wxTextAttrBorders::GetTop() const function, expected prototype:\nconst wxTextAttrBorder & wxTextAttrBorders::GetTop() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttrBorders* self=(Luna< wxTextAttrBorders >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxTextAttrBorder & wxTextAttrBorders::GetTop() const. Got : '%s'\n%s",typeid(Luna< wxTextAttrBorders >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxTextAttrBorder* lret = &self->GetTop();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttrBorder >::push(L,lret,false);

		return 1;
	}

	// wxTextAttrBorder & wxTextAttrBorders::GetTop()
	static int _bind_GetTop_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetTop_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxTextAttrBorder & wxTextAttrBorders::GetTop() function, expected prototype:\nwxTextAttrBorder & wxTextAttrBorders::GetTop()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttrBorders* self=(Luna< wxTextAttrBorders >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTextAttrBorder & wxTextAttrBorders::GetTop(). Got : '%s'\n%s",typeid(Luna< wxTextAttrBorders >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxTextAttrBorder* lret = &self->GetTop();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttrBorder >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxTextAttrBorders::GetTop
	static int _bind_GetTop(lua_State *L) {
		if (_lg_typecheck_GetTop_overload_1(L)) return _bind_GetTop_overload_1(L);
		if (_lg_typecheck_GetTop_overload_2(L)) return _bind_GetTop_overload_2(L);

		luaL_error(L, "error in function GetTop, cannot match any of the overloads for function GetTop:\n  GetTop()\n  GetTop()\n");
		return 0;
	}

	// const wxTextAttrBorder & wxTextAttrBorders::GetBottom() const
	static int _bind_GetBottom_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetBottom_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const wxTextAttrBorder & wxTextAttrBorders::GetBottom() const function, expected prototype:\nconst wxTextAttrBorder & wxTextAttrBorders::GetBottom() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttrBorders* self=(Luna< wxTextAttrBorders >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxTextAttrBorder & wxTextAttrBorders::GetBottom() const. Got : '%s'\n%s",typeid(Luna< wxTextAttrBorders >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxTextAttrBorder* lret = &self->GetBottom();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttrBorder >::push(L,lret,false);

		return 1;
	}

	// wxTextAttrBorder & wxTextAttrBorders::GetBottom()
	static int _bind_GetBottom_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetBottom_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxTextAttrBorder & wxTextAttrBorders::GetBottom() function, expected prototype:\nwxTextAttrBorder & wxTextAttrBorders::GetBottom()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttrBorders* self=(Luna< wxTextAttrBorders >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTextAttrBorder & wxTextAttrBorders::GetBottom(). Got : '%s'\n%s",typeid(Luna< wxTextAttrBorders >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxTextAttrBorder* lret = &self->GetBottom();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttrBorder >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxTextAttrBorders::GetBottom
	static int _bind_GetBottom(lua_State *L) {
		if (_lg_typecheck_GetBottom_overload_1(L)) return _bind_GetBottom_overload_1(L);
		if (_lg_typecheck_GetBottom_overload_2(L)) return _bind_GetBottom_overload_2(L);

		luaL_error(L, "error in function GetBottom, cannot match any of the overloads for function GetBottom:\n  GetBottom()\n  GetBottom()\n");
		return 0;
	}

	// wxTextAttrBorder wxTextAttrBorders::m_left()
	static int _bind_getLeft(lua_State *L) {
		if (!_lg_typecheck_getLeft(L)) {
			luaL_error(L, "luna typecheck failed in wxTextAttrBorder wxTextAttrBorders::m_left() function, expected prototype:\nwxTextAttrBorder wxTextAttrBorders::m_left()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttrBorders* self=(Luna< wxTextAttrBorders >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTextAttrBorder wxTextAttrBorders::m_left(). Got : '%s'\n%s",typeid(Luna< wxTextAttrBorders >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxTextAttrBorder* lret = &self->m_left;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttrBorder >::push(L,lret,false);

		return 1;
	}

	// wxTextAttrBorder wxTextAttrBorders::m_right()
	static int _bind_getRight(lua_State *L) {
		if (!_lg_typecheck_getRight(L)) {
			luaL_error(L, "luna typecheck failed in wxTextAttrBorder wxTextAttrBorders::m_right() function, expected prototype:\nwxTextAttrBorder wxTextAttrBorders::m_right()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttrBorders* self=(Luna< wxTextAttrBorders >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTextAttrBorder wxTextAttrBorders::m_right(). Got : '%s'\n%s",typeid(Luna< wxTextAttrBorders >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxTextAttrBorder* lret = &self->m_right;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttrBorder >::push(L,lret,false);

		return 1;
	}

	// wxTextAttrBorder wxTextAttrBorders::m_top()
	static int _bind_getTop(lua_State *L) {
		if (!_lg_typecheck_getTop(L)) {
			luaL_error(L, "luna typecheck failed in wxTextAttrBorder wxTextAttrBorders::m_top() function, expected prototype:\nwxTextAttrBorder wxTextAttrBorders::m_top()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttrBorders* self=(Luna< wxTextAttrBorders >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTextAttrBorder wxTextAttrBorders::m_top(). Got : '%s'\n%s",typeid(Luna< wxTextAttrBorders >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxTextAttrBorder* lret = &self->m_top;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttrBorder >::push(L,lret,false);

		return 1;
	}

	// wxTextAttrBorder wxTextAttrBorders::m_bottom()
	static int _bind_getBottom(lua_State *L) {
		if (!_lg_typecheck_getBottom(L)) {
			luaL_error(L, "luna typecheck failed in wxTextAttrBorder wxTextAttrBorders::m_bottom() function, expected prototype:\nwxTextAttrBorder wxTextAttrBorders::m_bottom()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttrBorders* self=(Luna< wxTextAttrBorders >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTextAttrBorder wxTextAttrBorders::m_bottom(). Got : '%s'\n%s",typeid(Luna< wxTextAttrBorders >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxTextAttrBorder* lret = &self->m_bottom;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttrBorder >::push(L,lret,false);

		return 1;
	}

	// void wxTextAttrBorders::m_left(wxTextAttrBorder value)
	static int _bind_setLeft(lua_State *L) {
		if (!_lg_typecheck_setLeft(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextAttrBorders::m_left(wxTextAttrBorder value) function, expected prototype:\nvoid wxTextAttrBorders::m_left(wxTextAttrBorder value)\nClass arguments details:\narg 1 ID = 59699915\n\n%s",luna_dumpStack(L).c_str());
		}

		wxTextAttrBorder* value_ptr=(Luna< wxTextAttrBorder >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in wxTextAttrBorders::m_left function");
		}
		wxTextAttrBorder value=*value_ptr;

		wxTextAttrBorders* self=(Luna< wxTextAttrBorders >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextAttrBorders::m_left(wxTextAttrBorder). Got : '%s'\n%s",typeid(Luna< wxTextAttrBorders >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_left = value;

		return 0;
	}

	// void wxTextAttrBorders::m_right(wxTextAttrBorder value)
	static int _bind_setRight(lua_State *L) {
		if (!_lg_typecheck_setRight(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextAttrBorders::m_right(wxTextAttrBorder value) function, expected prototype:\nvoid wxTextAttrBorders::m_right(wxTextAttrBorder value)\nClass arguments details:\narg 1 ID = 59699915\n\n%s",luna_dumpStack(L).c_str());
		}

		wxTextAttrBorder* value_ptr=(Luna< wxTextAttrBorder >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in wxTextAttrBorders::m_right function");
		}
		wxTextAttrBorder value=*value_ptr;

		wxTextAttrBorders* self=(Luna< wxTextAttrBorders >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextAttrBorders::m_right(wxTextAttrBorder). Got : '%s'\n%s",typeid(Luna< wxTextAttrBorders >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_right = value;

		return 0;
	}

	// void wxTextAttrBorders::m_top(wxTextAttrBorder value)
	static int _bind_setTop(lua_State *L) {
		if (!_lg_typecheck_setTop(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextAttrBorders::m_top(wxTextAttrBorder value) function, expected prototype:\nvoid wxTextAttrBorders::m_top(wxTextAttrBorder value)\nClass arguments details:\narg 1 ID = 59699915\n\n%s",luna_dumpStack(L).c_str());
		}

		wxTextAttrBorder* value_ptr=(Luna< wxTextAttrBorder >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in wxTextAttrBorders::m_top function");
		}
		wxTextAttrBorder value=*value_ptr;

		wxTextAttrBorders* self=(Luna< wxTextAttrBorders >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextAttrBorders::m_top(wxTextAttrBorder). Got : '%s'\n%s",typeid(Luna< wxTextAttrBorders >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_top = value;

		return 0;
	}

	// void wxTextAttrBorders::m_bottom(wxTextAttrBorder value)
	static int _bind_setBottom(lua_State *L) {
		if (!_lg_typecheck_setBottom(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextAttrBorders::m_bottom(wxTextAttrBorder value) function, expected prototype:\nvoid wxTextAttrBorders::m_bottom(wxTextAttrBorder value)\nClass arguments details:\narg 1 ID = 59699915\n\n%s",luna_dumpStack(L).c_str());
		}

		wxTextAttrBorder* value_ptr=(Luna< wxTextAttrBorder >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in wxTextAttrBorders::m_bottom function");
		}
		wxTextAttrBorder value=*value_ptr;

		wxTextAttrBorders* self=(Luna< wxTextAttrBorders >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextAttrBorders::m_bottom(wxTextAttrBorder). Got : '%s'\n%s",typeid(Luna< wxTextAttrBorders >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_bottom = value;

		return 0;
	}


	// Operator binds:
	// bool wxTextAttrBorders::operator==(const wxTextAttrBorders & borders) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextAttrBorders::operator==(const wxTextAttrBorders & borders) const function, expected prototype:\nbool wxTextAttrBorders::operator==(const wxTextAttrBorders & borders) const\nClass arguments details:\narg 1 ID = 50697174\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTextAttrBorders* borders_ptr=(Luna< wxTextAttrBorders >::check(L,2));
		if( !borders_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg borders in wxTextAttrBorders::operator== function");
		}
		const wxTextAttrBorders & borders=*borders_ptr;

		wxTextAttrBorders* self=(Luna< wxTextAttrBorders >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextAttrBorders::operator==(const wxTextAttrBorders &) const. Got : '%s'\n%s",typeid(Luna< wxTextAttrBorders >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator==(borders);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

wxTextAttrBorders* LunaTraits< wxTextAttrBorders >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxTextAttrBorders::_bind_ctor(L);
}

void LunaTraits< wxTextAttrBorders >::_bind_dtor(wxTextAttrBorders* obj) {
	delete obj;
}

const char LunaTraits< wxTextAttrBorders >::className[] = "wxTextAttrBorders";
const char LunaTraits< wxTextAttrBorders >::fullName[] = "wxTextAttrBorders";
const char LunaTraits< wxTextAttrBorders >::moduleName[] = "wx";
const char* LunaTraits< wxTextAttrBorders >::parents[] = {0};
const int LunaTraits< wxTextAttrBorders >::hash = 50697174;
const int LunaTraits< wxTextAttrBorders >::uniqueIDs[] = {50697174,0};

luna_RegType LunaTraits< wxTextAttrBorders >::methods[] = {
	{"SetStyle", &luna_wrapper_wxTextAttrBorders::_bind_SetStyle},
	{"SetColour", &luna_wrapper_wxTextAttrBorders::_bind_SetColour},
	{"SetWidth", &luna_wrapper_wxTextAttrBorders::_bind_SetWidth},
	{"Reset", &luna_wrapper_wxTextAttrBorders::_bind_Reset},
	{"EqPartial", &luna_wrapper_wxTextAttrBorders::_bind_EqPartial},
	{"Apply", &luna_wrapper_wxTextAttrBorders::_bind_Apply},
	{"RemoveStyle", &luna_wrapper_wxTextAttrBorders::_bind_RemoveStyle},
	{"CollectCommonAttributes", &luna_wrapper_wxTextAttrBorders::_bind_CollectCommonAttributes},
	{"IsValid", &luna_wrapper_wxTextAttrBorders::_bind_IsValid},
	{"GetLeft", &luna_wrapper_wxTextAttrBorders::_bind_GetLeft},
	{"GetRight", &luna_wrapper_wxTextAttrBorders::_bind_GetRight},
	{"GetTop", &luna_wrapper_wxTextAttrBorders::_bind_GetTop},
	{"GetBottom", &luna_wrapper_wxTextAttrBorders::_bind_GetBottom},
	{"getLeft", &luna_wrapper_wxTextAttrBorders::_bind_getLeft},
	{"getRight", &luna_wrapper_wxTextAttrBorders::_bind_getRight},
	{"getTop", &luna_wrapper_wxTextAttrBorders::_bind_getTop},
	{"getBottom", &luna_wrapper_wxTextAttrBorders::_bind_getBottom},
	{"setLeft", &luna_wrapper_wxTextAttrBorders::_bind_setLeft},
	{"setRight", &luna_wrapper_wxTextAttrBorders::_bind_setRight},
	{"setTop", &luna_wrapper_wxTextAttrBorders::_bind_setTop},
	{"setBottom", &luna_wrapper_wxTextAttrBorders::_bind_setBottom},
	{"__eq", &luna_wrapper_wxTextAttrBorders::_bind___eq},
	{"dynCast", &luna_wrapper_wxTextAttrBorders::_bind_dynCast},
	{"fromVoid", &luna_wrapper_wxTextAttrBorders::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxTextAttrBorders::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< wxTextAttrBorders >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxTextAttrBorders >::enumValues[] = {
	{0,0}
};



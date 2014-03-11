#include <plug_common.h>

class luna_wrapper_wxTextAttrSize {
public:
	typedef Luna< wxTextAttrSize > luna_t;

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxTextAttrSize* self= (wxTextAttrSize*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxTextAttrSize >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,81312281) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxTextAttrSize >::check(L,1));
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

		wxTextAttrSize* self=(Luna< wxTextAttrSize >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxTextAttrSize");
		
		return luna_dynamicCast(L,converters,"wxTextAttrSize",name);
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

		if( !Luna<void>::has_uniqueid(L,2,81312281) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Apply(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81312281) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,81312281)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CollectCommonAttributes(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81312281) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,81312281) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,81312281) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RemoveStyle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81312281) ) return false;
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
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetWidth_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetWidth_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25580455) ) return false;
		if( (!(Luna< wxTextAttrDimension >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetHeight_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetHeight_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetHeight_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetHeight_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetHeight_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25580455) ) return false;
		if( (!(Luna< wxTextAttrDimension >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setWidth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25580455) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setHeight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25580455) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81312281) ) return false;
		return true;
	}


	// Constructor binds:
	// wxTextAttrSize::wxTextAttrSize()
	static wxTextAttrSize* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxTextAttrSize::wxTextAttrSize() function, expected prototype:\nwxTextAttrSize::wxTextAttrSize()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxTextAttrSize();
	}


	// Function binds:
	// void wxTextAttrSize::Reset()
	static int _bind_Reset(lua_State *L) {
		if (!_lg_typecheck_Reset(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextAttrSize::Reset() function, expected prototype:\nvoid wxTextAttrSize::Reset()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttrSize* self=(Luna< wxTextAttrSize >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextAttrSize::Reset(). Got : '%s'\n%s",typeid(Luna< wxTextAttrSize >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Reset();

		return 0;
	}

	// bool wxTextAttrSize::EqPartial(const wxTextAttrSize & dims) const
	static int _bind_EqPartial(lua_State *L) {
		if (!_lg_typecheck_EqPartial(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextAttrSize::EqPartial(const wxTextAttrSize & dims) const function, expected prototype:\nbool wxTextAttrSize::EqPartial(const wxTextAttrSize & dims) const\nClass arguments details:\narg 1 ID = 81312281\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTextAttrSize* dims_ptr=(Luna< wxTextAttrSize >::check(L,2));
		if( !dims_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dims in wxTextAttrSize::EqPartial function");
		}
		const wxTextAttrSize & dims=*dims_ptr;

		wxTextAttrSize* self=(Luna< wxTextAttrSize >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextAttrSize::EqPartial(const wxTextAttrSize &) const. Got : '%s'\n%s",typeid(Luna< wxTextAttrSize >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->EqPartial(dims);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextAttrSize::Apply(const wxTextAttrSize & dims, const wxTextAttrSize * compareWith = NULL)
	static int _bind_Apply(lua_State *L) {
		if (!_lg_typecheck_Apply(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextAttrSize::Apply(const wxTextAttrSize & dims, const wxTextAttrSize * compareWith = NULL) function, expected prototype:\nbool wxTextAttrSize::Apply(const wxTextAttrSize & dims, const wxTextAttrSize * compareWith = NULL)\nClass arguments details:\narg 1 ID = 81312281\narg 2 ID = 81312281\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxTextAttrSize* dims_ptr=(Luna< wxTextAttrSize >::check(L,2));
		if( !dims_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dims in wxTextAttrSize::Apply function");
		}
		const wxTextAttrSize & dims=*dims_ptr;
		const wxTextAttrSize* compareWith=luatop>2 ? (Luna< wxTextAttrSize >::check(L,3)) : (const wxTextAttrSize*)NULL;

		wxTextAttrSize* self=(Luna< wxTextAttrSize >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextAttrSize::Apply(const wxTextAttrSize &, const wxTextAttrSize *). Got : '%s'\n%s",typeid(Luna< wxTextAttrSize >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Apply(dims, compareWith);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxTextAttrSize::CollectCommonAttributes(const wxTextAttrSize & attr, wxTextAttrSize & clashingAttr, wxTextAttrSize & absentAttr)
	static int _bind_CollectCommonAttributes(lua_State *L) {
		if (!_lg_typecheck_CollectCommonAttributes(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextAttrSize::CollectCommonAttributes(const wxTextAttrSize & attr, wxTextAttrSize & clashingAttr, wxTextAttrSize & absentAttr) function, expected prototype:\nvoid wxTextAttrSize::CollectCommonAttributes(const wxTextAttrSize & attr, wxTextAttrSize & clashingAttr, wxTextAttrSize & absentAttr)\nClass arguments details:\narg 1 ID = 81312281\narg 2 ID = 81312281\narg 3 ID = 81312281\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTextAttrSize* attr_ptr=(Luna< wxTextAttrSize >::check(L,2));
		if( !attr_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg attr in wxTextAttrSize::CollectCommonAttributes function");
		}
		const wxTextAttrSize & attr=*attr_ptr;
		wxTextAttrSize* clashingAttr_ptr=(Luna< wxTextAttrSize >::check(L,3));
		if( !clashingAttr_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg clashingAttr in wxTextAttrSize::CollectCommonAttributes function");
		}
		wxTextAttrSize & clashingAttr=*clashingAttr_ptr;
		wxTextAttrSize* absentAttr_ptr=(Luna< wxTextAttrSize >::check(L,4));
		if( !absentAttr_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg absentAttr in wxTextAttrSize::CollectCommonAttributes function");
		}
		wxTextAttrSize & absentAttr=*absentAttr_ptr;

		wxTextAttrSize* self=(Luna< wxTextAttrSize >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextAttrSize::CollectCommonAttributes(const wxTextAttrSize &, wxTextAttrSize &, wxTextAttrSize &). Got : '%s'\n%s",typeid(Luna< wxTextAttrSize >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->CollectCommonAttributes(attr, clashingAttr, absentAttr);

		return 0;
	}

	// bool wxTextAttrSize::RemoveStyle(const wxTextAttrSize & attr)
	static int _bind_RemoveStyle(lua_State *L) {
		if (!_lg_typecheck_RemoveStyle(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextAttrSize::RemoveStyle(const wxTextAttrSize & attr) function, expected prototype:\nbool wxTextAttrSize::RemoveStyle(const wxTextAttrSize & attr)\nClass arguments details:\narg 1 ID = 81312281\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTextAttrSize* attr_ptr=(Luna< wxTextAttrSize >::check(L,2));
		if( !attr_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg attr in wxTextAttrSize::RemoveStyle function");
		}
		const wxTextAttrSize & attr=*attr_ptr;

		wxTextAttrSize* self=(Luna< wxTextAttrSize >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextAttrSize::RemoveStyle(const wxTextAttrSize &). Got : '%s'\n%s",typeid(Luna< wxTextAttrSize >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->RemoveStyle(attr);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxTextAttrDimension & wxTextAttrSize::GetWidth()
	static int _bind_GetWidth_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetWidth_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxTextAttrDimension & wxTextAttrSize::GetWidth() function, expected prototype:\nwxTextAttrDimension & wxTextAttrSize::GetWidth()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttrSize* self=(Luna< wxTextAttrSize >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTextAttrDimension & wxTextAttrSize::GetWidth(). Got : '%s'\n%s",typeid(Luna< wxTextAttrSize >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxTextAttrDimension* lret = &self->GetWidth();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttrDimension >::push(L,lret,false);

		return 1;
	}

	// const wxTextAttrDimension & wxTextAttrSize::GetWidth() const
	static int _bind_GetWidth_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetWidth_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const wxTextAttrDimension & wxTextAttrSize::GetWidth() const function, expected prototype:\nconst wxTextAttrDimension & wxTextAttrSize::GetWidth() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttrSize* self=(Luna< wxTextAttrSize >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxTextAttrDimension & wxTextAttrSize::GetWidth() const. Got : '%s'\n%s",typeid(Luna< wxTextAttrSize >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxTextAttrDimension* lret = &self->GetWidth();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttrDimension >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxTextAttrSize::GetWidth
	static int _bind_GetWidth(lua_State *L) {
		if (_lg_typecheck_GetWidth_overload_1(L)) return _bind_GetWidth_overload_1(L);
		if (_lg_typecheck_GetWidth_overload_2(L)) return _bind_GetWidth_overload_2(L);

		luaL_error(L, "error in function GetWidth, cannot match any of the overloads for function GetWidth:\n  GetWidth()\n  GetWidth()\n");
		return 0;
	}

	// void wxTextAttrSize::SetWidth(int value, unsigned short flags)
	static int _bind_SetWidth_overload_1(lua_State *L) {
		if (!_lg_typecheck_SetWidth_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextAttrSize::SetWidth(int value, unsigned short flags) function, expected prototype:\nvoid wxTextAttrSize::SetWidth(int value, unsigned short flags)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);
		unsigned short flags=(unsigned short)lua_tointeger(L,3);

		wxTextAttrSize* self=(Luna< wxTextAttrSize >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextAttrSize::SetWidth(int, unsigned short). Got : '%s'\n%s",typeid(Luna< wxTextAttrSize >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetWidth(value, flags);

		return 0;
	}

	// void wxTextAttrSize::SetWidth(int value, wxTextAttrUnits units)
	static int _bind_SetWidth_overload_2(lua_State *L) {
		if (!_lg_typecheck_SetWidth_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextAttrSize::SetWidth(int value, wxTextAttrUnits units) function, expected prototype:\nvoid wxTextAttrSize::SetWidth(int value, wxTextAttrUnits units)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);
		wxTextAttrUnits units=(wxTextAttrUnits)lua_tointeger(L,3);

		wxTextAttrSize* self=(Luna< wxTextAttrSize >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextAttrSize::SetWidth(int, wxTextAttrUnits). Got : '%s'\n%s",typeid(Luna< wxTextAttrSize >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetWidth(value, units);

		return 0;
	}

	// void wxTextAttrSize::SetWidth(const wxTextAttrDimension & dim)
	static int _bind_SetWidth_overload_3(lua_State *L) {
		if (!_lg_typecheck_SetWidth_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextAttrSize::SetWidth(const wxTextAttrDimension & dim) function, expected prototype:\nvoid wxTextAttrSize::SetWidth(const wxTextAttrDimension & dim)\nClass arguments details:\narg 1 ID = 25580455\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTextAttrDimension* dim_ptr=(Luna< wxTextAttrDimension >::check(L,2));
		if( !dim_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dim in wxTextAttrSize::SetWidth function");
		}
		const wxTextAttrDimension & dim=*dim_ptr;

		wxTextAttrSize* self=(Luna< wxTextAttrSize >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextAttrSize::SetWidth(const wxTextAttrDimension &). Got : '%s'\n%s",typeid(Luna< wxTextAttrSize >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetWidth(dim);

		return 0;
	}

	// Overload binder for wxTextAttrSize::SetWidth
	static int _bind_SetWidth(lua_State *L) {
		if (_lg_typecheck_SetWidth_overload_1(L)) return _bind_SetWidth_overload_1(L);
		if (_lg_typecheck_SetWidth_overload_2(L)) return _bind_SetWidth_overload_2(L);
		if (_lg_typecheck_SetWidth_overload_3(L)) return _bind_SetWidth_overload_3(L);

		luaL_error(L, "error in function SetWidth, cannot match any of the overloads for function SetWidth:\n  SetWidth(int, unsigned short)\n  SetWidth(int, wxTextAttrUnits)\n  SetWidth(const wxTextAttrDimension &)\n");
		return 0;
	}

	// wxTextAttrDimension & wxTextAttrSize::GetHeight()
	static int _bind_GetHeight_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetHeight_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxTextAttrDimension & wxTextAttrSize::GetHeight() function, expected prototype:\nwxTextAttrDimension & wxTextAttrSize::GetHeight()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttrSize* self=(Luna< wxTextAttrSize >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTextAttrDimension & wxTextAttrSize::GetHeight(). Got : '%s'\n%s",typeid(Luna< wxTextAttrSize >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxTextAttrDimension* lret = &self->GetHeight();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttrDimension >::push(L,lret,false);

		return 1;
	}

	// const wxTextAttrDimension & wxTextAttrSize::GetHeight() const
	static int _bind_GetHeight_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetHeight_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const wxTextAttrDimension & wxTextAttrSize::GetHeight() const function, expected prototype:\nconst wxTextAttrDimension & wxTextAttrSize::GetHeight() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttrSize* self=(Luna< wxTextAttrSize >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxTextAttrDimension & wxTextAttrSize::GetHeight() const. Got : '%s'\n%s",typeid(Luna< wxTextAttrSize >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxTextAttrDimension* lret = &self->GetHeight();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttrDimension >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxTextAttrSize::GetHeight
	static int _bind_GetHeight(lua_State *L) {
		if (_lg_typecheck_GetHeight_overload_1(L)) return _bind_GetHeight_overload_1(L);
		if (_lg_typecheck_GetHeight_overload_2(L)) return _bind_GetHeight_overload_2(L);

		luaL_error(L, "error in function GetHeight, cannot match any of the overloads for function GetHeight:\n  GetHeight()\n  GetHeight()\n");
		return 0;
	}

	// void wxTextAttrSize::SetHeight(int value, unsigned short flags)
	static int _bind_SetHeight_overload_1(lua_State *L) {
		if (!_lg_typecheck_SetHeight_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextAttrSize::SetHeight(int value, unsigned short flags) function, expected prototype:\nvoid wxTextAttrSize::SetHeight(int value, unsigned short flags)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);
		unsigned short flags=(unsigned short)lua_tointeger(L,3);

		wxTextAttrSize* self=(Luna< wxTextAttrSize >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextAttrSize::SetHeight(int, unsigned short). Got : '%s'\n%s",typeid(Luna< wxTextAttrSize >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetHeight(value, flags);

		return 0;
	}

	// void wxTextAttrSize::SetHeight(int value, wxTextAttrUnits units)
	static int _bind_SetHeight_overload_2(lua_State *L) {
		if (!_lg_typecheck_SetHeight_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextAttrSize::SetHeight(int value, wxTextAttrUnits units) function, expected prototype:\nvoid wxTextAttrSize::SetHeight(int value, wxTextAttrUnits units)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);
		wxTextAttrUnits units=(wxTextAttrUnits)lua_tointeger(L,3);

		wxTextAttrSize* self=(Luna< wxTextAttrSize >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextAttrSize::SetHeight(int, wxTextAttrUnits). Got : '%s'\n%s",typeid(Luna< wxTextAttrSize >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetHeight(value, units);

		return 0;
	}

	// void wxTextAttrSize::SetHeight(const wxTextAttrDimension & dim)
	static int _bind_SetHeight_overload_3(lua_State *L) {
		if (!_lg_typecheck_SetHeight_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextAttrSize::SetHeight(const wxTextAttrDimension & dim) function, expected prototype:\nvoid wxTextAttrSize::SetHeight(const wxTextAttrDimension & dim)\nClass arguments details:\narg 1 ID = 25580455\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTextAttrDimension* dim_ptr=(Luna< wxTextAttrDimension >::check(L,2));
		if( !dim_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dim in wxTextAttrSize::SetHeight function");
		}
		const wxTextAttrDimension & dim=*dim_ptr;

		wxTextAttrSize* self=(Luna< wxTextAttrSize >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextAttrSize::SetHeight(const wxTextAttrDimension &). Got : '%s'\n%s",typeid(Luna< wxTextAttrSize >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetHeight(dim);

		return 0;
	}

	// Overload binder for wxTextAttrSize::SetHeight
	static int _bind_SetHeight(lua_State *L) {
		if (_lg_typecheck_SetHeight_overload_1(L)) return _bind_SetHeight_overload_1(L);
		if (_lg_typecheck_SetHeight_overload_2(L)) return _bind_SetHeight_overload_2(L);
		if (_lg_typecheck_SetHeight_overload_3(L)) return _bind_SetHeight_overload_3(L);

		luaL_error(L, "error in function SetHeight, cannot match any of the overloads for function SetHeight:\n  SetHeight(int, unsigned short)\n  SetHeight(int, wxTextAttrUnits)\n  SetHeight(const wxTextAttrDimension &)\n");
		return 0;
	}

	// wxTextAttrDimension wxTextAttrSize::m_width()
	static int _bind_getWidth(lua_State *L) {
		if (!_lg_typecheck_getWidth(L)) {
			luaL_error(L, "luna typecheck failed in wxTextAttrDimension wxTextAttrSize::m_width() function, expected prototype:\nwxTextAttrDimension wxTextAttrSize::m_width()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttrSize* self=(Luna< wxTextAttrSize >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTextAttrDimension wxTextAttrSize::m_width(). Got : '%s'\n%s",typeid(Luna< wxTextAttrSize >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxTextAttrDimension* lret = &self->m_width;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttrDimension >::push(L,lret,false);

		return 1;
	}

	// wxTextAttrDimension wxTextAttrSize::m_height()
	static int _bind_getHeight(lua_State *L) {
		if (!_lg_typecheck_getHeight(L)) {
			luaL_error(L, "luna typecheck failed in wxTextAttrDimension wxTextAttrSize::m_height() function, expected prototype:\nwxTextAttrDimension wxTextAttrSize::m_height()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttrSize* self=(Luna< wxTextAttrSize >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTextAttrDimension wxTextAttrSize::m_height(). Got : '%s'\n%s",typeid(Luna< wxTextAttrSize >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxTextAttrDimension* lret = &self->m_height;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttrDimension >::push(L,lret,false);

		return 1;
	}

	// void wxTextAttrSize::m_width(wxTextAttrDimension value)
	static int _bind_setWidth(lua_State *L) {
		if (!_lg_typecheck_setWidth(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextAttrSize::m_width(wxTextAttrDimension value) function, expected prototype:\nvoid wxTextAttrSize::m_width(wxTextAttrDimension value)\nClass arguments details:\narg 1 ID = 25580455\n\n%s",luna_dumpStack(L).c_str());
		}

		wxTextAttrDimension* value_ptr=(Luna< wxTextAttrDimension >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in wxTextAttrSize::m_width function");
		}
		wxTextAttrDimension value=*value_ptr;

		wxTextAttrSize* self=(Luna< wxTextAttrSize >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextAttrSize::m_width(wxTextAttrDimension). Got : '%s'\n%s",typeid(Luna< wxTextAttrSize >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_width = value;

		return 0;
	}

	// void wxTextAttrSize::m_height(wxTextAttrDimension value)
	static int _bind_setHeight(lua_State *L) {
		if (!_lg_typecheck_setHeight(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextAttrSize::m_height(wxTextAttrDimension value) function, expected prototype:\nvoid wxTextAttrSize::m_height(wxTextAttrDimension value)\nClass arguments details:\narg 1 ID = 25580455\n\n%s",luna_dumpStack(L).c_str());
		}

		wxTextAttrDimension* value_ptr=(Luna< wxTextAttrDimension >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in wxTextAttrSize::m_height function");
		}
		wxTextAttrDimension value=*value_ptr;

		wxTextAttrSize* self=(Luna< wxTextAttrSize >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextAttrSize::m_height(wxTextAttrDimension). Got : '%s'\n%s",typeid(Luna< wxTextAttrSize >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_height = value;

		return 0;
	}


	// Operator binds:
	// bool wxTextAttrSize::operator==(const wxTextAttrSize & size) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextAttrSize::operator==(const wxTextAttrSize & size) const function, expected prototype:\nbool wxTextAttrSize::operator==(const wxTextAttrSize & size) const\nClass arguments details:\narg 1 ID = 81312281\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTextAttrSize* size_ptr=(Luna< wxTextAttrSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxTextAttrSize::operator== function");
		}
		const wxTextAttrSize & size=*size_ptr;

		wxTextAttrSize* self=(Luna< wxTextAttrSize >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextAttrSize::operator==(const wxTextAttrSize &) const. Got : '%s'\n%s",typeid(Luna< wxTextAttrSize >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator==(size);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

wxTextAttrSize* LunaTraits< wxTextAttrSize >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxTextAttrSize::_bind_ctor(L);
}

void LunaTraits< wxTextAttrSize >::_bind_dtor(wxTextAttrSize* obj) {
	delete obj;
}

const char LunaTraits< wxTextAttrSize >::className[] = "wxTextAttrSize";
const char LunaTraits< wxTextAttrSize >::fullName[] = "wxTextAttrSize";
const char LunaTraits< wxTextAttrSize >::moduleName[] = "wx";
const char* LunaTraits< wxTextAttrSize >::parents[] = {0};
const int LunaTraits< wxTextAttrSize >::hash = 81312281;
const int LunaTraits< wxTextAttrSize >::uniqueIDs[] = {81312281,0};

luna_RegType LunaTraits< wxTextAttrSize >::methods[] = {
	{"Reset", &luna_wrapper_wxTextAttrSize::_bind_Reset},
	{"EqPartial", &luna_wrapper_wxTextAttrSize::_bind_EqPartial},
	{"Apply", &luna_wrapper_wxTextAttrSize::_bind_Apply},
	{"CollectCommonAttributes", &luna_wrapper_wxTextAttrSize::_bind_CollectCommonAttributes},
	{"RemoveStyle", &luna_wrapper_wxTextAttrSize::_bind_RemoveStyle},
	{"GetWidth", &luna_wrapper_wxTextAttrSize::_bind_GetWidth},
	{"SetWidth", &luna_wrapper_wxTextAttrSize::_bind_SetWidth},
	{"GetHeight", &luna_wrapper_wxTextAttrSize::_bind_GetHeight},
	{"SetHeight", &luna_wrapper_wxTextAttrSize::_bind_SetHeight},
	{"getWidth", &luna_wrapper_wxTextAttrSize::_bind_getWidth},
	{"getHeight", &luna_wrapper_wxTextAttrSize::_bind_getHeight},
	{"setWidth", &luna_wrapper_wxTextAttrSize::_bind_setWidth},
	{"setHeight", &luna_wrapper_wxTextAttrSize::_bind_setHeight},
	{"__eq", &luna_wrapper_wxTextAttrSize::_bind___eq},
	{"dynCast", &luna_wrapper_wxTextAttrSize::_bind_dynCast},
	{"fromVoid", &luna_wrapper_wxTextAttrSize::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxTextAttrSize::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< wxTextAttrSize >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxTextAttrSize >::enumValues[] = {
	{0,0}
};



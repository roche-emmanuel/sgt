#include <plug_common.h>

class luna_wrapper_wxTextAttrDimensions {
public:
	typedef Luna< wxTextAttrDimensions > luna_t;

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxTextAttrDimensions* self= (wxTextAttrDimensions*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxTextAttrDimensions >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92994080) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxTextAttrDimensions >::check(L,1));
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

		wxTextAttrDimensions* self=(Luna< wxTextAttrDimensions >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxTextAttrDimensions");
		
		return luna_dynamicCast(L,converters,"wxTextAttrDimensions",name);
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

		if( !Luna<void>::has_uniqueid(L,2,92994080) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Apply(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92994080) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,92994080)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CollectCommonAttributes(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92994080) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92994080) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,92994080) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RemoveStyle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92994080) ) return false;
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

	inline static bool _lg_typecheck_getTop(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getBottom(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setLeft(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25580455) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTop(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25580455) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25580455) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setBottom(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25580455) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92994080) ) return false;
		return true;
	}


	// Constructor binds:
	// wxTextAttrDimensions::wxTextAttrDimensions()
	static wxTextAttrDimensions* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxTextAttrDimensions::wxTextAttrDimensions() function, expected prototype:\nwxTextAttrDimensions::wxTextAttrDimensions()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxTextAttrDimensions();
	}


	// Function binds:
	// void wxTextAttrDimensions::Reset()
	static int _bind_Reset(lua_State *L) {
		if (!_lg_typecheck_Reset(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextAttrDimensions::Reset() function, expected prototype:\nvoid wxTextAttrDimensions::Reset()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttrDimensions* self=(Luna< wxTextAttrDimensions >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextAttrDimensions::Reset(). Got : '%s'\n%s",typeid(Luna< wxTextAttrDimensions >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Reset();

		return 0;
	}

	// bool wxTextAttrDimensions::EqPartial(const wxTextAttrDimensions & dims) const
	static int _bind_EqPartial(lua_State *L) {
		if (!_lg_typecheck_EqPartial(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextAttrDimensions::EqPartial(const wxTextAttrDimensions & dims) const function, expected prototype:\nbool wxTextAttrDimensions::EqPartial(const wxTextAttrDimensions & dims) const\nClass arguments details:\narg 1 ID = 92994080\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTextAttrDimensions* dims_ptr=(Luna< wxTextAttrDimensions >::check(L,2));
		if( !dims_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dims in wxTextAttrDimensions::EqPartial function");
		}
		const wxTextAttrDimensions & dims=*dims_ptr;

		wxTextAttrDimensions* self=(Luna< wxTextAttrDimensions >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextAttrDimensions::EqPartial(const wxTextAttrDimensions &) const. Got : '%s'\n%s",typeid(Luna< wxTextAttrDimensions >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->EqPartial(dims);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextAttrDimensions::Apply(const wxTextAttrDimensions & dims, const wxTextAttrDimensions * compareWith = NULL)
	static int _bind_Apply(lua_State *L) {
		if (!_lg_typecheck_Apply(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextAttrDimensions::Apply(const wxTextAttrDimensions & dims, const wxTextAttrDimensions * compareWith = NULL) function, expected prototype:\nbool wxTextAttrDimensions::Apply(const wxTextAttrDimensions & dims, const wxTextAttrDimensions * compareWith = NULL)\nClass arguments details:\narg 1 ID = 92994080\narg 2 ID = 92994080\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxTextAttrDimensions* dims_ptr=(Luna< wxTextAttrDimensions >::check(L,2));
		if( !dims_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dims in wxTextAttrDimensions::Apply function");
		}
		const wxTextAttrDimensions & dims=*dims_ptr;
		const wxTextAttrDimensions* compareWith=luatop>2 ? (Luna< wxTextAttrDimensions >::check(L,3)) : (const wxTextAttrDimensions*)NULL;

		wxTextAttrDimensions* self=(Luna< wxTextAttrDimensions >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextAttrDimensions::Apply(const wxTextAttrDimensions &, const wxTextAttrDimensions *). Got : '%s'\n%s",typeid(Luna< wxTextAttrDimensions >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Apply(dims, compareWith);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxTextAttrDimensions::CollectCommonAttributes(const wxTextAttrDimensions & attr, wxTextAttrDimensions & clashingAttr, wxTextAttrDimensions & absentAttr)
	static int _bind_CollectCommonAttributes(lua_State *L) {
		if (!_lg_typecheck_CollectCommonAttributes(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextAttrDimensions::CollectCommonAttributes(const wxTextAttrDimensions & attr, wxTextAttrDimensions & clashingAttr, wxTextAttrDimensions & absentAttr) function, expected prototype:\nvoid wxTextAttrDimensions::CollectCommonAttributes(const wxTextAttrDimensions & attr, wxTextAttrDimensions & clashingAttr, wxTextAttrDimensions & absentAttr)\nClass arguments details:\narg 1 ID = 92994080\narg 2 ID = 92994080\narg 3 ID = 92994080\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTextAttrDimensions* attr_ptr=(Luna< wxTextAttrDimensions >::check(L,2));
		if( !attr_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg attr in wxTextAttrDimensions::CollectCommonAttributes function");
		}
		const wxTextAttrDimensions & attr=*attr_ptr;
		wxTextAttrDimensions* clashingAttr_ptr=(Luna< wxTextAttrDimensions >::check(L,3));
		if( !clashingAttr_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg clashingAttr in wxTextAttrDimensions::CollectCommonAttributes function");
		}
		wxTextAttrDimensions & clashingAttr=*clashingAttr_ptr;
		wxTextAttrDimensions* absentAttr_ptr=(Luna< wxTextAttrDimensions >::check(L,4));
		if( !absentAttr_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg absentAttr in wxTextAttrDimensions::CollectCommonAttributes function");
		}
		wxTextAttrDimensions & absentAttr=*absentAttr_ptr;

		wxTextAttrDimensions* self=(Luna< wxTextAttrDimensions >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextAttrDimensions::CollectCommonAttributes(const wxTextAttrDimensions &, wxTextAttrDimensions &, wxTextAttrDimensions &). Got : '%s'\n%s",typeid(Luna< wxTextAttrDimensions >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->CollectCommonAttributes(attr, clashingAttr, absentAttr);

		return 0;
	}

	// bool wxTextAttrDimensions::RemoveStyle(const wxTextAttrDimensions & attr)
	static int _bind_RemoveStyle(lua_State *L) {
		if (!_lg_typecheck_RemoveStyle(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextAttrDimensions::RemoveStyle(const wxTextAttrDimensions & attr) function, expected prototype:\nbool wxTextAttrDimensions::RemoveStyle(const wxTextAttrDimensions & attr)\nClass arguments details:\narg 1 ID = 92994080\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTextAttrDimensions* attr_ptr=(Luna< wxTextAttrDimensions >::check(L,2));
		if( !attr_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg attr in wxTextAttrDimensions::RemoveStyle function");
		}
		const wxTextAttrDimensions & attr=*attr_ptr;

		wxTextAttrDimensions* self=(Luna< wxTextAttrDimensions >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextAttrDimensions::RemoveStyle(const wxTextAttrDimensions &). Got : '%s'\n%s",typeid(Luna< wxTextAttrDimensions >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->RemoveStyle(attr);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const wxTextAttrDimension & wxTextAttrDimensions::GetLeft() const
	static int _bind_GetLeft_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetLeft_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const wxTextAttrDimension & wxTextAttrDimensions::GetLeft() const function, expected prototype:\nconst wxTextAttrDimension & wxTextAttrDimensions::GetLeft() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttrDimensions* self=(Luna< wxTextAttrDimensions >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxTextAttrDimension & wxTextAttrDimensions::GetLeft() const. Got : '%s'\n%s",typeid(Luna< wxTextAttrDimensions >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxTextAttrDimension* lret = &self->GetLeft();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttrDimension >::push(L,lret,false);

		return 1;
	}

	// wxTextAttrDimension & wxTextAttrDimensions::GetLeft()
	static int _bind_GetLeft_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetLeft_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxTextAttrDimension & wxTextAttrDimensions::GetLeft() function, expected prototype:\nwxTextAttrDimension & wxTextAttrDimensions::GetLeft()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttrDimensions* self=(Luna< wxTextAttrDimensions >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTextAttrDimension & wxTextAttrDimensions::GetLeft(). Got : '%s'\n%s",typeid(Luna< wxTextAttrDimensions >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxTextAttrDimension* lret = &self->GetLeft();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttrDimension >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxTextAttrDimensions::GetLeft
	static int _bind_GetLeft(lua_State *L) {
		if (_lg_typecheck_GetLeft_overload_1(L)) return _bind_GetLeft_overload_1(L);
		if (_lg_typecheck_GetLeft_overload_2(L)) return _bind_GetLeft_overload_2(L);

		luaL_error(L, "error in function GetLeft, cannot match any of the overloads for function GetLeft:\n  GetLeft()\n  GetLeft()\n");
		return 0;
	}

	// const wxTextAttrDimension & wxTextAttrDimensions::GetRight() const
	static int _bind_GetRight_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetRight_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const wxTextAttrDimension & wxTextAttrDimensions::GetRight() const function, expected prototype:\nconst wxTextAttrDimension & wxTextAttrDimensions::GetRight() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttrDimensions* self=(Luna< wxTextAttrDimensions >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxTextAttrDimension & wxTextAttrDimensions::GetRight() const. Got : '%s'\n%s",typeid(Luna< wxTextAttrDimensions >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxTextAttrDimension* lret = &self->GetRight();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttrDimension >::push(L,lret,false);

		return 1;
	}

	// wxTextAttrDimension & wxTextAttrDimensions::GetRight()
	static int _bind_GetRight_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetRight_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxTextAttrDimension & wxTextAttrDimensions::GetRight() function, expected prototype:\nwxTextAttrDimension & wxTextAttrDimensions::GetRight()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttrDimensions* self=(Luna< wxTextAttrDimensions >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTextAttrDimension & wxTextAttrDimensions::GetRight(). Got : '%s'\n%s",typeid(Luna< wxTextAttrDimensions >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxTextAttrDimension* lret = &self->GetRight();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttrDimension >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxTextAttrDimensions::GetRight
	static int _bind_GetRight(lua_State *L) {
		if (_lg_typecheck_GetRight_overload_1(L)) return _bind_GetRight_overload_1(L);
		if (_lg_typecheck_GetRight_overload_2(L)) return _bind_GetRight_overload_2(L);

		luaL_error(L, "error in function GetRight, cannot match any of the overloads for function GetRight:\n  GetRight()\n  GetRight()\n");
		return 0;
	}

	// const wxTextAttrDimension & wxTextAttrDimensions::GetTop() const
	static int _bind_GetTop_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetTop_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const wxTextAttrDimension & wxTextAttrDimensions::GetTop() const function, expected prototype:\nconst wxTextAttrDimension & wxTextAttrDimensions::GetTop() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttrDimensions* self=(Luna< wxTextAttrDimensions >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxTextAttrDimension & wxTextAttrDimensions::GetTop() const. Got : '%s'\n%s",typeid(Luna< wxTextAttrDimensions >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxTextAttrDimension* lret = &self->GetTop();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttrDimension >::push(L,lret,false);

		return 1;
	}

	// wxTextAttrDimension & wxTextAttrDimensions::GetTop()
	static int _bind_GetTop_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetTop_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxTextAttrDimension & wxTextAttrDimensions::GetTop() function, expected prototype:\nwxTextAttrDimension & wxTextAttrDimensions::GetTop()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttrDimensions* self=(Luna< wxTextAttrDimensions >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTextAttrDimension & wxTextAttrDimensions::GetTop(). Got : '%s'\n%s",typeid(Luna< wxTextAttrDimensions >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxTextAttrDimension* lret = &self->GetTop();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttrDimension >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxTextAttrDimensions::GetTop
	static int _bind_GetTop(lua_State *L) {
		if (_lg_typecheck_GetTop_overload_1(L)) return _bind_GetTop_overload_1(L);
		if (_lg_typecheck_GetTop_overload_2(L)) return _bind_GetTop_overload_2(L);

		luaL_error(L, "error in function GetTop, cannot match any of the overloads for function GetTop:\n  GetTop()\n  GetTop()\n");
		return 0;
	}

	// const wxTextAttrDimension & wxTextAttrDimensions::GetBottom() const
	static int _bind_GetBottom_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetBottom_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const wxTextAttrDimension & wxTextAttrDimensions::GetBottom() const function, expected prototype:\nconst wxTextAttrDimension & wxTextAttrDimensions::GetBottom() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttrDimensions* self=(Luna< wxTextAttrDimensions >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxTextAttrDimension & wxTextAttrDimensions::GetBottom() const. Got : '%s'\n%s",typeid(Luna< wxTextAttrDimensions >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxTextAttrDimension* lret = &self->GetBottom();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttrDimension >::push(L,lret,false);

		return 1;
	}

	// wxTextAttrDimension & wxTextAttrDimensions::GetBottom()
	static int _bind_GetBottom_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetBottom_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxTextAttrDimension & wxTextAttrDimensions::GetBottom() function, expected prototype:\nwxTextAttrDimension & wxTextAttrDimensions::GetBottom()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttrDimensions* self=(Luna< wxTextAttrDimensions >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTextAttrDimension & wxTextAttrDimensions::GetBottom(). Got : '%s'\n%s",typeid(Luna< wxTextAttrDimensions >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxTextAttrDimension* lret = &self->GetBottom();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttrDimension >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxTextAttrDimensions::GetBottom
	static int _bind_GetBottom(lua_State *L) {
		if (_lg_typecheck_GetBottom_overload_1(L)) return _bind_GetBottom_overload_1(L);
		if (_lg_typecheck_GetBottom_overload_2(L)) return _bind_GetBottom_overload_2(L);

		luaL_error(L, "error in function GetBottom, cannot match any of the overloads for function GetBottom:\n  GetBottom()\n  GetBottom()\n");
		return 0;
	}

	// wxTextAttrDimension wxTextAttrDimensions::m_left()
	static int _bind_getLeft(lua_State *L) {
		if (!_lg_typecheck_getLeft(L)) {
			luaL_error(L, "luna typecheck failed in wxTextAttrDimension wxTextAttrDimensions::m_left() function, expected prototype:\nwxTextAttrDimension wxTextAttrDimensions::m_left()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttrDimensions* self=(Luna< wxTextAttrDimensions >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTextAttrDimension wxTextAttrDimensions::m_left(). Got : '%s'\n%s",typeid(Luna< wxTextAttrDimensions >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxTextAttrDimension* lret = &self->m_left;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttrDimension >::push(L,lret,false);

		return 1;
	}

	// wxTextAttrDimension wxTextAttrDimensions::m_top()
	static int _bind_getTop(lua_State *L) {
		if (!_lg_typecheck_getTop(L)) {
			luaL_error(L, "luna typecheck failed in wxTextAttrDimension wxTextAttrDimensions::m_top() function, expected prototype:\nwxTextAttrDimension wxTextAttrDimensions::m_top()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttrDimensions* self=(Luna< wxTextAttrDimensions >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTextAttrDimension wxTextAttrDimensions::m_top(). Got : '%s'\n%s",typeid(Luna< wxTextAttrDimensions >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxTextAttrDimension* lret = &self->m_top;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttrDimension >::push(L,lret,false);

		return 1;
	}

	// wxTextAttrDimension wxTextAttrDimensions::m_right()
	static int _bind_getRight(lua_State *L) {
		if (!_lg_typecheck_getRight(L)) {
			luaL_error(L, "luna typecheck failed in wxTextAttrDimension wxTextAttrDimensions::m_right() function, expected prototype:\nwxTextAttrDimension wxTextAttrDimensions::m_right()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttrDimensions* self=(Luna< wxTextAttrDimensions >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTextAttrDimension wxTextAttrDimensions::m_right(). Got : '%s'\n%s",typeid(Luna< wxTextAttrDimensions >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxTextAttrDimension* lret = &self->m_right;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttrDimension >::push(L,lret,false);

		return 1;
	}

	// wxTextAttrDimension wxTextAttrDimensions::m_bottom()
	static int _bind_getBottom(lua_State *L) {
		if (!_lg_typecheck_getBottom(L)) {
			luaL_error(L, "luna typecheck failed in wxTextAttrDimension wxTextAttrDimensions::m_bottom() function, expected prototype:\nwxTextAttrDimension wxTextAttrDimensions::m_bottom()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextAttrDimensions* self=(Luna< wxTextAttrDimensions >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTextAttrDimension wxTextAttrDimensions::m_bottom(). Got : '%s'\n%s",typeid(Luna< wxTextAttrDimensions >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxTextAttrDimension* lret = &self->m_bottom;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttrDimension >::push(L,lret,false);

		return 1;
	}

	// void wxTextAttrDimensions::m_left(wxTextAttrDimension value)
	static int _bind_setLeft(lua_State *L) {
		if (!_lg_typecheck_setLeft(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextAttrDimensions::m_left(wxTextAttrDimension value) function, expected prototype:\nvoid wxTextAttrDimensions::m_left(wxTextAttrDimension value)\nClass arguments details:\narg 1 ID = 25580455\n\n%s",luna_dumpStack(L).c_str());
		}

		wxTextAttrDimension* value_ptr=(Luna< wxTextAttrDimension >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in wxTextAttrDimensions::m_left function");
		}
		wxTextAttrDimension value=*value_ptr;

		wxTextAttrDimensions* self=(Luna< wxTextAttrDimensions >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextAttrDimensions::m_left(wxTextAttrDimension). Got : '%s'\n%s",typeid(Luna< wxTextAttrDimensions >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_left = value;

		return 0;
	}

	// void wxTextAttrDimensions::m_top(wxTextAttrDimension value)
	static int _bind_setTop(lua_State *L) {
		if (!_lg_typecheck_setTop(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextAttrDimensions::m_top(wxTextAttrDimension value) function, expected prototype:\nvoid wxTextAttrDimensions::m_top(wxTextAttrDimension value)\nClass arguments details:\narg 1 ID = 25580455\n\n%s",luna_dumpStack(L).c_str());
		}

		wxTextAttrDimension* value_ptr=(Luna< wxTextAttrDimension >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in wxTextAttrDimensions::m_top function");
		}
		wxTextAttrDimension value=*value_ptr;

		wxTextAttrDimensions* self=(Luna< wxTextAttrDimensions >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextAttrDimensions::m_top(wxTextAttrDimension). Got : '%s'\n%s",typeid(Luna< wxTextAttrDimensions >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_top = value;

		return 0;
	}

	// void wxTextAttrDimensions::m_right(wxTextAttrDimension value)
	static int _bind_setRight(lua_State *L) {
		if (!_lg_typecheck_setRight(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextAttrDimensions::m_right(wxTextAttrDimension value) function, expected prototype:\nvoid wxTextAttrDimensions::m_right(wxTextAttrDimension value)\nClass arguments details:\narg 1 ID = 25580455\n\n%s",luna_dumpStack(L).c_str());
		}

		wxTextAttrDimension* value_ptr=(Luna< wxTextAttrDimension >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in wxTextAttrDimensions::m_right function");
		}
		wxTextAttrDimension value=*value_ptr;

		wxTextAttrDimensions* self=(Luna< wxTextAttrDimensions >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextAttrDimensions::m_right(wxTextAttrDimension). Got : '%s'\n%s",typeid(Luna< wxTextAttrDimensions >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_right = value;

		return 0;
	}

	// void wxTextAttrDimensions::m_bottom(wxTextAttrDimension value)
	static int _bind_setBottom(lua_State *L) {
		if (!_lg_typecheck_setBottom(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextAttrDimensions::m_bottom(wxTextAttrDimension value) function, expected prototype:\nvoid wxTextAttrDimensions::m_bottom(wxTextAttrDimension value)\nClass arguments details:\narg 1 ID = 25580455\n\n%s",luna_dumpStack(L).c_str());
		}

		wxTextAttrDimension* value_ptr=(Luna< wxTextAttrDimension >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in wxTextAttrDimensions::m_bottom function");
		}
		wxTextAttrDimension value=*value_ptr;

		wxTextAttrDimensions* self=(Luna< wxTextAttrDimensions >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextAttrDimensions::m_bottom(wxTextAttrDimension). Got : '%s'\n%s",typeid(Luna< wxTextAttrDimensions >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_bottom = value;

		return 0;
	}


	// Operator binds:
	// bool wxTextAttrDimensions::operator==(const wxTextAttrDimensions & dims) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextAttrDimensions::operator==(const wxTextAttrDimensions & dims) const function, expected prototype:\nbool wxTextAttrDimensions::operator==(const wxTextAttrDimensions & dims) const\nClass arguments details:\narg 1 ID = 92994080\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTextAttrDimensions* dims_ptr=(Luna< wxTextAttrDimensions >::check(L,2));
		if( !dims_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dims in wxTextAttrDimensions::operator== function");
		}
		const wxTextAttrDimensions & dims=*dims_ptr;

		wxTextAttrDimensions* self=(Luna< wxTextAttrDimensions >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextAttrDimensions::operator==(const wxTextAttrDimensions &) const. Got : '%s'\n%s",typeid(Luna< wxTextAttrDimensions >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator==(dims);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

wxTextAttrDimensions* LunaTraits< wxTextAttrDimensions >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxTextAttrDimensions::_bind_ctor(L);
}

void LunaTraits< wxTextAttrDimensions >::_bind_dtor(wxTextAttrDimensions* obj) {
	delete obj;
}

const char LunaTraits< wxTextAttrDimensions >::className[] = "wxTextAttrDimensions";
const char LunaTraits< wxTextAttrDimensions >::fullName[] = "wxTextAttrDimensions";
const char LunaTraits< wxTextAttrDimensions >::moduleName[] = "wx";
const char* LunaTraits< wxTextAttrDimensions >::parents[] = {0};
const int LunaTraits< wxTextAttrDimensions >::hash = 92994080;
const int LunaTraits< wxTextAttrDimensions >::uniqueIDs[] = {92994080,0};

luna_RegType LunaTraits< wxTextAttrDimensions >::methods[] = {
	{"Reset", &luna_wrapper_wxTextAttrDimensions::_bind_Reset},
	{"EqPartial", &luna_wrapper_wxTextAttrDimensions::_bind_EqPartial},
	{"Apply", &luna_wrapper_wxTextAttrDimensions::_bind_Apply},
	{"CollectCommonAttributes", &luna_wrapper_wxTextAttrDimensions::_bind_CollectCommonAttributes},
	{"RemoveStyle", &luna_wrapper_wxTextAttrDimensions::_bind_RemoveStyle},
	{"GetLeft", &luna_wrapper_wxTextAttrDimensions::_bind_GetLeft},
	{"GetRight", &luna_wrapper_wxTextAttrDimensions::_bind_GetRight},
	{"GetTop", &luna_wrapper_wxTextAttrDimensions::_bind_GetTop},
	{"GetBottom", &luna_wrapper_wxTextAttrDimensions::_bind_GetBottom},
	{"getLeft", &luna_wrapper_wxTextAttrDimensions::_bind_getLeft},
	{"getTop", &luna_wrapper_wxTextAttrDimensions::_bind_getTop},
	{"getRight", &luna_wrapper_wxTextAttrDimensions::_bind_getRight},
	{"getBottom", &luna_wrapper_wxTextAttrDimensions::_bind_getBottom},
	{"setLeft", &luna_wrapper_wxTextAttrDimensions::_bind_setLeft},
	{"setTop", &luna_wrapper_wxTextAttrDimensions::_bind_setTop},
	{"setRight", &luna_wrapper_wxTextAttrDimensions::_bind_setRight},
	{"setBottom", &luna_wrapper_wxTextAttrDimensions::_bind_setBottom},
	{"__eq", &luna_wrapper_wxTextAttrDimensions::_bind___eq},
	{"dynCast", &luna_wrapper_wxTextAttrDimensions::_bind_dynCast},
	{"fromVoid", &luna_wrapper_wxTextAttrDimensions::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxTextAttrDimensions::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< wxTextAttrDimensions >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxTextAttrDimensions >::enumValues[] = {
	{0,0}
};



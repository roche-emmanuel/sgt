#include <plug_common.h>

class luna_wrapper_wxPosition {
public:
	typedef Luna< wxPosition > luna_t;

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxPosition* self= (wxPosition*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxPosition >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,9908765) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxPosition >::check(L,1));
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

		wxPosition* self=(Luna< wxPosition >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxPosition");
		
		return luna_dynamicCast(L,converters,"wxPosition",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetCol(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetColumn(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetRow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetCol(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetColumn(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetRow(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 10 valid operators)
	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,9908765) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_neq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,9908765) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_add_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,9908765) ) return false;
		if( (!(Luna< wxPosition >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_add_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		if( (!(Luna< wxSize >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_sub_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,9908765) ) return false;
		if( (!(Luna< wxPosition >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_sub_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		if( (!(Luna< wxSize >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___add_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,9908765) ) return false;
		if( (!(Luna< wxPosition >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___add_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		if( (!(Luna< wxSize >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___sub_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,9908765) ) return false;
		if( (!(Luna< wxPosition >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___sub_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		if( (!(Luna< wxSize >::check(L,2))) ) return false;
		return true;
	}


	// Constructor binds:
	// wxPosition::wxPosition()
	static wxPosition* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxPosition::wxPosition() function, expected prototype:\nwxPosition::wxPosition()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxPosition();
	}

	// wxPosition::wxPosition(int row, int col)
	static wxPosition* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxPosition::wxPosition(int row, int col) function, expected prototype:\nwxPosition::wxPosition(int row, int col)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int row=(int)lua_tointeger(L,1);
		int col=(int)lua_tointeger(L,2);

		return new wxPosition(row, col);
	}

	// Overload binder for wxPosition::wxPosition
	static wxPosition* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxPosition, cannot match any of the overloads for function wxPosition:\n  wxPosition()\n  wxPosition(int, int)\n");
		return NULL;
	}


	// Function binds:
	// int wxPosition::GetCol() const
	static int _bind_GetCol(lua_State *L) {
		if (!_lg_typecheck_GetCol(L)) {
			luaL_error(L, "luna typecheck failed in int wxPosition::GetCol() const function, expected prototype:\nint wxPosition::GetCol() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPosition* self=(Luna< wxPosition >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxPosition::GetCol() const. Got : '%s'\n%s",typeid(Luna< wxPosition >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetCol();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxPosition::GetColumn() const
	static int _bind_GetColumn(lua_State *L) {
		if (!_lg_typecheck_GetColumn(L)) {
			luaL_error(L, "luna typecheck failed in int wxPosition::GetColumn() const function, expected prototype:\nint wxPosition::GetColumn() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPosition* self=(Luna< wxPosition >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxPosition::GetColumn() const. Got : '%s'\n%s",typeid(Luna< wxPosition >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetColumn();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxPosition::GetRow() const
	static int _bind_GetRow(lua_State *L) {
		if (!_lg_typecheck_GetRow(L)) {
			luaL_error(L, "luna typecheck failed in int wxPosition::GetRow() const function, expected prototype:\nint wxPosition::GetRow() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPosition* self=(Luna< wxPosition >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxPosition::GetRow() const. Got : '%s'\n%s",typeid(Luna< wxPosition >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetRow();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxPosition::SetCol(int column)
	static int _bind_SetCol(lua_State *L) {
		if (!_lg_typecheck_SetCol(L)) {
			luaL_error(L, "luna typecheck failed in void wxPosition::SetCol(int column) function, expected prototype:\nvoid wxPosition::SetCol(int column)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int column=(int)lua_tointeger(L,2);

		wxPosition* self=(Luna< wxPosition >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPosition::SetCol(int). Got : '%s'\n%s",typeid(Luna< wxPosition >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetCol(column);

		return 0;
	}

	// void wxPosition::SetColumn(int column)
	static int _bind_SetColumn(lua_State *L) {
		if (!_lg_typecheck_SetColumn(L)) {
			luaL_error(L, "luna typecheck failed in void wxPosition::SetColumn(int column) function, expected prototype:\nvoid wxPosition::SetColumn(int column)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int column=(int)lua_tointeger(L,2);

		wxPosition* self=(Luna< wxPosition >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPosition::SetColumn(int). Got : '%s'\n%s",typeid(Luna< wxPosition >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetColumn(column);

		return 0;
	}

	// void wxPosition::SetRow(int row)
	static int _bind_SetRow(lua_State *L) {
		if (!_lg_typecheck_SetRow(L)) {
			luaL_error(L, "luna typecheck failed in void wxPosition::SetRow(int row) function, expected prototype:\nvoid wxPosition::SetRow(int row)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int row=(int)lua_tointeger(L,2);

		wxPosition* self=(Luna< wxPosition >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPosition::SetRow(int). Got : '%s'\n%s",typeid(Luna< wxPosition >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetRow(row);

		return 0;
	}


	// Operator binds:
	// bool wxPosition::operator==(const wxPosition & p) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPosition::operator==(const wxPosition & p) const function, expected prototype:\nbool wxPosition::operator==(const wxPosition & p) const\nClass arguments details:\narg 1 ID = 9908765\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPosition* p_ptr=(Luna< wxPosition >::check(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in wxPosition::operator== function");
		}
		const wxPosition & p=*p_ptr;

		wxPosition* self=(Luna< wxPosition >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPosition::operator==(const wxPosition &) const. Got : '%s'\n%s",typeid(Luna< wxPosition >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator==(p);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPosition::operator!=(const wxPosition & p) const
	static int _bind_op_neq(lua_State *L) {
		if (!_lg_typecheck_op_neq(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPosition::operator!=(const wxPosition & p) const function, expected prototype:\nbool wxPosition::operator!=(const wxPosition & p) const\nClass arguments details:\narg 1 ID = 9908765\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPosition* p_ptr=(Luna< wxPosition >::check(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in wxPosition::operator!= function");
		}
		const wxPosition & p=*p_ptr;

		wxPosition* self=(Luna< wxPosition >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPosition::operator!=(const wxPosition &) const. Got : '%s'\n%s",typeid(Luna< wxPosition >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator!=(p);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxPosition & wxPosition::operator+=(const wxPosition & p) const
	static int _bind_op_add_overload_1(lua_State *L) {
		if (!_lg_typecheck_op_add_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxPosition & wxPosition::operator+=(const wxPosition & p) const function, expected prototype:\nwxPosition & wxPosition::operator+=(const wxPosition & p) const\nClass arguments details:\narg 1 ID = 9908765\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPosition* p_ptr=(Luna< wxPosition >::check(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in wxPosition::operator+= function");
		}
		const wxPosition & p=*p_ptr;

		wxPosition* self=(Luna< wxPosition >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPosition & wxPosition::operator+=(const wxPosition &) const. Got : '%s'\n%s",typeid(Luna< wxPosition >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxPosition* lret = &self->operator+=(p);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPosition >::push(L,lret,false);

		return 1;
	}

	// wxPosition & wxPosition::operator+=(const wxSize & s) const
	static int _bind_op_add_overload_2(lua_State *L) {
		if (!_lg_typecheck_op_add_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxPosition & wxPosition::operator+=(const wxSize & s) const function, expected prototype:\nwxPosition & wxPosition::operator+=(const wxSize & s) const\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* s_ptr=(Luna< wxSize >::check(L,2));
		if( !s_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg s in wxPosition::operator+= function");
		}
		const wxSize & s=*s_ptr;

		wxPosition* self=(Luna< wxPosition >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPosition & wxPosition::operator+=(const wxSize &) const. Got : '%s'\n%s",typeid(Luna< wxPosition >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxPosition* lret = &self->operator+=(s);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPosition >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxPosition::operator+=
	static int _bind_op_add(lua_State *L) {
		if (_lg_typecheck_op_add_overload_1(L)) return _bind_op_add_overload_1(L);
		if (_lg_typecheck_op_add_overload_2(L)) return _bind_op_add_overload_2(L);

		luaL_error(L, "error in function operator+=, cannot match any of the overloads for function operator+=:\n  operator+=(const wxPosition &)\n  operator+=(const wxSize &)\n");
		return 0;
	}

	// wxPosition & wxPosition::operator-=(const wxPosition & p) const
	static int _bind_op_sub_overload_1(lua_State *L) {
		if (!_lg_typecheck_op_sub_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxPosition & wxPosition::operator-=(const wxPosition & p) const function, expected prototype:\nwxPosition & wxPosition::operator-=(const wxPosition & p) const\nClass arguments details:\narg 1 ID = 9908765\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPosition* p_ptr=(Luna< wxPosition >::check(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in wxPosition::operator-= function");
		}
		const wxPosition & p=*p_ptr;

		wxPosition* self=(Luna< wxPosition >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPosition & wxPosition::operator-=(const wxPosition &) const. Got : '%s'\n%s",typeid(Luna< wxPosition >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxPosition* lret = &self->operator-=(p);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPosition >::push(L,lret,false);

		return 1;
	}

	// wxPosition & wxPosition::operator-=(const wxSize & s) const
	static int _bind_op_sub_overload_2(lua_State *L) {
		if (!_lg_typecheck_op_sub_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxPosition & wxPosition::operator-=(const wxSize & s) const function, expected prototype:\nwxPosition & wxPosition::operator-=(const wxSize & s) const\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* s_ptr=(Luna< wxSize >::check(L,2));
		if( !s_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg s in wxPosition::operator-= function");
		}
		const wxSize & s=*s_ptr;

		wxPosition* self=(Luna< wxPosition >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPosition & wxPosition::operator-=(const wxSize &) const. Got : '%s'\n%s",typeid(Luna< wxPosition >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxPosition* lret = &self->operator-=(s);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPosition >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxPosition::operator-=
	static int _bind_op_sub(lua_State *L) {
		if (_lg_typecheck_op_sub_overload_1(L)) return _bind_op_sub_overload_1(L);
		if (_lg_typecheck_op_sub_overload_2(L)) return _bind_op_sub_overload_2(L);

		luaL_error(L, "error in function operator-=, cannot match any of the overloads for function operator-=:\n  operator-=(const wxPosition &)\n  operator-=(const wxSize &)\n");
		return 0;
	}

	// wxPosition & wxPosition::operator+(const wxPosition & p) const
	static int _bind___add_overload_1(lua_State *L) {
		if (!_lg_typecheck___add_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxPosition & wxPosition::operator+(const wxPosition & p) const function, expected prototype:\nwxPosition & wxPosition::operator+(const wxPosition & p) const\nClass arguments details:\narg 1 ID = 9908765\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPosition* p_ptr=(Luna< wxPosition >::check(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in wxPosition::operator+ function");
		}
		const wxPosition & p=*p_ptr;

		wxPosition* self=(Luna< wxPosition >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPosition & wxPosition::operator+(const wxPosition &) const. Got : '%s'\n%s",typeid(Luna< wxPosition >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxPosition* lret = &self->operator+(p);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPosition >::push(L,lret,false);

		return 1;
	}

	// wxPosition & wxPosition::operator+(const wxSize & s) const
	static int _bind___add_overload_2(lua_State *L) {
		if (!_lg_typecheck___add_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxPosition & wxPosition::operator+(const wxSize & s) const function, expected prototype:\nwxPosition & wxPosition::operator+(const wxSize & s) const\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* s_ptr=(Luna< wxSize >::check(L,2));
		if( !s_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg s in wxPosition::operator+ function");
		}
		const wxSize & s=*s_ptr;

		wxPosition* self=(Luna< wxPosition >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPosition & wxPosition::operator+(const wxSize &) const. Got : '%s'\n%s",typeid(Luna< wxPosition >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxPosition* lret = &self->operator+(s);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPosition >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxPosition::operator+
	static int _bind___add(lua_State *L) {
		if (_lg_typecheck___add_overload_1(L)) return _bind___add_overload_1(L);
		if (_lg_typecheck___add_overload_2(L)) return _bind___add_overload_2(L);

		luaL_error(L, "error in function operator+, cannot match any of the overloads for function operator+:\n  operator+(const wxPosition &)\n  operator+(const wxSize &)\n");
		return 0;
	}

	// wxPosition & wxPosition::operator-(const wxPosition & p) const
	static int _bind___sub_overload_1(lua_State *L) {
		if (!_lg_typecheck___sub_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxPosition & wxPosition::operator-(const wxPosition & p) const function, expected prototype:\nwxPosition & wxPosition::operator-(const wxPosition & p) const\nClass arguments details:\narg 1 ID = 9908765\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPosition* p_ptr=(Luna< wxPosition >::check(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in wxPosition::operator- function");
		}
		const wxPosition & p=*p_ptr;

		wxPosition* self=(Luna< wxPosition >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPosition & wxPosition::operator-(const wxPosition &) const. Got : '%s'\n%s",typeid(Luna< wxPosition >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxPosition* lret = &self->operator-(p);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPosition >::push(L,lret,false);

		return 1;
	}

	// wxPosition & wxPosition::operator-(const wxSize & s) const
	static int _bind___sub_overload_2(lua_State *L) {
		if (!_lg_typecheck___sub_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxPosition & wxPosition::operator-(const wxSize & s) const function, expected prototype:\nwxPosition & wxPosition::operator-(const wxSize & s) const\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* s_ptr=(Luna< wxSize >::check(L,2));
		if( !s_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg s in wxPosition::operator- function");
		}
		const wxSize & s=*s_ptr;

		wxPosition* self=(Luna< wxPosition >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPosition & wxPosition::operator-(const wxSize &) const. Got : '%s'\n%s",typeid(Luna< wxPosition >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxPosition* lret = &self->operator-(s);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPosition >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxPosition::operator-
	static int _bind___sub(lua_State *L) {
		if (_lg_typecheck___sub_overload_1(L)) return _bind___sub_overload_1(L);
		if (_lg_typecheck___sub_overload_2(L)) return _bind___sub_overload_2(L);

		luaL_error(L, "error in function operator-, cannot match any of the overloads for function operator-:\n  operator-(const wxPosition &)\n  operator-(const wxSize &)\n");
		return 0;
	}


};

wxPosition* LunaTraits< wxPosition >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxPosition::_bind_ctor(L);
}

void LunaTraits< wxPosition >::_bind_dtor(wxPosition* obj) {
	delete obj;
}

const char LunaTraits< wxPosition >::className[] = "wxPosition";
const char LunaTraits< wxPosition >::fullName[] = "wxPosition";
const char LunaTraits< wxPosition >::moduleName[] = "wx";
const char* LunaTraits< wxPosition >::parents[] = {0};
const int LunaTraits< wxPosition >::hash = 9908765;
const int LunaTraits< wxPosition >::uniqueIDs[] = {9908765,0};

luna_RegType LunaTraits< wxPosition >::methods[] = {
	{"GetCol", &luna_wrapper_wxPosition::_bind_GetCol},
	{"GetColumn", &luna_wrapper_wxPosition::_bind_GetColumn},
	{"GetRow", &luna_wrapper_wxPosition::_bind_GetRow},
	{"SetCol", &luna_wrapper_wxPosition::_bind_SetCol},
	{"SetColumn", &luna_wrapper_wxPosition::_bind_SetColumn},
	{"SetRow", &luna_wrapper_wxPosition::_bind_SetRow},
	{"__eq", &luna_wrapper_wxPosition::_bind___eq},
	{"op_neq", &luna_wrapper_wxPosition::_bind_op_neq},
	{"op_add", &luna_wrapper_wxPosition::_bind_op_add},
	{"op_sub", &luna_wrapper_wxPosition::_bind_op_sub},
	{"__add", &luna_wrapper_wxPosition::_bind___add},
	{"__sub", &luna_wrapper_wxPosition::_bind___sub},
	{"dynCast", &luna_wrapper_wxPosition::_bind_dynCast},
	{"fromVoid", &luna_wrapper_wxPosition::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxPosition::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< wxPosition >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxPosition >::enumValues[] = {
	{0,0}
};



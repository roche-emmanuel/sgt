#include <plug_common.h>

class luna_wrapper_wxPoint {
public:
	typedef Luna< wxPoint > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,25723480) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxPoint*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxPoint* rhs =(Luna< wxPoint >::check(L,2));
		wxPoint* self=(Luna< wxPoint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		lua_pushboolean(L,self==rhs?1:0);

		return 1;
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

		wxPoint* self= (wxPoint*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxPoint >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,25723480) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxPoint >::check(L,1));
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

		wxPoint* self=(Luna< wxPoint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxPoint");
		
		return luna_dynamicCast(L,converters,"wxPoint",name);
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

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,40755714) ) return false;
		if( (!(Luna< wxRealPoint >::check(L,1))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_IsFullySpecified(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetDefaults(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetX(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,25723480)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetY(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,25723480)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getX(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getY(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setX(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setY(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 5 valid operators)
	inline static bool _lg_typecheck_op_assign(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_add_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		if( (!(Luna< wxPoint >::check(L,2))) ) return false;
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

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		if( (!(Luna< wxPoint >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_sub_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		if( (!(Luna< wxSize >::check(L,2))) ) return false;
		return true;
	}


	// Constructor binds:
	// wxPoint::wxPoint()
	static wxPoint* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxPoint::wxPoint() function, expected prototype:\nwxPoint::wxPoint()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxPoint();
	}

	// wxPoint::wxPoint(int x, int y)
	static wxPoint* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxPoint::wxPoint(int x, int y) function, expected prototype:\nwxPoint::wxPoint(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,1);
		int y=(int)lua_tointeger(L,2);

		return new wxPoint(x, y);
	}

	// wxPoint::wxPoint(const wxRealPoint & pt)
	static wxPoint* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in wxPoint::wxPoint(const wxRealPoint & pt) function, expected prototype:\nwxPoint::wxPoint(const wxRealPoint & pt)\nClass arguments details:\narg 1 ID = 40755714\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxRealPoint* pt_ptr=(Luna< wxRealPoint >::check(L,1));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxPoint::wxPoint function");
		}
		const wxRealPoint & pt=*pt_ptr;

		return new wxPoint(pt);
	}

	// Overload binder for wxPoint::wxPoint
	static wxPoint* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function wxPoint, cannot match any of the overloads for function wxPoint:\n  wxPoint()\n  wxPoint(int, int)\n  wxPoint(const wxRealPoint &)\n");
		return NULL;
	}


	// Function binds:
	// bool wxPoint::IsFullySpecified() const
	static int _bind_IsFullySpecified(lua_State *L) {
		if (!_lg_typecheck_IsFullySpecified(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPoint::IsFullySpecified() const function, expected prototype:\nbool wxPoint::IsFullySpecified() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPoint* self=(Luna< wxPoint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPoint::IsFullySpecified() const. Got : '%s'\n%s",typeid(Luna< wxPoint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsFullySpecified();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxPoint::SetDefaults(const wxPoint & pt)
	static int _bind_SetDefaults(lua_State *L) {
		if (!_lg_typecheck_SetDefaults(L)) {
			luaL_error(L, "luna typecheck failed in void wxPoint::SetDefaults(const wxPoint & pt) function, expected prototype:\nvoid wxPoint::SetDefaults(const wxPoint & pt)\nClass arguments details:\narg 1 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint* pt_ptr=(Luna< wxPoint >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxPoint::SetDefaults function");
		}
		const wxPoint & pt=*pt_ptr;

		wxPoint* self=(Luna< wxPoint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPoint::SetDefaults(const wxPoint &). Got : '%s'\n%s",typeid(Luna< wxPoint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetDefaults(pt);

		return 0;
	}

	// int wxPoint::GetX(wxPoint * point)
	static int _bind_GetX(lua_State *L) {
		if (!_lg_typecheck_GetX(L)) {
			luaL_error(L, "luna typecheck failed in int wxPoint::GetX(wxPoint * point) function, expected prototype:\nint wxPoint::GetX(wxPoint * point)\nClass arguments details:\narg 1 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		wxPoint* point=(Luna< wxPoint >::check(L,1));

		int lret = GetX(point);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxPoint::GetY(wxPoint * point)
	static int _bind_GetY(lua_State *L) {
		if (!_lg_typecheck_GetY(L)) {
			luaL_error(L, "luna typecheck failed in int wxPoint::GetY(wxPoint * point) function, expected prototype:\nint wxPoint::GetY(wxPoint * point)\nClass arguments details:\narg 1 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		wxPoint* point=(Luna< wxPoint >::check(L,1));

		int lret = GetY(point);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxPoint::x()
	static int _bind_getX(lua_State *L) {
		if (!_lg_typecheck_getX(L)) {
			luaL_error(L, "luna typecheck failed in int wxPoint::x() function, expected prototype:\nint wxPoint::x()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPoint* self=(Luna< wxPoint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxPoint::x(). Got : '%s'\n%s",typeid(Luna< wxPoint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->x;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxPoint::y()
	static int _bind_getY(lua_State *L) {
		if (!_lg_typecheck_getY(L)) {
			luaL_error(L, "luna typecheck failed in int wxPoint::y() function, expected prototype:\nint wxPoint::y()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPoint* self=(Luna< wxPoint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxPoint::y(). Got : '%s'\n%s",typeid(Luna< wxPoint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->y;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxPoint::x(int value)
	static int _bind_setX(lua_State *L) {
		if (!_lg_typecheck_setX(L)) {
			luaL_error(L, "luna typecheck failed in void wxPoint::x(int value) function, expected prototype:\nvoid wxPoint::x(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		wxPoint* self=(Luna< wxPoint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPoint::x(int). Got : '%s'\n%s",typeid(Luna< wxPoint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->x = value;

		return 0;
	}

	// void wxPoint::y(int value)
	static int _bind_setY(lua_State *L) {
		if (!_lg_typecheck_setY(L)) {
			luaL_error(L, "luna typecheck failed in void wxPoint::y(int value) function, expected prototype:\nvoid wxPoint::y(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		wxPoint* self=(Luna< wxPoint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPoint::y(int). Got : '%s'\n%s",typeid(Luna< wxPoint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->y = value;

		return 0;
	}


	// Operator binds:
	// wxPoint & wxPoint::operator=(const wxPoint & pt)
	static int _bind_op_assign(lua_State *L) {
		if (!_lg_typecheck_op_assign(L)) {
			luaL_error(L, "luna typecheck failed in wxPoint & wxPoint::operator=(const wxPoint & pt) function, expected prototype:\nwxPoint & wxPoint::operator=(const wxPoint & pt)\nClass arguments details:\narg 1 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint* pt_ptr=(Luna< wxPoint >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxPoint::operator= function");
		}
		const wxPoint & pt=*pt_ptr;

		wxPoint* self=(Luna< wxPoint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPoint & wxPoint::operator=(const wxPoint &). Got : '%s'\n%s",typeid(Luna< wxPoint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxPoint* lret = &self->operator=(pt);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,false);

		return 1;
	}

	// wxPoint & wxPoint::operator+=(const wxPoint & pt)
	static int _bind_op_add_overload_1(lua_State *L) {
		if (!_lg_typecheck_op_add_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxPoint & wxPoint::operator+=(const wxPoint & pt) function, expected prototype:\nwxPoint & wxPoint::operator+=(const wxPoint & pt)\nClass arguments details:\narg 1 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint* pt_ptr=(Luna< wxPoint >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxPoint::operator+= function");
		}
		const wxPoint & pt=*pt_ptr;

		wxPoint* self=(Luna< wxPoint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPoint & wxPoint::operator+=(const wxPoint &). Got : '%s'\n%s",typeid(Luna< wxPoint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxPoint* lret = &self->operator+=(pt);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,false);

		return 1;
	}

	// wxPoint & wxPoint::operator+=(const wxSize & sz)
	static int _bind_op_add_overload_2(lua_State *L) {
		if (!_lg_typecheck_op_add_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxPoint & wxPoint::operator+=(const wxSize & sz) function, expected prototype:\nwxPoint & wxPoint::operator+=(const wxSize & sz)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* sz_ptr=(Luna< wxSize >::check(L,2));
		if( !sz_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sz in wxPoint::operator+= function");
		}
		const wxSize & sz=*sz_ptr;

		wxPoint* self=(Luna< wxPoint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPoint & wxPoint::operator+=(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxPoint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxPoint* lret = &self->operator+=(sz);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxPoint::operator+=
	static int _bind_op_add(lua_State *L) {
		if (_lg_typecheck_op_add_overload_1(L)) return _bind_op_add_overload_1(L);
		if (_lg_typecheck_op_add_overload_2(L)) return _bind_op_add_overload_2(L);

		luaL_error(L, "error in function operator+=, cannot match any of the overloads for function operator+=:\n  operator+=(const wxPoint &)\n  operator+=(const wxSize &)\n");
		return 0;
	}

	// wxPoint & wxPoint::operator-=(const wxPoint & pt)
	static int _bind_op_sub_overload_1(lua_State *L) {
		if (!_lg_typecheck_op_sub_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxPoint & wxPoint::operator-=(const wxPoint & pt) function, expected prototype:\nwxPoint & wxPoint::operator-=(const wxPoint & pt)\nClass arguments details:\narg 1 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint* pt_ptr=(Luna< wxPoint >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxPoint::operator-= function");
		}
		const wxPoint & pt=*pt_ptr;

		wxPoint* self=(Luna< wxPoint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPoint & wxPoint::operator-=(const wxPoint &). Got : '%s'\n%s",typeid(Luna< wxPoint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxPoint* lret = &self->operator-=(pt);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,false);

		return 1;
	}

	// wxPoint & wxPoint::operator-=(const wxSize & sz)
	static int _bind_op_sub_overload_2(lua_State *L) {
		if (!_lg_typecheck_op_sub_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxPoint & wxPoint::operator-=(const wxSize & sz) function, expected prototype:\nwxPoint & wxPoint::operator-=(const wxSize & sz)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* sz_ptr=(Luna< wxSize >::check(L,2));
		if( !sz_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sz in wxPoint::operator-= function");
		}
		const wxSize & sz=*sz_ptr;

		wxPoint* self=(Luna< wxPoint >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPoint & wxPoint::operator-=(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxPoint >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxPoint* lret = &self->operator-=(sz);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxPoint::operator-=
	static int _bind_op_sub(lua_State *L) {
		if (_lg_typecheck_op_sub_overload_1(L)) return _bind_op_sub_overload_1(L);
		if (_lg_typecheck_op_sub_overload_2(L)) return _bind_op_sub_overload_2(L);

		luaL_error(L, "error in function operator-=, cannot match any of the overloads for function operator-=:\n  operator-=(const wxPoint &)\n  operator-=(const wxSize &)\n");
		return 0;
	}


};

wxPoint* LunaTraits< wxPoint >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxPoint::_bind_ctor(L);
}

void LunaTraits< wxPoint >::_bind_dtor(wxPoint* obj) {
	delete obj;
}

const char LunaTraits< wxPoint >::className[] = "wxPoint";
const char LunaTraits< wxPoint >::fullName[] = "wxPoint";
const char LunaTraits< wxPoint >::moduleName[] = "wx";
const char* LunaTraits< wxPoint >::parents[] = {0};
const int LunaTraits< wxPoint >::hash = 25723480;
const int LunaTraits< wxPoint >::uniqueIDs[] = {25723480,0};

luna_RegType LunaTraits< wxPoint >::methods[] = {
	{"IsFullySpecified", &luna_wrapper_wxPoint::_bind_IsFullySpecified},
	{"SetDefaults", &luna_wrapper_wxPoint::_bind_SetDefaults},
	{"GetX", &luna_wrapper_wxPoint::_bind_GetX},
	{"GetY", &luna_wrapper_wxPoint::_bind_GetY},
	{"getX", &luna_wrapper_wxPoint::_bind_getX},
	{"getY", &luna_wrapper_wxPoint::_bind_getY},
	{"setX", &luna_wrapper_wxPoint::_bind_setX},
	{"setY", &luna_wrapper_wxPoint::_bind_setY},
	{"op_assign", &luna_wrapper_wxPoint::_bind_op_assign},
	{"op_add", &luna_wrapper_wxPoint::_bind_op_add},
	{"op_sub", &luna_wrapper_wxPoint::_bind_op_sub},
	{"dynCast", &luna_wrapper_wxPoint::_bind_dynCast},
	{"__eq", &luna_wrapper_wxPoint::_bind___eq},
	{"fromVoid", &luna_wrapper_wxPoint::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxPoint::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< wxPoint >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxPoint >::enumValues[] = {
	{0,0}
};



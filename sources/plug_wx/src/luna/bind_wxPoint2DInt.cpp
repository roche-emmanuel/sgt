#include <plug_common.h>

class luna_wrapper_wxPoint2DInt {
public:
	typedef Luna< wxPoint2DInt > luna_t;

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxPoint2DInt* self= (wxPoint2DInt*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxPoint2DInt >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,81619599) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxPoint2DInt >::check(L,1));
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

		wxPoint2DInt* self=(Luna< wxPoint2DInt >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxPoint2DInt");
		
		return luna_dynamicCast(L,converters,"wxPoint2DInt",name);
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

		if( !Luna<void>::has_uniqueid(L,1,81619599) ) return false;
		if( (!(Luna< wxPoint2DInt >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,25723480) ) return false;
		if( (!(Luna< wxPoint >::check(L,1))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetFloor(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetRounded(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetVectorLength(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetVectorAngle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetVectorLength(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetVectorAngle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Normalize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetDistance(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81619599) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetDistanceSquare(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81619599) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetDotProduct(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81619599) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetCrossProduct(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81619599) ) return false;
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
	// (found 6 valid operators)
	inline static bool _lg_typecheck___unm(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_op_assign(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81619599) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_add(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81619599) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_sub(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81619599) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81619599) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_neq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81619599) ) return false;
		return true;
	}


	// Constructor binds:
	// wxPoint2DInt::wxPoint2DInt()
	static wxPoint2DInt* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxPoint2DInt::wxPoint2DInt() function, expected prototype:\nwxPoint2DInt::wxPoint2DInt()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxPoint2DInt();
	}

	// wxPoint2DInt::wxPoint2DInt(int x, int y)
	static wxPoint2DInt* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxPoint2DInt::wxPoint2DInt(int x, int y) function, expected prototype:\nwxPoint2DInt::wxPoint2DInt(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,1);
		int y=(int)lua_tointeger(L,2);

		return new wxPoint2DInt(x, y);
	}

	// wxPoint2DInt::wxPoint2DInt(const wxPoint2DInt & pt)
	static wxPoint2DInt* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in wxPoint2DInt::wxPoint2DInt(const wxPoint2DInt & pt) function, expected prototype:\nwxPoint2DInt::wxPoint2DInt(const wxPoint2DInt & pt)\nClass arguments details:\narg 1 ID = 81619599\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint2DInt* pt_ptr=(Luna< wxPoint2DInt >::check(L,1));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxPoint2DInt::wxPoint2DInt function");
		}
		const wxPoint2DInt & pt=*pt_ptr;

		return new wxPoint2DInt(pt);
	}

	// wxPoint2DInt::wxPoint2DInt(const wxPoint & pt)
	static wxPoint2DInt* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in wxPoint2DInt::wxPoint2DInt(const wxPoint & pt) function, expected prototype:\nwxPoint2DInt::wxPoint2DInt(const wxPoint & pt)\nClass arguments details:\narg 1 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint* pt_ptr=(Luna< wxPoint >::check(L,1));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxPoint2DInt::wxPoint2DInt function");
		}
		const wxPoint & pt=*pt_ptr;

		return new wxPoint2DInt(pt);
	}

	// Overload binder for wxPoint2DInt::wxPoint2DInt
	static wxPoint2DInt* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function wxPoint2DInt, cannot match any of the overloads for function wxPoint2DInt:\n  wxPoint2DInt()\n  wxPoint2DInt(int, int)\n  wxPoint2DInt(const wxPoint2DInt &)\n  wxPoint2DInt(const wxPoint &)\n");
		return NULL;
	}


	// Function binds:
	// void wxPoint2DInt::GetFloor(int * x, int * y) const
	static int _bind_GetFloor(lua_State *L) {
		if (!_lg_typecheck_GetFloor(L)) {
			luaL_error(L, "luna typecheck failed in void wxPoint2DInt::GetFloor(int * x, int * y) const function, expected prototype:\nvoid wxPoint2DInt::GetFloor(int * x, int * y) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int* x=(int*)Luna< void >::check(L,2);
		int* y=(int*)Luna< void >::check(L,3);

		wxPoint2DInt* self=(Luna< wxPoint2DInt >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPoint2DInt::GetFloor(int *, int *) const. Got : '%s'\n%s",typeid(Luna< wxPoint2DInt >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GetFloor(x, y);

		return 0;
	}

	// void wxPoint2DInt::GetRounded(int * x, int * y) const
	static int _bind_GetRounded(lua_State *L) {
		if (!_lg_typecheck_GetRounded(L)) {
			luaL_error(L, "luna typecheck failed in void wxPoint2DInt::GetRounded(int * x, int * y) const function, expected prototype:\nvoid wxPoint2DInt::GetRounded(int * x, int * y) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int* x=(int*)Luna< void >::check(L,2);
		int* y=(int*)Luna< void >::check(L,3);

		wxPoint2DInt* self=(Luna< wxPoint2DInt >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPoint2DInt::GetRounded(int *, int *) const. Got : '%s'\n%s",typeid(Luna< wxPoint2DInt >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GetRounded(x, y);

		return 0;
	}

	// double wxPoint2DInt::GetVectorLength() const
	static int _bind_GetVectorLength(lua_State *L) {
		if (!_lg_typecheck_GetVectorLength(L)) {
			luaL_error(L, "luna typecheck failed in double wxPoint2DInt::GetVectorLength() const function, expected prototype:\ndouble wxPoint2DInt::GetVectorLength() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPoint2DInt* self=(Luna< wxPoint2DInt >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double wxPoint2DInt::GetVectorLength() const. Got : '%s'\n%s",typeid(Luna< wxPoint2DInt >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->GetVectorLength();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double wxPoint2DInt::GetVectorAngle() const
	static int _bind_GetVectorAngle(lua_State *L) {
		if (!_lg_typecheck_GetVectorAngle(L)) {
			luaL_error(L, "luna typecheck failed in double wxPoint2DInt::GetVectorAngle() const function, expected prototype:\ndouble wxPoint2DInt::GetVectorAngle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPoint2DInt* self=(Luna< wxPoint2DInt >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double wxPoint2DInt::GetVectorAngle() const. Got : '%s'\n%s",typeid(Luna< wxPoint2DInt >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->GetVectorAngle();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxPoint2DInt::SetVectorLength(double length)
	static int _bind_SetVectorLength(lua_State *L) {
		if (!_lg_typecheck_SetVectorLength(L)) {
			luaL_error(L, "luna typecheck failed in void wxPoint2DInt::SetVectorLength(double length) function, expected prototype:\nvoid wxPoint2DInt::SetVectorLength(double length)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double length=(double)lua_tonumber(L,2);

		wxPoint2DInt* self=(Luna< wxPoint2DInt >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPoint2DInt::SetVectorLength(double). Got : '%s'\n%s",typeid(Luna< wxPoint2DInt >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetVectorLength(length);

		return 0;
	}

	// void wxPoint2DInt::SetVectorAngle(double degrees)
	static int _bind_SetVectorAngle(lua_State *L) {
		if (!_lg_typecheck_SetVectorAngle(L)) {
			luaL_error(L, "luna typecheck failed in void wxPoint2DInt::SetVectorAngle(double degrees) function, expected prototype:\nvoid wxPoint2DInt::SetVectorAngle(double degrees)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double degrees=(double)lua_tonumber(L,2);

		wxPoint2DInt* self=(Luna< wxPoint2DInt >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPoint2DInt::SetVectorAngle(double). Got : '%s'\n%s",typeid(Luna< wxPoint2DInt >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetVectorAngle(degrees);

		return 0;
	}

	// void wxPoint2DInt::Normalize()
	static int _bind_Normalize(lua_State *L) {
		if (!_lg_typecheck_Normalize(L)) {
			luaL_error(L, "luna typecheck failed in void wxPoint2DInt::Normalize() function, expected prototype:\nvoid wxPoint2DInt::Normalize()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPoint2DInt* self=(Luna< wxPoint2DInt >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPoint2DInt::Normalize(). Got : '%s'\n%s",typeid(Luna< wxPoint2DInt >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Normalize();

		return 0;
	}

	// double wxPoint2DInt::GetDistance(const wxPoint2DInt & pt) const
	static int _bind_GetDistance(lua_State *L) {
		if (!_lg_typecheck_GetDistance(L)) {
			luaL_error(L, "luna typecheck failed in double wxPoint2DInt::GetDistance(const wxPoint2DInt & pt) const function, expected prototype:\ndouble wxPoint2DInt::GetDistance(const wxPoint2DInt & pt) const\nClass arguments details:\narg 1 ID = 81619599\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint2DInt* pt_ptr=(Luna< wxPoint2DInt >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxPoint2DInt::GetDistance function");
		}
		const wxPoint2DInt & pt=*pt_ptr;

		wxPoint2DInt* self=(Luna< wxPoint2DInt >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double wxPoint2DInt::GetDistance(const wxPoint2DInt &) const. Got : '%s'\n%s",typeid(Luna< wxPoint2DInt >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->GetDistance(pt);
		lua_pushnumber(L,lret);

		return 1;
	}

	// double wxPoint2DInt::GetDistanceSquare(const wxPoint2DInt & pt) const
	static int _bind_GetDistanceSquare(lua_State *L) {
		if (!_lg_typecheck_GetDistanceSquare(L)) {
			luaL_error(L, "luna typecheck failed in double wxPoint2DInt::GetDistanceSquare(const wxPoint2DInt & pt) const function, expected prototype:\ndouble wxPoint2DInt::GetDistanceSquare(const wxPoint2DInt & pt) const\nClass arguments details:\narg 1 ID = 81619599\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint2DInt* pt_ptr=(Luna< wxPoint2DInt >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxPoint2DInt::GetDistanceSquare function");
		}
		const wxPoint2DInt & pt=*pt_ptr;

		wxPoint2DInt* self=(Luna< wxPoint2DInt >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double wxPoint2DInt::GetDistanceSquare(const wxPoint2DInt &) const. Got : '%s'\n%s",typeid(Luna< wxPoint2DInt >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->GetDistanceSquare(pt);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxPoint2DInt::GetDotProduct(const wxPoint2DInt & vec) const
	static int _bind_GetDotProduct(lua_State *L) {
		if (!_lg_typecheck_GetDotProduct(L)) {
			luaL_error(L, "luna typecheck failed in int wxPoint2DInt::GetDotProduct(const wxPoint2DInt & vec) const function, expected prototype:\nint wxPoint2DInt::GetDotProduct(const wxPoint2DInt & vec) const\nClass arguments details:\narg 1 ID = 81619599\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint2DInt* vec_ptr=(Luna< wxPoint2DInt >::check(L,2));
		if( !vec_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vec in wxPoint2DInt::GetDotProduct function");
		}
		const wxPoint2DInt & vec=*vec_ptr;

		wxPoint2DInt* self=(Luna< wxPoint2DInt >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxPoint2DInt::GetDotProduct(const wxPoint2DInt &) const. Got : '%s'\n%s",typeid(Luna< wxPoint2DInt >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetDotProduct(vec);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxPoint2DInt::GetCrossProduct(const wxPoint2DInt & vec) const
	static int _bind_GetCrossProduct(lua_State *L) {
		if (!_lg_typecheck_GetCrossProduct(L)) {
			luaL_error(L, "luna typecheck failed in int wxPoint2DInt::GetCrossProduct(const wxPoint2DInt & vec) const function, expected prototype:\nint wxPoint2DInt::GetCrossProduct(const wxPoint2DInt & vec) const\nClass arguments details:\narg 1 ID = 81619599\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint2DInt* vec_ptr=(Luna< wxPoint2DInt >::check(L,2));
		if( !vec_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vec in wxPoint2DInt::GetCrossProduct function");
		}
		const wxPoint2DInt & vec=*vec_ptr;

		wxPoint2DInt* self=(Luna< wxPoint2DInt >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxPoint2DInt::GetCrossProduct(const wxPoint2DInt &) const. Got : '%s'\n%s",typeid(Luna< wxPoint2DInt >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetCrossProduct(vec);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxPoint2DInt::m_x()
	static int _bind_getX(lua_State *L) {
		if (!_lg_typecheck_getX(L)) {
			luaL_error(L, "luna typecheck failed in int wxPoint2DInt::m_x() function, expected prototype:\nint wxPoint2DInt::m_x()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPoint2DInt* self=(Luna< wxPoint2DInt >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxPoint2DInt::m_x(). Got : '%s'\n%s",typeid(Luna< wxPoint2DInt >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->m_x;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxPoint2DInt::m_y()
	static int _bind_getY(lua_State *L) {
		if (!_lg_typecheck_getY(L)) {
			luaL_error(L, "luna typecheck failed in int wxPoint2DInt::m_y() function, expected prototype:\nint wxPoint2DInt::m_y()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPoint2DInt* self=(Luna< wxPoint2DInt >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxPoint2DInt::m_y(). Got : '%s'\n%s",typeid(Luna< wxPoint2DInt >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->m_y;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxPoint2DInt::m_x(int value)
	static int _bind_setX(lua_State *L) {
		if (!_lg_typecheck_setX(L)) {
			luaL_error(L, "luna typecheck failed in void wxPoint2DInt::m_x(int value) function, expected prototype:\nvoid wxPoint2DInt::m_x(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		wxPoint2DInt* self=(Luna< wxPoint2DInt >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPoint2DInt::m_x(int). Got : '%s'\n%s",typeid(Luna< wxPoint2DInt >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_x = value;

		return 0;
	}

	// void wxPoint2DInt::m_y(int value)
	static int _bind_setY(lua_State *L) {
		if (!_lg_typecheck_setY(L)) {
			luaL_error(L, "luna typecheck failed in void wxPoint2DInt::m_y(int value) function, expected prototype:\nvoid wxPoint2DInt::m_y(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		wxPoint2DInt* self=(Luna< wxPoint2DInt >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPoint2DInt::m_y(int). Got : '%s'\n%s",typeid(Luna< wxPoint2DInt >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->m_y = value;

		return 0;
	}


	// Operator binds:
	// wxPoint2DInt wxPoint2DInt::operator-()
	static int _bind___unm(lua_State *L) {
		if (!_lg_typecheck___unm(L)) {
			luaL_error(L, "luna typecheck failed in wxPoint2DInt wxPoint2DInt::operator-() function, expected prototype:\nwxPoint2DInt wxPoint2DInt::operator-()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPoint2DInt* self=(Luna< wxPoint2DInt >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPoint2DInt wxPoint2DInt::operator-(). Got : '%s'\n%s",typeid(Luna< wxPoint2DInt >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPoint2DInt stack_lret = self->operator-();
		wxPoint2DInt* lret = new wxPoint2DInt(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint2DInt >::push(L,lret,true);

		return 1;
	}

	// wxPoint2DInt & wxPoint2DInt::operator=(const wxPoint2DInt & pt)
	static int _bind_op_assign(lua_State *L) {
		if (!_lg_typecheck_op_assign(L)) {
			luaL_error(L, "luna typecheck failed in wxPoint2DInt & wxPoint2DInt::operator=(const wxPoint2DInt & pt) function, expected prototype:\nwxPoint2DInt & wxPoint2DInt::operator=(const wxPoint2DInt & pt)\nClass arguments details:\narg 1 ID = 81619599\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint2DInt* pt_ptr=(Luna< wxPoint2DInt >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxPoint2DInt::operator= function");
		}
		const wxPoint2DInt & pt=*pt_ptr;

		wxPoint2DInt* self=(Luna< wxPoint2DInt >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPoint2DInt & wxPoint2DInt::operator=(const wxPoint2DInt &). Got : '%s'\n%s",typeid(Luna< wxPoint2DInt >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxPoint2DInt* lret = &self->operator=(pt);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint2DInt >::push(L,lret,false);

		return 1;
	}

	// wxPoint2DInt & wxPoint2DInt::operator+=(const wxPoint2DInt & pt)
	static int _bind_op_add(lua_State *L) {
		if (!_lg_typecheck_op_add(L)) {
			luaL_error(L, "luna typecheck failed in wxPoint2DInt & wxPoint2DInt::operator+=(const wxPoint2DInt & pt) function, expected prototype:\nwxPoint2DInt & wxPoint2DInt::operator+=(const wxPoint2DInt & pt)\nClass arguments details:\narg 1 ID = 81619599\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint2DInt* pt_ptr=(Luna< wxPoint2DInt >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxPoint2DInt::operator+= function");
		}
		const wxPoint2DInt & pt=*pt_ptr;

		wxPoint2DInt* self=(Luna< wxPoint2DInt >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPoint2DInt & wxPoint2DInt::operator+=(const wxPoint2DInt &). Got : '%s'\n%s",typeid(Luna< wxPoint2DInt >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxPoint2DInt* lret = &self->operator+=(pt);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint2DInt >::push(L,lret,false);

		return 1;
	}

	// wxPoint2DInt & wxPoint2DInt::operator-=(const wxPoint2DInt & pt)
	static int _bind_op_sub(lua_State *L) {
		if (!_lg_typecheck_op_sub(L)) {
			luaL_error(L, "luna typecheck failed in wxPoint2DInt & wxPoint2DInt::operator-=(const wxPoint2DInt & pt) function, expected prototype:\nwxPoint2DInt & wxPoint2DInt::operator-=(const wxPoint2DInt & pt)\nClass arguments details:\narg 1 ID = 81619599\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint2DInt* pt_ptr=(Luna< wxPoint2DInt >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxPoint2DInt::operator-= function");
		}
		const wxPoint2DInt & pt=*pt_ptr;

		wxPoint2DInt* self=(Luna< wxPoint2DInt >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPoint2DInt & wxPoint2DInt::operator-=(const wxPoint2DInt &). Got : '%s'\n%s",typeid(Luna< wxPoint2DInt >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxPoint2DInt* lret = &self->operator-=(pt);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint2DInt >::push(L,lret,false);

		return 1;
	}

	// bool wxPoint2DInt::operator==(const wxPoint2DInt & pt) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPoint2DInt::operator==(const wxPoint2DInt & pt) const function, expected prototype:\nbool wxPoint2DInt::operator==(const wxPoint2DInt & pt) const\nClass arguments details:\narg 1 ID = 81619599\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint2DInt* pt_ptr=(Luna< wxPoint2DInt >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxPoint2DInt::operator== function");
		}
		const wxPoint2DInt & pt=*pt_ptr;

		wxPoint2DInt* self=(Luna< wxPoint2DInt >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPoint2DInt::operator==(const wxPoint2DInt &) const. Got : '%s'\n%s",typeid(Luna< wxPoint2DInt >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator==(pt);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPoint2DInt::operator!=(const wxPoint2DInt & pt) const
	static int _bind_op_neq(lua_State *L) {
		if (!_lg_typecheck_op_neq(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPoint2DInt::operator!=(const wxPoint2DInt & pt) const function, expected prototype:\nbool wxPoint2DInt::operator!=(const wxPoint2DInt & pt) const\nClass arguments details:\narg 1 ID = 81619599\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint2DInt* pt_ptr=(Luna< wxPoint2DInt >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxPoint2DInt::operator!= function");
		}
		const wxPoint2DInt & pt=*pt_ptr;

		wxPoint2DInt* self=(Luna< wxPoint2DInt >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPoint2DInt::operator!=(const wxPoint2DInt &) const. Got : '%s'\n%s",typeid(Luna< wxPoint2DInt >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator!=(pt);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

wxPoint2DInt* LunaTraits< wxPoint2DInt >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxPoint2DInt::_bind_ctor(L);
}

void LunaTraits< wxPoint2DInt >::_bind_dtor(wxPoint2DInt* obj) {
	delete obj;
}

const char LunaTraits< wxPoint2DInt >::className[] = "wxPoint2DInt";
const char LunaTraits< wxPoint2DInt >::fullName[] = "wxPoint2DInt";
const char LunaTraits< wxPoint2DInt >::moduleName[] = "wx";
const char* LunaTraits< wxPoint2DInt >::parents[] = {0};
const int LunaTraits< wxPoint2DInt >::hash = 81619599;
const int LunaTraits< wxPoint2DInt >::uniqueIDs[] = {81619599,0};

luna_RegType LunaTraits< wxPoint2DInt >::methods[] = {
	{"GetFloor", &luna_wrapper_wxPoint2DInt::_bind_GetFloor},
	{"GetRounded", &luna_wrapper_wxPoint2DInt::_bind_GetRounded},
	{"GetVectorLength", &luna_wrapper_wxPoint2DInt::_bind_GetVectorLength},
	{"GetVectorAngle", &luna_wrapper_wxPoint2DInt::_bind_GetVectorAngle},
	{"SetVectorLength", &luna_wrapper_wxPoint2DInt::_bind_SetVectorLength},
	{"SetVectorAngle", &luna_wrapper_wxPoint2DInt::_bind_SetVectorAngle},
	{"Normalize", &luna_wrapper_wxPoint2DInt::_bind_Normalize},
	{"GetDistance", &luna_wrapper_wxPoint2DInt::_bind_GetDistance},
	{"GetDistanceSquare", &luna_wrapper_wxPoint2DInt::_bind_GetDistanceSquare},
	{"GetDotProduct", &luna_wrapper_wxPoint2DInt::_bind_GetDotProduct},
	{"GetCrossProduct", &luna_wrapper_wxPoint2DInt::_bind_GetCrossProduct},
	{"getX", &luna_wrapper_wxPoint2DInt::_bind_getX},
	{"getY", &luna_wrapper_wxPoint2DInt::_bind_getY},
	{"setX", &luna_wrapper_wxPoint2DInt::_bind_setX},
	{"setY", &luna_wrapper_wxPoint2DInt::_bind_setY},
	{"__unm", &luna_wrapper_wxPoint2DInt::_bind___unm},
	{"op_assign", &luna_wrapper_wxPoint2DInt::_bind_op_assign},
	{"op_add", &luna_wrapper_wxPoint2DInt::_bind_op_add},
	{"op_sub", &luna_wrapper_wxPoint2DInt::_bind_op_sub},
	{"__eq", &luna_wrapper_wxPoint2DInt::_bind___eq},
	{"op_neq", &luna_wrapper_wxPoint2DInt::_bind_op_neq},
	{"dynCast", &luna_wrapper_wxPoint2DInt::_bind_dynCast},
	{"fromVoid", &luna_wrapper_wxPoint2DInt::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxPoint2DInt::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< wxPoint2DInt >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxPoint2DInt >::enumValues[] = {
	{0,0}
};



#include <plug_common.h>

class luna_wrapper_wxDateSpan {
public:
	typedef Luna< wxDateSpan > luna_t;

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxDateSpan* self= (wxDateSpan*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxDateSpan >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,57474092) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxDateSpan >::check(L,1));
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

		wxDateSpan* self=(Luna< wxDateSpan >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxDateSpan");
		
		return luna_dynamicCast(L,converters,"wxDateSpan",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>4 ) return false;

		if( luatop>0 && (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Add_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,57474092) ) return false;
		if( (!(Luna< wxDateSpan >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Add_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,57474092) ) return false;
		if( (!(Luna< wxDateSpan >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetDays(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMonths(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetTotalDays(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetWeeks(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetYears(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Multiply_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Multiply_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Neg(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Negate(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetDays(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMonths(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetWeeks(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetYears(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Subtract_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,57474092) ) return false;
		if( (!(Luna< wxDateSpan >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Subtract_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,57474092) ) return false;
		if( (!(Luna< wxDateSpan >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Day(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Days(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Month(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Months(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Week(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Weeks(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Year(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Years(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 6 valid operators)
	inline static bool _lg_typecheck_op_add(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,57474092) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_sub(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,57474092) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___unm(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_op_mult(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_neq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,57474092) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,57474092) ) return false;
		return true;
	}


	// Constructor binds:
	// wxDateSpan::wxDateSpan(int years = 0, int months = 0, int weeks = 0, int days = 0)
	static wxDateSpan* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxDateSpan::wxDateSpan(int years = 0, int months = 0, int weeks = 0, int days = 0) function, expected prototype:\nwxDateSpan::wxDateSpan(int years = 0, int months = 0, int weeks = 0, int days = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int years=luatop>0 ? (int)lua_tointeger(L,1) : (int)0;
		int months=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;
		int weeks=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;
		int days=luatop>3 ? (int)lua_tointeger(L,4) : (int)0;

		return new wxDateSpan(years, months, weeks, days);
	}


	// Function binds:
	// wxDateSpan wxDateSpan::Add(const wxDateSpan & other) const
	static int _bind_Add_overload_1(lua_State *L) {
		if (!_lg_typecheck_Add_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxDateSpan wxDateSpan::Add(const wxDateSpan & other) const function, expected prototype:\nwxDateSpan wxDateSpan::Add(const wxDateSpan & other) const\nClass arguments details:\narg 1 ID = 57474092\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDateSpan* other_ptr=(Luna< wxDateSpan >::check(L,2));
		if( !other_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg other in wxDateSpan::Add function");
		}
		const wxDateSpan & other=*other_ptr;

		wxDateSpan* self=(Luna< wxDateSpan >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDateSpan wxDateSpan::Add(const wxDateSpan &) const. Got : '%s'\n%s",typeid(Luna< wxDateSpan >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDateSpan stack_lret = self->Add(other);
		wxDateSpan* lret = new wxDateSpan(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDateSpan >::push(L,lret,true);

		return 1;
	}

	// wxDateSpan & wxDateSpan::Add(const wxDateSpan & other)
	static int _bind_Add_overload_2(lua_State *L) {
		if (!_lg_typecheck_Add_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxDateSpan & wxDateSpan::Add(const wxDateSpan & other) function, expected prototype:\nwxDateSpan & wxDateSpan::Add(const wxDateSpan & other)\nClass arguments details:\narg 1 ID = 57474092\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDateSpan* other_ptr=(Luna< wxDateSpan >::check(L,2));
		if( !other_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg other in wxDateSpan::Add function");
		}
		const wxDateSpan & other=*other_ptr;

		wxDateSpan* self=(Luna< wxDateSpan >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDateSpan & wxDateSpan::Add(const wxDateSpan &). Got : '%s'\n%s",typeid(Luna< wxDateSpan >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxDateSpan* lret = &self->Add(other);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDateSpan >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxDateSpan::Add
	static int _bind_Add(lua_State *L) {
		if (_lg_typecheck_Add_overload_1(L)) return _bind_Add_overload_1(L);
		if (_lg_typecheck_Add_overload_2(L)) return _bind_Add_overload_2(L);

		luaL_error(L, "error in function Add, cannot match any of the overloads for function Add:\n  Add(const wxDateSpan &)\n  Add(const wxDateSpan &)\n");
		return 0;
	}

	// int wxDateSpan::GetDays() const
	static int _bind_GetDays(lua_State *L) {
		if (!_lg_typecheck_GetDays(L)) {
			luaL_error(L, "luna typecheck failed in int wxDateSpan::GetDays() const function, expected prototype:\nint wxDateSpan::GetDays() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDateSpan* self=(Luna< wxDateSpan >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxDateSpan::GetDays() const. Got : '%s'\n%s",typeid(Luna< wxDateSpan >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetDays();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxDateSpan::GetMonths() const
	static int _bind_GetMonths(lua_State *L) {
		if (!_lg_typecheck_GetMonths(L)) {
			luaL_error(L, "luna typecheck failed in int wxDateSpan::GetMonths() const function, expected prototype:\nint wxDateSpan::GetMonths() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDateSpan* self=(Luna< wxDateSpan >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxDateSpan::GetMonths() const. Got : '%s'\n%s",typeid(Luna< wxDateSpan >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetMonths();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxDateSpan::GetTotalDays() const
	static int _bind_GetTotalDays(lua_State *L) {
		if (!_lg_typecheck_GetTotalDays(L)) {
			luaL_error(L, "luna typecheck failed in int wxDateSpan::GetTotalDays() const function, expected prototype:\nint wxDateSpan::GetTotalDays() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDateSpan* self=(Luna< wxDateSpan >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxDateSpan::GetTotalDays() const. Got : '%s'\n%s",typeid(Luna< wxDateSpan >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetTotalDays();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxDateSpan::GetWeeks() const
	static int _bind_GetWeeks(lua_State *L) {
		if (!_lg_typecheck_GetWeeks(L)) {
			luaL_error(L, "luna typecheck failed in int wxDateSpan::GetWeeks() const function, expected prototype:\nint wxDateSpan::GetWeeks() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDateSpan* self=(Luna< wxDateSpan >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxDateSpan::GetWeeks() const. Got : '%s'\n%s",typeid(Luna< wxDateSpan >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetWeeks();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxDateSpan::GetYears() const
	static int _bind_GetYears(lua_State *L) {
		if (!_lg_typecheck_GetYears(L)) {
			luaL_error(L, "luna typecheck failed in int wxDateSpan::GetYears() const function, expected prototype:\nint wxDateSpan::GetYears() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDateSpan* self=(Luna< wxDateSpan >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxDateSpan::GetYears() const. Got : '%s'\n%s",typeid(Luna< wxDateSpan >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetYears();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxDateSpan wxDateSpan::Multiply(int factor) const
	static int _bind_Multiply_overload_1(lua_State *L) {
		if (!_lg_typecheck_Multiply_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxDateSpan wxDateSpan::Multiply(int factor) const function, expected prototype:\nwxDateSpan wxDateSpan::Multiply(int factor) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int factor=(int)lua_tointeger(L,2);

		wxDateSpan* self=(Luna< wxDateSpan >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDateSpan wxDateSpan::Multiply(int) const. Got : '%s'\n%s",typeid(Luna< wxDateSpan >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDateSpan stack_lret = self->Multiply(factor);
		wxDateSpan* lret = new wxDateSpan(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDateSpan >::push(L,lret,true);

		return 1;
	}

	// wxDateSpan & wxDateSpan::Multiply(int factor)
	static int _bind_Multiply_overload_2(lua_State *L) {
		if (!_lg_typecheck_Multiply_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxDateSpan & wxDateSpan::Multiply(int factor) function, expected prototype:\nwxDateSpan & wxDateSpan::Multiply(int factor)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int factor=(int)lua_tointeger(L,2);

		wxDateSpan* self=(Luna< wxDateSpan >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDateSpan & wxDateSpan::Multiply(int). Got : '%s'\n%s",typeid(Luna< wxDateSpan >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxDateSpan* lret = &self->Multiply(factor);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDateSpan >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxDateSpan::Multiply
	static int _bind_Multiply(lua_State *L) {
		if (_lg_typecheck_Multiply_overload_1(L)) return _bind_Multiply_overload_1(L);
		if (_lg_typecheck_Multiply_overload_2(L)) return _bind_Multiply_overload_2(L);

		luaL_error(L, "error in function Multiply, cannot match any of the overloads for function Multiply:\n  Multiply(int)\n  Multiply(int)\n");
		return 0;
	}

	// wxDateSpan & wxDateSpan::Neg()
	static int _bind_Neg(lua_State *L) {
		if (!_lg_typecheck_Neg(L)) {
			luaL_error(L, "luna typecheck failed in wxDateSpan & wxDateSpan::Neg() function, expected prototype:\nwxDateSpan & wxDateSpan::Neg()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDateSpan* self=(Luna< wxDateSpan >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDateSpan & wxDateSpan::Neg(). Got : '%s'\n%s",typeid(Luna< wxDateSpan >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxDateSpan* lret = &self->Neg();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDateSpan >::push(L,lret,false);

		return 1;
	}

	// wxDateSpan wxDateSpan::Negate() const
	static int _bind_Negate(lua_State *L) {
		if (!_lg_typecheck_Negate(L)) {
			luaL_error(L, "luna typecheck failed in wxDateSpan wxDateSpan::Negate() const function, expected prototype:\nwxDateSpan wxDateSpan::Negate() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDateSpan* self=(Luna< wxDateSpan >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDateSpan wxDateSpan::Negate() const. Got : '%s'\n%s",typeid(Luna< wxDateSpan >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDateSpan stack_lret = self->Negate();
		wxDateSpan* lret = new wxDateSpan(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDateSpan >::push(L,lret,true);

		return 1;
	}

	// wxDateSpan & wxDateSpan::SetDays(int n)
	static int _bind_SetDays(lua_State *L) {
		if (!_lg_typecheck_SetDays(L)) {
			luaL_error(L, "luna typecheck failed in wxDateSpan & wxDateSpan::SetDays(int n) function, expected prototype:\nwxDateSpan & wxDateSpan::SetDays(int n)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int n=(int)lua_tointeger(L,2);

		wxDateSpan* self=(Luna< wxDateSpan >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDateSpan & wxDateSpan::SetDays(int). Got : '%s'\n%s",typeid(Luna< wxDateSpan >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxDateSpan* lret = &self->SetDays(n);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDateSpan >::push(L,lret,false);

		return 1;
	}

	// wxDateSpan & wxDateSpan::SetMonths(int n)
	static int _bind_SetMonths(lua_State *L) {
		if (!_lg_typecheck_SetMonths(L)) {
			luaL_error(L, "luna typecheck failed in wxDateSpan & wxDateSpan::SetMonths(int n) function, expected prototype:\nwxDateSpan & wxDateSpan::SetMonths(int n)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int n=(int)lua_tointeger(L,2);

		wxDateSpan* self=(Luna< wxDateSpan >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDateSpan & wxDateSpan::SetMonths(int). Got : '%s'\n%s",typeid(Luna< wxDateSpan >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxDateSpan* lret = &self->SetMonths(n);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDateSpan >::push(L,lret,false);

		return 1;
	}

	// wxDateSpan & wxDateSpan::SetWeeks(int n)
	static int _bind_SetWeeks(lua_State *L) {
		if (!_lg_typecheck_SetWeeks(L)) {
			luaL_error(L, "luna typecheck failed in wxDateSpan & wxDateSpan::SetWeeks(int n) function, expected prototype:\nwxDateSpan & wxDateSpan::SetWeeks(int n)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int n=(int)lua_tointeger(L,2);

		wxDateSpan* self=(Luna< wxDateSpan >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDateSpan & wxDateSpan::SetWeeks(int). Got : '%s'\n%s",typeid(Luna< wxDateSpan >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxDateSpan* lret = &self->SetWeeks(n);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDateSpan >::push(L,lret,false);

		return 1;
	}

	// wxDateSpan & wxDateSpan::SetYears(int n)
	static int _bind_SetYears(lua_State *L) {
		if (!_lg_typecheck_SetYears(L)) {
			luaL_error(L, "luna typecheck failed in wxDateSpan & wxDateSpan::SetYears(int n) function, expected prototype:\nwxDateSpan & wxDateSpan::SetYears(int n)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int n=(int)lua_tointeger(L,2);

		wxDateSpan* self=(Luna< wxDateSpan >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDateSpan & wxDateSpan::SetYears(int). Got : '%s'\n%s",typeid(Luna< wxDateSpan >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxDateSpan* lret = &self->SetYears(n);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDateSpan >::push(L,lret,false);

		return 1;
	}

	// wxDateSpan wxDateSpan::Subtract(const wxDateSpan & other) const
	static int _bind_Subtract_overload_1(lua_State *L) {
		if (!_lg_typecheck_Subtract_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxDateSpan wxDateSpan::Subtract(const wxDateSpan & other) const function, expected prototype:\nwxDateSpan wxDateSpan::Subtract(const wxDateSpan & other) const\nClass arguments details:\narg 1 ID = 57474092\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDateSpan* other_ptr=(Luna< wxDateSpan >::check(L,2));
		if( !other_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg other in wxDateSpan::Subtract function");
		}
		const wxDateSpan & other=*other_ptr;

		wxDateSpan* self=(Luna< wxDateSpan >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDateSpan wxDateSpan::Subtract(const wxDateSpan &) const. Got : '%s'\n%s",typeid(Luna< wxDateSpan >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDateSpan stack_lret = self->Subtract(other);
		wxDateSpan* lret = new wxDateSpan(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDateSpan >::push(L,lret,true);

		return 1;
	}

	// wxDateSpan & wxDateSpan::Subtract(const wxDateSpan & other)
	static int _bind_Subtract_overload_2(lua_State *L) {
		if (!_lg_typecheck_Subtract_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxDateSpan & wxDateSpan::Subtract(const wxDateSpan & other) function, expected prototype:\nwxDateSpan & wxDateSpan::Subtract(const wxDateSpan & other)\nClass arguments details:\narg 1 ID = 57474092\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDateSpan* other_ptr=(Luna< wxDateSpan >::check(L,2));
		if( !other_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg other in wxDateSpan::Subtract function");
		}
		const wxDateSpan & other=*other_ptr;

		wxDateSpan* self=(Luna< wxDateSpan >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDateSpan & wxDateSpan::Subtract(const wxDateSpan &). Got : '%s'\n%s",typeid(Luna< wxDateSpan >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxDateSpan* lret = &self->Subtract(other);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDateSpan >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxDateSpan::Subtract
	static int _bind_Subtract(lua_State *L) {
		if (_lg_typecheck_Subtract_overload_1(L)) return _bind_Subtract_overload_1(L);
		if (_lg_typecheck_Subtract_overload_2(L)) return _bind_Subtract_overload_2(L);

		luaL_error(L, "error in function Subtract, cannot match any of the overloads for function Subtract:\n  Subtract(const wxDateSpan &)\n  Subtract(const wxDateSpan &)\n");
		return 0;
	}

	// static wxDateSpan wxDateSpan::Day()
	static int _bind_Day(lua_State *L) {
		if (!_lg_typecheck_Day(L)) {
			luaL_error(L, "luna typecheck failed in static wxDateSpan wxDateSpan::Day() function, expected prototype:\nstatic wxDateSpan wxDateSpan::Day()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDateSpan stack_lret = wxDateSpan::Day();
		wxDateSpan* lret = new wxDateSpan(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDateSpan >::push(L,lret,true);

		return 1;
	}

	// static wxDateSpan wxDateSpan::Days(int days)
	static int _bind_Days(lua_State *L) {
		if (!_lg_typecheck_Days(L)) {
			luaL_error(L, "luna typecheck failed in static wxDateSpan wxDateSpan::Days(int days) function, expected prototype:\nstatic wxDateSpan wxDateSpan::Days(int days)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int days=(int)lua_tointeger(L,1);

		wxDateSpan stack_lret = wxDateSpan::Days(days);
		wxDateSpan* lret = new wxDateSpan(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDateSpan >::push(L,lret,true);

		return 1;
	}

	// static wxDateSpan wxDateSpan::Month()
	static int _bind_Month(lua_State *L) {
		if (!_lg_typecheck_Month(L)) {
			luaL_error(L, "luna typecheck failed in static wxDateSpan wxDateSpan::Month() function, expected prototype:\nstatic wxDateSpan wxDateSpan::Month()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDateSpan stack_lret = wxDateSpan::Month();
		wxDateSpan* lret = new wxDateSpan(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDateSpan >::push(L,lret,true);

		return 1;
	}

	// static wxDateSpan wxDateSpan::Months(int mon)
	static int _bind_Months(lua_State *L) {
		if (!_lg_typecheck_Months(L)) {
			luaL_error(L, "luna typecheck failed in static wxDateSpan wxDateSpan::Months(int mon) function, expected prototype:\nstatic wxDateSpan wxDateSpan::Months(int mon)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int mon=(int)lua_tointeger(L,1);

		wxDateSpan stack_lret = wxDateSpan::Months(mon);
		wxDateSpan* lret = new wxDateSpan(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDateSpan >::push(L,lret,true);

		return 1;
	}

	// static wxDateSpan wxDateSpan::Week()
	static int _bind_Week(lua_State *L) {
		if (!_lg_typecheck_Week(L)) {
			luaL_error(L, "luna typecheck failed in static wxDateSpan wxDateSpan::Week() function, expected prototype:\nstatic wxDateSpan wxDateSpan::Week()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDateSpan stack_lret = wxDateSpan::Week();
		wxDateSpan* lret = new wxDateSpan(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDateSpan >::push(L,lret,true);

		return 1;
	}

	// static wxDateSpan wxDateSpan::Weeks(int weeks)
	static int _bind_Weeks(lua_State *L) {
		if (!_lg_typecheck_Weeks(L)) {
			luaL_error(L, "luna typecheck failed in static wxDateSpan wxDateSpan::Weeks(int weeks) function, expected prototype:\nstatic wxDateSpan wxDateSpan::Weeks(int weeks)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int weeks=(int)lua_tointeger(L,1);

		wxDateSpan stack_lret = wxDateSpan::Weeks(weeks);
		wxDateSpan* lret = new wxDateSpan(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDateSpan >::push(L,lret,true);

		return 1;
	}

	// static wxDateSpan wxDateSpan::Year()
	static int _bind_Year(lua_State *L) {
		if (!_lg_typecheck_Year(L)) {
			luaL_error(L, "luna typecheck failed in static wxDateSpan wxDateSpan::Year() function, expected prototype:\nstatic wxDateSpan wxDateSpan::Year()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDateSpan stack_lret = wxDateSpan::Year();
		wxDateSpan* lret = new wxDateSpan(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDateSpan >::push(L,lret,true);

		return 1;
	}

	// static wxDateSpan wxDateSpan::Years(int years)
	static int _bind_Years(lua_State *L) {
		if (!_lg_typecheck_Years(L)) {
			luaL_error(L, "luna typecheck failed in static wxDateSpan wxDateSpan::Years(int years) function, expected prototype:\nstatic wxDateSpan wxDateSpan::Years(int years)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int years=(int)lua_tointeger(L,1);

		wxDateSpan stack_lret = wxDateSpan::Years(years);
		wxDateSpan* lret = new wxDateSpan(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDateSpan >::push(L,lret,true);

		return 1;
	}


	// Operator binds:
	// wxDateSpan & wxDateSpan::operator+=(const wxDateSpan & other)
	static int _bind_op_add(lua_State *L) {
		if (!_lg_typecheck_op_add(L)) {
			luaL_error(L, "luna typecheck failed in wxDateSpan & wxDateSpan::operator+=(const wxDateSpan & other) function, expected prototype:\nwxDateSpan & wxDateSpan::operator+=(const wxDateSpan & other)\nClass arguments details:\narg 1 ID = 57474092\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDateSpan* other_ptr=(Luna< wxDateSpan >::check(L,2));
		if( !other_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg other in wxDateSpan::operator+= function");
		}
		const wxDateSpan & other=*other_ptr;

		wxDateSpan* self=(Luna< wxDateSpan >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDateSpan & wxDateSpan::operator+=(const wxDateSpan &). Got : '%s'\n%s",typeid(Luna< wxDateSpan >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxDateSpan* lret = &self->operator+=(other);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDateSpan >::push(L,lret,false);

		return 1;
	}

	// wxDateSpan & wxDateSpan::operator-=(const wxDateSpan & other)
	static int _bind_op_sub(lua_State *L) {
		if (!_lg_typecheck_op_sub(L)) {
			luaL_error(L, "luna typecheck failed in wxDateSpan & wxDateSpan::operator-=(const wxDateSpan & other) function, expected prototype:\nwxDateSpan & wxDateSpan::operator-=(const wxDateSpan & other)\nClass arguments details:\narg 1 ID = 57474092\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDateSpan* other_ptr=(Luna< wxDateSpan >::check(L,2));
		if( !other_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg other in wxDateSpan::operator-= function");
		}
		const wxDateSpan & other=*other_ptr;

		wxDateSpan* self=(Luna< wxDateSpan >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDateSpan & wxDateSpan::operator-=(const wxDateSpan &). Got : '%s'\n%s",typeid(Luna< wxDateSpan >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxDateSpan* lret = &self->operator-=(other);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDateSpan >::push(L,lret,false);

		return 1;
	}

	// wxDateSpan & wxDateSpan::operator-()
	static int _bind___unm(lua_State *L) {
		if (!_lg_typecheck___unm(L)) {
			luaL_error(L, "luna typecheck failed in wxDateSpan & wxDateSpan::operator-() function, expected prototype:\nwxDateSpan & wxDateSpan::operator-()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDateSpan* self=(Luna< wxDateSpan >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDateSpan & wxDateSpan::operator-(). Got : '%s'\n%s",typeid(Luna< wxDateSpan >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxDateSpan* lret = &self->operator-();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDateSpan >::push(L,lret,false);

		return 1;
	}

	// wxDateSpan & wxDateSpan::operator*=(int factor)
	static int _bind_op_mult(lua_State *L) {
		if (!_lg_typecheck_op_mult(L)) {
			luaL_error(L, "luna typecheck failed in wxDateSpan & wxDateSpan::operator*=(int factor) function, expected prototype:\nwxDateSpan & wxDateSpan::operator*=(int factor)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int factor=(int)lua_tointeger(L,2);

		wxDateSpan* self=(Luna< wxDateSpan >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDateSpan & wxDateSpan::operator*=(int). Got : '%s'\n%s",typeid(Luna< wxDateSpan >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxDateSpan* lret = &self->operator*=(factor);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDateSpan >::push(L,lret,false);

		return 1;
	}

	// bool wxDateSpan::operator!=(const wxDateSpan & arg1) const
	static int _bind_op_neq(lua_State *L) {
		if (!_lg_typecheck_op_neq(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDateSpan::operator!=(const wxDateSpan & arg1) const function, expected prototype:\nbool wxDateSpan::operator!=(const wxDateSpan & arg1) const\nClass arguments details:\narg 1 ID = 57474092\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDateSpan* _arg1_ptr=(Luna< wxDateSpan >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in wxDateSpan::operator!= function");
		}
		const wxDateSpan & _arg1=*_arg1_ptr;

		wxDateSpan* self=(Luna< wxDateSpan >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDateSpan::operator!=(const wxDateSpan &) const. Got : '%s'\n%s",typeid(Luna< wxDateSpan >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator!=(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDateSpan::operator==(const wxDateSpan & arg1) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDateSpan::operator==(const wxDateSpan & arg1) const function, expected prototype:\nbool wxDateSpan::operator==(const wxDateSpan & arg1) const\nClass arguments details:\narg 1 ID = 57474092\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDateSpan* _arg1_ptr=(Luna< wxDateSpan >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in wxDateSpan::operator== function");
		}
		const wxDateSpan & _arg1=*_arg1_ptr;

		wxDateSpan* self=(Luna< wxDateSpan >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDateSpan::operator==(const wxDateSpan &) const. Got : '%s'\n%s",typeid(Luna< wxDateSpan >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator==(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

wxDateSpan* LunaTraits< wxDateSpan >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxDateSpan::_bind_ctor(L);
}

void LunaTraits< wxDateSpan >::_bind_dtor(wxDateSpan* obj) {
	delete obj;
}

const char LunaTraits< wxDateSpan >::className[] = "wxDateSpan";
const char LunaTraits< wxDateSpan >::fullName[] = "wxDateSpan";
const char LunaTraits< wxDateSpan >::moduleName[] = "wx";
const char* LunaTraits< wxDateSpan >::parents[] = {0};
const int LunaTraits< wxDateSpan >::hash = 57474092;
const int LunaTraits< wxDateSpan >::uniqueIDs[] = {57474092,0};

luna_RegType LunaTraits< wxDateSpan >::methods[] = {
	{"Add", &luna_wrapper_wxDateSpan::_bind_Add},
	{"GetDays", &luna_wrapper_wxDateSpan::_bind_GetDays},
	{"GetMonths", &luna_wrapper_wxDateSpan::_bind_GetMonths},
	{"GetTotalDays", &luna_wrapper_wxDateSpan::_bind_GetTotalDays},
	{"GetWeeks", &luna_wrapper_wxDateSpan::_bind_GetWeeks},
	{"GetYears", &luna_wrapper_wxDateSpan::_bind_GetYears},
	{"Multiply", &luna_wrapper_wxDateSpan::_bind_Multiply},
	{"Neg", &luna_wrapper_wxDateSpan::_bind_Neg},
	{"Negate", &luna_wrapper_wxDateSpan::_bind_Negate},
	{"SetDays", &luna_wrapper_wxDateSpan::_bind_SetDays},
	{"SetMonths", &luna_wrapper_wxDateSpan::_bind_SetMonths},
	{"SetWeeks", &luna_wrapper_wxDateSpan::_bind_SetWeeks},
	{"SetYears", &luna_wrapper_wxDateSpan::_bind_SetYears},
	{"Subtract", &luna_wrapper_wxDateSpan::_bind_Subtract},
	{"Day", &luna_wrapper_wxDateSpan::_bind_Day},
	{"Days", &luna_wrapper_wxDateSpan::_bind_Days},
	{"Month", &luna_wrapper_wxDateSpan::_bind_Month},
	{"Months", &luna_wrapper_wxDateSpan::_bind_Months},
	{"Week", &luna_wrapper_wxDateSpan::_bind_Week},
	{"Weeks", &luna_wrapper_wxDateSpan::_bind_Weeks},
	{"Year", &luna_wrapper_wxDateSpan::_bind_Year},
	{"Years", &luna_wrapper_wxDateSpan::_bind_Years},
	{"op_add", &luna_wrapper_wxDateSpan::_bind_op_add},
	{"op_sub", &luna_wrapper_wxDateSpan::_bind_op_sub},
	{"__unm", &luna_wrapper_wxDateSpan::_bind___unm},
	{"op_mult", &luna_wrapper_wxDateSpan::_bind_op_mult},
	{"op_neq", &luna_wrapper_wxDateSpan::_bind_op_neq},
	{"__eq", &luna_wrapper_wxDateSpan::_bind___eq},
	{"dynCast", &luna_wrapper_wxDateSpan::_bind_dynCast},
	{"fromVoid", &luna_wrapper_wxDateSpan::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxDateSpan::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< wxDateSpan >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxDateSpan >::enumValues[] = {
	{0,0}
};



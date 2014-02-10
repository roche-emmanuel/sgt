#include <plug_common.h>

class luna_wrapper_boost_gregorian_date {
public:
	typedef Luna< boost::gregorian::date > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50186404) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(boost::gregorian::date*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		boost::gregorian::date* rhs =(Luna< boost::gregorian::date >::check(L,2));
		boost::gregorian::date* self=(Luna< boost::gregorian::date >::check(L,1));
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

		boost::gregorian::date* self= (boost::gregorian::date*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< boost::gregorian::date >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50186404) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< boost::gregorian::date >::check(L,1));
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

		boost::gregorian::date* self=(Luna< boost::gregorian::date >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("boost::gregorian::date");
		
		return luna_dynamicCast(L,converters,"boost::gregorian::date",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50186404) ) return false;
		if( (!(Luna< boost::gregorian::date >::check(L,1))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_year(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_month(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_day(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_day_of_week(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_day_of_year(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_end_of_month(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_is_not_a_date(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_modjulian_day(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_julian_day(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_week_number(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 4 valid operators)
	inline static bool _lg_typecheck___lt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50186404) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___add(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,51049289) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___sub_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,51049289) ) return false;
		if( (!(Luna< boost::gregorian::date_duration >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___sub_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50186404) ) return false;
		if( (!(Luna< boost::gregorian::date >::check(L,2))) ) return false;
		return true;
	}


	// Constructor binds:
	// boost::gregorian::date::date()
	static boost::gregorian::date* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in boost::gregorian::date::date() function, expected prototype:\nboost::gregorian::date::date()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new boost::gregorian::date();
	}

	// boost::gregorian::date::date(int year, int month, int day)
	static boost::gregorian::date* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in boost::gregorian::date::date(int year, int month, int day) function, expected prototype:\nboost::gregorian::date::date(int year, int month, int day)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int year=(int)lua_tointeger(L,1);
		int month=(int)lua_tointeger(L,2);
		int day=(int)lua_tointeger(L,3);

		return new boost::gregorian::date(year, month, day);
	}

	// boost::gregorian::date::date(const boost::gregorian::date & rhs)
	static boost::gregorian::date* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in boost::gregorian::date::date(const boost::gregorian::date & rhs) function, expected prototype:\nboost::gregorian::date::date(const boost::gregorian::date & rhs)\nClass arguments details:\narg 1 ID = 50186404\n\n%s",luna_dumpStack(L).c_str());
		}

		const boost::gregorian::date* rhs_ptr=(Luna< boost::gregorian::date >::check(L,1));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in boost::gregorian::date::date function");
		}
		const boost::gregorian::date & rhs=*rhs_ptr;

		return new boost::gregorian::date(rhs);
	}

	// Overload binder for boost::gregorian::date::date
	static boost::gregorian::date* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function date, cannot match any of the overloads for function date:\n  date()\n  date(int, int, int)\n  date(const boost::gregorian::date &)\n");
		return NULL;
	}


	// Function binds:
	// int boost::gregorian::date::year() const
	static int _bind_year(lua_State *L) {
		if (!_lg_typecheck_year(L)) {
			luaL_error(L, "luna typecheck failed in int boost::gregorian::date::year() const function, expected prototype:\nint boost::gregorian::date::year() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		boost::gregorian::date* self=(Luna< boost::gregorian::date >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int boost::gregorian::date::year() const. Got : '%s'\n%s",typeid(Luna< boost::gregorian::date >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->year();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int boost::gregorian::date::month() const
	static int _bind_month(lua_State *L) {
		if (!_lg_typecheck_month(L)) {
			luaL_error(L, "luna typecheck failed in int boost::gregorian::date::month() const function, expected prototype:\nint boost::gregorian::date::month() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		boost::gregorian::date* self=(Luna< boost::gregorian::date >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int boost::gregorian::date::month() const. Got : '%s'\n%s",typeid(Luna< boost::gregorian::date >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->month();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int boost::gregorian::date::day() const
	static int _bind_day(lua_State *L) {
		if (!_lg_typecheck_day(L)) {
			luaL_error(L, "luna typecheck failed in int boost::gregorian::date::day() const function, expected prototype:\nint boost::gregorian::date::day() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		boost::gregorian::date* self=(Luna< boost::gregorian::date >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int boost::gregorian::date::day() const. Got : '%s'\n%s",typeid(Luna< boost::gregorian::date >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->day();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int boost::gregorian::date::day_of_week() const
	static int _bind_day_of_week(lua_State *L) {
		if (!_lg_typecheck_day_of_week(L)) {
			luaL_error(L, "luna typecheck failed in int boost::gregorian::date::day_of_week() const function, expected prototype:\nint boost::gregorian::date::day_of_week() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		boost::gregorian::date* self=(Luna< boost::gregorian::date >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int boost::gregorian::date::day_of_week() const. Got : '%s'\n%s",typeid(Luna< boost::gregorian::date >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->day_of_week();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int boost::gregorian::date::day_of_year() const
	static int _bind_day_of_year(lua_State *L) {
		if (!_lg_typecheck_day_of_year(L)) {
			luaL_error(L, "luna typecheck failed in int boost::gregorian::date::day_of_year() const function, expected prototype:\nint boost::gregorian::date::day_of_year() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		boost::gregorian::date* self=(Luna< boost::gregorian::date >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int boost::gregorian::date::day_of_year() const. Got : '%s'\n%s",typeid(Luna< boost::gregorian::date >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->day_of_year();
		lua_pushnumber(L,lret);

		return 1;
	}

	// boost::gregorian::date boost::gregorian::date::end_of_month() const
	static int _bind_end_of_month(lua_State *L) {
		if (!_lg_typecheck_end_of_month(L)) {
			luaL_error(L, "luna typecheck failed in boost::gregorian::date boost::gregorian::date::end_of_month() const function, expected prototype:\nboost::gregorian::date boost::gregorian::date::end_of_month() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		boost::gregorian::date* self=(Luna< boost::gregorian::date >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call boost::gregorian::date boost::gregorian::date::end_of_month() const. Got : '%s'\n%s",typeid(Luna< boost::gregorian::date >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		boost::gregorian::date stack_lret = self->end_of_month();
		boost::gregorian::date* lret = new boost::gregorian::date(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< boost::gregorian::date >::push(L,lret,true);

		return 1;
	}

	// bool boost::gregorian::date::is_not_a_date() const
	static int _bind_is_not_a_date(lua_State *L) {
		if (!_lg_typecheck_is_not_a_date(L)) {
			luaL_error(L, "luna typecheck failed in bool boost::gregorian::date::is_not_a_date() const function, expected prototype:\nbool boost::gregorian::date::is_not_a_date() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		boost::gregorian::date* self=(Luna< boost::gregorian::date >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool boost::gregorian::date::is_not_a_date() const. Got : '%s'\n%s",typeid(Luna< boost::gregorian::date >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->is_not_a_date();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// long boost::gregorian::date::modjulian_day() const
	static int _bind_modjulian_day(lua_State *L) {
		if (!_lg_typecheck_modjulian_day(L)) {
			luaL_error(L, "luna typecheck failed in long boost::gregorian::date::modjulian_day() const function, expected prototype:\nlong boost::gregorian::date::modjulian_day() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		boost::gregorian::date* self=(Luna< boost::gregorian::date >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long boost::gregorian::date::modjulian_day() const. Got : '%s'\n%s",typeid(Luna< boost::gregorian::date >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->modjulian_day();
		lua_pushnumber(L,lret);

		return 1;
	}

	// long boost::gregorian::date::julian_day() const
	static int _bind_julian_day(lua_State *L) {
		if (!_lg_typecheck_julian_day(L)) {
			luaL_error(L, "luna typecheck failed in long boost::gregorian::date::julian_day() const function, expected prototype:\nlong boost::gregorian::date::julian_day() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		boost::gregorian::date* self=(Luna< boost::gregorian::date >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long boost::gregorian::date::julian_day() const. Got : '%s'\n%s",typeid(Luna< boost::gregorian::date >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->julian_day();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int boost::gregorian::date::week_number() const
	static int _bind_week_number(lua_State *L) {
		if (!_lg_typecheck_week_number(L)) {
			luaL_error(L, "luna typecheck failed in int boost::gregorian::date::week_number() const function, expected prototype:\nint boost::gregorian::date::week_number() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		boost::gregorian::date* self=(Luna< boost::gregorian::date >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int boost::gregorian::date::week_number() const. Got : '%s'\n%s",typeid(Luna< boost::gregorian::date >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->week_number();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:
	// bool boost::gregorian::date::operator<(const boost::gregorian::date & rhs)
	static int _bind___lt(lua_State *L) {
		if (!_lg_typecheck___lt(L)) {
			luaL_error(L, "luna typecheck failed in bool boost::gregorian::date::operator<(const boost::gregorian::date & rhs) function, expected prototype:\nbool boost::gregorian::date::operator<(const boost::gregorian::date & rhs)\nClass arguments details:\narg 1 ID = 50186404\n\n%s",luna_dumpStack(L).c_str());
		}

		const boost::gregorian::date* rhs_ptr=(Luna< boost::gregorian::date >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in boost::gregorian::date::operator< function");
		}
		const boost::gregorian::date & rhs=*rhs_ptr;

		boost::gregorian::date* self=(Luna< boost::gregorian::date >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool boost::gregorian::date::operator<(const boost::gregorian::date &). Got : '%s'\n%s",typeid(Luna< boost::gregorian::date >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator<(rhs);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// boost::gregorian::date boost::gregorian::date::operator+(boost::gregorian::date_duration & arg1) const
	static int _bind___add(lua_State *L) {
		if (!_lg_typecheck___add(L)) {
			luaL_error(L, "luna typecheck failed in boost::gregorian::date boost::gregorian::date::operator+(boost::gregorian::date_duration & arg1) const function, expected prototype:\nboost::gregorian::date boost::gregorian::date::operator+(boost::gregorian::date_duration & arg1) const\nClass arguments details:\narg 1 ID = 51049289\n\n%s",luna_dumpStack(L).c_str());
		}

		boost::gregorian::date_duration* _arg1_ptr=(Luna< boost::gregorian::date_duration >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in boost::gregorian::date::operator+ function");
		}
		boost::gregorian::date_duration & _arg1=*_arg1_ptr;

		boost::gregorian::date* self=(Luna< boost::gregorian::date >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call boost::gregorian::date boost::gregorian::date::operator+(boost::gregorian::date_duration &) const. Got : '%s'\n%s",typeid(Luna< boost::gregorian::date >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		boost::gregorian::date stack_lret = self->operator+(_arg1);
		boost::gregorian::date* lret = new boost::gregorian::date(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< boost::gregorian::date >::push(L,lret,true);

		return 1;
	}

	// boost::gregorian::date boost::gregorian::date::operator-(boost::gregorian::date_duration & arg1) const
	static int _bind___sub_overload_1(lua_State *L) {
		if (!_lg_typecheck___sub_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in boost::gregorian::date boost::gregorian::date::operator-(boost::gregorian::date_duration & arg1) const function, expected prototype:\nboost::gregorian::date boost::gregorian::date::operator-(boost::gregorian::date_duration & arg1) const\nClass arguments details:\narg 1 ID = 51049289\n\n%s",luna_dumpStack(L).c_str());
		}

		boost::gregorian::date_duration* _arg1_ptr=(Luna< boost::gregorian::date_duration >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in boost::gregorian::date::operator- function");
		}
		boost::gregorian::date_duration & _arg1=*_arg1_ptr;

		boost::gregorian::date* self=(Luna< boost::gregorian::date >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call boost::gregorian::date boost::gregorian::date::operator-(boost::gregorian::date_duration &) const. Got : '%s'\n%s",typeid(Luna< boost::gregorian::date >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		boost::gregorian::date stack_lret = self->operator-(_arg1);
		boost::gregorian::date* lret = new boost::gregorian::date(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< boost::gregorian::date >::push(L,lret,true);

		return 1;
	}

	// boost::gregorian::date_duration boost::gregorian::date::operator-(boost::gregorian::date & arg1) const
	static int _bind___sub_overload_2(lua_State *L) {
		if (!_lg_typecheck___sub_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in boost::gregorian::date_duration boost::gregorian::date::operator-(boost::gregorian::date & arg1) const function, expected prototype:\nboost::gregorian::date_duration boost::gregorian::date::operator-(boost::gregorian::date & arg1) const\nClass arguments details:\narg 1 ID = 50186404\n\n%s",luna_dumpStack(L).c_str());
		}

		boost::gregorian::date* _arg1_ptr=(Luna< boost::gregorian::date >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in boost::gregorian::date::operator- function");
		}
		boost::gregorian::date & _arg1=*_arg1_ptr;

		boost::gregorian::date* self=(Luna< boost::gregorian::date >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call boost::gregorian::date_duration boost::gregorian::date::operator-(boost::gregorian::date &) const. Got : '%s'\n%s",typeid(Luna< boost::gregorian::date >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		boost::gregorian::date_duration stack_lret = self->operator-(_arg1);
		boost::gregorian::date_duration* lret = new boost::gregorian::date_duration(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< boost::gregorian::date_duration >::push(L,lret,true);

		return 1;
	}

	// Overload binder for boost::gregorian::date::operator-
	static int _bind___sub(lua_State *L) {
		if (_lg_typecheck___sub_overload_1(L)) return _bind___sub_overload_1(L);
		if (_lg_typecheck___sub_overload_2(L)) return _bind___sub_overload_2(L);

		luaL_error(L, "error in function operator-, cannot match any of the overloads for function operator-:\n  operator-(boost::gregorian::date_duration &)\n  operator-(boost::gregorian::date &)\n");
		return 0;
	}


};

boost::gregorian::date* LunaTraits< boost::gregorian::date >::_bind_ctor(lua_State *L) {
	return luna_wrapper_boost_gregorian_date::_bind_ctor(L);
}

void LunaTraits< boost::gregorian::date >::_bind_dtor(boost::gregorian::date* obj) {
	delete obj;
}

const char LunaTraits< boost::gregorian::date >::className[] = "date";
const char LunaTraits< boost::gregorian::date >::fullName[] = "boost::gregorian::date";
const char LunaTraits< boost::gregorian::date >::moduleName[] = "boost";
const char* LunaTraits< boost::gregorian::date >::parents[] = {0};
const int LunaTraits< boost::gregorian::date >::hash = 50186404;
const int LunaTraits< boost::gregorian::date >::uniqueIDs[] = {50186404,0};

luna_RegType LunaTraits< boost::gregorian::date >::methods[] = {
	{"year", &luna_wrapper_boost_gregorian_date::_bind_year},
	{"month", &luna_wrapper_boost_gregorian_date::_bind_month},
	{"day", &luna_wrapper_boost_gregorian_date::_bind_day},
	{"day_of_week", &luna_wrapper_boost_gregorian_date::_bind_day_of_week},
	{"day_of_year", &luna_wrapper_boost_gregorian_date::_bind_day_of_year},
	{"end_of_month", &luna_wrapper_boost_gregorian_date::_bind_end_of_month},
	{"is_not_a_date", &luna_wrapper_boost_gregorian_date::_bind_is_not_a_date},
	{"modjulian_day", &luna_wrapper_boost_gregorian_date::_bind_modjulian_day},
	{"julian_day", &luna_wrapper_boost_gregorian_date::_bind_julian_day},
	{"week_number", &luna_wrapper_boost_gregorian_date::_bind_week_number},
	{"__lt", &luna_wrapper_boost_gregorian_date::_bind___lt},
	{"__add", &luna_wrapper_boost_gregorian_date::_bind___add},
	{"__sub", &luna_wrapper_boost_gregorian_date::_bind___sub},
	{"dynCast", &luna_wrapper_boost_gregorian_date::_bind_dynCast},
	{"__eq", &luna_wrapper_boost_gregorian_date::_bind___eq},
	{"fromVoid", &luna_wrapper_boost_gregorian_date::_bind_fromVoid},
	{"asVoid", &luna_wrapper_boost_gregorian_date::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< boost::gregorian::date >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< boost::gregorian::date >::enumValues[] = {
	{0,0}
};



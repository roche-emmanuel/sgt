#include <plug_common.h>

class luna_wrapper_boost_posix_time_time_duration {
public:
	typedef Luna< boost::posix_time::time_duration > luna_t;

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		boost::posix_time::time_duration* self= (boost::posix_time::time_duration*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< boost::posix_time::time_duration >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3585892) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< boost::posix_time::time_duration >::check(L,1));
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

		boost::posix_time::time_duration* self=(Luna< boost::posix_time::time_duration >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("boost::posix_time::time_duration");
		
		return luna_dynamicCast(L,converters,"boost::posix_time::time_duration",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,1)!=LUA_TNUMBER ) return false;
		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_hours(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_minutes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_seconds(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_total_seconds(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_total_milliseconds(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_total_microseconds(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_total_nanoseconds(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_fractional_seconds(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_is_negative(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_invert_sign(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_num_fractional_digits(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ticks_per_second(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ticks(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_unit(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_is_neg_infinity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_is_pos_infinity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_is_not_a_date_time(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_is_special(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 6 valid operators)
	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,3585892) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___lt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,3585892) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___add(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,3585892) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___sub(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,3585892) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___div(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___mul(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Constructor binds:
	// boost::posix_time::time_duration::time_duration(long arg1, long arg2, long arg3, long arg4)
	static boost::posix_time::time_duration* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in boost::posix_time::time_duration::time_duration(long arg1, long arg2, long arg3, long arg4) function, expected prototype:\nboost::posix_time::time_duration::time_duration(long arg1, long arg2, long arg3, long arg4)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long _arg1=(long)lua_tonumber(L,1);
		long _arg2=(long)lua_tonumber(L,2);
		long _arg3=(long)lua_tonumber(L,3);
		long _arg4=(long)lua_tonumber(L,4);

		return new boost::posix_time::time_duration(_arg1, _arg2, _arg3, _arg4);
	}


	// Function binds:
	// long boost::posix_time::time_duration::hours()
	static int _bind_hours(lua_State *L) {
		if (!_lg_typecheck_hours(L)) {
			luaL_error(L, "luna typecheck failed in long boost::posix_time::time_duration::hours() function, expected prototype:\nlong boost::posix_time::time_duration::hours()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		boost::posix_time::time_duration* self=(Luna< boost::posix_time::time_duration >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long boost::posix_time::time_duration::hours(). Got : '%s'\n%s",typeid(Luna< boost::posix_time::time_duration >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->hours();
		lua_pushnumber(L,lret);

		return 1;
	}

	// long boost::posix_time::time_duration::minutes()
	static int _bind_minutes(lua_State *L) {
		if (!_lg_typecheck_minutes(L)) {
			luaL_error(L, "luna typecheck failed in long boost::posix_time::time_duration::minutes() function, expected prototype:\nlong boost::posix_time::time_duration::minutes()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		boost::posix_time::time_duration* self=(Luna< boost::posix_time::time_duration >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long boost::posix_time::time_duration::minutes(). Got : '%s'\n%s",typeid(Luna< boost::posix_time::time_duration >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->minutes();
		lua_pushnumber(L,lret);

		return 1;
	}

	// long boost::posix_time::time_duration::seconds()
	static int _bind_seconds(lua_State *L) {
		if (!_lg_typecheck_seconds(L)) {
			luaL_error(L, "luna typecheck failed in long boost::posix_time::time_duration::seconds() function, expected prototype:\nlong boost::posix_time::time_duration::seconds()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		boost::posix_time::time_duration* self=(Luna< boost::posix_time::time_duration >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long boost::posix_time::time_duration::seconds(). Got : '%s'\n%s",typeid(Luna< boost::posix_time::time_duration >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->seconds();
		lua_pushnumber(L,lret);

		return 1;
	}

	// long boost::posix_time::time_duration::total_seconds()
	static int _bind_total_seconds(lua_State *L) {
		if (!_lg_typecheck_total_seconds(L)) {
			luaL_error(L, "luna typecheck failed in long boost::posix_time::time_duration::total_seconds() function, expected prototype:\nlong boost::posix_time::time_duration::total_seconds()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		boost::posix_time::time_duration* self=(Luna< boost::posix_time::time_duration >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long boost::posix_time::time_duration::total_seconds(). Got : '%s'\n%s",typeid(Luna< boost::posix_time::time_duration >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->total_seconds();
		lua_pushnumber(L,lret);

		return 1;
	}

	// long boost::posix_time::time_duration::total_milliseconds()
	static int _bind_total_milliseconds(lua_State *L) {
		if (!_lg_typecheck_total_milliseconds(L)) {
			luaL_error(L, "luna typecheck failed in long boost::posix_time::time_duration::total_milliseconds() function, expected prototype:\nlong boost::posix_time::time_duration::total_milliseconds()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		boost::posix_time::time_duration* self=(Luna< boost::posix_time::time_duration >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long boost::posix_time::time_duration::total_milliseconds(). Got : '%s'\n%s",typeid(Luna< boost::posix_time::time_duration >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->total_milliseconds();
		lua_pushnumber(L,lret);

		return 1;
	}

	// long boost::posix_time::time_duration::total_microseconds()
	static int _bind_total_microseconds(lua_State *L) {
		if (!_lg_typecheck_total_microseconds(L)) {
			luaL_error(L, "luna typecheck failed in long boost::posix_time::time_duration::total_microseconds() function, expected prototype:\nlong boost::posix_time::time_duration::total_microseconds()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		boost::posix_time::time_duration* self=(Luna< boost::posix_time::time_duration >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long boost::posix_time::time_duration::total_microseconds(). Got : '%s'\n%s",typeid(Luna< boost::posix_time::time_duration >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->total_microseconds();
		lua_pushnumber(L,lret);

		return 1;
	}

	// long boost::posix_time::time_duration::total_nanoseconds()
	static int _bind_total_nanoseconds(lua_State *L) {
		if (!_lg_typecheck_total_nanoseconds(L)) {
			luaL_error(L, "luna typecheck failed in long boost::posix_time::time_duration::total_nanoseconds() function, expected prototype:\nlong boost::posix_time::time_duration::total_nanoseconds()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		boost::posix_time::time_duration* self=(Luna< boost::posix_time::time_duration >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long boost::posix_time::time_duration::total_nanoseconds(). Got : '%s'\n%s",typeid(Luna< boost::posix_time::time_duration >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->total_nanoseconds();
		lua_pushnumber(L,lret);

		return 1;
	}

	// long boost::posix_time::time_duration::fractional_seconds()
	static int _bind_fractional_seconds(lua_State *L) {
		if (!_lg_typecheck_fractional_seconds(L)) {
			luaL_error(L, "luna typecheck failed in long boost::posix_time::time_duration::fractional_seconds() function, expected prototype:\nlong boost::posix_time::time_duration::fractional_seconds()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		boost::posix_time::time_duration* self=(Luna< boost::posix_time::time_duration >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long boost::posix_time::time_duration::fractional_seconds(). Got : '%s'\n%s",typeid(Luna< boost::posix_time::time_duration >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->fractional_seconds();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool boost::posix_time::time_duration::is_negative()
	static int _bind_is_negative(lua_State *L) {
		if (!_lg_typecheck_is_negative(L)) {
			luaL_error(L, "luna typecheck failed in bool boost::posix_time::time_duration::is_negative() function, expected prototype:\nbool boost::posix_time::time_duration::is_negative()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		boost::posix_time::time_duration* self=(Luna< boost::posix_time::time_duration >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool boost::posix_time::time_duration::is_negative(). Got : '%s'\n%s",typeid(Luna< boost::posix_time::time_duration >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->is_negative();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// boost::posix_time::time_duration boost::posix_time::time_duration::invert_sign()
	static int _bind_invert_sign(lua_State *L) {
		if (!_lg_typecheck_invert_sign(L)) {
			luaL_error(L, "luna typecheck failed in boost::posix_time::time_duration boost::posix_time::time_duration::invert_sign() function, expected prototype:\nboost::posix_time::time_duration boost::posix_time::time_duration::invert_sign()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		boost::posix_time::time_duration* self=(Luna< boost::posix_time::time_duration >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call boost::posix_time::time_duration boost::posix_time::time_duration::invert_sign(). Got : '%s'\n%s",typeid(Luna< boost::posix_time::time_duration >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		boost::posix_time::time_duration stack_lret = self->invert_sign();
		boost::posix_time::time_duration* lret = new boost::posix_time::time_duration(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< boost::posix_time::time_duration >::push(L,lret,true);

		return 1;
	}

	// int boost::posix_time::time_duration::num_fractional_digits()
	static int _bind_num_fractional_digits(lua_State *L) {
		if (!_lg_typecheck_num_fractional_digits(L)) {
			luaL_error(L, "luna typecheck failed in int boost::posix_time::time_duration::num_fractional_digits() function, expected prototype:\nint boost::posix_time::time_duration::num_fractional_digits()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		boost::posix_time::time_duration* self=(Luna< boost::posix_time::time_duration >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int boost::posix_time::time_duration::num_fractional_digits(). Got : '%s'\n%s",typeid(Luna< boost::posix_time::time_duration >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->num_fractional_digits();
		lua_pushnumber(L,lret);

		return 1;
	}

	// long boost::posix_time::time_duration::ticks_per_second()
	static int _bind_ticks_per_second(lua_State *L) {
		if (!_lg_typecheck_ticks_per_second(L)) {
			luaL_error(L, "luna typecheck failed in long boost::posix_time::time_duration::ticks_per_second() function, expected prototype:\nlong boost::posix_time::time_duration::ticks_per_second()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		boost::posix_time::time_duration* self=(Luna< boost::posix_time::time_duration >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long boost::posix_time::time_duration::ticks_per_second(). Got : '%s'\n%s",typeid(Luna< boost::posix_time::time_duration >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->ticks_per_second();
		lua_pushnumber(L,lret);

		return 1;
	}

	// __int64 boost::posix_time::time_duration::ticks()
	static int _bind_ticks(lua_State *L) {
		if (!_lg_typecheck_ticks(L)) {
			luaL_error(L, "luna typecheck failed in __int64 boost::posix_time::time_duration::ticks() function, expected prototype:\n__int64 boost::posix_time::time_duration::ticks()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		boost::posix_time::time_duration* self=(Luna< boost::posix_time::time_duration >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __int64 boost::posix_time::time_duration::ticks(). Got : '%s'\n%s",typeid(Luna< boost::posix_time::time_duration >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		__int64 stack_lret = self->ticks();
		__int64* lret = new __int64(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< __int64 >::push(L,lret,true);

		return 1;
	}

	// boost::posix_time::time_duration boost::posix_time::time_duration::unit()
	static int _bind_unit(lua_State *L) {
		if (!_lg_typecheck_unit(L)) {
			luaL_error(L, "luna typecheck failed in boost::posix_time::time_duration boost::posix_time::time_duration::unit() function, expected prototype:\nboost::posix_time::time_duration boost::posix_time::time_duration::unit()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		boost::posix_time::time_duration* self=(Luna< boost::posix_time::time_duration >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call boost::posix_time::time_duration boost::posix_time::time_duration::unit(). Got : '%s'\n%s",typeid(Luna< boost::posix_time::time_duration >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		boost::posix_time::time_duration stack_lret = self->unit();
		boost::posix_time::time_duration* lret = new boost::posix_time::time_duration(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< boost::posix_time::time_duration >::push(L,lret,true);

		return 1;
	}

	// bool boost::posix_time::time_duration::is_neg_infinity() const
	static int _bind_is_neg_infinity(lua_State *L) {
		if (!_lg_typecheck_is_neg_infinity(L)) {
			luaL_error(L, "luna typecheck failed in bool boost::posix_time::time_duration::is_neg_infinity() const function, expected prototype:\nbool boost::posix_time::time_duration::is_neg_infinity() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		boost::posix_time::time_duration* self=(Luna< boost::posix_time::time_duration >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool boost::posix_time::time_duration::is_neg_infinity() const. Got : '%s'\n%s",typeid(Luna< boost::posix_time::time_duration >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->is_neg_infinity();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool boost::posix_time::time_duration::is_pos_infinity() const
	static int _bind_is_pos_infinity(lua_State *L) {
		if (!_lg_typecheck_is_pos_infinity(L)) {
			luaL_error(L, "luna typecheck failed in bool boost::posix_time::time_duration::is_pos_infinity() const function, expected prototype:\nbool boost::posix_time::time_duration::is_pos_infinity() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		boost::posix_time::time_duration* self=(Luna< boost::posix_time::time_duration >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool boost::posix_time::time_duration::is_pos_infinity() const. Got : '%s'\n%s",typeid(Luna< boost::posix_time::time_duration >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->is_pos_infinity();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool boost::posix_time::time_duration::is_not_a_date_time() const
	static int _bind_is_not_a_date_time(lua_State *L) {
		if (!_lg_typecheck_is_not_a_date_time(L)) {
			luaL_error(L, "luna typecheck failed in bool boost::posix_time::time_duration::is_not_a_date_time() const function, expected prototype:\nbool boost::posix_time::time_duration::is_not_a_date_time() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		boost::posix_time::time_duration* self=(Luna< boost::posix_time::time_duration >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool boost::posix_time::time_duration::is_not_a_date_time() const. Got : '%s'\n%s",typeid(Luna< boost::posix_time::time_duration >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->is_not_a_date_time();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool boost::posix_time::time_duration::is_special() const
	static int _bind_is_special(lua_State *L) {
		if (!_lg_typecheck_is_special(L)) {
			luaL_error(L, "luna typecheck failed in bool boost::posix_time::time_duration::is_special() const function, expected prototype:\nbool boost::posix_time::time_duration::is_special() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		boost::posix_time::time_duration* self=(Luna< boost::posix_time::time_duration >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool boost::posix_time::time_duration::is_special() const. Got : '%s'\n%s",typeid(Luna< boost::posix_time::time_duration >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->is_special();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:
	// bool boost::posix_time::time_duration::operator==(const boost::posix_time::time_duration & rhs)
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in bool boost::posix_time::time_duration::operator==(const boost::posix_time::time_duration & rhs) function, expected prototype:\nbool boost::posix_time::time_duration::operator==(const boost::posix_time::time_duration & rhs)\nClass arguments details:\narg 1 ID = 3585892\n\n%s",luna_dumpStack(L).c_str());
		}

		const boost::posix_time::time_duration* rhs_ptr=(Luna< boost::posix_time::time_duration >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in boost::posix_time::time_duration::operator== function");
		}
		const boost::posix_time::time_duration & rhs=*rhs_ptr;

		boost::posix_time::time_duration* self=(Luna< boost::posix_time::time_duration >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool boost::posix_time::time_duration::operator==(const boost::posix_time::time_duration &). Got : '%s'\n%s",typeid(Luna< boost::posix_time::time_duration >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator==(rhs);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool boost::posix_time::time_duration::operator<(const boost::posix_time::time_duration & rhs)
	static int _bind___lt(lua_State *L) {
		if (!_lg_typecheck___lt(L)) {
			luaL_error(L, "luna typecheck failed in bool boost::posix_time::time_duration::operator<(const boost::posix_time::time_duration & rhs) function, expected prototype:\nbool boost::posix_time::time_duration::operator<(const boost::posix_time::time_duration & rhs)\nClass arguments details:\narg 1 ID = 3585892\n\n%s",luna_dumpStack(L).c_str());
		}

		const boost::posix_time::time_duration* rhs_ptr=(Luna< boost::posix_time::time_duration >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in boost::posix_time::time_duration::operator< function");
		}
		const boost::posix_time::time_duration & rhs=*rhs_ptr;

		boost::posix_time::time_duration* self=(Luna< boost::posix_time::time_duration >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool boost::posix_time::time_duration::operator<(const boost::posix_time::time_duration &). Got : '%s'\n%s",typeid(Luna< boost::posix_time::time_duration >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator<(rhs);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// boost::posix_time::time_duration boost::posix_time::time_duration::operator+(boost::posix_time::time_duration & arg1) const
	static int _bind___add(lua_State *L) {
		if (!_lg_typecheck___add(L)) {
			luaL_error(L, "luna typecheck failed in boost::posix_time::time_duration boost::posix_time::time_duration::operator+(boost::posix_time::time_duration & arg1) const function, expected prototype:\nboost::posix_time::time_duration boost::posix_time::time_duration::operator+(boost::posix_time::time_duration & arg1) const\nClass arguments details:\narg 1 ID = 3585892\n\n%s",luna_dumpStack(L).c_str());
		}

		boost::posix_time::time_duration* _arg1_ptr=(Luna< boost::posix_time::time_duration >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in boost::posix_time::time_duration::operator+ function");
		}
		boost::posix_time::time_duration & _arg1=*_arg1_ptr;

		boost::posix_time::time_duration* self=(Luna< boost::posix_time::time_duration >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call boost::posix_time::time_duration boost::posix_time::time_duration::operator+(boost::posix_time::time_duration &) const. Got : '%s'\n%s",typeid(Luna< boost::posix_time::time_duration >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		boost::posix_time::time_duration stack_lret = self->operator+(_arg1);
		boost::posix_time::time_duration* lret = new boost::posix_time::time_duration(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< boost::posix_time::time_duration >::push(L,lret,true);

		return 1;
	}

	// boost::posix_time::time_duration boost::posix_time::time_duration::operator-(boost::posix_time::time_duration & arg1) const
	static int _bind___sub(lua_State *L) {
		if (!_lg_typecheck___sub(L)) {
			luaL_error(L, "luna typecheck failed in boost::posix_time::time_duration boost::posix_time::time_duration::operator-(boost::posix_time::time_duration & arg1) const function, expected prototype:\nboost::posix_time::time_duration boost::posix_time::time_duration::operator-(boost::posix_time::time_duration & arg1) const\nClass arguments details:\narg 1 ID = 3585892\n\n%s",luna_dumpStack(L).c_str());
		}

		boost::posix_time::time_duration* _arg1_ptr=(Luna< boost::posix_time::time_duration >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in boost::posix_time::time_duration::operator- function");
		}
		boost::posix_time::time_duration & _arg1=*_arg1_ptr;

		boost::posix_time::time_duration* self=(Luna< boost::posix_time::time_duration >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call boost::posix_time::time_duration boost::posix_time::time_duration::operator-(boost::posix_time::time_duration &) const. Got : '%s'\n%s",typeid(Luna< boost::posix_time::time_duration >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		boost::posix_time::time_duration stack_lret = self->operator-(_arg1);
		boost::posix_time::time_duration* lret = new boost::posix_time::time_duration(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< boost::posix_time::time_duration >::push(L,lret,true);

		return 1;
	}

	// boost::posix_time::time_duration boost::posix_time::time_duration::operator/(int arg1)
	static int _bind___div(lua_State *L) {
		if (!_lg_typecheck___div(L)) {
			luaL_error(L, "luna typecheck failed in boost::posix_time::time_duration boost::posix_time::time_duration::operator/(int arg1) function, expected prototype:\nboost::posix_time::time_duration boost::posix_time::time_duration::operator/(int arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int _arg1=(int)lua_tointeger(L,2);

		boost::posix_time::time_duration* self=(Luna< boost::posix_time::time_duration >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call boost::posix_time::time_duration boost::posix_time::time_duration::operator/(int). Got : '%s'\n%s",typeid(Luna< boost::posix_time::time_duration >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		boost::posix_time::time_duration stack_lret = self->operator/(_arg1);
		boost::posix_time::time_duration* lret = new boost::posix_time::time_duration(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< boost::posix_time::time_duration >::push(L,lret,true);

		return 1;
	}

	// boost::posix_time::time_duration boost::posix_time::time_duration::operator*(int arg1)
	static int _bind___mul(lua_State *L) {
		if (!_lg_typecheck___mul(L)) {
			luaL_error(L, "luna typecheck failed in boost::posix_time::time_duration boost::posix_time::time_duration::operator*(int arg1) function, expected prototype:\nboost::posix_time::time_duration boost::posix_time::time_duration::operator*(int arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int _arg1=(int)lua_tointeger(L,2);

		boost::posix_time::time_duration* self=(Luna< boost::posix_time::time_duration >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call boost::posix_time::time_duration boost::posix_time::time_duration::operator*(int). Got : '%s'\n%s",typeid(Luna< boost::posix_time::time_duration >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		boost::posix_time::time_duration stack_lret = self->operator*(_arg1);
		boost::posix_time::time_duration* lret = new boost::posix_time::time_duration(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< boost::posix_time::time_duration >::push(L,lret,true);

		return 1;
	}


};

boost::posix_time::time_duration* LunaTraits< boost::posix_time::time_duration >::_bind_ctor(lua_State *L) {
	return luna_wrapper_boost_posix_time_time_duration::_bind_ctor(L);
}

void LunaTraits< boost::posix_time::time_duration >::_bind_dtor(boost::posix_time::time_duration* obj) {
	delete obj;
}

const char LunaTraits< boost::posix_time::time_duration >::className[] = "time_duration";
const char LunaTraits< boost::posix_time::time_duration >::fullName[] = "boost::posix_time::time_duration";
const char LunaTraits< boost::posix_time::time_duration >::moduleName[] = "boost";
const char* LunaTraits< boost::posix_time::time_duration >::parents[] = {0};
const int LunaTraits< boost::posix_time::time_duration >::hash = 3585892;
const int LunaTraits< boost::posix_time::time_duration >::uniqueIDs[] = {3585892,0};

luna_RegType LunaTraits< boost::posix_time::time_duration >::methods[] = {
	{"hours", &luna_wrapper_boost_posix_time_time_duration::_bind_hours},
	{"minutes", &luna_wrapper_boost_posix_time_time_duration::_bind_minutes},
	{"seconds", &luna_wrapper_boost_posix_time_time_duration::_bind_seconds},
	{"total_seconds", &luna_wrapper_boost_posix_time_time_duration::_bind_total_seconds},
	{"total_milliseconds", &luna_wrapper_boost_posix_time_time_duration::_bind_total_milliseconds},
	{"total_microseconds", &luna_wrapper_boost_posix_time_time_duration::_bind_total_microseconds},
	{"total_nanoseconds", &luna_wrapper_boost_posix_time_time_duration::_bind_total_nanoseconds},
	{"fractional_seconds", &luna_wrapper_boost_posix_time_time_duration::_bind_fractional_seconds},
	{"is_negative", &luna_wrapper_boost_posix_time_time_duration::_bind_is_negative},
	{"invert_sign", &luna_wrapper_boost_posix_time_time_duration::_bind_invert_sign},
	{"num_fractional_digits", &luna_wrapper_boost_posix_time_time_duration::_bind_num_fractional_digits},
	{"ticks_per_second", &luna_wrapper_boost_posix_time_time_duration::_bind_ticks_per_second},
	{"ticks", &luna_wrapper_boost_posix_time_time_duration::_bind_ticks},
	{"unit", &luna_wrapper_boost_posix_time_time_duration::_bind_unit},
	{"is_neg_infinity", &luna_wrapper_boost_posix_time_time_duration::_bind_is_neg_infinity},
	{"is_pos_infinity", &luna_wrapper_boost_posix_time_time_duration::_bind_is_pos_infinity},
	{"is_not_a_date_time", &luna_wrapper_boost_posix_time_time_duration::_bind_is_not_a_date_time},
	{"is_special", &luna_wrapper_boost_posix_time_time_duration::_bind_is_special},
	{"__eq", &luna_wrapper_boost_posix_time_time_duration::_bind___eq},
	{"__lt", &luna_wrapper_boost_posix_time_time_duration::_bind___lt},
	{"__add", &luna_wrapper_boost_posix_time_time_duration::_bind___add},
	{"__sub", &luna_wrapper_boost_posix_time_time_duration::_bind___sub},
	{"__div", &luna_wrapper_boost_posix_time_time_duration::_bind___div},
	{"__mul", &luna_wrapper_boost_posix_time_time_duration::_bind___mul},
	{"dynCast", &luna_wrapper_boost_posix_time_time_duration::_bind_dynCast},
	{"fromVoid", &luna_wrapper_boost_posix_time_time_duration::_bind_fromVoid},
	{"asVoid", &luna_wrapper_boost_posix_time_time_duration::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< boost::posix_time::time_duration >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< boost::posix_time::time_duration >::enumValues[] = {
	{0,0}
};



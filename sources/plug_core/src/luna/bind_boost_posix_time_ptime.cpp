#include <plug_common.h>

class luna_wrapper_boost_posix_time_ptime {
public:
	typedef Luna< boost::posix_time::ptime > luna_t;

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		boost::posix_time::ptime* self= (boost::posix_time::ptime*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< boost::posix_time::ptime >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,16567808) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< boost::posix_time::ptime >::check(L,1));
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

		boost::posix_time::ptime* self=(Luna< boost::posix_time::ptime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("boost::posix_time::ptime");
		
		return luna_dynamicCast(L,converters,"boost::posix_time::ptime",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50186404) ) return false;
		if( (!(Luna< boost::gregorian::date >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50186404) ) return false;
		if( (!(Luna< boost::gregorian::date >::check(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,3585892) ) return false;
		if( (!(Luna< boost::posix_time::time_duration >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,16567808) ) return false;
		if( (!(Luna< boost::posix_time::ptime >::check(L,1))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_date(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_time_of_day(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_is_infinity(lua_State *L) {
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

	inline static bool _lg_typecheck___tostring(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,16567808)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 7 valid operators)
	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,16567808) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___lt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,16567808) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___add_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,51049289) ) return false;
		if( (!(Luna< boost::gregorian::date_duration >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___add_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,3585892) ) return false;
		if( (!(Luna< boost::posix_time::time_duration >::check(L,2))) ) return false;
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

		if( !Luna<void>::has_uniqueid(L,2,3585892) ) return false;
		if( (!(Luna< boost::posix_time::time_duration >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___sub_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,16567808) ) return false;
		if( (!(Luna< boost::posix_time::ptime >::check(L,2))) ) return false;
		return true;
	}


	// Constructor binds:
	// boost::posix_time::ptime::ptime()
	static boost::posix_time::ptime* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in boost::posix_time::ptime::ptime() function, expected prototype:\nboost::posix_time::ptime::ptime()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new boost::posix_time::ptime();
	}

	// boost::posix_time::ptime::ptime(boost::gregorian::date & arg1)
	static boost::posix_time::ptime* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in boost::posix_time::ptime::ptime(boost::gregorian::date & arg1) function, expected prototype:\nboost::posix_time::ptime::ptime(boost::gregorian::date & arg1)\nClass arguments details:\narg 1 ID = 50186404\n\n%s",luna_dumpStack(L).c_str());
		}

		boost::gregorian::date* _arg1_ptr=(Luna< boost::gregorian::date >::check(L,1));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in boost::posix_time::ptime::ptime function");
		}
		boost::gregorian::date & _arg1=*_arg1_ptr;

		return new boost::posix_time::ptime(_arg1);
	}

	// boost::posix_time::ptime::ptime(boost::gregorian::date & arg1, boost::posix_time::time_duration & arg2)
	static boost::posix_time::ptime* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in boost::posix_time::ptime::ptime(boost::gregorian::date & arg1, boost::posix_time::time_duration & arg2) function, expected prototype:\nboost::posix_time::ptime::ptime(boost::gregorian::date & arg1, boost::posix_time::time_duration & arg2)\nClass arguments details:\narg 1 ID = 50186404\narg 2 ID = 3585892\n\n%s",luna_dumpStack(L).c_str());
		}

		boost::gregorian::date* _arg1_ptr=(Luna< boost::gregorian::date >::check(L,1));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in boost::posix_time::ptime::ptime function");
		}
		boost::gregorian::date & _arg1=*_arg1_ptr;
		boost::posix_time::time_duration* _arg2_ptr=(Luna< boost::posix_time::time_duration >::check(L,2));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in boost::posix_time::ptime::ptime function");
		}
		boost::posix_time::time_duration & _arg2=*_arg2_ptr;

		return new boost::posix_time::ptime(_arg1, _arg2);
	}

	// boost::posix_time::ptime::ptime(boost::posix_time::ptime & arg1)
	static boost::posix_time::ptime* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in boost::posix_time::ptime::ptime(boost::posix_time::ptime & arg1) function, expected prototype:\nboost::posix_time::ptime::ptime(boost::posix_time::ptime & arg1)\nClass arguments details:\narg 1 ID = 16567808\n\n%s",luna_dumpStack(L).c_str());
		}

		boost::posix_time::ptime* _arg1_ptr=(Luna< boost::posix_time::ptime >::check(L,1));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in boost::posix_time::ptime::ptime function");
		}
		boost::posix_time::ptime & _arg1=*_arg1_ptr;

		return new boost::posix_time::ptime(_arg1);
	}

	// Overload binder for boost::posix_time::ptime::ptime
	static boost::posix_time::ptime* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function ptime, cannot match any of the overloads for function ptime:\n  ptime()\n  ptime(boost::gregorian::date &)\n  ptime(boost::gregorian::date &, boost::posix_time::time_duration &)\n  ptime(boost::posix_time::ptime &)\n");
		return NULL;
	}


	// Function binds:
	// boost::gregorian::date boost::posix_time::ptime::date()
	static int _bind_date(lua_State *L) {
		if (!_lg_typecheck_date(L)) {
			luaL_error(L, "luna typecheck failed in boost::gregorian::date boost::posix_time::ptime::date() function, expected prototype:\nboost::gregorian::date boost::posix_time::ptime::date()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		boost::posix_time::ptime* self=(Luna< boost::posix_time::ptime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call boost::gregorian::date boost::posix_time::ptime::date(). Got : '%s'\n%s",typeid(Luna< boost::posix_time::ptime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		boost::gregorian::date stack_lret = self->date();
		boost::gregorian::date* lret = new boost::gregorian::date(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< boost::gregorian::date >::push(L,lret,true);

		return 1;
	}

	// boost::posix_time::time_duration boost::posix_time::ptime::time_of_day()
	static int _bind_time_of_day(lua_State *L) {
		if (!_lg_typecheck_time_of_day(L)) {
			luaL_error(L, "luna typecheck failed in boost::posix_time::time_duration boost::posix_time::ptime::time_of_day() function, expected prototype:\nboost::posix_time::time_duration boost::posix_time::ptime::time_of_day()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		boost::posix_time::ptime* self=(Luna< boost::posix_time::ptime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call boost::posix_time::time_duration boost::posix_time::ptime::time_of_day(). Got : '%s'\n%s",typeid(Luna< boost::posix_time::ptime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		boost::posix_time::time_duration stack_lret = self->time_of_day();
		boost::posix_time::time_duration* lret = new boost::posix_time::time_duration(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< boost::posix_time::time_duration >::push(L,lret,true);

		return 1;
	}

	// bool boost::posix_time::ptime::is_infinity() const
	static int _bind_is_infinity(lua_State *L) {
		if (!_lg_typecheck_is_infinity(L)) {
			luaL_error(L, "luna typecheck failed in bool boost::posix_time::ptime::is_infinity() const function, expected prototype:\nbool boost::posix_time::ptime::is_infinity() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		boost::posix_time::ptime* self=(Luna< boost::posix_time::ptime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool boost::posix_time::ptime::is_infinity() const. Got : '%s'\n%s",typeid(Luna< boost::posix_time::ptime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->is_infinity();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool boost::posix_time::ptime::is_neg_infinity() const
	static int _bind_is_neg_infinity(lua_State *L) {
		if (!_lg_typecheck_is_neg_infinity(L)) {
			luaL_error(L, "luna typecheck failed in bool boost::posix_time::ptime::is_neg_infinity() const function, expected prototype:\nbool boost::posix_time::ptime::is_neg_infinity() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		boost::posix_time::ptime* self=(Luna< boost::posix_time::ptime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool boost::posix_time::ptime::is_neg_infinity() const. Got : '%s'\n%s",typeid(Luna< boost::posix_time::ptime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->is_neg_infinity();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool boost::posix_time::ptime::is_pos_infinity() const
	static int _bind_is_pos_infinity(lua_State *L) {
		if (!_lg_typecheck_is_pos_infinity(L)) {
			luaL_error(L, "luna typecheck failed in bool boost::posix_time::ptime::is_pos_infinity() const function, expected prototype:\nbool boost::posix_time::ptime::is_pos_infinity() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		boost::posix_time::ptime* self=(Luna< boost::posix_time::ptime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool boost::posix_time::ptime::is_pos_infinity() const. Got : '%s'\n%s",typeid(Luna< boost::posix_time::ptime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->is_pos_infinity();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool boost::posix_time::ptime::is_not_a_date_time() const
	static int _bind_is_not_a_date_time(lua_State *L) {
		if (!_lg_typecheck_is_not_a_date_time(L)) {
			luaL_error(L, "luna typecheck failed in bool boost::posix_time::ptime::is_not_a_date_time() const function, expected prototype:\nbool boost::posix_time::ptime::is_not_a_date_time() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		boost::posix_time::ptime* self=(Luna< boost::posix_time::ptime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool boost::posix_time::ptime::is_not_a_date_time() const. Got : '%s'\n%s",typeid(Luna< boost::posix_time::ptime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->is_not_a_date_time();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool boost::posix_time::ptime::is_special() const
	static int _bind_is_special(lua_State *L) {
		if (!_lg_typecheck_is_special(L)) {
			luaL_error(L, "luna typecheck failed in bool boost::posix_time::ptime::is_special() const function, expected prototype:\nbool boost::posix_time::ptime::is_special() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		boost::posix_time::ptime* self=(Luna< boost::posix_time::ptime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool boost::posix_time::ptime::is_special() const. Got : '%s'\n%s",typeid(Luna< boost::posix_time::ptime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->is_special();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int boost::posix_time::ptime::ptime_tostring(boost::posix_time::ptime * val, lua_State * L)
	static int _bind___tostring(lua_State *L) {
		if (!_lg_typecheck___tostring(L)) {
			luaL_error(L, "luna typecheck failed in int boost::posix_time::ptime::ptime_tostring(boost::posix_time::ptime * val, lua_State * L) function, expected prototype:\nint boost::posix_time::ptime::ptime_tostring(boost::posix_time::ptime * val, lua_State * L)\nClass arguments details:\narg 1 ID = 16567808\n\n%s",luna_dumpStack(L).c_str());
		}

		boost::posix_time::ptime* val=(Luna< boost::posix_time::ptime >::check(L,1));

		return ptime_tostring(val, L);
	}


	// Operator binds:
	// bool boost::posix_time::ptime::operator==(const boost::posix_time::ptime & rhs)
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in bool boost::posix_time::ptime::operator==(const boost::posix_time::ptime & rhs) function, expected prototype:\nbool boost::posix_time::ptime::operator==(const boost::posix_time::ptime & rhs)\nClass arguments details:\narg 1 ID = 16567808\n\n%s",luna_dumpStack(L).c_str());
		}

		const boost::posix_time::ptime* rhs_ptr=(Luna< boost::posix_time::ptime >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in boost::posix_time::ptime::operator== function");
		}
		const boost::posix_time::ptime & rhs=*rhs_ptr;

		boost::posix_time::ptime* self=(Luna< boost::posix_time::ptime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool boost::posix_time::ptime::operator==(const boost::posix_time::ptime &). Got : '%s'\n%s",typeid(Luna< boost::posix_time::ptime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator==(rhs);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool boost::posix_time::ptime::operator<(const boost::posix_time::ptime & rhs)
	static int _bind___lt(lua_State *L) {
		if (!_lg_typecheck___lt(L)) {
			luaL_error(L, "luna typecheck failed in bool boost::posix_time::ptime::operator<(const boost::posix_time::ptime & rhs) function, expected prototype:\nbool boost::posix_time::ptime::operator<(const boost::posix_time::ptime & rhs)\nClass arguments details:\narg 1 ID = 16567808\n\n%s",luna_dumpStack(L).c_str());
		}

		const boost::posix_time::ptime* rhs_ptr=(Luna< boost::posix_time::ptime >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in boost::posix_time::ptime::operator< function");
		}
		const boost::posix_time::ptime & rhs=*rhs_ptr;

		boost::posix_time::ptime* self=(Luna< boost::posix_time::ptime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool boost::posix_time::ptime::operator<(const boost::posix_time::ptime &). Got : '%s'\n%s",typeid(Luna< boost::posix_time::ptime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator<(rhs);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// boost::posix_time::ptime boost::posix_time::ptime::operator+(boost::gregorian::date_duration & arg1) const
	static int _bind___add_overload_1(lua_State *L) {
		if (!_lg_typecheck___add_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in boost::posix_time::ptime boost::posix_time::ptime::operator+(boost::gregorian::date_duration & arg1) const function, expected prototype:\nboost::posix_time::ptime boost::posix_time::ptime::operator+(boost::gregorian::date_duration & arg1) const\nClass arguments details:\narg 1 ID = 51049289\n\n%s",luna_dumpStack(L).c_str());
		}

		boost::gregorian::date_duration* _arg1_ptr=(Luna< boost::gregorian::date_duration >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in boost::posix_time::ptime::operator+ function");
		}
		boost::gregorian::date_duration & _arg1=*_arg1_ptr;

		boost::posix_time::ptime* self=(Luna< boost::posix_time::ptime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call boost::posix_time::ptime boost::posix_time::ptime::operator+(boost::gregorian::date_duration &) const. Got : '%s'\n%s",typeid(Luna< boost::posix_time::ptime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		boost::posix_time::ptime stack_lret = self->operator+(_arg1);
		boost::posix_time::ptime* lret = new boost::posix_time::ptime(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< boost::posix_time::ptime >::push(L,lret,true);

		return 1;
	}

	// boost::posix_time::ptime boost::posix_time::ptime::operator+(boost::posix_time::time_duration & arg1) const
	static int _bind___add_overload_2(lua_State *L) {
		if (!_lg_typecheck___add_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in boost::posix_time::ptime boost::posix_time::ptime::operator+(boost::posix_time::time_duration & arg1) const function, expected prototype:\nboost::posix_time::ptime boost::posix_time::ptime::operator+(boost::posix_time::time_duration & arg1) const\nClass arguments details:\narg 1 ID = 3585892\n\n%s",luna_dumpStack(L).c_str());
		}

		boost::posix_time::time_duration* _arg1_ptr=(Luna< boost::posix_time::time_duration >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in boost::posix_time::ptime::operator+ function");
		}
		boost::posix_time::time_duration & _arg1=*_arg1_ptr;

		boost::posix_time::ptime* self=(Luna< boost::posix_time::ptime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call boost::posix_time::ptime boost::posix_time::ptime::operator+(boost::posix_time::time_duration &) const. Got : '%s'\n%s",typeid(Luna< boost::posix_time::ptime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		boost::posix_time::ptime stack_lret = self->operator+(_arg1);
		boost::posix_time::ptime* lret = new boost::posix_time::ptime(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< boost::posix_time::ptime >::push(L,lret,true);

		return 1;
	}

	// Overload binder for boost::posix_time::ptime::operator+
	static int _bind___add(lua_State *L) {
		if (_lg_typecheck___add_overload_1(L)) return _bind___add_overload_1(L);
		if (_lg_typecheck___add_overload_2(L)) return _bind___add_overload_2(L);

		luaL_error(L, "error in function operator+, cannot match any of the overloads for function operator+:\n  operator+(boost::gregorian::date_duration &)\n  operator+(boost::posix_time::time_duration &)\n");
		return 0;
	}

	// boost::posix_time::ptime boost::posix_time::ptime::operator-(boost::gregorian::date_duration & arg1) const
	static int _bind___sub_overload_1(lua_State *L) {
		if (!_lg_typecheck___sub_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in boost::posix_time::ptime boost::posix_time::ptime::operator-(boost::gregorian::date_duration & arg1) const function, expected prototype:\nboost::posix_time::ptime boost::posix_time::ptime::operator-(boost::gregorian::date_duration & arg1) const\nClass arguments details:\narg 1 ID = 51049289\n\n%s",luna_dumpStack(L).c_str());
		}

		boost::gregorian::date_duration* _arg1_ptr=(Luna< boost::gregorian::date_duration >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in boost::posix_time::ptime::operator- function");
		}
		boost::gregorian::date_duration & _arg1=*_arg1_ptr;

		boost::posix_time::ptime* self=(Luna< boost::posix_time::ptime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call boost::posix_time::ptime boost::posix_time::ptime::operator-(boost::gregorian::date_duration &) const. Got : '%s'\n%s",typeid(Luna< boost::posix_time::ptime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		boost::posix_time::ptime stack_lret = self->operator-(_arg1);
		boost::posix_time::ptime* lret = new boost::posix_time::ptime(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< boost::posix_time::ptime >::push(L,lret,true);

		return 1;
	}

	// boost::posix_time::ptime boost::posix_time::ptime::operator-(boost::posix_time::time_duration & arg1) const
	static int _bind___sub_overload_2(lua_State *L) {
		if (!_lg_typecheck___sub_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in boost::posix_time::ptime boost::posix_time::ptime::operator-(boost::posix_time::time_duration & arg1) const function, expected prototype:\nboost::posix_time::ptime boost::posix_time::ptime::operator-(boost::posix_time::time_duration & arg1) const\nClass arguments details:\narg 1 ID = 3585892\n\n%s",luna_dumpStack(L).c_str());
		}

		boost::posix_time::time_duration* _arg1_ptr=(Luna< boost::posix_time::time_duration >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in boost::posix_time::ptime::operator- function");
		}
		boost::posix_time::time_duration & _arg1=*_arg1_ptr;

		boost::posix_time::ptime* self=(Luna< boost::posix_time::ptime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call boost::posix_time::ptime boost::posix_time::ptime::operator-(boost::posix_time::time_duration &) const. Got : '%s'\n%s",typeid(Luna< boost::posix_time::ptime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		boost::posix_time::ptime stack_lret = self->operator-(_arg1);
		boost::posix_time::ptime* lret = new boost::posix_time::ptime(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< boost::posix_time::ptime >::push(L,lret,true);

		return 1;
	}

	// boost::posix_time::time_duration boost::posix_time::ptime::operator-(boost::posix_time::ptime & arg1)
	static int _bind___sub_overload_3(lua_State *L) {
		if (!_lg_typecheck___sub_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in boost::posix_time::time_duration boost::posix_time::ptime::operator-(boost::posix_time::ptime & arg1) function, expected prototype:\nboost::posix_time::time_duration boost::posix_time::ptime::operator-(boost::posix_time::ptime & arg1)\nClass arguments details:\narg 1 ID = 16567808\n\n%s",luna_dumpStack(L).c_str());
		}

		boost::posix_time::ptime* _arg1_ptr=(Luna< boost::posix_time::ptime >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in boost::posix_time::ptime::operator- function");
		}
		boost::posix_time::ptime & _arg1=*_arg1_ptr;

		boost::posix_time::ptime* self=(Luna< boost::posix_time::ptime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call boost::posix_time::time_duration boost::posix_time::ptime::operator-(boost::posix_time::ptime &). Got : '%s'\n%s",typeid(Luna< boost::posix_time::ptime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		boost::posix_time::time_duration stack_lret = self->operator-(_arg1);
		boost::posix_time::time_duration* lret = new boost::posix_time::time_duration(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< boost::posix_time::time_duration >::push(L,lret,true);

		return 1;
	}

	// Overload binder for boost::posix_time::ptime::operator-
	static int _bind___sub(lua_State *L) {
		if (_lg_typecheck___sub_overload_1(L)) return _bind___sub_overload_1(L);
		if (_lg_typecheck___sub_overload_2(L)) return _bind___sub_overload_2(L);
		if (_lg_typecheck___sub_overload_3(L)) return _bind___sub_overload_3(L);

		luaL_error(L, "error in function operator-, cannot match any of the overloads for function operator-:\n  operator-(boost::gregorian::date_duration &)\n  operator-(boost::posix_time::time_duration &)\n  operator-(boost::posix_time::ptime &)\n");
		return 0;
	}


};

boost::posix_time::ptime* LunaTraits< boost::posix_time::ptime >::_bind_ctor(lua_State *L) {
	return luna_wrapper_boost_posix_time_ptime::_bind_ctor(L);
}

void LunaTraits< boost::posix_time::ptime >::_bind_dtor(boost::posix_time::ptime* obj) {
	delete obj;
}

const char LunaTraits< boost::posix_time::ptime >::className[] = "ptime";
const char LunaTraits< boost::posix_time::ptime >::fullName[] = "boost::posix_time::ptime";
const char LunaTraits< boost::posix_time::ptime >::moduleName[] = "boost";
const char* LunaTraits< boost::posix_time::ptime >::parents[] = {0};
const int LunaTraits< boost::posix_time::ptime >::hash = 16567808;
const int LunaTraits< boost::posix_time::ptime >::uniqueIDs[] = {16567808,0};

luna_RegType LunaTraits< boost::posix_time::ptime >::methods[] = {
	{"date", &luna_wrapper_boost_posix_time_ptime::_bind_date},
	{"time_of_day", &luna_wrapper_boost_posix_time_ptime::_bind_time_of_day},
	{"is_infinity", &luna_wrapper_boost_posix_time_ptime::_bind_is_infinity},
	{"is_neg_infinity", &luna_wrapper_boost_posix_time_ptime::_bind_is_neg_infinity},
	{"is_pos_infinity", &luna_wrapper_boost_posix_time_ptime::_bind_is_pos_infinity},
	{"is_not_a_date_time", &luna_wrapper_boost_posix_time_ptime::_bind_is_not_a_date_time},
	{"is_special", &luna_wrapper_boost_posix_time_ptime::_bind_is_special},
	{"__tostring", &luna_wrapper_boost_posix_time_ptime::_bind___tostring},
	{"__eq", &luna_wrapper_boost_posix_time_ptime::_bind___eq},
	{"__lt", &luna_wrapper_boost_posix_time_ptime::_bind___lt},
	{"__add", &luna_wrapper_boost_posix_time_ptime::_bind___add},
	{"__sub", &luna_wrapper_boost_posix_time_ptime::_bind___sub},
	{"dynCast", &luna_wrapper_boost_posix_time_ptime::_bind_dynCast},
	{"fromVoid", &luna_wrapper_boost_posix_time_ptime::_bind_fromVoid},
	{"asVoid", &luna_wrapper_boost_posix_time_ptime::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< boost::posix_time::ptime >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< boost::posix_time::ptime >::enumValues[] = {
	{0,0}
};



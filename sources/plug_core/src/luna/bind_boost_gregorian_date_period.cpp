#include <plug_common.h>

class luna_wrapper_boost_gregorian_date_period {
public:
	typedef Luna< boost::gregorian::date_period > luna_t;

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		boost::gregorian::date_period* self= (boost::gregorian::date_period*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< boost::gregorian::date_period >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,8854841) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< boost::gregorian::date_period >::check(L,1));
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

		boost::gregorian::date_period* self=(Luna< boost::gregorian::date_period >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("boost::gregorian::date_period");
		
		return luna_dynamicCast(L,converters,"boost::gregorian::date_period",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50186404) ) return false;
		if( (!(Luna< boost::gregorian::date >::check(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50186404) ) return false;
		if( (!(Luna< boost::gregorian::date >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50186404) ) return false;
		if( (!(Luna< boost::gregorian::date >::check(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,51049289) ) return false;
		if( (!(Luna< boost::gregorian::date_duration >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,8854841) ) return false;
		if( (!(Luna< boost::gregorian::date_period >::check(L,1))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_shift(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,51049289) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_expand(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,51049289) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_begin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_last(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_end(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_length(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_is_null(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_contains_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50186404) ) return false;
		if( (!(Luna< boost::gregorian::date >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_contains_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,8854841) ) return false;
		if( (!(Luna< boost::gregorian::date_period >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_intersects(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,8854841) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_intersection(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,8854841) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_is_adjacent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,8854841) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_is_after(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50186404) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_is_before(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50186404) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_merge(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,8854841) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_span(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,8854841) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 2 valid operators)
	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,8854841) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___lt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,8854841) ) return false;
		return true;
	}


	// Constructor binds:
	// boost::gregorian::date_period::date_period(boost::gregorian::date & arg1, boost::gregorian::date & arg2)
	static boost::gregorian::date_period* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in boost::gregorian::date_period::date_period(boost::gregorian::date & arg1, boost::gregorian::date & arg2) function, expected prototype:\nboost::gregorian::date_period::date_period(boost::gregorian::date & arg1, boost::gregorian::date & arg2)\nClass arguments details:\narg 1 ID = 50186404\narg 2 ID = 50186404\n\n%s",luna_dumpStack(L).c_str());
		}

		boost::gregorian::date* _arg1_ptr=(Luna< boost::gregorian::date >::check(L,1));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in boost::gregorian::date_period::date_period function");
		}
		boost::gregorian::date & _arg1=*_arg1_ptr;
		boost::gregorian::date* _arg2_ptr=(Luna< boost::gregorian::date >::check(L,2));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in boost::gregorian::date_period::date_period function");
		}
		boost::gregorian::date & _arg2=*_arg2_ptr;

		return new boost::gregorian::date_period(_arg1, _arg2);
	}

	// boost::gregorian::date_period::date_period(boost::gregorian::date & arg1, boost::gregorian::date_duration & arg2)
	static boost::gregorian::date_period* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in boost::gregorian::date_period::date_period(boost::gregorian::date & arg1, boost::gregorian::date_duration & arg2) function, expected prototype:\nboost::gregorian::date_period::date_period(boost::gregorian::date & arg1, boost::gregorian::date_duration & arg2)\nClass arguments details:\narg 1 ID = 50186404\narg 2 ID = 51049289\n\n%s",luna_dumpStack(L).c_str());
		}

		boost::gregorian::date* _arg1_ptr=(Luna< boost::gregorian::date >::check(L,1));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in boost::gregorian::date_period::date_period function");
		}
		boost::gregorian::date & _arg1=*_arg1_ptr;
		boost::gregorian::date_duration* _arg2_ptr=(Luna< boost::gregorian::date_duration >::check(L,2));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in boost::gregorian::date_period::date_period function");
		}
		boost::gregorian::date_duration & _arg2=*_arg2_ptr;

		return new boost::gregorian::date_period(_arg1, _arg2);
	}

	// boost::gregorian::date_period::date_period(const boost::gregorian::date_period & arg1)
	static boost::gregorian::date_period* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in boost::gregorian::date_period::date_period(const boost::gregorian::date_period & arg1) function, expected prototype:\nboost::gregorian::date_period::date_period(const boost::gregorian::date_period & arg1)\nClass arguments details:\narg 1 ID = 8854841\n\n%s",luna_dumpStack(L).c_str());
		}

		const boost::gregorian::date_period* _arg1_ptr=(Luna< boost::gregorian::date_period >::check(L,1));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in boost::gregorian::date_period::date_period function");
		}
		const boost::gregorian::date_period & _arg1=*_arg1_ptr;

		return new boost::gregorian::date_period(_arg1);
	}

	// Overload binder for boost::gregorian::date_period::date_period
	static boost::gregorian::date_period* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function date_period, cannot match any of the overloads for function date_period:\n  date_period(boost::gregorian::date &, boost::gregorian::date &)\n  date_period(boost::gregorian::date &, boost::gregorian::date_duration &)\n  date_period(const boost::gregorian::date_period &)\n");
		return NULL;
	}


	// Function binds:
	// void boost::gregorian::date_period::shift(const boost::gregorian::date_duration & arg1)
	static int _bind_shift(lua_State *L) {
		if (!_lg_typecheck_shift(L)) {
			luaL_error(L, "luna typecheck failed in void boost::gregorian::date_period::shift(const boost::gregorian::date_duration & arg1) function, expected prototype:\nvoid boost::gregorian::date_period::shift(const boost::gregorian::date_duration & arg1)\nClass arguments details:\narg 1 ID = 51049289\n\n%s",luna_dumpStack(L).c_str());
		}

		const boost::gregorian::date_duration* _arg1_ptr=(Luna< boost::gregorian::date_duration >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in boost::gregorian::date_period::shift function");
		}
		const boost::gregorian::date_duration & _arg1=*_arg1_ptr;

		boost::gregorian::date_period* self=(Luna< boost::gregorian::date_period >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void boost::gregorian::date_period::shift(const boost::gregorian::date_duration &). Got : '%s'\n%s",typeid(Luna< boost::gregorian::date_period >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->shift(_arg1);

		return 0;
	}

	// void boost::gregorian::date_period::expand(const boost::gregorian::date_duration & arg1)
	static int _bind_expand(lua_State *L) {
		if (!_lg_typecheck_expand(L)) {
			luaL_error(L, "luna typecheck failed in void boost::gregorian::date_period::expand(const boost::gregorian::date_duration & arg1) function, expected prototype:\nvoid boost::gregorian::date_period::expand(const boost::gregorian::date_duration & arg1)\nClass arguments details:\narg 1 ID = 51049289\n\n%s",luna_dumpStack(L).c_str());
		}

		const boost::gregorian::date_duration* _arg1_ptr=(Luna< boost::gregorian::date_duration >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in boost::gregorian::date_period::expand function");
		}
		const boost::gregorian::date_duration & _arg1=*_arg1_ptr;

		boost::gregorian::date_period* self=(Luna< boost::gregorian::date_period >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void boost::gregorian::date_period::expand(const boost::gregorian::date_duration &). Got : '%s'\n%s",typeid(Luna< boost::gregorian::date_period >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->expand(_arg1);

		return 0;
	}

	// boost::gregorian::date boost::gregorian::date_period::begin()
	static int _bind_begin(lua_State *L) {
		if (!_lg_typecheck_begin(L)) {
			luaL_error(L, "luna typecheck failed in boost::gregorian::date boost::gregorian::date_period::begin() function, expected prototype:\nboost::gregorian::date boost::gregorian::date_period::begin()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		boost::gregorian::date_period* self=(Luna< boost::gregorian::date_period >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call boost::gregorian::date boost::gregorian::date_period::begin(). Got : '%s'\n%s",typeid(Luna< boost::gregorian::date_period >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		boost::gregorian::date stack_lret = self->begin();
		boost::gregorian::date* lret = new boost::gregorian::date(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< boost::gregorian::date >::push(L,lret,true);

		return 1;
	}

	// boost::gregorian::date boost::gregorian::date_period::last()
	static int _bind_last(lua_State *L) {
		if (!_lg_typecheck_last(L)) {
			luaL_error(L, "luna typecheck failed in boost::gregorian::date boost::gregorian::date_period::last() function, expected prototype:\nboost::gregorian::date boost::gregorian::date_period::last()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		boost::gregorian::date_period* self=(Luna< boost::gregorian::date_period >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call boost::gregorian::date boost::gregorian::date_period::last(). Got : '%s'\n%s",typeid(Luna< boost::gregorian::date_period >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		boost::gregorian::date stack_lret = self->last();
		boost::gregorian::date* lret = new boost::gregorian::date(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< boost::gregorian::date >::push(L,lret,true);

		return 1;
	}

	// boost::gregorian::date boost::gregorian::date_period::end()
	static int _bind_end(lua_State *L) {
		if (!_lg_typecheck_end(L)) {
			luaL_error(L, "luna typecheck failed in boost::gregorian::date boost::gregorian::date_period::end() function, expected prototype:\nboost::gregorian::date boost::gregorian::date_period::end()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		boost::gregorian::date_period* self=(Luna< boost::gregorian::date_period >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call boost::gregorian::date boost::gregorian::date_period::end(). Got : '%s'\n%s",typeid(Luna< boost::gregorian::date_period >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		boost::gregorian::date stack_lret = self->end();
		boost::gregorian::date* lret = new boost::gregorian::date(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< boost::gregorian::date >::push(L,lret,true);

		return 1;
	}

	// boost::gregorian::date_duration boost::gregorian::date_period::length()
	static int _bind_length(lua_State *L) {
		if (!_lg_typecheck_length(L)) {
			luaL_error(L, "luna typecheck failed in boost::gregorian::date_duration boost::gregorian::date_period::length() function, expected prototype:\nboost::gregorian::date_duration boost::gregorian::date_period::length()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		boost::gregorian::date_period* self=(Luna< boost::gregorian::date_period >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call boost::gregorian::date_duration boost::gregorian::date_period::length(). Got : '%s'\n%s",typeid(Luna< boost::gregorian::date_period >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		boost::gregorian::date_duration stack_lret = self->length();
		boost::gregorian::date_duration* lret = new boost::gregorian::date_duration(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< boost::gregorian::date_duration >::push(L,lret,true);

		return 1;
	}

	// bool boost::gregorian::date_period::is_null()
	static int _bind_is_null(lua_State *L) {
		if (!_lg_typecheck_is_null(L)) {
			luaL_error(L, "luna typecheck failed in bool boost::gregorian::date_period::is_null() function, expected prototype:\nbool boost::gregorian::date_period::is_null()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		boost::gregorian::date_period* self=(Luna< boost::gregorian::date_period >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool boost::gregorian::date_period::is_null(). Got : '%s'\n%s",typeid(Luna< boost::gregorian::date_period >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->is_null();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool boost::gregorian::date_period::contains(const boost::gregorian::date & arg1)
	static int _bind_contains_overload_1(lua_State *L) {
		if (!_lg_typecheck_contains_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool boost::gregorian::date_period::contains(const boost::gregorian::date & arg1) function, expected prototype:\nbool boost::gregorian::date_period::contains(const boost::gregorian::date & arg1)\nClass arguments details:\narg 1 ID = 50186404\n\n%s",luna_dumpStack(L).c_str());
		}

		const boost::gregorian::date* _arg1_ptr=(Luna< boost::gregorian::date >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in boost::gregorian::date_period::contains function");
		}
		const boost::gregorian::date & _arg1=*_arg1_ptr;

		boost::gregorian::date_period* self=(Luna< boost::gregorian::date_period >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool boost::gregorian::date_period::contains(const boost::gregorian::date &). Got : '%s'\n%s",typeid(Luna< boost::gregorian::date_period >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->contains(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool boost::gregorian::date_period::contains(boost::gregorian::date_period & arg1)
	static int _bind_contains_overload_2(lua_State *L) {
		if (!_lg_typecheck_contains_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool boost::gregorian::date_period::contains(boost::gregorian::date_period & arg1) function, expected prototype:\nbool boost::gregorian::date_period::contains(boost::gregorian::date_period & arg1)\nClass arguments details:\narg 1 ID = 8854841\n\n%s",luna_dumpStack(L).c_str());
		}

		boost::gregorian::date_period* _arg1_ptr=(Luna< boost::gregorian::date_period >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in boost::gregorian::date_period::contains function");
		}
		boost::gregorian::date_period & _arg1=*_arg1_ptr;

		boost::gregorian::date_period* self=(Luna< boost::gregorian::date_period >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool boost::gregorian::date_period::contains(boost::gregorian::date_period &). Got : '%s'\n%s",typeid(Luna< boost::gregorian::date_period >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->contains(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for boost::gregorian::date_period::contains
	static int _bind_contains(lua_State *L) {
		if (_lg_typecheck_contains_overload_1(L)) return _bind_contains_overload_1(L);
		if (_lg_typecheck_contains_overload_2(L)) return _bind_contains_overload_2(L);

		luaL_error(L, "error in function contains, cannot match any of the overloads for function contains:\n  contains(const boost::gregorian::date &)\n  contains(boost::gregorian::date_period &)\n");
		return 0;
	}

	// bool boost::gregorian::date_period::intersects(boost::gregorian::date_period & arg1)
	static int _bind_intersects(lua_State *L) {
		if (!_lg_typecheck_intersects(L)) {
			luaL_error(L, "luna typecheck failed in bool boost::gregorian::date_period::intersects(boost::gregorian::date_period & arg1) function, expected prototype:\nbool boost::gregorian::date_period::intersects(boost::gregorian::date_period & arg1)\nClass arguments details:\narg 1 ID = 8854841\n\n%s",luna_dumpStack(L).c_str());
		}

		boost::gregorian::date_period* _arg1_ptr=(Luna< boost::gregorian::date_period >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in boost::gregorian::date_period::intersects function");
		}
		boost::gregorian::date_period & _arg1=*_arg1_ptr;

		boost::gregorian::date_period* self=(Luna< boost::gregorian::date_period >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool boost::gregorian::date_period::intersects(boost::gregorian::date_period &). Got : '%s'\n%s",typeid(Luna< boost::gregorian::date_period >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->intersects(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// boost::gregorian::date_period boost::gregorian::date_period::intersection(boost::gregorian::date_period & arg1)
	static int _bind_intersection(lua_State *L) {
		if (!_lg_typecheck_intersection(L)) {
			luaL_error(L, "luna typecheck failed in boost::gregorian::date_period boost::gregorian::date_period::intersection(boost::gregorian::date_period & arg1) function, expected prototype:\nboost::gregorian::date_period boost::gregorian::date_period::intersection(boost::gregorian::date_period & arg1)\nClass arguments details:\narg 1 ID = 8854841\n\n%s",luna_dumpStack(L).c_str());
		}

		boost::gregorian::date_period* _arg1_ptr=(Luna< boost::gregorian::date_period >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in boost::gregorian::date_period::intersection function");
		}
		boost::gregorian::date_period & _arg1=*_arg1_ptr;

		boost::gregorian::date_period* self=(Luna< boost::gregorian::date_period >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call boost::gregorian::date_period boost::gregorian::date_period::intersection(boost::gregorian::date_period &). Got : '%s'\n%s",typeid(Luna< boost::gregorian::date_period >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		boost::gregorian::date_period stack_lret = self->intersection(_arg1);
		boost::gregorian::date_period* lret = new boost::gregorian::date_period(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< boost::gregorian::date_period >::push(L,lret,true);

		return 1;
	}

	// bool boost::gregorian::date_period::is_adjacent(boost::gregorian::date_period & arg1)
	static int _bind_is_adjacent(lua_State *L) {
		if (!_lg_typecheck_is_adjacent(L)) {
			luaL_error(L, "luna typecheck failed in bool boost::gregorian::date_period::is_adjacent(boost::gregorian::date_period & arg1) function, expected prototype:\nbool boost::gregorian::date_period::is_adjacent(boost::gregorian::date_period & arg1)\nClass arguments details:\narg 1 ID = 8854841\n\n%s",luna_dumpStack(L).c_str());
		}

		boost::gregorian::date_period* _arg1_ptr=(Luna< boost::gregorian::date_period >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in boost::gregorian::date_period::is_adjacent function");
		}
		boost::gregorian::date_period & _arg1=*_arg1_ptr;

		boost::gregorian::date_period* self=(Luna< boost::gregorian::date_period >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool boost::gregorian::date_period::is_adjacent(boost::gregorian::date_period &). Got : '%s'\n%s",typeid(Luna< boost::gregorian::date_period >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->is_adjacent(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool boost::gregorian::date_period::is_after(boost::gregorian::date & arg1)
	static int _bind_is_after(lua_State *L) {
		if (!_lg_typecheck_is_after(L)) {
			luaL_error(L, "luna typecheck failed in bool boost::gregorian::date_period::is_after(boost::gregorian::date & arg1) function, expected prototype:\nbool boost::gregorian::date_period::is_after(boost::gregorian::date & arg1)\nClass arguments details:\narg 1 ID = 50186404\n\n%s",luna_dumpStack(L).c_str());
		}

		boost::gregorian::date* _arg1_ptr=(Luna< boost::gregorian::date >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in boost::gregorian::date_period::is_after function");
		}
		boost::gregorian::date & _arg1=*_arg1_ptr;

		boost::gregorian::date_period* self=(Luna< boost::gregorian::date_period >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool boost::gregorian::date_period::is_after(boost::gregorian::date &). Got : '%s'\n%s",typeid(Luna< boost::gregorian::date_period >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->is_after(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool boost::gregorian::date_period::is_before(boost::gregorian::date & arg1)
	static int _bind_is_before(lua_State *L) {
		if (!_lg_typecheck_is_before(L)) {
			luaL_error(L, "luna typecheck failed in bool boost::gregorian::date_period::is_before(boost::gregorian::date & arg1) function, expected prototype:\nbool boost::gregorian::date_period::is_before(boost::gregorian::date & arg1)\nClass arguments details:\narg 1 ID = 50186404\n\n%s",luna_dumpStack(L).c_str());
		}

		boost::gregorian::date* _arg1_ptr=(Luna< boost::gregorian::date >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in boost::gregorian::date_period::is_before function");
		}
		boost::gregorian::date & _arg1=*_arg1_ptr;

		boost::gregorian::date_period* self=(Luna< boost::gregorian::date_period >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool boost::gregorian::date_period::is_before(boost::gregorian::date &). Got : '%s'\n%s",typeid(Luna< boost::gregorian::date_period >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->is_before(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// boost::gregorian::date_period boost::gregorian::date_period::merge(boost::gregorian::date_period & arg1)
	static int _bind_merge(lua_State *L) {
		if (!_lg_typecheck_merge(L)) {
			luaL_error(L, "luna typecheck failed in boost::gregorian::date_period boost::gregorian::date_period::merge(boost::gregorian::date_period & arg1) function, expected prototype:\nboost::gregorian::date_period boost::gregorian::date_period::merge(boost::gregorian::date_period & arg1)\nClass arguments details:\narg 1 ID = 8854841\n\n%s",luna_dumpStack(L).c_str());
		}

		boost::gregorian::date_period* _arg1_ptr=(Luna< boost::gregorian::date_period >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in boost::gregorian::date_period::merge function");
		}
		boost::gregorian::date_period & _arg1=*_arg1_ptr;

		boost::gregorian::date_period* self=(Luna< boost::gregorian::date_period >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call boost::gregorian::date_period boost::gregorian::date_period::merge(boost::gregorian::date_period &). Got : '%s'\n%s",typeid(Luna< boost::gregorian::date_period >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		boost::gregorian::date_period stack_lret = self->merge(_arg1);
		boost::gregorian::date_period* lret = new boost::gregorian::date_period(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< boost::gregorian::date_period >::push(L,lret,true);

		return 1;
	}

	// boost::gregorian::date_period boost::gregorian::date_period::span(boost::gregorian::date_period & arg1)
	static int _bind_span(lua_State *L) {
		if (!_lg_typecheck_span(L)) {
			luaL_error(L, "luna typecheck failed in boost::gregorian::date_period boost::gregorian::date_period::span(boost::gregorian::date_period & arg1) function, expected prototype:\nboost::gregorian::date_period boost::gregorian::date_period::span(boost::gregorian::date_period & arg1)\nClass arguments details:\narg 1 ID = 8854841\n\n%s",luna_dumpStack(L).c_str());
		}

		boost::gregorian::date_period* _arg1_ptr=(Luna< boost::gregorian::date_period >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in boost::gregorian::date_period::span function");
		}
		boost::gregorian::date_period & _arg1=*_arg1_ptr;

		boost::gregorian::date_period* self=(Luna< boost::gregorian::date_period >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call boost::gregorian::date_period boost::gregorian::date_period::span(boost::gregorian::date_period &). Got : '%s'\n%s",typeid(Luna< boost::gregorian::date_period >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		boost::gregorian::date_period stack_lret = self->span(_arg1);
		boost::gregorian::date_period* lret = new boost::gregorian::date_period(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< boost::gregorian::date_period >::push(L,lret,true);

		return 1;
	}


	// Operator binds:
	// bool boost::gregorian::date_period::operator==(const boost::gregorian::date_period & rhs)
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in bool boost::gregorian::date_period::operator==(const boost::gregorian::date_period & rhs) function, expected prototype:\nbool boost::gregorian::date_period::operator==(const boost::gregorian::date_period & rhs)\nClass arguments details:\narg 1 ID = 8854841\n\n%s",luna_dumpStack(L).c_str());
		}

		const boost::gregorian::date_period* rhs_ptr=(Luna< boost::gregorian::date_period >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in boost::gregorian::date_period::operator== function");
		}
		const boost::gregorian::date_period & rhs=*rhs_ptr;

		boost::gregorian::date_period* self=(Luna< boost::gregorian::date_period >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool boost::gregorian::date_period::operator==(const boost::gregorian::date_period &). Got : '%s'\n%s",typeid(Luna< boost::gregorian::date_period >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator==(rhs);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool boost::gregorian::date_period::operator<(const boost::gregorian::date_period & rhs)
	static int _bind___lt(lua_State *L) {
		if (!_lg_typecheck___lt(L)) {
			luaL_error(L, "luna typecheck failed in bool boost::gregorian::date_period::operator<(const boost::gregorian::date_period & rhs) function, expected prototype:\nbool boost::gregorian::date_period::operator<(const boost::gregorian::date_period & rhs)\nClass arguments details:\narg 1 ID = 8854841\n\n%s",luna_dumpStack(L).c_str());
		}

		const boost::gregorian::date_period* rhs_ptr=(Luna< boost::gregorian::date_period >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in boost::gregorian::date_period::operator< function");
		}
		const boost::gregorian::date_period & rhs=*rhs_ptr;

		boost::gregorian::date_period* self=(Luna< boost::gregorian::date_period >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool boost::gregorian::date_period::operator<(const boost::gregorian::date_period &). Got : '%s'\n%s",typeid(Luna< boost::gregorian::date_period >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator<(rhs);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

boost::gregorian::date_period* LunaTraits< boost::gregorian::date_period >::_bind_ctor(lua_State *L) {
	return luna_wrapper_boost_gregorian_date_period::_bind_ctor(L);
}

void LunaTraits< boost::gregorian::date_period >::_bind_dtor(boost::gregorian::date_period* obj) {
	delete obj;
}

const char LunaTraits< boost::gregorian::date_period >::className[] = "date_period";
const char LunaTraits< boost::gregorian::date_period >::fullName[] = "boost::gregorian::date_period";
const char LunaTraits< boost::gregorian::date_period >::moduleName[] = "boost";
const char* LunaTraits< boost::gregorian::date_period >::parents[] = {0};
const int LunaTraits< boost::gregorian::date_period >::hash = 8854841;
const int LunaTraits< boost::gregorian::date_period >::uniqueIDs[] = {8854841,0};

luna_RegType LunaTraits< boost::gregorian::date_period >::methods[] = {
	{"shift", &luna_wrapper_boost_gregorian_date_period::_bind_shift},
	{"expand", &luna_wrapper_boost_gregorian_date_period::_bind_expand},
	{"begin", &luna_wrapper_boost_gregorian_date_period::_bind_begin},
	{"last", &luna_wrapper_boost_gregorian_date_period::_bind_last},
	{"end", &luna_wrapper_boost_gregorian_date_period::_bind_end},
	{"length", &luna_wrapper_boost_gregorian_date_period::_bind_length},
	{"is_null", &luna_wrapper_boost_gregorian_date_period::_bind_is_null},
	{"contains", &luna_wrapper_boost_gregorian_date_period::_bind_contains},
	{"intersects", &luna_wrapper_boost_gregorian_date_period::_bind_intersects},
	{"intersection", &luna_wrapper_boost_gregorian_date_period::_bind_intersection},
	{"is_adjacent", &luna_wrapper_boost_gregorian_date_period::_bind_is_adjacent},
	{"is_after", &luna_wrapper_boost_gregorian_date_period::_bind_is_after},
	{"is_before", &luna_wrapper_boost_gregorian_date_period::_bind_is_before},
	{"merge", &luna_wrapper_boost_gregorian_date_period::_bind_merge},
	{"span", &luna_wrapper_boost_gregorian_date_period::_bind_span},
	{"__eq", &luna_wrapper_boost_gregorian_date_period::_bind___eq},
	{"__lt", &luna_wrapper_boost_gregorian_date_period::_bind___lt},
	{"dynCast", &luna_wrapper_boost_gregorian_date_period::_bind_dynCast},
	{"fromVoid", &luna_wrapper_boost_gregorian_date_period::_bind_fromVoid},
	{"asVoid", &luna_wrapper_boost_gregorian_date_period::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< boost::gregorian::date_period >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< boost::gregorian::date_period >::enumValues[] = {
	{0,0}
};



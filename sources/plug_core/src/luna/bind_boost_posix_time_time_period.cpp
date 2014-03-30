#include <plug_common.h>

class luna_wrapper_boost_posix_time_time_period {
public:
	typedef Luna< boost::posix_time::time_period > luna_t;

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		boost::posix_time::time_period* self= (boost::posix_time::time_period*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< boost::posix_time::time_period >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,2249806) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< boost::posix_time::time_period >::check(L,1));
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

		boost::posix_time::time_period* self=(Luna< boost::posix_time::time_period >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("boost::posix_time::time_period");
		
		return luna_dynamicCast(L,converters,"boost::posix_time::time_period",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,16567808) ) return false;
		if( (!(Luna< boost::posix_time::ptime >::check(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,16567808) ) return false;
		if( (!(Luna< boost::posix_time::ptime >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,16567808) ) return false;
		if( (!(Luna< boost::posix_time::ptime >::check(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,3585892) ) return false;
		if( (!(Luna< boost::posix_time::time_duration >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,2249806) ) return false;
		if( (!(Luna< boost::posix_time::time_period >::check(L,1))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_shift(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,3585892) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_expand(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,3585892) ) return false;
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

		if( !Luna<void>::has_uniqueid(L,2,16567808) ) return false;
		if( (!(Luna< boost::posix_time::ptime >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_contains_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2249806) ) return false;
		if( (!(Luna< boost::posix_time::time_period >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_intersects(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2249806) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_intersection(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2249806) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_merge(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2249806) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_span(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2249806) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 2 valid operators)
	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2249806) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___lt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2249806) ) return false;
		return true;
	}


	// Constructor binds:
	// boost::posix_time::time_period::time_period(boost::posix_time::ptime & arg1, boost::posix_time::ptime & arg2)
	static boost::posix_time::time_period* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in boost::posix_time::time_period::time_period(boost::posix_time::ptime & arg1, boost::posix_time::ptime & arg2) function, expected prototype:\nboost::posix_time::time_period::time_period(boost::posix_time::ptime & arg1, boost::posix_time::ptime & arg2)\nClass arguments details:\narg 1 ID = 16567808\narg 2 ID = 16567808\n\n%s",luna_dumpStack(L).c_str());
		}

		boost::posix_time::ptime* _arg1_ptr=(Luna< boost::posix_time::ptime >::check(L,1));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in boost::posix_time::time_period::time_period function");
		}
		boost::posix_time::ptime & _arg1=*_arg1_ptr;
		boost::posix_time::ptime* _arg2_ptr=(Luna< boost::posix_time::ptime >::check(L,2));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in boost::posix_time::time_period::time_period function");
		}
		boost::posix_time::ptime & _arg2=*_arg2_ptr;

		return new boost::posix_time::time_period(_arg1, _arg2);
	}

	// boost::posix_time::time_period::time_period(boost::posix_time::ptime & arg1, boost::posix_time::time_duration & arg2)
	static boost::posix_time::time_period* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in boost::posix_time::time_period::time_period(boost::posix_time::ptime & arg1, boost::posix_time::time_duration & arg2) function, expected prototype:\nboost::posix_time::time_period::time_period(boost::posix_time::ptime & arg1, boost::posix_time::time_duration & arg2)\nClass arguments details:\narg 1 ID = 16567808\narg 2 ID = 3585892\n\n%s",luna_dumpStack(L).c_str());
		}

		boost::posix_time::ptime* _arg1_ptr=(Luna< boost::posix_time::ptime >::check(L,1));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in boost::posix_time::time_period::time_period function");
		}
		boost::posix_time::ptime & _arg1=*_arg1_ptr;
		boost::posix_time::time_duration* _arg2_ptr=(Luna< boost::posix_time::time_duration >::check(L,2));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in boost::posix_time::time_period::time_period function");
		}
		boost::posix_time::time_duration & _arg2=*_arg2_ptr;

		return new boost::posix_time::time_period(_arg1, _arg2);
	}

	// boost::posix_time::time_period::time_period(boost::posix_time::time_period & rhs)
	static boost::posix_time::time_period* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in boost::posix_time::time_period::time_period(boost::posix_time::time_period & rhs) function, expected prototype:\nboost::posix_time::time_period::time_period(boost::posix_time::time_period & rhs)\nClass arguments details:\narg 1 ID = 2249806\n\n%s",luna_dumpStack(L).c_str());
		}

		boost::posix_time::time_period* rhs_ptr=(Luna< boost::posix_time::time_period >::check(L,1));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in boost::posix_time::time_period::time_period function");
		}
		boost::posix_time::time_period & rhs=*rhs_ptr;

		return new boost::posix_time::time_period(rhs);
	}

	// Overload binder for boost::posix_time::time_period::time_period
	static boost::posix_time::time_period* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function time_period, cannot match any of the overloads for function time_period:\n  time_period(boost::posix_time::ptime &, boost::posix_time::ptime &)\n  time_period(boost::posix_time::ptime &, boost::posix_time::time_duration &)\n  time_period(boost::posix_time::time_period &)\n");
		return NULL;
	}


	// Function binds:
	// void boost::posix_time::time_period::shift(boost::posix_time::time_duration & arg1)
	static int _bind_shift(lua_State *L) {
		if (!_lg_typecheck_shift(L)) {
			luaL_error(L, "luna typecheck failed in void boost::posix_time::time_period::shift(boost::posix_time::time_duration & arg1) function, expected prototype:\nvoid boost::posix_time::time_period::shift(boost::posix_time::time_duration & arg1)\nClass arguments details:\narg 1 ID = 3585892\n\n%s",luna_dumpStack(L).c_str());
		}

		boost::posix_time::time_duration* _arg1_ptr=(Luna< boost::posix_time::time_duration >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in boost::posix_time::time_period::shift function");
		}
		boost::posix_time::time_duration & _arg1=*_arg1_ptr;

		boost::posix_time::time_period* self=(Luna< boost::posix_time::time_period >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void boost::posix_time::time_period::shift(boost::posix_time::time_duration &). Got : '%s'\n%s",typeid(Luna< boost::posix_time::time_period >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->shift(_arg1);

		return 0;
	}

	// void boost::posix_time::time_period::expand(boost::posix_time::time_duration & arg1)
	static int _bind_expand(lua_State *L) {
		if (!_lg_typecheck_expand(L)) {
			luaL_error(L, "luna typecheck failed in void boost::posix_time::time_period::expand(boost::posix_time::time_duration & arg1) function, expected prototype:\nvoid boost::posix_time::time_period::expand(boost::posix_time::time_duration & arg1)\nClass arguments details:\narg 1 ID = 3585892\n\n%s",luna_dumpStack(L).c_str());
		}

		boost::posix_time::time_duration* _arg1_ptr=(Luna< boost::posix_time::time_duration >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in boost::posix_time::time_period::expand function");
		}
		boost::posix_time::time_duration & _arg1=*_arg1_ptr;

		boost::posix_time::time_period* self=(Luna< boost::posix_time::time_period >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void boost::posix_time::time_period::expand(boost::posix_time::time_duration &). Got : '%s'\n%s",typeid(Luna< boost::posix_time::time_period >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->expand(_arg1);

		return 0;
	}

	// boost::posix_time::ptime boost::posix_time::time_period::begin()
	static int _bind_begin(lua_State *L) {
		if (!_lg_typecheck_begin(L)) {
			luaL_error(L, "luna typecheck failed in boost::posix_time::ptime boost::posix_time::time_period::begin() function, expected prototype:\nboost::posix_time::ptime boost::posix_time::time_period::begin()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		boost::posix_time::time_period* self=(Luna< boost::posix_time::time_period >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call boost::posix_time::ptime boost::posix_time::time_period::begin(). Got : '%s'\n%s",typeid(Luna< boost::posix_time::time_period >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		boost::posix_time::ptime stack_lret = self->begin();
		boost::posix_time::ptime* lret = new boost::posix_time::ptime(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< boost::posix_time::ptime >::push(L,lret,true);

		return 1;
	}

	// boost::posix_time::ptime boost::posix_time::time_period::last()
	static int _bind_last(lua_State *L) {
		if (!_lg_typecheck_last(L)) {
			luaL_error(L, "luna typecheck failed in boost::posix_time::ptime boost::posix_time::time_period::last() function, expected prototype:\nboost::posix_time::ptime boost::posix_time::time_period::last()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		boost::posix_time::time_period* self=(Luna< boost::posix_time::time_period >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call boost::posix_time::ptime boost::posix_time::time_period::last(). Got : '%s'\n%s",typeid(Luna< boost::posix_time::time_period >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		boost::posix_time::ptime stack_lret = self->last();
		boost::posix_time::ptime* lret = new boost::posix_time::ptime(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< boost::posix_time::ptime >::push(L,lret,true);

		return 1;
	}

	// boost::posix_time::ptime boost::posix_time::time_period::end()
	static int _bind_end(lua_State *L) {
		if (!_lg_typecheck_end(L)) {
			luaL_error(L, "luna typecheck failed in boost::posix_time::ptime boost::posix_time::time_period::end() function, expected prototype:\nboost::posix_time::ptime boost::posix_time::time_period::end()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		boost::posix_time::time_period* self=(Luna< boost::posix_time::time_period >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call boost::posix_time::ptime boost::posix_time::time_period::end(). Got : '%s'\n%s",typeid(Luna< boost::posix_time::time_period >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		boost::posix_time::ptime stack_lret = self->end();
		boost::posix_time::ptime* lret = new boost::posix_time::ptime(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< boost::posix_time::ptime >::push(L,lret,true);

		return 1;
	}

	// boost::posix_time::time_duration boost::posix_time::time_period::length()
	static int _bind_length(lua_State *L) {
		if (!_lg_typecheck_length(L)) {
			luaL_error(L, "luna typecheck failed in boost::posix_time::time_duration boost::posix_time::time_period::length() function, expected prototype:\nboost::posix_time::time_duration boost::posix_time::time_period::length()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		boost::posix_time::time_period* self=(Luna< boost::posix_time::time_period >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call boost::posix_time::time_duration boost::posix_time::time_period::length(). Got : '%s'\n%s",typeid(Luna< boost::posix_time::time_period >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		boost::posix_time::time_duration stack_lret = self->length();
		boost::posix_time::time_duration* lret = new boost::posix_time::time_duration(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< boost::posix_time::time_duration >::push(L,lret,true);

		return 1;
	}

	// bool boost::posix_time::time_period::is_null()
	static int _bind_is_null(lua_State *L) {
		if (!_lg_typecheck_is_null(L)) {
			luaL_error(L, "luna typecheck failed in bool boost::posix_time::time_period::is_null() function, expected prototype:\nbool boost::posix_time::time_period::is_null()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		boost::posix_time::time_period* self=(Luna< boost::posix_time::time_period >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool boost::posix_time::time_period::is_null(). Got : '%s'\n%s",typeid(Luna< boost::posix_time::time_period >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->is_null();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool boost::posix_time::time_period::contains(boost::posix_time::ptime & arg1)
	static int _bind_contains_overload_1(lua_State *L) {
		if (!_lg_typecheck_contains_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool boost::posix_time::time_period::contains(boost::posix_time::ptime & arg1) function, expected prototype:\nbool boost::posix_time::time_period::contains(boost::posix_time::ptime & arg1)\nClass arguments details:\narg 1 ID = 16567808\n\n%s",luna_dumpStack(L).c_str());
		}

		boost::posix_time::ptime* _arg1_ptr=(Luna< boost::posix_time::ptime >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in boost::posix_time::time_period::contains function");
		}
		boost::posix_time::ptime & _arg1=*_arg1_ptr;

		boost::posix_time::time_period* self=(Luna< boost::posix_time::time_period >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool boost::posix_time::time_period::contains(boost::posix_time::ptime &). Got : '%s'\n%s",typeid(Luna< boost::posix_time::time_period >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->contains(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool boost::posix_time::time_period::contains(boost::posix_time::time_period & arg1)
	static int _bind_contains_overload_2(lua_State *L) {
		if (!_lg_typecheck_contains_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool boost::posix_time::time_period::contains(boost::posix_time::time_period & arg1) function, expected prototype:\nbool boost::posix_time::time_period::contains(boost::posix_time::time_period & arg1)\nClass arguments details:\narg 1 ID = 2249806\n\n%s",luna_dumpStack(L).c_str());
		}

		boost::posix_time::time_period* _arg1_ptr=(Luna< boost::posix_time::time_period >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in boost::posix_time::time_period::contains function");
		}
		boost::posix_time::time_period & _arg1=*_arg1_ptr;

		boost::posix_time::time_period* self=(Luna< boost::posix_time::time_period >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool boost::posix_time::time_period::contains(boost::posix_time::time_period &). Got : '%s'\n%s",typeid(Luna< boost::posix_time::time_period >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->contains(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for boost::posix_time::time_period::contains
	static int _bind_contains(lua_State *L) {
		if (_lg_typecheck_contains_overload_1(L)) return _bind_contains_overload_1(L);
		if (_lg_typecheck_contains_overload_2(L)) return _bind_contains_overload_2(L);

		luaL_error(L, "error in function contains, cannot match any of the overloads for function contains:\n  contains(boost::posix_time::ptime &)\n  contains(boost::posix_time::time_period &)\n");
		return 0;
	}

	// bool boost::posix_time::time_period::intersects(boost::posix_time::time_period & arg1)
	static int _bind_intersects(lua_State *L) {
		if (!_lg_typecheck_intersects(L)) {
			luaL_error(L, "luna typecheck failed in bool boost::posix_time::time_period::intersects(boost::posix_time::time_period & arg1) function, expected prototype:\nbool boost::posix_time::time_period::intersects(boost::posix_time::time_period & arg1)\nClass arguments details:\narg 1 ID = 2249806\n\n%s",luna_dumpStack(L).c_str());
		}

		boost::posix_time::time_period* _arg1_ptr=(Luna< boost::posix_time::time_period >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in boost::posix_time::time_period::intersects function");
		}
		boost::posix_time::time_period & _arg1=*_arg1_ptr;

		boost::posix_time::time_period* self=(Luna< boost::posix_time::time_period >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool boost::posix_time::time_period::intersects(boost::posix_time::time_period &). Got : '%s'\n%s",typeid(Luna< boost::posix_time::time_period >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->intersects(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// boost::posix_time::time_period boost::posix_time::time_period::intersection(boost::posix_time::time_period & arg1)
	static int _bind_intersection(lua_State *L) {
		if (!_lg_typecheck_intersection(L)) {
			luaL_error(L, "luna typecheck failed in boost::posix_time::time_period boost::posix_time::time_period::intersection(boost::posix_time::time_period & arg1) function, expected prototype:\nboost::posix_time::time_period boost::posix_time::time_period::intersection(boost::posix_time::time_period & arg1)\nClass arguments details:\narg 1 ID = 2249806\n\n%s",luna_dumpStack(L).c_str());
		}

		boost::posix_time::time_period* _arg1_ptr=(Luna< boost::posix_time::time_period >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in boost::posix_time::time_period::intersection function");
		}
		boost::posix_time::time_period & _arg1=*_arg1_ptr;

		boost::posix_time::time_period* self=(Luna< boost::posix_time::time_period >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call boost::posix_time::time_period boost::posix_time::time_period::intersection(boost::posix_time::time_period &). Got : '%s'\n%s",typeid(Luna< boost::posix_time::time_period >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		boost::posix_time::time_period stack_lret = self->intersection(_arg1);
		boost::posix_time::time_period* lret = new boost::posix_time::time_period(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< boost::posix_time::time_period >::push(L,lret,true);

		return 1;
	}

	// boost::posix_time::time_period boost::posix_time::time_period::merge(boost::posix_time::time_period & arg1)
	static int _bind_merge(lua_State *L) {
		if (!_lg_typecheck_merge(L)) {
			luaL_error(L, "luna typecheck failed in boost::posix_time::time_period boost::posix_time::time_period::merge(boost::posix_time::time_period & arg1) function, expected prototype:\nboost::posix_time::time_period boost::posix_time::time_period::merge(boost::posix_time::time_period & arg1)\nClass arguments details:\narg 1 ID = 2249806\n\n%s",luna_dumpStack(L).c_str());
		}

		boost::posix_time::time_period* _arg1_ptr=(Luna< boost::posix_time::time_period >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in boost::posix_time::time_period::merge function");
		}
		boost::posix_time::time_period & _arg1=*_arg1_ptr;

		boost::posix_time::time_period* self=(Luna< boost::posix_time::time_period >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call boost::posix_time::time_period boost::posix_time::time_period::merge(boost::posix_time::time_period &). Got : '%s'\n%s",typeid(Luna< boost::posix_time::time_period >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		boost::posix_time::time_period stack_lret = self->merge(_arg1);
		boost::posix_time::time_period* lret = new boost::posix_time::time_period(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< boost::posix_time::time_period >::push(L,lret,true);

		return 1;
	}

	// boost::posix_time::time_period boost::posix_time::time_period::span(boost::posix_time::time_period & arg1)
	static int _bind_span(lua_State *L) {
		if (!_lg_typecheck_span(L)) {
			luaL_error(L, "luna typecheck failed in boost::posix_time::time_period boost::posix_time::time_period::span(boost::posix_time::time_period & arg1) function, expected prototype:\nboost::posix_time::time_period boost::posix_time::time_period::span(boost::posix_time::time_period & arg1)\nClass arguments details:\narg 1 ID = 2249806\n\n%s",luna_dumpStack(L).c_str());
		}

		boost::posix_time::time_period* _arg1_ptr=(Luna< boost::posix_time::time_period >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in boost::posix_time::time_period::span function");
		}
		boost::posix_time::time_period & _arg1=*_arg1_ptr;

		boost::posix_time::time_period* self=(Luna< boost::posix_time::time_period >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call boost::posix_time::time_period boost::posix_time::time_period::span(boost::posix_time::time_period &). Got : '%s'\n%s",typeid(Luna< boost::posix_time::time_period >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		boost::posix_time::time_period stack_lret = self->span(_arg1);
		boost::posix_time::time_period* lret = new boost::posix_time::time_period(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< boost::posix_time::time_period >::push(L,lret,true);

		return 1;
	}


	// Operator binds:
	// bool boost::posix_time::time_period::operator==(const boost::posix_time::time_period & rhs)
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in bool boost::posix_time::time_period::operator==(const boost::posix_time::time_period & rhs) function, expected prototype:\nbool boost::posix_time::time_period::operator==(const boost::posix_time::time_period & rhs)\nClass arguments details:\narg 1 ID = 2249806\n\n%s",luna_dumpStack(L).c_str());
		}

		const boost::posix_time::time_period* rhs_ptr=(Luna< boost::posix_time::time_period >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in boost::posix_time::time_period::operator== function");
		}
		const boost::posix_time::time_period & rhs=*rhs_ptr;

		boost::posix_time::time_period* self=(Luna< boost::posix_time::time_period >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool boost::posix_time::time_period::operator==(const boost::posix_time::time_period &). Got : '%s'\n%s",typeid(Luna< boost::posix_time::time_period >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator==(rhs);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool boost::posix_time::time_period::operator<(const boost::posix_time::time_period & rhs)
	static int _bind___lt(lua_State *L) {
		if (!_lg_typecheck___lt(L)) {
			luaL_error(L, "luna typecheck failed in bool boost::posix_time::time_period::operator<(const boost::posix_time::time_period & rhs) function, expected prototype:\nbool boost::posix_time::time_period::operator<(const boost::posix_time::time_period & rhs)\nClass arguments details:\narg 1 ID = 2249806\n\n%s",luna_dumpStack(L).c_str());
		}

		const boost::posix_time::time_period* rhs_ptr=(Luna< boost::posix_time::time_period >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in boost::posix_time::time_period::operator< function");
		}
		const boost::posix_time::time_period & rhs=*rhs_ptr;

		boost::posix_time::time_period* self=(Luna< boost::posix_time::time_period >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool boost::posix_time::time_period::operator<(const boost::posix_time::time_period &). Got : '%s'\n%s",typeid(Luna< boost::posix_time::time_period >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator<(rhs);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

boost::posix_time::time_period* LunaTraits< boost::posix_time::time_period >::_bind_ctor(lua_State *L) {
	return luna_wrapper_boost_posix_time_time_period::_bind_ctor(L);
}

void LunaTraits< boost::posix_time::time_period >::_bind_dtor(boost::posix_time::time_period* obj) {
	delete obj;
}

const char LunaTraits< boost::posix_time::time_period >::className[] = "time_period";
const char LunaTraits< boost::posix_time::time_period >::fullName[] = "boost::posix_time::time_period";
const char LunaTraits< boost::posix_time::time_period >::moduleName[] = "boost";
const char* LunaTraits< boost::posix_time::time_period >::parents[] = {0};
const int LunaTraits< boost::posix_time::time_period >::hash = 2249806;
const int LunaTraits< boost::posix_time::time_period >::uniqueIDs[] = {2249806,0};

luna_RegType LunaTraits< boost::posix_time::time_period >::methods[] = {
	{"shift", &luna_wrapper_boost_posix_time_time_period::_bind_shift},
	{"expand", &luna_wrapper_boost_posix_time_time_period::_bind_expand},
	{"begin", &luna_wrapper_boost_posix_time_time_period::_bind_begin},
	{"last", &luna_wrapper_boost_posix_time_time_period::_bind_last},
	{"end", &luna_wrapper_boost_posix_time_time_period::_bind_end},
	{"length", &luna_wrapper_boost_posix_time_time_period::_bind_length},
	{"is_null", &luna_wrapper_boost_posix_time_time_period::_bind_is_null},
	{"contains", &luna_wrapper_boost_posix_time_time_period::_bind_contains},
	{"intersects", &luna_wrapper_boost_posix_time_time_period::_bind_intersects},
	{"intersection", &luna_wrapper_boost_posix_time_time_period::_bind_intersection},
	{"merge", &luna_wrapper_boost_posix_time_time_period::_bind_merge},
	{"span", &luna_wrapper_boost_posix_time_time_period::_bind_span},
	{"__eq", &luna_wrapper_boost_posix_time_time_period::_bind___eq},
	{"__lt", &luna_wrapper_boost_posix_time_time_period::_bind___lt},
	{"dynCast", &luna_wrapper_boost_posix_time_time_period::_bind_dynCast},
	{"fromVoid", &luna_wrapper_boost_posix_time_time_period::_bind_fromVoid},
	{"asVoid", &luna_wrapper_boost_posix_time_time_period::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< boost::posix_time::time_period >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< boost::posix_time::time_period >::enumValues[] = {
	{0,0}
};



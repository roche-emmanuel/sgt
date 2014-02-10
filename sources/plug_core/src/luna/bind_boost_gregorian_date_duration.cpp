#include <plug_common.h>

class luna_wrapper_boost_gregorian_date_duration {
public:
	typedef Luna< boost::gregorian::date_duration > luna_t;

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		boost::gregorian::date_duration* self= (boost::gregorian::date_duration*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< boost::gregorian::date_duration >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,51049289) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< boost::gregorian::date_duration >::check(L,1));
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

		boost::gregorian::date_duration* self=(Luna< boost::gregorian::date_duration >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("boost::gregorian::date_duration");
		
		return luna_dynamicCast(L,converters,"boost::gregorian::date_duration",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_type(L,1)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_days(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_is_negative(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 2 valid operators)
	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,51049289) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___lt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,51049289) ) return false;
		return true;
	}


	// Constructor binds:
	// boost::gregorian::date_duration::date_duration(long arg1)
	static boost::gregorian::date_duration* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in boost::gregorian::date_duration::date_duration(long arg1) function, expected prototype:\nboost::gregorian::date_duration::date_duration(long arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long _arg1=(long)lua_tonumber(L,1);

		return new boost::gregorian::date_duration(_arg1);
	}


	// Function binds:
	// long boost::gregorian::date_duration::days() const
	static int _bind_days(lua_State *L) {
		if (!_lg_typecheck_days(L)) {
			luaL_error(L, "luna typecheck failed in long boost::gregorian::date_duration::days() const function, expected prototype:\nlong boost::gregorian::date_duration::days() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		boost::gregorian::date_duration* self=(Luna< boost::gregorian::date_duration >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long boost::gregorian::date_duration::days() const. Got : '%s'\n%s",typeid(Luna< boost::gregorian::date_duration >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->days();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool boost::gregorian::date_duration::is_negative() const
	static int _bind_is_negative(lua_State *L) {
		if (!_lg_typecheck_is_negative(L)) {
			luaL_error(L, "luna typecheck failed in bool boost::gregorian::date_duration::is_negative() const function, expected prototype:\nbool boost::gregorian::date_duration::is_negative() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		boost::gregorian::date_duration* self=(Luna< boost::gregorian::date_duration >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool boost::gregorian::date_duration::is_negative() const. Got : '%s'\n%s",typeid(Luna< boost::gregorian::date_duration >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->is_negative();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:
	// bool boost::gregorian::date_duration::operator==(const boost::gregorian::date_duration & rhs)
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in bool boost::gregorian::date_duration::operator==(const boost::gregorian::date_duration & rhs) function, expected prototype:\nbool boost::gregorian::date_duration::operator==(const boost::gregorian::date_duration & rhs)\nClass arguments details:\narg 1 ID = 51049289\n\n%s",luna_dumpStack(L).c_str());
		}

		const boost::gregorian::date_duration* rhs_ptr=(Luna< boost::gregorian::date_duration >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in boost::gregorian::date_duration::operator== function");
		}
		const boost::gregorian::date_duration & rhs=*rhs_ptr;

		boost::gregorian::date_duration* self=(Luna< boost::gregorian::date_duration >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool boost::gregorian::date_duration::operator==(const boost::gregorian::date_duration &). Got : '%s'\n%s",typeid(Luna< boost::gregorian::date_duration >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator==(rhs);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool boost::gregorian::date_duration::operator<(const boost::gregorian::date_duration & rhs)
	static int _bind___lt(lua_State *L) {
		if (!_lg_typecheck___lt(L)) {
			luaL_error(L, "luna typecheck failed in bool boost::gregorian::date_duration::operator<(const boost::gregorian::date_duration & rhs) function, expected prototype:\nbool boost::gregorian::date_duration::operator<(const boost::gregorian::date_duration & rhs)\nClass arguments details:\narg 1 ID = 51049289\n\n%s",luna_dumpStack(L).c_str());
		}

		const boost::gregorian::date_duration* rhs_ptr=(Luna< boost::gregorian::date_duration >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in boost::gregorian::date_duration::operator< function");
		}
		const boost::gregorian::date_duration & rhs=*rhs_ptr;

		boost::gregorian::date_duration* self=(Luna< boost::gregorian::date_duration >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool boost::gregorian::date_duration::operator<(const boost::gregorian::date_duration &). Got : '%s'\n%s",typeid(Luna< boost::gregorian::date_duration >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator<(rhs);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

boost::gregorian::date_duration* LunaTraits< boost::gregorian::date_duration >::_bind_ctor(lua_State *L) {
	return luna_wrapper_boost_gregorian_date_duration::_bind_ctor(L);
}

void LunaTraits< boost::gregorian::date_duration >::_bind_dtor(boost::gregorian::date_duration* obj) {
	delete obj;
}

const char LunaTraits< boost::gregorian::date_duration >::className[] = "date_duration";
const char LunaTraits< boost::gregorian::date_duration >::fullName[] = "boost::gregorian::date_duration";
const char LunaTraits< boost::gregorian::date_duration >::moduleName[] = "boost";
const char* LunaTraits< boost::gregorian::date_duration >::parents[] = {0};
const int LunaTraits< boost::gregorian::date_duration >::hash = 51049289;
const int LunaTraits< boost::gregorian::date_duration >::uniqueIDs[] = {51049289,0};

luna_RegType LunaTraits< boost::gregorian::date_duration >::methods[] = {
	{"days", &luna_wrapper_boost_gregorian_date_duration::_bind_days},
	{"is_negative", &luna_wrapper_boost_gregorian_date_duration::_bind_is_negative},
	{"__eq", &luna_wrapper_boost_gregorian_date_duration::_bind___eq},
	{"__lt", &luna_wrapper_boost_gregorian_date_duration::_bind___lt},
	{"dynCast", &luna_wrapper_boost_gregorian_date_duration::_bind_dynCast},
	{"fromVoid", &luna_wrapper_boost_gregorian_date_duration::_bind_fromVoid},
	{"asVoid", &luna_wrapper_boost_gregorian_date_duration::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< boost::gregorian::date_duration >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< boost::gregorian::date_duration >::enumValues[] = {
	{0,0}
};



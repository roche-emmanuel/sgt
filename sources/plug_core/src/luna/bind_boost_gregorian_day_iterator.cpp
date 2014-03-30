#include <plug_common.h>

class luna_wrapper_boost_gregorian_day_iterator {
public:
	typedef Luna< boost::gregorian::day_iterator > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,82468619) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(boost::gregorian::day_iterator*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		boost::gregorian::day_iterator* rhs =(Luna< boost::gregorian::day_iterator >::check(L,2));
		boost::gregorian::day_iterator* self=(Luna< boost::gregorian::day_iterator >::check(L,1));
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

		boost::gregorian::day_iterator* self= (boost::gregorian::day_iterator*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< boost::gregorian::day_iterator >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,82468619) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< boost::gregorian::day_iterator >::check(L,1));
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

		boost::gregorian::day_iterator* self=(Luna< boost::gregorian::day_iterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("boost::gregorian::day_iterator");
		
		return luna_dynamicCast(L,converters,"boost::gregorian::day_iterator",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50186404) ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// boost::gregorian::day_iterator::day_iterator(boost::gregorian::date & start_date, int day_count = 1)
	static boost::gregorian::day_iterator* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in boost::gregorian::day_iterator::day_iterator(boost::gregorian::date & start_date, int day_count = 1) function, expected prototype:\nboost::gregorian::day_iterator::day_iterator(boost::gregorian::date & start_date, int day_count = 1)\nClass arguments details:\narg 1 ID = 50186404\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		boost::gregorian::date* start_date_ptr=(Luna< boost::gregorian::date >::check(L,1));
		if( !start_date_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg start_date in boost::gregorian::day_iterator::day_iterator function");
		}
		boost::gregorian::date & start_date=*start_date_ptr;
		int day_count=luatop>1 ? (int)lua_tointeger(L,2) : (int)1;

		return new boost::gregorian::day_iterator(start_date, day_count);
	}


	// Function binds:

	// Operator binds:

};

boost::gregorian::day_iterator* LunaTraits< boost::gregorian::day_iterator >::_bind_ctor(lua_State *L) {
	return luna_wrapper_boost_gregorian_day_iterator::_bind_ctor(L);
}

void LunaTraits< boost::gregorian::day_iterator >::_bind_dtor(boost::gregorian::day_iterator* obj) {
	delete obj;
}

const char LunaTraits< boost::gregorian::day_iterator >::className[] = "day_iterator";
const char LunaTraits< boost::gregorian::day_iterator >::fullName[] = "boost::gregorian::day_iterator";
const char LunaTraits< boost::gregorian::day_iterator >::moduleName[] = "boost";
const char* LunaTraits< boost::gregorian::day_iterator >::parents[] = {0};
const int LunaTraits< boost::gregorian::day_iterator >::hash = 82468619;
const int LunaTraits< boost::gregorian::day_iterator >::uniqueIDs[] = {82468619,0};

luna_RegType LunaTraits< boost::gregorian::day_iterator >::methods[] = {
	{"dynCast", &luna_wrapper_boost_gregorian_day_iterator::_bind_dynCast},
	{"__eq", &luna_wrapper_boost_gregorian_day_iterator::_bind___eq},
	{"fromVoid", &luna_wrapper_boost_gregorian_day_iterator::_bind_fromVoid},
	{"asVoid", &luna_wrapper_boost_gregorian_day_iterator::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< boost::gregorian::day_iterator >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< boost::gregorian::day_iterator >::enumValues[] = {
	{0,0}
};



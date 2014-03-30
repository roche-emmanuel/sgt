#include <plug_common.h>

class luna_wrapper_boost_posix_time_hours {
public:
	typedef Luna< boost::posix_time::hours > luna_t;

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		boost::posix_time::hours* self= (boost::posix_time::hours*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< boost::posix_time::hours >::push(L,self,false);
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

	// Derived class converters:
	static int _cast_from_time_duration(lua_State *L) {
		// all checked are already performed before reaching this point.
		//boost::posix_time::hours* ptr= dynamic_cast< boost::posix_time::hours* >(Luna< boost::posix_time::time_duration >::check(L,1));
		boost::posix_time::hours* ptr= luna_caster< boost::posix_time::time_duration, boost::posix_time::hours >::cast(Luna< boost::posix_time::time_duration >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< boost::posix_time::hours >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_type(L,1)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// boost::posix_time::hours::hours(long arg1)
	static boost::posix_time::hours* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in boost::posix_time::hours::hours(long arg1) function, expected prototype:\nboost::posix_time::hours::hours(long arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long _arg1=(long)lua_tonumber(L,1);

		return new boost::posix_time::hours(_arg1);
	}


	// Function binds:

	// Operator binds:

};

boost::posix_time::hours* LunaTraits< boost::posix_time::hours >::_bind_ctor(lua_State *L) {
	return luna_wrapper_boost_posix_time_hours::_bind_ctor(L);
}

void LunaTraits< boost::posix_time::hours >::_bind_dtor(boost::posix_time::hours* obj) {
	delete obj;
}

const char LunaTraits< boost::posix_time::hours >::className[] = "hours";
const char LunaTraits< boost::posix_time::hours >::fullName[] = "boost::posix_time::hours";
const char LunaTraits< boost::posix_time::hours >::moduleName[] = "boost";
const char* LunaTraits< boost::posix_time::hours >::parents[] = {"boost.time_duration", 0};
const int LunaTraits< boost::posix_time::hours >::hash = 9042386;
const int LunaTraits< boost::posix_time::hours >::uniqueIDs[] = {3585892,0};

luna_RegType LunaTraits< boost::posix_time::hours >::methods[] = {
	{"fromVoid", &luna_wrapper_boost_posix_time_hours::_bind_fromVoid},
	{"asVoid", &luna_wrapper_boost_posix_time_hours::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< boost::posix_time::hours >::converters[] = {
	{"boost::posix_time::time_duration", &luna_wrapper_boost_posix_time_hours::_cast_from_time_duration},
	{0,0}
};

luna_RegEnumType LunaTraits< boost::posix_time::hours >::enumValues[] = {
	{0,0}
};



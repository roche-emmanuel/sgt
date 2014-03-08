#include <plug_common.h>

class luna_wrapper_osg_ArgumentParser {
public:
	typedef Luna< osg::ArgumentParser > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,99527028) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::ArgumentParser*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::ArgumentParser* rhs =(Luna< osg::ArgumentParser >::check(L,2));
		osg::ArgumentParser* self=(Luna< osg::ArgumentParser >::check(L,1));
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

		osg::ArgumentParser* self= (osg::ArgumentParser*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::ArgumentParser >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,99527028) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osg::ArgumentParser >::check(L,1));
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

		osg::ArgumentParser* self=(Luna< osg::ArgumentParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::ArgumentParser");
		
		return luna_dynamicCast(L,converters,"osg::ArgumentParser",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_isOption_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isOption_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isString_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isString_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isNumber_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isNumber_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isBool(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setApplicationUsage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getApplicationUsage_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getApplicationUsage_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_argc(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getApplicationName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_find(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_containsOptions(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_remove(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_match(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_read_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_read_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,3,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_read_overload_3(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,3,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,4))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_read_overload_4(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,3,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,5))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_read_overload_5(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,3,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,5))) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,6))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_read_overload_6(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,3,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,5))) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,6))) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,7))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_read_overload_7(lua_State *L) {
		if( lua_gettop(L)!=8 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,3,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,5))) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,6))) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,7))) ) return false;
		if( !Luna<void>::has_uniqueid(L,8,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,8))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_read_overload_8(lua_State *L) {
		if( lua_gettop(L)!=9 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,3,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,5))) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,6))) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,7))) ) return false;
		if( !Luna<void>::has_uniqueid(L,8,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,8))) ) return false;
		if( !Luna<void>::has_uniqueid(L,9,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,9))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_read_overload_9(lua_State *L) {
		if( lua_gettop(L)!=10 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,3,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,5))) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,6))) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,7))) ) return false;
		if( !Luna<void>::has_uniqueid(L,8,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,8))) ) return false;
		if( !Luna<void>::has_uniqueid(L,9,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,9))) ) return false;
		if( !Luna<void>::has_uniqueid(L,10,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,10))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_read_overload_10(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_read_overload_11(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,4,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,4))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_read_overload_12(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,4,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,5))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_read_overload_13(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,4,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,5))) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,6))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_read_overload_14(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,4,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,5))) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,6))) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,7))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_read_overload_15(lua_State *L) {
		if( lua_gettop(L)!=8 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,4,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,5))) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,6))) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,7))) ) return false;
		if( !Luna<void>::has_uniqueid(L,8,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,8))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_read_overload_16(lua_State *L) {
		if( lua_gettop(L)!=9 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,4,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,5))) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,6))) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,7))) ) return false;
		if( !Luna<void>::has_uniqueid(L,8,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,8))) ) return false;
		if( !Luna<void>::has_uniqueid(L,9,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,9))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_read_overload_17(lua_State *L) {
		if( lua_gettop(L)!=10 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,4,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,5))) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,6))) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,7))) ) return false;
		if( !Luna<void>::has_uniqueid(L,8,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,8))) ) return false;
		if( !Luna<void>::has_uniqueid(L,9,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,9))) ) return false;
		if( !Luna<void>::has_uniqueid(L,10,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,10))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_read_overload_18(lua_State *L) {
		if( lua_gettop(L)!=11 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,4,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,5))) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,6))) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,7))) ) return false;
		if( !Luna<void>::has_uniqueid(L,8,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,8))) ) return false;
		if( !Luna<void>::has_uniqueid(L,9,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,9))) ) return false;
		if( !Luna<void>::has_uniqueid(L,10,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,10))) ) return false;
		if( !Luna<void>::has_uniqueid(L,11,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,11))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_errors(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_reportError(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_reportRemainingOptionsAsUnrecognized(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getErrorMessageMap_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getErrorMessageMap_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_writeErrorMessages(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2993706) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readHelpType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 2 valid operators)
	inline static bool _lg_typecheck_op_index_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_index_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Constructor binds:

	// Function binds:
	// static bool osg::ArgumentParser::isOption(const char * str)
	static int _bind_isOption_overload_1(lua_State *L) {
		if (!_lg_typecheck_isOption_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in static bool osg::ArgumentParser::isOption(const char * str) function, expected prototype:\nstatic bool osg::ArgumentParser::isOption(const char * str)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * str=(const char *)lua_tostring(L,1);

		bool lret = osg::ArgumentParser::isOption(str);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::ArgumentParser::isOption(int pos) const
	static int _bind_isOption_overload_2(lua_State *L) {
		if (!_lg_typecheck_isOption_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::ArgumentParser::isOption(int pos) const function, expected prototype:\nbool osg::ArgumentParser::isOption(int pos) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int pos=(int)lua_tointeger(L,2);

		osg::ArgumentParser* self=(Luna< osg::ArgumentParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::ArgumentParser::isOption(int) const. Got : '%s'\n%s",typeid(Luna< osg::ArgumentParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isOption(pos);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for osg::ArgumentParser::isOption
	static int _bind_isOption(lua_State *L) {
		if (_lg_typecheck_isOption_overload_1(L)) return _bind_isOption_overload_1(L);
		if (_lg_typecheck_isOption_overload_2(L)) return _bind_isOption_overload_2(L);

		luaL_error(L, "error in function isOption, cannot match any of the overloads for function isOption:\n  isOption(const char *)\n  isOption(int)\n");
		return 0;
	}

	// static bool osg::ArgumentParser::isString(const char * str)
	static int _bind_isString_overload_1(lua_State *L) {
		if (!_lg_typecheck_isString_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in static bool osg::ArgumentParser::isString(const char * str) function, expected prototype:\nstatic bool osg::ArgumentParser::isString(const char * str)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * str=(const char *)lua_tostring(L,1);

		bool lret = osg::ArgumentParser::isString(str);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::ArgumentParser::isString(int pos) const
	static int _bind_isString_overload_2(lua_State *L) {
		if (!_lg_typecheck_isString_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::ArgumentParser::isString(int pos) const function, expected prototype:\nbool osg::ArgumentParser::isString(int pos) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int pos=(int)lua_tointeger(L,2);

		osg::ArgumentParser* self=(Luna< osg::ArgumentParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::ArgumentParser::isString(int) const. Got : '%s'\n%s",typeid(Luna< osg::ArgumentParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isString(pos);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for osg::ArgumentParser::isString
	static int _bind_isString(lua_State *L) {
		if (_lg_typecheck_isString_overload_1(L)) return _bind_isString_overload_1(L);
		if (_lg_typecheck_isString_overload_2(L)) return _bind_isString_overload_2(L);

		luaL_error(L, "error in function isString, cannot match any of the overloads for function isString:\n  isString(const char *)\n  isString(int)\n");
		return 0;
	}

	// static bool osg::ArgumentParser::isNumber(const char * str)
	static int _bind_isNumber_overload_1(lua_State *L) {
		if (!_lg_typecheck_isNumber_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in static bool osg::ArgumentParser::isNumber(const char * str) function, expected prototype:\nstatic bool osg::ArgumentParser::isNumber(const char * str)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * str=(const char *)lua_tostring(L,1);

		bool lret = osg::ArgumentParser::isNumber(str);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::ArgumentParser::isNumber(int pos) const
	static int _bind_isNumber_overload_2(lua_State *L) {
		if (!_lg_typecheck_isNumber_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::ArgumentParser::isNumber(int pos) const function, expected prototype:\nbool osg::ArgumentParser::isNumber(int pos) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int pos=(int)lua_tointeger(L,2);

		osg::ArgumentParser* self=(Luna< osg::ArgumentParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::ArgumentParser::isNumber(int) const. Got : '%s'\n%s",typeid(Luna< osg::ArgumentParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isNumber(pos);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for osg::ArgumentParser::isNumber
	static int _bind_isNumber(lua_State *L) {
		if (_lg_typecheck_isNumber_overload_1(L)) return _bind_isNumber_overload_1(L);
		if (_lg_typecheck_isNumber_overload_2(L)) return _bind_isNumber_overload_2(L);

		luaL_error(L, "error in function isNumber, cannot match any of the overloads for function isNumber:\n  isNumber(const char *)\n  isNumber(int)\n");
		return 0;
	}

	// static bool osg::ArgumentParser::isBool(const char * str)
	static int _bind_isBool(lua_State *L) {
		if (!_lg_typecheck_isBool(L)) {
			luaL_error(L, "luna typecheck failed in static bool osg::ArgumentParser::isBool(const char * str) function, expected prototype:\nstatic bool osg::ArgumentParser::isBool(const char * str)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * str=(const char *)lua_tostring(L,1);

		bool lret = osg::ArgumentParser::isBool(str);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::ArgumentParser::setApplicationUsage(osg::ApplicationUsage * usage)
	static int _bind_setApplicationUsage(lua_State *L) {
		if (!_lg_typecheck_setApplicationUsage(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ArgumentParser::setApplicationUsage(osg::ApplicationUsage * usage) function, expected prototype:\nvoid osg::ArgumentParser::setApplicationUsage(osg::ApplicationUsage * usage)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ApplicationUsage* usage=(Luna< osg::Referenced >::checkSubType< osg::ApplicationUsage >(L,2));

		osg::ArgumentParser* self=(Luna< osg::ArgumentParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ArgumentParser::setApplicationUsage(osg::ApplicationUsage *). Got : '%s'\n%s",typeid(Luna< osg::ArgumentParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setApplicationUsage(usage);

		return 0;
	}

	// osg::ApplicationUsage * osg::ArgumentParser::getApplicationUsage()
	static int _bind_getApplicationUsage_overload_1(lua_State *L) {
		if (!_lg_typecheck_getApplicationUsage_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::ApplicationUsage * osg::ArgumentParser::getApplicationUsage() function, expected prototype:\nosg::ApplicationUsage * osg::ArgumentParser::getApplicationUsage()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ArgumentParser* self=(Luna< osg::ArgumentParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::ApplicationUsage * osg::ArgumentParser::getApplicationUsage(). Got : '%s'\n%s",typeid(Luna< osg::ArgumentParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::ApplicationUsage * lret = self->getApplicationUsage();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::ApplicationUsage >::push(L,lret,false);

		return 1;
	}

	// const osg::ApplicationUsage * osg::ArgumentParser::getApplicationUsage() const
	static int _bind_getApplicationUsage_overload_2(lua_State *L) {
		if (!_lg_typecheck_getApplicationUsage_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::ApplicationUsage * osg::ArgumentParser::getApplicationUsage() const function, expected prototype:\nconst osg::ApplicationUsage * osg::ArgumentParser::getApplicationUsage() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ArgumentParser* self=(Luna< osg::ArgumentParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::ApplicationUsage * osg::ArgumentParser::getApplicationUsage() const. Got : '%s'\n%s",typeid(Luna< osg::ArgumentParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::ApplicationUsage * lret = self->getApplicationUsage();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::ApplicationUsage >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::ArgumentParser::getApplicationUsage
	static int _bind_getApplicationUsage(lua_State *L) {
		if (_lg_typecheck_getApplicationUsage_overload_1(L)) return _bind_getApplicationUsage_overload_1(L);
		if (_lg_typecheck_getApplicationUsage_overload_2(L)) return _bind_getApplicationUsage_overload_2(L);

		luaL_error(L, "error in function getApplicationUsage, cannot match any of the overloads for function getApplicationUsage:\n  getApplicationUsage()\n  getApplicationUsage()\n");
		return 0;
	}

	// int & osg::ArgumentParser::argc()
	static int _bind_argc(lua_State *L) {
		if (!_lg_typecheck_argc(L)) {
			luaL_error(L, "luna typecheck failed in int & osg::ArgumentParser::argc() function, expected prototype:\nint & osg::ArgumentParser::argc()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ArgumentParser* self=(Luna< osg::ArgumentParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int & osg::ArgumentParser::argc(). Got : '%s'\n%s",typeid(Luna< osg::ArgumentParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int & lret = self->argc();
		lua_pushnumber(L,lret);

		return 1;
	}

	// std::string osg::ArgumentParser::getApplicationName() const
	static int _bind_getApplicationName(lua_State *L) {
		if (!_lg_typecheck_getApplicationName(L)) {
			luaL_error(L, "luna typecheck failed in std::string osg::ArgumentParser::getApplicationName() const function, expected prototype:\nstd::string osg::ArgumentParser::getApplicationName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ArgumentParser* self=(Luna< osg::ArgumentParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call std::string osg::ArgumentParser::getApplicationName() const. Got : '%s'\n%s",typeid(Luna< osg::ArgumentParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		std::string lret = self->getApplicationName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// int osg::ArgumentParser::find(const std::string & str) const
	static int _bind_find(lua_State *L) {
		if (!_lg_typecheck_find(L)) {
			luaL_error(L, "luna typecheck failed in int osg::ArgumentParser::find(const std::string & str) const function, expected prototype:\nint osg::ArgumentParser::find(const std::string & str) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string str(lua_tostring(L,2),lua_objlen(L,2));

		osg::ArgumentParser* self=(Luna< osg::ArgumentParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::ArgumentParser::find(const std::string &) const. Got : '%s'\n%s",typeid(Luna< osg::ArgumentParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->find(str);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::ArgumentParser::containsOptions() const
	static int _bind_containsOptions(lua_State *L) {
		if (!_lg_typecheck_containsOptions(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::ArgumentParser::containsOptions() const function, expected prototype:\nbool osg::ArgumentParser::containsOptions() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ArgumentParser* self=(Luna< osg::ArgumentParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::ArgumentParser::containsOptions() const. Got : '%s'\n%s",typeid(Luna< osg::ArgumentParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->containsOptions();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::ArgumentParser::remove(int pos, int num = 1)
	static int _bind_remove(lua_State *L) {
		if (!_lg_typecheck_remove(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ArgumentParser::remove(int pos, int num = 1) function, expected prototype:\nvoid osg::ArgumentParser::remove(int pos, int num = 1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int pos=(int)lua_tointeger(L,2);
		int num=luatop>2 ? (int)lua_tointeger(L,3) : (int)1;

		osg::ArgumentParser* self=(Luna< osg::ArgumentParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ArgumentParser::remove(int, int). Got : '%s'\n%s",typeid(Luna< osg::ArgumentParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->remove(pos, num);

		return 0;
	}

	// bool osg::ArgumentParser::match(int pos, const std::string & str) const
	static int _bind_match(lua_State *L) {
		if (!_lg_typecheck_match(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::ArgumentParser::match(int pos, const std::string & str) const function, expected prototype:\nbool osg::ArgumentParser::match(int pos, const std::string & str) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int pos=(int)lua_tointeger(L,2);
		std::string str(lua_tostring(L,3),lua_objlen(L,3));

		osg::ArgumentParser* self=(Luna< osg::ArgumentParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::ArgumentParser::match(int, const std::string &) const. Got : '%s'\n%s",typeid(Luna< osg::ArgumentParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->match(pos, str);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::ArgumentParser::read(const std::string & str)
	static int _bind_read_overload_1(lua_State *L) {
		if (!_lg_typecheck_read_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::ArgumentParser::read(const std::string & str) function, expected prototype:\nbool osg::ArgumentParser::read(const std::string & str)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string str(lua_tostring(L,2),lua_objlen(L,2));

		osg::ArgumentParser* self=(Luna< osg::ArgumentParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::ArgumentParser::read(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::ArgumentParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->read(str);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::ArgumentParser::read(const std::string & str, osg::ArgumentParser::Parameter value1)
	static int _bind_read_overload_2(lua_State *L) {
		if (!_lg_typecheck_read_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::ArgumentParser::read(const std::string & str, osg::ArgumentParser::Parameter value1) function, expected prototype:\nbool osg::ArgumentParser::read(const std::string & str, osg::ArgumentParser::Parameter value1)\nClass arguments details:\narg 2 ID = 67360031\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string str(lua_tostring(L,2),lua_objlen(L,2));
		osg::ArgumentParser::Parameter* value1_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,3));
		if( !value1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value1 in osg::ArgumentParser::read function");
		}
		osg::ArgumentParser::Parameter value1=*value1_ptr;

		osg::ArgumentParser* self=(Luna< osg::ArgumentParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::ArgumentParser::read(const std::string &, osg::ArgumentParser::Parameter). Got : '%s'\n%s",typeid(Luna< osg::ArgumentParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->read(str, value1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::ArgumentParser::read(const std::string & str, osg::ArgumentParser::Parameter value1, osg::ArgumentParser::Parameter value2)
	static int _bind_read_overload_3(lua_State *L) {
		if (!_lg_typecheck_read_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::ArgumentParser::read(const std::string & str, osg::ArgumentParser::Parameter value1, osg::ArgumentParser::Parameter value2) function, expected prototype:\nbool osg::ArgumentParser::read(const std::string & str, osg::ArgumentParser::Parameter value1, osg::ArgumentParser::Parameter value2)\nClass arguments details:\narg 2 ID = 67360031\narg 3 ID = 67360031\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string str(lua_tostring(L,2),lua_objlen(L,2));
		osg::ArgumentParser::Parameter* value1_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,3));
		if( !value1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value1 in osg::ArgumentParser::read function");
		}
		osg::ArgumentParser::Parameter value1=*value1_ptr;
		osg::ArgumentParser::Parameter* value2_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,4));
		if( !value2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value2 in osg::ArgumentParser::read function");
		}
		osg::ArgumentParser::Parameter value2=*value2_ptr;

		osg::ArgumentParser* self=(Luna< osg::ArgumentParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::ArgumentParser::read(const std::string &, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter). Got : '%s'\n%s",typeid(Luna< osg::ArgumentParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->read(str, value1, value2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::ArgumentParser::read(const std::string & str, osg::ArgumentParser::Parameter value1, osg::ArgumentParser::Parameter value2, osg::ArgumentParser::Parameter value3)
	static int _bind_read_overload_4(lua_State *L) {
		if (!_lg_typecheck_read_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::ArgumentParser::read(const std::string & str, osg::ArgumentParser::Parameter value1, osg::ArgumentParser::Parameter value2, osg::ArgumentParser::Parameter value3) function, expected prototype:\nbool osg::ArgumentParser::read(const std::string & str, osg::ArgumentParser::Parameter value1, osg::ArgumentParser::Parameter value2, osg::ArgumentParser::Parameter value3)\nClass arguments details:\narg 2 ID = 67360031\narg 3 ID = 67360031\narg 4 ID = 67360031\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string str(lua_tostring(L,2),lua_objlen(L,2));
		osg::ArgumentParser::Parameter* value1_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,3));
		if( !value1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value1 in osg::ArgumentParser::read function");
		}
		osg::ArgumentParser::Parameter value1=*value1_ptr;
		osg::ArgumentParser::Parameter* value2_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,4));
		if( !value2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value2 in osg::ArgumentParser::read function");
		}
		osg::ArgumentParser::Parameter value2=*value2_ptr;
		osg::ArgumentParser::Parameter* value3_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,5));
		if( !value3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value3 in osg::ArgumentParser::read function");
		}
		osg::ArgumentParser::Parameter value3=*value3_ptr;

		osg::ArgumentParser* self=(Luna< osg::ArgumentParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::ArgumentParser::read(const std::string &, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter). Got : '%s'\n%s",typeid(Luna< osg::ArgumentParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->read(str, value1, value2, value3);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::ArgumentParser::read(const std::string & str, osg::ArgumentParser::Parameter value1, osg::ArgumentParser::Parameter value2, osg::ArgumentParser::Parameter value3, osg::ArgumentParser::Parameter value4)
	static int _bind_read_overload_5(lua_State *L) {
		if (!_lg_typecheck_read_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::ArgumentParser::read(const std::string & str, osg::ArgumentParser::Parameter value1, osg::ArgumentParser::Parameter value2, osg::ArgumentParser::Parameter value3, osg::ArgumentParser::Parameter value4) function, expected prototype:\nbool osg::ArgumentParser::read(const std::string & str, osg::ArgumentParser::Parameter value1, osg::ArgumentParser::Parameter value2, osg::ArgumentParser::Parameter value3, osg::ArgumentParser::Parameter value4)\nClass arguments details:\narg 2 ID = 67360031\narg 3 ID = 67360031\narg 4 ID = 67360031\narg 5 ID = 67360031\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string str(lua_tostring(L,2),lua_objlen(L,2));
		osg::ArgumentParser::Parameter* value1_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,3));
		if( !value1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value1 in osg::ArgumentParser::read function");
		}
		osg::ArgumentParser::Parameter value1=*value1_ptr;
		osg::ArgumentParser::Parameter* value2_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,4));
		if( !value2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value2 in osg::ArgumentParser::read function");
		}
		osg::ArgumentParser::Parameter value2=*value2_ptr;
		osg::ArgumentParser::Parameter* value3_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,5));
		if( !value3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value3 in osg::ArgumentParser::read function");
		}
		osg::ArgumentParser::Parameter value3=*value3_ptr;
		osg::ArgumentParser::Parameter* value4_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,6));
		if( !value4_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value4 in osg::ArgumentParser::read function");
		}
		osg::ArgumentParser::Parameter value4=*value4_ptr;

		osg::ArgumentParser* self=(Luna< osg::ArgumentParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::ArgumentParser::read(const std::string &, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter). Got : '%s'\n%s",typeid(Luna< osg::ArgumentParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->read(str, value1, value2, value3, value4);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::ArgumentParser::read(const std::string & str, osg::ArgumentParser::Parameter value1, osg::ArgumentParser::Parameter value2, osg::ArgumentParser::Parameter value3, osg::ArgumentParser::Parameter value4, osg::ArgumentParser::Parameter value5)
	static int _bind_read_overload_6(lua_State *L) {
		if (!_lg_typecheck_read_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::ArgumentParser::read(const std::string & str, osg::ArgumentParser::Parameter value1, osg::ArgumentParser::Parameter value2, osg::ArgumentParser::Parameter value3, osg::ArgumentParser::Parameter value4, osg::ArgumentParser::Parameter value5) function, expected prototype:\nbool osg::ArgumentParser::read(const std::string & str, osg::ArgumentParser::Parameter value1, osg::ArgumentParser::Parameter value2, osg::ArgumentParser::Parameter value3, osg::ArgumentParser::Parameter value4, osg::ArgumentParser::Parameter value5)\nClass arguments details:\narg 2 ID = 67360031\narg 3 ID = 67360031\narg 4 ID = 67360031\narg 5 ID = 67360031\narg 6 ID = 67360031\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string str(lua_tostring(L,2),lua_objlen(L,2));
		osg::ArgumentParser::Parameter* value1_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,3));
		if( !value1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value1 in osg::ArgumentParser::read function");
		}
		osg::ArgumentParser::Parameter value1=*value1_ptr;
		osg::ArgumentParser::Parameter* value2_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,4));
		if( !value2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value2 in osg::ArgumentParser::read function");
		}
		osg::ArgumentParser::Parameter value2=*value2_ptr;
		osg::ArgumentParser::Parameter* value3_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,5));
		if( !value3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value3 in osg::ArgumentParser::read function");
		}
		osg::ArgumentParser::Parameter value3=*value3_ptr;
		osg::ArgumentParser::Parameter* value4_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,6));
		if( !value4_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value4 in osg::ArgumentParser::read function");
		}
		osg::ArgumentParser::Parameter value4=*value4_ptr;
		osg::ArgumentParser::Parameter* value5_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,7));
		if( !value5_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value5 in osg::ArgumentParser::read function");
		}
		osg::ArgumentParser::Parameter value5=*value5_ptr;

		osg::ArgumentParser* self=(Luna< osg::ArgumentParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::ArgumentParser::read(const std::string &, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter). Got : '%s'\n%s",typeid(Luna< osg::ArgumentParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->read(str, value1, value2, value3, value4, value5);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::ArgumentParser::read(const std::string & str, osg::ArgumentParser::Parameter value1, osg::ArgumentParser::Parameter value2, osg::ArgumentParser::Parameter value3, osg::ArgumentParser::Parameter value4, osg::ArgumentParser::Parameter value5, osg::ArgumentParser::Parameter value6)
	static int _bind_read_overload_7(lua_State *L) {
		if (!_lg_typecheck_read_overload_7(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::ArgumentParser::read(const std::string & str, osg::ArgumentParser::Parameter value1, osg::ArgumentParser::Parameter value2, osg::ArgumentParser::Parameter value3, osg::ArgumentParser::Parameter value4, osg::ArgumentParser::Parameter value5, osg::ArgumentParser::Parameter value6) function, expected prototype:\nbool osg::ArgumentParser::read(const std::string & str, osg::ArgumentParser::Parameter value1, osg::ArgumentParser::Parameter value2, osg::ArgumentParser::Parameter value3, osg::ArgumentParser::Parameter value4, osg::ArgumentParser::Parameter value5, osg::ArgumentParser::Parameter value6)\nClass arguments details:\narg 2 ID = 67360031\narg 3 ID = 67360031\narg 4 ID = 67360031\narg 5 ID = 67360031\narg 6 ID = 67360031\narg 7 ID = 67360031\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string str(lua_tostring(L,2),lua_objlen(L,2));
		osg::ArgumentParser::Parameter* value1_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,3));
		if( !value1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value1 in osg::ArgumentParser::read function");
		}
		osg::ArgumentParser::Parameter value1=*value1_ptr;
		osg::ArgumentParser::Parameter* value2_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,4));
		if( !value2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value2 in osg::ArgumentParser::read function");
		}
		osg::ArgumentParser::Parameter value2=*value2_ptr;
		osg::ArgumentParser::Parameter* value3_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,5));
		if( !value3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value3 in osg::ArgumentParser::read function");
		}
		osg::ArgumentParser::Parameter value3=*value3_ptr;
		osg::ArgumentParser::Parameter* value4_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,6));
		if( !value4_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value4 in osg::ArgumentParser::read function");
		}
		osg::ArgumentParser::Parameter value4=*value4_ptr;
		osg::ArgumentParser::Parameter* value5_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,7));
		if( !value5_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value5 in osg::ArgumentParser::read function");
		}
		osg::ArgumentParser::Parameter value5=*value5_ptr;
		osg::ArgumentParser::Parameter* value6_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,8));
		if( !value6_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value6 in osg::ArgumentParser::read function");
		}
		osg::ArgumentParser::Parameter value6=*value6_ptr;

		osg::ArgumentParser* self=(Luna< osg::ArgumentParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::ArgumentParser::read(const std::string &, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter). Got : '%s'\n%s",typeid(Luna< osg::ArgumentParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->read(str, value1, value2, value3, value4, value5, value6);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::ArgumentParser::read(const std::string & str, osg::ArgumentParser::Parameter value1, osg::ArgumentParser::Parameter value2, osg::ArgumentParser::Parameter value3, osg::ArgumentParser::Parameter value4, osg::ArgumentParser::Parameter value5, osg::ArgumentParser::Parameter value6, osg::ArgumentParser::Parameter value7)
	static int _bind_read_overload_8(lua_State *L) {
		if (!_lg_typecheck_read_overload_8(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::ArgumentParser::read(const std::string & str, osg::ArgumentParser::Parameter value1, osg::ArgumentParser::Parameter value2, osg::ArgumentParser::Parameter value3, osg::ArgumentParser::Parameter value4, osg::ArgumentParser::Parameter value5, osg::ArgumentParser::Parameter value6, osg::ArgumentParser::Parameter value7) function, expected prototype:\nbool osg::ArgumentParser::read(const std::string & str, osg::ArgumentParser::Parameter value1, osg::ArgumentParser::Parameter value2, osg::ArgumentParser::Parameter value3, osg::ArgumentParser::Parameter value4, osg::ArgumentParser::Parameter value5, osg::ArgumentParser::Parameter value6, osg::ArgumentParser::Parameter value7)\nClass arguments details:\narg 2 ID = 67360031\narg 3 ID = 67360031\narg 4 ID = 67360031\narg 5 ID = 67360031\narg 6 ID = 67360031\narg 7 ID = 67360031\narg 8 ID = 67360031\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string str(lua_tostring(L,2),lua_objlen(L,2));
		osg::ArgumentParser::Parameter* value1_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,3));
		if( !value1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value1 in osg::ArgumentParser::read function");
		}
		osg::ArgumentParser::Parameter value1=*value1_ptr;
		osg::ArgumentParser::Parameter* value2_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,4));
		if( !value2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value2 in osg::ArgumentParser::read function");
		}
		osg::ArgumentParser::Parameter value2=*value2_ptr;
		osg::ArgumentParser::Parameter* value3_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,5));
		if( !value3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value3 in osg::ArgumentParser::read function");
		}
		osg::ArgumentParser::Parameter value3=*value3_ptr;
		osg::ArgumentParser::Parameter* value4_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,6));
		if( !value4_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value4 in osg::ArgumentParser::read function");
		}
		osg::ArgumentParser::Parameter value4=*value4_ptr;
		osg::ArgumentParser::Parameter* value5_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,7));
		if( !value5_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value5 in osg::ArgumentParser::read function");
		}
		osg::ArgumentParser::Parameter value5=*value5_ptr;
		osg::ArgumentParser::Parameter* value6_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,8));
		if( !value6_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value6 in osg::ArgumentParser::read function");
		}
		osg::ArgumentParser::Parameter value6=*value6_ptr;
		osg::ArgumentParser::Parameter* value7_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,9));
		if( !value7_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value7 in osg::ArgumentParser::read function");
		}
		osg::ArgumentParser::Parameter value7=*value7_ptr;

		osg::ArgumentParser* self=(Luna< osg::ArgumentParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::ArgumentParser::read(const std::string &, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter). Got : '%s'\n%s",typeid(Luna< osg::ArgumentParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->read(str, value1, value2, value3, value4, value5, value6, value7);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::ArgumentParser::read(const std::string & str, osg::ArgumentParser::Parameter value1, osg::ArgumentParser::Parameter value2, osg::ArgumentParser::Parameter value3, osg::ArgumentParser::Parameter value4, osg::ArgumentParser::Parameter value5, osg::ArgumentParser::Parameter value6, osg::ArgumentParser::Parameter value7, osg::ArgumentParser::Parameter value8)
	static int _bind_read_overload_9(lua_State *L) {
		if (!_lg_typecheck_read_overload_9(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::ArgumentParser::read(const std::string & str, osg::ArgumentParser::Parameter value1, osg::ArgumentParser::Parameter value2, osg::ArgumentParser::Parameter value3, osg::ArgumentParser::Parameter value4, osg::ArgumentParser::Parameter value5, osg::ArgumentParser::Parameter value6, osg::ArgumentParser::Parameter value7, osg::ArgumentParser::Parameter value8) function, expected prototype:\nbool osg::ArgumentParser::read(const std::string & str, osg::ArgumentParser::Parameter value1, osg::ArgumentParser::Parameter value2, osg::ArgumentParser::Parameter value3, osg::ArgumentParser::Parameter value4, osg::ArgumentParser::Parameter value5, osg::ArgumentParser::Parameter value6, osg::ArgumentParser::Parameter value7, osg::ArgumentParser::Parameter value8)\nClass arguments details:\narg 2 ID = 67360031\narg 3 ID = 67360031\narg 4 ID = 67360031\narg 5 ID = 67360031\narg 6 ID = 67360031\narg 7 ID = 67360031\narg 8 ID = 67360031\narg 9 ID = 67360031\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string str(lua_tostring(L,2),lua_objlen(L,2));
		osg::ArgumentParser::Parameter* value1_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,3));
		if( !value1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value1 in osg::ArgumentParser::read function");
		}
		osg::ArgumentParser::Parameter value1=*value1_ptr;
		osg::ArgumentParser::Parameter* value2_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,4));
		if( !value2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value2 in osg::ArgumentParser::read function");
		}
		osg::ArgumentParser::Parameter value2=*value2_ptr;
		osg::ArgumentParser::Parameter* value3_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,5));
		if( !value3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value3 in osg::ArgumentParser::read function");
		}
		osg::ArgumentParser::Parameter value3=*value3_ptr;
		osg::ArgumentParser::Parameter* value4_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,6));
		if( !value4_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value4 in osg::ArgumentParser::read function");
		}
		osg::ArgumentParser::Parameter value4=*value4_ptr;
		osg::ArgumentParser::Parameter* value5_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,7));
		if( !value5_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value5 in osg::ArgumentParser::read function");
		}
		osg::ArgumentParser::Parameter value5=*value5_ptr;
		osg::ArgumentParser::Parameter* value6_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,8));
		if( !value6_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value6 in osg::ArgumentParser::read function");
		}
		osg::ArgumentParser::Parameter value6=*value6_ptr;
		osg::ArgumentParser::Parameter* value7_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,9));
		if( !value7_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value7 in osg::ArgumentParser::read function");
		}
		osg::ArgumentParser::Parameter value7=*value7_ptr;
		osg::ArgumentParser::Parameter* value8_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,10));
		if( !value8_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value8 in osg::ArgumentParser::read function");
		}
		osg::ArgumentParser::Parameter value8=*value8_ptr;

		osg::ArgumentParser* self=(Luna< osg::ArgumentParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::ArgumentParser::read(const std::string &, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter). Got : '%s'\n%s",typeid(Luna< osg::ArgumentParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->read(str, value1, value2, value3, value4, value5, value6, value7, value8);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::ArgumentParser::read(int pos, const std::string & str)
	static int _bind_read_overload_10(lua_State *L) {
		if (!_lg_typecheck_read_overload_10(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::ArgumentParser::read(int pos, const std::string & str) function, expected prototype:\nbool osg::ArgumentParser::read(int pos, const std::string & str)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int pos=(int)lua_tointeger(L,2);
		std::string str(lua_tostring(L,3),lua_objlen(L,3));

		osg::ArgumentParser* self=(Luna< osg::ArgumentParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::ArgumentParser::read(int, const std::string &). Got : '%s'\n%s",typeid(Luna< osg::ArgumentParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->read(pos, str);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::ArgumentParser::read(int pos, const std::string & str, osg::ArgumentParser::Parameter value1)
	static int _bind_read_overload_11(lua_State *L) {
		if (!_lg_typecheck_read_overload_11(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::ArgumentParser::read(int pos, const std::string & str, osg::ArgumentParser::Parameter value1) function, expected prototype:\nbool osg::ArgumentParser::read(int pos, const std::string & str, osg::ArgumentParser::Parameter value1)\nClass arguments details:\narg 3 ID = 67360031\n\n%s",luna_dumpStack(L).c_str());
		}

		int pos=(int)lua_tointeger(L,2);
		std::string str(lua_tostring(L,3),lua_objlen(L,3));
		osg::ArgumentParser::Parameter* value1_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,4));
		if( !value1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value1 in osg::ArgumentParser::read function");
		}
		osg::ArgumentParser::Parameter value1=*value1_ptr;

		osg::ArgumentParser* self=(Luna< osg::ArgumentParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::ArgumentParser::read(int, const std::string &, osg::ArgumentParser::Parameter). Got : '%s'\n%s",typeid(Luna< osg::ArgumentParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->read(pos, str, value1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::ArgumentParser::read(int pos, const std::string & str, osg::ArgumentParser::Parameter value1, osg::ArgumentParser::Parameter value2)
	static int _bind_read_overload_12(lua_State *L) {
		if (!_lg_typecheck_read_overload_12(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::ArgumentParser::read(int pos, const std::string & str, osg::ArgumentParser::Parameter value1, osg::ArgumentParser::Parameter value2) function, expected prototype:\nbool osg::ArgumentParser::read(int pos, const std::string & str, osg::ArgumentParser::Parameter value1, osg::ArgumentParser::Parameter value2)\nClass arguments details:\narg 3 ID = 67360031\narg 4 ID = 67360031\n\n%s",luna_dumpStack(L).c_str());
		}

		int pos=(int)lua_tointeger(L,2);
		std::string str(lua_tostring(L,3),lua_objlen(L,3));
		osg::ArgumentParser::Parameter* value1_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,4));
		if( !value1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value1 in osg::ArgumentParser::read function");
		}
		osg::ArgumentParser::Parameter value1=*value1_ptr;
		osg::ArgumentParser::Parameter* value2_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,5));
		if( !value2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value2 in osg::ArgumentParser::read function");
		}
		osg::ArgumentParser::Parameter value2=*value2_ptr;

		osg::ArgumentParser* self=(Luna< osg::ArgumentParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::ArgumentParser::read(int, const std::string &, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter). Got : '%s'\n%s",typeid(Luna< osg::ArgumentParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->read(pos, str, value1, value2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::ArgumentParser::read(int pos, const std::string & str, osg::ArgumentParser::Parameter value1, osg::ArgumentParser::Parameter value2, osg::ArgumentParser::Parameter value3)
	static int _bind_read_overload_13(lua_State *L) {
		if (!_lg_typecheck_read_overload_13(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::ArgumentParser::read(int pos, const std::string & str, osg::ArgumentParser::Parameter value1, osg::ArgumentParser::Parameter value2, osg::ArgumentParser::Parameter value3) function, expected prototype:\nbool osg::ArgumentParser::read(int pos, const std::string & str, osg::ArgumentParser::Parameter value1, osg::ArgumentParser::Parameter value2, osg::ArgumentParser::Parameter value3)\nClass arguments details:\narg 3 ID = 67360031\narg 4 ID = 67360031\narg 5 ID = 67360031\n\n%s",luna_dumpStack(L).c_str());
		}

		int pos=(int)lua_tointeger(L,2);
		std::string str(lua_tostring(L,3),lua_objlen(L,3));
		osg::ArgumentParser::Parameter* value1_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,4));
		if( !value1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value1 in osg::ArgumentParser::read function");
		}
		osg::ArgumentParser::Parameter value1=*value1_ptr;
		osg::ArgumentParser::Parameter* value2_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,5));
		if( !value2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value2 in osg::ArgumentParser::read function");
		}
		osg::ArgumentParser::Parameter value2=*value2_ptr;
		osg::ArgumentParser::Parameter* value3_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,6));
		if( !value3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value3 in osg::ArgumentParser::read function");
		}
		osg::ArgumentParser::Parameter value3=*value3_ptr;

		osg::ArgumentParser* self=(Luna< osg::ArgumentParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::ArgumentParser::read(int, const std::string &, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter). Got : '%s'\n%s",typeid(Luna< osg::ArgumentParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->read(pos, str, value1, value2, value3);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::ArgumentParser::read(int pos, const std::string & str, osg::ArgumentParser::Parameter value1, osg::ArgumentParser::Parameter value2, osg::ArgumentParser::Parameter value3, osg::ArgumentParser::Parameter value4)
	static int _bind_read_overload_14(lua_State *L) {
		if (!_lg_typecheck_read_overload_14(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::ArgumentParser::read(int pos, const std::string & str, osg::ArgumentParser::Parameter value1, osg::ArgumentParser::Parameter value2, osg::ArgumentParser::Parameter value3, osg::ArgumentParser::Parameter value4) function, expected prototype:\nbool osg::ArgumentParser::read(int pos, const std::string & str, osg::ArgumentParser::Parameter value1, osg::ArgumentParser::Parameter value2, osg::ArgumentParser::Parameter value3, osg::ArgumentParser::Parameter value4)\nClass arguments details:\narg 3 ID = 67360031\narg 4 ID = 67360031\narg 5 ID = 67360031\narg 6 ID = 67360031\n\n%s",luna_dumpStack(L).c_str());
		}

		int pos=(int)lua_tointeger(L,2);
		std::string str(lua_tostring(L,3),lua_objlen(L,3));
		osg::ArgumentParser::Parameter* value1_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,4));
		if( !value1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value1 in osg::ArgumentParser::read function");
		}
		osg::ArgumentParser::Parameter value1=*value1_ptr;
		osg::ArgumentParser::Parameter* value2_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,5));
		if( !value2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value2 in osg::ArgumentParser::read function");
		}
		osg::ArgumentParser::Parameter value2=*value2_ptr;
		osg::ArgumentParser::Parameter* value3_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,6));
		if( !value3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value3 in osg::ArgumentParser::read function");
		}
		osg::ArgumentParser::Parameter value3=*value3_ptr;
		osg::ArgumentParser::Parameter* value4_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,7));
		if( !value4_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value4 in osg::ArgumentParser::read function");
		}
		osg::ArgumentParser::Parameter value4=*value4_ptr;

		osg::ArgumentParser* self=(Luna< osg::ArgumentParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::ArgumentParser::read(int, const std::string &, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter). Got : '%s'\n%s",typeid(Luna< osg::ArgumentParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->read(pos, str, value1, value2, value3, value4);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::ArgumentParser::read(int pos, const std::string & str, osg::ArgumentParser::Parameter value1, osg::ArgumentParser::Parameter value2, osg::ArgumentParser::Parameter value3, osg::ArgumentParser::Parameter value4, osg::ArgumentParser::Parameter value5)
	static int _bind_read_overload_15(lua_State *L) {
		if (!_lg_typecheck_read_overload_15(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::ArgumentParser::read(int pos, const std::string & str, osg::ArgumentParser::Parameter value1, osg::ArgumentParser::Parameter value2, osg::ArgumentParser::Parameter value3, osg::ArgumentParser::Parameter value4, osg::ArgumentParser::Parameter value5) function, expected prototype:\nbool osg::ArgumentParser::read(int pos, const std::string & str, osg::ArgumentParser::Parameter value1, osg::ArgumentParser::Parameter value2, osg::ArgumentParser::Parameter value3, osg::ArgumentParser::Parameter value4, osg::ArgumentParser::Parameter value5)\nClass arguments details:\narg 3 ID = 67360031\narg 4 ID = 67360031\narg 5 ID = 67360031\narg 6 ID = 67360031\narg 7 ID = 67360031\n\n%s",luna_dumpStack(L).c_str());
		}

		int pos=(int)lua_tointeger(L,2);
		std::string str(lua_tostring(L,3),lua_objlen(L,3));
		osg::ArgumentParser::Parameter* value1_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,4));
		if( !value1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value1 in osg::ArgumentParser::read function");
		}
		osg::ArgumentParser::Parameter value1=*value1_ptr;
		osg::ArgumentParser::Parameter* value2_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,5));
		if( !value2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value2 in osg::ArgumentParser::read function");
		}
		osg::ArgumentParser::Parameter value2=*value2_ptr;
		osg::ArgumentParser::Parameter* value3_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,6));
		if( !value3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value3 in osg::ArgumentParser::read function");
		}
		osg::ArgumentParser::Parameter value3=*value3_ptr;
		osg::ArgumentParser::Parameter* value4_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,7));
		if( !value4_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value4 in osg::ArgumentParser::read function");
		}
		osg::ArgumentParser::Parameter value4=*value4_ptr;
		osg::ArgumentParser::Parameter* value5_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,8));
		if( !value5_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value5 in osg::ArgumentParser::read function");
		}
		osg::ArgumentParser::Parameter value5=*value5_ptr;

		osg::ArgumentParser* self=(Luna< osg::ArgumentParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::ArgumentParser::read(int, const std::string &, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter). Got : '%s'\n%s",typeid(Luna< osg::ArgumentParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->read(pos, str, value1, value2, value3, value4, value5);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::ArgumentParser::read(int pos, const std::string & str, osg::ArgumentParser::Parameter value1, osg::ArgumentParser::Parameter value2, osg::ArgumentParser::Parameter value3, osg::ArgumentParser::Parameter value4, osg::ArgumentParser::Parameter value5, osg::ArgumentParser::Parameter value6)
	static int _bind_read_overload_16(lua_State *L) {
		if (!_lg_typecheck_read_overload_16(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::ArgumentParser::read(int pos, const std::string & str, osg::ArgumentParser::Parameter value1, osg::ArgumentParser::Parameter value2, osg::ArgumentParser::Parameter value3, osg::ArgumentParser::Parameter value4, osg::ArgumentParser::Parameter value5, osg::ArgumentParser::Parameter value6) function, expected prototype:\nbool osg::ArgumentParser::read(int pos, const std::string & str, osg::ArgumentParser::Parameter value1, osg::ArgumentParser::Parameter value2, osg::ArgumentParser::Parameter value3, osg::ArgumentParser::Parameter value4, osg::ArgumentParser::Parameter value5, osg::ArgumentParser::Parameter value6)\nClass arguments details:\narg 3 ID = 67360031\narg 4 ID = 67360031\narg 5 ID = 67360031\narg 6 ID = 67360031\narg 7 ID = 67360031\narg 8 ID = 67360031\n\n%s",luna_dumpStack(L).c_str());
		}

		int pos=(int)lua_tointeger(L,2);
		std::string str(lua_tostring(L,3),lua_objlen(L,3));
		osg::ArgumentParser::Parameter* value1_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,4));
		if( !value1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value1 in osg::ArgumentParser::read function");
		}
		osg::ArgumentParser::Parameter value1=*value1_ptr;
		osg::ArgumentParser::Parameter* value2_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,5));
		if( !value2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value2 in osg::ArgumentParser::read function");
		}
		osg::ArgumentParser::Parameter value2=*value2_ptr;
		osg::ArgumentParser::Parameter* value3_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,6));
		if( !value3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value3 in osg::ArgumentParser::read function");
		}
		osg::ArgumentParser::Parameter value3=*value3_ptr;
		osg::ArgumentParser::Parameter* value4_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,7));
		if( !value4_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value4 in osg::ArgumentParser::read function");
		}
		osg::ArgumentParser::Parameter value4=*value4_ptr;
		osg::ArgumentParser::Parameter* value5_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,8));
		if( !value5_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value5 in osg::ArgumentParser::read function");
		}
		osg::ArgumentParser::Parameter value5=*value5_ptr;
		osg::ArgumentParser::Parameter* value6_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,9));
		if( !value6_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value6 in osg::ArgumentParser::read function");
		}
		osg::ArgumentParser::Parameter value6=*value6_ptr;

		osg::ArgumentParser* self=(Luna< osg::ArgumentParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::ArgumentParser::read(int, const std::string &, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter). Got : '%s'\n%s",typeid(Luna< osg::ArgumentParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->read(pos, str, value1, value2, value3, value4, value5, value6);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::ArgumentParser::read(int pos, const std::string & str, osg::ArgumentParser::Parameter value1, osg::ArgumentParser::Parameter value2, osg::ArgumentParser::Parameter value3, osg::ArgumentParser::Parameter value4, osg::ArgumentParser::Parameter value5, osg::ArgumentParser::Parameter value6, osg::ArgumentParser::Parameter value7)
	static int _bind_read_overload_17(lua_State *L) {
		if (!_lg_typecheck_read_overload_17(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::ArgumentParser::read(int pos, const std::string & str, osg::ArgumentParser::Parameter value1, osg::ArgumentParser::Parameter value2, osg::ArgumentParser::Parameter value3, osg::ArgumentParser::Parameter value4, osg::ArgumentParser::Parameter value5, osg::ArgumentParser::Parameter value6, osg::ArgumentParser::Parameter value7) function, expected prototype:\nbool osg::ArgumentParser::read(int pos, const std::string & str, osg::ArgumentParser::Parameter value1, osg::ArgumentParser::Parameter value2, osg::ArgumentParser::Parameter value3, osg::ArgumentParser::Parameter value4, osg::ArgumentParser::Parameter value5, osg::ArgumentParser::Parameter value6, osg::ArgumentParser::Parameter value7)\nClass arguments details:\narg 3 ID = 67360031\narg 4 ID = 67360031\narg 5 ID = 67360031\narg 6 ID = 67360031\narg 7 ID = 67360031\narg 8 ID = 67360031\narg 9 ID = 67360031\n\n%s",luna_dumpStack(L).c_str());
		}

		int pos=(int)lua_tointeger(L,2);
		std::string str(lua_tostring(L,3),lua_objlen(L,3));
		osg::ArgumentParser::Parameter* value1_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,4));
		if( !value1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value1 in osg::ArgumentParser::read function");
		}
		osg::ArgumentParser::Parameter value1=*value1_ptr;
		osg::ArgumentParser::Parameter* value2_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,5));
		if( !value2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value2 in osg::ArgumentParser::read function");
		}
		osg::ArgumentParser::Parameter value2=*value2_ptr;
		osg::ArgumentParser::Parameter* value3_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,6));
		if( !value3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value3 in osg::ArgumentParser::read function");
		}
		osg::ArgumentParser::Parameter value3=*value3_ptr;
		osg::ArgumentParser::Parameter* value4_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,7));
		if( !value4_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value4 in osg::ArgumentParser::read function");
		}
		osg::ArgumentParser::Parameter value4=*value4_ptr;
		osg::ArgumentParser::Parameter* value5_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,8));
		if( !value5_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value5 in osg::ArgumentParser::read function");
		}
		osg::ArgumentParser::Parameter value5=*value5_ptr;
		osg::ArgumentParser::Parameter* value6_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,9));
		if( !value6_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value6 in osg::ArgumentParser::read function");
		}
		osg::ArgumentParser::Parameter value6=*value6_ptr;
		osg::ArgumentParser::Parameter* value7_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,10));
		if( !value7_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value7 in osg::ArgumentParser::read function");
		}
		osg::ArgumentParser::Parameter value7=*value7_ptr;

		osg::ArgumentParser* self=(Luna< osg::ArgumentParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::ArgumentParser::read(int, const std::string &, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter). Got : '%s'\n%s",typeid(Luna< osg::ArgumentParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->read(pos, str, value1, value2, value3, value4, value5, value6, value7);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::ArgumentParser::read(int pos, const std::string & str, osg::ArgumentParser::Parameter value1, osg::ArgumentParser::Parameter value2, osg::ArgumentParser::Parameter value3, osg::ArgumentParser::Parameter value4, osg::ArgumentParser::Parameter value5, osg::ArgumentParser::Parameter value6, osg::ArgumentParser::Parameter value7, osg::ArgumentParser::Parameter value8)
	static int _bind_read_overload_18(lua_State *L) {
		if (!_lg_typecheck_read_overload_18(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::ArgumentParser::read(int pos, const std::string & str, osg::ArgumentParser::Parameter value1, osg::ArgumentParser::Parameter value2, osg::ArgumentParser::Parameter value3, osg::ArgumentParser::Parameter value4, osg::ArgumentParser::Parameter value5, osg::ArgumentParser::Parameter value6, osg::ArgumentParser::Parameter value7, osg::ArgumentParser::Parameter value8) function, expected prototype:\nbool osg::ArgumentParser::read(int pos, const std::string & str, osg::ArgumentParser::Parameter value1, osg::ArgumentParser::Parameter value2, osg::ArgumentParser::Parameter value3, osg::ArgumentParser::Parameter value4, osg::ArgumentParser::Parameter value5, osg::ArgumentParser::Parameter value6, osg::ArgumentParser::Parameter value7, osg::ArgumentParser::Parameter value8)\nClass arguments details:\narg 3 ID = 67360031\narg 4 ID = 67360031\narg 5 ID = 67360031\narg 6 ID = 67360031\narg 7 ID = 67360031\narg 8 ID = 67360031\narg 9 ID = 67360031\narg 10 ID = 67360031\n\n%s",luna_dumpStack(L).c_str());
		}

		int pos=(int)lua_tointeger(L,2);
		std::string str(lua_tostring(L,3),lua_objlen(L,3));
		osg::ArgumentParser::Parameter* value1_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,4));
		if( !value1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value1 in osg::ArgumentParser::read function");
		}
		osg::ArgumentParser::Parameter value1=*value1_ptr;
		osg::ArgumentParser::Parameter* value2_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,5));
		if( !value2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value2 in osg::ArgumentParser::read function");
		}
		osg::ArgumentParser::Parameter value2=*value2_ptr;
		osg::ArgumentParser::Parameter* value3_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,6));
		if( !value3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value3 in osg::ArgumentParser::read function");
		}
		osg::ArgumentParser::Parameter value3=*value3_ptr;
		osg::ArgumentParser::Parameter* value4_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,7));
		if( !value4_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value4 in osg::ArgumentParser::read function");
		}
		osg::ArgumentParser::Parameter value4=*value4_ptr;
		osg::ArgumentParser::Parameter* value5_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,8));
		if( !value5_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value5 in osg::ArgumentParser::read function");
		}
		osg::ArgumentParser::Parameter value5=*value5_ptr;
		osg::ArgumentParser::Parameter* value6_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,9));
		if( !value6_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value6 in osg::ArgumentParser::read function");
		}
		osg::ArgumentParser::Parameter value6=*value6_ptr;
		osg::ArgumentParser::Parameter* value7_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,10));
		if( !value7_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value7 in osg::ArgumentParser::read function");
		}
		osg::ArgumentParser::Parameter value7=*value7_ptr;
		osg::ArgumentParser::Parameter* value8_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,11));
		if( !value8_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value8 in osg::ArgumentParser::read function");
		}
		osg::ArgumentParser::Parameter value8=*value8_ptr;

		osg::ArgumentParser* self=(Luna< osg::ArgumentParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::ArgumentParser::read(int, const std::string &, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter). Got : '%s'\n%s",typeid(Luna< osg::ArgumentParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->read(pos, str, value1, value2, value3, value4, value5, value6, value7, value8);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for osg::ArgumentParser::read
	static int _bind_read(lua_State *L) {
		if (_lg_typecheck_read_overload_1(L)) return _bind_read_overload_1(L);
		if (_lg_typecheck_read_overload_2(L)) return _bind_read_overload_2(L);
		if (_lg_typecheck_read_overload_3(L)) return _bind_read_overload_3(L);
		if (_lg_typecheck_read_overload_4(L)) return _bind_read_overload_4(L);
		if (_lg_typecheck_read_overload_5(L)) return _bind_read_overload_5(L);
		if (_lg_typecheck_read_overload_6(L)) return _bind_read_overload_6(L);
		if (_lg_typecheck_read_overload_7(L)) return _bind_read_overload_7(L);
		if (_lg_typecheck_read_overload_8(L)) return _bind_read_overload_8(L);
		if (_lg_typecheck_read_overload_9(L)) return _bind_read_overload_9(L);
		if (_lg_typecheck_read_overload_10(L)) return _bind_read_overload_10(L);
		if (_lg_typecheck_read_overload_11(L)) return _bind_read_overload_11(L);
		if (_lg_typecheck_read_overload_12(L)) return _bind_read_overload_12(L);
		if (_lg_typecheck_read_overload_13(L)) return _bind_read_overload_13(L);
		if (_lg_typecheck_read_overload_14(L)) return _bind_read_overload_14(L);
		if (_lg_typecheck_read_overload_15(L)) return _bind_read_overload_15(L);
		if (_lg_typecheck_read_overload_16(L)) return _bind_read_overload_16(L);
		if (_lg_typecheck_read_overload_17(L)) return _bind_read_overload_17(L);
		if (_lg_typecheck_read_overload_18(L)) return _bind_read_overload_18(L);

		luaL_error(L, "error in function read, cannot match any of the overloads for function read:\n  read(const std::string &)\n  read(const std::string &, osg::ArgumentParser::Parameter)\n  read(const std::string &, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter)\n  read(const std::string &, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter)\n  read(const std::string &, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter)\n  read(const std::string &, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter)\n  read(const std::string &, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter)\n  read(const std::string &, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter)\n  read(const std::string &, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter)\n  read(int, const std::string &)\n  read(int, const std::string &, osg::ArgumentParser::Parameter)\n  read(int, const std::string &, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter)\n  read(int, const std::string &, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter)\n  read(int, const std::string &, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter)\n  read(int, const std::string &, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter)\n  read(int, const std::string &, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter)\n  read(int, const std::string &, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter)\n  read(int, const std::string &, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter)\n");
		return 0;
	}

	// bool osg::ArgumentParser::errors(osg::ArgumentParser::ErrorSeverity severity = osg::ArgumentParser::BENIGN) const
	static int _bind_errors(lua_State *L) {
		if (!_lg_typecheck_errors(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::ArgumentParser::errors(osg::ArgumentParser::ErrorSeverity severity = osg::ArgumentParser::BENIGN) const function, expected prototype:\nbool osg::ArgumentParser::errors(osg::ArgumentParser::ErrorSeverity severity = osg::ArgumentParser::BENIGN) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::ArgumentParser::ErrorSeverity severity=luatop>1 ? (osg::ArgumentParser::ErrorSeverity)lua_tointeger(L,2) : (osg::ArgumentParser::ErrorSeverity)osg::ArgumentParser::BENIGN;

		osg::ArgumentParser* self=(Luna< osg::ArgumentParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::ArgumentParser::errors(osg::ArgumentParser::ErrorSeverity) const. Got : '%s'\n%s",typeid(Luna< osg::ArgumentParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->errors(severity);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::ArgumentParser::reportError(const std::string & message, osg::ArgumentParser::ErrorSeverity severity = osg::ArgumentParser::CRITICAL)
	static int _bind_reportError(lua_State *L) {
		if (!_lg_typecheck_reportError(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ArgumentParser::reportError(const std::string & message, osg::ArgumentParser::ErrorSeverity severity = osg::ArgumentParser::CRITICAL) function, expected prototype:\nvoid osg::ArgumentParser::reportError(const std::string & message, osg::ArgumentParser::ErrorSeverity severity = osg::ArgumentParser::CRITICAL)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		std::string message(lua_tostring(L,2),lua_objlen(L,2));
		osg::ArgumentParser::ErrorSeverity severity=luatop>2 ? (osg::ArgumentParser::ErrorSeverity)lua_tointeger(L,3) : (osg::ArgumentParser::ErrorSeverity)osg::ArgumentParser::CRITICAL;

		osg::ArgumentParser* self=(Luna< osg::ArgumentParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ArgumentParser::reportError(const std::string &, osg::ArgumentParser::ErrorSeverity). Got : '%s'\n%s",typeid(Luna< osg::ArgumentParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->reportError(message, severity);

		return 0;
	}

	// void osg::ArgumentParser::reportRemainingOptionsAsUnrecognized(osg::ArgumentParser::ErrorSeverity severity = osg::ArgumentParser::BENIGN)
	static int _bind_reportRemainingOptionsAsUnrecognized(lua_State *L) {
		if (!_lg_typecheck_reportRemainingOptionsAsUnrecognized(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ArgumentParser::reportRemainingOptionsAsUnrecognized(osg::ArgumentParser::ErrorSeverity severity = osg::ArgumentParser::BENIGN) function, expected prototype:\nvoid osg::ArgumentParser::reportRemainingOptionsAsUnrecognized(osg::ArgumentParser::ErrorSeverity severity = osg::ArgumentParser::BENIGN)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::ArgumentParser::ErrorSeverity severity=luatop>1 ? (osg::ArgumentParser::ErrorSeverity)lua_tointeger(L,2) : (osg::ArgumentParser::ErrorSeverity)osg::ArgumentParser::BENIGN;

		osg::ArgumentParser* self=(Luna< osg::ArgumentParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ArgumentParser::reportRemainingOptionsAsUnrecognized(osg::ArgumentParser::ErrorSeverity). Got : '%s'\n%s",typeid(Luna< osg::ArgumentParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->reportRemainingOptionsAsUnrecognized(severity);

		return 0;
	}

	// osg::ArgumentParser::ErrorMessageMap & osg::ArgumentParser::getErrorMessageMap()
	static int _bind_getErrorMessageMap_overload_1(lua_State *L) {
		if (!_lg_typecheck_getErrorMessageMap_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::ArgumentParser::ErrorMessageMap & osg::ArgumentParser::getErrorMessageMap() function, expected prototype:\nosg::ArgumentParser::ErrorMessageMap & osg::ArgumentParser::getErrorMessageMap()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ArgumentParser* self=(Luna< osg::ArgumentParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::ArgumentParser::ErrorMessageMap & osg::ArgumentParser::getErrorMessageMap(). Got : '%s'\n%s",typeid(Luna< osg::ArgumentParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::ArgumentParser::ErrorMessageMap* lret = &self->getErrorMessageMap();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::ArgumentParser::ErrorMessageMap >::push(L,lret,false);

		return 1;
	}

	// const osg::ArgumentParser::ErrorMessageMap & osg::ArgumentParser::getErrorMessageMap() const
	static int _bind_getErrorMessageMap_overload_2(lua_State *L) {
		if (!_lg_typecheck_getErrorMessageMap_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::ArgumentParser::ErrorMessageMap & osg::ArgumentParser::getErrorMessageMap() const function, expected prototype:\nconst osg::ArgumentParser::ErrorMessageMap & osg::ArgumentParser::getErrorMessageMap() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ArgumentParser* self=(Luna< osg::ArgumentParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::ArgumentParser::ErrorMessageMap & osg::ArgumentParser::getErrorMessageMap() const. Got : '%s'\n%s",typeid(Luna< osg::ArgumentParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::ArgumentParser::ErrorMessageMap* lret = &self->getErrorMessageMap();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::ArgumentParser::ErrorMessageMap >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::ArgumentParser::getErrorMessageMap
	static int _bind_getErrorMessageMap(lua_State *L) {
		if (_lg_typecheck_getErrorMessageMap_overload_1(L)) return _bind_getErrorMessageMap_overload_1(L);
		if (_lg_typecheck_getErrorMessageMap_overload_2(L)) return _bind_getErrorMessageMap_overload_2(L);

		luaL_error(L, "error in function getErrorMessageMap, cannot match any of the overloads for function getErrorMessageMap:\n  getErrorMessageMap()\n  getErrorMessageMap()\n");
		return 0;
	}

	// void osg::ArgumentParser::writeErrorMessages(std::ostream & output, osg::ArgumentParser::ErrorSeverity sevrity = osg::ArgumentParser::BENIGN)
	static int _bind_writeErrorMessages(lua_State *L) {
		if (!_lg_typecheck_writeErrorMessages(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ArgumentParser::writeErrorMessages(std::ostream & output, osg::ArgumentParser::ErrorSeverity sevrity = osg::ArgumentParser::BENIGN) function, expected prototype:\nvoid osg::ArgumentParser::writeErrorMessages(std::ostream & output, osg::ArgumentParser::ErrorSeverity sevrity = osg::ArgumentParser::BENIGN)\nClass arguments details:\narg 1 ID = 2993706\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		std::ostream* output_ptr=(Luna< std::ostream >::check(L,2));
		if( !output_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg output in osg::ArgumentParser::writeErrorMessages function");
		}
		std::ostream & output=*output_ptr;
		osg::ArgumentParser::ErrorSeverity sevrity=luatop>2 ? (osg::ArgumentParser::ErrorSeverity)lua_tointeger(L,3) : (osg::ArgumentParser::ErrorSeverity)osg::ArgumentParser::BENIGN;

		osg::ArgumentParser* self=(Luna< osg::ArgumentParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ArgumentParser::writeErrorMessages(std::ostream &, osg::ArgumentParser::ErrorSeverity). Got : '%s'\n%s",typeid(Luna< osg::ArgumentParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->writeErrorMessages(output, sevrity);

		return 0;
	}

	// osg::ApplicationUsage::Type osg::ArgumentParser::readHelpType()
	static int _bind_readHelpType(lua_State *L) {
		if (!_lg_typecheck_readHelpType(L)) {
			luaL_error(L, "luna typecheck failed in osg::ApplicationUsage::Type osg::ArgumentParser::readHelpType() function, expected prototype:\nosg::ApplicationUsage::Type osg::ArgumentParser::readHelpType()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ArgumentParser* self=(Luna< osg::ArgumentParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::ApplicationUsage::Type osg::ArgumentParser::readHelpType(). Got : '%s'\n%s",typeid(Luna< osg::ArgumentParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::ApplicationUsage::Type lret = self->readHelpType();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:
	// char * osg::ArgumentParser::operator[](int pos)
	static int _bind_op_index_overload_1(lua_State *L) {
		if (!_lg_typecheck_op_index_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in char * osg::ArgumentParser::operator[](int pos) function, expected prototype:\nchar * osg::ArgumentParser::operator[](int pos)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int pos=(int)lua_tointeger(L,2);

		osg::ArgumentParser* self=(Luna< osg::ArgumentParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call char * osg::ArgumentParser::operator[](int). Got : '%s'\n%s",typeid(Luna< osg::ArgumentParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		char * lret = self->operator[](pos);
		lua_pushnumber(L,*lret);

		return 1;
	}

	// const char * osg::ArgumentParser::operator[](int pos) const
	static int _bind_op_index_overload_2(lua_State *L) {
		if (!_lg_typecheck_op_index_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::ArgumentParser::operator[](int pos) const function, expected prototype:\nconst char * osg::ArgumentParser::operator[](int pos) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int pos=(int)lua_tointeger(L,2);

		osg::ArgumentParser* self=(Luna< osg::ArgumentParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::ArgumentParser::operator[](int) const. Got : '%s'\n%s",typeid(Luna< osg::ArgumentParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->operator[](pos);
		lua_pushstring(L,lret);

		return 1;
	}

	// Overload binder for osg::ArgumentParser::operator[]
	static int _bind_op_index(lua_State *L) {
		if (_lg_typecheck_op_index_overload_1(L)) return _bind_op_index_overload_1(L);
		if (_lg_typecheck_op_index_overload_2(L)) return _bind_op_index_overload_2(L);

		luaL_error(L, "error in function operator[], cannot match any of the overloads for function operator[]:\n  operator[](int)\n  operator[](int)\n");
		return 0;
	}


};

osg::ArgumentParser* LunaTraits< osg::ArgumentParser >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::ArgumentParser >::_bind_dtor(osg::ArgumentParser* obj) {
	delete obj;
}

const char LunaTraits< osg::ArgumentParser >::className[] = "ArgumentParser";
const char LunaTraits< osg::ArgumentParser >::fullName[] = "osg::ArgumentParser";
const char LunaTraits< osg::ArgumentParser >::moduleName[] = "osg";
const char* LunaTraits< osg::ArgumentParser >::parents[] = {0};
const int LunaTraits< osg::ArgumentParser >::hash = 99527028;
const int LunaTraits< osg::ArgumentParser >::uniqueIDs[] = {99527028,0};

luna_RegType LunaTraits< osg::ArgumentParser >::methods[] = {
	{"isOption", &luna_wrapper_osg_ArgumentParser::_bind_isOption},
	{"isString", &luna_wrapper_osg_ArgumentParser::_bind_isString},
	{"isNumber", &luna_wrapper_osg_ArgumentParser::_bind_isNumber},
	{"isBool", &luna_wrapper_osg_ArgumentParser::_bind_isBool},
	{"setApplicationUsage", &luna_wrapper_osg_ArgumentParser::_bind_setApplicationUsage},
	{"getApplicationUsage", &luna_wrapper_osg_ArgumentParser::_bind_getApplicationUsage},
	{"argc", &luna_wrapper_osg_ArgumentParser::_bind_argc},
	{"getApplicationName", &luna_wrapper_osg_ArgumentParser::_bind_getApplicationName},
	{"find", &luna_wrapper_osg_ArgumentParser::_bind_find},
	{"containsOptions", &luna_wrapper_osg_ArgumentParser::_bind_containsOptions},
	{"remove", &luna_wrapper_osg_ArgumentParser::_bind_remove},
	{"match", &luna_wrapper_osg_ArgumentParser::_bind_match},
	{"read", &luna_wrapper_osg_ArgumentParser::_bind_read},
	{"errors", &luna_wrapper_osg_ArgumentParser::_bind_errors},
	{"reportError", &luna_wrapper_osg_ArgumentParser::_bind_reportError},
	{"reportRemainingOptionsAsUnrecognized", &luna_wrapper_osg_ArgumentParser::_bind_reportRemainingOptionsAsUnrecognized},
	{"getErrorMessageMap", &luna_wrapper_osg_ArgumentParser::_bind_getErrorMessageMap},
	{"writeErrorMessages", &luna_wrapper_osg_ArgumentParser::_bind_writeErrorMessages},
	{"readHelpType", &luna_wrapper_osg_ArgumentParser::_bind_readHelpType},
	{"op_index", &luna_wrapper_osg_ArgumentParser::_bind_op_index},
	{"dynCast", &luna_wrapper_osg_ArgumentParser::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_ArgumentParser::_bind___eq},
	{"fromVoid", &luna_wrapper_osg_ArgumentParser::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_ArgumentParser::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ArgumentParser >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ArgumentParser >::enumValues[] = {
	{"BENIGN", osg::ArgumentParser::BENIGN},
	{"CRITICAL", osg::ArgumentParser::CRITICAL},
	{0,0}
};



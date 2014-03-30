#include <plug_common.h>

class luna_wrapper_osgDB_FileNameComparator {
public:
	typedef Luna< osgDB::FileNameComparator > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,90030317) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgDB::FileNameComparator*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::FileNameComparator* rhs =(Luna< osgDB::FileNameComparator >::check(L,2));
		osgDB::FileNameComparator* self=(Luna< osgDB::FileNameComparator >::check(L,1));
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

		osgDB::FileNameComparator* self= (osgDB::FileNameComparator*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgDB::FileNameComparator >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,90030317) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osgDB::FileNameComparator >::check(L,1));
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

		osgDB::FileNameComparator* self=(Luna< osgDB::FileNameComparator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgDB::FileNameComparator");
		
		return luna_dynamicCast(L,converters,"osgDB::FileNameComparator",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck_op_call(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}


	// Constructor binds:

	// Function binds:

	// Operator binds:
	// bool osgDB::FileNameComparator::operator()(const std::string & lhs, const std::string & rhs) const
	static int _bind_op_call(lua_State *L) {
		if (!_lg_typecheck_op_call(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::FileNameComparator::operator()(const std::string & lhs, const std::string & rhs) const function, expected prototype:\nbool osgDB::FileNameComparator::operator()(const std::string & lhs, const std::string & rhs) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string lhs(lua_tostring(L,2),lua_objlen(L,2));
		std::string rhs(lua_tostring(L,3),lua_objlen(L,3));

		osgDB::FileNameComparator* self=(Luna< osgDB::FileNameComparator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::FileNameComparator::operator()(const std::string &, const std::string &) const. Got : '%s'\n%s",typeid(Luna< osgDB::FileNameComparator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator()(lhs, rhs);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

osgDB::FileNameComparator* LunaTraits< osgDB::FileNameComparator >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osgDB::FileNameComparator >::_bind_dtor(osgDB::FileNameComparator* obj) {
	delete obj;
}

const char LunaTraits< osgDB::FileNameComparator >::className[] = "FileNameComparator";
const char LunaTraits< osgDB::FileNameComparator >::fullName[] = "osgDB::FileNameComparator";
const char LunaTraits< osgDB::FileNameComparator >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::FileNameComparator >::parents[] = {0};
const int LunaTraits< osgDB::FileNameComparator >::hash = 90030317;
const int LunaTraits< osgDB::FileNameComparator >::uniqueIDs[] = {90030317,0};

luna_RegType LunaTraits< osgDB::FileNameComparator >::methods[] = {
	{"op_call", &luna_wrapper_osgDB_FileNameComparator::_bind_op_call},
	{"dynCast", &luna_wrapper_osgDB_FileNameComparator::_bind_dynCast},
	{"__eq", &luna_wrapper_osgDB_FileNameComparator::_bind___eq},
	{"fromVoid", &luna_wrapper_osgDB_FileNameComparator::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgDB_FileNameComparator::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::FileNameComparator >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::FileNameComparator >::enumValues[] = {
	{0,0}
};



#include <plug_common.h>

class luna_wrapper_mfs_file {
public:
	typedef Luna< mfs_file > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,83387491) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(mfs_file*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		mfs_file* rhs =(Luna< mfs_file >::check(L,2));
		mfs_file* self=(Luna< mfs_file >::check(L,1));
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

		mfs_file* self= (mfs_file*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< mfs_file >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,83387491) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< mfs_file >::check(L,1));
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

		mfs_file* self=(Luna< mfs_file >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("mfs_file");
		
		return luna_dynamicCast(L,converters,"mfs_file",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getBuf(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_buf_off(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_buf_size(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_buf_mode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_buf_open(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setBuf(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_buf_off(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_buf_size(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_buf_mode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_buf_open(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// char * mfs_file::buf()
	static int _bind_getBuf(lua_State *L) {
		if (!_lg_typecheck_getBuf(L)) {
			luaL_error(L, "luna typecheck failed in char * mfs_file::buf() function, expected prototype:\nchar * mfs_file::buf()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mfs_file* self=(Luna< mfs_file >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call char * mfs_file::buf(). Got : '%s'\n%s",typeid(Luna< mfs_file >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		char * lret = self->buf;
		lua_pushnumber(L,*lret);

		return 1;
	}

	// long mfs_file::buf_off()
	static int _bind_get_buf_off(lua_State *L) {
		if (!_lg_typecheck_get_buf_off(L)) {
			luaL_error(L, "luna typecheck failed in long mfs_file::buf_off() function, expected prototype:\nlong mfs_file::buf_off()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mfs_file* self=(Luna< mfs_file >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long mfs_file::buf_off(). Got : '%s'\n%s",typeid(Luna< mfs_file >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->buf_off;
		lua_pushnumber(L,lret);

		return 1;
	}

	// long mfs_file::buf_size()
	static int _bind_get_buf_size(lua_State *L) {
		if (!_lg_typecheck_get_buf_size(L)) {
			luaL_error(L, "luna typecheck failed in long mfs_file::buf_size() function, expected prototype:\nlong mfs_file::buf_size()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mfs_file* self=(Luna< mfs_file >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long mfs_file::buf_size(). Got : '%s'\n%s",typeid(Luna< mfs_file >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->buf_size;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int mfs_file::buf_mode()
	static int _bind_get_buf_mode(lua_State *L) {
		if (!_lg_typecheck_get_buf_mode(L)) {
			luaL_error(L, "luna typecheck failed in int mfs_file::buf_mode() function, expected prototype:\nint mfs_file::buf_mode()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mfs_file* self=(Luna< mfs_file >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int mfs_file::buf_mode(). Got : '%s'\n%s",typeid(Luna< mfs_file >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->buf_mode;
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool mfs_file::buf_open()
	static int _bind_get_buf_open(lua_State *L) {
		if (!_lg_typecheck_get_buf_open(L)) {
			luaL_error(L, "luna typecheck failed in bool mfs_file::buf_open() function, expected prototype:\nbool mfs_file::buf_open()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mfs_file* self=(Luna< mfs_file >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool mfs_file::buf_open(). Got : '%s'\n%s",typeid(Luna< mfs_file >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->buf_open;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void mfs_file::buf(char * value)
	static int _bind_setBuf(lua_State *L) {
		if (!_lg_typecheck_setBuf(L)) {
			luaL_error(L, "luna typecheck failed in void mfs_file::buf(char * value) function, expected prototype:\nvoid mfs_file::buf(char * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		char* value=(char*)Luna< void >::check(L,2);

		mfs_file* self=(Luna< mfs_file >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void mfs_file::buf(char *). Got : '%s'\n%s",typeid(Luna< mfs_file >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->buf = value;

		return 0;
	}

	// void mfs_file::buf_off(long value)
	static int _bind_set_buf_off(lua_State *L) {
		if (!_lg_typecheck_set_buf_off(L)) {
			luaL_error(L, "luna typecheck failed in void mfs_file::buf_off(long value) function, expected prototype:\nvoid mfs_file::buf_off(long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long value=(long)lua_tonumber(L,2);

		mfs_file* self=(Luna< mfs_file >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void mfs_file::buf_off(long). Got : '%s'\n%s",typeid(Luna< mfs_file >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->buf_off = value;

		return 0;
	}

	// void mfs_file::buf_size(long value)
	static int _bind_set_buf_size(lua_State *L) {
		if (!_lg_typecheck_set_buf_size(L)) {
			luaL_error(L, "luna typecheck failed in void mfs_file::buf_size(long value) function, expected prototype:\nvoid mfs_file::buf_size(long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long value=(long)lua_tonumber(L,2);

		mfs_file* self=(Luna< mfs_file >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void mfs_file::buf_size(long). Got : '%s'\n%s",typeid(Luna< mfs_file >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->buf_size = value;

		return 0;
	}

	// void mfs_file::buf_mode(int value)
	static int _bind_set_buf_mode(lua_State *L) {
		if (!_lg_typecheck_set_buf_mode(L)) {
			luaL_error(L, "luna typecheck failed in void mfs_file::buf_mode(int value) function, expected prototype:\nvoid mfs_file::buf_mode(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		mfs_file* self=(Luna< mfs_file >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void mfs_file::buf_mode(int). Got : '%s'\n%s",typeid(Luna< mfs_file >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->buf_mode = value;

		return 0;
	}

	// void mfs_file::buf_open(bool value)
	static int _bind_set_buf_open(lua_State *L) {
		if (!_lg_typecheck_set_buf_open(L)) {
			luaL_error(L, "luna typecheck failed in void mfs_file::buf_open(bool value) function, expected prototype:\nvoid mfs_file::buf_open(bool value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		mfs_file* self=(Luna< mfs_file >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void mfs_file::buf_open(bool). Got : '%s'\n%s",typeid(Luna< mfs_file >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->buf_open = value;

		return 0;
	}


	// Operator binds:

};

mfs_file* LunaTraits< mfs_file >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< mfs_file >::_bind_dtor(mfs_file* obj) {
	delete obj;
}

const char LunaTraits< mfs_file >::className[] = "mfs_file";
const char LunaTraits< mfs_file >::fullName[] = "mfs_file";
const char LunaTraits< mfs_file >::moduleName[] = "land";
const char* LunaTraits< mfs_file >::parents[] = {0};
const int LunaTraits< mfs_file >::hash = 83387491;
const int LunaTraits< mfs_file >::uniqueIDs[] = {83387491,0};

luna_RegType LunaTraits< mfs_file >::methods[] = {
	{"getBuf", &luna_wrapper_mfs_file::_bind_getBuf},
	{"get_buf_off", &luna_wrapper_mfs_file::_bind_get_buf_off},
	{"get_buf_size", &luna_wrapper_mfs_file::_bind_get_buf_size},
	{"get_buf_mode", &luna_wrapper_mfs_file::_bind_get_buf_mode},
	{"get_buf_open", &luna_wrapper_mfs_file::_bind_get_buf_open},
	{"setBuf", &luna_wrapper_mfs_file::_bind_setBuf},
	{"set_buf_off", &luna_wrapper_mfs_file::_bind_set_buf_off},
	{"set_buf_size", &luna_wrapper_mfs_file::_bind_set_buf_size},
	{"set_buf_mode", &luna_wrapper_mfs_file::_bind_set_buf_mode},
	{"set_buf_open", &luna_wrapper_mfs_file::_bind_set_buf_open},
	{"dynCast", &luna_wrapper_mfs_file::_bind_dynCast},
	{"__eq", &luna_wrapper_mfs_file::_bind___eq},
	{"fromVoid", &luna_wrapper_mfs_file::_bind_fromVoid},
	{"asVoid", &luna_wrapper_mfs_file::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< mfs_file >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< mfs_file >::enumValues[] = {
	{0,0}
};



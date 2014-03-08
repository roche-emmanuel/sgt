#include <plug_common.h>

class luna_wrapper_osgDB_ExternalFileWriter_ObjectData {
public:
	typedef Luna< osgDB::ExternalFileWriter::ObjectData > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50545385) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgDB::ExternalFileWriter::ObjectData*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::ExternalFileWriter::ObjectData* rhs =(Luna< osgDB::ExternalFileWriter::ObjectData >::check(L,2));
		osgDB::ExternalFileWriter::ObjectData* self=(Luna< osgDB::ExternalFileWriter::ObjectData >::check(L,1));
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

		osgDB::ExternalFileWriter::ObjectData* self= (osgDB::ExternalFileWriter::ObjectData*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgDB::ExternalFileWriter::ObjectData >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50545385) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osgDB::ExternalFileWriter::ObjectData >::check(L,1));
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

		osgDB::ExternalFileWriter::ObjectData* self=(Luna< osgDB::ExternalFileWriter::ObjectData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgDB::ExternalFileWriter::ObjectData");
		
		return luna_dynamicCast(L,converters,"osgDB::ExternalFileWriter::ObjectData",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getAbsolutePath(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRelativePath(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getWritten(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setAbsolutePath(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRelativePath(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setWritten(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgDB::ExternalFileWriter::ObjectData::ObjectData()
	static osgDB::ExternalFileWriter::ObjectData* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ExternalFileWriter::ObjectData::ObjectData() function, expected prototype:\nosgDB::ExternalFileWriter::ObjectData::ObjectData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osgDB::ExternalFileWriter::ObjectData();
	}

	// osgDB::ExternalFileWriter::ObjectData::ObjectData(const std::string & absolutePath, const std::string & relativePath, bool written)
	static osgDB::ExternalFileWriter::ObjectData* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ExternalFileWriter::ObjectData::ObjectData(const std::string & absolutePath, const std::string & relativePath, bool written) function, expected prototype:\nosgDB::ExternalFileWriter::ObjectData::ObjectData(const std::string & absolutePath, const std::string & relativePath, bool written)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string absolutePath(lua_tostring(L,1),lua_objlen(L,1));
		std::string relativePath(lua_tostring(L,2),lua_objlen(L,2));
		bool written=(bool)(lua_toboolean(L,3)==1);

		return new osgDB::ExternalFileWriter::ObjectData(absolutePath, relativePath, written);
	}

	// Overload binder for osgDB::ExternalFileWriter::ObjectData::ObjectData
	static osgDB::ExternalFileWriter::ObjectData* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function ObjectData, cannot match any of the overloads for function ObjectData:\n  ObjectData()\n  ObjectData(const std::string &, const std::string &, bool)\n");
		return NULL;
	}


	// Function binds:
	// std::string osgDB::ExternalFileWriter::ObjectData::absolutePath()
	static int _bind_getAbsolutePath(lua_State *L) {
		if (!_lg_typecheck_getAbsolutePath(L)) {
			luaL_error(L, "luna typecheck failed in std::string osgDB::ExternalFileWriter::ObjectData::absolutePath() function, expected prototype:\nstd::string osgDB::ExternalFileWriter::ObjectData::absolutePath()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ExternalFileWriter::ObjectData* self=(Luna< osgDB::ExternalFileWriter::ObjectData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call std::string osgDB::ExternalFileWriter::ObjectData::absolutePath(). Got : '%s'\n%s",typeid(Luna< osgDB::ExternalFileWriter::ObjectData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		std::string lret = self->absolutePath;
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// std::string osgDB::ExternalFileWriter::ObjectData::relativePath()
	static int _bind_getRelativePath(lua_State *L) {
		if (!_lg_typecheck_getRelativePath(L)) {
			luaL_error(L, "luna typecheck failed in std::string osgDB::ExternalFileWriter::ObjectData::relativePath() function, expected prototype:\nstd::string osgDB::ExternalFileWriter::ObjectData::relativePath()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ExternalFileWriter::ObjectData* self=(Luna< osgDB::ExternalFileWriter::ObjectData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call std::string osgDB::ExternalFileWriter::ObjectData::relativePath(). Got : '%s'\n%s",typeid(Luna< osgDB::ExternalFileWriter::ObjectData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		std::string lret = self->relativePath;
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool osgDB::ExternalFileWriter::ObjectData::written()
	static int _bind_getWritten(lua_State *L) {
		if (!_lg_typecheck_getWritten(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::ExternalFileWriter::ObjectData::written() function, expected prototype:\nbool osgDB::ExternalFileWriter::ObjectData::written()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ExternalFileWriter::ObjectData* self=(Luna< osgDB::ExternalFileWriter::ObjectData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::ExternalFileWriter::ObjectData::written(). Got : '%s'\n%s",typeid(Luna< osgDB::ExternalFileWriter::ObjectData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->written;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgDB::ExternalFileWriter::ObjectData::absolutePath(std::string value)
	static int _bind_setAbsolutePath(lua_State *L) {
		if (!_lg_typecheck_setAbsolutePath(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::ExternalFileWriter::ObjectData::absolutePath(std::string value) function, expected prototype:\nvoid osgDB::ExternalFileWriter::ObjectData::absolutePath(std::string value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string value(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::ExternalFileWriter::ObjectData* self=(Luna< osgDB::ExternalFileWriter::ObjectData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::ExternalFileWriter::ObjectData::absolutePath(std::string). Got : '%s'\n%s",typeid(Luna< osgDB::ExternalFileWriter::ObjectData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->absolutePath = value;

		return 0;
	}

	// void osgDB::ExternalFileWriter::ObjectData::relativePath(std::string value)
	static int _bind_setRelativePath(lua_State *L) {
		if (!_lg_typecheck_setRelativePath(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::ExternalFileWriter::ObjectData::relativePath(std::string value) function, expected prototype:\nvoid osgDB::ExternalFileWriter::ObjectData::relativePath(std::string value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string value(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::ExternalFileWriter::ObjectData* self=(Luna< osgDB::ExternalFileWriter::ObjectData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::ExternalFileWriter::ObjectData::relativePath(std::string). Got : '%s'\n%s",typeid(Luna< osgDB::ExternalFileWriter::ObjectData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->relativePath = value;

		return 0;
	}

	// void osgDB::ExternalFileWriter::ObjectData::written(bool value)
	static int _bind_setWritten(lua_State *L) {
		if (!_lg_typecheck_setWritten(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::ExternalFileWriter::ObjectData::written(bool value) function, expected prototype:\nvoid osgDB::ExternalFileWriter::ObjectData::written(bool value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		osgDB::ExternalFileWriter::ObjectData* self=(Luna< osgDB::ExternalFileWriter::ObjectData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::ExternalFileWriter::ObjectData::written(bool). Got : '%s'\n%s",typeid(Luna< osgDB::ExternalFileWriter::ObjectData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->written = value;

		return 0;
	}


	// Operator binds:

};

osgDB::ExternalFileWriter::ObjectData* LunaTraits< osgDB::ExternalFileWriter::ObjectData >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgDB_ExternalFileWriter_ObjectData::_bind_ctor(L);
}

void LunaTraits< osgDB::ExternalFileWriter::ObjectData >::_bind_dtor(osgDB::ExternalFileWriter::ObjectData* obj) {
	delete obj;
}

const char LunaTraits< osgDB::ExternalFileWriter::ObjectData >::className[] = "ExternalFileWriter_ObjectData";
const char LunaTraits< osgDB::ExternalFileWriter::ObjectData >::fullName[] = "osgDB::ExternalFileWriter::ObjectData";
const char LunaTraits< osgDB::ExternalFileWriter::ObjectData >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::ExternalFileWriter::ObjectData >::parents[] = {0};
const int LunaTraits< osgDB::ExternalFileWriter::ObjectData >::hash = 50545385;
const int LunaTraits< osgDB::ExternalFileWriter::ObjectData >::uniqueIDs[] = {50545385,0};

luna_RegType LunaTraits< osgDB::ExternalFileWriter::ObjectData >::methods[] = {
	{"getAbsolutePath", &luna_wrapper_osgDB_ExternalFileWriter_ObjectData::_bind_getAbsolutePath},
	{"getRelativePath", &luna_wrapper_osgDB_ExternalFileWriter_ObjectData::_bind_getRelativePath},
	{"getWritten", &luna_wrapper_osgDB_ExternalFileWriter_ObjectData::_bind_getWritten},
	{"setAbsolutePath", &luna_wrapper_osgDB_ExternalFileWriter_ObjectData::_bind_setAbsolutePath},
	{"setRelativePath", &luna_wrapper_osgDB_ExternalFileWriter_ObjectData::_bind_setRelativePath},
	{"setWritten", &luna_wrapper_osgDB_ExternalFileWriter_ObjectData::_bind_setWritten},
	{"dynCast", &luna_wrapper_osgDB_ExternalFileWriter_ObjectData::_bind_dynCast},
	{"__eq", &luna_wrapper_osgDB_ExternalFileWriter_ObjectData::_bind___eq},
	{"fromVoid", &luna_wrapper_osgDB_ExternalFileWriter_ObjectData::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgDB_ExternalFileWriter_ObjectData::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::ExternalFileWriter::ObjectData >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::ExternalFileWriter::ObjectData >::enumValues[] = {
	{0,0}
};



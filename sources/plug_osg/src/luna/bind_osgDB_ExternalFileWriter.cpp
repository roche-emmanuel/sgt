#include <plug_common.h>

class luna_wrapper_osgDB_ExternalFileWriter {
public:
	typedef Luna< osgDB::ExternalFileWriter > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,48602626) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgDB::ExternalFileWriter*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::ExternalFileWriter* rhs =(Luna< osgDB::ExternalFileWriter >::check(L,2));
		osgDB::ExternalFileWriter* self=(Luna< osgDB::ExternalFileWriter >::check(L,1));
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

		osgDB::ExternalFileWriter* self= (osgDB::ExternalFileWriter*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgDB::ExternalFileWriter >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,48602626) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osgDB::ExternalFileWriter >::check(L,1));
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

		osgDB::ExternalFileWriter* self=(Luna< osgDB::ExternalFileWriter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgDB::ExternalFileWriter");
		
		return luna_dynamicCast(L,converters,"osgDB::ExternalFileWriter",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_write(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TSTRING ) return false;
		if( luatop>4 && lua_type(L,5)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getObjects(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgDB::ExternalFileWriter::ExternalFileWriter(const std::string & srcDirectory, const std::string & destDirectory, bool keepRelativePaths, unsigned int allowUpDirs = 0)
	static osgDB::ExternalFileWriter* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ExternalFileWriter::ExternalFileWriter(const std::string & srcDirectory, const std::string & destDirectory, bool keepRelativePaths, unsigned int allowUpDirs = 0) function, expected prototype:\nosgDB::ExternalFileWriter::ExternalFileWriter(const std::string & srcDirectory, const std::string & destDirectory, bool keepRelativePaths, unsigned int allowUpDirs = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		std::string srcDirectory(lua_tostring(L,1),lua_objlen(L,1));
		std::string destDirectory(lua_tostring(L,2),lua_objlen(L,2));
		bool keepRelativePaths=(bool)(lua_toboolean(L,3)==1);
		unsigned int allowUpDirs=luatop>3 ? (unsigned int)lua_tointeger(L,4) : (unsigned int)0;

		return new osgDB::ExternalFileWriter(srcDirectory, destDirectory, keepRelativePaths, allowUpDirs);
	}

	// osgDB::ExternalFileWriter::ExternalFileWriter(const std::string & destDirectory)
	static osgDB::ExternalFileWriter* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ExternalFileWriter::ExternalFileWriter(const std::string & destDirectory) function, expected prototype:\nosgDB::ExternalFileWriter::ExternalFileWriter(const std::string & destDirectory)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string destDirectory(lua_tostring(L,1),lua_objlen(L,1));

		return new osgDB::ExternalFileWriter(destDirectory);
	}

	// Overload binder for osgDB::ExternalFileWriter::ExternalFileWriter
	static osgDB::ExternalFileWriter* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function ExternalFileWriter, cannot match any of the overloads for function ExternalFileWriter:\n  ExternalFileWriter(const std::string &, const std::string &, bool, unsigned int)\n  ExternalFileWriter(const std::string &)\n");
		return NULL;
	}


	// Function binds:
	// bool osgDB::ExternalFileWriter::write(const osg::Object & obj, const osgDB::Options * options, std::string * out_absolutePath = NULL, std::string * out_relativePath = NULL)
	static int _bind_write(lua_State *L) {
		if (!_lg_typecheck_write(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::ExternalFileWriter::write(const osg::Object & obj, const osgDB::Options * options, std::string * out_absolutePath = NULL, std::string * out_relativePath = NULL) function, expected prototype:\nbool osgDB::ExternalFileWriter::write(const osg::Object & obj, const osgDB::Options * options, std::string * out_absolutePath = NULL, std::string * out_relativePath = NULL)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::Object* obj_ptr=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));
		if( !obj_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg obj in osgDB::ExternalFileWriter::write function");
		}
		const osg::Object & obj=*obj_ptr;
		const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3));
		std::string out_absolutePath(lua_tostring(L,4),lua_objlen(L,4));
		std::string out_relativePath(lua_tostring(L,5),lua_objlen(L,5));

		osgDB::ExternalFileWriter* self=(Luna< osgDB::ExternalFileWriter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::ExternalFileWriter::write(const osg::Object &, const osgDB::Options *, std::string *, std::string *). Got : '%s'\n%s",typeid(Luna< osgDB::ExternalFileWriter >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->write(obj, options, &out_absolutePath, &out_relativePath);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const osgDB::ExternalFileWriter::ObjectsSet & osgDB::ExternalFileWriter::getObjects() const
	static int _bind_getObjects(lua_State *L) {
		if (!_lg_typecheck_getObjects(L)) {
			luaL_error(L, "luna typecheck failed in const osgDB::ExternalFileWriter::ObjectsSet & osgDB::ExternalFileWriter::getObjects() const function, expected prototype:\nconst osgDB::ExternalFileWriter::ObjectsSet & osgDB::ExternalFileWriter::getObjects() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ExternalFileWriter* self=(Luna< osgDB::ExternalFileWriter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgDB::ExternalFileWriter::ObjectsSet & osgDB::ExternalFileWriter::getObjects() const. Got : '%s'\n%s",typeid(Luna< osgDB::ExternalFileWriter >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::ExternalFileWriter::ObjectsSet* lret = &self->getObjects();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ExternalFileWriter::ObjectsSet >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

osgDB::ExternalFileWriter* LunaTraits< osgDB::ExternalFileWriter >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgDB_ExternalFileWriter::_bind_ctor(L);
}

void LunaTraits< osgDB::ExternalFileWriter >::_bind_dtor(osgDB::ExternalFileWriter* obj) {
	delete obj;
}

const char LunaTraits< osgDB::ExternalFileWriter >::className[] = "ExternalFileWriter";
const char LunaTraits< osgDB::ExternalFileWriter >::fullName[] = "osgDB::ExternalFileWriter";
const char LunaTraits< osgDB::ExternalFileWriter >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::ExternalFileWriter >::parents[] = {0};
const int LunaTraits< osgDB::ExternalFileWriter >::hash = 48602626;
const int LunaTraits< osgDB::ExternalFileWriter >::uniqueIDs[] = {48602626,0};

luna_RegType LunaTraits< osgDB::ExternalFileWriter >::methods[] = {
	{"write", &luna_wrapper_osgDB_ExternalFileWriter::_bind_write},
	{"getObjects", &luna_wrapper_osgDB_ExternalFileWriter::_bind_getObjects},
	{"dynCast", &luna_wrapper_osgDB_ExternalFileWriter::_bind_dynCast},
	{"__eq", &luna_wrapper_osgDB_ExternalFileWriter::_bind___eq},
	{"fromVoid", &luna_wrapper_osgDB_ExternalFileWriter::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgDB_ExternalFileWriter::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::ExternalFileWriter >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::ExternalFileWriter >::enumValues[] = {
	{0,0}
};



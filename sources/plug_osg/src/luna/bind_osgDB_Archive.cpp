#include <plug_common.h>

#include <luna/wrappers/wrapper_osgDB_Archive.h>

class luna_wrapper_osgDB_Archive {
public:
	typedef Luna< osgDB::Archive > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<osg::Referenced,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
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

		osgDB::Archive* self= (osgDB::Archive*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgDB::Archive >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		//osgDB::Archive* ptr= dynamic_cast< osgDB::Archive* >(Luna< osg::Referenced >::check(L,1));
		osgDB::Archive* ptr= luna_caster< osg::Referenced, osgDB::Archive >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgDB::Archive >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_acceptsExtension(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_close(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getArchiveFileName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMasterFileName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_fileExists(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFileType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFileNames(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,95416160) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDirectoryContents(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readObject(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readImage(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readHeightField(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readNode(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readShader(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeObject(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeImage(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeHeightField(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeNode(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeShader(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_computeDataVariance(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setUserData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getUserData_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getUserData_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_releaseGLObjects(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_cloneType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_clone(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_isSameKindAs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_supportedProtocols(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_supportedExtensions(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_supportedOptions(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_acceptsProtocol(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_supportedFeatures(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_openArchive_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,50169651)) ) return false;
		if( luatop>4 && (lua_isnil(L,5)==0 && !(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,5)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_openArchive_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,77972206) ) return false;
		if( (!(Luna< std::istream >::check(L,2))) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_acceptsExtension(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getDirectoryContents(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgDB::Archive::Archive(lua_Table * data)
	static osgDB::Archive* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::Archive::Archive(lua_Table * data) function, expected prototype:\nosgDB::Archive::Archive(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgDB_Archive(L,NULL);
	}


	// Function binds:
	// const char * osgDB::Archive::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgDB::Archive::libraryName() const function, expected prototype:\nconst char * osgDB::Archive::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::Archive* self=Luna< osg::Referenced >::checkSubType< osgDB::Archive >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgDB::Archive::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgDB::Archive::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgDB::Archive::className() const function, expected prototype:\nconst char * osgDB::Archive::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::Archive* self=Luna< osg::Referenced >::checkSubType< osgDB::Archive >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgDB::Archive::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// bool osgDB::Archive::acceptsExtension(const std::string & arg1) const
	static int _bind_acceptsExtension(lua_State *L) {
		if (!_lg_typecheck_acceptsExtension(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::Archive::acceptsExtension(const std::string & arg1) const function, expected prototype:\nbool osgDB::Archive::acceptsExtension(const std::string & arg1) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string _arg1(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::Archive* self=Luna< osg::Referenced >::checkSubType< osgDB::Archive >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::Archive::acceptsExtension(const std::string &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->acceptsExtension(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgDB::Archive::close()
	static int _bind_close(lua_State *L) {
		if (!_lg_typecheck_close(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::Archive::close() function, expected prototype:\nvoid osgDB::Archive::close()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::Archive* self=Luna< osg::Referenced >::checkSubType< osgDB::Archive >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::Archive::close(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->close();

		return 0;
	}

	// std::string osgDB::Archive::getArchiveFileName() const
	static int _bind_getArchiveFileName(lua_State *L) {
		if (!_lg_typecheck_getArchiveFileName(L)) {
			luaL_error(L, "luna typecheck failed in std::string osgDB::Archive::getArchiveFileName() const function, expected prototype:\nstd::string osgDB::Archive::getArchiveFileName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::Archive* self=Luna< osg::Referenced >::checkSubType< osgDB::Archive >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call std::string osgDB::Archive::getArchiveFileName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		std::string lret = self->getArchiveFileName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// std::string osgDB::Archive::getMasterFileName() const
	static int _bind_getMasterFileName(lua_State *L) {
		if (!_lg_typecheck_getMasterFileName(L)) {
			luaL_error(L, "luna typecheck failed in std::string osgDB::Archive::getMasterFileName() const function, expected prototype:\nstd::string osgDB::Archive::getMasterFileName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::Archive* self=Luna< osg::Referenced >::checkSubType< osgDB::Archive >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call std::string osgDB::Archive::getMasterFileName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		std::string lret = self->getMasterFileName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool osgDB::Archive::fileExists(const std::string & filename) const
	static int _bind_fileExists(lua_State *L) {
		if (!_lg_typecheck_fileExists(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::Archive::fileExists(const std::string & filename) const function, expected prototype:\nbool osgDB::Archive::fileExists(const std::string & filename) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string filename(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::Archive* self=Luna< osg::Referenced >::checkSubType< osgDB::Archive >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::Archive::fileExists(const std::string &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->fileExists(filename);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// osgDB::FileType osgDB::Archive::getFileType(const std::string & filename) const
	static int _bind_getFileType(lua_State *L) {
		if (!_lg_typecheck_getFileType(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::FileType osgDB::Archive::getFileType(const std::string & filename) const function, expected prototype:\nosgDB::FileType osgDB::Archive::getFileType(const std::string & filename) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string filename(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::Archive* self=Luna< osg::Referenced >::checkSubType< osgDB::Archive >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::FileType osgDB::Archive::getFileType(const std::string &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::FileType lret = self->getFileType(filename);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osgDB::Archive::getFileNames(osgDB::DirectoryContents & fileNames) const
	static int _bind_getFileNames(lua_State *L) {
		if (!_lg_typecheck_getFileNames(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::Archive::getFileNames(osgDB::DirectoryContents & fileNames) const function, expected prototype:\nbool osgDB::Archive::getFileNames(osgDB::DirectoryContents & fileNames) const\nClass arguments details:\narg 1 ID = 1372978\n\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::DirectoryContents* fileNames_ptr=(Luna< std::vector< std::string > >::checkSubType< osgDB::DirectoryContents >(L,2));
		if( !fileNames_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg fileNames in osgDB::Archive::getFileNames function");
		}
		osgDB::DirectoryContents & fileNames=*fileNames_ptr;

		osgDB::Archive* self=Luna< osg::Referenced >::checkSubType< osgDB::Archive >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::Archive::getFileNames(osgDB::DirectoryContents &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getFileNames(fileNames);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// osgDB::DirectoryContents osgDB::Archive::getDirectoryContents(const std::string & dirName) const
	static int _bind_getDirectoryContents(lua_State *L) {
		if (!_lg_typecheck_getDirectoryContents(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::DirectoryContents osgDB::Archive::getDirectoryContents(const std::string & dirName) const function, expected prototype:\nosgDB::DirectoryContents osgDB::Archive::getDirectoryContents(const std::string & dirName) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string dirName(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::Archive* self=Luna< osg::Referenced >::checkSubType< osgDB::Archive >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::DirectoryContents osgDB::Archive::getDirectoryContents(const std::string &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::DirectoryContents stack_lret = self->getDirectoryContents(dirName);
		osgDB::DirectoryContents* lret = new osgDB::DirectoryContents(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::DirectoryContents >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::ReadResult osgDB::Archive::readObject(const std::string & arg1, const osgDB::Options * arg2 = NULL) const
	static int _bind_readObject(lua_State *L) {
		if (!_lg_typecheck_readObject(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::ReadResult osgDB::Archive::readObject(const std::string & arg1, const osgDB::Options * arg2 = NULL) const function, expected prototype:\nosgDB::ReaderWriter::ReadResult osgDB::Archive::readObject(const std::string & arg1, const osgDB::Options * arg2 = NULL) const\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		std::string _arg1(lua_tostring(L,2),lua_objlen(L,2));
		const osgDB::Options* _arg2=luatop>2 ? (Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3)) : (const osgDB::Options*)((void *) 0);

		osgDB::Archive* self=Luna< osg::Referenced >::checkSubType< osgDB::Archive >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::ReadResult osgDB::Archive::readObject(const std::string &, const osgDB::Options *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::ReadResult stack_lret = self->readObject(_arg1, _arg2);
		osgDB::ReaderWriter::ReadResult* lret = new osgDB::ReaderWriter::ReadResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::ReadResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::ReadResult osgDB::Archive::readImage(const std::string & arg1, const osgDB::Options * arg2 = NULL) const
	static int _bind_readImage(lua_State *L) {
		if (!_lg_typecheck_readImage(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::ReadResult osgDB::Archive::readImage(const std::string & arg1, const osgDB::Options * arg2 = NULL) const function, expected prototype:\nosgDB::ReaderWriter::ReadResult osgDB::Archive::readImage(const std::string & arg1, const osgDB::Options * arg2 = NULL) const\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		std::string _arg1(lua_tostring(L,2),lua_objlen(L,2));
		const osgDB::Options* _arg2=luatop>2 ? (Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3)) : (const osgDB::Options*)((void *) 0);

		osgDB::Archive* self=Luna< osg::Referenced >::checkSubType< osgDB::Archive >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::ReadResult osgDB::Archive::readImage(const std::string &, const osgDB::Options *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::ReadResult stack_lret = self->readImage(_arg1, _arg2);
		osgDB::ReaderWriter::ReadResult* lret = new osgDB::ReaderWriter::ReadResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::ReadResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::ReadResult osgDB::Archive::readHeightField(const std::string & arg1, const osgDB::Options * arg2 = NULL) const
	static int _bind_readHeightField(lua_State *L) {
		if (!_lg_typecheck_readHeightField(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::ReadResult osgDB::Archive::readHeightField(const std::string & arg1, const osgDB::Options * arg2 = NULL) const function, expected prototype:\nosgDB::ReaderWriter::ReadResult osgDB::Archive::readHeightField(const std::string & arg1, const osgDB::Options * arg2 = NULL) const\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		std::string _arg1(lua_tostring(L,2),lua_objlen(L,2));
		const osgDB::Options* _arg2=luatop>2 ? (Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3)) : (const osgDB::Options*)((void *) 0);

		osgDB::Archive* self=Luna< osg::Referenced >::checkSubType< osgDB::Archive >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::ReadResult osgDB::Archive::readHeightField(const std::string &, const osgDB::Options *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::ReadResult stack_lret = self->readHeightField(_arg1, _arg2);
		osgDB::ReaderWriter::ReadResult* lret = new osgDB::ReaderWriter::ReadResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::ReadResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::ReadResult osgDB::Archive::readNode(const std::string & arg1, const osgDB::Options * arg2 = NULL) const
	static int _bind_readNode(lua_State *L) {
		if (!_lg_typecheck_readNode(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::ReadResult osgDB::Archive::readNode(const std::string & arg1, const osgDB::Options * arg2 = NULL) const function, expected prototype:\nosgDB::ReaderWriter::ReadResult osgDB::Archive::readNode(const std::string & arg1, const osgDB::Options * arg2 = NULL) const\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		std::string _arg1(lua_tostring(L,2),lua_objlen(L,2));
		const osgDB::Options* _arg2=luatop>2 ? (Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3)) : (const osgDB::Options*)((void *) 0);

		osgDB::Archive* self=Luna< osg::Referenced >::checkSubType< osgDB::Archive >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::ReadResult osgDB::Archive::readNode(const std::string &, const osgDB::Options *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::ReadResult stack_lret = self->readNode(_arg1, _arg2);
		osgDB::ReaderWriter::ReadResult* lret = new osgDB::ReaderWriter::ReadResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::ReadResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::ReadResult osgDB::Archive::readShader(const std::string & arg1, const osgDB::Options * arg2 = NULL) const
	static int _bind_readShader(lua_State *L) {
		if (!_lg_typecheck_readShader(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::ReadResult osgDB::Archive::readShader(const std::string & arg1, const osgDB::Options * arg2 = NULL) const function, expected prototype:\nosgDB::ReaderWriter::ReadResult osgDB::Archive::readShader(const std::string & arg1, const osgDB::Options * arg2 = NULL) const\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		std::string _arg1(lua_tostring(L,2),lua_objlen(L,2));
		const osgDB::Options* _arg2=luatop>2 ? (Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3)) : (const osgDB::Options*)((void *) 0);

		osgDB::Archive* self=Luna< osg::Referenced >::checkSubType< osgDB::Archive >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::ReadResult osgDB::Archive::readShader(const std::string &, const osgDB::Options *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::ReadResult stack_lret = self->readShader(_arg1, _arg2);
		osgDB::ReaderWriter::ReadResult* lret = new osgDB::ReaderWriter::ReadResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::ReadResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::WriteResult osgDB::Archive::writeObject(const osg::Object & arg1, const std::string & arg2, const osgDB::Options * arg3 = NULL) const
	static int _bind_writeObject(lua_State *L) {
		if (!_lg_typecheck_writeObject(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::WriteResult osgDB::Archive::writeObject(const osg::Object & arg1, const std::string & arg2, const osgDB::Options * arg3 = NULL) const function, expected prototype:\nosgDB::ReaderWriter::WriteResult osgDB::Archive::writeObject(const osg::Object & arg1, const std::string & arg2, const osgDB::Options * arg3 = NULL) const\nClass arguments details:\narg 1 ID = 50169651\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::Object* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgDB::Archive::writeObject function");
		}
		const osg::Object & _arg1=*_arg1_ptr;
		std::string _arg2(lua_tostring(L,3),lua_objlen(L,3));
		const osgDB::Options* _arg3=luatop>3 ? (Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,4)) : (const osgDB::Options*)((void *) 0);

		osgDB::Archive* self=Luna< osg::Referenced >::checkSubType< osgDB::Archive >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::WriteResult osgDB::Archive::writeObject(const osg::Object &, const std::string &, const osgDB::Options *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::WriteResult stack_lret = self->writeObject(_arg1, _arg2, _arg3);
		osgDB::ReaderWriter::WriteResult* lret = new osgDB::ReaderWriter::WriteResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::WriteResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::WriteResult osgDB::Archive::writeImage(const osg::Image & arg1, const std::string & arg2, const osgDB::Options * arg3 = NULL) const
	static int _bind_writeImage(lua_State *L) {
		if (!_lg_typecheck_writeImage(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::WriteResult osgDB::Archive::writeImage(const osg::Image & arg1, const std::string & arg2, const osgDB::Options * arg3 = NULL) const function, expected prototype:\nosgDB::ReaderWriter::WriteResult osgDB::Archive::writeImage(const osg::Image & arg1, const std::string & arg2, const osgDB::Options * arg3 = NULL) const\nClass arguments details:\narg 1 ID = 50169651\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::Image* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::Image >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgDB::Archive::writeImage function");
		}
		const osg::Image & _arg1=*_arg1_ptr;
		std::string _arg2(lua_tostring(L,3),lua_objlen(L,3));
		const osgDB::Options* _arg3=luatop>3 ? (Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,4)) : (const osgDB::Options*)((void *) 0);

		osgDB::Archive* self=Luna< osg::Referenced >::checkSubType< osgDB::Archive >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::WriteResult osgDB::Archive::writeImage(const osg::Image &, const std::string &, const osgDB::Options *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::WriteResult stack_lret = self->writeImage(_arg1, _arg2, _arg3);
		osgDB::ReaderWriter::WriteResult* lret = new osgDB::ReaderWriter::WriteResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::WriteResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::WriteResult osgDB::Archive::writeHeightField(const osg::HeightField & arg1, const std::string & arg2, const osgDB::Options * arg3 = NULL) const
	static int _bind_writeHeightField(lua_State *L) {
		if (!_lg_typecheck_writeHeightField(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::WriteResult osgDB::Archive::writeHeightField(const osg::HeightField & arg1, const std::string & arg2, const osgDB::Options * arg3 = NULL) const function, expected prototype:\nosgDB::ReaderWriter::WriteResult osgDB::Archive::writeHeightField(const osg::HeightField & arg1, const std::string & arg2, const osgDB::Options * arg3 = NULL) const\nClass arguments details:\narg 1 ID = 50169651\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::HeightField* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::HeightField >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgDB::Archive::writeHeightField function");
		}
		const osg::HeightField & _arg1=*_arg1_ptr;
		std::string _arg2(lua_tostring(L,3),lua_objlen(L,3));
		const osgDB::Options* _arg3=luatop>3 ? (Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,4)) : (const osgDB::Options*)((void *) 0);

		osgDB::Archive* self=Luna< osg::Referenced >::checkSubType< osgDB::Archive >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::WriteResult osgDB::Archive::writeHeightField(const osg::HeightField &, const std::string &, const osgDB::Options *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::WriteResult stack_lret = self->writeHeightField(_arg1, _arg2, _arg3);
		osgDB::ReaderWriter::WriteResult* lret = new osgDB::ReaderWriter::WriteResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::WriteResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::WriteResult osgDB::Archive::writeNode(const osg::Node & arg1, const std::string & arg2, const osgDB::Options * arg3 = NULL) const
	static int _bind_writeNode(lua_State *L) {
		if (!_lg_typecheck_writeNode(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::WriteResult osgDB::Archive::writeNode(const osg::Node & arg1, const std::string & arg2, const osgDB::Options * arg3 = NULL) const function, expected prototype:\nosgDB::ReaderWriter::WriteResult osgDB::Archive::writeNode(const osg::Node & arg1, const std::string & arg2, const osgDB::Options * arg3 = NULL) const\nClass arguments details:\narg 1 ID = 50169651\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::Node* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgDB::Archive::writeNode function");
		}
		const osg::Node & _arg1=*_arg1_ptr;
		std::string _arg2(lua_tostring(L,3),lua_objlen(L,3));
		const osgDB::Options* _arg3=luatop>3 ? (Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,4)) : (const osgDB::Options*)((void *) 0);

		osgDB::Archive* self=Luna< osg::Referenced >::checkSubType< osgDB::Archive >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::WriteResult osgDB::Archive::writeNode(const osg::Node &, const std::string &, const osgDB::Options *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::WriteResult stack_lret = self->writeNode(_arg1, _arg2, _arg3);
		osgDB::ReaderWriter::WriteResult* lret = new osgDB::ReaderWriter::WriteResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::WriteResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::WriteResult osgDB::Archive::writeShader(const osg::Shader & arg1, const std::string & arg2, const osgDB::Options * arg3 = NULL) const
	static int _bind_writeShader(lua_State *L) {
		if (!_lg_typecheck_writeShader(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::WriteResult osgDB::Archive::writeShader(const osg::Shader & arg1, const std::string & arg2, const osgDB::Options * arg3 = NULL) const function, expected prototype:\nosgDB::ReaderWriter::WriteResult osgDB::Archive::writeShader(const osg::Shader & arg1, const std::string & arg2, const osgDB::Options * arg3 = NULL) const\nClass arguments details:\narg 1 ID = 50169651\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::Shader* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::Shader >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgDB::Archive::writeShader function");
		}
		const osg::Shader & _arg1=*_arg1_ptr;
		std::string _arg2(lua_tostring(L,3),lua_objlen(L,3));
		const osgDB::Options* _arg3=luatop>3 ? (Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,4)) : (const osgDB::Options*)((void *) 0);

		osgDB::Archive* self=Luna< osg::Referenced >::checkSubType< osgDB::Archive >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::WriteResult osgDB::Archive::writeShader(const osg::Shader &, const std::string &, const osgDB::Options *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::WriteResult stack_lret = self->writeShader(_arg1, _arg2, _arg3);
		osgDB::ReaderWriter::WriteResult* lret = new osgDB::ReaderWriter::WriteResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::WriteResult >::push(L,lret,true);

		return 1;
	}

	// void osgDB::Archive::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::Archive::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgDB::Archive::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgDB::Archive* self=Luna< osg::Referenced >::checkSubType< osgDB::Archive >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::Archive::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Archive::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osgDB::Archive::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::Archive::base_setName(const std::string & name) function, expected prototype:\nvoid osgDB::Archive::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::Archive* self=Luna< osg::Referenced >::checkSubType< osgDB::Archive >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::Archive::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Archive::setName(name);

		return 0;
	}

	// void osgDB::Archive::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::Archive::base_computeDataVariance() function, expected prototype:\nvoid osgDB::Archive::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::Archive* self=Luna< osg::Referenced >::checkSubType< osgDB::Archive >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::Archive::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Archive::computeDataVariance();

		return 0;
	}

	// void osgDB::Archive::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::Archive::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osgDB::Archive::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osgDB::Archive* self=Luna< osg::Referenced >::checkSubType< osgDB::Archive >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::Archive::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Archive::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osgDB::Archive::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osgDB::Archive::base_getUserData() function, expected prototype:\nosg::Referenced * osgDB::Archive::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::Archive* self=Luna< osg::Referenced >::checkSubType< osgDB::Archive >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osgDB::Archive::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->Archive::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osgDB::Archive::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osgDB::Archive::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osgDB::Archive::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::Archive* self=Luna< osg::Referenced >::checkSubType< osgDB::Archive >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osgDB::Archive::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->Archive::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgDB::Archive::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osgDB::Archive::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::Archive::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osgDB::Archive::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osgDB::Archive* self=Luna< osg::Referenced >::checkSubType< osgDB::Archive >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::Archive::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Archive::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osgDB::Archive::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgDB::Archive::base_cloneType() const function, expected prototype:\nosg::Object * osgDB::Archive::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::Archive* self=Luna< osg::Referenced >::checkSubType< osgDB::Archive >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgDB::Archive::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->Archive::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgDB::Archive::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgDB::Archive::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgDB::Archive::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgDB::Archive::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgDB::Archive* self=Luna< osg::Referenced >::checkSubType< osgDB::Archive >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgDB::Archive::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->Archive::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgDB::Archive::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::Archive::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgDB::Archive::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgDB::Archive* self=Luna< osg::Referenced >::checkSubType< osgDB::Archive >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::Archive::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Archive::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const osgDB::ReaderWriter::FormatDescriptionMap & osgDB::Archive::base_supportedProtocols() const
	static int _bind_base_supportedProtocols(lua_State *L) {
		if (!_lg_typecheck_base_supportedProtocols(L)) {
			luaL_error(L, "luna typecheck failed in const osgDB::ReaderWriter::FormatDescriptionMap & osgDB::Archive::base_supportedProtocols() const function, expected prototype:\nconst osgDB::ReaderWriter::FormatDescriptionMap & osgDB::Archive::base_supportedProtocols() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::Archive* self=Luna< osg::Referenced >::checkSubType< osgDB::Archive >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgDB::ReaderWriter::FormatDescriptionMap & osgDB::Archive::base_supportedProtocols() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::ReaderWriter::FormatDescriptionMap* lret = &self->Archive::supportedProtocols();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::FormatDescriptionMap >::push(L,lret,false);

		return 1;
	}

	// const osgDB::ReaderWriter::FormatDescriptionMap & osgDB::Archive::base_supportedExtensions() const
	static int _bind_base_supportedExtensions(lua_State *L) {
		if (!_lg_typecheck_base_supportedExtensions(L)) {
			luaL_error(L, "luna typecheck failed in const osgDB::ReaderWriter::FormatDescriptionMap & osgDB::Archive::base_supportedExtensions() const function, expected prototype:\nconst osgDB::ReaderWriter::FormatDescriptionMap & osgDB::Archive::base_supportedExtensions() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::Archive* self=Luna< osg::Referenced >::checkSubType< osgDB::Archive >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgDB::ReaderWriter::FormatDescriptionMap & osgDB::Archive::base_supportedExtensions() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::ReaderWriter::FormatDescriptionMap* lret = &self->Archive::supportedExtensions();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::FormatDescriptionMap >::push(L,lret,false);

		return 1;
	}

	// const osgDB::ReaderWriter::FormatDescriptionMap & osgDB::Archive::base_supportedOptions() const
	static int _bind_base_supportedOptions(lua_State *L) {
		if (!_lg_typecheck_base_supportedOptions(L)) {
			luaL_error(L, "luna typecheck failed in const osgDB::ReaderWriter::FormatDescriptionMap & osgDB::Archive::base_supportedOptions() const function, expected prototype:\nconst osgDB::ReaderWriter::FormatDescriptionMap & osgDB::Archive::base_supportedOptions() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::Archive* self=Luna< osg::Referenced >::checkSubType< osgDB::Archive >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgDB::ReaderWriter::FormatDescriptionMap & osgDB::Archive::base_supportedOptions() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::ReaderWriter::FormatDescriptionMap* lret = &self->Archive::supportedOptions();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::FormatDescriptionMap >::push(L,lret,false);

		return 1;
	}

	// bool osgDB::Archive::base_acceptsProtocol(const std::string & protocol) const
	static int _bind_base_acceptsProtocol(lua_State *L) {
		if (!_lg_typecheck_base_acceptsProtocol(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::Archive::base_acceptsProtocol(const std::string & protocol) const function, expected prototype:\nbool osgDB::Archive::base_acceptsProtocol(const std::string & protocol) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string protocol(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::Archive* self=Luna< osg::Referenced >::checkSubType< osgDB::Archive >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::Archive::base_acceptsProtocol(const std::string &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Archive::acceptsProtocol(protocol);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// osgDB::ReaderWriter::Features osgDB::Archive::base_supportedFeatures() const
	static int _bind_base_supportedFeatures(lua_State *L) {
		if (!_lg_typecheck_base_supportedFeatures(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::Features osgDB::Archive::base_supportedFeatures() const function, expected prototype:\nosgDB::ReaderWriter::Features osgDB::Archive::base_supportedFeatures() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::Archive* self=Luna< osg::Referenced >::checkSubType< osgDB::Archive >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::Features osgDB::Archive::base_supportedFeatures() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::Features lret = self->Archive::supportedFeatures();
		lua_pushnumber(L,lret);

		return 1;
	}

	// osgDB::ReaderWriter::ReadResult osgDB::Archive::base_openArchive(const std::string & arg1, osgDB::ReaderWriter::ArchiveStatus arg2, unsigned int arg3 = 4096, const osgDB::Options * arg4 = NULL) const
	static int _bind_base_openArchive_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_openArchive_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::ReadResult osgDB::Archive::base_openArchive(const std::string & arg1, osgDB::ReaderWriter::ArchiveStatus arg2, unsigned int arg3 = 4096, const osgDB::Options * arg4 = NULL) const function, expected prototype:\nosgDB::ReaderWriter::ReadResult osgDB::Archive::base_openArchive(const std::string & arg1, osgDB::ReaderWriter::ArchiveStatus arg2, unsigned int arg3 = 4096, const osgDB::Options * arg4 = NULL) const\nClass arguments details:\narg 4 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		std::string _arg1(lua_tostring(L,2),lua_objlen(L,2));
		osgDB::ReaderWriter::ArchiveStatus _arg2=(osgDB::ReaderWriter::ArchiveStatus)lua_tointeger(L,3);
		unsigned _arg3=luatop>3 ? (unsigned)lua_tointeger(L,4) : (unsigned)4096;
		const osgDB::Options* _arg4=luatop>4 ? (Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,5)) : (const osgDB::Options*)((void *) 0);

		osgDB::Archive* self=Luna< osg::Referenced >::checkSubType< osgDB::Archive >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::ReadResult osgDB::Archive::base_openArchive(const std::string &, osgDB::ReaderWriter::ArchiveStatus, unsigned int, const osgDB::Options *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::ReadResult stack_lret = self->Archive::openArchive(_arg1, _arg2, _arg3, _arg4);
		osgDB::ReaderWriter::ReadResult* lret = new osgDB::ReaderWriter::ReadResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::ReadResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::ReadResult osgDB::Archive::base_openArchive(std::istream & arg1, const osgDB::Options * arg2 = NULL) const
	static int _bind_base_openArchive_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_openArchive_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::ReadResult osgDB::Archive::base_openArchive(std::istream & arg1, const osgDB::Options * arg2 = NULL) const function, expected prototype:\nosgDB::ReaderWriter::ReadResult osgDB::Archive::base_openArchive(std::istream & arg1, const osgDB::Options * arg2 = NULL) const\nClass arguments details:\narg 1 ID = 77972206\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		std::istream* _arg1_ptr=(Luna< std::istream >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgDB::Archive::base_openArchive function");
		}
		std::istream & _arg1=*_arg1_ptr;
		const osgDB::Options* _arg2=luatop>2 ? (Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3)) : (const osgDB::Options*)((void *) 0);

		osgDB::Archive* self=Luna< osg::Referenced >::checkSubType< osgDB::Archive >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::ReadResult osgDB::Archive::base_openArchive(std::istream &, const osgDB::Options *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::ReadResult stack_lret = self->Archive::openArchive(_arg1, _arg2);
		osgDB::ReaderWriter::ReadResult* lret = new osgDB::ReaderWriter::ReadResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::ReadResult >::push(L,lret,true);

		return 1;
	}

	// Overload binder for osgDB::Archive::base_openArchive
	static int _bind_base_openArchive(lua_State *L) {
		if (_lg_typecheck_base_openArchive_overload_1(L)) return _bind_base_openArchive_overload_1(L);
		if (_lg_typecheck_base_openArchive_overload_2(L)) return _bind_base_openArchive_overload_2(L);

		luaL_error(L, "error in function base_openArchive, cannot match any of the overloads for function base_openArchive:\n  base_openArchive(const std::string &, osgDB::ReaderWriter::ArchiveStatus, unsigned int, const osgDB::Options *)\n  base_openArchive(std::istream &, const osgDB::Options *)\n");
		return 0;
	}

	// const char * osgDB::Archive::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgDB::Archive::base_libraryName() const function, expected prototype:\nconst char * osgDB::Archive::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::Archive* self=Luna< osg::Referenced >::checkSubType< osgDB::Archive >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgDB::Archive::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Archive::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgDB::Archive::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgDB::Archive::base_className() const function, expected prototype:\nconst char * osgDB::Archive::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::Archive* self=Luna< osg::Referenced >::checkSubType< osgDB::Archive >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgDB::Archive::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Archive::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// bool osgDB::Archive::base_acceptsExtension(const std::string & arg1) const
	static int _bind_base_acceptsExtension(lua_State *L) {
		if (!_lg_typecheck_base_acceptsExtension(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::Archive::base_acceptsExtension(const std::string & arg1) const function, expected prototype:\nbool osgDB::Archive::base_acceptsExtension(const std::string & arg1) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string _arg1(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::Archive* self=Luna< osg::Referenced >::checkSubType< osgDB::Archive >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::Archive::base_acceptsExtension(const std::string &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Archive::acceptsExtension(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// osgDB::DirectoryContents osgDB::Archive::base_getDirectoryContents(const std::string & dirName) const
	static int _bind_base_getDirectoryContents(lua_State *L) {
		if (!_lg_typecheck_base_getDirectoryContents(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::DirectoryContents osgDB::Archive::base_getDirectoryContents(const std::string & dirName) const function, expected prototype:\nosgDB::DirectoryContents osgDB::Archive::base_getDirectoryContents(const std::string & dirName) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string dirName(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::Archive* self=Luna< osg::Referenced >::checkSubType< osgDB::Archive >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::DirectoryContents osgDB::Archive::base_getDirectoryContents(const std::string &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::DirectoryContents stack_lret = self->Archive::getDirectoryContents(dirName);
		osgDB::DirectoryContents* lret = new osgDB::DirectoryContents(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::DirectoryContents >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

osgDB::Archive* LunaTraits< osgDB::Archive >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgDB_Archive::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void osgDB::Archive::close()
	// std::string osgDB::Archive::getArchiveFileName() const
	// std::string osgDB::Archive::getMasterFileName() const
	// bool osgDB::Archive::fileExists(const std::string & filename) const
	// osgDB::FileType osgDB::Archive::getFileType(const std::string & filename) const
	// bool osgDB::Archive::getFileNames(osgDB::DirectoryContents & fileNames) const
	// osgDB::ReaderWriter::ReadResult osgDB::Archive::readObject(const std::string & arg1, const osgDB::Options * arg2 = NULL) const
	// osgDB::ReaderWriter::ReadResult osgDB::Archive::readImage(const std::string & arg1, const osgDB::Options * arg2 = NULL) const
	// osgDB::ReaderWriter::ReadResult osgDB::Archive::readHeightField(const std::string & arg1, const osgDB::Options * arg2 = NULL) const
	// osgDB::ReaderWriter::ReadResult osgDB::Archive::readNode(const std::string & arg1, const osgDB::Options * arg2 = NULL) const
	// osgDB::ReaderWriter::ReadResult osgDB::Archive::readShader(const std::string & arg1, const osgDB::Options * arg2 = NULL) const
	// osgDB::ReaderWriter::WriteResult osgDB::Archive::writeObject(const osg::Object & arg1, const std::string & arg2, const osgDB::Options * arg3 = NULL) const
	// osgDB::ReaderWriter::WriteResult osgDB::Archive::writeImage(const osg::Image & arg1, const std::string & arg2, const osgDB::Options * arg3 = NULL) const
	// osgDB::ReaderWriter::WriteResult osgDB::Archive::writeHeightField(const osg::HeightField & arg1, const std::string & arg2, const osgDB::Options * arg3 = NULL) const
	// osgDB::ReaderWriter::WriteResult osgDB::Archive::writeNode(const osg::Node & arg1, const std::string & arg2, const osgDB::Options * arg3 = NULL) const
	// osgDB::ReaderWriter::WriteResult osgDB::Archive::writeShader(const osg::Shader & arg1, const std::string & arg2, const osgDB::Options * arg3 = NULL) const
}

void LunaTraits< osgDB::Archive >::_bind_dtor(osgDB::Archive* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgDB::Archive >::className[] = "Archive";
const char LunaTraits< osgDB::Archive >::fullName[] = "osgDB::Archive";
const char LunaTraits< osgDB::Archive >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::Archive >::parents[] = {"osgDB.ReaderWriter", 0};
const int LunaTraits< osgDB::Archive >::hash = 70283019;
const int LunaTraits< osgDB::Archive >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgDB::Archive >::methods[] = {
	{"libraryName", &luna_wrapper_osgDB_Archive::_bind_libraryName},
	{"className", &luna_wrapper_osgDB_Archive::_bind_className},
	{"acceptsExtension", &luna_wrapper_osgDB_Archive::_bind_acceptsExtension},
	{"close", &luna_wrapper_osgDB_Archive::_bind_close},
	{"getArchiveFileName", &luna_wrapper_osgDB_Archive::_bind_getArchiveFileName},
	{"getMasterFileName", &luna_wrapper_osgDB_Archive::_bind_getMasterFileName},
	{"fileExists", &luna_wrapper_osgDB_Archive::_bind_fileExists},
	{"getFileType", &luna_wrapper_osgDB_Archive::_bind_getFileType},
	{"getFileNames", &luna_wrapper_osgDB_Archive::_bind_getFileNames},
	{"getDirectoryContents", &luna_wrapper_osgDB_Archive::_bind_getDirectoryContents},
	{"readObject", &luna_wrapper_osgDB_Archive::_bind_readObject},
	{"readImage", &luna_wrapper_osgDB_Archive::_bind_readImage},
	{"readHeightField", &luna_wrapper_osgDB_Archive::_bind_readHeightField},
	{"readNode", &luna_wrapper_osgDB_Archive::_bind_readNode},
	{"readShader", &luna_wrapper_osgDB_Archive::_bind_readShader},
	{"writeObject", &luna_wrapper_osgDB_Archive::_bind_writeObject},
	{"writeImage", &luna_wrapper_osgDB_Archive::_bind_writeImage},
	{"writeHeightField", &luna_wrapper_osgDB_Archive::_bind_writeHeightField},
	{"writeNode", &luna_wrapper_osgDB_Archive::_bind_writeNode},
	{"writeShader", &luna_wrapper_osgDB_Archive::_bind_writeShader},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgDB_Archive::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osgDB_Archive::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osgDB_Archive::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osgDB_Archive::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osgDB_Archive::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osgDB_Archive::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osgDB_Archive::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osgDB_Archive::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osgDB_Archive::_bind_base_isSameKindAs},
	{"base_supportedProtocols", &luna_wrapper_osgDB_Archive::_bind_base_supportedProtocols},
	{"base_supportedExtensions", &luna_wrapper_osgDB_Archive::_bind_base_supportedExtensions},
	{"base_supportedOptions", &luna_wrapper_osgDB_Archive::_bind_base_supportedOptions},
	{"base_acceptsProtocol", &luna_wrapper_osgDB_Archive::_bind_base_acceptsProtocol},
	{"base_supportedFeatures", &luna_wrapper_osgDB_Archive::_bind_base_supportedFeatures},
	{"base_openArchive", &luna_wrapper_osgDB_Archive::_bind_base_openArchive},
	{"base_libraryName", &luna_wrapper_osgDB_Archive::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osgDB_Archive::_bind_base_className},
	{"base_acceptsExtension", &luna_wrapper_osgDB_Archive::_bind_base_acceptsExtension},
	{"base_getDirectoryContents", &luna_wrapper_osgDB_Archive::_bind_base_getDirectoryContents},
	{"fromVoid", &luna_wrapper_osgDB_Archive::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgDB_Archive::_bind_asVoid},
	{"getTable", &luna_wrapper_osgDB_Archive::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::Archive >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgDB_Archive::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::Archive >::enumValues[] = {
	{0,0}
};



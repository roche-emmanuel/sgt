#include <plug_common.h>

#include <luna/wrappers/wrapper_osgDB_FileCache.h>

class luna_wrapper_osgDB_FileCache {
public:
	typedef Luna< osgDB::FileCache > luna_t;

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

		osgDB::FileCache* self= (osgDB::FileCache*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgDB::FileCache >::push(L,self,false);
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
		//osgDB::FileCache* ptr= dynamic_cast< osgDB::FileCache* >(Luna< osg::Referenced >::check(L,1));
		osgDB::FileCache* ptr= luna_caster< osg::Referenced, osgDB::FileCache >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgDB::FileCache >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getFileCachePath(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isFileAppropriateForFileCache(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_createCacheFileName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_existsInCache(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readImage(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeImage(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readObject(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeObject(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readHeightField(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeHeightField(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readNode(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeNode(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readShader(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeShader(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_loadDatabaseRevisionsForFile(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDatabaseRevisionsList(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isCachedFileBlackListed(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_isFileAppropriateForFileCache(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_createCacheFileName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_existsInCache(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_readImage(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_writeImage(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_readObject(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_writeObject(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_readHeightField(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_writeHeightField(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_readNode(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_writeNode(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_readShader(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_writeShader(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgDB::FileCache::FileCache(const std::string & path)
	static osgDB::FileCache* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::FileCache::FileCache(const std::string & path) function, expected prototype:\nosgDB::FileCache::FileCache(const std::string & path)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string path(lua_tostring(L,1),lua_objlen(L,1));

		return new osgDB::FileCache(path);
	}

	// osgDB::FileCache::FileCache(lua_Table * data, const std::string & path)
	static osgDB::FileCache* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::FileCache::FileCache(lua_Table * data, const std::string & path) function, expected prototype:\nosgDB::FileCache::FileCache(lua_Table * data, const std::string & path)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string path(lua_tostring(L,2),lua_objlen(L,2));

		return new wrapper_osgDB_FileCache(L,NULL, path);
	}

	// Overload binder for osgDB::FileCache::FileCache
	static osgDB::FileCache* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function FileCache, cannot match any of the overloads for function FileCache:\n  FileCache(const std::string &)\n  FileCache(lua_Table *, const std::string &)\n");
		return NULL;
	}


	// Function binds:
	// const std::string & osgDB::FileCache::getFileCachePath() const
	static int _bind_getFileCachePath(lua_State *L) {
		if (!_lg_typecheck_getFileCachePath(L)) {
			luaL_error(L, "luna typecheck failed in const std::string & osgDB::FileCache::getFileCachePath() const function, expected prototype:\nconst std::string & osgDB::FileCache::getFileCachePath() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::FileCache* self=Luna< osg::Referenced >::checkSubType< osgDB::FileCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const std::string & osgDB::FileCache::getFileCachePath() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const std::string & lret = self->getFileCachePath();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool osgDB::FileCache::isFileAppropriateForFileCache(const std::string & originalFileName) const
	static int _bind_isFileAppropriateForFileCache(lua_State *L) {
		if (!_lg_typecheck_isFileAppropriateForFileCache(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::FileCache::isFileAppropriateForFileCache(const std::string & originalFileName) const function, expected prototype:\nbool osgDB::FileCache::isFileAppropriateForFileCache(const std::string & originalFileName) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string originalFileName(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::FileCache* self=Luna< osg::Referenced >::checkSubType< osgDB::FileCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::FileCache::isFileAppropriateForFileCache(const std::string &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isFileAppropriateForFileCache(originalFileName);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// std::string osgDB::FileCache::createCacheFileName(const std::string & originalFileName) const
	static int _bind_createCacheFileName(lua_State *L) {
		if (!_lg_typecheck_createCacheFileName(L)) {
			luaL_error(L, "luna typecheck failed in std::string osgDB::FileCache::createCacheFileName(const std::string & originalFileName) const function, expected prototype:\nstd::string osgDB::FileCache::createCacheFileName(const std::string & originalFileName) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string originalFileName(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::FileCache* self=Luna< osg::Referenced >::checkSubType< osgDB::FileCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call std::string osgDB::FileCache::createCacheFileName(const std::string &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		std::string lret = self->createCacheFileName(originalFileName);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool osgDB::FileCache::existsInCache(const std::string & originalFileName) const
	static int _bind_existsInCache(lua_State *L) {
		if (!_lg_typecheck_existsInCache(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::FileCache::existsInCache(const std::string & originalFileName) const function, expected prototype:\nbool osgDB::FileCache::existsInCache(const std::string & originalFileName) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string originalFileName(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::FileCache* self=Luna< osg::Referenced >::checkSubType< osgDB::FileCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::FileCache::existsInCache(const std::string &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->existsInCache(originalFileName);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// osgDB::ReaderWriter::ReadResult osgDB::FileCache::readImage(const std::string & originalFileName, const osgDB::Options * options) const
	static int _bind_readImage(lua_State *L) {
		if (!_lg_typecheck_readImage(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::ReadResult osgDB::FileCache::readImage(const std::string & originalFileName, const osgDB::Options * options) const function, expected prototype:\nosgDB::ReaderWriter::ReadResult osgDB::FileCache::readImage(const std::string & originalFileName, const osgDB::Options * options) const\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string originalFileName(lua_tostring(L,2),lua_objlen(L,2));
		const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3));

		osgDB::FileCache* self=Luna< osg::Referenced >::checkSubType< osgDB::FileCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::ReadResult osgDB::FileCache::readImage(const std::string &, const osgDB::Options *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::ReadResult stack_lret = self->readImage(originalFileName, options);
		osgDB::ReaderWriter::ReadResult* lret = new osgDB::ReaderWriter::ReadResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::ReadResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::WriteResult osgDB::FileCache::writeImage(const osg::Image & image, const std::string & originalFileName, const osgDB::Options * options) const
	static int _bind_writeImage(lua_State *L) {
		if (!_lg_typecheck_writeImage(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::WriteResult osgDB::FileCache::writeImage(const osg::Image & image, const std::string & originalFileName, const osgDB::Options * options) const function, expected prototype:\nosgDB::ReaderWriter::WriteResult osgDB::FileCache::writeImage(const osg::Image & image, const std::string & originalFileName, const osgDB::Options * options) const\nClass arguments details:\narg 1 ID = 50169651\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Image* image_ptr=(Luna< osg::Referenced >::checkSubType< osg::Image >(L,2));
		if( !image_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg image in osgDB::FileCache::writeImage function");
		}
		const osg::Image & image=*image_ptr;
		std::string originalFileName(lua_tostring(L,3),lua_objlen(L,3));
		const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,4));

		osgDB::FileCache* self=Luna< osg::Referenced >::checkSubType< osgDB::FileCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::WriteResult osgDB::FileCache::writeImage(const osg::Image &, const std::string &, const osgDB::Options *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::WriteResult stack_lret = self->writeImage(image, originalFileName, options);
		osgDB::ReaderWriter::WriteResult* lret = new osgDB::ReaderWriter::WriteResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::WriteResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::ReadResult osgDB::FileCache::readObject(const std::string & originalFileName, const osgDB::Options * options) const
	static int _bind_readObject(lua_State *L) {
		if (!_lg_typecheck_readObject(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::ReadResult osgDB::FileCache::readObject(const std::string & originalFileName, const osgDB::Options * options) const function, expected prototype:\nosgDB::ReaderWriter::ReadResult osgDB::FileCache::readObject(const std::string & originalFileName, const osgDB::Options * options) const\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string originalFileName(lua_tostring(L,2),lua_objlen(L,2));
		const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3));

		osgDB::FileCache* self=Luna< osg::Referenced >::checkSubType< osgDB::FileCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::ReadResult osgDB::FileCache::readObject(const std::string &, const osgDB::Options *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::ReadResult stack_lret = self->readObject(originalFileName, options);
		osgDB::ReaderWriter::ReadResult* lret = new osgDB::ReaderWriter::ReadResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::ReadResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::WriteResult osgDB::FileCache::writeObject(const osg::Object & object, const std::string & originalFileName, const osgDB::Options * options) const
	static int _bind_writeObject(lua_State *L) {
		if (!_lg_typecheck_writeObject(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::WriteResult osgDB::FileCache::writeObject(const osg::Object & object, const std::string & originalFileName, const osgDB::Options * options) const function, expected prototype:\nosgDB::ReaderWriter::WriteResult osgDB::FileCache::writeObject(const osg::Object & object, const std::string & originalFileName, const osgDB::Options * options) const\nClass arguments details:\narg 1 ID = 50169651\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* object_ptr=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));
		if( !object_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg object in osgDB::FileCache::writeObject function");
		}
		const osg::Object & object=*object_ptr;
		std::string originalFileName(lua_tostring(L,3),lua_objlen(L,3));
		const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,4));

		osgDB::FileCache* self=Luna< osg::Referenced >::checkSubType< osgDB::FileCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::WriteResult osgDB::FileCache::writeObject(const osg::Object &, const std::string &, const osgDB::Options *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::WriteResult stack_lret = self->writeObject(object, originalFileName, options);
		osgDB::ReaderWriter::WriteResult* lret = new osgDB::ReaderWriter::WriteResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::WriteResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::ReadResult osgDB::FileCache::readHeightField(const std::string & originalFileName, const osgDB::Options * options) const
	static int _bind_readHeightField(lua_State *L) {
		if (!_lg_typecheck_readHeightField(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::ReadResult osgDB::FileCache::readHeightField(const std::string & originalFileName, const osgDB::Options * options) const function, expected prototype:\nosgDB::ReaderWriter::ReadResult osgDB::FileCache::readHeightField(const std::string & originalFileName, const osgDB::Options * options) const\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string originalFileName(lua_tostring(L,2),lua_objlen(L,2));
		const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3));

		osgDB::FileCache* self=Luna< osg::Referenced >::checkSubType< osgDB::FileCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::ReadResult osgDB::FileCache::readHeightField(const std::string &, const osgDB::Options *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::ReadResult stack_lret = self->readHeightField(originalFileName, options);
		osgDB::ReaderWriter::ReadResult* lret = new osgDB::ReaderWriter::ReadResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::ReadResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::WriteResult osgDB::FileCache::writeHeightField(const osg::HeightField & hf, const std::string & originalFileName, const osgDB::Options * options) const
	static int _bind_writeHeightField(lua_State *L) {
		if (!_lg_typecheck_writeHeightField(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::WriteResult osgDB::FileCache::writeHeightField(const osg::HeightField & hf, const std::string & originalFileName, const osgDB::Options * options) const function, expected prototype:\nosgDB::ReaderWriter::WriteResult osgDB::FileCache::writeHeightField(const osg::HeightField & hf, const std::string & originalFileName, const osgDB::Options * options) const\nClass arguments details:\narg 1 ID = 50169651\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::HeightField* hf_ptr=(Luna< osg::Referenced >::checkSubType< osg::HeightField >(L,2));
		if( !hf_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg hf in osgDB::FileCache::writeHeightField function");
		}
		const osg::HeightField & hf=*hf_ptr;
		std::string originalFileName(lua_tostring(L,3),lua_objlen(L,3));
		const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,4));

		osgDB::FileCache* self=Luna< osg::Referenced >::checkSubType< osgDB::FileCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::WriteResult osgDB::FileCache::writeHeightField(const osg::HeightField &, const std::string &, const osgDB::Options *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::WriteResult stack_lret = self->writeHeightField(hf, originalFileName, options);
		osgDB::ReaderWriter::WriteResult* lret = new osgDB::ReaderWriter::WriteResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::WriteResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::ReadResult osgDB::FileCache::readNode(const std::string & originalFileName, const osgDB::Options * options, bool buildKdTreeIfRequired = true) const
	static int _bind_readNode(lua_State *L) {
		if (!_lg_typecheck_readNode(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::ReadResult osgDB::FileCache::readNode(const std::string & originalFileName, const osgDB::Options * options, bool buildKdTreeIfRequired = true) const function, expected prototype:\nosgDB::ReaderWriter::ReadResult osgDB::FileCache::readNode(const std::string & originalFileName, const osgDB::Options * options, bool buildKdTreeIfRequired = true) const\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		std::string originalFileName(lua_tostring(L,2),lua_objlen(L,2));
		const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3));
		bool buildKdTreeIfRequired=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)true;

		osgDB::FileCache* self=Luna< osg::Referenced >::checkSubType< osgDB::FileCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::ReadResult osgDB::FileCache::readNode(const std::string &, const osgDB::Options *, bool) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::ReadResult stack_lret = self->readNode(originalFileName, options, buildKdTreeIfRequired);
		osgDB::ReaderWriter::ReadResult* lret = new osgDB::ReaderWriter::ReadResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::ReadResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::WriteResult osgDB::FileCache::writeNode(const osg::Node & node, const std::string & originalFileName, const osgDB::Options * options) const
	static int _bind_writeNode(lua_State *L) {
		if (!_lg_typecheck_writeNode(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::WriteResult osgDB::FileCache::writeNode(const osg::Node & node, const std::string & originalFileName, const osgDB::Options * options) const function, expected prototype:\nosgDB::ReaderWriter::WriteResult osgDB::FileCache::writeNode(const osg::Node & node, const std::string & originalFileName, const osgDB::Options * options) const\nClass arguments details:\narg 1 ID = 50169651\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Node* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgDB::FileCache::writeNode function");
		}
		const osg::Node & node=*node_ptr;
		std::string originalFileName(lua_tostring(L,3),lua_objlen(L,3));
		const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,4));

		osgDB::FileCache* self=Luna< osg::Referenced >::checkSubType< osgDB::FileCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::WriteResult osgDB::FileCache::writeNode(const osg::Node &, const std::string &, const osgDB::Options *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::WriteResult stack_lret = self->writeNode(node, originalFileName, options);
		osgDB::ReaderWriter::WriteResult* lret = new osgDB::ReaderWriter::WriteResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::WriteResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::ReadResult osgDB::FileCache::readShader(const std::string & originalFileName, const osgDB::Options * options) const
	static int _bind_readShader(lua_State *L) {
		if (!_lg_typecheck_readShader(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::ReadResult osgDB::FileCache::readShader(const std::string & originalFileName, const osgDB::Options * options) const function, expected prototype:\nosgDB::ReaderWriter::ReadResult osgDB::FileCache::readShader(const std::string & originalFileName, const osgDB::Options * options) const\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string originalFileName(lua_tostring(L,2),lua_objlen(L,2));
		const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3));

		osgDB::FileCache* self=Luna< osg::Referenced >::checkSubType< osgDB::FileCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::ReadResult osgDB::FileCache::readShader(const std::string &, const osgDB::Options *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::ReadResult stack_lret = self->readShader(originalFileName, options);
		osgDB::ReaderWriter::ReadResult* lret = new osgDB::ReaderWriter::ReadResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::ReadResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::WriteResult osgDB::FileCache::writeShader(const osg::Shader & shader, const std::string & originalFileName, const osgDB::Options * options) const
	static int _bind_writeShader(lua_State *L) {
		if (!_lg_typecheck_writeShader(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::WriteResult osgDB::FileCache::writeShader(const osg::Shader & shader, const std::string & originalFileName, const osgDB::Options * options) const function, expected prototype:\nosgDB::ReaderWriter::WriteResult osgDB::FileCache::writeShader(const osg::Shader & shader, const std::string & originalFileName, const osgDB::Options * options) const\nClass arguments details:\narg 1 ID = 50169651\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Shader* shader_ptr=(Luna< osg::Referenced >::checkSubType< osg::Shader >(L,2));
		if( !shader_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg shader in osgDB::FileCache::writeShader function");
		}
		const osg::Shader & shader=*shader_ptr;
		std::string originalFileName(lua_tostring(L,3),lua_objlen(L,3));
		const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,4));

		osgDB::FileCache* self=Luna< osg::Referenced >::checkSubType< osgDB::FileCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::WriteResult osgDB::FileCache::writeShader(const osg::Shader &, const std::string &, const osgDB::Options *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::WriteResult stack_lret = self->writeShader(shader, originalFileName, options);
		osgDB::ReaderWriter::WriteResult* lret = new osgDB::ReaderWriter::WriteResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::WriteResult >::push(L,lret,true);

		return 1;
	}

	// bool osgDB::FileCache::loadDatabaseRevisionsForFile(const std::string & originanlFileName)
	static int _bind_loadDatabaseRevisionsForFile(lua_State *L) {
		if (!_lg_typecheck_loadDatabaseRevisionsForFile(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::FileCache::loadDatabaseRevisionsForFile(const std::string & originanlFileName) function, expected prototype:\nbool osgDB::FileCache::loadDatabaseRevisionsForFile(const std::string & originanlFileName)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string originanlFileName(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::FileCache* self=Luna< osg::Referenced >::checkSubType< osgDB::FileCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::FileCache::loadDatabaseRevisionsForFile(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->loadDatabaseRevisionsForFile(originanlFileName);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// osgDB::FileCache::DatabaseRevisionsList & osgDB::FileCache::getDatabaseRevisionsList()
	static int _bind_getDatabaseRevisionsList(lua_State *L) {
		if (!_lg_typecheck_getDatabaseRevisionsList(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::FileCache::DatabaseRevisionsList & osgDB::FileCache::getDatabaseRevisionsList() function, expected prototype:\nosgDB::FileCache::DatabaseRevisionsList & osgDB::FileCache::getDatabaseRevisionsList()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::FileCache* self=Luna< osg::Referenced >::checkSubType< osgDB::FileCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::FileCache::DatabaseRevisionsList & osgDB::FileCache::getDatabaseRevisionsList(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::FileCache::DatabaseRevisionsList* lret = &self->getDatabaseRevisionsList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::FileCache::DatabaseRevisionsList >::push(L,lret,false);

		return 1;
	}

	// bool osgDB::FileCache::isCachedFileBlackListed(const std::string & originalFileName) const
	static int _bind_isCachedFileBlackListed(lua_State *L) {
		if (!_lg_typecheck_isCachedFileBlackListed(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::FileCache::isCachedFileBlackListed(const std::string & originalFileName) const function, expected prototype:\nbool osgDB::FileCache::isCachedFileBlackListed(const std::string & originalFileName) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string originalFileName(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::FileCache* self=Luna< osg::Referenced >::checkSubType< osgDB::FileCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::FileCache::isCachedFileBlackListed(const std::string &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isCachedFileBlackListed(originalFileName);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgDB::FileCache::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::FileCache::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgDB::FileCache::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgDB::FileCache* self=Luna< osg::Referenced >::checkSubType< osgDB::FileCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::FileCache::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->FileCache::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// bool osgDB::FileCache::base_isFileAppropriateForFileCache(const std::string & originalFileName) const
	static int _bind_base_isFileAppropriateForFileCache(lua_State *L) {
		if (!_lg_typecheck_base_isFileAppropriateForFileCache(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::FileCache::base_isFileAppropriateForFileCache(const std::string & originalFileName) const function, expected prototype:\nbool osgDB::FileCache::base_isFileAppropriateForFileCache(const std::string & originalFileName) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string originalFileName(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::FileCache* self=Luna< osg::Referenced >::checkSubType< osgDB::FileCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::FileCache::base_isFileAppropriateForFileCache(const std::string &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->FileCache::isFileAppropriateForFileCache(originalFileName);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// std::string osgDB::FileCache::base_createCacheFileName(const std::string & originalFileName) const
	static int _bind_base_createCacheFileName(lua_State *L) {
		if (!_lg_typecheck_base_createCacheFileName(L)) {
			luaL_error(L, "luna typecheck failed in std::string osgDB::FileCache::base_createCacheFileName(const std::string & originalFileName) const function, expected prototype:\nstd::string osgDB::FileCache::base_createCacheFileName(const std::string & originalFileName) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string originalFileName(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::FileCache* self=Luna< osg::Referenced >::checkSubType< osgDB::FileCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call std::string osgDB::FileCache::base_createCacheFileName(const std::string &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		std::string lret = self->FileCache::createCacheFileName(originalFileName);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool osgDB::FileCache::base_existsInCache(const std::string & originalFileName) const
	static int _bind_base_existsInCache(lua_State *L) {
		if (!_lg_typecheck_base_existsInCache(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::FileCache::base_existsInCache(const std::string & originalFileName) const function, expected prototype:\nbool osgDB::FileCache::base_existsInCache(const std::string & originalFileName) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string originalFileName(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::FileCache* self=Luna< osg::Referenced >::checkSubType< osgDB::FileCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::FileCache::base_existsInCache(const std::string &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->FileCache::existsInCache(originalFileName);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// osgDB::ReaderWriter::ReadResult osgDB::FileCache::base_readImage(const std::string & originalFileName, const osgDB::Options * options) const
	static int _bind_base_readImage(lua_State *L) {
		if (!_lg_typecheck_base_readImage(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::ReadResult osgDB::FileCache::base_readImage(const std::string & originalFileName, const osgDB::Options * options) const function, expected prototype:\nosgDB::ReaderWriter::ReadResult osgDB::FileCache::base_readImage(const std::string & originalFileName, const osgDB::Options * options) const\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string originalFileName(lua_tostring(L,2),lua_objlen(L,2));
		const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3));

		osgDB::FileCache* self=Luna< osg::Referenced >::checkSubType< osgDB::FileCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::ReadResult osgDB::FileCache::base_readImage(const std::string &, const osgDB::Options *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::ReadResult stack_lret = self->FileCache::readImage(originalFileName, options);
		osgDB::ReaderWriter::ReadResult* lret = new osgDB::ReaderWriter::ReadResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::ReadResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::WriteResult osgDB::FileCache::base_writeImage(const osg::Image & image, const std::string & originalFileName, const osgDB::Options * options) const
	static int _bind_base_writeImage(lua_State *L) {
		if (!_lg_typecheck_base_writeImage(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::WriteResult osgDB::FileCache::base_writeImage(const osg::Image & image, const std::string & originalFileName, const osgDB::Options * options) const function, expected prototype:\nosgDB::ReaderWriter::WriteResult osgDB::FileCache::base_writeImage(const osg::Image & image, const std::string & originalFileName, const osgDB::Options * options) const\nClass arguments details:\narg 1 ID = 50169651\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Image* image_ptr=(Luna< osg::Referenced >::checkSubType< osg::Image >(L,2));
		if( !image_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg image in osgDB::FileCache::base_writeImage function");
		}
		const osg::Image & image=*image_ptr;
		std::string originalFileName(lua_tostring(L,3),lua_objlen(L,3));
		const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,4));

		osgDB::FileCache* self=Luna< osg::Referenced >::checkSubType< osgDB::FileCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::WriteResult osgDB::FileCache::base_writeImage(const osg::Image &, const std::string &, const osgDB::Options *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::WriteResult stack_lret = self->FileCache::writeImage(image, originalFileName, options);
		osgDB::ReaderWriter::WriteResult* lret = new osgDB::ReaderWriter::WriteResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::WriteResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::ReadResult osgDB::FileCache::base_readObject(const std::string & originalFileName, const osgDB::Options * options) const
	static int _bind_base_readObject(lua_State *L) {
		if (!_lg_typecheck_base_readObject(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::ReadResult osgDB::FileCache::base_readObject(const std::string & originalFileName, const osgDB::Options * options) const function, expected prototype:\nosgDB::ReaderWriter::ReadResult osgDB::FileCache::base_readObject(const std::string & originalFileName, const osgDB::Options * options) const\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string originalFileName(lua_tostring(L,2),lua_objlen(L,2));
		const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3));

		osgDB::FileCache* self=Luna< osg::Referenced >::checkSubType< osgDB::FileCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::ReadResult osgDB::FileCache::base_readObject(const std::string &, const osgDB::Options *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::ReadResult stack_lret = self->FileCache::readObject(originalFileName, options);
		osgDB::ReaderWriter::ReadResult* lret = new osgDB::ReaderWriter::ReadResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::ReadResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::WriteResult osgDB::FileCache::base_writeObject(const osg::Object & object, const std::string & originalFileName, const osgDB::Options * options) const
	static int _bind_base_writeObject(lua_State *L) {
		if (!_lg_typecheck_base_writeObject(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::WriteResult osgDB::FileCache::base_writeObject(const osg::Object & object, const std::string & originalFileName, const osgDB::Options * options) const function, expected prototype:\nosgDB::ReaderWriter::WriteResult osgDB::FileCache::base_writeObject(const osg::Object & object, const std::string & originalFileName, const osgDB::Options * options) const\nClass arguments details:\narg 1 ID = 50169651\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* object_ptr=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));
		if( !object_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg object in osgDB::FileCache::base_writeObject function");
		}
		const osg::Object & object=*object_ptr;
		std::string originalFileName(lua_tostring(L,3),lua_objlen(L,3));
		const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,4));

		osgDB::FileCache* self=Luna< osg::Referenced >::checkSubType< osgDB::FileCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::WriteResult osgDB::FileCache::base_writeObject(const osg::Object &, const std::string &, const osgDB::Options *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::WriteResult stack_lret = self->FileCache::writeObject(object, originalFileName, options);
		osgDB::ReaderWriter::WriteResult* lret = new osgDB::ReaderWriter::WriteResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::WriteResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::ReadResult osgDB::FileCache::base_readHeightField(const std::string & originalFileName, const osgDB::Options * options) const
	static int _bind_base_readHeightField(lua_State *L) {
		if (!_lg_typecheck_base_readHeightField(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::ReadResult osgDB::FileCache::base_readHeightField(const std::string & originalFileName, const osgDB::Options * options) const function, expected prototype:\nosgDB::ReaderWriter::ReadResult osgDB::FileCache::base_readHeightField(const std::string & originalFileName, const osgDB::Options * options) const\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string originalFileName(lua_tostring(L,2),lua_objlen(L,2));
		const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3));

		osgDB::FileCache* self=Luna< osg::Referenced >::checkSubType< osgDB::FileCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::ReadResult osgDB::FileCache::base_readHeightField(const std::string &, const osgDB::Options *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::ReadResult stack_lret = self->FileCache::readHeightField(originalFileName, options);
		osgDB::ReaderWriter::ReadResult* lret = new osgDB::ReaderWriter::ReadResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::ReadResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::WriteResult osgDB::FileCache::base_writeHeightField(const osg::HeightField & hf, const std::string & originalFileName, const osgDB::Options * options) const
	static int _bind_base_writeHeightField(lua_State *L) {
		if (!_lg_typecheck_base_writeHeightField(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::WriteResult osgDB::FileCache::base_writeHeightField(const osg::HeightField & hf, const std::string & originalFileName, const osgDB::Options * options) const function, expected prototype:\nosgDB::ReaderWriter::WriteResult osgDB::FileCache::base_writeHeightField(const osg::HeightField & hf, const std::string & originalFileName, const osgDB::Options * options) const\nClass arguments details:\narg 1 ID = 50169651\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::HeightField* hf_ptr=(Luna< osg::Referenced >::checkSubType< osg::HeightField >(L,2));
		if( !hf_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg hf in osgDB::FileCache::base_writeHeightField function");
		}
		const osg::HeightField & hf=*hf_ptr;
		std::string originalFileName(lua_tostring(L,3),lua_objlen(L,3));
		const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,4));

		osgDB::FileCache* self=Luna< osg::Referenced >::checkSubType< osgDB::FileCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::WriteResult osgDB::FileCache::base_writeHeightField(const osg::HeightField &, const std::string &, const osgDB::Options *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::WriteResult stack_lret = self->FileCache::writeHeightField(hf, originalFileName, options);
		osgDB::ReaderWriter::WriteResult* lret = new osgDB::ReaderWriter::WriteResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::WriteResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::ReadResult osgDB::FileCache::base_readNode(const std::string & originalFileName, const osgDB::Options * options, bool buildKdTreeIfRequired = true) const
	static int _bind_base_readNode(lua_State *L) {
		if (!_lg_typecheck_base_readNode(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::ReadResult osgDB::FileCache::base_readNode(const std::string & originalFileName, const osgDB::Options * options, bool buildKdTreeIfRequired = true) const function, expected prototype:\nosgDB::ReaderWriter::ReadResult osgDB::FileCache::base_readNode(const std::string & originalFileName, const osgDB::Options * options, bool buildKdTreeIfRequired = true) const\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		std::string originalFileName(lua_tostring(L,2),lua_objlen(L,2));
		const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3));
		bool buildKdTreeIfRequired=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)true;

		osgDB::FileCache* self=Luna< osg::Referenced >::checkSubType< osgDB::FileCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::ReadResult osgDB::FileCache::base_readNode(const std::string &, const osgDB::Options *, bool) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::ReadResult stack_lret = self->FileCache::readNode(originalFileName, options, buildKdTreeIfRequired);
		osgDB::ReaderWriter::ReadResult* lret = new osgDB::ReaderWriter::ReadResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::ReadResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::WriteResult osgDB::FileCache::base_writeNode(const osg::Node & node, const std::string & originalFileName, const osgDB::Options * options) const
	static int _bind_base_writeNode(lua_State *L) {
		if (!_lg_typecheck_base_writeNode(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::WriteResult osgDB::FileCache::base_writeNode(const osg::Node & node, const std::string & originalFileName, const osgDB::Options * options) const function, expected prototype:\nosgDB::ReaderWriter::WriteResult osgDB::FileCache::base_writeNode(const osg::Node & node, const std::string & originalFileName, const osgDB::Options * options) const\nClass arguments details:\narg 1 ID = 50169651\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Node* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgDB::FileCache::base_writeNode function");
		}
		const osg::Node & node=*node_ptr;
		std::string originalFileName(lua_tostring(L,3),lua_objlen(L,3));
		const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,4));

		osgDB::FileCache* self=Luna< osg::Referenced >::checkSubType< osgDB::FileCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::WriteResult osgDB::FileCache::base_writeNode(const osg::Node &, const std::string &, const osgDB::Options *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::WriteResult stack_lret = self->FileCache::writeNode(node, originalFileName, options);
		osgDB::ReaderWriter::WriteResult* lret = new osgDB::ReaderWriter::WriteResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::WriteResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::ReadResult osgDB::FileCache::base_readShader(const std::string & originalFileName, const osgDB::Options * options) const
	static int _bind_base_readShader(lua_State *L) {
		if (!_lg_typecheck_base_readShader(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::ReadResult osgDB::FileCache::base_readShader(const std::string & originalFileName, const osgDB::Options * options) const function, expected prototype:\nosgDB::ReaderWriter::ReadResult osgDB::FileCache::base_readShader(const std::string & originalFileName, const osgDB::Options * options) const\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string originalFileName(lua_tostring(L,2),lua_objlen(L,2));
		const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3));

		osgDB::FileCache* self=Luna< osg::Referenced >::checkSubType< osgDB::FileCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::ReadResult osgDB::FileCache::base_readShader(const std::string &, const osgDB::Options *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::ReadResult stack_lret = self->FileCache::readShader(originalFileName, options);
		osgDB::ReaderWriter::ReadResult* lret = new osgDB::ReaderWriter::ReadResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::ReadResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::WriteResult osgDB::FileCache::base_writeShader(const osg::Shader & shader, const std::string & originalFileName, const osgDB::Options * options) const
	static int _bind_base_writeShader(lua_State *L) {
		if (!_lg_typecheck_base_writeShader(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::WriteResult osgDB::FileCache::base_writeShader(const osg::Shader & shader, const std::string & originalFileName, const osgDB::Options * options) const function, expected prototype:\nosgDB::ReaderWriter::WriteResult osgDB::FileCache::base_writeShader(const osg::Shader & shader, const std::string & originalFileName, const osgDB::Options * options) const\nClass arguments details:\narg 1 ID = 50169651\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Shader* shader_ptr=(Luna< osg::Referenced >::checkSubType< osg::Shader >(L,2));
		if( !shader_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg shader in osgDB::FileCache::base_writeShader function");
		}
		const osg::Shader & shader=*shader_ptr;
		std::string originalFileName(lua_tostring(L,3),lua_objlen(L,3));
		const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,4));

		osgDB::FileCache* self=Luna< osg::Referenced >::checkSubType< osgDB::FileCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::WriteResult osgDB::FileCache::base_writeShader(const osg::Shader &, const std::string &, const osgDB::Options *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::WriteResult stack_lret = self->FileCache::writeShader(shader, originalFileName, options);
		osgDB::ReaderWriter::WriteResult* lret = new osgDB::ReaderWriter::WriteResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::WriteResult >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

osgDB::FileCache* LunaTraits< osgDB::FileCache >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgDB_FileCache::_bind_ctor(L);
}

void LunaTraits< osgDB::FileCache >::_bind_dtor(osgDB::FileCache* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgDB::FileCache >::className[] = "FileCache";
const char LunaTraits< osgDB::FileCache >::fullName[] = "osgDB::FileCache";
const char LunaTraits< osgDB::FileCache >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::FileCache >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osgDB::FileCache >::hash = 49055247;
const int LunaTraits< osgDB::FileCache >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgDB::FileCache >::methods[] = {
	{"getFileCachePath", &luna_wrapper_osgDB_FileCache::_bind_getFileCachePath},
	{"isFileAppropriateForFileCache", &luna_wrapper_osgDB_FileCache::_bind_isFileAppropriateForFileCache},
	{"createCacheFileName", &luna_wrapper_osgDB_FileCache::_bind_createCacheFileName},
	{"existsInCache", &luna_wrapper_osgDB_FileCache::_bind_existsInCache},
	{"readImage", &luna_wrapper_osgDB_FileCache::_bind_readImage},
	{"writeImage", &luna_wrapper_osgDB_FileCache::_bind_writeImage},
	{"readObject", &luna_wrapper_osgDB_FileCache::_bind_readObject},
	{"writeObject", &luna_wrapper_osgDB_FileCache::_bind_writeObject},
	{"readHeightField", &luna_wrapper_osgDB_FileCache::_bind_readHeightField},
	{"writeHeightField", &luna_wrapper_osgDB_FileCache::_bind_writeHeightField},
	{"readNode", &luna_wrapper_osgDB_FileCache::_bind_readNode},
	{"writeNode", &luna_wrapper_osgDB_FileCache::_bind_writeNode},
	{"readShader", &luna_wrapper_osgDB_FileCache::_bind_readShader},
	{"writeShader", &luna_wrapper_osgDB_FileCache::_bind_writeShader},
	{"loadDatabaseRevisionsForFile", &luna_wrapper_osgDB_FileCache::_bind_loadDatabaseRevisionsForFile},
	{"getDatabaseRevisionsList", &luna_wrapper_osgDB_FileCache::_bind_getDatabaseRevisionsList},
	{"isCachedFileBlackListed", &luna_wrapper_osgDB_FileCache::_bind_isCachedFileBlackListed},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgDB_FileCache::_bind_base_setThreadSafeRefUnref},
	{"base_isFileAppropriateForFileCache", &luna_wrapper_osgDB_FileCache::_bind_base_isFileAppropriateForFileCache},
	{"base_createCacheFileName", &luna_wrapper_osgDB_FileCache::_bind_base_createCacheFileName},
	{"base_existsInCache", &luna_wrapper_osgDB_FileCache::_bind_base_existsInCache},
	{"base_readImage", &luna_wrapper_osgDB_FileCache::_bind_base_readImage},
	{"base_writeImage", &luna_wrapper_osgDB_FileCache::_bind_base_writeImage},
	{"base_readObject", &luna_wrapper_osgDB_FileCache::_bind_base_readObject},
	{"base_writeObject", &luna_wrapper_osgDB_FileCache::_bind_base_writeObject},
	{"base_readHeightField", &luna_wrapper_osgDB_FileCache::_bind_base_readHeightField},
	{"base_writeHeightField", &luna_wrapper_osgDB_FileCache::_bind_base_writeHeightField},
	{"base_readNode", &luna_wrapper_osgDB_FileCache::_bind_base_readNode},
	{"base_writeNode", &luna_wrapper_osgDB_FileCache::_bind_base_writeNode},
	{"base_readShader", &luna_wrapper_osgDB_FileCache::_bind_base_readShader},
	{"base_writeShader", &luna_wrapper_osgDB_FileCache::_bind_base_writeShader},
	{"fromVoid", &luna_wrapper_osgDB_FileCache::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgDB_FileCache::_bind_asVoid},
	{"getTable", &luna_wrapper_osgDB_FileCache::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::FileCache >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgDB_FileCache::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::FileCache >::enumValues[] = {
	{0,0}
};



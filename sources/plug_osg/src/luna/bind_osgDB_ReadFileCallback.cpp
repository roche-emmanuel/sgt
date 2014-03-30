#include <plug_common.h>

#include <luna/wrappers/wrapper_osgDB_ReadFileCallback.h>

class luna_wrapper_osgDB_ReadFileCallback {
public:
	typedef Luna< osgDB::ReadFileCallback > luna_t;

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

		osgDB::ReadFileCallback* self= (osgDB::ReadFileCallback*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgDB::ReadFileCallback >::push(L,self,false);
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
		//osgDB::ReadFileCallback* ptr= dynamic_cast< osgDB::ReadFileCallback* >(Luna< osg::Referenced >::check(L,1));
		osgDB::ReadFileCallback* ptr= luna_caster< osg::Referenced, osgDB::ReadFileCallback >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgDB::ReadFileCallback >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_openArchive(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readObject(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readImage(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readHeightField(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readNode(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readShader(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_openArchive(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_readObject(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_readImage(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_readHeightField(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_readNode(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_readShader(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgDB::ReadFileCallback::ReadFileCallback()
	static osgDB::ReadFileCallback* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReadFileCallback::ReadFileCallback() function, expected prototype:\nosgDB::ReadFileCallback::ReadFileCallback()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osgDB::ReadFileCallback();
	}

	// osgDB::ReadFileCallback::ReadFileCallback(lua_Table * data)
	static osgDB::ReadFileCallback* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReadFileCallback::ReadFileCallback(lua_Table * data) function, expected prototype:\nosgDB::ReadFileCallback::ReadFileCallback(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgDB_ReadFileCallback(L,NULL);
	}

	// Overload binder for osgDB::ReadFileCallback::ReadFileCallback
	static osgDB::ReadFileCallback* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function ReadFileCallback, cannot match any of the overloads for function ReadFileCallback:\n  ReadFileCallback()\n  ReadFileCallback(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// osgDB::ReaderWriter::ReadResult osgDB::ReadFileCallback::openArchive(const std::string & filename, osgDB::ReaderWriter::ArchiveStatus status, unsigned int indexBlockSizeHint, const osgDB::Options * useObjectCache)
	static int _bind_openArchive(lua_State *L) {
		if (!_lg_typecheck_openArchive(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::ReadResult osgDB::ReadFileCallback::openArchive(const std::string & filename, osgDB::ReaderWriter::ArchiveStatus status, unsigned int indexBlockSizeHint, const osgDB::Options * useObjectCache) function, expected prototype:\nosgDB::ReaderWriter::ReadResult osgDB::ReadFileCallback::openArchive(const std::string & filename, osgDB::ReaderWriter::ArchiveStatus status, unsigned int indexBlockSizeHint, const osgDB::Options * useObjectCache)\nClass arguments details:\narg 4 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string filename(lua_tostring(L,2),lua_objlen(L,2));
		osgDB::ReaderWriter::ArchiveStatus status=(osgDB::ReaderWriter::ArchiveStatus)lua_tointeger(L,3);
		unsigned int indexBlockSizeHint=(unsigned int)lua_tointeger(L,4);
		const osgDB::Options* useObjectCache=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,5));

		osgDB::ReadFileCallback* self=Luna< osg::Referenced >::checkSubType< osgDB::ReadFileCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::ReadResult osgDB::ReadFileCallback::openArchive(const std::string &, osgDB::ReaderWriter::ArchiveStatus, unsigned int, const osgDB::Options *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::ReadResult stack_lret = self->openArchive(filename, status, indexBlockSizeHint, useObjectCache);
		osgDB::ReaderWriter::ReadResult* lret = new osgDB::ReaderWriter::ReadResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::ReadResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::ReadResult osgDB::ReadFileCallback::readObject(const std::string & filename, const osgDB::Options * options)
	static int _bind_readObject(lua_State *L) {
		if (!_lg_typecheck_readObject(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::ReadResult osgDB::ReadFileCallback::readObject(const std::string & filename, const osgDB::Options * options) function, expected prototype:\nosgDB::ReaderWriter::ReadResult osgDB::ReadFileCallback::readObject(const std::string & filename, const osgDB::Options * options)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string filename(lua_tostring(L,2),lua_objlen(L,2));
		const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3));

		osgDB::ReadFileCallback* self=Luna< osg::Referenced >::checkSubType< osgDB::ReadFileCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::ReadResult osgDB::ReadFileCallback::readObject(const std::string &, const osgDB::Options *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::ReadResult stack_lret = self->readObject(filename, options);
		osgDB::ReaderWriter::ReadResult* lret = new osgDB::ReaderWriter::ReadResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::ReadResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::ReadResult osgDB::ReadFileCallback::readImage(const std::string & filename, const osgDB::Options * options)
	static int _bind_readImage(lua_State *L) {
		if (!_lg_typecheck_readImage(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::ReadResult osgDB::ReadFileCallback::readImage(const std::string & filename, const osgDB::Options * options) function, expected prototype:\nosgDB::ReaderWriter::ReadResult osgDB::ReadFileCallback::readImage(const std::string & filename, const osgDB::Options * options)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string filename(lua_tostring(L,2),lua_objlen(L,2));
		const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3));

		osgDB::ReadFileCallback* self=Luna< osg::Referenced >::checkSubType< osgDB::ReadFileCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::ReadResult osgDB::ReadFileCallback::readImage(const std::string &, const osgDB::Options *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::ReadResult stack_lret = self->readImage(filename, options);
		osgDB::ReaderWriter::ReadResult* lret = new osgDB::ReaderWriter::ReadResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::ReadResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::ReadResult osgDB::ReadFileCallback::readHeightField(const std::string & filename, const osgDB::Options * options)
	static int _bind_readHeightField(lua_State *L) {
		if (!_lg_typecheck_readHeightField(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::ReadResult osgDB::ReadFileCallback::readHeightField(const std::string & filename, const osgDB::Options * options) function, expected prototype:\nosgDB::ReaderWriter::ReadResult osgDB::ReadFileCallback::readHeightField(const std::string & filename, const osgDB::Options * options)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string filename(lua_tostring(L,2),lua_objlen(L,2));
		const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3));

		osgDB::ReadFileCallback* self=Luna< osg::Referenced >::checkSubType< osgDB::ReadFileCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::ReadResult osgDB::ReadFileCallback::readHeightField(const std::string &, const osgDB::Options *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::ReadResult stack_lret = self->readHeightField(filename, options);
		osgDB::ReaderWriter::ReadResult* lret = new osgDB::ReaderWriter::ReadResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::ReadResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::ReadResult osgDB::ReadFileCallback::readNode(const std::string & filename, const osgDB::Options * options)
	static int _bind_readNode(lua_State *L) {
		if (!_lg_typecheck_readNode(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::ReadResult osgDB::ReadFileCallback::readNode(const std::string & filename, const osgDB::Options * options) function, expected prototype:\nosgDB::ReaderWriter::ReadResult osgDB::ReadFileCallback::readNode(const std::string & filename, const osgDB::Options * options)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string filename(lua_tostring(L,2),lua_objlen(L,2));
		const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3));

		osgDB::ReadFileCallback* self=Luna< osg::Referenced >::checkSubType< osgDB::ReadFileCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::ReadResult osgDB::ReadFileCallback::readNode(const std::string &, const osgDB::Options *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::ReadResult stack_lret = self->readNode(filename, options);
		osgDB::ReaderWriter::ReadResult* lret = new osgDB::ReaderWriter::ReadResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::ReadResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::ReadResult osgDB::ReadFileCallback::readShader(const std::string & filename, const osgDB::Options * options)
	static int _bind_readShader(lua_State *L) {
		if (!_lg_typecheck_readShader(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::ReadResult osgDB::ReadFileCallback::readShader(const std::string & filename, const osgDB::Options * options) function, expected prototype:\nosgDB::ReaderWriter::ReadResult osgDB::ReadFileCallback::readShader(const std::string & filename, const osgDB::Options * options)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string filename(lua_tostring(L,2),lua_objlen(L,2));
		const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3));

		osgDB::ReadFileCallback* self=Luna< osg::Referenced >::checkSubType< osgDB::ReadFileCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::ReadResult osgDB::ReadFileCallback::readShader(const std::string &, const osgDB::Options *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::ReadResult stack_lret = self->readShader(filename, options);
		osgDB::ReaderWriter::ReadResult* lret = new osgDB::ReaderWriter::ReadResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::ReadResult >::push(L,lret,true);

		return 1;
	}

	// void osgDB::ReadFileCallback::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::ReadFileCallback::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgDB::ReadFileCallback::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgDB::ReadFileCallback* self=Luna< osg::Referenced >::checkSubType< osgDB::ReadFileCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::ReadFileCallback::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ReadFileCallback::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// osgDB::ReaderWriter::ReadResult osgDB::ReadFileCallback::base_openArchive(const std::string & filename, osgDB::ReaderWriter::ArchiveStatus status, unsigned int indexBlockSizeHint, const osgDB::Options * useObjectCache)
	static int _bind_base_openArchive(lua_State *L) {
		if (!_lg_typecheck_base_openArchive(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::ReadResult osgDB::ReadFileCallback::base_openArchive(const std::string & filename, osgDB::ReaderWriter::ArchiveStatus status, unsigned int indexBlockSizeHint, const osgDB::Options * useObjectCache) function, expected prototype:\nosgDB::ReaderWriter::ReadResult osgDB::ReadFileCallback::base_openArchive(const std::string & filename, osgDB::ReaderWriter::ArchiveStatus status, unsigned int indexBlockSizeHint, const osgDB::Options * useObjectCache)\nClass arguments details:\narg 4 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string filename(lua_tostring(L,2),lua_objlen(L,2));
		osgDB::ReaderWriter::ArchiveStatus status=(osgDB::ReaderWriter::ArchiveStatus)lua_tointeger(L,3);
		unsigned int indexBlockSizeHint=(unsigned int)lua_tointeger(L,4);
		const osgDB::Options* useObjectCache=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,5));

		osgDB::ReadFileCallback* self=Luna< osg::Referenced >::checkSubType< osgDB::ReadFileCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::ReadResult osgDB::ReadFileCallback::base_openArchive(const std::string &, osgDB::ReaderWriter::ArchiveStatus, unsigned int, const osgDB::Options *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::ReadResult stack_lret = self->ReadFileCallback::openArchive(filename, status, indexBlockSizeHint, useObjectCache);
		osgDB::ReaderWriter::ReadResult* lret = new osgDB::ReaderWriter::ReadResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::ReadResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::ReadResult osgDB::ReadFileCallback::base_readObject(const std::string & filename, const osgDB::Options * options)
	static int _bind_base_readObject(lua_State *L) {
		if (!_lg_typecheck_base_readObject(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::ReadResult osgDB::ReadFileCallback::base_readObject(const std::string & filename, const osgDB::Options * options) function, expected prototype:\nosgDB::ReaderWriter::ReadResult osgDB::ReadFileCallback::base_readObject(const std::string & filename, const osgDB::Options * options)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string filename(lua_tostring(L,2),lua_objlen(L,2));
		const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3));

		osgDB::ReadFileCallback* self=Luna< osg::Referenced >::checkSubType< osgDB::ReadFileCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::ReadResult osgDB::ReadFileCallback::base_readObject(const std::string &, const osgDB::Options *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::ReadResult stack_lret = self->ReadFileCallback::readObject(filename, options);
		osgDB::ReaderWriter::ReadResult* lret = new osgDB::ReaderWriter::ReadResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::ReadResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::ReadResult osgDB::ReadFileCallback::base_readImage(const std::string & filename, const osgDB::Options * options)
	static int _bind_base_readImage(lua_State *L) {
		if (!_lg_typecheck_base_readImage(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::ReadResult osgDB::ReadFileCallback::base_readImage(const std::string & filename, const osgDB::Options * options) function, expected prototype:\nosgDB::ReaderWriter::ReadResult osgDB::ReadFileCallback::base_readImage(const std::string & filename, const osgDB::Options * options)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string filename(lua_tostring(L,2),lua_objlen(L,2));
		const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3));

		osgDB::ReadFileCallback* self=Luna< osg::Referenced >::checkSubType< osgDB::ReadFileCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::ReadResult osgDB::ReadFileCallback::base_readImage(const std::string &, const osgDB::Options *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::ReadResult stack_lret = self->ReadFileCallback::readImage(filename, options);
		osgDB::ReaderWriter::ReadResult* lret = new osgDB::ReaderWriter::ReadResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::ReadResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::ReadResult osgDB::ReadFileCallback::base_readHeightField(const std::string & filename, const osgDB::Options * options)
	static int _bind_base_readHeightField(lua_State *L) {
		if (!_lg_typecheck_base_readHeightField(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::ReadResult osgDB::ReadFileCallback::base_readHeightField(const std::string & filename, const osgDB::Options * options) function, expected prototype:\nosgDB::ReaderWriter::ReadResult osgDB::ReadFileCallback::base_readHeightField(const std::string & filename, const osgDB::Options * options)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string filename(lua_tostring(L,2),lua_objlen(L,2));
		const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3));

		osgDB::ReadFileCallback* self=Luna< osg::Referenced >::checkSubType< osgDB::ReadFileCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::ReadResult osgDB::ReadFileCallback::base_readHeightField(const std::string &, const osgDB::Options *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::ReadResult stack_lret = self->ReadFileCallback::readHeightField(filename, options);
		osgDB::ReaderWriter::ReadResult* lret = new osgDB::ReaderWriter::ReadResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::ReadResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::ReadResult osgDB::ReadFileCallback::base_readNode(const std::string & filename, const osgDB::Options * options)
	static int _bind_base_readNode(lua_State *L) {
		if (!_lg_typecheck_base_readNode(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::ReadResult osgDB::ReadFileCallback::base_readNode(const std::string & filename, const osgDB::Options * options) function, expected prototype:\nosgDB::ReaderWriter::ReadResult osgDB::ReadFileCallback::base_readNode(const std::string & filename, const osgDB::Options * options)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string filename(lua_tostring(L,2),lua_objlen(L,2));
		const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3));

		osgDB::ReadFileCallback* self=Luna< osg::Referenced >::checkSubType< osgDB::ReadFileCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::ReadResult osgDB::ReadFileCallback::base_readNode(const std::string &, const osgDB::Options *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::ReadResult stack_lret = self->ReadFileCallback::readNode(filename, options);
		osgDB::ReaderWriter::ReadResult* lret = new osgDB::ReaderWriter::ReadResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::ReadResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::ReadResult osgDB::ReadFileCallback::base_readShader(const std::string & filename, const osgDB::Options * options)
	static int _bind_base_readShader(lua_State *L) {
		if (!_lg_typecheck_base_readShader(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::ReadResult osgDB::ReadFileCallback::base_readShader(const std::string & filename, const osgDB::Options * options) function, expected prototype:\nosgDB::ReaderWriter::ReadResult osgDB::ReadFileCallback::base_readShader(const std::string & filename, const osgDB::Options * options)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string filename(lua_tostring(L,2),lua_objlen(L,2));
		const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3));

		osgDB::ReadFileCallback* self=Luna< osg::Referenced >::checkSubType< osgDB::ReadFileCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::ReadResult osgDB::ReadFileCallback::base_readShader(const std::string &, const osgDB::Options *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::ReadResult stack_lret = self->ReadFileCallback::readShader(filename, options);
		osgDB::ReaderWriter::ReadResult* lret = new osgDB::ReaderWriter::ReadResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::ReadResult >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

osgDB::ReadFileCallback* LunaTraits< osgDB::ReadFileCallback >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgDB_ReadFileCallback::_bind_ctor(L);
}

void LunaTraits< osgDB::ReadFileCallback >::_bind_dtor(osgDB::ReadFileCallback* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgDB::ReadFileCallback >::className[] = "ReadFileCallback";
const char LunaTraits< osgDB::ReadFileCallback >::fullName[] = "osgDB::ReadFileCallback";
const char LunaTraits< osgDB::ReadFileCallback >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::ReadFileCallback >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osgDB::ReadFileCallback >::hash = 62122010;
const int LunaTraits< osgDB::ReadFileCallback >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgDB::ReadFileCallback >::methods[] = {
	{"openArchive", &luna_wrapper_osgDB_ReadFileCallback::_bind_openArchive},
	{"readObject", &luna_wrapper_osgDB_ReadFileCallback::_bind_readObject},
	{"readImage", &luna_wrapper_osgDB_ReadFileCallback::_bind_readImage},
	{"readHeightField", &luna_wrapper_osgDB_ReadFileCallback::_bind_readHeightField},
	{"readNode", &luna_wrapper_osgDB_ReadFileCallback::_bind_readNode},
	{"readShader", &luna_wrapper_osgDB_ReadFileCallback::_bind_readShader},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgDB_ReadFileCallback::_bind_base_setThreadSafeRefUnref},
	{"base_openArchive", &luna_wrapper_osgDB_ReadFileCallback::_bind_base_openArchive},
	{"base_readObject", &luna_wrapper_osgDB_ReadFileCallback::_bind_base_readObject},
	{"base_readImage", &luna_wrapper_osgDB_ReadFileCallback::_bind_base_readImage},
	{"base_readHeightField", &luna_wrapper_osgDB_ReadFileCallback::_bind_base_readHeightField},
	{"base_readNode", &luna_wrapper_osgDB_ReadFileCallback::_bind_base_readNode},
	{"base_readShader", &luna_wrapper_osgDB_ReadFileCallback::_bind_base_readShader},
	{"fromVoid", &luna_wrapper_osgDB_ReadFileCallback::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgDB_ReadFileCallback::_bind_asVoid},
	{"getTable", &luna_wrapper_osgDB_ReadFileCallback::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::ReadFileCallback >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgDB_ReadFileCallback::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::ReadFileCallback >::enumValues[] = {
	{0,0}
};



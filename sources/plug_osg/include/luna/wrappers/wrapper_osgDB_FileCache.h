#ifndef _WRAPPERS_WRAPPER_OSGDB_FILECACHE_H_
#define _WRAPPERS_WRAPPER_OSGDB_FILECACHE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <osgDB/FileCache>

class wrapper_osgDB_FileCache : public osgDB::FileCache, public luna_wrapper_base {

public:
		

	~wrapper_osgDB_FileCache() {
		logDEBUG3("Calling delete function for wrapper osgDB_FileCache");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osgDB::FileCache*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgDB_FileCache(lua_State* L, lua_Table* dum, const std::string & path) 
		: osgDB::FileCache(path), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osgDB::FileCache*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void osg::Referenced::setThreadSafeRefUnref(bool threadSafe)
	void setThreadSafeRefUnref(bool threadSafe) {
		if(_obj.pushFunction("setThreadSafeRefUnref")) {
			_obj.pushArg((osgDB::FileCache*)this);
			_obj.pushArg(threadSafe);
			return (_obj.callFunction<void>());
		}

		return FileCache::setThreadSafeRefUnref(threadSafe);
	};

	// bool osgDB::FileCache::isFileAppropriateForFileCache(const std::string & originalFileName) const
	bool isFileAppropriateForFileCache(const std::string & originalFileName) const {
		if(_obj.pushFunction("isFileAppropriateForFileCache")) {
			_obj.pushArg((osgDB::FileCache*)this);
			_obj.pushArg(originalFileName);
			return (_obj.callFunction<bool>());
		}

		return FileCache::isFileAppropriateForFileCache(originalFileName);
	};

	// std::string osgDB::FileCache::createCacheFileName(const std::string & originalFileName) const
	std::string createCacheFileName(const std::string & originalFileName) const {
		if(_obj.pushFunction("createCacheFileName")) {
			_obj.pushArg((osgDB::FileCache*)this);
			_obj.pushArg(originalFileName);
			return (_obj.callFunction<std::string>());
		}

		return FileCache::createCacheFileName(originalFileName);
	};

	// bool osgDB::FileCache::existsInCache(const std::string & originalFileName) const
	bool existsInCache(const std::string & originalFileName) const {
		if(_obj.pushFunction("existsInCache")) {
			_obj.pushArg((osgDB::FileCache*)this);
			_obj.pushArg(originalFileName);
			return (_obj.callFunction<bool>());
		}

		return FileCache::existsInCache(originalFileName);
	};

	// osgDB::ReaderWriter::ReadResult osgDB::FileCache::readImage(const std::string & originalFileName, const osgDB::Options * options) const
	osgDB::ReaderWriter::ReadResult readImage(const std::string & originalFileName, const osgDB::Options * options) const {
		if(_obj.pushFunction("readImage")) {
			_obj.pushArg((osgDB::FileCache*)this);
			_obj.pushArg(originalFileName);
			_obj.pushArg(options);
			return *(_obj.callFunction<osgDB::ReaderWriter::ReadResult*>());
		}

		return FileCache::readImage(originalFileName, options);
	};

	// osgDB::ReaderWriter::WriteResult osgDB::FileCache::writeImage(const osg::Image & image, const std::string & originalFileName, const osgDB::Options * options) const
	osgDB::ReaderWriter::WriteResult writeImage(const osg::Image & image, const std::string & originalFileName, const osgDB::Options * options) const {
		if(_obj.pushFunction("writeImage")) {
			_obj.pushArg((osgDB::FileCache*)this);
			_obj.pushArg(&image);
			_obj.pushArg(originalFileName);
			_obj.pushArg(options);
			return *(_obj.callFunction<osgDB::ReaderWriter::WriteResult*>());
		}

		return FileCache::writeImage(image, originalFileName, options);
	};

	// osgDB::ReaderWriter::ReadResult osgDB::FileCache::readObject(const std::string & originalFileName, const osgDB::Options * options) const
	osgDB::ReaderWriter::ReadResult readObject(const std::string & originalFileName, const osgDB::Options * options) const {
		if(_obj.pushFunction("readObject")) {
			_obj.pushArg((osgDB::FileCache*)this);
			_obj.pushArg(originalFileName);
			_obj.pushArg(options);
			return *(_obj.callFunction<osgDB::ReaderWriter::ReadResult*>());
		}

		return FileCache::readObject(originalFileName, options);
	};

	// osgDB::ReaderWriter::WriteResult osgDB::FileCache::writeObject(const osg::Object & object, const std::string & originalFileName, const osgDB::Options * options) const
	osgDB::ReaderWriter::WriteResult writeObject(const osg::Object & object, const std::string & originalFileName, const osgDB::Options * options) const {
		if(_obj.pushFunction("writeObject")) {
			_obj.pushArg((osgDB::FileCache*)this);
			_obj.pushArg(&object);
			_obj.pushArg(originalFileName);
			_obj.pushArg(options);
			return *(_obj.callFunction<osgDB::ReaderWriter::WriteResult*>());
		}

		return FileCache::writeObject(object, originalFileName, options);
	};

	// osgDB::ReaderWriter::ReadResult osgDB::FileCache::readHeightField(const std::string & originalFileName, const osgDB::Options * options) const
	osgDB::ReaderWriter::ReadResult readHeightField(const std::string & originalFileName, const osgDB::Options * options) const {
		if(_obj.pushFunction("readHeightField")) {
			_obj.pushArg((osgDB::FileCache*)this);
			_obj.pushArg(originalFileName);
			_obj.pushArg(options);
			return *(_obj.callFunction<osgDB::ReaderWriter::ReadResult*>());
		}

		return FileCache::readHeightField(originalFileName, options);
	};

	// osgDB::ReaderWriter::WriteResult osgDB::FileCache::writeHeightField(const osg::HeightField & hf, const std::string & originalFileName, const osgDB::Options * options) const
	osgDB::ReaderWriter::WriteResult writeHeightField(const osg::HeightField & hf, const std::string & originalFileName, const osgDB::Options * options) const {
		if(_obj.pushFunction("writeHeightField")) {
			_obj.pushArg((osgDB::FileCache*)this);
			_obj.pushArg(&hf);
			_obj.pushArg(originalFileName);
			_obj.pushArg(options);
			return *(_obj.callFunction<osgDB::ReaderWriter::WriteResult*>());
		}

		return FileCache::writeHeightField(hf, originalFileName, options);
	};

	// osgDB::ReaderWriter::ReadResult osgDB::FileCache::readNode(const std::string & originalFileName, const osgDB::Options * options, bool buildKdTreeIfRequired = true) const
	osgDB::ReaderWriter::ReadResult readNode(const std::string & originalFileName, const osgDB::Options * options, bool buildKdTreeIfRequired = true) const {
		if(_obj.pushFunction("readNode")) {
			_obj.pushArg((osgDB::FileCache*)this);
			_obj.pushArg(originalFileName);
			_obj.pushArg(options);
			_obj.pushArg(buildKdTreeIfRequired);
			return *(_obj.callFunction<osgDB::ReaderWriter::ReadResult*>());
		}

		return FileCache::readNode(originalFileName, options, buildKdTreeIfRequired);
	};

	// osgDB::ReaderWriter::WriteResult osgDB::FileCache::writeNode(const osg::Node & node, const std::string & originalFileName, const osgDB::Options * options) const
	osgDB::ReaderWriter::WriteResult writeNode(const osg::Node & node, const std::string & originalFileName, const osgDB::Options * options) const {
		if(_obj.pushFunction("writeNode")) {
			_obj.pushArg((osgDB::FileCache*)this);
			_obj.pushArg(&node);
			_obj.pushArg(originalFileName);
			_obj.pushArg(options);
			return *(_obj.callFunction<osgDB::ReaderWriter::WriteResult*>());
		}

		return FileCache::writeNode(node, originalFileName, options);
	};

	// osgDB::ReaderWriter::ReadResult osgDB::FileCache::readShader(const std::string & originalFileName, const osgDB::Options * options) const
	osgDB::ReaderWriter::ReadResult readShader(const std::string & originalFileName, const osgDB::Options * options) const {
		if(_obj.pushFunction("readShader")) {
			_obj.pushArg((osgDB::FileCache*)this);
			_obj.pushArg(originalFileName);
			_obj.pushArg(options);
			return *(_obj.callFunction<osgDB::ReaderWriter::ReadResult*>());
		}

		return FileCache::readShader(originalFileName, options);
	};

	// osgDB::ReaderWriter::WriteResult osgDB::FileCache::writeShader(const osg::Shader & shader, const std::string & originalFileName, const osgDB::Options * options) const
	osgDB::ReaderWriter::WriteResult writeShader(const osg::Shader & shader, const std::string & originalFileName, const osgDB::Options * options) const {
		if(_obj.pushFunction("writeShader")) {
			_obj.pushArg((osgDB::FileCache*)this);
			_obj.pushArg(&shader);
			_obj.pushArg(originalFileName);
			_obj.pushArg(options);
			return *(_obj.callFunction<osgDB::ReaderWriter::WriteResult*>());
		}

		return FileCache::writeShader(shader, originalFileName, options);
	};


	// Protected non-virtual methods:
	// osgDB::FileList * osgDB::FileCache::readFileList(const std::string & originalFileName) const
	osgDB::FileList * public_readFileList(const std::string & originalFileName) const {
		return osgDB::FileCache::readFileList(originalFileName);
	};

	// bool osgDB::FileCache::removeFileFromBlackListed(const std::string & originalFileName) const
	bool public_removeFileFromBlackListed(const std::string & originalFileName) const {
		return osgDB::FileCache::removeFileFromBlackListed(originalFileName);
	};

	// void osg::Referenced::signalObserversAndDelete(bool signalDelete, bool doDelete) const
	void public_signalObserversAndDelete(bool signalDelete, bool doDelete) const {
		return osg::Referenced::signalObserversAndDelete(signalDelete, doDelete);
	};

	// void osg::Referenced::deleteUsingDeleteHandler() const
	void public_deleteUsingDeleteHandler() const {
		return osg::Referenced::deleteUsingDeleteHandler();
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_readFileList(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_removeFileFromBlackListed(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_signalObserversAndDelete(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_deleteUsingDeleteHandler(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Protected non-virtual function binds:
	// osgDB::FileList * osgDB::FileCache::public_readFileList(const std::string & originalFileName) const
	static int _bind_public_readFileList(lua_State *L) {
		if (!_lg_typecheck_public_readFileList(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::FileList * osgDB::FileCache::public_readFileList(const std::string & originalFileName) const function, expected prototype:\nosgDB::FileList * osgDB::FileCache::public_readFileList(const std::string & originalFileName) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string originalFileName(lua_tostring(L,2),lua_objlen(L,2));

		wrapper_osgDB_FileCache* self=Luna< osg::Referenced >::checkSubType< wrapper_osgDB_FileCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::FileList * osgDB::FileCache::public_readFileList(const std::string &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::FileList * lret = self->public_readFileList(originalFileName);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::FileList >::push(L,lret,false);

		return 1;
	}

	// bool osgDB::FileCache::public_removeFileFromBlackListed(const std::string & originalFileName) const
	static int _bind_public_removeFileFromBlackListed(lua_State *L) {
		if (!_lg_typecheck_public_removeFileFromBlackListed(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::FileCache::public_removeFileFromBlackListed(const std::string & originalFileName) const function, expected prototype:\nbool osgDB::FileCache::public_removeFileFromBlackListed(const std::string & originalFileName) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string originalFileName(lua_tostring(L,2),lua_objlen(L,2));

		wrapper_osgDB_FileCache* self=Luna< osg::Referenced >::checkSubType< wrapper_osgDB_FileCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::FileCache::public_removeFileFromBlackListed(const std::string &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->public_removeFileFromBlackListed(originalFileName);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const
	static int _bind_public_signalObserversAndDelete(lua_State *L) {
		if (!_lg_typecheck_public_signalObserversAndDelete(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const function, expected prototype:\nvoid osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool signalDelete=(bool)(lua_toboolean(L,2)==1);
		bool doDelete=(bool)(lua_toboolean(L,3)==1);

		wrapper_osgDB_FileCache* self=Luna< osg::Referenced >::checkSubType< wrapper_osgDB_FileCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_signalObserversAndDelete(bool, bool) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_signalObserversAndDelete(signalDelete, doDelete);

		return 0;
	}

	// void osg::Referenced::public_deleteUsingDeleteHandler() const
	static int _bind_public_deleteUsingDeleteHandler(lua_State *L) {
		if (!_lg_typecheck_public_deleteUsingDeleteHandler(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Referenced::public_deleteUsingDeleteHandler() const function, expected prototype:\nvoid osg::Referenced::public_deleteUsingDeleteHandler() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wrapper_osgDB_FileCache* self=Luna< osg::Referenced >::checkSubType< wrapper_osgDB_FileCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_deleteUsingDeleteHandler() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_deleteUsingDeleteHandler();

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"readFileList",_bind_public_readFileList},
		{"removeFileFromBlackListed",_bind_public_removeFileFromBlackListed},
		{"signalObserversAndDelete",_bind_public_signalObserversAndDelete},
		{"deleteUsingDeleteHandler",_bind_public_deleteUsingDeleteHandler},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif


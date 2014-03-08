#ifndef _WRAPPERS_WRAPPER_OSGDB_READFILECALLBACK_H_
#define _WRAPPERS_WRAPPER_OSGDB_READFILECALLBACK_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <osgDB/Callbacks>

class wrapper_osgDB_ReadFileCallback : public osgDB::ReadFileCallback, public luna_wrapper_base {

public:
		

	~wrapper_osgDB_ReadFileCallback() {
		logDEBUG3("Calling delete function for wrapper osgDB_ReadFileCallback");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osgDB::ReadFileCallback*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgDB_ReadFileCallback(lua_State* L, lua_Table* dum) 
		: osgDB::ReadFileCallback(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osgDB::ReadFileCallback*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void osg::Referenced::setThreadSafeRefUnref(bool threadSafe)
	void setThreadSafeRefUnref(bool threadSafe) {
		if(_obj.pushFunction("setThreadSafeRefUnref")) {
			_obj.pushArg((osgDB::ReadFileCallback*)this);
			_obj.pushArg(threadSafe);
			return (_obj.callFunction<void>());
		}

		return ReadFileCallback::setThreadSafeRefUnref(threadSafe);
	};

	// osgDB::ReaderWriter::ReadResult osgDB::ReadFileCallback::openArchive(const std::string & filename, osgDB::ReaderWriter::ArchiveStatus status, unsigned int indexBlockSizeHint, const osgDB::Options * useObjectCache)
	osgDB::ReaderWriter::ReadResult openArchive(const std::string & filename, osgDB::ReaderWriter::ArchiveStatus status, unsigned int indexBlockSizeHint, const osgDB::Options * useObjectCache) {
		if(_obj.pushFunction("openArchive")) {
			_obj.pushArg((osgDB::ReadFileCallback*)this);
			_obj.pushArg(filename);
			_obj.pushArg((int)status);
			_obj.pushArg(indexBlockSizeHint);
			_obj.pushArg(useObjectCache);
			return *(_obj.callFunction<osgDB::ReaderWriter::ReadResult*>());
		}

		return ReadFileCallback::openArchive(filename, status, indexBlockSizeHint, useObjectCache);
	};

	// osgDB::ReaderWriter::ReadResult osgDB::ReadFileCallback::readObject(const std::string & filename, const osgDB::Options * options)
	osgDB::ReaderWriter::ReadResult readObject(const std::string & filename, const osgDB::Options * options) {
		if(_obj.pushFunction("readObject")) {
			_obj.pushArg((osgDB::ReadFileCallback*)this);
			_obj.pushArg(filename);
			_obj.pushArg(options);
			return *(_obj.callFunction<osgDB::ReaderWriter::ReadResult*>());
		}

		return ReadFileCallback::readObject(filename, options);
	};

	// osgDB::ReaderWriter::ReadResult osgDB::ReadFileCallback::readImage(const std::string & filename, const osgDB::Options * options)
	osgDB::ReaderWriter::ReadResult readImage(const std::string & filename, const osgDB::Options * options) {
		if(_obj.pushFunction("readImage")) {
			_obj.pushArg((osgDB::ReadFileCallback*)this);
			_obj.pushArg(filename);
			_obj.pushArg(options);
			return *(_obj.callFunction<osgDB::ReaderWriter::ReadResult*>());
		}

		return ReadFileCallback::readImage(filename, options);
	};

	// osgDB::ReaderWriter::ReadResult osgDB::ReadFileCallback::readHeightField(const std::string & filename, const osgDB::Options * options)
	osgDB::ReaderWriter::ReadResult readHeightField(const std::string & filename, const osgDB::Options * options) {
		if(_obj.pushFunction("readHeightField")) {
			_obj.pushArg((osgDB::ReadFileCallback*)this);
			_obj.pushArg(filename);
			_obj.pushArg(options);
			return *(_obj.callFunction<osgDB::ReaderWriter::ReadResult*>());
		}

		return ReadFileCallback::readHeightField(filename, options);
	};

	// osgDB::ReaderWriter::ReadResult osgDB::ReadFileCallback::readNode(const std::string & filename, const osgDB::Options * options)
	osgDB::ReaderWriter::ReadResult readNode(const std::string & filename, const osgDB::Options * options) {
		if(_obj.pushFunction("readNode")) {
			_obj.pushArg((osgDB::ReadFileCallback*)this);
			_obj.pushArg(filename);
			_obj.pushArg(options);
			return *(_obj.callFunction<osgDB::ReaderWriter::ReadResult*>());
		}

		return ReadFileCallback::readNode(filename, options);
	};

	// osgDB::ReaderWriter::ReadResult osgDB::ReadFileCallback::readShader(const std::string & filename, const osgDB::Options * options)
	osgDB::ReaderWriter::ReadResult readShader(const std::string & filename, const osgDB::Options * options) {
		if(_obj.pushFunction("readShader")) {
			_obj.pushArg((osgDB::ReadFileCallback*)this);
			_obj.pushArg(filename);
			_obj.pushArg(options);
			return *(_obj.callFunction<osgDB::ReaderWriter::ReadResult*>());
		}

		return ReadFileCallback::readShader(filename, options);
	};


	// Protected non-virtual methods:
	// void osg::Referenced::signalObserversAndDelete(bool signalDelete, bool doDelete) const
	void public_signalObserversAndDelete(bool signalDelete, bool doDelete) const {
		return osg::Referenced::signalObserversAndDelete(signalDelete, doDelete);
	};

	// void osg::Referenced::deleteUsingDeleteHandler() const
	void public_deleteUsingDeleteHandler() const {
		return osg::Referenced::deleteUsingDeleteHandler();
	};


	// Protected non-virtual checkers:
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
	// void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const
	static int _bind_public_signalObserversAndDelete(lua_State *L) {
		if (!_lg_typecheck_public_signalObserversAndDelete(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const function, expected prototype:\nvoid osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool signalDelete=(bool)(lua_toboolean(L,2)==1);
		bool doDelete=(bool)(lua_toboolean(L,3)==1);

		wrapper_osgDB_ReadFileCallback* self=Luna< osg::Referenced >::checkSubType< wrapper_osgDB_ReadFileCallback >(L,1);
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


		wrapper_osgDB_ReadFileCallback* self=Luna< osg::Referenced >::checkSubType< wrapper_osgDB_ReadFileCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_deleteUsingDeleteHandler() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_deleteUsingDeleteHandler();

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
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


#ifndef _WRAPPERS_WRAPPER_OSGDB_ARCHIVE_H_
#define _WRAPPERS_WRAPPER_OSGDB_ARCHIVE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <osgDB/Archive>

class wrapper_osgDB_Archive : public osgDB::Archive, public luna_wrapper_base {

public:
		

	~wrapper_osgDB_Archive() {
		logDEBUG3("Calling delete function for wrapper osgDB_Archive");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osgDB::Archive*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgDB_Archive(lua_State* L, lua_Table* dum) 
		: osgDB::Archive(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osgDB::Archive*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void osg::Object::setThreadSafeRefUnref(bool threadSafe)
	void setThreadSafeRefUnref(bool threadSafe) {
		if(_obj.pushFunction("setThreadSafeRefUnref")) {
			_obj.pushArg((osgDB::Archive*)this);
			_obj.pushArg(threadSafe);
			return (_obj.callFunction<void>());
		}

		return Archive::setThreadSafeRefUnref(threadSafe);
	};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg((osgDB::Archive*)this);
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return Archive::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			_obj.pushArg((osgDB::Archive*)this);
			return (_obj.callFunction<void>());
		}

		return Archive::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg((osgDB::Archive*)this);
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return Archive::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			_obj.pushArg((osgDB::Archive*)this);
			return (_obj.callFunction<osg::Referenced*>());
		}

		return Archive::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			_obj.pushArg((osgDB::Archive*)this);
			return (_obj.callFunction<osg::Referenced*>());
		}

		return Archive::getUserData();
	};

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg((osgDB::Archive*)this);
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return Archive::releaseGLObjects(arg1);
	};

	// osg::Object * osgDB::ReaderWriter::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			_obj.pushArg((osgDB::Archive*)this);
			return (_obj.callFunction<osg::Object*>());
		}

		return Archive::cloneType();
	};

	// osg::Object * osgDB::ReaderWriter::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg((osgDB::Archive*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return Archive::clone(arg1);
	};

	// bool osgDB::ReaderWriter::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg((osgDB::Archive*)this);
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return Archive::isSameKindAs(obj);
	};

	// const osgDB::ReaderWriter::FormatDescriptionMap & osgDB::ReaderWriter::supportedProtocols() const
	const osgDB::ReaderWriter::FormatDescriptionMap & supportedProtocols() const {
		if(_obj.pushFunction("supportedProtocols")) {
			_obj.pushArg((osgDB::Archive*)this);
			return *(_obj.callFunction<osgDB::ReaderWriter::FormatDescriptionMap*>());
		}

		return Archive::supportedProtocols();
	};

	// const osgDB::ReaderWriter::FormatDescriptionMap & osgDB::ReaderWriter::supportedExtensions() const
	const osgDB::ReaderWriter::FormatDescriptionMap & supportedExtensions() const {
		if(_obj.pushFunction("supportedExtensions")) {
			_obj.pushArg((osgDB::Archive*)this);
			return *(_obj.callFunction<osgDB::ReaderWriter::FormatDescriptionMap*>());
		}

		return Archive::supportedExtensions();
	};

	// const osgDB::ReaderWriter::FormatDescriptionMap & osgDB::ReaderWriter::supportedOptions() const
	const osgDB::ReaderWriter::FormatDescriptionMap & supportedOptions() const {
		if(_obj.pushFunction("supportedOptions")) {
			_obj.pushArg((osgDB::Archive*)this);
			return *(_obj.callFunction<osgDB::ReaderWriter::FormatDescriptionMap*>());
		}

		return Archive::supportedOptions();
	};

	// bool osgDB::ReaderWriter::acceptsProtocol(const std::string & protocol) const
	bool acceptsProtocol(const std::string & protocol) const {
		if(_obj.pushFunction("acceptsProtocol")) {
			_obj.pushArg((osgDB::Archive*)this);
			_obj.pushArg(protocol);
			return (_obj.callFunction<bool>());
		}

		return Archive::acceptsProtocol(protocol);
	};

	// osgDB::ReaderWriter::Features osgDB::ReaderWriter::supportedFeatures() const
	osgDB::ReaderWriter::Features supportedFeatures() const {
		if(_obj.pushFunction("supportedFeatures")) {
			_obj.pushArg((osgDB::Archive*)this);
			return (osgDB::ReaderWriter::Features)(_obj.callFunction<int>());
		}

		return Archive::supportedFeatures();
	};

	// osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::openArchive(const std::string & arg1, osgDB::ReaderWriter::ArchiveStatus arg2, unsigned int arg3 = 4096, const osgDB::Options * arg4 = NULL) const
	osgDB::ReaderWriter::ReadResult openArchive(const std::string & arg1, osgDB::ReaderWriter::ArchiveStatus arg2, unsigned int arg3 = 4096, const osgDB::Options * arg4 = NULL) const {
		if(_obj.pushFunction("openArchive")) {
			_obj.pushArg((osgDB::Archive*)this);
			_obj.pushArg(arg1);
			_obj.pushArg((int)arg2);
			_obj.pushArg(arg3);
			_obj.pushArg(arg4);
			return *(_obj.callFunction<osgDB::ReaderWriter::ReadResult*>());
		}

		return Archive::openArchive(arg1, arg2, arg3, arg4);
	};

	// osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::openArchive(std::istream & arg1, const osgDB::Options * arg2 = NULL) const
	osgDB::ReaderWriter::ReadResult openArchive(std::istream & arg1, const osgDB::Options * arg2 = NULL) const {
		if(_obj.pushFunction("openArchive")) {
			_obj.pushArg((osgDB::Archive*)this);
			_obj.pushArg(&arg1);
			_obj.pushArg(arg2);
			return *(_obj.callFunction<osgDB::ReaderWriter::ReadResult*>());
		}

		return Archive::openArchive(arg1, arg2);
	};

	// const char * osgDB::Archive::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			_obj.pushArg((osgDB::Archive*)this);
			return (_obj.callFunction<const char*>());
		}

		return Archive::libraryName();
	};

	// const char * osgDB::Archive::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			_obj.pushArg((osgDB::Archive*)this);
			return (_obj.callFunction<const char*>());
		}

		return Archive::className();
	};

	// bool osgDB::Archive::acceptsExtension(const std::string & arg1) const
	bool acceptsExtension(const std::string & arg1) const {
		if(_obj.pushFunction("acceptsExtension")) {
			_obj.pushArg((osgDB::Archive*)this);
			_obj.pushArg(arg1);
			return (_obj.callFunction<bool>());
		}

		return Archive::acceptsExtension(arg1);
	};

	// void osgDB::Archive::close()
	void close() {
		THROW_IF(!_obj.pushFunction("close"),"No implementation for abstract function osgDB::Archive::close");
		_obj.pushArg((osgDB::Archive*)this);
		return (_obj.callFunction<void>());
	};

	// std::string osgDB::Archive::getArchiveFileName() const
	std::string getArchiveFileName() const {
		THROW_IF(!_obj.pushFunction("getArchiveFileName"),"No implementation for abstract function osgDB::Archive::getArchiveFileName");
		_obj.pushArg((osgDB::Archive*)this);
		return (_obj.callFunction<std::string>());
	};

	// std::string osgDB::Archive::getMasterFileName() const
	std::string getMasterFileName() const {
		THROW_IF(!_obj.pushFunction("getMasterFileName"),"No implementation for abstract function osgDB::Archive::getMasterFileName");
		_obj.pushArg((osgDB::Archive*)this);
		return (_obj.callFunction<std::string>());
	};

	// bool osgDB::Archive::fileExists(const std::string & filename) const
	bool fileExists(const std::string & filename) const {
		THROW_IF(!_obj.pushFunction("fileExists"),"No implementation for abstract function osgDB::Archive::fileExists");
		_obj.pushArg((osgDB::Archive*)this);
		_obj.pushArg(filename);
		return (_obj.callFunction<bool>());
	};

	// osgDB::FileType osgDB::Archive::getFileType(const std::string & filename) const
	osgDB::FileType getFileType(const std::string & filename) const {
		THROW_IF(!_obj.pushFunction("getFileType"),"No implementation for abstract function osgDB::Archive::getFileType");
		_obj.pushArg((osgDB::Archive*)this);
		_obj.pushArg(filename);
		return (osgDB::FileType)(_obj.callFunction<int>());
	};

	// bool osgDB::Archive::getFileNames(osgDB::DirectoryContents & fileNames) const
	bool getFileNames(osgDB::DirectoryContents & fileNames) const {
		THROW_IF(!_obj.pushFunction("getFileNames"),"No implementation for abstract function osgDB::Archive::getFileNames");
		_obj.pushArg((osgDB::Archive*)this);
		_obj.pushArg(&fileNames);
		return (_obj.callFunction<bool>());
	};

	// osgDB::DirectoryContents osgDB::Archive::getDirectoryContents(const std::string & dirName) const
	osgDB::DirectoryContents getDirectoryContents(const std::string & dirName) const {
		if(_obj.pushFunction("getDirectoryContents")) {
			_obj.pushArg((osgDB::Archive*)this);
			_obj.pushArg(dirName);
			return *(_obj.callFunction<osgDB::DirectoryContents*>());
		}

		return Archive::getDirectoryContents(dirName);
	};

	// osgDB::ReaderWriter::ReadResult osgDB::Archive::readObject(const std::string & arg1, const osgDB::Options * arg2 = NULL) const
	osgDB::ReaderWriter::ReadResult readObject(const std::string & arg1, const osgDB::Options * arg2 = NULL) const {
		THROW_IF(!_obj.pushFunction("readObject"),"No implementation for abstract function osgDB::Archive::readObject");
		_obj.pushArg((osgDB::Archive*)this);
		_obj.pushArg(arg1);
		_obj.pushArg(arg2);
		return *(_obj.callFunction<osgDB::ReaderWriter::ReadResult*>());
	};

	// osgDB::ReaderWriter::ReadResult osgDB::Archive::readImage(const std::string & arg1, const osgDB::Options * arg2 = NULL) const
	osgDB::ReaderWriter::ReadResult readImage(const std::string & arg1, const osgDB::Options * arg2 = NULL) const {
		THROW_IF(!_obj.pushFunction("readImage"),"No implementation for abstract function osgDB::Archive::readImage");
		_obj.pushArg((osgDB::Archive*)this);
		_obj.pushArg(arg1);
		_obj.pushArg(arg2);
		return *(_obj.callFunction<osgDB::ReaderWriter::ReadResult*>());
	};

	// osgDB::ReaderWriter::ReadResult osgDB::Archive::readHeightField(const std::string & arg1, const osgDB::Options * arg2 = NULL) const
	osgDB::ReaderWriter::ReadResult readHeightField(const std::string & arg1, const osgDB::Options * arg2 = NULL) const {
		THROW_IF(!_obj.pushFunction("readHeightField"),"No implementation for abstract function osgDB::Archive::readHeightField");
		_obj.pushArg((osgDB::Archive*)this);
		_obj.pushArg(arg1);
		_obj.pushArg(arg2);
		return *(_obj.callFunction<osgDB::ReaderWriter::ReadResult*>());
	};

	// osgDB::ReaderWriter::ReadResult osgDB::Archive::readNode(const std::string & arg1, const osgDB::Options * arg2 = NULL) const
	osgDB::ReaderWriter::ReadResult readNode(const std::string & arg1, const osgDB::Options * arg2 = NULL) const {
		THROW_IF(!_obj.pushFunction("readNode"),"No implementation for abstract function osgDB::Archive::readNode");
		_obj.pushArg((osgDB::Archive*)this);
		_obj.pushArg(arg1);
		_obj.pushArg(arg2);
		return *(_obj.callFunction<osgDB::ReaderWriter::ReadResult*>());
	};

	// osgDB::ReaderWriter::ReadResult osgDB::Archive::readShader(const std::string & arg1, const osgDB::Options * arg2 = NULL) const
	osgDB::ReaderWriter::ReadResult readShader(const std::string & arg1, const osgDB::Options * arg2 = NULL) const {
		THROW_IF(!_obj.pushFunction("readShader"),"No implementation for abstract function osgDB::Archive::readShader");
		_obj.pushArg((osgDB::Archive*)this);
		_obj.pushArg(arg1);
		_obj.pushArg(arg2);
		return *(_obj.callFunction<osgDB::ReaderWriter::ReadResult*>());
	};

	// osgDB::ReaderWriter::WriteResult osgDB::Archive::writeObject(const osg::Object & arg1, const std::string & arg2, const osgDB::Options * arg3 = NULL) const
	osgDB::ReaderWriter::WriteResult writeObject(const osg::Object & arg1, const std::string & arg2, const osgDB::Options * arg3 = NULL) const {
		THROW_IF(!_obj.pushFunction("writeObject"),"No implementation for abstract function osgDB::Archive::writeObject");
		_obj.pushArg((osgDB::Archive*)this);
		_obj.pushArg(&arg1);
		_obj.pushArg(arg2);
		_obj.pushArg(arg3);
		return *(_obj.callFunction<osgDB::ReaderWriter::WriteResult*>());
	};

	// osgDB::ReaderWriter::WriteResult osgDB::Archive::writeImage(const osg::Image & arg1, const std::string & arg2, const osgDB::Options * arg3 = NULL) const
	osgDB::ReaderWriter::WriteResult writeImage(const osg::Image & arg1, const std::string & arg2, const osgDB::Options * arg3 = NULL) const {
		THROW_IF(!_obj.pushFunction("writeImage"),"No implementation for abstract function osgDB::Archive::writeImage");
		_obj.pushArg((osgDB::Archive*)this);
		_obj.pushArg(&arg1);
		_obj.pushArg(arg2);
		_obj.pushArg(arg3);
		return *(_obj.callFunction<osgDB::ReaderWriter::WriteResult*>());
	};

	// osgDB::ReaderWriter::WriteResult osgDB::Archive::writeHeightField(const osg::HeightField & arg1, const std::string & arg2, const osgDB::Options * arg3 = NULL) const
	osgDB::ReaderWriter::WriteResult writeHeightField(const osg::HeightField & arg1, const std::string & arg2, const osgDB::Options * arg3 = NULL) const {
		THROW_IF(!_obj.pushFunction("writeHeightField"),"No implementation for abstract function osgDB::Archive::writeHeightField");
		_obj.pushArg((osgDB::Archive*)this);
		_obj.pushArg(&arg1);
		_obj.pushArg(arg2);
		_obj.pushArg(arg3);
		return *(_obj.callFunction<osgDB::ReaderWriter::WriteResult*>());
	};

	// osgDB::ReaderWriter::WriteResult osgDB::Archive::writeNode(const osg::Node & arg1, const std::string & arg2, const osgDB::Options * arg3 = NULL) const
	osgDB::ReaderWriter::WriteResult writeNode(const osg::Node & arg1, const std::string & arg2, const osgDB::Options * arg3 = NULL) const {
		THROW_IF(!_obj.pushFunction("writeNode"),"No implementation for abstract function osgDB::Archive::writeNode");
		_obj.pushArg((osgDB::Archive*)this);
		_obj.pushArg(&arg1);
		_obj.pushArg(arg2);
		_obj.pushArg(arg3);
		return *(_obj.callFunction<osgDB::ReaderWriter::WriteResult*>());
	};

	// osgDB::ReaderWriter::WriteResult osgDB::Archive::writeShader(const osg::Shader & arg1, const std::string & arg2, const osgDB::Options * arg3 = NULL) const
	osgDB::ReaderWriter::WriteResult writeShader(const osg::Shader & arg1, const std::string & arg2, const osgDB::Options * arg3 = NULL) const {
		THROW_IF(!_obj.pushFunction("writeShader"),"No implementation for abstract function osgDB::Archive::writeShader");
		_obj.pushArg((osgDB::Archive*)this);
		_obj.pushArg(&arg1);
		_obj.pushArg(arg2);
		_obj.pushArg(arg3);
		return *(_obj.callFunction<osgDB::ReaderWriter::WriteResult*>());
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

		wrapper_osgDB_Archive* self=Luna< osg::Referenced >::checkSubType< wrapper_osgDB_Archive >(L,1);
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


		wrapper_osgDB_Archive* self=Luna< osg::Referenced >::checkSubType< wrapper_osgDB_Archive >(L,1);
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


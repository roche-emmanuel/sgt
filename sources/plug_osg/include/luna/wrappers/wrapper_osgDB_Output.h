#ifndef _WRAPPERS_WRAPPER_OSGDB_OUTPUT_H_
#define _WRAPPERS_WRAPPER_OSGDB_OUTPUT_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <osgDB/Output>

class wrapper_osgDB_Output : public osgDB::Output, public luna_wrapper_base {

public:
		

	~wrapper_osgDB_Output() {
		logDEBUG3("Calling delete function for wrapper osgDB_Output");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osgDB::Output*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgDB_Output(lua_State* L, lua_Table* dum) 
		: osgDB::Output(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osgDB::Output*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_osgDB_Output(lua_State* L, lua_Table* dum, const char * name) 
		: osgDB::Output(name), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osgDB::Output*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void osgDB::Output::init()
	void init() {
		if(_obj.pushFunction("init")) {
			_obj.pushArg((osgDB::Output*)this);
			return (_obj.callFunction<void>());
		}

		return Output::init();
	};

public:
	// Public virtual methods:
	// bool osgDB::Output::writeObject(const osg::Object & obj)
	bool writeObject(const osg::Object & obj) {
		if(_obj.pushFunction("writeObject")) {
			_obj.pushArg((osgDB::Output*)this);
			_obj.pushArg(&obj);
			return (_obj.callFunction<bool>());
		}

		return Output::writeObject(obj);
	};

	// void osgDB::Output::writeBeginObject(const std::string & name)
	void writeBeginObject(const std::string & name) {
		if(_obj.pushFunction("writeBeginObject")) {
			_obj.pushArg((osgDB::Output*)this);
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return Output::writeBeginObject(name);
	};

	// void osgDB::Output::writeEndObject()
	void writeEndObject() {
		if(_obj.pushFunction("writeEndObject")) {
			_obj.pushArg((osgDB::Output*)this);
			return (_obj.callFunction<void>());
		}

		return Output::writeEndObject();
	};

	// void osgDB::Output::writeUseID(const std::string & id)
	void writeUseID(const std::string & id) {
		if(_obj.pushFunction("writeUseID")) {
			_obj.pushArg((osgDB::Output*)this);
			_obj.pushArg(id);
			return (_obj.callFunction<void>());
		}

		return Output::writeUseID(id);
	};

	// void osgDB::Output::writeUniqueID(const std::string & id)
	void writeUniqueID(const std::string & id) {
		if(_obj.pushFunction("writeUniqueID")) {
			_obj.pushArg((osgDB::Output*)this);
			_obj.pushArg(id);
			return (_obj.callFunction<void>());
		}

		return Output::writeUniqueID(id);
	};

	// std::string osgDB::Output::getFileNameForOutput(const std::string & filename) const
	std::string getFileNameForOutput(const std::string & filename) const {
		if(_obj.pushFunction("getFileNameForOutput")) {
			_obj.pushArg((osgDB::Output*)this);
			_obj.pushArg(filename);
			return (_obj.callFunction<std::string>());
		}

		return Output::getFileNameForOutput(filename);
	};

	// std::string osgDB::Output::getTextureFileNameForOutput()
	std::string getTextureFileNameForOutput() {
		if(_obj.pushFunction("getTextureFileNameForOutput")) {
			_obj.pushArg((osgDB::Output*)this);
			return (_obj.callFunction<std::string>());
		}

		return Output::getTextureFileNameForOutput();
	};

	// std::string osgDB::Output::getShaderFileNameForOutput()
	std::string getShaderFileNameForOutput() {
		if(_obj.pushFunction("getShaderFileNameForOutput")) {
			_obj.pushArg((osgDB::Output*)this);
			return (_obj.callFunction<std::string>());
		}

		return Output::getShaderFileNameForOutput();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


#ifndef _WRAPPERS_WRAPPER_ORK_FILELOGGER_H_
#define _WRAPPERS_WRAPPER_ORK_FILELOGGER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <ork/core/FileLogger.h>

class wrapper_ork_FileLogger : public ork::FileLogger, public luna_wrapper_base {

public:
		

	~wrapper_ork_FileLogger() {
		logDEBUG3("Calling delete function for wrapper ork_FileLogger");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((ork::FileLogger*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_ork_FileLogger(lua_State* L, lua_Table* dum, const std::string & type, ork::FileLogger::File * out, ork::ptr< ork::Logger > next = NULL) 
		: ork::FileLogger(type, out, next), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((ork::FileLogger*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((ork::FileLogger*)this);
			return (_obj.callFunction<void>());
		}

		return FileLogger::doRelease();
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((ork::FileLogger*)this);
			return (_obj.callFunction<const char*>());
		}

		return FileLogger::toString();
	};

	// void ork::FileLogger::log(const std::string & topic, const std::string & msg)
	void log(const std::string & topic, const std::string & msg) {
		if(_obj.pushFunction("log")) {
			_obj.pushArg((ork::FileLogger*)this);
			_obj.pushArg(topic);
			_obj.pushArg(msg);
			return (_obj.callFunction<void>());
		}

		return FileLogger::log(topic, msg);
	};

	// void ork::FileLogger::flush()
	void flush() {
		if(_obj.pushFunction("flush")) {
			_obj.pushArg((ork::FileLogger*)this);
			return (_obj.callFunction<void>());
		}

		return FileLogger::flush();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


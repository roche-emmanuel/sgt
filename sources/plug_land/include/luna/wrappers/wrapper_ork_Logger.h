#ifndef _WRAPPERS_WRAPPER_ORK_LOGGER_H_
#define _WRAPPERS_WRAPPER_ORK_LOGGER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <ork/core/Logger.h>

class wrapper_ork_Logger : public ork::Logger, public luna_wrapper_base {

public:
		

	~wrapper_ork_Logger() {
		logDEBUG3("Calling delete function for wrapper ork_Logger");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((ork::Logger*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_ork_Logger(lua_State* L, lua_Table* dum, const std::string & type) 
		: ork::Logger(type), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((ork::Logger*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((ork::Logger*)this);
			return (_obj.callFunction<void>());
		}

		return Logger::doRelease();
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((ork::Logger*)this);
			return (_obj.callFunction<const char*>());
		}

		return Logger::toString();
	};

	// void ork::Logger::log(const std::string & topic, const std::string & msg)
	void log(const std::string & topic, const std::string & msg) {
		if(_obj.pushFunction("log")) {
			_obj.pushArg((ork::Logger*)this);
			_obj.pushArg(topic);
			_obj.pushArg(msg);
			return (_obj.callFunction<void>());
		}

		return Logger::log(topic, msg);
	};

	// void ork::Logger::flush()
	void flush() {
		if(_obj.pushFunction("flush")) {
			_obj.pushArg((ork::Logger*)this);
			return (_obj.callFunction<void>());
		}

		return Logger::flush();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


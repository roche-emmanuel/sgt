#ifndef _WRAPPERS_WRAPPER_WXPROTOCOLLOG_H_
#define _WRAPPERS_WRAPPER_WXPROTOCOLLOG_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/protocol/log.h>

class wrapper_wxProtocolLog : public wxProtocolLog, public luna_wrapper_base {

public:
		

	~wrapper_wxProtocolLog() {
		logDEBUG3("Calling delete function for wrapper wxProtocolLog");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxProtocolLog*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxProtocolLog(lua_State* L, lua_Table* dum, const wxString & traceMask) 
		: wxProtocolLog(traceMask), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxProtocolLog*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void wxProtocolLog::DoLogString(const wxString & str)
	void DoLogString(const wxString & str) {
		if(_obj.pushFunction("DoLogString")) {
			_obj.pushArg((wxProtocolLog*)this);
			_obj.pushArg(str);
			return (_obj.callFunction<void>());
		}

		return wxProtocolLog::DoLogString(str);
	};

public:
	// Public virtual methods:
	// void wxProtocolLog::LogRequest(const wxString & str)
	void LogRequest(const wxString & str) {
		if(_obj.pushFunction("LogRequest")) {
			_obj.pushArg((wxProtocolLog*)this);
			_obj.pushArg(str);
			return (_obj.callFunction<void>());
		}

		return wxProtocolLog::LogRequest(str);
	};

	// void wxProtocolLog::LogResponse(const wxString & str)
	void LogResponse(const wxString & str) {
		if(_obj.pushFunction("LogResponse")) {
			_obj.pushArg((wxProtocolLog*)this);
			_obj.pushArg(str);
			return (_obj.callFunction<void>());
		}

		return wxProtocolLog::LogResponse(str);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


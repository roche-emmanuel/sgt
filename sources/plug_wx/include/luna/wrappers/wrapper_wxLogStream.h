#ifndef _WRAPPERS_WRAPPER_WXLOGSTREAM_H_
#define _WRAPPERS_WRAPPER_WXLOGSTREAM_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/log.h>

class wrapper_wxLogStream : public wxLogStream, public luna_wrapper_base {

public:
		

	~wrapper_wxLogStream() {
		logDEBUG3("Calling delete function for wrapper wxLogStream");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxLogStream*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void wxLog::DoLogRecord(unsigned long level, const wxString & msg, const wxLogRecordInfo & info)
	void DoLogRecord(unsigned long level, const wxString & msg, const wxLogRecordInfo & info) {
		if(_obj.pushFunction("DoLogRecord")) {
			_obj.pushArg((wxLogStream*)this);
			_obj.pushArg(level);
			_obj.pushArg(msg);
			_obj.pushArg(&info);
			return (_obj.callFunction<void>());
		}

		return wxLogStream::DoLogRecord(level, msg, info);
	};

	// void wxLog::DoLogTextAtLevel(unsigned long level, const wxString & msg)
	void DoLogTextAtLevel(unsigned long level, const wxString & msg) {
		if(_obj.pushFunction("DoLogTextAtLevel")) {
			_obj.pushArg((wxLogStream*)this);
			_obj.pushArg(level);
			_obj.pushArg(msg);
			return (_obj.callFunction<void>());
		}

		return wxLogStream::DoLogTextAtLevel(level, msg);
	};

	// void wxLog::DoLogText(const wxString & msg)
	void DoLogText(const wxString & msg) {
		if(_obj.pushFunction("DoLogText")) {
			_obj.pushArg((wxLogStream*)this);
			_obj.pushArg(msg);
			return (_obj.callFunction<void>());
		}

		return wxLogStream::DoLogText(msg);
	};

public:
	// Public virtual methods:
	// void wxLog::Flush()
	void Flush() {
		if(_obj.pushFunction("Flush")) {
			_obj.pushArg((wxLogStream*)this);
			return (_obj.callFunction<void>());
		}

		return wxLogStream::Flush();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


#ifndef _WRAPPERS_WRAPPER_WXLOGTEXTCTRL_H_
#define _WRAPPERS_WRAPPER_WXLOGTEXTCTRL_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/log.h>

class wrapper_wxLogTextCtrl : public wxLogTextCtrl, public luna_wrapper_base {

public:
		

	~wrapper_wxLogTextCtrl() {
		logDEBUG3("Calling delete function for wrapper wxLogTextCtrl");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxLogTextCtrl*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxLogTextCtrl(lua_State* L, lua_Table* dum, wxTextCtrl * pTextCtrl) 
		: wxLogTextCtrl(pTextCtrl), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxLogTextCtrl*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void wxLog::DoLogRecord(unsigned long level, const wxString & msg, const wxLogRecordInfo & info)
	void DoLogRecord(unsigned long level, const wxString & msg, const wxLogRecordInfo & info) {
		if(_obj.pushFunction("DoLogRecord")) {
			_obj.pushArg((wxLogTextCtrl*)this);
			_obj.pushArg(level);
			_obj.pushArg(msg);
			_obj.pushArg(&info);
			return (_obj.callFunction<void>());
		}

		return wxLogTextCtrl::DoLogRecord(level, msg, info);
	};

	// void wxLog::DoLogTextAtLevel(unsigned long level, const wxString & msg)
	void DoLogTextAtLevel(unsigned long level, const wxString & msg) {
		if(_obj.pushFunction("DoLogTextAtLevel")) {
			_obj.pushArg((wxLogTextCtrl*)this);
			_obj.pushArg(level);
			_obj.pushArg(msg);
			return (_obj.callFunction<void>());
		}

		return wxLogTextCtrl::DoLogTextAtLevel(level, msg);
	};

	// void wxLog::DoLogText(const wxString & msg)
	void DoLogText(const wxString & msg) {
		if(_obj.pushFunction("DoLogText")) {
			_obj.pushArg((wxLogTextCtrl*)this);
			_obj.pushArg(msg);
			return (_obj.callFunction<void>());
		}

		return wxLogTextCtrl::DoLogText(msg);
	};

public:
	// Public virtual methods:
	// void wxLog::Flush()
	void Flush() {
		if(_obj.pushFunction("Flush")) {
			_obj.pushArg((wxLogTextCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxLogTextCtrl::Flush();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


#ifndef _WRAPPERS_WRAPPER_WXLOGWINDOW_H_
#define _WRAPPERS_WRAPPER_WXLOGWINDOW_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/log.h>

class wrapper_wxLogWindow : public wxLogWindow, public luna_wrapper_base {

public:
		

	~wrapper_wxLogWindow() {
		logDEBUG3("Calling delete function for wrapper wxLogWindow");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxLogWindow*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxLogWindow(lua_State* L, lua_Table* dum, wxWindow * pParent, const wxString & szTitle, bool show = true, bool passToOld = true) 
		: wxLogWindow(pParent, szTitle, show, passToOld), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxLogWindow*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void wxLog::DoLogRecord(unsigned long level, const wxString & msg, const wxLogRecordInfo & info)
	void DoLogRecord(unsigned long level, const wxString & msg, const wxLogRecordInfo & info) {
		if(_obj.pushFunction("DoLogRecord")) {
			_obj.pushArg((wxLogWindow*)this);
			_obj.pushArg(level);
			_obj.pushArg(msg);
			_obj.pushArg(&info);
			return (_obj.callFunction<void>());
		}

		return wxLogWindow::DoLogRecord(level, msg, info);
	};

	// void wxLog::DoLogTextAtLevel(unsigned long level, const wxString & msg)
	void DoLogTextAtLevel(unsigned long level, const wxString & msg) {
		if(_obj.pushFunction("DoLogTextAtLevel")) {
			_obj.pushArg((wxLogWindow*)this);
			_obj.pushArg(level);
			_obj.pushArg(msg);
			return (_obj.callFunction<void>());
		}

		return wxLogWindow::DoLogTextAtLevel(level, msg);
	};

	// void wxLog::DoLogText(const wxString & msg)
	void DoLogText(const wxString & msg) {
		if(_obj.pushFunction("DoLogText")) {
			_obj.pushArg((wxLogWindow*)this);
			_obj.pushArg(msg);
			return (_obj.callFunction<void>());
		}

		return wxLogWindow::DoLogText(msg);
	};

public:
	// Public virtual methods:
	// void wxLog::Flush()
	void Flush() {
		if(_obj.pushFunction("Flush")) {
			_obj.pushArg((wxLogWindow*)this);
			return (_obj.callFunction<void>());
		}

		return wxLogWindow::Flush();
	};

	// bool wxLogWindow::OnFrameClose(wxFrame * frame)
	bool OnFrameClose(wxFrame * frame) {
		if(_obj.pushFunction("OnFrameClose")) {
			_obj.pushArg((wxLogWindow*)this);
			_obj.pushArg(frame);
			return (_obj.callFunction<bool>());
		}

		return wxLogWindow::OnFrameClose(frame);
	};

	// void wxLogWindow::OnFrameCreate(wxFrame * frame)
	void OnFrameCreate(wxFrame * frame) {
		if(_obj.pushFunction("OnFrameCreate")) {
			_obj.pushArg((wxLogWindow*)this);
			_obj.pushArg(frame);
			return (_obj.callFunction<void>());
		}

		return wxLogWindow::OnFrameCreate(frame);
	};

	// void wxLogWindow::OnFrameDelete(wxFrame * frame)
	void OnFrameDelete(wxFrame * frame) {
		if(_obj.pushFunction("OnFrameDelete")) {
			_obj.pushArg((wxLogWindow*)this);
			_obj.pushArg(frame);
			return (_obj.callFunction<void>());
		}

		return wxLogWindow::OnFrameDelete(frame);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


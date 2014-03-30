#ifndef _WRAPPERS_WRAPPER_WXAPPCONSOLE_H_
#define _WRAPPERS_WRAPPER_WXAPPCONSOLE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/app.h>

class wrapper_wxAppConsole : public wxAppConsole, public luna_wrapper_base {

public:
		

	~wrapper_wxAppConsole() {
		logDEBUG3("Calling delete function for wrapper wxAppConsole");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxAppConsole*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxAppConsole*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxAppConsole::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxAppConsole*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxAppConsole::CloneRefData(data);
	};

	// bool wxEvtHandler::TryBefore(wxEvent & event)
	bool TryBefore(wxEvent & event) {
		if(_obj.pushFunction("TryBefore")) {
			_obj.pushArg((wxAppConsole*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxAppConsole::TryBefore(event);
	};

	// bool wxEvtHandler::TryAfter(wxEvent & event)
	bool TryAfter(wxEvent & event) {
		if(_obj.pushFunction("TryAfter")) {
			_obj.pushArg((wxAppConsole*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxAppConsole::TryAfter(event);
	};

	// wxAppTraits * wxAppConsole::CreateTraits()
	wxAppTraits * CreateTraits() {
		if(_obj.pushFunction("CreateTraits")) {
			_obj.pushArg((wxAppConsole*)this);
			return (_obj.callFunction<wxAppTraits*>());
		}

		return wxAppConsole::CreateTraits();
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxAppConsole*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxAppConsole::GetClassInfo();
	};

	// void wxEvtHandler::QueueEvent(wxEvent * event)
	void QueueEvent(wxEvent * event) {
		if(_obj.pushFunction("QueueEvent")) {
			_obj.pushArg((wxAppConsole*)this);
			_obj.pushArg(event);
			return (_obj.callFunction<void>());
		}

		return wxAppConsole::QueueEvent(event);
	};

	// void wxEvtHandler::AddPendingEvent(const wxEvent & event)
	void AddPendingEvent(const wxEvent & event) {
		if(_obj.pushFunction("AddPendingEvent")) {
			_obj.pushArg((wxAppConsole*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<void>());
		}

		return wxAppConsole::AddPendingEvent(event);
	};

	// bool wxEvtHandler::ProcessEvent(wxEvent & event)
	bool ProcessEvent(wxEvent & event) {
		if(_obj.pushFunction("ProcessEvent")) {
			_obj.pushArg((wxAppConsole*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxAppConsole::ProcessEvent(event);
	};

	// void wxEvtHandler::SetNextHandler(wxEvtHandler * handler)
	void SetNextHandler(wxEvtHandler * handler) {
		if(_obj.pushFunction("SetNextHandler")) {
			_obj.pushArg((wxAppConsole*)this);
			_obj.pushArg(handler);
			return (_obj.callFunction<void>());
		}

		return wxAppConsole::SetNextHandler(handler);
	};

	// void wxEvtHandler::SetPreviousHandler(wxEvtHandler * handler)
	void SetPreviousHandler(wxEvtHandler * handler) {
		if(_obj.pushFunction("SetPreviousHandler")) {
			_obj.pushArg((wxAppConsole*)this);
			_obj.pushArg(handler);
			return (_obj.callFunction<void>());
		}

		return wxAppConsole::SetPreviousHandler(handler);
	};

	// int wxAppConsole::MainLoop()
	int MainLoop() {
		if(_obj.pushFunction("MainLoop")) {
			_obj.pushArg((wxAppConsole*)this);
			return (_obj.callFunction<int>());
		}

		return wxAppConsole::MainLoop();
	};

	// void wxAppConsole::ExitMainLoop()
	void ExitMainLoop() {
		if(_obj.pushFunction("ExitMainLoop")) {
			_obj.pushArg((wxAppConsole*)this);
			return (_obj.callFunction<void>());
		}

		return wxAppConsole::ExitMainLoop();
	};

	// int wxAppConsole::FilterEvent(wxEvent & event)
	int FilterEvent(wxEvent & event) {
		if(_obj.pushFunction("FilterEvent")) {
			_obj.pushArg((wxAppConsole*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<int>());
		}

		return wxAppConsole::FilterEvent(event);
	};

	// bool wxAppConsole::UsesEventLoop() const
	bool UsesEventLoop() const {
		if(_obj.pushFunction("UsesEventLoop")) {
			_obj.pushArg((wxAppConsole*)this);
			return (_obj.callFunction<bool>());
		}

		return wxAppConsole::UsesEventLoop();
	};

	// bool wxAppConsole::OnCmdLineError(wxCmdLineParser & parser)
	bool OnCmdLineError(wxCmdLineParser & parser) {
		if(_obj.pushFunction("OnCmdLineError")) {
			_obj.pushArg((wxAppConsole*)this);
			_obj.pushArg(&parser);
			return (_obj.callFunction<bool>());
		}

		return wxAppConsole::OnCmdLineError(parser);
	};

	// bool wxAppConsole::OnCmdLineHelp(wxCmdLineParser & parser)
	bool OnCmdLineHelp(wxCmdLineParser & parser) {
		if(_obj.pushFunction("OnCmdLineHelp")) {
			_obj.pushArg((wxAppConsole*)this);
			_obj.pushArg(&parser);
			return (_obj.callFunction<bool>());
		}

		return wxAppConsole::OnCmdLineHelp(parser);
	};

	// bool wxAppConsole::OnCmdLineParsed(wxCmdLineParser & parser)
	bool OnCmdLineParsed(wxCmdLineParser & parser) {
		if(_obj.pushFunction("OnCmdLineParsed")) {
			_obj.pushArg((wxAppConsole*)this);
			_obj.pushArg(&parser);
			return (_obj.callFunction<bool>());
		}

		return wxAppConsole::OnCmdLineParsed(parser);
	};

	// void wxAppConsole::OnEventLoopEnter(wxEventLoopBase * loop)
	void OnEventLoopEnter(wxEventLoopBase * loop) {
		if(_obj.pushFunction("OnEventLoopEnter")) {
			_obj.pushArg((wxAppConsole*)this);
			_obj.pushArg(loop);
			return (_obj.callFunction<void>());
		}

		return wxAppConsole::OnEventLoopEnter(loop);
	};

	// void wxAppConsole::OnEventLoopExit(wxEventLoopBase * loop)
	void OnEventLoopExit(wxEventLoopBase * loop) {
		if(_obj.pushFunction("OnEventLoopExit")) {
			_obj.pushArg((wxAppConsole*)this);
			_obj.pushArg(loop);
			return (_obj.callFunction<void>());
		}

		return wxAppConsole::OnEventLoopExit(loop);
	};

	// bool wxAppConsole::OnExceptionInMainLoop()
	bool OnExceptionInMainLoop() {
		if(_obj.pushFunction("OnExceptionInMainLoop")) {
			_obj.pushArg((wxAppConsole*)this);
			return (_obj.callFunction<bool>());
		}

		return wxAppConsole::OnExceptionInMainLoop();
	};

	// int wxAppConsole::OnExit()
	int OnExit() {
		if(_obj.pushFunction("OnExit")) {
			_obj.pushArg((wxAppConsole*)this);
			return (_obj.callFunction<int>());
		}

		return wxAppConsole::OnExit();
	};

	// void wxAppConsole::OnFatalException()
	void OnFatalException() {
		if(_obj.pushFunction("OnFatalException")) {
			_obj.pushArg((wxAppConsole*)this);
			return (_obj.callFunction<void>());
		}

		return wxAppConsole::OnFatalException();
	};

	// bool wxAppConsole::OnInit()
	bool OnInit() {
		if(_obj.pushFunction("OnInit")) {
			_obj.pushArg((wxAppConsole*)this);
			return (_obj.callFunction<bool>());
		}

		return wxAppConsole::OnInit();
	};

	// void wxAppConsole::OnInitCmdLine(wxCmdLineParser & parser)
	void OnInitCmdLine(wxCmdLineParser & parser) {
		if(_obj.pushFunction("OnInitCmdLine")) {
			_obj.pushArg((wxAppConsole*)this);
			_obj.pushArg(&parser);
			return (_obj.callFunction<void>());
		}

		return wxAppConsole::OnInitCmdLine(parser);
	};

	// int wxAppConsole::OnRun()
	int OnRun() {
		if(_obj.pushFunction("OnRun")) {
			_obj.pushArg((wxAppConsole*)this);
			return (_obj.callFunction<int>());
		}

		return wxAppConsole::OnRun();
	};

	// void wxAppConsole::OnUnhandledException()
	void OnUnhandledException() {
		if(_obj.pushFunction("OnUnhandledException")) {
			_obj.pushArg((wxAppConsole*)this);
			return (_obj.callFunction<void>());
		}

		return wxAppConsole::OnUnhandledException();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


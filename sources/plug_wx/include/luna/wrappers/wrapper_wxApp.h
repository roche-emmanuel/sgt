#ifndef _WRAPPERS_WRAPPER_WXAPP_H_
#define _WRAPPERS_WRAPPER_WXAPP_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/app.h>

class wrapper_wxApp : public wxApp, public luna_wrapper_base {

public:
		

	~wrapper_wxApp() {
		logDEBUG3("Calling delete function for wrapper wxApp");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxApp*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxApp(lua_State* L, lua_Table* dum) 
		: wxApp(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxApp*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxApp*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxApp::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxApp*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxApp::CloneRefData(data);
	};

	// bool wxEvtHandler::TryBefore(wxEvent & event)
	bool TryBefore(wxEvent & event) {
		if(_obj.pushFunction("TryBefore")) {
			_obj.pushArg((wxApp*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxApp::TryBefore(event);
	};

	// bool wxEvtHandler::TryAfter(wxEvent & event)
	bool TryAfter(wxEvent & event) {
		if(_obj.pushFunction("TryAfter")) {
			_obj.pushArg((wxApp*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxApp::TryAfter(event);
	};

	// wxAppTraits * wxAppConsole::CreateTraits()
	wxAppTraits * CreateTraits() {
		if(_obj.pushFunction("CreateTraits")) {
			_obj.pushArg((wxApp*)this);
			return (_obj.callFunction<wxAppTraits*>());
		}

		return wxApp::CreateTraits();
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxApp*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxApp::GetClassInfo();
	};

	// void wxEvtHandler::QueueEvent(wxEvent * event)
	void QueueEvent(wxEvent * event) {
		if(_obj.pushFunction("QueueEvent")) {
			_obj.pushArg((wxApp*)this);
			_obj.pushArg(event);
			return (_obj.callFunction<void>());
		}

		return wxApp::QueueEvent(event);
	};

	// void wxEvtHandler::AddPendingEvent(const wxEvent & event)
	void AddPendingEvent(const wxEvent & event) {
		if(_obj.pushFunction("AddPendingEvent")) {
			_obj.pushArg((wxApp*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<void>());
		}

		return wxApp::AddPendingEvent(event);
	};

	// bool wxEvtHandler::ProcessEvent(wxEvent & event)
	bool ProcessEvent(wxEvent & event) {
		if(_obj.pushFunction("ProcessEvent")) {
			_obj.pushArg((wxApp*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxApp::ProcessEvent(event);
	};

	// void wxEvtHandler::SetNextHandler(wxEvtHandler * handler)
	void SetNextHandler(wxEvtHandler * handler) {
		if(_obj.pushFunction("SetNextHandler")) {
			_obj.pushArg((wxApp*)this);
			_obj.pushArg(handler);
			return (_obj.callFunction<void>());
		}

		return wxApp::SetNextHandler(handler);
	};

	// void wxEvtHandler::SetPreviousHandler(wxEvtHandler * handler)
	void SetPreviousHandler(wxEvtHandler * handler) {
		if(_obj.pushFunction("SetPreviousHandler")) {
			_obj.pushArg((wxApp*)this);
			_obj.pushArg(handler);
			return (_obj.callFunction<void>());
		}

		return wxApp::SetPreviousHandler(handler);
	};

	// int wxAppConsole::MainLoop()
	int MainLoop() {
		if(_obj.pushFunction("MainLoop")) {
			_obj.pushArg((wxApp*)this);
			return (_obj.callFunction<int>());
		}

		return wxApp::MainLoop();
	};

	// void wxAppConsole::ExitMainLoop()
	void ExitMainLoop() {
		if(_obj.pushFunction("ExitMainLoop")) {
			_obj.pushArg((wxApp*)this);
			return (_obj.callFunction<void>());
		}

		return wxApp::ExitMainLoop();
	};

	// int wxAppConsole::FilterEvent(wxEvent & event)
	int FilterEvent(wxEvent & event) {
		if(_obj.pushFunction("FilterEvent")) {
			_obj.pushArg((wxApp*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<int>());
		}

		return wxApp::FilterEvent(event);
	};

	// bool wxAppConsole::UsesEventLoop() const
	bool UsesEventLoop() const {
		if(_obj.pushFunction("UsesEventLoop")) {
			_obj.pushArg((wxApp*)this);
			return (_obj.callFunction<bool>());
		}

		return wxApp::UsesEventLoop();
	};

	// bool wxAppConsole::OnCmdLineError(wxCmdLineParser & parser)
	bool OnCmdLineError(wxCmdLineParser & parser) {
		if(_obj.pushFunction("OnCmdLineError")) {
			_obj.pushArg((wxApp*)this);
			_obj.pushArg(&parser);
			return (_obj.callFunction<bool>());
		}

		return wxApp::OnCmdLineError(parser);
	};

	// bool wxAppConsole::OnCmdLineHelp(wxCmdLineParser & parser)
	bool OnCmdLineHelp(wxCmdLineParser & parser) {
		if(_obj.pushFunction("OnCmdLineHelp")) {
			_obj.pushArg((wxApp*)this);
			_obj.pushArg(&parser);
			return (_obj.callFunction<bool>());
		}

		return wxApp::OnCmdLineHelp(parser);
	};

	// bool wxAppConsole::OnCmdLineParsed(wxCmdLineParser & parser)
	bool OnCmdLineParsed(wxCmdLineParser & parser) {
		if(_obj.pushFunction("OnCmdLineParsed")) {
			_obj.pushArg((wxApp*)this);
			_obj.pushArg(&parser);
			return (_obj.callFunction<bool>());
		}

		return wxApp::OnCmdLineParsed(parser);
	};

	// void wxAppConsole::OnEventLoopEnter(wxEventLoopBase * loop)
	void OnEventLoopEnter(wxEventLoopBase * loop) {
		if(_obj.pushFunction("OnEventLoopEnter")) {
			_obj.pushArg((wxApp*)this);
			_obj.pushArg(loop);
			return (_obj.callFunction<void>());
		}

		return wxApp::OnEventLoopEnter(loop);
	};

	// void wxAppConsole::OnEventLoopExit(wxEventLoopBase * loop)
	void OnEventLoopExit(wxEventLoopBase * loop) {
		if(_obj.pushFunction("OnEventLoopExit")) {
			_obj.pushArg((wxApp*)this);
			_obj.pushArg(loop);
			return (_obj.callFunction<void>());
		}

		return wxApp::OnEventLoopExit(loop);
	};

	// bool wxAppConsole::OnExceptionInMainLoop()
	bool OnExceptionInMainLoop() {
		if(_obj.pushFunction("OnExceptionInMainLoop")) {
			_obj.pushArg((wxApp*)this);
			return (_obj.callFunction<bool>());
		}

		return wxApp::OnExceptionInMainLoop();
	};

	// int wxAppConsole::OnExit()
	int OnExit() {
		if(_obj.pushFunction("OnExit")) {
			_obj.pushArg((wxApp*)this);
			return (_obj.callFunction<int>());
		}

		return wxApp::OnExit();
	};

	// void wxAppConsole::OnFatalException()
	void OnFatalException() {
		if(_obj.pushFunction("OnFatalException")) {
			_obj.pushArg((wxApp*)this);
			return (_obj.callFunction<void>());
		}

		return wxApp::OnFatalException();
	};

	// bool wxAppConsole::OnInit()
	bool OnInit() {
		if(_obj.pushFunction("OnInit")) {
			_obj.pushArg((wxApp*)this);
			return (_obj.callFunction<bool>());
		}

		return wxApp::OnInit();
	};

	// void wxAppConsole::OnInitCmdLine(wxCmdLineParser & parser)
	void OnInitCmdLine(wxCmdLineParser & parser) {
		if(_obj.pushFunction("OnInitCmdLine")) {
			_obj.pushArg((wxApp*)this);
			_obj.pushArg(&parser);
			return (_obj.callFunction<void>());
		}

		return wxApp::OnInitCmdLine(parser);
	};

	// int wxAppConsole::OnRun()
	int OnRun() {
		if(_obj.pushFunction("OnRun")) {
			_obj.pushArg((wxApp*)this);
			return (_obj.callFunction<int>());
		}

		return wxApp::OnRun();
	};

	// void wxAppConsole::OnUnhandledException()
	void OnUnhandledException() {
		if(_obj.pushFunction("OnUnhandledException")) {
			_obj.pushArg((wxApp*)this);
			return (_obj.callFunction<void>());
		}

		return wxApp::OnUnhandledException();
	};

	// wxVideoMode wxApp::GetDisplayMode() const
	wxVideoMode GetDisplayMode() const {
		if(_obj.pushFunction("GetDisplayMode")) {
			_obj.pushArg((wxApp*)this);
			return *(_obj.callFunction<wxVideoMode*>());
		}

		return wxApp::GetDisplayMode();
	};

	// wxLayoutDirection wxApp::GetLayoutDirection() const
	wxLayoutDirection GetLayoutDirection() const {
		if(_obj.pushFunction("GetLayoutDirection")) {
			_obj.pushArg((wxApp*)this);
			return (wxLayoutDirection)(_obj.callFunction<int>());
		}

		return wxApp::GetLayoutDirection();
	};

	// wxWindow * wxApp::GetTopWindow() const
	wxWindow * GetTopWindow() const {
		if(_obj.pushFunction("GetTopWindow")) {
			_obj.pushArg((wxApp*)this);
			return (_obj.callFunction<wxWindow*>());
		}

		return wxApp::GetTopWindow();
	};

	// bool wxApp::IsActive() const
	bool IsActive() const {
		if(_obj.pushFunction("IsActive")) {
			_obj.pushArg((wxApp*)this);
			return (_obj.callFunction<bool>());
		}

		return wxApp::IsActive();
	};

	// bool wxApp::SafeYield(wxWindow * win, bool onlyIfNeeded)
	bool SafeYield(wxWindow * win, bool onlyIfNeeded) {
		if(_obj.pushFunction("SafeYield")) {
			_obj.pushArg((wxApp*)this);
			_obj.pushArg(win);
			_obj.pushArg(onlyIfNeeded);
			return (_obj.callFunction<bool>());
		}

		return wxApp::SafeYield(win, onlyIfNeeded);
	};

	// bool wxApp::SafeYieldFor(wxWindow * win, long eventsToProcess)
	bool SafeYieldFor(wxWindow * win, long eventsToProcess) {
		if(_obj.pushFunction("SafeYieldFor")) {
			_obj.pushArg((wxApp*)this);
			_obj.pushArg(win);
			_obj.pushArg(eventsToProcess);
			return (_obj.callFunction<bool>());
		}

		return wxApp::SafeYieldFor(win, eventsToProcess);
	};

	// bool wxApp::SetDisplayMode(const wxVideoMode & info)
	bool SetDisplayMode(const wxVideoMode & info) {
		if(_obj.pushFunction("SetDisplayMode")) {
			_obj.pushArg((wxApp*)this);
			_obj.pushArg(&info);
			return (_obj.callFunction<bool>());
		}

		return wxApp::SetDisplayMode(info);
	};

	// bool wxApp::SetNativeTheme(const wxString & theme)
	bool SetNativeTheme(const wxString & theme) {
		if(_obj.pushFunction("SetNativeTheme")) {
			_obj.pushArg((wxApp*)this);
			_obj.pushArg(theme);
			return (_obj.callFunction<bool>());
		}

		return wxApp::SetNativeTheme(theme);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


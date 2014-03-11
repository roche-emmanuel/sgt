#ifndef _WRAPPERS_WRAPPER_SGTAPP_H_
#define _WRAPPERS_WRAPPER_SGTAPP_H_

#include <plug_common.h>

#include "lua/LuaObject.h"



class wrapper_sgtApp : public sgtApp, public luna_wrapper_base {

public:
		

	~wrapper_sgtApp() {
		logDEBUG3("Calling delete function for wrapper sgtApp");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((sgtApp*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((sgtApp*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return sgtApp::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((sgtApp*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return sgtApp::CloneRefData(data);
	};

	// bool wxEvtHandler::TryBefore(wxEvent & event)
	bool TryBefore(wxEvent & event) {
		if(_obj.pushFunction("TryBefore")) {
			_obj.pushArg((sgtApp*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return sgtApp::TryBefore(event);
	};

	// bool wxEvtHandler::TryAfter(wxEvent & event)
	bool TryAfter(wxEvent & event) {
		if(_obj.pushFunction("TryAfter")) {
			_obj.pushArg((sgtApp*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return sgtApp::TryAfter(event);
	};

	// wxAppTraits * wxAppConsole::CreateTraits()
	wxAppTraits * CreateTraits() {
		if(_obj.pushFunction("CreateTraits")) {
			_obj.pushArg((sgtApp*)this);
			return (_obj.callFunction<wxAppTraits*>());
		}

		return sgtApp::CreateTraits();
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((sgtApp*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return sgtApp::GetClassInfo();
	};

	// void wxEvtHandler::QueueEvent(wxEvent * event)
	void QueueEvent(wxEvent * event) {
		if(_obj.pushFunction("QueueEvent")) {
			_obj.pushArg((sgtApp*)this);
			_obj.pushArg(event);
			return (_obj.callFunction<void>());
		}

		return sgtApp::QueueEvent(event);
	};

	// void wxEvtHandler::AddPendingEvent(const wxEvent & event)
	void AddPendingEvent(const wxEvent & event) {
		if(_obj.pushFunction("AddPendingEvent")) {
			_obj.pushArg((sgtApp*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<void>());
		}

		return sgtApp::AddPendingEvent(event);
	};

	// bool wxEvtHandler::ProcessEvent(wxEvent & event)
	bool ProcessEvent(wxEvent & event) {
		if(_obj.pushFunction("ProcessEvent")) {
			_obj.pushArg((sgtApp*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return sgtApp::ProcessEvent(event);
	};

	// void wxEvtHandler::SetNextHandler(wxEvtHandler * handler)
	void SetNextHandler(wxEvtHandler * handler) {
		if(_obj.pushFunction("SetNextHandler")) {
			_obj.pushArg((sgtApp*)this);
			_obj.pushArg(handler);
			return (_obj.callFunction<void>());
		}

		return sgtApp::SetNextHandler(handler);
	};

	// void wxEvtHandler::SetPreviousHandler(wxEvtHandler * handler)
	void SetPreviousHandler(wxEvtHandler * handler) {
		if(_obj.pushFunction("SetPreviousHandler")) {
			_obj.pushArg((sgtApp*)this);
			_obj.pushArg(handler);
			return (_obj.callFunction<void>());
		}

		return sgtApp::SetPreviousHandler(handler);
	};

	// int wxAppConsole::MainLoop()
	int MainLoop() {
		if(_obj.pushFunction("MainLoop")) {
			_obj.pushArg((sgtApp*)this);
			return (_obj.callFunction<int>());
		}

		return sgtApp::MainLoop();
	};

	// void wxAppConsole::ExitMainLoop()
	void ExitMainLoop() {
		if(_obj.pushFunction("ExitMainLoop")) {
			_obj.pushArg((sgtApp*)this);
			return (_obj.callFunction<void>());
		}

		return sgtApp::ExitMainLoop();
	};

	// int wxAppConsole::FilterEvent(wxEvent & event)
	int FilterEvent(wxEvent & event) {
		if(_obj.pushFunction("FilterEvent")) {
			_obj.pushArg((sgtApp*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<int>());
		}

		return sgtApp::FilterEvent(event);
	};

	// bool wxAppConsole::UsesEventLoop() const
	bool UsesEventLoop() const {
		if(_obj.pushFunction("UsesEventLoop")) {
			_obj.pushArg((sgtApp*)this);
			return (_obj.callFunction<bool>());
		}

		return sgtApp::UsesEventLoop();
	};

	// bool wxAppConsole::OnCmdLineError(wxCmdLineParser & parser)
	bool OnCmdLineError(wxCmdLineParser & parser) {
		if(_obj.pushFunction("OnCmdLineError")) {
			_obj.pushArg((sgtApp*)this);
			_obj.pushArg(&parser);
			return (_obj.callFunction<bool>());
		}

		return sgtApp::OnCmdLineError(parser);
	};

	// bool wxAppConsole::OnCmdLineHelp(wxCmdLineParser & parser)
	bool OnCmdLineHelp(wxCmdLineParser & parser) {
		if(_obj.pushFunction("OnCmdLineHelp")) {
			_obj.pushArg((sgtApp*)this);
			_obj.pushArg(&parser);
			return (_obj.callFunction<bool>());
		}

		return sgtApp::OnCmdLineHelp(parser);
	};

	// bool wxAppConsole::OnCmdLineParsed(wxCmdLineParser & parser)
	bool OnCmdLineParsed(wxCmdLineParser & parser) {
		if(_obj.pushFunction("OnCmdLineParsed")) {
			_obj.pushArg((sgtApp*)this);
			_obj.pushArg(&parser);
			return (_obj.callFunction<bool>());
		}

		return sgtApp::OnCmdLineParsed(parser);
	};

	// void wxAppConsole::OnEventLoopEnter(wxEventLoopBase * loop)
	void OnEventLoopEnter(wxEventLoopBase * loop) {
		if(_obj.pushFunction("OnEventLoopEnter")) {
			_obj.pushArg((sgtApp*)this);
			_obj.pushArg(loop);
			return (_obj.callFunction<void>());
		}

		return sgtApp::OnEventLoopEnter(loop);
	};

	// void wxAppConsole::OnEventLoopExit(wxEventLoopBase * loop)
	void OnEventLoopExit(wxEventLoopBase * loop) {
		if(_obj.pushFunction("OnEventLoopExit")) {
			_obj.pushArg((sgtApp*)this);
			_obj.pushArg(loop);
			return (_obj.callFunction<void>());
		}

		return sgtApp::OnEventLoopExit(loop);
	};

	// bool wxAppConsole::OnExceptionInMainLoop()
	bool OnExceptionInMainLoop() {
		if(_obj.pushFunction("OnExceptionInMainLoop")) {
			_obj.pushArg((sgtApp*)this);
			return (_obj.callFunction<bool>());
		}

		return sgtApp::OnExceptionInMainLoop();
	};

	// int wxAppConsole::OnExit()
	int OnExit() {
		if(_obj.pushFunction("OnExit")) {
			_obj.pushArg((sgtApp*)this);
			return (_obj.callFunction<int>());
		}

		return sgtApp::OnExit();
	};

	// void wxAppConsole::OnFatalException()
	void OnFatalException() {
		if(_obj.pushFunction("OnFatalException")) {
			_obj.pushArg((sgtApp*)this);
			return (_obj.callFunction<void>());
		}

		return sgtApp::OnFatalException();
	};

	// bool wxAppConsole::OnInit()
	bool OnInit() {
		if(_obj.pushFunction("OnInit")) {
			_obj.pushArg((sgtApp*)this);
			return (_obj.callFunction<bool>());
		}

		return sgtApp::OnInit();
	};

	// void wxAppConsole::OnInitCmdLine(wxCmdLineParser & parser)
	void OnInitCmdLine(wxCmdLineParser & parser) {
		if(_obj.pushFunction("OnInitCmdLine")) {
			_obj.pushArg((sgtApp*)this);
			_obj.pushArg(&parser);
			return (_obj.callFunction<void>());
		}

		return sgtApp::OnInitCmdLine(parser);
	};

	// int wxAppConsole::OnRun()
	int OnRun() {
		if(_obj.pushFunction("OnRun")) {
			_obj.pushArg((sgtApp*)this);
			return (_obj.callFunction<int>());
		}

		return sgtApp::OnRun();
	};

	// void wxAppConsole::OnUnhandledException()
	void OnUnhandledException() {
		if(_obj.pushFunction("OnUnhandledException")) {
			_obj.pushArg((sgtApp*)this);
			return (_obj.callFunction<void>());
		}

		return sgtApp::OnUnhandledException();
	};

	// wxVideoMode wxApp::GetDisplayMode() const
	wxVideoMode GetDisplayMode() const {
		if(_obj.pushFunction("GetDisplayMode")) {
			_obj.pushArg((sgtApp*)this);
			return *(_obj.callFunction<wxVideoMode*>());
		}

		return sgtApp::GetDisplayMode();
	};

	// wxLayoutDirection wxApp::GetLayoutDirection() const
	wxLayoutDirection GetLayoutDirection() const {
		if(_obj.pushFunction("GetLayoutDirection")) {
			_obj.pushArg((sgtApp*)this);
			return (wxLayoutDirection)(_obj.callFunction<int>());
		}

		return sgtApp::GetLayoutDirection();
	};

	// wxWindow * wxApp::GetTopWindow() const
	wxWindow * GetTopWindow() const {
		if(_obj.pushFunction("GetTopWindow")) {
			_obj.pushArg((sgtApp*)this);
			return (_obj.callFunction<wxWindow*>());
		}

		return sgtApp::GetTopWindow();
	};

	// bool wxApp::IsActive() const
	bool IsActive() const {
		if(_obj.pushFunction("IsActive")) {
			_obj.pushArg((sgtApp*)this);
			return (_obj.callFunction<bool>());
		}

		return sgtApp::IsActive();
	};

	// bool wxApp::SafeYield(wxWindow * win, bool onlyIfNeeded)
	bool SafeYield(wxWindow * win, bool onlyIfNeeded) {
		if(_obj.pushFunction("SafeYield")) {
			_obj.pushArg((sgtApp*)this);
			_obj.pushArg(win);
			_obj.pushArg(onlyIfNeeded);
			return (_obj.callFunction<bool>());
		}

		return sgtApp::SafeYield(win, onlyIfNeeded);
	};

	// bool wxApp::SafeYieldFor(wxWindow * win, long eventsToProcess)
	bool SafeYieldFor(wxWindow * win, long eventsToProcess) {
		if(_obj.pushFunction("SafeYieldFor")) {
			_obj.pushArg((sgtApp*)this);
			_obj.pushArg(win);
			_obj.pushArg(eventsToProcess);
			return (_obj.callFunction<bool>());
		}

		return sgtApp::SafeYieldFor(win, eventsToProcess);
	};

	// bool wxApp::SetDisplayMode(const wxVideoMode & info)
	bool SetDisplayMode(const wxVideoMode & info) {
		if(_obj.pushFunction("SetDisplayMode")) {
			_obj.pushArg((sgtApp*)this);
			_obj.pushArg(&info);
			return (_obj.callFunction<bool>());
		}

		return sgtApp::SetDisplayMode(info);
	};

	// bool wxApp::SetNativeTheme(const wxString & theme)
	bool SetNativeTheme(const wxString & theme) {
		if(_obj.pushFunction("SetNativeTheme")) {
			_obj.pushArg((sgtApp*)this);
			_obj.pushArg(theme);
			return (_obj.callFunction<bool>());
		}

		return sgtApp::SetNativeTheme(theme);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


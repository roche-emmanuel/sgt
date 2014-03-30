#ifndef _WRAPPERS_WRAPPER_WXFILESYSTEMWATCHER_H_
#define _WRAPPERS_WRAPPER_WXFILESYSTEMWATCHER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/fswatcher.h>

class wrapper_wxFileSystemWatcher : public wxFileSystemWatcher, public luna_wrapper_base {

public:
		

	~wrapper_wxFileSystemWatcher() {
		logDEBUG3("Calling delete function for wrapper wxFileSystemWatcher");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxFileSystemWatcher*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxFileSystemWatcher(lua_State* L, lua_Table* dum) 
		: wxFileSystemWatcher(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxFileSystemWatcher*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxFileSystemWatcher*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxFileSystemWatcher::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxFileSystemWatcher*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxFileSystemWatcher::CloneRefData(data);
	};

	// bool wxEvtHandler::TryBefore(wxEvent & event)
	bool TryBefore(wxEvent & event) {
		if(_obj.pushFunction("TryBefore")) {
			_obj.pushArg((wxFileSystemWatcher*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxFileSystemWatcher::TryBefore(event);
	};

	// bool wxEvtHandler::TryAfter(wxEvent & event)
	bool TryAfter(wxEvent & event) {
		if(_obj.pushFunction("TryAfter")) {
			_obj.pushArg((wxFileSystemWatcher*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxFileSystemWatcher::TryAfter(event);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxFileSystemWatcher*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxFileSystemWatcher::GetClassInfo();
	};

	// void wxEvtHandler::QueueEvent(wxEvent * event)
	void QueueEvent(wxEvent * event) {
		if(_obj.pushFunction("QueueEvent")) {
			_obj.pushArg((wxFileSystemWatcher*)this);
			_obj.pushArg(event);
			return (_obj.callFunction<void>());
		}

		return wxFileSystemWatcher::QueueEvent(event);
	};

	// void wxEvtHandler::AddPendingEvent(const wxEvent & event)
	void AddPendingEvent(const wxEvent & event) {
		if(_obj.pushFunction("AddPendingEvent")) {
			_obj.pushArg((wxFileSystemWatcher*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<void>());
		}

		return wxFileSystemWatcher::AddPendingEvent(event);
	};

	// bool wxEvtHandler::ProcessEvent(wxEvent & event)
	bool ProcessEvent(wxEvent & event) {
		if(_obj.pushFunction("ProcessEvent")) {
			_obj.pushArg((wxFileSystemWatcher*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxFileSystemWatcher::ProcessEvent(event);
	};

	// void wxEvtHandler::SetNextHandler(wxEvtHandler * handler)
	void SetNextHandler(wxEvtHandler * handler) {
		if(_obj.pushFunction("SetNextHandler")) {
			_obj.pushArg((wxFileSystemWatcher*)this);
			_obj.pushArg(handler);
			return (_obj.callFunction<void>());
		}

		return wxFileSystemWatcher::SetNextHandler(handler);
	};

	// void wxEvtHandler::SetPreviousHandler(wxEvtHandler * handler)
	void SetPreviousHandler(wxEvtHandler * handler) {
		if(_obj.pushFunction("SetPreviousHandler")) {
			_obj.pushArg((wxFileSystemWatcher*)this);
			_obj.pushArg(handler);
			return (_obj.callFunction<void>());
		}

		return wxFileSystemWatcher::SetPreviousHandler(handler);
	};

	// bool wxFileSystemWatcher::Add(const wxFileName & path, int events = ::wxFSW_EVENT_ALL)
	bool Add(const wxFileName & path, int events = ::wxFSW_EVENT_ALL) {
		if(_obj.pushFunction("Add")) {
			_obj.pushArg((wxFileSystemWatcher*)this);
			_obj.pushArg(&path);
			_obj.pushArg(events);
			return (_obj.callFunction<bool>());
		}

		return wxFileSystemWatcher::Add(path, events);
	};

	// bool wxFileSystemWatcher::AddTree(const wxFileName & path, int events = ::wxFSW_EVENT_ALL, const wxString & filter = wxEmptyString)
	bool AddTree(const wxFileName & path, int events = ::wxFSW_EVENT_ALL, const wxString & filter = wxEmptyString) {
		if(_obj.pushFunction("AddTree")) {
			_obj.pushArg((wxFileSystemWatcher*)this);
			_obj.pushArg(&path);
			_obj.pushArg(events);
			_obj.pushArg(filter);
			return (_obj.callFunction<bool>());
		}

		return wxFileSystemWatcher::AddTree(path, events, filter);
	};

	// bool wxFileSystemWatcher::Remove(const wxFileName & path)
	bool Remove(const wxFileName & path) {
		if(_obj.pushFunction("Remove")) {
			_obj.pushArg((wxFileSystemWatcher*)this);
			_obj.pushArg(&path);
			return (_obj.callFunction<bool>());
		}

		return wxFileSystemWatcher::Remove(path);
	};

	// bool wxFileSystemWatcher::RemoveTree(const wxFileName & path)
	bool RemoveTree(const wxFileName & path) {
		if(_obj.pushFunction("RemoveTree")) {
			_obj.pushArg((wxFileSystemWatcher*)this);
			_obj.pushArg(&path);
			return (_obj.callFunction<bool>());
		}

		return wxFileSystemWatcher::RemoveTree(path);
	};

	// bool wxFileSystemWatcher::RemoveAll()
	bool RemoveAll() {
		if(_obj.pushFunction("RemoveAll")) {
			_obj.pushArg((wxFileSystemWatcher*)this);
			return (_obj.callFunction<bool>());
		}

		return wxFileSystemWatcher::RemoveAll();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


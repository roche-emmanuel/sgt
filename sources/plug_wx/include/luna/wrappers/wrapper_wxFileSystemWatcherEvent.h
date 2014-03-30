#ifndef _WRAPPERS_WRAPPER_WXFILESYSTEMWATCHEREVENT_H_
#define _WRAPPERS_WRAPPER_WXFILESYSTEMWATCHEREVENT_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/fswatcher.h>

class wrapper_wxFileSystemWatcherEvent : public wxFileSystemWatcherEvent, public luna_wrapper_base {

public:
		

	~wrapper_wxFileSystemWatcherEvent() {
		logDEBUG3("Calling delete function for wrapper wxFileSystemWatcherEvent");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxFileSystemWatcherEvent*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxFileSystemWatcherEvent*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxFileSystemWatcherEvent::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxFileSystemWatcherEvent*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxFileSystemWatcherEvent::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxFileSystemWatcherEvent*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxFileSystemWatcherEvent::GetClassInfo();
	};

	// wxEvent * wxEvent::Clone() const
	wxEvent * Clone() const {
		THROW_IF(!_obj.pushFunction("Clone"),"No implementation for abstract function wxEvent::Clone");
		_obj.pushArg((wxFileSystemWatcherEvent*)this);
		return (_obj.callFunction<wxEvent*>());
	};

	// wxEventCategory wxEvent::GetEventCategory() const
	wxEventCategory GetEventCategory() const {
		if(_obj.pushFunction("GetEventCategory")) {
			_obj.pushArg((wxFileSystemWatcherEvent*)this);
			return (wxEventCategory)(_obj.callFunction<int>());
		}

		return wxFileSystemWatcherEvent::GetEventCategory();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


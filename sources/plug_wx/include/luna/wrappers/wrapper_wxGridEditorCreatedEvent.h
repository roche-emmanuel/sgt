#ifndef _WRAPPERS_WRAPPER_WXGRIDEDITORCREATEDEVENT_H_
#define _WRAPPERS_WRAPPER_WXGRIDEDITORCREATEDEVENT_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/grid.h>

class wrapper_wxGridEditorCreatedEvent : public wxGridEditorCreatedEvent, public luna_wrapper_base {

public:
		

	~wrapper_wxGridEditorCreatedEvent() {
		logDEBUG3("Calling delete function for wrapper wxGridEditorCreatedEvent");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxGridEditorCreatedEvent*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxGridEditorCreatedEvent(lua_State* L, lua_Table* dum) 
		: wxGridEditorCreatedEvent(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxGridEditorCreatedEvent*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxGridEditorCreatedEvent(lua_State* L, lua_Table* dum, int id, int type, wxObject * obj, int row, int col, wxControl * ctrl) 
		: wxGridEditorCreatedEvent(id, type, obj, row, col, ctrl), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxGridEditorCreatedEvent*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxGridEditorCreatedEvent*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxGridEditorCreatedEvent::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxGridEditorCreatedEvent*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxGridEditorCreatedEvent::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxGridEditorCreatedEvent*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxGridEditorCreatedEvent::GetClassInfo();
	};

	// wxEventCategory wxEvent::GetEventCategory() const
	wxEventCategory GetEventCategory() const {
		if(_obj.pushFunction("GetEventCategory")) {
			_obj.pushArg((wxGridEditorCreatedEvent*)this);
			return (wxEventCategory)(_obj.callFunction<int>());
		}

		return wxGridEditorCreatedEvent::GetEventCategory();
	};

	// wxEvent * wxCommandEvent::Clone() const
	wxEvent * Clone() const {
		if(_obj.pushFunction("Clone")) {
			_obj.pushArg((wxGridEditorCreatedEvent*)this);
			return (_obj.callFunction<wxEvent*>());
		}

		return wxGridEditorCreatedEvent::Clone();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


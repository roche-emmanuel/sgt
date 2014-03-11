#ifndef _WRAPPERS_WRAPPER_WXTREEEVENT_H_
#define _WRAPPERS_WRAPPER_WXTREEEVENT_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/treectrl.h>

class wrapper_wxTreeEvent : public wxTreeEvent, public luna_wrapper_base {

public:
		

	~wrapper_wxTreeEvent() {
		logDEBUG3("Calling delete function for wrapper wxTreeEvent");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxTreeEvent*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxTreeEvent(lua_State* L, lua_Table* dum, int commandType, wxTreeCtrl * tree, const wxTreeItemId & item = wxTreeItemId ()) 
		: wxTreeEvent(commandType, tree, item), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxTreeEvent*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxTreeEvent*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxTreeEvent::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxTreeEvent*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxTreeEvent::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxTreeEvent*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxTreeEvent::GetClassInfo();
	};

	// wxEventCategory wxEvent::GetEventCategory() const
	wxEventCategory GetEventCategory() const {
		if(_obj.pushFunction("GetEventCategory")) {
			_obj.pushArg((wxTreeEvent*)this);
			return (wxEventCategory)(_obj.callFunction<int>());
		}

		return wxTreeEvent::GetEventCategory();
	};

	// wxEvent * wxCommandEvent::Clone() const
	wxEvent * Clone() const {
		if(_obj.pushFunction("Clone")) {
			_obj.pushArg((wxTreeEvent*)this);
			return (_obj.callFunction<wxEvent*>());
		}

		return wxTreeEvent::Clone();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


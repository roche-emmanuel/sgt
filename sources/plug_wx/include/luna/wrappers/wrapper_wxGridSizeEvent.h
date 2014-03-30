#ifndef _WRAPPERS_WRAPPER_WXGRIDSIZEEVENT_H_
#define _WRAPPERS_WRAPPER_WXGRIDSIZEEVENT_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/grid.h>

class wrapper_wxGridSizeEvent : public wxGridSizeEvent, public luna_wrapper_base {

public:
		

	~wrapper_wxGridSizeEvent() {
		logDEBUG3("Calling delete function for wrapper wxGridSizeEvent");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxGridSizeEvent*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxGridSizeEvent(lua_State* L, lua_Table* dum) 
		: wxGridSizeEvent(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxGridSizeEvent*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxGridSizeEvent(lua_State* L, lua_Table* dum, int id, int type, wxObject * obj, int rowOrCol = -1, int x = -1, int y = -1, const wxKeyboardState & kbd = wxKeyboardState ()) 
		: wxGridSizeEvent(id, type, obj, rowOrCol, x, y, kbd), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxGridSizeEvent*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxGridSizeEvent*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxGridSizeEvent::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxGridSizeEvent*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxGridSizeEvent::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxGridSizeEvent*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxGridSizeEvent::GetClassInfo();
	};

	// wxEventCategory wxEvent::GetEventCategory() const
	wxEventCategory GetEventCategory() const {
		if(_obj.pushFunction("GetEventCategory")) {
			_obj.pushArg((wxGridSizeEvent*)this);
			return (wxEventCategory)(_obj.callFunction<int>());
		}

		return wxGridSizeEvent::GetEventCategory();
	};

	// wxEvent * wxCommandEvent::Clone() const
	wxEvent * Clone() const {
		if(_obj.pushFunction("Clone")) {
			_obj.pushArg((wxGridSizeEvent*)this);
			return (_obj.callFunction<wxEvent*>());
		}

		return wxGridSizeEvent::Clone();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


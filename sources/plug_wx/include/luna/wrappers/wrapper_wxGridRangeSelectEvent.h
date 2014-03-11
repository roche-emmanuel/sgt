#ifndef _WRAPPERS_WRAPPER_WXGRIDRANGESELECTEVENT_H_
#define _WRAPPERS_WRAPPER_WXGRIDRANGESELECTEVENT_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/grid.h>

class wrapper_wxGridRangeSelectEvent : public wxGridRangeSelectEvent, public luna_wrapper_base {

public:
		

	~wrapper_wxGridRangeSelectEvent() {
		logDEBUG3("Calling delete function for wrapper wxGridRangeSelectEvent");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxGridRangeSelectEvent*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxGridRangeSelectEvent(lua_State* L, lua_Table* dum) 
		: wxGridRangeSelectEvent(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxGridRangeSelectEvent*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxGridRangeSelectEvent(lua_State* L, lua_Table* dum, int id, int type, wxObject * obj, const wxGridCellCoords & topLeft, const wxGridCellCoords & bottomRight, bool sel = true, const wxKeyboardState & kbd = wxKeyboardState ()) 
		: wxGridRangeSelectEvent(id, type, obj, topLeft, bottomRight, sel, kbd), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxGridRangeSelectEvent*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxGridRangeSelectEvent*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxGridRangeSelectEvent::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxGridRangeSelectEvent*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxGridRangeSelectEvent::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxGridRangeSelectEvent*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxGridRangeSelectEvent::GetClassInfo();
	};

	// wxEventCategory wxEvent::GetEventCategory() const
	wxEventCategory GetEventCategory() const {
		if(_obj.pushFunction("GetEventCategory")) {
			_obj.pushArg((wxGridRangeSelectEvent*)this);
			return (wxEventCategory)(_obj.callFunction<int>());
		}

		return wxGridRangeSelectEvent::GetEventCategory();
	};

	// wxEvent * wxCommandEvent::Clone() const
	wxEvent * Clone() const {
		if(_obj.pushFunction("Clone")) {
			_obj.pushArg((wxGridRangeSelectEvent*)this);
			return (_obj.callFunction<wxEvent*>());
		}

		return wxGridRangeSelectEvent::Clone();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


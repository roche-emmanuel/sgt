#ifndef _WRAPPERS_WRAPPER_WXPGCELL_H_
#define _WRAPPERS_WRAPPER_WXPGCELL_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/propgrid/property.h>

class wrapper_wxPGCell : public wxPGCell, public luna_wrapper_base {

public:
		

	~wrapper_wxPGCell() {
		logDEBUG3("Calling delete function for wrapper wxPGCell");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxPGCell*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxPGCell(lua_State* L, lua_Table* dum) 
		: wxPGCell(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxPGCell*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxPGCell(lua_State* L, lua_Table* dum, const wxPGCell & other) 
		: wxPGCell(other), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxPGCell*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxPGCell(lua_State* L, lua_Table* dum, const wxString & text, const wxBitmap & bitmap = wxNullBitmap, const wxColour & fgCol = wxNullColour, const wxColour & bgCol = wxNullColour) 
		: wxPGCell(text, bitmap, fgCol, bgCol), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxPGCell*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxPGCell*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxPGCell::GetClassInfo();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


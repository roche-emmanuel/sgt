#ifndef _WRAPPERS_WRAPPER_WXDRAGIMAGE_H_
#define _WRAPPERS_WRAPPER_WXDRAGIMAGE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/dragimag.h>

class wrapper_wxDragImage : public wxDragImage, public luna_wrapper_base {

public:
		

	~wrapper_wxDragImage() {
		logDEBUG3("Calling delete function for wrapper wxDragImage");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxDragImage*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxDragImage(lua_State* L, lua_Table* dum) 
		: wxDragImage(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxDragImage*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxDragImage(lua_State* L, lua_Table* dum, const wxBitmap & image, const wxCursor & cursor = wxNullCursor, const wxPoint & cursorHotspot = wxPoint (0, 0)) 
		: wxDragImage(image, cursor, cursorHotspot), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxDragImage*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxDragImage(lua_State* L, lua_Table* dum, const wxIcon & image, const wxCursor & cursor = wxNullCursor, const wxPoint & cursorHotspot = wxPoint (0, 0)) 
		: wxDragImage(image, cursor, cursorHotspot), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxDragImage*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxDragImage(lua_State* L, lua_Table* dum, const wxString & text, const wxCursor & cursor = wxNullCursor, const wxPoint & cursorHotspot = wxPoint (0, 0)) 
		: wxDragImage(text, cursor, cursorHotspot), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxDragImage*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxDragImage(lua_State* L, lua_Table* dum, const wxTreeCtrl & treeCtrl, wxTreeItemId & id) 
		: wxDragImage(treeCtrl, id), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxDragImage*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxDragImage(lua_State* L, lua_Table* dum, const wxListCtrl & listCtrl, long id) 
		: wxDragImage(listCtrl, id), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxDragImage*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxDragImage*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxDragImage::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxDragImage*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxDragImage::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxDragImage*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxDragImage::GetClassInfo();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


#ifndef _WRAPPERS_WRAPPER_WXDROPSOURCE_H_
#define _WRAPPERS_WRAPPER_WXDROPSOURCE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/dnd.h>

class wrapper_wxDropSource : public wxDropSource, public luna_wrapper_base {

public:
		

	~wrapper_wxDropSource() {
		logDEBUG3("Calling delete function for wrapper wxDropSource");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxDropSource*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxDropSource(lua_State* L, lua_Table* dum, wxWindow * win = NULL, const wxCursor & iconCopy = wxNullCursor, const wxCursor & iconMove = wxNullCursor, const wxCursor & iconNone = wxNullCursor) 
		: wxDropSource(win, iconCopy, iconMove, iconNone), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxDropSource*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxDropSource(lua_State* L, lua_Table* dum, wxDataObject & data, wxWindow * win = NULL, const wxCursor & iconCopy = wxNullCursor, const wxCursor & iconMove = wxNullCursor, const wxCursor & iconNone = wxNullCursor) 
		: wxDropSource(data, win, iconCopy, iconMove, iconNone), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxDropSource*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// wxDragResult wxDropSource::DoDragDrop(int flags = ::wxDrag_CopyOnly)
	wxDragResult DoDragDrop(int flags = ::wxDrag_CopyOnly) {
		if(_obj.pushFunction("DoDragDrop")) {
			_obj.pushArg((wxDropSource*)this);
			_obj.pushArg(flags);
			return (wxDragResult)(_obj.callFunction<int>());
		}

		return wxDropSource::DoDragDrop(flags);
	};

	// bool wxDropSource::GiveFeedback(wxDragResult effect)
	bool GiveFeedback(wxDragResult effect) {
		if(_obj.pushFunction("GiveFeedback")) {
			_obj.pushArg((wxDropSource*)this);
			_obj.pushArg((int)effect);
			return (_obj.callFunction<bool>());
		}

		return wxDropSource::GiveFeedback(effect);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


#ifndef _WRAPPERS_WRAPPER_WXEVENTFILTER_H_
#define _WRAPPERS_WRAPPER_WXEVENTFILTER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/eventfilter.h>

class wrapper_wxEventFilter : public wxEventFilter, public luna_wrapper_base {

public:
		

	~wrapper_wxEventFilter() {
		logDEBUG3("Calling delete function for wrapper wxEventFilter");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxEventFilter*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxEventFilter(lua_State* L, lua_Table* dum) 
		: wxEventFilter(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxEventFilter*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// int wxEventFilter::FilterEvent(wxEvent & event)
	int FilterEvent(wxEvent & event) {
		THROW_IF(!_obj.pushFunction("FilterEvent"),"No implementation for abstract function wxEventFilter::FilterEvent");
		_obj.pushArg((wxEventFilter*)this);
		_obj.pushArg(&event);
		return (_obj.callFunction<int>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


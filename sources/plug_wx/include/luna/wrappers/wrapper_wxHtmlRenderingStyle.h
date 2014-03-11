#ifndef _WRAPPERS_WRAPPER_WXHTMLRENDERINGSTYLE_H_
#define _WRAPPERS_WRAPPER_WXHTMLRENDERINGSTYLE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/html/htmlcell.h>

class wrapper_wxHtmlRenderingStyle : public wxHtmlRenderingStyle, public luna_wrapper_base {

public:
		

	~wrapper_wxHtmlRenderingStyle() {
		logDEBUG3("Calling delete function for wrapper wxHtmlRenderingStyle");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxHtmlRenderingStyle*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// wxColour wxHtmlRenderingStyle::GetSelectedTextColour(const wxColour & clr)
	wxColour GetSelectedTextColour(const wxColour & clr) {
		THROW_IF(!_obj.pushFunction("GetSelectedTextColour"),"No implementation for abstract function wxHtmlRenderingStyle::GetSelectedTextColour");
		_obj.pushArg((wxHtmlRenderingStyle*)this);
		_obj.pushArg(&clr);
		return *(_obj.callFunction<wxColour*>());
	};

	// wxColour wxHtmlRenderingStyle::GetSelectedTextBgColour(const wxColour & clr)
	wxColour GetSelectedTextBgColour(const wxColour & clr) {
		THROW_IF(!_obj.pushFunction("GetSelectedTextBgColour"),"No implementation for abstract function wxHtmlRenderingStyle::GetSelectedTextBgColour");
		_obj.pushArg((wxHtmlRenderingStyle*)this);
		_obj.pushArg(&clr);
		return *(_obj.callFunction<wxColour*>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


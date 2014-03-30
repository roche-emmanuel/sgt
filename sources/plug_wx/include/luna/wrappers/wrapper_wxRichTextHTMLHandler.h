#ifndef _WRAPPERS_WRAPPER_WXRICHTEXTHTMLHANDLER_H_
#define _WRAPPERS_WRAPPER_WXRICHTEXTHTMLHANDLER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/richtext/richtexthtml.h>

class wrapper_wxRichTextHTMLHandler : public wxRichTextHTMLHandler, public luna_wrapper_base {

public:
		

	~wrapper_wxRichTextHTMLHandler() {
		logDEBUG3("Calling delete function for wrapper wxRichTextHTMLHandler");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxRichTextHTMLHandler*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxRichTextHTMLHandler*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxRichTextHTMLHandler::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxRichTextHTMLHandler*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxRichTextHTMLHandler::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxRichTextHTMLHandler*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxRichTextHTMLHandler::GetClassInfo();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


public:
// void wxRichTextFileHandler::SetVisible(bool visible)
void SetVisible(bool) {
	THROW_IF(true,"The function call void wxRichTextFileHandler::SetVisible(bool) is not implemented in wrapper.");
};

};




#endif


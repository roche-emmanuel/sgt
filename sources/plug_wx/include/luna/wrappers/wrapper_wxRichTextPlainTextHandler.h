#ifndef _WRAPPERS_WRAPPER_WXRICHTEXTPLAINTEXTHANDLER_H_
#define _WRAPPERS_WRAPPER_WXRICHTEXTPLAINTEXTHANDLER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/richtext/richtextbuffer.h>

class wrapper_wxRichTextPlainTextHandler : public wxRichTextPlainTextHandler, public luna_wrapper_base {

public:
		

	~wrapper_wxRichTextPlainTextHandler() {
		logDEBUG3("Calling delete function for wrapper wxRichTextPlainTextHandler");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxRichTextPlainTextHandler*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxRichTextPlainTextHandler*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxRichTextPlainTextHandler::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxRichTextPlainTextHandler*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxRichTextPlainTextHandler::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxRichTextPlainTextHandler*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxRichTextPlainTextHandler::GetClassInfo();
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


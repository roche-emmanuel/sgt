#ifndef _WRAPPERS_WRAPPER_WXRICHTEXTPARAGRAPHLAYOUTBOX_H_
#define _WRAPPERS_WRAPPER_WXRICHTEXTPARAGRAPHLAYOUTBOX_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/richtext/richtextbuffer.h>

class wrapper_wxRichTextParagraphLayoutBox : public wxRichTextParagraphLayoutBox, public luna_wrapper_base {

public:
		

	~wrapper_wxRichTextParagraphLayoutBox() {
		logDEBUG3("Calling delete function for wrapper wxRichTextParagraphLayoutBox");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxRichTextParagraphLayoutBox*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxRichTextParagraphLayoutBox*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxRichTextParagraphLayoutBox::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxRichTextParagraphLayoutBox*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxRichTextParagraphLayoutBox::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxRichTextParagraphLayoutBox*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxRichTextParagraphLayoutBox::GetClassInfo();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


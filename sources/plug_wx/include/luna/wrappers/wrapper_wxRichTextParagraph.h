#ifndef _WRAPPERS_WRAPPER_WXRICHTEXTPARAGRAPH_H_
#define _WRAPPERS_WRAPPER_WXRICHTEXTPARAGRAPH_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/richtext/richtextbuffer.h>

class wrapper_wxRichTextParagraph : public wxRichTextParagraph, public luna_wrapper_base {

public:
		

	~wrapper_wxRichTextParagraph() {
		logDEBUG3("Calling delete function for wrapper wxRichTextParagraph");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxRichTextParagraph*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxRichTextParagraph*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxRichTextParagraph::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxRichTextParagraph*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxRichTextParagraph::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxRichTextParagraph*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxRichTextParagraph::GetClassInfo();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


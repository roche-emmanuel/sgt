#ifndef _WRAPPERS_WRAPPER_WXRICHTEXTOBJECT_H_
#define _WRAPPERS_WRAPPER_WXRICHTEXTOBJECT_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/richtext/richtextbuffer.h>

class wrapper_wxRichTextObject : public wxRichTextObject, public luna_wrapper_base {

public:
		

	~wrapper_wxRichTextObject() {
		logDEBUG3("Calling delete function for wrapper wxRichTextObject");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxRichTextObject*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxRichTextObject*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxRichTextObject::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxRichTextObject*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxRichTextObject::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxRichTextObject*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxRichTextObject::GetClassInfo();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


public:
// bool wxRichTextObject::Draw(wxDC & dc, const wxRichTextRange & range, const wxRichTextSelection & selection, const wxRect & rect, int descent, int style)
bool Draw(wxDC &, const wxRichTextRange &, const wxRichTextSelection &, const wxRect &, int, int) {
	THROW_IF(true,"The function call bool wxRichTextObject::Draw(wxDC &, const wxRichTextRange &, const wxRichTextSelection &, const wxRect &, int, int) is not implemented in wrapper.");
	return bool();
};

public:
// bool wxRichTextObject::Layout(wxDC & dc, const wxRect & rect, int style)
bool Layout(wxDC &, const wxRect &, int) {
	THROW_IF(true,"The function call bool wxRichTextObject::Layout(wxDC &, const wxRect &, int) is not implemented in wrapper.");
	return bool();
};

public:
// bool wxRichTextObject::GetRangeSize(const wxRichTextRange & range, wxSize & size, int & descent, wxDC & dc, int flags, wxPoint position = wxPoint (0, 0), wxArrayInt * partialExtents = NULL) const
bool GetRangeSize(const wxRichTextRange &, wxSize &, int &, wxDC &, int, wxPoint, wxArrayInt *) const {
	THROW_IF(true,"The function call bool wxRichTextObject::GetRangeSize(const wxRichTextRange &, wxSize &, int &, wxDC &, int, wxPoint, wxArrayInt *) const is not implemented in wrapper.");
	return bool();
};

};




#endif


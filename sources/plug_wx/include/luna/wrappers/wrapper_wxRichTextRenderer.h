#ifndef _WRAPPERS_WRAPPER_WXRICHTEXTRENDERER_H_
#define _WRAPPERS_WRAPPER_WXRICHTEXTRENDERER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/richtext/richtextbuffer.h>

class wrapper_wxRichTextRenderer : public wxRichTextRenderer, public luna_wrapper_base {

public:
		

	~wrapper_wxRichTextRenderer() {
		logDEBUG3("Calling delete function for wrapper wxRichTextRenderer");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxRichTextRenderer*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxRichTextRenderer*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxRichTextRenderer::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxRichTextRenderer*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxRichTextRenderer::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxRichTextRenderer*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxRichTextRenderer::GetClassInfo();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


public:
// bool wxRichTextRenderer::DrawStandardBullet(wxRichTextParagraph * paragraph, wxDC & dc, const wxRichTextAttr & attr, const wxRect & rect)
bool DrawStandardBullet(wxRichTextParagraph *, wxDC &, const wxRichTextAttr &, const wxRect &) {
	THROW_IF(true,"The function call bool wxRichTextRenderer::DrawStandardBullet(wxRichTextParagraph *, wxDC &, const wxRichTextAttr &, const wxRect &) is not implemented in wrapper.");
	return bool();
};

public:
// bool wxRichTextRenderer::DrawTextBullet(wxRichTextParagraph * paragraph, wxDC & dc, const wxRichTextAttr & attr, const wxRect & rect, const wxString & text)
bool DrawTextBullet(wxRichTextParagraph *, wxDC &, const wxRichTextAttr &, const wxRect &, const wxString &) {
	THROW_IF(true,"The function call bool wxRichTextRenderer::DrawTextBullet(wxRichTextParagraph *, wxDC &, const wxRichTextAttr &, const wxRect &, const wxString &) is not implemented in wrapper.");
	return bool();
};

public:
// bool wxRichTextRenderer::DrawBitmapBullet(wxRichTextParagraph * paragraph, wxDC & dc, const wxRichTextAttr & attr, const wxRect & rect)
bool DrawBitmapBullet(wxRichTextParagraph *, wxDC &, const wxRichTextAttr &, const wxRect &) {
	THROW_IF(true,"The function call bool wxRichTextRenderer::DrawBitmapBullet(wxRichTextParagraph *, wxDC &, const wxRichTextAttr &, const wxRect &) is not implemented in wrapper.");
	return bool();
};

public:
// bool wxRichTextRenderer::EnumerateStandardBulletNames(wxArrayString & bulletNames)
bool EnumerateStandardBulletNames(wxArrayString &) {
	THROW_IF(true,"The function call bool wxRichTextRenderer::EnumerateStandardBulletNames(wxArrayString &) is not implemented in wrapper.");
	return bool();
};

};




#endif


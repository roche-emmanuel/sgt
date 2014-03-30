#ifndef _WRAPPERS_WRAPPER_WXFONT_H_
#define _WRAPPERS_WRAPPER_WXFONT_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/font.h>

class wrapper_wxFont : public wxFont, public luna_wrapper_base {

public:
		

	~wrapper_wxFont() {
		logDEBUG3("Calling delete function for wrapper wxFont");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxFont*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxFont(lua_State* L, lua_Table* dum) 
		: wxFont(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxFont*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxFont(lua_State* L, lua_Table* dum, const wxFont & font) 
		: wxFont(font), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxFont*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxFont(lua_State* L, lua_Table* dum, int pointSize, wxFontFamily family, wxFontStyle style, wxFontWeight weight, bool underline = false, const wxString & faceName = wxEmptyString, wxFontEncoding encoding = ::wxFONTENCODING_DEFAULT) 
		: wxFont(pointSize, family, style, weight, underline, faceName, encoding), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxFont*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxFont(lua_State* L, lua_Table* dum, const wxSize & pixelSize, wxFontFamily family, wxFontStyle style, wxFontWeight weight, bool underline = false, const wxString & faceName = wxEmptyString, wxFontEncoding encoding = ::wxFONTENCODING_DEFAULT) 
		: wxFont(pixelSize, family, style, weight, underline, faceName, encoding), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxFont*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxFont(lua_State* L, lua_Table* dum, const wxString & nativeInfoString) 
		: wxFont(nativeInfoString), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxFont*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxFont(lua_State* L, lua_Table* dum, const wxNativeFontInfo & nativeInfo) 
		: wxFont(nativeInfo), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxFont*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxFont*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxFont::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxFont*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxFont::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxFont*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxFont::GetClassInfo();
	};

	// wxFontEncoding wxFont::GetEncoding() const
	wxFontEncoding GetEncoding() const {
		if(_obj.pushFunction("GetEncoding")) {
			_obj.pushArg((wxFont*)this);
			return (wxFontEncoding)(_obj.callFunction<int>());
		}

		return wxFont::GetEncoding();
	};

	// wxString wxFont::GetFaceName() const
	wxString GetFaceName() const {
		if(_obj.pushFunction("GetFaceName")) {
			_obj.pushArg((wxFont*)this);
			return *(_obj.callFunction<wxString*>());
		}

		return wxFont::GetFaceName();
	};

	// wxFontFamily wxFont::GetFamily() const
	wxFontFamily GetFamily() const {
		if(_obj.pushFunction("GetFamily")) {
			_obj.pushArg((wxFont*)this);
			return (wxFontFamily)(_obj.callFunction<int>());
		}

		return wxFont::GetFamily();
	};

	// int wxFont::GetPointSize() const
	int GetPointSize() const {
		if(_obj.pushFunction("GetPointSize")) {
			_obj.pushArg((wxFont*)this);
			return (_obj.callFunction<int>());
		}

		return wxFont::GetPointSize();
	};

	// wxSize wxFont::GetPixelSize() const
	wxSize GetPixelSize() const {
		if(_obj.pushFunction("GetPixelSize")) {
			_obj.pushArg((wxFont*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxFont::GetPixelSize();
	};

	// wxFontStyle wxFont::GetStyle() const
	wxFontStyle GetStyle() const {
		if(_obj.pushFunction("GetStyle")) {
			_obj.pushArg((wxFont*)this);
			return (wxFontStyle)(_obj.callFunction<int>());
		}

		return wxFont::GetStyle();
	};

	// bool wxFont::GetUnderlined() const
	bool GetUnderlined() const {
		if(_obj.pushFunction("GetUnderlined")) {
			_obj.pushArg((wxFont*)this);
			return (_obj.callFunction<bool>());
		}

		return wxFont::GetUnderlined();
	};

	// wxFontWeight wxFont::GetWeight() const
	wxFontWeight GetWeight() const {
		if(_obj.pushFunction("GetWeight")) {
			_obj.pushArg((wxFont*)this);
			return (wxFontWeight)(_obj.callFunction<int>());
		}

		return wxFont::GetWeight();
	};

	// bool wxFont::IsFixedWidth() const
	bool IsFixedWidth() const {
		if(_obj.pushFunction("IsFixedWidth")) {
			_obj.pushArg((wxFont*)this);
			return (_obj.callFunction<bool>());
		}

		return wxFont::IsFixedWidth();
	};

	// bool wxFont::IsOk() const
	bool IsOk() const {
		if(_obj.pushFunction("IsOk")) {
			_obj.pushArg((wxFont*)this);
			return (_obj.callFunction<bool>());
		}

		return wxFont::IsOk();
	};

	// void wxFont::SetEncoding(wxFontEncoding encoding)
	void SetEncoding(wxFontEncoding encoding) {
		if(_obj.pushFunction("SetEncoding")) {
			_obj.pushArg((wxFont*)this);
			_obj.pushArg((int)encoding);
			return (_obj.callFunction<void>());
		}

		return wxFont::SetEncoding(encoding);
	};

	// bool wxFont::SetFaceName(const wxString & faceName)
	bool SetFaceName(const wxString & faceName) {
		if(_obj.pushFunction("SetFaceName")) {
			_obj.pushArg((wxFont*)this);
			_obj.pushArg(faceName);
			return (_obj.callFunction<bool>());
		}

		return wxFont::SetFaceName(faceName);
	};

	// void wxFont::SetFamily(wxFontFamily family)
	void SetFamily(wxFontFamily family) {
		if(_obj.pushFunction("SetFamily")) {
			_obj.pushArg((wxFont*)this);
			_obj.pushArg((int)family);
			return (_obj.callFunction<void>());
		}

		return wxFont::SetFamily(family);
	};

	// void wxFont::SetPointSize(int pointSize)
	void SetPointSize(int pointSize) {
		if(_obj.pushFunction("SetPointSize")) {
			_obj.pushArg((wxFont*)this);
			_obj.pushArg(pointSize);
			return (_obj.callFunction<void>());
		}

		return wxFont::SetPointSize(pointSize);
	};

	// void wxFont::SetPixelSize(const wxSize & pixelSize)
	void SetPixelSize(const wxSize & pixelSize) {
		if(_obj.pushFunction("SetPixelSize")) {
			_obj.pushArg((wxFont*)this);
			_obj.pushArg(&pixelSize);
			return (_obj.callFunction<void>());
		}

		return wxFont::SetPixelSize(pixelSize);
	};

	// void wxFont::SetStyle(wxFontStyle style)
	void SetStyle(wxFontStyle style) {
		if(_obj.pushFunction("SetStyle")) {
			_obj.pushArg((wxFont*)this);
			_obj.pushArg((int)style);
			return (_obj.callFunction<void>());
		}

		return wxFont::SetStyle(style);
	};

	// void wxFont::SetUnderlined(bool underlined)
	void SetUnderlined(bool underlined) {
		if(_obj.pushFunction("SetUnderlined")) {
			_obj.pushArg((wxFont*)this);
			_obj.pushArg(underlined);
			return (_obj.callFunction<void>());
		}

		return wxFont::SetUnderlined(underlined);
	};

	// void wxFont::SetWeight(wxFontWeight weight)
	void SetWeight(wxFontWeight weight) {
		if(_obj.pushFunction("SetWeight")) {
			_obj.pushArg((wxFont*)this);
			_obj.pushArg((int)weight);
			return (_obj.callFunction<void>());
		}

		return wxFont::SetWeight(weight);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


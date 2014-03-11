#ifndef _WRAPPERS_WRAPPER_WXFONTENUMERATOR_H_
#define _WRAPPERS_WRAPPER_WXFONTENUMERATOR_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/fontenum.h>

class wrapper_wxFontEnumerator : public wxFontEnumerator, public luna_wrapper_base {

public:
		

	~wrapper_wxFontEnumerator() {
		logDEBUG3("Calling delete function for wrapper wxFontEnumerator");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxFontEnumerator*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// bool wxFontEnumerator::EnumerateEncodings(const wxString & font = wxEmptyString)
	bool EnumerateEncodings(const wxString & font = wxEmptyString) {
		if(_obj.pushFunction("EnumerateEncodings")) {
			_obj.pushArg((wxFontEnumerator*)this);
			_obj.pushArg(font);
			return (_obj.callFunction<bool>());
		}

		return wxFontEnumerator::EnumerateEncodings(font);
	};

	// bool wxFontEnumerator::EnumerateFacenames(wxFontEncoding encoding = ::wxFONTENCODING_SYSTEM, bool fixedWidthOnly = false)
	bool EnumerateFacenames(wxFontEncoding encoding = ::wxFONTENCODING_SYSTEM, bool fixedWidthOnly = false) {
		if(_obj.pushFunction("EnumerateFacenames")) {
			_obj.pushArg((wxFontEnumerator*)this);
			_obj.pushArg((int)encoding);
			_obj.pushArg(fixedWidthOnly);
			return (_obj.callFunction<bool>());
		}

		return wxFontEnumerator::EnumerateFacenames(encoding, fixedWidthOnly);
	};

	// bool wxFontEnumerator::OnFacename(const wxString & font)
	bool OnFacename(const wxString & font) {
		if(_obj.pushFunction("OnFacename")) {
			_obj.pushArg((wxFontEnumerator*)this);
			_obj.pushArg(font);
			return (_obj.callFunction<bool>());
		}

		return wxFontEnumerator::OnFacename(font);
	};

	// bool wxFontEnumerator::OnFontEncoding(const wxString & font, const wxString & encoding)
	bool OnFontEncoding(const wxString & font, const wxString & encoding) {
		if(_obj.pushFunction("OnFontEncoding")) {
			_obj.pushArg((wxFontEnumerator*)this);
			_obj.pushArg(font);
			_obj.pushArg(encoding);
			return (_obj.callFunction<bool>());
		}

		return wxFontEnumerator::OnFontEncoding(font, encoding);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


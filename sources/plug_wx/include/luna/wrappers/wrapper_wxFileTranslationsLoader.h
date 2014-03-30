#ifndef _WRAPPERS_WRAPPER_WXFILETRANSLATIONSLOADER_H_
#define _WRAPPERS_WRAPPER_WXFILETRANSLATIONSLOADER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/translation.h>

class wrapper_wxFileTranslationsLoader : public wxFileTranslationsLoader, public luna_wrapper_base {

public:
		

	~wrapper_wxFileTranslationsLoader() {
		logDEBUG3("Calling delete function for wrapper wxFileTranslationsLoader");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxFileTranslationsLoader*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// wxMsgCatalog * wxTranslationsLoader::LoadCatalog(const wxString & domain, const wxString & lang)
	wxMsgCatalog * LoadCatalog(const wxString & domain, const wxString & lang) {
		THROW_IF(!_obj.pushFunction("LoadCatalog"),"No implementation for abstract function wxTranslationsLoader::LoadCatalog");
		_obj.pushArg((wxFileTranslationsLoader*)this);
		_obj.pushArg(domain);
		_obj.pushArg(lang);
		return (_obj.callFunction<wxMsgCatalog*>());
	};

	// wxArrayString wxTranslationsLoader::GetAvailableTranslations(const wxString & domain) const
	wxArrayString GetAvailableTranslations(const wxString & domain) const {
		THROW_IF(!_obj.pushFunction("GetAvailableTranslations"),"No implementation for abstract function wxTranslationsLoader::GetAvailableTranslations");
		_obj.pushArg((wxFileTranslationsLoader*)this);
		_obj.pushArg(domain);
		return *(_obj.callFunction<wxArrayString*>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


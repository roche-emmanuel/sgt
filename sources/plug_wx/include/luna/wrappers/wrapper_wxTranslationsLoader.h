#ifndef _WRAPPERS_WRAPPER_WXTRANSLATIONSLOADER_H_
#define _WRAPPERS_WRAPPER_WXTRANSLATIONSLOADER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/translation.h>

class wrapper_wxTranslationsLoader : public wxTranslationsLoader, public luna_wrapper_base {

public:
		

	~wrapper_wxTranslationsLoader() {
		logDEBUG3("Calling delete function for wrapper wxTranslationsLoader");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxTranslationsLoader*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxTranslationsLoader(lua_State* L, lua_Table* dum) 
		: wxTranslationsLoader(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxTranslationsLoader*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// wxMsgCatalog * wxTranslationsLoader::LoadCatalog(const wxString & domain, const wxString & lang)
	wxMsgCatalog * LoadCatalog(const wxString & domain, const wxString & lang) {
		THROW_IF(!_obj.pushFunction("LoadCatalog"),"No implementation for abstract function wxTranslationsLoader::LoadCatalog");
		_obj.pushArg((wxTranslationsLoader*)this);
		_obj.pushArg(domain);
		_obj.pushArg(lang);
		return (_obj.callFunction<wxMsgCatalog*>());
	};

	// wxArrayString wxTranslationsLoader::GetAvailableTranslations(const wxString & domain) const
	wxArrayString GetAvailableTranslations(const wxString & domain) const {
		THROW_IF(!_obj.pushFunction("GetAvailableTranslations"),"No implementation for abstract function wxTranslationsLoader::GetAvailableTranslations");
		_obj.pushArg((wxTranslationsLoader*)this);
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


#ifndef _WRAPPERS_WRAPPER_WXRESOURCETRANSLATIONSLOADER_H_
#define _WRAPPERS_WRAPPER_WXRESOURCETRANSLATIONSLOADER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/translation.h>

class wrapper_wxResourceTranslationsLoader : public wxResourceTranslationsLoader, public luna_wrapper_base {

public:
		

	~wrapper_wxResourceTranslationsLoader() {
		logDEBUG3("Calling delete function for wrapper wxResourceTranslationsLoader");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxResourceTranslationsLoader*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxString wxResourceTranslationsLoader::GetResourceType() const
	wxString GetResourceType() const {
		if(_obj.pushFunction("GetResourceType")) {
			_obj.pushArg((wxResourceTranslationsLoader*)this);
			return *(_obj.callFunction<wxString*>());
		}

		return wxResourceTranslationsLoader::GetResourceType();
	};

public:
	// Public virtual methods:
	// wxMsgCatalog * wxTranslationsLoader::LoadCatalog(const wxString & domain, const wxString & lang)
	wxMsgCatalog * LoadCatalog(const wxString & domain, const wxString & lang) {
		THROW_IF(!_obj.pushFunction("LoadCatalog"),"No implementation for abstract function wxTranslationsLoader::LoadCatalog");
		_obj.pushArg((wxResourceTranslationsLoader*)this);
		_obj.pushArg(domain);
		_obj.pushArg(lang);
		return (_obj.callFunction<wxMsgCatalog*>());
	};

	// wxArrayString wxTranslationsLoader::GetAvailableTranslations(const wxString & domain) const
	wxArrayString GetAvailableTranslations(const wxString & domain) const {
		THROW_IF(!_obj.pushFunction("GetAvailableTranslations"),"No implementation for abstract function wxTranslationsLoader::GetAvailableTranslations");
		_obj.pushArg((wxResourceTranslationsLoader*)this);
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


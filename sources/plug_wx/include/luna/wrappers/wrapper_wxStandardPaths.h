#ifndef _WRAPPERS_WRAPPER_WXSTANDARDPATHS_H_
#define _WRAPPERS_WRAPPER_WXSTANDARDPATHS_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/stdpaths.h>

class wrapper_wxStandardPaths : public wxStandardPaths, public luna_wrapper_base {

public:
		

	~wrapper_wxStandardPaths() {
		logDEBUG3("Calling delete function for wrapper wxStandardPaths");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxStandardPaths*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// wxString wxStandardPaths::GetAppDocumentsDir() const
	wxString GetAppDocumentsDir() const {
		if(_obj.pushFunction("GetAppDocumentsDir")) {
			_obj.pushArg((wxStandardPaths*)this);
			return *(_obj.callFunction<wxString*>());
		}

		return wxStandardPaths::GetAppDocumentsDir();
	};

	// wxString wxStandardPaths::GetConfigDir() const
	wxString GetConfigDir() const {
		if(_obj.pushFunction("GetConfigDir")) {
			_obj.pushArg((wxStandardPaths*)this);
			return *(_obj.callFunction<wxString*>());
		}

		return wxStandardPaths::GetConfigDir();
	};

	// wxString wxStandardPaths::GetDataDir() const
	wxString GetDataDir() const {
		if(_obj.pushFunction("GetDataDir")) {
			_obj.pushArg((wxStandardPaths*)this);
			return *(_obj.callFunction<wxString*>());
		}

		return wxStandardPaths::GetDataDir();
	};

	// wxString wxStandardPaths::GetDocumentsDir() const
	wxString GetDocumentsDir() const {
		if(_obj.pushFunction("GetDocumentsDir")) {
			_obj.pushArg((wxStandardPaths*)this);
			return *(_obj.callFunction<wxString*>());
		}

		return wxStandardPaths::GetDocumentsDir();
	};

	// wxString wxStandardPaths::GetExecutablePath() const
	wxString GetExecutablePath() const {
		if(_obj.pushFunction("GetExecutablePath")) {
			_obj.pushArg((wxStandardPaths*)this);
			return *(_obj.callFunction<wxString*>());
		}

		return wxStandardPaths::GetExecutablePath();
	};

	// wxString wxStandardPaths::GetLocalDataDir() const
	wxString GetLocalDataDir() const {
		if(_obj.pushFunction("GetLocalDataDir")) {
			_obj.pushArg((wxStandardPaths*)this);
			return *(_obj.callFunction<wxString*>());
		}

		return wxStandardPaths::GetLocalDataDir();
	};

	// wxString wxStandardPaths::GetLocalizedResourcesDir(const wxString & lang, wxStandardPaths::ResourceCat category = wxStandardPaths::ResourceCat_None) const
	wxString GetLocalizedResourcesDir(const wxString & lang, wxStandardPaths::ResourceCat category = wxStandardPaths::ResourceCat_None) const {
		if(_obj.pushFunction("GetLocalizedResourcesDir")) {
			_obj.pushArg((wxStandardPaths*)this);
			_obj.pushArg(lang);
			_obj.pushArg((int)category);
			return *(_obj.callFunction<wxString*>());
		}

		return wxStandardPaths::GetLocalizedResourcesDir(lang, category);
	};

	// wxString wxStandardPaths::GetPluginsDir() const
	wxString GetPluginsDir() const {
		if(_obj.pushFunction("GetPluginsDir")) {
			_obj.pushArg((wxStandardPaths*)this);
			return *(_obj.callFunction<wxString*>());
		}

		return wxStandardPaths::GetPluginsDir();
	};

	// wxString wxStandardPaths::GetResourcesDir() const
	wxString GetResourcesDir() const {
		if(_obj.pushFunction("GetResourcesDir")) {
			_obj.pushArg((wxStandardPaths*)this);
			return *(_obj.callFunction<wxString*>());
		}

		return wxStandardPaths::GetResourcesDir();
	};

	// wxString wxStandardPaths::GetTempDir() const
	wxString GetTempDir() const {
		if(_obj.pushFunction("GetTempDir")) {
			_obj.pushArg((wxStandardPaths*)this);
			return *(_obj.callFunction<wxString*>());
		}

		return wxStandardPaths::GetTempDir();
	};

	// wxString wxStandardPaths::GetUserConfigDir() const
	wxString GetUserConfigDir() const {
		if(_obj.pushFunction("GetUserConfigDir")) {
			_obj.pushArg((wxStandardPaths*)this);
			return *(_obj.callFunction<wxString*>());
		}

		return wxStandardPaths::GetUserConfigDir();
	};

	// wxString wxStandardPaths::GetUserDataDir() const
	wxString GetUserDataDir() const {
		if(_obj.pushFunction("GetUserDataDir")) {
			_obj.pushArg((wxStandardPaths*)this);
			return *(_obj.callFunction<wxString*>());
		}

		return wxStandardPaths::GetUserDataDir();
	};

	// wxString wxStandardPaths::GetUserLocalDataDir() const
	wxString GetUserLocalDataDir() const {
		if(_obj.pushFunction("GetUserLocalDataDir")) {
			_obj.pushArg((wxStandardPaths*)this);
			return *(_obj.callFunction<wxString*>());
		}

		return wxStandardPaths::GetUserLocalDataDir();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


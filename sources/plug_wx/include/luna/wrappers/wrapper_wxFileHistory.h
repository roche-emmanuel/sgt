#ifndef _WRAPPERS_WRAPPER_WXFILEHISTORY_H_
#define _WRAPPERS_WRAPPER_WXFILEHISTORY_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/filehistory.h>

class wrapper_wxFileHistory : public wxFileHistory, public luna_wrapper_base {

public:
		

	~wrapper_wxFileHistory() {
		logDEBUG3("Calling delete function for wrapper wxFileHistory");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxFileHistory*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxFileHistory*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxFileHistory::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxFileHistory*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxFileHistory::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxFileHistory*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxFileHistory::GetClassInfo();
	};

	// void wxFileHistory::AddFileToHistory(const wxString & filename)
	void AddFileToHistory(const wxString & filename) {
		if(_obj.pushFunction("AddFileToHistory")) {
			_obj.pushArg((wxFileHistory*)this);
			_obj.pushArg(filename);
			return (_obj.callFunction<void>());
		}

		return wxFileHistory::AddFileToHistory(filename);
	};

	// void wxFileHistory::AddFilesToMenu()
	void AddFilesToMenu() {
		if(_obj.pushFunction("AddFilesToMenu")) {
			_obj.pushArg((wxFileHistory*)this);
			return (_obj.callFunction<void>());
		}

		return wxFileHistory::AddFilesToMenu();
	};

	// void wxFileHistory::AddFilesToMenu(wxMenu * menu)
	void AddFilesToMenu(wxMenu * menu) {
		if(_obj.pushFunction("AddFilesToMenu")) {
			_obj.pushArg((wxFileHistory*)this);
			_obj.pushArg(menu);
			return (_obj.callFunction<void>());
		}

		return wxFileHistory::AddFilesToMenu(menu);
	};

	// size_t wxFileHistory::GetCount() const
	size_t GetCount() const {
		if(_obj.pushFunction("GetCount")) {
			_obj.pushArg((wxFileHistory*)this);
			return (_obj.callFunction<size_t>());
		}

		return wxFileHistory::GetCount();
	};

	// wxString wxFileHistory::GetHistoryFile(size_t index) const
	wxString GetHistoryFile(size_t index) const {
		if(_obj.pushFunction("GetHistoryFile")) {
			_obj.pushArg((wxFileHistory*)this);
			_obj.pushArg(index);
			return *(_obj.callFunction<wxString*>());
		}

		return wxFileHistory::GetHistoryFile(index);
	};

	// int wxFileHistory::GetMaxFiles() const
	int GetMaxFiles() const {
		if(_obj.pushFunction("GetMaxFiles")) {
			_obj.pushArg((wxFileHistory*)this);
			return (_obj.callFunction<int>());
		}

		return wxFileHistory::GetMaxFiles();
	};

	// void wxFileHistory::Load(const wxConfigBase & config)
	void Load(const wxConfigBase & config) {
		if(_obj.pushFunction("Load")) {
			_obj.pushArg((wxFileHistory*)this);
			_obj.pushArg(&config);
			return (_obj.callFunction<void>());
		}

		return wxFileHistory::Load(config);
	};

	// void wxFileHistory::RemoveFileFromHistory(size_t i)
	void RemoveFileFromHistory(size_t i) {
		if(_obj.pushFunction("RemoveFileFromHistory")) {
			_obj.pushArg((wxFileHistory*)this);
			_obj.pushArg(i);
			return (_obj.callFunction<void>());
		}

		return wxFileHistory::RemoveFileFromHistory(i);
	};

	// void wxFileHistory::RemoveMenu(wxMenu * menu)
	void RemoveMenu(wxMenu * menu) {
		if(_obj.pushFunction("RemoveMenu")) {
			_obj.pushArg((wxFileHistory*)this);
			_obj.pushArg(menu);
			return (_obj.callFunction<void>());
		}

		return wxFileHistory::RemoveMenu(menu);
	};

	// void wxFileHistory::Save(wxConfigBase & config)
	void Save(wxConfigBase & config) {
		if(_obj.pushFunction("Save")) {
			_obj.pushArg((wxFileHistory*)this);
			_obj.pushArg(&config);
			return (_obj.callFunction<void>());
		}

		return wxFileHistory::Save(config);
	};

	// void wxFileHistory::UseMenu(wxMenu * menu)
	void UseMenu(wxMenu * menu) {
		if(_obj.pushFunction("UseMenu")) {
			_obj.pushArg((wxFileHistory*)this);
			_obj.pushArg(menu);
			return (_obj.callFunction<void>());
		}

		return wxFileHistory::UseMenu(menu);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


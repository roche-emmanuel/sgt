#ifndef _WRAPPERS_WRAPPER_WXFILECONFIG_H_
#define _WRAPPERS_WRAPPER_WXFILECONFIG_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/fileconf.h>

class wrapper_wxFileConfig : public wxFileConfig, public luna_wrapper_base {

public:
		

	~wrapper_wxFileConfig() {
		logDEBUG3("Calling delete function for wrapper wxFileConfig");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxFileConfig*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxFileConfig*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxFileConfig::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxFileConfig*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxFileConfig::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxFileConfig*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxFileConfig::GetClassInfo();
	};

	// wxConfigBase::EntryType wxConfigBase::GetEntryType(const wxString & name) const
	wxConfigBase::EntryType GetEntryType(const wxString & name) const {
		if(_obj.pushFunction("GetEntryType")) {
			_obj.pushArg((wxFileConfig*)this);
			_obj.pushArg(name);
			return (wxConfigBase::EntryType)(_obj.callFunction<int>());
		}

		return wxFileConfig::GetEntryType(name);
	};

	// void wxFileConfig::SetPath(const wxString & strPath)
	void SetPath(const wxString & strPath) {
		if(_obj.pushFunction("SetPath")) {
			_obj.pushArg((wxFileConfig*)this);
			_obj.pushArg(strPath);
			return (_obj.callFunction<void>());
		}

		return wxFileConfig::SetPath(strPath);
	};

	// const wxString & wxFileConfig::GetPath() const
	const wxString & GetPath() const {
		if(_obj.pushFunction("GetPath")) {
			_obj.pushArg((wxFileConfig*)this);
			return *(_obj.callFunction<wxString*>());
		}

		return wxFileConfig::GetPath();
	};

	// bool wxFileConfig::GetFirstGroup(wxString & str, long & index) const
	bool GetFirstGroup(wxString & str, long & index) const {
		if(_obj.pushFunction("GetFirstGroup")) {
			_obj.pushArg((wxFileConfig*)this);
			_obj.pushArg(str);
			_obj.pushArg(index);
			return (_obj.callFunction<bool>());
		}

		return wxFileConfig::GetFirstGroup(str, index);
	};

	// bool wxFileConfig::GetNextGroup(wxString & str, long & index) const
	bool GetNextGroup(wxString & str, long & index) const {
		if(_obj.pushFunction("GetNextGroup")) {
			_obj.pushArg((wxFileConfig*)this);
			_obj.pushArg(str);
			_obj.pushArg(index);
			return (_obj.callFunction<bool>());
		}

		return wxFileConfig::GetNextGroup(str, index);
	};

	// bool wxFileConfig::GetFirstEntry(wxString & str, long & index) const
	bool GetFirstEntry(wxString & str, long & index) const {
		if(_obj.pushFunction("GetFirstEntry")) {
			_obj.pushArg((wxFileConfig*)this);
			_obj.pushArg(str);
			_obj.pushArg(index);
			return (_obj.callFunction<bool>());
		}

		return wxFileConfig::GetFirstEntry(str, index);
	};

	// bool wxFileConfig::GetNextEntry(wxString & str, long & index) const
	bool GetNextEntry(wxString & str, long & index) const {
		if(_obj.pushFunction("GetNextEntry")) {
			_obj.pushArg((wxFileConfig*)this);
			_obj.pushArg(str);
			_obj.pushArg(index);
			return (_obj.callFunction<bool>());
		}

		return wxFileConfig::GetNextEntry(str, index);
	};

	// size_t wxFileConfig::GetNumberOfEntries(bool bRecursive = false) const
	size_t GetNumberOfEntries(bool bRecursive = false) const {
		if(_obj.pushFunction("GetNumberOfEntries")) {
			_obj.pushArg((wxFileConfig*)this);
			_obj.pushArg(bRecursive);
			return (_obj.callFunction<size_t>());
		}

		return wxFileConfig::GetNumberOfEntries(bRecursive);
	};

	// size_t wxFileConfig::GetNumberOfGroups(bool bRecursive = false) const
	size_t GetNumberOfGroups(bool bRecursive = false) const {
		if(_obj.pushFunction("GetNumberOfGroups")) {
			_obj.pushArg((wxFileConfig*)this);
			_obj.pushArg(bRecursive);
			return (_obj.callFunction<size_t>());
		}

		return wxFileConfig::GetNumberOfGroups(bRecursive);
	};

	// bool wxFileConfig::HasGroup(const wxString & strName) const
	bool HasGroup(const wxString & strName) const {
		if(_obj.pushFunction("HasGroup")) {
			_obj.pushArg((wxFileConfig*)this);
			_obj.pushArg(strName);
			return (_obj.callFunction<bool>());
		}

		return wxFileConfig::HasGroup(strName);
	};

	// bool wxFileConfig::HasEntry(const wxString & strName) const
	bool HasEntry(const wxString & strName) const {
		if(_obj.pushFunction("HasEntry")) {
			_obj.pushArg((wxFileConfig*)this);
			_obj.pushArg(strName);
			return (_obj.callFunction<bool>());
		}

		return wxFileConfig::HasEntry(strName);
	};

	// bool wxFileConfig::Flush(bool bCurrentOnly = false)
	bool Flush(bool bCurrentOnly = false) {
		if(_obj.pushFunction("Flush")) {
			_obj.pushArg((wxFileConfig*)this);
			_obj.pushArg(bCurrentOnly);
			return (_obj.callFunction<bool>());
		}

		return wxFileConfig::Flush(bCurrentOnly);
	};

	// bool wxFileConfig::RenameEntry(const wxString & oldName, const wxString & newName)
	bool RenameEntry(const wxString & oldName, const wxString & newName) {
		if(_obj.pushFunction("RenameEntry")) {
			_obj.pushArg((wxFileConfig*)this);
			_obj.pushArg(oldName);
			_obj.pushArg(newName);
			return (_obj.callFunction<bool>());
		}

		return wxFileConfig::RenameEntry(oldName, newName);
	};

	// bool wxFileConfig::RenameGroup(const wxString & oldName, const wxString & newName)
	bool RenameGroup(const wxString & oldName, const wxString & newName) {
		if(_obj.pushFunction("RenameGroup")) {
			_obj.pushArg((wxFileConfig*)this);
			_obj.pushArg(oldName);
			_obj.pushArg(newName);
			return (_obj.callFunction<bool>());
		}

		return wxFileConfig::RenameGroup(oldName, newName);
	};

	// bool wxFileConfig::DeleteEntry(const wxString & key, bool bDeleteGroupIfEmpty = true)
	bool DeleteEntry(const wxString & key, bool bDeleteGroupIfEmpty = true) {
		if(_obj.pushFunction("DeleteEntry")) {
			_obj.pushArg((wxFileConfig*)this);
			_obj.pushArg(key);
			_obj.pushArg(bDeleteGroupIfEmpty);
			return (_obj.callFunction<bool>());
		}

		return wxFileConfig::DeleteEntry(key, bDeleteGroupIfEmpty);
	};

	// bool wxFileConfig::DeleteGroup(const wxString & key)
	bool DeleteGroup(const wxString & key) {
		if(_obj.pushFunction("DeleteGroup")) {
			_obj.pushArg((wxFileConfig*)this);
			_obj.pushArg(key);
			return (_obj.callFunction<bool>());
		}

		return wxFileConfig::DeleteGroup(key);
	};

	// bool wxFileConfig::DeleteAll()
	bool DeleteAll() {
		if(_obj.pushFunction("DeleteAll")) {
			_obj.pushArg((wxFileConfig*)this);
			return (_obj.callFunction<bool>());
		}

		return wxFileConfig::DeleteAll();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


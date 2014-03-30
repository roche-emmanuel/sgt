#ifndef _WRAPPERS_WRAPPER_WXDOCMANAGER_H_
#define _WRAPPERS_WRAPPER_WXDOCMANAGER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/docview.h>

class wrapper_wxDocManager : public wxDocManager, public luna_wrapper_base {

public:
		

	~wrapper_wxDocManager() {
		logDEBUG3("Calling delete function for wrapper wxDocManager");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxDocManager*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxDocManager(lua_State* L, lua_Table* dum, long flags = 0, bool initialize = true) 
		: wxDocManager(flags, initialize), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxDocManager*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxDocManager*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxDocManager::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxDocManager*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxDocManager::CloneRefData(data);
	};

	// bool wxEvtHandler::TryBefore(wxEvent & event)
	bool TryBefore(wxEvent & event) {
		if(_obj.pushFunction("TryBefore")) {
			_obj.pushArg((wxDocManager*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxDocManager::TryBefore(event);
	};

	// bool wxEvtHandler::TryAfter(wxEvent & event)
	bool TryAfter(wxEvent & event) {
		if(_obj.pushFunction("TryAfter")) {
			_obj.pushArg((wxDocManager*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxDocManager::TryAfter(event);
	};

	// void wxDocManager::OnMRUFileNotExist(unsigned int n, const wxString & filename)
	void OnMRUFileNotExist(unsigned int n, const wxString & filename) {
		if(_obj.pushFunction("OnMRUFileNotExist")) {
			_obj.pushArg((wxDocManager*)this);
			_obj.pushArg(n);
			_obj.pushArg(filename);
			return (_obj.callFunction<void>());
		}

		return wxDocManager::OnMRUFileNotExist(n, filename);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxDocManager*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxDocManager::GetClassInfo();
	};

	// void wxEvtHandler::QueueEvent(wxEvent * event)
	void QueueEvent(wxEvent * event) {
		if(_obj.pushFunction("QueueEvent")) {
			_obj.pushArg((wxDocManager*)this);
			_obj.pushArg(event);
			return (_obj.callFunction<void>());
		}

		return wxDocManager::QueueEvent(event);
	};

	// void wxEvtHandler::AddPendingEvent(const wxEvent & event)
	void AddPendingEvent(const wxEvent & event) {
		if(_obj.pushFunction("AddPendingEvent")) {
			_obj.pushArg((wxDocManager*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<void>());
		}

		return wxDocManager::AddPendingEvent(event);
	};

	// bool wxEvtHandler::ProcessEvent(wxEvent & event)
	bool ProcessEvent(wxEvent & event) {
		if(_obj.pushFunction("ProcessEvent")) {
			_obj.pushArg((wxDocManager*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxDocManager::ProcessEvent(event);
	};

	// void wxEvtHandler::SetNextHandler(wxEvtHandler * handler)
	void SetNextHandler(wxEvtHandler * handler) {
		if(_obj.pushFunction("SetNextHandler")) {
			_obj.pushArg((wxDocManager*)this);
			_obj.pushArg(handler);
			return (_obj.callFunction<void>());
		}

		return wxDocManager::SetNextHandler(handler);
	};

	// void wxEvtHandler::SetPreviousHandler(wxEvtHandler * handler)
	void SetPreviousHandler(wxEvtHandler * handler) {
		if(_obj.pushFunction("SetPreviousHandler")) {
			_obj.pushArg((wxDocManager*)this);
			_obj.pushArg(handler);
			return (_obj.callFunction<void>());
		}

		return wxDocManager::SetPreviousHandler(handler);
	};

	// void wxDocManager::ActivateView(wxView * doc, bool activate = true)
	void ActivateView(wxView * doc, bool activate = true) {
		if(_obj.pushFunction("ActivateView")) {
			_obj.pushArg((wxDocManager*)this);
			_obj.pushArg(doc);
			_obj.pushArg(activate);
			return (_obj.callFunction<void>());
		}

		return wxDocManager::ActivateView(doc, activate);
	};

	// void wxDocManager::AddFileToHistory(const wxString & filename)
	void AddFileToHistory(const wxString & filename) {
		if(_obj.pushFunction("AddFileToHistory")) {
			_obj.pushArg((wxDocManager*)this);
			_obj.pushArg(filename);
			return (_obj.callFunction<void>());
		}

		return wxDocManager::AddFileToHistory(filename);
	};

	// wxDocument * wxDocManager::CreateDocument(const wxString & path, long flags = 0)
	wxDocument * CreateDocument(const wxString & path, long flags = 0) {
		if(_obj.pushFunction("CreateDocument")) {
			_obj.pushArg((wxDocManager*)this);
			_obj.pushArg(path);
			_obj.pushArg(flags);
			return (_obj.callFunction<wxDocument*>());
		}

		return wxDocManager::CreateDocument(path, flags);
	};

	// wxView * wxDocManager::CreateView(wxDocument * doc, long flags = 0)
	wxView * CreateView(wxDocument * doc, long flags = 0) {
		if(_obj.pushFunction("CreateView")) {
			_obj.pushArg((wxDocManager*)this);
			_obj.pushArg(doc);
			_obj.pushArg(flags);
			return (_obj.callFunction<wxView*>());
		}

		return wxDocManager::CreateView(doc, flags);
	};

	// void wxDocManager::FileHistoryAddFilesToMenu()
	void FileHistoryAddFilesToMenu() {
		if(_obj.pushFunction("FileHistoryAddFilesToMenu")) {
			_obj.pushArg((wxDocManager*)this);
			return (_obj.callFunction<void>());
		}

		return wxDocManager::FileHistoryAddFilesToMenu();
	};

	// void wxDocManager::FileHistoryAddFilesToMenu(wxMenu * menu)
	void FileHistoryAddFilesToMenu(wxMenu * menu) {
		if(_obj.pushFunction("FileHistoryAddFilesToMenu")) {
			_obj.pushArg((wxDocManager*)this);
			_obj.pushArg(menu);
			return (_obj.callFunction<void>());
		}

		return wxDocManager::FileHistoryAddFilesToMenu(menu);
	};

	// void wxDocManager::FileHistoryLoad(const wxConfigBase & config)
	void FileHistoryLoad(const wxConfigBase & config) {
		if(_obj.pushFunction("FileHistoryLoad")) {
			_obj.pushArg((wxDocManager*)this);
			_obj.pushArg(&config);
			return (_obj.callFunction<void>());
		}

		return wxDocManager::FileHistoryLoad(config);
	};

	// void wxDocManager::FileHistoryRemoveMenu(wxMenu * menu)
	void FileHistoryRemoveMenu(wxMenu * menu) {
		if(_obj.pushFunction("FileHistoryRemoveMenu")) {
			_obj.pushArg((wxDocManager*)this);
			_obj.pushArg(menu);
			return (_obj.callFunction<void>());
		}

		return wxDocManager::FileHistoryRemoveMenu(menu);
	};

	// void wxDocManager::FileHistorySave(wxConfigBase & resourceFile)
	void FileHistorySave(wxConfigBase & resourceFile) {
		if(_obj.pushFunction("FileHistorySave")) {
			_obj.pushArg((wxDocManager*)this);
			_obj.pushArg(&resourceFile);
			return (_obj.callFunction<void>());
		}

		return wxDocManager::FileHistorySave(resourceFile);
	};

	// void wxDocManager::FileHistoryUseMenu(wxMenu * menu)
	void FileHistoryUseMenu(wxMenu * menu) {
		if(_obj.pushFunction("FileHistoryUseMenu")) {
			_obj.pushArg((wxDocManager*)this);
			_obj.pushArg(menu);
			return (_obj.callFunction<void>());
		}

		return wxDocManager::FileHistoryUseMenu(menu);
	};

	// wxDocTemplate * wxDocManager::FindTemplateForPath(const wxString & path)
	wxDocTemplate * FindTemplateForPath(const wxString & path) {
		if(_obj.pushFunction("FindTemplateForPath")) {
			_obj.pushArg((wxDocManager*)this);
			_obj.pushArg(path);
			return (_obj.callFunction<wxDocTemplate*>());
		}

		return wxDocManager::FindTemplateForPath(path);
	};

	// wxView * wxDocManager::GetCurrentView() const
	wxView * GetCurrentView() const {
		if(_obj.pushFunction("GetCurrentView")) {
			_obj.pushArg((wxDocManager*)this);
			return (_obj.callFunction<wxView*>());
		}

		return wxDocManager::GetCurrentView();
	};

	// wxFileHistory * wxDocManager::GetFileHistory() const
	wxFileHistory * GetFileHistory() const {
		if(_obj.pushFunction("GetFileHistory")) {
			_obj.pushArg((wxDocManager*)this);
			return (_obj.callFunction<wxFileHistory*>());
		}

		return wxDocManager::GetFileHistory();
	};

	// size_t wxDocManager::GetHistoryFilesCount() const
	size_t GetHistoryFilesCount() const {
		if(_obj.pushFunction("GetHistoryFilesCount")) {
			_obj.pushArg((wxDocManager*)this);
			return (_obj.callFunction<size_t>());
		}

		return wxDocManager::GetHistoryFilesCount();
	};

	// bool wxDocManager::Initialize()
	bool Initialize() {
		if(_obj.pushFunction("Initialize")) {
			_obj.pushArg((wxDocManager*)this);
			return (_obj.callFunction<bool>());
		}

		return wxDocManager::Initialize();
	};

	// wxString wxDocManager::MakeNewDocumentName()
	wxString MakeNewDocumentName() {
		if(_obj.pushFunction("MakeNewDocumentName")) {
			_obj.pushArg((wxDocManager*)this);
			return *(_obj.callFunction<wxString*>());
		}

		return wxDocManager::MakeNewDocumentName();
	};

	// wxFileHistory * wxDocManager::OnCreateFileHistory()
	wxFileHistory * OnCreateFileHistory() {
		if(_obj.pushFunction("OnCreateFileHistory")) {
			_obj.pushArg((wxDocManager*)this);
			return (_obj.callFunction<wxFileHistory*>());
		}

		return wxDocManager::OnCreateFileHistory();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


#ifndef _WRAPPERS_WRAPPER_WXDOCUMENT_H_
#define _WRAPPERS_WRAPPER_WXDOCUMENT_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/docview.h>

class wrapper_wxDocument : public wxDocument, public luna_wrapper_base {

public:
		

	~wrapper_wxDocument() {
		logDEBUG3("Calling delete function for wrapper wxDocument");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxDocument*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxDocument(lua_State* L, lua_Table* dum, wxDocument * parent = NULL) 
		: wxDocument(parent), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxDocument*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxDocument*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxDocument::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxDocument*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxDocument::CloneRefData(data);
	};

	// bool wxEvtHandler::TryBefore(wxEvent & event)
	bool TryBefore(wxEvent & event) {
		if(_obj.pushFunction("TryBefore")) {
			_obj.pushArg((wxDocument*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxDocument::TryBefore(event);
	};

	// bool wxEvtHandler::TryAfter(wxEvent & event)
	bool TryAfter(wxEvent & event) {
		if(_obj.pushFunction("TryAfter")) {
			_obj.pushArg((wxDocument*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxDocument::TryAfter(event);
	};

	// bool wxDocument::DoSaveDocument(const wxString & file)
	bool DoSaveDocument(const wxString & file) {
		if(_obj.pushFunction("DoSaveDocument")) {
			_obj.pushArg((wxDocument*)this);
			_obj.pushArg(file);
			return (_obj.callFunction<bool>());
		}

		return wxDocument::DoSaveDocument(file);
	};

	// bool wxDocument::DoOpenDocument(const wxString & file)
	bool DoOpenDocument(const wxString & file) {
		if(_obj.pushFunction("DoOpenDocument")) {
			_obj.pushArg((wxDocument*)this);
			_obj.pushArg(file);
			return (_obj.callFunction<bool>());
		}

		return wxDocument::DoOpenDocument(file);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxDocument*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxDocument::GetClassInfo();
	};

	// void wxEvtHandler::QueueEvent(wxEvent * event)
	void QueueEvent(wxEvent * event) {
		if(_obj.pushFunction("QueueEvent")) {
			_obj.pushArg((wxDocument*)this);
			_obj.pushArg(event);
			return (_obj.callFunction<void>());
		}

		return wxDocument::QueueEvent(event);
	};

	// void wxEvtHandler::AddPendingEvent(const wxEvent & event)
	void AddPendingEvent(const wxEvent & event) {
		if(_obj.pushFunction("AddPendingEvent")) {
			_obj.pushArg((wxDocument*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<void>());
		}

		return wxDocument::AddPendingEvent(event);
	};

	// bool wxEvtHandler::ProcessEvent(wxEvent & event)
	bool ProcessEvent(wxEvent & event) {
		if(_obj.pushFunction("ProcessEvent")) {
			_obj.pushArg((wxDocument*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxDocument::ProcessEvent(event);
	};

	// void wxEvtHandler::SetNextHandler(wxEvtHandler * handler)
	void SetNextHandler(wxEvtHandler * handler) {
		if(_obj.pushFunction("SetNextHandler")) {
			_obj.pushArg((wxDocument*)this);
			_obj.pushArg(handler);
			return (_obj.callFunction<void>());
		}

		return wxDocument::SetNextHandler(handler);
	};

	// void wxEvtHandler::SetPreviousHandler(wxEvtHandler * handler)
	void SetPreviousHandler(wxEvtHandler * handler) {
		if(_obj.pushFunction("SetPreviousHandler")) {
			_obj.pushArg((wxDocument*)this);
			_obj.pushArg(handler);
			return (_obj.callFunction<void>());
		}

		return wxDocument::SetPreviousHandler(handler);
	};

	// bool wxDocument::AddView(wxView * view)
	bool AddView(wxView * view) {
		if(_obj.pushFunction("AddView")) {
			_obj.pushArg((wxDocument*)this);
			_obj.pushArg(view);
			return (_obj.callFunction<bool>());
		}

		return wxDocument::AddView(view);
	};

	// bool wxDocument::Close()
	bool Close() {
		if(_obj.pushFunction("Close")) {
			_obj.pushArg((wxDocument*)this);
			return (_obj.callFunction<bool>());
		}

		return wxDocument::Close();
	};

	// bool wxDocument::DeleteAllViews()
	bool DeleteAllViews() {
		if(_obj.pushFunction("DeleteAllViews")) {
			_obj.pushArg((wxDocument*)this);
			return (_obj.callFunction<bool>());
		}

		return wxDocument::DeleteAllViews();
	};

	// bool wxDocument::DeleteContents()
	bool DeleteContents() {
		if(_obj.pushFunction("DeleteContents")) {
			_obj.pushArg((wxDocument*)this);
			return (_obj.callFunction<bool>());
		}

		return wxDocument::DeleteContents();
	};

	// wxCommandProcessor * wxDocument::GetCommandProcessor() const
	wxCommandProcessor * GetCommandProcessor() const {
		if(_obj.pushFunction("GetCommandProcessor")) {
			_obj.pushArg((wxDocument*)this);
			return (_obj.callFunction<wxCommandProcessor*>());
		}

		return wxDocument::GetCommandProcessor();
	};

	// wxDocManager * wxDocument::GetDocumentManager() const
	wxDocManager * GetDocumentManager() const {
		if(_obj.pushFunction("GetDocumentManager")) {
			_obj.pushArg((wxDocument*)this);
			return (_obj.callFunction<wxDocManager*>());
		}

		return wxDocument::GetDocumentManager();
	};

	// wxDocTemplate * wxDocument::GetDocumentTemplate() const
	wxDocTemplate * GetDocumentTemplate() const {
		if(_obj.pushFunction("GetDocumentTemplate")) {
			_obj.pushArg((wxDocument*)this);
			return (_obj.callFunction<wxDocTemplate*>());
		}

		return wxDocument::GetDocumentTemplate();
	};

	// wxWindow * wxDocument::GetDocumentWindow() const
	wxWindow * GetDocumentWindow() const {
		if(_obj.pushFunction("GetDocumentWindow")) {
			_obj.pushArg((wxDocument*)this);
			return (_obj.callFunction<wxWindow*>());
		}

		return wxDocument::GetDocumentWindow();
	};

	// wxString wxDocument::GetUserReadableName() const
	wxString GetUserReadableName() const {
		if(_obj.pushFunction("GetUserReadableName")) {
			_obj.pushArg((wxDocument*)this);
			return *(_obj.callFunction<wxString*>());
		}

		return wxDocument::GetUserReadableName();
	};

	// bool wxDocument::IsModified() const
	bool IsModified() const {
		if(_obj.pushFunction("IsModified")) {
			_obj.pushArg((wxDocument*)this);
			return (_obj.callFunction<bool>());
		}

		return wxDocument::IsModified();
	};

	// void wxDocument::Modify(bool modify)
	void Modify(bool modify) {
		if(_obj.pushFunction("Modify")) {
			_obj.pushArg((wxDocument*)this);
			_obj.pushArg(modify);
			return (_obj.callFunction<void>());
		}

		return wxDocument::Modify(modify);
	};

	// void wxDocument::OnChangedViewList()
	void OnChangedViewList() {
		if(_obj.pushFunction("OnChangedViewList")) {
			_obj.pushArg((wxDocument*)this);
			return (_obj.callFunction<void>());
		}

		return wxDocument::OnChangedViewList();
	};

	// bool wxDocument::OnCloseDocument()
	bool OnCloseDocument() {
		if(_obj.pushFunction("OnCloseDocument")) {
			_obj.pushArg((wxDocument*)this);
			return (_obj.callFunction<bool>());
		}

		return wxDocument::OnCloseDocument();
	};

	// bool wxDocument::OnCreate(const wxString & path, long flags)
	bool OnCreate(const wxString & path, long flags) {
		if(_obj.pushFunction("OnCreate")) {
			_obj.pushArg((wxDocument*)this);
			_obj.pushArg(path);
			_obj.pushArg(flags);
			return (_obj.callFunction<bool>());
		}

		return wxDocument::OnCreate(path, flags);
	};

	// wxCommandProcessor * wxDocument::OnCreateCommandProcessor()
	wxCommandProcessor * OnCreateCommandProcessor() {
		if(_obj.pushFunction("OnCreateCommandProcessor")) {
			_obj.pushArg((wxDocument*)this);
			return (_obj.callFunction<wxCommandProcessor*>());
		}

		return wxDocument::OnCreateCommandProcessor();
	};

	// bool wxDocument::OnNewDocument()
	bool OnNewDocument() {
		if(_obj.pushFunction("OnNewDocument")) {
			_obj.pushArg((wxDocument*)this);
			return (_obj.callFunction<bool>());
		}

		return wxDocument::OnNewDocument();
	};

	// bool wxDocument::OnOpenDocument(const wxString & filename)
	bool OnOpenDocument(const wxString & filename) {
		if(_obj.pushFunction("OnOpenDocument")) {
			_obj.pushArg((wxDocument*)this);
			_obj.pushArg(filename);
			return (_obj.callFunction<bool>());
		}

		return wxDocument::OnOpenDocument(filename);
	};

	// bool wxDocument::OnSaveDocument(const wxString & filename)
	bool OnSaveDocument(const wxString & filename) {
		if(_obj.pushFunction("OnSaveDocument")) {
			_obj.pushArg((wxDocument*)this);
			_obj.pushArg(filename);
			return (_obj.callFunction<bool>());
		}

		return wxDocument::OnSaveDocument(filename);
	};

	// bool wxDocument::OnSaveModified()
	bool OnSaveModified() {
		if(_obj.pushFunction("OnSaveModified")) {
			_obj.pushArg((wxDocument*)this);
			return (_obj.callFunction<bool>());
		}

		return wxDocument::OnSaveModified();
	};

	// bool wxDocument::RemoveView(wxView * view)
	bool RemoveView(wxView * view) {
		if(_obj.pushFunction("RemoveView")) {
			_obj.pushArg((wxDocument*)this);
			_obj.pushArg(view);
			return (_obj.callFunction<bool>());
		}

		return wxDocument::RemoveView(view);
	};

	// bool wxDocument::Save()
	bool Save() {
		if(_obj.pushFunction("Save")) {
			_obj.pushArg((wxDocument*)this);
			return (_obj.callFunction<bool>());
		}

		return wxDocument::Save();
	};

	// bool wxDocument::SaveAs()
	bool SaveAs() {
		if(_obj.pushFunction("SaveAs")) {
			_obj.pushArg((wxDocument*)this);
			return (_obj.callFunction<bool>());
		}

		return wxDocument::SaveAs();
	};

	// bool wxDocument::Revert()
	bool Revert() {
		if(_obj.pushFunction("Revert")) {
			_obj.pushArg((wxDocument*)this);
			return (_obj.callFunction<bool>());
		}

		return wxDocument::Revert();
	};

	// void wxDocument::SetCommandProcessor(wxCommandProcessor * processor)
	void SetCommandProcessor(wxCommandProcessor * processor) {
		if(_obj.pushFunction("SetCommandProcessor")) {
			_obj.pushArg((wxDocument*)this);
			_obj.pushArg(processor);
			return (_obj.callFunction<void>());
		}

		return wxDocument::SetCommandProcessor(processor);
	};

	// void wxDocument::SetDocumentTemplate(wxDocTemplate * templ)
	void SetDocumentTemplate(wxDocTemplate * templ) {
		if(_obj.pushFunction("SetDocumentTemplate")) {
			_obj.pushArg((wxDocument*)this);
			_obj.pushArg(templ);
			return (_obj.callFunction<void>());
		}

		return wxDocument::SetDocumentTemplate(templ);
	};

	// void wxDocument::OnChangeFilename(bool notifyViews)
	void OnChangeFilename(bool notifyViews) {
		if(_obj.pushFunction("OnChangeFilename")) {
			_obj.pushArg((wxDocument*)this);
			_obj.pushArg(notifyViews);
			return (_obj.callFunction<void>());
		}

		return wxDocument::OnChangeFilename(notifyViews);
	};

	// void wxDocument::UpdateAllViews(wxView * sender = NULL, wxObject * hint = NULL)
	void UpdateAllViews(wxView * sender = NULL, wxObject * hint = NULL) {
		if(_obj.pushFunction("UpdateAllViews")) {
			_obj.pushArg((wxDocument*)this);
			_obj.pushArg(sender);
			_obj.pushArg(hint);
			return (_obj.callFunction<void>());
		}

		return wxDocument::UpdateAllViews(sender, hint);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


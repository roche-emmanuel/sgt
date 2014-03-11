#ifndef _WRAPPERS_WRAPPER_WXDOCTEMPLATE_H_
#define _WRAPPERS_WRAPPER_WXDOCTEMPLATE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/docview.h>

class wrapper_wxDocTemplate : public wxDocTemplate, public luna_wrapper_base {

public:
		

	~wrapper_wxDocTemplate() {
		logDEBUG3("Calling delete function for wrapper wxDocTemplate");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxDocTemplate*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxDocTemplate(lua_State* L, lua_Table* dum, wxDocManager * manager, const wxString & descr, const wxString & filter, const wxString & dir, const wxString & ext, const wxString & docTypeName, const wxString & viewTypeName, wxClassInfo * docClassInfo = 0, wxClassInfo * viewClassInfo = 0, long flags = ::wxTEMPLATE_VISIBLE) 
		: wxDocTemplate(manager, descr, filter, dir, ext, docTypeName, viewTypeName, docClassInfo, viewClassInfo, flags), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxDocTemplate*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxDocTemplate*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxDocTemplate::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxDocTemplate*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxDocTemplate::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxDocTemplate*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxDocTemplate::GetClassInfo();
	};

	// wxDocument * wxDocTemplate::CreateDocument(const wxString & path, long flags = 0)
	wxDocument * CreateDocument(const wxString & path, long flags = 0) {
		if(_obj.pushFunction("CreateDocument")) {
			_obj.pushArg((wxDocTemplate*)this);
			_obj.pushArg(path);
			_obj.pushArg(flags);
			return (_obj.callFunction<wxDocument*>());
		}

		return wxDocTemplate::CreateDocument(path, flags);
	};

	// wxView * wxDocTemplate::CreateView(wxDocument * doc, long flags = 0)
	wxView * CreateView(wxDocument * doc, long flags = 0) {
		if(_obj.pushFunction("CreateView")) {
			_obj.pushArg((wxDocTemplate*)this);
			_obj.pushArg(doc);
			_obj.pushArg(flags);
			return (_obj.callFunction<wxView*>());
		}

		return wxDocTemplate::CreateView(doc, flags);
	};

	// bool wxDocTemplate::FileMatchesTemplate(const wxString & path)
	bool FileMatchesTemplate(const wxString & path) {
		if(_obj.pushFunction("FileMatchesTemplate")) {
			_obj.pushArg((wxDocTemplate*)this);
			_obj.pushArg(path);
			return (_obj.callFunction<bool>());
		}

		return wxDocTemplate::FileMatchesTemplate(path);
	};

	// wxString wxDocTemplate::GetDocumentName() const
	wxString GetDocumentName() const {
		if(_obj.pushFunction("GetDocumentName")) {
			_obj.pushArg((wxDocTemplate*)this);
			return *(_obj.callFunction<wxString*>());
		}

		return wxDocTemplate::GetDocumentName();
	};

	// wxString wxDocTemplate::GetViewName() const
	wxString GetViewName() const {
		if(_obj.pushFunction("GetViewName")) {
			_obj.pushArg((wxDocTemplate*)this);
			return *(_obj.callFunction<wxString*>());
		}

		return wxDocTemplate::GetViewName();
	};

	// bool wxDocTemplate::InitDocument(wxDocument * doc, const wxString & path, long flags = 0)
	bool InitDocument(wxDocument * doc, const wxString & path, long flags = 0) {
		if(_obj.pushFunction("InitDocument")) {
			_obj.pushArg((wxDocTemplate*)this);
			_obj.pushArg(doc);
			_obj.pushArg(path);
			_obj.pushArg(flags);
			return (_obj.callFunction<bool>());
		}

		return wxDocTemplate::InitDocument(doc, path, flags);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


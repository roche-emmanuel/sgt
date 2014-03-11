#ifndef _WRAPPERS_WRAPPER_WXHTMLFILTER_H_
#define _WRAPPERS_WRAPPER_WXHTMLFILTER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/html/htmlfilt.h>

class wrapper_wxHtmlFilter : public wxHtmlFilter, public luna_wrapper_base {

public:
		

	~wrapper_wxHtmlFilter() {
		logDEBUG3("Calling delete function for wrapper wxHtmlFilter");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxHtmlFilter*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxHtmlFilter(lua_State* L, lua_Table* dum) 
		: wxHtmlFilter(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxHtmlFilter*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxHtmlFilter*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxHtmlFilter::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxHtmlFilter*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxHtmlFilter::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxHtmlFilter*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxHtmlFilter::GetClassInfo();
	};

	// bool wxHtmlFilter::CanRead(const wxFSFile & file) const
	bool CanRead(const wxFSFile & file) const {
		THROW_IF(!_obj.pushFunction("CanRead"),"No implementation for abstract function wxHtmlFilter::CanRead");
		_obj.pushArg((wxHtmlFilter*)this);
		_obj.pushArg(&file);
		return (_obj.callFunction<bool>());
	};

	// wxString wxHtmlFilter::ReadFile(const wxFSFile & file) const
	wxString ReadFile(const wxFSFile & file) const {
		THROW_IF(!_obj.pushFunction("ReadFile"),"No implementation for abstract function wxHtmlFilter::ReadFile");
		_obj.pushArg((wxHtmlFilter*)this);
		_obj.pushArg(&file);
		return *(_obj.callFunction<wxString*>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


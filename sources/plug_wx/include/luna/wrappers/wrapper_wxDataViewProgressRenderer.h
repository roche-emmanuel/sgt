#ifndef _WRAPPERS_WRAPPER_WXDATAVIEWPROGRESSRENDERER_H_
#define _WRAPPERS_WRAPPER_WXDATAVIEWPROGRESSRENDERER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/dataview.h>

class wrapper_wxDataViewProgressRenderer : public wxDataViewProgressRenderer, public luna_wrapper_base {

public:
		

	~wrapper_wxDataViewProgressRenderer() {
		logDEBUG3("Calling delete function for wrapper wxDataViewProgressRenderer");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxDataViewProgressRenderer*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxDataViewProgressRenderer(lua_State* L, lua_Table* dum, const wxString & label = wxEmptyString, const wxString & varianttype = "long", wxDataViewCellMode mode = ::wxDATAVIEW_CELL_INERT, int align = -1) 
		: wxDataViewProgressRenderer(label, varianttype, mode, align), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxDataViewProgressRenderer*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxDataViewProgressRenderer*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxDataViewProgressRenderer::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxDataViewProgressRenderer*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxDataViewProgressRenderer::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxDataViewProgressRenderer*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxDataViewProgressRenderer::GetClassInfo();
	};

	// wxSize wxDataViewRenderer::GetSize() const
	wxSize GetSize() const {
		THROW_IF(!_obj.pushFunction("GetSize"),"No implementation for abstract function wxDataViewRenderer::GetSize");
		_obj.pushArg((wxDataViewProgressRenderer*)this);
		return *(_obj.callFunction<wxSize*>());
	};

	// bool wxDataViewRenderer::Render(wxRect arg1, wxDC * arg2, int arg3)
	bool Render(wxRect arg1, wxDC * arg2, int arg3) {
		THROW_IF(!_obj.pushFunction("Render"),"No implementation for abstract function wxDataViewRenderer::Render");
		_obj.pushArg((wxDataViewProgressRenderer*)this);
		_obj.pushArg(&arg1);
		_obj.pushArg(arg2);
		_obj.pushArg(arg3);
		return (_obj.callFunction<bool>());
	};

	// int wxDataViewRenderer::GetAlignment() const
	int GetAlignment() const {
		if(_obj.pushFunction("GetAlignment")) {
			_obj.pushArg((wxDataViewProgressRenderer*)this);
			return (_obj.callFunction<int>());
		}

		return wxDataViewProgressRenderer::GetAlignment();
	};

	// wxDataViewCellMode wxDataViewRenderer::GetMode() const
	wxDataViewCellMode GetMode() const {
		if(_obj.pushFunction("GetMode")) {
			_obj.pushArg((wxDataViewProgressRenderer*)this);
			return (wxDataViewCellMode)(_obj.callFunction<int>());
		}

		return wxDataViewProgressRenderer::GetMode();
	};

	// void wxDataViewRenderer::SetAlignment(int align)
	void SetAlignment(int align) {
		if(_obj.pushFunction("SetAlignment")) {
			_obj.pushArg((wxDataViewProgressRenderer*)this);
			_obj.pushArg(align);
			return (_obj.callFunction<void>());
		}

		return wxDataViewProgressRenderer::SetAlignment(align);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


public:
// bool wxDataViewRenderer::GetValue(wxVariant & value) const
bool GetValue(wxVariant &) const {
	THROW_IF(true,"The function call bool wxDataViewRenderer::GetValue(wxVariant &) const is not implemented in wrapper.");
	return bool();
};

public:
// bool wxDataViewRenderer::SetValue(const wxVariant & value)
bool SetValue(const wxVariant &) {
	THROW_IF(true,"The function call bool wxDataViewRenderer::SetValue(const wxVariant &) is not implemented in wrapper.");
	return bool();
};

};




#endif


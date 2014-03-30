#ifndef _WRAPPERS_WRAPPER_WXDATAVIEWSPINRENDERER_H_
#define _WRAPPERS_WRAPPER_WXDATAVIEWSPINRENDERER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/dataview.h>

class wrapper_wxDataViewSpinRenderer : public wxDataViewSpinRenderer, public luna_wrapper_base {

public:
		

	~wrapper_wxDataViewSpinRenderer() {
		logDEBUG3("Calling delete function for wrapper wxDataViewSpinRenderer");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxDataViewSpinRenderer*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxDataViewSpinRenderer(lua_State* L, lua_Table* dum, int min, int max, wxDataViewCellMode mode = ::wxDATAVIEW_CELL_EDITABLE, int align = -1) 
		: wxDataViewSpinRenderer(min, max, mode, align), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxDataViewSpinRenderer*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxDataViewSpinRenderer*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxDataViewSpinRenderer::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxDataViewSpinRenderer*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxDataViewSpinRenderer::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxDataViewSpinRenderer*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxDataViewSpinRenderer::GetClassInfo();
	};

	// int wxDataViewRenderer::GetAlignment() const
	int GetAlignment() const {
		if(_obj.pushFunction("GetAlignment")) {
			_obj.pushArg((wxDataViewSpinRenderer*)this);
			return (_obj.callFunction<int>());
		}

		return wxDataViewSpinRenderer::GetAlignment();
	};

	// wxDataViewCellMode wxDataViewRenderer::GetMode() const
	wxDataViewCellMode GetMode() const {
		if(_obj.pushFunction("GetMode")) {
			_obj.pushArg((wxDataViewSpinRenderer*)this);
			return (wxDataViewCellMode)(_obj.callFunction<int>());
		}

		return wxDataViewSpinRenderer::GetMode();
	};

	// void wxDataViewRenderer::SetAlignment(int align)
	void SetAlignment(int align) {
		if(_obj.pushFunction("SetAlignment")) {
			_obj.pushArg((wxDataViewSpinRenderer*)this);
			_obj.pushArg(align);
			return (_obj.callFunction<void>());
		}

		return wxDataViewSpinRenderer::SetAlignment(align);
	};

	// wxSize wxDataViewCustomRenderer::GetSize() const
	wxSize GetSize() const {
		THROW_IF(!_obj.pushFunction("GetSize"),"No implementation for abstract function wxDataViewCustomRenderer::GetSize");
		_obj.pushArg((wxDataViewSpinRenderer*)this);
		return *(_obj.callFunction<wxSize*>());
	};

	// bool wxDataViewCustomRenderer::ActivateCell(const wxRect & cell, wxDataViewModel * model, const wxDataViewItem & item, unsigned int col, const wxMouseEvent * mouseEvent)
	bool ActivateCell(const wxRect & cell, wxDataViewModel * model, const wxDataViewItem & item, unsigned int col, const wxMouseEvent * mouseEvent) {
		if(_obj.pushFunction("ActivateCell")) {
			_obj.pushArg((wxDataViewSpinRenderer*)this);
			_obj.pushArg(&cell);
			_obj.pushArg(model);
			_obj.pushArg(&item);
			_obj.pushArg(col);
			_obj.pushArg(mouseEvent);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewSpinRenderer::ActivateCell(cell, model, item, col, mouseEvent);
	};

	// bool wxDataViewCustomRenderer::HasEditorCtrl() const
	bool HasEditorCtrl() const {
		if(_obj.pushFunction("HasEditorCtrl")) {
			_obj.pushArg((wxDataViewSpinRenderer*)this);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewSpinRenderer::HasEditorCtrl();
	};

	// bool wxDataViewCustomRenderer::LeftClick(const wxPoint & cursor, const wxRect & cell, wxDataViewModel * model, const wxDataViewItem & item, unsigned int col)
	bool LeftClick(const wxPoint & cursor, const wxRect & cell, wxDataViewModel * model, const wxDataViewItem & item, unsigned int col) {
		if(_obj.pushFunction("LeftClick")) {
			_obj.pushArg((wxDataViewSpinRenderer*)this);
			_obj.pushArg(&cursor);
			_obj.pushArg(&cell);
			_obj.pushArg(model);
			_obj.pushArg(&item);
			_obj.pushArg(col);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewSpinRenderer::LeftClick(cursor, cell, model, item, col);
	};

	// bool wxDataViewCustomRenderer::Render(wxRect cell, wxDC * dc, int state)
	bool Render(wxRect cell, wxDC * dc, int state) {
		THROW_IF(!_obj.pushFunction("Render"),"No implementation for abstract function wxDataViewCustomRenderer::Render");
		_obj.pushArg((wxDataViewSpinRenderer*)this);
		_obj.pushArg(&cell);
		_obj.pushArg(dc);
		_obj.pushArg(state);
		return (_obj.callFunction<bool>());
	};

	// bool wxDataViewCustomRenderer::StartDrag(const wxPoint & cursor, const wxRect & cell, wxDataViewModel * model, const wxDataViewItem & item, unsigned int col)
	bool StartDrag(const wxPoint & cursor, const wxRect & cell, wxDataViewModel * model, const wxDataViewItem & item, unsigned int col) {
		if(_obj.pushFunction("StartDrag")) {
			_obj.pushArg((wxDataViewSpinRenderer*)this);
			_obj.pushArg(&cursor);
			_obj.pushArg(&cell);
			_obj.pushArg(model);
			_obj.pushArg(&item);
			_obj.pushArg(col);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewSpinRenderer::StartDrag(cursor, cell, model, item, col);
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


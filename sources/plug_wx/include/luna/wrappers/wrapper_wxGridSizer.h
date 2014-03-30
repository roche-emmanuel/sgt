#ifndef _WRAPPERS_WRAPPER_WXGRIDSIZER_H_
#define _WRAPPERS_WRAPPER_WXGRIDSIZER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/sizer.h>

class wrapper_wxGridSizer : public wxGridSizer, public luna_wrapper_base {

public:
		

	~wrapper_wxGridSizer() {
		logDEBUG3("Calling delete function for wrapper wxGridSizer");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxGridSizer*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxGridSizer(lua_State* L, lua_Table* dum, int cols, int vgap, int hgap) 
		: wxGridSizer(cols, vgap, hgap), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxGridSizer*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxGridSizer(lua_State* L, lua_Table* dum, int cols, const wxSize & gap = wxSize (0, 0)) 
		: wxGridSizer(cols, gap), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxGridSizer*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxGridSizer(lua_State* L, lua_Table* dum, int rows, int cols, int vgap, int hgap) 
		: wxGridSizer(rows, cols, vgap, hgap), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxGridSizer*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxGridSizer(lua_State* L, lua_Table* dum, int rows, int cols, const wxSize & gap) 
		: wxGridSizer(rows, cols, gap), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxGridSizer*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxGridSizer*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxGridSizer::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxGridSizer*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxGridSizer::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxGridSizer*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxGridSizer::GetClassInfo();
	};

	// wxSizerItem * wxSizer::AddSpacer(int size)
	wxSizerItem * AddSpacer(int size) {
		if(_obj.pushFunction("AddSpacer")) {
			_obj.pushArg((wxGridSizer*)this);
			_obj.pushArg(size);
			return (_obj.callFunction<wxSizerItem*>());
		}

		return wxGridSizer::AddSpacer(size);
	};

	// void wxSizer::Clear(bool delete_windows = false)
	void Clear(bool delete_windows = false) {
		if(_obj.pushFunction("Clear")) {
			_obj.pushArg((wxGridSizer*)this);
			_obj.pushArg(delete_windows);
			return (_obj.callFunction<void>());
		}

		return wxGridSizer::Clear(delete_windows);
	};

	// bool wxSizer::Detach(wxWindow * window)
	bool Detach(wxWindow * window) {
		if(_obj.pushFunction("Detach")) {
			_obj.pushArg((wxGridSizer*)this);
			_obj.pushArg(window);
			return (_obj.callFunction<bool>());
		}

		return wxGridSizer::Detach(window);
	};

	// bool wxSizer::Detach(wxSizer * sizer)
	bool Detach(wxSizer * sizer) {
		if(_obj.pushFunction("Detach")) {
			_obj.pushArg((wxGridSizer*)this);
			_obj.pushArg(sizer);
			return (_obj.callFunction<bool>());
		}

		return wxGridSizer::Detach(sizer);
	};

	// bool wxSizer::Detach(int index)
	bool Detach(int index) {
		if(_obj.pushFunction("Detach")) {
			_obj.pushArg((wxGridSizer*)this);
			_obj.pushArg(index);
			return (_obj.callFunction<bool>());
		}

		return wxGridSizer::Detach(index);
	};

	// bool wxSizer::InformFirstDirection(int direction, int size, int availableOtherDir)
	bool InformFirstDirection(int direction, int size, int availableOtherDir) {
		if(_obj.pushFunction("InformFirstDirection")) {
			_obj.pushArg((wxGridSizer*)this);
			_obj.pushArg(direction);
			_obj.pushArg(size);
			_obj.pushArg(availableOtherDir);
			return (_obj.callFunction<bool>());
		}

		return wxGridSizer::InformFirstDirection(direction, size, availableOtherDir);
	};

	// void wxSizer::Layout()
	void Layout() {
		if(_obj.pushFunction("Layout")) {
			_obj.pushArg((wxGridSizer*)this);
			return (_obj.callFunction<void>());
		}

		return wxGridSizer::Layout();
	};

	// bool wxSizer::Remove(wxSizer * sizer)
	bool Remove(wxSizer * sizer) {
		if(_obj.pushFunction("Remove")) {
			_obj.pushArg((wxGridSizer*)this);
			_obj.pushArg(sizer);
			return (_obj.callFunction<bool>());
		}

		return wxGridSizer::Remove(sizer);
	};

	// bool wxSizer::Remove(int index)
	bool Remove(int index) {
		if(_obj.pushFunction("Remove")) {
			_obj.pushArg((wxGridSizer*)this);
			_obj.pushArg(index);
			return (_obj.callFunction<bool>());
		}

		return wxGridSizer::Remove(index);
	};

	// bool wxSizer::Replace(wxWindow * oldwin, wxWindow * newwin, bool recursive = false)
	bool Replace(wxWindow * oldwin, wxWindow * newwin, bool recursive = false) {
		if(_obj.pushFunction("Replace")) {
			_obj.pushArg((wxGridSizer*)this);
			_obj.pushArg(oldwin);
			_obj.pushArg(newwin);
			_obj.pushArg(recursive);
			return (_obj.callFunction<bool>());
		}

		return wxGridSizer::Replace(oldwin, newwin, recursive);
	};

	// bool wxSizer::Replace(wxSizer * oldsz, wxSizer * newsz, bool recursive = false)
	bool Replace(wxSizer * oldsz, wxSizer * newsz, bool recursive = false) {
		if(_obj.pushFunction("Replace")) {
			_obj.pushArg((wxGridSizer*)this);
			_obj.pushArg(oldsz);
			_obj.pushArg(newsz);
			_obj.pushArg(recursive);
			return (_obj.callFunction<bool>());
		}

		return wxGridSizer::Replace(oldsz, newsz, recursive);
	};

	// bool wxSizer::Replace(size_t index, wxSizerItem * newitem)
	bool Replace(size_t index, wxSizerItem * newitem) {
		if(_obj.pushFunction("Replace")) {
			_obj.pushArg((wxGridSizer*)this);
			_obj.pushArg(index);
			_obj.pushArg(newitem);
			return (_obj.callFunction<bool>());
		}

		return wxGridSizer::Replace(index, newitem);
	};

	// wxSize wxGridSizer::CalcMin()
	wxSize CalcMin() {
		if(_obj.pushFunction("CalcMin")) {
			_obj.pushArg((wxGridSizer*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxGridSizer::CalcMin();
	};

	// void wxGridSizer::RecalcSizes()
	void RecalcSizes() {
		if(_obj.pushFunction("RecalcSizes")) {
			_obj.pushArg((wxGridSizer*)this);
			return (_obj.callFunction<void>());
		}

		return wxGridSizer::RecalcSizes();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


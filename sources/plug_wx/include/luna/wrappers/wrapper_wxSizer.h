#ifndef _WRAPPERS_WRAPPER_WXSIZER_H_
#define _WRAPPERS_WRAPPER_WXSIZER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/sizer.h>

class wrapper_wxSizer : public wxSizer, public luna_wrapper_base {

public:
		

	~wrapper_wxSizer() {
		logDEBUG3("Calling delete function for wrapper wxSizer");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxSizer*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxSizer(lua_State* L, lua_Table* dum) 
		: wxSizer(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxSizer*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxSizer*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxSizer::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxSizer*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxSizer::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxSizer*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxSizer::GetClassInfo();
	};

	// wxSizerItem * wxSizer::AddSpacer(int size)
	wxSizerItem * AddSpacer(int size) {
		if(_obj.pushFunction("AddSpacer")) {
			_obj.pushArg((wxSizer*)this);
			_obj.pushArg(size);
			return (_obj.callFunction<wxSizerItem*>());
		}

		return wxSizer::AddSpacer(size);
	};

	// wxSize wxSizer::CalcMin()
	wxSize CalcMin() {
		THROW_IF(!_obj.pushFunction("CalcMin"),"No implementation for abstract function wxSizer::CalcMin");
		_obj.pushArg((wxSizer*)this);
		return *(_obj.callFunction<wxSize*>());
	};

	// void wxSizer::Clear(bool delete_windows = false)
	void Clear(bool delete_windows = false) {
		if(_obj.pushFunction("Clear")) {
			_obj.pushArg((wxSizer*)this);
			_obj.pushArg(delete_windows);
			return (_obj.callFunction<void>());
		}

		return wxSizer::Clear(delete_windows);
	};

	// bool wxSizer::Detach(wxWindow * window)
	bool Detach(wxWindow * window) {
		if(_obj.pushFunction("Detach")) {
			_obj.pushArg((wxSizer*)this);
			_obj.pushArg(window);
			return (_obj.callFunction<bool>());
		}

		return wxSizer::Detach(window);
	};

	// bool wxSizer::Detach(wxSizer * sizer)
	bool Detach(wxSizer * sizer) {
		if(_obj.pushFunction("Detach")) {
			_obj.pushArg((wxSizer*)this);
			_obj.pushArg(sizer);
			return (_obj.callFunction<bool>());
		}

		return wxSizer::Detach(sizer);
	};

	// bool wxSizer::Detach(int index)
	bool Detach(int index) {
		if(_obj.pushFunction("Detach")) {
			_obj.pushArg((wxSizer*)this);
			_obj.pushArg(index);
			return (_obj.callFunction<bool>());
		}

		return wxSizer::Detach(index);
	};

	// bool wxSizer::InformFirstDirection(int direction, int size, int availableOtherDir)
	bool InformFirstDirection(int direction, int size, int availableOtherDir) {
		if(_obj.pushFunction("InformFirstDirection")) {
			_obj.pushArg((wxSizer*)this);
			_obj.pushArg(direction);
			_obj.pushArg(size);
			_obj.pushArg(availableOtherDir);
			return (_obj.callFunction<bool>());
		}

		return wxSizer::InformFirstDirection(direction, size, availableOtherDir);
	};

	// void wxSizer::Layout()
	void Layout() {
		if(_obj.pushFunction("Layout")) {
			_obj.pushArg((wxSizer*)this);
			return (_obj.callFunction<void>());
		}

		return wxSizer::Layout();
	};

	// void wxSizer::RecalcSizes()
	void RecalcSizes() {
		THROW_IF(!_obj.pushFunction("RecalcSizes"),"No implementation for abstract function wxSizer::RecalcSizes");
		_obj.pushArg((wxSizer*)this);
		return (_obj.callFunction<void>());
	};

	// bool wxSizer::Remove(wxSizer * sizer)
	bool Remove(wxSizer * sizer) {
		if(_obj.pushFunction("Remove")) {
			_obj.pushArg((wxSizer*)this);
			_obj.pushArg(sizer);
			return (_obj.callFunction<bool>());
		}

		return wxSizer::Remove(sizer);
	};

	// bool wxSizer::Remove(int index)
	bool Remove(int index) {
		if(_obj.pushFunction("Remove")) {
			_obj.pushArg((wxSizer*)this);
			_obj.pushArg(index);
			return (_obj.callFunction<bool>());
		}

		return wxSizer::Remove(index);
	};

	// bool wxSizer::Replace(wxWindow * oldwin, wxWindow * newwin, bool recursive = false)
	bool Replace(wxWindow * oldwin, wxWindow * newwin, bool recursive = false) {
		if(_obj.pushFunction("Replace")) {
			_obj.pushArg((wxSizer*)this);
			_obj.pushArg(oldwin);
			_obj.pushArg(newwin);
			_obj.pushArg(recursive);
			return (_obj.callFunction<bool>());
		}

		return wxSizer::Replace(oldwin, newwin, recursive);
	};

	// bool wxSizer::Replace(wxSizer * oldsz, wxSizer * newsz, bool recursive = false)
	bool Replace(wxSizer * oldsz, wxSizer * newsz, bool recursive = false) {
		if(_obj.pushFunction("Replace")) {
			_obj.pushArg((wxSizer*)this);
			_obj.pushArg(oldsz);
			_obj.pushArg(newsz);
			_obj.pushArg(recursive);
			return (_obj.callFunction<bool>());
		}

		return wxSizer::Replace(oldsz, newsz, recursive);
	};

	// bool wxSizer::Replace(size_t index, wxSizerItem * newitem)
	bool Replace(size_t index, wxSizerItem * newitem) {
		if(_obj.pushFunction("Replace")) {
			_obj.pushArg((wxSizer*)this);
			_obj.pushArg(index);
			_obj.pushArg(newitem);
			return (_obj.callFunction<bool>());
		}

		return wxSizer::Replace(index, newitem);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


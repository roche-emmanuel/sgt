#ifndef _WRAPPERS_WRAPPER_WXCLIPBOARD_H_
#define _WRAPPERS_WRAPPER_WXCLIPBOARD_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/clipbrd.h>

class wrapper_wxClipboard : public wxClipboard, public luna_wrapper_base {

public:
		

	~wrapper_wxClipboard() {
		logDEBUG3("Calling delete function for wrapper wxClipboard");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxClipboard*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxClipboard(lua_State* L, lua_Table* dum) 
		: wxClipboard(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxClipboard*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxClipboard*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxClipboard::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxClipboard*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxClipboard::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxClipboard*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxClipboard::GetClassInfo();
	};

	// bool wxClipboard::AddData(wxDataObject * data)
	bool AddData(wxDataObject * data) {
		if(_obj.pushFunction("AddData")) {
			_obj.pushArg((wxClipboard*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<bool>());
		}

		return wxClipboard::AddData(data);
	};

	// void wxClipboard::Clear()
	void Clear() {
		if(_obj.pushFunction("Clear")) {
			_obj.pushArg((wxClipboard*)this);
			return (_obj.callFunction<void>());
		}

		return wxClipboard::Clear();
	};

	// void wxClipboard::Close()
	void Close() {
		if(_obj.pushFunction("Close")) {
			_obj.pushArg((wxClipboard*)this);
			return (_obj.callFunction<void>());
		}

		return wxClipboard::Close();
	};

	// bool wxClipboard::Flush()
	bool Flush() {
		if(_obj.pushFunction("Flush")) {
			_obj.pushArg((wxClipboard*)this);
			return (_obj.callFunction<bool>());
		}

		return wxClipboard::Flush();
	};

	// bool wxClipboard::GetData(wxDataObject & data)
	bool GetData(wxDataObject & data) {
		if(_obj.pushFunction("GetData")) {
			_obj.pushArg((wxClipboard*)this);
			_obj.pushArg(&data);
			return (_obj.callFunction<bool>());
		}

		return wxClipboard::GetData(data);
	};

	// bool wxClipboard::IsOpened() const
	bool IsOpened() const {
		if(_obj.pushFunction("IsOpened")) {
			_obj.pushArg((wxClipboard*)this);
			return (_obj.callFunction<bool>());
		}

		return wxClipboard::IsOpened();
	};

	// bool wxClipboard::IsSupported(const wxDataFormat & format)
	bool IsSupported(const wxDataFormat & format) {
		if(_obj.pushFunction("IsSupported")) {
			_obj.pushArg((wxClipboard*)this);
			_obj.pushArg(&format);
			return (_obj.callFunction<bool>());
		}

		return wxClipboard::IsSupported(format);
	};

	// bool wxClipboard::Open()
	bool Open() {
		if(_obj.pushFunction("Open")) {
			_obj.pushArg((wxClipboard*)this);
			return (_obj.callFunction<bool>());
		}

		return wxClipboard::Open();
	};

	// bool wxClipboard::SetData(wxDataObject * data)
	bool SetData(wxDataObject * data) {
		if(_obj.pushFunction("SetData")) {
			_obj.pushArg((wxClipboard*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<bool>());
		}

		return wxClipboard::SetData(data);
	};

	// void wxClipboard::UsePrimarySelection(bool primary = false)
	void UsePrimarySelection(bool primary = false) {
		if(_obj.pushFunction("UsePrimarySelection")) {
			_obj.pushArg((wxClipboard*)this);
			_obj.pushArg(primary);
			return (_obj.callFunction<void>());
		}

		return wxClipboard::UsePrimarySelection(primary);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


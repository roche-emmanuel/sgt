#ifndef _WRAPPERS_WRAPPER_WXSTREAMBASE_H_
#define _WRAPPERS_WRAPPER_WXSTREAMBASE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/stream.h>

class wrapper_wxStreamBase : public wxStreamBase, public luna_wrapper_base {

public:
		

	~wrapper_wxStreamBase() {
		logDEBUG3("Calling delete function for wrapper wxStreamBase");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxStreamBase*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxStreamBase(lua_State* L, lua_Table* dum) 
		: wxStreamBase(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxStreamBase*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxStreamBase*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxStreamBase::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxStreamBase*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxStreamBase::CloneRefData(data);
	};

	// long long wxStreamBase::OnSysSeek(long long pos, wxSeekMode mode)
	long long OnSysSeek(long long pos, wxSeekMode mode) {
		if(_obj.pushFunction("OnSysSeek")) {
			_obj.pushArg((wxStreamBase*)this);
			_obj.pushArg(pos);
			_obj.pushArg((int)mode);
			return (_obj.callFunction<long long>());
		}

		return wxStreamBase::OnSysSeek(pos, mode);
	};

	// long long wxStreamBase::OnSysTell() const
	long long OnSysTell() const {
		if(_obj.pushFunction("OnSysTell")) {
			_obj.pushArg((wxStreamBase*)this);
			return (_obj.callFunction<long long>());
		}

		return wxStreamBase::OnSysTell();
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxStreamBase*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxStreamBase::GetClassInfo();
	};

	// long long wxStreamBase::GetLength() const
	long long GetLength() const {
		if(_obj.pushFunction("GetLength")) {
			_obj.pushArg((wxStreamBase*)this);
			return (_obj.callFunction<long long>());
		}

		return wxStreamBase::GetLength();
	};

	// size_t wxStreamBase::GetSize() const
	size_t GetSize() const {
		if(_obj.pushFunction("GetSize")) {
			_obj.pushArg((wxStreamBase*)this);
			return (_obj.callFunction<size_t>());
		}

		return wxStreamBase::GetSize();
	};

	// bool wxStreamBase::IsOk() const
	bool IsOk() const {
		if(_obj.pushFunction("IsOk")) {
			_obj.pushArg((wxStreamBase*)this);
			return (_obj.callFunction<bool>());
		}

		return wxStreamBase::IsOk();
	};

	// bool wxStreamBase::IsSeekable() const
	bool IsSeekable() const {
		if(_obj.pushFunction("IsSeekable")) {
			_obj.pushArg((wxStreamBase*)this);
			return (_obj.callFunction<bool>());
		}

		return wxStreamBase::IsSeekable();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


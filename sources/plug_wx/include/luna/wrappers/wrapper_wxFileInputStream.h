#ifndef _WRAPPERS_WRAPPER_WXFILEINPUTSTREAM_H_
#define _WRAPPERS_WRAPPER_WXFILEINPUTSTREAM_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/wfstream.h>

class wrapper_wxFileInputStream : public wxFileInputStream, public luna_wrapper_base {

public:
		

	~wrapper_wxFileInputStream() {
		logDEBUG3("Calling delete function for wrapper wxFileInputStream");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxFileInputStream*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxFileInputStream(lua_State* L, lua_Table* dum, const wxString & ifileName) 
		: wxFileInputStream(ifileName), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxFileInputStream*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxFileInputStream(lua_State* L, lua_Table* dum, wxFile & file) 
		: wxFileInputStream(file), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxFileInputStream*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxFileInputStream(lua_State* L, lua_Table* dum, int fd) 
		: wxFileInputStream(fd), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxFileInputStream*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxFileInputStream*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxFileInputStream::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxFileInputStream*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxFileInputStream::CloneRefData(data);
	};

	// long long wxStreamBase::OnSysSeek(long long pos, wxSeekMode mode)
	long long OnSysSeek(long long pos, wxSeekMode mode) {
		if(_obj.pushFunction("OnSysSeek")) {
			_obj.pushArg((wxFileInputStream*)this);
			_obj.pushArg(pos);
			_obj.pushArg((int)mode);
			return (_obj.callFunction<long long>());
		}

		return wxFileInputStream::OnSysSeek(pos, mode);
	};

	// long long wxStreamBase::OnSysTell() const
	long long OnSysTell() const {
		if(_obj.pushFunction("OnSysTell")) {
			_obj.pushArg((wxFileInputStream*)this);
			return (_obj.callFunction<long long>());
		}

		return wxFileInputStream::OnSysTell();
	};

	// size_t wxInputStream::OnSysRead(void * buffer, size_t bufsize)
	size_t OnSysRead(void * buffer, size_t bufsize) {
		THROW_IF(!_obj.pushFunction("OnSysRead"),"No implementation for abstract function wxInputStream::OnSysRead");
		_obj.pushArg((wxFileInputStream*)this);
		_obj.pushArg(buffer);
		_obj.pushArg(bufsize);
		return (_obj.callFunction<size_t>());
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxFileInputStream*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxFileInputStream::GetClassInfo();
	};

	// long long wxStreamBase::GetLength() const
	long long GetLength() const {
		if(_obj.pushFunction("GetLength")) {
			_obj.pushArg((wxFileInputStream*)this);
			return (_obj.callFunction<long long>());
		}

		return wxFileInputStream::GetLength();
	};

	// size_t wxStreamBase::GetSize() const
	size_t GetSize() const {
		if(_obj.pushFunction("GetSize")) {
			_obj.pushArg((wxFileInputStream*)this);
			return (_obj.callFunction<size_t>());
		}

		return wxFileInputStream::GetSize();
	};

	// bool wxStreamBase::IsSeekable() const
	bool IsSeekable() const {
		if(_obj.pushFunction("IsSeekable")) {
			_obj.pushArg((wxFileInputStream*)this);
			return (_obj.callFunction<bool>());
		}

		return wxFileInputStream::IsSeekable();
	};

	// bool wxInputStream::CanRead() const
	bool CanRead() const {
		if(_obj.pushFunction("CanRead")) {
			_obj.pushArg((wxFileInputStream*)this);
			return (_obj.callFunction<bool>());
		}

		return wxFileInputStream::CanRead();
	};

	// bool wxInputStream::Eof() const
	bool Eof() const {
		if(_obj.pushFunction("Eof")) {
			_obj.pushArg((wxFileInputStream*)this);
			return (_obj.callFunction<bool>());
		}

		return wxFileInputStream::Eof();
	};

	// size_t wxInputStream::LastRead() const
	size_t LastRead() const {
		if(_obj.pushFunction("LastRead")) {
			_obj.pushArg((wxFileInputStream*)this);
			return (_obj.callFunction<size_t>());
		}

		return wxFileInputStream::LastRead();
	};

	// char wxInputStream::Peek()
	char Peek() {
		if(_obj.pushFunction("Peek")) {
			_obj.pushArg((wxFileInputStream*)this);
			return (char)(_obj.callFunction<int>());
		}

		return wxFileInputStream::Peek();
	};

	// wxInputStream & wxInputStream::Read(void * buffer, size_t size)
	wxInputStream & Read(void * buffer, size_t size) {
		if(_obj.pushFunction("Read")) {
			_obj.pushArg((wxFileInputStream*)this);
			_obj.pushArg(buffer);
			_obj.pushArg(size);
			return *(_obj.callFunction<wxInputStream*>());
		}

		return wxFileInputStream::Read(buffer, size);
	};

	// long long wxInputStream::SeekI(long long pos, wxSeekMode mode = ::wxFromStart)
	long long SeekI(long long pos, wxSeekMode mode = ::wxFromStart) {
		if(_obj.pushFunction("SeekI")) {
			_obj.pushArg((wxFileInputStream*)this);
			_obj.pushArg(pos);
			_obj.pushArg((int)mode);
			return (_obj.callFunction<long long>());
		}

		return wxFileInputStream::SeekI(pos, mode);
	};

	// long long wxInputStream::TellI() const
	long long TellI() const {
		if(_obj.pushFunction("TellI")) {
			_obj.pushArg((wxFileInputStream*)this);
			return (_obj.callFunction<long long>());
		}

		return wxFileInputStream::TellI();
	};

	// bool wxFileInputStream::IsOk() const
	bool IsOk() const {
		if(_obj.pushFunction("IsOk")) {
			_obj.pushArg((wxFileInputStream*)this);
			return (_obj.callFunction<bool>());
		}

		return wxFileInputStream::IsOk();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


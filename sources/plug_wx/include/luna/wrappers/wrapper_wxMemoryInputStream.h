#ifndef _WRAPPERS_WRAPPER_WXMEMORYINPUTSTREAM_H_
#define _WRAPPERS_WRAPPER_WXMEMORYINPUTSTREAM_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/mstream.h>

class wrapper_wxMemoryInputStream : public wxMemoryInputStream, public luna_wrapper_base {

public:
		

	~wrapper_wxMemoryInputStream() {
		logDEBUG3("Calling delete function for wrapper wxMemoryInputStream");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxMemoryInputStream*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxMemoryInputStream(lua_State* L, lua_Table* dum, const void * data, size_t len) 
		: wxMemoryInputStream(data, len), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxMemoryInputStream*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxMemoryInputStream(lua_State* L, lua_Table* dum, const wxMemoryOutputStream & stream) 
		: wxMemoryInputStream(stream), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxMemoryInputStream*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxMemoryInputStream(lua_State* L, lua_Table* dum, wxInputStream & stream, long long len = wxInvalidOffset) 
		: wxMemoryInputStream(stream, len), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxMemoryInputStream*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxMemoryInputStream*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxMemoryInputStream::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxMemoryInputStream*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxMemoryInputStream::CloneRefData(data);
	};

	// long long wxStreamBase::OnSysSeek(long long pos, wxSeekMode mode)
	long long OnSysSeek(long long pos, wxSeekMode mode) {
		if(_obj.pushFunction("OnSysSeek")) {
			_obj.pushArg((wxMemoryInputStream*)this);
			_obj.pushArg(pos);
			_obj.pushArg((int)mode);
			return (_obj.callFunction<long long>());
		}

		return wxMemoryInputStream::OnSysSeek(pos, mode);
	};

	// long long wxStreamBase::OnSysTell() const
	long long OnSysTell() const {
		if(_obj.pushFunction("OnSysTell")) {
			_obj.pushArg((wxMemoryInputStream*)this);
			return (_obj.callFunction<long long>());
		}

		return wxMemoryInputStream::OnSysTell();
	};

	// size_t wxInputStream::OnSysRead(void * buffer, size_t bufsize)
	size_t OnSysRead(void * buffer, size_t bufsize) {
		THROW_IF(!_obj.pushFunction("OnSysRead"),"No implementation for abstract function wxInputStream::OnSysRead");
		_obj.pushArg((wxMemoryInputStream*)this);
		_obj.pushArg(buffer);
		_obj.pushArg(bufsize);
		return (_obj.callFunction<size_t>());
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxMemoryInputStream*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxMemoryInputStream::GetClassInfo();
	};

	// long long wxStreamBase::GetLength() const
	long long GetLength() const {
		if(_obj.pushFunction("GetLength")) {
			_obj.pushArg((wxMemoryInputStream*)this);
			return (_obj.callFunction<long long>());
		}

		return wxMemoryInputStream::GetLength();
	};

	// size_t wxStreamBase::GetSize() const
	size_t GetSize() const {
		if(_obj.pushFunction("GetSize")) {
			_obj.pushArg((wxMemoryInputStream*)this);
			return (_obj.callFunction<size_t>());
		}

		return wxMemoryInputStream::GetSize();
	};

	// bool wxStreamBase::IsOk() const
	bool IsOk() const {
		if(_obj.pushFunction("IsOk")) {
			_obj.pushArg((wxMemoryInputStream*)this);
			return (_obj.callFunction<bool>());
		}

		return wxMemoryInputStream::IsOk();
	};

	// bool wxStreamBase::IsSeekable() const
	bool IsSeekable() const {
		if(_obj.pushFunction("IsSeekable")) {
			_obj.pushArg((wxMemoryInputStream*)this);
			return (_obj.callFunction<bool>());
		}

		return wxMemoryInputStream::IsSeekable();
	};

	// bool wxInputStream::CanRead() const
	bool CanRead() const {
		if(_obj.pushFunction("CanRead")) {
			_obj.pushArg((wxMemoryInputStream*)this);
			return (_obj.callFunction<bool>());
		}

		return wxMemoryInputStream::CanRead();
	};

	// bool wxInputStream::Eof() const
	bool Eof() const {
		if(_obj.pushFunction("Eof")) {
			_obj.pushArg((wxMemoryInputStream*)this);
			return (_obj.callFunction<bool>());
		}

		return wxMemoryInputStream::Eof();
	};

	// size_t wxInputStream::LastRead() const
	size_t LastRead() const {
		if(_obj.pushFunction("LastRead")) {
			_obj.pushArg((wxMemoryInputStream*)this);
			return (_obj.callFunction<size_t>());
		}

		return wxMemoryInputStream::LastRead();
	};

	// char wxInputStream::Peek()
	char Peek() {
		if(_obj.pushFunction("Peek")) {
			_obj.pushArg((wxMemoryInputStream*)this);
			return (char)(_obj.callFunction<int>());
		}

		return wxMemoryInputStream::Peek();
	};

	// wxInputStream & wxInputStream::Read(void * buffer, size_t size)
	wxInputStream & Read(void * buffer, size_t size) {
		if(_obj.pushFunction("Read")) {
			_obj.pushArg((wxMemoryInputStream*)this);
			_obj.pushArg(buffer);
			_obj.pushArg(size);
			return *(_obj.callFunction<wxInputStream*>());
		}

		return wxMemoryInputStream::Read(buffer, size);
	};

	// long long wxInputStream::SeekI(long long pos, wxSeekMode mode = ::wxFromStart)
	long long SeekI(long long pos, wxSeekMode mode = ::wxFromStart) {
		if(_obj.pushFunction("SeekI")) {
			_obj.pushArg((wxMemoryInputStream*)this);
			_obj.pushArg(pos);
			_obj.pushArg((int)mode);
			return (_obj.callFunction<long long>());
		}

		return wxMemoryInputStream::SeekI(pos, mode);
	};

	// long long wxInputStream::TellI() const
	long long TellI() const {
		if(_obj.pushFunction("TellI")) {
			_obj.pushArg((wxMemoryInputStream*)this);
			return (_obj.callFunction<long long>());
		}

		return wxMemoryInputStream::TellI();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


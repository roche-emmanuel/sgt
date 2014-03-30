#ifndef _WRAPPERS_WRAPPER_WXZLIBINPUTSTREAM_H_
#define _WRAPPERS_WRAPPER_WXZLIBINPUTSTREAM_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/zstream.h>

class wrapper_wxZlibInputStream : public wxZlibInputStream, public luna_wrapper_base {

public:
		

	~wrapper_wxZlibInputStream() {
		logDEBUG3("Calling delete function for wrapper wxZlibInputStream");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxZlibInputStream*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxZlibInputStream(lua_State* L, lua_Table* dum, wxInputStream & stream, int flags = 3) 
		: wxZlibInputStream(stream, flags), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxZlibInputStream*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxZlibInputStream(lua_State* L, lua_Table* dum, wxInputStream * stream, int flags = 3) 
		: wxZlibInputStream(stream, flags), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxZlibInputStream*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxZlibInputStream*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxZlibInputStream::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxZlibInputStream*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxZlibInputStream::CloneRefData(data);
	};

	// long long wxStreamBase::OnSysSeek(long long pos, wxSeekMode mode)
	long long OnSysSeek(long long pos, wxSeekMode mode) {
		if(_obj.pushFunction("OnSysSeek")) {
			_obj.pushArg((wxZlibInputStream*)this);
			_obj.pushArg(pos);
			_obj.pushArg((int)mode);
			return (_obj.callFunction<long long>());
		}

		return wxZlibInputStream::OnSysSeek(pos, mode);
	};

	// long long wxStreamBase::OnSysTell() const
	long long OnSysTell() const {
		if(_obj.pushFunction("OnSysTell")) {
			_obj.pushArg((wxZlibInputStream*)this);
			return (_obj.callFunction<long long>());
		}

		return wxZlibInputStream::OnSysTell();
	};

	// size_t wxInputStream::OnSysRead(void * buffer, size_t bufsize)
	size_t OnSysRead(void * buffer, size_t bufsize) {
		THROW_IF(!_obj.pushFunction("OnSysRead"),"No implementation for abstract function wxInputStream::OnSysRead");
		_obj.pushArg((wxZlibInputStream*)this);
		_obj.pushArg(buffer);
		_obj.pushArg(bufsize);
		return (_obj.callFunction<size_t>());
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxZlibInputStream*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxZlibInputStream::GetClassInfo();
	};

	// long long wxStreamBase::GetLength() const
	long long GetLength() const {
		if(_obj.pushFunction("GetLength")) {
			_obj.pushArg((wxZlibInputStream*)this);
			return (_obj.callFunction<long long>());
		}

		return wxZlibInputStream::GetLength();
	};

	// size_t wxStreamBase::GetSize() const
	size_t GetSize() const {
		if(_obj.pushFunction("GetSize")) {
			_obj.pushArg((wxZlibInputStream*)this);
			return (_obj.callFunction<size_t>());
		}

		return wxZlibInputStream::GetSize();
	};

	// bool wxStreamBase::IsOk() const
	bool IsOk() const {
		if(_obj.pushFunction("IsOk")) {
			_obj.pushArg((wxZlibInputStream*)this);
			return (_obj.callFunction<bool>());
		}

		return wxZlibInputStream::IsOk();
	};

	// bool wxStreamBase::IsSeekable() const
	bool IsSeekable() const {
		if(_obj.pushFunction("IsSeekable")) {
			_obj.pushArg((wxZlibInputStream*)this);
			return (_obj.callFunction<bool>());
		}

		return wxZlibInputStream::IsSeekable();
	};

	// bool wxInputStream::CanRead() const
	bool CanRead() const {
		if(_obj.pushFunction("CanRead")) {
			_obj.pushArg((wxZlibInputStream*)this);
			return (_obj.callFunction<bool>());
		}

		return wxZlibInputStream::CanRead();
	};

	// bool wxInputStream::Eof() const
	bool Eof() const {
		if(_obj.pushFunction("Eof")) {
			_obj.pushArg((wxZlibInputStream*)this);
			return (_obj.callFunction<bool>());
		}

		return wxZlibInputStream::Eof();
	};

	// size_t wxInputStream::LastRead() const
	size_t LastRead() const {
		if(_obj.pushFunction("LastRead")) {
			_obj.pushArg((wxZlibInputStream*)this);
			return (_obj.callFunction<size_t>());
		}

		return wxZlibInputStream::LastRead();
	};

	// char wxInputStream::Peek()
	char Peek() {
		if(_obj.pushFunction("Peek")) {
			_obj.pushArg((wxZlibInputStream*)this);
			return (char)(_obj.callFunction<int>());
		}

		return wxZlibInputStream::Peek();
	};

	// wxInputStream & wxInputStream::Read(void * buffer, size_t size)
	wxInputStream & Read(void * buffer, size_t size) {
		if(_obj.pushFunction("Read")) {
			_obj.pushArg((wxZlibInputStream*)this);
			_obj.pushArg(buffer);
			_obj.pushArg(size);
			return *(_obj.callFunction<wxInputStream*>());
		}

		return wxZlibInputStream::Read(buffer, size);
	};

	// long long wxInputStream::SeekI(long long pos, wxSeekMode mode = ::wxFromStart)
	long long SeekI(long long pos, wxSeekMode mode = ::wxFromStart) {
		if(_obj.pushFunction("SeekI")) {
			_obj.pushArg((wxZlibInputStream*)this);
			_obj.pushArg(pos);
			_obj.pushArg((int)mode);
			return (_obj.callFunction<long long>());
		}

		return wxZlibInputStream::SeekI(pos, mode);
	};

	// long long wxInputStream::TellI() const
	long long TellI() const {
		if(_obj.pushFunction("TellI")) {
			_obj.pushArg((wxZlibInputStream*)this);
			return (_obj.callFunction<long long>());
		}

		return wxZlibInputStream::TellI();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


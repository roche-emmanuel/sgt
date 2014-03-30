#ifndef _WRAPPERS_WRAPPER_WXOUTPUTSTREAM_H_
#define _WRAPPERS_WRAPPER_WXOUTPUTSTREAM_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/stream.h>

class wrapper_wxOutputStream : public wxOutputStream, public luna_wrapper_base {

public:
		

	~wrapper_wxOutputStream() {
		logDEBUG3("Calling delete function for wrapper wxOutputStream");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxOutputStream*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxOutputStream(lua_State* L, lua_Table* dum) 
		: wxOutputStream(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxOutputStream*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxOutputStream*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxOutputStream::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxOutputStream*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxOutputStream::CloneRefData(data);
	};

	// long long wxStreamBase::OnSysSeek(long long pos, wxSeekMode mode)
	long long OnSysSeek(long long pos, wxSeekMode mode) {
		if(_obj.pushFunction("OnSysSeek")) {
			_obj.pushArg((wxOutputStream*)this);
			_obj.pushArg(pos);
			_obj.pushArg((int)mode);
			return (_obj.callFunction<long long>());
		}

		return wxOutputStream::OnSysSeek(pos, mode);
	};

	// long long wxStreamBase::OnSysTell() const
	long long OnSysTell() const {
		if(_obj.pushFunction("OnSysTell")) {
			_obj.pushArg((wxOutputStream*)this);
			return (_obj.callFunction<long long>());
		}

		return wxOutputStream::OnSysTell();
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxOutputStream*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxOutputStream::GetClassInfo();
	};

	// long long wxStreamBase::GetLength() const
	long long GetLength() const {
		if(_obj.pushFunction("GetLength")) {
			_obj.pushArg((wxOutputStream*)this);
			return (_obj.callFunction<long long>());
		}

		return wxOutputStream::GetLength();
	};

	// size_t wxStreamBase::GetSize() const
	size_t GetSize() const {
		if(_obj.pushFunction("GetSize")) {
			_obj.pushArg((wxOutputStream*)this);
			return (_obj.callFunction<size_t>());
		}

		return wxOutputStream::GetSize();
	};

	// bool wxStreamBase::IsOk() const
	bool IsOk() const {
		if(_obj.pushFunction("IsOk")) {
			_obj.pushArg((wxOutputStream*)this);
			return (_obj.callFunction<bool>());
		}

		return wxOutputStream::IsOk();
	};

	// bool wxStreamBase::IsSeekable() const
	bool IsSeekable() const {
		if(_obj.pushFunction("IsSeekable")) {
			_obj.pushArg((wxOutputStream*)this);
			return (_obj.callFunction<bool>());
		}

		return wxOutputStream::IsSeekable();
	};

	// bool wxOutputStream::Close()
	bool Close() {
		if(_obj.pushFunction("Close")) {
			_obj.pushArg((wxOutputStream*)this);
			return (_obj.callFunction<bool>());
		}

		return wxOutputStream::Close();
	};

	// size_t wxOutputStream::LastWrite() const
	size_t LastWrite() const {
		if(_obj.pushFunction("LastWrite")) {
			_obj.pushArg((wxOutputStream*)this);
			return (_obj.callFunction<size_t>());
		}

		return wxOutputStream::LastWrite();
	};

	// long long wxOutputStream::SeekO(long long pos, wxSeekMode mode = ::wxFromStart)
	long long SeekO(long long pos, wxSeekMode mode = ::wxFromStart) {
		if(_obj.pushFunction("SeekO")) {
			_obj.pushArg((wxOutputStream*)this);
			_obj.pushArg(pos);
			_obj.pushArg((int)mode);
			return (_obj.callFunction<long long>());
		}

		return wxOutputStream::SeekO(pos, mode);
	};

	// long long wxOutputStream::TellO() const
	long long TellO() const {
		if(_obj.pushFunction("TellO")) {
			_obj.pushArg((wxOutputStream*)this);
			return (_obj.callFunction<long long>());
		}

		return wxOutputStream::TellO();
	};

	// wxOutputStream & wxOutputStream::Write(const void * buffer, size_t size)
	wxOutputStream & Write(const void * buffer, size_t size) {
		if(_obj.pushFunction("Write")) {
			_obj.pushArg((wxOutputStream*)this);
			_obj.pushArg(buffer);
			_obj.pushArg(size);
			return *(_obj.callFunction<wxOutputStream*>());
		}

		return wxOutputStream::Write(buffer, size);
	};


	// Protected non-virtual methods:
	// size_t wxOutputStream::OnSysWrite(const void * buffer, size_t bufsize)
	size_t public_OnSysWrite(const void * buffer, size_t bufsize) {
		return wxOutputStream::OnSysWrite(buffer, bufsize);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_OnSysWrite(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// size_t wxOutputStream::public_OnSysWrite(const void * buffer, size_t bufsize)
	static int _bind_public_OnSysWrite(lua_State *L) {
		if (!_lg_typecheck_public_OnSysWrite(L)) {
			luaL_error(L, "luna typecheck failed in size_t wxOutputStream::public_OnSysWrite(const void * buffer, size_t bufsize) function, expected prototype:\nsize_t wxOutputStream::public_OnSysWrite(const void * buffer, size_t bufsize)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const void* buffer=(Luna< void >::check(L,2));
		size_t bufsize=(size_t)lua_tointeger(L,3);

		wrapper_wxOutputStream* self=Luna< wxObject >::checkSubType< wrapper_wxOutputStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call size_t wxOutputStream::public_OnSysWrite(const void *, size_t). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		size_t lret = self->public_OnSysWrite(buffer, bufsize);
		lua_pushnumber(L,lret);

		return 1;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"OnSysWrite",_bind_public_OnSysWrite},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif


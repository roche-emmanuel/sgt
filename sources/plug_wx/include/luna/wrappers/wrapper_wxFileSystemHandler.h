#ifndef _WRAPPERS_WRAPPER_WXFILESYSTEMHANDLER_H_
#define _WRAPPERS_WRAPPER_WXFILESYSTEMHANDLER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/filesys.h>

class wrapper_wxFileSystemHandler : public wxFileSystemHandler, public luna_wrapper_base {

public:
		

	~wrapper_wxFileSystemHandler() {
		logDEBUG3("Calling delete function for wrapper wxFileSystemHandler");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxFileSystemHandler*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxFileSystemHandler(lua_State* L, lua_Table* dum) 
		: wxFileSystemHandler(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxFileSystemHandler*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxFileSystemHandler*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxFileSystemHandler::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxFileSystemHandler*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxFileSystemHandler::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxFileSystemHandler*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxFileSystemHandler::GetClassInfo();
	};

	// bool wxFileSystemHandler::CanOpen(const wxString & location)
	bool CanOpen(const wxString & location) {
		THROW_IF(!_obj.pushFunction("CanOpen"),"No implementation for abstract function wxFileSystemHandler::CanOpen");
		_obj.pushArg((wxFileSystemHandler*)this);
		_obj.pushArg(location);
		return (_obj.callFunction<bool>());
	};

	// wxString wxFileSystemHandler::FindFirst(const wxString & wildcard, int flags = 0)
	wxString FindFirst(const wxString & wildcard, int flags = 0) {
		if(_obj.pushFunction("FindFirst")) {
			_obj.pushArg((wxFileSystemHandler*)this);
			_obj.pushArg(wildcard);
			_obj.pushArg(flags);
			return *(_obj.callFunction<wxString*>());
		}

		return wxFileSystemHandler::FindFirst(wildcard, flags);
	};

	// wxString wxFileSystemHandler::FindNext()
	wxString FindNext() {
		if(_obj.pushFunction("FindNext")) {
			_obj.pushArg((wxFileSystemHandler*)this);
			return *(_obj.callFunction<wxString*>());
		}

		return wxFileSystemHandler::FindNext();
	};

	// wxFSFile * wxFileSystemHandler::OpenFile(wxFileSystem & fs, const wxString & location)
	wxFSFile * OpenFile(wxFileSystem & fs, const wxString & location) {
		THROW_IF(!_obj.pushFunction("OpenFile"),"No implementation for abstract function wxFileSystemHandler::OpenFile");
		_obj.pushArg((wxFileSystemHandler*)this);
		_obj.pushArg(&fs);
		_obj.pushArg(location);
		return (_obj.callFunction<wxFSFile*>());
	};


	// Protected non-virtual methods:
	// static wxString wxFileSystemHandler::GetAnchor(const wxString & location)
	static wxString public_GetAnchor(const wxString & location) {
		return wxFileSystemHandler::GetAnchor(location);
	};

	// static wxString wxFileSystemHandler::GetLeftLocation(const wxString & location)
	static wxString public_GetLeftLocation(const wxString & location) {
		return wxFileSystemHandler::GetLeftLocation(location);
	};

	// static wxString wxFileSystemHandler::GetProtocol(const wxString & location)
	static wxString public_GetProtocol(const wxString & location) {
		return wxFileSystemHandler::GetProtocol(location);
	};

	// static wxString wxFileSystemHandler::GetRightLocation(const wxString & location)
	static wxString public_GetRightLocation(const wxString & location) {
		return wxFileSystemHandler::GetRightLocation(location);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_GetAnchor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_GetLeftLocation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_GetProtocol(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_GetRightLocation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// static wxString wxFileSystemHandler::public_GetAnchor(const wxString & location)
	static int _bind_public_GetAnchor(lua_State *L) {
		if (!_lg_typecheck_public_GetAnchor(L)) {
			luaL_error(L, "luna typecheck failed in static wxString wxFileSystemHandler::public_GetAnchor(const wxString & location) function, expected prototype:\nstatic wxString wxFileSystemHandler::public_GetAnchor(const wxString & location)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString location(lua_tostring(L,1),lua_objlen(L,1));

		wrapper_wxFileSystemHandler* self=Luna< wxObject >::checkSubType< wrapper_wxFileSystemHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call static wxString wxFileSystemHandler::public_GetAnchor(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->public_GetAnchor(location);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// static wxString wxFileSystemHandler::public_GetLeftLocation(const wxString & location)
	static int _bind_public_GetLeftLocation(lua_State *L) {
		if (!_lg_typecheck_public_GetLeftLocation(L)) {
			luaL_error(L, "luna typecheck failed in static wxString wxFileSystemHandler::public_GetLeftLocation(const wxString & location) function, expected prototype:\nstatic wxString wxFileSystemHandler::public_GetLeftLocation(const wxString & location)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString location(lua_tostring(L,1),lua_objlen(L,1));

		wrapper_wxFileSystemHandler* self=Luna< wxObject >::checkSubType< wrapper_wxFileSystemHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call static wxString wxFileSystemHandler::public_GetLeftLocation(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->public_GetLeftLocation(location);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// static wxString wxFileSystemHandler::public_GetProtocol(const wxString & location)
	static int _bind_public_GetProtocol(lua_State *L) {
		if (!_lg_typecheck_public_GetProtocol(L)) {
			luaL_error(L, "luna typecheck failed in static wxString wxFileSystemHandler::public_GetProtocol(const wxString & location) function, expected prototype:\nstatic wxString wxFileSystemHandler::public_GetProtocol(const wxString & location)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString location(lua_tostring(L,1),lua_objlen(L,1));

		wrapper_wxFileSystemHandler* self=Luna< wxObject >::checkSubType< wrapper_wxFileSystemHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call static wxString wxFileSystemHandler::public_GetProtocol(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->public_GetProtocol(location);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// static wxString wxFileSystemHandler::public_GetRightLocation(const wxString & location)
	static int _bind_public_GetRightLocation(lua_State *L) {
		if (!_lg_typecheck_public_GetRightLocation(L)) {
			luaL_error(L, "luna typecheck failed in static wxString wxFileSystemHandler::public_GetRightLocation(const wxString & location) function, expected prototype:\nstatic wxString wxFileSystemHandler::public_GetRightLocation(const wxString & location)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString location(lua_tostring(L,1),lua_objlen(L,1));

		wrapper_wxFileSystemHandler* self=Luna< wxObject >::checkSubType< wrapper_wxFileSystemHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call static wxString wxFileSystemHandler::public_GetRightLocation(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->public_GetRightLocation(location);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"GetAnchor",_bind_public_GetAnchor},
		{"GetLeftLocation",_bind_public_GetLeftLocation},
		{"GetProtocol",_bind_public_GetProtocol},
		{"GetRightLocation",_bind_public_GetRightLocation},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif


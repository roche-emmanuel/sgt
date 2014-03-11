#include <plug_common.h>

class luna_wrapper_wxDir {
public:
	typedef Luna< wxDir > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,13542631) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxDir*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxDir* rhs =(Luna< wxDir >::check(L,2));
		wxDir* self=(Luna< wxDir >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		lua_pushboolean(L,self==rhs?1:0);

		return 1;
	}

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxDir* self= (wxDir*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxDir >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,13542631) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxDir >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		wxDir* self=(Luna< wxDir >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxDir");
		
		return luna_dynamicCast(L,converters,"wxDir",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetFirst(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetNext(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_HasFiles(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_HasSubDirs(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsOpened(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Open(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Traverse(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,40425950) ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Exists(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FindFirst(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetAllFiles(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,59507769)) ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetTotalSize(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,59507769)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Make(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Remove(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxDir::wxDir()
	static wxDir* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxDir::wxDir() function, expected prototype:\nwxDir::wxDir()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxDir();
	}

	// wxDir::wxDir(const wxString & dir)
	static wxDir* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxDir::wxDir(const wxString & dir) function, expected prototype:\nwxDir::wxDir(const wxString & dir)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString dir(lua_tostring(L,1),lua_objlen(L,1));

		return new wxDir(dir);
	}

	// Overload binder for wxDir::wxDir
	static wxDir* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxDir, cannot match any of the overloads for function wxDir:\n  wxDir()\n  wxDir(const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// bool wxDir::GetFirst(wxString * filename, const wxString & filespec = wxEmptyString, int flags = ::wxDIR_DEFAULT) const
	static int _bind_GetFirst(lua_State *L) {
		if (!_lg_typecheck_GetFirst(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDir::GetFirst(wxString * filename, const wxString & filespec = wxEmptyString, int flags = ::wxDIR_DEFAULT) const function, expected prototype:\nbool wxDir::GetFirst(wxString * filename, const wxString & filespec = wxEmptyString, int flags = ::wxDIR_DEFAULT) const\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString filename(lua_tostring(L,2),lua_objlen(L,2));
		wxString filespec(lua_tostring(L,3),lua_objlen(L,3));
		int flags=luatop>3 ? (int)lua_tointeger(L,4) : (int)::wxDIR_DEFAULT;

		wxDir* self=(Luna< wxDir >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDir::GetFirst(wxString *, const wxString &, int) const. Got : '%s'\n%s",typeid(Luna< wxDir >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GetFirst(&filename, filespec, flags);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxDir::GetName() const
	static int _bind_GetName(lua_State *L) {
		if (!_lg_typecheck_GetName(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxDir::GetName() const function, expected prototype:\nwxString wxDir::GetName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDir* self=(Luna< wxDir >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxDir::GetName() const. Got : '%s'\n%s",typeid(Luna< wxDir >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool wxDir::GetNext(wxString * filename) const
	static int _bind_GetNext(lua_State *L) {
		if (!_lg_typecheck_GetNext(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDir::GetNext(wxString * filename) const function, expected prototype:\nbool wxDir::GetNext(wxString * filename) const\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString filename(lua_tostring(L,2),lua_objlen(L,2));

		wxDir* self=(Luna< wxDir >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDir::GetNext(wxString *) const. Got : '%s'\n%s",typeid(Luna< wxDir >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GetNext(&filename);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDir::HasFiles(const wxString & filespec = wxEmptyString) const
	static int _bind_HasFiles(lua_State *L) {
		if (!_lg_typecheck_HasFiles(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDir::HasFiles(const wxString & filespec = wxEmptyString) const function, expected prototype:\nbool wxDir::HasFiles(const wxString & filespec = wxEmptyString) const\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString filespec(lua_tostring(L,2),lua_objlen(L,2));

		wxDir* self=(Luna< wxDir >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDir::HasFiles(const wxString &) const. Got : '%s'\n%s",typeid(Luna< wxDir >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasFiles(filespec);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDir::HasSubDirs(const wxString & dirspec = wxEmptyString) const
	static int _bind_HasSubDirs(lua_State *L) {
		if (!_lg_typecheck_HasSubDirs(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDir::HasSubDirs(const wxString & dirspec = wxEmptyString) const function, expected prototype:\nbool wxDir::HasSubDirs(const wxString & dirspec = wxEmptyString) const\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString dirspec(lua_tostring(L,2),lua_objlen(L,2));

		wxDir* self=(Luna< wxDir >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDir::HasSubDirs(const wxString &) const. Got : '%s'\n%s",typeid(Luna< wxDir >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasSubDirs(dirspec);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDir::IsOpened() const
	static int _bind_IsOpened(lua_State *L) {
		if (!_lg_typecheck_IsOpened(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDir::IsOpened() const function, expected prototype:\nbool wxDir::IsOpened() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDir* self=(Luna< wxDir >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDir::IsOpened() const. Got : '%s'\n%s",typeid(Luna< wxDir >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsOpened();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDir::Open(const wxString & dir)
	static int _bind_Open(lua_State *L) {
		if (!_lg_typecheck_Open(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDir::Open(const wxString & dir) function, expected prototype:\nbool wxDir::Open(const wxString & dir)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString dir(lua_tostring(L,2),lua_objlen(L,2));

		wxDir* self=(Luna< wxDir >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDir::Open(const wxString &). Got : '%s'\n%s",typeid(Luna< wxDir >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Open(dir);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// size_t wxDir::Traverse(wxDirTraverser & sink, const wxString & filespec = wxEmptyString, int flags = ::wxDIR_DEFAULT) const
	static int _bind_Traverse(lua_State *L) {
		if (!_lg_typecheck_Traverse(L)) {
			luaL_error(L, "luna typecheck failed in size_t wxDir::Traverse(wxDirTraverser & sink, const wxString & filespec = wxEmptyString, int flags = ::wxDIR_DEFAULT) const function, expected prototype:\nsize_t wxDir::Traverse(wxDirTraverser & sink, const wxString & filespec = wxEmptyString, int flags = ::wxDIR_DEFAULT) const\nClass arguments details:\narg 1 ID = 40425950\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxDirTraverser* sink_ptr=(Luna< wxDirTraverser >::check(L,2));
		if( !sink_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sink in wxDir::Traverse function");
		}
		wxDirTraverser & sink=*sink_ptr;
		wxString filespec(lua_tostring(L,3),lua_objlen(L,3));
		int flags=luatop>3 ? (int)lua_tointeger(L,4) : (int)::wxDIR_DEFAULT;

		wxDir* self=(Luna< wxDir >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call size_t wxDir::Traverse(wxDirTraverser &, const wxString &, int) const. Got : '%s'\n%s",typeid(Luna< wxDir >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		size_t lret = self->Traverse(sink, filespec, flags);
		lua_pushnumber(L,lret);

		return 1;
	}

	// static bool wxDir::Exists(const wxString & dir)
	static int _bind_Exists(lua_State *L) {
		if (!_lg_typecheck_Exists(L)) {
			luaL_error(L, "luna typecheck failed in static bool wxDir::Exists(const wxString & dir) function, expected prototype:\nstatic bool wxDir::Exists(const wxString & dir)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString dir(lua_tostring(L,1),lua_objlen(L,1));

		bool lret = wxDir::Exists(dir);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static wxString wxDir::FindFirst(const wxString & dirname, const wxString & filespec, int flags = ::wxDIR_DEFAULT)
	static int _bind_FindFirst(lua_State *L) {
		if (!_lg_typecheck_FindFirst(L)) {
			luaL_error(L, "luna typecheck failed in static wxString wxDir::FindFirst(const wxString & dirname, const wxString & filespec, int flags = ::wxDIR_DEFAULT) function, expected prototype:\nstatic wxString wxDir::FindFirst(const wxString & dirname, const wxString & filespec, int flags = ::wxDIR_DEFAULT)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString dirname(lua_tostring(L,1),lua_objlen(L,1));
		wxString filespec(lua_tostring(L,2),lua_objlen(L,2));
		int flags=luatop>2 ? (int)lua_tointeger(L,3) : (int)::wxDIR_DEFAULT;

		wxString lret = wxDir::FindFirst(dirname, filespec, flags);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// static size_t wxDir::GetAllFiles(const wxString & dirname, wxArrayString * files, const wxString & filespec = wxEmptyString, int flags = ::wxDIR_DEFAULT)
	static int _bind_GetAllFiles(lua_State *L) {
		if (!_lg_typecheck_GetAllFiles(L)) {
			luaL_error(L, "luna typecheck failed in static size_t wxDir::GetAllFiles(const wxString & dirname, wxArrayString * files, const wxString & filespec = wxEmptyString, int flags = ::wxDIR_DEFAULT) function, expected prototype:\nstatic size_t wxDir::GetAllFiles(const wxString & dirname, wxArrayString * files, const wxString & filespec = wxEmptyString, int flags = ::wxDIR_DEFAULT)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 59507769\narg 3 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString dirname(lua_tostring(L,1),lua_objlen(L,1));
		wxArrayString* files=(Luna< wxArrayString >::check(L,2));
		wxString filespec(lua_tostring(L,3),lua_objlen(L,3));
		int flags=luatop>3 ? (int)lua_tointeger(L,4) : (int)::wxDIR_DEFAULT;

		size_t lret = wxDir::GetAllFiles(dirname, files, filespec, flags);
		lua_pushnumber(L,lret);

		return 1;
	}

	// static wxULongLong wxDir::GetTotalSize(const wxString & dir, wxArrayString * filesSkipped = NULL)
	static int _bind_GetTotalSize(lua_State *L) {
		if (!_lg_typecheck_GetTotalSize(L)) {
			luaL_error(L, "luna typecheck failed in static wxULongLong wxDir::GetTotalSize(const wxString & dir, wxArrayString * filesSkipped = NULL) function, expected prototype:\nstatic wxULongLong wxDir::GetTotalSize(const wxString & dir, wxArrayString * filesSkipped = NULL)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 59507769\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString dir(lua_tostring(L,1),lua_objlen(L,1));
		wxArrayString* filesSkipped=luatop>1 ? (Luna< wxArrayString >::check(L,2)) : (wxArrayString*)NULL;

		wxULongLong stack_lret = wxDir::GetTotalSize(dir, filesSkipped);
		wxULongLong* lret = new wxULongLong(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxULongLong >::push(L,lret,true);

		return 1;
	}

	// static bool wxDir::Make(const wxString & dir, int perm = ::wxS_DIR_DEFAULT, int flags = 0)
	static int _bind_Make(lua_State *L) {
		if (!_lg_typecheck_Make(L)) {
			luaL_error(L, "luna typecheck failed in static bool wxDir::Make(const wxString & dir, int perm = ::wxS_DIR_DEFAULT, int flags = 0) function, expected prototype:\nstatic bool wxDir::Make(const wxString & dir, int perm = ::wxS_DIR_DEFAULT, int flags = 0)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString dir(lua_tostring(L,1),lua_objlen(L,1));
		int perm=luatop>1 ? (int)lua_tointeger(L,2) : (int)::wxS_DIR_DEFAULT;
		int flags=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;

		bool lret = wxDir::Make(dir, perm, flags);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static bool wxDir::Remove(const wxString & dir, int flags = 0)
	static int _bind_Remove(lua_State *L) {
		if (!_lg_typecheck_Remove(L)) {
			luaL_error(L, "luna typecheck failed in static bool wxDir::Remove(const wxString & dir, int flags = 0) function, expected prototype:\nstatic bool wxDir::Remove(const wxString & dir, int flags = 0)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString dir(lua_tostring(L,1),lua_objlen(L,1));
		int flags=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;

		bool lret = wxDir::Remove(dir, flags);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxDir* LunaTraits< wxDir >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxDir::_bind_ctor(L);
}

void LunaTraits< wxDir >::_bind_dtor(wxDir* obj) {
	delete obj;
}

const char LunaTraits< wxDir >::className[] = "wxDir";
const char LunaTraits< wxDir >::fullName[] = "wxDir";
const char LunaTraits< wxDir >::moduleName[] = "wx";
const char* LunaTraits< wxDir >::parents[] = {0};
const int LunaTraits< wxDir >::hash = 13542631;
const int LunaTraits< wxDir >::uniqueIDs[] = {13542631,0};

luna_RegType LunaTraits< wxDir >::methods[] = {
	{"GetFirst", &luna_wrapper_wxDir::_bind_GetFirst},
	{"GetName", &luna_wrapper_wxDir::_bind_GetName},
	{"GetNext", &luna_wrapper_wxDir::_bind_GetNext},
	{"HasFiles", &luna_wrapper_wxDir::_bind_HasFiles},
	{"HasSubDirs", &luna_wrapper_wxDir::_bind_HasSubDirs},
	{"IsOpened", &luna_wrapper_wxDir::_bind_IsOpened},
	{"Open", &luna_wrapper_wxDir::_bind_Open},
	{"Traverse", &luna_wrapper_wxDir::_bind_Traverse},
	{"Exists", &luna_wrapper_wxDir::_bind_Exists},
	{"FindFirst", &luna_wrapper_wxDir::_bind_FindFirst},
	{"GetAllFiles", &luna_wrapper_wxDir::_bind_GetAllFiles},
	{"GetTotalSize", &luna_wrapper_wxDir::_bind_GetTotalSize},
	{"Make", &luna_wrapper_wxDir::_bind_Make},
	{"Remove", &luna_wrapper_wxDir::_bind_Remove},
	{"dynCast", &luna_wrapper_wxDir::_bind_dynCast},
	{"__eq", &luna_wrapper_wxDir::_bind___eq},
	{"fromVoid", &luna_wrapper_wxDir::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxDir::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< wxDir >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxDir >::enumValues[] = {
	{0,0}
};



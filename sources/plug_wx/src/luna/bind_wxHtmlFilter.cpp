#include <plug_common.h>

#include <luna/wrappers/wrapper_wxHtmlFilter.h>

class luna_wrapper_wxHtmlFilter {
public:
	typedef Luna< wxHtmlFilter > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxObject* self=(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<wxObject,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
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

		wxHtmlFilter* self= (wxHtmlFilter*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxHtmlFilter >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		//wxHtmlFilter* ptr= dynamic_cast< wxHtmlFilter* >(Luna< wxObject >::check(L,1));
		wxHtmlFilter* ptr= luna_caster< wxObject, wxHtmlFilter >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxHtmlFilter >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_CanRead(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ReadFile(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxHtmlFilter::wxHtmlFilter(lua_Table * data)
	static wxHtmlFilter* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxHtmlFilter::wxHtmlFilter(lua_Table * data) function, expected prototype:\nwxHtmlFilter::wxHtmlFilter(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxHtmlFilter(L,NULL);
	}


	// Function binds:
	// bool wxHtmlFilter::CanRead(const wxFSFile & file) const
	static int _bind_CanRead(lua_State *L) {
		if (!_lg_typecheck_CanRead(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHtmlFilter::CanRead(const wxFSFile & file) const function, expected prototype:\nbool wxHtmlFilter::CanRead(const wxFSFile & file) const\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxFSFile* file_ptr=(Luna< wxObject >::checkSubType< wxFSFile >(L,2));
		if( !file_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg file in wxHtmlFilter::CanRead function");
		}
		const wxFSFile & file=*file_ptr;

		wxHtmlFilter* self=Luna< wxObject >::checkSubType< wxHtmlFilter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHtmlFilter::CanRead(const wxFSFile &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->CanRead(file);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxHtmlFilter::ReadFile(const wxFSFile & file) const
	static int _bind_ReadFile(lua_State *L) {
		if (!_lg_typecheck_ReadFile(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxHtmlFilter::ReadFile(const wxFSFile & file) const function, expected prototype:\nwxString wxHtmlFilter::ReadFile(const wxFSFile & file) const\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxFSFile* file_ptr=(Luna< wxObject >::checkSubType< wxFSFile >(L,2));
		if( !file_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg file in wxHtmlFilter::ReadFile function");
		}
		const wxFSFile & file=*file_ptr;

		wxHtmlFilter* self=Luna< wxObject >::checkSubType< wxHtmlFilter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxHtmlFilter::ReadFile(const wxFSFile &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->ReadFile(file);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxClassInfo * wxHtmlFilter::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxHtmlFilter::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxHtmlFilter::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlFilter* self=Luna< wxObject >::checkSubType< wxHtmlFilter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxHtmlFilter::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxHtmlFilter::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxHtmlFilter* LunaTraits< wxHtmlFilter >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxHtmlFilter::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// bool wxHtmlFilter::CanRead(const wxFSFile & file) const
	// wxString wxHtmlFilter::ReadFile(const wxFSFile & file) const
}

void LunaTraits< wxHtmlFilter >::_bind_dtor(wxHtmlFilter* obj) {
	delete obj;
}

const char LunaTraits< wxHtmlFilter >::className[] = "wxHtmlFilter";
const char LunaTraits< wxHtmlFilter >::fullName[] = "wxHtmlFilter";
const char LunaTraits< wxHtmlFilter >::moduleName[] = "wx";
const char* LunaTraits< wxHtmlFilter >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxHtmlFilter >::hash = 86837590;
const int LunaTraits< wxHtmlFilter >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxHtmlFilter >::methods[] = {
	{"CanRead", &luna_wrapper_wxHtmlFilter::_bind_CanRead},
	{"ReadFile", &luna_wrapper_wxHtmlFilter::_bind_ReadFile},
	{"base_GetClassInfo", &luna_wrapper_wxHtmlFilter::_bind_base_GetClassInfo},
	{"fromVoid", &luna_wrapper_wxHtmlFilter::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxHtmlFilter::_bind_asVoid},
	{"getTable", &luna_wrapper_wxHtmlFilter::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxHtmlFilter >::converters[] = {
	{"wxObject", &luna_wrapper_wxHtmlFilter::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxHtmlFilter >::enumValues[] = {
	{0,0}
};



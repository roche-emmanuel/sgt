#include <plug_common.h>

#include <luna/wrappers/wrapper_wxFileDropTarget.h>

class luna_wrapper_wxFileDropTarget {
public:
	typedef Luna< wxFileDropTarget > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxDropTarget* self=(Luna< wxDropTarget >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<wxDropTarget,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
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

		wxFileDropTarget* self= (wxFileDropTarget*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxFileDropTarget >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,93694316) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxDropTarget >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_wxDropTarget(lua_State *L) {
		// all checked are already performed before reaching this point.
		//wxFileDropTarget* ptr= dynamic_cast< wxFileDropTarget* >(Luna< wxDropTarget >::check(L,1));
		wxFileDropTarget* ptr= luna_caster< wxDropTarget, wxFileDropTarget >::cast(Luna< wxDropTarget >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxFileDropTarget >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_OnDrop(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnDropFiles(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,59507769) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_OnDragOver(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_OnEnter(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_OnLeave(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_OnDrop(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxFileDropTarget::wxFileDropTarget(lua_Table * data)
	static wxFileDropTarget* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxFileDropTarget::wxFileDropTarget(lua_Table * data) function, expected prototype:\nwxFileDropTarget::wxFileDropTarget(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxFileDropTarget(L,NULL);
	}


	// Function binds:
	// bool wxFileDropTarget::OnDrop(int x, int y)
	static int _bind_OnDrop(lua_State *L) {
		if (!_lg_typecheck_OnDrop(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFileDropTarget::OnDrop(int x, int y) function, expected prototype:\nbool wxFileDropTarget::OnDrop(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxFileDropTarget* self=Luna< wxDropTarget >::checkSubType< wxFileDropTarget >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFileDropTarget::OnDrop(int, int). Got : '%s'\n%s",typeid(Luna< wxDropTarget >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->OnDrop(x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFileDropTarget::OnDropFiles(int x, int y, const wxArrayString & filenames)
	static int _bind_OnDropFiles(lua_State *L) {
		if (!_lg_typecheck_OnDropFiles(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFileDropTarget::OnDropFiles(int x, int y, const wxArrayString & filenames) function, expected prototype:\nbool wxFileDropTarget::OnDropFiles(int x, int y, const wxArrayString & filenames)\nClass arguments details:\narg 3 ID = 59507769\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		const wxArrayString* filenames_ptr=(Luna< wxArrayString >::check(L,4));
		if( !filenames_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg filenames in wxFileDropTarget::OnDropFiles function");
		}
		const wxArrayString & filenames=*filenames_ptr;

		wxFileDropTarget* self=Luna< wxDropTarget >::checkSubType< wxFileDropTarget >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFileDropTarget::OnDropFiles(int, int, const wxArrayString &). Got : '%s'\n%s",typeid(Luna< wxDropTarget >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->OnDropFiles(x, y, filenames);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxDragResult wxFileDropTarget::base_OnDragOver(int x, int y, wxDragResult def)
	static int _bind_base_OnDragOver(lua_State *L) {
		if (!_lg_typecheck_base_OnDragOver(L)) {
			luaL_error(L, "luna typecheck failed in wxDragResult wxFileDropTarget::base_OnDragOver(int x, int y, wxDragResult def) function, expected prototype:\nwxDragResult wxFileDropTarget::base_OnDragOver(int x, int y, wxDragResult def)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		wxDragResult def=(wxDragResult)lua_tointeger(L,4);

		wxFileDropTarget* self=Luna< wxDropTarget >::checkSubType< wxFileDropTarget >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDragResult wxFileDropTarget::base_OnDragOver(int, int, wxDragResult). Got : '%s'\n%s",typeid(Luna< wxDropTarget >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDragResult lret = self->wxFileDropTarget::OnDragOver(x, y, def);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxDragResult wxFileDropTarget::base_OnEnter(int x, int y, wxDragResult def)
	static int _bind_base_OnEnter(lua_State *L) {
		if (!_lg_typecheck_base_OnEnter(L)) {
			luaL_error(L, "luna typecheck failed in wxDragResult wxFileDropTarget::base_OnEnter(int x, int y, wxDragResult def) function, expected prototype:\nwxDragResult wxFileDropTarget::base_OnEnter(int x, int y, wxDragResult def)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		wxDragResult def=(wxDragResult)lua_tointeger(L,4);

		wxFileDropTarget* self=Luna< wxDropTarget >::checkSubType< wxFileDropTarget >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDragResult wxFileDropTarget::base_OnEnter(int, int, wxDragResult). Got : '%s'\n%s",typeid(Luna< wxDropTarget >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDragResult lret = self->wxFileDropTarget::OnEnter(x, y, def);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxFileDropTarget::base_OnLeave()
	static int _bind_base_OnLeave(lua_State *L) {
		if (!_lg_typecheck_base_OnLeave(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileDropTarget::base_OnLeave() function, expected prototype:\nvoid wxFileDropTarget::base_OnLeave()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileDropTarget* self=Luna< wxDropTarget >::checkSubType< wxFileDropTarget >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileDropTarget::base_OnLeave(). Got : '%s'\n%s",typeid(Luna< wxDropTarget >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxFileDropTarget::OnLeave();

		return 0;
	}

	// bool wxFileDropTarget::base_OnDrop(int x, int y)
	static int _bind_base_OnDrop(lua_State *L) {
		if (!_lg_typecheck_base_OnDrop(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFileDropTarget::base_OnDrop(int x, int y) function, expected prototype:\nbool wxFileDropTarget::base_OnDrop(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxFileDropTarget* self=Luna< wxDropTarget >::checkSubType< wxFileDropTarget >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFileDropTarget::base_OnDrop(int, int). Got : '%s'\n%s",typeid(Luna< wxDropTarget >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxFileDropTarget::OnDrop(x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxFileDropTarget* LunaTraits< wxFileDropTarget >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxFileDropTarget::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// bool wxFileDropTarget::OnDropFiles(int x, int y, const wxArrayString & filenames)
	// bool wxDropTarget::GetData()
	// wxDragResult wxDropTarget::OnData(int x, int y, wxDragResult def)
}

void LunaTraits< wxFileDropTarget >::_bind_dtor(wxFileDropTarget* obj) {
	delete obj;
}

const char LunaTraits< wxFileDropTarget >::className[] = "wxFileDropTarget";
const char LunaTraits< wxFileDropTarget >::fullName[] = "wxFileDropTarget";
const char LunaTraits< wxFileDropTarget >::moduleName[] = "wx";
const char* LunaTraits< wxFileDropTarget >::parents[] = {"wx.wxDropTarget", 0};
const int LunaTraits< wxFileDropTarget >::hash = 20399763;
const int LunaTraits< wxFileDropTarget >::uniqueIDs[] = {93694316,0};

luna_RegType LunaTraits< wxFileDropTarget >::methods[] = {
	{"OnDrop", &luna_wrapper_wxFileDropTarget::_bind_OnDrop},
	{"OnDropFiles", &luna_wrapper_wxFileDropTarget::_bind_OnDropFiles},
	{"base_OnDragOver", &luna_wrapper_wxFileDropTarget::_bind_base_OnDragOver},
	{"base_OnEnter", &luna_wrapper_wxFileDropTarget::_bind_base_OnEnter},
	{"base_OnLeave", &luna_wrapper_wxFileDropTarget::_bind_base_OnLeave},
	{"base_OnDrop", &luna_wrapper_wxFileDropTarget::_bind_base_OnDrop},
	{"fromVoid", &luna_wrapper_wxFileDropTarget::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxFileDropTarget::_bind_asVoid},
	{"getTable", &luna_wrapper_wxFileDropTarget::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxFileDropTarget >::converters[] = {
	{"wxDropTarget", &luna_wrapper_wxFileDropTarget::_cast_from_wxDropTarget},
	{0,0}
};

luna_RegEnumType LunaTraits< wxFileDropTarget >::enumValues[] = {
	{0,0}
};



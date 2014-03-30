#include <plug_common.h>

#include <luna/wrappers/wrapper_wxDropTarget.h>

class luna_wrapper_wxDropTarget {
public:
	typedef Luna< wxDropTarget > luna_t;

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

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,93694316) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxDropTarget*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxDropTarget* rhs =(Luna< wxDropTarget >::check(L,2));
		wxDropTarget* self=(Luna< wxDropTarget >::check(L,1));
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

		wxDropTarget* self= (wxDropTarget*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxDropTarget >::push(L,self,false);
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

		wxDropTarget* self=(Luna< wxDropTarget >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxDropTarget");
		
		return luna_dynamicCast(L,converters,"wxDropTarget",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,55398761)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_OnData(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnDragOver(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnDrop(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnEnter(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnLeave(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetDataObject(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,55398761)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_OnDragOver(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_OnDrop(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxDropTarget::wxDropTarget(lua_Table * data, wxDataObject * data = NULL)
	static wxDropTarget* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxDropTarget::wxDropTarget(lua_Table * data, wxDataObject * data = NULL) function, expected prototype:\nwxDropTarget::wxDropTarget(lua_Table * data, wxDataObject * data = NULL)\nClass arguments details:\narg 2 ID = 55398761\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxDataObject* data=luatop>1 ? (Luna< wxDataObject >::check(L,2)) : (wxDataObject*)NULL;

		return new wrapper_wxDropTarget(L,NULL, data);
	}


	// Function binds:
	// bool wxDropTarget::GetData()
	static int _bind_GetData(lua_State *L) {
		if (!_lg_typecheck_GetData(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDropTarget::GetData() function, expected prototype:\nbool wxDropTarget::GetData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDropTarget* self=(Luna< wxDropTarget >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDropTarget::GetData(). Got : '%s'\n%s",typeid(Luna< wxDropTarget >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GetData();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxDragResult wxDropTarget::OnData(int x, int y, wxDragResult def)
	static int _bind_OnData(lua_State *L) {
		if (!_lg_typecheck_OnData(L)) {
			luaL_error(L, "luna typecheck failed in wxDragResult wxDropTarget::OnData(int x, int y, wxDragResult def) function, expected prototype:\nwxDragResult wxDropTarget::OnData(int x, int y, wxDragResult def)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		wxDragResult def=(wxDragResult)lua_tointeger(L,4);

		wxDropTarget* self=(Luna< wxDropTarget >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDragResult wxDropTarget::OnData(int, int, wxDragResult). Got : '%s'\n%s",typeid(Luna< wxDropTarget >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDragResult lret = self->OnData(x, y, def);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxDragResult wxDropTarget::OnDragOver(int x, int y, wxDragResult def)
	static int _bind_OnDragOver(lua_State *L) {
		if (!_lg_typecheck_OnDragOver(L)) {
			luaL_error(L, "luna typecheck failed in wxDragResult wxDropTarget::OnDragOver(int x, int y, wxDragResult def) function, expected prototype:\nwxDragResult wxDropTarget::OnDragOver(int x, int y, wxDragResult def)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		wxDragResult def=(wxDragResult)lua_tointeger(L,4);

		wxDropTarget* self=(Luna< wxDropTarget >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDragResult wxDropTarget::OnDragOver(int, int, wxDragResult). Got : '%s'\n%s",typeid(Luna< wxDropTarget >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDragResult lret = self->OnDragOver(x, y, def);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxDropTarget::OnDrop(int x, int y)
	static int _bind_OnDrop(lua_State *L) {
		if (!_lg_typecheck_OnDrop(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDropTarget::OnDrop(int x, int y) function, expected prototype:\nbool wxDropTarget::OnDrop(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxDropTarget* self=(Luna< wxDropTarget >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDropTarget::OnDrop(int, int). Got : '%s'\n%s",typeid(Luna< wxDropTarget >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->OnDrop(x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxDragResult wxDropTarget::OnEnter(int x, int y, wxDragResult def)
	static int _bind_OnEnter(lua_State *L) {
		if (!_lg_typecheck_OnEnter(L)) {
			luaL_error(L, "luna typecheck failed in wxDragResult wxDropTarget::OnEnter(int x, int y, wxDragResult def) function, expected prototype:\nwxDragResult wxDropTarget::OnEnter(int x, int y, wxDragResult def)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		wxDragResult def=(wxDragResult)lua_tointeger(L,4);

		wxDropTarget* self=(Luna< wxDropTarget >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDragResult wxDropTarget::OnEnter(int, int, wxDragResult). Got : '%s'\n%s",typeid(Luna< wxDropTarget >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDragResult lret = self->OnEnter(x, y, def);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxDropTarget::OnLeave()
	static int _bind_OnLeave(lua_State *L) {
		if (!_lg_typecheck_OnLeave(L)) {
			luaL_error(L, "luna typecheck failed in void wxDropTarget::OnLeave() function, expected prototype:\nvoid wxDropTarget::OnLeave()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDropTarget* self=(Luna< wxDropTarget >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDropTarget::OnLeave(). Got : '%s'\n%s",typeid(Luna< wxDropTarget >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OnLeave();

		return 0;
	}

	// void wxDropTarget::SetDataObject(wxDataObject * data)
	static int _bind_SetDataObject(lua_State *L) {
		if (!_lg_typecheck_SetDataObject(L)) {
			luaL_error(L, "luna typecheck failed in void wxDropTarget::SetDataObject(wxDataObject * data) function, expected prototype:\nvoid wxDropTarget::SetDataObject(wxDataObject * data)\nClass arguments details:\narg 1 ID = 55398761\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDataObject* data=(Luna< wxDataObject >::check(L,2));

		wxDropTarget* self=(Luna< wxDropTarget >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDropTarget::SetDataObject(wxDataObject *). Got : '%s'\n%s",typeid(Luna< wxDropTarget >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetDataObject(data);

		return 0;
	}

	// wxDragResult wxDropTarget::base_OnDragOver(int x, int y, wxDragResult def)
	static int _bind_base_OnDragOver(lua_State *L) {
		if (!_lg_typecheck_base_OnDragOver(L)) {
			luaL_error(L, "luna typecheck failed in wxDragResult wxDropTarget::base_OnDragOver(int x, int y, wxDragResult def) function, expected prototype:\nwxDragResult wxDropTarget::base_OnDragOver(int x, int y, wxDragResult def)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		wxDragResult def=(wxDragResult)lua_tointeger(L,4);

		wxDropTarget* self=(Luna< wxDropTarget >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDragResult wxDropTarget::base_OnDragOver(int, int, wxDragResult). Got : '%s'\n%s",typeid(Luna< wxDropTarget >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDragResult lret = self->wxDropTarget::OnDragOver(x, y, def);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxDropTarget::base_OnDrop(int x, int y)
	static int _bind_base_OnDrop(lua_State *L) {
		if (!_lg_typecheck_base_OnDrop(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDropTarget::base_OnDrop(int x, int y) function, expected prototype:\nbool wxDropTarget::base_OnDrop(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxDropTarget* self=(Luna< wxDropTarget >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDropTarget::base_OnDrop(int, int). Got : '%s'\n%s",typeid(Luna< wxDropTarget >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDropTarget::OnDrop(x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxDragResult wxDropTarget::base_OnEnter(int x, int y, wxDragResult def)
	static int _bind_base_OnEnter(lua_State *L) {
		if (!_lg_typecheck_base_OnEnter(L)) {
			luaL_error(L, "luna typecheck failed in wxDragResult wxDropTarget::base_OnEnter(int x, int y, wxDragResult def) function, expected prototype:\nwxDragResult wxDropTarget::base_OnEnter(int x, int y, wxDragResult def)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		wxDragResult def=(wxDragResult)lua_tointeger(L,4);

		wxDropTarget* self=(Luna< wxDropTarget >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDragResult wxDropTarget::base_OnEnter(int, int, wxDragResult). Got : '%s'\n%s",typeid(Luna< wxDropTarget >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDragResult lret = self->wxDropTarget::OnEnter(x, y, def);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxDropTarget::base_OnLeave()
	static int _bind_base_OnLeave(lua_State *L) {
		if (!_lg_typecheck_base_OnLeave(L)) {
			luaL_error(L, "luna typecheck failed in void wxDropTarget::base_OnLeave() function, expected prototype:\nvoid wxDropTarget::base_OnLeave()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDropTarget* self=(Luna< wxDropTarget >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDropTarget::base_OnLeave(). Got : '%s'\n%s",typeid(Luna< wxDropTarget >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDropTarget::OnLeave();

		return 0;
	}


	// Operator binds:

};

wxDropTarget* LunaTraits< wxDropTarget >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxDropTarget::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// bool wxDropTarget::GetData()
	// wxDragResult wxDropTarget::OnData(int x, int y, wxDragResult def)
}

void LunaTraits< wxDropTarget >::_bind_dtor(wxDropTarget* obj) {
	delete obj;
}

const char LunaTraits< wxDropTarget >::className[] = "wxDropTarget";
const char LunaTraits< wxDropTarget >::fullName[] = "wxDropTarget";
const char LunaTraits< wxDropTarget >::moduleName[] = "wx";
const char* LunaTraits< wxDropTarget >::parents[] = {0};
const int LunaTraits< wxDropTarget >::hash = 93694316;
const int LunaTraits< wxDropTarget >::uniqueIDs[] = {93694316,0};

luna_RegType LunaTraits< wxDropTarget >::methods[] = {
	{"GetData", &luna_wrapper_wxDropTarget::_bind_GetData},
	{"OnData", &luna_wrapper_wxDropTarget::_bind_OnData},
	{"OnDragOver", &luna_wrapper_wxDropTarget::_bind_OnDragOver},
	{"OnDrop", &luna_wrapper_wxDropTarget::_bind_OnDrop},
	{"OnEnter", &luna_wrapper_wxDropTarget::_bind_OnEnter},
	{"OnLeave", &luna_wrapper_wxDropTarget::_bind_OnLeave},
	{"SetDataObject", &luna_wrapper_wxDropTarget::_bind_SetDataObject},
	{"base_OnDragOver", &luna_wrapper_wxDropTarget::_bind_base_OnDragOver},
	{"base_OnDrop", &luna_wrapper_wxDropTarget::_bind_base_OnDrop},
	{"base_OnEnter", &luna_wrapper_wxDropTarget::_bind_base_OnEnter},
	{"base_OnLeave", &luna_wrapper_wxDropTarget::_bind_base_OnLeave},
	{"dynCast", &luna_wrapper_wxDropTarget::_bind_dynCast},
	{"__eq", &luna_wrapper_wxDropTarget::_bind___eq},
	{"fromVoid", &luna_wrapper_wxDropTarget::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxDropTarget::_bind_asVoid},
	{"getTable", &luna_wrapper_wxDropTarget::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxDropTarget >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxDropTarget >::enumValues[] = {
	{0,0}
};



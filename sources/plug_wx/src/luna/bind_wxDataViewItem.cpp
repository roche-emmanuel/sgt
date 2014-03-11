#include <plug_common.h>

class luna_wrapper_wxDataViewItem {
public:
	typedef Luna< wxDataViewItem > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,11709329) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxDataViewItem*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxDataViewItem* rhs =(Luna< wxDataViewItem >::check(L,2));
		wxDataViewItem* self=(Luna< wxDataViewItem >::check(L,1));
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

		wxDataViewItem* self= (wxDataViewItem*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxDataViewItem >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,11709329) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxDataViewItem >::check(L,1));
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

		wxDataViewItem* self=(Luna< wxDataViewItem >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxDataViewItem");
		
		return luna_dynamicCast(L,converters,"wxDataViewItem",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,11709329) ) return false;
		if( (!(Luna< wxDataViewItem >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,3625364)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetID(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsOk(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxDataViewItem::wxDataViewItem()
	static wxDataViewItem* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxDataViewItem::wxDataViewItem() function, expected prototype:\nwxDataViewItem::wxDataViewItem()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxDataViewItem();
	}

	// wxDataViewItem::wxDataViewItem(const wxDataViewItem & item)
	static wxDataViewItem* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxDataViewItem::wxDataViewItem(const wxDataViewItem & item) function, expected prototype:\nwxDataViewItem::wxDataViewItem(const wxDataViewItem & item)\nClass arguments details:\narg 1 ID = 11709329\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,1));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewItem::wxDataViewItem function");
		}
		const wxDataViewItem & item=*item_ptr;

		return new wxDataViewItem(item);
	}

	// wxDataViewItem::wxDataViewItem(void * id)
	static wxDataViewItem* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in wxDataViewItem::wxDataViewItem(void * id) function, expected prototype:\nwxDataViewItem::wxDataViewItem(void * id)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		void* id=(Luna< void >::check(L,1));

		return new wxDataViewItem(id);
	}

	// Overload binder for wxDataViewItem::wxDataViewItem
	static wxDataViewItem* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function wxDataViewItem, cannot match any of the overloads for function wxDataViewItem:\n  wxDataViewItem()\n  wxDataViewItem(const wxDataViewItem &)\n  wxDataViewItem(void *)\n");
		return NULL;
	}


	// Function binds:
	// void * wxDataViewItem::GetID() const
	static int _bind_GetID(lua_State *L) {
		if (!_lg_typecheck_GetID(L)) {
			luaL_error(L, "luna typecheck failed in void * wxDataViewItem::GetID() const function, expected prototype:\nvoid * wxDataViewItem::GetID() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewItem* self=(Luna< wxDataViewItem >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void * wxDataViewItem::GetID() const. Got : '%s'\n%s",typeid(Luna< wxDataViewItem >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		void * lret = self->GetID();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// bool wxDataViewItem::IsOk() const
	static int _bind_IsOk(lua_State *L) {
		if (!_lg_typecheck_IsOk(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewItem::IsOk() const function, expected prototype:\nbool wxDataViewItem::IsOk() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewItem* self=(Luna< wxDataViewItem >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewItem::IsOk() const. Got : '%s'\n%s",typeid(Luna< wxDataViewItem >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsOk();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxDataViewItem* LunaTraits< wxDataViewItem >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxDataViewItem::_bind_ctor(L);
}

void LunaTraits< wxDataViewItem >::_bind_dtor(wxDataViewItem* obj) {
	delete obj;
}

const char LunaTraits< wxDataViewItem >::className[] = "wxDataViewItem";
const char LunaTraits< wxDataViewItem >::fullName[] = "wxDataViewItem";
const char LunaTraits< wxDataViewItem >::moduleName[] = "wx";
const char* LunaTraits< wxDataViewItem >::parents[] = {0};
const int LunaTraits< wxDataViewItem >::hash = 11709329;
const int LunaTraits< wxDataViewItem >::uniqueIDs[] = {11709329,0};

luna_RegType LunaTraits< wxDataViewItem >::methods[] = {
	{"GetID", &luna_wrapper_wxDataViewItem::_bind_GetID},
	{"IsOk", &luna_wrapper_wxDataViewItem::_bind_IsOk},
	{"dynCast", &luna_wrapper_wxDataViewItem::_bind_dynCast},
	{"__eq", &luna_wrapper_wxDataViewItem::_bind___eq},
	{"fromVoid", &luna_wrapper_wxDataViewItem::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxDataViewItem::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< wxDataViewItem >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxDataViewItem >::enumValues[] = {
	{0,0}
};



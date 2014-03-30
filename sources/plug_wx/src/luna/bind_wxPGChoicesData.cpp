#include <plug_common.h>

class luna_wrapper_wxPGChoicesData {
public:
	typedef Luna< wxPGChoicesData > luna_t;

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxPGChoicesData* self= (wxPGChoicesData*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxPGChoicesData >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,60960840) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxObjectRefData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_wxObjectRefData(lua_State *L) {
		// all checked are already performed before reaching this point.
		//wxPGChoicesData* ptr= dynamic_cast< wxPGChoicesData* >(Luna< wxObjectRefData >::check(L,1));
		wxPGChoicesData* ptr= luna_caster< wxObjectRefData, wxPGChoicesData >::cast(Luna< wxObjectRefData >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxPGChoicesData >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_CopyDataFrom(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,60960840)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Insert(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Clear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Item_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Item_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxPGChoicesData::wxPGChoicesData()
	static wxPGChoicesData* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxPGChoicesData::wxPGChoicesData() function, expected prototype:\nwxPGChoicesData::wxPGChoicesData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxPGChoicesData();
	}


	// Function binds:
	// void wxPGChoicesData::CopyDataFrom(wxPGChoicesData * data)
	static int _bind_CopyDataFrom(lua_State *L) {
		if (!_lg_typecheck_CopyDataFrom(L)) {
			luaL_error(L, "luna typecheck failed in void wxPGChoicesData::CopyDataFrom(wxPGChoicesData * data) function, expected prototype:\nvoid wxPGChoicesData::CopyDataFrom(wxPGChoicesData * data)\nClass arguments details:\narg 1 ID = 60960840\n\n%s",luna_dumpStack(L).c_str());
		}

		wxPGChoicesData* data=(Luna< wxObjectRefData >::checkSubType< wxPGChoicesData >(L,2));

		wxPGChoicesData* self=Luna< wxObjectRefData >::checkSubType< wxPGChoicesData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPGChoicesData::CopyDataFrom(wxPGChoicesData *). Got : '%s'\n%s",typeid(Luna< wxObjectRefData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->CopyDataFrom(data);

		return 0;
	}

	// wxPGChoiceEntry & wxPGChoicesData::Insert(int index, const wxPGChoiceEntry & item)
	static int _bind_Insert(lua_State *L) {
		if (!_lg_typecheck_Insert(L)) {
			luaL_error(L, "luna typecheck failed in wxPGChoiceEntry & wxPGChoicesData::Insert(int index, const wxPGChoiceEntry & item) function, expected prototype:\nwxPGChoiceEntry & wxPGChoicesData::Insert(int index, const wxPGChoiceEntry & item)\nClass arguments details:\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);
		const wxPGChoiceEntry* item_ptr=(Luna< wxObject >::checkSubType< wxPGChoiceEntry >(L,3));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxPGChoicesData::Insert function");
		}
		const wxPGChoiceEntry & item=*item_ptr;

		wxPGChoicesData* self=Luna< wxObjectRefData >::checkSubType< wxPGChoicesData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPGChoiceEntry & wxPGChoicesData::Insert(int, const wxPGChoiceEntry &). Got : '%s'\n%s",typeid(Luna< wxObjectRefData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxPGChoiceEntry* lret = &self->Insert(index, item);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPGChoiceEntry >::push(L,lret,false);

		return 1;
	}

	// void wxPGChoicesData::Clear()
	static int _bind_Clear(lua_State *L) {
		if (!_lg_typecheck_Clear(L)) {
			luaL_error(L, "luna typecheck failed in void wxPGChoicesData::Clear() function, expected prototype:\nvoid wxPGChoicesData::Clear()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPGChoicesData* self=Luna< wxObjectRefData >::checkSubType< wxPGChoicesData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPGChoicesData::Clear(). Got : '%s'\n%s",typeid(Luna< wxObjectRefData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Clear();

		return 0;
	}

	// unsigned int wxPGChoicesData::GetCount() const
	static int _bind_GetCount(lua_State *L) {
		if (!_lg_typecheck_GetCount(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int wxPGChoicesData::GetCount() const function, expected prototype:\nunsigned int wxPGChoicesData::GetCount() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPGChoicesData* self=Luna< wxObjectRefData >::checkSubType< wxPGChoicesData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int wxPGChoicesData::GetCount() const. Got : '%s'\n%s",typeid(Luna< wxObjectRefData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->GetCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const wxPGChoiceEntry & wxPGChoicesData::Item(unsigned int i) const
	static int _bind_Item_overload_1(lua_State *L) {
		if (!_lg_typecheck_Item_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const wxPGChoiceEntry & wxPGChoicesData::Item(unsigned int i) const function, expected prototype:\nconst wxPGChoiceEntry & wxPGChoicesData::Item(unsigned int i) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		wxPGChoicesData* self=Luna< wxObjectRefData >::checkSubType< wxPGChoicesData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxPGChoiceEntry & wxPGChoicesData::Item(unsigned int) const. Got : '%s'\n%s",typeid(Luna< wxObjectRefData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxPGChoiceEntry* lret = &self->Item(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPGChoiceEntry >::push(L,lret,false);

		return 1;
	}

	// wxPGChoiceEntry & wxPGChoicesData::Item(unsigned int i)
	static int _bind_Item_overload_2(lua_State *L) {
		if (!_lg_typecheck_Item_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxPGChoiceEntry & wxPGChoicesData::Item(unsigned int i) function, expected prototype:\nwxPGChoiceEntry & wxPGChoicesData::Item(unsigned int i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		wxPGChoicesData* self=Luna< wxObjectRefData >::checkSubType< wxPGChoicesData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPGChoiceEntry & wxPGChoicesData::Item(unsigned int). Got : '%s'\n%s",typeid(Luna< wxObjectRefData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxPGChoiceEntry* lret = &self->Item(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPGChoiceEntry >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxPGChoicesData::Item
	static int _bind_Item(lua_State *L) {
		if (_lg_typecheck_Item_overload_1(L)) return _bind_Item_overload_1(L);
		if (_lg_typecheck_Item_overload_2(L)) return _bind_Item_overload_2(L);

		luaL_error(L, "error in function Item, cannot match any of the overloads for function Item:\n  Item(unsigned int)\n  Item(unsigned int)\n");
		return 0;
	}


	// Operator binds:

};

wxPGChoicesData* LunaTraits< wxPGChoicesData >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxPGChoicesData::_bind_ctor(L);
}

void LunaTraits< wxPGChoicesData >::_bind_dtor(wxPGChoicesData* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< wxPGChoicesData >::className[] = "wxPGChoicesData";
const char LunaTraits< wxPGChoicesData >::fullName[] = "wxPGChoicesData";
const char LunaTraits< wxPGChoicesData >::moduleName[] = "wx";
const char* LunaTraits< wxPGChoicesData >::parents[] = {"wx.wxObjectRefData", 0};
const int LunaTraits< wxPGChoicesData >::hash = 3653644;
const int LunaTraits< wxPGChoicesData >::uniqueIDs[] = {60960840,0};

luna_RegType LunaTraits< wxPGChoicesData >::methods[] = {
	{"CopyDataFrom", &luna_wrapper_wxPGChoicesData::_bind_CopyDataFrom},
	{"Insert", &luna_wrapper_wxPGChoicesData::_bind_Insert},
	{"Clear", &luna_wrapper_wxPGChoicesData::_bind_Clear},
	{"GetCount", &luna_wrapper_wxPGChoicesData::_bind_GetCount},
	{"Item", &luna_wrapper_wxPGChoicesData::_bind_Item},
	{"fromVoid", &luna_wrapper_wxPGChoicesData::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxPGChoicesData::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< wxPGChoicesData >::converters[] = {
	{"wxObjectRefData", &luna_wrapper_wxPGChoicesData::_cast_from_wxObjectRefData},
	{0,0}
};

luna_RegEnumType LunaTraits< wxPGChoicesData >::enumValues[] = {
	{0,0}
};



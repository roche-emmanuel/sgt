#include <plug_common.h>

#include <luna/wrappers/wrapper_wxDataObjectComposite.h>

class luna_wrapper_wxDataObjectComposite {
public:
	typedef Luna< wxDataObjectComposite > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxDataObject* self=(Luna< wxDataObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<wxDataObject,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
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

		wxDataObjectComposite* self= (wxDataObjectComposite*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxDataObjectComposite >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,55398761) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxDataObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_wxDataObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		//wxDataObjectComposite* ptr= dynamic_cast< wxDataObjectComposite* >(Luna< wxDataObject >::check(L,1));
		wxDataObjectComposite* ptr= luna_caster< wxDataObject, wxDataObjectComposite >::cast(Luna< wxDataObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxDataObjectComposite >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Add(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,55398761)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetReceivedFormat(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetObject(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,9988153) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetData(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,9988153) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxDataObjectComposite::wxDataObjectComposite(lua_Table * data)
	static wxDataObjectComposite* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxDataObjectComposite::wxDataObjectComposite(lua_Table * data) function, expected prototype:\nwxDataObjectComposite::wxDataObjectComposite(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxDataObjectComposite(L,NULL);
	}


	// Function binds:
	// void wxDataObjectComposite::Add(wxDataObjectSimple * dataObject, bool preferred = false)
	static int _bind_Add(lua_State *L) {
		if (!_lg_typecheck_Add(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataObjectComposite::Add(wxDataObjectSimple * dataObject, bool preferred = false) function, expected prototype:\nvoid wxDataObjectComposite::Add(wxDataObjectSimple * dataObject, bool preferred = false)\nClass arguments details:\narg 1 ID = 55398761\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxDataObjectSimple* dataObject=(Luna< wxDataObject >::checkSubType< wxDataObjectSimple >(L,2));
		bool preferred=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)false;

		wxDataObjectComposite* self=Luna< wxDataObject >::checkSubType< wxDataObjectComposite >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataObjectComposite::Add(wxDataObjectSimple *, bool). Got : '%s'\n%s",typeid(Luna< wxDataObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Add(dataObject, preferred);

		return 0;
	}

	// wxDataFormat wxDataObjectComposite::GetReceivedFormat() const
	static int _bind_GetReceivedFormat(lua_State *L) {
		if (!_lg_typecheck_GetReceivedFormat(L)) {
			luaL_error(L, "luna typecheck failed in wxDataFormat wxDataObjectComposite::GetReceivedFormat() const function, expected prototype:\nwxDataFormat wxDataObjectComposite::GetReceivedFormat() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataObjectComposite* self=Luna< wxDataObject >::checkSubType< wxDataObjectComposite >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDataFormat wxDataObjectComposite::GetReceivedFormat() const. Got : '%s'\n%s",typeid(Luna< wxDataObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDataFormat stack_lret = self->GetReceivedFormat();
		wxDataFormat* lret = new wxDataFormat(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataFormat >::push(L,lret,true);

		return 1;
	}

	// wxDataObjectSimple * wxDataObjectComposite::GetObject(const wxDataFormat & format, wxDataObjectBase::Direction dir = wxDataObject::Get) const
	static int _bind_GetObject(lua_State *L) {
		if (!_lg_typecheck_GetObject(L)) {
			luaL_error(L, "luna typecheck failed in wxDataObjectSimple * wxDataObjectComposite::GetObject(const wxDataFormat & format, wxDataObjectBase::Direction dir = wxDataObject::Get) const function, expected prototype:\nwxDataObjectSimple * wxDataObjectComposite::GetObject(const wxDataFormat & format, wxDataObjectBase::Direction dir = wxDataObject::Get) const\nClass arguments details:\narg 1 ID = 9988153\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxDataFormat* format_ptr=(Luna< wxDataFormat >::check(L,2));
		if( !format_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg format in wxDataObjectComposite::GetObject function");
		}
		const wxDataFormat & format=*format_ptr;
		wxDataObjectBase::Direction dir=luatop>2 ? (wxDataObjectBase::Direction)lua_tointeger(L,3) : (wxDataObjectBase::Direction)wxDataObject::Get;

		wxDataObjectComposite* self=Luna< wxDataObject >::checkSubType< wxDataObjectComposite >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDataObjectSimple * wxDataObjectComposite::GetObject(const wxDataFormat &, wxDataObjectBase::Direction) const. Got : '%s'\n%s",typeid(Luna< wxDataObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDataObjectSimple * lret = self->GetObject(format, dir);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataObjectSimple >::push(L,lret,false);

		return 1;
	}

	// bool wxDataObjectComposite::base_SetData(const wxDataFormat & format, size_t len, const void * buf)
	static int _bind_base_SetData(lua_State *L) {
		if (!_lg_typecheck_base_SetData(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataObjectComposite::base_SetData(const wxDataFormat & format, size_t len, const void * buf) function, expected prototype:\nbool wxDataObjectComposite::base_SetData(const wxDataFormat & format, size_t len, const void * buf)\nClass arguments details:\narg 1 ID = 9988153\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataFormat* format_ptr=(Luna< wxDataFormat >::check(L,2));
		if( !format_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg format in wxDataObjectComposite::base_SetData function");
		}
		const wxDataFormat & format=*format_ptr;
		size_t len=(size_t)lua_tointeger(L,3);
		const void* buf=(Luna< void >::check(L,4));

		wxDataObjectComposite* self=Luna< wxDataObject >::checkSubType< wxDataObjectComposite >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataObjectComposite::base_SetData(const wxDataFormat &, size_t, const void *). Got : '%s'\n%s",typeid(Luna< wxDataObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDataObjectComposite::SetData(format, len, buf);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxDataObjectComposite* LunaTraits< wxDataObjectComposite >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxDataObjectComposite::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void wxDataObject::GetAllFormats(wxDataFormat * formats, wxDataObject::Direction dir = wxDataObject::Get) const
	// bool wxDataObject::GetDataHere(const wxDataFormat & format, void * buf) const
	// size_t wxDataObject::GetDataSize(const wxDataFormat & format) const
	// size_t wxDataObject::GetFormatCount(wxDataObject::Direction dir = wxDataObject::Get) const
	// wxDataFormat wxDataObject::GetPreferredFormat(wxDataObject::Direction dir = wxDataObject::Get) const
}

void LunaTraits< wxDataObjectComposite >::_bind_dtor(wxDataObjectComposite* obj) {
	delete obj;
}

const char LunaTraits< wxDataObjectComposite >::className[] = "wxDataObjectComposite";
const char LunaTraits< wxDataObjectComposite >::fullName[] = "wxDataObjectComposite";
const char LunaTraits< wxDataObjectComposite >::moduleName[] = "wx";
const char* LunaTraits< wxDataObjectComposite >::parents[] = {"wx.wxDataObject", 0};
const int LunaTraits< wxDataObjectComposite >::hash = 44723371;
const int LunaTraits< wxDataObjectComposite >::uniqueIDs[] = {55398761,0};

luna_RegType LunaTraits< wxDataObjectComposite >::methods[] = {
	{"Add", &luna_wrapper_wxDataObjectComposite::_bind_Add},
	{"GetReceivedFormat", &luna_wrapper_wxDataObjectComposite::_bind_GetReceivedFormat},
	{"GetObject", &luna_wrapper_wxDataObjectComposite::_bind_GetObject},
	{"base_SetData", &luna_wrapper_wxDataObjectComposite::_bind_base_SetData},
	{"fromVoid", &luna_wrapper_wxDataObjectComposite::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxDataObjectComposite::_bind_asVoid},
	{"getTable", &luna_wrapper_wxDataObjectComposite::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxDataObjectComposite >::converters[] = {
	{"wxDataObject", &luna_wrapper_wxDataObjectComposite::_cast_from_wxDataObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxDataObjectComposite >::enumValues[] = {
	{0,0}
};



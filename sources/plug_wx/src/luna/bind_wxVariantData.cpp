#include <plug_common.h>

#include <luna/wrappers/wrapper_wxVariantData.h>

class luna_wrapper_wxVariantData {
public:
	typedef Luna< wxVariantData > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxObjectRefData* self=(Luna< wxObjectRefData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<wxObjectRefData,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
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

		wxVariantData* self= (wxVariantData*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxVariantData >::push(L,self,false);
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
		//wxVariantData* ptr= dynamic_cast< wxVariantData* >(Luna< wxObjectRefData >::check(L,1));
		wxVariantData* ptr= luna_caster< wxObjectRefData, wxVariantData >::cast(Luna< wxObjectRefData >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxVariantData >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

wxVariantData* LunaTraits< wxVariantData >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// bool wxVariantData::Eq(wxVariantData & data) const
	// wxString wxVariantData::GetType() const
}

void LunaTraits< wxVariantData >::_bind_dtor(wxVariantData* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< wxVariantData >::className[] = "wxVariantData";
const char LunaTraits< wxVariantData >::fullName[] = "wxVariantData";
const char LunaTraits< wxVariantData >::moduleName[] = "wx";
const char* LunaTraits< wxVariantData >::parents[] = {"wx.wxObjectRefData", 0};
const int LunaTraits< wxVariantData >::hash = 44451978;
const int LunaTraits< wxVariantData >::uniqueIDs[] = {60960840,0};

luna_RegType LunaTraits< wxVariantData >::methods[] = {
	{"fromVoid", &luna_wrapper_wxVariantData::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxVariantData::_bind_asVoid},
	{"getTable", &luna_wrapper_wxVariantData::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxVariantData >::converters[] = {
	{"wxObjectRefData", &luna_wrapper_wxVariantData::_cast_from_wxObjectRefData},
	{0,0}
};

luna_RegEnumType LunaTraits< wxVariantData >::enumValues[] = {
	{0,0}
};



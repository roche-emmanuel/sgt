#include <plug_common.h>

#include <luna/wrappers/wrapper_wxMask.h>

class luna_wrapper_wxMask {
public:
	typedef Luna< wxMask > luna_t;

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

		wxMask* self= (wxMask*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxMask >::push(L,self,false);
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
		//wxMask* ptr= dynamic_cast< wxMask* >(Luna< wxObject >::check(L,1));
		wxMask* ptr= luna_caster< wxObject, wxMask >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxMask >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxBitmap >(L,1))) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxBitmap >(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxBitmap >(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxColour >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxBitmap >(L,2))) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_7(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxBitmap >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_8(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxBitmap >(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxColour >(L,3))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Create_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxBitmap >(L,2))) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Create_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxBitmap >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Create_overload_3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxBitmap >(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxColour >(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxMask::wxMask()
	static wxMask* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxMask::wxMask() function, expected prototype:\nwxMask::wxMask()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxMask();
	}

	// wxMask::wxMask(const wxBitmap & bitmap, int index)
	static wxMask* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxMask::wxMask(const wxBitmap & bitmap, int index) function, expected prototype:\nwxMask::wxMask(const wxBitmap & bitmap, int index)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxBitmap* bitmap_ptr=(Luna< wxObject >::checkSubType< wxBitmap >(L,1));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxMask::wxMask function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;
		int index=(int)lua_tointeger(L,2);

		return new wxMask(bitmap, index);
	}

	// wxMask::wxMask(const wxBitmap & bitmap)
	static wxMask* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in wxMask::wxMask(const wxBitmap & bitmap) function, expected prototype:\nwxMask::wxMask(const wxBitmap & bitmap)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxBitmap* bitmap_ptr=(Luna< wxObject >::checkSubType< wxBitmap >(L,1));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxMask::wxMask function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;

		return new wxMask(bitmap);
	}

	// wxMask::wxMask(const wxBitmap & bitmap, const wxColour & colour)
	static wxMask* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in wxMask::wxMask(const wxBitmap & bitmap, const wxColour & colour) function, expected prototype:\nwxMask::wxMask(const wxBitmap & bitmap, const wxColour & colour)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxBitmap* bitmap_ptr=(Luna< wxObject >::checkSubType< wxBitmap >(L,1));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxMask::wxMask function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;
		const wxColour* colour_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,2));
		if( !colour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colour in wxMask::wxMask function");
		}
		const wxColour & colour=*colour_ptr;

		return new wxMask(bitmap, colour);
	}

	// wxMask::wxMask(lua_Table * data)
	static wxMask* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in wxMask::wxMask(lua_Table * data) function, expected prototype:\nwxMask::wxMask(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxMask(L,NULL);
	}

	// wxMask::wxMask(lua_Table * data, const wxBitmap & bitmap, int index)
	static wxMask* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in wxMask::wxMask(lua_Table * data, const wxBitmap & bitmap, int index) function, expected prototype:\nwxMask::wxMask(lua_Table * data, const wxBitmap & bitmap, int index)\nClass arguments details:\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxBitmap* bitmap_ptr=(Luna< wxObject >::checkSubType< wxBitmap >(L,2));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxMask::wxMask function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;
		int index=(int)lua_tointeger(L,3);

		return new wrapper_wxMask(L,NULL, bitmap, index);
	}

	// wxMask::wxMask(lua_Table * data, const wxBitmap & bitmap)
	static wxMask* _bind_ctor_overload_7(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_7(L)) {
			luaL_error(L, "luna typecheck failed in wxMask::wxMask(lua_Table * data, const wxBitmap & bitmap) function, expected prototype:\nwxMask::wxMask(lua_Table * data, const wxBitmap & bitmap)\nClass arguments details:\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxBitmap* bitmap_ptr=(Luna< wxObject >::checkSubType< wxBitmap >(L,2));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxMask::wxMask function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;

		return new wrapper_wxMask(L,NULL, bitmap);
	}

	// wxMask::wxMask(lua_Table * data, const wxBitmap & bitmap, const wxColour & colour)
	static wxMask* _bind_ctor_overload_8(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_8(L)) {
			luaL_error(L, "luna typecheck failed in wxMask::wxMask(lua_Table * data, const wxBitmap & bitmap, const wxColour & colour) function, expected prototype:\nwxMask::wxMask(lua_Table * data, const wxBitmap & bitmap, const wxColour & colour)\nClass arguments details:\narg 2 ID = 56813631\narg 3 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxBitmap* bitmap_ptr=(Luna< wxObject >::checkSubType< wxBitmap >(L,2));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxMask::wxMask function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;
		const wxColour* colour_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,3));
		if( !colour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colour in wxMask::wxMask function");
		}
		const wxColour & colour=*colour_ptr;

		return new wrapper_wxMask(L,NULL, bitmap, colour);
	}

	// Overload binder for wxMask::wxMask
	static wxMask* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);
		if (_lg_typecheck_ctor_overload_7(L)) return _bind_ctor_overload_7(L);
		if (_lg_typecheck_ctor_overload_8(L)) return _bind_ctor_overload_8(L);

		luaL_error(L, "error in function wxMask, cannot match any of the overloads for function wxMask:\n  wxMask()\n  wxMask(const wxBitmap &, int)\n  wxMask(const wxBitmap &)\n  wxMask(const wxBitmap &, const wxColour &)\n  wxMask(lua_Table *)\n  wxMask(lua_Table *, const wxBitmap &, int)\n  wxMask(lua_Table *, const wxBitmap &)\n  wxMask(lua_Table *, const wxBitmap &, const wxColour &)\n");
		return NULL;
	}


	// Function binds:
	// bool wxMask::Create(const wxBitmap & bitmap, int index)
	static int _bind_Create_overload_1(lua_State *L) {
		if (!_lg_typecheck_Create_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMask::Create(const wxBitmap & bitmap, int index) function, expected prototype:\nbool wxMask::Create(const wxBitmap & bitmap, int index)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxBitmap* bitmap_ptr=(Luna< wxObject >::checkSubType< wxBitmap >(L,2));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxMask::Create function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;
		int index=(int)lua_tointeger(L,3);

		wxMask* self=Luna< wxObject >::checkSubType< wxMask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMask::Create(const wxBitmap &, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Create(bitmap, index);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMask::Create(const wxBitmap & bitmap)
	static int _bind_Create_overload_2(lua_State *L) {
		if (!_lg_typecheck_Create_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMask::Create(const wxBitmap & bitmap) function, expected prototype:\nbool wxMask::Create(const wxBitmap & bitmap)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxBitmap* bitmap_ptr=(Luna< wxObject >::checkSubType< wxBitmap >(L,2));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxMask::Create function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;

		wxMask* self=Luna< wxObject >::checkSubType< wxMask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMask::Create(const wxBitmap &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Create(bitmap);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMask::Create(const wxBitmap & bitmap, const wxColour & colour)
	static int _bind_Create_overload_3(lua_State *L) {
		if (!_lg_typecheck_Create_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMask::Create(const wxBitmap & bitmap, const wxColour & colour) function, expected prototype:\nbool wxMask::Create(const wxBitmap & bitmap, const wxColour & colour)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxBitmap* bitmap_ptr=(Luna< wxObject >::checkSubType< wxBitmap >(L,2));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxMask::Create function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;
		const wxColour* colour_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,3));
		if( !colour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colour in wxMask::Create function");
		}
		const wxColour & colour=*colour_ptr;

		wxMask* self=Luna< wxObject >::checkSubType< wxMask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMask::Create(const wxBitmap &, const wxColour &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Create(bitmap, colour);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxMask::Create
	static int _bind_Create(lua_State *L) {
		if (_lg_typecheck_Create_overload_1(L)) return _bind_Create_overload_1(L);
		if (_lg_typecheck_Create_overload_2(L)) return _bind_Create_overload_2(L);
		if (_lg_typecheck_Create_overload_3(L)) return _bind_Create_overload_3(L);

		luaL_error(L, "error in function Create, cannot match any of the overloads for function Create:\n  Create(const wxBitmap &, int)\n  Create(const wxBitmap &)\n  Create(const wxBitmap &, const wxColour &)\n");
		return 0;
	}

	// wxClassInfo * wxMask::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxMask::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxMask::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMask* self=Luna< wxObject >::checkSubType< wxMask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxMask::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxMask::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxMask* LunaTraits< wxMask >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxMask::_bind_ctor(L);
}

void LunaTraits< wxMask >::_bind_dtor(wxMask* obj) {
	delete obj;
}

const char LunaTraits< wxMask >::className[] = "wxMask";
const char LunaTraits< wxMask >::fullName[] = "wxMask";
const char LunaTraits< wxMask >::moduleName[] = "wx";
const char* LunaTraits< wxMask >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxMask >::hash = 20082106;
const int LunaTraits< wxMask >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxMask >::methods[] = {
	{"Create", &luna_wrapper_wxMask::_bind_Create},
	{"base_GetClassInfo", &luna_wrapper_wxMask::_bind_base_GetClassInfo},
	{"fromVoid", &luna_wrapper_wxMask::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxMask::_bind_asVoid},
	{"getTable", &luna_wrapper_wxMask::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxMask >::converters[] = {
	{"wxObject", &luna_wrapper_wxMask::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxMask >::enumValues[] = {
	{0,0}
};



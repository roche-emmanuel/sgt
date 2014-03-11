#include <plug_common.h>

#include <luna/wrappers/wrapper_wxImageList.h>

class luna_wrapper_wxImageList {
public:
	typedef Luna< wxImageList > luna_t;

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

		wxImageList* self= (wxImageList*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxImageList >::push(L,self,false);
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
		//wxImageList* ptr= dynamic_cast< wxImageList* >(Luna< wxObject >::check(L,1));
		wxImageList* ptr= luna_caster< wxObject, wxImageList >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxImageList >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Add_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxBitmap >(L,2))) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( luatop>2 && (!(Luna< wxObject >::checkSubType< wxBitmap >(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Add_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxBitmap >(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxColour >(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Add_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxIcon >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Draw(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>7 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && lua_isboolean(L,7)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetBitmap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetIcon(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetImageCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSize(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Remove(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RemoveAll(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Replace_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxBitmap >(L,3))) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,56813631) ) return false;
		if( luatop>3 && (!(Luna< wxObject >::checkSubType< wxBitmap >(L,4))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Replace_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxIcon >(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Draw(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>7 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && lua_isboolean(L,7)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetImageCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetSize(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxImageList::wxImageList()
	static wxImageList* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxImageList::wxImageList() function, expected prototype:\nwxImageList::wxImageList()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxImageList();
	}

	// wxImageList::wxImageList(int width, int height, bool mask = true, int initialCount = 1)
	static wxImageList* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxImageList::wxImageList(int width, int height, bool mask = true, int initialCount = 1) function, expected prototype:\nwxImageList::wxImageList(int width, int height, bool mask = true, int initialCount = 1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int width=(int)lua_tointeger(L,1);
		int height=(int)lua_tointeger(L,2);
		bool mask=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;
		int initialCount=luatop>3 ? (int)lua_tointeger(L,4) : (int)1;

		return new wxImageList(width, height, mask, initialCount);
	}

	// wxImageList::wxImageList(lua_Table * data)
	static wxImageList* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in wxImageList::wxImageList(lua_Table * data) function, expected prototype:\nwxImageList::wxImageList(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxImageList(L,NULL);
	}

	// wxImageList::wxImageList(lua_Table * data, int width, int height, bool mask = true, int initialCount = 1)
	static wxImageList* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in wxImageList::wxImageList(lua_Table * data, int width, int height, bool mask = true, int initialCount = 1) function, expected prototype:\nwxImageList::wxImageList(lua_Table * data, int width, int height, bool mask = true, int initialCount = 1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int width=(int)lua_tointeger(L,2);
		int height=(int)lua_tointeger(L,3);
		bool mask=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)true;
		int initialCount=luatop>4 ? (int)lua_tointeger(L,5) : (int)1;

		return new wrapper_wxImageList(L,NULL, width, height, mask, initialCount);
	}

	// Overload binder for wxImageList::wxImageList
	static wxImageList* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function wxImageList, cannot match any of the overloads for function wxImageList:\n  wxImageList()\n  wxImageList(int, int, bool, int)\n  wxImageList(lua_Table *)\n  wxImageList(lua_Table *, int, int, bool, int)\n");
		return NULL;
	}


	// Function binds:
	// int wxImageList::Add(const wxBitmap & bitmap, const wxBitmap & mask = wxNullBitmap)
	static int _bind_Add_overload_1(lua_State *L) {
		if (!_lg_typecheck_Add_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in int wxImageList::Add(const wxBitmap & bitmap, const wxBitmap & mask = wxNullBitmap) function, expected prototype:\nint wxImageList::Add(const wxBitmap & bitmap, const wxBitmap & mask = wxNullBitmap)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxBitmap* bitmap_ptr=(Luna< wxObject >::checkSubType< wxBitmap >(L,2));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxImageList::Add function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;
		const wxBitmap* mask_ptr=luatop>2 ? (Luna< wxObject >::checkSubType< wxBitmap >(L,3)) : NULL;
		if( luatop>2 && !mask_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mask in wxImageList::Add function");
		}
		const wxBitmap & mask=luatop>2 ? *mask_ptr : (const wxBitmap&)wxNullBitmap;

		wxImageList* self=Luna< wxObject >::checkSubType< wxImageList >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxImageList::Add(const wxBitmap &, const wxBitmap &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->Add(bitmap, mask);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxImageList::Add(const wxBitmap & bitmap, const wxColour & maskColour)
	static int _bind_Add_overload_2(lua_State *L) {
		if (!_lg_typecheck_Add_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in int wxImageList::Add(const wxBitmap & bitmap, const wxColour & maskColour) function, expected prototype:\nint wxImageList::Add(const wxBitmap & bitmap, const wxColour & maskColour)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxBitmap* bitmap_ptr=(Luna< wxObject >::checkSubType< wxBitmap >(L,2));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxImageList::Add function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;
		const wxColour* maskColour_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,3));
		if( !maskColour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg maskColour in wxImageList::Add function");
		}
		const wxColour & maskColour=*maskColour_ptr;

		wxImageList* self=Luna< wxObject >::checkSubType< wxImageList >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxImageList::Add(const wxBitmap &, const wxColour &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->Add(bitmap, maskColour);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxImageList::Add(const wxIcon & icon)
	static int _bind_Add_overload_3(lua_State *L) {
		if (!_lg_typecheck_Add_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in int wxImageList::Add(const wxIcon & icon) function, expected prototype:\nint wxImageList::Add(const wxIcon & icon)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxIcon* icon_ptr=(Luna< wxObject >::checkSubType< wxIcon >(L,2));
		if( !icon_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg icon in wxImageList::Add function");
		}
		const wxIcon & icon=*icon_ptr;

		wxImageList* self=Luna< wxObject >::checkSubType< wxImageList >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxImageList::Add(const wxIcon &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->Add(icon);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for wxImageList::Add
	static int _bind_Add(lua_State *L) {
		if (_lg_typecheck_Add_overload_1(L)) return _bind_Add_overload_1(L);
		if (_lg_typecheck_Add_overload_2(L)) return _bind_Add_overload_2(L);
		if (_lg_typecheck_Add_overload_3(L)) return _bind_Add_overload_3(L);

		luaL_error(L, "error in function Add, cannot match any of the overloads for function Add:\n  Add(const wxBitmap &, const wxBitmap &)\n  Add(const wxBitmap &, const wxColour &)\n  Add(const wxIcon &)\n");
		return 0;
	}

	// bool wxImageList::Create(int width, int height, bool mask = true, int initialCount = 1)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luaL_error(L, "luna typecheck failed in bool wxImageList::Create(int width, int height, bool mask = true, int initialCount = 1) function, expected prototype:\nbool wxImageList::Create(int width, int height, bool mask = true, int initialCount = 1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int width=(int)lua_tointeger(L,2);
		int height=(int)lua_tointeger(L,3);
		bool mask=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)true;
		int initialCount=luatop>4 ? (int)lua_tointeger(L,5) : (int)1;

		wxImageList* self=Luna< wxObject >::checkSubType< wxImageList >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxImageList::Create(int, int, bool, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Create(width, height, mask, initialCount);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxImageList::Draw(int index, wxDC & dc, int x, int y, int flags = 0x0001, bool solidBackground = false)
	static int _bind_Draw(lua_State *L) {
		if (!_lg_typecheck_Draw(L)) {
			luaL_error(L, "luna typecheck failed in bool wxImageList::Draw(int index, wxDC & dc, int x, int y, int flags = 0x0001, bool solidBackground = false) function, expected prototype:\nbool wxImageList::Draw(int index, wxDC & dc, int x, int y, int flags = 0x0001, bool solidBackground = false)\nClass arguments details:\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int index=(int)lua_tointeger(L,2);
		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,3));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxImageList::Draw function");
		}
		wxDC & dc=*dc_ptr;
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);
		int flags=luatop>5 ? (int)lua_tointeger(L,6) : (int)0x0001;
		bool solidBackground=luatop>6 ? (bool)(lua_toboolean(L,7)==1) : (bool)false;

		wxImageList* self=Luna< wxObject >::checkSubType< wxImageList >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxImageList::Draw(int, wxDC &, int, int, int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Draw(index, dc, x, y, flags, solidBackground);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxBitmap wxImageList::GetBitmap(int index) const
	static int _bind_GetBitmap(lua_State *L) {
		if (!_lg_typecheck_GetBitmap(L)) {
			luaL_error(L, "luna typecheck failed in wxBitmap wxImageList::GetBitmap(int index) const function, expected prototype:\nwxBitmap wxImageList::GetBitmap(int index) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);

		wxImageList* self=Luna< wxObject >::checkSubType< wxImageList >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxBitmap wxImageList::GetBitmap(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxBitmap stack_lret = self->GetBitmap(index);
		wxBitmap* lret = new wxBitmap(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxBitmap >::push(L,lret,true);

		return 1;
	}

	// wxIcon wxImageList::GetIcon(int index) const
	static int _bind_GetIcon(lua_State *L) {
		if (!_lg_typecheck_GetIcon(L)) {
			luaL_error(L, "luna typecheck failed in wxIcon wxImageList::GetIcon(int index) const function, expected prototype:\nwxIcon wxImageList::GetIcon(int index) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);

		wxImageList* self=Luna< wxObject >::checkSubType< wxImageList >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxIcon wxImageList::GetIcon(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxIcon stack_lret = self->GetIcon(index);
		wxIcon* lret = new wxIcon(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxIcon >::push(L,lret,true);

		return 1;
	}

	// int wxImageList::GetImageCount() const
	static int _bind_GetImageCount(lua_State *L) {
		if (!_lg_typecheck_GetImageCount(L)) {
			luaL_error(L, "luna typecheck failed in int wxImageList::GetImageCount() const function, expected prototype:\nint wxImageList::GetImageCount() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxImageList* self=Luna< wxObject >::checkSubType< wxImageList >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxImageList::GetImageCount() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetImageCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxImageList::GetSize(int index, int & width, int & height) const
	static int _bind_GetSize(lua_State *L) {
		if (!_lg_typecheck_GetSize(L)) {
			luaL_error(L, "luna typecheck failed in bool wxImageList::GetSize(int index, int & width, int & height) const function, expected prototype:\nbool wxImageList::GetSize(int index, int & width, int & height) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);
		int width=(int)lua_tointeger(L,3);
		int height=(int)lua_tointeger(L,4);

		wxImageList* self=Luna< wxObject >::checkSubType< wxImageList >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxImageList::GetSize(int, int &, int &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GetSize(index, width, height);
		lua_pushboolean(L,lret?1:0);

		lua_pushnumber(L,width);
		lua_pushnumber(L,height);
		return 3;
	}

	// bool wxImageList::Remove(int index)
	static int _bind_Remove(lua_State *L) {
		if (!_lg_typecheck_Remove(L)) {
			luaL_error(L, "luna typecheck failed in bool wxImageList::Remove(int index) function, expected prototype:\nbool wxImageList::Remove(int index)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);

		wxImageList* self=Luna< wxObject >::checkSubType< wxImageList >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxImageList::Remove(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Remove(index);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxImageList::RemoveAll()
	static int _bind_RemoveAll(lua_State *L) {
		if (!_lg_typecheck_RemoveAll(L)) {
			luaL_error(L, "luna typecheck failed in bool wxImageList::RemoveAll() function, expected prototype:\nbool wxImageList::RemoveAll()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxImageList* self=Luna< wxObject >::checkSubType< wxImageList >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxImageList::RemoveAll(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->RemoveAll();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxImageList::Replace(int index, const wxBitmap & bitmap, const wxBitmap & mask = wxNullBitmap)
	static int _bind_Replace_overload_1(lua_State *L) {
		if (!_lg_typecheck_Replace_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool wxImageList::Replace(int index, const wxBitmap & bitmap, const wxBitmap & mask = wxNullBitmap) function, expected prototype:\nbool wxImageList::Replace(int index, const wxBitmap & bitmap, const wxBitmap & mask = wxNullBitmap)\nClass arguments details:\narg 2 ID = 56813631\narg 3 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int index=(int)lua_tointeger(L,2);
		const wxBitmap* bitmap_ptr=(Luna< wxObject >::checkSubType< wxBitmap >(L,3));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxImageList::Replace function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;
		const wxBitmap* mask_ptr=luatop>3 ? (Luna< wxObject >::checkSubType< wxBitmap >(L,4)) : NULL;
		if( luatop>3 && !mask_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mask in wxImageList::Replace function");
		}
		const wxBitmap & mask=luatop>3 ? *mask_ptr : (const wxBitmap&)wxNullBitmap;

		wxImageList* self=Luna< wxObject >::checkSubType< wxImageList >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxImageList::Replace(int, const wxBitmap &, const wxBitmap &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Replace(index, bitmap, mask);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxImageList::Replace(int index, const wxIcon & icon)
	static int _bind_Replace_overload_2(lua_State *L) {
		if (!_lg_typecheck_Replace_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool wxImageList::Replace(int index, const wxIcon & icon) function, expected prototype:\nbool wxImageList::Replace(int index, const wxIcon & icon)\nClass arguments details:\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);
		const wxIcon* icon_ptr=(Luna< wxObject >::checkSubType< wxIcon >(L,3));
		if( !icon_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg icon in wxImageList::Replace function");
		}
		const wxIcon & icon=*icon_ptr;

		wxImageList* self=Luna< wxObject >::checkSubType< wxImageList >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxImageList::Replace(int, const wxIcon &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Replace(index, icon);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxImageList::Replace
	static int _bind_Replace(lua_State *L) {
		if (_lg_typecheck_Replace_overload_1(L)) return _bind_Replace_overload_1(L);
		if (_lg_typecheck_Replace_overload_2(L)) return _bind_Replace_overload_2(L);

		luaL_error(L, "error in function Replace, cannot match any of the overloads for function Replace:\n  Replace(int, const wxBitmap &, const wxBitmap &)\n  Replace(int, const wxIcon &)\n");
		return 0;
	}

	// wxClassInfo * wxImageList::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxImageList::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxImageList::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxImageList* self=Luna< wxObject >::checkSubType< wxImageList >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxImageList::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxImageList::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// bool wxImageList::base_Draw(int index, wxDC & dc, int x, int y, int flags = 0x0001, bool solidBackground = false)
	static int _bind_base_Draw(lua_State *L) {
		if (!_lg_typecheck_base_Draw(L)) {
			luaL_error(L, "luna typecheck failed in bool wxImageList::base_Draw(int index, wxDC & dc, int x, int y, int flags = 0x0001, bool solidBackground = false) function, expected prototype:\nbool wxImageList::base_Draw(int index, wxDC & dc, int x, int y, int flags = 0x0001, bool solidBackground = false)\nClass arguments details:\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int index=(int)lua_tointeger(L,2);
		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,3));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxImageList::base_Draw function");
		}
		wxDC & dc=*dc_ptr;
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);
		int flags=luatop>5 ? (int)lua_tointeger(L,6) : (int)0x0001;
		bool solidBackground=luatop>6 ? (bool)(lua_toboolean(L,7)==1) : (bool)false;

		wxImageList* self=Luna< wxObject >::checkSubType< wxImageList >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxImageList::base_Draw(int, wxDC &, int, int, int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxImageList::Draw(index, dc, x, y, flags, solidBackground);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxImageList::base_GetImageCount() const
	static int _bind_base_GetImageCount(lua_State *L) {
		if (!_lg_typecheck_base_GetImageCount(L)) {
			luaL_error(L, "luna typecheck failed in int wxImageList::base_GetImageCount() const function, expected prototype:\nint wxImageList::base_GetImageCount() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxImageList* self=Luna< wxObject >::checkSubType< wxImageList >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxImageList::base_GetImageCount() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxImageList::GetImageCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxImageList::base_GetSize(int index, int & width, int & height) const
	static int _bind_base_GetSize(lua_State *L) {
		if (!_lg_typecheck_base_GetSize(L)) {
			luaL_error(L, "luna typecheck failed in bool wxImageList::base_GetSize(int index, int & width, int & height) const function, expected prototype:\nbool wxImageList::base_GetSize(int index, int & width, int & height) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);
		int width=(int)lua_tointeger(L,3);
		int height=(int)lua_tointeger(L,4);

		wxImageList* self=Luna< wxObject >::checkSubType< wxImageList >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxImageList::base_GetSize(int, int &, int &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxImageList::GetSize(index, width, height);
		lua_pushboolean(L,lret?1:0);

		lua_pushnumber(L,width);
		lua_pushnumber(L,height);
		return 3;
	}


	// Operator binds:

};

wxImageList* LunaTraits< wxImageList >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxImageList::_bind_ctor(L);
}

void LunaTraits< wxImageList >::_bind_dtor(wxImageList* obj) {
	delete obj;
}

const char LunaTraits< wxImageList >::className[] = "wxImageList";
const char LunaTraits< wxImageList >::fullName[] = "wxImageList";
const char LunaTraits< wxImageList >::moduleName[] = "wx";
const char* LunaTraits< wxImageList >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxImageList >::hash = 98118574;
const int LunaTraits< wxImageList >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxImageList >::methods[] = {
	{"Add", &luna_wrapper_wxImageList::_bind_Add},
	{"Create", &luna_wrapper_wxImageList::_bind_Create},
	{"Draw", &luna_wrapper_wxImageList::_bind_Draw},
	{"GetBitmap", &luna_wrapper_wxImageList::_bind_GetBitmap},
	{"GetIcon", &luna_wrapper_wxImageList::_bind_GetIcon},
	{"GetImageCount", &luna_wrapper_wxImageList::_bind_GetImageCount},
	{"GetSize", &luna_wrapper_wxImageList::_bind_GetSize},
	{"Remove", &luna_wrapper_wxImageList::_bind_Remove},
	{"RemoveAll", &luna_wrapper_wxImageList::_bind_RemoveAll},
	{"Replace", &luna_wrapper_wxImageList::_bind_Replace},
	{"base_GetClassInfo", &luna_wrapper_wxImageList::_bind_base_GetClassInfo},
	{"base_Draw", &luna_wrapper_wxImageList::_bind_base_Draw},
	{"base_GetImageCount", &luna_wrapper_wxImageList::_bind_base_GetImageCount},
	{"base_GetSize", &luna_wrapper_wxImageList::_bind_base_GetSize},
	{"fromVoid", &luna_wrapper_wxImageList::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxImageList::_bind_asVoid},
	{"getTable", &luna_wrapper_wxImageList::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxImageList >::converters[] = {
	{"wxObject", &luna_wrapper_wxImageList::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxImageList >::enumValues[] = {
	{0,0}
};



#include <plug_common.h>

class luna_wrapper_wxSize {
public:
	typedef Luna< wxSize > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,20268751) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxSize*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxSize* rhs =(Luna< wxSize >::check(L,2));
		wxSize* self=(Luna< wxSize >::check(L,1));
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

		wxSize* self= (wxSize*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxSize >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,20268751) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxSize >::check(L,1));
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

		wxSize* self=(Luna< wxSize >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxSize");
		
		return luna_dynamicCast(L,converters,"wxSize",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_DecBy_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		if( (!(Luna< wxPoint >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DecBy_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		if( (!(Luna< wxSize >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DecBy_overload_3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DecBy_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DecTo(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IncBy_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		if( (!(Luna< wxPoint >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IncBy_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		if( (!(Luna< wxSize >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IncBy_overload_3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IncBy_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IncTo(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsFullySpecified(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Scale(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Set(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDefaults(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetHeight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetWidth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxSize::wxSize()
	static wxSize* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxSize::wxSize() function, expected prototype:\nwxSize::wxSize()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxSize();
	}

	// wxSize::wxSize(int width, int height)
	static wxSize* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxSize::wxSize(int width, int height) function, expected prototype:\nwxSize::wxSize(int width, int height)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int width=(int)lua_tointeger(L,1);
		int height=(int)lua_tointeger(L,2);

		return new wxSize(width, height);
	}

	// Overload binder for wxSize::wxSize
	static wxSize* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxSize, cannot match any of the overloads for function wxSize:\n  wxSize()\n  wxSize(int, int)\n");
		return NULL;
	}


	// Function binds:
	// void wxSize::DecBy(const wxPoint & pt)
	static int _bind_DecBy_overload_1(lua_State *L) {
		if (!_lg_typecheck_DecBy_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxSize::DecBy(const wxPoint & pt) function, expected prototype:\nvoid wxSize::DecBy(const wxPoint & pt)\nClass arguments details:\narg 1 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint* pt_ptr=(Luna< wxPoint >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxSize::DecBy function");
		}
		const wxPoint & pt=*pt_ptr;

		wxSize* self=(Luna< wxSize >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSize::DecBy(const wxPoint &). Got : '%s'\n%s",typeid(Luna< wxSize >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DecBy(pt);

		return 0;
	}

	// void wxSize::DecBy(const wxSize & size)
	static int _bind_DecBy_overload_2(lua_State *L) {
		if (!_lg_typecheck_DecBy_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxSize::DecBy(const wxSize & size) function, expected prototype:\nvoid wxSize::DecBy(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxSize::DecBy function");
		}
		const wxSize & size=*size_ptr;

		wxSize* self=(Luna< wxSize >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSize::DecBy(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxSize >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DecBy(size);

		return 0;
	}

	// void wxSize::DecBy(int dx, int dy)
	static int _bind_DecBy_overload_3(lua_State *L) {
		if (!_lg_typecheck_DecBy_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in void wxSize::DecBy(int dx, int dy) function, expected prototype:\nvoid wxSize::DecBy(int dx, int dy)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int dx=(int)lua_tointeger(L,2);
		int dy=(int)lua_tointeger(L,3);

		wxSize* self=(Luna< wxSize >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSize::DecBy(int, int). Got : '%s'\n%s",typeid(Luna< wxSize >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DecBy(dx, dy);

		return 0;
	}

	// void wxSize::DecBy(int d)
	static int _bind_DecBy_overload_4(lua_State *L) {
		if (!_lg_typecheck_DecBy_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in void wxSize::DecBy(int d) function, expected prototype:\nvoid wxSize::DecBy(int d)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int d=(int)lua_tointeger(L,2);

		wxSize* self=(Luna< wxSize >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSize::DecBy(int). Got : '%s'\n%s",typeid(Luna< wxSize >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DecBy(d);

		return 0;
	}

	// Overload binder for wxSize::DecBy
	static int _bind_DecBy(lua_State *L) {
		if (_lg_typecheck_DecBy_overload_1(L)) return _bind_DecBy_overload_1(L);
		if (_lg_typecheck_DecBy_overload_2(L)) return _bind_DecBy_overload_2(L);
		if (_lg_typecheck_DecBy_overload_3(L)) return _bind_DecBy_overload_3(L);
		if (_lg_typecheck_DecBy_overload_4(L)) return _bind_DecBy_overload_4(L);

		luaL_error(L, "error in function DecBy, cannot match any of the overloads for function DecBy:\n  DecBy(const wxPoint &)\n  DecBy(const wxSize &)\n  DecBy(int, int)\n  DecBy(int)\n");
		return 0;
	}

	// void wxSize::DecTo(const wxSize & size)
	static int _bind_DecTo(lua_State *L) {
		if (!_lg_typecheck_DecTo(L)) {
			luaL_error(L, "luna typecheck failed in void wxSize::DecTo(const wxSize & size) function, expected prototype:\nvoid wxSize::DecTo(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxSize::DecTo function");
		}
		const wxSize & size=*size_ptr;

		wxSize* self=(Luna< wxSize >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSize::DecTo(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxSize >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DecTo(size);

		return 0;
	}

	// int wxSize::GetHeight() const
	static int _bind_GetHeight(lua_State *L) {
		if (!_lg_typecheck_GetHeight(L)) {
			luaL_error(L, "luna typecheck failed in int wxSize::GetHeight() const function, expected prototype:\nint wxSize::GetHeight() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSize* self=(Luna< wxSize >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxSize::GetHeight() const. Got : '%s'\n%s",typeid(Luna< wxSize >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxSize::GetWidth() const
	static int _bind_GetWidth(lua_State *L) {
		if (!_lg_typecheck_GetWidth(L)) {
			luaL_error(L, "luna typecheck failed in int wxSize::GetWidth() const function, expected prototype:\nint wxSize::GetWidth() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSize* self=(Luna< wxSize >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxSize::GetWidth() const. Got : '%s'\n%s",typeid(Luna< wxSize >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxSize::IncBy(const wxPoint & pt)
	static int _bind_IncBy_overload_1(lua_State *L) {
		if (!_lg_typecheck_IncBy_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxSize::IncBy(const wxPoint & pt) function, expected prototype:\nvoid wxSize::IncBy(const wxPoint & pt)\nClass arguments details:\narg 1 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint* pt_ptr=(Luna< wxPoint >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxSize::IncBy function");
		}
		const wxPoint & pt=*pt_ptr;

		wxSize* self=(Luna< wxSize >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSize::IncBy(const wxPoint &). Got : '%s'\n%s",typeid(Luna< wxSize >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->IncBy(pt);

		return 0;
	}

	// void wxSize::IncBy(const wxSize & size)
	static int _bind_IncBy_overload_2(lua_State *L) {
		if (!_lg_typecheck_IncBy_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxSize::IncBy(const wxSize & size) function, expected prototype:\nvoid wxSize::IncBy(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxSize::IncBy function");
		}
		const wxSize & size=*size_ptr;

		wxSize* self=(Luna< wxSize >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSize::IncBy(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxSize >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->IncBy(size);

		return 0;
	}

	// void wxSize::IncBy(int dx, int dy)
	static int _bind_IncBy_overload_3(lua_State *L) {
		if (!_lg_typecheck_IncBy_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in void wxSize::IncBy(int dx, int dy) function, expected prototype:\nvoid wxSize::IncBy(int dx, int dy)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int dx=(int)lua_tointeger(L,2);
		int dy=(int)lua_tointeger(L,3);

		wxSize* self=(Luna< wxSize >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSize::IncBy(int, int). Got : '%s'\n%s",typeid(Luna< wxSize >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->IncBy(dx, dy);

		return 0;
	}

	// void wxSize::IncBy(int d)
	static int _bind_IncBy_overload_4(lua_State *L) {
		if (!_lg_typecheck_IncBy_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in void wxSize::IncBy(int d) function, expected prototype:\nvoid wxSize::IncBy(int d)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int d=(int)lua_tointeger(L,2);

		wxSize* self=(Luna< wxSize >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSize::IncBy(int). Got : '%s'\n%s",typeid(Luna< wxSize >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->IncBy(d);

		return 0;
	}

	// Overload binder for wxSize::IncBy
	static int _bind_IncBy(lua_State *L) {
		if (_lg_typecheck_IncBy_overload_1(L)) return _bind_IncBy_overload_1(L);
		if (_lg_typecheck_IncBy_overload_2(L)) return _bind_IncBy_overload_2(L);
		if (_lg_typecheck_IncBy_overload_3(L)) return _bind_IncBy_overload_3(L);
		if (_lg_typecheck_IncBy_overload_4(L)) return _bind_IncBy_overload_4(L);

		luaL_error(L, "error in function IncBy, cannot match any of the overloads for function IncBy:\n  IncBy(const wxPoint &)\n  IncBy(const wxSize &)\n  IncBy(int, int)\n  IncBy(int)\n");
		return 0;
	}

	// void wxSize::IncTo(const wxSize & size)
	static int _bind_IncTo(lua_State *L) {
		if (!_lg_typecheck_IncTo(L)) {
			luaL_error(L, "luna typecheck failed in void wxSize::IncTo(const wxSize & size) function, expected prototype:\nvoid wxSize::IncTo(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxSize::IncTo function");
		}
		const wxSize & size=*size_ptr;

		wxSize* self=(Luna< wxSize >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSize::IncTo(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxSize >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->IncTo(size);

		return 0;
	}

	// bool wxSize::IsFullySpecified() const
	static int _bind_IsFullySpecified(lua_State *L) {
		if (!_lg_typecheck_IsFullySpecified(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSize::IsFullySpecified() const function, expected prototype:\nbool wxSize::IsFullySpecified() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSize* self=(Luna< wxSize >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSize::IsFullySpecified() const. Got : '%s'\n%s",typeid(Luna< wxSize >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsFullySpecified();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxSize & wxSize::Scale(float xscale, float yscale)
	static int _bind_Scale(lua_State *L) {
		if (!_lg_typecheck_Scale(L)) {
			luaL_error(L, "luna typecheck failed in wxSize & wxSize::Scale(float xscale, float yscale) function, expected prototype:\nwxSize & wxSize::Scale(float xscale, float yscale)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float xscale=(float)lua_tonumber(L,2);
		float yscale=(float)lua_tonumber(L,3);

		wxSize* self=(Luna< wxSize >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize & wxSize::Scale(float, float). Got : '%s'\n%s",typeid(Luna< wxSize >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxSize* lret = &self->Scale(xscale, yscale);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,false);

		return 1;
	}

	// void wxSize::Set(int width, int height)
	static int _bind_Set(lua_State *L) {
		if (!_lg_typecheck_Set(L)) {
			luaL_error(L, "luna typecheck failed in void wxSize::Set(int width, int height) function, expected prototype:\nvoid wxSize::Set(int width, int height)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int width=(int)lua_tointeger(L,2);
		int height=(int)lua_tointeger(L,3);

		wxSize* self=(Luna< wxSize >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSize::Set(int, int). Got : '%s'\n%s",typeid(Luna< wxSize >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Set(width, height);

		return 0;
	}

	// void wxSize::SetDefaults(const wxSize & sizeDefault)
	static int _bind_SetDefaults(lua_State *L) {
		if (!_lg_typecheck_SetDefaults(L)) {
			luaL_error(L, "luna typecheck failed in void wxSize::SetDefaults(const wxSize & sizeDefault) function, expected prototype:\nvoid wxSize::SetDefaults(const wxSize & sizeDefault)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* sizeDefault_ptr=(Luna< wxSize >::check(L,2));
		if( !sizeDefault_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sizeDefault in wxSize::SetDefaults function");
		}
		const wxSize & sizeDefault=*sizeDefault_ptr;

		wxSize* self=(Luna< wxSize >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSize::SetDefaults(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxSize >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetDefaults(sizeDefault);

		return 0;
	}

	// void wxSize::SetHeight(int height)
	static int _bind_SetHeight(lua_State *L) {
		if (!_lg_typecheck_SetHeight(L)) {
			luaL_error(L, "luna typecheck failed in void wxSize::SetHeight(int height) function, expected prototype:\nvoid wxSize::SetHeight(int height)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int height=(int)lua_tointeger(L,2);

		wxSize* self=(Luna< wxSize >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSize::SetHeight(int). Got : '%s'\n%s",typeid(Luna< wxSize >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetHeight(height);

		return 0;
	}

	// void wxSize::SetWidth(int width)
	static int _bind_SetWidth(lua_State *L) {
		if (!_lg_typecheck_SetWidth(L)) {
			luaL_error(L, "luna typecheck failed in void wxSize::SetWidth(int width) function, expected prototype:\nvoid wxSize::SetWidth(int width)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int width=(int)lua_tointeger(L,2);

		wxSize* self=(Luna< wxSize >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSize::SetWidth(int). Got : '%s'\n%s",typeid(Luna< wxSize >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetWidth(width);

		return 0;
	}


	// Operator binds:

};

wxSize* LunaTraits< wxSize >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxSize::_bind_ctor(L);
}

void LunaTraits< wxSize >::_bind_dtor(wxSize* obj) {
	delete obj;
}

const char LunaTraits< wxSize >::className[] = "wxSize";
const char LunaTraits< wxSize >::fullName[] = "wxSize";
const char LunaTraits< wxSize >::moduleName[] = "wx";
const char* LunaTraits< wxSize >::parents[] = {0};
const int LunaTraits< wxSize >::hash = 20268751;
const int LunaTraits< wxSize >::uniqueIDs[] = {20268751,0};

luna_RegType LunaTraits< wxSize >::methods[] = {
	{"DecBy", &luna_wrapper_wxSize::_bind_DecBy},
	{"DecTo", &luna_wrapper_wxSize::_bind_DecTo},
	{"GetHeight", &luna_wrapper_wxSize::_bind_GetHeight},
	{"GetWidth", &luna_wrapper_wxSize::_bind_GetWidth},
	{"IncBy", &luna_wrapper_wxSize::_bind_IncBy},
	{"IncTo", &luna_wrapper_wxSize::_bind_IncTo},
	{"IsFullySpecified", &luna_wrapper_wxSize::_bind_IsFullySpecified},
	{"Scale", &luna_wrapper_wxSize::_bind_Scale},
	{"Set", &luna_wrapper_wxSize::_bind_Set},
	{"SetDefaults", &luna_wrapper_wxSize::_bind_SetDefaults},
	{"SetHeight", &luna_wrapper_wxSize::_bind_SetHeight},
	{"SetWidth", &luna_wrapper_wxSize::_bind_SetWidth},
	{"dynCast", &luna_wrapper_wxSize::_bind_dynCast},
	{"__eq", &luna_wrapper_wxSize::_bind___eq},
	{"fromVoid", &luna_wrapper_wxSize::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxSize::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< wxSize >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxSize >::enumValues[] = {
	{0,0}
};



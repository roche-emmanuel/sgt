#include <plug_common.h>

class luna_wrapper_wxUIActionSimulator {
public:
	typedef Luna< wxUIActionSimulator > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,96229975) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxUIActionSimulator*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxUIActionSimulator* rhs =(Luna< wxUIActionSimulator >::check(L,2));
		wxUIActionSimulator* self=(Luna< wxUIActionSimulator >::check(L,1));
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

		wxUIActionSimulator* self= (wxUIActionSimulator*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxUIActionSimulator >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,96229975) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxUIActionSimulator >::check(L,1));
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

		wxUIActionSimulator* self=(Luna< wxUIActionSimulator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxUIActionSimulator");
		
		return luna_dynamicCast(L,converters,"wxUIActionSimulator",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_MouseMove_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MouseMove_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		if( (!(Luna< wxPoint >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MouseDown(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MouseUp(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MouseClick(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MouseDblClick(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MouseDragDrop(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>6 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( luatop>5 && (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_KeyDown(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_KeyUp(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Char(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Text(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxUIActionSimulator::wxUIActionSimulator()
	static wxUIActionSimulator* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxUIActionSimulator::wxUIActionSimulator() function, expected prototype:\nwxUIActionSimulator::wxUIActionSimulator()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxUIActionSimulator();
	}


	// Function binds:
	// bool wxUIActionSimulator::MouseMove(long x, long y)
	static int _bind_MouseMove_overload_1(lua_State *L) {
		if (!_lg_typecheck_MouseMove_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool wxUIActionSimulator::MouseMove(long x, long y) function, expected prototype:\nbool wxUIActionSimulator::MouseMove(long x, long y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long x=(long)lua_tonumber(L,2);
		long y=(long)lua_tonumber(L,3);

		wxUIActionSimulator* self=(Luna< wxUIActionSimulator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxUIActionSimulator::MouseMove(long, long). Got : '%s'\n%s",typeid(Luna< wxUIActionSimulator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->MouseMove(x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxUIActionSimulator::MouseMove(const wxPoint & point)
	static int _bind_MouseMove_overload_2(lua_State *L) {
		if (!_lg_typecheck_MouseMove_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool wxUIActionSimulator::MouseMove(const wxPoint & point) function, expected prototype:\nbool wxUIActionSimulator::MouseMove(const wxPoint & point)\nClass arguments details:\narg 1 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint* point_ptr=(Luna< wxPoint >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in wxUIActionSimulator::MouseMove function");
		}
		const wxPoint & point=*point_ptr;

		wxUIActionSimulator* self=(Luna< wxUIActionSimulator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxUIActionSimulator::MouseMove(const wxPoint &). Got : '%s'\n%s",typeid(Luna< wxUIActionSimulator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->MouseMove(point);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxUIActionSimulator::MouseMove
	static int _bind_MouseMove(lua_State *L) {
		if (_lg_typecheck_MouseMove_overload_1(L)) return _bind_MouseMove_overload_1(L);
		if (_lg_typecheck_MouseMove_overload_2(L)) return _bind_MouseMove_overload_2(L);

		luaL_error(L, "error in function MouseMove, cannot match any of the overloads for function MouseMove:\n  MouseMove(long, long)\n  MouseMove(const wxPoint &)\n");
		return 0;
	}

	// bool wxUIActionSimulator::MouseDown(int button = ::wxMOUSE_BTN_LEFT)
	static int _bind_MouseDown(lua_State *L) {
		if (!_lg_typecheck_MouseDown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxUIActionSimulator::MouseDown(int button = ::wxMOUSE_BTN_LEFT) function, expected prototype:\nbool wxUIActionSimulator::MouseDown(int button = ::wxMOUSE_BTN_LEFT)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int button=luatop>1 ? (int)lua_tointeger(L,2) : (int)::wxMOUSE_BTN_LEFT;

		wxUIActionSimulator* self=(Luna< wxUIActionSimulator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxUIActionSimulator::MouseDown(int). Got : '%s'\n%s",typeid(Luna< wxUIActionSimulator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->MouseDown(button);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxUIActionSimulator::MouseUp(int button = ::wxMOUSE_BTN_LEFT)
	static int _bind_MouseUp(lua_State *L) {
		if (!_lg_typecheck_MouseUp(L)) {
			luaL_error(L, "luna typecheck failed in bool wxUIActionSimulator::MouseUp(int button = ::wxMOUSE_BTN_LEFT) function, expected prototype:\nbool wxUIActionSimulator::MouseUp(int button = ::wxMOUSE_BTN_LEFT)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int button=luatop>1 ? (int)lua_tointeger(L,2) : (int)::wxMOUSE_BTN_LEFT;

		wxUIActionSimulator* self=(Luna< wxUIActionSimulator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxUIActionSimulator::MouseUp(int). Got : '%s'\n%s",typeid(Luna< wxUIActionSimulator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->MouseUp(button);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxUIActionSimulator::MouseClick(int button = ::wxMOUSE_BTN_LEFT)
	static int _bind_MouseClick(lua_State *L) {
		if (!_lg_typecheck_MouseClick(L)) {
			luaL_error(L, "luna typecheck failed in bool wxUIActionSimulator::MouseClick(int button = ::wxMOUSE_BTN_LEFT) function, expected prototype:\nbool wxUIActionSimulator::MouseClick(int button = ::wxMOUSE_BTN_LEFT)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int button=luatop>1 ? (int)lua_tointeger(L,2) : (int)::wxMOUSE_BTN_LEFT;

		wxUIActionSimulator* self=(Luna< wxUIActionSimulator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxUIActionSimulator::MouseClick(int). Got : '%s'\n%s",typeid(Luna< wxUIActionSimulator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->MouseClick(button);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxUIActionSimulator::MouseDblClick(int button = ::wxMOUSE_BTN_LEFT)
	static int _bind_MouseDblClick(lua_State *L) {
		if (!_lg_typecheck_MouseDblClick(L)) {
			luaL_error(L, "luna typecheck failed in bool wxUIActionSimulator::MouseDblClick(int button = ::wxMOUSE_BTN_LEFT) function, expected prototype:\nbool wxUIActionSimulator::MouseDblClick(int button = ::wxMOUSE_BTN_LEFT)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int button=luatop>1 ? (int)lua_tointeger(L,2) : (int)::wxMOUSE_BTN_LEFT;

		wxUIActionSimulator* self=(Luna< wxUIActionSimulator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxUIActionSimulator::MouseDblClick(int). Got : '%s'\n%s",typeid(Luna< wxUIActionSimulator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->MouseDblClick(button);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxUIActionSimulator::MouseDragDrop(long x1, long y1, long x2, long y2, int button = ::wxMOUSE_BTN_LEFT)
	static int _bind_MouseDragDrop(lua_State *L) {
		if (!_lg_typecheck_MouseDragDrop(L)) {
			luaL_error(L, "luna typecheck failed in bool wxUIActionSimulator::MouseDragDrop(long x1, long y1, long x2, long y2, int button = ::wxMOUSE_BTN_LEFT) function, expected prototype:\nbool wxUIActionSimulator::MouseDragDrop(long x1, long y1, long x2, long y2, int button = ::wxMOUSE_BTN_LEFT)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		long x1=(long)lua_tonumber(L,2);
		long y1=(long)lua_tonumber(L,3);
		long x2=(long)lua_tonumber(L,4);
		long y2=(long)lua_tonumber(L,5);
		int button=luatop>5 ? (int)lua_tointeger(L,6) : (int)::wxMOUSE_BTN_LEFT;

		wxUIActionSimulator* self=(Luna< wxUIActionSimulator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxUIActionSimulator::MouseDragDrop(long, long, long, long, int). Got : '%s'\n%s",typeid(Luna< wxUIActionSimulator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->MouseDragDrop(x1, y1, x2, y2, button);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxUIActionSimulator::KeyDown(int keycode, int modifiers = ::wxMOD_NONE)
	static int _bind_KeyDown(lua_State *L) {
		if (!_lg_typecheck_KeyDown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxUIActionSimulator::KeyDown(int keycode, int modifiers = ::wxMOD_NONE) function, expected prototype:\nbool wxUIActionSimulator::KeyDown(int keycode, int modifiers = ::wxMOD_NONE)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int keycode=(int)lua_tointeger(L,2);
		int modifiers=luatop>2 ? (int)lua_tointeger(L,3) : (int)::wxMOD_NONE;

		wxUIActionSimulator* self=(Luna< wxUIActionSimulator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxUIActionSimulator::KeyDown(int, int). Got : '%s'\n%s",typeid(Luna< wxUIActionSimulator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->KeyDown(keycode, modifiers);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxUIActionSimulator::KeyUp(int keycode, int modifiers = ::wxMOD_NONE)
	static int _bind_KeyUp(lua_State *L) {
		if (!_lg_typecheck_KeyUp(L)) {
			luaL_error(L, "luna typecheck failed in bool wxUIActionSimulator::KeyUp(int keycode, int modifiers = ::wxMOD_NONE) function, expected prototype:\nbool wxUIActionSimulator::KeyUp(int keycode, int modifiers = ::wxMOD_NONE)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int keycode=(int)lua_tointeger(L,2);
		int modifiers=luatop>2 ? (int)lua_tointeger(L,3) : (int)::wxMOD_NONE;

		wxUIActionSimulator* self=(Luna< wxUIActionSimulator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxUIActionSimulator::KeyUp(int, int). Got : '%s'\n%s",typeid(Luna< wxUIActionSimulator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->KeyUp(keycode, modifiers);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxUIActionSimulator::Char(int keycode, int modifiers = ::wxMOD_NONE)
	static int _bind_Char(lua_State *L) {
		if (!_lg_typecheck_Char(L)) {
			luaL_error(L, "luna typecheck failed in bool wxUIActionSimulator::Char(int keycode, int modifiers = ::wxMOD_NONE) function, expected prototype:\nbool wxUIActionSimulator::Char(int keycode, int modifiers = ::wxMOD_NONE)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int keycode=(int)lua_tointeger(L,2);
		int modifiers=luatop>2 ? (int)lua_tointeger(L,3) : (int)::wxMOD_NONE;

		wxUIActionSimulator* self=(Luna< wxUIActionSimulator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxUIActionSimulator::Char(int, int). Got : '%s'\n%s",typeid(Luna< wxUIActionSimulator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Char(keycode, modifiers);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxUIActionSimulator::Text(const wxString & text)
	static int _bind_Text(lua_State *L) {
		if (!_lg_typecheck_Text(L)) {
			luaL_error(L, "luna typecheck failed in bool wxUIActionSimulator::Text(const wxString & text) function, expected prototype:\nbool wxUIActionSimulator::Text(const wxString & text)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString text(lua_tostring(L,2),lua_objlen(L,2));

		wxUIActionSimulator* self=(Luna< wxUIActionSimulator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxUIActionSimulator::Text(const wxString &). Got : '%s'\n%s",typeid(Luna< wxUIActionSimulator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Text(text);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxUIActionSimulator* LunaTraits< wxUIActionSimulator >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxUIActionSimulator::_bind_ctor(L);
}

void LunaTraits< wxUIActionSimulator >::_bind_dtor(wxUIActionSimulator* obj) {
	delete obj;
}

const char LunaTraits< wxUIActionSimulator >::className[] = "wxUIActionSimulator";
const char LunaTraits< wxUIActionSimulator >::fullName[] = "wxUIActionSimulator";
const char LunaTraits< wxUIActionSimulator >::moduleName[] = "wx";
const char* LunaTraits< wxUIActionSimulator >::parents[] = {0};
const int LunaTraits< wxUIActionSimulator >::hash = 96229975;
const int LunaTraits< wxUIActionSimulator >::uniqueIDs[] = {96229975,0};

luna_RegType LunaTraits< wxUIActionSimulator >::methods[] = {
	{"MouseMove", &luna_wrapper_wxUIActionSimulator::_bind_MouseMove},
	{"MouseDown", &luna_wrapper_wxUIActionSimulator::_bind_MouseDown},
	{"MouseUp", &luna_wrapper_wxUIActionSimulator::_bind_MouseUp},
	{"MouseClick", &luna_wrapper_wxUIActionSimulator::_bind_MouseClick},
	{"MouseDblClick", &luna_wrapper_wxUIActionSimulator::_bind_MouseDblClick},
	{"MouseDragDrop", &luna_wrapper_wxUIActionSimulator::_bind_MouseDragDrop},
	{"KeyDown", &luna_wrapper_wxUIActionSimulator::_bind_KeyDown},
	{"KeyUp", &luna_wrapper_wxUIActionSimulator::_bind_KeyUp},
	{"Char", &luna_wrapper_wxUIActionSimulator::_bind_Char},
	{"Text", &luna_wrapper_wxUIActionSimulator::_bind_Text},
	{"dynCast", &luna_wrapper_wxUIActionSimulator::_bind_dynCast},
	{"__eq", &luna_wrapper_wxUIActionSimulator::_bind___eq},
	{"fromVoid", &luna_wrapper_wxUIActionSimulator::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxUIActionSimulator::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< wxUIActionSimulator >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxUIActionSimulator >::enumValues[] = {
	{0,0}
};



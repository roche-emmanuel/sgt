#include <plug_common.h>

#include <luna/wrappers/wrapper_wxWrapSizer.h>

class luna_wrapper_wxWrapSizer {
public:
	typedef Luna< wxWrapSizer > luna_t;

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

		wxWrapSizer* self= (wxWrapSizer*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxWrapSizer >::push(L,self,false);
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
		//wxWrapSizer* ptr= dynamic_cast< wxWrapSizer* >(Luna< wxObject >::check(L,1));
		wxWrapSizer* ptr= luna_caster< wxObject, wxWrapSizer >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxWrapSizer >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>2 ) return false;

		if( luatop>0 && (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_InformFirstDirection(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RecalcSizes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CalcMin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Clear(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Detach_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Detach_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxSizer >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Detach_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Layout(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Remove_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxSizer >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Remove_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Replace_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,2)) ) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,3)) ) ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Replace_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxSizer >(L,2)) ) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< wxObject >::checkSubType< wxSizer >(L,3)) ) ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Replace_overload_3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< wxObject >::checkSubType< wxSizerItem >(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_AddSpacer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_InformFirstDirection(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_RecalcSizes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_CalcMin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxWrapSizer::wxWrapSizer(int orient = ::wxHORIZONTAL, int flags = ::wxWRAPSIZER_DEFAULT_FLAGS)
	static wxWrapSizer* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxWrapSizer::wxWrapSizer(int orient = ::wxHORIZONTAL, int flags = ::wxWRAPSIZER_DEFAULT_FLAGS) function, expected prototype:\nwxWrapSizer::wxWrapSizer(int orient = ::wxHORIZONTAL, int flags = ::wxWRAPSIZER_DEFAULT_FLAGS)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int orient=luatop>0 ? (int)lua_tointeger(L,1) : (int)::wxHORIZONTAL;
		int flags=luatop>1 ? (int)lua_tointeger(L,2) : (int)::wxWRAPSIZER_DEFAULT_FLAGS;

		return new wxWrapSizer(orient, flags);
	}

	// wxWrapSizer::wxWrapSizer(lua_Table * data, int orient = ::wxHORIZONTAL, int flags = ::wxWRAPSIZER_DEFAULT_FLAGS)
	static wxWrapSizer* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxWrapSizer::wxWrapSizer(lua_Table * data, int orient = ::wxHORIZONTAL, int flags = ::wxWRAPSIZER_DEFAULT_FLAGS) function, expected prototype:\nwxWrapSizer::wxWrapSizer(lua_Table * data, int orient = ::wxHORIZONTAL, int flags = ::wxWRAPSIZER_DEFAULT_FLAGS)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int orient=luatop>1 ? (int)lua_tointeger(L,2) : (int)::wxHORIZONTAL;
		int flags=luatop>2 ? (int)lua_tointeger(L,3) : (int)::wxWRAPSIZER_DEFAULT_FLAGS;

		return new wrapper_wxWrapSizer(L,NULL, orient, flags);
	}

	// Overload binder for wxWrapSizer::wxWrapSizer
	static wxWrapSizer* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxWrapSizer, cannot match any of the overloads for function wxWrapSizer:\n  wxWrapSizer(int, int)\n  wxWrapSizer(lua_Table *, int, int)\n");
		return NULL;
	}


	// Function binds:
	// bool wxWrapSizer::InformFirstDirection(int direction, int size, int availableOtherDir)
	static int _bind_InformFirstDirection(lua_State *L) {
		if (!_lg_typecheck_InformFirstDirection(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWrapSizer::InformFirstDirection(int direction, int size, int availableOtherDir) function, expected prototype:\nbool wxWrapSizer::InformFirstDirection(int direction, int size, int availableOtherDir)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int direction=(int)lua_tointeger(L,2);
		int size=(int)lua_tointeger(L,3);
		int availableOtherDir=(int)lua_tointeger(L,4);

		wxWrapSizer* self=Luna< wxObject >::checkSubType< wxWrapSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWrapSizer::InformFirstDirection(int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->InformFirstDirection(direction, size, availableOtherDir);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxWrapSizer::RecalcSizes()
	static int _bind_RecalcSizes(lua_State *L) {
		if (!_lg_typecheck_RecalcSizes(L)) {
			luaL_error(L, "luna typecheck failed in void wxWrapSizer::RecalcSizes() function, expected prototype:\nvoid wxWrapSizer::RecalcSizes()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWrapSizer* self=Luna< wxObject >::checkSubType< wxWrapSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWrapSizer::RecalcSizes(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RecalcSizes();

		return 0;
	}

	// wxSize wxWrapSizer::CalcMin()
	static int _bind_CalcMin(lua_State *L) {
		if (!_lg_typecheck_CalcMin(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxWrapSizer::CalcMin() function, expected prototype:\nwxSize wxWrapSizer::CalcMin()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWrapSizer* self=Luna< wxObject >::checkSubType< wxWrapSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxWrapSizer::CalcMin(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->CalcMin();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxClassInfo * wxWrapSizer::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxWrapSizer::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxWrapSizer::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWrapSizer* self=Luna< wxObject >::checkSubType< wxWrapSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxWrapSizer::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxWrapSizer::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// void wxWrapSizer::base_Clear(bool delete_windows = false)
	static int _bind_base_Clear(lua_State *L) {
		if (!_lg_typecheck_base_Clear(L)) {
			luaL_error(L, "luna typecheck failed in void wxWrapSizer::base_Clear(bool delete_windows = false) function, expected prototype:\nvoid wxWrapSizer::base_Clear(bool delete_windows = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool delete_windows=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)false;

		wxWrapSizer* self=Luna< wxObject >::checkSubType< wxWrapSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWrapSizer::base_Clear(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWrapSizer::Clear(delete_windows);

		return 0;
	}

	// bool wxWrapSizer::base_Detach(wxWindow * window)
	static int _bind_base_Detach_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_Detach_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWrapSizer::base_Detach(wxWindow * window) function, expected prototype:\nbool wxWrapSizer::base_Detach(wxWindow * window)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* window=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxWrapSizer* self=Luna< wxObject >::checkSubType< wxWrapSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWrapSizer::base_Detach(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxWrapSizer::Detach(window);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWrapSizer::base_Detach(wxSizer * sizer)
	static int _bind_base_Detach_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_Detach_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWrapSizer::base_Detach(wxSizer * sizer) function, expected prototype:\nbool wxWrapSizer::base_Detach(wxSizer * sizer)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxSizer* sizer=(Luna< wxObject >::checkSubType< wxSizer >(L,2));

		wxWrapSizer* self=Luna< wxObject >::checkSubType< wxWrapSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWrapSizer::base_Detach(wxSizer *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxWrapSizer::Detach(sizer);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWrapSizer::base_Detach(int index)
	static int _bind_base_Detach_overload_3(lua_State *L) {
		if (!_lg_typecheck_base_Detach_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWrapSizer::base_Detach(int index) function, expected prototype:\nbool wxWrapSizer::base_Detach(int index)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);

		wxWrapSizer* self=Luna< wxObject >::checkSubType< wxWrapSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWrapSizer::base_Detach(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxWrapSizer::Detach(index);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxWrapSizer::base_Detach
	static int _bind_base_Detach(lua_State *L) {
		if (_lg_typecheck_base_Detach_overload_1(L)) return _bind_base_Detach_overload_1(L);
		if (_lg_typecheck_base_Detach_overload_2(L)) return _bind_base_Detach_overload_2(L);
		if (_lg_typecheck_base_Detach_overload_3(L)) return _bind_base_Detach_overload_3(L);

		luaL_error(L, "error in function base_Detach, cannot match any of the overloads for function base_Detach:\n  base_Detach(wxWindow *)\n  base_Detach(wxSizer *)\n  base_Detach(int)\n");
		return 0;
	}

	// void wxWrapSizer::base_Layout()
	static int _bind_base_Layout(lua_State *L) {
		if (!_lg_typecheck_base_Layout(L)) {
			luaL_error(L, "luna typecheck failed in void wxWrapSizer::base_Layout() function, expected prototype:\nvoid wxWrapSizer::base_Layout()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWrapSizer* self=Luna< wxObject >::checkSubType< wxWrapSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWrapSizer::base_Layout(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWrapSizer::Layout();

		return 0;
	}

	// bool wxWrapSizer::base_Remove(wxSizer * sizer)
	static int _bind_base_Remove_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_Remove_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWrapSizer::base_Remove(wxSizer * sizer) function, expected prototype:\nbool wxWrapSizer::base_Remove(wxSizer * sizer)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxSizer* sizer=(Luna< wxObject >::checkSubType< wxSizer >(L,2));

		wxWrapSizer* self=Luna< wxObject >::checkSubType< wxWrapSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWrapSizer::base_Remove(wxSizer *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxWrapSizer::Remove(sizer);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWrapSizer::base_Remove(int index)
	static int _bind_base_Remove_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_Remove_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWrapSizer::base_Remove(int index) function, expected prototype:\nbool wxWrapSizer::base_Remove(int index)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);

		wxWrapSizer* self=Luna< wxObject >::checkSubType< wxWrapSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWrapSizer::base_Remove(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxWrapSizer::Remove(index);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxWrapSizer::base_Remove
	static int _bind_base_Remove(lua_State *L) {
		if (_lg_typecheck_base_Remove_overload_1(L)) return _bind_base_Remove_overload_1(L);
		if (_lg_typecheck_base_Remove_overload_2(L)) return _bind_base_Remove_overload_2(L);

		luaL_error(L, "error in function base_Remove, cannot match any of the overloads for function base_Remove:\n  base_Remove(wxSizer *)\n  base_Remove(int)\n");
		return 0;
	}

	// bool wxWrapSizer::base_Replace(wxWindow * oldwin, wxWindow * newwin, bool recursive = false)
	static int _bind_base_Replace_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_Replace_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWrapSizer::base_Replace(wxWindow * oldwin, wxWindow * newwin, bool recursive = false) function, expected prototype:\nbool wxWrapSizer::base_Replace(wxWindow * oldwin, wxWindow * newwin, bool recursive = false)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* oldwin=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		wxWindow* newwin=(Luna< wxObject >::checkSubType< wxWindow >(L,3));
		bool recursive=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)false;

		wxWrapSizer* self=Luna< wxObject >::checkSubType< wxWrapSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWrapSizer::base_Replace(wxWindow *, wxWindow *, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxWrapSizer::Replace(oldwin, newwin, recursive);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWrapSizer::base_Replace(wxSizer * oldsz, wxSizer * newsz, bool recursive = false)
	static int _bind_base_Replace_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_Replace_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWrapSizer::base_Replace(wxSizer * oldsz, wxSizer * newsz, bool recursive = false) function, expected prototype:\nbool wxWrapSizer::base_Replace(wxSizer * oldsz, wxSizer * newsz, bool recursive = false)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxSizer* oldsz=(Luna< wxObject >::checkSubType< wxSizer >(L,2));
		wxSizer* newsz=(Luna< wxObject >::checkSubType< wxSizer >(L,3));
		bool recursive=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)false;

		wxWrapSizer* self=Luna< wxObject >::checkSubType< wxWrapSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWrapSizer::base_Replace(wxSizer *, wxSizer *, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxWrapSizer::Replace(oldsz, newsz, recursive);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWrapSizer::base_Replace(size_t index, wxSizerItem * newitem)
	static int _bind_base_Replace_overload_3(lua_State *L) {
		if (!_lg_typecheck_base_Replace_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWrapSizer::base_Replace(size_t index, wxSizerItem * newitem) function, expected prototype:\nbool wxWrapSizer::base_Replace(size_t index, wxSizerItem * newitem)\nClass arguments details:\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t index=(size_t)lua_tointeger(L,2);
		wxSizerItem* newitem=(Luna< wxObject >::checkSubType< wxSizerItem >(L,3));

		wxWrapSizer* self=Luna< wxObject >::checkSubType< wxWrapSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWrapSizer::base_Replace(size_t, wxSizerItem *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxWrapSizer::Replace(index, newitem);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxWrapSizer::base_Replace
	static int _bind_base_Replace(lua_State *L) {
		if (_lg_typecheck_base_Replace_overload_1(L)) return _bind_base_Replace_overload_1(L);
		if (_lg_typecheck_base_Replace_overload_2(L)) return _bind_base_Replace_overload_2(L);
		if (_lg_typecheck_base_Replace_overload_3(L)) return _bind_base_Replace_overload_3(L);

		luaL_error(L, "error in function base_Replace, cannot match any of the overloads for function base_Replace:\n  base_Replace(wxWindow *, wxWindow *, bool)\n  base_Replace(wxSizer *, wxSizer *, bool)\n  base_Replace(size_t, wxSizerItem *)\n");
		return 0;
	}

	// wxSizerItem * wxWrapSizer::base_AddSpacer(int size)
	static int _bind_base_AddSpacer(lua_State *L) {
		if (!_lg_typecheck_base_AddSpacer(L)) {
			luaL_error(L, "luna typecheck failed in wxSizerItem * wxWrapSizer::base_AddSpacer(int size) function, expected prototype:\nwxSizerItem * wxWrapSizer::base_AddSpacer(int size)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int size=(int)lua_tointeger(L,2);

		wxWrapSizer* self=Luna< wxObject >::checkSubType< wxWrapSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSizerItem * wxWrapSizer::base_AddSpacer(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSizerItem * lret = self->wxWrapSizer::AddSpacer(size);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerItem >::push(L,lret,false);

		return 1;
	}

	// bool wxWrapSizer::base_InformFirstDirection(int direction, int size, int availableOtherDir)
	static int _bind_base_InformFirstDirection(lua_State *L) {
		if (!_lg_typecheck_base_InformFirstDirection(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWrapSizer::base_InformFirstDirection(int direction, int size, int availableOtherDir) function, expected prototype:\nbool wxWrapSizer::base_InformFirstDirection(int direction, int size, int availableOtherDir)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int direction=(int)lua_tointeger(L,2);
		int size=(int)lua_tointeger(L,3);
		int availableOtherDir=(int)lua_tointeger(L,4);

		wxWrapSizer* self=Luna< wxObject >::checkSubType< wxWrapSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWrapSizer::base_InformFirstDirection(int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxWrapSizer::InformFirstDirection(direction, size, availableOtherDir);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxWrapSizer::base_RecalcSizes()
	static int _bind_base_RecalcSizes(lua_State *L) {
		if (!_lg_typecheck_base_RecalcSizes(L)) {
			luaL_error(L, "luna typecheck failed in void wxWrapSizer::base_RecalcSizes() function, expected prototype:\nvoid wxWrapSizer::base_RecalcSizes()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWrapSizer* self=Luna< wxObject >::checkSubType< wxWrapSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWrapSizer::base_RecalcSizes(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWrapSizer::RecalcSizes();

		return 0;
	}

	// wxSize wxWrapSizer::base_CalcMin()
	static int _bind_base_CalcMin(lua_State *L) {
		if (!_lg_typecheck_base_CalcMin(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxWrapSizer::base_CalcMin() function, expected prototype:\nwxSize wxWrapSizer::base_CalcMin()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWrapSizer* self=Luna< wxObject >::checkSubType< wxWrapSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxWrapSizer::base_CalcMin(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxWrapSizer::CalcMin();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

wxWrapSizer* LunaTraits< wxWrapSizer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxWrapSizer::_bind_ctor(L);
}

void LunaTraits< wxWrapSizer >::_bind_dtor(wxWrapSizer* obj) {
	delete obj;
}

const char LunaTraits< wxWrapSizer >::className[] = "wxWrapSizer";
const char LunaTraits< wxWrapSizer >::fullName[] = "wxWrapSizer";
const char LunaTraits< wxWrapSizer >::moduleName[] = "wx";
const char* LunaTraits< wxWrapSizer >::parents[] = {"wx.wxBoxSizer", 0};
const int LunaTraits< wxWrapSizer >::hash = 76694328;
const int LunaTraits< wxWrapSizer >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxWrapSizer >::methods[] = {
	{"InformFirstDirection", &luna_wrapper_wxWrapSizer::_bind_InformFirstDirection},
	{"RecalcSizes", &luna_wrapper_wxWrapSizer::_bind_RecalcSizes},
	{"CalcMin", &luna_wrapper_wxWrapSizer::_bind_CalcMin},
	{"base_GetClassInfo", &luna_wrapper_wxWrapSizer::_bind_base_GetClassInfo},
	{"base_Clear", &luna_wrapper_wxWrapSizer::_bind_base_Clear},
	{"base_Detach", &luna_wrapper_wxWrapSizer::_bind_base_Detach},
	{"base_Layout", &luna_wrapper_wxWrapSizer::_bind_base_Layout},
	{"base_Remove", &luna_wrapper_wxWrapSizer::_bind_base_Remove},
	{"base_Replace", &luna_wrapper_wxWrapSizer::_bind_base_Replace},
	{"base_AddSpacer", &luna_wrapper_wxWrapSizer::_bind_base_AddSpacer},
	{"base_InformFirstDirection", &luna_wrapper_wxWrapSizer::_bind_base_InformFirstDirection},
	{"base_RecalcSizes", &luna_wrapper_wxWrapSizer::_bind_base_RecalcSizes},
	{"base_CalcMin", &luna_wrapper_wxWrapSizer::_bind_base_CalcMin},
	{"fromVoid", &luna_wrapper_wxWrapSizer::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxWrapSizer::_bind_asVoid},
	{"getTable", &luna_wrapper_wxWrapSizer::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxWrapSizer >::converters[] = {
	{"wxObject", &luna_wrapper_wxWrapSizer::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxWrapSizer >::enumValues[] = {
	{0,0}
};



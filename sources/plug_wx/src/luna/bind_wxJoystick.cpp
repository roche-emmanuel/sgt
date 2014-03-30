#include <plug_common.h>

#include <luna/wrappers/wrapper_wxJoystick.h>

class luna_wrapper_wxJoystick {
public:
	typedef Luna< wxJoystick > luna_t;

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

		wxJoystick* self= (wxJoystick*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxJoystick >::push(L,self,false);
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
		//wxJoystick* ptr= dynamic_cast< wxJoystick* >(Luna< wxObject >::check(L,1));
		wxJoystick* ptr= luna_caster< wxObject, wxJoystick >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxJoystick >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetButtonState_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetButtonState_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetManufacturerId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMovementThreshold(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetNumberAxes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetNumberButtons(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPOVCTSPosition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPOVPosition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPollingMax(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPollingMin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPosition_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPosition_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetProductId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetProductName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetRudderMax(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetRudderMin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetRudderPosition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetUMax(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetUMin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetUPosition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetVMax(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetVMin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetVPosition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetXMax(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetXMin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetYMax(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetYMin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetZMax(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetZMin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetZPosition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasPOV(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasPOV4Dir(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasPOVCTS(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasRudder(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasU(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasV(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasZ(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsOk(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ReleaseCapture(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetCapture(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMovementThreshold(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetNumberJoysticks(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxJoystick::wxJoystick(int joystick = ::wxJOYSTICK1)
	static wxJoystick* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxJoystick::wxJoystick(int joystick = ::wxJOYSTICK1) function, expected prototype:\nwxJoystick::wxJoystick(int joystick = ::wxJOYSTICK1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int joystick=luatop>0 ? (int)lua_tointeger(L,1) : (int)::wxJOYSTICK1;

		return new wxJoystick(joystick);
	}

	// wxJoystick::wxJoystick(lua_Table * data, int joystick = ::wxJOYSTICK1)
	static wxJoystick* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxJoystick::wxJoystick(lua_Table * data, int joystick = ::wxJOYSTICK1) function, expected prototype:\nwxJoystick::wxJoystick(lua_Table * data, int joystick = ::wxJOYSTICK1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int joystick=luatop>1 ? (int)lua_tointeger(L,2) : (int)::wxJOYSTICK1;

		return new wrapper_wxJoystick(L,NULL, joystick);
	}

	// Overload binder for wxJoystick::wxJoystick
	static wxJoystick* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxJoystick, cannot match any of the overloads for function wxJoystick:\n  wxJoystick(int)\n  wxJoystick(lua_Table *, int)\n");
		return NULL;
	}


	// Function binds:
	// int wxJoystick::GetButtonState() const
	static int _bind_GetButtonState_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetButtonState_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in int wxJoystick::GetButtonState() const function, expected prototype:\nint wxJoystick::GetButtonState() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxJoystick* self=Luna< wxObject >::checkSubType< wxJoystick >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxJoystick::GetButtonState() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetButtonState();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxJoystick::GetButtonState(unsigned int id) const
	static int _bind_GetButtonState_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetButtonState_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool wxJoystick::GetButtonState(unsigned int id) const function, expected prototype:\nbool wxJoystick::GetButtonState(unsigned int id) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int id=(unsigned int)lua_tointeger(L,2);

		wxJoystick* self=Luna< wxObject >::checkSubType< wxJoystick >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxJoystick::GetButtonState(unsigned int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GetButtonState(id);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxJoystick::GetButtonState
	static int _bind_GetButtonState(lua_State *L) {
		if (_lg_typecheck_GetButtonState_overload_1(L)) return _bind_GetButtonState_overload_1(L);
		if (_lg_typecheck_GetButtonState_overload_2(L)) return _bind_GetButtonState_overload_2(L);

		luaL_error(L, "error in function GetButtonState, cannot match any of the overloads for function GetButtonState:\n  GetButtonState()\n  GetButtonState(unsigned int)\n");
		return 0;
	}

	// int wxJoystick::GetManufacturerId() const
	static int _bind_GetManufacturerId(lua_State *L) {
		if (!_lg_typecheck_GetManufacturerId(L)) {
			luaL_error(L, "luna typecheck failed in int wxJoystick::GetManufacturerId() const function, expected prototype:\nint wxJoystick::GetManufacturerId() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxJoystick* self=Luna< wxObject >::checkSubType< wxJoystick >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxJoystick::GetManufacturerId() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetManufacturerId();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxJoystick::GetMovementThreshold() const
	static int _bind_GetMovementThreshold(lua_State *L) {
		if (!_lg_typecheck_GetMovementThreshold(L)) {
			luaL_error(L, "luna typecheck failed in int wxJoystick::GetMovementThreshold() const function, expected prototype:\nint wxJoystick::GetMovementThreshold() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxJoystick* self=Luna< wxObject >::checkSubType< wxJoystick >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxJoystick::GetMovementThreshold() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetMovementThreshold();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxJoystick::GetNumberAxes() const
	static int _bind_GetNumberAxes(lua_State *L) {
		if (!_lg_typecheck_GetNumberAxes(L)) {
			luaL_error(L, "luna typecheck failed in int wxJoystick::GetNumberAxes() const function, expected prototype:\nint wxJoystick::GetNumberAxes() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxJoystick* self=Luna< wxObject >::checkSubType< wxJoystick >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxJoystick::GetNumberAxes() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetNumberAxes();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxJoystick::GetNumberButtons() const
	static int _bind_GetNumberButtons(lua_State *L) {
		if (!_lg_typecheck_GetNumberButtons(L)) {
			luaL_error(L, "luna typecheck failed in int wxJoystick::GetNumberButtons() const function, expected prototype:\nint wxJoystick::GetNumberButtons() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxJoystick* self=Luna< wxObject >::checkSubType< wxJoystick >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxJoystick::GetNumberButtons() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetNumberButtons();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxJoystick::GetPOVCTSPosition() const
	static int _bind_GetPOVCTSPosition(lua_State *L) {
		if (!_lg_typecheck_GetPOVCTSPosition(L)) {
			luaL_error(L, "luna typecheck failed in int wxJoystick::GetPOVCTSPosition() const function, expected prototype:\nint wxJoystick::GetPOVCTSPosition() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxJoystick* self=Luna< wxObject >::checkSubType< wxJoystick >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxJoystick::GetPOVCTSPosition() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetPOVCTSPosition();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxJoystick::GetPOVPosition() const
	static int _bind_GetPOVPosition(lua_State *L) {
		if (!_lg_typecheck_GetPOVPosition(L)) {
			luaL_error(L, "luna typecheck failed in int wxJoystick::GetPOVPosition() const function, expected prototype:\nint wxJoystick::GetPOVPosition() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxJoystick* self=Luna< wxObject >::checkSubType< wxJoystick >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxJoystick::GetPOVPosition() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetPOVPosition();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxJoystick::GetPollingMax() const
	static int _bind_GetPollingMax(lua_State *L) {
		if (!_lg_typecheck_GetPollingMax(L)) {
			luaL_error(L, "luna typecheck failed in int wxJoystick::GetPollingMax() const function, expected prototype:\nint wxJoystick::GetPollingMax() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxJoystick* self=Luna< wxObject >::checkSubType< wxJoystick >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxJoystick::GetPollingMax() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetPollingMax();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxJoystick::GetPollingMin() const
	static int _bind_GetPollingMin(lua_State *L) {
		if (!_lg_typecheck_GetPollingMin(L)) {
			luaL_error(L, "luna typecheck failed in int wxJoystick::GetPollingMin() const function, expected prototype:\nint wxJoystick::GetPollingMin() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxJoystick* self=Luna< wxObject >::checkSubType< wxJoystick >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxJoystick::GetPollingMin() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetPollingMin();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxPoint wxJoystick::GetPosition() const
	static int _bind_GetPosition_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetPosition_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxPoint wxJoystick::GetPosition() const function, expected prototype:\nwxPoint wxJoystick::GetPosition() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxJoystick* self=Luna< wxObject >::checkSubType< wxJoystick >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPoint wxJoystick::GetPosition() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPoint stack_lret = self->GetPosition();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// int wxJoystick::GetPosition(unsigned int axis) const
	static int _bind_GetPosition_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetPosition_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in int wxJoystick::GetPosition(unsigned int axis) const function, expected prototype:\nint wxJoystick::GetPosition(unsigned int axis) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int axis=(unsigned int)lua_tointeger(L,2);

		wxJoystick* self=Luna< wxObject >::checkSubType< wxJoystick >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxJoystick::GetPosition(unsigned int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetPosition(axis);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for wxJoystick::GetPosition
	static int _bind_GetPosition(lua_State *L) {
		if (_lg_typecheck_GetPosition_overload_1(L)) return _bind_GetPosition_overload_1(L);
		if (_lg_typecheck_GetPosition_overload_2(L)) return _bind_GetPosition_overload_2(L);

		luaL_error(L, "error in function GetPosition, cannot match any of the overloads for function GetPosition:\n  GetPosition()\n  GetPosition(unsigned int)\n");
		return 0;
	}

	// int wxJoystick::GetProductId() const
	static int _bind_GetProductId(lua_State *L) {
		if (!_lg_typecheck_GetProductId(L)) {
			luaL_error(L, "luna typecheck failed in int wxJoystick::GetProductId() const function, expected prototype:\nint wxJoystick::GetProductId() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxJoystick* self=Luna< wxObject >::checkSubType< wxJoystick >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxJoystick::GetProductId() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetProductId();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxJoystick::GetProductName() const
	static int _bind_GetProductName(lua_State *L) {
		if (!_lg_typecheck_GetProductName(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxJoystick::GetProductName() const function, expected prototype:\nwxString wxJoystick::GetProductName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxJoystick* self=Luna< wxObject >::checkSubType< wxJoystick >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxJoystick::GetProductName() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetProductName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// int wxJoystick::GetRudderMax() const
	static int _bind_GetRudderMax(lua_State *L) {
		if (!_lg_typecheck_GetRudderMax(L)) {
			luaL_error(L, "luna typecheck failed in int wxJoystick::GetRudderMax() const function, expected prototype:\nint wxJoystick::GetRudderMax() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxJoystick* self=Luna< wxObject >::checkSubType< wxJoystick >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxJoystick::GetRudderMax() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetRudderMax();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxJoystick::GetRudderMin() const
	static int _bind_GetRudderMin(lua_State *L) {
		if (!_lg_typecheck_GetRudderMin(L)) {
			luaL_error(L, "luna typecheck failed in int wxJoystick::GetRudderMin() const function, expected prototype:\nint wxJoystick::GetRudderMin() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxJoystick* self=Luna< wxObject >::checkSubType< wxJoystick >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxJoystick::GetRudderMin() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetRudderMin();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxJoystick::GetRudderPosition() const
	static int _bind_GetRudderPosition(lua_State *L) {
		if (!_lg_typecheck_GetRudderPosition(L)) {
			luaL_error(L, "luna typecheck failed in int wxJoystick::GetRudderPosition() const function, expected prototype:\nint wxJoystick::GetRudderPosition() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxJoystick* self=Luna< wxObject >::checkSubType< wxJoystick >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxJoystick::GetRudderPosition() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetRudderPosition();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxJoystick::GetUMax() const
	static int _bind_GetUMax(lua_State *L) {
		if (!_lg_typecheck_GetUMax(L)) {
			luaL_error(L, "luna typecheck failed in int wxJoystick::GetUMax() const function, expected prototype:\nint wxJoystick::GetUMax() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxJoystick* self=Luna< wxObject >::checkSubType< wxJoystick >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxJoystick::GetUMax() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetUMax();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxJoystick::GetUMin() const
	static int _bind_GetUMin(lua_State *L) {
		if (!_lg_typecheck_GetUMin(L)) {
			luaL_error(L, "luna typecheck failed in int wxJoystick::GetUMin() const function, expected prototype:\nint wxJoystick::GetUMin() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxJoystick* self=Luna< wxObject >::checkSubType< wxJoystick >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxJoystick::GetUMin() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetUMin();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxJoystick::GetUPosition() const
	static int _bind_GetUPosition(lua_State *L) {
		if (!_lg_typecheck_GetUPosition(L)) {
			luaL_error(L, "luna typecheck failed in int wxJoystick::GetUPosition() const function, expected prototype:\nint wxJoystick::GetUPosition() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxJoystick* self=Luna< wxObject >::checkSubType< wxJoystick >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxJoystick::GetUPosition() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetUPosition();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxJoystick::GetVMax() const
	static int _bind_GetVMax(lua_State *L) {
		if (!_lg_typecheck_GetVMax(L)) {
			luaL_error(L, "luna typecheck failed in int wxJoystick::GetVMax() const function, expected prototype:\nint wxJoystick::GetVMax() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxJoystick* self=Luna< wxObject >::checkSubType< wxJoystick >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxJoystick::GetVMax() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetVMax();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxJoystick::GetVMin() const
	static int _bind_GetVMin(lua_State *L) {
		if (!_lg_typecheck_GetVMin(L)) {
			luaL_error(L, "luna typecheck failed in int wxJoystick::GetVMin() const function, expected prototype:\nint wxJoystick::GetVMin() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxJoystick* self=Luna< wxObject >::checkSubType< wxJoystick >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxJoystick::GetVMin() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetVMin();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxJoystick::GetVPosition() const
	static int _bind_GetVPosition(lua_State *L) {
		if (!_lg_typecheck_GetVPosition(L)) {
			luaL_error(L, "luna typecheck failed in int wxJoystick::GetVPosition() const function, expected prototype:\nint wxJoystick::GetVPosition() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxJoystick* self=Luna< wxObject >::checkSubType< wxJoystick >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxJoystick::GetVPosition() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetVPosition();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxJoystick::GetXMax() const
	static int _bind_GetXMax(lua_State *L) {
		if (!_lg_typecheck_GetXMax(L)) {
			luaL_error(L, "luna typecheck failed in int wxJoystick::GetXMax() const function, expected prototype:\nint wxJoystick::GetXMax() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxJoystick* self=Luna< wxObject >::checkSubType< wxJoystick >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxJoystick::GetXMax() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetXMax();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxJoystick::GetXMin() const
	static int _bind_GetXMin(lua_State *L) {
		if (!_lg_typecheck_GetXMin(L)) {
			luaL_error(L, "luna typecheck failed in int wxJoystick::GetXMin() const function, expected prototype:\nint wxJoystick::GetXMin() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxJoystick* self=Luna< wxObject >::checkSubType< wxJoystick >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxJoystick::GetXMin() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetXMin();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxJoystick::GetYMax() const
	static int _bind_GetYMax(lua_State *L) {
		if (!_lg_typecheck_GetYMax(L)) {
			luaL_error(L, "luna typecheck failed in int wxJoystick::GetYMax() const function, expected prototype:\nint wxJoystick::GetYMax() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxJoystick* self=Luna< wxObject >::checkSubType< wxJoystick >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxJoystick::GetYMax() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetYMax();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxJoystick::GetYMin() const
	static int _bind_GetYMin(lua_State *L) {
		if (!_lg_typecheck_GetYMin(L)) {
			luaL_error(L, "luna typecheck failed in int wxJoystick::GetYMin() const function, expected prototype:\nint wxJoystick::GetYMin() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxJoystick* self=Luna< wxObject >::checkSubType< wxJoystick >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxJoystick::GetYMin() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetYMin();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxJoystick::GetZMax() const
	static int _bind_GetZMax(lua_State *L) {
		if (!_lg_typecheck_GetZMax(L)) {
			luaL_error(L, "luna typecheck failed in int wxJoystick::GetZMax() const function, expected prototype:\nint wxJoystick::GetZMax() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxJoystick* self=Luna< wxObject >::checkSubType< wxJoystick >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxJoystick::GetZMax() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetZMax();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxJoystick::GetZMin() const
	static int _bind_GetZMin(lua_State *L) {
		if (!_lg_typecheck_GetZMin(L)) {
			luaL_error(L, "luna typecheck failed in int wxJoystick::GetZMin() const function, expected prototype:\nint wxJoystick::GetZMin() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxJoystick* self=Luna< wxObject >::checkSubType< wxJoystick >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxJoystick::GetZMin() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetZMin();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxJoystick::GetZPosition() const
	static int _bind_GetZPosition(lua_State *L) {
		if (!_lg_typecheck_GetZPosition(L)) {
			luaL_error(L, "luna typecheck failed in int wxJoystick::GetZPosition() const function, expected prototype:\nint wxJoystick::GetZPosition() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxJoystick* self=Luna< wxObject >::checkSubType< wxJoystick >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxJoystick::GetZPosition() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetZPosition();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxJoystick::HasPOV() const
	static int _bind_HasPOV(lua_State *L) {
		if (!_lg_typecheck_HasPOV(L)) {
			luaL_error(L, "luna typecheck failed in bool wxJoystick::HasPOV() const function, expected prototype:\nbool wxJoystick::HasPOV() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxJoystick* self=Luna< wxObject >::checkSubType< wxJoystick >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxJoystick::HasPOV() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasPOV();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxJoystick::HasPOV4Dir() const
	static int _bind_HasPOV4Dir(lua_State *L) {
		if (!_lg_typecheck_HasPOV4Dir(L)) {
			luaL_error(L, "luna typecheck failed in bool wxJoystick::HasPOV4Dir() const function, expected prototype:\nbool wxJoystick::HasPOV4Dir() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxJoystick* self=Luna< wxObject >::checkSubType< wxJoystick >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxJoystick::HasPOV4Dir() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasPOV4Dir();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxJoystick::HasPOVCTS() const
	static int _bind_HasPOVCTS(lua_State *L) {
		if (!_lg_typecheck_HasPOVCTS(L)) {
			luaL_error(L, "luna typecheck failed in bool wxJoystick::HasPOVCTS() const function, expected prototype:\nbool wxJoystick::HasPOVCTS() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxJoystick* self=Luna< wxObject >::checkSubType< wxJoystick >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxJoystick::HasPOVCTS() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasPOVCTS();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxJoystick::HasRudder() const
	static int _bind_HasRudder(lua_State *L) {
		if (!_lg_typecheck_HasRudder(L)) {
			luaL_error(L, "luna typecheck failed in bool wxJoystick::HasRudder() const function, expected prototype:\nbool wxJoystick::HasRudder() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxJoystick* self=Luna< wxObject >::checkSubType< wxJoystick >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxJoystick::HasRudder() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasRudder();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxJoystick::HasU() const
	static int _bind_HasU(lua_State *L) {
		if (!_lg_typecheck_HasU(L)) {
			luaL_error(L, "luna typecheck failed in bool wxJoystick::HasU() const function, expected prototype:\nbool wxJoystick::HasU() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxJoystick* self=Luna< wxObject >::checkSubType< wxJoystick >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxJoystick::HasU() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasU();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxJoystick::HasV() const
	static int _bind_HasV(lua_State *L) {
		if (!_lg_typecheck_HasV(L)) {
			luaL_error(L, "luna typecheck failed in bool wxJoystick::HasV() const function, expected prototype:\nbool wxJoystick::HasV() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxJoystick* self=Luna< wxObject >::checkSubType< wxJoystick >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxJoystick::HasV() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasV();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxJoystick::HasZ() const
	static int _bind_HasZ(lua_State *L) {
		if (!_lg_typecheck_HasZ(L)) {
			luaL_error(L, "luna typecheck failed in bool wxJoystick::HasZ() const function, expected prototype:\nbool wxJoystick::HasZ() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxJoystick* self=Luna< wxObject >::checkSubType< wxJoystick >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxJoystick::HasZ() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasZ();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxJoystick::IsOk() const
	static int _bind_IsOk(lua_State *L) {
		if (!_lg_typecheck_IsOk(L)) {
			luaL_error(L, "luna typecheck failed in bool wxJoystick::IsOk() const function, expected prototype:\nbool wxJoystick::IsOk() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxJoystick* self=Luna< wxObject >::checkSubType< wxJoystick >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxJoystick::IsOk() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsOk();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxJoystick::ReleaseCapture()
	static int _bind_ReleaseCapture(lua_State *L) {
		if (!_lg_typecheck_ReleaseCapture(L)) {
			luaL_error(L, "luna typecheck failed in bool wxJoystick::ReleaseCapture() function, expected prototype:\nbool wxJoystick::ReleaseCapture()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxJoystick* self=Luna< wxObject >::checkSubType< wxJoystick >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxJoystick::ReleaseCapture(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ReleaseCapture();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxJoystick::SetCapture(wxWindow * win, int pollingFreq = 0)
	static int _bind_SetCapture(lua_State *L) {
		if (!_lg_typecheck_SetCapture(L)) {
			luaL_error(L, "luna typecheck failed in bool wxJoystick::SetCapture(wxWindow * win, int pollingFreq = 0) function, expected prototype:\nbool wxJoystick::SetCapture(wxWindow * win, int pollingFreq = 0)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* win=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		int pollingFreq=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;

		wxJoystick* self=Luna< wxObject >::checkSubType< wxJoystick >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxJoystick::SetCapture(wxWindow *, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetCapture(win, pollingFreq);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxJoystick::SetMovementThreshold(int threshold)
	static int _bind_SetMovementThreshold(lua_State *L) {
		if (!_lg_typecheck_SetMovementThreshold(L)) {
			luaL_error(L, "luna typecheck failed in void wxJoystick::SetMovementThreshold(int threshold) function, expected prototype:\nvoid wxJoystick::SetMovementThreshold(int threshold)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int threshold=(int)lua_tointeger(L,2);

		wxJoystick* self=Luna< wxObject >::checkSubType< wxJoystick >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxJoystick::SetMovementThreshold(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetMovementThreshold(threshold);

		return 0;
	}

	// static int wxJoystick::GetNumberJoysticks()
	static int _bind_GetNumberJoysticks(lua_State *L) {
		if (!_lg_typecheck_GetNumberJoysticks(L)) {
			luaL_error(L, "luna typecheck failed in static int wxJoystick::GetNumberJoysticks() function, expected prototype:\nstatic int wxJoystick::GetNumberJoysticks()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		int lret = wxJoystick::GetNumberJoysticks();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxClassInfo * wxJoystick::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxJoystick::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxJoystick::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxJoystick* self=Luna< wxObject >::checkSubType< wxJoystick >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxJoystick::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxJoystick::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxJoystick* LunaTraits< wxJoystick >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxJoystick::_bind_ctor(L);
}

void LunaTraits< wxJoystick >::_bind_dtor(wxJoystick* obj) {
	delete obj;
}

const char LunaTraits< wxJoystick >::className[] = "wxJoystick";
const char LunaTraits< wxJoystick >::fullName[] = "wxJoystick";
const char LunaTraits< wxJoystick >::moduleName[] = "wx";
const char* LunaTraits< wxJoystick >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxJoystick >::hash = 15247726;
const int LunaTraits< wxJoystick >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxJoystick >::methods[] = {
	{"GetButtonState", &luna_wrapper_wxJoystick::_bind_GetButtonState},
	{"GetManufacturerId", &luna_wrapper_wxJoystick::_bind_GetManufacturerId},
	{"GetMovementThreshold", &luna_wrapper_wxJoystick::_bind_GetMovementThreshold},
	{"GetNumberAxes", &luna_wrapper_wxJoystick::_bind_GetNumberAxes},
	{"GetNumberButtons", &luna_wrapper_wxJoystick::_bind_GetNumberButtons},
	{"GetPOVCTSPosition", &luna_wrapper_wxJoystick::_bind_GetPOVCTSPosition},
	{"GetPOVPosition", &luna_wrapper_wxJoystick::_bind_GetPOVPosition},
	{"GetPollingMax", &luna_wrapper_wxJoystick::_bind_GetPollingMax},
	{"GetPollingMin", &luna_wrapper_wxJoystick::_bind_GetPollingMin},
	{"GetPosition", &luna_wrapper_wxJoystick::_bind_GetPosition},
	{"GetProductId", &luna_wrapper_wxJoystick::_bind_GetProductId},
	{"GetProductName", &luna_wrapper_wxJoystick::_bind_GetProductName},
	{"GetRudderMax", &luna_wrapper_wxJoystick::_bind_GetRudderMax},
	{"GetRudderMin", &luna_wrapper_wxJoystick::_bind_GetRudderMin},
	{"GetRudderPosition", &luna_wrapper_wxJoystick::_bind_GetRudderPosition},
	{"GetUMax", &luna_wrapper_wxJoystick::_bind_GetUMax},
	{"GetUMin", &luna_wrapper_wxJoystick::_bind_GetUMin},
	{"GetUPosition", &luna_wrapper_wxJoystick::_bind_GetUPosition},
	{"GetVMax", &luna_wrapper_wxJoystick::_bind_GetVMax},
	{"GetVMin", &luna_wrapper_wxJoystick::_bind_GetVMin},
	{"GetVPosition", &luna_wrapper_wxJoystick::_bind_GetVPosition},
	{"GetXMax", &luna_wrapper_wxJoystick::_bind_GetXMax},
	{"GetXMin", &luna_wrapper_wxJoystick::_bind_GetXMin},
	{"GetYMax", &luna_wrapper_wxJoystick::_bind_GetYMax},
	{"GetYMin", &luna_wrapper_wxJoystick::_bind_GetYMin},
	{"GetZMax", &luna_wrapper_wxJoystick::_bind_GetZMax},
	{"GetZMin", &luna_wrapper_wxJoystick::_bind_GetZMin},
	{"GetZPosition", &luna_wrapper_wxJoystick::_bind_GetZPosition},
	{"HasPOV", &luna_wrapper_wxJoystick::_bind_HasPOV},
	{"HasPOV4Dir", &luna_wrapper_wxJoystick::_bind_HasPOV4Dir},
	{"HasPOVCTS", &luna_wrapper_wxJoystick::_bind_HasPOVCTS},
	{"HasRudder", &luna_wrapper_wxJoystick::_bind_HasRudder},
	{"HasU", &luna_wrapper_wxJoystick::_bind_HasU},
	{"HasV", &luna_wrapper_wxJoystick::_bind_HasV},
	{"HasZ", &luna_wrapper_wxJoystick::_bind_HasZ},
	{"IsOk", &luna_wrapper_wxJoystick::_bind_IsOk},
	{"ReleaseCapture", &luna_wrapper_wxJoystick::_bind_ReleaseCapture},
	{"SetCapture", &luna_wrapper_wxJoystick::_bind_SetCapture},
	{"SetMovementThreshold", &luna_wrapper_wxJoystick::_bind_SetMovementThreshold},
	{"GetNumberJoysticks", &luna_wrapper_wxJoystick::_bind_GetNumberJoysticks},
	{"base_GetClassInfo", &luna_wrapper_wxJoystick::_bind_base_GetClassInfo},
	{"fromVoid", &luna_wrapper_wxJoystick::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxJoystick::_bind_asVoid},
	{"getTable", &luna_wrapper_wxJoystick::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxJoystick >::converters[] = {
	{"wxObject", &luna_wrapper_wxJoystick::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxJoystick >::enumValues[] = {
	{0,0}
};



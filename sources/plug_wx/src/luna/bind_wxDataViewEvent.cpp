#include <plug_common.h>

#include <luna/wrappers/wrapper_wxDataViewEvent.h>

class luna_wrapper_wxDataViewEvent {
public:
	typedef Luna< wxDataViewEvent > luna_t;

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

		wxDataViewEvent* self= (wxDataViewEvent*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxDataViewEvent >::push(L,self,false);
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
		//wxDataViewEvent* ptr= dynamic_cast< wxDataViewEvent* >(Luna< wxObject >::check(L,1));
		wxDataViewEvent* ptr= luna_caster< wxObject, wxDataViewEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxDataViewEvent >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_GetColumn(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetDataViewColumn(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetModel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPosition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsEditCancelled(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetColumn(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDataViewColumn(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,185523)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetModel(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,66533182)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDataObject(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,55398761)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetDataObject(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetDataFormat(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,9988153) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetDataFormat(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetDataSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetDataSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetDataBuffer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetDataBuffer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetCacheFrom(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetCacheTo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetEventCategory(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Clone(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxDataViewEvent::wxDataViewEvent(int commandType = wxEVT_NULL, int winid = 0)
	static wxDataViewEvent* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxDataViewEvent::wxDataViewEvent(int commandType = wxEVT_NULL, int winid = 0) function, expected prototype:\nwxDataViewEvent::wxDataViewEvent(int commandType = wxEVT_NULL, int winid = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int commandType=luatop>0 ? (int)lua_tointeger(L,1) : (int)wxEVT_NULL;
		int winid=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;

		return new wxDataViewEvent(commandType, winid);
	}

	// wxDataViewEvent::wxDataViewEvent(lua_Table * data, int commandType = wxEVT_NULL, int winid = 0)
	static wxDataViewEvent* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxDataViewEvent::wxDataViewEvent(lua_Table * data, int commandType = wxEVT_NULL, int winid = 0) function, expected prototype:\nwxDataViewEvent::wxDataViewEvent(lua_Table * data, int commandType = wxEVT_NULL, int winid = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int commandType=luatop>1 ? (int)lua_tointeger(L,2) : (int)wxEVT_NULL;
		int winid=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;

		return new wrapper_wxDataViewEvent(L,NULL, commandType, winid);
	}

	// Overload binder for wxDataViewEvent::wxDataViewEvent
	static wxDataViewEvent* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxDataViewEvent, cannot match any of the overloads for function wxDataViewEvent:\n  wxDataViewEvent(int, int)\n  wxDataViewEvent(lua_Table *, int, int)\n");
		return NULL;
	}


	// Function binds:
	// int wxDataViewEvent::GetColumn() const
	static int _bind_GetColumn(lua_State *L) {
		if (!_lg_typecheck_GetColumn(L)) {
			luaL_error(L, "luna typecheck failed in int wxDataViewEvent::GetColumn() const function, expected prototype:\nint wxDataViewEvent::GetColumn() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewEvent* self=Luna< wxObject >::checkSubType< wxDataViewEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxDataViewEvent::GetColumn() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetColumn();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxDataViewColumn * wxDataViewEvent::GetDataViewColumn() const
	static int _bind_GetDataViewColumn(lua_State *L) {
		if (!_lg_typecheck_GetDataViewColumn(L)) {
			luaL_error(L, "luna typecheck failed in wxDataViewColumn * wxDataViewEvent::GetDataViewColumn() const function, expected prototype:\nwxDataViewColumn * wxDataViewEvent::GetDataViewColumn() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewEvent* self=Luna< wxObject >::checkSubType< wxDataViewEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDataViewColumn * wxDataViewEvent::GetDataViewColumn() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDataViewColumn * lret = self->GetDataViewColumn();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewColumn >::push(L,lret,false);

		return 1;
	}

	// wxDataViewModel * wxDataViewEvent::GetModel() const
	static int _bind_GetModel(lua_State *L) {
		if (!_lg_typecheck_GetModel(L)) {
			luaL_error(L, "luna typecheck failed in wxDataViewModel * wxDataViewEvent::GetModel() const function, expected prototype:\nwxDataViewModel * wxDataViewEvent::GetModel() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewEvent* self=Luna< wxObject >::checkSubType< wxDataViewEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDataViewModel * wxDataViewEvent::GetModel() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDataViewModel * lret = self->GetModel();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewModel >::push(L,lret,false);

		return 1;
	}

	// wxPoint wxDataViewEvent::GetPosition() const
	static int _bind_GetPosition(lua_State *L) {
		if (!_lg_typecheck_GetPosition(L)) {
			luaL_error(L, "luna typecheck failed in wxPoint wxDataViewEvent::GetPosition() const function, expected prototype:\nwxPoint wxDataViewEvent::GetPosition() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewEvent* self=Luna< wxObject >::checkSubType< wxDataViewEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPoint wxDataViewEvent::GetPosition() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPoint stack_lret = self->GetPosition();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// bool wxDataViewEvent::IsEditCancelled() const
	static int _bind_IsEditCancelled(lua_State *L) {
		if (!_lg_typecheck_IsEditCancelled(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewEvent::IsEditCancelled() const function, expected prototype:\nbool wxDataViewEvent::IsEditCancelled() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewEvent* self=Luna< wxObject >::checkSubType< wxDataViewEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewEvent::IsEditCancelled() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsEditCancelled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDataViewEvent::SetColumn(int col)
	static int _bind_SetColumn(lua_State *L) {
		if (!_lg_typecheck_SetColumn(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewEvent::SetColumn(int col) function, expected prototype:\nvoid wxDataViewEvent::SetColumn(int col)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int col=(int)lua_tointeger(L,2);

		wxDataViewEvent* self=Luna< wxObject >::checkSubType< wxDataViewEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewEvent::SetColumn(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetColumn(col);

		return 0;
	}

	// void wxDataViewEvent::SetDataViewColumn(wxDataViewColumn * col)
	static int _bind_SetDataViewColumn(lua_State *L) {
		if (!_lg_typecheck_SetDataViewColumn(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewEvent::SetDataViewColumn(wxDataViewColumn * col) function, expected prototype:\nvoid wxDataViewEvent::SetDataViewColumn(wxDataViewColumn * col)\nClass arguments details:\narg 1 ID = 185523\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDataViewColumn* col=(Luna< wxHeaderColumn >::checkSubType< wxDataViewColumn >(L,2));

		wxDataViewEvent* self=Luna< wxObject >::checkSubType< wxDataViewEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewEvent::SetDataViewColumn(wxDataViewColumn *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetDataViewColumn(col);

		return 0;
	}

	// void wxDataViewEvent::SetModel(wxDataViewModel * model)
	static int _bind_SetModel(lua_State *L) {
		if (!_lg_typecheck_SetModel(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewEvent::SetModel(wxDataViewModel * model) function, expected prototype:\nvoid wxDataViewEvent::SetModel(wxDataViewModel * model)\nClass arguments details:\narg 1 ID = 66533182\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDataViewModel* model=(Luna< wxDataViewModel >::check(L,2));

		wxDataViewEvent* self=Luna< wxObject >::checkSubType< wxDataViewEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewEvent::SetModel(wxDataViewModel *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetModel(model);

		return 0;
	}

	// void wxDataViewEvent::SetDataObject(wxDataObject * obj)
	static int _bind_SetDataObject(lua_State *L) {
		if (!_lg_typecheck_SetDataObject(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewEvent::SetDataObject(wxDataObject * obj) function, expected prototype:\nvoid wxDataViewEvent::SetDataObject(wxDataObject * obj)\nClass arguments details:\narg 1 ID = 55398761\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDataObject* obj=(Luna< wxDataObject >::check(L,2));

		wxDataViewEvent* self=Luna< wxObject >::checkSubType< wxDataViewEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewEvent::SetDataObject(wxDataObject *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetDataObject(obj);

		return 0;
	}

	// wxDataObject * wxDataViewEvent::GetDataObject() const
	static int _bind_GetDataObject(lua_State *L) {
		if (!_lg_typecheck_GetDataObject(L)) {
			luaL_error(L, "luna typecheck failed in wxDataObject * wxDataViewEvent::GetDataObject() const function, expected prototype:\nwxDataObject * wxDataViewEvent::GetDataObject() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewEvent* self=Luna< wxObject >::checkSubType< wxDataViewEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDataObject * wxDataViewEvent::GetDataObject() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDataObject * lret = self->GetDataObject();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataObject >::push(L,lret,false);

		return 1;
	}

	// void wxDataViewEvent::SetDataFormat(const wxDataFormat & format)
	static int _bind_SetDataFormat(lua_State *L) {
		if (!_lg_typecheck_SetDataFormat(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewEvent::SetDataFormat(const wxDataFormat & format) function, expected prototype:\nvoid wxDataViewEvent::SetDataFormat(const wxDataFormat & format)\nClass arguments details:\narg 1 ID = 9988153\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataFormat* format_ptr=(Luna< wxDataFormat >::check(L,2));
		if( !format_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg format in wxDataViewEvent::SetDataFormat function");
		}
		const wxDataFormat & format=*format_ptr;

		wxDataViewEvent* self=Luna< wxObject >::checkSubType< wxDataViewEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewEvent::SetDataFormat(const wxDataFormat &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetDataFormat(format);

		return 0;
	}

	// wxDataFormat wxDataViewEvent::GetDataFormat() const
	static int _bind_GetDataFormat(lua_State *L) {
		if (!_lg_typecheck_GetDataFormat(L)) {
			luaL_error(L, "luna typecheck failed in wxDataFormat wxDataViewEvent::GetDataFormat() const function, expected prototype:\nwxDataFormat wxDataViewEvent::GetDataFormat() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewEvent* self=Luna< wxObject >::checkSubType< wxDataViewEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDataFormat wxDataViewEvent::GetDataFormat() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDataFormat stack_lret = self->GetDataFormat();
		wxDataFormat* lret = new wxDataFormat(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataFormat >::push(L,lret,true);

		return 1;
	}

	// void wxDataViewEvent::SetDataSize(size_t size)
	static int _bind_SetDataSize(lua_State *L) {
		if (!_lg_typecheck_SetDataSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewEvent::SetDataSize(size_t size) function, expected prototype:\nvoid wxDataViewEvent::SetDataSize(size_t size)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t size=(size_t)lua_tointeger(L,2);

		wxDataViewEvent* self=Luna< wxObject >::checkSubType< wxDataViewEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewEvent::SetDataSize(size_t). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetDataSize(size);

		return 0;
	}

	// size_t wxDataViewEvent::GetDataSize() const
	static int _bind_GetDataSize(lua_State *L) {
		if (!_lg_typecheck_GetDataSize(L)) {
			luaL_error(L, "luna typecheck failed in size_t wxDataViewEvent::GetDataSize() const function, expected prototype:\nsize_t wxDataViewEvent::GetDataSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewEvent* self=Luna< wxObject >::checkSubType< wxDataViewEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call size_t wxDataViewEvent::GetDataSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		size_t lret = self->GetDataSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxDataViewEvent::SetDataBuffer(void * buf)
	static int _bind_SetDataBuffer(lua_State *L) {
		if (!_lg_typecheck_SetDataBuffer(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewEvent::SetDataBuffer(void * buf) function, expected prototype:\nvoid wxDataViewEvent::SetDataBuffer(void * buf)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		void* buf=(Luna< void >::check(L,2));

		wxDataViewEvent* self=Luna< wxObject >::checkSubType< wxDataViewEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewEvent::SetDataBuffer(void *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetDataBuffer(buf);

		return 0;
	}

	// void * wxDataViewEvent::GetDataBuffer() const
	static int _bind_GetDataBuffer(lua_State *L) {
		if (!_lg_typecheck_GetDataBuffer(L)) {
			luaL_error(L, "luna typecheck failed in void * wxDataViewEvent::GetDataBuffer() const function, expected prototype:\nvoid * wxDataViewEvent::GetDataBuffer() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewEvent* self=Luna< wxObject >::checkSubType< wxDataViewEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void * wxDataViewEvent::GetDataBuffer() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		void * lret = self->GetDataBuffer();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// int wxDataViewEvent::GetCacheFrom() const
	static int _bind_GetCacheFrom(lua_State *L) {
		if (!_lg_typecheck_GetCacheFrom(L)) {
			luaL_error(L, "luna typecheck failed in int wxDataViewEvent::GetCacheFrom() const function, expected prototype:\nint wxDataViewEvent::GetCacheFrom() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewEvent* self=Luna< wxObject >::checkSubType< wxDataViewEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxDataViewEvent::GetCacheFrom() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetCacheFrom();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxDataViewEvent::GetCacheTo() const
	static int _bind_GetCacheTo(lua_State *L) {
		if (!_lg_typecheck_GetCacheTo(L)) {
			luaL_error(L, "luna typecheck failed in int wxDataViewEvent::GetCacheTo() const function, expected prototype:\nint wxDataViewEvent::GetCacheTo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewEvent* self=Luna< wxObject >::checkSubType< wxDataViewEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxDataViewEvent::GetCacheTo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetCacheTo();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxClassInfo * wxDataViewEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxDataViewEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxDataViewEvent::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewEvent* self=Luna< wxObject >::checkSubType< wxDataViewEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxDataViewEvent::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxDataViewEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxDataViewEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luaL_error(L, "luna typecheck failed in wxEventCategory wxDataViewEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxDataViewEvent::base_GetEventCategory() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewEvent* self=Luna< wxObject >::checkSubType< wxDataViewEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEventCategory wxDataViewEvent::base_GetEventCategory() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEventCategory lret = self->wxDataViewEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxEvent * wxDataViewEvent::base_Clone() const
	static int _bind_base_Clone(lua_State *L) {
		if (!_lg_typecheck_base_Clone(L)) {
			luaL_error(L, "luna typecheck failed in wxEvent * wxDataViewEvent::base_Clone() const function, expected prototype:\nwxEvent * wxDataViewEvent::base_Clone() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewEvent* self=Luna< wxObject >::checkSubType< wxDataViewEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEvent * wxDataViewEvent::base_Clone() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEvent * lret = self->wxDataViewEvent::Clone();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxEvent >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxDataViewEvent* LunaTraits< wxDataViewEvent >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxDataViewEvent::_bind_ctor(L);
}

void LunaTraits< wxDataViewEvent >::_bind_dtor(wxDataViewEvent* obj) {
	delete obj;
}

const char LunaTraits< wxDataViewEvent >::className[] = "wxDataViewEvent";
const char LunaTraits< wxDataViewEvent >::fullName[] = "wxDataViewEvent";
const char LunaTraits< wxDataViewEvent >::moduleName[] = "wx";
const char* LunaTraits< wxDataViewEvent >::parents[] = {"wx.wxNotifyEvent", 0};
const int LunaTraits< wxDataViewEvent >::hash = 59354799;
const int LunaTraits< wxDataViewEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxDataViewEvent >::methods[] = {
	{"GetColumn", &luna_wrapper_wxDataViewEvent::_bind_GetColumn},
	{"GetDataViewColumn", &luna_wrapper_wxDataViewEvent::_bind_GetDataViewColumn},
	{"GetModel", &luna_wrapper_wxDataViewEvent::_bind_GetModel},
	{"GetPosition", &luna_wrapper_wxDataViewEvent::_bind_GetPosition},
	{"IsEditCancelled", &luna_wrapper_wxDataViewEvent::_bind_IsEditCancelled},
	{"SetColumn", &luna_wrapper_wxDataViewEvent::_bind_SetColumn},
	{"SetDataViewColumn", &luna_wrapper_wxDataViewEvent::_bind_SetDataViewColumn},
	{"SetModel", &luna_wrapper_wxDataViewEvent::_bind_SetModel},
	{"SetDataObject", &luna_wrapper_wxDataViewEvent::_bind_SetDataObject},
	{"GetDataObject", &luna_wrapper_wxDataViewEvent::_bind_GetDataObject},
	{"SetDataFormat", &luna_wrapper_wxDataViewEvent::_bind_SetDataFormat},
	{"GetDataFormat", &luna_wrapper_wxDataViewEvent::_bind_GetDataFormat},
	{"SetDataSize", &luna_wrapper_wxDataViewEvent::_bind_SetDataSize},
	{"GetDataSize", &luna_wrapper_wxDataViewEvent::_bind_GetDataSize},
	{"SetDataBuffer", &luna_wrapper_wxDataViewEvent::_bind_SetDataBuffer},
	{"GetDataBuffer", &luna_wrapper_wxDataViewEvent::_bind_GetDataBuffer},
	{"GetCacheFrom", &luna_wrapper_wxDataViewEvent::_bind_GetCacheFrom},
	{"GetCacheTo", &luna_wrapper_wxDataViewEvent::_bind_GetCacheTo},
	{"base_GetClassInfo", &luna_wrapper_wxDataViewEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxDataViewEvent::_bind_base_GetEventCategory},
	{"base_Clone", &luna_wrapper_wxDataViewEvent::_bind_base_Clone},
	{"fromVoid", &luna_wrapper_wxDataViewEvent::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxDataViewEvent::_bind_asVoid},
	{"getTable", &luna_wrapper_wxDataViewEvent::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxDataViewEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxDataViewEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxDataViewEvent >::enumValues[] = {
	{0,0}
};



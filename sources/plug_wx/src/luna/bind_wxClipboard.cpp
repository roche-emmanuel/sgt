#include <plug_common.h>

#include <luna/wrappers/wrapper_wxClipboard.h>

class luna_wrapper_wxClipboard {
public:
	typedef Luna< wxClipboard > luna_t;

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

		wxClipboard* self= (wxClipboard*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxClipboard >::push(L,self,false);
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
		//wxClipboard* ptr= dynamic_cast< wxClipboard* >(Luna< wxObject >::check(L,1));
		wxClipboard* ptr= luna_caster< wxObject, wxClipboard >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxClipboard >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_AddData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,55398761)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Clear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Close(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Flush(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,55398761) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsOpened(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsSupported(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,9988153) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsUsingPrimarySelection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Open(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,55398761)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_UsePrimarySelection(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_AddData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,55398761)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Clear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Close(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Flush(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,55398761) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_IsOpened(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_IsSupported(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,9988153) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Open(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,55398761)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_UsePrimarySelection(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxClipboard::wxClipboard()
	static wxClipboard* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxClipboard::wxClipboard() function, expected prototype:\nwxClipboard::wxClipboard()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxClipboard();
	}

	// wxClipboard::wxClipboard(lua_Table * data)
	static wxClipboard* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxClipboard::wxClipboard(lua_Table * data) function, expected prototype:\nwxClipboard::wxClipboard(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxClipboard(L,NULL);
	}

	// Overload binder for wxClipboard::wxClipboard
	static wxClipboard* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxClipboard, cannot match any of the overloads for function wxClipboard:\n  wxClipboard()\n  wxClipboard(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// bool wxClipboard::AddData(wxDataObject * data)
	static int _bind_AddData(lua_State *L) {
		if (!_lg_typecheck_AddData(L)) {
			luaL_error(L, "luna typecheck failed in bool wxClipboard::AddData(wxDataObject * data) function, expected prototype:\nbool wxClipboard::AddData(wxDataObject * data)\nClass arguments details:\narg 1 ID = 55398761\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDataObject* data=(Luna< wxDataObject >::check(L,2));

		wxClipboard* self=Luna< wxObject >::checkSubType< wxClipboard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxClipboard::AddData(wxDataObject *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->AddData(data);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxClipboard::Clear()
	static int _bind_Clear(lua_State *L) {
		if (!_lg_typecheck_Clear(L)) {
			luaL_error(L, "luna typecheck failed in void wxClipboard::Clear() function, expected prototype:\nvoid wxClipboard::Clear()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxClipboard* self=Luna< wxObject >::checkSubType< wxClipboard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxClipboard::Clear(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Clear();

		return 0;
	}

	// void wxClipboard::Close()
	static int _bind_Close(lua_State *L) {
		if (!_lg_typecheck_Close(L)) {
			luaL_error(L, "luna typecheck failed in void wxClipboard::Close() function, expected prototype:\nvoid wxClipboard::Close()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxClipboard* self=Luna< wxObject >::checkSubType< wxClipboard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxClipboard::Close(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Close();

		return 0;
	}

	// bool wxClipboard::Flush()
	static int _bind_Flush(lua_State *L) {
		if (!_lg_typecheck_Flush(L)) {
			luaL_error(L, "luna typecheck failed in bool wxClipboard::Flush() function, expected prototype:\nbool wxClipboard::Flush()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxClipboard* self=Luna< wxObject >::checkSubType< wxClipboard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxClipboard::Flush(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Flush();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxClipboard::GetData(wxDataObject & data)
	static int _bind_GetData(lua_State *L) {
		if (!_lg_typecheck_GetData(L)) {
			luaL_error(L, "luna typecheck failed in bool wxClipboard::GetData(wxDataObject & data) function, expected prototype:\nbool wxClipboard::GetData(wxDataObject & data)\nClass arguments details:\narg 1 ID = 55398761\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDataObject* data_ptr=(Luna< wxDataObject >::check(L,2));
		if( !data_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg data in wxClipboard::GetData function");
		}
		wxDataObject & data=*data_ptr;

		wxClipboard* self=Luna< wxObject >::checkSubType< wxClipboard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxClipboard::GetData(wxDataObject &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GetData(data);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxClipboard::IsOpened() const
	static int _bind_IsOpened(lua_State *L) {
		if (!_lg_typecheck_IsOpened(L)) {
			luaL_error(L, "luna typecheck failed in bool wxClipboard::IsOpened() const function, expected prototype:\nbool wxClipboard::IsOpened() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxClipboard* self=Luna< wxObject >::checkSubType< wxClipboard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxClipboard::IsOpened() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsOpened();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxClipboard::IsSupported(const wxDataFormat & format)
	static int _bind_IsSupported(lua_State *L) {
		if (!_lg_typecheck_IsSupported(L)) {
			luaL_error(L, "luna typecheck failed in bool wxClipboard::IsSupported(const wxDataFormat & format) function, expected prototype:\nbool wxClipboard::IsSupported(const wxDataFormat & format)\nClass arguments details:\narg 1 ID = 9988153\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataFormat* format_ptr=(Luna< wxDataFormat >::check(L,2));
		if( !format_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg format in wxClipboard::IsSupported function");
		}
		const wxDataFormat & format=*format_ptr;

		wxClipboard* self=Luna< wxObject >::checkSubType< wxClipboard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxClipboard::IsSupported(const wxDataFormat &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsSupported(format);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxClipboard::IsUsingPrimarySelection() const
	static int _bind_IsUsingPrimarySelection(lua_State *L) {
		if (!_lg_typecheck_IsUsingPrimarySelection(L)) {
			luaL_error(L, "luna typecheck failed in bool wxClipboard::IsUsingPrimarySelection() const function, expected prototype:\nbool wxClipboard::IsUsingPrimarySelection() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxClipboard* self=Luna< wxObject >::checkSubType< wxClipboard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxClipboard::IsUsingPrimarySelection() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsUsingPrimarySelection();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxClipboard::Open()
	static int _bind_Open(lua_State *L) {
		if (!_lg_typecheck_Open(L)) {
			luaL_error(L, "luna typecheck failed in bool wxClipboard::Open() function, expected prototype:\nbool wxClipboard::Open()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxClipboard* self=Luna< wxObject >::checkSubType< wxClipboard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxClipboard::Open(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Open();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxClipboard::SetData(wxDataObject * data)
	static int _bind_SetData(lua_State *L) {
		if (!_lg_typecheck_SetData(L)) {
			luaL_error(L, "luna typecheck failed in bool wxClipboard::SetData(wxDataObject * data) function, expected prototype:\nbool wxClipboard::SetData(wxDataObject * data)\nClass arguments details:\narg 1 ID = 55398761\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDataObject* data=(Luna< wxDataObject >::check(L,2));

		wxClipboard* self=Luna< wxObject >::checkSubType< wxClipboard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxClipboard::SetData(wxDataObject *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetData(data);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxClipboard::UsePrimarySelection(bool primary = false)
	static int _bind_UsePrimarySelection(lua_State *L) {
		if (!_lg_typecheck_UsePrimarySelection(L)) {
			luaL_error(L, "luna typecheck failed in void wxClipboard::UsePrimarySelection(bool primary = false) function, expected prototype:\nvoid wxClipboard::UsePrimarySelection(bool primary = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool primary=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)false;

		wxClipboard* self=Luna< wxObject >::checkSubType< wxClipboard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxClipboard::UsePrimarySelection(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->UsePrimarySelection(primary);

		return 0;
	}

	// wxClassInfo * wxClipboard::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxClipboard::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxClipboard::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxClipboard* self=Luna< wxObject >::checkSubType< wxClipboard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxClipboard::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxClipboard::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// bool wxClipboard::base_AddData(wxDataObject * data)
	static int _bind_base_AddData(lua_State *L) {
		if (!_lg_typecheck_base_AddData(L)) {
			luaL_error(L, "luna typecheck failed in bool wxClipboard::base_AddData(wxDataObject * data) function, expected prototype:\nbool wxClipboard::base_AddData(wxDataObject * data)\nClass arguments details:\narg 1 ID = 55398761\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDataObject* data=(Luna< wxDataObject >::check(L,2));

		wxClipboard* self=Luna< wxObject >::checkSubType< wxClipboard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxClipboard::base_AddData(wxDataObject *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxClipboard::AddData(data);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxClipboard::base_Clear()
	static int _bind_base_Clear(lua_State *L) {
		if (!_lg_typecheck_base_Clear(L)) {
			luaL_error(L, "luna typecheck failed in void wxClipboard::base_Clear() function, expected prototype:\nvoid wxClipboard::base_Clear()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxClipboard* self=Luna< wxObject >::checkSubType< wxClipboard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxClipboard::base_Clear(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxClipboard::Clear();

		return 0;
	}

	// void wxClipboard::base_Close()
	static int _bind_base_Close(lua_State *L) {
		if (!_lg_typecheck_base_Close(L)) {
			luaL_error(L, "luna typecheck failed in void wxClipboard::base_Close() function, expected prototype:\nvoid wxClipboard::base_Close()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxClipboard* self=Luna< wxObject >::checkSubType< wxClipboard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxClipboard::base_Close(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxClipboard::Close();

		return 0;
	}

	// bool wxClipboard::base_Flush()
	static int _bind_base_Flush(lua_State *L) {
		if (!_lg_typecheck_base_Flush(L)) {
			luaL_error(L, "luna typecheck failed in bool wxClipboard::base_Flush() function, expected prototype:\nbool wxClipboard::base_Flush()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxClipboard* self=Luna< wxObject >::checkSubType< wxClipboard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxClipboard::base_Flush(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxClipboard::Flush();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxClipboard::base_GetData(wxDataObject & data)
	static int _bind_base_GetData(lua_State *L) {
		if (!_lg_typecheck_base_GetData(L)) {
			luaL_error(L, "luna typecheck failed in bool wxClipboard::base_GetData(wxDataObject & data) function, expected prototype:\nbool wxClipboard::base_GetData(wxDataObject & data)\nClass arguments details:\narg 1 ID = 55398761\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDataObject* data_ptr=(Luna< wxDataObject >::check(L,2));
		if( !data_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg data in wxClipboard::base_GetData function");
		}
		wxDataObject & data=*data_ptr;

		wxClipboard* self=Luna< wxObject >::checkSubType< wxClipboard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxClipboard::base_GetData(wxDataObject &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxClipboard::GetData(data);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxClipboard::base_IsOpened() const
	static int _bind_base_IsOpened(lua_State *L) {
		if (!_lg_typecheck_base_IsOpened(L)) {
			luaL_error(L, "luna typecheck failed in bool wxClipboard::base_IsOpened() const function, expected prototype:\nbool wxClipboard::base_IsOpened() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxClipboard* self=Luna< wxObject >::checkSubType< wxClipboard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxClipboard::base_IsOpened() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxClipboard::IsOpened();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxClipboard::base_IsSupported(const wxDataFormat & format)
	static int _bind_base_IsSupported(lua_State *L) {
		if (!_lg_typecheck_base_IsSupported(L)) {
			luaL_error(L, "luna typecheck failed in bool wxClipboard::base_IsSupported(const wxDataFormat & format) function, expected prototype:\nbool wxClipboard::base_IsSupported(const wxDataFormat & format)\nClass arguments details:\narg 1 ID = 9988153\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataFormat* format_ptr=(Luna< wxDataFormat >::check(L,2));
		if( !format_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg format in wxClipboard::base_IsSupported function");
		}
		const wxDataFormat & format=*format_ptr;

		wxClipboard* self=Luna< wxObject >::checkSubType< wxClipboard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxClipboard::base_IsSupported(const wxDataFormat &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxClipboard::IsSupported(format);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxClipboard::base_Open()
	static int _bind_base_Open(lua_State *L) {
		if (!_lg_typecheck_base_Open(L)) {
			luaL_error(L, "luna typecheck failed in bool wxClipboard::base_Open() function, expected prototype:\nbool wxClipboard::base_Open()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxClipboard* self=Luna< wxObject >::checkSubType< wxClipboard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxClipboard::base_Open(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxClipboard::Open();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxClipboard::base_SetData(wxDataObject * data)
	static int _bind_base_SetData(lua_State *L) {
		if (!_lg_typecheck_base_SetData(L)) {
			luaL_error(L, "luna typecheck failed in bool wxClipboard::base_SetData(wxDataObject * data) function, expected prototype:\nbool wxClipboard::base_SetData(wxDataObject * data)\nClass arguments details:\narg 1 ID = 55398761\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDataObject* data=(Luna< wxDataObject >::check(L,2));

		wxClipboard* self=Luna< wxObject >::checkSubType< wxClipboard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxClipboard::base_SetData(wxDataObject *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxClipboard::SetData(data);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxClipboard::base_UsePrimarySelection(bool primary = false)
	static int _bind_base_UsePrimarySelection(lua_State *L) {
		if (!_lg_typecheck_base_UsePrimarySelection(L)) {
			luaL_error(L, "luna typecheck failed in void wxClipboard::base_UsePrimarySelection(bool primary = false) function, expected prototype:\nvoid wxClipboard::base_UsePrimarySelection(bool primary = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool primary=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)false;

		wxClipboard* self=Luna< wxObject >::checkSubType< wxClipboard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxClipboard::base_UsePrimarySelection(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxClipboard::UsePrimarySelection(primary);

		return 0;
	}


	// Operator binds:

};

wxClipboard* LunaTraits< wxClipboard >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxClipboard::_bind_ctor(L);
}

void LunaTraits< wxClipboard >::_bind_dtor(wxClipboard* obj) {
	delete obj;
}

const char LunaTraits< wxClipboard >::className[] = "wxClipboard";
const char LunaTraits< wxClipboard >::fullName[] = "wxClipboard";
const char LunaTraits< wxClipboard >::moduleName[] = "wx";
const char* LunaTraits< wxClipboard >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxClipboard >::hash = 95668084;
const int LunaTraits< wxClipboard >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxClipboard >::methods[] = {
	{"AddData", &luna_wrapper_wxClipboard::_bind_AddData},
	{"Clear", &luna_wrapper_wxClipboard::_bind_Clear},
	{"Close", &luna_wrapper_wxClipboard::_bind_Close},
	{"Flush", &luna_wrapper_wxClipboard::_bind_Flush},
	{"GetData", &luna_wrapper_wxClipboard::_bind_GetData},
	{"IsOpened", &luna_wrapper_wxClipboard::_bind_IsOpened},
	{"IsSupported", &luna_wrapper_wxClipboard::_bind_IsSupported},
	{"IsUsingPrimarySelection", &luna_wrapper_wxClipboard::_bind_IsUsingPrimarySelection},
	{"Open", &luna_wrapper_wxClipboard::_bind_Open},
	{"SetData", &luna_wrapper_wxClipboard::_bind_SetData},
	{"UsePrimarySelection", &luna_wrapper_wxClipboard::_bind_UsePrimarySelection},
	{"base_GetClassInfo", &luna_wrapper_wxClipboard::_bind_base_GetClassInfo},
	{"base_AddData", &luna_wrapper_wxClipboard::_bind_base_AddData},
	{"base_Clear", &luna_wrapper_wxClipboard::_bind_base_Clear},
	{"base_Close", &luna_wrapper_wxClipboard::_bind_base_Close},
	{"base_Flush", &luna_wrapper_wxClipboard::_bind_base_Flush},
	{"base_GetData", &luna_wrapper_wxClipboard::_bind_base_GetData},
	{"base_IsOpened", &luna_wrapper_wxClipboard::_bind_base_IsOpened},
	{"base_IsSupported", &luna_wrapper_wxClipboard::_bind_base_IsSupported},
	{"base_Open", &luna_wrapper_wxClipboard::_bind_base_Open},
	{"base_SetData", &luna_wrapper_wxClipboard::_bind_base_SetData},
	{"base_UsePrimarySelection", &luna_wrapper_wxClipboard::_bind_base_UsePrimarySelection},
	{"fromVoid", &luna_wrapper_wxClipboard::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxClipboard::_bind_asVoid},
	{"getTable", &luna_wrapper_wxClipboard::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxClipboard >::converters[] = {
	{"wxObject", &luna_wrapper_wxClipboard::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxClipboard >::enumValues[] = {
	{0,0}
};



#include <plug_common.h>

#include <luna/wrappers/wrapper_wxPageSetupDialogData.h>

class luna_wrapper_wxPageSetupDialogData {
public:
	typedef Luna< wxPageSetupDialogData > luna_t;

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

		wxPageSetupDialogData* self= (wxPageSetupDialogData*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxPageSetupDialogData >::push(L,self,false);
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
		//wxPageSetupDialogData* ptr= dynamic_cast< wxPageSetupDialogData* >(Luna< wxObject >::check(L,1));
		wxPageSetupDialogData* ptr= luna_caster< wxObject, wxPageSetupDialogData >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxPageSetupDialogData >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxPageSetupDialogData >(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxPageSetupDialogData >(L,2))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_EnableHelp(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_EnableMargins(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_EnableOrientation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_EnablePaper(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_EnablePrinter(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetDefaultInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetDefaultMinMargins(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetEnableHelp(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetEnableMargins(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetEnableOrientation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetEnablePaper(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetEnablePrinter(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMarginBottomRight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMarginTopLeft(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMinMarginBottomRight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMinMarginTopLeft(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPaperId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPaperSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsOk(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetDefaultInfo(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDefaultMinMargins(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMarginBottomRight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMarginTopLeft(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMinMarginBottomRight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMinMarginTopLeft(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPaperId(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPaperSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck_op_assign(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}


	// Constructor binds:
	// wxPageSetupDialogData::wxPageSetupDialogData()
	static wxPageSetupDialogData* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxPageSetupDialogData::wxPageSetupDialogData() function, expected prototype:\nwxPageSetupDialogData::wxPageSetupDialogData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxPageSetupDialogData();
	}

	// wxPageSetupDialogData::wxPageSetupDialogData(const wxPageSetupDialogData & data)
	static wxPageSetupDialogData* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxPageSetupDialogData::wxPageSetupDialogData(const wxPageSetupDialogData & data) function, expected prototype:\nwxPageSetupDialogData::wxPageSetupDialogData(const wxPageSetupDialogData & data)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPageSetupDialogData* data_ptr=(Luna< wxObject >::checkSubType< wxPageSetupDialogData >(L,1));
		if( !data_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg data in wxPageSetupDialogData::wxPageSetupDialogData function");
		}
		const wxPageSetupDialogData & data=*data_ptr;

		return new wxPageSetupDialogData(data);
	}

	// wxPageSetupDialogData::wxPageSetupDialogData(lua_Table * data)
	static wxPageSetupDialogData* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in wxPageSetupDialogData::wxPageSetupDialogData(lua_Table * data) function, expected prototype:\nwxPageSetupDialogData::wxPageSetupDialogData(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxPageSetupDialogData(L,NULL);
	}

	// wxPageSetupDialogData::wxPageSetupDialogData(lua_Table * data, const wxPageSetupDialogData & data)
	static wxPageSetupDialogData* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in wxPageSetupDialogData::wxPageSetupDialogData(lua_Table * data, const wxPageSetupDialogData & data) function, expected prototype:\nwxPageSetupDialogData::wxPageSetupDialogData(lua_Table * data, const wxPageSetupDialogData & data)\nClass arguments details:\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPageSetupDialogData* data_ptr=(Luna< wxObject >::checkSubType< wxPageSetupDialogData >(L,2));
		if( !data_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg data in wxPageSetupDialogData::wxPageSetupDialogData function");
		}
		const wxPageSetupDialogData & data=*data_ptr;

		return new wrapper_wxPageSetupDialogData(L,NULL, data);
	}

	// Overload binder for wxPageSetupDialogData::wxPageSetupDialogData
	static wxPageSetupDialogData* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function wxPageSetupDialogData, cannot match any of the overloads for function wxPageSetupDialogData:\n  wxPageSetupDialogData()\n  wxPageSetupDialogData(const wxPageSetupDialogData &)\n  wxPageSetupDialogData(lua_Table *)\n  wxPageSetupDialogData(lua_Table *, const wxPageSetupDialogData &)\n");
		return NULL;
	}


	// Function binds:
	// void wxPageSetupDialogData::EnableHelp(bool flag)
	static int _bind_EnableHelp(lua_State *L) {
		if (!_lg_typecheck_EnableHelp(L)) {
			luaL_error(L, "luna typecheck failed in void wxPageSetupDialogData::EnableHelp(bool flag) function, expected prototype:\nvoid wxPageSetupDialogData::EnableHelp(bool flag)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		wxPageSetupDialogData* self=Luna< wxObject >::checkSubType< wxPageSetupDialogData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPageSetupDialogData::EnableHelp(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EnableHelp(flag);

		return 0;
	}

	// void wxPageSetupDialogData::EnableMargins(bool flag)
	static int _bind_EnableMargins(lua_State *L) {
		if (!_lg_typecheck_EnableMargins(L)) {
			luaL_error(L, "luna typecheck failed in void wxPageSetupDialogData::EnableMargins(bool flag) function, expected prototype:\nvoid wxPageSetupDialogData::EnableMargins(bool flag)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		wxPageSetupDialogData* self=Luna< wxObject >::checkSubType< wxPageSetupDialogData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPageSetupDialogData::EnableMargins(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EnableMargins(flag);

		return 0;
	}

	// void wxPageSetupDialogData::EnableOrientation(bool flag)
	static int _bind_EnableOrientation(lua_State *L) {
		if (!_lg_typecheck_EnableOrientation(L)) {
			luaL_error(L, "luna typecheck failed in void wxPageSetupDialogData::EnableOrientation(bool flag) function, expected prototype:\nvoid wxPageSetupDialogData::EnableOrientation(bool flag)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		wxPageSetupDialogData* self=Luna< wxObject >::checkSubType< wxPageSetupDialogData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPageSetupDialogData::EnableOrientation(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EnableOrientation(flag);

		return 0;
	}

	// void wxPageSetupDialogData::EnablePaper(bool flag)
	static int _bind_EnablePaper(lua_State *L) {
		if (!_lg_typecheck_EnablePaper(L)) {
			luaL_error(L, "luna typecheck failed in void wxPageSetupDialogData::EnablePaper(bool flag) function, expected prototype:\nvoid wxPageSetupDialogData::EnablePaper(bool flag)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		wxPageSetupDialogData* self=Luna< wxObject >::checkSubType< wxPageSetupDialogData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPageSetupDialogData::EnablePaper(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EnablePaper(flag);

		return 0;
	}

	// void wxPageSetupDialogData::EnablePrinter(bool flag)
	static int _bind_EnablePrinter(lua_State *L) {
		if (!_lg_typecheck_EnablePrinter(L)) {
			luaL_error(L, "luna typecheck failed in void wxPageSetupDialogData::EnablePrinter(bool flag) function, expected prototype:\nvoid wxPageSetupDialogData::EnablePrinter(bool flag)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		wxPageSetupDialogData* self=Luna< wxObject >::checkSubType< wxPageSetupDialogData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPageSetupDialogData::EnablePrinter(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EnablePrinter(flag);

		return 0;
	}

	// bool wxPageSetupDialogData::GetDefaultInfo() const
	static int _bind_GetDefaultInfo(lua_State *L) {
		if (!_lg_typecheck_GetDefaultInfo(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPageSetupDialogData::GetDefaultInfo() const function, expected prototype:\nbool wxPageSetupDialogData::GetDefaultInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPageSetupDialogData* self=Luna< wxObject >::checkSubType< wxPageSetupDialogData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPageSetupDialogData::GetDefaultInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GetDefaultInfo();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPageSetupDialogData::GetDefaultMinMargins() const
	static int _bind_GetDefaultMinMargins(lua_State *L) {
		if (!_lg_typecheck_GetDefaultMinMargins(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPageSetupDialogData::GetDefaultMinMargins() const function, expected prototype:\nbool wxPageSetupDialogData::GetDefaultMinMargins() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPageSetupDialogData* self=Luna< wxObject >::checkSubType< wxPageSetupDialogData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPageSetupDialogData::GetDefaultMinMargins() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GetDefaultMinMargins();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPageSetupDialogData::GetEnableHelp() const
	static int _bind_GetEnableHelp(lua_State *L) {
		if (!_lg_typecheck_GetEnableHelp(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPageSetupDialogData::GetEnableHelp() const function, expected prototype:\nbool wxPageSetupDialogData::GetEnableHelp() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPageSetupDialogData* self=Luna< wxObject >::checkSubType< wxPageSetupDialogData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPageSetupDialogData::GetEnableHelp() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GetEnableHelp();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPageSetupDialogData::GetEnableMargins() const
	static int _bind_GetEnableMargins(lua_State *L) {
		if (!_lg_typecheck_GetEnableMargins(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPageSetupDialogData::GetEnableMargins() const function, expected prototype:\nbool wxPageSetupDialogData::GetEnableMargins() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPageSetupDialogData* self=Luna< wxObject >::checkSubType< wxPageSetupDialogData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPageSetupDialogData::GetEnableMargins() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GetEnableMargins();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPageSetupDialogData::GetEnableOrientation() const
	static int _bind_GetEnableOrientation(lua_State *L) {
		if (!_lg_typecheck_GetEnableOrientation(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPageSetupDialogData::GetEnableOrientation() const function, expected prototype:\nbool wxPageSetupDialogData::GetEnableOrientation() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPageSetupDialogData* self=Luna< wxObject >::checkSubType< wxPageSetupDialogData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPageSetupDialogData::GetEnableOrientation() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GetEnableOrientation();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPageSetupDialogData::GetEnablePaper() const
	static int _bind_GetEnablePaper(lua_State *L) {
		if (!_lg_typecheck_GetEnablePaper(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPageSetupDialogData::GetEnablePaper() const function, expected prototype:\nbool wxPageSetupDialogData::GetEnablePaper() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPageSetupDialogData* self=Luna< wxObject >::checkSubType< wxPageSetupDialogData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPageSetupDialogData::GetEnablePaper() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GetEnablePaper();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPageSetupDialogData::GetEnablePrinter() const
	static int _bind_GetEnablePrinter(lua_State *L) {
		if (!_lg_typecheck_GetEnablePrinter(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPageSetupDialogData::GetEnablePrinter() const function, expected prototype:\nbool wxPageSetupDialogData::GetEnablePrinter() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPageSetupDialogData* self=Luna< wxObject >::checkSubType< wxPageSetupDialogData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPageSetupDialogData::GetEnablePrinter() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GetEnablePrinter();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxPoint wxPageSetupDialogData::GetMarginBottomRight() const
	static int _bind_GetMarginBottomRight(lua_State *L) {
		if (!_lg_typecheck_GetMarginBottomRight(L)) {
			luaL_error(L, "luna typecheck failed in wxPoint wxPageSetupDialogData::GetMarginBottomRight() const function, expected prototype:\nwxPoint wxPageSetupDialogData::GetMarginBottomRight() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPageSetupDialogData* self=Luna< wxObject >::checkSubType< wxPageSetupDialogData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPoint wxPageSetupDialogData::GetMarginBottomRight() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPoint stack_lret = self->GetMarginBottomRight();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// wxPoint wxPageSetupDialogData::GetMarginTopLeft() const
	static int _bind_GetMarginTopLeft(lua_State *L) {
		if (!_lg_typecheck_GetMarginTopLeft(L)) {
			luaL_error(L, "luna typecheck failed in wxPoint wxPageSetupDialogData::GetMarginTopLeft() const function, expected prototype:\nwxPoint wxPageSetupDialogData::GetMarginTopLeft() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPageSetupDialogData* self=Luna< wxObject >::checkSubType< wxPageSetupDialogData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPoint wxPageSetupDialogData::GetMarginTopLeft() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPoint stack_lret = self->GetMarginTopLeft();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// wxPoint wxPageSetupDialogData::GetMinMarginBottomRight() const
	static int _bind_GetMinMarginBottomRight(lua_State *L) {
		if (!_lg_typecheck_GetMinMarginBottomRight(L)) {
			luaL_error(L, "luna typecheck failed in wxPoint wxPageSetupDialogData::GetMinMarginBottomRight() const function, expected prototype:\nwxPoint wxPageSetupDialogData::GetMinMarginBottomRight() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPageSetupDialogData* self=Luna< wxObject >::checkSubType< wxPageSetupDialogData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPoint wxPageSetupDialogData::GetMinMarginBottomRight() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPoint stack_lret = self->GetMinMarginBottomRight();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// wxPoint wxPageSetupDialogData::GetMinMarginTopLeft() const
	static int _bind_GetMinMarginTopLeft(lua_State *L) {
		if (!_lg_typecheck_GetMinMarginTopLeft(L)) {
			luaL_error(L, "luna typecheck failed in wxPoint wxPageSetupDialogData::GetMinMarginTopLeft() const function, expected prototype:\nwxPoint wxPageSetupDialogData::GetMinMarginTopLeft() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPageSetupDialogData* self=Luna< wxObject >::checkSubType< wxPageSetupDialogData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPoint wxPageSetupDialogData::GetMinMarginTopLeft() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPoint stack_lret = self->GetMinMarginTopLeft();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// wxPaperSize wxPageSetupDialogData::GetPaperId() const
	static int _bind_GetPaperId(lua_State *L) {
		if (!_lg_typecheck_GetPaperId(L)) {
			luaL_error(L, "luna typecheck failed in wxPaperSize wxPageSetupDialogData::GetPaperId() const function, expected prototype:\nwxPaperSize wxPageSetupDialogData::GetPaperId() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPageSetupDialogData* self=Luna< wxObject >::checkSubType< wxPageSetupDialogData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPaperSize wxPageSetupDialogData::GetPaperId() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPaperSize lret = self->GetPaperId();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxSize wxPageSetupDialogData::GetPaperSize() const
	static int _bind_GetPaperSize(lua_State *L) {
		if (!_lg_typecheck_GetPaperSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxPageSetupDialogData::GetPaperSize() const function, expected prototype:\nwxSize wxPageSetupDialogData::GetPaperSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPageSetupDialogData* self=Luna< wxObject >::checkSubType< wxPageSetupDialogData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxPageSetupDialogData::GetPaperSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->GetPaperSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// bool wxPageSetupDialogData::IsOk() const
	static int _bind_IsOk(lua_State *L) {
		if (!_lg_typecheck_IsOk(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPageSetupDialogData::IsOk() const function, expected prototype:\nbool wxPageSetupDialogData::IsOk() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPageSetupDialogData* self=Luna< wxObject >::checkSubType< wxPageSetupDialogData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPageSetupDialogData::IsOk() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsOk();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxPageSetupDialogData::SetDefaultInfo(bool flag)
	static int _bind_SetDefaultInfo(lua_State *L) {
		if (!_lg_typecheck_SetDefaultInfo(L)) {
			luaL_error(L, "luna typecheck failed in void wxPageSetupDialogData::SetDefaultInfo(bool flag) function, expected prototype:\nvoid wxPageSetupDialogData::SetDefaultInfo(bool flag)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		wxPageSetupDialogData* self=Luna< wxObject >::checkSubType< wxPageSetupDialogData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPageSetupDialogData::SetDefaultInfo(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetDefaultInfo(flag);

		return 0;
	}

	// void wxPageSetupDialogData::SetDefaultMinMargins(bool flag)
	static int _bind_SetDefaultMinMargins(lua_State *L) {
		if (!_lg_typecheck_SetDefaultMinMargins(L)) {
			luaL_error(L, "luna typecheck failed in void wxPageSetupDialogData::SetDefaultMinMargins(bool flag) function, expected prototype:\nvoid wxPageSetupDialogData::SetDefaultMinMargins(bool flag)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		wxPageSetupDialogData* self=Luna< wxObject >::checkSubType< wxPageSetupDialogData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPageSetupDialogData::SetDefaultMinMargins(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetDefaultMinMargins(flag);

		return 0;
	}

	// void wxPageSetupDialogData::SetMarginBottomRight(const wxPoint & pt)
	static int _bind_SetMarginBottomRight(lua_State *L) {
		if (!_lg_typecheck_SetMarginBottomRight(L)) {
			luaL_error(L, "luna typecheck failed in void wxPageSetupDialogData::SetMarginBottomRight(const wxPoint & pt) function, expected prototype:\nvoid wxPageSetupDialogData::SetMarginBottomRight(const wxPoint & pt)\nClass arguments details:\narg 1 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint* pt_ptr=(Luna< wxPoint >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxPageSetupDialogData::SetMarginBottomRight function");
		}
		const wxPoint & pt=*pt_ptr;

		wxPageSetupDialogData* self=Luna< wxObject >::checkSubType< wxPageSetupDialogData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPageSetupDialogData::SetMarginBottomRight(const wxPoint &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetMarginBottomRight(pt);

		return 0;
	}

	// void wxPageSetupDialogData::SetMarginTopLeft(const wxPoint & pt)
	static int _bind_SetMarginTopLeft(lua_State *L) {
		if (!_lg_typecheck_SetMarginTopLeft(L)) {
			luaL_error(L, "luna typecheck failed in void wxPageSetupDialogData::SetMarginTopLeft(const wxPoint & pt) function, expected prototype:\nvoid wxPageSetupDialogData::SetMarginTopLeft(const wxPoint & pt)\nClass arguments details:\narg 1 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint* pt_ptr=(Luna< wxPoint >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxPageSetupDialogData::SetMarginTopLeft function");
		}
		const wxPoint & pt=*pt_ptr;

		wxPageSetupDialogData* self=Luna< wxObject >::checkSubType< wxPageSetupDialogData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPageSetupDialogData::SetMarginTopLeft(const wxPoint &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetMarginTopLeft(pt);

		return 0;
	}

	// void wxPageSetupDialogData::SetMinMarginBottomRight(const wxPoint & pt)
	static int _bind_SetMinMarginBottomRight(lua_State *L) {
		if (!_lg_typecheck_SetMinMarginBottomRight(L)) {
			luaL_error(L, "luna typecheck failed in void wxPageSetupDialogData::SetMinMarginBottomRight(const wxPoint & pt) function, expected prototype:\nvoid wxPageSetupDialogData::SetMinMarginBottomRight(const wxPoint & pt)\nClass arguments details:\narg 1 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint* pt_ptr=(Luna< wxPoint >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxPageSetupDialogData::SetMinMarginBottomRight function");
		}
		const wxPoint & pt=*pt_ptr;

		wxPageSetupDialogData* self=Luna< wxObject >::checkSubType< wxPageSetupDialogData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPageSetupDialogData::SetMinMarginBottomRight(const wxPoint &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetMinMarginBottomRight(pt);

		return 0;
	}

	// void wxPageSetupDialogData::SetMinMarginTopLeft(const wxPoint & pt)
	static int _bind_SetMinMarginTopLeft(lua_State *L) {
		if (!_lg_typecheck_SetMinMarginTopLeft(L)) {
			luaL_error(L, "luna typecheck failed in void wxPageSetupDialogData::SetMinMarginTopLeft(const wxPoint & pt) function, expected prototype:\nvoid wxPageSetupDialogData::SetMinMarginTopLeft(const wxPoint & pt)\nClass arguments details:\narg 1 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint* pt_ptr=(Luna< wxPoint >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxPageSetupDialogData::SetMinMarginTopLeft function");
		}
		const wxPoint & pt=*pt_ptr;

		wxPageSetupDialogData* self=Luna< wxObject >::checkSubType< wxPageSetupDialogData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPageSetupDialogData::SetMinMarginTopLeft(const wxPoint &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetMinMarginTopLeft(pt);

		return 0;
	}

	// void wxPageSetupDialogData::SetPaperId(wxPaperSize id)
	static int _bind_SetPaperId(lua_State *L) {
		if (!_lg_typecheck_SetPaperId(L)) {
			luaL_error(L, "luna typecheck failed in void wxPageSetupDialogData::SetPaperId(wxPaperSize id) function, expected prototype:\nvoid wxPageSetupDialogData::SetPaperId(wxPaperSize id)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxPaperSize id=(wxPaperSize)lua_tointeger(L,2);

		wxPageSetupDialogData* self=Luna< wxObject >::checkSubType< wxPageSetupDialogData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPageSetupDialogData::SetPaperId(wxPaperSize). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetPaperId(id);

		return 0;
	}

	// void wxPageSetupDialogData::SetPaperSize(const wxSize & size)
	static int _bind_SetPaperSize(lua_State *L) {
		if (!_lg_typecheck_SetPaperSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxPageSetupDialogData::SetPaperSize(const wxSize & size) function, expected prototype:\nvoid wxPageSetupDialogData::SetPaperSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxPageSetupDialogData::SetPaperSize function");
		}
		const wxSize & size=*size_ptr;

		wxPageSetupDialogData* self=Luna< wxObject >::checkSubType< wxPageSetupDialogData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPageSetupDialogData::SetPaperSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetPaperSize(size);

		return 0;
	}

	// wxClassInfo * wxPageSetupDialogData::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxPageSetupDialogData::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxPageSetupDialogData::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPageSetupDialogData* self=Luna< wxObject >::checkSubType< wxPageSetupDialogData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxPageSetupDialogData::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxPageSetupDialogData::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}


	// Operator binds:
	// wxPageSetupDialogData & wxPageSetupDialogData::operator=(const wxPageSetupDialogData & data)
	static int _bind_op_assign(lua_State *L) {
		if (!_lg_typecheck_op_assign(L)) {
			luaL_error(L, "luna typecheck failed in wxPageSetupDialogData & wxPageSetupDialogData::operator=(const wxPageSetupDialogData & data) function, expected prototype:\nwxPageSetupDialogData & wxPageSetupDialogData::operator=(const wxPageSetupDialogData & data)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPageSetupDialogData* data_ptr=(Luna< wxObject >::checkSubType< wxPageSetupDialogData >(L,2));
		if( !data_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg data in wxPageSetupDialogData::operator= function");
		}
		const wxPageSetupDialogData & data=*data_ptr;

		wxPageSetupDialogData* self=Luna< wxObject >::checkSubType< wxPageSetupDialogData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPageSetupDialogData & wxPageSetupDialogData::operator=(const wxPageSetupDialogData &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxPageSetupDialogData* lret = &self->operator=(data);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPageSetupDialogData >::push(L,lret,false);

		return 1;
	}


};

wxPageSetupDialogData* LunaTraits< wxPageSetupDialogData >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxPageSetupDialogData::_bind_ctor(L);
}

void LunaTraits< wxPageSetupDialogData >::_bind_dtor(wxPageSetupDialogData* obj) {
	delete obj;
}

const char LunaTraits< wxPageSetupDialogData >::className[] = "wxPageSetupDialogData";
const char LunaTraits< wxPageSetupDialogData >::fullName[] = "wxPageSetupDialogData";
const char LunaTraits< wxPageSetupDialogData >::moduleName[] = "wx";
const char* LunaTraits< wxPageSetupDialogData >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxPageSetupDialogData >::hash = 43195140;
const int LunaTraits< wxPageSetupDialogData >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxPageSetupDialogData >::methods[] = {
	{"EnableHelp", &luna_wrapper_wxPageSetupDialogData::_bind_EnableHelp},
	{"EnableMargins", &luna_wrapper_wxPageSetupDialogData::_bind_EnableMargins},
	{"EnableOrientation", &luna_wrapper_wxPageSetupDialogData::_bind_EnableOrientation},
	{"EnablePaper", &luna_wrapper_wxPageSetupDialogData::_bind_EnablePaper},
	{"EnablePrinter", &luna_wrapper_wxPageSetupDialogData::_bind_EnablePrinter},
	{"GetDefaultInfo", &luna_wrapper_wxPageSetupDialogData::_bind_GetDefaultInfo},
	{"GetDefaultMinMargins", &luna_wrapper_wxPageSetupDialogData::_bind_GetDefaultMinMargins},
	{"GetEnableHelp", &luna_wrapper_wxPageSetupDialogData::_bind_GetEnableHelp},
	{"GetEnableMargins", &luna_wrapper_wxPageSetupDialogData::_bind_GetEnableMargins},
	{"GetEnableOrientation", &luna_wrapper_wxPageSetupDialogData::_bind_GetEnableOrientation},
	{"GetEnablePaper", &luna_wrapper_wxPageSetupDialogData::_bind_GetEnablePaper},
	{"GetEnablePrinter", &luna_wrapper_wxPageSetupDialogData::_bind_GetEnablePrinter},
	{"GetMarginBottomRight", &luna_wrapper_wxPageSetupDialogData::_bind_GetMarginBottomRight},
	{"GetMarginTopLeft", &luna_wrapper_wxPageSetupDialogData::_bind_GetMarginTopLeft},
	{"GetMinMarginBottomRight", &luna_wrapper_wxPageSetupDialogData::_bind_GetMinMarginBottomRight},
	{"GetMinMarginTopLeft", &luna_wrapper_wxPageSetupDialogData::_bind_GetMinMarginTopLeft},
	{"GetPaperId", &luna_wrapper_wxPageSetupDialogData::_bind_GetPaperId},
	{"GetPaperSize", &luna_wrapper_wxPageSetupDialogData::_bind_GetPaperSize},
	{"IsOk", &luna_wrapper_wxPageSetupDialogData::_bind_IsOk},
	{"SetDefaultInfo", &luna_wrapper_wxPageSetupDialogData::_bind_SetDefaultInfo},
	{"SetDefaultMinMargins", &luna_wrapper_wxPageSetupDialogData::_bind_SetDefaultMinMargins},
	{"SetMarginBottomRight", &luna_wrapper_wxPageSetupDialogData::_bind_SetMarginBottomRight},
	{"SetMarginTopLeft", &luna_wrapper_wxPageSetupDialogData::_bind_SetMarginTopLeft},
	{"SetMinMarginBottomRight", &luna_wrapper_wxPageSetupDialogData::_bind_SetMinMarginBottomRight},
	{"SetMinMarginTopLeft", &luna_wrapper_wxPageSetupDialogData::_bind_SetMinMarginTopLeft},
	{"SetPaperId", &luna_wrapper_wxPageSetupDialogData::_bind_SetPaperId},
	{"SetPaperSize", &luna_wrapper_wxPageSetupDialogData::_bind_SetPaperSize},
	{"base_GetClassInfo", &luna_wrapper_wxPageSetupDialogData::_bind_base_GetClassInfo},
	{"op_assign", &luna_wrapper_wxPageSetupDialogData::_bind_op_assign},
	{"fromVoid", &luna_wrapper_wxPageSetupDialogData::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxPageSetupDialogData::_bind_asVoid},
	{"getTable", &luna_wrapper_wxPageSetupDialogData::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxPageSetupDialogData >::converters[] = {
	{"wxObject", &luna_wrapper_wxPageSetupDialogData::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxPageSetupDialogData >::enumValues[] = {
	{0,0}
};



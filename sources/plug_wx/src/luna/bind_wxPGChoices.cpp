#include <plug_common.h>

class luna_wrapper_wxPGChoices {
public:
	typedef Luna< wxPGChoices > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,69274883) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxPGChoices*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxPGChoices* rhs =(Luna< wxPGChoices >::check(L,2));
		wxPGChoices* self=(Luna< wxPGChoices >::check(L,1));
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

		wxPGChoices* self= (wxPGChoices*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxPGChoices >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,69274883) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxPGChoices >::check(L,1));
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

		wxPGChoices* self=(Luna< wxPGChoices >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxPGChoices");
		
		return luna_dynamicCast(L,converters,"wxPGChoices",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,69274883) ) return false;
		if( (!(Luna< wxPGChoices >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,59507769) ) return false;
		if( (!(Luna< wxArrayString >::check(L,1))) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,47342076) ) return false;
		if( luatop>1 && (!(Luna< wxArrayInt >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,60960840)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< wxObjectRefData >::checkSubType< wxPGChoicesData >(L,1)) ) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Assign(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,69274883) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AssignData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,60960840)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Clear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Copy(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLabel(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetValue(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetValuesForStrings(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,59507769) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetIndicesForStrings(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,59507769) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,59507769)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Index_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Index_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Insert_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Insert_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxPGChoiceEntry >(L,2))) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsOk(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Item_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Item_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RemoveAt(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Set(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,59507769) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,47342076) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetLabels(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 3 valid operators)
	inline static bool _lg_typecheck_op_assign(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,69274883) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_index_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_index_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Constructor binds:
	// wxPGChoices::wxPGChoices()
	static wxPGChoices* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxPGChoices::wxPGChoices() function, expected prototype:\nwxPGChoices::wxPGChoices()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxPGChoices();
	}

	// wxPGChoices::wxPGChoices(const wxPGChoices & a)
	static wxPGChoices* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxPGChoices::wxPGChoices(const wxPGChoices & a) function, expected prototype:\nwxPGChoices::wxPGChoices(const wxPGChoices & a)\nClass arguments details:\narg 1 ID = 69274883\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPGChoices* a_ptr=(Luna< wxPGChoices >::check(L,1));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in wxPGChoices::wxPGChoices function");
		}
		const wxPGChoices & a=*a_ptr;

		return new wxPGChoices(a);
	}

	// wxPGChoices::wxPGChoices(const wxArrayString & labels, const wxArrayInt & values = wxArrayInt ())
	static wxPGChoices* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in wxPGChoices::wxPGChoices(const wxArrayString & labels, const wxArrayInt & values = wxArrayInt ()) function, expected prototype:\nwxPGChoices::wxPGChoices(const wxArrayString & labels, const wxArrayInt & values = wxArrayInt ())\nClass arguments details:\narg 1 ID = 59507769\narg 2 ID = 47342076\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxArrayString* labels_ptr=(Luna< wxArrayString >::check(L,1));
		if( !labels_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg labels in wxPGChoices::wxPGChoices function");
		}
		const wxArrayString & labels=*labels_ptr;
		const wxArrayInt* values_ptr=luatop>1 ? (Luna< wxArrayInt >::check(L,2)) : NULL;
		if( luatop>1 && !values_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg values in wxPGChoices::wxPGChoices function");
		}
		const wxArrayInt & values=luatop>1 ? *values_ptr : (const wxArrayInt&)wxArrayInt ();

		return new wxPGChoices(labels, values);
	}

	// wxPGChoices::wxPGChoices(wxPGChoicesData * data)
	static wxPGChoices* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in wxPGChoices::wxPGChoices(wxPGChoicesData * data) function, expected prototype:\nwxPGChoices::wxPGChoices(wxPGChoicesData * data)\nClass arguments details:\narg 1 ID = 60960840\n\n%s",luna_dumpStack(L).c_str());
		}

		wxPGChoicesData* data=(Luna< wxObjectRefData >::checkSubType< wxPGChoicesData >(L,1));

		return new wxPGChoices(data);
	}

	// Overload binder for wxPGChoices::wxPGChoices
	static wxPGChoices* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function wxPGChoices, cannot match any of the overloads for function wxPGChoices:\n  wxPGChoices()\n  wxPGChoices(const wxPGChoices &)\n  wxPGChoices(const wxArrayString &, const wxArrayInt &)\n  wxPGChoices(wxPGChoicesData *)\n");
		return NULL;
	}


	// Function binds:
	// void wxPGChoices::Assign(const wxPGChoices & a)
	static int _bind_Assign(lua_State *L) {
		if (!_lg_typecheck_Assign(L)) {
			luaL_error(L, "luna typecheck failed in void wxPGChoices::Assign(const wxPGChoices & a) function, expected prototype:\nvoid wxPGChoices::Assign(const wxPGChoices & a)\nClass arguments details:\narg 1 ID = 69274883\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPGChoices* a_ptr=(Luna< wxPGChoices >::check(L,2));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in wxPGChoices::Assign function");
		}
		const wxPGChoices & a=*a_ptr;

		wxPGChoices* self=(Luna< wxPGChoices >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPGChoices::Assign(const wxPGChoices &). Got : '%s'\n%s",typeid(Luna< wxPGChoices >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Assign(a);

		return 0;
	}

	// void wxPGChoices::AssignData(wxPGChoicesData * data)
	static int _bind_AssignData(lua_State *L) {
		if (!_lg_typecheck_AssignData(L)) {
			luaL_error(L, "luna typecheck failed in void wxPGChoices::AssignData(wxPGChoicesData * data) function, expected prototype:\nvoid wxPGChoices::AssignData(wxPGChoicesData * data)\nClass arguments details:\narg 1 ID = 60960840\n\n%s",luna_dumpStack(L).c_str());
		}

		wxPGChoicesData* data=(Luna< wxObjectRefData >::checkSubType< wxPGChoicesData >(L,2));

		wxPGChoices* self=(Luna< wxPGChoices >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPGChoices::AssignData(wxPGChoicesData *). Got : '%s'\n%s",typeid(Luna< wxPGChoices >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AssignData(data);

		return 0;
	}

	// void wxPGChoices::Clear()
	static int _bind_Clear(lua_State *L) {
		if (!_lg_typecheck_Clear(L)) {
			luaL_error(L, "luna typecheck failed in void wxPGChoices::Clear() function, expected prototype:\nvoid wxPGChoices::Clear()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPGChoices* self=(Luna< wxPGChoices >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPGChoices::Clear(). Got : '%s'\n%s",typeid(Luna< wxPGChoices >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Clear();

		return 0;
	}

	// wxPGChoices wxPGChoices::Copy() const
	static int _bind_Copy(lua_State *L) {
		if (!_lg_typecheck_Copy(L)) {
			luaL_error(L, "luna typecheck failed in wxPGChoices wxPGChoices::Copy() const function, expected prototype:\nwxPGChoices wxPGChoices::Copy() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPGChoices* self=(Luna< wxPGChoices >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPGChoices wxPGChoices::Copy() const. Got : '%s'\n%s",typeid(Luna< wxPGChoices >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPGChoices stack_lret = self->Copy();
		wxPGChoices* lret = new wxPGChoices(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPGChoices >::push(L,lret,true);

		return 1;
	}

	// const wxString & wxPGChoices::GetLabel(unsigned int ind) const
	static int _bind_GetLabel(lua_State *L) {
		if (!_lg_typecheck_GetLabel(L)) {
			luaL_error(L, "luna typecheck failed in const wxString & wxPGChoices::GetLabel(unsigned int ind) const function, expected prototype:\nconst wxString & wxPGChoices::GetLabel(unsigned int ind) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int ind=(unsigned int)lua_tointeger(L,2);

		wxPGChoices* self=(Luna< wxPGChoices >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxString & wxPGChoices::GetLabel(unsigned int) const. Got : '%s'\n%s",typeid(Luna< wxPGChoices >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxString & lret = self->GetLabel(ind);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// unsigned int wxPGChoices::GetCount() const
	static int _bind_GetCount(lua_State *L) {
		if (!_lg_typecheck_GetCount(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int wxPGChoices::GetCount() const function, expected prototype:\nunsigned int wxPGChoices::GetCount() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPGChoices* self=(Luna< wxPGChoices >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int wxPGChoices::GetCount() const. Got : '%s'\n%s",typeid(Luna< wxPGChoices >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->GetCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxPGChoices::GetValue(unsigned int ind) const
	static int _bind_GetValue(lua_State *L) {
		if (!_lg_typecheck_GetValue(L)) {
			luaL_error(L, "luna typecheck failed in int wxPGChoices::GetValue(unsigned int ind) const function, expected prototype:\nint wxPGChoices::GetValue(unsigned int ind) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int ind=(unsigned int)lua_tointeger(L,2);

		wxPGChoices* self=(Luna< wxPGChoices >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxPGChoices::GetValue(unsigned int) const. Got : '%s'\n%s",typeid(Luna< wxPGChoices >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetValue(ind);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxArrayInt wxPGChoices::GetValuesForStrings(const wxArrayString & strings) const
	static int _bind_GetValuesForStrings(lua_State *L) {
		if (!_lg_typecheck_GetValuesForStrings(L)) {
			luaL_error(L, "luna typecheck failed in wxArrayInt wxPGChoices::GetValuesForStrings(const wxArrayString & strings) const function, expected prototype:\nwxArrayInt wxPGChoices::GetValuesForStrings(const wxArrayString & strings) const\nClass arguments details:\narg 1 ID = 59507769\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxArrayString* strings_ptr=(Luna< wxArrayString >::check(L,2));
		if( !strings_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg strings in wxPGChoices::GetValuesForStrings function");
		}
		const wxArrayString & strings=*strings_ptr;

		wxPGChoices* self=(Luna< wxPGChoices >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxArrayInt wxPGChoices::GetValuesForStrings(const wxArrayString &) const. Got : '%s'\n%s",typeid(Luna< wxPGChoices >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxArrayInt stack_lret = self->GetValuesForStrings(strings);
		wxArrayInt* lret = new wxArrayInt(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxArrayInt >::push(L,lret,true);

		return 1;
	}

	// wxArrayInt wxPGChoices::GetIndicesForStrings(const wxArrayString & strings, wxArrayString * unmatched = NULL) const
	static int _bind_GetIndicesForStrings(lua_State *L) {
		if (!_lg_typecheck_GetIndicesForStrings(L)) {
			luaL_error(L, "luna typecheck failed in wxArrayInt wxPGChoices::GetIndicesForStrings(const wxArrayString & strings, wxArrayString * unmatched = NULL) const function, expected prototype:\nwxArrayInt wxPGChoices::GetIndicesForStrings(const wxArrayString & strings, wxArrayString * unmatched = NULL) const\nClass arguments details:\narg 1 ID = 59507769\narg 2 ID = 59507769\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxArrayString* strings_ptr=(Luna< wxArrayString >::check(L,2));
		if( !strings_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg strings in wxPGChoices::GetIndicesForStrings function");
		}
		const wxArrayString & strings=*strings_ptr;
		wxArrayString* unmatched=luatop>2 ? (Luna< wxArrayString >::check(L,3)) : (wxArrayString*)NULL;

		wxPGChoices* self=(Luna< wxPGChoices >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxArrayInt wxPGChoices::GetIndicesForStrings(const wxArrayString &, wxArrayString *) const. Got : '%s'\n%s",typeid(Luna< wxPGChoices >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxArrayInt stack_lret = self->GetIndicesForStrings(strings, unmatched);
		wxArrayInt* lret = new wxArrayInt(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxArrayInt >::push(L,lret,true);

		return 1;
	}

	// int wxPGChoices::Index(const wxString & label) const
	static int _bind_Index_overload_1(lua_State *L) {
		if (!_lg_typecheck_Index_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in int wxPGChoices::Index(const wxString & label) const function, expected prototype:\nint wxPGChoices::Index(const wxString & label) const\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString label(lua_tostring(L,2),lua_objlen(L,2));

		wxPGChoices* self=(Luna< wxPGChoices >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxPGChoices::Index(const wxString &) const. Got : '%s'\n%s",typeid(Luna< wxPGChoices >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->Index(label);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxPGChoices::Index(int val) const
	static int _bind_Index_overload_2(lua_State *L) {
		if (!_lg_typecheck_Index_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in int wxPGChoices::Index(int val) const function, expected prototype:\nint wxPGChoices::Index(int val) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int val=(int)lua_tointeger(L,2);

		wxPGChoices* self=(Luna< wxPGChoices >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxPGChoices::Index(int) const. Got : '%s'\n%s",typeid(Luna< wxPGChoices >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->Index(val);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for wxPGChoices::Index
	static int _bind_Index(lua_State *L) {
		if (_lg_typecheck_Index_overload_1(L)) return _bind_Index_overload_1(L);
		if (_lg_typecheck_Index_overload_2(L)) return _bind_Index_overload_2(L);

		luaL_error(L, "error in function Index, cannot match any of the overloads for function Index:\n  Index(const wxString &)\n  Index(int)\n");
		return 0;
	}

	// wxPGChoiceEntry & wxPGChoices::Insert(const wxString & label, int index, int value = wxPG_INVALID_VALUE)
	static int _bind_Insert_overload_1(lua_State *L) {
		if (!_lg_typecheck_Insert_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxPGChoiceEntry & wxPGChoices::Insert(const wxString & label, int index, int value = wxPG_INVALID_VALUE) function, expected prototype:\nwxPGChoiceEntry & wxPGChoices::Insert(const wxString & label, int index, int value = wxPG_INVALID_VALUE)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString label(lua_tostring(L,2),lua_objlen(L,2));
		int index=(int)lua_tointeger(L,3);
		int value=luatop>3 ? (int)lua_tointeger(L,4) : (int)wxPG_INVALID_VALUE;

		wxPGChoices* self=(Luna< wxPGChoices >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPGChoiceEntry & wxPGChoices::Insert(const wxString &, int, int). Got : '%s'\n%s",typeid(Luna< wxPGChoices >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxPGChoiceEntry* lret = &self->Insert(label, index, value);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPGChoiceEntry >::push(L,lret,false);

		return 1;
	}

	// wxPGChoiceEntry & wxPGChoices::Insert(const wxPGChoiceEntry & entry, int index)
	static int _bind_Insert_overload_2(lua_State *L) {
		if (!_lg_typecheck_Insert_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxPGChoiceEntry & wxPGChoices::Insert(const wxPGChoiceEntry & entry, int index) function, expected prototype:\nwxPGChoiceEntry & wxPGChoices::Insert(const wxPGChoiceEntry & entry, int index)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPGChoiceEntry* entry_ptr=(Luna< wxObject >::checkSubType< wxPGChoiceEntry >(L,2));
		if( !entry_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg entry in wxPGChoices::Insert function");
		}
		const wxPGChoiceEntry & entry=*entry_ptr;
		int index=(int)lua_tointeger(L,3);

		wxPGChoices* self=(Luna< wxPGChoices >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPGChoiceEntry & wxPGChoices::Insert(const wxPGChoiceEntry &, int). Got : '%s'\n%s",typeid(Luna< wxPGChoices >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxPGChoiceEntry* lret = &self->Insert(entry, index);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPGChoiceEntry >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxPGChoices::Insert
	static int _bind_Insert(lua_State *L) {
		if (_lg_typecheck_Insert_overload_1(L)) return _bind_Insert_overload_1(L);
		if (_lg_typecheck_Insert_overload_2(L)) return _bind_Insert_overload_2(L);

		luaL_error(L, "error in function Insert, cannot match any of the overloads for function Insert:\n  Insert(const wxString &, int, int)\n  Insert(const wxPGChoiceEntry &, int)\n");
		return 0;
	}

	// bool wxPGChoices::IsOk() const
	static int _bind_IsOk(lua_State *L) {
		if (!_lg_typecheck_IsOk(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPGChoices::IsOk() const function, expected prototype:\nbool wxPGChoices::IsOk() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPGChoices* self=(Luna< wxPGChoices >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPGChoices::IsOk() const. Got : '%s'\n%s",typeid(Luna< wxPGChoices >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsOk();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const wxPGChoiceEntry & wxPGChoices::Item(unsigned int i) const
	static int _bind_Item_overload_1(lua_State *L) {
		if (!_lg_typecheck_Item_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const wxPGChoiceEntry & wxPGChoices::Item(unsigned int i) const function, expected prototype:\nconst wxPGChoiceEntry & wxPGChoices::Item(unsigned int i) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		wxPGChoices* self=(Luna< wxPGChoices >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxPGChoiceEntry & wxPGChoices::Item(unsigned int) const. Got : '%s'\n%s",typeid(Luna< wxPGChoices >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxPGChoiceEntry* lret = &self->Item(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPGChoiceEntry >::push(L,lret,false);

		return 1;
	}

	// wxPGChoiceEntry & wxPGChoices::Item(unsigned int i)
	static int _bind_Item_overload_2(lua_State *L) {
		if (!_lg_typecheck_Item_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxPGChoiceEntry & wxPGChoices::Item(unsigned int i) function, expected prototype:\nwxPGChoiceEntry & wxPGChoices::Item(unsigned int i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		wxPGChoices* self=(Luna< wxPGChoices >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPGChoiceEntry & wxPGChoices::Item(unsigned int). Got : '%s'\n%s",typeid(Luna< wxPGChoices >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxPGChoiceEntry* lret = &self->Item(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPGChoiceEntry >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxPGChoices::Item
	static int _bind_Item(lua_State *L) {
		if (_lg_typecheck_Item_overload_1(L)) return _bind_Item_overload_1(L);
		if (_lg_typecheck_Item_overload_2(L)) return _bind_Item_overload_2(L);

		luaL_error(L, "error in function Item, cannot match any of the overloads for function Item:\n  Item(unsigned int)\n  Item(unsigned int)\n");
		return 0;
	}

	// void wxPGChoices::RemoveAt(size_t nIndex, size_t count = 1)
	static int _bind_RemoveAt(lua_State *L) {
		if (!_lg_typecheck_RemoveAt(L)) {
			luaL_error(L, "luna typecheck failed in void wxPGChoices::RemoveAt(size_t nIndex, size_t count = 1) function, expected prototype:\nvoid wxPGChoices::RemoveAt(size_t nIndex, size_t count = 1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		size_t nIndex=(size_t)lua_tointeger(L,2);
		size_t count=luatop>2 ? (size_t)lua_tointeger(L,3) : (size_t)1;

		wxPGChoices* self=(Luna< wxPGChoices >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPGChoices::RemoveAt(size_t, size_t). Got : '%s'\n%s",typeid(Luna< wxPGChoices >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RemoveAt(nIndex, count);

		return 0;
	}

	// void wxPGChoices::Set(const wxArrayString & labels, const wxArrayInt & values = wxArrayInt ())
	static int _bind_Set(lua_State *L) {
		if (!_lg_typecheck_Set(L)) {
			luaL_error(L, "luna typecheck failed in void wxPGChoices::Set(const wxArrayString & labels, const wxArrayInt & values = wxArrayInt ()) function, expected prototype:\nvoid wxPGChoices::Set(const wxArrayString & labels, const wxArrayInt & values = wxArrayInt ())\nClass arguments details:\narg 1 ID = 59507769\narg 2 ID = 47342076\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxArrayString* labels_ptr=(Luna< wxArrayString >::check(L,2));
		if( !labels_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg labels in wxPGChoices::Set function");
		}
		const wxArrayString & labels=*labels_ptr;
		const wxArrayInt* values_ptr=luatop>2 ? (Luna< wxArrayInt >::check(L,3)) : NULL;
		if( luatop>2 && !values_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg values in wxPGChoices::Set function");
		}
		const wxArrayInt & values=luatop>2 ? *values_ptr : (const wxArrayInt&)wxArrayInt ();

		wxPGChoices* self=(Luna< wxPGChoices >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPGChoices::Set(const wxArrayString &, const wxArrayInt &). Got : '%s'\n%s",typeid(Luna< wxPGChoices >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Set(labels, values);

		return 0;
	}

	// wxArrayString wxPGChoices::GetLabels() const
	static int _bind_GetLabels(lua_State *L) {
		if (!_lg_typecheck_GetLabels(L)) {
			luaL_error(L, "luna typecheck failed in wxArrayString wxPGChoices::GetLabels() const function, expected prototype:\nwxArrayString wxPGChoices::GetLabels() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPGChoices* self=(Luna< wxPGChoices >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxArrayString wxPGChoices::GetLabels() const. Got : '%s'\n%s",typeid(Luna< wxPGChoices >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxArrayString stack_lret = self->GetLabels();
		wxArrayString* lret = new wxArrayString(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxArrayString >::push(L,lret,true);

		return 1;
	}


	// Operator binds:
	// void wxPGChoices::operator=(const wxPGChoices & a)
	static int _bind_op_assign(lua_State *L) {
		if (!_lg_typecheck_op_assign(L)) {
			luaL_error(L, "luna typecheck failed in void wxPGChoices::operator=(const wxPGChoices & a) function, expected prototype:\nvoid wxPGChoices::operator=(const wxPGChoices & a)\nClass arguments details:\narg 1 ID = 69274883\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPGChoices* a_ptr=(Luna< wxPGChoices >::check(L,2));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in wxPGChoices::operator= function");
		}
		const wxPGChoices & a=*a_ptr;

		wxPGChoices* self=(Luna< wxPGChoices >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPGChoices::operator=(const wxPGChoices &). Got : '%s'\n%s",typeid(Luna< wxPGChoices >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->operator=(a);

		return 0;
	}

	// wxPGChoiceEntry & wxPGChoices::operator[](unsigned int i)
	static int _bind_op_index_overload_1(lua_State *L) {
		if (!_lg_typecheck_op_index_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxPGChoiceEntry & wxPGChoices::operator[](unsigned int i) function, expected prototype:\nwxPGChoiceEntry & wxPGChoices::operator[](unsigned int i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		wxPGChoices* self=(Luna< wxPGChoices >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPGChoiceEntry & wxPGChoices::operator[](unsigned int). Got : '%s'\n%s",typeid(Luna< wxPGChoices >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxPGChoiceEntry* lret = &self->operator[](i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPGChoiceEntry >::push(L,lret,false);

		return 1;
	}

	// const wxPGChoiceEntry & wxPGChoices::operator[](unsigned int i) const
	static int _bind_op_index_overload_2(lua_State *L) {
		if (!_lg_typecheck_op_index_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const wxPGChoiceEntry & wxPGChoices::operator[](unsigned int i) const function, expected prototype:\nconst wxPGChoiceEntry & wxPGChoices::operator[](unsigned int i) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		wxPGChoices* self=(Luna< wxPGChoices >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxPGChoiceEntry & wxPGChoices::operator[](unsigned int) const. Got : '%s'\n%s",typeid(Luna< wxPGChoices >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxPGChoiceEntry* lret = &self->operator[](i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPGChoiceEntry >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxPGChoices::operator[]
	static int _bind_op_index(lua_State *L) {
		if (_lg_typecheck_op_index_overload_1(L)) return _bind_op_index_overload_1(L);
		if (_lg_typecheck_op_index_overload_2(L)) return _bind_op_index_overload_2(L);

		luaL_error(L, "error in function operator[], cannot match any of the overloads for function operator[]:\n  operator[](unsigned int)\n  operator[](unsigned int)\n");
		return 0;
	}


};

wxPGChoices* LunaTraits< wxPGChoices >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxPGChoices::_bind_ctor(L);
}

void LunaTraits< wxPGChoices >::_bind_dtor(wxPGChoices* obj) {
	delete obj;
}

const char LunaTraits< wxPGChoices >::className[] = "wxPGChoices";
const char LunaTraits< wxPGChoices >::fullName[] = "wxPGChoices";
const char LunaTraits< wxPGChoices >::moduleName[] = "wx";
const char* LunaTraits< wxPGChoices >::parents[] = {0};
const int LunaTraits< wxPGChoices >::hash = 69274883;
const int LunaTraits< wxPGChoices >::uniqueIDs[] = {69274883,0};

luna_RegType LunaTraits< wxPGChoices >::methods[] = {
	{"Assign", &luna_wrapper_wxPGChoices::_bind_Assign},
	{"AssignData", &luna_wrapper_wxPGChoices::_bind_AssignData},
	{"Clear", &luna_wrapper_wxPGChoices::_bind_Clear},
	{"Copy", &luna_wrapper_wxPGChoices::_bind_Copy},
	{"GetLabel", &luna_wrapper_wxPGChoices::_bind_GetLabel},
	{"GetCount", &luna_wrapper_wxPGChoices::_bind_GetCount},
	{"GetValue", &luna_wrapper_wxPGChoices::_bind_GetValue},
	{"GetValuesForStrings", &luna_wrapper_wxPGChoices::_bind_GetValuesForStrings},
	{"GetIndicesForStrings", &luna_wrapper_wxPGChoices::_bind_GetIndicesForStrings},
	{"Index", &luna_wrapper_wxPGChoices::_bind_Index},
	{"Insert", &luna_wrapper_wxPGChoices::_bind_Insert},
	{"IsOk", &luna_wrapper_wxPGChoices::_bind_IsOk},
	{"Item", &luna_wrapper_wxPGChoices::_bind_Item},
	{"RemoveAt", &luna_wrapper_wxPGChoices::_bind_RemoveAt},
	{"Set", &luna_wrapper_wxPGChoices::_bind_Set},
	{"GetLabels", &luna_wrapper_wxPGChoices::_bind_GetLabels},
	{"op_assign", &luna_wrapper_wxPGChoices::_bind_op_assign},
	{"op_index", &luna_wrapper_wxPGChoices::_bind_op_index},
	{"dynCast", &luna_wrapper_wxPGChoices::_bind_dynCast},
	{"__eq", &luna_wrapper_wxPGChoices::_bind___eq},
	{"fromVoid", &luna_wrapper_wxPGChoices::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxPGChoices::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< wxPGChoices >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxPGChoices >::enumValues[] = {
	{0,0}
};



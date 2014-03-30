#include <plug_common.h>

#include <luna/wrappers/wrapper_wxGenericValidator.h>

class luna_wrapper_wxGenericValidator {
public:
	typedef Luna< wxGenericValidator > luna_t;

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

		wxGenericValidator* self= (wxGenericValidator*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxGenericValidator >::push(L,self,false);
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
		//wxGenericValidator* ptr= dynamic_cast< wxGenericValidator* >(Luna< wxObject >::check(L,1));
		wxGenericValidator* ptr= luna_caster< wxObject, wxGenericValidator >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxGenericValidator >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxGenericValidator >(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,47342076)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< wxArrayInt >::check(L,1)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,57497519)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< wxDateTime >::check(L,1)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_7(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,53530938)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< wxFileName >::check(L,1)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_8(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_9(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_10(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxGenericValidator >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_11(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_12(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_13(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_14(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,47342076)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxArrayInt >::check(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_15(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,57497519)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxDateTime >::check(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_16(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,53530938)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxFileName >::check(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_17(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_18(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Clone(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_TransferFromWindow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_TransferToWindow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_QueueEvent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_AddPendingEvent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_ProcessEvent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetNextHandler(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetPreviousHandler(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Validate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Clone(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_TransferFromWindow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_TransferToWindow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxGenericValidator::wxGenericValidator(const wxGenericValidator & validator)
	static wxGenericValidator* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxGenericValidator::wxGenericValidator(const wxGenericValidator & validator) function, expected prototype:\nwxGenericValidator::wxGenericValidator(const wxGenericValidator & validator)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxGenericValidator* validator_ptr=(Luna< wxObject >::checkSubType< wxGenericValidator >(L,1));
		if( !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxGenericValidator::wxGenericValidator function");
		}
		const wxGenericValidator & validator=*validator_ptr;

		return new wxGenericValidator(validator);
	}

	// wxGenericValidator::wxGenericValidator(bool * valPtr)
	static wxGenericValidator* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxGenericValidator::wxGenericValidator(bool * valPtr) function, expected prototype:\nwxGenericValidator::wxGenericValidator(bool * valPtr)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool* valPtr=(bool*)(Luna< void >::check(L,1));

		return new wxGenericValidator(valPtr);
	}

	// wxGenericValidator::wxGenericValidator(wxString * valPtr)
	static wxGenericValidator* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in wxGenericValidator::wxGenericValidator(wxString * valPtr) function, expected prototype:\nwxGenericValidator::wxGenericValidator(wxString * valPtr)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString valPtr(lua_tostring(L,1),lua_objlen(L,1));

		return new wxGenericValidator(&valPtr);
	}

	// wxGenericValidator::wxGenericValidator(int * valPtr)
	static wxGenericValidator* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in wxGenericValidator::wxGenericValidator(int * valPtr) function, expected prototype:\nwxGenericValidator::wxGenericValidator(int * valPtr)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int* valPtr=(int*)Luna< void >::check(L,1);

		return new wxGenericValidator(valPtr);
	}

	// wxGenericValidator::wxGenericValidator(wxArrayInt * valPtr)
	static wxGenericValidator* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in wxGenericValidator::wxGenericValidator(wxArrayInt * valPtr) function, expected prototype:\nwxGenericValidator::wxGenericValidator(wxArrayInt * valPtr)\nClass arguments details:\narg 1 ID = 47342076\n\n%s",luna_dumpStack(L).c_str());
		}

		wxArrayInt* valPtr=(Luna< wxArrayInt >::check(L,1));

		return new wxGenericValidator(valPtr);
	}

	// wxGenericValidator::wxGenericValidator(wxDateTime * valPtr)
	static wxGenericValidator* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in wxGenericValidator::wxGenericValidator(wxDateTime * valPtr) function, expected prototype:\nwxGenericValidator::wxGenericValidator(wxDateTime * valPtr)\nClass arguments details:\narg 1 ID = 57497519\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDateTime* valPtr=(Luna< wxDateTime >::check(L,1));

		return new wxGenericValidator(valPtr);
	}

	// wxGenericValidator::wxGenericValidator(wxFileName * valPtr)
	static wxGenericValidator* _bind_ctor_overload_7(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_7(L)) {
			luaL_error(L, "luna typecheck failed in wxGenericValidator::wxGenericValidator(wxFileName * valPtr) function, expected prototype:\nwxGenericValidator::wxGenericValidator(wxFileName * valPtr)\nClass arguments details:\narg 1 ID = 53530938\n\n%s",luna_dumpStack(L).c_str());
		}

		wxFileName* valPtr=(Luna< wxFileName >::check(L,1));

		return new wxGenericValidator(valPtr);
	}

	// wxGenericValidator::wxGenericValidator(float * valPtr)
	static wxGenericValidator* _bind_ctor_overload_8(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_8(L)) {
			luaL_error(L, "luna typecheck failed in wxGenericValidator::wxGenericValidator(float * valPtr) function, expected prototype:\nwxGenericValidator::wxGenericValidator(float * valPtr)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float* valPtr=(float*)Luna< void >::check(L,1);

		return new wxGenericValidator(valPtr);
	}

	// wxGenericValidator::wxGenericValidator(double * valPtr)
	static wxGenericValidator* _bind_ctor_overload_9(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_9(L)) {
			luaL_error(L, "luna typecheck failed in wxGenericValidator::wxGenericValidator(double * valPtr) function, expected prototype:\nwxGenericValidator::wxGenericValidator(double * valPtr)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double* valPtr=(double*)Luna< void >::check(L,1);

		return new wxGenericValidator(valPtr);
	}

	// wxGenericValidator::wxGenericValidator(lua_Table * data, const wxGenericValidator & validator)
	static wxGenericValidator* _bind_ctor_overload_10(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_10(L)) {
			luaL_error(L, "luna typecheck failed in wxGenericValidator::wxGenericValidator(lua_Table * data, const wxGenericValidator & validator) function, expected prototype:\nwxGenericValidator::wxGenericValidator(lua_Table * data, const wxGenericValidator & validator)\nClass arguments details:\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxGenericValidator* validator_ptr=(Luna< wxObject >::checkSubType< wxGenericValidator >(L,2));
		if( !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxGenericValidator::wxGenericValidator function");
		}
		const wxGenericValidator & validator=*validator_ptr;

		return new wrapper_wxGenericValidator(L,NULL, validator);
	}

	// wxGenericValidator::wxGenericValidator(lua_Table * data, bool * valPtr)
	static wxGenericValidator* _bind_ctor_overload_11(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_11(L)) {
			luaL_error(L, "luna typecheck failed in wxGenericValidator::wxGenericValidator(lua_Table * data, bool * valPtr) function, expected prototype:\nwxGenericValidator::wxGenericValidator(lua_Table * data, bool * valPtr)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool* valPtr=(bool*)(Luna< void >::check(L,2));

		return new wrapper_wxGenericValidator(L,NULL, valPtr);
	}

	// wxGenericValidator::wxGenericValidator(lua_Table * data, wxString * valPtr)
	static wxGenericValidator* _bind_ctor_overload_12(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_12(L)) {
			luaL_error(L, "luna typecheck failed in wxGenericValidator::wxGenericValidator(lua_Table * data, wxString * valPtr) function, expected prototype:\nwxGenericValidator::wxGenericValidator(lua_Table * data, wxString * valPtr)\nClass arguments details:\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString valPtr(lua_tostring(L,2),lua_objlen(L,2));

		return new wrapper_wxGenericValidator(L,NULL, &valPtr);
	}

	// wxGenericValidator::wxGenericValidator(lua_Table * data, int * valPtr)
	static wxGenericValidator* _bind_ctor_overload_13(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_13(L)) {
			luaL_error(L, "luna typecheck failed in wxGenericValidator::wxGenericValidator(lua_Table * data, int * valPtr) function, expected prototype:\nwxGenericValidator::wxGenericValidator(lua_Table * data, int * valPtr)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int* valPtr=(int*)Luna< void >::check(L,2);

		return new wrapper_wxGenericValidator(L,NULL, valPtr);
	}

	// wxGenericValidator::wxGenericValidator(lua_Table * data, wxArrayInt * valPtr)
	static wxGenericValidator* _bind_ctor_overload_14(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_14(L)) {
			luaL_error(L, "luna typecheck failed in wxGenericValidator::wxGenericValidator(lua_Table * data, wxArrayInt * valPtr) function, expected prototype:\nwxGenericValidator::wxGenericValidator(lua_Table * data, wxArrayInt * valPtr)\nClass arguments details:\narg 2 ID = 47342076\n\n%s",luna_dumpStack(L).c_str());
		}

		wxArrayInt* valPtr=(Luna< wxArrayInt >::check(L,2));

		return new wrapper_wxGenericValidator(L,NULL, valPtr);
	}

	// wxGenericValidator::wxGenericValidator(lua_Table * data, wxDateTime * valPtr)
	static wxGenericValidator* _bind_ctor_overload_15(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_15(L)) {
			luaL_error(L, "luna typecheck failed in wxGenericValidator::wxGenericValidator(lua_Table * data, wxDateTime * valPtr) function, expected prototype:\nwxGenericValidator::wxGenericValidator(lua_Table * data, wxDateTime * valPtr)\nClass arguments details:\narg 2 ID = 57497519\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDateTime* valPtr=(Luna< wxDateTime >::check(L,2));

		return new wrapper_wxGenericValidator(L,NULL, valPtr);
	}

	// wxGenericValidator::wxGenericValidator(lua_Table * data, wxFileName * valPtr)
	static wxGenericValidator* _bind_ctor_overload_16(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_16(L)) {
			luaL_error(L, "luna typecheck failed in wxGenericValidator::wxGenericValidator(lua_Table * data, wxFileName * valPtr) function, expected prototype:\nwxGenericValidator::wxGenericValidator(lua_Table * data, wxFileName * valPtr)\nClass arguments details:\narg 2 ID = 53530938\n\n%s",luna_dumpStack(L).c_str());
		}

		wxFileName* valPtr=(Luna< wxFileName >::check(L,2));

		return new wrapper_wxGenericValidator(L,NULL, valPtr);
	}

	// wxGenericValidator::wxGenericValidator(lua_Table * data, float * valPtr)
	static wxGenericValidator* _bind_ctor_overload_17(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_17(L)) {
			luaL_error(L, "luna typecheck failed in wxGenericValidator::wxGenericValidator(lua_Table * data, float * valPtr) function, expected prototype:\nwxGenericValidator::wxGenericValidator(lua_Table * data, float * valPtr)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float* valPtr=(float*)Luna< void >::check(L,2);

		return new wrapper_wxGenericValidator(L,NULL, valPtr);
	}

	// wxGenericValidator::wxGenericValidator(lua_Table * data, double * valPtr)
	static wxGenericValidator* _bind_ctor_overload_18(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_18(L)) {
			luaL_error(L, "luna typecheck failed in wxGenericValidator::wxGenericValidator(lua_Table * data, double * valPtr) function, expected prototype:\nwxGenericValidator::wxGenericValidator(lua_Table * data, double * valPtr)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double* valPtr=(double*)Luna< void >::check(L,2);

		return new wrapper_wxGenericValidator(L,NULL, valPtr);
	}

	// Overload binder for wxGenericValidator::wxGenericValidator
	static wxGenericValidator* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);
		if (_lg_typecheck_ctor_overload_7(L)) return _bind_ctor_overload_7(L);
		if (_lg_typecheck_ctor_overload_8(L)) return _bind_ctor_overload_8(L);
		if (_lg_typecheck_ctor_overload_9(L)) return _bind_ctor_overload_9(L);
		if (_lg_typecheck_ctor_overload_10(L)) return _bind_ctor_overload_10(L);
		if (_lg_typecheck_ctor_overload_11(L)) return _bind_ctor_overload_11(L);
		if (_lg_typecheck_ctor_overload_12(L)) return _bind_ctor_overload_12(L);
		if (_lg_typecheck_ctor_overload_13(L)) return _bind_ctor_overload_13(L);
		if (_lg_typecheck_ctor_overload_14(L)) return _bind_ctor_overload_14(L);
		if (_lg_typecheck_ctor_overload_15(L)) return _bind_ctor_overload_15(L);
		if (_lg_typecheck_ctor_overload_16(L)) return _bind_ctor_overload_16(L);
		if (_lg_typecheck_ctor_overload_17(L)) return _bind_ctor_overload_17(L);
		if (_lg_typecheck_ctor_overload_18(L)) return _bind_ctor_overload_18(L);

		luaL_error(L, "error in function wxGenericValidator, cannot match any of the overloads for function wxGenericValidator:\n  wxGenericValidator(const wxGenericValidator &)\n  wxGenericValidator(bool *)\n  wxGenericValidator(wxString *)\n  wxGenericValidator(int *)\n  wxGenericValidator(wxArrayInt *)\n  wxGenericValidator(wxDateTime *)\n  wxGenericValidator(wxFileName *)\n  wxGenericValidator(float *)\n  wxGenericValidator(double *)\n  wxGenericValidator(lua_Table *, const wxGenericValidator &)\n  wxGenericValidator(lua_Table *, bool *)\n  wxGenericValidator(lua_Table *, wxString *)\n  wxGenericValidator(lua_Table *, int *)\n  wxGenericValidator(lua_Table *, wxArrayInt *)\n  wxGenericValidator(lua_Table *, wxDateTime *)\n  wxGenericValidator(lua_Table *, wxFileName *)\n  wxGenericValidator(lua_Table *, float *)\n  wxGenericValidator(lua_Table *, double *)\n");
		return NULL;
	}


	// Function binds:
	// wxObject * wxGenericValidator::Clone() const
	static int _bind_Clone(lua_State *L) {
		if (!_lg_typecheck_Clone(L)) {
			luaL_error(L, "luna typecheck failed in wxObject * wxGenericValidator::Clone() const function, expected prototype:\nwxObject * wxGenericValidator::Clone() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGenericValidator* self=Luna< wxObject >::checkSubType< wxGenericValidator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxObject * wxGenericValidator::Clone() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxObject * lret = self->Clone();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxObject >::push(L,lret,false);

		return 1;
	}

	// bool wxGenericValidator::TransferFromWindow()
	static int _bind_TransferFromWindow(lua_State *L) {
		if (!_lg_typecheck_TransferFromWindow(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGenericValidator::TransferFromWindow() function, expected prototype:\nbool wxGenericValidator::TransferFromWindow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGenericValidator* self=Luna< wxObject >::checkSubType< wxGenericValidator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGenericValidator::TransferFromWindow(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TransferFromWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGenericValidator::TransferToWindow()
	static int _bind_TransferToWindow(lua_State *L) {
		if (!_lg_typecheck_TransferToWindow(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGenericValidator::TransferToWindow() function, expected prototype:\nbool wxGenericValidator::TransferToWindow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGenericValidator* self=Luna< wxObject >::checkSubType< wxGenericValidator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGenericValidator::TransferToWindow(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TransferToWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxClassInfo * wxGenericValidator::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxGenericValidator::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxGenericValidator::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGenericValidator* self=Luna< wxObject >::checkSubType< wxGenericValidator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxGenericValidator::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxGenericValidator::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// void wxGenericValidator::base_QueueEvent(wxEvent * event)
	static int _bind_base_QueueEvent(lua_State *L) {
		if (!_lg_typecheck_base_QueueEvent(L)) {
			luaL_error(L, "luna typecheck failed in void wxGenericValidator::base_QueueEvent(wxEvent * event) function, expected prototype:\nvoid wxGenericValidator::base_QueueEvent(wxEvent * event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvent* event=(Luna< wxObject >::checkSubType< wxEvent >(L,2));

		wxGenericValidator* self=Luna< wxObject >::checkSubType< wxGenericValidator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGenericValidator::base_QueueEvent(wxEvent *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGenericValidator::QueueEvent(event);

		return 0;
	}

	// void wxGenericValidator::base_AddPendingEvent(const wxEvent & event)
	static int _bind_base_AddPendingEvent(lua_State *L) {
		if (!_lg_typecheck_base_AddPendingEvent(L)) {
			luaL_error(L, "luna typecheck failed in void wxGenericValidator::base_AddPendingEvent(const wxEvent & event) function, expected prototype:\nvoid wxGenericValidator::base_AddPendingEvent(const wxEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxEvent* event_ptr=(Luna< wxObject >::checkSubType< wxEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxGenericValidator::base_AddPendingEvent function");
		}
		const wxEvent & event=*event_ptr;

		wxGenericValidator* self=Luna< wxObject >::checkSubType< wxGenericValidator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGenericValidator::base_AddPendingEvent(const wxEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGenericValidator::AddPendingEvent(event);

		return 0;
	}

	// bool wxGenericValidator::base_ProcessEvent(wxEvent & event)
	static int _bind_base_ProcessEvent(lua_State *L) {
		if (!_lg_typecheck_base_ProcessEvent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGenericValidator::base_ProcessEvent(wxEvent & event) function, expected prototype:\nbool wxGenericValidator::base_ProcessEvent(wxEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvent* event_ptr=(Luna< wxObject >::checkSubType< wxEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxGenericValidator::base_ProcessEvent function");
		}
		wxEvent & event=*event_ptr;

		wxGenericValidator* self=Luna< wxObject >::checkSubType< wxGenericValidator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGenericValidator::base_ProcessEvent(wxEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGenericValidator::ProcessEvent(event);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxGenericValidator::base_SetNextHandler(wxEvtHandler * handler)
	static int _bind_base_SetNextHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetNextHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxGenericValidator::base_SetNextHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxGenericValidator::base_SetNextHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxGenericValidator* self=Luna< wxObject >::checkSubType< wxGenericValidator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGenericValidator::base_SetNextHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGenericValidator::SetNextHandler(handler);

		return 0;
	}

	// void wxGenericValidator::base_SetPreviousHandler(wxEvtHandler * handler)
	static int _bind_base_SetPreviousHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetPreviousHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxGenericValidator::base_SetPreviousHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxGenericValidator::base_SetPreviousHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxGenericValidator* self=Luna< wxObject >::checkSubType< wxGenericValidator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGenericValidator::base_SetPreviousHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGenericValidator::SetPreviousHandler(handler);

		return 0;
	}

	// bool wxGenericValidator::base_Validate(wxWindow * parent)
	static int _bind_base_Validate(lua_State *L) {
		if (!_lg_typecheck_base_Validate(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGenericValidator::base_Validate(wxWindow * parent) function, expected prototype:\nbool wxGenericValidator::base_Validate(wxWindow * parent)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxGenericValidator* self=Luna< wxObject >::checkSubType< wxGenericValidator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGenericValidator::base_Validate(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGenericValidator::Validate(parent);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxObject * wxGenericValidator::base_Clone() const
	static int _bind_base_Clone(lua_State *L) {
		if (!_lg_typecheck_base_Clone(L)) {
			luaL_error(L, "luna typecheck failed in wxObject * wxGenericValidator::base_Clone() const function, expected prototype:\nwxObject * wxGenericValidator::base_Clone() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGenericValidator* self=Luna< wxObject >::checkSubType< wxGenericValidator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxObject * wxGenericValidator::base_Clone() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxObject * lret = self->wxGenericValidator::Clone();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxObject >::push(L,lret,false);

		return 1;
	}

	// bool wxGenericValidator::base_TransferFromWindow()
	static int _bind_base_TransferFromWindow(lua_State *L) {
		if (!_lg_typecheck_base_TransferFromWindow(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGenericValidator::base_TransferFromWindow() function, expected prototype:\nbool wxGenericValidator::base_TransferFromWindow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGenericValidator* self=Luna< wxObject >::checkSubType< wxGenericValidator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGenericValidator::base_TransferFromWindow(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGenericValidator::TransferFromWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGenericValidator::base_TransferToWindow()
	static int _bind_base_TransferToWindow(lua_State *L) {
		if (!_lg_typecheck_base_TransferToWindow(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGenericValidator::base_TransferToWindow() function, expected prototype:\nbool wxGenericValidator::base_TransferToWindow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGenericValidator* self=Luna< wxObject >::checkSubType< wxGenericValidator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGenericValidator::base_TransferToWindow(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGenericValidator::TransferToWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxGenericValidator* LunaTraits< wxGenericValidator >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxGenericValidator::_bind_ctor(L);
}

void LunaTraits< wxGenericValidator >::_bind_dtor(wxGenericValidator* obj) {
	delete obj;
}

const char LunaTraits< wxGenericValidator >::className[] = "wxGenericValidator";
const char LunaTraits< wxGenericValidator >::fullName[] = "wxGenericValidator";
const char LunaTraits< wxGenericValidator >::moduleName[] = "wx";
const char* LunaTraits< wxGenericValidator >::parents[] = {"wx.wxValidator", 0};
const int LunaTraits< wxGenericValidator >::hash = 76322898;
const int LunaTraits< wxGenericValidator >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxGenericValidator >::methods[] = {
	{"Clone", &luna_wrapper_wxGenericValidator::_bind_Clone},
	{"TransferFromWindow", &luna_wrapper_wxGenericValidator::_bind_TransferFromWindow},
	{"TransferToWindow", &luna_wrapper_wxGenericValidator::_bind_TransferToWindow},
	{"base_GetClassInfo", &luna_wrapper_wxGenericValidator::_bind_base_GetClassInfo},
	{"base_QueueEvent", &luna_wrapper_wxGenericValidator::_bind_base_QueueEvent},
	{"base_AddPendingEvent", &luna_wrapper_wxGenericValidator::_bind_base_AddPendingEvent},
	{"base_ProcessEvent", &luna_wrapper_wxGenericValidator::_bind_base_ProcessEvent},
	{"base_SetNextHandler", &luna_wrapper_wxGenericValidator::_bind_base_SetNextHandler},
	{"base_SetPreviousHandler", &luna_wrapper_wxGenericValidator::_bind_base_SetPreviousHandler},
	{"base_Validate", &luna_wrapper_wxGenericValidator::_bind_base_Validate},
	{"base_Clone", &luna_wrapper_wxGenericValidator::_bind_base_Clone},
	{"base_TransferFromWindow", &luna_wrapper_wxGenericValidator::_bind_base_TransferFromWindow},
	{"base_TransferToWindow", &luna_wrapper_wxGenericValidator::_bind_base_TransferToWindow},
	{"fromVoid", &luna_wrapper_wxGenericValidator::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxGenericValidator::_bind_asVoid},
	{"getTable", &luna_wrapper_wxGenericValidator::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxGenericValidator >::converters[] = {
	{"wxObject", &luna_wrapper_wxGenericValidator::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxGenericValidator >::enumValues[] = {
	{0,0}
};



#include <plug_common.h>

#include <luna/wrappers/wrapper_TiXmlElement.h>

class luna_wrapper_TiXmlElement {
public:
	typedef Luna< TiXmlElement > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		TiXmlBase* self=(Luna< TiXmlBase >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<TiXmlBase,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
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

		TiXmlElement* self= (TiXmlElement*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< TiXmlElement >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,89852901) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< TiXmlBase >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_TiXmlBase(lua_State *L) {
		// all checked are already performed before reaching this point.
		//TiXmlElement* ptr= dynamic_cast< TiXmlElement* >(Luna< TiXmlBase >::check(L,1));
		TiXmlElement* ptr= luna_caster< TiXmlBase, TiXmlElement >::cast(Luna< TiXmlBase >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< TiXmlElement >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,89852901) ) return false;
		if( (!(Luna< TiXmlBase >::checkSubType< TiXmlElement >(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,89852901) ) return false;
		if( (!(Luna< TiXmlBase >::checkSubType< TiXmlElement >(L,2))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Attribute_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Attribute_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Attribute_overload_3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_QueryIntAttribute_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_QueryIntAttribute_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_QueryDoubleAttribute_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_QueryDoubleAttribute_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetAttribute_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetAttribute_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetAttribute_overload_3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetAttribute_overload_4(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDoubleAttribute(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RemoveAttribute_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RemoveAttribute_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FirstAttribute_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_FirstAttribute_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_LastAttribute_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_LastAttribute_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetText(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Clone(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ToElement_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ToElement_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Accept(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,86845197)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_ToDocument_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_ToDocument_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_ToComment_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_ToComment_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_ToUnknown_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_ToUnknown_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_ToText_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_ToText_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_ToDeclaration_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_ToDeclaration_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Clone(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_ToElement_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_ToElement_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Accept(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,86845197)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck_op_assign(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,89852901) ) return false;
		return true;
	}


	// Constructor binds:
	// TiXmlElement::TiXmlElement(const char * in_value)
	static TiXmlElement* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlElement::TiXmlElement(const char * in_value) function, expected prototype:\nTiXmlElement::TiXmlElement(const char * in_value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * in_value=(const char *)lua_tostring(L,1);

		return new TiXmlElement(in_value);
	}

	// TiXmlElement::TiXmlElement(const std::string & _value)
	static TiXmlElement* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlElement::TiXmlElement(const std::string & _value) function, expected prototype:\nTiXmlElement::TiXmlElement(const std::string & _value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string _value(lua_tostring(L,1),lua_objlen(L,1));

		return new TiXmlElement(_value);
	}

	// TiXmlElement::TiXmlElement(const TiXmlElement & arg1)
	static TiXmlElement* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlElement::TiXmlElement(const TiXmlElement & arg1) function, expected prototype:\nTiXmlElement::TiXmlElement(const TiXmlElement & arg1)\nClass arguments details:\narg 1 ID = 89852901\n\n%s",luna_dumpStack(L).c_str());
		}

		const TiXmlElement* _arg1_ptr=(Luna< TiXmlBase >::checkSubType< TiXmlElement >(L,1));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in TiXmlElement::TiXmlElement function");
		}
		const TiXmlElement & _arg1=*_arg1_ptr;

		return new TiXmlElement(_arg1);
	}

	// TiXmlElement::TiXmlElement(lua_Table * data, const char * in_value)
	static TiXmlElement* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlElement::TiXmlElement(lua_Table * data, const char * in_value) function, expected prototype:\nTiXmlElement::TiXmlElement(lua_Table * data, const char * in_value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * in_value=(const char *)lua_tostring(L,2);

		return new wrapper_TiXmlElement(L,NULL, in_value);
	}

	// TiXmlElement::TiXmlElement(lua_Table * data, const std::string & _value)
	static TiXmlElement* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlElement::TiXmlElement(lua_Table * data, const std::string & _value) function, expected prototype:\nTiXmlElement::TiXmlElement(lua_Table * data, const std::string & _value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string _value(lua_tostring(L,2),lua_objlen(L,2));

		return new wrapper_TiXmlElement(L,NULL, _value);
	}

	// TiXmlElement::TiXmlElement(lua_Table * data, const TiXmlElement & arg2)
	static TiXmlElement* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlElement::TiXmlElement(lua_Table * data, const TiXmlElement & arg2) function, expected prototype:\nTiXmlElement::TiXmlElement(lua_Table * data, const TiXmlElement & arg2)\nClass arguments details:\narg 2 ID = 89852901\n\n%s",luna_dumpStack(L).c_str());
		}

		const TiXmlElement* _arg2_ptr=(Luna< TiXmlBase >::checkSubType< TiXmlElement >(L,2));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in TiXmlElement::TiXmlElement function");
		}
		const TiXmlElement & _arg2=*_arg2_ptr;

		return new wrapper_TiXmlElement(L,NULL, _arg2);
	}

	// Overload binder for TiXmlElement::TiXmlElement
	static TiXmlElement* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);

		luaL_error(L, "error in function TiXmlElement, cannot match any of the overloads for function TiXmlElement:\n  TiXmlElement(const char *)\n  TiXmlElement(const std::string &)\n  TiXmlElement(const TiXmlElement &)\n  TiXmlElement(lua_Table *, const char *)\n  TiXmlElement(lua_Table *, const std::string &)\n  TiXmlElement(lua_Table *, const TiXmlElement &)\n");
		return NULL;
	}


	// Function binds:
	// const char * TiXmlElement::Attribute(const char * name) const
	static int _bind_Attribute_overload_1(lua_State *L) {
		if (!_lg_typecheck_Attribute_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const char * TiXmlElement::Attribute(const char * name) const function, expected prototype:\nconst char * TiXmlElement::Attribute(const char * name) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,2);

		TiXmlElement* self=Luna< TiXmlBase >::checkSubType< TiXmlElement >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * TiXmlElement::Attribute(const char *) const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Attribute(name);
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * TiXmlElement::Attribute(const char * name, int * i) const
	static int _bind_Attribute_overload_2(lua_State *L) {
		if (!_lg_typecheck_Attribute_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const char * TiXmlElement::Attribute(const char * name, int * i) const function, expected prototype:\nconst char * TiXmlElement::Attribute(const char * name, int * i) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,2);
		int* i=(int*)Luna< void >::check(L,3);

		TiXmlElement* self=Luna< TiXmlBase >::checkSubType< TiXmlElement >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * TiXmlElement::Attribute(const char *, int *) const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Attribute(name, i);
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * TiXmlElement::Attribute(const char * name, double * d) const
	static int _bind_Attribute_overload_3(lua_State *L) {
		if (!_lg_typecheck_Attribute_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in const char * TiXmlElement::Attribute(const char * name, double * d) const function, expected prototype:\nconst char * TiXmlElement::Attribute(const char * name, double * d) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,2);
		double* d=(double*)Luna< void >::check(L,3);

		TiXmlElement* self=Luna< TiXmlBase >::checkSubType< TiXmlElement >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * TiXmlElement::Attribute(const char *, double *) const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Attribute(name, d);
		lua_pushstring(L,lret);

		return 1;
	}

	// Overload binder for TiXmlElement::Attribute
	static int _bind_Attribute(lua_State *L) {
		if (_lg_typecheck_Attribute_overload_1(L)) return _bind_Attribute_overload_1(L);
		if (_lg_typecheck_Attribute_overload_2(L)) return _bind_Attribute_overload_2(L);
		if (_lg_typecheck_Attribute_overload_3(L)) return _bind_Attribute_overload_3(L);

		luaL_error(L, "error in function Attribute, cannot match any of the overloads for function Attribute:\n  Attribute(const char *)\n  Attribute(const char *, int *)\n  Attribute(const char *, double *)\n");
		return 0;
	}

	// int TiXmlElement::QueryIntAttribute(const char * name, int * _value) const
	static int _bind_QueryIntAttribute_overload_1(lua_State *L) {
		if (!_lg_typecheck_QueryIntAttribute_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in int TiXmlElement::QueryIntAttribute(const char * name, int * _value) const function, expected prototype:\nint TiXmlElement::QueryIntAttribute(const char * name, int * _value) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,2);
		int* _value=(int*)Luna< void >::check(L,3);

		TiXmlElement* self=Luna< TiXmlBase >::checkSubType< TiXmlElement >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int TiXmlElement::QueryIntAttribute(const char *, int *) const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->QueryIntAttribute(name, _value);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int TiXmlElement::QueryIntAttribute(const std::string & name, int * _value) const
	static int _bind_QueryIntAttribute_overload_2(lua_State *L) {
		if (!_lg_typecheck_QueryIntAttribute_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in int TiXmlElement::QueryIntAttribute(const std::string & name, int * _value) const function, expected prototype:\nint TiXmlElement::QueryIntAttribute(const std::string & name, int * _value) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));
		int* _value=(int*)Luna< void >::check(L,3);

		TiXmlElement* self=Luna< TiXmlBase >::checkSubType< TiXmlElement >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int TiXmlElement::QueryIntAttribute(const std::string &, int *) const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->QueryIntAttribute(name, _value);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for TiXmlElement::QueryIntAttribute
	static int _bind_QueryIntAttribute(lua_State *L) {
		if (_lg_typecheck_QueryIntAttribute_overload_1(L)) return _bind_QueryIntAttribute_overload_1(L);
		if (_lg_typecheck_QueryIntAttribute_overload_2(L)) return _bind_QueryIntAttribute_overload_2(L);

		luaL_error(L, "error in function QueryIntAttribute, cannot match any of the overloads for function QueryIntAttribute:\n  QueryIntAttribute(const char *, int *)\n  QueryIntAttribute(const std::string &, int *)\n");
		return 0;
	}

	// int TiXmlElement::QueryDoubleAttribute(const char * name, double * _value) const
	static int _bind_QueryDoubleAttribute_overload_1(lua_State *L) {
		if (!_lg_typecheck_QueryDoubleAttribute_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in int TiXmlElement::QueryDoubleAttribute(const char * name, double * _value) const function, expected prototype:\nint TiXmlElement::QueryDoubleAttribute(const char * name, double * _value) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,2);
		double* _value=(double*)Luna< void >::check(L,3);

		TiXmlElement* self=Luna< TiXmlBase >::checkSubType< TiXmlElement >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int TiXmlElement::QueryDoubleAttribute(const char *, double *) const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->QueryDoubleAttribute(name, _value);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int TiXmlElement::QueryDoubleAttribute(const std::string & name, double * _value) const
	static int _bind_QueryDoubleAttribute_overload_2(lua_State *L) {
		if (!_lg_typecheck_QueryDoubleAttribute_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in int TiXmlElement::QueryDoubleAttribute(const std::string & name, double * _value) const function, expected prototype:\nint TiXmlElement::QueryDoubleAttribute(const std::string & name, double * _value) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));
		double* _value=(double*)Luna< void >::check(L,3);

		TiXmlElement* self=Luna< TiXmlBase >::checkSubType< TiXmlElement >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int TiXmlElement::QueryDoubleAttribute(const std::string &, double *) const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->QueryDoubleAttribute(name, _value);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for TiXmlElement::QueryDoubleAttribute
	static int _bind_QueryDoubleAttribute(lua_State *L) {
		if (_lg_typecheck_QueryDoubleAttribute_overload_1(L)) return _bind_QueryDoubleAttribute_overload_1(L);
		if (_lg_typecheck_QueryDoubleAttribute_overload_2(L)) return _bind_QueryDoubleAttribute_overload_2(L);

		luaL_error(L, "error in function QueryDoubleAttribute, cannot match any of the overloads for function QueryDoubleAttribute:\n  QueryDoubleAttribute(const char *, double *)\n  QueryDoubleAttribute(const std::string &, double *)\n");
		return 0;
	}

	// void TiXmlElement::SetAttribute(const char * name, const char * _value)
	static int _bind_SetAttribute_overload_1(lua_State *L) {
		if (!_lg_typecheck_SetAttribute_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void TiXmlElement::SetAttribute(const char * name, const char * _value) function, expected prototype:\nvoid TiXmlElement::SetAttribute(const char * name, const char * _value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,2);
		const char * _value=(const char *)lua_tostring(L,3);

		TiXmlElement* self=Luna< TiXmlBase >::checkSubType< TiXmlElement >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void TiXmlElement::SetAttribute(const char *, const char *). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetAttribute(name, _value);

		return 0;
	}

	// void TiXmlElement::SetAttribute(const std::string & name, const std::string & _value)
	static int _bind_SetAttribute_overload_2(lua_State *L) {
		if (!_lg_typecheck_SetAttribute_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void TiXmlElement::SetAttribute(const std::string & name, const std::string & _value) function, expected prototype:\nvoid TiXmlElement::SetAttribute(const std::string & name, const std::string & _value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));
		std::string _value(lua_tostring(L,3),lua_objlen(L,3));

		TiXmlElement* self=Luna< TiXmlBase >::checkSubType< TiXmlElement >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void TiXmlElement::SetAttribute(const std::string &, const std::string &). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetAttribute(name, _value);

		return 0;
	}

	// void TiXmlElement::SetAttribute(const std::string & name, int _value)
	static int _bind_SetAttribute_overload_3(lua_State *L) {
		if (!_lg_typecheck_SetAttribute_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in void TiXmlElement::SetAttribute(const std::string & name, int _value) function, expected prototype:\nvoid TiXmlElement::SetAttribute(const std::string & name, int _value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));
		int _value=(int)lua_tointeger(L,3);

		TiXmlElement* self=Luna< TiXmlBase >::checkSubType< TiXmlElement >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void TiXmlElement::SetAttribute(const std::string &, int). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetAttribute(name, _value);

		return 0;
	}

	// void TiXmlElement::SetAttribute(const char * name, int value)
	static int _bind_SetAttribute_overload_4(lua_State *L) {
		if (!_lg_typecheck_SetAttribute_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in void TiXmlElement::SetAttribute(const char * name, int value) function, expected prototype:\nvoid TiXmlElement::SetAttribute(const char * name, int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,2);
		int value=(int)lua_tointeger(L,3);

		TiXmlElement* self=Luna< TiXmlBase >::checkSubType< TiXmlElement >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void TiXmlElement::SetAttribute(const char *, int). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetAttribute(name, value);

		return 0;
	}

	// Overload binder for TiXmlElement::SetAttribute
	static int _bind_SetAttribute(lua_State *L) {
		if (_lg_typecheck_SetAttribute_overload_1(L)) return _bind_SetAttribute_overload_1(L);
		if (_lg_typecheck_SetAttribute_overload_2(L)) return _bind_SetAttribute_overload_2(L);
		if (_lg_typecheck_SetAttribute_overload_3(L)) return _bind_SetAttribute_overload_3(L);
		if (_lg_typecheck_SetAttribute_overload_4(L)) return _bind_SetAttribute_overload_4(L);

		luaL_error(L, "error in function SetAttribute, cannot match any of the overloads for function SetAttribute:\n  SetAttribute(const char *, const char *)\n  SetAttribute(const std::string &, const std::string &)\n  SetAttribute(const std::string &, int)\n  SetAttribute(const char *, int)\n");
		return 0;
	}

	// void TiXmlElement::SetDoubleAttribute(const char * name, double value)
	static int _bind_SetDoubleAttribute(lua_State *L) {
		if (!_lg_typecheck_SetDoubleAttribute(L)) {
			luaL_error(L, "luna typecheck failed in void TiXmlElement::SetDoubleAttribute(const char * name, double value) function, expected prototype:\nvoid TiXmlElement::SetDoubleAttribute(const char * name, double value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,2);
		double value=(double)lua_tonumber(L,3);

		TiXmlElement* self=Luna< TiXmlBase >::checkSubType< TiXmlElement >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void TiXmlElement::SetDoubleAttribute(const char *, double). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetDoubleAttribute(name, value);

		return 0;
	}

	// void TiXmlElement::RemoveAttribute(const char * name)
	static int _bind_RemoveAttribute_overload_1(lua_State *L) {
		if (!_lg_typecheck_RemoveAttribute_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void TiXmlElement::RemoveAttribute(const char * name) function, expected prototype:\nvoid TiXmlElement::RemoveAttribute(const char * name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,2);

		TiXmlElement* self=Luna< TiXmlBase >::checkSubType< TiXmlElement >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void TiXmlElement::RemoveAttribute(const char *). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RemoveAttribute(name);

		return 0;
	}

	// void TiXmlElement::RemoveAttribute(const std::string & name)
	static int _bind_RemoveAttribute_overload_2(lua_State *L) {
		if (!_lg_typecheck_RemoveAttribute_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void TiXmlElement::RemoveAttribute(const std::string & name) function, expected prototype:\nvoid TiXmlElement::RemoveAttribute(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		TiXmlElement* self=Luna< TiXmlBase >::checkSubType< TiXmlElement >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void TiXmlElement::RemoveAttribute(const std::string &). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RemoveAttribute(name);

		return 0;
	}

	// Overload binder for TiXmlElement::RemoveAttribute
	static int _bind_RemoveAttribute(lua_State *L) {
		if (_lg_typecheck_RemoveAttribute_overload_1(L)) return _bind_RemoveAttribute_overload_1(L);
		if (_lg_typecheck_RemoveAttribute_overload_2(L)) return _bind_RemoveAttribute_overload_2(L);

		luaL_error(L, "error in function RemoveAttribute, cannot match any of the overloads for function RemoveAttribute:\n  RemoveAttribute(const char *)\n  RemoveAttribute(const std::string &)\n");
		return 0;
	}

	// const TiXmlAttribute * TiXmlElement::FirstAttribute() const
	static int _bind_FirstAttribute_overload_1(lua_State *L) {
		if (!_lg_typecheck_FirstAttribute_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const TiXmlAttribute * TiXmlElement::FirstAttribute() const function, expected prototype:\nconst TiXmlAttribute * TiXmlElement::FirstAttribute() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlElement* self=Luna< TiXmlBase >::checkSubType< TiXmlElement >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const TiXmlAttribute * TiXmlElement::FirstAttribute() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const TiXmlAttribute * lret = self->FirstAttribute();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlAttribute >::push(L,lret,false);

		return 1;
	}

	// TiXmlAttribute * TiXmlElement::FirstAttribute()
	static int _bind_FirstAttribute_overload_2(lua_State *L) {
		if (!_lg_typecheck_FirstAttribute_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlAttribute * TiXmlElement::FirstAttribute() function, expected prototype:\nTiXmlAttribute * TiXmlElement::FirstAttribute()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlElement* self=Luna< TiXmlBase >::checkSubType< TiXmlElement >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlAttribute * TiXmlElement::FirstAttribute(). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlAttribute * lret = self->FirstAttribute();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlAttribute >::push(L,lret,false);

		return 1;
	}

	// Overload binder for TiXmlElement::FirstAttribute
	static int _bind_FirstAttribute(lua_State *L) {
		if (_lg_typecheck_FirstAttribute_overload_1(L)) return _bind_FirstAttribute_overload_1(L);
		if (_lg_typecheck_FirstAttribute_overload_2(L)) return _bind_FirstAttribute_overload_2(L);

		luaL_error(L, "error in function FirstAttribute, cannot match any of the overloads for function FirstAttribute:\n  FirstAttribute()\n  FirstAttribute()\n");
		return 0;
	}

	// const TiXmlAttribute * TiXmlElement::LastAttribute() const
	static int _bind_LastAttribute_overload_1(lua_State *L) {
		if (!_lg_typecheck_LastAttribute_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const TiXmlAttribute * TiXmlElement::LastAttribute() const function, expected prototype:\nconst TiXmlAttribute * TiXmlElement::LastAttribute() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlElement* self=Luna< TiXmlBase >::checkSubType< TiXmlElement >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const TiXmlAttribute * TiXmlElement::LastAttribute() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const TiXmlAttribute * lret = self->LastAttribute();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlAttribute >::push(L,lret,false);

		return 1;
	}

	// TiXmlAttribute * TiXmlElement::LastAttribute()
	static int _bind_LastAttribute_overload_2(lua_State *L) {
		if (!_lg_typecheck_LastAttribute_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlAttribute * TiXmlElement::LastAttribute() function, expected prototype:\nTiXmlAttribute * TiXmlElement::LastAttribute()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlElement* self=Luna< TiXmlBase >::checkSubType< TiXmlElement >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlAttribute * TiXmlElement::LastAttribute(). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlAttribute * lret = self->LastAttribute();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlAttribute >::push(L,lret,false);

		return 1;
	}

	// Overload binder for TiXmlElement::LastAttribute
	static int _bind_LastAttribute(lua_State *L) {
		if (_lg_typecheck_LastAttribute_overload_1(L)) return _bind_LastAttribute_overload_1(L);
		if (_lg_typecheck_LastAttribute_overload_2(L)) return _bind_LastAttribute_overload_2(L);

		luaL_error(L, "error in function LastAttribute, cannot match any of the overloads for function LastAttribute:\n  LastAttribute()\n  LastAttribute()\n");
		return 0;
	}

	// const char * TiXmlElement::GetText() const
	static int _bind_GetText(lua_State *L) {
		if (!_lg_typecheck_GetText(L)) {
			luaL_error(L, "luna typecheck failed in const char * TiXmlElement::GetText() const function, expected prototype:\nconst char * TiXmlElement::GetText() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlElement* self=Luna< TiXmlBase >::checkSubType< TiXmlElement >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * TiXmlElement::GetText() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->GetText();
		lua_pushstring(L,lret);

		return 1;
	}

	// TiXmlNode * TiXmlElement::Clone() const
	static int _bind_Clone(lua_State *L) {
		if (!_lg_typecheck_Clone(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlNode * TiXmlElement::Clone() const function, expected prototype:\nTiXmlNode * TiXmlElement::Clone() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlElement* self=Luna< TiXmlBase >::checkSubType< TiXmlElement >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlNode * TiXmlElement::Clone() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlNode * lret = self->Clone();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlNode >::push(L,lret,false);

		return 1;
	}

	// const TiXmlElement * TiXmlElement::ToElement() const
	static int _bind_ToElement_overload_1(lua_State *L) {
		if (!_lg_typecheck_ToElement_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const TiXmlElement * TiXmlElement::ToElement() const function, expected prototype:\nconst TiXmlElement * TiXmlElement::ToElement() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlElement* self=Luna< TiXmlBase >::checkSubType< TiXmlElement >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const TiXmlElement * TiXmlElement::ToElement() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const TiXmlElement * lret = self->ToElement();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlElement >::push(L,lret,false);

		return 1;
	}

	// TiXmlElement * TiXmlElement::ToElement()
	static int _bind_ToElement_overload_2(lua_State *L) {
		if (!_lg_typecheck_ToElement_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlElement * TiXmlElement::ToElement() function, expected prototype:\nTiXmlElement * TiXmlElement::ToElement()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlElement* self=Luna< TiXmlBase >::checkSubType< TiXmlElement >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlElement * TiXmlElement::ToElement(). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlElement * lret = self->ToElement();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlElement >::push(L,lret,false);

		return 1;
	}

	// Overload binder for TiXmlElement::ToElement
	static int _bind_ToElement(lua_State *L) {
		if (_lg_typecheck_ToElement_overload_1(L)) return _bind_ToElement_overload_1(L);
		if (_lg_typecheck_ToElement_overload_2(L)) return _bind_ToElement_overload_2(L);

		luaL_error(L, "error in function ToElement, cannot match any of the overloads for function ToElement:\n  ToElement()\n  ToElement()\n");
		return 0;
	}

	// bool TiXmlElement::Accept(TiXmlVisitor * visitor) const
	static int _bind_Accept(lua_State *L) {
		if (!_lg_typecheck_Accept(L)) {
			luaL_error(L, "luna typecheck failed in bool TiXmlElement::Accept(TiXmlVisitor * visitor) const function, expected prototype:\nbool TiXmlElement::Accept(TiXmlVisitor * visitor) const\nClass arguments details:\narg 1 ID = 86845197\n\n%s",luna_dumpStack(L).c_str());
		}

		TiXmlVisitor* visitor=(Luna< TiXmlVisitor >::check(L,2));

		TiXmlElement* self=Luna< TiXmlBase >::checkSubType< TiXmlElement >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool TiXmlElement::Accept(TiXmlVisitor *) const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Accept(visitor);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const TiXmlDocument * TiXmlElement::base_ToDocument() const
	static int _bind_base_ToDocument_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_ToDocument_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const TiXmlDocument * TiXmlElement::base_ToDocument() const function, expected prototype:\nconst TiXmlDocument * TiXmlElement::base_ToDocument() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlElement* self=Luna< TiXmlBase >::checkSubType< TiXmlElement >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const TiXmlDocument * TiXmlElement::base_ToDocument() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const TiXmlDocument * lret = self->TiXmlElement::ToDocument();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlDocument >::push(L,lret,false);

		return 1;
	}

	// TiXmlDocument * TiXmlElement::base_ToDocument()
	static int _bind_base_ToDocument_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_ToDocument_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlDocument * TiXmlElement::base_ToDocument() function, expected prototype:\nTiXmlDocument * TiXmlElement::base_ToDocument()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlElement* self=Luna< TiXmlBase >::checkSubType< TiXmlElement >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlDocument * TiXmlElement::base_ToDocument(). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlDocument * lret = self->TiXmlElement::ToDocument();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlDocument >::push(L,lret,false);

		return 1;
	}

	// Overload binder for TiXmlElement::base_ToDocument
	static int _bind_base_ToDocument(lua_State *L) {
		if (_lg_typecheck_base_ToDocument_overload_1(L)) return _bind_base_ToDocument_overload_1(L);
		if (_lg_typecheck_base_ToDocument_overload_2(L)) return _bind_base_ToDocument_overload_2(L);

		luaL_error(L, "error in function base_ToDocument, cannot match any of the overloads for function base_ToDocument:\n  base_ToDocument()\n  base_ToDocument()\n");
		return 0;
	}

	// const TiXmlComment * TiXmlElement::base_ToComment() const
	static int _bind_base_ToComment_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_ToComment_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const TiXmlComment * TiXmlElement::base_ToComment() const function, expected prototype:\nconst TiXmlComment * TiXmlElement::base_ToComment() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlElement* self=Luna< TiXmlBase >::checkSubType< TiXmlElement >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const TiXmlComment * TiXmlElement::base_ToComment() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const TiXmlComment * lret = self->TiXmlElement::ToComment();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlComment >::push(L,lret,false);

		return 1;
	}

	// TiXmlComment * TiXmlElement::base_ToComment()
	static int _bind_base_ToComment_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_ToComment_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlComment * TiXmlElement::base_ToComment() function, expected prototype:\nTiXmlComment * TiXmlElement::base_ToComment()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlElement* self=Luna< TiXmlBase >::checkSubType< TiXmlElement >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlComment * TiXmlElement::base_ToComment(). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlComment * lret = self->TiXmlElement::ToComment();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlComment >::push(L,lret,false);

		return 1;
	}

	// Overload binder for TiXmlElement::base_ToComment
	static int _bind_base_ToComment(lua_State *L) {
		if (_lg_typecheck_base_ToComment_overload_1(L)) return _bind_base_ToComment_overload_1(L);
		if (_lg_typecheck_base_ToComment_overload_2(L)) return _bind_base_ToComment_overload_2(L);

		luaL_error(L, "error in function base_ToComment, cannot match any of the overloads for function base_ToComment:\n  base_ToComment()\n  base_ToComment()\n");
		return 0;
	}

	// const TiXmlUnknown * TiXmlElement::base_ToUnknown() const
	static int _bind_base_ToUnknown_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_ToUnknown_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const TiXmlUnknown * TiXmlElement::base_ToUnknown() const function, expected prototype:\nconst TiXmlUnknown * TiXmlElement::base_ToUnknown() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlElement* self=Luna< TiXmlBase >::checkSubType< TiXmlElement >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const TiXmlUnknown * TiXmlElement::base_ToUnknown() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const TiXmlUnknown * lret = self->TiXmlElement::ToUnknown();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlUnknown >::push(L,lret,false);

		return 1;
	}

	// TiXmlUnknown * TiXmlElement::base_ToUnknown()
	static int _bind_base_ToUnknown_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_ToUnknown_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlUnknown * TiXmlElement::base_ToUnknown() function, expected prototype:\nTiXmlUnknown * TiXmlElement::base_ToUnknown()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlElement* self=Luna< TiXmlBase >::checkSubType< TiXmlElement >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlUnknown * TiXmlElement::base_ToUnknown(). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlUnknown * lret = self->TiXmlElement::ToUnknown();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlUnknown >::push(L,lret,false);

		return 1;
	}

	// Overload binder for TiXmlElement::base_ToUnknown
	static int _bind_base_ToUnknown(lua_State *L) {
		if (_lg_typecheck_base_ToUnknown_overload_1(L)) return _bind_base_ToUnknown_overload_1(L);
		if (_lg_typecheck_base_ToUnknown_overload_2(L)) return _bind_base_ToUnknown_overload_2(L);

		luaL_error(L, "error in function base_ToUnknown, cannot match any of the overloads for function base_ToUnknown:\n  base_ToUnknown()\n  base_ToUnknown()\n");
		return 0;
	}

	// const TiXmlText * TiXmlElement::base_ToText() const
	static int _bind_base_ToText_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_ToText_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const TiXmlText * TiXmlElement::base_ToText() const function, expected prototype:\nconst TiXmlText * TiXmlElement::base_ToText() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlElement* self=Luna< TiXmlBase >::checkSubType< TiXmlElement >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const TiXmlText * TiXmlElement::base_ToText() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const TiXmlText * lret = self->TiXmlElement::ToText();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlText >::push(L,lret,false);

		return 1;
	}

	// TiXmlText * TiXmlElement::base_ToText()
	static int _bind_base_ToText_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_ToText_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlText * TiXmlElement::base_ToText() function, expected prototype:\nTiXmlText * TiXmlElement::base_ToText()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlElement* self=Luna< TiXmlBase >::checkSubType< TiXmlElement >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlText * TiXmlElement::base_ToText(). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlText * lret = self->TiXmlElement::ToText();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlText >::push(L,lret,false);

		return 1;
	}

	// Overload binder for TiXmlElement::base_ToText
	static int _bind_base_ToText(lua_State *L) {
		if (_lg_typecheck_base_ToText_overload_1(L)) return _bind_base_ToText_overload_1(L);
		if (_lg_typecheck_base_ToText_overload_2(L)) return _bind_base_ToText_overload_2(L);

		luaL_error(L, "error in function base_ToText, cannot match any of the overloads for function base_ToText:\n  base_ToText()\n  base_ToText()\n");
		return 0;
	}

	// const TiXmlDeclaration * TiXmlElement::base_ToDeclaration() const
	static int _bind_base_ToDeclaration_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_ToDeclaration_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const TiXmlDeclaration * TiXmlElement::base_ToDeclaration() const function, expected prototype:\nconst TiXmlDeclaration * TiXmlElement::base_ToDeclaration() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlElement* self=Luna< TiXmlBase >::checkSubType< TiXmlElement >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const TiXmlDeclaration * TiXmlElement::base_ToDeclaration() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const TiXmlDeclaration * lret = self->TiXmlElement::ToDeclaration();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlDeclaration >::push(L,lret,false);

		return 1;
	}

	// TiXmlDeclaration * TiXmlElement::base_ToDeclaration()
	static int _bind_base_ToDeclaration_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_ToDeclaration_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlDeclaration * TiXmlElement::base_ToDeclaration() function, expected prototype:\nTiXmlDeclaration * TiXmlElement::base_ToDeclaration()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlElement* self=Luna< TiXmlBase >::checkSubType< TiXmlElement >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlDeclaration * TiXmlElement::base_ToDeclaration(). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlDeclaration * lret = self->TiXmlElement::ToDeclaration();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlDeclaration >::push(L,lret,false);

		return 1;
	}

	// Overload binder for TiXmlElement::base_ToDeclaration
	static int _bind_base_ToDeclaration(lua_State *L) {
		if (_lg_typecheck_base_ToDeclaration_overload_1(L)) return _bind_base_ToDeclaration_overload_1(L);
		if (_lg_typecheck_base_ToDeclaration_overload_2(L)) return _bind_base_ToDeclaration_overload_2(L);

		luaL_error(L, "error in function base_ToDeclaration, cannot match any of the overloads for function base_ToDeclaration:\n  base_ToDeclaration()\n  base_ToDeclaration()\n");
		return 0;
	}

	// TiXmlNode * TiXmlElement::base_Clone() const
	static int _bind_base_Clone(lua_State *L) {
		if (!_lg_typecheck_base_Clone(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlNode * TiXmlElement::base_Clone() const function, expected prototype:\nTiXmlNode * TiXmlElement::base_Clone() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlElement* self=Luna< TiXmlBase >::checkSubType< TiXmlElement >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlNode * TiXmlElement::base_Clone() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlNode * lret = self->TiXmlElement::Clone();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlNode >::push(L,lret,false);

		return 1;
	}

	// const TiXmlElement * TiXmlElement::base_ToElement() const
	static int _bind_base_ToElement_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_ToElement_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const TiXmlElement * TiXmlElement::base_ToElement() const function, expected prototype:\nconst TiXmlElement * TiXmlElement::base_ToElement() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlElement* self=Luna< TiXmlBase >::checkSubType< TiXmlElement >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const TiXmlElement * TiXmlElement::base_ToElement() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const TiXmlElement * lret = self->TiXmlElement::ToElement();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlElement >::push(L,lret,false);

		return 1;
	}

	// TiXmlElement * TiXmlElement::base_ToElement()
	static int _bind_base_ToElement_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_ToElement_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlElement * TiXmlElement::base_ToElement() function, expected prototype:\nTiXmlElement * TiXmlElement::base_ToElement()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlElement* self=Luna< TiXmlBase >::checkSubType< TiXmlElement >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlElement * TiXmlElement::base_ToElement(). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlElement * lret = self->TiXmlElement::ToElement();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlElement >::push(L,lret,false);

		return 1;
	}

	// Overload binder for TiXmlElement::base_ToElement
	static int _bind_base_ToElement(lua_State *L) {
		if (_lg_typecheck_base_ToElement_overload_1(L)) return _bind_base_ToElement_overload_1(L);
		if (_lg_typecheck_base_ToElement_overload_2(L)) return _bind_base_ToElement_overload_2(L);

		luaL_error(L, "error in function base_ToElement, cannot match any of the overloads for function base_ToElement:\n  base_ToElement()\n  base_ToElement()\n");
		return 0;
	}

	// bool TiXmlElement::base_Accept(TiXmlVisitor * visitor) const
	static int _bind_base_Accept(lua_State *L) {
		if (!_lg_typecheck_base_Accept(L)) {
			luaL_error(L, "luna typecheck failed in bool TiXmlElement::base_Accept(TiXmlVisitor * visitor) const function, expected prototype:\nbool TiXmlElement::base_Accept(TiXmlVisitor * visitor) const\nClass arguments details:\narg 1 ID = 86845197\n\n%s",luna_dumpStack(L).c_str());
		}

		TiXmlVisitor* visitor=(Luna< TiXmlVisitor >::check(L,2));

		TiXmlElement* self=Luna< TiXmlBase >::checkSubType< TiXmlElement >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool TiXmlElement::base_Accept(TiXmlVisitor *) const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TiXmlElement::Accept(visitor);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:
	// void TiXmlElement::operator=(const TiXmlElement & base)
	static int _bind_op_assign(lua_State *L) {
		if (!_lg_typecheck_op_assign(L)) {
			luaL_error(L, "luna typecheck failed in void TiXmlElement::operator=(const TiXmlElement & base) function, expected prototype:\nvoid TiXmlElement::operator=(const TiXmlElement & base)\nClass arguments details:\narg 1 ID = 89852901\n\n%s",luna_dumpStack(L).c_str());
		}

		const TiXmlElement* base_ptr=(Luna< TiXmlBase >::checkSubType< TiXmlElement >(L,2));
		if( !base_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg base in TiXmlElement::operator= function");
		}
		const TiXmlElement & base=*base_ptr;

		TiXmlElement* self=Luna< TiXmlBase >::checkSubType< TiXmlElement >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void TiXmlElement::operator=(const TiXmlElement &). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->operator=(base);

		return 0;
	}


};

TiXmlElement* LunaTraits< TiXmlElement >::_bind_ctor(lua_State *L) {
	return luna_wrapper_TiXmlElement::_bind_ctor(L);
}

void LunaTraits< TiXmlElement >::_bind_dtor(TiXmlElement* obj) {
	delete obj;
}

const char LunaTraits< TiXmlElement >::className[] = "TiXmlElement";
const char LunaTraits< TiXmlElement >::fullName[] = "TiXmlElement";
const char LunaTraits< TiXmlElement >::moduleName[] = "land";
const char* LunaTraits< TiXmlElement >::parents[] = {"land.TiXmlNode", 0};
const int LunaTraits< TiXmlElement >::hash = 72346183;
const int LunaTraits< TiXmlElement >::uniqueIDs[] = {89852901,0};

luna_RegType LunaTraits< TiXmlElement >::methods[] = {
	{"Attribute", &luna_wrapper_TiXmlElement::_bind_Attribute},
	{"QueryIntAttribute", &luna_wrapper_TiXmlElement::_bind_QueryIntAttribute},
	{"QueryDoubleAttribute", &luna_wrapper_TiXmlElement::_bind_QueryDoubleAttribute},
	{"SetAttribute", &luna_wrapper_TiXmlElement::_bind_SetAttribute},
	{"SetDoubleAttribute", &luna_wrapper_TiXmlElement::_bind_SetDoubleAttribute},
	{"RemoveAttribute", &luna_wrapper_TiXmlElement::_bind_RemoveAttribute},
	{"FirstAttribute", &luna_wrapper_TiXmlElement::_bind_FirstAttribute},
	{"LastAttribute", &luna_wrapper_TiXmlElement::_bind_LastAttribute},
	{"GetText", &luna_wrapper_TiXmlElement::_bind_GetText},
	{"Clone", &luna_wrapper_TiXmlElement::_bind_Clone},
	{"ToElement", &luna_wrapper_TiXmlElement::_bind_ToElement},
	{"Accept", &luna_wrapper_TiXmlElement::_bind_Accept},
	{"base_ToDocument", &luna_wrapper_TiXmlElement::_bind_base_ToDocument},
	{"base_ToComment", &luna_wrapper_TiXmlElement::_bind_base_ToComment},
	{"base_ToUnknown", &luna_wrapper_TiXmlElement::_bind_base_ToUnknown},
	{"base_ToText", &luna_wrapper_TiXmlElement::_bind_base_ToText},
	{"base_ToDeclaration", &luna_wrapper_TiXmlElement::_bind_base_ToDeclaration},
	{"base_Clone", &luna_wrapper_TiXmlElement::_bind_base_Clone},
	{"base_ToElement", &luna_wrapper_TiXmlElement::_bind_base_ToElement},
	{"base_Accept", &luna_wrapper_TiXmlElement::_bind_base_Accept},
	{"op_assign", &luna_wrapper_TiXmlElement::_bind_op_assign},
	{"fromVoid", &luna_wrapper_TiXmlElement::_bind_fromVoid},
	{"asVoid", &luna_wrapper_TiXmlElement::_bind_asVoid},
	{"getTable", &luna_wrapper_TiXmlElement::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< TiXmlElement >::converters[] = {
	{"TiXmlBase", &luna_wrapper_TiXmlElement::_cast_from_TiXmlBase},
	{0,0}
};

luna_RegEnumType LunaTraits< TiXmlElement >::enumValues[] = {
	{0,0}
};



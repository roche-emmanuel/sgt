#include <plug_common.h>

#include <luna/wrappers/wrapper_TiXmlAttribute.h>

class luna_wrapper_TiXmlAttribute {
public:
	typedef Luna< TiXmlAttribute > luna_t;

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

		TiXmlAttribute* self= (TiXmlAttribute*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< TiXmlAttribute >::push(L,self,false);
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
		//TiXmlAttribute* ptr= dynamic_cast< TiXmlAttribute* >(Luna< TiXmlBase >::check(L,1));
		TiXmlAttribute* ptr= luna_caster< TiXmlBase, TiXmlAttribute >::cast(Luna< TiXmlBase >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< TiXmlAttribute >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Name(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Value(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ValueStr(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IntValue(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_DoubleValue(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_NameTStr(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_QueryIntValue(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_QueryDoubleValue(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetName_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetName_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetValue_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetValue_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetIntValue(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDoubleValue(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Next_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Next_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Previous_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Previous_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetDocument(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,89852901)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 2 valid operators)
	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,89852901) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___lt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,89852901) ) return false;
		return true;
	}


	// Constructor binds:
	// TiXmlAttribute::TiXmlAttribute()
	static TiXmlAttribute* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlAttribute::TiXmlAttribute() function, expected prototype:\nTiXmlAttribute::TiXmlAttribute()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new TiXmlAttribute();
	}

	// TiXmlAttribute::TiXmlAttribute(const std::string & _name, const std::string & _value)
	static TiXmlAttribute* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlAttribute::TiXmlAttribute(const std::string & _name, const std::string & _value) function, expected prototype:\nTiXmlAttribute::TiXmlAttribute(const std::string & _name, const std::string & _value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string _name(lua_tostring(L,1),lua_objlen(L,1));
		std::string _value(lua_tostring(L,2),lua_objlen(L,2));

		return new TiXmlAttribute(_name, _value);
	}

	// TiXmlAttribute::TiXmlAttribute(const char * _name, const char * _value)
	static TiXmlAttribute* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlAttribute::TiXmlAttribute(const char * _name, const char * _value) function, expected prototype:\nTiXmlAttribute::TiXmlAttribute(const char * _name, const char * _value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * _name=(const char *)lua_tostring(L,1);
		const char * _value=(const char *)lua_tostring(L,2);

		return new TiXmlAttribute(_name, _value);
	}

	// TiXmlAttribute::TiXmlAttribute(lua_Table * data)
	static TiXmlAttribute* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlAttribute::TiXmlAttribute(lua_Table * data) function, expected prototype:\nTiXmlAttribute::TiXmlAttribute(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_TiXmlAttribute(L,NULL);
	}

	// TiXmlAttribute::TiXmlAttribute(lua_Table * data, const std::string & _name, const std::string & _value)
	static TiXmlAttribute* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlAttribute::TiXmlAttribute(lua_Table * data, const std::string & _name, const std::string & _value) function, expected prototype:\nTiXmlAttribute::TiXmlAttribute(lua_Table * data, const std::string & _name, const std::string & _value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string _name(lua_tostring(L,2),lua_objlen(L,2));
		std::string _value(lua_tostring(L,3),lua_objlen(L,3));

		return new wrapper_TiXmlAttribute(L,NULL, _name, _value);
	}

	// TiXmlAttribute::TiXmlAttribute(lua_Table * data, const char * _name, const char * _value)
	static TiXmlAttribute* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlAttribute::TiXmlAttribute(lua_Table * data, const char * _name, const char * _value) function, expected prototype:\nTiXmlAttribute::TiXmlAttribute(lua_Table * data, const char * _name, const char * _value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * _name=(const char *)lua_tostring(L,2);
		const char * _value=(const char *)lua_tostring(L,3);

		return new wrapper_TiXmlAttribute(L,NULL, _name, _value);
	}

	// Overload binder for TiXmlAttribute::TiXmlAttribute
	static TiXmlAttribute* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);

		luaL_error(L, "error in function TiXmlAttribute, cannot match any of the overloads for function TiXmlAttribute:\n  TiXmlAttribute()\n  TiXmlAttribute(const std::string &, const std::string &)\n  TiXmlAttribute(const char *, const char *)\n  TiXmlAttribute(lua_Table *)\n  TiXmlAttribute(lua_Table *, const std::string &, const std::string &)\n  TiXmlAttribute(lua_Table *, const char *, const char *)\n");
		return NULL;
	}


	// Function binds:
	// const char * TiXmlAttribute::Name() const
	static int _bind_Name(lua_State *L) {
		if (!_lg_typecheck_Name(L)) {
			luaL_error(L, "luna typecheck failed in const char * TiXmlAttribute::Name() const function, expected prototype:\nconst char * TiXmlAttribute::Name() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlAttribute* self=Luna< TiXmlBase >::checkSubType< TiXmlAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * TiXmlAttribute::Name() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Name();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * TiXmlAttribute::Value() const
	static int _bind_Value(lua_State *L) {
		if (!_lg_typecheck_Value(L)) {
			luaL_error(L, "luna typecheck failed in const char * TiXmlAttribute::Value() const function, expected prototype:\nconst char * TiXmlAttribute::Value() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlAttribute* self=Luna< TiXmlBase >::checkSubType< TiXmlAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * TiXmlAttribute::Value() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Value();
		lua_pushstring(L,lret);

		return 1;
	}

	// const std::string & TiXmlAttribute::ValueStr() const
	static int _bind_ValueStr(lua_State *L) {
		if (!_lg_typecheck_ValueStr(L)) {
			luaL_error(L, "luna typecheck failed in const std::string & TiXmlAttribute::ValueStr() const function, expected prototype:\nconst std::string & TiXmlAttribute::ValueStr() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlAttribute* self=Luna< TiXmlBase >::checkSubType< TiXmlAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const std::string & TiXmlAttribute::ValueStr() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const std::string & lret = self->ValueStr();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// int TiXmlAttribute::IntValue() const
	static int _bind_IntValue(lua_State *L) {
		if (!_lg_typecheck_IntValue(L)) {
			luaL_error(L, "luna typecheck failed in int TiXmlAttribute::IntValue() const function, expected prototype:\nint TiXmlAttribute::IntValue() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlAttribute* self=Luna< TiXmlBase >::checkSubType< TiXmlAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int TiXmlAttribute::IntValue() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->IntValue();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double TiXmlAttribute::DoubleValue() const
	static int _bind_DoubleValue(lua_State *L) {
		if (!_lg_typecheck_DoubleValue(L)) {
			luaL_error(L, "luna typecheck failed in double TiXmlAttribute::DoubleValue() const function, expected prototype:\ndouble TiXmlAttribute::DoubleValue() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlAttribute* self=Luna< TiXmlBase >::checkSubType< TiXmlAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double TiXmlAttribute::DoubleValue() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->DoubleValue();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const std::string & TiXmlAttribute::NameTStr() const
	static int _bind_NameTStr(lua_State *L) {
		if (!_lg_typecheck_NameTStr(L)) {
			luaL_error(L, "luna typecheck failed in const std::string & TiXmlAttribute::NameTStr() const function, expected prototype:\nconst std::string & TiXmlAttribute::NameTStr() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlAttribute* self=Luna< TiXmlBase >::checkSubType< TiXmlAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const std::string & TiXmlAttribute::NameTStr() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const std::string & lret = self->NameTStr();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// int TiXmlAttribute::QueryIntValue(int * _value) const
	static int _bind_QueryIntValue(lua_State *L) {
		if (!_lg_typecheck_QueryIntValue(L)) {
			luaL_error(L, "luna typecheck failed in int TiXmlAttribute::QueryIntValue(int * _value) const function, expected prototype:\nint TiXmlAttribute::QueryIntValue(int * _value) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int* _value=(int*)Luna< void >::check(L,2);

		TiXmlAttribute* self=Luna< TiXmlBase >::checkSubType< TiXmlAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int TiXmlAttribute::QueryIntValue(int *) const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->QueryIntValue(_value);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int TiXmlAttribute::QueryDoubleValue(double * _value) const
	static int _bind_QueryDoubleValue(lua_State *L) {
		if (!_lg_typecheck_QueryDoubleValue(L)) {
			luaL_error(L, "luna typecheck failed in int TiXmlAttribute::QueryDoubleValue(double * _value) const function, expected prototype:\nint TiXmlAttribute::QueryDoubleValue(double * _value) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double* _value=(double*)Luna< void >::check(L,2);

		TiXmlAttribute* self=Luna< TiXmlBase >::checkSubType< TiXmlAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int TiXmlAttribute::QueryDoubleValue(double *) const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->QueryDoubleValue(_value);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void TiXmlAttribute::SetName(const char * _name)
	static int _bind_SetName_overload_1(lua_State *L) {
		if (!_lg_typecheck_SetName_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void TiXmlAttribute::SetName(const char * _name) function, expected prototype:\nvoid TiXmlAttribute::SetName(const char * _name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * _name=(const char *)lua_tostring(L,2);

		TiXmlAttribute* self=Luna< TiXmlBase >::checkSubType< TiXmlAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void TiXmlAttribute::SetName(const char *). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetName(_name);

		return 0;
	}

	// void TiXmlAttribute::SetName(const std::string & _name)
	static int _bind_SetName_overload_2(lua_State *L) {
		if (!_lg_typecheck_SetName_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void TiXmlAttribute::SetName(const std::string & _name) function, expected prototype:\nvoid TiXmlAttribute::SetName(const std::string & _name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string _name(lua_tostring(L,2),lua_objlen(L,2));

		TiXmlAttribute* self=Luna< TiXmlBase >::checkSubType< TiXmlAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void TiXmlAttribute::SetName(const std::string &). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetName(_name);

		return 0;
	}

	// Overload binder for TiXmlAttribute::SetName
	static int _bind_SetName(lua_State *L) {
		if (_lg_typecheck_SetName_overload_1(L)) return _bind_SetName_overload_1(L);
		if (_lg_typecheck_SetName_overload_2(L)) return _bind_SetName_overload_2(L);

		luaL_error(L, "error in function SetName, cannot match any of the overloads for function SetName:\n  SetName(const char *)\n  SetName(const std::string &)\n");
		return 0;
	}

	// void TiXmlAttribute::SetValue(const char * _value)
	static int _bind_SetValue_overload_1(lua_State *L) {
		if (!_lg_typecheck_SetValue_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void TiXmlAttribute::SetValue(const char * _value) function, expected prototype:\nvoid TiXmlAttribute::SetValue(const char * _value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * _value=(const char *)lua_tostring(L,2);

		TiXmlAttribute* self=Luna< TiXmlBase >::checkSubType< TiXmlAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void TiXmlAttribute::SetValue(const char *). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetValue(_value);

		return 0;
	}

	// void TiXmlAttribute::SetValue(const std::string & _value)
	static int _bind_SetValue_overload_2(lua_State *L) {
		if (!_lg_typecheck_SetValue_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void TiXmlAttribute::SetValue(const std::string & _value) function, expected prototype:\nvoid TiXmlAttribute::SetValue(const std::string & _value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string _value(lua_tostring(L,2),lua_objlen(L,2));

		TiXmlAttribute* self=Luna< TiXmlBase >::checkSubType< TiXmlAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void TiXmlAttribute::SetValue(const std::string &). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetValue(_value);

		return 0;
	}

	// Overload binder for TiXmlAttribute::SetValue
	static int _bind_SetValue(lua_State *L) {
		if (_lg_typecheck_SetValue_overload_1(L)) return _bind_SetValue_overload_1(L);
		if (_lg_typecheck_SetValue_overload_2(L)) return _bind_SetValue_overload_2(L);

		luaL_error(L, "error in function SetValue, cannot match any of the overloads for function SetValue:\n  SetValue(const char *)\n  SetValue(const std::string &)\n");
		return 0;
	}

	// void TiXmlAttribute::SetIntValue(int _value)
	static int _bind_SetIntValue(lua_State *L) {
		if (!_lg_typecheck_SetIntValue(L)) {
			luaL_error(L, "luna typecheck failed in void TiXmlAttribute::SetIntValue(int _value) function, expected prototype:\nvoid TiXmlAttribute::SetIntValue(int _value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int _value=(int)lua_tointeger(L,2);

		TiXmlAttribute* self=Luna< TiXmlBase >::checkSubType< TiXmlAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void TiXmlAttribute::SetIntValue(int). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetIntValue(_value);

		return 0;
	}

	// void TiXmlAttribute::SetDoubleValue(double _value)
	static int _bind_SetDoubleValue(lua_State *L) {
		if (!_lg_typecheck_SetDoubleValue(L)) {
			luaL_error(L, "luna typecheck failed in void TiXmlAttribute::SetDoubleValue(double _value) function, expected prototype:\nvoid TiXmlAttribute::SetDoubleValue(double _value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double _value=(double)lua_tonumber(L,2);

		TiXmlAttribute* self=Luna< TiXmlBase >::checkSubType< TiXmlAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void TiXmlAttribute::SetDoubleValue(double). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetDoubleValue(_value);

		return 0;
	}

	// const TiXmlAttribute * TiXmlAttribute::Next() const
	static int _bind_Next_overload_1(lua_State *L) {
		if (!_lg_typecheck_Next_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const TiXmlAttribute * TiXmlAttribute::Next() const function, expected prototype:\nconst TiXmlAttribute * TiXmlAttribute::Next() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlAttribute* self=Luna< TiXmlBase >::checkSubType< TiXmlAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const TiXmlAttribute * TiXmlAttribute::Next() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const TiXmlAttribute * lret = self->Next();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlAttribute >::push(L,lret,false);

		return 1;
	}

	// TiXmlAttribute * TiXmlAttribute::Next()
	static int _bind_Next_overload_2(lua_State *L) {
		if (!_lg_typecheck_Next_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlAttribute * TiXmlAttribute::Next() function, expected prototype:\nTiXmlAttribute * TiXmlAttribute::Next()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlAttribute* self=Luna< TiXmlBase >::checkSubType< TiXmlAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlAttribute * TiXmlAttribute::Next(). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlAttribute * lret = self->Next();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlAttribute >::push(L,lret,false);

		return 1;
	}

	// Overload binder for TiXmlAttribute::Next
	static int _bind_Next(lua_State *L) {
		if (_lg_typecheck_Next_overload_1(L)) return _bind_Next_overload_1(L);
		if (_lg_typecheck_Next_overload_2(L)) return _bind_Next_overload_2(L);

		luaL_error(L, "error in function Next, cannot match any of the overloads for function Next:\n  Next()\n  Next()\n");
		return 0;
	}

	// const TiXmlAttribute * TiXmlAttribute::Previous() const
	static int _bind_Previous_overload_1(lua_State *L) {
		if (!_lg_typecheck_Previous_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const TiXmlAttribute * TiXmlAttribute::Previous() const function, expected prototype:\nconst TiXmlAttribute * TiXmlAttribute::Previous() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlAttribute* self=Luna< TiXmlBase >::checkSubType< TiXmlAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const TiXmlAttribute * TiXmlAttribute::Previous() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const TiXmlAttribute * lret = self->Previous();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlAttribute >::push(L,lret,false);

		return 1;
	}

	// TiXmlAttribute * TiXmlAttribute::Previous()
	static int _bind_Previous_overload_2(lua_State *L) {
		if (!_lg_typecheck_Previous_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlAttribute * TiXmlAttribute::Previous() function, expected prototype:\nTiXmlAttribute * TiXmlAttribute::Previous()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlAttribute* self=Luna< TiXmlBase >::checkSubType< TiXmlAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlAttribute * TiXmlAttribute::Previous(). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlAttribute * lret = self->Previous();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlAttribute >::push(L,lret,false);

		return 1;
	}

	// Overload binder for TiXmlAttribute::Previous
	static int _bind_Previous(lua_State *L) {
		if (_lg_typecheck_Previous_overload_1(L)) return _bind_Previous_overload_1(L);
		if (_lg_typecheck_Previous_overload_2(L)) return _bind_Previous_overload_2(L);

		luaL_error(L, "error in function Previous, cannot match any of the overloads for function Previous:\n  Previous()\n  Previous()\n");
		return 0;
	}

	// void TiXmlAttribute::SetDocument(TiXmlDocument * doc)
	static int _bind_SetDocument(lua_State *L) {
		if (!_lg_typecheck_SetDocument(L)) {
			luaL_error(L, "luna typecheck failed in void TiXmlAttribute::SetDocument(TiXmlDocument * doc) function, expected prototype:\nvoid TiXmlAttribute::SetDocument(TiXmlDocument * doc)\nClass arguments details:\narg 1 ID = 89852901\n\n%s",luna_dumpStack(L).c_str());
		}

		TiXmlDocument* doc=(Luna< TiXmlBase >::checkSubType< TiXmlDocument >(L,2));

		TiXmlAttribute* self=Luna< TiXmlBase >::checkSubType< TiXmlAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void TiXmlAttribute::SetDocument(TiXmlDocument *). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetDocument(doc);

		return 0;
	}


	// Operator binds:
	// bool TiXmlAttribute::operator==(const TiXmlAttribute & rhs) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in bool TiXmlAttribute::operator==(const TiXmlAttribute & rhs) const function, expected prototype:\nbool TiXmlAttribute::operator==(const TiXmlAttribute & rhs) const\nClass arguments details:\narg 1 ID = 89852901\n\n%s",luna_dumpStack(L).c_str());
		}

		const TiXmlAttribute* rhs_ptr=(Luna< TiXmlBase >::checkSubType< TiXmlAttribute >(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in TiXmlAttribute::operator== function");
		}
		const TiXmlAttribute & rhs=*rhs_ptr;

		TiXmlAttribute* self=Luna< TiXmlBase >::checkSubType< TiXmlAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool TiXmlAttribute::operator==(const TiXmlAttribute &) const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator==(rhs);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool TiXmlAttribute::operator<(const TiXmlAttribute & rhs) const
	static int _bind___lt(lua_State *L) {
		if (!_lg_typecheck___lt(L)) {
			luaL_error(L, "luna typecheck failed in bool TiXmlAttribute::operator<(const TiXmlAttribute & rhs) const function, expected prototype:\nbool TiXmlAttribute::operator<(const TiXmlAttribute & rhs) const\nClass arguments details:\narg 1 ID = 89852901\n\n%s",luna_dumpStack(L).c_str());
		}

		const TiXmlAttribute* rhs_ptr=(Luna< TiXmlBase >::checkSubType< TiXmlAttribute >(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in TiXmlAttribute::operator< function");
		}
		const TiXmlAttribute & rhs=*rhs_ptr;

		TiXmlAttribute* self=Luna< TiXmlBase >::checkSubType< TiXmlAttribute >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool TiXmlAttribute::operator<(const TiXmlAttribute &) const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator<(rhs);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

TiXmlAttribute* LunaTraits< TiXmlAttribute >::_bind_ctor(lua_State *L) {
	return luna_wrapper_TiXmlAttribute::_bind_ctor(L);
}

void LunaTraits< TiXmlAttribute >::_bind_dtor(TiXmlAttribute* obj) {
	delete obj;
}

const char LunaTraits< TiXmlAttribute >::className[] = "TiXmlAttribute";
const char LunaTraits< TiXmlAttribute >::fullName[] = "TiXmlAttribute";
const char LunaTraits< TiXmlAttribute >::moduleName[] = "land";
const char* LunaTraits< TiXmlAttribute >::parents[] = {"land.TiXmlBase", 0};
const int LunaTraits< TiXmlAttribute >::hash = 20829800;
const int LunaTraits< TiXmlAttribute >::uniqueIDs[] = {89852901,0};

luna_RegType LunaTraits< TiXmlAttribute >::methods[] = {
	{"Name", &luna_wrapper_TiXmlAttribute::_bind_Name},
	{"Value", &luna_wrapper_TiXmlAttribute::_bind_Value},
	{"ValueStr", &luna_wrapper_TiXmlAttribute::_bind_ValueStr},
	{"IntValue", &luna_wrapper_TiXmlAttribute::_bind_IntValue},
	{"DoubleValue", &luna_wrapper_TiXmlAttribute::_bind_DoubleValue},
	{"NameTStr", &luna_wrapper_TiXmlAttribute::_bind_NameTStr},
	{"QueryIntValue", &luna_wrapper_TiXmlAttribute::_bind_QueryIntValue},
	{"QueryDoubleValue", &luna_wrapper_TiXmlAttribute::_bind_QueryDoubleValue},
	{"SetName", &luna_wrapper_TiXmlAttribute::_bind_SetName},
	{"SetValue", &luna_wrapper_TiXmlAttribute::_bind_SetValue},
	{"SetIntValue", &luna_wrapper_TiXmlAttribute::_bind_SetIntValue},
	{"SetDoubleValue", &luna_wrapper_TiXmlAttribute::_bind_SetDoubleValue},
	{"Next", &luna_wrapper_TiXmlAttribute::_bind_Next},
	{"Previous", &luna_wrapper_TiXmlAttribute::_bind_Previous},
	{"SetDocument", &luna_wrapper_TiXmlAttribute::_bind_SetDocument},
	{"__eq", &luna_wrapper_TiXmlAttribute::_bind___eq},
	{"__lt", &luna_wrapper_TiXmlAttribute::_bind___lt},
	{"fromVoid", &luna_wrapper_TiXmlAttribute::_bind_fromVoid},
	{"asVoid", &luna_wrapper_TiXmlAttribute::_bind_asVoid},
	{"getTable", &luna_wrapper_TiXmlAttribute::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< TiXmlAttribute >::converters[] = {
	{"TiXmlBase", &luna_wrapper_TiXmlAttribute::_cast_from_TiXmlBase},
	{0,0}
};

luna_RegEnumType LunaTraits< TiXmlAttribute >::enumValues[] = {
	{0,0}
};



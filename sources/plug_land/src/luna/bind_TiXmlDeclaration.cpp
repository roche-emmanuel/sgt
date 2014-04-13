#include <plug_common.h>

#include <luna/wrappers/wrapper_TiXmlDeclaration.h>

class luna_wrapper_TiXmlDeclaration {
public:
	typedef Luna< TiXmlDeclaration > luna_t;

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

		TiXmlDeclaration* self= (TiXmlDeclaration*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< TiXmlDeclaration >::push(L,self,false);
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
		//TiXmlDeclaration* ptr= dynamic_cast< TiXmlDeclaration* >(Luna< TiXmlBase >::check(L,1));
		TiXmlDeclaration* ptr= luna_caster< TiXmlBase, TiXmlDeclaration >::cast(Luna< TiXmlBase >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< TiXmlDeclaration >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,89852901) ) return false;
		if( (!(Luna< TiXmlBase >::checkSubType< TiXmlDeclaration >(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_7(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_8(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,89852901) ) return false;
		if( (!(Luna< TiXmlBase >::checkSubType< TiXmlDeclaration >(L,2))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Version(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Encoding(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Standalone(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Clone(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ToDeclaration_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ToDeclaration_overload_2(lua_State *L) {
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

	inline static bool _lg_typecheck_base_ToElement_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_ToElement_overload_2(lua_State *L) {
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

	inline static bool _lg_typecheck_base_Clone(lua_State *L) {
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
	// TiXmlDeclaration::TiXmlDeclaration()
	static TiXmlDeclaration* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlDeclaration::TiXmlDeclaration() function, expected prototype:\nTiXmlDeclaration::TiXmlDeclaration()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new TiXmlDeclaration();
	}

	// TiXmlDeclaration::TiXmlDeclaration(const std::string & _version, const std::string & _encoding, const std::string & _standalone)
	static TiXmlDeclaration* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlDeclaration::TiXmlDeclaration(const std::string & _version, const std::string & _encoding, const std::string & _standalone) function, expected prototype:\nTiXmlDeclaration::TiXmlDeclaration(const std::string & _version, const std::string & _encoding, const std::string & _standalone)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string _version(lua_tostring(L,1),lua_objlen(L,1));
		std::string _encoding(lua_tostring(L,2),lua_objlen(L,2));
		std::string _standalone(lua_tostring(L,3),lua_objlen(L,3));

		return new TiXmlDeclaration(_version, _encoding, _standalone);
	}

	// TiXmlDeclaration::TiXmlDeclaration(const char * _version, const char * _encoding, const char * _standalone)
	static TiXmlDeclaration* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlDeclaration::TiXmlDeclaration(const char * _version, const char * _encoding, const char * _standalone) function, expected prototype:\nTiXmlDeclaration::TiXmlDeclaration(const char * _version, const char * _encoding, const char * _standalone)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * _version=(const char *)lua_tostring(L,1);
		const char * _encoding=(const char *)lua_tostring(L,2);
		const char * _standalone=(const char *)lua_tostring(L,3);

		return new TiXmlDeclaration(_version, _encoding, _standalone);
	}

	// TiXmlDeclaration::TiXmlDeclaration(const TiXmlDeclaration & copy)
	static TiXmlDeclaration* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlDeclaration::TiXmlDeclaration(const TiXmlDeclaration & copy) function, expected prototype:\nTiXmlDeclaration::TiXmlDeclaration(const TiXmlDeclaration & copy)\nClass arguments details:\narg 1 ID = 89852901\n\n%s",luna_dumpStack(L).c_str());
		}

		const TiXmlDeclaration* copy_ptr=(Luna< TiXmlBase >::checkSubType< TiXmlDeclaration >(L,1));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in TiXmlDeclaration::TiXmlDeclaration function");
		}
		const TiXmlDeclaration & copy=*copy_ptr;

		return new TiXmlDeclaration(copy);
	}

	// TiXmlDeclaration::TiXmlDeclaration(lua_Table * data)
	static TiXmlDeclaration* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlDeclaration::TiXmlDeclaration(lua_Table * data) function, expected prototype:\nTiXmlDeclaration::TiXmlDeclaration(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_TiXmlDeclaration(L,NULL);
	}

	// TiXmlDeclaration::TiXmlDeclaration(lua_Table * data, const std::string & _version, const std::string & _encoding, const std::string & _standalone)
	static TiXmlDeclaration* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlDeclaration::TiXmlDeclaration(lua_Table * data, const std::string & _version, const std::string & _encoding, const std::string & _standalone) function, expected prototype:\nTiXmlDeclaration::TiXmlDeclaration(lua_Table * data, const std::string & _version, const std::string & _encoding, const std::string & _standalone)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string _version(lua_tostring(L,2),lua_objlen(L,2));
		std::string _encoding(lua_tostring(L,3),lua_objlen(L,3));
		std::string _standalone(lua_tostring(L,4),lua_objlen(L,4));

		return new wrapper_TiXmlDeclaration(L,NULL, _version, _encoding, _standalone);
	}

	// TiXmlDeclaration::TiXmlDeclaration(lua_Table * data, const char * _version, const char * _encoding, const char * _standalone)
	static TiXmlDeclaration* _bind_ctor_overload_7(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_7(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlDeclaration::TiXmlDeclaration(lua_Table * data, const char * _version, const char * _encoding, const char * _standalone) function, expected prototype:\nTiXmlDeclaration::TiXmlDeclaration(lua_Table * data, const char * _version, const char * _encoding, const char * _standalone)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * _version=(const char *)lua_tostring(L,2);
		const char * _encoding=(const char *)lua_tostring(L,3);
		const char * _standalone=(const char *)lua_tostring(L,4);

		return new wrapper_TiXmlDeclaration(L,NULL, _version, _encoding, _standalone);
	}

	// TiXmlDeclaration::TiXmlDeclaration(lua_Table * data, const TiXmlDeclaration & copy)
	static TiXmlDeclaration* _bind_ctor_overload_8(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_8(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlDeclaration::TiXmlDeclaration(lua_Table * data, const TiXmlDeclaration & copy) function, expected prototype:\nTiXmlDeclaration::TiXmlDeclaration(lua_Table * data, const TiXmlDeclaration & copy)\nClass arguments details:\narg 2 ID = 89852901\n\n%s",luna_dumpStack(L).c_str());
		}

		const TiXmlDeclaration* copy_ptr=(Luna< TiXmlBase >::checkSubType< TiXmlDeclaration >(L,2));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in TiXmlDeclaration::TiXmlDeclaration function");
		}
		const TiXmlDeclaration & copy=*copy_ptr;

		return new wrapper_TiXmlDeclaration(L,NULL, copy);
	}

	// Overload binder for TiXmlDeclaration::TiXmlDeclaration
	static TiXmlDeclaration* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);
		if (_lg_typecheck_ctor_overload_7(L)) return _bind_ctor_overload_7(L);
		if (_lg_typecheck_ctor_overload_8(L)) return _bind_ctor_overload_8(L);

		luaL_error(L, "error in function TiXmlDeclaration, cannot match any of the overloads for function TiXmlDeclaration:\n  TiXmlDeclaration()\n  TiXmlDeclaration(const std::string &, const std::string &, const std::string &)\n  TiXmlDeclaration(const char *, const char *, const char *)\n  TiXmlDeclaration(const TiXmlDeclaration &)\n  TiXmlDeclaration(lua_Table *)\n  TiXmlDeclaration(lua_Table *, const std::string &, const std::string &, const std::string &)\n  TiXmlDeclaration(lua_Table *, const char *, const char *, const char *)\n  TiXmlDeclaration(lua_Table *, const TiXmlDeclaration &)\n");
		return NULL;
	}


	// Function binds:
	// const char * TiXmlDeclaration::Version() const
	static int _bind_Version(lua_State *L) {
		if (!_lg_typecheck_Version(L)) {
			luaL_error(L, "luna typecheck failed in const char * TiXmlDeclaration::Version() const function, expected prototype:\nconst char * TiXmlDeclaration::Version() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlDeclaration* self=Luna< TiXmlBase >::checkSubType< TiXmlDeclaration >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * TiXmlDeclaration::Version() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Version();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * TiXmlDeclaration::Encoding() const
	static int _bind_Encoding(lua_State *L) {
		if (!_lg_typecheck_Encoding(L)) {
			luaL_error(L, "luna typecheck failed in const char * TiXmlDeclaration::Encoding() const function, expected prototype:\nconst char * TiXmlDeclaration::Encoding() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlDeclaration* self=Luna< TiXmlBase >::checkSubType< TiXmlDeclaration >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * TiXmlDeclaration::Encoding() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Encoding();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * TiXmlDeclaration::Standalone() const
	static int _bind_Standalone(lua_State *L) {
		if (!_lg_typecheck_Standalone(L)) {
			luaL_error(L, "luna typecheck failed in const char * TiXmlDeclaration::Standalone() const function, expected prototype:\nconst char * TiXmlDeclaration::Standalone() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlDeclaration* self=Luna< TiXmlBase >::checkSubType< TiXmlDeclaration >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * TiXmlDeclaration::Standalone() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Standalone();
		lua_pushstring(L,lret);

		return 1;
	}

	// TiXmlNode * TiXmlDeclaration::Clone() const
	static int _bind_Clone(lua_State *L) {
		if (!_lg_typecheck_Clone(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlNode * TiXmlDeclaration::Clone() const function, expected prototype:\nTiXmlNode * TiXmlDeclaration::Clone() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlDeclaration* self=Luna< TiXmlBase >::checkSubType< TiXmlDeclaration >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlNode * TiXmlDeclaration::Clone() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlNode * lret = self->Clone();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlNode >::push(L,lret,false);

		return 1;
	}

	// const TiXmlDeclaration * TiXmlDeclaration::ToDeclaration() const
	static int _bind_ToDeclaration_overload_1(lua_State *L) {
		if (!_lg_typecheck_ToDeclaration_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const TiXmlDeclaration * TiXmlDeclaration::ToDeclaration() const function, expected prototype:\nconst TiXmlDeclaration * TiXmlDeclaration::ToDeclaration() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlDeclaration* self=Luna< TiXmlBase >::checkSubType< TiXmlDeclaration >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const TiXmlDeclaration * TiXmlDeclaration::ToDeclaration() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const TiXmlDeclaration * lret = self->ToDeclaration();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlDeclaration >::push(L,lret,false);

		return 1;
	}

	// TiXmlDeclaration * TiXmlDeclaration::ToDeclaration()
	static int _bind_ToDeclaration_overload_2(lua_State *L) {
		if (!_lg_typecheck_ToDeclaration_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlDeclaration * TiXmlDeclaration::ToDeclaration() function, expected prototype:\nTiXmlDeclaration * TiXmlDeclaration::ToDeclaration()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlDeclaration* self=Luna< TiXmlBase >::checkSubType< TiXmlDeclaration >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlDeclaration * TiXmlDeclaration::ToDeclaration(). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlDeclaration * lret = self->ToDeclaration();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlDeclaration >::push(L,lret,false);

		return 1;
	}

	// Overload binder for TiXmlDeclaration::ToDeclaration
	static int _bind_ToDeclaration(lua_State *L) {
		if (_lg_typecheck_ToDeclaration_overload_1(L)) return _bind_ToDeclaration_overload_1(L);
		if (_lg_typecheck_ToDeclaration_overload_2(L)) return _bind_ToDeclaration_overload_2(L);

		luaL_error(L, "error in function ToDeclaration, cannot match any of the overloads for function ToDeclaration:\n  ToDeclaration()\n  ToDeclaration()\n");
		return 0;
	}

	// bool TiXmlDeclaration::Accept(TiXmlVisitor * visitor) const
	static int _bind_Accept(lua_State *L) {
		if (!_lg_typecheck_Accept(L)) {
			luaL_error(L, "luna typecheck failed in bool TiXmlDeclaration::Accept(TiXmlVisitor * visitor) const function, expected prototype:\nbool TiXmlDeclaration::Accept(TiXmlVisitor * visitor) const\nClass arguments details:\narg 1 ID = 86845197\n\n%s",luna_dumpStack(L).c_str());
		}

		TiXmlVisitor* visitor=(Luna< TiXmlVisitor >::check(L,2));

		TiXmlDeclaration* self=Luna< TiXmlBase >::checkSubType< TiXmlDeclaration >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool TiXmlDeclaration::Accept(TiXmlVisitor *) const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Accept(visitor);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const TiXmlDocument * TiXmlDeclaration::base_ToDocument() const
	static int _bind_base_ToDocument_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_ToDocument_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const TiXmlDocument * TiXmlDeclaration::base_ToDocument() const function, expected prototype:\nconst TiXmlDocument * TiXmlDeclaration::base_ToDocument() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlDeclaration* self=Luna< TiXmlBase >::checkSubType< TiXmlDeclaration >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const TiXmlDocument * TiXmlDeclaration::base_ToDocument() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const TiXmlDocument * lret = self->TiXmlDeclaration::ToDocument();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlDocument >::push(L,lret,false);

		return 1;
	}

	// TiXmlDocument * TiXmlDeclaration::base_ToDocument()
	static int _bind_base_ToDocument_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_ToDocument_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlDocument * TiXmlDeclaration::base_ToDocument() function, expected prototype:\nTiXmlDocument * TiXmlDeclaration::base_ToDocument()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlDeclaration* self=Luna< TiXmlBase >::checkSubType< TiXmlDeclaration >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlDocument * TiXmlDeclaration::base_ToDocument(). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlDocument * lret = self->TiXmlDeclaration::ToDocument();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlDocument >::push(L,lret,false);

		return 1;
	}

	// Overload binder for TiXmlDeclaration::base_ToDocument
	static int _bind_base_ToDocument(lua_State *L) {
		if (_lg_typecheck_base_ToDocument_overload_1(L)) return _bind_base_ToDocument_overload_1(L);
		if (_lg_typecheck_base_ToDocument_overload_2(L)) return _bind_base_ToDocument_overload_2(L);

		luaL_error(L, "error in function base_ToDocument, cannot match any of the overloads for function base_ToDocument:\n  base_ToDocument()\n  base_ToDocument()\n");
		return 0;
	}

	// const TiXmlElement * TiXmlDeclaration::base_ToElement() const
	static int _bind_base_ToElement_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_ToElement_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const TiXmlElement * TiXmlDeclaration::base_ToElement() const function, expected prototype:\nconst TiXmlElement * TiXmlDeclaration::base_ToElement() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlDeclaration* self=Luna< TiXmlBase >::checkSubType< TiXmlDeclaration >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const TiXmlElement * TiXmlDeclaration::base_ToElement() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const TiXmlElement * lret = self->TiXmlDeclaration::ToElement();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlElement >::push(L,lret,false);

		return 1;
	}

	// TiXmlElement * TiXmlDeclaration::base_ToElement()
	static int _bind_base_ToElement_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_ToElement_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlElement * TiXmlDeclaration::base_ToElement() function, expected prototype:\nTiXmlElement * TiXmlDeclaration::base_ToElement()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlDeclaration* self=Luna< TiXmlBase >::checkSubType< TiXmlDeclaration >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlElement * TiXmlDeclaration::base_ToElement(). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlElement * lret = self->TiXmlDeclaration::ToElement();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlElement >::push(L,lret,false);

		return 1;
	}

	// Overload binder for TiXmlDeclaration::base_ToElement
	static int _bind_base_ToElement(lua_State *L) {
		if (_lg_typecheck_base_ToElement_overload_1(L)) return _bind_base_ToElement_overload_1(L);
		if (_lg_typecheck_base_ToElement_overload_2(L)) return _bind_base_ToElement_overload_2(L);

		luaL_error(L, "error in function base_ToElement, cannot match any of the overloads for function base_ToElement:\n  base_ToElement()\n  base_ToElement()\n");
		return 0;
	}

	// const TiXmlComment * TiXmlDeclaration::base_ToComment() const
	static int _bind_base_ToComment_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_ToComment_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const TiXmlComment * TiXmlDeclaration::base_ToComment() const function, expected prototype:\nconst TiXmlComment * TiXmlDeclaration::base_ToComment() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlDeclaration* self=Luna< TiXmlBase >::checkSubType< TiXmlDeclaration >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const TiXmlComment * TiXmlDeclaration::base_ToComment() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const TiXmlComment * lret = self->TiXmlDeclaration::ToComment();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlComment >::push(L,lret,false);

		return 1;
	}

	// TiXmlComment * TiXmlDeclaration::base_ToComment()
	static int _bind_base_ToComment_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_ToComment_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlComment * TiXmlDeclaration::base_ToComment() function, expected prototype:\nTiXmlComment * TiXmlDeclaration::base_ToComment()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlDeclaration* self=Luna< TiXmlBase >::checkSubType< TiXmlDeclaration >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlComment * TiXmlDeclaration::base_ToComment(). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlComment * lret = self->TiXmlDeclaration::ToComment();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlComment >::push(L,lret,false);

		return 1;
	}

	// Overload binder for TiXmlDeclaration::base_ToComment
	static int _bind_base_ToComment(lua_State *L) {
		if (_lg_typecheck_base_ToComment_overload_1(L)) return _bind_base_ToComment_overload_1(L);
		if (_lg_typecheck_base_ToComment_overload_2(L)) return _bind_base_ToComment_overload_2(L);

		luaL_error(L, "error in function base_ToComment, cannot match any of the overloads for function base_ToComment:\n  base_ToComment()\n  base_ToComment()\n");
		return 0;
	}

	// const TiXmlUnknown * TiXmlDeclaration::base_ToUnknown() const
	static int _bind_base_ToUnknown_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_ToUnknown_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const TiXmlUnknown * TiXmlDeclaration::base_ToUnknown() const function, expected prototype:\nconst TiXmlUnknown * TiXmlDeclaration::base_ToUnknown() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlDeclaration* self=Luna< TiXmlBase >::checkSubType< TiXmlDeclaration >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const TiXmlUnknown * TiXmlDeclaration::base_ToUnknown() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const TiXmlUnknown * lret = self->TiXmlDeclaration::ToUnknown();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlUnknown >::push(L,lret,false);

		return 1;
	}

	// TiXmlUnknown * TiXmlDeclaration::base_ToUnknown()
	static int _bind_base_ToUnknown_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_ToUnknown_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlUnknown * TiXmlDeclaration::base_ToUnknown() function, expected prototype:\nTiXmlUnknown * TiXmlDeclaration::base_ToUnknown()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlDeclaration* self=Luna< TiXmlBase >::checkSubType< TiXmlDeclaration >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlUnknown * TiXmlDeclaration::base_ToUnknown(). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlUnknown * lret = self->TiXmlDeclaration::ToUnknown();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlUnknown >::push(L,lret,false);

		return 1;
	}

	// Overload binder for TiXmlDeclaration::base_ToUnknown
	static int _bind_base_ToUnknown(lua_State *L) {
		if (_lg_typecheck_base_ToUnknown_overload_1(L)) return _bind_base_ToUnknown_overload_1(L);
		if (_lg_typecheck_base_ToUnknown_overload_2(L)) return _bind_base_ToUnknown_overload_2(L);

		luaL_error(L, "error in function base_ToUnknown, cannot match any of the overloads for function base_ToUnknown:\n  base_ToUnknown()\n  base_ToUnknown()\n");
		return 0;
	}

	// const TiXmlText * TiXmlDeclaration::base_ToText() const
	static int _bind_base_ToText_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_ToText_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const TiXmlText * TiXmlDeclaration::base_ToText() const function, expected prototype:\nconst TiXmlText * TiXmlDeclaration::base_ToText() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlDeclaration* self=Luna< TiXmlBase >::checkSubType< TiXmlDeclaration >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const TiXmlText * TiXmlDeclaration::base_ToText() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const TiXmlText * lret = self->TiXmlDeclaration::ToText();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlText >::push(L,lret,false);

		return 1;
	}

	// TiXmlText * TiXmlDeclaration::base_ToText()
	static int _bind_base_ToText_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_ToText_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlText * TiXmlDeclaration::base_ToText() function, expected prototype:\nTiXmlText * TiXmlDeclaration::base_ToText()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlDeclaration* self=Luna< TiXmlBase >::checkSubType< TiXmlDeclaration >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlText * TiXmlDeclaration::base_ToText(). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlText * lret = self->TiXmlDeclaration::ToText();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlText >::push(L,lret,false);

		return 1;
	}

	// Overload binder for TiXmlDeclaration::base_ToText
	static int _bind_base_ToText(lua_State *L) {
		if (_lg_typecheck_base_ToText_overload_1(L)) return _bind_base_ToText_overload_1(L);
		if (_lg_typecheck_base_ToText_overload_2(L)) return _bind_base_ToText_overload_2(L);

		luaL_error(L, "error in function base_ToText, cannot match any of the overloads for function base_ToText:\n  base_ToText()\n  base_ToText()\n");
		return 0;
	}

	// TiXmlNode * TiXmlDeclaration::base_Clone() const
	static int _bind_base_Clone(lua_State *L) {
		if (!_lg_typecheck_base_Clone(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlNode * TiXmlDeclaration::base_Clone() const function, expected prototype:\nTiXmlNode * TiXmlDeclaration::base_Clone() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlDeclaration* self=Luna< TiXmlBase >::checkSubType< TiXmlDeclaration >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlNode * TiXmlDeclaration::base_Clone() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlNode * lret = self->TiXmlDeclaration::Clone();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlNode >::push(L,lret,false);

		return 1;
	}

	// const TiXmlDeclaration * TiXmlDeclaration::base_ToDeclaration() const
	static int _bind_base_ToDeclaration_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_ToDeclaration_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const TiXmlDeclaration * TiXmlDeclaration::base_ToDeclaration() const function, expected prototype:\nconst TiXmlDeclaration * TiXmlDeclaration::base_ToDeclaration() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlDeclaration* self=Luna< TiXmlBase >::checkSubType< TiXmlDeclaration >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const TiXmlDeclaration * TiXmlDeclaration::base_ToDeclaration() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const TiXmlDeclaration * lret = self->TiXmlDeclaration::ToDeclaration();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlDeclaration >::push(L,lret,false);

		return 1;
	}

	// TiXmlDeclaration * TiXmlDeclaration::base_ToDeclaration()
	static int _bind_base_ToDeclaration_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_ToDeclaration_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlDeclaration * TiXmlDeclaration::base_ToDeclaration() function, expected prototype:\nTiXmlDeclaration * TiXmlDeclaration::base_ToDeclaration()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlDeclaration* self=Luna< TiXmlBase >::checkSubType< TiXmlDeclaration >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call TiXmlDeclaration * TiXmlDeclaration::base_ToDeclaration(). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		TiXmlDeclaration * lret = self->TiXmlDeclaration::ToDeclaration();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< TiXmlDeclaration >::push(L,lret,false);

		return 1;
	}

	// Overload binder for TiXmlDeclaration::base_ToDeclaration
	static int _bind_base_ToDeclaration(lua_State *L) {
		if (_lg_typecheck_base_ToDeclaration_overload_1(L)) return _bind_base_ToDeclaration_overload_1(L);
		if (_lg_typecheck_base_ToDeclaration_overload_2(L)) return _bind_base_ToDeclaration_overload_2(L);

		luaL_error(L, "error in function base_ToDeclaration, cannot match any of the overloads for function base_ToDeclaration:\n  base_ToDeclaration()\n  base_ToDeclaration()\n");
		return 0;
	}

	// bool TiXmlDeclaration::base_Accept(TiXmlVisitor * visitor) const
	static int _bind_base_Accept(lua_State *L) {
		if (!_lg_typecheck_base_Accept(L)) {
			luaL_error(L, "luna typecheck failed in bool TiXmlDeclaration::base_Accept(TiXmlVisitor * visitor) const function, expected prototype:\nbool TiXmlDeclaration::base_Accept(TiXmlVisitor * visitor) const\nClass arguments details:\narg 1 ID = 86845197\n\n%s",luna_dumpStack(L).c_str());
		}

		TiXmlVisitor* visitor=(Luna< TiXmlVisitor >::check(L,2));

		TiXmlDeclaration* self=Luna< TiXmlBase >::checkSubType< TiXmlDeclaration >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool TiXmlDeclaration::base_Accept(TiXmlVisitor *) const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TiXmlDeclaration::Accept(visitor);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:
	// void TiXmlDeclaration::operator=(const TiXmlDeclaration & copy)
	static int _bind_op_assign(lua_State *L) {
		if (!_lg_typecheck_op_assign(L)) {
			luaL_error(L, "luna typecheck failed in void TiXmlDeclaration::operator=(const TiXmlDeclaration & copy) function, expected prototype:\nvoid TiXmlDeclaration::operator=(const TiXmlDeclaration & copy)\nClass arguments details:\narg 1 ID = 89852901\n\n%s",luna_dumpStack(L).c_str());
		}

		const TiXmlDeclaration* copy_ptr=(Luna< TiXmlBase >::checkSubType< TiXmlDeclaration >(L,2));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in TiXmlDeclaration::operator= function");
		}
		const TiXmlDeclaration & copy=*copy_ptr;

		TiXmlDeclaration* self=Luna< TiXmlBase >::checkSubType< TiXmlDeclaration >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void TiXmlDeclaration::operator=(const TiXmlDeclaration &). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->operator=(copy);

		return 0;
	}


};

TiXmlDeclaration* LunaTraits< TiXmlDeclaration >::_bind_ctor(lua_State *L) {
	return luna_wrapper_TiXmlDeclaration::_bind_ctor(L);
}

void LunaTraits< TiXmlDeclaration >::_bind_dtor(TiXmlDeclaration* obj) {
	delete obj;
}

const char LunaTraits< TiXmlDeclaration >::className[] = "TiXmlDeclaration";
const char LunaTraits< TiXmlDeclaration >::fullName[] = "TiXmlDeclaration";
const char LunaTraits< TiXmlDeclaration >::moduleName[] = "land";
const char* LunaTraits< TiXmlDeclaration >::parents[] = {"land.TiXmlNode", 0};
const int LunaTraits< TiXmlDeclaration >::hash = 44966039;
const int LunaTraits< TiXmlDeclaration >::uniqueIDs[] = {89852901,0};

luna_RegType LunaTraits< TiXmlDeclaration >::methods[] = {
	{"Version", &luna_wrapper_TiXmlDeclaration::_bind_Version},
	{"Encoding", &luna_wrapper_TiXmlDeclaration::_bind_Encoding},
	{"Standalone", &luna_wrapper_TiXmlDeclaration::_bind_Standalone},
	{"Clone", &luna_wrapper_TiXmlDeclaration::_bind_Clone},
	{"ToDeclaration", &luna_wrapper_TiXmlDeclaration::_bind_ToDeclaration},
	{"Accept", &luna_wrapper_TiXmlDeclaration::_bind_Accept},
	{"base_ToDocument", &luna_wrapper_TiXmlDeclaration::_bind_base_ToDocument},
	{"base_ToElement", &luna_wrapper_TiXmlDeclaration::_bind_base_ToElement},
	{"base_ToComment", &luna_wrapper_TiXmlDeclaration::_bind_base_ToComment},
	{"base_ToUnknown", &luna_wrapper_TiXmlDeclaration::_bind_base_ToUnknown},
	{"base_ToText", &luna_wrapper_TiXmlDeclaration::_bind_base_ToText},
	{"base_Clone", &luna_wrapper_TiXmlDeclaration::_bind_base_Clone},
	{"base_ToDeclaration", &luna_wrapper_TiXmlDeclaration::_bind_base_ToDeclaration},
	{"base_Accept", &luna_wrapper_TiXmlDeclaration::_bind_base_Accept},
	{"op_assign", &luna_wrapper_TiXmlDeclaration::_bind_op_assign},
	{"fromVoid", &luna_wrapper_TiXmlDeclaration::_bind_fromVoid},
	{"asVoid", &luna_wrapper_TiXmlDeclaration::_bind_asVoid},
	{"getTable", &luna_wrapper_TiXmlDeclaration::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< TiXmlDeclaration >::converters[] = {
	{"TiXmlBase", &luna_wrapper_TiXmlDeclaration::_cast_from_TiXmlBase},
	{0,0}
};

luna_RegEnumType LunaTraits< TiXmlDeclaration >::enumValues[] = {
	{0,0}
};



#include <plug_common.h>

#include <luna/wrappers/wrapper_TiXmlBase.h>

class luna_wrapper_TiXmlBase {
public:
	typedef Luna< TiXmlBase > luna_t;

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

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,89852901) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(TiXmlBase*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		TiXmlBase* rhs =(Luna< TiXmlBase >::check(L,2));
		TiXmlBase* self=(Luna< TiXmlBase >::check(L,1));
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

		TiXmlBase* self= (TiXmlBase*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< TiXmlBase >::push(L,self,false);
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

		TiXmlBase* self=(Luna< TiXmlBase >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("TiXmlBase");
		
		return luna_dynamicCast(L,converters,"TiXmlBase",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Row(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Column(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetUserData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetUserData_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetUserData_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetCondenseWhiteSpace(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isboolean(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsWhiteSpaceCondensed(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// TiXmlBase::TiXmlBase(lua_Table * data)
	static TiXmlBase* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlBase::TiXmlBase(lua_Table * data) function, expected prototype:\nTiXmlBase::TiXmlBase(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_TiXmlBase(L,NULL);
	}


	// Function binds:
	// int TiXmlBase::Row() const
	static int _bind_Row(lua_State *L) {
		if (!_lg_typecheck_Row(L)) {
			luaL_error(L, "luna typecheck failed in int TiXmlBase::Row() const function, expected prototype:\nint TiXmlBase::Row() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlBase* self=(Luna< TiXmlBase >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int TiXmlBase::Row() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->Row();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int TiXmlBase::Column() const
	static int _bind_Column(lua_State *L) {
		if (!_lg_typecheck_Column(L)) {
			luaL_error(L, "luna typecheck failed in int TiXmlBase::Column() const function, expected prototype:\nint TiXmlBase::Column() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlBase* self=(Luna< TiXmlBase >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int TiXmlBase::Column() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->Column();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void TiXmlBase::SetUserData(void * user)
	static int _bind_SetUserData(lua_State *L) {
		if (!_lg_typecheck_SetUserData(L)) {
			luaL_error(L, "luna typecheck failed in void TiXmlBase::SetUserData(void * user) function, expected prototype:\nvoid TiXmlBase::SetUserData(void * user)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		void* user=(Luna< void >::check(L,2));

		TiXmlBase* self=(Luna< TiXmlBase >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void TiXmlBase::SetUserData(void *). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetUserData(user);

		return 0;
	}

	// void * TiXmlBase::GetUserData()
	static int _bind_GetUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void * TiXmlBase::GetUserData() function, expected prototype:\nvoid * TiXmlBase::GetUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlBase* self=(Luna< TiXmlBase >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void * TiXmlBase::GetUserData(). Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		void * lret = self->GetUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// const void * TiXmlBase::GetUserData() const
	static int _bind_GetUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const void * TiXmlBase::GetUserData() const function, expected prototype:\nconst void * TiXmlBase::GetUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlBase* self=(Luna< TiXmlBase >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const void * TiXmlBase::GetUserData() const. Got : '%s'\n%s",typeid(Luna< TiXmlBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const void * lret = self->GetUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// Overload binder for TiXmlBase::GetUserData
	static int _bind_GetUserData(lua_State *L) {
		if (_lg_typecheck_GetUserData_overload_1(L)) return _bind_GetUserData_overload_1(L);
		if (_lg_typecheck_GetUserData_overload_2(L)) return _bind_GetUserData_overload_2(L);

		luaL_error(L, "error in function GetUserData, cannot match any of the overloads for function GetUserData:\n  GetUserData()\n  GetUserData()\n");
		return 0;
	}

	// static void TiXmlBase::SetCondenseWhiteSpace(bool condense)
	static int _bind_SetCondenseWhiteSpace(lua_State *L) {
		if (!_lg_typecheck_SetCondenseWhiteSpace(L)) {
			luaL_error(L, "luna typecheck failed in static void TiXmlBase::SetCondenseWhiteSpace(bool condense) function, expected prototype:\nstatic void TiXmlBase::SetCondenseWhiteSpace(bool condense)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool condense=(bool)(lua_toboolean(L,1)==1);

		TiXmlBase::SetCondenseWhiteSpace(condense);

		return 0;
	}

	// static bool TiXmlBase::IsWhiteSpaceCondensed()
	static int _bind_IsWhiteSpaceCondensed(lua_State *L) {
		if (!_lg_typecheck_IsWhiteSpaceCondensed(L)) {
			luaL_error(L, "luna typecheck failed in static bool TiXmlBase::IsWhiteSpaceCondensed() function, expected prototype:\nstatic bool TiXmlBase::IsWhiteSpaceCondensed()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		bool lret = TiXmlBase::IsWhiteSpaceCondensed();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

TiXmlBase* LunaTraits< TiXmlBase >::_bind_ctor(lua_State *L) {
	return luna_wrapper_TiXmlBase::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void TiXmlBase::Print(FILE * cfile, int depth) const
	// const char * TiXmlBase::Parse(const char * p, TiXmlParsingData * data, TiXmlEncoding encoding)
}

void LunaTraits< TiXmlBase >::_bind_dtor(TiXmlBase* obj) {
	delete obj;
}

const char LunaTraits< TiXmlBase >::className[] = "TiXmlBase";
const char LunaTraits< TiXmlBase >::fullName[] = "TiXmlBase";
const char LunaTraits< TiXmlBase >::moduleName[] = "land";
const char* LunaTraits< TiXmlBase >::parents[] = {0};
const int LunaTraits< TiXmlBase >::hash = 89852901;
const int LunaTraits< TiXmlBase >::uniqueIDs[] = {89852901,0};

luna_RegType LunaTraits< TiXmlBase >::methods[] = {
	{"Row", &luna_wrapper_TiXmlBase::_bind_Row},
	{"Column", &luna_wrapper_TiXmlBase::_bind_Column},
	{"SetUserData", &luna_wrapper_TiXmlBase::_bind_SetUserData},
	{"GetUserData", &luna_wrapper_TiXmlBase::_bind_GetUserData},
	{"SetCondenseWhiteSpace", &luna_wrapper_TiXmlBase::_bind_SetCondenseWhiteSpace},
	{"IsWhiteSpaceCondensed", &luna_wrapper_TiXmlBase::_bind_IsWhiteSpaceCondensed},
	{"dynCast", &luna_wrapper_TiXmlBase::_bind_dynCast},
	{"__eq", &luna_wrapper_TiXmlBase::_bind___eq},
	{"fromVoid", &luna_wrapper_TiXmlBase::_bind_fromVoid},
	{"asVoid", &luna_wrapper_TiXmlBase::_bind_asVoid},
	{"getTable", &luna_wrapper_TiXmlBase::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< TiXmlBase >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< TiXmlBase >::enumValues[] = {
	{"TIXML_NO_ERROR", TiXmlBase::TIXML_NO_ERROR},
	{"TIXML_ERROR", TiXmlBase::TIXML_ERROR},
	{"TIXML_ERROR_OPENING_FILE", TiXmlBase::TIXML_ERROR_OPENING_FILE},
	{"TIXML_ERROR_OUT_OF_MEMORY", TiXmlBase::TIXML_ERROR_OUT_OF_MEMORY},
	{"TIXML_ERROR_PARSING_ELEMENT", TiXmlBase::TIXML_ERROR_PARSING_ELEMENT},
	{"TIXML_ERROR_FAILED_TO_READ_ELEMENT_NAME", TiXmlBase::TIXML_ERROR_FAILED_TO_READ_ELEMENT_NAME},
	{"TIXML_ERROR_READING_ELEMENT_VALUE", TiXmlBase::TIXML_ERROR_READING_ELEMENT_VALUE},
	{"TIXML_ERROR_READING_ATTRIBUTES", TiXmlBase::TIXML_ERROR_READING_ATTRIBUTES},
	{"TIXML_ERROR_PARSING_EMPTY", TiXmlBase::TIXML_ERROR_PARSING_EMPTY},
	{"TIXML_ERROR_READING_END_TAG", TiXmlBase::TIXML_ERROR_READING_END_TAG},
	{"TIXML_ERROR_PARSING_UNKNOWN", TiXmlBase::TIXML_ERROR_PARSING_UNKNOWN},
	{"TIXML_ERROR_PARSING_COMMENT", TiXmlBase::TIXML_ERROR_PARSING_COMMENT},
	{"TIXML_ERROR_PARSING_DECLARATION", TiXmlBase::TIXML_ERROR_PARSING_DECLARATION},
	{"TIXML_ERROR_DOCUMENT_EMPTY", TiXmlBase::TIXML_ERROR_DOCUMENT_EMPTY},
	{"TIXML_ERROR_EMBEDDED_NULL", TiXmlBase::TIXML_ERROR_EMBEDDED_NULL},
	{"TIXML_ERROR_PARSING_CDATA", TiXmlBase::TIXML_ERROR_PARSING_CDATA},
	{"TIXML_ERROR_DOCUMENT_TOP_ONLY", TiXmlBase::TIXML_ERROR_DOCUMENT_TOP_ONLY},
	{"TIXML_ERROR_STRING_COUNT", TiXmlBase::TIXML_ERROR_STRING_COUNT},
	{0,0}
};



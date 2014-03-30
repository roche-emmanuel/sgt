#include <plug_common.h>

#include <luna/wrappers/wrapper_osgDB_FieldReader.h>

class luna_wrapper_osgDB_FieldReader {
public:
	typedef Luna< osgDB::FieldReader > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::FieldReader* self=(Luna< osgDB::FieldReader >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<osgDB::FieldReader,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,53806078) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgDB::FieldReader*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::FieldReader* rhs =(Luna< osgDB::FieldReader >::check(L,2));
		osgDB::FieldReader* self=(Luna< osgDB::FieldReader >::check(L,1));
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

		osgDB::FieldReader* self= (osgDB::FieldReader*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgDB::FieldReader >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,53806078) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osgDB::FieldReader >::check(L,1));
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

		osgDB::FieldReader* self=(Luna< osgDB::FieldReader >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgDB::FieldReader");
		
		return luna_dynamicCast(L,converters,"osgDB::FieldReader",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,53806078) ) return false;
		if( (!(Luna< osgDB::FieldReader >::check(L,1))) ) return false;
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
		if( !Luna<void>::has_uniqueid(L,2,53806078) ) return false;
		if( (!(Luna< osgDB::FieldReader >::check(L,2))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_attach(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,77972206)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_detach(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_eof(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_readField(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,7546407) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ignoreField(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNoNestedBrackets(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_eof(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck_op_assign(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,53806078) ) return false;
		return true;
	}


	// Constructor binds:
	// osgDB::FieldReader::FieldReader()
	static osgDB::FieldReader* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::FieldReader::FieldReader() function, expected prototype:\nosgDB::FieldReader::FieldReader()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osgDB::FieldReader();
	}

	// osgDB::FieldReader::FieldReader(const osgDB::FieldReader & ic)
	static osgDB::FieldReader* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::FieldReader::FieldReader(const osgDB::FieldReader & ic) function, expected prototype:\nosgDB::FieldReader::FieldReader(const osgDB::FieldReader & ic)\nClass arguments details:\narg 1 ID = 53806078\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgDB::FieldReader* ic_ptr=(Luna< osgDB::FieldReader >::check(L,1));
		if( !ic_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ic in osgDB::FieldReader::FieldReader function");
		}
		const osgDB::FieldReader & ic=*ic_ptr;

		return new osgDB::FieldReader(ic);
	}

	// osgDB::FieldReader::FieldReader(lua_Table * data)
	static osgDB::FieldReader* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::FieldReader::FieldReader(lua_Table * data) function, expected prototype:\nosgDB::FieldReader::FieldReader(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgDB_FieldReader(L,NULL);
	}

	// osgDB::FieldReader::FieldReader(lua_Table * data, const osgDB::FieldReader & ic)
	static osgDB::FieldReader* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::FieldReader::FieldReader(lua_Table * data, const osgDB::FieldReader & ic) function, expected prototype:\nosgDB::FieldReader::FieldReader(lua_Table * data, const osgDB::FieldReader & ic)\nClass arguments details:\narg 2 ID = 53806078\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgDB::FieldReader* ic_ptr=(Luna< osgDB::FieldReader >::check(L,2));
		if( !ic_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ic in osgDB::FieldReader::FieldReader function");
		}
		const osgDB::FieldReader & ic=*ic_ptr;

		return new wrapper_osgDB_FieldReader(L,NULL, ic);
	}

	// Overload binder for osgDB::FieldReader::FieldReader
	static osgDB::FieldReader* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function FieldReader, cannot match any of the overloads for function FieldReader:\n  FieldReader()\n  FieldReader(const osgDB::FieldReader &)\n  FieldReader(lua_Table *)\n  FieldReader(lua_Table *, const osgDB::FieldReader &)\n");
		return NULL;
	}


	// Function binds:
	// void osgDB::FieldReader::attach(std::istream * input)
	static int _bind_attach(lua_State *L) {
		if (!_lg_typecheck_attach(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::FieldReader::attach(std::istream * input) function, expected prototype:\nvoid osgDB::FieldReader::attach(std::istream * input)\nClass arguments details:\narg 1 ID = 77972206\n\n%s",luna_dumpStack(L).c_str());
		}

		std::istream* input=(Luna< std::istream >::check(L,2));

		osgDB::FieldReader* self=(Luna< osgDB::FieldReader >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::FieldReader::attach(std::istream *). Got : '%s'\n%s",typeid(Luna< osgDB::FieldReader >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->attach(input);

		return 0;
	}

	// void osgDB::FieldReader::detach()
	static int _bind_detach(lua_State *L) {
		if (!_lg_typecheck_detach(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::FieldReader::detach() function, expected prototype:\nvoid osgDB::FieldReader::detach()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::FieldReader* self=(Luna< osgDB::FieldReader >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::FieldReader::detach(). Got : '%s'\n%s",typeid(Luna< osgDB::FieldReader >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->detach();

		return 0;
	}

	// bool osgDB::FieldReader::eof() const
	static int _bind_eof(lua_State *L) {
		if (!_lg_typecheck_eof(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::FieldReader::eof() const function, expected prototype:\nbool osgDB::FieldReader::eof() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::FieldReader* self=(Luna< osgDB::FieldReader >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::FieldReader::eof() const. Got : '%s'\n%s",typeid(Luna< osgDB::FieldReader >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->eof();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::FieldReader::readField(osgDB::Field & fieldPtr)
	static int _bind_readField(lua_State *L) {
		if (!_lg_typecheck_readField(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::FieldReader::readField(osgDB::Field & fieldPtr) function, expected prototype:\nbool osgDB::FieldReader::readField(osgDB::Field & fieldPtr)\nClass arguments details:\narg 1 ID = 7546407\n\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::Field* fieldPtr_ptr=(Luna< osgDB::Field >::check(L,2));
		if( !fieldPtr_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg fieldPtr in osgDB::FieldReader::readField function");
		}
		osgDB::Field & fieldPtr=*fieldPtr_ptr;

		osgDB::FieldReader* self=(Luna< osgDB::FieldReader >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::FieldReader::readField(osgDB::Field &). Got : '%s'\n%s",typeid(Luna< osgDB::FieldReader >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->readField(fieldPtr);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgDB::FieldReader::ignoreField()
	static int _bind_ignoreField(lua_State *L) {
		if (!_lg_typecheck_ignoreField(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::FieldReader::ignoreField() function, expected prototype:\nvoid osgDB::FieldReader::ignoreField()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::FieldReader* self=(Luna< osgDB::FieldReader >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::FieldReader::ignoreField(). Got : '%s'\n%s",typeid(Luna< osgDB::FieldReader >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ignoreField();

		return 0;
	}

	// int osgDB::FieldReader::getNoNestedBrackets() const
	static int _bind_getNoNestedBrackets(lua_State *L) {
		if (!_lg_typecheck_getNoNestedBrackets(L)) {
			luaL_error(L, "luna typecheck failed in int osgDB::FieldReader::getNoNestedBrackets() const function, expected prototype:\nint osgDB::FieldReader::getNoNestedBrackets() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::FieldReader* self=(Luna< osgDB::FieldReader >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int osgDB::FieldReader::getNoNestedBrackets() const. Got : '%s'\n%s",typeid(Luna< osgDB::FieldReader >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getNoNestedBrackets();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osgDB::FieldReader::base_eof() const
	static int _bind_base_eof(lua_State *L) {
		if (!_lg_typecheck_base_eof(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::FieldReader::base_eof() const function, expected prototype:\nbool osgDB::FieldReader::base_eof() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::FieldReader* self=(Luna< osgDB::FieldReader >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::FieldReader::base_eof() const. Got : '%s'\n%s",typeid(Luna< osgDB::FieldReader >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->FieldReader::eof();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:
	// osgDB::FieldReader & osgDB::FieldReader::operator=(const osgDB::FieldReader & ic)
	static int _bind_op_assign(lua_State *L) {
		if (!_lg_typecheck_op_assign(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::FieldReader & osgDB::FieldReader::operator=(const osgDB::FieldReader & ic) function, expected prototype:\nosgDB::FieldReader & osgDB::FieldReader::operator=(const osgDB::FieldReader & ic)\nClass arguments details:\narg 1 ID = 53806078\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgDB::FieldReader* ic_ptr=(Luna< osgDB::FieldReader >::check(L,2));
		if( !ic_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ic in osgDB::FieldReader::operator= function");
		}
		const osgDB::FieldReader & ic=*ic_ptr;

		osgDB::FieldReader* self=(Luna< osgDB::FieldReader >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::FieldReader & osgDB::FieldReader::operator=(const osgDB::FieldReader &). Got : '%s'\n%s",typeid(Luna< osgDB::FieldReader >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::FieldReader* lret = &self->operator=(ic);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::FieldReader >::push(L,lret,false);

		return 1;
	}


};

osgDB::FieldReader* LunaTraits< osgDB::FieldReader >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgDB_FieldReader::_bind_ctor(L);
}

void LunaTraits< osgDB::FieldReader >::_bind_dtor(osgDB::FieldReader* obj) {
	delete obj;
}

const char LunaTraits< osgDB::FieldReader >::className[] = "FieldReader";
const char LunaTraits< osgDB::FieldReader >::fullName[] = "osgDB::FieldReader";
const char LunaTraits< osgDB::FieldReader >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::FieldReader >::parents[] = {0};
const int LunaTraits< osgDB::FieldReader >::hash = 53806078;
const int LunaTraits< osgDB::FieldReader >::uniqueIDs[] = {53806078,0};

luna_RegType LunaTraits< osgDB::FieldReader >::methods[] = {
	{"attach", &luna_wrapper_osgDB_FieldReader::_bind_attach},
	{"detach", &luna_wrapper_osgDB_FieldReader::_bind_detach},
	{"eof", &luna_wrapper_osgDB_FieldReader::_bind_eof},
	{"readField", &luna_wrapper_osgDB_FieldReader::_bind_readField},
	{"ignoreField", &luna_wrapper_osgDB_FieldReader::_bind_ignoreField},
	{"getNoNestedBrackets", &luna_wrapper_osgDB_FieldReader::_bind_getNoNestedBrackets},
	{"base_eof", &luna_wrapper_osgDB_FieldReader::_bind_base_eof},
	{"op_assign", &luna_wrapper_osgDB_FieldReader::_bind_op_assign},
	{"dynCast", &luna_wrapper_osgDB_FieldReader::_bind_dynCast},
	{"__eq", &luna_wrapper_osgDB_FieldReader::_bind___eq},
	{"fromVoid", &luna_wrapper_osgDB_FieldReader::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgDB_FieldReader::_bind_asVoid},
	{"getTable", &luna_wrapper_osgDB_FieldReader::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::FieldReader >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::FieldReader >::enumValues[] = {
	{0,0}
};



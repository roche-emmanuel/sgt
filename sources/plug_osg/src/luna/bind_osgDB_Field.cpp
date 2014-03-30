#include <plug_common.h>

#include <luna/wrappers/wrapper_osgDB_Field.h>

class luna_wrapper_osgDB_Field {
public:
	typedef Luna< osgDB::Field > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::Field* self=(Luna< osgDB::Field >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<osgDB::Field,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,7546407) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgDB::Field*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::Field* rhs =(Luna< osgDB::Field >::check(L,2));
		osgDB::Field* self=(Luna< osgDB::Field >::check(L,1));
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

		osgDB::Field* self= (osgDB::Field*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgDB::Field >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,7546407) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osgDB::Field >::check(L,1));
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

		osgDB::Field* self=(Luna< osgDB::Field >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgDB::Field");
		
		return luna_dynamicCast(L,converters,"osgDB::Field",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,7546407) ) return false;
		if( (!(Luna< osgDB::Field >::check(L,1))) ) return false;
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
		if( !Luna<void>::has_uniqueid(L,2,7546407) ) return false;
		if( (!(Luna< osgDB::Field >::check(L,2))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_addChar(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNoCharacters(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setWithinQuotes(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getWithinQuotes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setNoNestedBrackets(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNoNestedBrackets(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFieldType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isValid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isOpenBracket(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isCloseBracket(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isWord(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_matchWord_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_matchWord_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_matchString_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_matchString_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isQuotedString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getStr(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_takeStr(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isInt(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_matchInt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getInt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isUInt(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_matchUInt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUInt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isFloat(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_matchFloat(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFloat_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFloat_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_calculateFieldType(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck_op_assign(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,7546407) ) return false;
		return true;
	}


	// Constructor binds:
	// osgDB::Field::Field()
	static osgDB::Field* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::Field::Field() function, expected prototype:\nosgDB::Field::Field()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osgDB::Field();
	}

	// osgDB::Field::Field(const osgDB::Field & field)
	static osgDB::Field* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::Field::Field(const osgDB::Field & field) function, expected prototype:\nosgDB::Field::Field(const osgDB::Field & field)\nClass arguments details:\narg 1 ID = 7546407\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgDB::Field* field_ptr=(Luna< osgDB::Field >::check(L,1));
		if( !field_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg field in osgDB::Field::Field function");
		}
		const osgDB::Field & field=*field_ptr;

		return new osgDB::Field(field);
	}

	// osgDB::Field::Field(lua_Table * data)
	static osgDB::Field* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::Field::Field(lua_Table * data) function, expected prototype:\nosgDB::Field::Field(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgDB_Field(L,NULL);
	}

	// osgDB::Field::Field(lua_Table * data, const osgDB::Field & field)
	static osgDB::Field* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::Field::Field(lua_Table * data, const osgDB::Field & field) function, expected prototype:\nosgDB::Field::Field(lua_Table * data, const osgDB::Field & field)\nClass arguments details:\narg 2 ID = 7546407\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgDB::Field* field_ptr=(Luna< osgDB::Field >::check(L,2));
		if( !field_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg field in osgDB::Field::Field function");
		}
		const osgDB::Field & field=*field_ptr;

		return new wrapper_osgDB_Field(L,NULL, field);
	}

	// Overload binder for osgDB::Field::Field
	static osgDB::Field* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function Field, cannot match any of the overloads for function Field:\n  Field()\n  Field(const osgDB::Field &)\n  Field(lua_Table *)\n  Field(lua_Table *, const osgDB::Field &)\n");
		return NULL;
	}


	// Function binds:
	// void osgDB::Field::reset()
	static int _bind_reset(lua_State *L) {
		if (!_lg_typecheck_reset(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::Field::reset() function, expected prototype:\nvoid osgDB::Field::reset()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::Field* self=(Luna< osgDB::Field >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::Field::reset(). Got : '%s'\n%s",typeid(Luna< osgDB::Field >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->reset();

		return 0;
	}

	// void osgDB::Field::addChar(char c)
	static int _bind_addChar(lua_State *L) {
		if (!_lg_typecheck_addChar(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::Field::addChar(char c) function, expected prototype:\nvoid osgDB::Field::addChar(char c)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		char c=(char)lua_tointeger(L,2);

		osgDB::Field* self=(Luna< osgDB::Field >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::Field::addChar(char). Got : '%s'\n%s",typeid(Luna< osgDB::Field >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addChar(c);

		return 0;
	}

	// int osgDB::Field::getNoCharacters() const
	static int _bind_getNoCharacters(lua_State *L) {
		if (!_lg_typecheck_getNoCharacters(L)) {
			luaL_error(L, "luna typecheck failed in int osgDB::Field::getNoCharacters() const function, expected prototype:\nint osgDB::Field::getNoCharacters() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::Field* self=(Luna< osgDB::Field >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int osgDB::Field::getNoCharacters() const. Got : '%s'\n%s",typeid(Luna< osgDB::Field >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getNoCharacters();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgDB::Field::setWithinQuotes(bool withinQuotes = true)
	static int _bind_setWithinQuotes(lua_State *L) {
		if (!_lg_typecheck_setWithinQuotes(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::Field::setWithinQuotes(bool withinQuotes = true) function, expected prototype:\nvoid osgDB::Field::setWithinQuotes(bool withinQuotes = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool withinQuotes=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		osgDB::Field* self=(Luna< osgDB::Field >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::Field::setWithinQuotes(bool). Got : '%s'\n%s",typeid(Luna< osgDB::Field >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setWithinQuotes(withinQuotes);

		return 0;
	}

	// bool osgDB::Field::getWithinQuotes()
	static int _bind_getWithinQuotes(lua_State *L) {
		if (!_lg_typecheck_getWithinQuotes(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::Field::getWithinQuotes() function, expected prototype:\nbool osgDB::Field::getWithinQuotes()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::Field* self=(Luna< osgDB::Field >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::Field::getWithinQuotes(). Got : '%s'\n%s",typeid(Luna< osgDB::Field >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getWithinQuotes();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgDB::Field::setNoNestedBrackets(int no)
	static int _bind_setNoNestedBrackets(lua_State *L) {
		if (!_lg_typecheck_setNoNestedBrackets(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::Field::setNoNestedBrackets(int no) function, expected prototype:\nvoid osgDB::Field::setNoNestedBrackets(int no)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int no=(int)lua_tointeger(L,2);

		osgDB::Field* self=(Luna< osgDB::Field >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::Field::setNoNestedBrackets(int). Got : '%s'\n%s",typeid(Luna< osgDB::Field >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setNoNestedBrackets(no);

		return 0;
	}

	// int osgDB::Field::getNoNestedBrackets()
	static int _bind_getNoNestedBrackets(lua_State *L) {
		if (!_lg_typecheck_getNoNestedBrackets(L)) {
			luaL_error(L, "luna typecheck failed in int osgDB::Field::getNoNestedBrackets() function, expected prototype:\nint osgDB::Field::getNoNestedBrackets()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::Field* self=(Luna< osgDB::Field >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int osgDB::Field::getNoNestedBrackets(). Got : '%s'\n%s",typeid(Luna< osgDB::Field >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getNoNestedBrackets();
		lua_pushnumber(L,lret);

		return 1;
	}

	// osgDB::Field::FieldType osgDB::Field::getFieldType() const
	static int _bind_getFieldType(lua_State *L) {
		if (!_lg_typecheck_getFieldType(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::Field::FieldType osgDB::Field::getFieldType() const function, expected prototype:\nosgDB::Field::FieldType osgDB::Field::getFieldType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::Field* self=(Luna< osgDB::Field >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::Field::FieldType osgDB::Field::getFieldType() const. Got : '%s'\n%s",typeid(Luna< osgDB::Field >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::Field::FieldType lret = self->getFieldType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osgDB::Field::isValid() const
	static int _bind_isValid(lua_State *L) {
		if (!_lg_typecheck_isValid(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::Field::isValid() const function, expected prototype:\nbool osgDB::Field::isValid() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::Field* self=(Luna< osgDB::Field >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::Field::isValid() const. Got : '%s'\n%s",typeid(Luna< osgDB::Field >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isValid();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::Field::isOpenBracket() const
	static int _bind_isOpenBracket(lua_State *L) {
		if (!_lg_typecheck_isOpenBracket(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::Field::isOpenBracket() const function, expected prototype:\nbool osgDB::Field::isOpenBracket() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::Field* self=(Luna< osgDB::Field >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::Field::isOpenBracket() const. Got : '%s'\n%s",typeid(Luna< osgDB::Field >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isOpenBracket();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::Field::isCloseBracket() const
	static int _bind_isCloseBracket(lua_State *L) {
		if (!_lg_typecheck_isCloseBracket(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::Field::isCloseBracket() const function, expected prototype:\nbool osgDB::Field::isCloseBracket() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::Field* self=(Luna< osgDB::Field >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::Field::isCloseBracket() const. Got : '%s'\n%s",typeid(Luna< osgDB::Field >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isCloseBracket();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::Field::isWord() const
	static int _bind_isWord(lua_State *L) {
		if (!_lg_typecheck_isWord(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::Field::isWord() const function, expected prototype:\nbool osgDB::Field::isWord() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::Field* self=(Luna< osgDB::Field >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::Field::isWord() const. Got : '%s'\n%s",typeid(Luna< osgDB::Field >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isWord();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::Field::matchWord(const char * str) const
	static int _bind_matchWord_overload_1(lua_State *L) {
		if (!_lg_typecheck_matchWord_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::Field::matchWord(const char * str) const function, expected prototype:\nbool osgDB::Field::matchWord(const char * str) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * str=(const char *)lua_tostring(L,2);

		osgDB::Field* self=(Luna< osgDB::Field >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::Field::matchWord(const char *) const. Got : '%s'\n%s",typeid(Luna< osgDB::Field >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->matchWord(str);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::Field::matchWord(const char * str, int noCharacters) const
	static int _bind_matchWord_overload_2(lua_State *L) {
		if (!_lg_typecheck_matchWord_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::Field::matchWord(const char * str, int noCharacters) const function, expected prototype:\nbool osgDB::Field::matchWord(const char * str, int noCharacters) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * str=(const char *)lua_tostring(L,2);
		int noCharacters=(int)lua_tointeger(L,3);

		osgDB::Field* self=(Luna< osgDB::Field >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::Field::matchWord(const char *, int) const. Got : '%s'\n%s",typeid(Luna< osgDB::Field >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->matchWord(str, noCharacters);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for osgDB::Field::matchWord
	static int _bind_matchWord(lua_State *L) {
		if (_lg_typecheck_matchWord_overload_1(L)) return _bind_matchWord_overload_1(L);
		if (_lg_typecheck_matchWord_overload_2(L)) return _bind_matchWord_overload_2(L);

		luaL_error(L, "error in function matchWord, cannot match any of the overloads for function matchWord:\n  matchWord(const char *)\n  matchWord(const char *, int)\n");
		return 0;
	}

	// bool osgDB::Field::isString() const
	static int _bind_isString(lua_State *L) {
		if (!_lg_typecheck_isString(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::Field::isString() const function, expected prototype:\nbool osgDB::Field::isString() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::Field* self=(Luna< osgDB::Field >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::Field::isString() const. Got : '%s'\n%s",typeid(Luna< osgDB::Field >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isString();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::Field::matchString(const char * str) const
	static int _bind_matchString_overload_1(lua_State *L) {
		if (!_lg_typecheck_matchString_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::Field::matchString(const char * str) const function, expected prototype:\nbool osgDB::Field::matchString(const char * str) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * str=(const char *)lua_tostring(L,2);

		osgDB::Field* self=(Luna< osgDB::Field >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::Field::matchString(const char *) const. Got : '%s'\n%s",typeid(Luna< osgDB::Field >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->matchString(str);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::Field::matchString(const char * str, int noCharacters) const
	static int _bind_matchString_overload_2(lua_State *L) {
		if (!_lg_typecheck_matchString_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::Field::matchString(const char * str, int noCharacters) const function, expected prototype:\nbool osgDB::Field::matchString(const char * str, int noCharacters) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * str=(const char *)lua_tostring(L,2);
		int noCharacters=(int)lua_tointeger(L,3);

		osgDB::Field* self=(Luna< osgDB::Field >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::Field::matchString(const char *, int) const. Got : '%s'\n%s",typeid(Luna< osgDB::Field >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->matchString(str, noCharacters);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for osgDB::Field::matchString
	static int _bind_matchString(lua_State *L) {
		if (_lg_typecheck_matchString_overload_1(L)) return _bind_matchString_overload_1(L);
		if (_lg_typecheck_matchString_overload_2(L)) return _bind_matchString_overload_2(L);

		luaL_error(L, "error in function matchString, cannot match any of the overloads for function matchString:\n  matchString(const char *)\n  matchString(const char *, int)\n");
		return 0;
	}

	// bool osgDB::Field::isQuotedString() const
	static int _bind_isQuotedString(lua_State *L) {
		if (!_lg_typecheck_isQuotedString(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::Field::isQuotedString() const function, expected prototype:\nbool osgDB::Field::isQuotedString() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::Field* self=(Luna< osgDB::Field >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::Field::isQuotedString() const. Got : '%s'\n%s",typeid(Luna< osgDB::Field >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isQuotedString();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgDB::Field::getStr() const
	static int _bind_getStr(lua_State *L) {
		if (!_lg_typecheck_getStr(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgDB::Field::getStr() const function, expected prototype:\nconst char * osgDB::Field::getStr() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::Field* self=(Luna< osgDB::Field >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgDB::Field::getStr() const. Got : '%s'\n%s",typeid(Luna< osgDB::Field >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->getStr();
		lua_pushstring(L,lret);

		return 1;
	}

	// char * osgDB::Field::takeStr()
	static int _bind_takeStr(lua_State *L) {
		if (!_lg_typecheck_takeStr(L)) {
			luaL_error(L, "luna typecheck failed in char * osgDB::Field::takeStr() function, expected prototype:\nchar * osgDB::Field::takeStr()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::Field* self=(Luna< osgDB::Field >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call char * osgDB::Field::takeStr(). Got : '%s'\n%s",typeid(Luna< osgDB::Field >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		char * lret = self->takeStr();
		lua_pushnumber(L,*lret);

		return 1;
	}

	// bool osgDB::Field::isInt() const
	static int _bind_isInt(lua_State *L) {
		if (!_lg_typecheck_isInt(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::Field::isInt() const function, expected prototype:\nbool osgDB::Field::isInt() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::Field* self=(Luna< osgDB::Field >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::Field::isInt() const. Got : '%s'\n%s",typeid(Luna< osgDB::Field >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isInt();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::Field::matchInt(int i) const
	static int _bind_matchInt(lua_State *L) {
		if (!_lg_typecheck_matchInt(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::Field::matchInt(int i) const function, expected prototype:\nbool osgDB::Field::matchInt(int i) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);

		osgDB::Field* self=(Luna< osgDB::Field >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::Field::matchInt(int) const. Got : '%s'\n%s",typeid(Luna< osgDB::Field >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->matchInt(i);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::Field::getInt(int & i) const
	static int _bind_getInt(lua_State *L) {
		if (!_lg_typecheck_getInt(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::Field::getInt(int & i) const function, expected prototype:\nbool osgDB::Field::getInt(int & i) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);

		osgDB::Field* self=(Luna< osgDB::Field >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::Field::getInt(int &) const. Got : '%s'\n%s",typeid(Luna< osgDB::Field >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getInt(i);
		lua_pushboolean(L,lret?1:0);

		lua_pushnumber(L,i);
		return 2;
	}

	// bool osgDB::Field::isUInt() const
	static int _bind_isUInt(lua_State *L) {
		if (!_lg_typecheck_isUInt(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::Field::isUInt() const function, expected prototype:\nbool osgDB::Field::isUInt() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::Field* self=(Luna< osgDB::Field >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::Field::isUInt() const. Got : '%s'\n%s",typeid(Luna< osgDB::Field >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isUInt();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::Field::matchUInt(unsigned int i) const
	static int _bind_matchUInt(lua_State *L) {
		if (!_lg_typecheck_matchUInt(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::Field::matchUInt(unsigned int i) const function, expected prototype:\nbool osgDB::Field::matchUInt(unsigned int i) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osgDB::Field* self=(Luna< osgDB::Field >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::Field::matchUInt(unsigned int) const. Got : '%s'\n%s",typeid(Luna< osgDB::Field >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->matchUInt(i);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::Field::getUInt(unsigned int & i) const
	static int _bind_getUInt(lua_State *L) {
		if (!_lg_typecheck_getUInt(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::Field::getUInt(unsigned int & i) const function, expected prototype:\nbool osgDB::Field::getUInt(unsigned int & i) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osgDB::Field* self=(Luna< osgDB::Field >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::Field::getUInt(unsigned int &) const. Got : '%s'\n%s",typeid(Luna< osgDB::Field >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getUInt(i);
		lua_pushboolean(L,lret?1:0);

		lua_pushnumber(L,i);
		return 2;
	}

	// bool osgDB::Field::isFloat() const
	static int _bind_isFloat(lua_State *L) {
		if (!_lg_typecheck_isFloat(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::Field::isFloat() const function, expected prototype:\nbool osgDB::Field::isFloat() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::Field* self=(Luna< osgDB::Field >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::Field::isFloat() const. Got : '%s'\n%s",typeid(Luna< osgDB::Field >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isFloat();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::Field::matchFloat(float f) const
	static int _bind_matchFloat(lua_State *L) {
		if (!_lg_typecheck_matchFloat(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::Field::matchFloat(float f) const function, expected prototype:\nbool osgDB::Field::matchFloat(float f) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float f=(float)lua_tonumber(L,2);

		osgDB::Field* self=(Luna< osgDB::Field >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::Field::matchFloat(float) const. Got : '%s'\n%s",typeid(Luna< osgDB::Field >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->matchFloat(f);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::Field::getFloat(float & f) const
	static int _bind_getFloat_overload_1(lua_State *L) {
		if (!_lg_typecheck_getFloat_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::Field::getFloat(float & f) const function, expected prototype:\nbool osgDB::Field::getFloat(float & f) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float f=(float)lua_tonumber(L,2);

		osgDB::Field* self=(Luna< osgDB::Field >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::Field::getFloat(float &) const. Got : '%s'\n%s",typeid(Luna< osgDB::Field >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getFloat(f);
		lua_pushboolean(L,lret?1:0);

		lua_pushnumber(L,f);
		return 2;
	}

	// bool osgDB::Field::getFloat(double & f) const
	static int _bind_getFloat_overload_2(lua_State *L) {
		if (!_lg_typecheck_getFloat_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::Field::getFloat(double & f) const function, expected prototype:\nbool osgDB::Field::getFloat(double & f) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double f=(double)lua_tonumber(L,2);

		osgDB::Field* self=(Luna< osgDB::Field >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::Field::getFloat(double &) const. Got : '%s'\n%s",typeid(Luna< osgDB::Field >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getFloat(f);
		lua_pushboolean(L,lret?1:0);

		lua_pushnumber(L,f);
		return 2;
	}

	// Overload binder for osgDB::Field::getFloat
	static int _bind_getFloat(lua_State *L) {
		if (_lg_typecheck_getFloat_overload_1(L)) return _bind_getFloat_overload_1(L);
		if (_lg_typecheck_getFloat_overload_2(L)) return _bind_getFloat_overload_2(L);

		luaL_error(L, "error in function getFloat, cannot match any of the overloads for function getFloat:\n  getFloat(float &)\n  getFloat(double &)\n");
		return 0;
	}

	// static osgDB::Field::FieldType osgDB::Field::calculateFieldType(const char * str, bool withinQuotes = false)
	static int _bind_calculateFieldType(lua_State *L) {
		if (!_lg_typecheck_calculateFieldType(L)) {
			luaL_error(L, "luna typecheck failed in static osgDB::Field::FieldType osgDB::Field::calculateFieldType(const char * str, bool withinQuotes = false) function, expected prototype:\nstatic osgDB::Field::FieldType osgDB::Field::calculateFieldType(const char * str, bool withinQuotes = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const char * str=(const char *)lua_tostring(L,1);
		bool withinQuotes=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)false;

		osgDB::Field::FieldType lret = osgDB::Field::calculateFieldType(str, withinQuotes);
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:
	// osgDB::Field & osgDB::Field::operator=(const osgDB::Field & ic)
	static int _bind_op_assign(lua_State *L) {
		if (!_lg_typecheck_op_assign(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::Field & osgDB::Field::operator=(const osgDB::Field & ic) function, expected prototype:\nosgDB::Field & osgDB::Field::operator=(const osgDB::Field & ic)\nClass arguments details:\narg 1 ID = 7546407\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgDB::Field* ic_ptr=(Luna< osgDB::Field >::check(L,2));
		if( !ic_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ic in osgDB::Field::operator= function");
		}
		const osgDB::Field & ic=*ic_ptr;

		osgDB::Field* self=(Luna< osgDB::Field >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::Field & osgDB::Field::operator=(const osgDB::Field &). Got : '%s'\n%s",typeid(Luna< osgDB::Field >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::Field* lret = &self->operator=(ic);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::Field >::push(L,lret,false);

		return 1;
	}


};

osgDB::Field* LunaTraits< osgDB::Field >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgDB_Field::_bind_ctor(L);
}

void LunaTraits< osgDB::Field >::_bind_dtor(osgDB::Field* obj) {
	delete obj;
}

const char LunaTraits< osgDB::Field >::className[] = "Field";
const char LunaTraits< osgDB::Field >::fullName[] = "osgDB::Field";
const char LunaTraits< osgDB::Field >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::Field >::parents[] = {0};
const int LunaTraits< osgDB::Field >::hash = 7546407;
const int LunaTraits< osgDB::Field >::uniqueIDs[] = {7546407,0};

luna_RegType LunaTraits< osgDB::Field >::methods[] = {
	{"reset", &luna_wrapper_osgDB_Field::_bind_reset},
	{"addChar", &luna_wrapper_osgDB_Field::_bind_addChar},
	{"getNoCharacters", &luna_wrapper_osgDB_Field::_bind_getNoCharacters},
	{"setWithinQuotes", &luna_wrapper_osgDB_Field::_bind_setWithinQuotes},
	{"getWithinQuotes", &luna_wrapper_osgDB_Field::_bind_getWithinQuotes},
	{"setNoNestedBrackets", &luna_wrapper_osgDB_Field::_bind_setNoNestedBrackets},
	{"getNoNestedBrackets", &luna_wrapper_osgDB_Field::_bind_getNoNestedBrackets},
	{"getFieldType", &luna_wrapper_osgDB_Field::_bind_getFieldType},
	{"isValid", &luna_wrapper_osgDB_Field::_bind_isValid},
	{"isOpenBracket", &luna_wrapper_osgDB_Field::_bind_isOpenBracket},
	{"isCloseBracket", &luna_wrapper_osgDB_Field::_bind_isCloseBracket},
	{"isWord", &luna_wrapper_osgDB_Field::_bind_isWord},
	{"matchWord", &luna_wrapper_osgDB_Field::_bind_matchWord},
	{"isString", &luna_wrapper_osgDB_Field::_bind_isString},
	{"matchString", &luna_wrapper_osgDB_Field::_bind_matchString},
	{"isQuotedString", &luna_wrapper_osgDB_Field::_bind_isQuotedString},
	{"getStr", &luna_wrapper_osgDB_Field::_bind_getStr},
	{"takeStr", &luna_wrapper_osgDB_Field::_bind_takeStr},
	{"isInt", &luna_wrapper_osgDB_Field::_bind_isInt},
	{"matchInt", &luna_wrapper_osgDB_Field::_bind_matchInt},
	{"getInt", &luna_wrapper_osgDB_Field::_bind_getInt},
	{"isUInt", &luna_wrapper_osgDB_Field::_bind_isUInt},
	{"matchUInt", &luna_wrapper_osgDB_Field::_bind_matchUInt},
	{"getUInt", &luna_wrapper_osgDB_Field::_bind_getUInt},
	{"isFloat", &luna_wrapper_osgDB_Field::_bind_isFloat},
	{"matchFloat", &luna_wrapper_osgDB_Field::_bind_matchFloat},
	{"getFloat", &luna_wrapper_osgDB_Field::_bind_getFloat},
	{"calculateFieldType", &luna_wrapper_osgDB_Field::_bind_calculateFieldType},
	{"op_assign", &luna_wrapper_osgDB_Field::_bind_op_assign},
	{"dynCast", &luna_wrapper_osgDB_Field::_bind_dynCast},
	{"__eq", &luna_wrapper_osgDB_Field::_bind___eq},
	{"fromVoid", &luna_wrapper_osgDB_Field::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgDB_Field::_bind_asVoid},
	{"getTable", &luna_wrapper_osgDB_Field::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::Field >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::Field >::enumValues[] = {
	{"MIN_CACHE_SIZE", osgDB::Field::MIN_CACHE_SIZE},
	{"OPEN_BRACKET", osgDB::Field::OPEN_BRACKET},
	{"CLOSE_BRACKET", osgDB::Field::CLOSE_BRACKET},
	{"STRING", osgDB::Field::STRING},
	{"WORD", osgDB::Field::WORD},
	{"REAL", osgDB::Field::REAL},
	{"INTEGER", osgDB::Field::INTEGER},
	{"BLANK", osgDB::Field::BLANK},
	{"UNINITIALISED", osgDB::Field::UNINITIALISED},
	{0,0}
};



#include <plug_common.h>

class luna_wrapper_osg_GLBufferObject_BufferEntry {
public:
	typedef Luna< osg::GLBufferObject::BufferEntry > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,69650430) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::GLBufferObject::BufferEntry*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::GLBufferObject::BufferEntry* rhs =(Luna< osg::GLBufferObject::BufferEntry >::check(L,2));
		osg::GLBufferObject::BufferEntry* self=(Luna< osg::GLBufferObject::BufferEntry >::check(L,1));
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

		osg::GLBufferObject::BufferEntry* self= (osg::GLBufferObject::BufferEntry*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::GLBufferObject::BufferEntry >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,69650430) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osg::GLBufferObject::BufferEntry >::check(L,1));
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

		osg::GLBufferObject::BufferEntry* self=(Luna< osg::GLBufferObject::BufferEntry >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::GLBufferObject::BufferEntry");
		
		return luna_dynamicCast(L,converters,"osg::GLBufferObject::BufferEntry",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,69650430) ) return false;
		if( (!(Luna< osg::GLBufferObject::BufferEntry >::check(L,1))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getModifiedCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDataSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getOffset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDataSource(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setModifiedCount(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDataSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setOffset(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDataSource(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck_op_assign(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,69650430) ) return false;
		return true;
	}


	// Constructor binds:
	// osg::GLBufferObject::BufferEntry::BufferEntry()
	static osg::GLBufferObject::BufferEntry* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::GLBufferObject::BufferEntry::BufferEntry() function, expected prototype:\nosg::GLBufferObject::BufferEntry::BufferEntry()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::GLBufferObject::BufferEntry();
	}

	// osg::GLBufferObject::BufferEntry::BufferEntry(const osg::GLBufferObject::BufferEntry & rhs)
	static osg::GLBufferObject::BufferEntry* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::GLBufferObject::BufferEntry::BufferEntry(const osg::GLBufferObject::BufferEntry & rhs) function, expected prototype:\nosg::GLBufferObject::BufferEntry::BufferEntry(const osg::GLBufferObject::BufferEntry & rhs)\nClass arguments details:\narg 1 ID = 69650430\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::GLBufferObject::BufferEntry* rhs_ptr=(Luna< osg::GLBufferObject::BufferEntry >::check(L,1));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::GLBufferObject::BufferEntry::BufferEntry function");
		}
		const osg::GLBufferObject::BufferEntry & rhs=*rhs_ptr;

		return new osg::GLBufferObject::BufferEntry(rhs);
	}

	// Overload binder for osg::GLBufferObject::BufferEntry::BufferEntry
	static osg::GLBufferObject::BufferEntry* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function BufferEntry, cannot match any of the overloads for function BufferEntry:\n  BufferEntry()\n  BufferEntry(const osg::GLBufferObject::BufferEntry &)\n");
		return NULL;
	}


	// Function binds:
	// unsigned int osg::GLBufferObject::BufferEntry::modifiedCount()
	static int _bind_getModifiedCount(lua_State *L) {
		if (!_lg_typecheck_getModifiedCount(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::GLBufferObject::BufferEntry::modifiedCount() function, expected prototype:\nunsigned int osg::GLBufferObject::BufferEntry::modifiedCount()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GLBufferObject::BufferEntry* self=(Luna< osg::GLBufferObject::BufferEntry >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::GLBufferObject::BufferEntry::modifiedCount(). Got : '%s'\n%s",typeid(Luna< osg::GLBufferObject::BufferEntry >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->modifiedCount;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::GLBufferObject::BufferEntry::dataSize()
	static int _bind_getDataSize(lua_State *L) {
		if (!_lg_typecheck_getDataSize(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::GLBufferObject::BufferEntry::dataSize() function, expected prototype:\nunsigned int osg::GLBufferObject::BufferEntry::dataSize()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GLBufferObject::BufferEntry* self=(Luna< osg::GLBufferObject::BufferEntry >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::GLBufferObject::BufferEntry::dataSize(). Got : '%s'\n%s",typeid(Luna< osg::GLBufferObject::BufferEntry >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->dataSize;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::GLBufferObject::BufferEntry::offset()
	static int _bind_getOffset(lua_State *L) {
		if (!_lg_typecheck_getOffset(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::GLBufferObject::BufferEntry::offset() function, expected prototype:\nunsigned int osg::GLBufferObject::BufferEntry::offset()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GLBufferObject::BufferEntry* self=(Luna< osg::GLBufferObject::BufferEntry >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::GLBufferObject::BufferEntry::offset(). Got : '%s'\n%s",typeid(Luna< osg::GLBufferObject::BufferEntry >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->offset;
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::BufferData * osg::GLBufferObject::BufferEntry::dataSource()
	static int _bind_getDataSource(lua_State *L) {
		if (!_lg_typecheck_getDataSource(L)) {
			luaL_error(L, "luna typecheck failed in osg::BufferData * osg::GLBufferObject::BufferEntry::dataSource() function, expected prototype:\nosg::BufferData * osg::GLBufferObject::BufferEntry::dataSource()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GLBufferObject::BufferEntry* self=(Luna< osg::GLBufferObject::BufferEntry >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::BufferData * osg::GLBufferObject::BufferEntry::dataSource(). Got : '%s'\n%s",typeid(Luna< osg::GLBufferObject::BufferEntry >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::BufferData * lret = self->dataSource;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BufferData >::push(L,lret,false);

		return 1;
	}

	// void osg::GLBufferObject::BufferEntry::modifiedCount(unsigned int value)
	static int _bind_setModifiedCount(lua_State *L) {
		if (!_lg_typecheck_setModifiedCount(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GLBufferObject::BufferEntry::modifiedCount(unsigned int value) function, expected prototype:\nvoid osg::GLBufferObject::BufferEntry::modifiedCount(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osg::GLBufferObject::BufferEntry* self=(Luna< osg::GLBufferObject::BufferEntry >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GLBufferObject::BufferEntry::modifiedCount(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::GLBufferObject::BufferEntry >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->modifiedCount = value;

		return 0;
	}

	// void osg::GLBufferObject::BufferEntry::dataSize(unsigned int value)
	static int _bind_setDataSize(lua_State *L) {
		if (!_lg_typecheck_setDataSize(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GLBufferObject::BufferEntry::dataSize(unsigned int value) function, expected prototype:\nvoid osg::GLBufferObject::BufferEntry::dataSize(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osg::GLBufferObject::BufferEntry* self=(Luna< osg::GLBufferObject::BufferEntry >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GLBufferObject::BufferEntry::dataSize(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::GLBufferObject::BufferEntry >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->dataSize = value;

		return 0;
	}

	// void osg::GLBufferObject::BufferEntry::offset(unsigned int value)
	static int _bind_setOffset(lua_State *L) {
		if (!_lg_typecheck_setOffset(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GLBufferObject::BufferEntry::offset(unsigned int value) function, expected prototype:\nvoid osg::GLBufferObject::BufferEntry::offset(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osg::GLBufferObject::BufferEntry* self=(Luna< osg::GLBufferObject::BufferEntry >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GLBufferObject::BufferEntry::offset(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::GLBufferObject::BufferEntry >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->offset = value;

		return 0;
	}

	// void osg::GLBufferObject::BufferEntry::dataSource(osg::BufferData * value)
	static int _bind_setDataSource(lua_State *L) {
		if (!_lg_typecheck_setDataSource(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GLBufferObject::BufferEntry::dataSource(osg::BufferData * value) function, expected prototype:\nvoid osg::GLBufferObject::BufferEntry::dataSource(osg::BufferData * value)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::BufferData* value=(Luna< osg::Referenced >::checkSubType< osg::BufferData >(L,2));

		osg::GLBufferObject::BufferEntry* self=(Luna< osg::GLBufferObject::BufferEntry >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GLBufferObject::BufferEntry::dataSource(osg::BufferData *). Got : '%s'\n%s",typeid(Luna< osg::GLBufferObject::BufferEntry >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->dataSource = value;

		return 0;
	}


	// Operator binds:
	// osg::GLBufferObject::BufferEntry & osg::GLBufferObject::BufferEntry::operator=(const osg::GLBufferObject::BufferEntry & rhs)
	static int _bind_op_assign(lua_State *L) {
		if (!_lg_typecheck_op_assign(L)) {
			luaL_error(L, "luna typecheck failed in osg::GLBufferObject::BufferEntry & osg::GLBufferObject::BufferEntry::operator=(const osg::GLBufferObject::BufferEntry & rhs) function, expected prototype:\nosg::GLBufferObject::BufferEntry & osg::GLBufferObject::BufferEntry::operator=(const osg::GLBufferObject::BufferEntry & rhs)\nClass arguments details:\narg 1 ID = 69650430\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::GLBufferObject::BufferEntry* rhs_ptr=(Luna< osg::GLBufferObject::BufferEntry >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::GLBufferObject::BufferEntry::operator= function");
		}
		const osg::GLBufferObject::BufferEntry & rhs=*rhs_ptr;

		osg::GLBufferObject::BufferEntry* self=(Luna< osg::GLBufferObject::BufferEntry >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::GLBufferObject::BufferEntry & osg::GLBufferObject::BufferEntry::operator=(const osg::GLBufferObject::BufferEntry &). Got : '%s'\n%s",typeid(Luna< osg::GLBufferObject::BufferEntry >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::GLBufferObject::BufferEntry* lret = &self->operator=(rhs);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::GLBufferObject::BufferEntry >::push(L,lret,false);

		return 1;
	}


};

osg::GLBufferObject::BufferEntry* LunaTraits< osg::GLBufferObject::BufferEntry >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_GLBufferObject_BufferEntry::_bind_ctor(L);
}

void LunaTraits< osg::GLBufferObject::BufferEntry >::_bind_dtor(osg::GLBufferObject::BufferEntry* obj) {
	delete obj;
}

const char LunaTraits< osg::GLBufferObject::BufferEntry >::className[] = "GLBufferObject_BufferEntry";
const char LunaTraits< osg::GLBufferObject::BufferEntry >::fullName[] = "osg::GLBufferObject::BufferEntry";
const char LunaTraits< osg::GLBufferObject::BufferEntry >::moduleName[] = "osg";
const char* LunaTraits< osg::GLBufferObject::BufferEntry >::parents[] = {0};
const int LunaTraits< osg::GLBufferObject::BufferEntry >::hash = 69650430;
const int LunaTraits< osg::GLBufferObject::BufferEntry >::uniqueIDs[] = {69650430,0};

luna_RegType LunaTraits< osg::GLBufferObject::BufferEntry >::methods[] = {
	{"getModifiedCount", &luna_wrapper_osg_GLBufferObject_BufferEntry::_bind_getModifiedCount},
	{"getDataSize", &luna_wrapper_osg_GLBufferObject_BufferEntry::_bind_getDataSize},
	{"getOffset", &luna_wrapper_osg_GLBufferObject_BufferEntry::_bind_getOffset},
	{"getDataSource", &luna_wrapper_osg_GLBufferObject_BufferEntry::_bind_getDataSource},
	{"setModifiedCount", &luna_wrapper_osg_GLBufferObject_BufferEntry::_bind_setModifiedCount},
	{"setDataSize", &luna_wrapper_osg_GLBufferObject_BufferEntry::_bind_setDataSize},
	{"setOffset", &luna_wrapper_osg_GLBufferObject_BufferEntry::_bind_setOffset},
	{"setDataSource", &luna_wrapper_osg_GLBufferObject_BufferEntry::_bind_setDataSource},
	{"op_assign", &luna_wrapper_osg_GLBufferObject_BufferEntry::_bind_op_assign},
	{"dynCast", &luna_wrapper_osg_GLBufferObject_BufferEntry::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_GLBufferObject_BufferEntry::_bind___eq},
	{"fromVoid", &luna_wrapper_osg_GLBufferObject_BufferEntry::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_GLBufferObject_BufferEntry::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< osg::GLBufferObject::BufferEntry >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::GLBufferObject::BufferEntry >::enumValues[] = {
	{0,0}
};



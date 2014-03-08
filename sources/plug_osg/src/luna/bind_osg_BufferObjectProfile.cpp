#include <plug_common.h>

class luna_wrapper_osg_BufferObjectProfile {
public:
	typedef Luna< osg::BufferObjectProfile > luna_t;

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::BufferObjectProfile* self= (osg::BufferObjectProfile*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::BufferObjectProfile >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,12032151) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osg::BufferObjectProfile >::check(L,1));
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

		osg::BufferObjectProfile* self=(Luna< osg::BufferObjectProfile >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::BufferObjectProfile");
		
		return luna_dynamicCast(L,converters,"osg::BufferObjectProfile",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,12032151) ) return false;
		if( (!(Luna< osg::BufferObjectProfile >::check(L,1))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_setProfile(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTarget(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUsage(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTarget(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUsage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 3 valid operators)
	inline static bool _lg_typecheck___lt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,12032151) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,12032151) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_assign(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,12032151) ) return false;
		return true;
	}


	// Constructor binds:
	// osg::BufferObjectProfile::BufferObjectProfile()
	static osg::BufferObjectProfile* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::BufferObjectProfile::BufferObjectProfile() function, expected prototype:\nosg::BufferObjectProfile::BufferObjectProfile()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::BufferObjectProfile();
	}

	// osg::BufferObjectProfile::BufferObjectProfile(unsigned int target, unsigned int usage, unsigned int size)
	static osg::BufferObjectProfile* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::BufferObjectProfile::BufferObjectProfile(unsigned int target, unsigned int usage, unsigned int size) function, expected prototype:\nosg::BufferObjectProfile::BufferObjectProfile(unsigned int target, unsigned int usage, unsigned int size)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int target=(unsigned int)lua_tointeger(L,1);
		unsigned int usage=(unsigned int)lua_tointeger(L,2);
		unsigned int size=(unsigned int)lua_tointeger(L,3);

		return new osg::BufferObjectProfile(target, usage, size);
	}

	// osg::BufferObjectProfile::BufferObjectProfile(const osg::BufferObjectProfile & bpo)
	static osg::BufferObjectProfile* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::BufferObjectProfile::BufferObjectProfile(const osg::BufferObjectProfile & bpo) function, expected prototype:\nosg::BufferObjectProfile::BufferObjectProfile(const osg::BufferObjectProfile & bpo)\nClass arguments details:\narg 1 ID = 12032151\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::BufferObjectProfile* bpo_ptr=(Luna< osg::BufferObjectProfile >::check(L,1));
		if( !bpo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bpo in osg::BufferObjectProfile::BufferObjectProfile function");
		}
		const osg::BufferObjectProfile & bpo=*bpo_ptr;

		return new osg::BufferObjectProfile(bpo);
	}

	// Overload binder for osg::BufferObjectProfile::BufferObjectProfile
	static osg::BufferObjectProfile* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function BufferObjectProfile, cannot match any of the overloads for function BufferObjectProfile:\n  BufferObjectProfile()\n  BufferObjectProfile(unsigned int, unsigned int, unsigned int)\n  BufferObjectProfile(const osg::BufferObjectProfile &)\n");
		return NULL;
	}


	// Function binds:
	// void osg::BufferObjectProfile::setProfile(unsigned int target, unsigned int usage, unsigned int size)
	static int _bind_setProfile(lua_State *L) {
		if (!_lg_typecheck_setProfile(L)) {
			luaL_error(L, "luna typecheck failed in void osg::BufferObjectProfile::setProfile(unsigned int target, unsigned int usage, unsigned int size) function, expected prototype:\nvoid osg::BufferObjectProfile::setProfile(unsigned int target, unsigned int usage, unsigned int size)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int target=(unsigned int)lua_tointeger(L,2);
		unsigned int usage=(unsigned int)lua_tointeger(L,3);
		unsigned int size=(unsigned int)lua_tointeger(L,4);

		osg::BufferObjectProfile* self=(Luna< osg::BufferObjectProfile >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::BufferObjectProfile::setProfile(unsigned int, unsigned int, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::BufferObjectProfile >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setProfile(target, usage, size);

		return 0;
	}

	// unsigned int osg::BufferObjectProfile::_target()
	static int _bind_getTarget(lua_State *L) {
		if (!_lg_typecheck_getTarget(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::BufferObjectProfile::_target() function, expected prototype:\nunsigned int osg::BufferObjectProfile::_target()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::BufferObjectProfile* self=(Luna< osg::BufferObjectProfile >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::BufferObjectProfile::_target(). Got : '%s'\n%s",typeid(Luna< osg::BufferObjectProfile >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->_target;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::BufferObjectProfile::_usage()
	static int _bind_getUsage(lua_State *L) {
		if (!_lg_typecheck_getUsage(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::BufferObjectProfile::_usage() function, expected prototype:\nunsigned int osg::BufferObjectProfile::_usage()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::BufferObjectProfile* self=(Luna< osg::BufferObjectProfile >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::BufferObjectProfile::_usage(). Got : '%s'\n%s",typeid(Luna< osg::BufferObjectProfile >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->_usage;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::BufferObjectProfile::_size()
	static int _bind_getSize(lua_State *L) {
		if (!_lg_typecheck_getSize(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::BufferObjectProfile::_size() function, expected prototype:\nunsigned int osg::BufferObjectProfile::_size()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::BufferObjectProfile* self=(Luna< osg::BufferObjectProfile >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::BufferObjectProfile::_size(). Got : '%s'\n%s",typeid(Luna< osg::BufferObjectProfile >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->_size;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::BufferObjectProfile::_target(unsigned int value)
	static int _bind_setTarget(lua_State *L) {
		if (!_lg_typecheck_setTarget(L)) {
			luaL_error(L, "luna typecheck failed in void osg::BufferObjectProfile::_target(unsigned int value) function, expected prototype:\nvoid osg::BufferObjectProfile::_target(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osg::BufferObjectProfile* self=(Luna< osg::BufferObjectProfile >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::BufferObjectProfile::_target(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::BufferObjectProfile >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_target = value;

		return 0;
	}

	// void osg::BufferObjectProfile::_usage(unsigned int value)
	static int _bind_setUsage(lua_State *L) {
		if (!_lg_typecheck_setUsage(L)) {
			luaL_error(L, "luna typecheck failed in void osg::BufferObjectProfile::_usage(unsigned int value) function, expected prototype:\nvoid osg::BufferObjectProfile::_usage(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osg::BufferObjectProfile* self=(Luna< osg::BufferObjectProfile >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::BufferObjectProfile::_usage(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::BufferObjectProfile >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_usage = value;

		return 0;
	}

	// void osg::BufferObjectProfile::_size(unsigned int value)
	static int _bind_setSize(lua_State *L) {
		if (!_lg_typecheck_setSize(L)) {
			luaL_error(L, "luna typecheck failed in void osg::BufferObjectProfile::_size(unsigned int value) function, expected prototype:\nvoid osg::BufferObjectProfile::_size(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osg::BufferObjectProfile* self=(Luna< osg::BufferObjectProfile >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::BufferObjectProfile::_size(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::BufferObjectProfile >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_size = value;

		return 0;
	}


	// Operator binds:
	// bool osg::BufferObjectProfile::operator<(const osg::BufferObjectProfile & rhs) const
	static int _bind___lt(lua_State *L) {
		if (!_lg_typecheck___lt(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::BufferObjectProfile::operator<(const osg::BufferObjectProfile & rhs) const function, expected prototype:\nbool osg::BufferObjectProfile::operator<(const osg::BufferObjectProfile & rhs) const\nClass arguments details:\narg 1 ID = 12032151\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::BufferObjectProfile* rhs_ptr=(Luna< osg::BufferObjectProfile >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::BufferObjectProfile::operator< function");
		}
		const osg::BufferObjectProfile & rhs=*rhs_ptr;

		osg::BufferObjectProfile* self=(Luna< osg::BufferObjectProfile >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::BufferObjectProfile::operator<(const osg::BufferObjectProfile &) const. Got : '%s'\n%s",typeid(Luna< osg::BufferObjectProfile >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator<(rhs);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::BufferObjectProfile::operator==(const osg::BufferObjectProfile & rhs) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::BufferObjectProfile::operator==(const osg::BufferObjectProfile & rhs) const function, expected prototype:\nbool osg::BufferObjectProfile::operator==(const osg::BufferObjectProfile & rhs) const\nClass arguments details:\narg 1 ID = 12032151\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::BufferObjectProfile* rhs_ptr=(Luna< osg::BufferObjectProfile >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::BufferObjectProfile::operator== function");
		}
		const osg::BufferObjectProfile & rhs=*rhs_ptr;

		osg::BufferObjectProfile* self=(Luna< osg::BufferObjectProfile >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::BufferObjectProfile::operator==(const osg::BufferObjectProfile &) const. Got : '%s'\n%s",typeid(Luna< osg::BufferObjectProfile >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator==(rhs);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// osg::BufferObjectProfile & osg::BufferObjectProfile::operator=(const osg::BufferObjectProfile & rhs)
	static int _bind_op_assign(lua_State *L) {
		if (!_lg_typecheck_op_assign(L)) {
			luaL_error(L, "luna typecheck failed in osg::BufferObjectProfile & osg::BufferObjectProfile::operator=(const osg::BufferObjectProfile & rhs) function, expected prototype:\nosg::BufferObjectProfile & osg::BufferObjectProfile::operator=(const osg::BufferObjectProfile & rhs)\nClass arguments details:\narg 1 ID = 12032151\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::BufferObjectProfile* rhs_ptr=(Luna< osg::BufferObjectProfile >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::BufferObjectProfile::operator= function");
		}
		const osg::BufferObjectProfile & rhs=*rhs_ptr;

		osg::BufferObjectProfile* self=(Luna< osg::BufferObjectProfile >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::BufferObjectProfile & osg::BufferObjectProfile::operator=(const osg::BufferObjectProfile &). Got : '%s'\n%s",typeid(Luna< osg::BufferObjectProfile >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::BufferObjectProfile* lret = &self->operator=(rhs);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BufferObjectProfile >::push(L,lret,false);

		return 1;
	}


};

osg::BufferObjectProfile* LunaTraits< osg::BufferObjectProfile >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_BufferObjectProfile::_bind_ctor(L);
}

void LunaTraits< osg::BufferObjectProfile >::_bind_dtor(osg::BufferObjectProfile* obj) {
	delete obj;
}

const char LunaTraits< osg::BufferObjectProfile >::className[] = "BufferObjectProfile";
const char LunaTraits< osg::BufferObjectProfile >::fullName[] = "osg::BufferObjectProfile";
const char LunaTraits< osg::BufferObjectProfile >::moduleName[] = "osg";
const char* LunaTraits< osg::BufferObjectProfile >::parents[] = {0};
const int LunaTraits< osg::BufferObjectProfile >::hash = 12032151;
const int LunaTraits< osg::BufferObjectProfile >::uniqueIDs[] = {12032151,0};

luna_RegType LunaTraits< osg::BufferObjectProfile >::methods[] = {
	{"setProfile", &luna_wrapper_osg_BufferObjectProfile::_bind_setProfile},
	{"getTarget", &luna_wrapper_osg_BufferObjectProfile::_bind_getTarget},
	{"getUsage", &luna_wrapper_osg_BufferObjectProfile::_bind_getUsage},
	{"getSize", &luna_wrapper_osg_BufferObjectProfile::_bind_getSize},
	{"setTarget", &luna_wrapper_osg_BufferObjectProfile::_bind_setTarget},
	{"setUsage", &luna_wrapper_osg_BufferObjectProfile::_bind_setUsage},
	{"setSize", &luna_wrapper_osg_BufferObjectProfile::_bind_setSize},
	{"__lt", &luna_wrapper_osg_BufferObjectProfile::_bind___lt},
	{"__eq", &luna_wrapper_osg_BufferObjectProfile::_bind___eq},
	{"op_assign", &luna_wrapper_osg_BufferObjectProfile::_bind_op_assign},
	{"dynCast", &luna_wrapper_osg_BufferObjectProfile::_bind_dynCast},
	{"fromVoid", &luna_wrapper_osg_BufferObjectProfile::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_BufferObjectProfile::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< osg::BufferObjectProfile >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::BufferObjectProfile >::enumValues[] = {
	{0,0}
};



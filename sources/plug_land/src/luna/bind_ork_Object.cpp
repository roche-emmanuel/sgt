#include <plug_common.h>

#include <luna/wrappers/wrapper_ork_Object.h>

class luna_wrapper_ork_Object {
public:
	typedef Luna< ork::Object > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::Object* self=(Luna< ork::Object >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<ork::Object,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,1381405) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ork::Object*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::Object* rhs =(Luna< ork::Object >::check(L,2));
		ork::Object* self=(Luna< ork::Object >::check(L,1));
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

		ork::Object* self= (ork::Object*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ork::Object >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,1381405) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< ork::Object >::check(L,1));
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

		ork::Object* self=(Luna< ork::Object >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ork::Object");
		
		return luna_dynamicCast(L,converters,"ork::Object",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getClass(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_toString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_acquire(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_release(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_exit(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_toString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// ork::Object::Object(const char * type)
	static ork::Object* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::Object::Object(const char * type) function, expected prototype:\nork::Object::Object(const char * type)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * type=(const char *)lua_tostring(L,1);

		return new ork::Object(type);
	}

	// ork::Object::Object(lua_Table * data, const char * type)
	static ork::Object* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::Object::Object(lua_Table * data, const char * type) function, expected prototype:\nork::Object::Object(lua_Table * data, const char * type)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * type=(const char *)lua_tostring(L,2);

		return new wrapper_ork_Object(L,NULL, type);
	}

	// Overload binder for ork::Object::Object
	static ork::Object* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Object, cannot match any of the overloads for function Object:\n  Object(const char *)\n  Object(lua_Table *, const char *)\n");
		return NULL;
	}


	// Function binds:
	// const char * ork::Object::getClass() const
	static int _bind_getClass(lua_State *L) {
		if (!_lg_typecheck_getClass(L)) {
			luaL_error(L, "luna typecheck failed in const char * ork::Object::getClass() const function, expected prototype:\nconst char * ork::Object::getClass() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Object* self=(Luna< ork::Object >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * ork::Object::getClass() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->getClass();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * ork::Object::toString()
	static int _bind_toString(lua_State *L) {
		if (!_lg_typecheck_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * ork::Object::toString() function, expected prototype:\nconst char * ork::Object::toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Object* self=(Luna< ork::Object >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * ork::Object::toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->toString();
		lua_pushstring(L,lret);

		return 1;
	}

	// void ork::Object::acquire()
	static int _bind_acquire(lua_State *L) {
		if (!_lg_typecheck_acquire(L)) {
			luaL_error(L, "luna typecheck failed in void ork::Object::acquire() function, expected prototype:\nvoid ork::Object::acquire()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Object* self=(Luna< ork::Object >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::Object::acquire(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->acquire();

		return 0;
	}

	// void ork::Object::release()
	static int _bind_release(lua_State *L) {
		if (!_lg_typecheck_release(L)) {
			luaL_error(L, "luna typecheck failed in void ork::Object::release() function, expected prototype:\nvoid ork::Object::release()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Object* self=(Luna< ork::Object >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::Object::release(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->release();

		return 0;
	}

	// static void ork::Object::exit()
	static int _bind_exit(lua_State *L) {
		if (!_lg_typecheck_exit(L)) {
			luaL_error(L, "luna typecheck failed in static void ork::Object::exit() function, expected prototype:\nstatic void ork::Object::exit()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Object::exit();

		return 0;
	}

	// const char * ork::Object::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * ork::Object::base_toString() function, expected prototype:\nconst char * ork::Object::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Object* self=(Luna< ork::Object >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * ork::Object::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Object::toString();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

ork::Object* LunaTraits< ork::Object >::_bind_ctor(lua_State *L) {
	return luna_wrapper_ork_Object::_bind_ctor(L);
}

void LunaTraits< ork::Object >::_bind_dtor(ork::Object* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< ork::Object >::className[] = "Object";
const char LunaTraits< ork::Object >::fullName[] = "ork::Object";
const char LunaTraits< ork::Object >::moduleName[] = "ork";
const char* LunaTraits< ork::Object >::parents[] = {0};
const int LunaTraits< ork::Object >::hash = 1381405;
const int LunaTraits< ork::Object >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< ork::Object >::methods[] = {
	{"getClass", &luna_wrapper_ork_Object::_bind_getClass},
	{"toString", &luna_wrapper_ork_Object::_bind_toString},
	{"acquire", &luna_wrapper_ork_Object::_bind_acquire},
	{"release", &luna_wrapper_ork_Object::_bind_release},
	{"exit", &luna_wrapper_ork_Object::_bind_exit},
	{"base_toString", &luna_wrapper_ork_Object::_bind_base_toString},
	{"dynCast", &luna_wrapper_ork_Object::_bind_dynCast},
	{"__eq", &luna_wrapper_ork_Object::_bind___eq},
	{"fromVoid", &luna_wrapper_ork_Object::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ork_Object::_bind_asVoid},
	{"getTable", &luna_wrapper_ork_Object::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< ork::Object >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ork::Object >::enumValues[] = {
	{0,0}
};



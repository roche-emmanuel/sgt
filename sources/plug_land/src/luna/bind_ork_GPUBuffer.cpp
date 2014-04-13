#include <plug_common.h>

#include <luna/wrappers/wrapper_ork_GPUBuffer.h>

class luna_wrapper_ork_GPUBuffer {
public:
	typedef Luna< ork::GPUBuffer > luna_t;

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

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::GPUBuffer* self= (ork::GPUBuffer*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ork::GPUBuffer >::push(L,self,false);
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

	// Derived class converters:
	static int _cast_from_Object(lua_State *L) {
		// all checked are already performed before reaching this point.
		//ork::GPUBuffer* ptr= dynamic_cast< ork::GPUBuffer* >(Luna< ork::Object >::check(L,1));
		ork::GPUBuffer* ptr= luna_caster< ork::Object, ork::GPUBuffer >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< ork::GPUBuffer >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setData(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSubData(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSubData(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_unmap(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_toString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// ork::GPUBuffer::GPUBuffer()
	static ork::GPUBuffer* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::GPUBuffer::GPUBuffer() function, expected prototype:\nork::GPUBuffer::GPUBuffer()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new ork::GPUBuffer();
	}

	// ork::GPUBuffer::GPUBuffer(lua_Table * data)
	static ork::GPUBuffer* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::GPUBuffer::GPUBuffer(lua_Table * data) function, expected prototype:\nork::GPUBuffer::GPUBuffer(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_ork_GPUBuffer(L,NULL);
	}

	// Overload binder for ork::GPUBuffer::GPUBuffer
	static ork::GPUBuffer* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function GPUBuffer, cannot match any of the overloads for function GPUBuffer:\n  GPUBuffer()\n  GPUBuffer(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// unsigned int ork::GPUBuffer::getId() const
	static int _bind_getId(lua_State *L) {
		if (!_lg_typecheck_getId(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int ork::GPUBuffer::getId() const function, expected prototype:\nunsigned int ork::GPUBuffer::getId() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::GPUBuffer* self=Luna< ork::Object >::checkSubType< ork::GPUBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int ork::GPUBuffer::getId() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getId();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int ork::GPUBuffer::getSize() const
	static int _bind_getSize(lua_State *L) {
		if (!_lg_typecheck_getSize(L)) {
			luaL_error(L, "luna typecheck failed in int ork::GPUBuffer::getSize() const function, expected prototype:\nint ork::GPUBuffer::getSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::GPUBuffer* self=Luna< ork::Object >::checkSubType< ork::GPUBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int ork::GPUBuffer::getSize() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void ork::GPUBuffer::setData(int size, const void * data, ork::BufferUsage u)
	static int _bind_setData(lua_State *L) {
		if (!_lg_typecheck_setData(L)) {
			luaL_error(L, "luna typecheck failed in void ork::GPUBuffer::setData(int size, const void * data, ork::BufferUsage u) function, expected prototype:\nvoid ork::GPUBuffer::setData(int size, const void * data, ork::BufferUsage u)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int size=(int)lua_tointeger(L,2);
		const void* data=(Luna< void >::check(L,3));
		ork::BufferUsage u=(ork::BufferUsage)lua_tointeger(L,4);

		ork::GPUBuffer* self=Luna< ork::Object >::checkSubType< ork::GPUBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::GPUBuffer::setData(int, const void *, ork::BufferUsage). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setData(size, data, u);

		return 0;
	}

	// void ork::GPUBuffer::setSubData(int offset, int size, const void * data)
	static int _bind_setSubData(lua_State *L) {
		if (!_lg_typecheck_setSubData(L)) {
			luaL_error(L, "luna typecheck failed in void ork::GPUBuffer::setSubData(int offset, int size, const void * data) function, expected prototype:\nvoid ork::GPUBuffer::setSubData(int offset, int size, const void * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int offset=(int)lua_tointeger(L,2);
		int size=(int)lua_tointeger(L,3);
		const void* data=(Luna< void >::check(L,4));

		ork::GPUBuffer* self=Luna< ork::Object >::checkSubType< ork::GPUBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::GPUBuffer::setSubData(int, int, const void *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setSubData(offset, size, data);

		return 0;
	}

	// void ork::GPUBuffer::getSubData(int offset, int size, void * data)
	static int _bind_getSubData(lua_State *L) {
		if (!_lg_typecheck_getSubData(L)) {
			luaL_error(L, "luna typecheck failed in void ork::GPUBuffer::getSubData(int offset, int size, void * data) function, expected prototype:\nvoid ork::GPUBuffer::getSubData(int offset, int size, void * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int offset=(int)lua_tointeger(L,2);
		int size=(int)lua_tointeger(L,3);
		void* data=(Luna< void >::check(L,4));

		ork::GPUBuffer* self=Luna< ork::Object >::checkSubType< ork::GPUBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::GPUBuffer::getSubData(int, int, void *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getSubData(offset, size, data);

		return 0;
	}

	// void ork::GPUBuffer::unmap()
	static int _bind_unmap(lua_State *L) {
		if (!_lg_typecheck_unmap(L)) {
			luaL_error(L, "luna typecheck failed in void ork::GPUBuffer::unmap() function, expected prototype:\nvoid ork::GPUBuffer::unmap()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::GPUBuffer* self=Luna< ork::Object >::checkSubType< ork::GPUBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::GPUBuffer::unmap(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->unmap();

		return 0;
	}

	// const char * ork::GPUBuffer::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * ork::GPUBuffer::base_toString() function, expected prototype:\nconst char * ork::GPUBuffer::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::GPUBuffer* self=Luna< ork::Object >::checkSubType< ork::GPUBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * ork::GPUBuffer::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->GPUBuffer::toString();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

ork::GPUBuffer* LunaTraits< ork::GPUBuffer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_ork_GPUBuffer::_bind_ctor(L);
}

void LunaTraits< ork::GPUBuffer >::_bind_dtor(ork::GPUBuffer* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< ork::GPUBuffer >::className[] = "GPUBuffer";
const char LunaTraits< ork::GPUBuffer >::fullName[] = "ork::GPUBuffer";
const char LunaTraits< ork::GPUBuffer >::moduleName[] = "ork";
const char* LunaTraits< ork::GPUBuffer >::parents[] = {"ork.Buffer", 0};
const int LunaTraits< ork::GPUBuffer >::hash = 75578997;
const int LunaTraits< ork::GPUBuffer >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< ork::GPUBuffer >::methods[] = {
	{"getId", &luna_wrapper_ork_GPUBuffer::_bind_getId},
	{"getSize", &luna_wrapper_ork_GPUBuffer::_bind_getSize},
	{"setData", &luna_wrapper_ork_GPUBuffer::_bind_setData},
	{"setSubData", &luna_wrapper_ork_GPUBuffer::_bind_setSubData},
	{"getSubData", &luna_wrapper_ork_GPUBuffer::_bind_getSubData},
	{"unmap", &luna_wrapper_ork_GPUBuffer::_bind_unmap},
	{"base_toString", &luna_wrapper_ork_GPUBuffer::_bind_base_toString},
	{"fromVoid", &luna_wrapper_ork_GPUBuffer::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ork_GPUBuffer::_bind_asVoid},
	{"getTable", &luna_wrapper_ork_GPUBuffer::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< ork::GPUBuffer >::converters[] = {
	{"ork::Object", &luna_wrapper_ork_GPUBuffer::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< ork::GPUBuffer >::enumValues[] = {
	{0,0}
};



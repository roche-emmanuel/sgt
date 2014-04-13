#include <plug_common.h>

#include <luna/wrappers/wrapper_ork_TextureBuffer.h>

class luna_wrapper_ork_TextureBuffer {
public:
	typedef Luna< ork::TextureBuffer > luna_t;

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

		ork::TextureBuffer* self= (ork::TextureBuffer*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ork::TextureBuffer >::push(L,self,false);
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
		//ork::TextureBuffer* ptr= dynamic_cast< ork::TextureBuffer* >(Luna< ork::Object >::check(L,1));
		ork::TextureBuffer* ptr= luna_caster< ork::Object, ork::TextureBuffer >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< ork::TextureBuffer >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::GPUBuffer >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::GPUBuffer >(L,3) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getBuffer(lua_State *L) {
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
	// ork::TextureBuffer::TextureBuffer(ork::TextureInternalFormat tf, ork::ptr< ork::GPUBuffer > pixels)
	static ork::TextureBuffer* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::TextureBuffer::TextureBuffer(ork::TextureInternalFormat tf, ork::ptr< ork::GPUBuffer > pixels) function, expected prototype:\nork::TextureBuffer::TextureBuffer(ork::TextureInternalFormat tf, ork::ptr< ork::GPUBuffer > pixels)\nClass arguments details:\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::TextureInternalFormat tf=(ork::TextureInternalFormat)lua_tointeger(L,1);
		ork::ptr< ork::GPUBuffer > pixels = Luna< ork::Object >::checkSubType< ork::GPUBuffer >(L,2);

		return new ork::TextureBuffer(tf, pixels);
	}

	// ork::TextureBuffer::TextureBuffer(lua_Table * data, ork::TextureInternalFormat tf, ork::ptr< ork::GPUBuffer > pixels)
	static ork::TextureBuffer* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::TextureBuffer::TextureBuffer(lua_Table * data, ork::TextureInternalFormat tf, ork::ptr< ork::GPUBuffer > pixels) function, expected prototype:\nork::TextureBuffer::TextureBuffer(lua_Table * data, ork::TextureInternalFormat tf, ork::ptr< ork::GPUBuffer > pixels)\nClass arguments details:\narg 3 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::TextureInternalFormat tf=(ork::TextureInternalFormat)lua_tointeger(L,2);
		ork::ptr< ork::GPUBuffer > pixels = Luna< ork::Object >::checkSubType< ork::GPUBuffer >(L,3);

		return new wrapper_ork_TextureBuffer(L,NULL, tf, pixels);
	}

	// Overload binder for ork::TextureBuffer::TextureBuffer
	static ork::TextureBuffer* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function TextureBuffer, cannot match any of the overloads for function TextureBuffer:\n  TextureBuffer(ork::TextureInternalFormat, ork::ptr< ork::GPUBuffer >)\n  TextureBuffer(lua_Table *, ork::TextureInternalFormat, ork::ptr< ork::GPUBuffer >)\n");
		return NULL;
	}


	// Function binds:
	// int ork::TextureBuffer::getWidth()
	static int _bind_getWidth(lua_State *L) {
		if (!_lg_typecheck_getWidth(L)) {
			luaL_error(L, "luna typecheck failed in int ork::TextureBuffer::getWidth() function, expected prototype:\nint ork::TextureBuffer::getWidth()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::TextureBuffer* self=Luna< ork::Object >::checkSubType< ork::TextureBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int ork::TextureBuffer::getWidth(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// ork::ptr< ork::GPUBuffer > ork::TextureBuffer::getBuffer()
	static int _bind_getBuffer(lua_State *L) {
		if (!_lg_typecheck_getBuffer(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::GPUBuffer > ork::TextureBuffer::getBuffer() function, expected prototype:\nork::ptr< ork::GPUBuffer > ork::TextureBuffer::getBuffer()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::TextureBuffer* self=Luna< ork::Object >::checkSubType< ork::TextureBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::GPUBuffer > ork::TextureBuffer::getBuffer(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::GPUBuffer > lret = self->getBuffer();
		Luna< ork::GPUBuffer >::push(L,lret.get(),false);

		return 1;
	}

	// const char * ork::TextureBuffer::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * ork::TextureBuffer::base_toString() function, expected prototype:\nconst char * ork::TextureBuffer::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::TextureBuffer* self=Luna< ork::Object >::checkSubType< ork::TextureBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * ork::TextureBuffer::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->TextureBuffer::toString();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

ork::TextureBuffer* LunaTraits< ork::TextureBuffer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_ork_TextureBuffer::_bind_ctor(L);
}

void LunaTraits< ork::TextureBuffer >::_bind_dtor(ork::TextureBuffer* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< ork::TextureBuffer >::className[] = "TextureBuffer";
const char LunaTraits< ork::TextureBuffer >::fullName[] = "ork::TextureBuffer";
const char LunaTraits< ork::TextureBuffer >::moduleName[] = "ork";
const char* LunaTraits< ork::TextureBuffer >::parents[] = {"ork.Texture", 0};
const int LunaTraits< ork::TextureBuffer >::hash = 84578940;
const int LunaTraits< ork::TextureBuffer >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< ork::TextureBuffer >::methods[] = {
	{"getWidth", &luna_wrapper_ork_TextureBuffer::_bind_getWidth},
	{"getBuffer", &luna_wrapper_ork_TextureBuffer::_bind_getBuffer},
	{"base_toString", &luna_wrapper_ork_TextureBuffer::_bind_base_toString},
	{"fromVoid", &luna_wrapper_ork_TextureBuffer::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ork_TextureBuffer::_bind_asVoid},
	{"getTable", &luna_wrapper_ork_TextureBuffer::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< ork::TextureBuffer >::converters[] = {
	{"ork::Object", &luna_wrapper_ork_TextureBuffer::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< ork::TextureBuffer >::enumValues[] = {
	{0,0}
};



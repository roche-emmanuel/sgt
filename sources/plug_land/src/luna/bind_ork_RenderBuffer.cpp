#include <plug_common.h>

#include <luna/wrappers/wrapper_ork_RenderBuffer.h>

class luna_wrapper_ork_RenderBuffer {
public:
	typedef Luna< ork::RenderBuffer > luna_t;

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

		ork::RenderBuffer* self= (ork::RenderBuffer*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ork::RenderBuffer >::push(L,self,false);
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
		//ork::RenderBuffer* ptr= dynamic_cast< ork::RenderBuffer* >(Luna< ork::Object >::check(L,1));
		ork::RenderBuffer* ptr= luna_caster< ork::Object, ork::RenderBuffer >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< ork::RenderBuffer >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getId(lua_State *L) {
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
	// ork::RenderBuffer::RenderBuffer(ork::RenderBuffer::RenderBufferFormat type, int width, int height, int samples = 0)
	static ork::RenderBuffer* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::RenderBuffer::RenderBuffer(ork::RenderBuffer::RenderBufferFormat type, int width, int height, int samples = 0) function, expected prototype:\nork::RenderBuffer::RenderBuffer(ork::RenderBuffer::RenderBufferFormat type, int width, int height, int samples = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		ork::RenderBuffer::RenderBufferFormat type=(ork::RenderBuffer::RenderBufferFormat)lua_tointeger(L,1);
		int width=(int)lua_tointeger(L,2);
		int height=(int)lua_tointeger(L,3);
		int samples=luatop>3 ? (int)lua_tointeger(L,4) : (int)0;

		return new ork::RenderBuffer(type, width, height, samples);
	}

	// ork::RenderBuffer::RenderBuffer(lua_Table * data, ork::RenderBuffer::RenderBufferFormat type, int width, int height, int samples = 0)
	static ork::RenderBuffer* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::RenderBuffer::RenderBuffer(lua_Table * data, ork::RenderBuffer::RenderBufferFormat type, int width, int height, int samples = 0) function, expected prototype:\nork::RenderBuffer::RenderBuffer(lua_Table * data, ork::RenderBuffer::RenderBufferFormat type, int width, int height, int samples = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		ork::RenderBuffer::RenderBufferFormat type=(ork::RenderBuffer::RenderBufferFormat)lua_tointeger(L,2);
		int width=(int)lua_tointeger(L,3);
		int height=(int)lua_tointeger(L,4);
		int samples=luatop>4 ? (int)lua_tointeger(L,5) : (int)0;

		return new wrapper_ork_RenderBuffer(L,NULL, type, width, height, samples);
	}

	// Overload binder for ork::RenderBuffer::RenderBuffer
	static ork::RenderBuffer* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function RenderBuffer, cannot match any of the overloads for function RenderBuffer:\n  RenderBuffer(ork::RenderBuffer::RenderBufferFormat, int, int, int)\n  RenderBuffer(lua_Table *, ork::RenderBuffer::RenderBufferFormat, int, int, int)\n");
		return NULL;
	}


	// Function binds:
	// unsigned int ork::RenderBuffer::getId() const
	static int _bind_getId(lua_State *L) {
		if (!_lg_typecheck_getId(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int ork::RenderBuffer::getId() const function, expected prototype:\nunsigned int ork::RenderBuffer::getId() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::RenderBuffer* self=Luna< ork::Object >::checkSubType< ork::RenderBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int ork::RenderBuffer::getId() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getId();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const char * ork::RenderBuffer::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * ork::RenderBuffer::base_toString() function, expected prototype:\nconst char * ork::RenderBuffer::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::RenderBuffer* self=Luna< ork::Object >::checkSubType< ork::RenderBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * ork::RenderBuffer::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->RenderBuffer::toString();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

ork::RenderBuffer* LunaTraits< ork::RenderBuffer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_ork_RenderBuffer::_bind_ctor(L);
}

void LunaTraits< ork::RenderBuffer >::_bind_dtor(ork::RenderBuffer* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< ork::RenderBuffer >::className[] = "RenderBuffer";
const char LunaTraits< ork::RenderBuffer >::fullName[] = "ork::RenderBuffer";
const char LunaTraits< ork::RenderBuffer >::moduleName[] = "ork";
const char* LunaTraits< ork::RenderBuffer >::parents[] = {"ork.Object", 0};
const int LunaTraits< ork::RenderBuffer >::hash = 91743250;
const int LunaTraits< ork::RenderBuffer >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< ork::RenderBuffer >::methods[] = {
	{"getId", &luna_wrapper_ork_RenderBuffer::_bind_getId},
	{"base_toString", &luna_wrapper_ork_RenderBuffer::_bind_base_toString},
	{"fromVoid", &luna_wrapper_ork_RenderBuffer::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ork_RenderBuffer::_bind_asVoid},
	{"getTable", &luna_wrapper_ork_RenderBuffer::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< ork::RenderBuffer >::converters[] = {
	{"ork::Object", &luna_wrapper_ork_RenderBuffer::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< ork::RenderBuffer >::enumValues[] = {
	{"R8", ork::RenderBuffer::R8},
	{"R8_SNORM", ork::RenderBuffer::R8_SNORM},
	{"R16", ork::RenderBuffer::R16},
	{"R16_SNORM", ork::RenderBuffer::R16_SNORM},
	{"RG8", ork::RenderBuffer::RG8},
	{"RG8_SNORM", ork::RenderBuffer::RG8_SNORM},
	{"RG16", ork::RenderBuffer::RG16},
	{"RG16_SNORM", ork::RenderBuffer::RG16_SNORM},
	{"R3_G3_B2", ork::RenderBuffer::R3_G3_B2},
	{"RGB4", ork::RenderBuffer::RGB4},
	{"RGB5", ork::RenderBuffer::RGB5},
	{"RGB8", ork::RenderBuffer::RGB8},
	{"RGB8_SNORM", ork::RenderBuffer::RGB8_SNORM},
	{"RGB10", ork::RenderBuffer::RGB10},
	{"RGB12", ork::RenderBuffer::RGB12},
	{"RGB16", ork::RenderBuffer::RGB16},
	{"RGB16_SNORM", ork::RenderBuffer::RGB16_SNORM},
	{"RGBA2", ork::RenderBuffer::RGBA2},
	{"RGBA4", ork::RenderBuffer::RGBA4},
	{"RGB5_A1", ork::RenderBuffer::RGB5_A1},
	{"RGBA8", ork::RenderBuffer::RGBA8},
	{"RGBA8_SNORM", ork::RenderBuffer::RGBA8_SNORM},
	{"RGB10_A2", ork::RenderBuffer::RGB10_A2},
	{"RGB10_A2UI", ork::RenderBuffer::RGB10_A2UI},
	{"RGBA12", ork::RenderBuffer::RGBA12},
	{"RGBA16", ork::RenderBuffer::RGBA16},
	{"RGBA16_SNORM", ork::RenderBuffer::RGBA16_SNORM},
	{"SRGB8", ork::RenderBuffer::SRGB8},
	{"SRGB8_ALPHA8", ork::RenderBuffer::SRGB8_ALPHA8},
	{"R16F", ork::RenderBuffer::R16F},
	{"RG16F", ork::RenderBuffer::RG16F},
	{"RGB16F", ork::RenderBuffer::RGB16F},
	{"RGBA16F", ork::RenderBuffer::RGBA16F},
	{"R32F", ork::RenderBuffer::R32F},
	{"RG32F", ork::RenderBuffer::RG32F},
	{"RGB32F", ork::RenderBuffer::RGB32F},
	{"RGBA32F", ork::RenderBuffer::RGBA32F},
	{"R11F_G11F_B10F", ork::RenderBuffer::R11F_G11F_B10F},
	{"RGB9_E5", ork::RenderBuffer::RGB9_E5},
	{"R8I", ork::RenderBuffer::R8I},
	{"R8UI", ork::RenderBuffer::R8UI},
	{"R16I", ork::RenderBuffer::R16I},
	{"R16UI", ork::RenderBuffer::R16UI},
	{"R32I", ork::RenderBuffer::R32I},
	{"R32UI", ork::RenderBuffer::R32UI},
	{"RG8I", ork::RenderBuffer::RG8I},
	{"RG8UI", ork::RenderBuffer::RG8UI},
	{"RG16I", ork::RenderBuffer::RG16I},
	{"RG16UI", ork::RenderBuffer::RG16UI},
	{"RG32I", ork::RenderBuffer::RG32I},
	{"RG32UI", ork::RenderBuffer::RG32UI},
	{"RGB8I", ork::RenderBuffer::RGB8I},
	{"RGB8UI", ork::RenderBuffer::RGB8UI},
	{"RGB16I", ork::RenderBuffer::RGB16I},
	{"RGB16UI", ork::RenderBuffer::RGB16UI},
	{"RGB32I", ork::RenderBuffer::RGB32I},
	{"RGB32UI", ork::RenderBuffer::RGB32UI},
	{"RGBA8I", ork::RenderBuffer::RGBA8I},
	{"RGBA8UI", ork::RenderBuffer::RGBA8UI},
	{"RGBA16I", ork::RenderBuffer::RGBA16I},
	{"RGBA16UI", ork::RenderBuffer::RGBA16UI},
	{"RGBA32I", ork::RenderBuffer::RGBA32I},
	{"RGBA32UI", ork::RenderBuffer::RGBA32UI},
	{"DEPTH_COMPONENT", ork::RenderBuffer::DEPTH_COMPONENT},
	{"DEPTH_COMPONENT16", ork::RenderBuffer::DEPTH_COMPONENT16},
	{"DEPTH_COMPONENT24", ork::RenderBuffer::DEPTH_COMPONENT24},
	{"DEPTH_COMPONENT32", ork::RenderBuffer::DEPTH_COMPONENT32},
	{"DEPTH_COMPONENT32F", ork::RenderBuffer::DEPTH_COMPONENT32F},
	{"DEPTH24_STENCIL8", ork::RenderBuffer::DEPTH24_STENCIL8},
	{"DEPTH32F_STENCIL8", ork::RenderBuffer::DEPTH32F_STENCIL8},
	{"STENCIL_INDEX", ork::RenderBuffer::STENCIL_INDEX},
	{"STENCIL_INDEX1", ork::RenderBuffer::STENCIL_INDEX1},
	{"STENCIL_INDEX4", ork::RenderBuffer::STENCIL_INDEX4},
	{"STENCIL_INDEX8", ork::RenderBuffer::STENCIL_INDEX8},
	{"STENCIL_INDEX16", ork::RenderBuffer::STENCIL_INDEX16},
	{0,0}
};



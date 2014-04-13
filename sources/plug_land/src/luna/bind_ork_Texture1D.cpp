#include <plug_common.h>

#include <luna/wrappers/wrapper_ork_Texture1D.h>

class luna_wrapper_ork_Texture1D {
public:
	typedef Luna< ork::Texture1D > luna_t;

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

		ork::Texture1D* self= (ork::Texture1D*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ork::Texture1D >::push(L,self,false);
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
		//ork::Texture1D* ptr= dynamic_cast< ork::Texture1D* >(Luna< ork::Object >::check(L,1));
		ork::Texture1D* ptr= luna_caster< ork::Object, ork::Texture1D >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< ork::Texture1D >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,84580371) ) return false;
		if( (!(Luna< ork::Sampler::Parameters >::checkSubType< ork::Texture::Parameters >(L,5))) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,85004853) ) return false;
		if( (!(Luna< ork::Buffer::Parameters >::check(L,6))) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,1381405) ) return false;
		if( (!(Luna< ork::Object >::checkSubType< ork::Buffer >(L,7))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=8 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,84580371) ) return false;
		if( (!(Luna< ork::Sampler::Parameters >::checkSubType< ork::Texture::Parameters >(L,6))) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,85004853) ) return false;
		if( (!(Luna< ork::Buffer::Parameters >::check(L,7))) ) return false;
		if( !Luna<void>::has_uniqueid(L,8,1381405) ) return false;
		if( (!(Luna< ork::Object >::checkSubType< ork::Buffer >(L,8))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setSubImage(lua_State *L) {
		if( lua_gettop(L)!=8 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,85004853) ) return false;
		if( !Luna<void>::has_uniqueid(L,8,1381405) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCompressedSubImage(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,1381405) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_toString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// ork::Texture1D::Texture1D(int w, ork::TextureInternalFormat tf, ork::TextureFormat f, ork::PixelType t, const ork::Texture::Parameters & params, const ork::Buffer::Parameters & s, const ork::Buffer & pixels)
	static ork::Texture1D* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::Texture1D::Texture1D(int w, ork::TextureInternalFormat tf, ork::TextureFormat f, ork::PixelType t, const ork::Texture::Parameters & params, const ork::Buffer::Parameters & s, const ork::Buffer & pixels) function, expected prototype:\nork::Texture1D::Texture1D(int w, ork::TextureInternalFormat tf, ork::TextureFormat f, ork::PixelType t, const ork::Texture::Parameters & params, const ork::Buffer::Parameters & s, const ork::Buffer & pixels)\nClass arguments details:\narg 5 ID = 84580371\narg 6 ID = 85004853\narg 7 ID = 1381405\n\n%s",luna_dumpStack(L).c_str());
		}

		int w=(int)lua_tointeger(L,1);
		ork::TextureInternalFormat tf=(ork::TextureInternalFormat)lua_tointeger(L,2);
		ork::TextureFormat f=(ork::TextureFormat)lua_tointeger(L,3);
		ork::PixelType t=(ork::PixelType)lua_tointeger(L,4);
		const ork::Texture::Parameters* params_ptr=(Luna< ork::Sampler::Parameters >::checkSubType< ork::Texture::Parameters >(L,5));
		if( !params_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg params in ork::Texture1D::Texture1D function");
		}
		const ork::Texture::Parameters & params=*params_ptr;
		const ork::Buffer::Parameters* s_ptr=(Luna< ork::Buffer::Parameters >::check(L,6));
		if( !s_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg s in ork::Texture1D::Texture1D function");
		}
		const ork::Buffer::Parameters & s=*s_ptr;
		const ork::Buffer* pixels_ptr=(Luna< ork::Object >::checkSubType< ork::Buffer >(L,7));
		if( !pixels_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pixels in ork::Texture1D::Texture1D function");
		}
		const ork::Buffer & pixels=*pixels_ptr;

		return new ork::Texture1D(w, tf, f, t, params, s, pixels);
	}

	// ork::Texture1D::Texture1D(lua_Table * data, int w, ork::TextureInternalFormat tf, ork::TextureFormat f, ork::PixelType t, const ork::Texture::Parameters & params, const ork::Buffer::Parameters & s, const ork::Buffer & pixels)
	static ork::Texture1D* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::Texture1D::Texture1D(lua_Table * data, int w, ork::TextureInternalFormat tf, ork::TextureFormat f, ork::PixelType t, const ork::Texture::Parameters & params, const ork::Buffer::Parameters & s, const ork::Buffer & pixels) function, expected prototype:\nork::Texture1D::Texture1D(lua_Table * data, int w, ork::TextureInternalFormat tf, ork::TextureFormat f, ork::PixelType t, const ork::Texture::Parameters & params, const ork::Buffer::Parameters & s, const ork::Buffer & pixels)\nClass arguments details:\narg 6 ID = 84580371\narg 7 ID = 85004853\narg 8 ID = 1381405\n\n%s",luna_dumpStack(L).c_str());
		}

		int w=(int)lua_tointeger(L,2);
		ork::TextureInternalFormat tf=(ork::TextureInternalFormat)lua_tointeger(L,3);
		ork::TextureFormat f=(ork::TextureFormat)lua_tointeger(L,4);
		ork::PixelType t=(ork::PixelType)lua_tointeger(L,5);
		const ork::Texture::Parameters* params_ptr=(Luna< ork::Sampler::Parameters >::checkSubType< ork::Texture::Parameters >(L,6));
		if( !params_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg params in ork::Texture1D::Texture1D function");
		}
		const ork::Texture::Parameters & params=*params_ptr;
		const ork::Buffer::Parameters* s_ptr=(Luna< ork::Buffer::Parameters >::check(L,7));
		if( !s_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg s in ork::Texture1D::Texture1D function");
		}
		const ork::Buffer::Parameters & s=*s_ptr;
		const ork::Buffer* pixels_ptr=(Luna< ork::Object >::checkSubType< ork::Buffer >(L,8));
		if( !pixels_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pixels in ork::Texture1D::Texture1D function");
		}
		const ork::Buffer & pixels=*pixels_ptr;

		return new wrapper_ork_Texture1D(L,NULL, w, tf, f, t, params, s, pixels);
	}

	// Overload binder for ork::Texture1D::Texture1D
	static ork::Texture1D* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Texture1D, cannot match any of the overloads for function Texture1D:\n  Texture1D(int, ork::TextureInternalFormat, ork::TextureFormat, ork::PixelType, const ork::Texture::Parameters &, const ork::Buffer::Parameters &, const ork::Buffer &)\n  Texture1D(lua_Table *, int, ork::TextureInternalFormat, ork::TextureFormat, ork::PixelType, const ork::Texture::Parameters &, const ork::Buffer::Parameters &, const ork::Buffer &)\n");
		return NULL;
	}


	// Function binds:
	// int ork::Texture1D::getWidth()
	static int _bind_getWidth(lua_State *L) {
		if (!_lg_typecheck_getWidth(L)) {
			luaL_error(L, "luna typecheck failed in int ork::Texture1D::getWidth() function, expected prototype:\nint ork::Texture1D::getWidth()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Texture1D* self=Luna< ork::Object >::checkSubType< ork::Texture1D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int ork::Texture1D::getWidth(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void ork::Texture1D::setSubImage(int level, int x, int w, ork::TextureFormat f, ork::PixelType t, const ork::Buffer::Parameters & s, const ork::Buffer & pixels)
	static int _bind_setSubImage(lua_State *L) {
		if (!_lg_typecheck_setSubImage(L)) {
			luaL_error(L, "luna typecheck failed in void ork::Texture1D::setSubImage(int level, int x, int w, ork::TextureFormat f, ork::PixelType t, const ork::Buffer::Parameters & s, const ork::Buffer & pixels) function, expected prototype:\nvoid ork::Texture1D::setSubImage(int level, int x, int w, ork::TextureFormat f, ork::PixelType t, const ork::Buffer::Parameters & s, const ork::Buffer & pixels)\nClass arguments details:\narg 6 ID = 85004853\narg 7 ID = 1381405\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int x=(int)lua_tointeger(L,3);
		int w=(int)lua_tointeger(L,4);
		ork::TextureFormat f=(ork::TextureFormat)lua_tointeger(L,5);
		ork::PixelType t=(ork::PixelType)lua_tointeger(L,6);
		const ork::Buffer::Parameters* s_ptr=(Luna< ork::Buffer::Parameters >::check(L,7));
		if( !s_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg s in ork::Texture1D::setSubImage function");
		}
		const ork::Buffer::Parameters & s=*s_ptr;
		const ork::Buffer* pixels_ptr=(Luna< ork::Object >::checkSubType< ork::Buffer >(L,8));
		if( !pixels_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pixels in ork::Texture1D::setSubImage function");
		}
		const ork::Buffer & pixels=*pixels_ptr;

		ork::Texture1D* self=Luna< ork::Object >::checkSubType< ork::Texture1D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::Texture1D::setSubImage(int, int, int, ork::TextureFormat, ork::PixelType, const ork::Buffer::Parameters &, const ork::Buffer &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setSubImage(level, x, w, f, t, s, pixels);

		return 0;
	}

	// void ork::Texture1D::setCompressedSubImage(int level, int x, int w, int s, const ork::Buffer & pixels)
	static int _bind_setCompressedSubImage(lua_State *L) {
		if (!_lg_typecheck_setCompressedSubImage(L)) {
			luaL_error(L, "luna typecheck failed in void ork::Texture1D::setCompressedSubImage(int level, int x, int w, int s, const ork::Buffer & pixels) function, expected prototype:\nvoid ork::Texture1D::setCompressedSubImage(int level, int x, int w, int s, const ork::Buffer & pixels)\nClass arguments details:\narg 5 ID = 1381405\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int x=(int)lua_tointeger(L,3);
		int w=(int)lua_tointeger(L,4);
		int s=(int)lua_tointeger(L,5);
		const ork::Buffer* pixels_ptr=(Luna< ork::Object >::checkSubType< ork::Buffer >(L,6));
		if( !pixels_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pixels in ork::Texture1D::setCompressedSubImage function");
		}
		const ork::Buffer & pixels=*pixels_ptr;

		ork::Texture1D* self=Luna< ork::Object >::checkSubType< ork::Texture1D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::Texture1D::setCompressedSubImage(int, int, int, int, const ork::Buffer &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setCompressedSubImage(level, x, w, s, pixels);

		return 0;
	}

	// const char * ork::Texture1D::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * ork::Texture1D::base_toString() function, expected prototype:\nconst char * ork::Texture1D::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Texture1D* self=Luna< ork::Object >::checkSubType< ork::Texture1D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * ork::Texture1D::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Texture1D::toString();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

ork::Texture1D* LunaTraits< ork::Texture1D >::_bind_ctor(lua_State *L) {
	return luna_wrapper_ork_Texture1D::_bind_ctor(L);
}

void LunaTraits< ork::Texture1D >::_bind_dtor(ork::Texture1D* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< ork::Texture1D >::className[] = "Texture1D";
const char LunaTraits< ork::Texture1D >::fullName[] = "ork::Texture1D";
const char LunaTraits< ork::Texture1D >::moduleName[] = "ork";
const char* LunaTraits< ork::Texture1D >::parents[] = {"ork.Texture", 0};
const int LunaTraits< ork::Texture1D >::hash = 17118021;
const int LunaTraits< ork::Texture1D >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< ork::Texture1D >::methods[] = {
	{"getWidth", &luna_wrapper_ork_Texture1D::_bind_getWidth},
	{"setSubImage", &luna_wrapper_ork_Texture1D::_bind_setSubImage},
	{"setCompressedSubImage", &luna_wrapper_ork_Texture1D::_bind_setCompressedSubImage},
	{"base_toString", &luna_wrapper_ork_Texture1D::_bind_base_toString},
	{"fromVoid", &luna_wrapper_ork_Texture1D::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ork_Texture1D::_bind_asVoid},
	{"getTable", &luna_wrapper_ork_Texture1D::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< ork::Texture1D >::converters[] = {
	{"ork::Object", &luna_wrapper_ork_Texture1D::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< ork::Texture1D >::enumValues[] = {
	{0,0}
};



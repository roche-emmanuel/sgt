#include <plug_common.h>

#include <luna/wrappers/wrapper_ork_Texture2DArray.h>

class luna_wrapper_ork_Texture2DArray {
public:
	typedef Luna< ork::Texture2DArray > luna_t;

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

		ork::Texture2DArray* self= (ork::Texture2DArray*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ork::Texture2DArray >::push(L,self,false);
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
		//ork::Texture2DArray* ptr= dynamic_cast< ork::Texture2DArray* >(Luna< ork::Object >::check(L,1));
		ork::Texture2DArray* ptr= luna_caster< ork::Object, ork::Texture2DArray >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< ork::Texture2DArray >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=9 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,84580371) ) return false;
		if( (!(Luna< ork::Sampler::Parameters >::checkSubType< ork::Texture::Parameters >(L,7))) ) return false;
		if( !Luna<void>::has_uniqueid(L,8,85004853) ) return false;
		if( (!(Luna< ork::Buffer::Parameters >::check(L,8))) ) return false;
		if( !Luna<void>::has_uniqueid(L,9,1381405) ) return false;
		if( (!(Luna< ork::Object >::checkSubType< ork::Buffer >(L,9))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=10 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( !Luna<void>::has_uniqueid(L,8,84580371) ) return false;
		if( (!(Luna< ork::Sampler::Parameters >::checkSubType< ork::Texture::Parameters >(L,8))) ) return false;
		if( !Luna<void>::has_uniqueid(L,9,85004853) ) return false;
		if( (!(Luna< ork::Buffer::Parameters >::check(L,9))) ) return false;
		if( !Luna<void>::has_uniqueid(L,10,1381405) ) return false;
		if( (!(Luna< ork::Object >::checkSubType< ork::Buffer >(L,10))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLayers(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setSubImage(lua_State *L) {
		if( lua_gettop(L)!=12 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( (lua_type(L,8)!=LUA_TNUMBER || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		if( (lua_type(L,9)!=LUA_TNUMBER || lua_tointeger(L,9) != lua_tonumber(L,9)) ) return false;
		if( (lua_type(L,10)!=LUA_TNUMBER || lua_tointeger(L,10) != lua_tonumber(L,10)) ) return false;
		if( !Luna<void>::has_uniqueid(L,11,85004853) ) return false;
		if( !Luna<void>::has_uniqueid(L,12,1381405) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCompressedSubImage(lua_State *L) {
		if( lua_gettop(L)!=10 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( (lua_type(L,8)!=LUA_TNUMBER || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		if( (lua_type(L,9)!=LUA_TNUMBER || lua_tointeger(L,9) != lua_tonumber(L,9)) ) return false;
		if( !Luna<void>::has_uniqueid(L,10,1381405) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMaxLayers(lua_State *L) {
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
	// ork::Texture2DArray::Texture2DArray(int w, int h, int l, ork::TextureInternalFormat tf, ork::TextureFormat f, ork::PixelType t, const ork::Texture::Parameters & params, const ork::Buffer::Parameters & s, const ork::Buffer & pixels)
	static ork::Texture2DArray* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::Texture2DArray::Texture2DArray(int w, int h, int l, ork::TextureInternalFormat tf, ork::TextureFormat f, ork::PixelType t, const ork::Texture::Parameters & params, const ork::Buffer::Parameters & s, const ork::Buffer & pixels) function, expected prototype:\nork::Texture2DArray::Texture2DArray(int w, int h, int l, ork::TextureInternalFormat tf, ork::TextureFormat f, ork::PixelType t, const ork::Texture::Parameters & params, const ork::Buffer::Parameters & s, const ork::Buffer & pixels)\nClass arguments details:\narg 7 ID = 84580371\narg 8 ID = 85004853\narg 9 ID = 1381405\n\n%s",luna_dumpStack(L).c_str());
		}

		int w=(int)lua_tointeger(L,1);
		int h=(int)lua_tointeger(L,2);
		int l=(int)lua_tointeger(L,3);
		ork::TextureInternalFormat tf=(ork::TextureInternalFormat)lua_tointeger(L,4);
		ork::TextureFormat f=(ork::TextureFormat)lua_tointeger(L,5);
		ork::PixelType t=(ork::PixelType)lua_tointeger(L,6);
		const ork::Texture::Parameters* params_ptr=(Luna< ork::Sampler::Parameters >::checkSubType< ork::Texture::Parameters >(L,7));
		if( !params_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg params in ork::Texture2DArray::Texture2DArray function");
		}
		const ork::Texture::Parameters & params=*params_ptr;
		const ork::Buffer::Parameters* s_ptr=(Luna< ork::Buffer::Parameters >::check(L,8));
		if( !s_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg s in ork::Texture2DArray::Texture2DArray function");
		}
		const ork::Buffer::Parameters & s=*s_ptr;
		const ork::Buffer* pixels_ptr=(Luna< ork::Object >::checkSubType< ork::Buffer >(L,9));
		if( !pixels_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pixels in ork::Texture2DArray::Texture2DArray function");
		}
		const ork::Buffer & pixels=*pixels_ptr;

		return new ork::Texture2DArray(w, h, l, tf, f, t, params, s, pixels);
	}

	// ork::Texture2DArray::Texture2DArray(lua_Table * data, int w, int h, int l, ork::TextureInternalFormat tf, ork::TextureFormat f, ork::PixelType t, const ork::Texture::Parameters & params, const ork::Buffer::Parameters & s, const ork::Buffer & pixels)
	static ork::Texture2DArray* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::Texture2DArray::Texture2DArray(lua_Table * data, int w, int h, int l, ork::TextureInternalFormat tf, ork::TextureFormat f, ork::PixelType t, const ork::Texture::Parameters & params, const ork::Buffer::Parameters & s, const ork::Buffer & pixels) function, expected prototype:\nork::Texture2DArray::Texture2DArray(lua_Table * data, int w, int h, int l, ork::TextureInternalFormat tf, ork::TextureFormat f, ork::PixelType t, const ork::Texture::Parameters & params, const ork::Buffer::Parameters & s, const ork::Buffer & pixels)\nClass arguments details:\narg 8 ID = 84580371\narg 9 ID = 85004853\narg 10 ID = 1381405\n\n%s",luna_dumpStack(L).c_str());
		}

		int w=(int)lua_tointeger(L,2);
		int h=(int)lua_tointeger(L,3);
		int l=(int)lua_tointeger(L,4);
		ork::TextureInternalFormat tf=(ork::TextureInternalFormat)lua_tointeger(L,5);
		ork::TextureFormat f=(ork::TextureFormat)lua_tointeger(L,6);
		ork::PixelType t=(ork::PixelType)lua_tointeger(L,7);
		const ork::Texture::Parameters* params_ptr=(Luna< ork::Sampler::Parameters >::checkSubType< ork::Texture::Parameters >(L,8));
		if( !params_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg params in ork::Texture2DArray::Texture2DArray function");
		}
		const ork::Texture::Parameters & params=*params_ptr;
		const ork::Buffer::Parameters* s_ptr=(Luna< ork::Buffer::Parameters >::check(L,9));
		if( !s_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg s in ork::Texture2DArray::Texture2DArray function");
		}
		const ork::Buffer::Parameters & s=*s_ptr;
		const ork::Buffer* pixels_ptr=(Luna< ork::Object >::checkSubType< ork::Buffer >(L,10));
		if( !pixels_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pixels in ork::Texture2DArray::Texture2DArray function");
		}
		const ork::Buffer & pixels=*pixels_ptr;

		return new wrapper_ork_Texture2DArray(L,NULL, w, h, l, tf, f, t, params, s, pixels);
	}

	// Overload binder for ork::Texture2DArray::Texture2DArray
	static ork::Texture2DArray* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Texture2DArray, cannot match any of the overloads for function Texture2DArray:\n  Texture2DArray(int, int, int, ork::TextureInternalFormat, ork::TextureFormat, ork::PixelType, const ork::Texture::Parameters &, const ork::Buffer::Parameters &, const ork::Buffer &)\n  Texture2DArray(lua_Table *, int, int, int, ork::TextureInternalFormat, ork::TextureFormat, ork::PixelType, const ork::Texture::Parameters &, const ork::Buffer::Parameters &, const ork::Buffer &)\n");
		return NULL;
	}


	// Function binds:
	// int ork::Texture2DArray::getWidth()
	static int _bind_getWidth(lua_State *L) {
		if (!_lg_typecheck_getWidth(L)) {
			luaL_error(L, "luna typecheck failed in int ork::Texture2DArray::getWidth() function, expected prototype:\nint ork::Texture2DArray::getWidth()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Texture2DArray* self=Luna< ork::Object >::checkSubType< ork::Texture2DArray >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int ork::Texture2DArray::getWidth(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int ork::Texture2DArray::getHeight()
	static int _bind_getHeight(lua_State *L) {
		if (!_lg_typecheck_getHeight(L)) {
			luaL_error(L, "luna typecheck failed in int ork::Texture2DArray::getHeight() function, expected prototype:\nint ork::Texture2DArray::getHeight()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Texture2DArray* self=Luna< ork::Object >::checkSubType< ork::Texture2DArray >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int ork::Texture2DArray::getHeight(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int ork::Texture2DArray::getLayers()
	static int _bind_getLayers(lua_State *L) {
		if (!_lg_typecheck_getLayers(L)) {
			luaL_error(L, "luna typecheck failed in int ork::Texture2DArray::getLayers() function, expected prototype:\nint ork::Texture2DArray::getLayers()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Texture2DArray* self=Luna< ork::Object >::checkSubType< ork::Texture2DArray >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int ork::Texture2DArray::getLayers(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getLayers();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void ork::Texture2DArray::setSubImage(int level, int x, int y, int l, int w, int h, int d, ork::TextureFormat f, ork::PixelType t, const ork::Buffer::Parameters & s, const ork::Buffer & pixels)
	static int _bind_setSubImage(lua_State *L) {
		if (!_lg_typecheck_setSubImage(L)) {
			luaL_error(L, "luna typecheck failed in void ork::Texture2DArray::setSubImage(int level, int x, int y, int l, int w, int h, int d, ork::TextureFormat f, ork::PixelType t, const ork::Buffer::Parameters & s, const ork::Buffer & pixels) function, expected prototype:\nvoid ork::Texture2DArray::setSubImage(int level, int x, int y, int l, int w, int h, int d, ork::TextureFormat f, ork::PixelType t, const ork::Buffer::Parameters & s, const ork::Buffer & pixels)\nClass arguments details:\narg 10 ID = 85004853\narg 11 ID = 1381405\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int x=(int)lua_tointeger(L,3);
		int y=(int)lua_tointeger(L,4);
		int l=(int)lua_tointeger(L,5);
		int w=(int)lua_tointeger(L,6);
		int h=(int)lua_tointeger(L,7);
		int d=(int)lua_tointeger(L,8);
		ork::TextureFormat f=(ork::TextureFormat)lua_tointeger(L,9);
		ork::PixelType t=(ork::PixelType)lua_tointeger(L,10);
		const ork::Buffer::Parameters* s_ptr=(Luna< ork::Buffer::Parameters >::check(L,11));
		if( !s_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg s in ork::Texture2DArray::setSubImage function");
		}
		const ork::Buffer::Parameters & s=*s_ptr;
		const ork::Buffer* pixels_ptr=(Luna< ork::Object >::checkSubType< ork::Buffer >(L,12));
		if( !pixels_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pixels in ork::Texture2DArray::setSubImage function");
		}
		const ork::Buffer & pixels=*pixels_ptr;

		ork::Texture2DArray* self=Luna< ork::Object >::checkSubType< ork::Texture2DArray >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::Texture2DArray::setSubImage(int, int, int, int, int, int, int, ork::TextureFormat, ork::PixelType, const ork::Buffer::Parameters &, const ork::Buffer &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setSubImage(level, x, y, l, w, h, d, f, t, s, pixels);

		return 0;
	}

	// void ork::Texture2DArray::setCompressedSubImage(int level, int x, int y, int l, int w, int h, int d, int s, const ork::Buffer & pixels)
	static int _bind_setCompressedSubImage(lua_State *L) {
		if (!_lg_typecheck_setCompressedSubImage(L)) {
			luaL_error(L, "luna typecheck failed in void ork::Texture2DArray::setCompressedSubImage(int level, int x, int y, int l, int w, int h, int d, int s, const ork::Buffer & pixels) function, expected prototype:\nvoid ork::Texture2DArray::setCompressedSubImage(int level, int x, int y, int l, int w, int h, int d, int s, const ork::Buffer & pixels)\nClass arguments details:\narg 9 ID = 1381405\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int x=(int)lua_tointeger(L,3);
		int y=(int)lua_tointeger(L,4);
		int l=(int)lua_tointeger(L,5);
		int w=(int)lua_tointeger(L,6);
		int h=(int)lua_tointeger(L,7);
		int d=(int)lua_tointeger(L,8);
		int s=(int)lua_tointeger(L,9);
		const ork::Buffer* pixels_ptr=(Luna< ork::Object >::checkSubType< ork::Buffer >(L,10));
		if( !pixels_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pixels in ork::Texture2DArray::setCompressedSubImage function");
		}
		const ork::Buffer & pixels=*pixels_ptr;

		ork::Texture2DArray* self=Luna< ork::Object >::checkSubType< ork::Texture2DArray >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::Texture2DArray::setCompressedSubImage(int, int, int, int, int, int, int, int, const ork::Buffer &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setCompressedSubImage(level, x, y, l, w, h, d, s, pixels);

		return 0;
	}

	// static int ork::Texture2DArray::getMaxLayers()
	static int _bind_getMaxLayers(lua_State *L) {
		if (!_lg_typecheck_getMaxLayers(L)) {
			luaL_error(L, "luna typecheck failed in static int ork::Texture2DArray::getMaxLayers() function, expected prototype:\nstatic int ork::Texture2DArray::getMaxLayers()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		int lret = ork::Texture2DArray::getMaxLayers();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const char * ork::Texture2DArray::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * ork::Texture2DArray::base_toString() function, expected prototype:\nconst char * ork::Texture2DArray::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Texture2DArray* self=Luna< ork::Object >::checkSubType< ork::Texture2DArray >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * ork::Texture2DArray::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Texture2DArray::toString();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

ork::Texture2DArray* LunaTraits< ork::Texture2DArray >::_bind_ctor(lua_State *L) {
	return luna_wrapper_ork_Texture2DArray::_bind_ctor(L);
}

void LunaTraits< ork::Texture2DArray >::_bind_dtor(ork::Texture2DArray* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< ork::Texture2DArray >::className[] = "Texture2DArray";
const char LunaTraits< ork::Texture2DArray >::fullName[] = "ork::Texture2DArray";
const char LunaTraits< ork::Texture2DArray >::moduleName[] = "ork";
const char* LunaTraits< ork::Texture2DArray >::parents[] = {"ork.Texture", 0};
const int LunaTraits< ork::Texture2DArray >::hash = 85261481;
const int LunaTraits< ork::Texture2DArray >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< ork::Texture2DArray >::methods[] = {
	{"getWidth", &luna_wrapper_ork_Texture2DArray::_bind_getWidth},
	{"getHeight", &luna_wrapper_ork_Texture2DArray::_bind_getHeight},
	{"getLayers", &luna_wrapper_ork_Texture2DArray::_bind_getLayers},
	{"setSubImage", &luna_wrapper_ork_Texture2DArray::_bind_setSubImage},
	{"setCompressedSubImage", &luna_wrapper_ork_Texture2DArray::_bind_setCompressedSubImage},
	{"getMaxLayers", &luna_wrapper_ork_Texture2DArray::_bind_getMaxLayers},
	{"base_toString", &luna_wrapper_ork_Texture2DArray::_bind_base_toString},
	{"fromVoid", &luna_wrapper_ork_Texture2DArray::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ork_Texture2DArray::_bind_asVoid},
	{"getTable", &luna_wrapper_ork_Texture2DArray::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< ork::Texture2DArray >::converters[] = {
	{"ork::Object", &luna_wrapper_ork_Texture2DArray::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< ork::Texture2DArray >::enumValues[] = {
	{0,0}
};



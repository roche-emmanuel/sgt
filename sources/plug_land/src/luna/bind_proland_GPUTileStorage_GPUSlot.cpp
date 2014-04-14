#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_GPUTileStorage_GPUSlot.h>

class luna_wrapper_proland_GPUTileStorage_GPUSlot {
public:
	typedef Luna< proland::GPUTileStorage::GPUSlot > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		proland::GPUTileStorage::GPUSlot* self=(Luna< proland::GPUTileStorage::GPUSlot >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<proland::GPUTileStorage::GPUSlot,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,71475540) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(proland::GPUTileStorage::GPUSlot*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		proland::GPUTileStorage::GPUSlot* rhs =(Luna< proland::GPUTileStorage::GPUSlot >::check(L,2));
		proland::GPUTileStorage::GPUSlot* self=(Luna< proland::GPUTileStorage::GPUSlot >::check(L,1));
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

		proland::GPUTileStorage::GPUSlot* self= (proland::GPUTileStorage::GPUSlot*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::GPUTileStorage::GPUSlot >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,71475540) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< proland::GPUTileStorage::GPUSlot >::check(L,1));
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

		proland::GPUTileStorage::GPUSlot* self=(Luna< proland::GPUTileStorage::GPUSlot >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("proland::GPUTileStorage::GPUSlot");
		
		return luna_dynamicCast(L,converters,"proland::GPUTileStorage::GPUSlot",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,1381405)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< ork::Object >::checkSubType< proland::TileStorage >(L,1)) ) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Texture2DArray >(L,3) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,1381405)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< ork::Object >::checkSubType< proland::TileStorage >(L,2)) ) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Texture2DArray >(L,4) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getIndex(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_copyPixels(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,2) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSubImage(lua_State *L) {
		if( lua_gettop(L)!=9 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( !Luna<void>::has_uniqueid(L,8,85004853) ) return false;
		if( !Luna<void>::has_uniqueid(L,9,1381405) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getT(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getL(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setT(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Texture2DArray >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_copyPixels(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,2) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setSubImage(lua_State *L) {
		if( lua_gettop(L)!=9 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( !Luna<void>::has_uniqueid(L,8,85004853) ) return false;
		if( !Luna<void>::has_uniqueid(L,9,1381405) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::GPUTileStorage::GPUSlot::GPUSlot(proland::TileStorage * owner, int index, ork::ptr< ork::Texture2DArray > t, int l)
	static proland::GPUTileStorage::GPUSlot* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::GPUTileStorage::GPUSlot::GPUSlot(proland::TileStorage * owner, int index, ork::ptr< ork::Texture2DArray > t, int l) function, expected prototype:\nproland::GPUTileStorage::GPUSlot::GPUSlot(proland::TileStorage * owner, int index, ork::ptr< ork::Texture2DArray > t, int l)\nClass arguments details:\narg 1 ID = 1381405\narg 3 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::TileStorage* owner=(Luna< ork::Object >::checkSubType< proland::TileStorage >(L,1));
		int index=(int)lua_tointeger(L,2);
		ork::ptr< ork::Texture2DArray > t = Luna< ork::Object >::checkSubType< ork::Texture2DArray >(L,3);
		int l=(int)lua_tointeger(L,4);

		return new proland::GPUTileStorage::GPUSlot(owner, index, t, l);
	}

	// proland::GPUTileStorage::GPUSlot::GPUSlot(lua_Table * data, proland::TileStorage * owner, int index, ork::ptr< ork::Texture2DArray > t, int l)
	static proland::GPUTileStorage::GPUSlot* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::GPUTileStorage::GPUSlot::GPUSlot(lua_Table * data, proland::TileStorage * owner, int index, ork::ptr< ork::Texture2DArray > t, int l) function, expected prototype:\nproland::GPUTileStorage::GPUSlot::GPUSlot(lua_Table * data, proland::TileStorage * owner, int index, ork::ptr< ork::Texture2DArray > t, int l)\nClass arguments details:\narg 2 ID = 1381405\narg 4 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::TileStorage* owner=(Luna< ork::Object >::checkSubType< proland::TileStorage >(L,2));
		int index=(int)lua_tointeger(L,3);
		ork::ptr< ork::Texture2DArray > t = Luna< ork::Object >::checkSubType< ork::Texture2DArray >(L,4);
		int l=(int)lua_tointeger(L,5);

		return new wrapper_proland_GPUTileStorage_GPUSlot(L,NULL, owner, index, t, l);
	}

	// Overload binder for proland::GPUTileStorage::GPUSlot::GPUSlot
	static proland::GPUTileStorage::GPUSlot* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function GPUSlot, cannot match any of the overloads for function GPUSlot:\n  GPUSlot(proland::TileStorage *, int, ork::ptr< ork::Texture2DArray >, int)\n  GPUSlot(lua_Table *, proland::TileStorage *, int, ork::ptr< ork::Texture2DArray >, int)\n");
		return NULL;
	}


	// Function binds:
	// int proland::GPUTileStorage::GPUSlot::getIndex()
	static int _bind_getIndex(lua_State *L) {
		if (!_lg_typecheck_getIndex(L)) {
			luaL_error(L, "luna typecheck failed in int proland::GPUTileStorage::GPUSlot::getIndex() function, expected prototype:\nint proland::GPUTileStorage::GPUSlot::getIndex()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::GPUTileStorage::GPUSlot* self=(Luna< proland::GPUTileStorage::GPUSlot >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::GPUTileStorage::GPUSlot::getIndex(). Got : '%s'\n%s",typeid(Luna< proland::GPUTileStorage::GPUSlot >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getIndex();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int proland::GPUTileStorage::GPUSlot::getWidth()
	static int _bind_getWidth(lua_State *L) {
		if (!_lg_typecheck_getWidth(L)) {
			luaL_error(L, "luna typecheck failed in int proland::GPUTileStorage::GPUSlot::getWidth() function, expected prototype:\nint proland::GPUTileStorage::GPUSlot::getWidth()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::GPUTileStorage::GPUSlot* self=(Luna< proland::GPUTileStorage::GPUSlot >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::GPUTileStorage::GPUSlot::getWidth(). Got : '%s'\n%s",typeid(Luna< proland::GPUTileStorage::GPUSlot >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int proland::GPUTileStorage::GPUSlot::getHeight()
	static int _bind_getHeight(lua_State *L) {
		if (!_lg_typecheck_getHeight(L)) {
			luaL_error(L, "luna typecheck failed in int proland::GPUTileStorage::GPUSlot::getHeight() function, expected prototype:\nint proland::GPUTileStorage::GPUSlot::getHeight()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::GPUTileStorage::GPUSlot* self=(Luna< proland::GPUTileStorage::GPUSlot >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::GPUTileStorage::GPUSlot::getHeight(). Got : '%s'\n%s",typeid(Luna< proland::GPUTileStorage::GPUSlot >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void proland::GPUTileStorage::GPUSlot::copyPixels(ork::ptr< ork::FrameBuffer > fb, int x, int y, int w, int h)
	static int _bind_copyPixels(lua_State *L) {
		if (!_lg_typecheck_copyPixels(L)) {
			luaL_error(L, "luna typecheck failed in void proland::GPUTileStorage::GPUSlot::copyPixels(ork::ptr< ork::FrameBuffer > fb, int x, int y, int w, int h) function, expected prototype:\nvoid proland::GPUTileStorage::GPUSlot::copyPixels(ork::ptr< ork::FrameBuffer > fb, int x, int y, int w, int h)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::FrameBuffer > fb = Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,2);
		int x=(int)lua_tointeger(L,3);
		int y=(int)lua_tointeger(L,4);
		int w=(int)lua_tointeger(L,5);
		int h=(int)lua_tointeger(L,6);

		proland::GPUTileStorage::GPUSlot* self=(Luna< proland::GPUTileStorage::GPUSlot >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::GPUTileStorage::GPUSlot::copyPixels(ork::ptr< ork::FrameBuffer >, int, int, int, int). Got : '%s'\n%s",typeid(Luna< proland::GPUTileStorage::GPUSlot >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->copyPixels(fb, x, y, w, h);

		return 0;
	}

	// void proland::GPUTileStorage::GPUSlot::setSubImage(int x, int y, int w, int h, ork::TextureFormat f, ork::PixelType t, const ork::Buffer::Parameters & s, const ork::Buffer & pixels)
	static int _bind_setSubImage(lua_State *L) {
		if (!_lg_typecheck_setSubImage(L)) {
			luaL_error(L, "luna typecheck failed in void proland::GPUTileStorage::GPUSlot::setSubImage(int x, int y, int w, int h, ork::TextureFormat f, ork::PixelType t, const ork::Buffer::Parameters & s, const ork::Buffer & pixels) function, expected prototype:\nvoid proland::GPUTileStorage::GPUSlot::setSubImage(int x, int y, int w, int h, ork::TextureFormat f, ork::PixelType t, const ork::Buffer::Parameters & s, const ork::Buffer & pixels)\nClass arguments details:\narg 7 ID = 85004853\narg 8 ID = 1381405\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		int w=(int)lua_tointeger(L,4);
		int h=(int)lua_tointeger(L,5);
		ork::TextureFormat f=(ork::TextureFormat)lua_tointeger(L,6);
		ork::PixelType t=(ork::PixelType)lua_tointeger(L,7);
		const ork::Buffer::Parameters* s_ptr=(Luna< ork::Buffer::Parameters >::check(L,8));
		if( !s_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg s in proland::GPUTileStorage::GPUSlot::setSubImage function");
		}
		const ork::Buffer::Parameters & s=*s_ptr;
		const ork::Buffer* pixels_ptr=(Luna< ork::Object >::checkSubType< ork::Buffer >(L,9));
		if( !pixels_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pixels in proland::GPUTileStorage::GPUSlot::setSubImage function");
		}
		const ork::Buffer & pixels=*pixels_ptr;

		proland::GPUTileStorage::GPUSlot* self=(Luna< proland::GPUTileStorage::GPUSlot >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::GPUTileStorage::GPUSlot::setSubImage(int, int, int, int, ork::TextureFormat, ork::PixelType, const ork::Buffer::Parameters &, const ork::Buffer &). Got : '%s'\n%s",typeid(Luna< proland::GPUTileStorage::GPUSlot >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setSubImage(x, y, w, h, f, t, s, pixels);

		return 0;
	}

	// ork::ptr< ork::Texture2DArray > proland::GPUTileStorage::GPUSlot::t()
	static int _bind_getT(lua_State *L) {
		if (!_lg_typecheck_getT(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Texture2DArray > proland::GPUTileStorage::GPUSlot::t() function, expected prototype:\nork::ptr< ork::Texture2DArray > proland::GPUTileStorage::GPUSlot::t()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::GPUTileStorage::GPUSlot* self=(Luna< proland::GPUTileStorage::GPUSlot >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Texture2DArray > proland::GPUTileStorage::GPUSlot::t(). Got : '%s'\n%s",typeid(Luna< proland::GPUTileStorage::GPUSlot >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Texture2DArray > lret = self->t;
		Luna< ork::Texture2DArray >::push(L,lret.get(),false);

		return 1;
	}

	// const int proland::GPUTileStorage::GPUSlot::l()
	static int _bind_getL(lua_State *L) {
		if (!_lg_typecheck_getL(L)) {
			luaL_error(L, "luna typecheck failed in const int proland::GPUTileStorage::GPUSlot::l() function, expected prototype:\nconst int proland::GPUTileStorage::GPUSlot::l()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::GPUTileStorage::GPUSlot* self=(Luna< proland::GPUTileStorage::GPUSlot >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const int proland::GPUTileStorage::GPUSlot::l(). Got : '%s'\n%s",typeid(Luna< proland::GPUTileStorage::GPUSlot >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const int lret = self->l;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void proland::GPUTileStorage::GPUSlot::t(ork::ptr< ork::Texture2DArray > value)
	static int _bind_setT(lua_State *L) {
		if (!_lg_typecheck_setT(L)) {
			luaL_error(L, "luna typecheck failed in void proland::GPUTileStorage::GPUSlot::t(ork::ptr< ork::Texture2DArray > value) function, expected prototype:\nvoid proland::GPUTileStorage::GPUSlot::t(ork::ptr< ork::Texture2DArray > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Texture2DArray > value = Luna< ork::Object >::checkSubType< ork::Texture2DArray >(L,2);

		proland::GPUTileStorage::GPUSlot* self=(Luna< proland::GPUTileStorage::GPUSlot >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::GPUTileStorage::GPUSlot::t(ork::ptr< ork::Texture2DArray >). Got : '%s'\n%s",typeid(Luna< proland::GPUTileStorage::GPUSlot >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->t = value;

		return 0;
	}

	// void proland::GPUTileStorage::GPUSlot::base_copyPixels(ork::ptr< ork::FrameBuffer > fb, int x, int y, int w, int h)
	static int _bind_base_copyPixels(lua_State *L) {
		if (!_lg_typecheck_base_copyPixels(L)) {
			luaL_error(L, "luna typecheck failed in void proland::GPUTileStorage::GPUSlot::base_copyPixels(ork::ptr< ork::FrameBuffer > fb, int x, int y, int w, int h) function, expected prototype:\nvoid proland::GPUTileStorage::GPUSlot::base_copyPixels(ork::ptr< ork::FrameBuffer > fb, int x, int y, int w, int h)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::FrameBuffer > fb = Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,2);
		int x=(int)lua_tointeger(L,3);
		int y=(int)lua_tointeger(L,4);
		int w=(int)lua_tointeger(L,5);
		int h=(int)lua_tointeger(L,6);

		proland::GPUTileStorage::GPUSlot* self=(Luna< proland::GPUTileStorage::GPUSlot >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::GPUTileStorage::GPUSlot::base_copyPixels(ork::ptr< ork::FrameBuffer >, int, int, int, int). Got : '%s'\n%s",typeid(Luna< proland::GPUTileStorage::GPUSlot >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GPUSlot::copyPixels(fb, x, y, w, h);

		return 0;
	}

	// void proland::GPUTileStorage::GPUSlot::base_setSubImage(int x, int y, int w, int h, ork::TextureFormat f, ork::PixelType t, const ork::Buffer::Parameters & s, const ork::Buffer & pixels)
	static int _bind_base_setSubImage(lua_State *L) {
		if (!_lg_typecheck_base_setSubImage(L)) {
			luaL_error(L, "luna typecheck failed in void proland::GPUTileStorage::GPUSlot::base_setSubImage(int x, int y, int w, int h, ork::TextureFormat f, ork::PixelType t, const ork::Buffer::Parameters & s, const ork::Buffer & pixels) function, expected prototype:\nvoid proland::GPUTileStorage::GPUSlot::base_setSubImage(int x, int y, int w, int h, ork::TextureFormat f, ork::PixelType t, const ork::Buffer::Parameters & s, const ork::Buffer & pixels)\nClass arguments details:\narg 7 ID = 85004853\narg 8 ID = 1381405\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		int w=(int)lua_tointeger(L,4);
		int h=(int)lua_tointeger(L,5);
		ork::TextureFormat f=(ork::TextureFormat)lua_tointeger(L,6);
		ork::PixelType t=(ork::PixelType)lua_tointeger(L,7);
		const ork::Buffer::Parameters* s_ptr=(Luna< ork::Buffer::Parameters >::check(L,8));
		if( !s_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg s in proland::GPUTileStorage::GPUSlot::base_setSubImage function");
		}
		const ork::Buffer::Parameters & s=*s_ptr;
		const ork::Buffer* pixels_ptr=(Luna< ork::Object >::checkSubType< ork::Buffer >(L,9));
		if( !pixels_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pixels in proland::GPUTileStorage::GPUSlot::base_setSubImage function");
		}
		const ork::Buffer & pixels=*pixels_ptr;

		proland::GPUTileStorage::GPUSlot* self=(Luna< proland::GPUTileStorage::GPUSlot >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::GPUTileStorage::GPUSlot::base_setSubImage(int, int, int, int, ork::TextureFormat, ork::PixelType, const ork::Buffer::Parameters &, const ork::Buffer &). Got : '%s'\n%s",typeid(Luna< proland::GPUTileStorage::GPUSlot >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GPUSlot::setSubImage(x, y, w, h, f, t, s, pixels);

		return 0;
	}


	// Operator binds:

};

proland::GPUTileStorage::GPUSlot* LunaTraits< proland::GPUTileStorage::GPUSlot >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_GPUTileStorage_GPUSlot::_bind_ctor(L);
}

void LunaTraits< proland::GPUTileStorage::GPUSlot >::_bind_dtor(proland::GPUTileStorage::GPUSlot* obj) {
	delete obj;
}

const char LunaTraits< proland::GPUTileStorage::GPUSlot >::className[] = "GPUTileStorage_GPUSlot";
const char LunaTraits< proland::GPUTileStorage::GPUSlot >::fullName[] = "proland::GPUTileStorage::GPUSlot";
const char LunaTraits< proland::GPUTileStorage::GPUSlot >::moduleName[] = "proland";
const char* LunaTraits< proland::GPUTileStorage::GPUSlot >::parents[] = {0};
const int LunaTraits< proland::GPUTileStorage::GPUSlot >::hash = 71475540;
const int LunaTraits< proland::GPUTileStorage::GPUSlot >::uniqueIDs[] = {71475540,0};

luna_RegType LunaTraits< proland::GPUTileStorage::GPUSlot >::methods[] = {
	{"getIndex", &luna_wrapper_proland_GPUTileStorage_GPUSlot::_bind_getIndex},
	{"getWidth", &luna_wrapper_proland_GPUTileStorage_GPUSlot::_bind_getWidth},
	{"getHeight", &luna_wrapper_proland_GPUTileStorage_GPUSlot::_bind_getHeight},
	{"copyPixels", &luna_wrapper_proland_GPUTileStorage_GPUSlot::_bind_copyPixels},
	{"setSubImage", &luna_wrapper_proland_GPUTileStorage_GPUSlot::_bind_setSubImage},
	{"getT", &luna_wrapper_proland_GPUTileStorage_GPUSlot::_bind_getT},
	{"getL", &luna_wrapper_proland_GPUTileStorage_GPUSlot::_bind_getL},
	{"setT", &luna_wrapper_proland_GPUTileStorage_GPUSlot::_bind_setT},
	{"base_copyPixels", &luna_wrapper_proland_GPUTileStorage_GPUSlot::_bind_base_copyPixels},
	{"base_setSubImage", &luna_wrapper_proland_GPUTileStorage_GPUSlot::_bind_base_setSubImage},
	{"dynCast", &luna_wrapper_proland_GPUTileStorage_GPUSlot::_bind_dynCast},
	{"__eq", &luna_wrapper_proland_GPUTileStorage_GPUSlot::_bind___eq},
	{"fromVoid", &luna_wrapper_proland_GPUTileStorage_GPUSlot::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_GPUTileStorage_GPUSlot::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_GPUTileStorage_GPUSlot::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::GPUTileStorage::GPUSlot >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< proland::GPUTileStorage::GPUSlot >::enumValues[] = {
	{0,0}
};



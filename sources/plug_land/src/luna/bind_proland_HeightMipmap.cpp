#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_HeightMipmap.h>

class luna_wrapper_proland_HeightMipmap {
public:
	typedef Luna< proland::HeightMipmap > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		proland::AbstractTileCache* self=(Luna< proland::AbstractTileCache >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<proland::AbstractTileCache,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
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

		proland::HeightMipmap* self= (proland::HeightMipmap*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::HeightMipmap >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,98663171) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< proland::AbstractTileCache >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_AbstractTileCache(lua_State *L) {
		// all checked are already performed before reaching this point.
		//proland::HeightMipmap* ptr= dynamic_cast< proland::HeightMipmap* >(Luna< proland::AbstractTileCache >::check(L,1));
		proland::HeightMipmap* ptr= luna_caster< proland::AbstractTileCache, proland::HeightMipmap >::cast(Luna< proland::AbstractTileCache >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::HeightMipmap >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,3347220)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< proland::HeightMipmap::HeightFunction >::check(L,1)) ) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( lua_type(L,6)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3347220)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< proland::HeightMipmap::HeightFunction >::check(L,2)) ) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( lua_type(L,6)!=LUA_TNUMBER ) return false;
		if( lua_type(L,7)!=LUA_TSTRING ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_compute1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_compute2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_generate(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( lua_type(L,6)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTileHeight(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_reset(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCube(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,98663171)) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,98663171)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,98663171)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,98663171)) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,98663171)) ) return false;
		if( (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,98663171)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getLeft(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getBottom(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTop(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLeftr(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRightr(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getBottomr(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTopr(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setLeft(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,98663171)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,98663171)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setBottom(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,98663171)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTop(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,98663171)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLeftr(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRightr(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setBottomr(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTopr(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getTileColor(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getTileHeight(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_reset(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::HeightMipmap::HeightMipmap(proland::HeightMipmap::HeightFunction * height, int topLevelSize, int baseLevelSize, int tileSize, float scale, const string & cache)
	static proland::HeightMipmap* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::HeightMipmap::HeightMipmap(proland::HeightMipmap::HeightFunction * height, int topLevelSize, int baseLevelSize, int tileSize, float scale, const string & cache) function, expected prototype:\nproland::HeightMipmap::HeightMipmap(proland::HeightMipmap::HeightFunction * height, int topLevelSize, int baseLevelSize, int tileSize, float scale, const string & cache)\nClass arguments details:\narg 1 ID = 3347220\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::HeightMipmap::HeightFunction* height=(Luna< proland::HeightMipmap::HeightFunction >::check(L,1));
		int topLevelSize=(int)lua_tointeger(L,2);
		int baseLevelSize=(int)lua_tointeger(L,3);
		int tileSize=(int)lua_tointeger(L,4);
		float scale=(float)lua_tonumber(L,5);
		std::string cache(lua_tostring(L,6),lua_objlen(L,6));

		return new proland::HeightMipmap(height, topLevelSize, baseLevelSize, tileSize, scale, cache);
	}

	// proland::HeightMipmap::HeightMipmap(lua_Table * data, proland::HeightMipmap::HeightFunction * height, int topLevelSize, int baseLevelSize, int tileSize, float scale, const string & cache)
	static proland::HeightMipmap* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::HeightMipmap::HeightMipmap(lua_Table * data, proland::HeightMipmap::HeightFunction * height, int topLevelSize, int baseLevelSize, int tileSize, float scale, const string & cache) function, expected prototype:\nproland::HeightMipmap::HeightMipmap(lua_Table * data, proland::HeightMipmap::HeightFunction * height, int topLevelSize, int baseLevelSize, int tileSize, float scale, const string & cache)\nClass arguments details:\narg 2 ID = 3347220\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::HeightMipmap::HeightFunction* height=(Luna< proland::HeightMipmap::HeightFunction >::check(L,2));
		int topLevelSize=(int)lua_tointeger(L,3);
		int baseLevelSize=(int)lua_tointeger(L,4);
		int tileSize=(int)lua_tointeger(L,5);
		float scale=(float)lua_tonumber(L,6);
		std::string cache(lua_tostring(L,7),lua_objlen(L,7));

		return new wrapper_proland_HeightMipmap(L,NULL, height, topLevelSize, baseLevelSize, tileSize, scale, cache);
	}

	// Overload binder for proland::HeightMipmap::HeightMipmap
	static proland::HeightMipmap* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function HeightMipmap, cannot match any of the overloads for function HeightMipmap:\n  HeightMipmap(proland::HeightMipmap::HeightFunction *, int, int, int, float, const string &)\n  HeightMipmap(lua_Table *, proland::HeightMipmap::HeightFunction *, int, int, int, float, const string &)\n");
		return NULL;
	}


	// Function binds:
	// void proland::HeightMipmap::compute1()
	static int _bind_compute1(lua_State *L) {
		if (!_lg_typecheck_compute1(L)) {
			luaL_error(L, "luna typecheck failed in void proland::HeightMipmap::compute1() function, expected prototype:\nvoid proland::HeightMipmap::compute1()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::HeightMipmap* self=Luna< proland::AbstractTileCache >::checkSubType< proland::HeightMipmap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::HeightMipmap::compute1(). Got : '%s'\n%s",typeid(Luna< proland::AbstractTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->compute1();

		return 0;
	}

	// bool proland::HeightMipmap::compute2()
	static int _bind_compute2(lua_State *L) {
		if (!_lg_typecheck_compute2(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::HeightMipmap::compute2() function, expected prototype:\nbool proland::HeightMipmap::compute2()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::HeightMipmap* self=Luna< proland::AbstractTileCache >::checkSubType< proland::HeightMipmap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::HeightMipmap::compute2(). Got : '%s'\n%s",typeid(Luna< proland::AbstractTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->compute2();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void proland::HeightMipmap::generate(int rootLevel, int rootTx, int rootTy, float scale, const string & file)
	static int _bind_generate(lua_State *L) {
		if (!_lg_typecheck_generate(L)) {
			luaL_error(L, "luna typecheck failed in void proland::HeightMipmap::generate(int rootLevel, int rootTx, int rootTy, float scale, const string & file) function, expected prototype:\nvoid proland::HeightMipmap::generate(int rootLevel, int rootTx, int rootTy, float scale, const string & file)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int rootLevel=(int)lua_tointeger(L,2);
		int rootTx=(int)lua_tointeger(L,3);
		int rootTy=(int)lua_tointeger(L,4);
		float scale=(float)lua_tonumber(L,5);
		std::string file(lua_tostring(L,6),lua_objlen(L,6));

		proland::HeightMipmap* self=Luna< proland::AbstractTileCache >::checkSubType< proland::HeightMipmap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::HeightMipmap::generate(int, int, int, float, const string &). Got : '%s'\n%s",typeid(Luna< proland::AbstractTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->generate(rootLevel, rootTx, rootTy, scale, file);

		return 0;
	}

	// float proland::HeightMipmap::getTileHeight(int x, int y)
	static int _bind_getTileHeight(lua_State *L) {
		if (!_lg_typecheck_getTileHeight(L)) {
			luaL_error(L, "luna typecheck failed in float proland::HeightMipmap::getTileHeight(int x, int y) function, expected prototype:\nfloat proland::HeightMipmap::getTileHeight(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		proland::HeightMipmap* self=Luna< proland::AbstractTileCache >::checkSubType< proland::HeightMipmap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::HeightMipmap::getTileHeight(int, int). Got : '%s'\n%s",typeid(Luna< proland::AbstractTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getTileHeight(x, y);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void proland::HeightMipmap::reset(int width, int height, int tileSize)
	static int _bind_reset(lua_State *L) {
		if (!_lg_typecheck_reset(L)) {
			luaL_error(L, "luna typecheck failed in void proland::HeightMipmap::reset(int width, int height, int tileSize) function, expected prototype:\nvoid proland::HeightMipmap::reset(int width, int height, int tileSize)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int width=(int)lua_tointeger(L,2);
		int height=(int)lua_tointeger(L,3);
		int tileSize=(int)lua_tointeger(L,4);

		proland::HeightMipmap* self=Luna< proland::AbstractTileCache >::checkSubType< proland::HeightMipmap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::HeightMipmap::reset(int, int, int). Got : '%s'\n%s",typeid(Luna< proland::AbstractTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->reset(width, height, tileSize);

		return 0;
	}

	// static void proland::HeightMipmap::setCube(proland::HeightMipmap * hm1, proland::HeightMipmap * hm2, proland::HeightMipmap * hm3, proland::HeightMipmap * hm4, proland::HeightMipmap * hm5, proland::HeightMipmap * hm6)
	static int _bind_setCube(lua_State *L) {
		if (!_lg_typecheck_setCube(L)) {
			luaL_error(L, "luna typecheck failed in static void proland::HeightMipmap::setCube(proland::HeightMipmap * hm1, proland::HeightMipmap * hm2, proland::HeightMipmap * hm3, proland::HeightMipmap * hm4, proland::HeightMipmap * hm5, proland::HeightMipmap * hm6) function, expected prototype:\nstatic void proland::HeightMipmap::setCube(proland::HeightMipmap * hm1, proland::HeightMipmap * hm2, proland::HeightMipmap * hm3, proland::HeightMipmap * hm4, proland::HeightMipmap * hm5, proland::HeightMipmap * hm6)\nClass arguments details:\narg 1 ID = 98663171\narg 2 ID = 98663171\narg 3 ID = 98663171\narg 4 ID = 98663171\narg 5 ID = 98663171\narg 6 ID = 98663171\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::HeightMipmap* hm1=(Luna< proland::AbstractTileCache >::checkSubType< proland::HeightMipmap >(L,1));
		proland::HeightMipmap* hm2=(Luna< proland::AbstractTileCache >::checkSubType< proland::HeightMipmap >(L,2));
		proland::HeightMipmap* hm3=(Luna< proland::AbstractTileCache >::checkSubType< proland::HeightMipmap >(L,3));
		proland::HeightMipmap* hm4=(Luna< proland::AbstractTileCache >::checkSubType< proland::HeightMipmap >(L,4));
		proland::HeightMipmap* hm5=(Luna< proland::AbstractTileCache >::checkSubType< proland::HeightMipmap >(L,5));
		proland::HeightMipmap* hm6=(Luna< proland::AbstractTileCache >::checkSubType< proland::HeightMipmap >(L,6));

		proland::HeightMipmap::setCube(hm1, hm2, hm3, hm4, hm5, hm6);

		return 0;
	}

	// proland::HeightMipmap * proland::HeightMipmap::left()
	static int _bind_getLeft(lua_State *L) {
		if (!_lg_typecheck_getLeft(L)) {
			luaL_error(L, "luna typecheck failed in proland::HeightMipmap * proland::HeightMipmap::left() function, expected prototype:\nproland::HeightMipmap * proland::HeightMipmap::left()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::HeightMipmap* self=Luna< proland::AbstractTileCache >::checkSubType< proland::HeightMipmap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::HeightMipmap * proland::HeightMipmap::left(). Got : '%s'\n%s",typeid(Luna< proland::AbstractTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::HeightMipmap * lret = self->left;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::HeightMipmap >::push(L,lret,false);

		return 1;
	}

	// proland::HeightMipmap * proland::HeightMipmap::right()
	static int _bind_getRight(lua_State *L) {
		if (!_lg_typecheck_getRight(L)) {
			luaL_error(L, "luna typecheck failed in proland::HeightMipmap * proland::HeightMipmap::right() function, expected prototype:\nproland::HeightMipmap * proland::HeightMipmap::right()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::HeightMipmap* self=Luna< proland::AbstractTileCache >::checkSubType< proland::HeightMipmap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::HeightMipmap * proland::HeightMipmap::right(). Got : '%s'\n%s",typeid(Luna< proland::AbstractTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::HeightMipmap * lret = self->right;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::HeightMipmap >::push(L,lret,false);

		return 1;
	}

	// proland::HeightMipmap * proland::HeightMipmap::bottom()
	static int _bind_getBottom(lua_State *L) {
		if (!_lg_typecheck_getBottom(L)) {
			luaL_error(L, "luna typecheck failed in proland::HeightMipmap * proland::HeightMipmap::bottom() function, expected prototype:\nproland::HeightMipmap * proland::HeightMipmap::bottom()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::HeightMipmap* self=Luna< proland::AbstractTileCache >::checkSubType< proland::HeightMipmap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::HeightMipmap * proland::HeightMipmap::bottom(). Got : '%s'\n%s",typeid(Luna< proland::AbstractTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::HeightMipmap * lret = self->bottom;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::HeightMipmap >::push(L,lret,false);

		return 1;
	}

	// proland::HeightMipmap * proland::HeightMipmap::top()
	static int _bind_getTop(lua_State *L) {
		if (!_lg_typecheck_getTop(L)) {
			luaL_error(L, "luna typecheck failed in proland::HeightMipmap * proland::HeightMipmap::top() function, expected prototype:\nproland::HeightMipmap * proland::HeightMipmap::top()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::HeightMipmap* self=Luna< proland::AbstractTileCache >::checkSubType< proland::HeightMipmap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::HeightMipmap * proland::HeightMipmap::top(). Got : '%s'\n%s",typeid(Luna< proland::AbstractTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::HeightMipmap * lret = self->top;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::HeightMipmap >::push(L,lret,false);

		return 1;
	}

	// int proland::HeightMipmap::leftr()
	static int _bind_getLeftr(lua_State *L) {
		if (!_lg_typecheck_getLeftr(L)) {
			luaL_error(L, "luna typecheck failed in int proland::HeightMipmap::leftr() function, expected prototype:\nint proland::HeightMipmap::leftr()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::HeightMipmap* self=Luna< proland::AbstractTileCache >::checkSubType< proland::HeightMipmap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::HeightMipmap::leftr(). Got : '%s'\n%s",typeid(Luna< proland::AbstractTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->leftr;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int proland::HeightMipmap::rightr()
	static int _bind_getRightr(lua_State *L) {
		if (!_lg_typecheck_getRightr(L)) {
			luaL_error(L, "luna typecheck failed in int proland::HeightMipmap::rightr() function, expected prototype:\nint proland::HeightMipmap::rightr()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::HeightMipmap* self=Luna< proland::AbstractTileCache >::checkSubType< proland::HeightMipmap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::HeightMipmap::rightr(). Got : '%s'\n%s",typeid(Luna< proland::AbstractTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->rightr;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int proland::HeightMipmap::bottomr()
	static int _bind_getBottomr(lua_State *L) {
		if (!_lg_typecheck_getBottomr(L)) {
			luaL_error(L, "luna typecheck failed in int proland::HeightMipmap::bottomr() function, expected prototype:\nint proland::HeightMipmap::bottomr()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::HeightMipmap* self=Luna< proland::AbstractTileCache >::checkSubType< proland::HeightMipmap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::HeightMipmap::bottomr(). Got : '%s'\n%s",typeid(Luna< proland::AbstractTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->bottomr;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int proland::HeightMipmap::topr()
	static int _bind_getTopr(lua_State *L) {
		if (!_lg_typecheck_getTopr(L)) {
			luaL_error(L, "luna typecheck failed in int proland::HeightMipmap::topr() function, expected prototype:\nint proland::HeightMipmap::topr()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::HeightMipmap* self=Luna< proland::AbstractTileCache >::checkSubType< proland::HeightMipmap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::HeightMipmap::topr(). Got : '%s'\n%s",typeid(Luna< proland::AbstractTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->topr;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void proland::HeightMipmap::left(proland::HeightMipmap * value)
	static int _bind_setLeft(lua_State *L) {
		if (!_lg_typecheck_setLeft(L)) {
			luaL_error(L, "luna typecheck failed in void proland::HeightMipmap::left(proland::HeightMipmap * value) function, expected prototype:\nvoid proland::HeightMipmap::left(proland::HeightMipmap * value)\nClass arguments details:\narg 1 ID = 98663171\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::HeightMipmap* value=(Luna< proland::AbstractTileCache >::checkSubType< proland::HeightMipmap >(L,2));

		proland::HeightMipmap* self=Luna< proland::AbstractTileCache >::checkSubType< proland::HeightMipmap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::HeightMipmap::left(proland::HeightMipmap *). Got : '%s'\n%s",typeid(Luna< proland::AbstractTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->left = value;

		return 0;
	}

	// void proland::HeightMipmap::right(proland::HeightMipmap * value)
	static int _bind_setRight(lua_State *L) {
		if (!_lg_typecheck_setRight(L)) {
			luaL_error(L, "luna typecheck failed in void proland::HeightMipmap::right(proland::HeightMipmap * value) function, expected prototype:\nvoid proland::HeightMipmap::right(proland::HeightMipmap * value)\nClass arguments details:\narg 1 ID = 98663171\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::HeightMipmap* value=(Luna< proland::AbstractTileCache >::checkSubType< proland::HeightMipmap >(L,2));

		proland::HeightMipmap* self=Luna< proland::AbstractTileCache >::checkSubType< proland::HeightMipmap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::HeightMipmap::right(proland::HeightMipmap *). Got : '%s'\n%s",typeid(Luna< proland::AbstractTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->right = value;

		return 0;
	}

	// void proland::HeightMipmap::bottom(proland::HeightMipmap * value)
	static int _bind_setBottom(lua_State *L) {
		if (!_lg_typecheck_setBottom(L)) {
			luaL_error(L, "luna typecheck failed in void proland::HeightMipmap::bottom(proland::HeightMipmap * value) function, expected prototype:\nvoid proland::HeightMipmap::bottom(proland::HeightMipmap * value)\nClass arguments details:\narg 1 ID = 98663171\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::HeightMipmap* value=(Luna< proland::AbstractTileCache >::checkSubType< proland::HeightMipmap >(L,2));

		proland::HeightMipmap* self=Luna< proland::AbstractTileCache >::checkSubType< proland::HeightMipmap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::HeightMipmap::bottom(proland::HeightMipmap *). Got : '%s'\n%s",typeid(Luna< proland::AbstractTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->bottom = value;

		return 0;
	}

	// void proland::HeightMipmap::top(proland::HeightMipmap * value)
	static int _bind_setTop(lua_State *L) {
		if (!_lg_typecheck_setTop(L)) {
			luaL_error(L, "luna typecheck failed in void proland::HeightMipmap::top(proland::HeightMipmap * value) function, expected prototype:\nvoid proland::HeightMipmap::top(proland::HeightMipmap * value)\nClass arguments details:\narg 1 ID = 98663171\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::HeightMipmap* value=(Luna< proland::AbstractTileCache >::checkSubType< proland::HeightMipmap >(L,2));

		proland::HeightMipmap* self=Luna< proland::AbstractTileCache >::checkSubType< proland::HeightMipmap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::HeightMipmap::top(proland::HeightMipmap *). Got : '%s'\n%s",typeid(Luna< proland::AbstractTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->top = value;

		return 0;
	}

	// void proland::HeightMipmap::leftr(int value)
	static int _bind_setLeftr(lua_State *L) {
		if (!_lg_typecheck_setLeftr(L)) {
			luaL_error(L, "luna typecheck failed in void proland::HeightMipmap::leftr(int value) function, expected prototype:\nvoid proland::HeightMipmap::leftr(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		proland::HeightMipmap* self=Luna< proland::AbstractTileCache >::checkSubType< proland::HeightMipmap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::HeightMipmap::leftr(int). Got : '%s'\n%s",typeid(Luna< proland::AbstractTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->leftr = value;

		return 0;
	}

	// void proland::HeightMipmap::rightr(int value)
	static int _bind_setRightr(lua_State *L) {
		if (!_lg_typecheck_setRightr(L)) {
			luaL_error(L, "luna typecheck failed in void proland::HeightMipmap::rightr(int value) function, expected prototype:\nvoid proland::HeightMipmap::rightr(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		proland::HeightMipmap* self=Luna< proland::AbstractTileCache >::checkSubType< proland::HeightMipmap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::HeightMipmap::rightr(int). Got : '%s'\n%s",typeid(Luna< proland::AbstractTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->rightr = value;

		return 0;
	}

	// void proland::HeightMipmap::bottomr(int value)
	static int _bind_setBottomr(lua_State *L) {
		if (!_lg_typecheck_setBottomr(L)) {
			luaL_error(L, "luna typecheck failed in void proland::HeightMipmap::bottomr(int value) function, expected prototype:\nvoid proland::HeightMipmap::bottomr(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		proland::HeightMipmap* self=Luna< proland::AbstractTileCache >::checkSubType< proland::HeightMipmap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::HeightMipmap::bottomr(int). Got : '%s'\n%s",typeid(Luna< proland::AbstractTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->bottomr = value;

		return 0;
	}

	// void proland::HeightMipmap::topr(int value)
	static int _bind_setTopr(lua_State *L) {
		if (!_lg_typecheck_setTopr(L)) {
			luaL_error(L, "luna typecheck failed in void proland::HeightMipmap::topr(int value) function, expected prototype:\nvoid proland::HeightMipmap::topr(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		proland::HeightMipmap* self=Luna< proland::AbstractTileCache >::checkSubType< proland::HeightMipmap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::HeightMipmap::topr(int). Got : '%s'\n%s",typeid(Luna< proland::AbstractTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->topr = value;

		return 0;
	}

	// ork::vec4f proland::HeightMipmap::base_getTileColor(int x, int y)
	static int _bind_base_getTileColor(lua_State *L) {
		if (!_lg_typecheck_base_getTileColor(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec4f proland::HeightMipmap::base_getTileColor(int x, int y) function, expected prototype:\nork::vec4f proland::HeightMipmap::base_getTileColor(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		proland::HeightMipmap* self=Luna< proland::AbstractTileCache >::checkSubType< proland::HeightMipmap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec4f proland::HeightMipmap::base_getTileColor(int, int). Got : '%s'\n%s",typeid(Luna< proland::AbstractTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec4f stack_lret = self->HeightMipmap::getTileColor(x, y);
		ork::vec4f* lret = new ork::vec4f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec4f >::push(L,lret,true);

		return 1;
	}

	// float proland::HeightMipmap::base_getTileHeight(int x, int y)
	static int _bind_base_getTileHeight(lua_State *L) {
		if (!_lg_typecheck_base_getTileHeight(L)) {
			luaL_error(L, "luna typecheck failed in float proland::HeightMipmap::base_getTileHeight(int x, int y) function, expected prototype:\nfloat proland::HeightMipmap::base_getTileHeight(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		proland::HeightMipmap* self=Luna< proland::AbstractTileCache >::checkSubType< proland::HeightMipmap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::HeightMipmap::base_getTileHeight(int, int). Got : '%s'\n%s",typeid(Luna< proland::AbstractTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->HeightMipmap::getTileHeight(x, y);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void proland::HeightMipmap::base_reset(int width, int height, int tileSize)
	static int _bind_base_reset(lua_State *L) {
		if (!_lg_typecheck_base_reset(L)) {
			luaL_error(L, "luna typecheck failed in void proland::HeightMipmap::base_reset(int width, int height, int tileSize) function, expected prototype:\nvoid proland::HeightMipmap::base_reset(int width, int height, int tileSize)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int width=(int)lua_tointeger(L,2);
		int height=(int)lua_tointeger(L,3);
		int tileSize=(int)lua_tointeger(L,4);

		proland::HeightMipmap* self=Luna< proland::AbstractTileCache >::checkSubType< proland::HeightMipmap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::HeightMipmap::base_reset(int, int, int). Got : '%s'\n%s",typeid(Luna< proland::AbstractTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->HeightMipmap::reset(width, height, tileSize);

		return 0;
	}


	// Operator binds:

};

proland::HeightMipmap* LunaTraits< proland::HeightMipmap >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_HeightMipmap::_bind_ctor(L);
}

void LunaTraits< proland::HeightMipmap >::_bind_dtor(proland::HeightMipmap* obj) {
	delete obj;
}

const char LunaTraits< proland::HeightMipmap >::className[] = "HeightMipmap";
const char LunaTraits< proland::HeightMipmap >::fullName[] = "proland::HeightMipmap";
const char LunaTraits< proland::HeightMipmap >::moduleName[] = "proland";
const char* LunaTraits< proland::HeightMipmap >::parents[] = {"proland.AbstractTileCache", 0};
const int LunaTraits< proland::HeightMipmap >::hash = 75271620;
const int LunaTraits< proland::HeightMipmap >::uniqueIDs[] = {98663171,0};

luna_RegType LunaTraits< proland::HeightMipmap >::methods[] = {
	{"compute1", &luna_wrapper_proland_HeightMipmap::_bind_compute1},
	{"compute2", &luna_wrapper_proland_HeightMipmap::_bind_compute2},
	{"generate", &luna_wrapper_proland_HeightMipmap::_bind_generate},
	{"getTileHeight", &luna_wrapper_proland_HeightMipmap::_bind_getTileHeight},
	{"reset", &luna_wrapper_proland_HeightMipmap::_bind_reset},
	{"setCube", &luna_wrapper_proland_HeightMipmap::_bind_setCube},
	{"getLeft", &luna_wrapper_proland_HeightMipmap::_bind_getLeft},
	{"getRight", &luna_wrapper_proland_HeightMipmap::_bind_getRight},
	{"getBottom", &luna_wrapper_proland_HeightMipmap::_bind_getBottom},
	{"getTop", &luna_wrapper_proland_HeightMipmap::_bind_getTop},
	{"getLeftr", &luna_wrapper_proland_HeightMipmap::_bind_getLeftr},
	{"getRightr", &luna_wrapper_proland_HeightMipmap::_bind_getRightr},
	{"getBottomr", &luna_wrapper_proland_HeightMipmap::_bind_getBottomr},
	{"getTopr", &luna_wrapper_proland_HeightMipmap::_bind_getTopr},
	{"setLeft", &luna_wrapper_proland_HeightMipmap::_bind_setLeft},
	{"setRight", &luna_wrapper_proland_HeightMipmap::_bind_setRight},
	{"setBottom", &luna_wrapper_proland_HeightMipmap::_bind_setBottom},
	{"setTop", &luna_wrapper_proland_HeightMipmap::_bind_setTop},
	{"setLeftr", &luna_wrapper_proland_HeightMipmap::_bind_setLeftr},
	{"setRightr", &luna_wrapper_proland_HeightMipmap::_bind_setRightr},
	{"setBottomr", &luna_wrapper_proland_HeightMipmap::_bind_setBottomr},
	{"setTopr", &luna_wrapper_proland_HeightMipmap::_bind_setTopr},
	{"base_getTileColor", &luna_wrapper_proland_HeightMipmap::_bind_base_getTileColor},
	{"base_getTileHeight", &luna_wrapper_proland_HeightMipmap::_bind_base_getTileHeight},
	{"base_reset", &luna_wrapper_proland_HeightMipmap::_bind_base_reset},
	{"fromVoid", &luna_wrapper_proland_HeightMipmap::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_HeightMipmap::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_HeightMipmap::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::HeightMipmap >::converters[] = {
	{"proland::AbstractTileCache", &luna_wrapper_proland_HeightMipmap::_cast_from_AbstractTileCache},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::HeightMipmap >::enumValues[] = {
	{0,0}
};



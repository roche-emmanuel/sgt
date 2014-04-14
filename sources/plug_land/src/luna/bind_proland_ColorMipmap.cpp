#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_ColorMipmap.h>

class luna_wrapper_proland_ColorMipmap {
public:
	typedef Luna< proland::ColorMipmap > luna_t;

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

		proland::ColorMipmap* self= (proland::ColorMipmap*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::ColorMipmap >::push(L,self,false);
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
		//proland::ColorMipmap* ptr= dynamic_cast< proland::ColorMipmap* >(Luna< proland::AbstractTileCache >::check(L,1));
		proland::ColorMipmap* ptr= luna_caster< proland::AbstractTileCache, proland::ColorMipmap >::cast(Luna< proland::AbstractTileCache >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::ColorMipmap >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_compute(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_computeMipmap(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_generate(lua_State *L) {
		if( lua_gettop(L)!=8 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( lua_isboolean(L,5)==0 ) return false;
		if( lua_isboolean(L,6)==0 ) return false;
		if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( lua_type(L,8)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_generateResiduals(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		if( lua_type(L,5)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_reorderResiduals(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
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

	inline static bool _lg_typecheck_base_getTileHeight(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getTileColor(lua_State *L) {
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

	// Function binds:
	// void proland::ColorMipmap::compute()
	static int _bind_compute(lua_State *L) {
		if (!_lg_typecheck_compute(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ColorMipmap::compute() function, expected prototype:\nvoid proland::ColorMipmap::compute()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::ColorMipmap* self=Luna< proland::AbstractTileCache >::checkSubType< proland::ColorMipmap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ColorMipmap::compute(). Got : '%s'\n%s",typeid(Luna< proland::AbstractTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->compute();

		return 0;
	}

	// void proland::ColorMipmap::computeMipmap()
	static int _bind_computeMipmap(lua_State *L) {
		if (!_lg_typecheck_computeMipmap(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ColorMipmap::computeMipmap() function, expected prototype:\nvoid proland::ColorMipmap::computeMipmap()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::ColorMipmap* self=Luna< proland::AbstractTileCache >::checkSubType< proland::ColorMipmap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ColorMipmap::computeMipmap(). Got : '%s'\n%s",typeid(Luna< proland::AbstractTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->computeMipmap();

		return 0;
	}

	// void proland::ColorMipmap::generate(int rootLevel, int rootTx, int rootTy, bool dxt, bool jpg, int jpg_quality, const string & file)
	static int _bind_generate(lua_State *L) {
		if (!_lg_typecheck_generate(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ColorMipmap::generate(int rootLevel, int rootTx, int rootTy, bool dxt, bool jpg, int jpg_quality, const string & file) function, expected prototype:\nvoid proland::ColorMipmap::generate(int rootLevel, int rootTx, int rootTy, bool dxt, bool jpg, int jpg_quality, const string & file)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int rootLevel=(int)lua_tointeger(L,2);
		int rootTx=(int)lua_tointeger(L,3);
		int rootTy=(int)lua_tointeger(L,4);
		bool dxt=(bool)(lua_toboolean(L,5)==1);
		bool jpg=(bool)(lua_toboolean(L,6)==1);
		int jpg_quality=(int)lua_tointeger(L,7);
		std::string file(lua_tostring(L,8),lua_objlen(L,8));

		proland::ColorMipmap* self=Luna< proland::AbstractTileCache >::checkSubType< proland::ColorMipmap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ColorMipmap::generate(int, int, int, bool, bool, int, const string &). Got : '%s'\n%s",typeid(Luna< proland::AbstractTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->generate(rootLevel, rootTx, rootTy, dxt, jpg, jpg_quality, file);

		return 0;
	}

	// void proland::ColorMipmap::generateResiduals(bool jpg, int jpg_quality, const string & in, const string & out)
	static int _bind_generateResiduals(lua_State *L) {
		if (!_lg_typecheck_generateResiduals(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ColorMipmap::generateResiduals(bool jpg, int jpg_quality, const string & in, const string & out) function, expected prototype:\nvoid proland::ColorMipmap::generateResiduals(bool jpg, int jpg_quality, const string & in, const string & out)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool jpg=(bool)(lua_toboolean(L,2)==1);
		int jpg_quality=(int)lua_tointeger(L,3);
		std::string in(lua_tostring(L,4),lua_objlen(L,4));
		std::string out(lua_tostring(L,5),lua_objlen(L,5));

		proland::ColorMipmap* self=Luna< proland::AbstractTileCache >::checkSubType< proland::ColorMipmap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ColorMipmap::generateResiduals(bool, int, const string &, const string &). Got : '%s'\n%s",typeid(Luna< proland::AbstractTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->generateResiduals(jpg, jpg_quality, in, out);

		return 0;
	}

	// void proland::ColorMipmap::reorderResiduals(const string & in, const string & out)
	static int _bind_reorderResiduals(lua_State *L) {
		if (!_lg_typecheck_reorderResiduals(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ColorMipmap::reorderResiduals(const string & in, const string & out) function, expected prototype:\nvoid proland::ColorMipmap::reorderResiduals(const string & in, const string & out)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string in(lua_tostring(L,2),lua_objlen(L,2));
		std::string out(lua_tostring(L,3),lua_objlen(L,3));

		proland::ColorMipmap* self=Luna< proland::AbstractTileCache >::checkSubType< proland::ColorMipmap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ColorMipmap::reorderResiduals(const string &, const string &). Got : '%s'\n%s",typeid(Luna< proland::AbstractTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->reorderResiduals(in, out);

		return 0;
	}

	// static void proland::ColorMipmap::setCube(proland::ColorMipmap * hm1, proland::ColorMipmap * hm2, proland::ColorMipmap * hm3, proland::ColorMipmap * hm4, proland::ColorMipmap * hm5, proland::ColorMipmap * hm6)
	static int _bind_setCube(lua_State *L) {
		if (!_lg_typecheck_setCube(L)) {
			luaL_error(L, "luna typecheck failed in static void proland::ColorMipmap::setCube(proland::ColorMipmap * hm1, proland::ColorMipmap * hm2, proland::ColorMipmap * hm3, proland::ColorMipmap * hm4, proland::ColorMipmap * hm5, proland::ColorMipmap * hm6) function, expected prototype:\nstatic void proland::ColorMipmap::setCube(proland::ColorMipmap * hm1, proland::ColorMipmap * hm2, proland::ColorMipmap * hm3, proland::ColorMipmap * hm4, proland::ColorMipmap * hm5, proland::ColorMipmap * hm6)\nClass arguments details:\narg 1 ID = 98663171\narg 2 ID = 98663171\narg 3 ID = 98663171\narg 4 ID = 98663171\narg 5 ID = 98663171\narg 6 ID = 98663171\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::ColorMipmap* hm1=(Luna< proland::AbstractTileCache >::checkSubType< proland::ColorMipmap >(L,1));
		proland::ColorMipmap* hm2=(Luna< proland::AbstractTileCache >::checkSubType< proland::ColorMipmap >(L,2));
		proland::ColorMipmap* hm3=(Luna< proland::AbstractTileCache >::checkSubType< proland::ColorMipmap >(L,3));
		proland::ColorMipmap* hm4=(Luna< proland::AbstractTileCache >::checkSubType< proland::ColorMipmap >(L,4));
		proland::ColorMipmap* hm5=(Luna< proland::AbstractTileCache >::checkSubType< proland::ColorMipmap >(L,5));
		proland::ColorMipmap* hm6=(Luna< proland::AbstractTileCache >::checkSubType< proland::ColorMipmap >(L,6));

		proland::ColorMipmap::setCube(hm1, hm2, hm3, hm4, hm5, hm6);

		return 0;
	}

	// proland::ColorMipmap * proland::ColorMipmap::left()
	static int _bind_getLeft(lua_State *L) {
		if (!_lg_typecheck_getLeft(L)) {
			luaL_error(L, "luna typecheck failed in proland::ColorMipmap * proland::ColorMipmap::left() function, expected prototype:\nproland::ColorMipmap * proland::ColorMipmap::left()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::ColorMipmap* self=Luna< proland::AbstractTileCache >::checkSubType< proland::ColorMipmap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::ColorMipmap * proland::ColorMipmap::left(). Got : '%s'\n%s",typeid(Luna< proland::AbstractTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::ColorMipmap * lret = self->left;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::ColorMipmap >::push(L,lret,false);

		return 1;
	}

	// proland::ColorMipmap * proland::ColorMipmap::right()
	static int _bind_getRight(lua_State *L) {
		if (!_lg_typecheck_getRight(L)) {
			luaL_error(L, "luna typecheck failed in proland::ColorMipmap * proland::ColorMipmap::right() function, expected prototype:\nproland::ColorMipmap * proland::ColorMipmap::right()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::ColorMipmap* self=Luna< proland::AbstractTileCache >::checkSubType< proland::ColorMipmap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::ColorMipmap * proland::ColorMipmap::right(). Got : '%s'\n%s",typeid(Luna< proland::AbstractTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::ColorMipmap * lret = self->right;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::ColorMipmap >::push(L,lret,false);

		return 1;
	}

	// proland::ColorMipmap * proland::ColorMipmap::bottom()
	static int _bind_getBottom(lua_State *L) {
		if (!_lg_typecheck_getBottom(L)) {
			luaL_error(L, "luna typecheck failed in proland::ColorMipmap * proland::ColorMipmap::bottom() function, expected prototype:\nproland::ColorMipmap * proland::ColorMipmap::bottom()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::ColorMipmap* self=Luna< proland::AbstractTileCache >::checkSubType< proland::ColorMipmap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::ColorMipmap * proland::ColorMipmap::bottom(). Got : '%s'\n%s",typeid(Luna< proland::AbstractTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::ColorMipmap * lret = self->bottom;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::ColorMipmap >::push(L,lret,false);

		return 1;
	}

	// proland::ColorMipmap * proland::ColorMipmap::top()
	static int _bind_getTop(lua_State *L) {
		if (!_lg_typecheck_getTop(L)) {
			luaL_error(L, "luna typecheck failed in proland::ColorMipmap * proland::ColorMipmap::top() function, expected prototype:\nproland::ColorMipmap * proland::ColorMipmap::top()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::ColorMipmap* self=Luna< proland::AbstractTileCache >::checkSubType< proland::ColorMipmap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::ColorMipmap * proland::ColorMipmap::top(). Got : '%s'\n%s",typeid(Luna< proland::AbstractTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::ColorMipmap * lret = self->top;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::ColorMipmap >::push(L,lret,false);

		return 1;
	}

	// int proland::ColorMipmap::leftr()
	static int _bind_getLeftr(lua_State *L) {
		if (!_lg_typecheck_getLeftr(L)) {
			luaL_error(L, "luna typecheck failed in int proland::ColorMipmap::leftr() function, expected prototype:\nint proland::ColorMipmap::leftr()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::ColorMipmap* self=Luna< proland::AbstractTileCache >::checkSubType< proland::ColorMipmap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::ColorMipmap::leftr(). Got : '%s'\n%s",typeid(Luna< proland::AbstractTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->leftr;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int proland::ColorMipmap::rightr()
	static int _bind_getRightr(lua_State *L) {
		if (!_lg_typecheck_getRightr(L)) {
			luaL_error(L, "luna typecheck failed in int proland::ColorMipmap::rightr() function, expected prototype:\nint proland::ColorMipmap::rightr()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::ColorMipmap* self=Luna< proland::AbstractTileCache >::checkSubType< proland::ColorMipmap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::ColorMipmap::rightr(). Got : '%s'\n%s",typeid(Luna< proland::AbstractTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->rightr;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int proland::ColorMipmap::bottomr()
	static int _bind_getBottomr(lua_State *L) {
		if (!_lg_typecheck_getBottomr(L)) {
			luaL_error(L, "luna typecheck failed in int proland::ColorMipmap::bottomr() function, expected prototype:\nint proland::ColorMipmap::bottomr()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::ColorMipmap* self=Luna< proland::AbstractTileCache >::checkSubType< proland::ColorMipmap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::ColorMipmap::bottomr(). Got : '%s'\n%s",typeid(Luna< proland::AbstractTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->bottomr;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int proland::ColorMipmap::topr()
	static int _bind_getTopr(lua_State *L) {
		if (!_lg_typecheck_getTopr(L)) {
			luaL_error(L, "luna typecheck failed in int proland::ColorMipmap::topr() function, expected prototype:\nint proland::ColorMipmap::topr()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::ColorMipmap* self=Luna< proland::AbstractTileCache >::checkSubType< proland::ColorMipmap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::ColorMipmap::topr(). Got : '%s'\n%s",typeid(Luna< proland::AbstractTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->topr;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void proland::ColorMipmap::left(proland::ColorMipmap * value)
	static int _bind_setLeft(lua_State *L) {
		if (!_lg_typecheck_setLeft(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ColorMipmap::left(proland::ColorMipmap * value) function, expected prototype:\nvoid proland::ColorMipmap::left(proland::ColorMipmap * value)\nClass arguments details:\narg 1 ID = 98663171\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::ColorMipmap* value=(Luna< proland::AbstractTileCache >::checkSubType< proland::ColorMipmap >(L,2));

		proland::ColorMipmap* self=Luna< proland::AbstractTileCache >::checkSubType< proland::ColorMipmap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ColorMipmap::left(proland::ColorMipmap *). Got : '%s'\n%s",typeid(Luna< proland::AbstractTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->left = value;

		return 0;
	}

	// void proland::ColorMipmap::right(proland::ColorMipmap * value)
	static int _bind_setRight(lua_State *L) {
		if (!_lg_typecheck_setRight(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ColorMipmap::right(proland::ColorMipmap * value) function, expected prototype:\nvoid proland::ColorMipmap::right(proland::ColorMipmap * value)\nClass arguments details:\narg 1 ID = 98663171\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::ColorMipmap* value=(Luna< proland::AbstractTileCache >::checkSubType< proland::ColorMipmap >(L,2));

		proland::ColorMipmap* self=Luna< proland::AbstractTileCache >::checkSubType< proland::ColorMipmap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ColorMipmap::right(proland::ColorMipmap *). Got : '%s'\n%s",typeid(Luna< proland::AbstractTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->right = value;

		return 0;
	}

	// void proland::ColorMipmap::bottom(proland::ColorMipmap * value)
	static int _bind_setBottom(lua_State *L) {
		if (!_lg_typecheck_setBottom(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ColorMipmap::bottom(proland::ColorMipmap * value) function, expected prototype:\nvoid proland::ColorMipmap::bottom(proland::ColorMipmap * value)\nClass arguments details:\narg 1 ID = 98663171\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::ColorMipmap* value=(Luna< proland::AbstractTileCache >::checkSubType< proland::ColorMipmap >(L,2));

		proland::ColorMipmap* self=Luna< proland::AbstractTileCache >::checkSubType< proland::ColorMipmap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ColorMipmap::bottom(proland::ColorMipmap *). Got : '%s'\n%s",typeid(Luna< proland::AbstractTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->bottom = value;

		return 0;
	}

	// void proland::ColorMipmap::top(proland::ColorMipmap * value)
	static int _bind_setTop(lua_State *L) {
		if (!_lg_typecheck_setTop(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ColorMipmap::top(proland::ColorMipmap * value) function, expected prototype:\nvoid proland::ColorMipmap::top(proland::ColorMipmap * value)\nClass arguments details:\narg 1 ID = 98663171\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::ColorMipmap* value=(Luna< proland::AbstractTileCache >::checkSubType< proland::ColorMipmap >(L,2));

		proland::ColorMipmap* self=Luna< proland::AbstractTileCache >::checkSubType< proland::ColorMipmap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ColorMipmap::top(proland::ColorMipmap *). Got : '%s'\n%s",typeid(Luna< proland::AbstractTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->top = value;

		return 0;
	}

	// void proland::ColorMipmap::leftr(int value)
	static int _bind_setLeftr(lua_State *L) {
		if (!_lg_typecheck_setLeftr(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ColorMipmap::leftr(int value) function, expected prototype:\nvoid proland::ColorMipmap::leftr(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		proland::ColorMipmap* self=Luna< proland::AbstractTileCache >::checkSubType< proland::ColorMipmap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ColorMipmap::leftr(int). Got : '%s'\n%s",typeid(Luna< proland::AbstractTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->leftr = value;

		return 0;
	}

	// void proland::ColorMipmap::rightr(int value)
	static int _bind_setRightr(lua_State *L) {
		if (!_lg_typecheck_setRightr(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ColorMipmap::rightr(int value) function, expected prototype:\nvoid proland::ColorMipmap::rightr(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		proland::ColorMipmap* self=Luna< proland::AbstractTileCache >::checkSubType< proland::ColorMipmap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ColorMipmap::rightr(int). Got : '%s'\n%s",typeid(Luna< proland::AbstractTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->rightr = value;

		return 0;
	}

	// void proland::ColorMipmap::bottomr(int value)
	static int _bind_setBottomr(lua_State *L) {
		if (!_lg_typecheck_setBottomr(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ColorMipmap::bottomr(int value) function, expected prototype:\nvoid proland::ColorMipmap::bottomr(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		proland::ColorMipmap* self=Luna< proland::AbstractTileCache >::checkSubType< proland::ColorMipmap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ColorMipmap::bottomr(int). Got : '%s'\n%s",typeid(Luna< proland::AbstractTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->bottomr = value;

		return 0;
	}

	// void proland::ColorMipmap::topr(int value)
	static int _bind_setTopr(lua_State *L) {
		if (!_lg_typecheck_setTopr(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ColorMipmap::topr(int value) function, expected prototype:\nvoid proland::ColorMipmap::topr(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		proland::ColorMipmap* self=Luna< proland::AbstractTileCache >::checkSubType< proland::ColorMipmap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ColorMipmap::topr(int). Got : '%s'\n%s",typeid(Luna< proland::AbstractTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->topr = value;

		return 0;
	}

	// float proland::ColorMipmap::base_getTileHeight(int x, int y)
	static int _bind_base_getTileHeight(lua_State *L) {
		if (!_lg_typecheck_base_getTileHeight(L)) {
			luaL_error(L, "luna typecheck failed in float proland::ColorMipmap::base_getTileHeight(int x, int y) function, expected prototype:\nfloat proland::ColorMipmap::base_getTileHeight(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		proland::ColorMipmap* self=Luna< proland::AbstractTileCache >::checkSubType< proland::ColorMipmap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::ColorMipmap::base_getTileHeight(int, int). Got : '%s'\n%s",typeid(Luna< proland::AbstractTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->ColorMipmap::getTileHeight(x, y);
		lua_pushnumber(L,lret);

		return 1;
	}

	// ork::vec4f proland::ColorMipmap::base_getTileColor(int x, int y)
	static int _bind_base_getTileColor(lua_State *L) {
		if (!_lg_typecheck_base_getTileColor(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec4f proland::ColorMipmap::base_getTileColor(int x, int y) function, expected prototype:\nork::vec4f proland::ColorMipmap::base_getTileColor(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		proland::ColorMipmap* self=Luna< proland::AbstractTileCache >::checkSubType< proland::ColorMipmap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec4f proland::ColorMipmap::base_getTileColor(int, int). Got : '%s'\n%s",typeid(Luna< proland::AbstractTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec4f stack_lret = self->ColorMipmap::getTileColor(x, y);
		ork::vec4f* lret = new ork::vec4f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec4f >::push(L,lret,true);

		return 1;
	}

	// void proland::ColorMipmap::base_reset(int width, int height, int tileSize)
	static int _bind_base_reset(lua_State *L) {
		if (!_lg_typecheck_base_reset(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ColorMipmap::base_reset(int width, int height, int tileSize) function, expected prototype:\nvoid proland::ColorMipmap::base_reset(int width, int height, int tileSize)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int width=(int)lua_tointeger(L,2);
		int height=(int)lua_tointeger(L,3);
		int tileSize=(int)lua_tointeger(L,4);

		proland::ColorMipmap* self=Luna< proland::AbstractTileCache >::checkSubType< proland::ColorMipmap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ColorMipmap::base_reset(int, int, int). Got : '%s'\n%s",typeid(Luna< proland::AbstractTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ColorMipmap::reset(width, height, tileSize);

		return 0;
	}


	// Operator binds:

};

proland::ColorMipmap* LunaTraits< proland::ColorMipmap >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< proland::ColorMipmap >::_bind_dtor(proland::ColorMipmap* obj) {
	delete obj;
}

const char LunaTraits< proland::ColorMipmap >::className[] = "ColorMipmap";
const char LunaTraits< proland::ColorMipmap >::fullName[] = "proland::ColorMipmap";
const char LunaTraits< proland::ColorMipmap >::moduleName[] = "proland";
const char* LunaTraits< proland::ColorMipmap >::parents[] = {"proland.AbstractTileCache", 0};
const int LunaTraits< proland::ColorMipmap >::hash = 2532046;
const int LunaTraits< proland::ColorMipmap >::uniqueIDs[] = {98663171,0};

luna_RegType LunaTraits< proland::ColorMipmap >::methods[] = {
	{"compute", &luna_wrapper_proland_ColorMipmap::_bind_compute},
	{"computeMipmap", &luna_wrapper_proland_ColorMipmap::_bind_computeMipmap},
	{"generate", &luna_wrapper_proland_ColorMipmap::_bind_generate},
	{"generateResiduals", &luna_wrapper_proland_ColorMipmap::_bind_generateResiduals},
	{"reorderResiduals", &luna_wrapper_proland_ColorMipmap::_bind_reorderResiduals},
	{"setCube", &luna_wrapper_proland_ColorMipmap::_bind_setCube},
	{"getLeft", &luna_wrapper_proland_ColorMipmap::_bind_getLeft},
	{"getRight", &luna_wrapper_proland_ColorMipmap::_bind_getRight},
	{"getBottom", &luna_wrapper_proland_ColorMipmap::_bind_getBottom},
	{"getTop", &luna_wrapper_proland_ColorMipmap::_bind_getTop},
	{"getLeftr", &luna_wrapper_proland_ColorMipmap::_bind_getLeftr},
	{"getRightr", &luna_wrapper_proland_ColorMipmap::_bind_getRightr},
	{"getBottomr", &luna_wrapper_proland_ColorMipmap::_bind_getBottomr},
	{"getTopr", &luna_wrapper_proland_ColorMipmap::_bind_getTopr},
	{"setLeft", &luna_wrapper_proland_ColorMipmap::_bind_setLeft},
	{"setRight", &luna_wrapper_proland_ColorMipmap::_bind_setRight},
	{"setBottom", &luna_wrapper_proland_ColorMipmap::_bind_setBottom},
	{"setTop", &luna_wrapper_proland_ColorMipmap::_bind_setTop},
	{"setLeftr", &luna_wrapper_proland_ColorMipmap::_bind_setLeftr},
	{"setRightr", &luna_wrapper_proland_ColorMipmap::_bind_setRightr},
	{"setBottomr", &luna_wrapper_proland_ColorMipmap::_bind_setBottomr},
	{"setTopr", &luna_wrapper_proland_ColorMipmap::_bind_setTopr},
	{"base_getTileHeight", &luna_wrapper_proland_ColorMipmap::_bind_base_getTileHeight},
	{"base_getTileColor", &luna_wrapper_proland_ColorMipmap::_bind_base_getTileColor},
	{"base_reset", &luna_wrapper_proland_ColorMipmap::_bind_base_reset},
	{"fromVoid", &luna_wrapper_proland_ColorMipmap::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_ColorMipmap::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_ColorMipmap::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::ColorMipmap >::converters[] = {
	{"proland::AbstractTileCache", &luna_wrapper_proland_ColorMipmap::_cast_from_AbstractTileCache},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::ColorMipmap >::enumValues[] = {
	{0,0}
};



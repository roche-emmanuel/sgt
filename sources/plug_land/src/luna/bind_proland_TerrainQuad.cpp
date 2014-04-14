#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_TerrainQuad.h>

class luna_wrapper_proland_TerrainQuad {
public:
	typedef Luna< proland::TerrainQuad > luna_t;

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

		proland::TerrainQuad* self= (proland::TerrainQuad*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::TerrainQuad >::push(L,self,false);
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
		//proland::TerrainQuad* ptr= dynamic_cast< proland::TerrainQuad* >(Luna< ork::Object >::check(L,1));
		proland::TerrainQuad* ptr= luna_caster< ork::Object, proland::TerrainQuad >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::TerrainQuad >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=9 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,1381405)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< ork::Object >::checkSubType< proland::TerrainNode >(L,1)) ) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,1381405)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< ork::Object >::checkSubType< proland::TerrainQuad >(L,2)) ) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( lua_type(L,6)!=LUA_TNUMBER ) return false;
		if( lua_type(L,7)!=LUA_TNUMBER ) return false;
		if( lua_type(L,8)!=LUA_TNUMBER ) return false;
		if( lua_type(L,9)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=10 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,1381405)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< ork::Object >::checkSubType< proland::TerrainNode >(L,2)) ) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,1381405)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< ork::Object >::checkSubType< proland::TerrainQuad >(L,3)) ) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( lua_type(L,6)!=LUA_TNUMBER ) return false;
		if( lua_type(L,7)!=LUA_TNUMBER ) return false;
		if( lua_type(L,8)!=LUA_TNUMBER ) return false;
		if( lua_type(L,9)!=LUA_TNUMBER ) return false;
		if( lua_type(L,10)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getOwner(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isLeaf(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDepth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_update(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getParent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLevel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTx(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTy(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getOx(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getOy(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getL(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getZmin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getZmax(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getVisible(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getOccluded(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDrawable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setZmin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setZmax(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setVisible(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setOccluded(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDrawable(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_toString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::TerrainQuad::TerrainQuad(proland::TerrainNode * owner, const proland::TerrainQuad * parent, int tx, int ty, double ox, double oy, double l, float zmin, float zmax)
	static proland::TerrainQuad* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::TerrainQuad::TerrainQuad(proland::TerrainNode * owner, const proland::TerrainQuad * parent, int tx, int ty, double ox, double oy, double l, float zmin, float zmax) function, expected prototype:\nproland::TerrainQuad::TerrainQuad(proland::TerrainNode * owner, const proland::TerrainQuad * parent, int tx, int ty, double ox, double oy, double l, float zmin, float zmax)\nClass arguments details:\narg 1 ID = 1381405\narg 2 ID = 1381405\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::TerrainNode* owner=(Luna< ork::Object >::checkSubType< proland::TerrainNode >(L,1));
		const proland::TerrainQuad* parent=(Luna< ork::Object >::checkSubType< proland::TerrainQuad >(L,2));
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);
		double ox=(double)lua_tonumber(L,5);
		double oy=(double)lua_tonumber(L,6);
		double l=(double)lua_tonumber(L,7);
		float zmin=(float)lua_tonumber(L,8);
		float zmax=(float)lua_tonumber(L,9);

		return new proland::TerrainQuad(owner, parent, tx, ty, ox, oy, l, zmin, zmax);
	}

	// proland::TerrainQuad::TerrainQuad(lua_Table * data, proland::TerrainNode * owner, const proland::TerrainQuad * parent, int tx, int ty, double ox, double oy, double l, float zmin, float zmax)
	static proland::TerrainQuad* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::TerrainQuad::TerrainQuad(lua_Table * data, proland::TerrainNode * owner, const proland::TerrainQuad * parent, int tx, int ty, double ox, double oy, double l, float zmin, float zmax) function, expected prototype:\nproland::TerrainQuad::TerrainQuad(lua_Table * data, proland::TerrainNode * owner, const proland::TerrainQuad * parent, int tx, int ty, double ox, double oy, double l, float zmin, float zmax)\nClass arguments details:\narg 2 ID = 1381405\narg 3 ID = 1381405\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::TerrainNode* owner=(Luna< ork::Object >::checkSubType< proland::TerrainNode >(L,2));
		const proland::TerrainQuad* parent=(Luna< ork::Object >::checkSubType< proland::TerrainQuad >(L,3));
		int tx=(int)lua_tointeger(L,4);
		int ty=(int)lua_tointeger(L,5);
		double ox=(double)lua_tonumber(L,6);
		double oy=(double)lua_tonumber(L,7);
		double l=(double)lua_tonumber(L,8);
		float zmin=(float)lua_tonumber(L,9);
		float zmax=(float)lua_tonumber(L,10);

		return new wrapper_proland_TerrainQuad(L,NULL, owner, parent, tx, ty, ox, oy, l, zmin, zmax);
	}

	// Overload binder for proland::TerrainQuad::TerrainQuad
	static proland::TerrainQuad* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function TerrainQuad, cannot match any of the overloads for function TerrainQuad:\n  TerrainQuad(proland::TerrainNode *, const proland::TerrainQuad *, int, int, double, double, double, float, float)\n  TerrainQuad(lua_Table *, proland::TerrainNode *, const proland::TerrainQuad *, int, int, double, double, double, float, float)\n");
		return NULL;
	}


	// Function binds:
	// proland::TerrainNode * proland::TerrainQuad::getOwner()
	static int _bind_getOwner(lua_State *L) {
		if (!_lg_typecheck_getOwner(L)) {
			luaL_error(L, "luna typecheck failed in proland::TerrainNode * proland::TerrainQuad::getOwner() function, expected prototype:\nproland::TerrainNode * proland::TerrainQuad::getOwner()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TerrainQuad* self=Luna< ork::Object >::checkSubType< proland::TerrainQuad >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::TerrainNode * proland::TerrainQuad::getOwner(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::TerrainNode * lret = self->getOwner();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::TerrainNode >::push(L,lret,false);

		return 1;
	}

	// bool proland::TerrainQuad::isLeaf() const
	static int _bind_isLeaf(lua_State *L) {
		if (!_lg_typecheck_isLeaf(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::TerrainQuad::isLeaf() const function, expected prototype:\nbool proland::TerrainQuad::isLeaf() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TerrainQuad* self=Luna< ork::Object >::checkSubType< proland::TerrainQuad >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::TerrainQuad::isLeaf() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isLeaf();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int proland::TerrainQuad::getSize() const
	static int _bind_getSize(lua_State *L) {
		if (!_lg_typecheck_getSize(L)) {
			luaL_error(L, "luna typecheck failed in int proland::TerrainQuad::getSize() const function, expected prototype:\nint proland::TerrainQuad::getSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TerrainQuad* self=Luna< ork::Object >::checkSubType< proland::TerrainQuad >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::TerrainQuad::getSize() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int proland::TerrainQuad::getDepth() const
	static int _bind_getDepth(lua_State *L) {
		if (!_lg_typecheck_getDepth(L)) {
			luaL_error(L, "luna typecheck failed in int proland::TerrainQuad::getDepth() const function, expected prototype:\nint proland::TerrainQuad::getDepth() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TerrainQuad* self=Luna< ork::Object >::checkSubType< proland::TerrainQuad >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::TerrainQuad::getDepth() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getDepth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void proland::TerrainQuad::update()
	static int _bind_update(lua_State *L) {
		if (!_lg_typecheck_update(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TerrainQuad::update() function, expected prototype:\nvoid proland::TerrainQuad::update()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TerrainQuad* self=Luna< ork::Object >::checkSubType< proland::TerrainQuad >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TerrainQuad::update(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->update();

		return 0;
	}

	// const proland::TerrainQuad * proland::TerrainQuad::parent()
	static int _bind_getParent(lua_State *L) {
		if (!_lg_typecheck_getParent(L)) {
			luaL_error(L, "luna typecheck failed in const proland::TerrainQuad * proland::TerrainQuad::parent() function, expected prototype:\nconst proland::TerrainQuad * proland::TerrainQuad::parent()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TerrainQuad* self=Luna< ork::Object >::checkSubType< proland::TerrainQuad >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const proland::TerrainQuad * proland::TerrainQuad::parent(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const proland::TerrainQuad * lret = self->parent;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::TerrainQuad >::push(L,lret,false);

		return 1;
	}

	// const int proland::TerrainQuad::level()
	static int _bind_getLevel(lua_State *L) {
		if (!_lg_typecheck_getLevel(L)) {
			luaL_error(L, "luna typecheck failed in const int proland::TerrainQuad::level() function, expected prototype:\nconst int proland::TerrainQuad::level()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TerrainQuad* self=Luna< ork::Object >::checkSubType< proland::TerrainQuad >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const int proland::TerrainQuad::level(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const int lret = self->level;
		lua_pushnumber(L,lret);

		return 1;
	}

	// const int proland::TerrainQuad::tx()
	static int _bind_getTx(lua_State *L) {
		if (!_lg_typecheck_getTx(L)) {
			luaL_error(L, "luna typecheck failed in const int proland::TerrainQuad::tx() function, expected prototype:\nconst int proland::TerrainQuad::tx()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TerrainQuad* self=Luna< ork::Object >::checkSubType< proland::TerrainQuad >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const int proland::TerrainQuad::tx(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const int lret = self->tx;
		lua_pushnumber(L,lret);

		return 1;
	}

	// const int proland::TerrainQuad::ty()
	static int _bind_getTy(lua_State *L) {
		if (!_lg_typecheck_getTy(L)) {
			luaL_error(L, "luna typecheck failed in const int proland::TerrainQuad::ty() function, expected prototype:\nconst int proland::TerrainQuad::ty()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TerrainQuad* self=Luna< ork::Object >::checkSubType< proland::TerrainQuad >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const int proland::TerrainQuad::ty(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const int lret = self->ty;
		lua_pushnumber(L,lret);

		return 1;
	}

	// const double proland::TerrainQuad::ox()
	static int _bind_getOx(lua_State *L) {
		if (!_lg_typecheck_getOx(L)) {
			luaL_error(L, "luna typecheck failed in const double proland::TerrainQuad::ox() function, expected prototype:\nconst double proland::TerrainQuad::ox()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TerrainQuad* self=Luna< ork::Object >::checkSubType< proland::TerrainQuad >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const double proland::TerrainQuad::ox(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const double lret = self->ox;
		lua_pushnumber(L,lret);

		return 1;
	}

	// const double proland::TerrainQuad::oy()
	static int _bind_getOy(lua_State *L) {
		if (!_lg_typecheck_getOy(L)) {
			luaL_error(L, "luna typecheck failed in const double proland::TerrainQuad::oy() function, expected prototype:\nconst double proland::TerrainQuad::oy()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TerrainQuad* self=Luna< ork::Object >::checkSubType< proland::TerrainQuad >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const double proland::TerrainQuad::oy(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const double lret = self->oy;
		lua_pushnumber(L,lret);

		return 1;
	}

	// const double proland::TerrainQuad::l()
	static int _bind_getL(lua_State *L) {
		if (!_lg_typecheck_getL(L)) {
			luaL_error(L, "luna typecheck failed in const double proland::TerrainQuad::l() function, expected prototype:\nconst double proland::TerrainQuad::l()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TerrainQuad* self=Luna< ork::Object >::checkSubType< proland::TerrainQuad >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const double proland::TerrainQuad::l(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const double lret = self->l;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float proland::TerrainQuad::zmin()
	static int _bind_getZmin(lua_State *L) {
		if (!_lg_typecheck_getZmin(L)) {
			luaL_error(L, "luna typecheck failed in float proland::TerrainQuad::zmin() function, expected prototype:\nfloat proland::TerrainQuad::zmin()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TerrainQuad* self=Luna< ork::Object >::checkSubType< proland::TerrainQuad >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::TerrainQuad::zmin(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->zmin;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float proland::TerrainQuad::zmax()
	static int _bind_getZmax(lua_State *L) {
		if (!_lg_typecheck_getZmax(L)) {
			luaL_error(L, "luna typecheck failed in float proland::TerrainQuad::zmax() function, expected prototype:\nfloat proland::TerrainQuad::zmax()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TerrainQuad* self=Luna< ork::Object >::checkSubType< proland::TerrainQuad >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::TerrainQuad::zmax(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->zmax;
		lua_pushnumber(L,lret);

		return 1;
	}

	// ork::SceneManager::visibility proland::TerrainQuad::visible()
	static int _bind_getVisible(lua_State *L) {
		if (!_lg_typecheck_getVisible(L)) {
			luaL_error(L, "luna typecheck failed in ork::SceneManager::visibility proland::TerrainQuad::visible() function, expected prototype:\nork::SceneManager::visibility proland::TerrainQuad::visible()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TerrainQuad* self=Luna< ork::Object >::checkSubType< proland::TerrainQuad >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::SceneManager::visibility proland::TerrainQuad::visible(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::SceneManager::visibility lret = self->visible;
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool proland::TerrainQuad::occluded()
	static int _bind_getOccluded(lua_State *L) {
		if (!_lg_typecheck_getOccluded(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::TerrainQuad::occluded() function, expected prototype:\nbool proland::TerrainQuad::occluded()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TerrainQuad* self=Luna< ork::Object >::checkSubType< proland::TerrainQuad >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::TerrainQuad::occluded(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->occluded;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::TerrainQuad::drawable()
	static int _bind_getDrawable(lua_State *L) {
		if (!_lg_typecheck_getDrawable(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::TerrainQuad::drawable() function, expected prototype:\nbool proland::TerrainQuad::drawable()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TerrainQuad* self=Luna< ork::Object >::checkSubType< proland::TerrainQuad >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::TerrainQuad::drawable(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->drawable;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void proland::TerrainQuad::zmin(float value)
	static int _bind_setZmin(lua_State *L) {
		if (!_lg_typecheck_setZmin(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TerrainQuad::zmin(float value) function, expected prototype:\nvoid proland::TerrainQuad::zmin(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		proland::TerrainQuad* self=Luna< ork::Object >::checkSubType< proland::TerrainQuad >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TerrainQuad::zmin(float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->zmin = value;

		return 0;
	}

	// void proland::TerrainQuad::zmax(float value)
	static int _bind_setZmax(lua_State *L) {
		if (!_lg_typecheck_setZmax(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TerrainQuad::zmax(float value) function, expected prototype:\nvoid proland::TerrainQuad::zmax(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		proland::TerrainQuad* self=Luna< ork::Object >::checkSubType< proland::TerrainQuad >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TerrainQuad::zmax(float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->zmax = value;

		return 0;
	}

	// void proland::TerrainQuad::visible(ork::SceneManager::visibility value)
	static int _bind_setVisible(lua_State *L) {
		if (!_lg_typecheck_setVisible(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TerrainQuad::visible(ork::SceneManager::visibility value) function, expected prototype:\nvoid proland::TerrainQuad::visible(ork::SceneManager::visibility value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::SceneManager::visibility value=(ork::SceneManager::visibility)lua_tointeger(L,2);

		proland::TerrainQuad* self=Luna< ork::Object >::checkSubType< proland::TerrainQuad >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TerrainQuad::visible(ork::SceneManager::visibility). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->visible = value;

		return 0;
	}

	// void proland::TerrainQuad::occluded(bool value)
	static int _bind_setOccluded(lua_State *L) {
		if (!_lg_typecheck_setOccluded(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TerrainQuad::occluded(bool value) function, expected prototype:\nvoid proland::TerrainQuad::occluded(bool value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		proland::TerrainQuad* self=Luna< ork::Object >::checkSubType< proland::TerrainQuad >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TerrainQuad::occluded(bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->occluded = value;

		return 0;
	}

	// void proland::TerrainQuad::drawable(bool value)
	static int _bind_setDrawable(lua_State *L) {
		if (!_lg_typecheck_setDrawable(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TerrainQuad::drawable(bool value) function, expected prototype:\nvoid proland::TerrainQuad::drawable(bool value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		proland::TerrainQuad* self=Luna< ork::Object >::checkSubType< proland::TerrainQuad >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TerrainQuad::drawable(bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->drawable = value;

		return 0;
	}

	// const char * proland::TerrainQuad::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * proland::TerrainQuad::base_toString() function, expected prototype:\nconst char * proland::TerrainQuad::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TerrainQuad* self=Luna< ork::Object >::checkSubType< proland::TerrainQuad >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * proland::TerrainQuad::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->TerrainQuad::toString();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

proland::TerrainQuad* LunaTraits< proland::TerrainQuad >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_TerrainQuad::_bind_ctor(L);
}

void LunaTraits< proland::TerrainQuad >::_bind_dtor(proland::TerrainQuad* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< proland::TerrainQuad >::className[] = "TerrainQuad";
const char LunaTraits< proland::TerrainQuad >::fullName[] = "proland::TerrainQuad";
const char LunaTraits< proland::TerrainQuad >::moduleName[] = "proland";
const char* LunaTraits< proland::TerrainQuad >::parents[] = {"ork.Object", 0};
const int LunaTraits< proland::TerrainQuad >::hash = 16614270;
const int LunaTraits< proland::TerrainQuad >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< proland::TerrainQuad >::methods[] = {
	{"getOwner", &luna_wrapper_proland_TerrainQuad::_bind_getOwner},
	{"isLeaf", &luna_wrapper_proland_TerrainQuad::_bind_isLeaf},
	{"getSize", &luna_wrapper_proland_TerrainQuad::_bind_getSize},
	{"getDepth", &luna_wrapper_proland_TerrainQuad::_bind_getDepth},
	{"update", &luna_wrapper_proland_TerrainQuad::_bind_update},
	{"getParent", &luna_wrapper_proland_TerrainQuad::_bind_getParent},
	{"getLevel", &luna_wrapper_proland_TerrainQuad::_bind_getLevel},
	{"getTx", &luna_wrapper_proland_TerrainQuad::_bind_getTx},
	{"getTy", &luna_wrapper_proland_TerrainQuad::_bind_getTy},
	{"getOx", &luna_wrapper_proland_TerrainQuad::_bind_getOx},
	{"getOy", &luna_wrapper_proland_TerrainQuad::_bind_getOy},
	{"getL", &luna_wrapper_proland_TerrainQuad::_bind_getL},
	{"getZmin", &luna_wrapper_proland_TerrainQuad::_bind_getZmin},
	{"getZmax", &luna_wrapper_proland_TerrainQuad::_bind_getZmax},
	{"getVisible", &luna_wrapper_proland_TerrainQuad::_bind_getVisible},
	{"getOccluded", &luna_wrapper_proland_TerrainQuad::_bind_getOccluded},
	{"getDrawable", &luna_wrapper_proland_TerrainQuad::_bind_getDrawable},
	{"setZmin", &luna_wrapper_proland_TerrainQuad::_bind_setZmin},
	{"setZmax", &luna_wrapper_proland_TerrainQuad::_bind_setZmax},
	{"setVisible", &luna_wrapper_proland_TerrainQuad::_bind_setVisible},
	{"setOccluded", &luna_wrapper_proland_TerrainQuad::_bind_setOccluded},
	{"setDrawable", &luna_wrapper_proland_TerrainQuad::_bind_setDrawable},
	{"base_toString", &luna_wrapper_proland_TerrainQuad::_bind_base_toString},
	{"fromVoid", &luna_wrapper_proland_TerrainQuad::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_TerrainQuad::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_TerrainQuad::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::TerrainQuad >::converters[] = {
	{"ork::Object", &luna_wrapper_proland_TerrainQuad::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::TerrainQuad >::enumValues[] = {
	{0,0}
};



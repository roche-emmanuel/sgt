#include <plug_common.h>

class luna_wrapper_proland_DrawRiversTask_vecParticle {
public:
	typedef Luna< proland::DrawRiversTask::vecParticle > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,10375505) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(proland::DrawRiversTask::vecParticle*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		proland::DrawRiversTask::vecParticle* rhs =(Luna< proland::DrawRiversTask::vecParticle >::check(L,2));
		proland::DrawRiversTask::vecParticle* self=(Luna< proland::DrawRiversTask::vecParticle >::check(L,1));
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

		proland::DrawRiversTask::vecParticle* self= (proland::DrawRiversTask::vecParticle*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::DrawRiversTask::vecParticle >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,10375505) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< proland::DrawRiversTask::vecParticle >::check(L,1));
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

		proland::DrawRiversTask::vecParticle* self=(Luna< proland::DrawRiversTask::vecParticle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("proland::DrawRiversTask::vecParticle");
		
		return luna_dynamicCast(L,converters,"proland::DrawRiversTask::vecParticle",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=9 ) return false;

		if( lua_type(L,1)!=LUA_TNUMBER ) return false;
		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( lua_type(L,6)!=LUA_TNUMBER ) return false;
		if( lua_type(L,7)!=LUA_TNUMBER ) return false;
		if( lua_type(L,8)!=LUA_TNUMBER ) return false;
		if( lua_type(L,9)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,1381405)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< ork::Object >::checkSubType< proland::ParticleProducer >(L,1)) ) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,93158916)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< proland::ParticleStorage::Particle >::check(L,2)) ) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getX(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getY(lua_State *L) {
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

	inline static bool _lg_typecheck_getI(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getR(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setX(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setY(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTx(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTy(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setOx(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setOy(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setI(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setR(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setId(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::DrawRiversTask::vecParticle::vecParticle()
	static proland::DrawRiversTask::vecParticle* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::DrawRiversTask::vecParticle::vecParticle() function, expected prototype:\nproland::DrawRiversTask::vecParticle::vecParticle()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new proland::DrawRiversTask::vecParticle();
	}

	// proland::DrawRiversTask::vecParticle::vecParticle(float x, float y, float tx, float ty, float ox, float oy, float i, float r, float id)
	static proland::DrawRiversTask::vecParticle* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::DrawRiversTask::vecParticle::vecParticle(float x, float y, float tx, float ty, float ox, float oy, float i, float r, float id) function, expected prototype:\nproland::DrawRiversTask::vecParticle::vecParticle(float x, float y, float tx, float ty, float ox, float oy, float i, float r, float id)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float x=(float)lua_tonumber(L,1);
		float y=(float)lua_tonumber(L,2);
		float tx=(float)lua_tonumber(L,3);
		float ty=(float)lua_tonumber(L,4);
		float ox=(float)lua_tonumber(L,5);
		float oy=(float)lua_tonumber(L,6);
		float i=(float)lua_tonumber(L,7);
		float r=(float)lua_tonumber(L,8);
		float id=(float)lua_tonumber(L,9);

		return new proland::DrawRiversTask::vecParticle(x, y, tx, ty, ox, oy, i, r, id);
	}

	// proland::DrawRiversTask::vecParticle::vecParticle(proland::ParticleProducer * producer, proland::ParticleStorage::Particle * p)
	static proland::DrawRiversTask::vecParticle* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in proland::DrawRiversTask::vecParticle::vecParticle(proland::ParticleProducer * producer, proland::ParticleStorage::Particle * p) function, expected prototype:\nproland::DrawRiversTask::vecParticle::vecParticle(proland::ParticleProducer * producer, proland::ParticleStorage::Particle * p)\nClass arguments details:\narg 1 ID = 1381405\narg 2 ID = 93158916\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::ParticleProducer* producer=(Luna< ork::Object >::checkSubType< proland::ParticleProducer >(L,1));
		proland::ParticleStorage::Particle* p=(Luna< proland::ParticleStorage::Particle >::check(L,2));

		return new proland::DrawRiversTask::vecParticle(producer, p);
	}

	// Overload binder for proland::DrawRiversTask::vecParticle::vecParticle
	static proland::DrawRiversTask::vecParticle* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function vecParticle, cannot match any of the overloads for function vecParticle:\n  vecParticle()\n  vecParticle(float, float, float, float, float, float, float, float, float)\n  vecParticle(proland::ParticleProducer *, proland::ParticleStorage::Particle *)\n");
		return NULL;
	}


	// Function binds:
	// float proland::DrawRiversTask::vecParticle::x()
	static int _bind_getX(lua_State *L) {
		if (!_lg_typecheck_getX(L)) {
			luaL_error(L, "luna typecheck failed in float proland::DrawRiversTask::vecParticle::x() function, expected prototype:\nfloat proland::DrawRiversTask::vecParticle::x()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::DrawRiversTask::vecParticle* self=(Luna< proland::DrawRiversTask::vecParticle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::DrawRiversTask::vecParticle::x(). Got : '%s'\n%s",typeid(Luna< proland::DrawRiversTask::vecParticle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->x;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float proland::DrawRiversTask::vecParticle::y()
	static int _bind_getY(lua_State *L) {
		if (!_lg_typecheck_getY(L)) {
			luaL_error(L, "luna typecheck failed in float proland::DrawRiversTask::vecParticle::y() function, expected prototype:\nfloat proland::DrawRiversTask::vecParticle::y()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::DrawRiversTask::vecParticle* self=(Luna< proland::DrawRiversTask::vecParticle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::DrawRiversTask::vecParticle::y(). Got : '%s'\n%s",typeid(Luna< proland::DrawRiversTask::vecParticle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->y;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float proland::DrawRiversTask::vecParticle::tx()
	static int _bind_getTx(lua_State *L) {
		if (!_lg_typecheck_getTx(L)) {
			luaL_error(L, "luna typecheck failed in float proland::DrawRiversTask::vecParticle::tx() function, expected prototype:\nfloat proland::DrawRiversTask::vecParticle::tx()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::DrawRiversTask::vecParticle* self=(Luna< proland::DrawRiversTask::vecParticle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::DrawRiversTask::vecParticle::tx(). Got : '%s'\n%s",typeid(Luna< proland::DrawRiversTask::vecParticle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->tx;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float proland::DrawRiversTask::vecParticle::ty()
	static int _bind_getTy(lua_State *L) {
		if (!_lg_typecheck_getTy(L)) {
			luaL_error(L, "luna typecheck failed in float proland::DrawRiversTask::vecParticle::ty() function, expected prototype:\nfloat proland::DrawRiversTask::vecParticle::ty()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::DrawRiversTask::vecParticle* self=(Luna< proland::DrawRiversTask::vecParticle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::DrawRiversTask::vecParticle::ty(). Got : '%s'\n%s",typeid(Luna< proland::DrawRiversTask::vecParticle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->ty;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float proland::DrawRiversTask::vecParticle::ox()
	static int _bind_getOx(lua_State *L) {
		if (!_lg_typecheck_getOx(L)) {
			luaL_error(L, "luna typecheck failed in float proland::DrawRiversTask::vecParticle::ox() function, expected prototype:\nfloat proland::DrawRiversTask::vecParticle::ox()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::DrawRiversTask::vecParticle* self=(Luna< proland::DrawRiversTask::vecParticle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::DrawRiversTask::vecParticle::ox(). Got : '%s'\n%s",typeid(Luna< proland::DrawRiversTask::vecParticle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->ox;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float proland::DrawRiversTask::vecParticle::oy()
	static int _bind_getOy(lua_State *L) {
		if (!_lg_typecheck_getOy(L)) {
			luaL_error(L, "luna typecheck failed in float proland::DrawRiversTask::vecParticle::oy() function, expected prototype:\nfloat proland::DrawRiversTask::vecParticle::oy()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::DrawRiversTask::vecParticle* self=(Luna< proland::DrawRiversTask::vecParticle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::DrawRiversTask::vecParticle::oy(). Got : '%s'\n%s",typeid(Luna< proland::DrawRiversTask::vecParticle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->oy;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float proland::DrawRiversTask::vecParticle::i()
	static int _bind_getI(lua_State *L) {
		if (!_lg_typecheck_getI(L)) {
			luaL_error(L, "luna typecheck failed in float proland::DrawRiversTask::vecParticle::i() function, expected prototype:\nfloat proland::DrawRiversTask::vecParticle::i()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::DrawRiversTask::vecParticle* self=(Luna< proland::DrawRiversTask::vecParticle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::DrawRiversTask::vecParticle::i(). Got : '%s'\n%s",typeid(Luna< proland::DrawRiversTask::vecParticle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->i;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float proland::DrawRiversTask::vecParticle::r()
	static int _bind_getR(lua_State *L) {
		if (!_lg_typecheck_getR(L)) {
			luaL_error(L, "luna typecheck failed in float proland::DrawRiversTask::vecParticle::r() function, expected prototype:\nfloat proland::DrawRiversTask::vecParticle::r()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::DrawRiversTask::vecParticle* self=(Luna< proland::DrawRiversTask::vecParticle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::DrawRiversTask::vecParticle::r(). Got : '%s'\n%s",typeid(Luna< proland::DrawRiversTask::vecParticle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->r;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float proland::DrawRiversTask::vecParticle::id()
	static int _bind_getId(lua_State *L) {
		if (!_lg_typecheck_getId(L)) {
			luaL_error(L, "luna typecheck failed in float proland::DrawRiversTask::vecParticle::id() function, expected prototype:\nfloat proland::DrawRiversTask::vecParticle::id()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::DrawRiversTask::vecParticle* self=(Luna< proland::DrawRiversTask::vecParticle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::DrawRiversTask::vecParticle::id(). Got : '%s'\n%s",typeid(Luna< proland::DrawRiversTask::vecParticle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->id;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void proland::DrawRiversTask::vecParticle::x(float value)
	static int _bind_setX(lua_State *L) {
		if (!_lg_typecheck_setX(L)) {
			luaL_error(L, "luna typecheck failed in void proland::DrawRiversTask::vecParticle::x(float value) function, expected prototype:\nvoid proland::DrawRiversTask::vecParticle::x(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		proland::DrawRiversTask::vecParticle* self=(Luna< proland::DrawRiversTask::vecParticle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::DrawRiversTask::vecParticle::x(float). Got : '%s'\n%s",typeid(Luna< proland::DrawRiversTask::vecParticle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->x = value;

		return 0;
	}

	// void proland::DrawRiversTask::vecParticle::y(float value)
	static int _bind_setY(lua_State *L) {
		if (!_lg_typecheck_setY(L)) {
			luaL_error(L, "luna typecheck failed in void proland::DrawRiversTask::vecParticle::y(float value) function, expected prototype:\nvoid proland::DrawRiversTask::vecParticle::y(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		proland::DrawRiversTask::vecParticle* self=(Luna< proland::DrawRiversTask::vecParticle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::DrawRiversTask::vecParticle::y(float). Got : '%s'\n%s",typeid(Luna< proland::DrawRiversTask::vecParticle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->y = value;

		return 0;
	}

	// void proland::DrawRiversTask::vecParticle::tx(float value)
	static int _bind_setTx(lua_State *L) {
		if (!_lg_typecheck_setTx(L)) {
			luaL_error(L, "luna typecheck failed in void proland::DrawRiversTask::vecParticle::tx(float value) function, expected prototype:\nvoid proland::DrawRiversTask::vecParticle::tx(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		proland::DrawRiversTask::vecParticle* self=(Luna< proland::DrawRiversTask::vecParticle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::DrawRiversTask::vecParticle::tx(float). Got : '%s'\n%s",typeid(Luna< proland::DrawRiversTask::vecParticle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->tx = value;

		return 0;
	}

	// void proland::DrawRiversTask::vecParticle::ty(float value)
	static int _bind_setTy(lua_State *L) {
		if (!_lg_typecheck_setTy(L)) {
			luaL_error(L, "luna typecheck failed in void proland::DrawRiversTask::vecParticle::ty(float value) function, expected prototype:\nvoid proland::DrawRiversTask::vecParticle::ty(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		proland::DrawRiversTask::vecParticle* self=(Luna< proland::DrawRiversTask::vecParticle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::DrawRiversTask::vecParticle::ty(float). Got : '%s'\n%s",typeid(Luna< proland::DrawRiversTask::vecParticle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ty = value;

		return 0;
	}

	// void proland::DrawRiversTask::vecParticle::ox(float value)
	static int _bind_setOx(lua_State *L) {
		if (!_lg_typecheck_setOx(L)) {
			luaL_error(L, "luna typecheck failed in void proland::DrawRiversTask::vecParticle::ox(float value) function, expected prototype:\nvoid proland::DrawRiversTask::vecParticle::ox(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		proland::DrawRiversTask::vecParticle* self=(Luna< proland::DrawRiversTask::vecParticle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::DrawRiversTask::vecParticle::ox(float). Got : '%s'\n%s",typeid(Luna< proland::DrawRiversTask::vecParticle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ox = value;

		return 0;
	}

	// void proland::DrawRiversTask::vecParticle::oy(float value)
	static int _bind_setOy(lua_State *L) {
		if (!_lg_typecheck_setOy(L)) {
			luaL_error(L, "luna typecheck failed in void proland::DrawRiversTask::vecParticle::oy(float value) function, expected prototype:\nvoid proland::DrawRiversTask::vecParticle::oy(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		proland::DrawRiversTask::vecParticle* self=(Luna< proland::DrawRiversTask::vecParticle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::DrawRiversTask::vecParticle::oy(float). Got : '%s'\n%s",typeid(Luna< proland::DrawRiversTask::vecParticle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->oy = value;

		return 0;
	}

	// void proland::DrawRiversTask::vecParticle::i(float value)
	static int _bind_setI(lua_State *L) {
		if (!_lg_typecheck_setI(L)) {
			luaL_error(L, "luna typecheck failed in void proland::DrawRiversTask::vecParticle::i(float value) function, expected prototype:\nvoid proland::DrawRiversTask::vecParticle::i(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		proland::DrawRiversTask::vecParticle* self=(Luna< proland::DrawRiversTask::vecParticle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::DrawRiversTask::vecParticle::i(float). Got : '%s'\n%s",typeid(Luna< proland::DrawRiversTask::vecParticle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->i = value;

		return 0;
	}

	// void proland::DrawRiversTask::vecParticle::r(float value)
	static int _bind_setR(lua_State *L) {
		if (!_lg_typecheck_setR(L)) {
			luaL_error(L, "luna typecheck failed in void proland::DrawRiversTask::vecParticle::r(float value) function, expected prototype:\nvoid proland::DrawRiversTask::vecParticle::r(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		proland::DrawRiversTask::vecParticle* self=(Luna< proland::DrawRiversTask::vecParticle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::DrawRiversTask::vecParticle::r(float). Got : '%s'\n%s",typeid(Luna< proland::DrawRiversTask::vecParticle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->r = value;

		return 0;
	}

	// void proland::DrawRiversTask::vecParticle::id(float value)
	static int _bind_setId(lua_State *L) {
		if (!_lg_typecheck_setId(L)) {
			luaL_error(L, "luna typecheck failed in void proland::DrawRiversTask::vecParticle::id(float value) function, expected prototype:\nvoid proland::DrawRiversTask::vecParticle::id(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		proland::DrawRiversTask::vecParticle* self=(Luna< proland::DrawRiversTask::vecParticle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::DrawRiversTask::vecParticle::id(float). Got : '%s'\n%s",typeid(Luna< proland::DrawRiversTask::vecParticle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->id = value;

		return 0;
	}


	// Operator binds:

};

proland::DrawRiversTask::vecParticle* LunaTraits< proland::DrawRiversTask::vecParticle >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_DrawRiversTask_vecParticle::_bind_ctor(L);
}

void LunaTraits< proland::DrawRiversTask::vecParticle >::_bind_dtor(proland::DrawRiversTask::vecParticle* obj) {
	delete obj;
}

const char LunaTraits< proland::DrawRiversTask::vecParticle >::className[] = "DrawRiversTask_vecParticle";
const char LunaTraits< proland::DrawRiversTask::vecParticle >::fullName[] = "proland::DrawRiversTask::vecParticle";
const char LunaTraits< proland::DrawRiversTask::vecParticle >::moduleName[] = "proland";
const char* LunaTraits< proland::DrawRiversTask::vecParticle >::parents[] = {0};
const int LunaTraits< proland::DrawRiversTask::vecParticle >::hash = 10375505;
const int LunaTraits< proland::DrawRiversTask::vecParticle >::uniqueIDs[] = {10375505,0};

luna_RegType LunaTraits< proland::DrawRiversTask::vecParticle >::methods[] = {
	{"getX", &luna_wrapper_proland_DrawRiversTask_vecParticle::_bind_getX},
	{"getY", &luna_wrapper_proland_DrawRiversTask_vecParticle::_bind_getY},
	{"getTx", &luna_wrapper_proland_DrawRiversTask_vecParticle::_bind_getTx},
	{"getTy", &luna_wrapper_proland_DrawRiversTask_vecParticle::_bind_getTy},
	{"getOx", &luna_wrapper_proland_DrawRiversTask_vecParticle::_bind_getOx},
	{"getOy", &luna_wrapper_proland_DrawRiversTask_vecParticle::_bind_getOy},
	{"getI", &luna_wrapper_proland_DrawRiversTask_vecParticle::_bind_getI},
	{"getR", &luna_wrapper_proland_DrawRiversTask_vecParticle::_bind_getR},
	{"getId", &luna_wrapper_proland_DrawRiversTask_vecParticle::_bind_getId},
	{"setX", &luna_wrapper_proland_DrawRiversTask_vecParticle::_bind_setX},
	{"setY", &luna_wrapper_proland_DrawRiversTask_vecParticle::_bind_setY},
	{"setTx", &luna_wrapper_proland_DrawRiversTask_vecParticle::_bind_setTx},
	{"setTy", &luna_wrapper_proland_DrawRiversTask_vecParticle::_bind_setTy},
	{"setOx", &luna_wrapper_proland_DrawRiversTask_vecParticle::_bind_setOx},
	{"setOy", &luna_wrapper_proland_DrawRiversTask_vecParticle::_bind_setOy},
	{"setI", &luna_wrapper_proland_DrawRiversTask_vecParticle::_bind_setI},
	{"setR", &luna_wrapper_proland_DrawRiversTask_vecParticle::_bind_setR},
	{"setId", &luna_wrapper_proland_DrawRiversTask_vecParticle::_bind_setId},
	{"dynCast", &luna_wrapper_proland_DrawRiversTask_vecParticle::_bind_dynCast},
	{"__eq", &luna_wrapper_proland_DrawRiversTask_vecParticle::_bind___eq},
	{"fromVoid", &luna_wrapper_proland_DrawRiversTask_vecParticle::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_DrawRiversTask_vecParticle::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< proland::DrawRiversTask::vecParticle >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< proland::DrawRiversTask::vecParticle >::enumValues[] = {
	{0,0}
};



#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_ParticleGrid.h>

class luna_wrapper_proland_ParticleGrid {
public:
	typedef Luna< proland::ParticleGrid > luna_t;

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

		proland::ParticleGrid* self= (proland::ParticleGrid*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::ParticleGrid >::push(L,self,false);
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
		//proland::ParticleGrid* ptr= dynamic_cast< proland::ParticleGrid* >(Luna< ork::Object >::check(L,1));
		proland::ParticleGrid* ptr= luna_caster< ork::Object, proland::ParticleGrid >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::ParticleGrid >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,1)!=LUA_TNUMBER ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getParticleRadius(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setParticleRadius(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMaxParticlesPerCell(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setMaxParticlesPerCell(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getViewport(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setViewport(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,63151914) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getGridSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCell(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304240) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCellSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304243) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addParticle(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,15286603)) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_clear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_copyToTexture(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::ScreenParticleLayer >(L,2) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Texture2D >(L,3) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_toString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::ParticleGrid::ParticleGrid(float radius, int maxParticlesPerCell, float gridFactor = 1.0f)
	static proland::ParticleGrid* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::ParticleGrid::ParticleGrid(float radius, int maxParticlesPerCell, float gridFactor = 1.0f) function, expected prototype:\nproland::ParticleGrid::ParticleGrid(float radius, int maxParticlesPerCell, float gridFactor = 1.0f)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		float radius=(float)lua_tonumber(L,1);
		int maxParticlesPerCell=(int)lua_tointeger(L,2);
		float gridFactor=luatop>2 ? (float)lua_tonumber(L,3) : (float)1.0f;

		return new proland::ParticleGrid(radius, maxParticlesPerCell, gridFactor);
	}

	// proland::ParticleGrid::ParticleGrid(lua_Table * data, float radius, int maxParticlesPerCell, float gridFactor = 1.0f)
	static proland::ParticleGrid* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::ParticleGrid::ParticleGrid(lua_Table * data, float radius, int maxParticlesPerCell, float gridFactor = 1.0f) function, expected prototype:\nproland::ParticleGrid::ParticleGrid(lua_Table * data, float radius, int maxParticlesPerCell, float gridFactor = 1.0f)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		float radius=(float)lua_tonumber(L,2);
		int maxParticlesPerCell=(int)lua_tointeger(L,3);
		float gridFactor=luatop>3 ? (float)lua_tonumber(L,4) : (float)1.0f;

		return new wrapper_proland_ParticleGrid(L,NULL, radius, maxParticlesPerCell, gridFactor);
	}

	// Overload binder for proland::ParticleGrid::ParticleGrid
	static proland::ParticleGrid* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function ParticleGrid, cannot match any of the overloads for function ParticleGrid:\n  ParticleGrid(float, int, float)\n  ParticleGrid(lua_Table *, float, int, float)\n");
		return NULL;
	}


	// Function binds:
	// float proland::ParticleGrid::getParticleRadius() const
	static int _bind_getParticleRadius(lua_State *L) {
		if (!_lg_typecheck_getParticleRadius(L)) {
			luaL_error(L, "luna typecheck failed in float proland::ParticleGrid::getParticleRadius() const function, expected prototype:\nfloat proland::ParticleGrid::getParticleRadius() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::ParticleGrid* self=Luna< ork::Object >::checkSubType< proland::ParticleGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::ParticleGrid::getParticleRadius() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getParticleRadius();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void proland::ParticleGrid::setParticleRadius(float radius)
	static int _bind_setParticleRadius(lua_State *L) {
		if (!_lg_typecheck_setParticleRadius(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ParticleGrid::setParticleRadius(float radius) function, expected prototype:\nvoid proland::ParticleGrid::setParticleRadius(float radius)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float radius=(float)lua_tonumber(L,2);

		proland::ParticleGrid* self=Luna< ork::Object >::checkSubType< proland::ParticleGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ParticleGrid::setParticleRadius(float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setParticleRadius(radius);

		return 0;
	}

	// int proland::ParticleGrid::getMaxParticlesPerCell() const
	static int _bind_getMaxParticlesPerCell(lua_State *L) {
		if (!_lg_typecheck_getMaxParticlesPerCell(L)) {
			luaL_error(L, "luna typecheck failed in int proland::ParticleGrid::getMaxParticlesPerCell() const function, expected prototype:\nint proland::ParticleGrid::getMaxParticlesPerCell() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::ParticleGrid* self=Luna< ork::Object >::checkSubType< proland::ParticleGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::ParticleGrid::getMaxParticlesPerCell() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getMaxParticlesPerCell();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void proland::ParticleGrid::setMaxParticlesPerCell(int maxParticlesPerCell)
	static int _bind_setMaxParticlesPerCell(lua_State *L) {
		if (!_lg_typecheck_setMaxParticlesPerCell(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ParticleGrid::setMaxParticlesPerCell(int maxParticlesPerCell) function, expected prototype:\nvoid proland::ParticleGrid::setMaxParticlesPerCell(int maxParticlesPerCell)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int maxParticlesPerCell=(int)lua_tointeger(L,2);

		proland::ParticleGrid* self=Luna< ork::Object >::checkSubType< proland::ParticleGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ParticleGrid::setMaxParticlesPerCell(int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setMaxParticlesPerCell(maxParticlesPerCell);

		return 0;
	}

	// ork::box2i proland::ParticleGrid::getViewport() const
	static int _bind_getViewport(lua_State *L) {
		if (!_lg_typecheck_getViewport(L)) {
			luaL_error(L, "luna typecheck failed in ork::box2i proland::ParticleGrid::getViewport() const function, expected prototype:\nork::box2i proland::ParticleGrid::getViewport() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::ParticleGrid* self=Luna< ork::Object >::checkSubType< proland::ParticleGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::box2i proland::ParticleGrid::getViewport() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::box2i stack_lret = self->getViewport();
		ork::box2i* lret = new ork::box2i(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::box2i >::push(L,lret,true);

		return 1;
	}

	// void proland::ParticleGrid::setViewport(const ork::box2i & viewport)
	static int _bind_setViewport(lua_State *L) {
		if (!_lg_typecheck_setViewport(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ParticleGrid::setViewport(const ork::box2i & viewport) function, expected prototype:\nvoid proland::ParticleGrid::setViewport(const ork::box2i & viewport)\nClass arguments details:\narg 1 ID = 63151914\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::box2i* viewport_ptr=(Luna< ork::box2i >::check(L,2));
		if( !viewport_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg viewport in proland::ParticleGrid::setViewport function");
		}
		const ork::box2i & viewport=*viewport_ptr;

		proland::ParticleGrid* self=Luna< ork::Object >::checkSubType< proland::ParticleGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ParticleGrid::setViewport(const ork::box2i &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setViewport(viewport);

		return 0;
	}

	// ork::vec2i proland::ParticleGrid::getGridSize() const
	static int _bind_getGridSize(lua_State *L) {
		if (!_lg_typecheck_getGridSize(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec2i proland::ParticleGrid::getGridSize() const function, expected prototype:\nork::vec2i proland::ParticleGrid::getGridSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::ParticleGrid* self=Luna< ork::Object >::checkSubType< proland::ParticleGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec2i proland::ParticleGrid::getGridSize() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec2i stack_lret = self->getGridSize();
		ork::vec2i* lret = new ork::vec2i(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec2i >::push(L,lret,true);

		return 1;
	}

	// ork::vec2i proland::ParticleGrid::getCell(const ork::vec2f & p)
	static int _bind_getCell(lua_State *L) {
		if (!_lg_typecheck_getCell(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec2i proland::ParticleGrid::getCell(const ork::vec2f & p) function, expected prototype:\nork::vec2i proland::ParticleGrid::getCell(const ork::vec2f & p)\nClass arguments details:\narg 1 ID = 81304240\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec2f* p_ptr=(Luna< ork::vec2f >::check(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in proland::ParticleGrid::getCell function");
		}
		const ork::vec2f & p=*p_ptr;

		proland::ParticleGrid* self=Luna< ork::Object >::checkSubType< proland::ParticleGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec2i proland::ParticleGrid::getCell(const ork::vec2f &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec2i stack_lret = self->getCell(p);
		ork::vec2i* lret = new ork::vec2i(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec2i >::push(L,lret,true);

		return 1;
	}

	// int proland::ParticleGrid::getCellSize(const ork::vec2i & cell)
	static int _bind_getCellSize(lua_State *L) {
		if (!_lg_typecheck_getCellSize(L)) {
			luaL_error(L, "luna typecheck failed in int proland::ParticleGrid::getCellSize(const ork::vec2i & cell) function, expected prototype:\nint proland::ParticleGrid::getCellSize(const ork::vec2i & cell)\nClass arguments details:\narg 1 ID = 81304243\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec2i* cell_ptr=(Luna< ork::vec2i >::check(L,2));
		if( !cell_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cell in proland::ParticleGrid::getCellSize function");
		}
		const ork::vec2i & cell=*cell_ptr;

		proland::ParticleGrid* self=Luna< ork::Object >::checkSubType< proland::ParticleGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::ParticleGrid::getCellSize(const ork::vec2i &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getCellSize(cell);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void proland::ParticleGrid::addParticle(proland::ScreenParticleLayer::ScreenParticle * p, float intensity)
	static int _bind_addParticle(lua_State *L) {
		if (!_lg_typecheck_addParticle(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ParticleGrid::addParticle(proland::ScreenParticleLayer::ScreenParticle * p, float intensity) function, expected prototype:\nvoid proland::ParticleGrid::addParticle(proland::ScreenParticleLayer::ScreenParticle * p, float intensity)\nClass arguments details:\narg 1 ID = 15286603\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::ScreenParticleLayer::ScreenParticle* p=(Luna< proland::ScreenParticleLayer::ScreenParticle >::check(L,2));
		float intensity=(float)lua_tonumber(L,3);

		proland::ParticleGrid* self=Luna< ork::Object >::checkSubType< proland::ParticleGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ParticleGrid::addParticle(proland::ScreenParticleLayer::ScreenParticle *, float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addParticle(p, intensity);

		return 0;
	}

	// void proland::ParticleGrid::clear()
	static int _bind_clear(lua_State *L) {
		if (!_lg_typecheck_clear(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ParticleGrid::clear() function, expected prototype:\nvoid proland::ParticleGrid::clear()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::ParticleGrid* self=Luna< ork::Object >::checkSubType< proland::ParticleGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ParticleGrid::clear(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->clear();

		return 0;
	}

	// ork::ptr< ork::Texture2D > proland::ParticleGrid::copyToTexture(ork::ptr< proland::ScreenParticleLayer > l, ork::ptr< ork::Texture2D > t, int & pixelsPerCell)
	static int _bind_copyToTexture(lua_State *L) {
		if (!_lg_typecheck_copyToTexture(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Texture2D > proland::ParticleGrid::copyToTexture(ork::ptr< proland::ScreenParticleLayer > l, ork::ptr< ork::Texture2D > t, int & pixelsPerCell) function, expected prototype:\nork::ptr< ork::Texture2D > proland::ParticleGrid::copyToTexture(ork::ptr< proland::ScreenParticleLayer > l, ork::ptr< ork::Texture2D > t, int & pixelsPerCell)\nClass arguments details:\narg 1 ID = [unknown]\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< proland::ScreenParticleLayer > l = Luna< ork::Object >::checkSubType< proland::ScreenParticleLayer >(L,2);
		ork::ptr< ork::Texture2D > t = Luna< ork::Object >::checkSubType< ork::Texture2D >(L,3);
		int pixelsPerCell=(int)lua_tointeger(L,4);

		proland::ParticleGrid* self=Luna< ork::Object >::checkSubType< proland::ParticleGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Texture2D > proland::ParticleGrid::copyToTexture(ork::ptr< proland::ScreenParticleLayer >, ork::ptr< ork::Texture2D >, int &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Texture2D > lret = self->copyToTexture(l, t, pixelsPerCell);
		Luna< ork::Texture2D >::push(L,lret.get(),false);

		lua_pushnumber(L,pixelsPerCell);
		return 2;
	}

	// const char * proland::ParticleGrid::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * proland::ParticleGrid::base_toString() function, expected prototype:\nconst char * proland::ParticleGrid::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::ParticleGrid* self=Luna< ork::Object >::checkSubType< proland::ParticleGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * proland::ParticleGrid::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->ParticleGrid::toString();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

proland::ParticleGrid* LunaTraits< proland::ParticleGrid >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_ParticleGrid::_bind_ctor(L);
}

void LunaTraits< proland::ParticleGrid >::_bind_dtor(proland::ParticleGrid* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< proland::ParticleGrid >::className[] = "ParticleGrid";
const char LunaTraits< proland::ParticleGrid >::fullName[] = "proland::ParticleGrid";
const char LunaTraits< proland::ParticleGrid >::moduleName[] = "proland";
const char* LunaTraits< proland::ParticleGrid >::parents[] = {"ork.Object", 0};
const int LunaTraits< proland::ParticleGrid >::hash = 15953078;
const int LunaTraits< proland::ParticleGrid >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< proland::ParticleGrid >::methods[] = {
	{"getParticleRadius", &luna_wrapper_proland_ParticleGrid::_bind_getParticleRadius},
	{"setParticleRadius", &luna_wrapper_proland_ParticleGrid::_bind_setParticleRadius},
	{"getMaxParticlesPerCell", &luna_wrapper_proland_ParticleGrid::_bind_getMaxParticlesPerCell},
	{"setMaxParticlesPerCell", &luna_wrapper_proland_ParticleGrid::_bind_setMaxParticlesPerCell},
	{"getViewport", &luna_wrapper_proland_ParticleGrid::_bind_getViewport},
	{"setViewport", &luna_wrapper_proland_ParticleGrid::_bind_setViewport},
	{"getGridSize", &luna_wrapper_proland_ParticleGrid::_bind_getGridSize},
	{"getCell", &luna_wrapper_proland_ParticleGrid::_bind_getCell},
	{"getCellSize", &luna_wrapper_proland_ParticleGrid::_bind_getCellSize},
	{"addParticle", &luna_wrapper_proland_ParticleGrid::_bind_addParticle},
	{"clear", &luna_wrapper_proland_ParticleGrid::_bind_clear},
	{"copyToTexture", &luna_wrapper_proland_ParticleGrid::_bind_copyToTexture},
	{"base_toString", &luna_wrapper_proland_ParticleGrid::_bind_base_toString},
	{"fromVoid", &luna_wrapper_proland_ParticleGrid::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_ParticleGrid::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_ParticleGrid::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::ParticleGrid >::converters[] = {
	{"ork::Object", &luna_wrapper_proland_ParticleGrid::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::ParticleGrid >::enumValues[] = {
	{0,0}
};



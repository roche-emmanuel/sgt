#include <plug_common.h>

class luna_wrapper_osgParticle_Particle {
public:
	typedef Luna< osgParticle::Particle > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,81629555) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgParticle::Particle*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osgParticle::Particle* rhs =(Luna< osgParticle::Particle >::check(L,2));
		osgParticle::Particle* self=(Luna< osgParticle::Particle >::check(L,1));
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

		osgParticle::Particle* self= (osgParticle::Particle*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgParticle::Particle >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,81629555) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osgParticle::Particle >::check(L,1));
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

		osgParticle::Particle* self=(Luna< osgParticle::Particle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgParticle::Particle");
		
		return luna_dynamicCast(L,converters,"osgParticle::Particle",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getShape(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setShape(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isAlive(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLifeTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAge(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSizeRange(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAlphaRange(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getColorRange(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSizeInterpolator(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAlphaInterpolator(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getColorInterpolator(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRadius(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMass(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMassInv(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPosition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getVelocity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPreviousPosition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAngle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAngularVelocity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPreviousAngle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCurrentColor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCurrentAlpha(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSTexCoord(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTTexCoord(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTileS(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTileT(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumTiles(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_kill(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setLifeTime(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSizeRange(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,42175463) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAlphaRange(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,42175463) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setColorRange(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,67820122) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSizeInterpolator(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAlphaInterpolator(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setColorInterpolator(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRadius(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMass(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPosition(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setVelocity(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addVelocity(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_transformPositionVelocity_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		if( (!(Luna< osg::Matrixd >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_transformPositionVelocity_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		if( (!(Luna< osg::Matrixd >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,18903838) ) return false;
		if( (!(Luna< osg::Matrixd >::check(L,3))) ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAngle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAngularVelocity(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addAngularVelocity(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_transformAngleVelocity(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_update(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_beginRender(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,22643526)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_render_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>6 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,22643526)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::GLBeginEndAdapter >::check(L,2)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,5))) ) return false;
		if( luatop>5 && lua_type(L,6)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_render_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2286263) ) return false;
		if( (!(Luna< osg::RenderInfo >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,4))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_endRender(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,22643526)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCurrentSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTextureTileRange(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTextureTile(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPreviousParticle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPreviousParticle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setNextParticle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNextParticle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDepth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDepth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDrawable(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDrawable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setUpTexCoordsAsPartOfConnectedParticleSystem(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck___lt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81629555) ) return false;
		return true;
	}


	// Constructor binds:
	// osgParticle::Particle::Particle()
	static osgParticle::Particle* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::Particle::Particle() function, expected prototype:\nosgParticle::Particle::Particle()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osgParticle::Particle();
	}


	// Function binds:
	// osgParticle::Particle::Shape osgParticle::Particle::getShape() const
	static int _bind_getShape(lua_State *L) {
		if (!_lg_typecheck_getShape(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::Particle::Shape osgParticle::Particle::getShape() const function, expected prototype:\nosgParticle::Particle::Shape osgParticle::Particle::getShape() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Particle* self=(Luna< osgParticle::Particle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osgParticle::Particle::Shape osgParticle::Particle::getShape() const. Got : '%s'\n%s",typeid(Luna< osgParticle::Particle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgParticle::Particle::Shape lret = self->getShape();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgParticle::Particle::setShape(osgParticle::Particle::Shape s)
	static int _bind_setShape(lua_State *L) {
		if (!_lg_typecheck_setShape(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::Particle::setShape(osgParticle::Particle::Shape s) function, expected prototype:\nvoid osgParticle::Particle::setShape(osgParticle::Particle::Shape s)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osgParticle::Particle::Shape s=(osgParticle::Particle::Shape)lua_tointeger(L,2);

		osgParticle::Particle* self=(Luna< osgParticle::Particle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::Particle::setShape(osgParticle::Particle::Shape). Got : '%s'\n%s",typeid(Luna< osgParticle::Particle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setShape(s);

		return 0;
	}

	// bool osgParticle::Particle::isAlive() const
	static int _bind_isAlive(lua_State *L) {
		if (!_lg_typecheck_isAlive(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::Particle::isAlive() const function, expected prototype:\nbool osgParticle::Particle::isAlive() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Particle* self=(Luna< osgParticle::Particle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::Particle::isAlive() const. Got : '%s'\n%s",typeid(Luna< osgParticle::Particle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isAlive();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// double osgParticle::Particle::getLifeTime() const
	static int _bind_getLifeTime(lua_State *L) {
		if (!_lg_typecheck_getLifeTime(L)) {
			luaL_error(L, "luna typecheck failed in double osgParticle::Particle::getLifeTime() const function, expected prototype:\ndouble osgParticle::Particle::getLifeTime() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Particle* self=(Luna< osgParticle::Particle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double osgParticle::Particle::getLifeTime() const. Got : '%s'\n%s",typeid(Luna< osgParticle::Particle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getLifeTime();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double osgParticle::Particle::getAge() const
	static int _bind_getAge(lua_State *L) {
		if (!_lg_typecheck_getAge(L)) {
			luaL_error(L, "luna typecheck failed in double osgParticle::Particle::getAge() const function, expected prototype:\ndouble osgParticle::Particle::getAge() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Particle* self=(Luna< osgParticle::Particle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double osgParticle::Particle::getAge() const. Got : '%s'\n%s",typeid(Luna< osgParticle::Particle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getAge();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const osgParticle::rangef & osgParticle::Particle::getSizeRange() const
	static int _bind_getSizeRange(lua_State *L) {
		if (!_lg_typecheck_getSizeRange(L)) {
			luaL_error(L, "luna typecheck failed in const osgParticle::rangef & osgParticle::Particle::getSizeRange() const function, expected prototype:\nconst osgParticle::rangef & osgParticle::Particle::getSizeRange() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Particle* self=(Luna< osgParticle::Particle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgParticle::rangef & osgParticle::Particle::getSizeRange() const. Got : '%s'\n%s",typeid(Luna< osgParticle::Particle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgParticle::rangef* lret = &self->getSizeRange();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::rangef >::push(L,lret,false);

		return 1;
	}

	// const osgParticle::rangef & osgParticle::Particle::getAlphaRange() const
	static int _bind_getAlphaRange(lua_State *L) {
		if (!_lg_typecheck_getAlphaRange(L)) {
			luaL_error(L, "luna typecheck failed in const osgParticle::rangef & osgParticle::Particle::getAlphaRange() const function, expected prototype:\nconst osgParticle::rangef & osgParticle::Particle::getAlphaRange() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Particle* self=(Luna< osgParticle::Particle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgParticle::rangef & osgParticle::Particle::getAlphaRange() const. Got : '%s'\n%s",typeid(Luna< osgParticle::Particle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgParticle::rangef* lret = &self->getAlphaRange();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::rangef >::push(L,lret,false);

		return 1;
	}

	// const osgParticle::rangev4 & osgParticle::Particle::getColorRange() const
	static int _bind_getColorRange(lua_State *L) {
		if (!_lg_typecheck_getColorRange(L)) {
			luaL_error(L, "luna typecheck failed in const osgParticle::rangev4 & osgParticle::Particle::getColorRange() const function, expected prototype:\nconst osgParticle::rangev4 & osgParticle::Particle::getColorRange() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Particle* self=(Luna< osgParticle::Particle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgParticle::rangev4 & osgParticle::Particle::getColorRange() const. Got : '%s'\n%s",typeid(Luna< osgParticle::Particle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgParticle::rangev4* lret = &self->getColorRange();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::rangev4 >::push(L,lret,false);

		return 1;
	}

	// const osgParticle::Interpolator * osgParticle::Particle::getSizeInterpolator() const
	static int _bind_getSizeInterpolator(lua_State *L) {
		if (!_lg_typecheck_getSizeInterpolator(L)) {
			luaL_error(L, "luna typecheck failed in const osgParticle::Interpolator * osgParticle::Particle::getSizeInterpolator() const function, expected prototype:\nconst osgParticle::Interpolator * osgParticle::Particle::getSizeInterpolator() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Particle* self=(Luna< osgParticle::Particle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgParticle::Interpolator * osgParticle::Particle::getSizeInterpolator() const. Got : '%s'\n%s",typeid(Luna< osgParticle::Particle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgParticle::Interpolator * lret = self->getSizeInterpolator();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::Interpolator >::push(L,lret,false);

		return 1;
	}

	// const osgParticle::Interpolator * osgParticle::Particle::getAlphaInterpolator() const
	static int _bind_getAlphaInterpolator(lua_State *L) {
		if (!_lg_typecheck_getAlphaInterpolator(L)) {
			luaL_error(L, "luna typecheck failed in const osgParticle::Interpolator * osgParticle::Particle::getAlphaInterpolator() const function, expected prototype:\nconst osgParticle::Interpolator * osgParticle::Particle::getAlphaInterpolator() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Particle* self=(Luna< osgParticle::Particle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgParticle::Interpolator * osgParticle::Particle::getAlphaInterpolator() const. Got : '%s'\n%s",typeid(Luna< osgParticle::Particle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgParticle::Interpolator * lret = self->getAlphaInterpolator();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::Interpolator >::push(L,lret,false);

		return 1;
	}

	// const osgParticle::Interpolator * osgParticle::Particle::getColorInterpolator() const
	static int _bind_getColorInterpolator(lua_State *L) {
		if (!_lg_typecheck_getColorInterpolator(L)) {
			luaL_error(L, "luna typecheck failed in const osgParticle::Interpolator * osgParticle::Particle::getColorInterpolator() const function, expected prototype:\nconst osgParticle::Interpolator * osgParticle::Particle::getColorInterpolator() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Particle* self=(Luna< osgParticle::Particle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgParticle::Interpolator * osgParticle::Particle::getColorInterpolator() const. Got : '%s'\n%s",typeid(Luna< osgParticle::Particle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgParticle::Interpolator * lret = self->getColorInterpolator();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::Interpolator >::push(L,lret,false);

		return 1;
	}

	// float osgParticle::Particle::getRadius() const
	static int _bind_getRadius(lua_State *L) {
		if (!_lg_typecheck_getRadius(L)) {
			luaL_error(L, "luna typecheck failed in float osgParticle::Particle::getRadius() const function, expected prototype:\nfloat osgParticle::Particle::getRadius() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Particle* self=(Luna< osgParticle::Particle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgParticle::Particle::getRadius() const. Got : '%s'\n%s",typeid(Luna< osgParticle::Particle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getRadius();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osgParticle::Particle::getMass() const
	static int _bind_getMass(lua_State *L) {
		if (!_lg_typecheck_getMass(L)) {
			luaL_error(L, "luna typecheck failed in float osgParticle::Particle::getMass() const function, expected prototype:\nfloat osgParticle::Particle::getMass() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Particle* self=(Luna< osgParticle::Particle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgParticle::Particle::getMass() const. Got : '%s'\n%s",typeid(Luna< osgParticle::Particle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getMass();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osgParticle::Particle::getMassInv() const
	static int _bind_getMassInv(lua_State *L) {
		if (!_lg_typecheck_getMassInv(L)) {
			luaL_error(L, "luna typecheck failed in float osgParticle::Particle::getMassInv() const function, expected prototype:\nfloat osgParticle::Particle::getMassInv() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Particle* self=(Luna< osgParticle::Particle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgParticle::Particle::getMassInv() const. Got : '%s'\n%s",typeid(Luna< osgParticle::Particle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getMassInv();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const osg::Vec3f & osgParticle::Particle::getPosition() const
	static int _bind_getPosition(lua_State *L) {
		if (!_lg_typecheck_getPosition(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec3f & osgParticle::Particle::getPosition() const function, expected prototype:\nconst osg::Vec3f & osgParticle::Particle::getPosition() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Particle* self=(Luna< osgParticle::Particle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec3f & osgParticle::Particle::getPosition() const. Got : '%s'\n%s",typeid(Luna< osgParticle::Particle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec3f* lret = &self->getPosition();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// const osg::Vec3f & osgParticle::Particle::getVelocity() const
	static int _bind_getVelocity(lua_State *L) {
		if (!_lg_typecheck_getVelocity(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec3f & osgParticle::Particle::getVelocity() const function, expected prototype:\nconst osg::Vec3f & osgParticle::Particle::getVelocity() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Particle* self=(Luna< osgParticle::Particle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec3f & osgParticle::Particle::getVelocity() const. Got : '%s'\n%s",typeid(Luna< osgParticle::Particle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec3f* lret = &self->getVelocity();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// const osg::Vec3f & osgParticle::Particle::getPreviousPosition() const
	static int _bind_getPreviousPosition(lua_State *L) {
		if (!_lg_typecheck_getPreviousPosition(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec3f & osgParticle::Particle::getPreviousPosition() const function, expected prototype:\nconst osg::Vec3f & osgParticle::Particle::getPreviousPosition() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Particle* self=(Luna< osgParticle::Particle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec3f & osgParticle::Particle::getPreviousPosition() const. Got : '%s'\n%s",typeid(Luna< osgParticle::Particle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec3f* lret = &self->getPreviousPosition();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// const osg::Vec3f & osgParticle::Particle::getAngle() const
	static int _bind_getAngle(lua_State *L) {
		if (!_lg_typecheck_getAngle(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec3f & osgParticle::Particle::getAngle() const function, expected prototype:\nconst osg::Vec3f & osgParticle::Particle::getAngle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Particle* self=(Luna< osgParticle::Particle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec3f & osgParticle::Particle::getAngle() const. Got : '%s'\n%s",typeid(Luna< osgParticle::Particle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec3f* lret = &self->getAngle();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// const osg::Vec3f & osgParticle::Particle::getAngularVelocity() const
	static int _bind_getAngularVelocity(lua_State *L) {
		if (!_lg_typecheck_getAngularVelocity(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec3f & osgParticle::Particle::getAngularVelocity() const function, expected prototype:\nconst osg::Vec3f & osgParticle::Particle::getAngularVelocity() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Particle* self=(Luna< osgParticle::Particle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec3f & osgParticle::Particle::getAngularVelocity() const. Got : '%s'\n%s",typeid(Luna< osgParticle::Particle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec3f* lret = &self->getAngularVelocity();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// const osg::Vec3f & osgParticle::Particle::getPreviousAngle() const
	static int _bind_getPreviousAngle(lua_State *L) {
		if (!_lg_typecheck_getPreviousAngle(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec3f & osgParticle::Particle::getPreviousAngle() const function, expected prototype:\nconst osg::Vec3f & osgParticle::Particle::getPreviousAngle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Particle* self=(Luna< osgParticle::Particle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec3f & osgParticle::Particle::getPreviousAngle() const. Got : '%s'\n%s",typeid(Luna< osgParticle::Particle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec3f* lret = &self->getPreviousAngle();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// const osg::Vec4f & osgParticle::Particle::getCurrentColor() const
	static int _bind_getCurrentColor(lua_State *L) {
		if (!_lg_typecheck_getCurrentColor(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec4f & osgParticle::Particle::getCurrentColor() const function, expected prototype:\nconst osg::Vec4f & osgParticle::Particle::getCurrentColor() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Particle* self=(Luna< osgParticle::Particle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec4f & osgParticle::Particle::getCurrentColor() const. Got : '%s'\n%s",typeid(Luna< osgParticle::Particle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec4f* lret = &self->getCurrentColor();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4f >::push(L,lret,false);

		return 1;
	}

	// float osgParticle::Particle::getCurrentAlpha() const
	static int _bind_getCurrentAlpha(lua_State *L) {
		if (!_lg_typecheck_getCurrentAlpha(L)) {
			luaL_error(L, "luna typecheck failed in float osgParticle::Particle::getCurrentAlpha() const function, expected prototype:\nfloat osgParticle::Particle::getCurrentAlpha() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Particle* self=(Luna< osgParticle::Particle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgParticle::Particle::getCurrentAlpha() const. Got : '%s'\n%s",typeid(Luna< osgParticle::Particle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getCurrentAlpha();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osgParticle::Particle::getSTexCoord() const
	static int _bind_getSTexCoord(lua_State *L) {
		if (!_lg_typecheck_getSTexCoord(L)) {
			luaL_error(L, "luna typecheck failed in float osgParticle::Particle::getSTexCoord() const function, expected prototype:\nfloat osgParticle::Particle::getSTexCoord() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Particle* self=(Luna< osgParticle::Particle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgParticle::Particle::getSTexCoord() const. Got : '%s'\n%s",typeid(Luna< osgParticle::Particle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getSTexCoord();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osgParticle::Particle::getTTexCoord() const
	static int _bind_getTTexCoord(lua_State *L) {
		if (!_lg_typecheck_getTTexCoord(L)) {
			luaL_error(L, "luna typecheck failed in float osgParticle::Particle::getTTexCoord() const function, expected prototype:\nfloat osgParticle::Particle::getTTexCoord() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Particle* self=(Luna< osgParticle::Particle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgParticle::Particle::getTTexCoord() const. Got : '%s'\n%s",typeid(Luna< osgParticle::Particle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getTTexCoord();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osgParticle::Particle::getTileS() const
	static int _bind_getTileS(lua_State *L) {
		if (!_lg_typecheck_getTileS(L)) {
			luaL_error(L, "luna typecheck failed in int osgParticle::Particle::getTileS() const function, expected prototype:\nint osgParticle::Particle::getTileS() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Particle* self=(Luna< osgParticle::Particle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int osgParticle::Particle::getTileS() const. Got : '%s'\n%s",typeid(Luna< osgParticle::Particle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getTileS();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osgParticle::Particle::getTileT() const
	static int _bind_getTileT(lua_State *L) {
		if (!_lg_typecheck_getTileT(L)) {
			luaL_error(L, "luna typecheck failed in int osgParticle::Particle::getTileT() const function, expected prototype:\nint osgParticle::Particle::getTileT() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Particle* self=(Luna< osgParticle::Particle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int osgParticle::Particle::getTileT() const. Got : '%s'\n%s",typeid(Luna< osgParticle::Particle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getTileT();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osgParticle::Particle::getNumTiles() const
	static int _bind_getNumTiles(lua_State *L) {
		if (!_lg_typecheck_getNumTiles(L)) {
			luaL_error(L, "luna typecheck failed in int osgParticle::Particle::getNumTiles() const function, expected prototype:\nint osgParticle::Particle::getNumTiles() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Particle* self=(Luna< osgParticle::Particle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int osgParticle::Particle::getNumTiles() const. Got : '%s'\n%s",typeid(Luna< osgParticle::Particle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getNumTiles();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgParticle::Particle::kill()
	static int _bind_kill(lua_State *L) {
		if (!_lg_typecheck_kill(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::Particle::kill() function, expected prototype:\nvoid osgParticle::Particle::kill()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Particle* self=(Luna< osgParticle::Particle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::Particle::kill(). Got : '%s'\n%s",typeid(Luna< osgParticle::Particle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->kill();

		return 0;
	}

	// void osgParticle::Particle::setLifeTime(double t)
	static int _bind_setLifeTime(lua_State *L) {
		if (!_lg_typecheck_setLifeTime(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::Particle::setLifeTime(double t) function, expected prototype:\nvoid osgParticle::Particle::setLifeTime(double t)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double t=(double)lua_tonumber(L,2);

		osgParticle::Particle* self=(Luna< osgParticle::Particle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::Particle::setLifeTime(double). Got : '%s'\n%s",typeid(Luna< osgParticle::Particle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setLifeTime(t);

		return 0;
	}

	// void osgParticle::Particle::setSizeRange(const osgParticle::rangef & r)
	static int _bind_setSizeRange(lua_State *L) {
		if (!_lg_typecheck_setSizeRange(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::Particle::setSizeRange(const osgParticle::rangef & r) function, expected prototype:\nvoid osgParticle::Particle::setSizeRange(const osgParticle::rangef & r)\nClass arguments details:\narg 1 ID = 13510606\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgParticle::rangef* r_ptr=(Luna< osgParticle::range< float > >::checkSubType< osgParticle::rangef >(L,2));
		if( !r_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg r in osgParticle::Particle::setSizeRange function");
		}
		const osgParticle::rangef & r=*r_ptr;

		osgParticle::Particle* self=(Luna< osgParticle::Particle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::Particle::setSizeRange(const osgParticle::rangef &). Got : '%s'\n%s",typeid(Luna< osgParticle::Particle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setSizeRange(r);

		return 0;
	}

	// void osgParticle::Particle::setAlphaRange(const osgParticle::rangef & r)
	static int _bind_setAlphaRange(lua_State *L) {
		if (!_lg_typecheck_setAlphaRange(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::Particle::setAlphaRange(const osgParticle::rangef & r) function, expected prototype:\nvoid osgParticle::Particle::setAlphaRange(const osgParticle::rangef & r)\nClass arguments details:\narg 1 ID = 13510606\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgParticle::rangef* r_ptr=(Luna< osgParticle::range< float > >::checkSubType< osgParticle::rangef >(L,2));
		if( !r_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg r in osgParticle::Particle::setAlphaRange function");
		}
		const osgParticle::rangef & r=*r_ptr;

		osgParticle::Particle* self=(Luna< osgParticle::Particle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::Particle::setAlphaRange(const osgParticle::rangef &). Got : '%s'\n%s",typeid(Luna< osgParticle::Particle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setAlphaRange(r);

		return 0;
	}

	// void osgParticle::Particle::setColorRange(const osgParticle::rangev4 & r)
	static int _bind_setColorRange(lua_State *L) {
		if (!_lg_typecheck_setColorRange(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::Particle::setColorRange(const osgParticle::rangev4 & r) function, expected prototype:\nvoid osgParticle::Particle::setColorRange(const osgParticle::rangev4 & r)\nClass arguments details:\narg 1 ID = 18829254\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgParticle::rangev4* r_ptr=(Luna< osgParticle::range< osg::Vec4f > >::checkSubType< osgParticle::rangev4 >(L,2));
		if( !r_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg r in osgParticle::Particle::setColorRange function");
		}
		const osgParticle::rangev4 & r=*r_ptr;

		osgParticle::Particle* self=(Luna< osgParticle::Particle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::Particle::setColorRange(const osgParticle::rangev4 &). Got : '%s'\n%s",typeid(Luna< osgParticle::Particle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setColorRange(r);

		return 0;
	}

	// void osgParticle::Particle::setSizeInterpolator(osgParticle::Interpolator * ri)
	static int _bind_setSizeInterpolator(lua_State *L) {
		if (!_lg_typecheck_setSizeInterpolator(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::Particle::setSizeInterpolator(osgParticle::Interpolator * ri) function, expected prototype:\nvoid osgParticle::Particle::setSizeInterpolator(osgParticle::Interpolator * ri)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgParticle::Interpolator* ri=(Luna< osg::Referenced >::checkSubType< osgParticle::Interpolator >(L,2));

		osgParticle::Particle* self=(Luna< osgParticle::Particle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::Particle::setSizeInterpolator(osgParticle::Interpolator *). Got : '%s'\n%s",typeid(Luna< osgParticle::Particle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setSizeInterpolator(ri);

		return 0;
	}

	// void osgParticle::Particle::setAlphaInterpolator(osgParticle::Interpolator * ai)
	static int _bind_setAlphaInterpolator(lua_State *L) {
		if (!_lg_typecheck_setAlphaInterpolator(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::Particle::setAlphaInterpolator(osgParticle::Interpolator * ai) function, expected prototype:\nvoid osgParticle::Particle::setAlphaInterpolator(osgParticle::Interpolator * ai)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgParticle::Interpolator* ai=(Luna< osg::Referenced >::checkSubType< osgParticle::Interpolator >(L,2));

		osgParticle::Particle* self=(Luna< osgParticle::Particle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::Particle::setAlphaInterpolator(osgParticle::Interpolator *). Got : '%s'\n%s",typeid(Luna< osgParticle::Particle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setAlphaInterpolator(ai);

		return 0;
	}

	// void osgParticle::Particle::setColorInterpolator(osgParticle::Interpolator * ci)
	static int _bind_setColorInterpolator(lua_State *L) {
		if (!_lg_typecheck_setColorInterpolator(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::Particle::setColorInterpolator(osgParticle::Interpolator * ci) function, expected prototype:\nvoid osgParticle::Particle::setColorInterpolator(osgParticle::Interpolator * ci)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgParticle::Interpolator* ci=(Luna< osg::Referenced >::checkSubType< osgParticle::Interpolator >(L,2));

		osgParticle::Particle* self=(Luna< osgParticle::Particle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::Particle::setColorInterpolator(osgParticle::Interpolator *). Got : '%s'\n%s",typeid(Luna< osgParticle::Particle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setColorInterpolator(ci);

		return 0;
	}

	// void osgParticle::Particle::setRadius(float r)
	static int _bind_setRadius(lua_State *L) {
		if (!_lg_typecheck_setRadius(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::Particle::setRadius(float r) function, expected prototype:\nvoid osgParticle::Particle::setRadius(float r)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float r=(float)lua_tonumber(L,2);

		osgParticle::Particle* self=(Luna< osgParticle::Particle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::Particle::setRadius(float). Got : '%s'\n%s",typeid(Luna< osgParticle::Particle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setRadius(r);

		return 0;
	}

	// void osgParticle::Particle::setMass(float m)
	static int _bind_setMass(lua_State *L) {
		if (!_lg_typecheck_setMass(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::Particle::setMass(float m) function, expected prototype:\nvoid osgParticle::Particle::setMass(float m)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float m=(float)lua_tonumber(L,2);

		osgParticle::Particle* self=(Luna< osgParticle::Particle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::Particle::setMass(float). Got : '%s'\n%s",typeid(Luna< osgParticle::Particle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setMass(m);

		return 0;
	}

	// void osgParticle::Particle::setPosition(const osg::Vec3f & p)
	static int _bind_setPosition(lua_State *L) {
		if (!_lg_typecheck_setPosition(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::Particle::setPosition(const osg::Vec3f & p) function, expected prototype:\nvoid osgParticle::Particle::setPosition(const osg::Vec3f & p)\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* p_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in osgParticle::Particle::setPosition function");
		}
		const osg::Vec3f & p=*p_ptr;

		osgParticle::Particle* self=(Luna< osgParticle::Particle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::Particle::setPosition(const osg::Vec3f &). Got : '%s'\n%s",typeid(Luna< osgParticle::Particle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setPosition(p);

		return 0;
	}

	// void osgParticle::Particle::setVelocity(const osg::Vec3f & v)
	static int _bind_setVelocity(lua_State *L) {
		if (!_lg_typecheck_setVelocity(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::Particle::setVelocity(const osg::Vec3f & v) function, expected prototype:\nvoid osgParticle::Particle::setVelocity(const osg::Vec3f & v)\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* v_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osgParticle::Particle::setVelocity function");
		}
		const osg::Vec3f & v=*v_ptr;

		osgParticle::Particle* self=(Luna< osgParticle::Particle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::Particle::setVelocity(const osg::Vec3f &). Got : '%s'\n%s",typeid(Luna< osgParticle::Particle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setVelocity(v);

		return 0;
	}

	// void osgParticle::Particle::addVelocity(const osg::Vec3f & dv)
	static int _bind_addVelocity(lua_State *L) {
		if (!_lg_typecheck_addVelocity(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::Particle::addVelocity(const osg::Vec3f & dv) function, expected prototype:\nvoid osgParticle::Particle::addVelocity(const osg::Vec3f & dv)\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* dv_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !dv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dv in osgParticle::Particle::addVelocity function");
		}
		const osg::Vec3f & dv=*dv_ptr;

		osgParticle::Particle* self=(Luna< osgParticle::Particle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::Particle::addVelocity(const osg::Vec3f &). Got : '%s'\n%s",typeid(Luna< osgParticle::Particle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addVelocity(dv);

		return 0;
	}

	// void osgParticle::Particle::transformPositionVelocity(const osg::Matrixd & xform)
	static int _bind_transformPositionVelocity_overload_1(lua_State *L) {
		if (!_lg_typecheck_transformPositionVelocity_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::Particle::transformPositionVelocity(const osg::Matrixd & xform) function, expected prototype:\nvoid osgParticle::Particle::transformPositionVelocity(const osg::Matrixd & xform)\nClass arguments details:\narg 1 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrixd* xform_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !xform_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg xform in osgParticle::Particle::transformPositionVelocity function");
		}
		const osg::Matrixd & xform=*xform_ptr;

		osgParticle::Particle* self=(Luna< osgParticle::Particle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::Particle::transformPositionVelocity(const osg::Matrixd &). Got : '%s'\n%s",typeid(Luna< osgParticle::Particle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->transformPositionVelocity(xform);

		return 0;
	}

	// void osgParticle::Particle::transformPositionVelocity(const osg::Matrixd & xform1, const osg::Matrixd & xform2, float r)
	static int _bind_transformPositionVelocity_overload_2(lua_State *L) {
		if (!_lg_typecheck_transformPositionVelocity_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::Particle::transformPositionVelocity(const osg::Matrixd & xform1, const osg::Matrixd & xform2, float r) function, expected prototype:\nvoid osgParticle::Particle::transformPositionVelocity(const osg::Matrixd & xform1, const osg::Matrixd & xform2, float r)\nClass arguments details:\narg 1 ID = 18903838\narg 2 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrixd* xform1_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !xform1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg xform1 in osgParticle::Particle::transformPositionVelocity function");
		}
		const osg::Matrixd & xform1=*xform1_ptr;
		const osg::Matrixd* xform2_ptr=(Luna< osg::Matrixd >::check(L,3));
		if( !xform2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg xform2 in osgParticle::Particle::transformPositionVelocity function");
		}
		const osg::Matrixd & xform2=*xform2_ptr;
		float r=(float)lua_tonumber(L,4);

		osgParticle::Particle* self=(Luna< osgParticle::Particle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::Particle::transformPositionVelocity(const osg::Matrixd &, const osg::Matrixd &, float). Got : '%s'\n%s",typeid(Luna< osgParticle::Particle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->transformPositionVelocity(xform1, xform2, r);

		return 0;
	}

	// Overload binder for osgParticle::Particle::transformPositionVelocity
	static int _bind_transformPositionVelocity(lua_State *L) {
		if (_lg_typecheck_transformPositionVelocity_overload_1(L)) return _bind_transformPositionVelocity_overload_1(L);
		if (_lg_typecheck_transformPositionVelocity_overload_2(L)) return _bind_transformPositionVelocity_overload_2(L);

		luaL_error(L, "error in function transformPositionVelocity, cannot match any of the overloads for function transformPositionVelocity:\n  transformPositionVelocity(const osg::Matrixd &)\n  transformPositionVelocity(const osg::Matrixd &, const osg::Matrixd &, float)\n");
		return 0;
	}

	// void osgParticle::Particle::setAngle(const osg::Vec3f & a)
	static int _bind_setAngle(lua_State *L) {
		if (!_lg_typecheck_setAngle(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::Particle::setAngle(const osg::Vec3f & a) function, expected prototype:\nvoid osgParticle::Particle::setAngle(const osg::Vec3f & a)\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* a_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in osgParticle::Particle::setAngle function");
		}
		const osg::Vec3f & a=*a_ptr;

		osgParticle::Particle* self=(Luna< osgParticle::Particle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::Particle::setAngle(const osg::Vec3f &). Got : '%s'\n%s",typeid(Luna< osgParticle::Particle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setAngle(a);

		return 0;
	}

	// void osgParticle::Particle::setAngularVelocity(const osg::Vec3f & v)
	static int _bind_setAngularVelocity(lua_State *L) {
		if (!_lg_typecheck_setAngularVelocity(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::Particle::setAngularVelocity(const osg::Vec3f & v) function, expected prototype:\nvoid osgParticle::Particle::setAngularVelocity(const osg::Vec3f & v)\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* v_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osgParticle::Particle::setAngularVelocity function");
		}
		const osg::Vec3f & v=*v_ptr;

		osgParticle::Particle* self=(Luna< osgParticle::Particle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::Particle::setAngularVelocity(const osg::Vec3f &). Got : '%s'\n%s",typeid(Luna< osgParticle::Particle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setAngularVelocity(v);

		return 0;
	}

	// void osgParticle::Particle::addAngularVelocity(const osg::Vec3f & dv)
	static int _bind_addAngularVelocity(lua_State *L) {
		if (!_lg_typecheck_addAngularVelocity(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::Particle::addAngularVelocity(const osg::Vec3f & dv) function, expected prototype:\nvoid osgParticle::Particle::addAngularVelocity(const osg::Vec3f & dv)\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* dv_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !dv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dv in osgParticle::Particle::addAngularVelocity function");
		}
		const osg::Vec3f & dv=*dv_ptr;

		osgParticle::Particle* self=(Luna< osgParticle::Particle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::Particle::addAngularVelocity(const osg::Vec3f &). Got : '%s'\n%s",typeid(Luna< osgParticle::Particle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addAngularVelocity(dv);

		return 0;
	}

	// void osgParticle::Particle::transformAngleVelocity(const osg::Matrixd & xform)
	static int _bind_transformAngleVelocity(lua_State *L) {
		if (!_lg_typecheck_transformAngleVelocity(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::Particle::transformAngleVelocity(const osg::Matrixd & xform) function, expected prototype:\nvoid osgParticle::Particle::transformAngleVelocity(const osg::Matrixd & xform)\nClass arguments details:\narg 1 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrixd* xform_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !xform_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg xform in osgParticle::Particle::transformAngleVelocity function");
		}
		const osg::Matrixd & xform=*xform_ptr;

		osgParticle::Particle* self=(Luna< osgParticle::Particle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::Particle::transformAngleVelocity(const osg::Matrixd &). Got : '%s'\n%s",typeid(Luna< osgParticle::Particle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->transformAngleVelocity(xform);

		return 0;
	}

	// bool osgParticle::Particle::update(double dt, bool onlyTimeStamp)
	static int _bind_update(lua_State *L) {
		if (!_lg_typecheck_update(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::Particle::update(double dt, bool onlyTimeStamp) function, expected prototype:\nbool osgParticle::Particle::update(double dt, bool onlyTimeStamp)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double dt=(double)lua_tonumber(L,2);
		bool onlyTimeStamp=(bool)(lua_toboolean(L,3)==1);

		osgParticle::Particle* self=(Luna< osgParticle::Particle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::Particle::update(double, bool). Got : '%s'\n%s",typeid(Luna< osgParticle::Particle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->update(dt, onlyTimeStamp);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgParticle::Particle::beginRender(osg::GLBeginEndAdapter * gl) const
	static int _bind_beginRender(lua_State *L) {
		if (!_lg_typecheck_beginRender(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::Particle::beginRender(osg::GLBeginEndAdapter * gl) const function, expected prototype:\nvoid osgParticle::Particle::beginRender(osg::GLBeginEndAdapter * gl) const\nClass arguments details:\narg 1 ID = 22643526\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::GLBeginEndAdapter* gl=(Luna< osg::GLBeginEndAdapter >::check(L,2));

		osgParticle::Particle* self=(Luna< osgParticle::Particle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::Particle::beginRender(osg::GLBeginEndAdapter *) const. Got : '%s'\n%s",typeid(Luna< osgParticle::Particle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->beginRender(gl);

		return 0;
	}

	// void osgParticle::Particle::render(osg::GLBeginEndAdapter * gl, const osg::Vec3f & xpos, const osg::Vec3f & px, const osg::Vec3f & py, float scale = 1.0f) const
	static int _bind_render_overload_1(lua_State *L) {
		if (!_lg_typecheck_render_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::Particle::render(osg::GLBeginEndAdapter * gl, const osg::Vec3f & xpos, const osg::Vec3f & px, const osg::Vec3f & py, float scale = 1.0f) const function, expected prototype:\nvoid osgParticle::Particle::render(osg::GLBeginEndAdapter * gl, const osg::Vec3f & xpos, const osg::Vec3f & px, const osg::Vec3f & py, float scale = 1.0f) const\nClass arguments details:\narg 1 ID = 22643526\narg 2 ID = 92303204\narg 3 ID = 92303204\narg 4 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::GLBeginEndAdapter* gl=(Luna< osg::GLBeginEndAdapter >::check(L,2));
		const osg::Vec3f* xpos_ptr=(Luna< osg::Vec3f >::check(L,3));
		if( !xpos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg xpos in osgParticle::Particle::render function");
		}
		const osg::Vec3f & xpos=*xpos_ptr;
		const osg::Vec3f* px_ptr=(Luna< osg::Vec3f >::check(L,4));
		if( !px_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg px in osgParticle::Particle::render function");
		}
		const osg::Vec3f & px=*px_ptr;
		const osg::Vec3f* py_ptr=(Luna< osg::Vec3f >::check(L,5));
		if( !py_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg py in osgParticle::Particle::render function");
		}
		const osg::Vec3f & py=*py_ptr;
		float scale=luatop>5 ? (float)lua_tonumber(L,6) : (float)1.0f;

		osgParticle::Particle* self=(Luna< osgParticle::Particle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::Particle::render(osg::GLBeginEndAdapter *, const osg::Vec3f &, const osg::Vec3f &, const osg::Vec3f &, float) const. Got : '%s'\n%s",typeid(Luna< osgParticle::Particle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->render(gl, xpos, px, py, scale);

		return 0;
	}

	// void osgParticle::Particle::render(osg::RenderInfo & renderInfo, const osg::Vec3f & xpos, const osg::Vec3f & xrot) const
	static int _bind_render_overload_2(lua_State *L) {
		if (!_lg_typecheck_render_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::Particle::render(osg::RenderInfo & renderInfo, const osg::Vec3f & xpos, const osg::Vec3f & xrot) const function, expected prototype:\nvoid osgParticle::Particle::render(osg::RenderInfo & renderInfo, const osg::Vec3f & xpos, const osg::Vec3f & xrot) const\nClass arguments details:\narg 1 ID = 2286263\narg 2 ID = 92303204\narg 3 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::RenderInfo* renderInfo_ptr=(Luna< osg::RenderInfo >::check(L,2));
		if( !renderInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg renderInfo in osgParticle::Particle::render function");
		}
		osg::RenderInfo & renderInfo=*renderInfo_ptr;
		const osg::Vec3f* xpos_ptr=(Luna< osg::Vec3f >::check(L,3));
		if( !xpos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg xpos in osgParticle::Particle::render function");
		}
		const osg::Vec3f & xpos=*xpos_ptr;
		const osg::Vec3f* xrot_ptr=(Luna< osg::Vec3f >::check(L,4));
		if( !xrot_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg xrot in osgParticle::Particle::render function");
		}
		const osg::Vec3f & xrot=*xrot_ptr;

		osgParticle::Particle* self=(Luna< osgParticle::Particle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::Particle::render(osg::RenderInfo &, const osg::Vec3f &, const osg::Vec3f &) const. Got : '%s'\n%s",typeid(Luna< osgParticle::Particle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->render(renderInfo, xpos, xrot);

		return 0;
	}

	// Overload binder for osgParticle::Particle::render
	static int _bind_render(lua_State *L) {
		if (_lg_typecheck_render_overload_1(L)) return _bind_render_overload_1(L);
		if (_lg_typecheck_render_overload_2(L)) return _bind_render_overload_2(L);

		luaL_error(L, "error in function render, cannot match any of the overloads for function render:\n  render(osg::GLBeginEndAdapter *, const osg::Vec3f &, const osg::Vec3f &, const osg::Vec3f &, float)\n  render(osg::RenderInfo &, const osg::Vec3f &, const osg::Vec3f &)\n");
		return 0;
	}

	// void osgParticle::Particle::endRender(osg::GLBeginEndAdapter * gl) const
	static int _bind_endRender(lua_State *L) {
		if (!_lg_typecheck_endRender(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::Particle::endRender(osg::GLBeginEndAdapter * gl) const function, expected prototype:\nvoid osgParticle::Particle::endRender(osg::GLBeginEndAdapter * gl) const\nClass arguments details:\narg 1 ID = 22643526\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::GLBeginEndAdapter* gl=(Luna< osg::GLBeginEndAdapter >::check(L,2));

		osgParticle::Particle* self=(Luna< osgParticle::Particle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::Particle::endRender(osg::GLBeginEndAdapter *) const. Got : '%s'\n%s",typeid(Luna< osgParticle::Particle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->endRender(gl);

		return 0;
	}

	// float osgParticle::Particle::getCurrentSize() const
	static int _bind_getCurrentSize(lua_State *L) {
		if (!_lg_typecheck_getCurrentSize(L)) {
			luaL_error(L, "luna typecheck failed in float osgParticle::Particle::getCurrentSize() const function, expected prototype:\nfloat osgParticle::Particle::getCurrentSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Particle* self=(Luna< osgParticle::Particle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgParticle::Particle::getCurrentSize() const. Got : '%s'\n%s",typeid(Luna< osgParticle::Particle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getCurrentSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgParticle::Particle::setTextureTileRange(int sTile, int tTile, int startTile, int endTile)
	static int _bind_setTextureTileRange(lua_State *L) {
		if (!_lg_typecheck_setTextureTileRange(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::Particle::setTextureTileRange(int sTile, int tTile, int startTile, int endTile) function, expected prototype:\nvoid osgParticle::Particle::setTextureTileRange(int sTile, int tTile, int startTile, int endTile)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int sTile=(int)lua_tointeger(L,2);
		int tTile=(int)lua_tointeger(L,3);
		int startTile=(int)lua_tointeger(L,4);
		int endTile=(int)lua_tointeger(L,5);

		osgParticle::Particle* self=(Luna< osgParticle::Particle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::Particle::setTextureTileRange(int, int, int, int). Got : '%s'\n%s",typeid(Luna< osgParticle::Particle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setTextureTileRange(sTile, tTile, startTile, endTile);

		return 0;
	}

	// void osgParticle::Particle::setTextureTile(int sTile, int tTile, int end = -1)
	static int _bind_setTextureTile(lua_State *L) {
		if (!_lg_typecheck_setTextureTile(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::Particle::setTextureTile(int sTile, int tTile, int end = -1) function, expected prototype:\nvoid osgParticle::Particle::setTextureTile(int sTile, int tTile, int end = -1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int sTile=(int)lua_tointeger(L,2);
		int tTile=(int)lua_tointeger(L,3);
		int end=luatop>3 ? (int)lua_tointeger(L,4) : (int)-1;

		osgParticle::Particle* self=(Luna< osgParticle::Particle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::Particle::setTextureTile(int, int, int). Got : '%s'\n%s",typeid(Luna< osgParticle::Particle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setTextureTile(sTile, tTile, end);

		return 0;
	}

	// void osgParticle::Particle::setPreviousParticle(int previous)
	static int _bind_setPreviousParticle(lua_State *L) {
		if (!_lg_typecheck_setPreviousParticle(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::Particle::setPreviousParticle(int previous) function, expected prototype:\nvoid osgParticle::Particle::setPreviousParticle(int previous)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int previous=(int)lua_tointeger(L,2);

		osgParticle::Particle* self=(Luna< osgParticle::Particle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::Particle::setPreviousParticle(int). Got : '%s'\n%s",typeid(Luna< osgParticle::Particle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setPreviousParticle(previous);

		return 0;
	}

	// int osgParticle::Particle::getPreviousParticle() const
	static int _bind_getPreviousParticle(lua_State *L) {
		if (!_lg_typecheck_getPreviousParticle(L)) {
			luaL_error(L, "luna typecheck failed in int osgParticle::Particle::getPreviousParticle() const function, expected prototype:\nint osgParticle::Particle::getPreviousParticle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Particle* self=(Luna< osgParticle::Particle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int osgParticle::Particle::getPreviousParticle() const. Got : '%s'\n%s",typeid(Luna< osgParticle::Particle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getPreviousParticle();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgParticle::Particle::setNextParticle(int next)
	static int _bind_setNextParticle(lua_State *L) {
		if (!_lg_typecheck_setNextParticle(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::Particle::setNextParticle(int next) function, expected prototype:\nvoid osgParticle::Particle::setNextParticle(int next)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int next=(int)lua_tointeger(L,2);

		osgParticle::Particle* self=(Luna< osgParticle::Particle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::Particle::setNextParticle(int). Got : '%s'\n%s",typeid(Luna< osgParticle::Particle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setNextParticle(next);

		return 0;
	}

	// int osgParticle::Particle::getNextParticle() const
	static int _bind_getNextParticle(lua_State *L) {
		if (!_lg_typecheck_getNextParticle(L)) {
			luaL_error(L, "luna typecheck failed in int osgParticle::Particle::getNextParticle() const function, expected prototype:\nint osgParticle::Particle::getNextParticle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Particle* self=(Luna< osgParticle::Particle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int osgParticle::Particle::getNextParticle() const. Got : '%s'\n%s",typeid(Luna< osgParticle::Particle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getNextParticle();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgParticle::Particle::setDepth(double d)
	static int _bind_setDepth(lua_State *L) {
		if (!_lg_typecheck_setDepth(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::Particle::setDepth(double d) function, expected prototype:\nvoid osgParticle::Particle::setDepth(double d)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double d=(double)lua_tonumber(L,2);

		osgParticle::Particle* self=(Luna< osgParticle::Particle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::Particle::setDepth(double). Got : '%s'\n%s",typeid(Luna< osgParticle::Particle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setDepth(d);

		return 0;
	}

	// double osgParticle::Particle::getDepth() const
	static int _bind_getDepth(lua_State *L) {
		if (!_lg_typecheck_getDepth(L)) {
			luaL_error(L, "luna typecheck failed in double osgParticle::Particle::getDepth() const function, expected prototype:\ndouble osgParticle::Particle::getDepth() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Particle* self=(Luna< osgParticle::Particle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double osgParticle::Particle::getDepth() const. Got : '%s'\n%s",typeid(Luna< osgParticle::Particle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getDepth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgParticle::Particle::setDrawable(osg::Drawable * d)
	static int _bind_setDrawable(lua_State *L) {
		if (!_lg_typecheck_setDrawable(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::Particle::setDrawable(osg::Drawable * d) function, expected prototype:\nvoid osgParticle::Particle::setDrawable(osg::Drawable * d)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Drawable* d=(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,2));

		osgParticle::Particle* self=(Luna< osgParticle::Particle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::Particle::setDrawable(osg::Drawable *). Got : '%s'\n%s",typeid(Luna< osgParticle::Particle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setDrawable(d);

		return 0;
	}

	// osg::Drawable * osgParticle::Particle::getDrawable() const
	static int _bind_getDrawable(lua_State *L) {
		if (!_lg_typecheck_getDrawable(L)) {
			luaL_error(L, "luna typecheck failed in osg::Drawable * osgParticle::Particle::getDrawable() const function, expected prototype:\nosg::Drawable * osgParticle::Particle::getDrawable() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Particle* self=(Luna< osgParticle::Particle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Drawable * osgParticle::Particle::getDrawable() const. Got : '%s'\n%s",typeid(Luna< osgParticle::Particle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Drawable * lret = self->getDrawable();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Drawable >::push(L,lret,false);

		return 1;
	}

	// void osgParticle::Particle::setUpTexCoordsAsPartOfConnectedParticleSystem(osgParticle::ParticleSystem * ps)
	static int _bind_setUpTexCoordsAsPartOfConnectedParticleSystem(lua_State *L) {
		if (!_lg_typecheck_setUpTexCoordsAsPartOfConnectedParticleSystem(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::Particle::setUpTexCoordsAsPartOfConnectedParticleSystem(osgParticle::ParticleSystem * ps) function, expected prototype:\nvoid osgParticle::Particle::setUpTexCoordsAsPartOfConnectedParticleSystem(osgParticle::ParticleSystem * ps)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgParticle::ParticleSystem* ps=(Luna< osg::Referenced >::checkSubType< osgParticle::ParticleSystem >(L,2));

		osgParticle::Particle* self=(Luna< osgParticle::Particle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::Particle::setUpTexCoordsAsPartOfConnectedParticleSystem(osgParticle::ParticleSystem *). Got : '%s'\n%s",typeid(Luna< osgParticle::Particle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setUpTexCoordsAsPartOfConnectedParticleSystem(ps);

		return 0;
	}


	// Operator binds:
	// bool osgParticle::Particle::operator<(const osgParticle::Particle & P) const
	static int _bind___lt(lua_State *L) {
		if (!_lg_typecheck___lt(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::Particle::operator<(const osgParticle::Particle & P) const function, expected prototype:\nbool osgParticle::Particle::operator<(const osgParticle::Particle & P) const\nClass arguments details:\narg 1 ID = 81629555\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgParticle::Particle* P_ptr=(Luna< osgParticle::Particle >::check(L,2));
		if( !P_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg P in osgParticle::Particle::operator< function");
		}
		const osgParticle::Particle & P=*P_ptr;

		osgParticle::Particle* self=(Luna< osgParticle::Particle >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::Particle::operator<(const osgParticle::Particle &) const. Got : '%s'\n%s",typeid(Luna< osgParticle::Particle >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator<(P);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

osgParticle::Particle* LunaTraits< osgParticle::Particle >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgParticle_Particle::_bind_ctor(L);
}

void LunaTraits< osgParticle::Particle >::_bind_dtor(osgParticle::Particle* obj) {
	delete obj;
}

const char LunaTraits< osgParticle::Particle >::className[] = "Particle";
const char LunaTraits< osgParticle::Particle >::fullName[] = "osgParticle::Particle";
const char LunaTraits< osgParticle::Particle >::moduleName[] = "osgParticle";
const char* LunaTraits< osgParticle::Particle >::parents[] = {0};
const int LunaTraits< osgParticle::Particle >::hash = 81629555;
const int LunaTraits< osgParticle::Particle >::uniqueIDs[] = {81629555,0};

luna_RegType LunaTraits< osgParticle::Particle >::methods[] = {
	{"getShape", &luna_wrapper_osgParticle_Particle::_bind_getShape},
	{"setShape", &luna_wrapper_osgParticle_Particle::_bind_setShape},
	{"isAlive", &luna_wrapper_osgParticle_Particle::_bind_isAlive},
	{"getLifeTime", &luna_wrapper_osgParticle_Particle::_bind_getLifeTime},
	{"getAge", &luna_wrapper_osgParticle_Particle::_bind_getAge},
	{"getSizeRange", &luna_wrapper_osgParticle_Particle::_bind_getSizeRange},
	{"getAlphaRange", &luna_wrapper_osgParticle_Particle::_bind_getAlphaRange},
	{"getColorRange", &luna_wrapper_osgParticle_Particle::_bind_getColorRange},
	{"getSizeInterpolator", &luna_wrapper_osgParticle_Particle::_bind_getSizeInterpolator},
	{"getAlphaInterpolator", &luna_wrapper_osgParticle_Particle::_bind_getAlphaInterpolator},
	{"getColorInterpolator", &luna_wrapper_osgParticle_Particle::_bind_getColorInterpolator},
	{"getRadius", &luna_wrapper_osgParticle_Particle::_bind_getRadius},
	{"getMass", &luna_wrapper_osgParticle_Particle::_bind_getMass},
	{"getMassInv", &luna_wrapper_osgParticle_Particle::_bind_getMassInv},
	{"getPosition", &luna_wrapper_osgParticle_Particle::_bind_getPosition},
	{"getVelocity", &luna_wrapper_osgParticle_Particle::_bind_getVelocity},
	{"getPreviousPosition", &luna_wrapper_osgParticle_Particle::_bind_getPreviousPosition},
	{"getAngle", &luna_wrapper_osgParticle_Particle::_bind_getAngle},
	{"getAngularVelocity", &luna_wrapper_osgParticle_Particle::_bind_getAngularVelocity},
	{"getPreviousAngle", &luna_wrapper_osgParticle_Particle::_bind_getPreviousAngle},
	{"getCurrentColor", &luna_wrapper_osgParticle_Particle::_bind_getCurrentColor},
	{"getCurrentAlpha", &luna_wrapper_osgParticle_Particle::_bind_getCurrentAlpha},
	{"getSTexCoord", &luna_wrapper_osgParticle_Particle::_bind_getSTexCoord},
	{"getTTexCoord", &luna_wrapper_osgParticle_Particle::_bind_getTTexCoord},
	{"getTileS", &luna_wrapper_osgParticle_Particle::_bind_getTileS},
	{"getTileT", &luna_wrapper_osgParticle_Particle::_bind_getTileT},
	{"getNumTiles", &luna_wrapper_osgParticle_Particle::_bind_getNumTiles},
	{"kill", &luna_wrapper_osgParticle_Particle::_bind_kill},
	{"setLifeTime", &luna_wrapper_osgParticle_Particle::_bind_setLifeTime},
	{"setSizeRange", &luna_wrapper_osgParticle_Particle::_bind_setSizeRange},
	{"setAlphaRange", &luna_wrapper_osgParticle_Particle::_bind_setAlphaRange},
	{"setColorRange", &luna_wrapper_osgParticle_Particle::_bind_setColorRange},
	{"setSizeInterpolator", &luna_wrapper_osgParticle_Particle::_bind_setSizeInterpolator},
	{"setAlphaInterpolator", &luna_wrapper_osgParticle_Particle::_bind_setAlphaInterpolator},
	{"setColorInterpolator", &luna_wrapper_osgParticle_Particle::_bind_setColorInterpolator},
	{"setRadius", &luna_wrapper_osgParticle_Particle::_bind_setRadius},
	{"setMass", &luna_wrapper_osgParticle_Particle::_bind_setMass},
	{"setPosition", &luna_wrapper_osgParticle_Particle::_bind_setPosition},
	{"setVelocity", &luna_wrapper_osgParticle_Particle::_bind_setVelocity},
	{"addVelocity", &luna_wrapper_osgParticle_Particle::_bind_addVelocity},
	{"transformPositionVelocity", &luna_wrapper_osgParticle_Particle::_bind_transformPositionVelocity},
	{"setAngle", &luna_wrapper_osgParticle_Particle::_bind_setAngle},
	{"setAngularVelocity", &luna_wrapper_osgParticle_Particle::_bind_setAngularVelocity},
	{"addAngularVelocity", &luna_wrapper_osgParticle_Particle::_bind_addAngularVelocity},
	{"transformAngleVelocity", &luna_wrapper_osgParticle_Particle::_bind_transformAngleVelocity},
	{"update", &luna_wrapper_osgParticle_Particle::_bind_update},
	{"beginRender", &luna_wrapper_osgParticle_Particle::_bind_beginRender},
	{"render", &luna_wrapper_osgParticle_Particle::_bind_render},
	{"endRender", &luna_wrapper_osgParticle_Particle::_bind_endRender},
	{"getCurrentSize", &luna_wrapper_osgParticle_Particle::_bind_getCurrentSize},
	{"setTextureTileRange", &luna_wrapper_osgParticle_Particle::_bind_setTextureTileRange},
	{"setTextureTile", &luna_wrapper_osgParticle_Particle::_bind_setTextureTile},
	{"setPreviousParticle", &luna_wrapper_osgParticle_Particle::_bind_setPreviousParticle},
	{"getPreviousParticle", &luna_wrapper_osgParticle_Particle::_bind_getPreviousParticle},
	{"setNextParticle", &luna_wrapper_osgParticle_Particle::_bind_setNextParticle},
	{"getNextParticle", &luna_wrapper_osgParticle_Particle::_bind_getNextParticle},
	{"setDepth", &luna_wrapper_osgParticle_Particle::_bind_setDepth},
	{"getDepth", &luna_wrapper_osgParticle_Particle::_bind_getDepth},
	{"setDrawable", &luna_wrapper_osgParticle_Particle::_bind_setDrawable},
	{"getDrawable", &luna_wrapper_osgParticle_Particle::_bind_getDrawable},
	{"setUpTexCoordsAsPartOfConnectedParticleSystem", &luna_wrapper_osgParticle_Particle::_bind_setUpTexCoordsAsPartOfConnectedParticleSystem},
	{"__lt", &luna_wrapper_osgParticle_Particle::_bind___lt},
	{"dynCast", &luna_wrapper_osgParticle_Particle::_bind_dynCast},
	{"__eq", &luna_wrapper_osgParticle_Particle::_bind___eq},
	{"fromVoid", &luna_wrapper_osgParticle_Particle::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgParticle_Particle::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< osgParticle::Particle >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgParticle::Particle >::enumValues[] = {
	{"INVALID_INDEX", osgParticle::Particle::INVALID_INDEX},
	{"POINT", osgParticle::Particle::POINT},
	{"QUAD", osgParticle::Particle::QUAD},
	{"QUAD_TRIANGLESTRIP", osgParticle::Particle::QUAD_TRIANGLESTRIP},
	{"HEXAGON", osgParticle::Particle::HEXAGON},
	{"LINE", osgParticle::Particle::LINE},
	{"USER", osgParticle::Particle::USER},
	{0,0}
};



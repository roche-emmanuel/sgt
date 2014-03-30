#include <plug_common.h>

class luna_wrapper_osgParticle_DomainOperator_Domain {
public:
	typedef Luna< osgParticle::DomainOperator::Domain > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,60781756) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgParticle::DomainOperator::Domain*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osgParticle::DomainOperator::Domain* rhs =(Luna< osgParticle::DomainOperator::Domain >::check(L,2));
		osgParticle::DomainOperator::Domain* self=(Luna< osgParticle::DomainOperator::Domain >::check(L,1));
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

		osgParticle::DomainOperator::Domain* self= (osgParticle::DomainOperator::Domain*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgParticle::DomainOperator::Domain >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,60781756) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osgParticle::DomainOperator::Domain >::check(L,1));
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

		osgParticle::DomainOperator::Domain* self=(Luna< osgParticle::DomainOperator::Domain >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgParticle::DomainOperator::Domain");
		
		return luna_dynamicCast(L,converters,"osgParticle::DomainOperator::Domain",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getPlane(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getV1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getV2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getV3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getS1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getS2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getR1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getR2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setPlane(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,86970521) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setV1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setV2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setV3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setS1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setS2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setR1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setR2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgParticle::DomainOperator::Domain::Domain(osgParticle::DomainOperator::Domain::Type t)
	static osgParticle::DomainOperator::Domain* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::DomainOperator::Domain::Domain(osgParticle::DomainOperator::Domain::Type t) function, expected prototype:\nosgParticle::DomainOperator::Domain::Domain(osgParticle::DomainOperator::Domain::Type t)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osgParticle::DomainOperator::Domain::Type t=(osgParticle::DomainOperator::Domain::Type)lua_tointeger(L,1);

		return new osgParticle::DomainOperator::Domain(t);
	}


	// Function binds:
	// osg::Plane osgParticle::DomainOperator::Domain::plane()
	static int _bind_getPlane(lua_State *L) {
		if (!_lg_typecheck_getPlane(L)) {
			luaL_error(L, "luna typecheck failed in osg::Plane osgParticle::DomainOperator::Domain::plane() function, expected prototype:\nosg::Plane osgParticle::DomainOperator::Domain::plane()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::DomainOperator::Domain* self=(Luna< osgParticle::DomainOperator::Domain >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Plane osgParticle::DomainOperator::Domain::plane(). Got : '%s'\n%s",typeid(Luna< osgParticle::DomainOperator::Domain >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Plane* lret = &self->plane;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Plane >::push(L,lret,false);

		return 1;
	}

	// osg::Vec3f osgParticle::DomainOperator::Domain::v1()
	static int _bind_getV1(lua_State *L) {
		if (!_lg_typecheck_getV1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3f osgParticle::DomainOperator::Domain::v1() function, expected prototype:\nosg::Vec3f osgParticle::DomainOperator::Domain::v1()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::DomainOperator::Domain* self=(Luna< osgParticle::DomainOperator::Domain >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3f osgParticle::DomainOperator::Domain::v1(). Got : '%s'\n%s",typeid(Luna< osgParticle::DomainOperator::Domain >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec3f* lret = &self->v1;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// osg::Vec3f osgParticle::DomainOperator::Domain::v2()
	static int _bind_getV2(lua_State *L) {
		if (!_lg_typecheck_getV2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3f osgParticle::DomainOperator::Domain::v2() function, expected prototype:\nosg::Vec3f osgParticle::DomainOperator::Domain::v2()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::DomainOperator::Domain* self=(Luna< osgParticle::DomainOperator::Domain >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3f osgParticle::DomainOperator::Domain::v2(). Got : '%s'\n%s",typeid(Luna< osgParticle::DomainOperator::Domain >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec3f* lret = &self->v2;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// osg::Vec3f osgParticle::DomainOperator::Domain::v3()
	static int _bind_getV3(lua_State *L) {
		if (!_lg_typecheck_getV3(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3f osgParticle::DomainOperator::Domain::v3() function, expected prototype:\nosg::Vec3f osgParticle::DomainOperator::Domain::v3()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::DomainOperator::Domain* self=(Luna< osgParticle::DomainOperator::Domain >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3f osgParticle::DomainOperator::Domain::v3(). Got : '%s'\n%s",typeid(Luna< osgParticle::DomainOperator::Domain >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec3f* lret = &self->v3;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// osg::Vec3f osgParticle::DomainOperator::Domain::s1()
	static int _bind_getS1(lua_State *L) {
		if (!_lg_typecheck_getS1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3f osgParticle::DomainOperator::Domain::s1() function, expected prototype:\nosg::Vec3f osgParticle::DomainOperator::Domain::s1()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::DomainOperator::Domain* self=(Luna< osgParticle::DomainOperator::Domain >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3f osgParticle::DomainOperator::Domain::s1(). Got : '%s'\n%s",typeid(Luna< osgParticle::DomainOperator::Domain >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec3f* lret = &self->s1;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// osg::Vec3f osgParticle::DomainOperator::Domain::s2()
	static int _bind_getS2(lua_State *L) {
		if (!_lg_typecheck_getS2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3f osgParticle::DomainOperator::Domain::s2() function, expected prototype:\nosg::Vec3f osgParticle::DomainOperator::Domain::s2()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::DomainOperator::Domain* self=(Luna< osgParticle::DomainOperator::Domain >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3f osgParticle::DomainOperator::Domain::s2(). Got : '%s'\n%s",typeid(Luna< osgParticle::DomainOperator::Domain >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec3f* lret = &self->s2;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// float osgParticle::DomainOperator::Domain::r1()
	static int _bind_getR1(lua_State *L) {
		if (!_lg_typecheck_getR1(L)) {
			luaL_error(L, "luna typecheck failed in float osgParticle::DomainOperator::Domain::r1() function, expected prototype:\nfloat osgParticle::DomainOperator::Domain::r1()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::DomainOperator::Domain* self=(Luna< osgParticle::DomainOperator::Domain >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgParticle::DomainOperator::Domain::r1(). Got : '%s'\n%s",typeid(Luna< osgParticle::DomainOperator::Domain >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->r1;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osgParticle::DomainOperator::Domain::r2()
	static int _bind_getR2(lua_State *L) {
		if (!_lg_typecheck_getR2(L)) {
			luaL_error(L, "luna typecheck failed in float osgParticle::DomainOperator::Domain::r2() function, expected prototype:\nfloat osgParticle::DomainOperator::Domain::r2()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::DomainOperator::Domain* self=(Luna< osgParticle::DomainOperator::Domain >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgParticle::DomainOperator::Domain::r2(). Got : '%s'\n%s",typeid(Luna< osgParticle::DomainOperator::Domain >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->r2;
		lua_pushnumber(L,lret);

		return 1;
	}

	// osgParticle::DomainOperator::Domain::Type osgParticle::DomainOperator::Domain::type()
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::DomainOperator::Domain::Type osgParticle::DomainOperator::Domain::type() function, expected prototype:\nosgParticle::DomainOperator::Domain::Type osgParticle::DomainOperator::Domain::type()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::DomainOperator::Domain* self=(Luna< osgParticle::DomainOperator::Domain >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osgParticle::DomainOperator::Domain::Type osgParticle::DomainOperator::Domain::type(). Got : '%s'\n%s",typeid(Luna< osgParticle::DomainOperator::Domain >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgParticle::DomainOperator::Domain::Type lret = self->type;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgParticle::DomainOperator::Domain::plane(osg::Plane value)
	static int _bind_setPlane(lua_State *L) {
		if (!_lg_typecheck_setPlane(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::DomainOperator::Domain::plane(osg::Plane value) function, expected prototype:\nvoid osgParticle::DomainOperator::Domain::plane(osg::Plane value)\nClass arguments details:\narg 1 ID = 86970521\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Plane* value_ptr=(Luna< osg::Plane >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgParticle::DomainOperator::Domain::plane function");
		}
		osg::Plane value=*value_ptr;

		osgParticle::DomainOperator::Domain* self=(Luna< osgParticle::DomainOperator::Domain >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::DomainOperator::Domain::plane(osg::Plane). Got : '%s'\n%s",typeid(Luna< osgParticle::DomainOperator::Domain >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->plane = value;

		return 0;
	}

	// void osgParticle::DomainOperator::Domain::v1(osg::Vec3f value)
	static int _bind_setV1(lua_State *L) {
		if (!_lg_typecheck_setV1(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::DomainOperator::Domain::v1(osg::Vec3f value) function, expected prototype:\nvoid osgParticle::DomainOperator::Domain::v1(osg::Vec3f value)\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec3f* value_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgParticle::DomainOperator::Domain::v1 function");
		}
		osg::Vec3f value=*value_ptr;

		osgParticle::DomainOperator::Domain* self=(Luna< osgParticle::DomainOperator::Domain >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::DomainOperator::Domain::v1(osg::Vec3f). Got : '%s'\n%s",typeid(Luna< osgParticle::DomainOperator::Domain >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->v1 = value;

		return 0;
	}

	// void osgParticle::DomainOperator::Domain::v2(osg::Vec3f value)
	static int _bind_setV2(lua_State *L) {
		if (!_lg_typecheck_setV2(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::DomainOperator::Domain::v2(osg::Vec3f value) function, expected prototype:\nvoid osgParticle::DomainOperator::Domain::v2(osg::Vec3f value)\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec3f* value_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgParticle::DomainOperator::Domain::v2 function");
		}
		osg::Vec3f value=*value_ptr;

		osgParticle::DomainOperator::Domain* self=(Luna< osgParticle::DomainOperator::Domain >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::DomainOperator::Domain::v2(osg::Vec3f). Got : '%s'\n%s",typeid(Luna< osgParticle::DomainOperator::Domain >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->v2 = value;

		return 0;
	}

	// void osgParticle::DomainOperator::Domain::v3(osg::Vec3f value)
	static int _bind_setV3(lua_State *L) {
		if (!_lg_typecheck_setV3(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::DomainOperator::Domain::v3(osg::Vec3f value) function, expected prototype:\nvoid osgParticle::DomainOperator::Domain::v3(osg::Vec3f value)\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec3f* value_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgParticle::DomainOperator::Domain::v3 function");
		}
		osg::Vec3f value=*value_ptr;

		osgParticle::DomainOperator::Domain* self=(Luna< osgParticle::DomainOperator::Domain >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::DomainOperator::Domain::v3(osg::Vec3f). Got : '%s'\n%s",typeid(Luna< osgParticle::DomainOperator::Domain >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->v3 = value;

		return 0;
	}

	// void osgParticle::DomainOperator::Domain::s1(osg::Vec3f value)
	static int _bind_setS1(lua_State *L) {
		if (!_lg_typecheck_setS1(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::DomainOperator::Domain::s1(osg::Vec3f value) function, expected prototype:\nvoid osgParticle::DomainOperator::Domain::s1(osg::Vec3f value)\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec3f* value_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgParticle::DomainOperator::Domain::s1 function");
		}
		osg::Vec3f value=*value_ptr;

		osgParticle::DomainOperator::Domain* self=(Luna< osgParticle::DomainOperator::Domain >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::DomainOperator::Domain::s1(osg::Vec3f). Got : '%s'\n%s",typeid(Luna< osgParticle::DomainOperator::Domain >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->s1 = value;

		return 0;
	}

	// void osgParticle::DomainOperator::Domain::s2(osg::Vec3f value)
	static int _bind_setS2(lua_State *L) {
		if (!_lg_typecheck_setS2(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::DomainOperator::Domain::s2(osg::Vec3f value) function, expected prototype:\nvoid osgParticle::DomainOperator::Domain::s2(osg::Vec3f value)\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec3f* value_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgParticle::DomainOperator::Domain::s2 function");
		}
		osg::Vec3f value=*value_ptr;

		osgParticle::DomainOperator::Domain* self=(Luna< osgParticle::DomainOperator::Domain >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::DomainOperator::Domain::s2(osg::Vec3f). Got : '%s'\n%s",typeid(Luna< osgParticle::DomainOperator::Domain >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->s2 = value;

		return 0;
	}

	// void osgParticle::DomainOperator::Domain::r1(float value)
	static int _bind_setR1(lua_State *L) {
		if (!_lg_typecheck_setR1(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::DomainOperator::Domain::r1(float value) function, expected prototype:\nvoid osgParticle::DomainOperator::Domain::r1(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		osgParticle::DomainOperator::Domain* self=(Luna< osgParticle::DomainOperator::Domain >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::DomainOperator::Domain::r1(float). Got : '%s'\n%s",typeid(Luna< osgParticle::DomainOperator::Domain >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->r1 = value;

		return 0;
	}

	// void osgParticle::DomainOperator::Domain::r2(float value)
	static int _bind_setR2(lua_State *L) {
		if (!_lg_typecheck_setR2(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::DomainOperator::Domain::r2(float value) function, expected prototype:\nvoid osgParticle::DomainOperator::Domain::r2(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		osgParticle::DomainOperator::Domain* self=(Luna< osgParticle::DomainOperator::Domain >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::DomainOperator::Domain::r2(float). Got : '%s'\n%s",typeid(Luna< osgParticle::DomainOperator::Domain >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->r2 = value;

		return 0;
	}

	// void osgParticle::DomainOperator::Domain::type(osgParticle::DomainOperator::Domain::Type value)
	static int _bind_setType(lua_State *L) {
		if (!_lg_typecheck_setType(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::DomainOperator::Domain::type(osgParticle::DomainOperator::Domain::Type value) function, expected prototype:\nvoid osgParticle::DomainOperator::Domain::type(osgParticle::DomainOperator::Domain::Type value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osgParticle::DomainOperator::Domain::Type value=(osgParticle::DomainOperator::Domain::Type)lua_tointeger(L,2);

		osgParticle::DomainOperator::Domain* self=(Luna< osgParticle::DomainOperator::Domain >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::DomainOperator::Domain::type(osgParticle::DomainOperator::Domain::Type). Got : '%s'\n%s",typeid(Luna< osgParticle::DomainOperator::Domain >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->type = value;

		return 0;
	}


	// Operator binds:

};

osgParticle::DomainOperator::Domain* LunaTraits< osgParticle::DomainOperator::Domain >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgParticle_DomainOperator_Domain::_bind_ctor(L);
}

void LunaTraits< osgParticle::DomainOperator::Domain >::_bind_dtor(osgParticle::DomainOperator::Domain* obj) {
	delete obj;
}

const char LunaTraits< osgParticle::DomainOperator::Domain >::className[] = "DomainOperator_Domain";
const char LunaTraits< osgParticle::DomainOperator::Domain >::fullName[] = "osgParticle::DomainOperator::Domain";
const char LunaTraits< osgParticle::DomainOperator::Domain >::moduleName[] = "osgParticle";
const char* LunaTraits< osgParticle::DomainOperator::Domain >::parents[] = {0};
const int LunaTraits< osgParticle::DomainOperator::Domain >::hash = 60781756;
const int LunaTraits< osgParticle::DomainOperator::Domain >::uniqueIDs[] = {60781756,0};

luna_RegType LunaTraits< osgParticle::DomainOperator::Domain >::methods[] = {
	{"getPlane", &luna_wrapper_osgParticle_DomainOperator_Domain::_bind_getPlane},
	{"getV1", &luna_wrapper_osgParticle_DomainOperator_Domain::_bind_getV1},
	{"getV2", &luna_wrapper_osgParticle_DomainOperator_Domain::_bind_getV2},
	{"getV3", &luna_wrapper_osgParticle_DomainOperator_Domain::_bind_getV3},
	{"getS1", &luna_wrapper_osgParticle_DomainOperator_Domain::_bind_getS1},
	{"getS2", &luna_wrapper_osgParticle_DomainOperator_Domain::_bind_getS2},
	{"getR1", &luna_wrapper_osgParticle_DomainOperator_Domain::_bind_getR1},
	{"getR2", &luna_wrapper_osgParticle_DomainOperator_Domain::_bind_getR2},
	{"getType", &luna_wrapper_osgParticle_DomainOperator_Domain::_bind_getType},
	{"setPlane", &luna_wrapper_osgParticle_DomainOperator_Domain::_bind_setPlane},
	{"setV1", &luna_wrapper_osgParticle_DomainOperator_Domain::_bind_setV1},
	{"setV2", &luna_wrapper_osgParticle_DomainOperator_Domain::_bind_setV2},
	{"setV3", &luna_wrapper_osgParticle_DomainOperator_Domain::_bind_setV3},
	{"setS1", &luna_wrapper_osgParticle_DomainOperator_Domain::_bind_setS1},
	{"setS2", &luna_wrapper_osgParticle_DomainOperator_Domain::_bind_setS2},
	{"setR1", &luna_wrapper_osgParticle_DomainOperator_Domain::_bind_setR1},
	{"setR2", &luna_wrapper_osgParticle_DomainOperator_Domain::_bind_setR2},
	{"setType", &luna_wrapper_osgParticle_DomainOperator_Domain::_bind_setType},
	{"dynCast", &luna_wrapper_osgParticle_DomainOperator_Domain::_bind_dynCast},
	{"__eq", &luna_wrapper_osgParticle_DomainOperator_Domain::_bind___eq},
	{"fromVoid", &luna_wrapper_osgParticle_DomainOperator_Domain::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgParticle_DomainOperator_Domain::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< osgParticle::DomainOperator::Domain >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgParticle::DomainOperator::Domain >::enumValues[] = {
	{"UNDEFINED_DOMAIN", osgParticle::DomainOperator::Domain::UNDEFINED_DOMAIN},
	{"POINT_DOMAIN", osgParticle::DomainOperator::Domain::POINT_DOMAIN},
	{"LINE_DOMAIN", osgParticle::DomainOperator::Domain::LINE_DOMAIN},
	{"TRI_DOMAIN", osgParticle::DomainOperator::Domain::TRI_DOMAIN},
	{"RECT_DOMAIN", osgParticle::DomainOperator::Domain::RECT_DOMAIN},
	{"PLANE_DOMAIN", osgParticle::DomainOperator::Domain::PLANE_DOMAIN},
	{"SPHERE_DOMAIN", osgParticle::DomainOperator::Domain::SPHERE_DOMAIN},
	{"BOX_DOMAIN", osgParticle::DomainOperator::Domain::BOX_DOMAIN},
	{"DISK_DOMAIN", osgParticle::DomainOperator::Domain::DISK_DOMAIN},
	{0,0}
};



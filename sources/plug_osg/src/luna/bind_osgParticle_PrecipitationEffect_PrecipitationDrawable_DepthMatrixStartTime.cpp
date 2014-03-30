#include <plug_common.h>

class luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable_DepthMatrixStartTime {
public:
	typedef Luna< osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,87684634) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime* rhs =(Luna< osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime >::check(L,2));
		osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime* self=(Luna< osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime >::check(L,1));
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

		osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime* self= (osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,87684634) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime >::check(L,1));
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

		osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime* self=(Luna< osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime");
		
		return luna_dynamicCast(L,converters,"osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getDepth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getStartTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getModelview(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDepth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setStartTime(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setModelview(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck___lt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,87684634) ) return false;
		return true;
	}


	// Constructor binds:

	// Function binds:
	// float osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime::depth()
	static int _bind_getDepth(lua_State *L) {
		if (!_lg_typecheck_getDepth(L)) {
			luaL_error(L, "luna typecheck failed in float osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime::depth() function, expected prototype:\nfloat osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime::depth()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime* self=(Luna< osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime::depth(). Got : '%s'\n%s",typeid(Luna< osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->depth;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime::startTime()
	static int _bind_getStartTime(lua_State *L) {
		if (!_lg_typecheck_getStartTime(L)) {
			luaL_error(L, "luna typecheck failed in float osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime::startTime() function, expected prototype:\nfloat osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime::startTime()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime* self=(Luna< osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime::startTime(). Got : '%s'\n%s",typeid(Luna< osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->startTime;
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::Matrixd osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime::modelview()
	static int _bind_getModelview(lua_State *L) {
		if (!_lg_typecheck_getModelview(L)) {
			luaL_error(L, "luna typecheck failed in osg::Matrixd osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime::modelview() function, expected prototype:\nosg::Matrixd osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime::modelview()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime* self=(Luna< osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Matrixd osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime::modelview(). Got : '%s'\n%s",typeid(Luna< osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Matrixd* lret = &self->modelview;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,false);

		return 1;
	}

	// void osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime::depth(float value)
	static int _bind_setDepth(lua_State *L) {
		if (!_lg_typecheck_setDepth(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime::depth(float value) function, expected prototype:\nvoid osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime::depth(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime* self=(Luna< osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime::depth(float). Got : '%s'\n%s",typeid(Luna< osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->depth = value;

		return 0;
	}

	// void osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime::startTime(float value)
	static int _bind_setStartTime(lua_State *L) {
		if (!_lg_typecheck_setStartTime(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime::startTime(float value) function, expected prototype:\nvoid osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime::startTime(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime* self=(Luna< osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime::startTime(float). Got : '%s'\n%s",typeid(Luna< osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->startTime = value;

		return 0;
	}

	// void osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime::modelview(osg::Matrixd value)
	static int _bind_setModelview(lua_State *L) {
		if (!_lg_typecheck_setModelview(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime::modelview(osg::Matrixd value) function, expected prototype:\nvoid osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime::modelview(osg::Matrixd value)\nClass arguments details:\narg 1 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Matrixd* value_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime::modelview function");
		}
		osg::Matrixd value=*value_ptr;

		osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime* self=(Luna< osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime::modelview(osg::Matrixd). Got : '%s'\n%s",typeid(Luna< osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->modelview = value;

		return 0;
	}


	// Operator binds:
	// bool osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime::operator<(const osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime & rhs) const
	static int _bind___lt(lua_State *L) {
		if (!_lg_typecheck___lt(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime::operator<(const osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime & rhs) const function, expected prototype:\nbool osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime::operator<(const osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime & rhs) const\nClass arguments details:\narg 1 ID = 87684634\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime* rhs_ptr=(Luna< osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime::operator< function");
		}
		const osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime & rhs=*rhs_ptr;

		osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime* self=(Luna< osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime::operator<(const osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime &) const. Got : '%s'\n%s",typeid(Luna< osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator<(rhs);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime* LunaTraits< osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime >::_bind_dtor(osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime* obj) {
	delete obj;
}

const char LunaTraits< osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime >::className[] = "PrecipitationEffect_PrecipitationDrawable_DepthMatrixStartTime";
const char LunaTraits< osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime >::fullName[] = "osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime";
const char LunaTraits< osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime >::moduleName[] = "osgParticle";
const char* LunaTraits< osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime >::parents[] = {0};
const int LunaTraits< osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime >::hash = 87684634;
const int LunaTraits< osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime >::uniqueIDs[] = {87684634,0};

luna_RegType LunaTraits< osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime >::methods[] = {
	{"getDepth", &luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable_DepthMatrixStartTime::_bind_getDepth},
	{"getStartTime", &luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable_DepthMatrixStartTime::_bind_getStartTime},
	{"getModelview", &luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable_DepthMatrixStartTime::_bind_getModelview},
	{"setDepth", &luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable_DepthMatrixStartTime::_bind_setDepth},
	{"setStartTime", &luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable_DepthMatrixStartTime::_bind_setStartTime},
	{"setModelview", &luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable_DepthMatrixStartTime::_bind_setModelview},
	{"__lt", &luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable_DepthMatrixStartTime::_bind___lt},
	{"dynCast", &luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable_DepthMatrixStartTime::_bind_dynCast},
	{"__eq", &luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable_DepthMatrixStartTime::_bind___eq},
	{"fromVoid", &luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable_DepthMatrixStartTime::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable_DepthMatrixStartTime::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime >::enumValues[] = {
	{0,0}
};



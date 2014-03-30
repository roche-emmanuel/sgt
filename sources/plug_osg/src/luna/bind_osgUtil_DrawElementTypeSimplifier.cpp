#include <plug_common.h>

class luna_wrapper_osgUtil_DrawElementTypeSimplifier {
public:
	typedef Luna< osgUtil::DrawElementTypeSimplifier > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,96401270) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgUtil::DrawElementTypeSimplifier*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::DrawElementTypeSimplifier* rhs =(Luna< osgUtil::DrawElementTypeSimplifier >::check(L,2));
		osgUtil::DrawElementTypeSimplifier* self=(Luna< osgUtil::DrawElementTypeSimplifier >::check(L,1));
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

		osgUtil::DrawElementTypeSimplifier* self= (osgUtil::DrawElementTypeSimplifier*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgUtil::DrawElementTypeSimplifier >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,96401270) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osgUtil::DrawElementTypeSimplifier >::check(L,1));
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

		osgUtil::DrawElementTypeSimplifier* self=(Luna< osgUtil::DrawElementTypeSimplifier >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgUtil::DrawElementTypeSimplifier");
		
		return luna_dynamicCast(L,converters,"osgUtil::DrawElementTypeSimplifier",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_simplify(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// void osgUtil::DrawElementTypeSimplifier::simplify(osg::Geometry & geometry) const
	static int _bind_simplify(lua_State *L) {
		if (!_lg_typecheck_simplify(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::DrawElementTypeSimplifier::simplify(osg::Geometry & geometry) const function, expected prototype:\nvoid osgUtil::DrawElementTypeSimplifier::simplify(osg::Geometry & geometry) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Geometry* geometry_ptr=(Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,2));
		if( !geometry_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg geometry in osgUtil::DrawElementTypeSimplifier::simplify function");
		}
		osg::Geometry & geometry=*geometry_ptr;

		osgUtil::DrawElementTypeSimplifier* self=(Luna< osgUtil::DrawElementTypeSimplifier >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::DrawElementTypeSimplifier::simplify(osg::Geometry &) const. Got : '%s'\n%s",typeid(Luna< osgUtil::DrawElementTypeSimplifier >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->simplify(geometry);

		return 0;
	}


	// Operator binds:

};

osgUtil::DrawElementTypeSimplifier* LunaTraits< osgUtil::DrawElementTypeSimplifier >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osgUtil::DrawElementTypeSimplifier >::_bind_dtor(osgUtil::DrawElementTypeSimplifier* obj) {
	delete obj;
}

const char LunaTraits< osgUtil::DrawElementTypeSimplifier >::className[] = "DrawElementTypeSimplifier";
const char LunaTraits< osgUtil::DrawElementTypeSimplifier >::fullName[] = "osgUtil::DrawElementTypeSimplifier";
const char LunaTraits< osgUtil::DrawElementTypeSimplifier >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::DrawElementTypeSimplifier >::parents[] = {0};
const int LunaTraits< osgUtil::DrawElementTypeSimplifier >::hash = 96401270;
const int LunaTraits< osgUtil::DrawElementTypeSimplifier >::uniqueIDs[] = {96401270,0};

luna_RegType LunaTraits< osgUtil::DrawElementTypeSimplifier >::methods[] = {
	{"simplify", &luna_wrapper_osgUtil_DrawElementTypeSimplifier::_bind_simplify},
	{"dynCast", &luna_wrapper_osgUtil_DrawElementTypeSimplifier::_bind_dynCast},
	{"__eq", &luna_wrapper_osgUtil_DrawElementTypeSimplifier::_bind___eq},
	{"fromVoid", &luna_wrapper_osgUtil_DrawElementTypeSimplifier::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgUtil_DrawElementTypeSimplifier::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::DrawElementTypeSimplifier >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::DrawElementTypeSimplifier >::enumValues[] = {
	{0,0}
};



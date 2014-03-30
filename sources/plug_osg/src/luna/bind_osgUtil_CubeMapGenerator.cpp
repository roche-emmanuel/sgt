#include <plug_common.h>

#include <luna/wrappers/wrapper_osgUtil_CubeMapGenerator.h>

class luna_wrapper_osgUtil_CubeMapGenerator {
public:
	typedef Luna< osgUtil::CubeMapGenerator > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<osg::Referenced,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
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

		osgUtil::CubeMapGenerator* self= (osgUtil::CubeMapGenerator*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgUtil::CubeMapGenerator >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		//osgUtil::CubeMapGenerator* ptr= dynamic_cast< osgUtil::CubeMapGenerator* >(Luna< osg::Referenced >::check(L,1));
		osgUtil::CubeMapGenerator* ptr= luna_caster< osg::Referenced, osgUtil::CubeMapGenerator >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::CubeMapGenerator >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osgUtil::CubeMapGenerator >(L,2))) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,27134364) ) return false;
		if( luatop>2 && (!(Luna< osg::CopyOp >::check(L,3))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getImage_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getImage_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_generateMap(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgUtil::CubeMapGenerator::CubeMapGenerator(lua_Table * data, int texture_size = 64)
	static osgUtil::CubeMapGenerator* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::CubeMapGenerator::CubeMapGenerator(lua_Table * data, int texture_size = 64) function, expected prototype:\nosgUtil::CubeMapGenerator::CubeMapGenerator(lua_Table * data, int texture_size = 64)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int texture_size=luatop>1 ? (int)lua_tointeger(L,2) : (int)64;

		return new wrapper_osgUtil_CubeMapGenerator(L,NULL, texture_size);
	}

	// osgUtil::CubeMapGenerator::CubeMapGenerator(lua_Table * data, const osgUtil::CubeMapGenerator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgUtil::CubeMapGenerator* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::CubeMapGenerator::CubeMapGenerator(lua_Table * data, const osgUtil::CubeMapGenerator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgUtil::CubeMapGenerator::CubeMapGenerator(lua_Table * data, const osgUtil::CubeMapGenerator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osgUtil::CubeMapGenerator* copy_ptr=(Luna< osg::Referenced >::checkSubType< osgUtil::CubeMapGenerator >(L,2));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgUtil::CubeMapGenerator::CubeMapGenerator function");
		}
		const osgUtil::CubeMapGenerator & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgUtil::CubeMapGenerator::CubeMapGenerator function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osgUtil_CubeMapGenerator(L,NULL, copy, copyop);
	}

	// Overload binder for osgUtil::CubeMapGenerator::CubeMapGenerator
	static osgUtil::CubeMapGenerator* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function CubeMapGenerator, cannot match any of the overloads for function CubeMapGenerator:\n  CubeMapGenerator(lua_Table *, int)\n  CubeMapGenerator(lua_Table *, const osgUtil::CubeMapGenerator &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Image * osgUtil::CubeMapGenerator::getImage(osg::TextureCubeMap::Face face)
	static int _bind_getImage_overload_1(lua_State *L) {
		if (!_lg_typecheck_getImage_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Image * osgUtil::CubeMapGenerator::getImage(osg::TextureCubeMap::Face face) function, expected prototype:\nosg::Image * osgUtil::CubeMapGenerator::getImage(osg::TextureCubeMap::Face face)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::TextureCubeMap::Face face=(osg::TextureCubeMap::Face)lua_tointeger(L,2);

		osgUtil::CubeMapGenerator* self=Luna< osg::Referenced >::checkSubType< osgUtil::CubeMapGenerator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Image * osgUtil::CubeMapGenerator::getImage(osg::TextureCubeMap::Face). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Image * lret = self->getImage(face);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Image >::push(L,lret,false);

		return 1;
	}

	// const osg::Image * osgUtil::CubeMapGenerator::getImage(osg::TextureCubeMap::Face face) const
	static int _bind_getImage_overload_2(lua_State *L) {
		if (!_lg_typecheck_getImage_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Image * osgUtil::CubeMapGenerator::getImage(osg::TextureCubeMap::Face face) const function, expected prototype:\nconst osg::Image * osgUtil::CubeMapGenerator::getImage(osg::TextureCubeMap::Face face) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::TextureCubeMap::Face face=(osg::TextureCubeMap::Face)lua_tointeger(L,2);

		osgUtil::CubeMapGenerator* self=Luna< osg::Referenced >::checkSubType< osgUtil::CubeMapGenerator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Image * osgUtil::CubeMapGenerator::getImage(osg::TextureCubeMap::Face) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Image * lret = self->getImage(face);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Image >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgUtil::CubeMapGenerator::getImage
	static int _bind_getImage(lua_State *L) {
		if (_lg_typecheck_getImage_overload_1(L)) return _bind_getImage_overload_1(L);
		if (_lg_typecheck_getImage_overload_2(L)) return _bind_getImage_overload_2(L);

		luaL_error(L, "error in function getImage, cannot match any of the overloads for function getImage:\n  getImage(osg::TextureCubeMap::Face)\n  getImage(osg::TextureCubeMap::Face)\n");
		return 0;
	}

	// void osgUtil::CubeMapGenerator::generateMap(bool use_osg_system = true)
	static int _bind_generateMap(lua_State *L) {
		if (!_lg_typecheck_generateMap(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::CubeMapGenerator::generateMap(bool use_osg_system = true) function, expected prototype:\nvoid osgUtil::CubeMapGenerator::generateMap(bool use_osg_system = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool use_osg_system=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		osgUtil::CubeMapGenerator* self=Luna< osg::Referenced >::checkSubType< osgUtil::CubeMapGenerator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::CubeMapGenerator::generateMap(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->generateMap(use_osg_system);

		return 0;
	}

	// void osgUtil::CubeMapGenerator::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::CubeMapGenerator::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgUtil::CubeMapGenerator::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgUtil::CubeMapGenerator* self=Luna< osg::Referenced >::checkSubType< osgUtil::CubeMapGenerator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::CubeMapGenerator::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->CubeMapGenerator::setThreadSafeRefUnref(threadSafe);

		return 0;
	}


	// Operator binds:

};

osgUtil::CubeMapGenerator* LunaTraits< osgUtil::CubeMapGenerator >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_CubeMapGenerator::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// osg::Vec4f osgUtil::CubeMapGenerator::compute_color(const osg::Vec3f & R) const
}

void LunaTraits< osgUtil::CubeMapGenerator >::_bind_dtor(osgUtil::CubeMapGenerator* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::CubeMapGenerator >::className[] = "CubeMapGenerator";
const char LunaTraits< osgUtil::CubeMapGenerator >::fullName[] = "osgUtil::CubeMapGenerator";
const char LunaTraits< osgUtil::CubeMapGenerator >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::CubeMapGenerator >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osgUtil::CubeMapGenerator >::hash = 37216582;
const int LunaTraits< osgUtil::CubeMapGenerator >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::CubeMapGenerator >::methods[] = {
	{"getImage", &luna_wrapper_osgUtil_CubeMapGenerator::_bind_getImage},
	{"generateMap", &luna_wrapper_osgUtil_CubeMapGenerator::_bind_generateMap},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgUtil_CubeMapGenerator::_bind_base_setThreadSafeRefUnref},
	{"fromVoid", &luna_wrapper_osgUtil_CubeMapGenerator::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgUtil_CubeMapGenerator::_bind_asVoid},
	{"getTable", &luna_wrapper_osgUtil_CubeMapGenerator::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::CubeMapGenerator >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_CubeMapGenerator::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::CubeMapGenerator >::enumValues[] = {
	{0,0}
};



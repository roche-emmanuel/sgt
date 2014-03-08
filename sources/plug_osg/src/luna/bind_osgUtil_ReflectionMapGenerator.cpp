#include <plug_common.h>

#include <luna/wrappers/wrapper_osgUtil_ReflectionMapGenerator.h>

class luna_wrapper_osgUtil_ReflectionMapGenerator {
public:
	typedef Luna< osgUtil::ReflectionMapGenerator > luna_t;

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

		osgUtil::ReflectionMapGenerator* self= (osgUtil::ReflectionMapGenerator*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgUtil::ReflectionMapGenerator >::push(L,self,false);
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
		//osgUtil::ReflectionMapGenerator* ptr= dynamic_cast< osgUtil::ReflectionMapGenerator* >(Luna< osg::Referenced >::check(L,1));
		osgUtil::ReflectionMapGenerator* ptr= luna_caster< osg::Referenced, osgUtil::ReflectionMapGenerator >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::ReflectionMapGenerator >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osgUtil::ReflectionMapGenerator >(L,1))) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( luatop>1 && (!(Luna< osg::CopyOp >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osgUtil::ReflectionMapGenerator >(L,2))) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,27134364) ) return false;
		if( luatop>2 && (!(Luna< osg::CopyOp >::check(L,3))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgUtil::ReflectionMapGenerator::ReflectionMapGenerator(int texture_size = 64)
	static osgUtil::ReflectionMapGenerator* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::ReflectionMapGenerator::ReflectionMapGenerator(int texture_size = 64) function, expected prototype:\nosgUtil::ReflectionMapGenerator::ReflectionMapGenerator(int texture_size = 64)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int texture_size=luatop>0 ? (int)lua_tointeger(L,1) : (int)64;

		return new osgUtil::ReflectionMapGenerator(texture_size);
	}

	// osgUtil::ReflectionMapGenerator::ReflectionMapGenerator(const osgUtil::ReflectionMapGenerator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgUtil::ReflectionMapGenerator* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::ReflectionMapGenerator::ReflectionMapGenerator(const osgUtil::ReflectionMapGenerator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgUtil::ReflectionMapGenerator::ReflectionMapGenerator(const osgUtil::ReflectionMapGenerator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osgUtil::ReflectionMapGenerator* copy_ptr=(Luna< osg::Referenced >::checkSubType< osgUtil::ReflectionMapGenerator >(L,1));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgUtil::ReflectionMapGenerator::ReflectionMapGenerator function");
		}
		const osgUtil::ReflectionMapGenerator & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgUtil::ReflectionMapGenerator::ReflectionMapGenerator function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osgUtil::ReflectionMapGenerator(copy, copyop);
	}

	// osgUtil::ReflectionMapGenerator::ReflectionMapGenerator(lua_Table * data, int texture_size = 64)
	static osgUtil::ReflectionMapGenerator* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::ReflectionMapGenerator::ReflectionMapGenerator(lua_Table * data, int texture_size = 64) function, expected prototype:\nosgUtil::ReflectionMapGenerator::ReflectionMapGenerator(lua_Table * data, int texture_size = 64)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int texture_size=luatop>1 ? (int)lua_tointeger(L,2) : (int)64;

		return new wrapper_osgUtil_ReflectionMapGenerator(L,NULL, texture_size);
	}

	// osgUtil::ReflectionMapGenerator::ReflectionMapGenerator(lua_Table * data, const osgUtil::ReflectionMapGenerator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgUtil::ReflectionMapGenerator* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::ReflectionMapGenerator::ReflectionMapGenerator(lua_Table * data, const osgUtil::ReflectionMapGenerator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgUtil::ReflectionMapGenerator::ReflectionMapGenerator(lua_Table * data, const osgUtil::ReflectionMapGenerator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osgUtil::ReflectionMapGenerator* copy_ptr=(Luna< osg::Referenced >::checkSubType< osgUtil::ReflectionMapGenerator >(L,2));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgUtil::ReflectionMapGenerator::ReflectionMapGenerator function");
		}
		const osgUtil::ReflectionMapGenerator & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgUtil::ReflectionMapGenerator::ReflectionMapGenerator function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osgUtil_ReflectionMapGenerator(L,NULL, copy, copyop);
	}

	// Overload binder for osgUtil::ReflectionMapGenerator::ReflectionMapGenerator
	static osgUtil::ReflectionMapGenerator* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function ReflectionMapGenerator, cannot match any of the overloads for function ReflectionMapGenerator:\n  ReflectionMapGenerator(int)\n  ReflectionMapGenerator(const osgUtil::ReflectionMapGenerator &, const osg::CopyOp &)\n  ReflectionMapGenerator(lua_Table *, int)\n  ReflectionMapGenerator(lua_Table *, const osgUtil::ReflectionMapGenerator &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// void osgUtil::ReflectionMapGenerator::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::ReflectionMapGenerator::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgUtil::ReflectionMapGenerator::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgUtil::ReflectionMapGenerator* self=Luna< osg::Referenced >::checkSubType< osgUtil::ReflectionMapGenerator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::ReflectionMapGenerator::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ReflectionMapGenerator::setThreadSafeRefUnref(threadSafe);

		return 0;
	}


	// Operator binds:

};

osgUtil::ReflectionMapGenerator* LunaTraits< osgUtil::ReflectionMapGenerator >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_ReflectionMapGenerator::_bind_ctor(L);
}

void LunaTraits< osgUtil::ReflectionMapGenerator >::_bind_dtor(osgUtil::ReflectionMapGenerator* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::ReflectionMapGenerator >::className[] = "ReflectionMapGenerator";
const char LunaTraits< osgUtil::ReflectionMapGenerator >::fullName[] = "osgUtil::ReflectionMapGenerator";
const char LunaTraits< osgUtil::ReflectionMapGenerator >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::ReflectionMapGenerator >::parents[] = {"osgUtil.CubeMapGenerator", 0};
const int LunaTraits< osgUtil::ReflectionMapGenerator >::hash = 6485642;
const int LunaTraits< osgUtil::ReflectionMapGenerator >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::ReflectionMapGenerator >::methods[] = {
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgUtil_ReflectionMapGenerator::_bind_base_setThreadSafeRefUnref},
	{"fromVoid", &luna_wrapper_osgUtil_ReflectionMapGenerator::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgUtil_ReflectionMapGenerator::_bind_asVoid},
	{"getTable", &luna_wrapper_osgUtil_ReflectionMapGenerator::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::ReflectionMapGenerator >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_ReflectionMapGenerator::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::ReflectionMapGenerator >::enumValues[] = {
	{0,0}
};



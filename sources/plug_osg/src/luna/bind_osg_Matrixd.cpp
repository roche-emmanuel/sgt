#include <plug_common.h>

class luna_wrapper_osg_Matrixd {
public:
	typedef Luna< osg::Matrixd > luna_t;

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::Matrixd* self= (osg::Matrixd*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::Matrixd >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,18903838) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osg::Matrixd >::check(L,1));
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

		osg::Matrixd* self=(Luna< osg::Matrixd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::Matrixd");
		
		return luna_dynamicCast(L,converters,"osg::Matrixd",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,18903838) ) return false;
		if( (!(Luna< osg::Matrixd >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,18903840) ) return false;
		if( (!(Luna< osg::Matrixf >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,80263306) ) return false;
		if( (!(Luna< osg::Quat >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		if( lua_gettop(L)!=16 ) return false;

		if( lua_type(L,1)!=LUA_TNUMBER ) return false;
		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( lua_type(L,6)!=LUA_TNUMBER ) return false;
		if( lua_type(L,7)!=LUA_TNUMBER ) return false;
		if( lua_type(L,8)!=LUA_TNUMBER ) return false;
		if( lua_type(L,9)!=LUA_TNUMBER ) return false;
		if( lua_type(L,10)!=LUA_TNUMBER ) return false;
		if( lua_type(L,11)!=LUA_TNUMBER ) return false;
		if( lua_type(L,12)!=LUA_TNUMBER ) return false;
		if( lua_type(L,13)!=LUA_TNUMBER ) return false;
		if( lua_type(L,14)!=LUA_TNUMBER ) return false;
		if( lua_type(L,15)!=LUA_TNUMBER ) return false;
		if( lua_type(L,16)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_compare(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_valid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isNaN(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_set_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		if( (!(Luna< osg::Matrixd >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903840) ) return false;
		if( (!(Luna< osg::Matrixf >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_overload_3(lua_State *L) {
		if( lua_gettop(L)!=17 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( lua_type(L,6)!=LUA_TNUMBER ) return false;
		if( lua_type(L,7)!=LUA_TNUMBER ) return false;
		if( lua_type(L,8)!=LUA_TNUMBER ) return false;
		if( lua_type(L,9)!=LUA_TNUMBER ) return false;
		if( lua_type(L,10)!=LUA_TNUMBER ) return false;
		if( lua_type(L,11)!=LUA_TNUMBER ) return false;
		if( lua_type(L,12)!=LUA_TNUMBER ) return false;
		if( lua_type(L,13)!=LUA_TNUMBER ) return false;
		if( lua_type(L,14)!=LUA_TNUMBER ) return false;
		if( lua_type(L,15)!=LUA_TNUMBER ) return false;
		if( lua_type(L,16)!=LUA_TNUMBER ) return false;
		if( lua_type(L,17)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,80263306) ) return false;
		if( (!(Luna< osg::Quat >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ptr_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ptr_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isIdentity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_makeIdentity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_makeScale_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_makeScale_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_makeScale_overload_3(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_makeTranslate_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_makeTranslate_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_makeTranslate_overload_3(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_makeRotate_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_makeRotate_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_makeRotate_overload_3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_makeRotate_overload_4(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_makeRotate_overload_5(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_makeRotate_overload_6(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,80263306) ) return false;
		if( (!(Luna< osg::Quat >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_makeRotate_overload_7(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,3))) ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,5,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,5))) ) return false;
		if( lua_type(L,6)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,7,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,7))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_makeRotate_overload_8(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,3))) ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,5,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,5))) ) return false;
		if( lua_type(L,6)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,7,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,7))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_decompose_overload_1(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,80263306) ) return false;
		if( (!(Luna< osg::Quat >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,80263306) ) return false;
		if( (!(Luna< osg::Quat >::check(L,5))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_decompose_overload_2(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,80263306) ) return false;
		if( (!(Luna< osg::Quat >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,80263306) ) return false;
		if( (!(Luna< osg::Quat >::check(L,5))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_makeOrtho(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( lua_type(L,6)!=LUA_TNUMBER ) return false;
		if( lua_type(L,7)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getOrtho_overload_1(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( lua_type(L,6)!=LUA_TNUMBER ) return false;
		if( lua_type(L,7)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getOrtho_overload_2(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( lua_type(L,6)!=LUA_TNUMBER ) return false;
		if( lua_type(L,7)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_makeOrtho2D(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_makeFrustum(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( lua_type(L,6)!=LUA_TNUMBER ) return false;
		if( lua_type(L,7)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFrustum_overload_1(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( lua_type(L,6)!=LUA_TNUMBER ) return false;
		if( lua_type(L,7)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFrustum_overload_2(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( lua_type(L,6)!=LUA_TNUMBER ) return false;
		if( lua_type(L,7)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_makePerspective(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPerspective_overload_1(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPerspective_overload_2(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_makeLookAt(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303202) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,92303202) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getLookAt_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,4))) ) return false;
		if( luatop>4 && lua_type(L,5)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getLookAt_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,4))) ) return false;
		if( luatop>4 && lua_type(L,5)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_invert(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_invert_4x3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_invert_4x4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_orthoNormalize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_preMult_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_preMult_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_preMult_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303235) ) return false;
		if( (!(Luna< osg::Vec4f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_preMult_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303233) ) return false;
		if( (!(Luna< osg::Vec4d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_preMult_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		if( (!(Luna< osg::Matrixd >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_postMult_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_postMult_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_postMult_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303235) ) return false;
		if( (!(Luna< osg::Vec4f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_postMult_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303233) ) return false;
		if( (!(Luna< osg::Vec4d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_postMult_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		if( (!(Luna< osg::Matrixd >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,80263306) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRotate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,80263306) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRotate(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTrans_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTrans_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTrans_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTrans(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getScale(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_mult(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,18903838) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_preMultTranslate_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_preMultTranslate_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_postMultTranslate_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_postMultTranslate_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_preMultScale_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_preMultScale_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_postMultScale_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_postMultScale_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_preMultRotate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,80263306) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_postMultRotate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,80263306) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_identity(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_scale_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_scale_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_scale_overload_3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,1)!=LUA_TNUMBER ) return false;
		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_translate_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_translate_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_translate_overload_3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,1)!=LUA_TNUMBER ) return false;
		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_rotate_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_rotate_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_rotate_overload_3(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,1)!=LUA_TNUMBER ) return false;
		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_rotate_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,1)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_rotate_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,1)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_rotate_overload_6(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( lua_type(L,1)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,2))) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,4,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,4))) ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,6,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,6))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_rotate_overload_7(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( lua_type(L,1)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,2))) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,4,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,4))) ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,6,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,6))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_rotate_overload_8(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,80263306) ) return false;
		if( (!(Luna< osg::Quat >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_inverse(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,18903838) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_orthoNormal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,18903838) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ortho(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( lua_type(L,1)!=LUA_TNUMBER ) return false;
		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( lua_type(L,6)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ortho2D(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,1)!=LUA_TNUMBER ) return false;
		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_frustum(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( lua_type(L,1)!=LUA_TNUMBER ) return false;
		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( lua_type(L,6)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_perspective(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,1)!=LUA_TNUMBER ) return false;
		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_lookAt_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_lookAt_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_transform3x3_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		if( (!(Luna< osg::Matrixd >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_transform3x3_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		if( (!(Luna< osg::Matrixd >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_transform3x3_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,18903838) ) return false;
		if( (!(Luna< osg::Matrixd >::check(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_transform3x3_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,18903838) ) return false;
		if( (!(Luna< osg::Matrixd >::check(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,2))) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 13 valid operators)
	inline static bool _lg_typecheck___lt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_neq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_call_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_call_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_assign_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		if( (!(Luna< osg::Matrixd >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_assign_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903840) ) return false;
		if( (!(Luna< osg::Matrixf >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___mul_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___mul_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___mul_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303235) ) return false;
		if( (!(Luna< osg::Vec4f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___mul_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303233) ) return false;
		if( (!(Luna< osg::Vec4d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___mul_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		if( (!(Luna< osg::Matrixd >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_mult(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		return true;
	}


	// Constructor binds:
	// osg::Matrixd::Matrixd()
	static osg::Matrixd* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Matrixd::Matrixd() function, expected prototype:\nosg::Matrixd::Matrixd()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::Matrixd();
	}

	// osg::Matrixd::Matrixd(const osg::Matrixd & mat)
	static osg::Matrixd* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Matrixd::Matrixd(const osg::Matrixd & mat) function, expected prototype:\nosg::Matrixd::Matrixd(const osg::Matrixd & mat)\nClass arguments details:\narg 1 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrixd* mat_ptr=(Luna< osg::Matrixd >::check(L,1));
		if( !mat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mat in osg::Matrixd::Matrixd function");
		}
		const osg::Matrixd & mat=*mat_ptr;

		return new osg::Matrixd(mat);
	}

	// osg::Matrixd::Matrixd(const osg::Matrixf & mat)
	static osg::Matrixd* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::Matrixd::Matrixd(const osg::Matrixf & mat) function, expected prototype:\nosg::Matrixd::Matrixd(const osg::Matrixf & mat)\nClass arguments details:\narg 1 ID = 18903840\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrixf* mat_ptr=(Luna< osg::Matrixf >::check(L,1));
		if( !mat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mat in osg::Matrixd::Matrixd function");
		}
		const osg::Matrixf & mat=*mat_ptr;

		return new osg::Matrixd(mat);
	}

	// osg::Matrixd::Matrixd(const osg::Quat & quat)
	static osg::Matrixd* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::Matrixd::Matrixd(const osg::Quat & quat) function, expected prototype:\nosg::Matrixd::Matrixd(const osg::Quat & quat)\nClass arguments details:\narg 1 ID = 80263306\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Quat* quat_ptr=(Luna< osg::Quat >::check(L,1));
		if( !quat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg quat in osg::Matrixd::Matrixd function");
		}
		const osg::Quat & quat=*quat_ptr;

		return new osg::Matrixd(quat);
	}

	// osg::Matrixd::Matrixd(double a00, double a01, double a02, double a03, double a10, double a11, double a12, double a13, double a20, double a21, double a22, double a23, double a30, double a31, double a32, double a33)
	static osg::Matrixd* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in osg::Matrixd::Matrixd(double a00, double a01, double a02, double a03, double a10, double a11, double a12, double a13, double a20, double a21, double a22, double a23, double a30, double a31, double a32, double a33) function, expected prototype:\nosg::Matrixd::Matrixd(double a00, double a01, double a02, double a03, double a10, double a11, double a12, double a13, double a20, double a21, double a22, double a23, double a30, double a31, double a32, double a33)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double a00=(double)lua_tonumber(L,1);
		double a01=(double)lua_tonumber(L,2);
		double a02=(double)lua_tonumber(L,3);
		double a03=(double)lua_tonumber(L,4);
		double a10=(double)lua_tonumber(L,5);
		double a11=(double)lua_tonumber(L,6);
		double a12=(double)lua_tonumber(L,7);
		double a13=(double)lua_tonumber(L,8);
		double a20=(double)lua_tonumber(L,9);
		double a21=(double)lua_tonumber(L,10);
		double a22=(double)lua_tonumber(L,11);
		double a23=(double)lua_tonumber(L,12);
		double a30=(double)lua_tonumber(L,13);
		double a31=(double)lua_tonumber(L,14);
		double a32=(double)lua_tonumber(L,15);
		double a33=(double)lua_tonumber(L,16);

		return new osg::Matrixd(a00, a01, a02, a03, a10, a11, a12, a13, a20, a21, a22, a23, a30, a31, a32, a33);
	}

	// Overload binder for osg::Matrixd::Matrixd
	static osg::Matrixd* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);

		luaL_error(L, "error in function Matrixd, cannot match any of the overloads for function Matrixd:\n  Matrixd()\n  Matrixd(const osg::Matrixd &)\n  Matrixd(const osg::Matrixf &)\n  Matrixd(const osg::Quat &)\n  Matrixd(double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double)\n");
		return NULL;
	}


	// Function binds:
	// int osg::Matrixd::compare(const osg::Matrixd & m) const
	static int _bind_compare(lua_State *L) {
		if (!_lg_typecheck_compare(L)) {
			luaL_error(L, "luna typecheck failed in int osg::Matrixd::compare(const osg::Matrixd & m) const function, expected prototype:\nint osg::Matrixd::compare(const osg::Matrixd & m) const\nClass arguments details:\narg 1 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrixd* m_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !m_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m in osg::Matrixd::compare function");
		}
		const osg::Matrixd & m=*m_ptr;

		osg::Matrixd* self=(Luna< osg::Matrixd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::Matrixd::compare(const osg::Matrixd &) const. Got : '%s'\n%s",typeid(Luna< osg::Matrixd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->compare(m);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::Matrixd::valid() const
	static int _bind_valid(lua_State *L) {
		if (!_lg_typecheck_valid(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Matrixd::valid() const function, expected prototype:\nbool osg::Matrixd::valid() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Matrixd* self=(Luna< osg::Matrixd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Matrixd::valid() const. Got : '%s'\n%s",typeid(Luna< osg::Matrixd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->valid();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Matrixd::isNaN() const
	static int _bind_isNaN(lua_State *L) {
		if (!_lg_typecheck_isNaN(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Matrixd::isNaN() const function, expected prototype:\nbool osg::Matrixd::isNaN() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Matrixd* self=(Luna< osg::Matrixd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Matrixd::isNaN() const. Got : '%s'\n%s",typeid(Luna< osg::Matrixd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isNaN();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Matrixd::set(const osg::Matrixd & rhs)
	static int _bind_set_overload_1(lua_State *L) {
		if (!_lg_typecheck_set_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Matrixd::set(const osg::Matrixd & rhs) function, expected prototype:\nvoid osg::Matrixd::set(const osg::Matrixd & rhs)\nClass arguments details:\narg 1 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrixd* rhs_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Matrixd::set function");
		}
		const osg::Matrixd & rhs=*rhs_ptr;

		osg::Matrixd* self=(Luna< osg::Matrixd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Matrixd::set(const osg::Matrixd &). Got : '%s'\n%s",typeid(Luna< osg::Matrixd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set(rhs);

		return 0;
	}

	// void osg::Matrixd::set(const osg::Matrixf & rhs)
	static int _bind_set_overload_2(lua_State *L) {
		if (!_lg_typecheck_set_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Matrixd::set(const osg::Matrixf & rhs) function, expected prototype:\nvoid osg::Matrixd::set(const osg::Matrixf & rhs)\nClass arguments details:\narg 1 ID = 18903840\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrixf* rhs_ptr=(Luna< osg::Matrixf >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Matrixd::set function");
		}
		const osg::Matrixf & rhs=*rhs_ptr;

		osg::Matrixd* self=(Luna< osg::Matrixd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Matrixd::set(const osg::Matrixf &). Got : '%s'\n%s",typeid(Luna< osg::Matrixd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set(rhs);

		return 0;
	}

	// void osg::Matrixd::set(double a00, double a01, double a02, double a03, double a10, double a11, double a12, double a13, double a20, double a21, double a22, double a23, double a30, double a31, double a32, double a33)
	static int _bind_set_overload_3(lua_State *L) {
		if (!_lg_typecheck_set_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Matrixd::set(double a00, double a01, double a02, double a03, double a10, double a11, double a12, double a13, double a20, double a21, double a22, double a23, double a30, double a31, double a32, double a33) function, expected prototype:\nvoid osg::Matrixd::set(double a00, double a01, double a02, double a03, double a10, double a11, double a12, double a13, double a20, double a21, double a22, double a23, double a30, double a31, double a32, double a33)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double a00=(double)lua_tonumber(L,2);
		double a01=(double)lua_tonumber(L,3);
		double a02=(double)lua_tonumber(L,4);
		double a03=(double)lua_tonumber(L,5);
		double a10=(double)lua_tonumber(L,6);
		double a11=(double)lua_tonumber(L,7);
		double a12=(double)lua_tonumber(L,8);
		double a13=(double)lua_tonumber(L,9);
		double a20=(double)lua_tonumber(L,10);
		double a21=(double)lua_tonumber(L,11);
		double a22=(double)lua_tonumber(L,12);
		double a23=(double)lua_tonumber(L,13);
		double a30=(double)lua_tonumber(L,14);
		double a31=(double)lua_tonumber(L,15);
		double a32=(double)lua_tonumber(L,16);
		double a33=(double)lua_tonumber(L,17);

		osg::Matrixd* self=(Luna< osg::Matrixd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Matrixd::set(double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double). Got : '%s'\n%s",typeid(Luna< osg::Matrixd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set(a00, a01, a02, a03, a10, a11, a12, a13, a20, a21, a22, a23, a30, a31, a32, a33);

		return 0;
	}

	// void osg::Matrixd::set(const osg::Quat & q)
	static int _bind_set_overload_4(lua_State *L) {
		if (!_lg_typecheck_set_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Matrixd::set(const osg::Quat & q) function, expected prototype:\nvoid osg::Matrixd::set(const osg::Quat & q)\nClass arguments details:\narg 1 ID = 80263306\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Quat* q_ptr=(Luna< osg::Quat >::check(L,2));
		if( !q_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg q in osg::Matrixd::set function");
		}
		const osg::Quat & q=*q_ptr;

		osg::Matrixd* self=(Luna< osg::Matrixd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Matrixd::set(const osg::Quat &). Got : '%s'\n%s",typeid(Luna< osg::Matrixd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set(q);

		return 0;
	}

	// Overload binder for osg::Matrixd::set
	static int _bind_set(lua_State *L) {
		if (_lg_typecheck_set_overload_1(L)) return _bind_set_overload_1(L);
		if (_lg_typecheck_set_overload_2(L)) return _bind_set_overload_2(L);
		if (_lg_typecheck_set_overload_3(L)) return _bind_set_overload_3(L);
		if (_lg_typecheck_set_overload_4(L)) return _bind_set_overload_4(L);

		luaL_error(L, "error in function set, cannot match any of the overloads for function set:\n  set(const osg::Matrixd &)\n  set(const osg::Matrixf &)\n  set(double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double)\n  set(const osg::Quat &)\n");
		return 0;
	}

	// double * osg::Matrixd::ptr()
	static int _bind_ptr_overload_1(lua_State *L) {
		if (!_lg_typecheck_ptr_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in double * osg::Matrixd::ptr() function, expected prototype:\ndouble * osg::Matrixd::ptr()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Matrixd* self=(Luna< osg::Matrixd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double * osg::Matrixd::ptr(). Got : '%s'\n%s",typeid(Luna< osg::Matrixd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double * lret = self->ptr();
		lua_pushnumber(L,*lret);

		return 1;
	}

	// const double * osg::Matrixd::ptr() const
	static int _bind_ptr_overload_2(lua_State *L) {
		if (!_lg_typecheck_ptr_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const double * osg::Matrixd::ptr() const function, expected prototype:\nconst double * osg::Matrixd::ptr() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Matrixd* self=(Luna< osg::Matrixd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const double * osg::Matrixd::ptr() const. Got : '%s'\n%s",typeid(Luna< osg::Matrixd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const double * lret = self->ptr();
		lua_pushnumber(L,*lret);

		return 1;
	}

	// Overload binder for osg::Matrixd::ptr
	static int _bind_ptr(lua_State *L) {
		if (_lg_typecheck_ptr_overload_1(L)) return _bind_ptr_overload_1(L);
		if (_lg_typecheck_ptr_overload_2(L)) return _bind_ptr_overload_2(L);

		luaL_error(L, "error in function ptr, cannot match any of the overloads for function ptr:\n  ptr()\n  ptr()\n");
		return 0;
	}

	// bool osg::Matrixd::isIdentity() const
	static int _bind_isIdentity(lua_State *L) {
		if (!_lg_typecheck_isIdentity(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Matrixd::isIdentity() const function, expected prototype:\nbool osg::Matrixd::isIdentity() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Matrixd* self=(Luna< osg::Matrixd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Matrixd::isIdentity() const. Got : '%s'\n%s",typeid(Luna< osg::Matrixd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isIdentity();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Matrixd::makeIdentity()
	static int _bind_makeIdentity(lua_State *L) {
		if (!_lg_typecheck_makeIdentity(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Matrixd::makeIdentity() function, expected prototype:\nvoid osg::Matrixd::makeIdentity()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Matrixd* self=(Luna< osg::Matrixd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Matrixd::makeIdentity(). Got : '%s'\n%s",typeid(Luna< osg::Matrixd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->makeIdentity();

		return 0;
	}

	// void osg::Matrixd::makeScale(const osg::Vec3f & arg1)
	static int _bind_makeScale_overload_1(lua_State *L) {
		if (!_lg_typecheck_makeScale_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Matrixd::makeScale(const osg::Vec3f & arg1) function, expected prototype:\nvoid osg::Matrixd::makeScale(const osg::Vec3f & arg1)\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Matrixd::makeScale function");
		}
		const osg::Vec3f & _arg1=*_arg1_ptr;

		osg::Matrixd* self=(Luna< osg::Matrixd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Matrixd::makeScale(const osg::Vec3f &). Got : '%s'\n%s",typeid(Luna< osg::Matrixd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->makeScale(_arg1);

		return 0;
	}

	// void osg::Matrixd::makeScale(const osg::Vec3d & arg1)
	static int _bind_makeScale_overload_2(lua_State *L) {
		if (!_lg_typecheck_makeScale_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Matrixd::makeScale(const osg::Vec3d & arg1) function, expected prototype:\nvoid osg::Matrixd::makeScale(const osg::Vec3d & arg1)\nClass arguments details:\narg 1 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3d* _arg1_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Matrixd::makeScale function");
		}
		const osg::Vec3d & _arg1=*_arg1_ptr;

		osg::Matrixd* self=(Luna< osg::Matrixd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Matrixd::makeScale(const osg::Vec3d &). Got : '%s'\n%s",typeid(Luna< osg::Matrixd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->makeScale(_arg1);

		return 0;
	}

	// void osg::Matrixd::makeScale(double arg1, double arg2, double arg3)
	static int _bind_makeScale_overload_3(lua_State *L) {
		if (!_lg_typecheck_makeScale_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Matrixd::makeScale(double arg1, double arg2, double arg3) function, expected prototype:\nvoid osg::Matrixd::makeScale(double arg1, double arg2, double arg3)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double _arg1=(double)lua_tonumber(L,2);
		double _arg2=(double)lua_tonumber(L,3);
		double _arg3=(double)lua_tonumber(L,4);

		osg::Matrixd* self=(Luna< osg::Matrixd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Matrixd::makeScale(double, double, double). Got : '%s'\n%s",typeid(Luna< osg::Matrixd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->makeScale(_arg1, _arg2, _arg3);

		return 0;
	}

	// Overload binder for osg::Matrixd::makeScale
	static int _bind_makeScale(lua_State *L) {
		if (_lg_typecheck_makeScale_overload_1(L)) return _bind_makeScale_overload_1(L);
		if (_lg_typecheck_makeScale_overload_2(L)) return _bind_makeScale_overload_2(L);
		if (_lg_typecheck_makeScale_overload_3(L)) return _bind_makeScale_overload_3(L);

		luaL_error(L, "error in function makeScale, cannot match any of the overloads for function makeScale:\n  makeScale(const osg::Vec3f &)\n  makeScale(const osg::Vec3d &)\n  makeScale(double, double, double)\n");
		return 0;
	}

	// void osg::Matrixd::makeTranslate(const osg::Vec3f & arg1)
	static int _bind_makeTranslate_overload_1(lua_State *L) {
		if (!_lg_typecheck_makeTranslate_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Matrixd::makeTranslate(const osg::Vec3f & arg1) function, expected prototype:\nvoid osg::Matrixd::makeTranslate(const osg::Vec3f & arg1)\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Matrixd::makeTranslate function");
		}
		const osg::Vec3f & _arg1=*_arg1_ptr;

		osg::Matrixd* self=(Luna< osg::Matrixd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Matrixd::makeTranslate(const osg::Vec3f &). Got : '%s'\n%s",typeid(Luna< osg::Matrixd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->makeTranslate(_arg1);

		return 0;
	}

	// void osg::Matrixd::makeTranslate(const osg::Vec3d & arg1)
	static int _bind_makeTranslate_overload_2(lua_State *L) {
		if (!_lg_typecheck_makeTranslate_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Matrixd::makeTranslate(const osg::Vec3d & arg1) function, expected prototype:\nvoid osg::Matrixd::makeTranslate(const osg::Vec3d & arg1)\nClass arguments details:\narg 1 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3d* _arg1_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Matrixd::makeTranslate function");
		}
		const osg::Vec3d & _arg1=*_arg1_ptr;

		osg::Matrixd* self=(Luna< osg::Matrixd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Matrixd::makeTranslate(const osg::Vec3d &). Got : '%s'\n%s",typeid(Luna< osg::Matrixd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->makeTranslate(_arg1);

		return 0;
	}

	// void osg::Matrixd::makeTranslate(double arg1, double arg2, double arg3)
	static int _bind_makeTranslate_overload_3(lua_State *L) {
		if (!_lg_typecheck_makeTranslate_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Matrixd::makeTranslate(double arg1, double arg2, double arg3) function, expected prototype:\nvoid osg::Matrixd::makeTranslate(double arg1, double arg2, double arg3)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double _arg1=(double)lua_tonumber(L,2);
		double _arg2=(double)lua_tonumber(L,3);
		double _arg3=(double)lua_tonumber(L,4);

		osg::Matrixd* self=(Luna< osg::Matrixd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Matrixd::makeTranslate(double, double, double). Got : '%s'\n%s",typeid(Luna< osg::Matrixd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->makeTranslate(_arg1, _arg2, _arg3);

		return 0;
	}

	// Overload binder for osg::Matrixd::makeTranslate
	static int _bind_makeTranslate(lua_State *L) {
		if (_lg_typecheck_makeTranslate_overload_1(L)) return _bind_makeTranslate_overload_1(L);
		if (_lg_typecheck_makeTranslate_overload_2(L)) return _bind_makeTranslate_overload_2(L);
		if (_lg_typecheck_makeTranslate_overload_3(L)) return _bind_makeTranslate_overload_3(L);

		luaL_error(L, "error in function makeTranslate, cannot match any of the overloads for function makeTranslate:\n  makeTranslate(const osg::Vec3f &)\n  makeTranslate(const osg::Vec3d &)\n  makeTranslate(double, double, double)\n");
		return 0;
	}

	// void osg::Matrixd::makeRotate(const osg::Vec3f & from, const osg::Vec3f & to)
	static int _bind_makeRotate_overload_1(lua_State *L) {
		if (!_lg_typecheck_makeRotate_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Matrixd::makeRotate(const osg::Vec3f & from, const osg::Vec3f & to) function, expected prototype:\nvoid osg::Matrixd::makeRotate(const osg::Vec3f & from, const osg::Vec3f & to)\nClass arguments details:\narg 1 ID = 92303204\narg 2 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* from_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !from_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg from in osg::Matrixd::makeRotate function");
		}
		const osg::Vec3f & from=*from_ptr;
		const osg::Vec3f* to_ptr=(Luna< osg::Vec3f >::check(L,3));
		if( !to_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg to in osg::Matrixd::makeRotate function");
		}
		const osg::Vec3f & to=*to_ptr;

		osg::Matrixd* self=(Luna< osg::Matrixd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Matrixd::makeRotate(const osg::Vec3f &, const osg::Vec3f &). Got : '%s'\n%s",typeid(Luna< osg::Matrixd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->makeRotate(from, to);

		return 0;
	}

	// void osg::Matrixd::makeRotate(const osg::Vec3d & from, const osg::Vec3d & to)
	static int _bind_makeRotate_overload_2(lua_State *L) {
		if (!_lg_typecheck_makeRotate_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Matrixd::makeRotate(const osg::Vec3d & from, const osg::Vec3d & to) function, expected prototype:\nvoid osg::Matrixd::makeRotate(const osg::Vec3d & from, const osg::Vec3d & to)\nClass arguments details:\narg 1 ID = 92303202\narg 2 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3d* from_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !from_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg from in osg::Matrixd::makeRotate function");
		}
		const osg::Vec3d & from=*from_ptr;
		const osg::Vec3d* to_ptr=(Luna< osg::Vec3d >::check(L,3));
		if( !to_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg to in osg::Matrixd::makeRotate function");
		}
		const osg::Vec3d & to=*to_ptr;

		osg::Matrixd* self=(Luna< osg::Matrixd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Matrixd::makeRotate(const osg::Vec3d &, const osg::Vec3d &). Got : '%s'\n%s",typeid(Luna< osg::Matrixd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->makeRotate(from, to);

		return 0;
	}

	// void osg::Matrixd::makeRotate(double angle, const osg::Vec3f & axis)
	static int _bind_makeRotate_overload_3(lua_State *L) {
		if (!_lg_typecheck_makeRotate_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Matrixd::makeRotate(double angle, const osg::Vec3f & axis) function, expected prototype:\nvoid osg::Matrixd::makeRotate(double angle, const osg::Vec3f & axis)\nClass arguments details:\narg 2 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		double angle=(double)lua_tonumber(L,2);
		const osg::Vec3f* axis_ptr=(Luna< osg::Vec3f >::check(L,3));
		if( !axis_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg axis in osg::Matrixd::makeRotate function");
		}
		const osg::Vec3f & axis=*axis_ptr;

		osg::Matrixd* self=(Luna< osg::Matrixd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Matrixd::makeRotate(double, const osg::Vec3f &). Got : '%s'\n%s",typeid(Luna< osg::Matrixd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->makeRotate(angle, axis);

		return 0;
	}

	// void osg::Matrixd::makeRotate(double angle, const osg::Vec3d & axis)
	static int _bind_makeRotate_overload_4(lua_State *L) {
		if (!_lg_typecheck_makeRotate_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Matrixd::makeRotate(double angle, const osg::Vec3d & axis) function, expected prototype:\nvoid osg::Matrixd::makeRotate(double angle, const osg::Vec3d & axis)\nClass arguments details:\narg 2 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		double angle=(double)lua_tonumber(L,2);
		const osg::Vec3d* axis_ptr=(Luna< osg::Vec3d >::check(L,3));
		if( !axis_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg axis in osg::Matrixd::makeRotate function");
		}
		const osg::Vec3d & axis=*axis_ptr;

		osg::Matrixd* self=(Luna< osg::Matrixd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Matrixd::makeRotate(double, const osg::Vec3d &). Got : '%s'\n%s",typeid(Luna< osg::Matrixd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->makeRotate(angle, axis);

		return 0;
	}

	// void osg::Matrixd::makeRotate(double angle, double x, double y, double z)
	static int _bind_makeRotate_overload_5(lua_State *L) {
		if (!_lg_typecheck_makeRotate_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Matrixd::makeRotate(double angle, double x, double y, double z) function, expected prototype:\nvoid osg::Matrixd::makeRotate(double angle, double x, double y, double z)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double angle=(double)lua_tonumber(L,2);
		double x=(double)lua_tonumber(L,3);
		double y=(double)lua_tonumber(L,4);
		double z=(double)lua_tonumber(L,5);

		osg::Matrixd* self=(Luna< osg::Matrixd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Matrixd::makeRotate(double, double, double, double). Got : '%s'\n%s",typeid(Luna< osg::Matrixd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->makeRotate(angle, x, y, z);

		return 0;
	}

	// void osg::Matrixd::makeRotate(const osg::Quat & arg1)
	static int _bind_makeRotate_overload_6(lua_State *L) {
		if (!_lg_typecheck_makeRotate_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Matrixd::makeRotate(const osg::Quat & arg1) function, expected prototype:\nvoid osg::Matrixd::makeRotate(const osg::Quat & arg1)\nClass arguments details:\narg 1 ID = 80263306\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Quat* _arg1_ptr=(Luna< osg::Quat >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Matrixd::makeRotate function");
		}
		const osg::Quat & _arg1=*_arg1_ptr;

		osg::Matrixd* self=(Luna< osg::Matrixd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Matrixd::makeRotate(const osg::Quat &). Got : '%s'\n%s",typeid(Luna< osg::Matrixd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->makeRotate(_arg1);

		return 0;
	}

	// void osg::Matrixd::makeRotate(double angle1, const osg::Vec3f & axis1, double angle2, const osg::Vec3f & axis2, double angle3, const osg::Vec3f & axis3)
	static int _bind_makeRotate_overload_7(lua_State *L) {
		if (!_lg_typecheck_makeRotate_overload_7(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Matrixd::makeRotate(double angle1, const osg::Vec3f & axis1, double angle2, const osg::Vec3f & axis2, double angle3, const osg::Vec3f & axis3) function, expected prototype:\nvoid osg::Matrixd::makeRotate(double angle1, const osg::Vec3f & axis1, double angle2, const osg::Vec3f & axis2, double angle3, const osg::Vec3f & axis3)\nClass arguments details:\narg 2 ID = 92303204\narg 4 ID = 92303204\narg 6 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		double angle1=(double)lua_tonumber(L,2);
		const osg::Vec3f* axis1_ptr=(Luna< osg::Vec3f >::check(L,3));
		if( !axis1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg axis1 in osg::Matrixd::makeRotate function");
		}
		const osg::Vec3f & axis1=*axis1_ptr;
		double angle2=(double)lua_tonumber(L,4);
		const osg::Vec3f* axis2_ptr=(Luna< osg::Vec3f >::check(L,5));
		if( !axis2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg axis2 in osg::Matrixd::makeRotate function");
		}
		const osg::Vec3f & axis2=*axis2_ptr;
		double angle3=(double)lua_tonumber(L,6);
		const osg::Vec3f* axis3_ptr=(Luna< osg::Vec3f >::check(L,7));
		if( !axis3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg axis3 in osg::Matrixd::makeRotate function");
		}
		const osg::Vec3f & axis3=*axis3_ptr;

		osg::Matrixd* self=(Luna< osg::Matrixd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Matrixd::makeRotate(double, const osg::Vec3f &, double, const osg::Vec3f &, double, const osg::Vec3f &). Got : '%s'\n%s",typeid(Luna< osg::Matrixd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->makeRotate(angle1, axis1, angle2, axis2, angle3, axis3);

		return 0;
	}

	// void osg::Matrixd::makeRotate(double angle1, const osg::Vec3d & axis1, double angle2, const osg::Vec3d & axis2, double angle3, const osg::Vec3d & axis3)
	static int _bind_makeRotate_overload_8(lua_State *L) {
		if (!_lg_typecheck_makeRotate_overload_8(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Matrixd::makeRotate(double angle1, const osg::Vec3d & axis1, double angle2, const osg::Vec3d & axis2, double angle3, const osg::Vec3d & axis3) function, expected prototype:\nvoid osg::Matrixd::makeRotate(double angle1, const osg::Vec3d & axis1, double angle2, const osg::Vec3d & axis2, double angle3, const osg::Vec3d & axis3)\nClass arguments details:\narg 2 ID = 92303202\narg 4 ID = 92303202\narg 6 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		double angle1=(double)lua_tonumber(L,2);
		const osg::Vec3d* axis1_ptr=(Luna< osg::Vec3d >::check(L,3));
		if( !axis1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg axis1 in osg::Matrixd::makeRotate function");
		}
		const osg::Vec3d & axis1=*axis1_ptr;
		double angle2=(double)lua_tonumber(L,4);
		const osg::Vec3d* axis2_ptr=(Luna< osg::Vec3d >::check(L,5));
		if( !axis2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg axis2 in osg::Matrixd::makeRotate function");
		}
		const osg::Vec3d & axis2=*axis2_ptr;
		double angle3=(double)lua_tonumber(L,6);
		const osg::Vec3d* axis3_ptr=(Luna< osg::Vec3d >::check(L,7));
		if( !axis3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg axis3 in osg::Matrixd::makeRotate function");
		}
		const osg::Vec3d & axis3=*axis3_ptr;

		osg::Matrixd* self=(Luna< osg::Matrixd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Matrixd::makeRotate(double, const osg::Vec3d &, double, const osg::Vec3d &, double, const osg::Vec3d &). Got : '%s'\n%s",typeid(Luna< osg::Matrixd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->makeRotate(angle1, axis1, angle2, axis2, angle3, axis3);

		return 0;
	}

	// Overload binder for osg::Matrixd::makeRotate
	static int _bind_makeRotate(lua_State *L) {
		if (_lg_typecheck_makeRotate_overload_1(L)) return _bind_makeRotate_overload_1(L);
		if (_lg_typecheck_makeRotate_overload_2(L)) return _bind_makeRotate_overload_2(L);
		if (_lg_typecheck_makeRotate_overload_3(L)) return _bind_makeRotate_overload_3(L);
		if (_lg_typecheck_makeRotate_overload_4(L)) return _bind_makeRotate_overload_4(L);
		if (_lg_typecheck_makeRotate_overload_5(L)) return _bind_makeRotate_overload_5(L);
		if (_lg_typecheck_makeRotate_overload_6(L)) return _bind_makeRotate_overload_6(L);
		if (_lg_typecheck_makeRotate_overload_7(L)) return _bind_makeRotate_overload_7(L);
		if (_lg_typecheck_makeRotate_overload_8(L)) return _bind_makeRotate_overload_8(L);

		luaL_error(L, "error in function makeRotate, cannot match any of the overloads for function makeRotate:\n  makeRotate(const osg::Vec3f &, const osg::Vec3f &)\n  makeRotate(const osg::Vec3d &, const osg::Vec3d &)\n  makeRotate(double, const osg::Vec3f &)\n  makeRotate(double, const osg::Vec3d &)\n  makeRotate(double, double, double, double)\n  makeRotate(const osg::Quat &)\n  makeRotate(double, const osg::Vec3f &, double, const osg::Vec3f &, double, const osg::Vec3f &)\n  makeRotate(double, const osg::Vec3d &, double, const osg::Vec3d &, double, const osg::Vec3d &)\n");
		return 0;
	}

	// void osg::Matrixd::decompose(osg::Vec3f & translation, osg::Quat & rotation, osg::Vec3f & scale, osg::Quat & so) const
	static int _bind_decompose_overload_1(lua_State *L) {
		if (!_lg_typecheck_decompose_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Matrixd::decompose(osg::Vec3f & translation, osg::Quat & rotation, osg::Vec3f & scale, osg::Quat & so) const function, expected prototype:\nvoid osg::Matrixd::decompose(osg::Vec3f & translation, osg::Quat & rotation, osg::Vec3f & scale, osg::Quat & so) const\nClass arguments details:\narg 1 ID = 92303204\narg 2 ID = 80263306\narg 3 ID = 92303204\narg 4 ID = 80263306\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec3f* translation_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !translation_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg translation in osg::Matrixd::decompose function");
		}
		osg::Vec3f & translation=*translation_ptr;
		osg::Quat* rotation_ptr=(Luna< osg::Quat >::check(L,3));
		if( !rotation_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rotation in osg::Matrixd::decompose function");
		}
		osg::Quat & rotation=*rotation_ptr;
		osg::Vec3f* scale_ptr=(Luna< osg::Vec3f >::check(L,4));
		if( !scale_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg scale in osg::Matrixd::decompose function");
		}
		osg::Vec3f & scale=*scale_ptr;
		osg::Quat* so_ptr=(Luna< osg::Quat >::check(L,5));
		if( !so_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg so in osg::Matrixd::decompose function");
		}
		osg::Quat & so=*so_ptr;

		osg::Matrixd* self=(Luna< osg::Matrixd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Matrixd::decompose(osg::Vec3f &, osg::Quat &, osg::Vec3f &, osg::Quat &) const. Got : '%s'\n%s",typeid(Luna< osg::Matrixd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->decompose(translation, rotation, scale, so);

		return 0;
	}

	// void osg::Matrixd::decompose(osg::Vec3d & translation, osg::Quat & rotation, osg::Vec3d & scale, osg::Quat & so) const
	static int _bind_decompose_overload_2(lua_State *L) {
		if (!_lg_typecheck_decompose_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Matrixd::decompose(osg::Vec3d & translation, osg::Quat & rotation, osg::Vec3d & scale, osg::Quat & so) const function, expected prototype:\nvoid osg::Matrixd::decompose(osg::Vec3d & translation, osg::Quat & rotation, osg::Vec3d & scale, osg::Quat & so) const\nClass arguments details:\narg 1 ID = 92303202\narg 2 ID = 80263306\narg 3 ID = 92303202\narg 4 ID = 80263306\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec3d* translation_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !translation_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg translation in osg::Matrixd::decompose function");
		}
		osg::Vec3d & translation=*translation_ptr;
		osg::Quat* rotation_ptr=(Luna< osg::Quat >::check(L,3));
		if( !rotation_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rotation in osg::Matrixd::decompose function");
		}
		osg::Quat & rotation=*rotation_ptr;
		osg::Vec3d* scale_ptr=(Luna< osg::Vec3d >::check(L,4));
		if( !scale_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg scale in osg::Matrixd::decompose function");
		}
		osg::Vec3d & scale=*scale_ptr;
		osg::Quat* so_ptr=(Luna< osg::Quat >::check(L,5));
		if( !so_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg so in osg::Matrixd::decompose function");
		}
		osg::Quat & so=*so_ptr;

		osg::Matrixd* self=(Luna< osg::Matrixd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Matrixd::decompose(osg::Vec3d &, osg::Quat &, osg::Vec3d &, osg::Quat &) const. Got : '%s'\n%s",typeid(Luna< osg::Matrixd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->decompose(translation, rotation, scale, so);

		return 0;
	}

	// Overload binder for osg::Matrixd::decompose
	static int _bind_decompose(lua_State *L) {
		if (_lg_typecheck_decompose_overload_1(L)) return _bind_decompose_overload_1(L);
		if (_lg_typecheck_decompose_overload_2(L)) return _bind_decompose_overload_2(L);

		luaL_error(L, "error in function decompose, cannot match any of the overloads for function decompose:\n  decompose(osg::Vec3f &, osg::Quat &, osg::Vec3f &, osg::Quat &)\n  decompose(osg::Vec3d &, osg::Quat &, osg::Vec3d &, osg::Quat &)\n");
		return 0;
	}

	// void osg::Matrixd::makeOrtho(double left, double right, double bottom, double top, double zNear, double zFar)
	static int _bind_makeOrtho(lua_State *L) {
		if (!_lg_typecheck_makeOrtho(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Matrixd::makeOrtho(double left, double right, double bottom, double top, double zNear, double zFar) function, expected prototype:\nvoid osg::Matrixd::makeOrtho(double left, double right, double bottom, double top, double zNear, double zFar)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double left=(double)lua_tonumber(L,2);
		double right=(double)lua_tonumber(L,3);
		double bottom=(double)lua_tonumber(L,4);
		double top=(double)lua_tonumber(L,5);
		double zNear=(double)lua_tonumber(L,6);
		double zFar=(double)lua_tonumber(L,7);

		osg::Matrixd* self=(Luna< osg::Matrixd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Matrixd::makeOrtho(double, double, double, double, double, double). Got : '%s'\n%s",typeid(Luna< osg::Matrixd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->makeOrtho(left, right, bottom, top, zNear, zFar);

		return 0;
	}

	// bool osg::Matrixd::getOrtho(double & left, double & right, double & bottom, double & top, double & zNear, double & zFar) const
	static int _bind_getOrtho_overload_1(lua_State *L) {
		if (!_lg_typecheck_getOrtho_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Matrixd::getOrtho(double & left, double & right, double & bottom, double & top, double & zNear, double & zFar) const function, expected prototype:\nbool osg::Matrixd::getOrtho(double & left, double & right, double & bottom, double & top, double & zNear, double & zFar) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double left=(double)lua_tonumber(L,2);
		double right=(double)lua_tonumber(L,3);
		double bottom=(double)lua_tonumber(L,4);
		double top=(double)lua_tonumber(L,5);
		double zNear=(double)lua_tonumber(L,6);
		double zFar=(double)lua_tonumber(L,7);

		osg::Matrixd* self=(Luna< osg::Matrixd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Matrixd::getOrtho(double &, double &, double &, double &, double &, double &) const. Got : '%s'\n%s",typeid(Luna< osg::Matrixd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getOrtho(left, right, bottom, top, zNear, zFar);
		lua_pushboolean(L,lret?1:0);

		lua_pushnumber(L,left);
		lua_pushnumber(L,right);
		lua_pushnumber(L,bottom);
		lua_pushnumber(L,top);
		lua_pushnumber(L,zNear);
		lua_pushnumber(L,zFar);
		return 7;
	}

	// bool osg::Matrixd::getOrtho(float & left, float & right, float & bottom, float & top, float & zNear, float & zFar) const
	static int _bind_getOrtho_overload_2(lua_State *L) {
		if (!_lg_typecheck_getOrtho_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Matrixd::getOrtho(float & left, float & right, float & bottom, float & top, float & zNear, float & zFar) const function, expected prototype:\nbool osg::Matrixd::getOrtho(float & left, float & right, float & bottom, float & top, float & zNear, float & zFar) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float left=(float)lua_tonumber(L,2);
		float right=(float)lua_tonumber(L,3);
		float bottom=(float)lua_tonumber(L,4);
		float top=(float)lua_tonumber(L,5);
		float zNear=(float)lua_tonumber(L,6);
		float zFar=(float)lua_tonumber(L,7);

		osg::Matrixd* self=(Luna< osg::Matrixd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Matrixd::getOrtho(float &, float &, float &, float &, float &, float &) const. Got : '%s'\n%s",typeid(Luna< osg::Matrixd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getOrtho(left, right, bottom, top, zNear, zFar);
		lua_pushboolean(L,lret?1:0);

		lua_pushnumber(L,left);
		lua_pushnumber(L,right);
		lua_pushnumber(L,bottom);
		lua_pushnumber(L,top);
		lua_pushnumber(L,zNear);
		lua_pushnumber(L,zFar);
		return 7;
	}

	// Overload binder for osg::Matrixd::getOrtho
	static int _bind_getOrtho(lua_State *L) {
		if (_lg_typecheck_getOrtho_overload_1(L)) return _bind_getOrtho_overload_1(L);
		if (_lg_typecheck_getOrtho_overload_2(L)) return _bind_getOrtho_overload_2(L);

		luaL_error(L, "error in function getOrtho, cannot match any of the overloads for function getOrtho:\n  getOrtho(double &, double &, double &, double &, double &, double &)\n  getOrtho(float &, float &, float &, float &, float &, float &)\n");
		return 0;
	}

	// void osg::Matrixd::makeOrtho2D(double left, double right, double bottom, double top)
	static int _bind_makeOrtho2D(lua_State *L) {
		if (!_lg_typecheck_makeOrtho2D(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Matrixd::makeOrtho2D(double left, double right, double bottom, double top) function, expected prototype:\nvoid osg::Matrixd::makeOrtho2D(double left, double right, double bottom, double top)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double left=(double)lua_tonumber(L,2);
		double right=(double)lua_tonumber(L,3);
		double bottom=(double)lua_tonumber(L,4);
		double top=(double)lua_tonumber(L,5);

		osg::Matrixd* self=(Luna< osg::Matrixd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Matrixd::makeOrtho2D(double, double, double, double). Got : '%s'\n%s",typeid(Luna< osg::Matrixd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->makeOrtho2D(left, right, bottom, top);

		return 0;
	}

	// void osg::Matrixd::makeFrustum(double left, double right, double bottom, double top, double zNear, double zFar)
	static int _bind_makeFrustum(lua_State *L) {
		if (!_lg_typecheck_makeFrustum(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Matrixd::makeFrustum(double left, double right, double bottom, double top, double zNear, double zFar) function, expected prototype:\nvoid osg::Matrixd::makeFrustum(double left, double right, double bottom, double top, double zNear, double zFar)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double left=(double)lua_tonumber(L,2);
		double right=(double)lua_tonumber(L,3);
		double bottom=(double)lua_tonumber(L,4);
		double top=(double)lua_tonumber(L,5);
		double zNear=(double)lua_tonumber(L,6);
		double zFar=(double)lua_tonumber(L,7);

		osg::Matrixd* self=(Luna< osg::Matrixd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Matrixd::makeFrustum(double, double, double, double, double, double). Got : '%s'\n%s",typeid(Luna< osg::Matrixd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->makeFrustum(left, right, bottom, top, zNear, zFar);

		return 0;
	}

	// bool osg::Matrixd::getFrustum(double & left, double & right, double & bottom, double & top, double & zNear, double & zFar) const
	static int _bind_getFrustum_overload_1(lua_State *L) {
		if (!_lg_typecheck_getFrustum_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Matrixd::getFrustum(double & left, double & right, double & bottom, double & top, double & zNear, double & zFar) const function, expected prototype:\nbool osg::Matrixd::getFrustum(double & left, double & right, double & bottom, double & top, double & zNear, double & zFar) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double left=(double)lua_tonumber(L,2);
		double right=(double)lua_tonumber(L,3);
		double bottom=(double)lua_tonumber(L,4);
		double top=(double)lua_tonumber(L,5);
		double zNear=(double)lua_tonumber(L,6);
		double zFar=(double)lua_tonumber(L,7);

		osg::Matrixd* self=(Luna< osg::Matrixd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Matrixd::getFrustum(double &, double &, double &, double &, double &, double &) const. Got : '%s'\n%s",typeid(Luna< osg::Matrixd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getFrustum(left, right, bottom, top, zNear, zFar);
		lua_pushboolean(L,lret?1:0);

		lua_pushnumber(L,left);
		lua_pushnumber(L,right);
		lua_pushnumber(L,bottom);
		lua_pushnumber(L,top);
		lua_pushnumber(L,zNear);
		lua_pushnumber(L,zFar);
		return 7;
	}

	// bool osg::Matrixd::getFrustum(float & left, float & right, float & bottom, float & top, float & zNear, float & zFar) const
	static int _bind_getFrustum_overload_2(lua_State *L) {
		if (!_lg_typecheck_getFrustum_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Matrixd::getFrustum(float & left, float & right, float & bottom, float & top, float & zNear, float & zFar) const function, expected prototype:\nbool osg::Matrixd::getFrustum(float & left, float & right, float & bottom, float & top, float & zNear, float & zFar) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float left=(float)lua_tonumber(L,2);
		float right=(float)lua_tonumber(L,3);
		float bottom=(float)lua_tonumber(L,4);
		float top=(float)lua_tonumber(L,5);
		float zNear=(float)lua_tonumber(L,6);
		float zFar=(float)lua_tonumber(L,7);

		osg::Matrixd* self=(Luna< osg::Matrixd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Matrixd::getFrustum(float &, float &, float &, float &, float &, float &) const. Got : '%s'\n%s",typeid(Luna< osg::Matrixd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getFrustum(left, right, bottom, top, zNear, zFar);
		lua_pushboolean(L,lret?1:0);

		lua_pushnumber(L,left);
		lua_pushnumber(L,right);
		lua_pushnumber(L,bottom);
		lua_pushnumber(L,top);
		lua_pushnumber(L,zNear);
		lua_pushnumber(L,zFar);
		return 7;
	}

	// Overload binder for osg::Matrixd::getFrustum
	static int _bind_getFrustum(lua_State *L) {
		if (_lg_typecheck_getFrustum_overload_1(L)) return _bind_getFrustum_overload_1(L);
		if (_lg_typecheck_getFrustum_overload_2(L)) return _bind_getFrustum_overload_2(L);

		luaL_error(L, "error in function getFrustum, cannot match any of the overloads for function getFrustum:\n  getFrustum(double &, double &, double &, double &, double &, double &)\n  getFrustum(float &, float &, float &, float &, float &, float &)\n");
		return 0;
	}

	// void osg::Matrixd::makePerspective(double fovy, double aspectRatio, double zNear, double zFar)
	static int _bind_makePerspective(lua_State *L) {
		if (!_lg_typecheck_makePerspective(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Matrixd::makePerspective(double fovy, double aspectRatio, double zNear, double zFar) function, expected prototype:\nvoid osg::Matrixd::makePerspective(double fovy, double aspectRatio, double zNear, double zFar)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double fovy=(double)lua_tonumber(L,2);
		double aspectRatio=(double)lua_tonumber(L,3);
		double zNear=(double)lua_tonumber(L,4);
		double zFar=(double)lua_tonumber(L,5);

		osg::Matrixd* self=(Luna< osg::Matrixd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Matrixd::makePerspective(double, double, double, double). Got : '%s'\n%s",typeid(Luna< osg::Matrixd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->makePerspective(fovy, aspectRatio, zNear, zFar);

		return 0;
	}

	// bool osg::Matrixd::getPerspective(double & fovy, double & aspectRatio, double & zNear, double & zFar) const
	static int _bind_getPerspective_overload_1(lua_State *L) {
		if (!_lg_typecheck_getPerspective_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Matrixd::getPerspective(double & fovy, double & aspectRatio, double & zNear, double & zFar) const function, expected prototype:\nbool osg::Matrixd::getPerspective(double & fovy, double & aspectRatio, double & zNear, double & zFar) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double fovy=(double)lua_tonumber(L,2);
		double aspectRatio=(double)lua_tonumber(L,3);
		double zNear=(double)lua_tonumber(L,4);
		double zFar=(double)lua_tonumber(L,5);

		osg::Matrixd* self=(Luna< osg::Matrixd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Matrixd::getPerspective(double &, double &, double &, double &) const. Got : '%s'\n%s",typeid(Luna< osg::Matrixd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getPerspective(fovy, aspectRatio, zNear, zFar);
		lua_pushboolean(L,lret?1:0);

		lua_pushnumber(L,fovy);
		lua_pushnumber(L,aspectRatio);
		lua_pushnumber(L,zNear);
		lua_pushnumber(L,zFar);
		return 5;
	}

	// bool osg::Matrixd::getPerspective(float & fovy, float & aspectRatio, float & zNear, float & zFar) const
	static int _bind_getPerspective_overload_2(lua_State *L) {
		if (!_lg_typecheck_getPerspective_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Matrixd::getPerspective(float & fovy, float & aspectRatio, float & zNear, float & zFar) const function, expected prototype:\nbool osg::Matrixd::getPerspective(float & fovy, float & aspectRatio, float & zNear, float & zFar) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float fovy=(float)lua_tonumber(L,2);
		float aspectRatio=(float)lua_tonumber(L,3);
		float zNear=(float)lua_tonumber(L,4);
		float zFar=(float)lua_tonumber(L,5);

		osg::Matrixd* self=(Luna< osg::Matrixd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Matrixd::getPerspective(float &, float &, float &, float &) const. Got : '%s'\n%s",typeid(Luna< osg::Matrixd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getPerspective(fovy, aspectRatio, zNear, zFar);
		lua_pushboolean(L,lret?1:0);

		lua_pushnumber(L,fovy);
		lua_pushnumber(L,aspectRatio);
		lua_pushnumber(L,zNear);
		lua_pushnumber(L,zFar);
		return 5;
	}

	// Overload binder for osg::Matrixd::getPerspective
	static int _bind_getPerspective(lua_State *L) {
		if (_lg_typecheck_getPerspective_overload_1(L)) return _bind_getPerspective_overload_1(L);
		if (_lg_typecheck_getPerspective_overload_2(L)) return _bind_getPerspective_overload_2(L);

		luaL_error(L, "error in function getPerspective, cannot match any of the overloads for function getPerspective:\n  getPerspective(double &, double &, double &, double &)\n  getPerspective(float &, float &, float &, float &)\n");
		return 0;
	}

	// void osg::Matrixd::makeLookAt(const osg::Vec3d & eye, const osg::Vec3d & center, const osg::Vec3d & up)
	static int _bind_makeLookAt(lua_State *L) {
		if (!_lg_typecheck_makeLookAt(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Matrixd::makeLookAt(const osg::Vec3d & eye, const osg::Vec3d & center, const osg::Vec3d & up) function, expected prototype:\nvoid osg::Matrixd::makeLookAt(const osg::Vec3d & eye, const osg::Vec3d & center, const osg::Vec3d & up)\nClass arguments details:\narg 1 ID = 92303202\narg 2 ID = 92303202\narg 3 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3d* eye_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !eye_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg eye in osg::Matrixd::makeLookAt function");
		}
		const osg::Vec3d & eye=*eye_ptr;
		const osg::Vec3d* center_ptr=(Luna< osg::Vec3d >::check(L,3));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in osg::Matrixd::makeLookAt function");
		}
		const osg::Vec3d & center=*center_ptr;
		const osg::Vec3d* up_ptr=(Luna< osg::Vec3d >::check(L,4));
		if( !up_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg up in osg::Matrixd::makeLookAt function");
		}
		const osg::Vec3d & up=*up_ptr;

		osg::Matrixd* self=(Luna< osg::Matrixd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Matrixd::makeLookAt(const osg::Vec3d &, const osg::Vec3d &, const osg::Vec3d &). Got : '%s'\n%s",typeid(Luna< osg::Matrixd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->makeLookAt(eye, center, up);

		return 0;
	}

	// void osg::Matrixd::getLookAt(osg::Vec3f & eye, osg::Vec3f & center, osg::Vec3f & up, double lookDistance = 1.0f) const
	static int _bind_getLookAt_overload_1(lua_State *L) {
		if (!_lg_typecheck_getLookAt_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Matrixd::getLookAt(osg::Vec3f & eye, osg::Vec3f & center, osg::Vec3f & up, double lookDistance = 1.0f) const function, expected prototype:\nvoid osg::Matrixd::getLookAt(osg::Vec3f & eye, osg::Vec3f & center, osg::Vec3f & up, double lookDistance = 1.0f) const\nClass arguments details:\narg 1 ID = 92303204\narg 2 ID = 92303204\narg 3 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::Vec3f* eye_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !eye_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg eye in osg::Matrixd::getLookAt function");
		}
		osg::Vec3f & eye=*eye_ptr;
		osg::Vec3f* center_ptr=(Luna< osg::Vec3f >::check(L,3));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in osg::Matrixd::getLookAt function");
		}
		osg::Vec3f & center=*center_ptr;
		osg::Vec3f* up_ptr=(Luna< osg::Vec3f >::check(L,4));
		if( !up_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg up in osg::Matrixd::getLookAt function");
		}
		osg::Vec3f & up=*up_ptr;
		double lookDistance=luatop>4 ? (double)lua_tonumber(L,5) : (double)1.0f;

		osg::Matrixd* self=(Luna< osg::Matrixd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Matrixd::getLookAt(osg::Vec3f &, osg::Vec3f &, osg::Vec3f &, double) const. Got : '%s'\n%s",typeid(Luna< osg::Matrixd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getLookAt(eye, center, up, lookDistance);

		return 0;
	}

	// void osg::Matrixd::getLookAt(osg::Vec3d & eye, osg::Vec3d & center, osg::Vec3d & up, double lookDistance = 1.0f) const
	static int _bind_getLookAt_overload_2(lua_State *L) {
		if (!_lg_typecheck_getLookAt_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Matrixd::getLookAt(osg::Vec3d & eye, osg::Vec3d & center, osg::Vec3d & up, double lookDistance = 1.0f) const function, expected prototype:\nvoid osg::Matrixd::getLookAt(osg::Vec3d & eye, osg::Vec3d & center, osg::Vec3d & up, double lookDistance = 1.0f) const\nClass arguments details:\narg 1 ID = 92303202\narg 2 ID = 92303202\narg 3 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::Vec3d* eye_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !eye_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg eye in osg::Matrixd::getLookAt function");
		}
		osg::Vec3d & eye=*eye_ptr;
		osg::Vec3d* center_ptr=(Luna< osg::Vec3d >::check(L,3));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in osg::Matrixd::getLookAt function");
		}
		osg::Vec3d & center=*center_ptr;
		osg::Vec3d* up_ptr=(Luna< osg::Vec3d >::check(L,4));
		if( !up_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg up in osg::Matrixd::getLookAt function");
		}
		osg::Vec3d & up=*up_ptr;
		double lookDistance=luatop>4 ? (double)lua_tonumber(L,5) : (double)1.0f;

		osg::Matrixd* self=(Luna< osg::Matrixd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Matrixd::getLookAt(osg::Vec3d &, osg::Vec3d &, osg::Vec3d &, double) const. Got : '%s'\n%s",typeid(Luna< osg::Matrixd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getLookAt(eye, center, up, lookDistance);

		return 0;
	}

	// Overload binder for osg::Matrixd::getLookAt
	static int _bind_getLookAt(lua_State *L) {
		if (_lg_typecheck_getLookAt_overload_1(L)) return _bind_getLookAt_overload_1(L);
		if (_lg_typecheck_getLookAt_overload_2(L)) return _bind_getLookAt_overload_2(L);

		luaL_error(L, "error in function getLookAt, cannot match any of the overloads for function getLookAt:\n  getLookAt(osg::Vec3f &, osg::Vec3f &, osg::Vec3f &, double)\n  getLookAt(osg::Vec3d &, osg::Vec3d &, osg::Vec3d &, double)\n");
		return 0;
	}

	// bool osg::Matrixd::invert(const osg::Matrixd & rhs)
	static int _bind_invert(lua_State *L) {
		if (!_lg_typecheck_invert(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Matrixd::invert(const osg::Matrixd & rhs) function, expected prototype:\nbool osg::Matrixd::invert(const osg::Matrixd & rhs)\nClass arguments details:\narg 1 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrixd* rhs_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Matrixd::invert function");
		}
		const osg::Matrixd & rhs=*rhs_ptr;

		osg::Matrixd* self=(Luna< osg::Matrixd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Matrixd::invert(const osg::Matrixd &). Got : '%s'\n%s",typeid(Luna< osg::Matrixd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->invert(rhs);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Matrixd::invert_4x3(const osg::Matrixd & rhs)
	static int _bind_invert_4x3(lua_State *L) {
		if (!_lg_typecheck_invert_4x3(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Matrixd::invert_4x3(const osg::Matrixd & rhs) function, expected prototype:\nbool osg::Matrixd::invert_4x3(const osg::Matrixd & rhs)\nClass arguments details:\narg 1 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrixd* rhs_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Matrixd::invert_4x3 function");
		}
		const osg::Matrixd & rhs=*rhs_ptr;

		osg::Matrixd* self=(Luna< osg::Matrixd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Matrixd::invert_4x3(const osg::Matrixd &). Got : '%s'\n%s",typeid(Luna< osg::Matrixd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->invert_4x3(rhs);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Matrixd::invert_4x4(const osg::Matrixd & rhs)
	static int _bind_invert_4x4(lua_State *L) {
		if (!_lg_typecheck_invert_4x4(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Matrixd::invert_4x4(const osg::Matrixd & rhs) function, expected prototype:\nbool osg::Matrixd::invert_4x4(const osg::Matrixd & rhs)\nClass arguments details:\narg 1 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrixd* rhs_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Matrixd::invert_4x4 function");
		}
		const osg::Matrixd & rhs=*rhs_ptr;

		osg::Matrixd* self=(Luna< osg::Matrixd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Matrixd::invert_4x4(const osg::Matrixd &). Got : '%s'\n%s",typeid(Luna< osg::Matrixd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->invert_4x4(rhs);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Matrixd::orthoNormalize(const osg::Matrixd & rhs)
	static int _bind_orthoNormalize(lua_State *L) {
		if (!_lg_typecheck_orthoNormalize(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Matrixd::orthoNormalize(const osg::Matrixd & rhs) function, expected prototype:\nvoid osg::Matrixd::orthoNormalize(const osg::Matrixd & rhs)\nClass arguments details:\narg 1 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrixd* rhs_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Matrixd::orthoNormalize function");
		}
		const osg::Matrixd & rhs=*rhs_ptr;

		osg::Matrixd* self=(Luna< osg::Matrixd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Matrixd::orthoNormalize(const osg::Matrixd &). Got : '%s'\n%s",typeid(Luna< osg::Matrixd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->orthoNormalize(rhs);

		return 0;
	}

	// osg::Vec3f osg::Matrixd::preMult(const osg::Vec3f & v) const
	static int _bind_preMult_overload_1(lua_State *L) {
		if (!_lg_typecheck_preMult_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3f osg::Matrixd::preMult(const osg::Vec3f & v) const function, expected prototype:\nosg::Vec3f osg::Matrixd::preMult(const osg::Vec3f & v) const\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* v_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osg::Matrixd::preMult function");
		}
		const osg::Vec3f & v=*v_ptr;

		osg::Matrixd* self=(Luna< osg::Matrixd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3f osg::Matrixd::preMult(const osg::Vec3f &) const. Got : '%s'\n%s",typeid(Luna< osg::Matrixd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec3f stack_lret = self->preMult(v);
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// osg::Vec3d osg::Matrixd::preMult(const osg::Vec3d & v) const
	static int _bind_preMult_overload_2(lua_State *L) {
		if (!_lg_typecheck_preMult_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3d osg::Matrixd::preMult(const osg::Vec3d & v) const function, expected prototype:\nosg::Vec3d osg::Matrixd::preMult(const osg::Vec3d & v) const\nClass arguments details:\narg 1 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3d* v_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osg::Matrixd::preMult function");
		}
		const osg::Vec3d & v=*v_ptr;

		osg::Matrixd* self=(Luna< osg::Matrixd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3d osg::Matrixd::preMult(const osg::Vec3d &) const. Got : '%s'\n%s",typeid(Luna< osg::Matrixd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec3d stack_lret = self->preMult(v);
		osg::Vec3d* lret = new osg::Vec3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3d >::push(L,lret,true);

		return 1;
	}

	// osg::Vec4f osg::Matrixd::preMult(const osg::Vec4f & v) const
	static int _bind_preMult_overload_3(lua_State *L) {
		if (!_lg_typecheck_preMult_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec4f osg::Matrixd::preMult(const osg::Vec4f & v) const function, expected prototype:\nosg::Vec4f osg::Matrixd::preMult(const osg::Vec4f & v) const\nClass arguments details:\narg 1 ID = 92303235\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec4f* v_ptr=(Luna< osg::Vec4f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osg::Matrixd::preMult function");
		}
		const osg::Vec4f & v=*v_ptr;

		osg::Matrixd* self=(Luna< osg::Matrixd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec4f osg::Matrixd::preMult(const osg::Vec4f &) const. Got : '%s'\n%s",typeid(Luna< osg::Matrixd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec4f stack_lret = self->preMult(v);
		osg::Vec4f* lret = new osg::Vec4f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4f >::push(L,lret,true);

		return 1;
	}

	// osg::Vec4d osg::Matrixd::preMult(const osg::Vec4d & v) const
	static int _bind_preMult_overload_4(lua_State *L) {
		if (!_lg_typecheck_preMult_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec4d osg::Matrixd::preMult(const osg::Vec4d & v) const function, expected prototype:\nosg::Vec4d osg::Matrixd::preMult(const osg::Vec4d & v) const\nClass arguments details:\narg 1 ID = 92303233\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec4d* v_ptr=(Luna< osg::Vec4d >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osg::Matrixd::preMult function");
		}
		const osg::Vec4d & v=*v_ptr;

		osg::Matrixd* self=(Luna< osg::Matrixd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec4d osg::Matrixd::preMult(const osg::Vec4d &) const. Got : '%s'\n%s",typeid(Luna< osg::Matrixd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec4d stack_lret = self->preMult(v);
		osg::Vec4d* lret = new osg::Vec4d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4d >::push(L,lret,true);

		return 1;
	}

	// void osg::Matrixd::preMult(const osg::Matrixd & arg1)
	static int _bind_preMult_overload_5(lua_State *L) {
		if (!_lg_typecheck_preMult_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Matrixd::preMult(const osg::Matrixd & arg1) function, expected prototype:\nvoid osg::Matrixd::preMult(const osg::Matrixd & arg1)\nClass arguments details:\narg 1 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrixd* _arg1_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Matrixd::preMult function");
		}
		const osg::Matrixd & _arg1=*_arg1_ptr;

		osg::Matrixd* self=(Luna< osg::Matrixd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Matrixd::preMult(const osg::Matrixd &). Got : '%s'\n%s",typeid(Luna< osg::Matrixd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->preMult(_arg1);

		return 0;
	}

	// Overload binder for osg::Matrixd::preMult
	static int _bind_preMult(lua_State *L) {
		if (_lg_typecheck_preMult_overload_1(L)) return _bind_preMult_overload_1(L);
		if (_lg_typecheck_preMult_overload_2(L)) return _bind_preMult_overload_2(L);
		if (_lg_typecheck_preMult_overload_3(L)) return _bind_preMult_overload_3(L);
		if (_lg_typecheck_preMult_overload_4(L)) return _bind_preMult_overload_4(L);
		if (_lg_typecheck_preMult_overload_5(L)) return _bind_preMult_overload_5(L);

		luaL_error(L, "error in function preMult, cannot match any of the overloads for function preMult:\n  preMult(const osg::Vec3f &)\n  preMult(const osg::Vec3d &)\n  preMult(const osg::Vec4f &)\n  preMult(const osg::Vec4d &)\n  preMult(const osg::Matrixd &)\n");
		return 0;
	}

	// osg::Vec3f osg::Matrixd::postMult(const osg::Vec3f & v) const
	static int _bind_postMult_overload_1(lua_State *L) {
		if (!_lg_typecheck_postMult_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3f osg::Matrixd::postMult(const osg::Vec3f & v) const function, expected prototype:\nosg::Vec3f osg::Matrixd::postMult(const osg::Vec3f & v) const\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* v_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osg::Matrixd::postMult function");
		}
		const osg::Vec3f & v=*v_ptr;

		osg::Matrixd* self=(Luna< osg::Matrixd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3f osg::Matrixd::postMult(const osg::Vec3f &) const. Got : '%s'\n%s",typeid(Luna< osg::Matrixd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec3f stack_lret = self->postMult(v);
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// osg::Vec3d osg::Matrixd::postMult(const osg::Vec3d & v) const
	static int _bind_postMult_overload_2(lua_State *L) {
		if (!_lg_typecheck_postMult_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3d osg::Matrixd::postMult(const osg::Vec3d & v) const function, expected prototype:\nosg::Vec3d osg::Matrixd::postMult(const osg::Vec3d & v) const\nClass arguments details:\narg 1 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3d* v_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osg::Matrixd::postMult function");
		}
		const osg::Vec3d & v=*v_ptr;

		osg::Matrixd* self=(Luna< osg::Matrixd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3d osg::Matrixd::postMult(const osg::Vec3d &) const. Got : '%s'\n%s",typeid(Luna< osg::Matrixd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec3d stack_lret = self->postMult(v);
		osg::Vec3d* lret = new osg::Vec3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3d >::push(L,lret,true);

		return 1;
	}

	// osg::Vec4f osg::Matrixd::postMult(const osg::Vec4f & v) const
	static int _bind_postMult_overload_3(lua_State *L) {
		if (!_lg_typecheck_postMult_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec4f osg::Matrixd::postMult(const osg::Vec4f & v) const function, expected prototype:\nosg::Vec4f osg::Matrixd::postMult(const osg::Vec4f & v) const\nClass arguments details:\narg 1 ID = 92303235\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec4f* v_ptr=(Luna< osg::Vec4f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osg::Matrixd::postMult function");
		}
		const osg::Vec4f & v=*v_ptr;

		osg::Matrixd* self=(Luna< osg::Matrixd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec4f osg::Matrixd::postMult(const osg::Vec4f &) const. Got : '%s'\n%s",typeid(Luna< osg::Matrixd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec4f stack_lret = self->postMult(v);
		osg::Vec4f* lret = new osg::Vec4f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4f >::push(L,lret,true);

		return 1;
	}

	// osg::Vec4d osg::Matrixd::postMult(const osg::Vec4d & v) const
	static int _bind_postMult_overload_4(lua_State *L) {
		if (!_lg_typecheck_postMult_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec4d osg::Matrixd::postMult(const osg::Vec4d & v) const function, expected prototype:\nosg::Vec4d osg::Matrixd::postMult(const osg::Vec4d & v) const\nClass arguments details:\narg 1 ID = 92303233\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec4d* v_ptr=(Luna< osg::Vec4d >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osg::Matrixd::postMult function");
		}
		const osg::Vec4d & v=*v_ptr;

		osg::Matrixd* self=(Luna< osg::Matrixd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec4d osg::Matrixd::postMult(const osg::Vec4d &) const. Got : '%s'\n%s",typeid(Luna< osg::Matrixd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec4d stack_lret = self->postMult(v);
		osg::Vec4d* lret = new osg::Vec4d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4d >::push(L,lret,true);

		return 1;
	}

	// void osg::Matrixd::postMult(const osg::Matrixd & arg1)
	static int _bind_postMult_overload_5(lua_State *L) {
		if (!_lg_typecheck_postMult_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Matrixd::postMult(const osg::Matrixd & arg1) function, expected prototype:\nvoid osg::Matrixd::postMult(const osg::Matrixd & arg1)\nClass arguments details:\narg 1 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrixd* _arg1_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Matrixd::postMult function");
		}
		const osg::Matrixd & _arg1=*_arg1_ptr;

		osg::Matrixd* self=(Luna< osg::Matrixd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Matrixd::postMult(const osg::Matrixd &). Got : '%s'\n%s",typeid(Luna< osg::Matrixd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->postMult(_arg1);

		return 0;
	}

	// Overload binder for osg::Matrixd::postMult
	static int _bind_postMult(lua_State *L) {
		if (_lg_typecheck_postMult_overload_1(L)) return _bind_postMult_overload_1(L);
		if (_lg_typecheck_postMult_overload_2(L)) return _bind_postMult_overload_2(L);
		if (_lg_typecheck_postMult_overload_3(L)) return _bind_postMult_overload_3(L);
		if (_lg_typecheck_postMult_overload_4(L)) return _bind_postMult_overload_4(L);
		if (_lg_typecheck_postMult_overload_5(L)) return _bind_postMult_overload_5(L);

		luaL_error(L, "error in function postMult, cannot match any of the overloads for function postMult:\n  postMult(const osg::Vec3f &)\n  postMult(const osg::Vec3d &)\n  postMult(const osg::Vec4f &)\n  postMult(const osg::Vec4d &)\n  postMult(const osg::Matrixd &)\n");
		return 0;
	}

	// void osg::Matrixd::get(osg::Quat & q) const
	static int _bind_get(lua_State *L) {
		if (!_lg_typecheck_get(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Matrixd::get(osg::Quat & q) const function, expected prototype:\nvoid osg::Matrixd::get(osg::Quat & q) const\nClass arguments details:\narg 1 ID = 80263306\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Quat* q_ptr=(Luna< osg::Quat >::check(L,2));
		if( !q_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg q in osg::Matrixd::get function");
		}
		osg::Quat & q=*q_ptr;

		osg::Matrixd* self=(Luna< osg::Matrixd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Matrixd::get(osg::Quat &) const. Got : '%s'\n%s",typeid(Luna< osg::Matrixd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->get(q);

		return 0;
	}

	// void osg::Matrixd::setRotate(const osg::Quat & q)
	static int _bind_setRotate(lua_State *L) {
		if (!_lg_typecheck_setRotate(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Matrixd::setRotate(const osg::Quat & q) function, expected prototype:\nvoid osg::Matrixd::setRotate(const osg::Quat & q)\nClass arguments details:\narg 1 ID = 80263306\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Quat* q_ptr=(Luna< osg::Quat >::check(L,2));
		if( !q_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg q in osg::Matrixd::setRotate function");
		}
		const osg::Quat & q=*q_ptr;

		osg::Matrixd* self=(Luna< osg::Matrixd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Matrixd::setRotate(const osg::Quat &). Got : '%s'\n%s",typeid(Luna< osg::Matrixd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setRotate(q);

		return 0;
	}

	// osg::Quat osg::Matrixd::getRotate() const
	static int _bind_getRotate(lua_State *L) {
		if (!_lg_typecheck_getRotate(L)) {
			luaL_error(L, "luna typecheck failed in osg::Quat osg::Matrixd::getRotate() const function, expected prototype:\nosg::Quat osg::Matrixd::getRotate() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Matrixd* self=(Luna< osg::Matrixd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Quat osg::Matrixd::getRotate() const. Got : '%s'\n%s",typeid(Luna< osg::Matrixd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Quat stack_lret = self->getRotate();
		osg::Quat* lret = new osg::Quat(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Quat >::push(L,lret,true);

		return 1;
	}

	// void osg::Matrixd::setTrans(double tx, double ty, double tz)
	static int _bind_setTrans_overload_1(lua_State *L) {
		if (!_lg_typecheck_setTrans_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Matrixd::setTrans(double tx, double ty, double tz) function, expected prototype:\nvoid osg::Matrixd::setTrans(double tx, double ty, double tz)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double tx=(double)lua_tonumber(L,2);
		double ty=(double)lua_tonumber(L,3);
		double tz=(double)lua_tonumber(L,4);

		osg::Matrixd* self=(Luna< osg::Matrixd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Matrixd::setTrans(double, double, double). Got : '%s'\n%s",typeid(Luna< osg::Matrixd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setTrans(tx, ty, tz);

		return 0;
	}

	// void osg::Matrixd::setTrans(const osg::Vec3f & v)
	static int _bind_setTrans_overload_2(lua_State *L) {
		if (!_lg_typecheck_setTrans_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Matrixd::setTrans(const osg::Vec3f & v) function, expected prototype:\nvoid osg::Matrixd::setTrans(const osg::Vec3f & v)\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* v_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osg::Matrixd::setTrans function");
		}
		const osg::Vec3f & v=*v_ptr;

		osg::Matrixd* self=(Luna< osg::Matrixd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Matrixd::setTrans(const osg::Vec3f &). Got : '%s'\n%s",typeid(Luna< osg::Matrixd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setTrans(v);

		return 0;
	}

	// void osg::Matrixd::setTrans(const osg::Vec3d & v)
	static int _bind_setTrans_overload_3(lua_State *L) {
		if (!_lg_typecheck_setTrans_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Matrixd::setTrans(const osg::Vec3d & v) function, expected prototype:\nvoid osg::Matrixd::setTrans(const osg::Vec3d & v)\nClass arguments details:\narg 1 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3d* v_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osg::Matrixd::setTrans function");
		}
		const osg::Vec3d & v=*v_ptr;

		osg::Matrixd* self=(Luna< osg::Matrixd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Matrixd::setTrans(const osg::Vec3d &). Got : '%s'\n%s",typeid(Luna< osg::Matrixd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setTrans(v);

		return 0;
	}

	// Overload binder for osg::Matrixd::setTrans
	static int _bind_setTrans(lua_State *L) {
		if (_lg_typecheck_setTrans_overload_1(L)) return _bind_setTrans_overload_1(L);
		if (_lg_typecheck_setTrans_overload_2(L)) return _bind_setTrans_overload_2(L);
		if (_lg_typecheck_setTrans_overload_3(L)) return _bind_setTrans_overload_3(L);

		luaL_error(L, "error in function setTrans, cannot match any of the overloads for function setTrans:\n  setTrans(double, double, double)\n  setTrans(const osg::Vec3f &)\n  setTrans(const osg::Vec3d &)\n");
		return 0;
	}

	// osg::Vec3d osg::Matrixd::getTrans() const
	static int _bind_getTrans(lua_State *L) {
		if (!_lg_typecheck_getTrans(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3d osg::Matrixd::getTrans() const function, expected prototype:\nosg::Vec3d osg::Matrixd::getTrans() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Matrixd* self=(Luna< osg::Matrixd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3d osg::Matrixd::getTrans() const. Got : '%s'\n%s",typeid(Luna< osg::Matrixd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec3d stack_lret = self->getTrans();
		osg::Vec3d* lret = new osg::Vec3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3d >::push(L,lret,true);

		return 1;
	}

	// osg::Vec3d osg::Matrixd::getScale() const
	static int _bind_getScale(lua_State *L) {
		if (!_lg_typecheck_getScale(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3d osg::Matrixd::getScale() const function, expected prototype:\nosg::Vec3d osg::Matrixd::getScale() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Matrixd* self=(Luna< osg::Matrixd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3d osg::Matrixd::getScale() const. Got : '%s'\n%s",typeid(Luna< osg::Matrixd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec3d stack_lret = self->getScale();
		osg::Vec3d* lret = new osg::Vec3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3d >::push(L,lret,true);

		return 1;
	}

	// void osg::Matrixd::mult(const osg::Matrixd & arg1, const osg::Matrixd & arg2)
	static int _bind_mult(lua_State *L) {
		if (!_lg_typecheck_mult(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Matrixd::mult(const osg::Matrixd & arg1, const osg::Matrixd & arg2) function, expected prototype:\nvoid osg::Matrixd::mult(const osg::Matrixd & arg1, const osg::Matrixd & arg2)\nClass arguments details:\narg 1 ID = 18903838\narg 2 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrixd* _arg1_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Matrixd::mult function");
		}
		const osg::Matrixd & _arg1=*_arg1_ptr;
		const osg::Matrixd* _arg2_ptr=(Luna< osg::Matrixd >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osg::Matrixd::mult function");
		}
		const osg::Matrixd & _arg2=*_arg2_ptr;

		osg::Matrixd* self=(Luna< osg::Matrixd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Matrixd::mult(const osg::Matrixd &, const osg::Matrixd &). Got : '%s'\n%s",typeid(Luna< osg::Matrixd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->mult(_arg1, _arg2);

		return 0;
	}

	// void osg::Matrixd::preMultTranslate(const osg::Vec3d & v)
	static int _bind_preMultTranslate_overload_1(lua_State *L) {
		if (!_lg_typecheck_preMultTranslate_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Matrixd::preMultTranslate(const osg::Vec3d & v) function, expected prototype:\nvoid osg::Matrixd::preMultTranslate(const osg::Vec3d & v)\nClass arguments details:\narg 1 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3d* v_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osg::Matrixd::preMultTranslate function");
		}
		const osg::Vec3d & v=*v_ptr;

		osg::Matrixd* self=(Luna< osg::Matrixd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Matrixd::preMultTranslate(const osg::Vec3d &). Got : '%s'\n%s",typeid(Luna< osg::Matrixd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->preMultTranslate(v);

		return 0;
	}

	// void osg::Matrixd::preMultTranslate(const osg::Vec3f & v)
	static int _bind_preMultTranslate_overload_2(lua_State *L) {
		if (!_lg_typecheck_preMultTranslate_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Matrixd::preMultTranslate(const osg::Vec3f & v) function, expected prototype:\nvoid osg::Matrixd::preMultTranslate(const osg::Vec3f & v)\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* v_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osg::Matrixd::preMultTranslate function");
		}
		const osg::Vec3f & v=*v_ptr;

		osg::Matrixd* self=(Luna< osg::Matrixd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Matrixd::preMultTranslate(const osg::Vec3f &). Got : '%s'\n%s",typeid(Luna< osg::Matrixd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->preMultTranslate(v);

		return 0;
	}

	// Overload binder for osg::Matrixd::preMultTranslate
	static int _bind_preMultTranslate(lua_State *L) {
		if (_lg_typecheck_preMultTranslate_overload_1(L)) return _bind_preMultTranslate_overload_1(L);
		if (_lg_typecheck_preMultTranslate_overload_2(L)) return _bind_preMultTranslate_overload_2(L);

		luaL_error(L, "error in function preMultTranslate, cannot match any of the overloads for function preMultTranslate:\n  preMultTranslate(const osg::Vec3d &)\n  preMultTranslate(const osg::Vec3f &)\n");
		return 0;
	}

	// void osg::Matrixd::postMultTranslate(const osg::Vec3d & v)
	static int _bind_postMultTranslate_overload_1(lua_State *L) {
		if (!_lg_typecheck_postMultTranslate_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Matrixd::postMultTranslate(const osg::Vec3d & v) function, expected prototype:\nvoid osg::Matrixd::postMultTranslate(const osg::Vec3d & v)\nClass arguments details:\narg 1 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3d* v_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osg::Matrixd::postMultTranslate function");
		}
		const osg::Vec3d & v=*v_ptr;

		osg::Matrixd* self=(Luna< osg::Matrixd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Matrixd::postMultTranslate(const osg::Vec3d &). Got : '%s'\n%s",typeid(Luna< osg::Matrixd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->postMultTranslate(v);

		return 0;
	}

	// void osg::Matrixd::postMultTranslate(const osg::Vec3f & v)
	static int _bind_postMultTranslate_overload_2(lua_State *L) {
		if (!_lg_typecheck_postMultTranslate_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Matrixd::postMultTranslate(const osg::Vec3f & v) function, expected prototype:\nvoid osg::Matrixd::postMultTranslate(const osg::Vec3f & v)\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* v_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osg::Matrixd::postMultTranslate function");
		}
		const osg::Vec3f & v=*v_ptr;

		osg::Matrixd* self=(Luna< osg::Matrixd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Matrixd::postMultTranslate(const osg::Vec3f &). Got : '%s'\n%s",typeid(Luna< osg::Matrixd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->postMultTranslate(v);

		return 0;
	}

	// Overload binder for osg::Matrixd::postMultTranslate
	static int _bind_postMultTranslate(lua_State *L) {
		if (_lg_typecheck_postMultTranslate_overload_1(L)) return _bind_postMultTranslate_overload_1(L);
		if (_lg_typecheck_postMultTranslate_overload_2(L)) return _bind_postMultTranslate_overload_2(L);

		luaL_error(L, "error in function postMultTranslate, cannot match any of the overloads for function postMultTranslate:\n  postMultTranslate(const osg::Vec3d &)\n  postMultTranslate(const osg::Vec3f &)\n");
		return 0;
	}

	// void osg::Matrixd::preMultScale(const osg::Vec3d & v)
	static int _bind_preMultScale_overload_1(lua_State *L) {
		if (!_lg_typecheck_preMultScale_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Matrixd::preMultScale(const osg::Vec3d & v) function, expected prototype:\nvoid osg::Matrixd::preMultScale(const osg::Vec3d & v)\nClass arguments details:\narg 1 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3d* v_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osg::Matrixd::preMultScale function");
		}
		const osg::Vec3d & v=*v_ptr;

		osg::Matrixd* self=(Luna< osg::Matrixd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Matrixd::preMultScale(const osg::Vec3d &). Got : '%s'\n%s",typeid(Luna< osg::Matrixd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->preMultScale(v);

		return 0;
	}

	// void osg::Matrixd::preMultScale(const osg::Vec3f & v)
	static int _bind_preMultScale_overload_2(lua_State *L) {
		if (!_lg_typecheck_preMultScale_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Matrixd::preMultScale(const osg::Vec3f & v) function, expected prototype:\nvoid osg::Matrixd::preMultScale(const osg::Vec3f & v)\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* v_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osg::Matrixd::preMultScale function");
		}
		const osg::Vec3f & v=*v_ptr;

		osg::Matrixd* self=(Luna< osg::Matrixd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Matrixd::preMultScale(const osg::Vec3f &). Got : '%s'\n%s",typeid(Luna< osg::Matrixd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->preMultScale(v);

		return 0;
	}

	// Overload binder for osg::Matrixd::preMultScale
	static int _bind_preMultScale(lua_State *L) {
		if (_lg_typecheck_preMultScale_overload_1(L)) return _bind_preMultScale_overload_1(L);
		if (_lg_typecheck_preMultScale_overload_2(L)) return _bind_preMultScale_overload_2(L);

		luaL_error(L, "error in function preMultScale, cannot match any of the overloads for function preMultScale:\n  preMultScale(const osg::Vec3d &)\n  preMultScale(const osg::Vec3f &)\n");
		return 0;
	}

	// void osg::Matrixd::postMultScale(const osg::Vec3d & v)
	static int _bind_postMultScale_overload_1(lua_State *L) {
		if (!_lg_typecheck_postMultScale_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Matrixd::postMultScale(const osg::Vec3d & v) function, expected prototype:\nvoid osg::Matrixd::postMultScale(const osg::Vec3d & v)\nClass arguments details:\narg 1 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3d* v_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osg::Matrixd::postMultScale function");
		}
		const osg::Vec3d & v=*v_ptr;

		osg::Matrixd* self=(Luna< osg::Matrixd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Matrixd::postMultScale(const osg::Vec3d &). Got : '%s'\n%s",typeid(Luna< osg::Matrixd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->postMultScale(v);

		return 0;
	}

	// void osg::Matrixd::postMultScale(const osg::Vec3f & v)
	static int _bind_postMultScale_overload_2(lua_State *L) {
		if (!_lg_typecheck_postMultScale_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Matrixd::postMultScale(const osg::Vec3f & v) function, expected prototype:\nvoid osg::Matrixd::postMultScale(const osg::Vec3f & v)\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* v_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osg::Matrixd::postMultScale function");
		}
		const osg::Vec3f & v=*v_ptr;

		osg::Matrixd* self=(Luna< osg::Matrixd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Matrixd::postMultScale(const osg::Vec3f &). Got : '%s'\n%s",typeid(Luna< osg::Matrixd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->postMultScale(v);

		return 0;
	}

	// Overload binder for osg::Matrixd::postMultScale
	static int _bind_postMultScale(lua_State *L) {
		if (_lg_typecheck_postMultScale_overload_1(L)) return _bind_postMultScale_overload_1(L);
		if (_lg_typecheck_postMultScale_overload_2(L)) return _bind_postMultScale_overload_2(L);

		luaL_error(L, "error in function postMultScale, cannot match any of the overloads for function postMultScale:\n  postMultScale(const osg::Vec3d &)\n  postMultScale(const osg::Vec3f &)\n");
		return 0;
	}

	// void osg::Matrixd::preMultRotate(const osg::Quat & q)
	static int _bind_preMultRotate(lua_State *L) {
		if (!_lg_typecheck_preMultRotate(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Matrixd::preMultRotate(const osg::Quat & q) function, expected prototype:\nvoid osg::Matrixd::preMultRotate(const osg::Quat & q)\nClass arguments details:\narg 1 ID = 80263306\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Quat* q_ptr=(Luna< osg::Quat >::check(L,2));
		if( !q_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg q in osg::Matrixd::preMultRotate function");
		}
		const osg::Quat & q=*q_ptr;

		osg::Matrixd* self=(Luna< osg::Matrixd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Matrixd::preMultRotate(const osg::Quat &). Got : '%s'\n%s",typeid(Luna< osg::Matrixd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->preMultRotate(q);

		return 0;
	}

	// void osg::Matrixd::postMultRotate(const osg::Quat & q)
	static int _bind_postMultRotate(lua_State *L) {
		if (!_lg_typecheck_postMultRotate(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Matrixd::postMultRotate(const osg::Quat & q) function, expected prototype:\nvoid osg::Matrixd::postMultRotate(const osg::Quat & q)\nClass arguments details:\narg 1 ID = 80263306\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Quat* q_ptr=(Luna< osg::Quat >::check(L,2));
		if( !q_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg q in osg::Matrixd::postMultRotate function");
		}
		const osg::Quat & q=*q_ptr;

		osg::Matrixd* self=(Luna< osg::Matrixd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Matrixd::postMultRotate(const osg::Quat &). Got : '%s'\n%s",typeid(Luna< osg::Matrixd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->postMultRotate(q);

		return 0;
	}

	// static osg::Matrixd osg::Matrixd::identity()
	static int _bind_identity(lua_State *L) {
		if (!_lg_typecheck_identity(L)) {
			luaL_error(L, "luna typecheck failed in static osg::Matrixd osg::Matrixd::identity() function, expected prototype:\nstatic osg::Matrixd osg::Matrixd::identity()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Matrixd stack_lret = osg::Matrixd::identity();
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// static osg::Matrixd osg::Matrixd::scale(const osg::Vec3f & sv)
	static int _bind_scale_overload_1(lua_State *L) {
		if (!_lg_typecheck_scale_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in static osg::Matrixd osg::Matrixd::scale(const osg::Vec3f & sv) function, expected prototype:\nstatic osg::Matrixd osg::Matrixd::scale(const osg::Vec3f & sv)\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* sv_ptr=(Luna< osg::Vec3f >::check(L,1));
		if( !sv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sv in osg::Matrixd::scale function");
		}
		const osg::Vec3f & sv=*sv_ptr;

		osg::Matrixd stack_lret = osg::Matrixd::scale(sv);
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// static osg::Matrixd osg::Matrixd::scale(const osg::Vec3d & sv)
	static int _bind_scale_overload_2(lua_State *L) {
		if (!_lg_typecheck_scale_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in static osg::Matrixd osg::Matrixd::scale(const osg::Vec3d & sv) function, expected prototype:\nstatic osg::Matrixd osg::Matrixd::scale(const osg::Vec3d & sv)\nClass arguments details:\narg 1 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3d* sv_ptr=(Luna< osg::Vec3d >::check(L,1));
		if( !sv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sv in osg::Matrixd::scale function");
		}
		const osg::Vec3d & sv=*sv_ptr;

		osg::Matrixd stack_lret = osg::Matrixd::scale(sv);
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// static osg::Matrixd osg::Matrixd::scale(double sx, double sy, double sz)
	static int _bind_scale_overload_3(lua_State *L) {
		if (!_lg_typecheck_scale_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in static osg::Matrixd osg::Matrixd::scale(double sx, double sy, double sz) function, expected prototype:\nstatic osg::Matrixd osg::Matrixd::scale(double sx, double sy, double sz)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double sx=(double)lua_tonumber(L,1);
		double sy=(double)lua_tonumber(L,2);
		double sz=(double)lua_tonumber(L,3);

		osg::Matrixd stack_lret = osg::Matrixd::scale(sx, sy, sz);
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// Overload binder for osg::Matrixd::scale
	static int _bind_scale(lua_State *L) {
		if (_lg_typecheck_scale_overload_1(L)) return _bind_scale_overload_1(L);
		if (_lg_typecheck_scale_overload_2(L)) return _bind_scale_overload_2(L);
		if (_lg_typecheck_scale_overload_3(L)) return _bind_scale_overload_3(L);

		luaL_error(L, "error in function scale, cannot match any of the overloads for function scale:\n  scale(const osg::Vec3f &)\n  scale(const osg::Vec3d &)\n  scale(double, double, double)\n");
		return 0;
	}

	// static osg::Matrixd osg::Matrixd::translate(const osg::Vec3f & dv)
	static int _bind_translate_overload_1(lua_State *L) {
		if (!_lg_typecheck_translate_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in static osg::Matrixd osg::Matrixd::translate(const osg::Vec3f & dv) function, expected prototype:\nstatic osg::Matrixd osg::Matrixd::translate(const osg::Vec3f & dv)\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* dv_ptr=(Luna< osg::Vec3f >::check(L,1));
		if( !dv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dv in osg::Matrixd::translate function");
		}
		const osg::Vec3f & dv=*dv_ptr;

		osg::Matrixd stack_lret = osg::Matrixd::translate(dv);
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// static osg::Matrixd osg::Matrixd::translate(const osg::Vec3d & dv)
	static int _bind_translate_overload_2(lua_State *L) {
		if (!_lg_typecheck_translate_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in static osg::Matrixd osg::Matrixd::translate(const osg::Vec3d & dv) function, expected prototype:\nstatic osg::Matrixd osg::Matrixd::translate(const osg::Vec3d & dv)\nClass arguments details:\narg 1 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3d* dv_ptr=(Luna< osg::Vec3d >::check(L,1));
		if( !dv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dv in osg::Matrixd::translate function");
		}
		const osg::Vec3d & dv=*dv_ptr;

		osg::Matrixd stack_lret = osg::Matrixd::translate(dv);
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// static osg::Matrixd osg::Matrixd::translate(double x, double y, double z)
	static int _bind_translate_overload_3(lua_State *L) {
		if (!_lg_typecheck_translate_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in static osg::Matrixd osg::Matrixd::translate(double x, double y, double z) function, expected prototype:\nstatic osg::Matrixd osg::Matrixd::translate(double x, double y, double z)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double x=(double)lua_tonumber(L,1);
		double y=(double)lua_tonumber(L,2);
		double z=(double)lua_tonumber(L,3);

		osg::Matrixd stack_lret = osg::Matrixd::translate(x, y, z);
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// Overload binder for osg::Matrixd::translate
	static int _bind_translate(lua_State *L) {
		if (_lg_typecheck_translate_overload_1(L)) return _bind_translate_overload_1(L);
		if (_lg_typecheck_translate_overload_2(L)) return _bind_translate_overload_2(L);
		if (_lg_typecheck_translate_overload_3(L)) return _bind_translate_overload_3(L);

		luaL_error(L, "error in function translate, cannot match any of the overloads for function translate:\n  translate(const osg::Vec3f &)\n  translate(const osg::Vec3d &)\n  translate(double, double, double)\n");
		return 0;
	}

	// static osg::Matrixd osg::Matrixd::rotate(const osg::Vec3f & from, const osg::Vec3f & to)
	static int _bind_rotate_overload_1(lua_State *L) {
		if (!_lg_typecheck_rotate_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in static osg::Matrixd osg::Matrixd::rotate(const osg::Vec3f & from, const osg::Vec3f & to) function, expected prototype:\nstatic osg::Matrixd osg::Matrixd::rotate(const osg::Vec3f & from, const osg::Vec3f & to)\nClass arguments details:\narg 1 ID = 92303204\narg 2 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* from_ptr=(Luna< osg::Vec3f >::check(L,1));
		if( !from_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg from in osg::Matrixd::rotate function");
		}
		const osg::Vec3f & from=*from_ptr;
		const osg::Vec3f* to_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !to_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg to in osg::Matrixd::rotate function");
		}
		const osg::Vec3f & to=*to_ptr;

		osg::Matrixd stack_lret = osg::Matrixd::rotate(from, to);
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// static osg::Matrixd osg::Matrixd::rotate(const osg::Vec3d & from, const osg::Vec3d & to)
	static int _bind_rotate_overload_2(lua_State *L) {
		if (!_lg_typecheck_rotate_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in static osg::Matrixd osg::Matrixd::rotate(const osg::Vec3d & from, const osg::Vec3d & to) function, expected prototype:\nstatic osg::Matrixd osg::Matrixd::rotate(const osg::Vec3d & from, const osg::Vec3d & to)\nClass arguments details:\narg 1 ID = 92303202\narg 2 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3d* from_ptr=(Luna< osg::Vec3d >::check(L,1));
		if( !from_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg from in osg::Matrixd::rotate function");
		}
		const osg::Vec3d & from=*from_ptr;
		const osg::Vec3d* to_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !to_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg to in osg::Matrixd::rotate function");
		}
		const osg::Vec3d & to=*to_ptr;

		osg::Matrixd stack_lret = osg::Matrixd::rotate(from, to);
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// static osg::Matrixd osg::Matrixd::rotate(double angle, double x, double y, double z)
	static int _bind_rotate_overload_3(lua_State *L) {
		if (!_lg_typecheck_rotate_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in static osg::Matrixd osg::Matrixd::rotate(double angle, double x, double y, double z) function, expected prototype:\nstatic osg::Matrixd osg::Matrixd::rotate(double angle, double x, double y, double z)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double angle=(double)lua_tonumber(L,1);
		double x=(double)lua_tonumber(L,2);
		double y=(double)lua_tonumber(L,3);
		double z=(double)lua_tonumber(L,4);

		osg::Matrixd stack_lret = osg::Matrixd::rotate(angle, x, y, z);
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// static osg::Matrixd osg::Matrixd::rotate(double angle, const osg::Vec3f & axis)
	static int _bind_rotate_overload_4(lua_State *L) {
		if (!_lg_typecheck_rotate_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in static osg::Matrixd osg::Matrixd::rotate(double angle, const osg::Vec3f & axis) function, expected prototype:\nstatic osg::Matrixd osg::Matrixd::rotate(double angle, const osg::Vec3f & axis)\nClass arguments details:\narg 2 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		double angle=(double)lua_tonumber(L,1);
		const osg::Vec3f* axis_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !axis_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg axis in osg::Matrixd::rotate function");
		}
		const osg::Vec3f & axis=*axis_ptr;

		osg::Matrixd stack_lret = osg::Matrixd::rotate(angle, axis);
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// static osg::Matrixd osg::Matrixd::rotate(double angle, const osg::Vec3d & axis)
	static int _bind_rotate_overload_5(lua_State *L) {
		if (!_lg_typecheck_rotate_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in static osg::Matrixd osg::Matrixd::rotate(double angle, const osg::Vec3d & axis) function, expected prototype:\nstatic osg::Matrixd osg::Matrixd::rotate(double angle, const osg::Vec3d & axis)\nClass arguments details:\narg 2 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		double angle=(double)lua_tonumber(L,1);
		const osg::Vec3d* axis_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !axis_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg axis in osg::Matrixd::rotate function");
		}
		const osg::Vec3d & axis=*axis_ptr;

		osg::Matrixd stack_lret = osg::Matrixd::rotate(angle, axis);
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// static osg::Matrixd osg::Matrixd::rotate(double angle1, const osg::Vec3f & axis1, double angle2, const osg::Vec3f & axis2, double angle3, const osg::Vec3f & axis3)
	static int _bind_rotate_overload_6(lua_State *L) {
		if (!_lg_typecheck_rotate_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in static osg::Matrixd osg::Matrixd::rotate(double angle1, const osg::Vec3f & axis1, double angle2, const osg::Vec3f & axis2, double angle3, const osg::Vec3f & axis3) function, expected prototype:\nstatic osg::Matrixd osg::Matrixd::rotate(double angle1, const osg::Vec3f & axis1, double angle2, const osg::Vec3f & axis2, double angle3, const osg::Vec3f & axis3)\nClass arguments details:\narg 2 ID = 92303204\narg 4 ID = 92303204\narg 6 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		double angle1=(double)lua_tonumber(L,1);
		const osg::Vec3f* axis1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !axis1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg axis1 in osg::Matrixd::rotate function");
		}
		const osg::Vec3f & axis1=*axis1_ptr;
		double angle2=(double)lua_tonumber(L,3);
		const osg::Vec3f* axis2_ptr=(Luna< osg::Vec3f >::check(L,4));
		if( !axis2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg axis2 in osg::Matrixd::rotate function");
		}
		const osg::Vec3f & axis2=*axis2_ptr;
		double angle3=(double)lua_tonumber(L,5);
		const osg::Vec3f* axis3_ptr=(Luna< osg::Vec3f >::check(L,6));
		if( !axis3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg axis3 in osg::Matrixd::rotate function");
		}
		const osg::Vec3f & axis3=*axis3_ptr;

		osg::Matrixd stack_lret = osg::Matrixd::rotate(angle1, axis1, angle2, axis2, angle3, axis3);
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// static osg::Matrixd osg::Matrixd::rotate(double angle1, const osg::Vec3d & axis1, double angle2, const osg::Vec3d & axis2, double angle3, const osg::Vec3d & axis3)
	static int _bind_rotate_overload_7(lua_State *L) {
		if (!_lg_typecheck_rotate_overload_7(L)) {
			luaL_error(L, "luna typecheck failed in static osg::Matrixd osg::Matrixd::rotate(double angle1, const osg::Vec3d & axis1, double angle2, const osg::Vec3d & axis2, double angle3, const osg::Vec3d & axis3) function, expected prototype:\nstatic osg::Matrixd osg::Matrixd::rotate(double angle1, const osg::Vec3d & axis1, double angle2, const osg::Vec3d & axis2, double angle3, const osg::Vec3d & axis3)\nClass arguments details:\narg 2 ID = 92303202\narg 4 ID = 92303202\narg 6 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		double angle1=(double)lua_tonumber(L,1);
		const osg::Vec3d* axis1_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !axis1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg axis1 in osg::Matrixd::rotate function");
		}
		const osg::Vec3d & axis1=*axis1_ptr;
		double angle2=(double)lua_tonumber(L,3);
		const osg::Vec3d* axis2_ptr=(Luna< osg::Vec3d >::check(L,4));
		if( !axis2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg axis2 in osg::Matrixd::rotate function");
		}
		const osg::Vec3d & axis2=*axis2_ptr;
		double angle3=(double)lua_tonumber(L,5);
		const osg::Vec3d* axis3_ptr=(Luna< osg::Vec3d >::check(L,6));
		if( !axis3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg axis3 in osg::Matrixd::rotate function");
		}
		const osg::Vec3d & axis3=*axis3_ptr;

		osg::Matrixd stack_lret = osg::Matrixd::rotate(angle1, axis1, angle2, axis2, angle3, axis3);
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// static osg::Matrixd osg::Matrixd::rotate(const osg::Quat & quat)
	static int _bind_rotate_overload_8(lua_State *L) {
		if (!_lg_typecheck_rotate_overload_8(L)) {
			luaL_error(L, "luna typecheck failed in static osg::Matrixd osg::Matrixd::rotate(const osg::Quat & quat) function, expected prototype:\nstatic osg::Matrixd osg::Matrixd::rotate(const osg::Quat & quat)\nClass arguments details:\narg 1 ID = 80263306\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Quat* quat_ptr=(Luna< osg::Quat >::check(L,1));
		if( !quat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg quat in osg::Matrixd::rotate function");
		}
		const osg::Quat & quat=*quat_ptr;

		osg::Matrixd stack_lret = osg::Matrixd::rotate(quat);
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// Overload binder for osg::Matrixd::rotate
	static int _bind_rotate(lua_State *L) {
		if (_lg_typecheck_rotate_overload_1(L)) return _bind_rotate_overload_1(L);
		if (_lg_typecheck_rotate_overload_2(L)) return _bind_rotate_overload_2(L);
		if (_lg_typecheck_rotate_overload_3(L)) return _bind_rotate_overload_3(L);
		if (_lg_typecheck_rotate_overload_4(L)) return _bind_rotate_overload_4(L);
		if (_lg_typecheck_rotate_overload_5(L)) return _bind_rotate_overload_5(L);
		if (_lg_typecheck_rotate_overload_6(L)) return _bind_rotate_overload_6(L);
		if (_lg_typecheck_rotate_overload_7(L)) return _bind_rotate_overload_7(L);
		if (_lg_typecheck_rotate_overload_8(L)) return _bind_rotate_overload_8(L);

		luaL_error(L, "error in function rotate, cannot match any of the overloads for function rotate:\n  rotate(const osg::Vec3f &, const osg::Vec3f &)\n  rotate(const osg::Vec3d &, const osg::Vec3d &)\n  rotate(double, double, double, double)\n  rotate(double, const osg::Vec3f &)\n  rotate(double, const osg::Vec3d &)\n  rotate(double, const osg::Vec3f &, double, const osg::Vec3f &, double, const osg::Vec3f &)\n  rotate(double, const osg::Vec3d &, double, const osg::Vec3d &, double, const osg::Vec3d &)\n  rotate(const osg::Quat &)\n");
		return 0;
	}

	// static osg::Matrixd osg::Matrixd::inverse(const osg::Matrixd & matrix)
	static int _bind_inverse(lua_State *L) {
		if (!_lg_typecheck_inverse(L)) {
			luaL_error(L, "luna typecheck failed in static osg::Matrixd osg::Matrixd::inverse(const osg::Matrixd & matrix) function, expected prototype:\nstatic osg::Matrixd osg::Matrixd::inverse(const osg::Matrixd & matrix)\nClass arguments details:\narg 1 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,1));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osg::Matrixd::inverse function");
		}
		const osg::Matrixd & matrix=*matrix_ptr;

		osg::Matrixd stack_lret = osg::Matrixd::inverse(matrix);
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// static osg::Matrixd osg::Matrixd::orthoNormal(const osg::Matrixd & matrix)
	static int _bind_orthoNormal(lua_State *L) {
		if (!_lg_typecheck_orthoNormal(L)) {
			luaL_error(L, "luna typecheck failed in static osg::Matrixd osg::Matrixd::orthoNormal(const osg::Matrixd & matrix) function, expected prototype:\nstatic osg::Matrixd osg::Matrixd::orthoNormal(const osg::Matrixd & matrix)\nClass arguments details:\narg 1 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,1));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osg::Matrixd::orthoNormal function");
		}
		const osg::Matrixd & matrix=*matrix_ptr;

		osg::Matrixd stack_lret = osg::Matrixd::orthoNormal(matrix);
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// static osg::Matrixd osg::Matrixd::ortho(double left, double right, double bottom, double top, double zNear, double zFar)
	static int _bind_ortho(lua_State *L) {
		if (!_lg_typecheck_ortho(L)) {
			luaL_error(L, "luna typecheck failed in static osg::Matrixd osg::Matrixd::ortho(double left, double right, double bottom, double top, double zNear, double zFar) function, expected prototype:\nstatic osg::Matrixd osg::Matrixd::ortho(double left, double right, double bottom, double top, double zNear, double zFar)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double left=(double)lua_tonumber(L,1);
		double right=(double)lua_tonumber(L,2);
		double bottom=(double)lua_tonumber(L,3);
		double top=(double)lua_tonumber(L,4);
		double zNear=(double)lua_tonumber(L,5);
		double zFar=(double)lua_tonumber(L,6);

		osg::Matrixd stack_lret = osg::Matrixd::ortho(left, right, bottom, top, zNear, zFar);
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// static osg::Matrixd osg::Matrixd::ortho2D(double left, double right, double bottom, double top)
	static int _bind_ortho2D(lua_State *L) {
		if (!_lg_typecheck_ortho2D(L)) {
			luaL_error(L, "luna typecheck failed in static osg::Matrixd osg::Matrixd::ortho2D(double left, double right, double bottom, double top) function, expected prototype:\nstatic osg::Matrixd osg::Matrixd::ortho2D(double left, double right, double bottom, double top)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double left=(double)lua_tonumber(L,1);
		double right=(double)lua_tonumber(L,2);
		double bottom=(double)lua_tonumber(L,3);
		double top=(double)lua_tonumber(L,4);

		osg::Matrixd stack_lret = osg::Matrixd::ortho2D(left, right, bottom, top);
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// static osg::Matrixd osg::Matrixd::frustum(double left, double right, double bottom, double top, double zNear, double zFar)
	static int _bind_frustum(lua_State *L) {
		if (!_lg_typecheck_frustum(L)) {
			luaL_error(L, "luna typecheck failed in static osg::Matrixd osg::Matrixd::frustum(double left, double right, double bottom, double top, double zNear, double zFar) function, expected prototype:\nstatic osg::Matrixd osg::Matrixd::frustum(double left, double right, double bottom, double top, double zNear, double zFar)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double left=(double)lua_tonumber(L,1);
		double right=(double)lua_tonumber(L,2);
		double bottom=(double)lua_tonumber(L,3);
		double top=(double)lua_tonumber(L,4);
		double zNear=(double)lua_tonumber(L,5);
		double zFar=(double)lua_tonumber(L,6);

		osg::Matrixd stack_lret = osg::Matrixd::frustum(left, right, bottom, top, zNear, zFar);
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// static osg::Matrixd osg::Matrixd::perspective(double fovy, double aspectRatio, double zNear, double zFar)
	static int _bind_perspective(lua_State *L) {
		if (!_lg_typecheck_perspective(L)) {
			luaL_error(L, "luna typecheck failed in static osg::Matrixd osg::Matrixd::perspective(double fovy, double aspectRatio, double zNear, double zFar) function, expected prototype:\nstatic osg::Matrixd osg::Matrixd::perspective(double fovy, double aspectRatio, double zNear, double zFar)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double fovy=(double)lua_tonumber(L,1);
		double aspectRatio=(double)lua_tonumber(L,2);
		double zNear=(double)lua_tonumber(L,3);
		double zFar=(double)lua_tonumber(L,4);

		osg::Matrixd stack_lret = osg::Matrixd::perspective(fovy, aspectRatio, zNear, zFar);
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// static osg::Matrixd osg::Matrixd::lookAt(const osg::Vec3f & eye, const osg::Vec3f & center, const osg::Vec3f & up)
	static int _bind_lookAt_overload_1(lua_State *L) {
		if (!_lg_typecheck_lookAt_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in static osg::Matrixd osg::Matrixd::lookAt(const osg::Vec3f & eye, const osg::Vec3f & center, const osg::Vec3f & up) function, expected prototype:\nstatic osg::Matrixd osg::Matrixd::lookAt(const osg::Vec3f & eye, const osg::Vec3f & center, const osg::Vec3f & up)\nClass arguments details:\narg 1 ID = 92303204\narg 2 ID = 92303204\narg 3 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* eye_ptr=(Luna< osg::Vec3f >::check(L,1));
		if( !eye_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg eye in osg::Matrixd::lookAt function");
		}
		const osg::Vec3f & eye=*eye_ptr;
		const osg::Vec3f* center_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in osg::Matrixd::lookAt function");
		}
		const osg::Vec3f & center=*center_ptr;
		const osg::Vec3f* up_ptr=(Luna< osg::Vec3f >::check(L,3));
		if( !up_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg up in osg::Matrixd::lookAt function");
		}
		const osg::Vec3f & up=*up_ptr;

		osg::Matrixd stack_lret = osg::Matrixd::lookAt(eye, center, up);
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// static osg::Matrixd osg::Matrixd::lookAt(const osg::Vec3d & eye, const osg::Vec3d & center, const osg::Vec3d & up)
	static int _bind_lookAt_overload_2(lua_State *L) {
		if (!_lg_typecheck_lookAt_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in static osg::Matrixd osg::Matrixd::lookAt(const osg::Vec3d & eye, const osg::Vec3d & center, const osg::Vec3d & up) function, expected prototype:\nstatic osg::Matrixd osg::Matrixd::lookAt(const osg::Vec3d & eye, const osg::Vec3d & center, const osg::Vec3d & up)\nClass arguments details:\narg 1 ID = 92303202\narg 2 ID = 92303202\narg 3 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3d* eye_ptr=(Luna< osg::Vec3d >::check(L,1));
		if( !eye_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg eye in osg::Matrixd::lookAt function");
		}
		const osg::Vec3d & eye=*eye_ptr;
		const osg::Vec3d* center_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in osg::Matrixd::lookAt function");
		}
		const osg::Vec3d & center=*center_ptr;
		const osg::Vec3d* up_ptr=(Luna< osg::Vec3d >::check(L,3));
		if( !up_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg up in osg::Matrixd::lookAt function");
		}
		const osg::Vec3d & up=*up_ptr;

		osg::Matrixd stack_lret = osg::Matrixd::lookAt(eye, center, up);
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// Overload binder for osg::Matrixd::lookAt
	static int _bind_lookAt(lua_State *L) {
		if (_lg_typecheck_lookAt_overload_1(L)) return _bind_lookAt_overload_1(L);
		if (_lg_typecheck_lookAt_overload_2(L)) return _bind_lookAt_overload_2(L);

		luaL_error(L, "error in function lookAt, cannot match any of the overloads for function lookAt:\n  lookAt(const osg::Vec3f &, const osg::Vec3f &, const osg::Vec3f &)\n  lookAt(const osg::Vec3d &, const osg::Vec3d &, const osg::Vec3d &)\n");
		return 0;
	}

	// static osg::Vec3f osg::Matrixd::transform3x3(const osg::Vec3f & v, const osg::Matrixd & m)
	static int _bind_transform3x3_overload_1(lua_State *L) {
		if (!_lg_typecheck_transform3x3_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in static osg::Vec3f osg::Matrixd::transform3x3(const osg::Vec3f & v, const osg::Matrixd & m) function, expected prototype:\nstatic osg::Vec3f osg::Matrixd::transform3x3(const osg::Vec3f & v, const osg::Matrixd & m)\nClass arguments details:\narg 1 ID = 92303204\narg 2 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* v_ptr=(Luna< osg::Vec3f >::check(L,1));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osg::Matrixd::transform3x3 function");
		}
		const osg::Vec3f & v=*v_ptr;
		const osg::Matrixd* m_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !m_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m in osg::Matrixd::transform3x3 function");
		}
		const osg::Matrixd & m=*m_ptr;

		osg::Vec3f stack_lret = osg::Matrixd::transform3x3(v, m);
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// static osg::Vec3d osg::Matrixd::transform3x3(const osg::Vec3d & v, const osg::Matrixd & m)
	static int _bind_transform3x3_overload_2(lua_State *L) {
		if (!_lg_typecheck_transform3x3_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in static osg::Vec3d osg::Matrixd::transform3x3(const osg::Vec3d & v, const osg::Matrixd & m) function, expected prototype:\nstatic osg::Vec3d osg::Matrixd::transform3x3(const osg::Vec3d & v, const osg::Matrixd & m)\nClass arguments details:\narg 1 ID = 92303202\narg 2 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3d* v_ptr=(Luna< osg::Vec3d >::check(L,1));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osg::Matrixd::transform3x3 function");
		}
		const osg::Vec3d & v=*v_ptr;
		const osg::Matrixd* m_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !m_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m in osg::Matrixd::transform3x3 function");
		}
		const osg::Matrixd & m=*m_ptr;

		osg::Vec3d stack_lret = osg::Matrixd::transform3x3(v, m);
		osg::Vec3d* lret = new osg::Vec3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3d >::push(L,lret,true);

		return 1;
	}

	// static osg::Vec3f osg::Matrixd::transform3x3(const osg::Matrixd & m, const osg::Vec3f & v)
	static int _bind_transform3x3_overload_3(lua_State *L) {
		if (!_lg_typecheck_transform3x3_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in static osg::Vec3f osg::Matrixd::transform3x3(const osg::Matrixd & m, const osg::Vec3f & v) function, expected prototype:\nstatic osg::Vec3f osg::Matrixd::transform3x3(const osg::Matrixd & m, const osg::Vec3f & v)\nClass arguments details:\narg 1 ID = 18903838\narg 2 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrixd* m_ptr=(Luna< osg::Matrixd >::check(L,1));
		if( !m_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m in osg::Matrixd::transform3x3 function");
		}
		const osg::Matrixd & m=*m_ptr;
		const osg::Vec3f* v_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osg::Matrixd::transform3x3 function");
		}
		const osg::Vec3f & v=*v_ptr;

		osg::Vec3f stack_lret = osg::Matrixd::transform3x3(m, v);
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// static osg::Vec3d osg::Matrixd::transform3x3(const osg::Matrixd & m, const osg::Vec3d & v)
	static int _bind_transform3x3_overload_4(lua_State *L) {
		if (!_lg_typecheck_transform3x3_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in static osg::Vec3d osg::Matrixd::transform3x3(const osg::Matrixd & m, const osg::Vec3d & v) function, expected prototype:\nstatic osg::Vec3d osg::Matrixd::transform3x3(const osg::Matrixd & m, const osg::Vec3d & v)\nClass arguments details:\narg 1 ID = 18903838\narg 2 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrixd* m_ptr=(Luna< osg::Matrixd >::check(L,1));
		if( !m_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m in osg::Matrixd::transform3x3 function");
		}
		const osg::Matrixd & m=*m_ptr;
		const osg::Vec3d* v_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osg::Matrixd::transform3x3 function");
		}
		const osg::Vec3d & v=*v_ptr;

		osg::Vec3d stack_lret = osg::Matrixd::transform3x3(m, v);
		osg::Vec3d* lret = new osg::Vec3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3d >::push(L,lret,true);

		return 1;
	}

	// Overload binder for osg::Matrixd::transform3x3
	static int _bind_transform3x3(lua_State *L) {
		if (_lg_typecheck_transform3x3_overload_1(L)) return _bind_transform3x3_overload_1(L);
		if (_lg_typecheck_transform3x3_overload_2(L)) return _bind_transform3x3_overload_2(L);
		if (_lg_typecheck_transform3x3_overload_3(L)) return _bind_transform3x3_overload_3(L);
		if (_lg_typecheck_transform3x3_overload_4(L)) return _bind_transform3x3_overload_4(L);

		luaL_error(L, "error in function transform3x3, cannot match any of the overloads for function transform3x3:\n  transform3x3(const osg::Vec3f &, const osg::Matrixd &)\n  transform3x3(const osg::Vec3d &, const osg::Matrixd &)\n  transform3x3(const osg::Matrixd &, const osg::Vec3f &)\n  transform3x3(const osg::Matrixd &, const osg::Vec3d &)\n");
		return 0;
	}


	// Operator binds:
	// bool osg::Matrixd::operator<(const osg::Matrixd & m) const
	static int _bind___lt(lua_State *L) {
		if (!_lg_typecheck___lt(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Matrixd::operator<(const osg::Matrixd & m) const function, expected prototype:\nbool osg::Matrixd::operator<(const osg::Matrixd & m) const\nClass arguments details:\narg 1 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrixd* m_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !m_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m in osg::Matrixd::operator< function");
		}
		const osg::Matrixd & m=*m_ptr;

		osg::Matrixd* self=(Luna< osg::Matrixd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Matrixd::operator<(const osg::Matrixd &) const. Got : '%s'\n%s",typeid(Luna< osg::Matrixd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator<(m);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Matrixd::operator==(const osg::Matrixd & m) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Matrixd::operator==(const osg::Matrixd & m) const function, expected prototype:\nbool osg::Matrixd::operator==(const osg::Matrixd & m) const\nClass arguments details:\narg 1 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrixd* m_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !m_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m in osg::Matrixd::operator== function");
		}
		const osg::Matrixd & m=*m_ptr;

		osg::Matrixd* self=(Luna< osg::Matrixd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Matrixd::operator==(const osg::Matrixd &) const. Got : '%s'\n%s",typeid(Luna< osg::Matrixd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator==(m);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Matrixd::operator!=(const osg::Matrixd & m) const
	static int _bind_op_neq(lua_State *L) {
		if (!_lg_typecheck_op_neq(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Matrixd::operator!=(const osg::Matrixd & m) const function, expected prototype:\nbool osg::Matrixd::operator!=(const osg::Matrixd & m) const\nClass arguments details:\narg 1 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrixd* m_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !m_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m in osg::Matrixd::operator!= function");
		}
		const osg::Matrixd & m=*m_ptr;

		osg::Matrixd* self=(Luna< osg::Matrixd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Matrixd::operator!=(const osg::Matrixd &) const. Got : '%s'\n%s",typeid(Luna< osg::Matrixd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator!=(m);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// double & osg::Matrixd::operator()(int row, int col)
	static int _bind_op_call_overload_1(lua_State *L) {
		if (!_lg_typecheck_op_call_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in double & osg::Matrixd::operator()(int row, int col) function, expected prototype:\ndouble & osg::Matrixd::operator()(int row, int col)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);

		osg::Matrixd* self=(Luna< osg::Matrixd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double & osg::Matrixd::operator()(int, int). Got : '%s'\n%s",typeid(Luna< osg::Matrixd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double & lret = self->operator()(row, col);
		lua_pushnumber(L,lret);

		return 1;
	}

	// double osg::Matrixd::operator()(int row, int col) const
	static int _bind_op_call_overload_2(lua_State *L) {
		if (!_lg_typecheck_op_call_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in double osg::Matrixd::operator()(int row, int col) const function, expected prototype:\ndouble osg::Matrixd::operator()(int row, int col) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);

		osg::Matrixd* self=(Luna< osg::Matrixd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double osg::Matrixd::operator()(int, int) const. Got : '%s'\n%s",typeid(Luna< osg::Matrixd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->operator()(row, col);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::Matrixd::operator()
	static int _bind_op_call(lua_State *L) {
		if (_lg_typecheck_op_call_overload_1(L)) return _bind_op_call_overload_1(L);
		if (_lg_typecheck_op_call_overload_2(L)) return _bind_op_call_overload_2(L);

		luaL_error(L, "error in function operator(), cannot match any of the overloads for function operator():\n  operator()(int, int)\n  operator()(int, int)\n");
		return 0;
	}

	// osg::Matrixd & osg::Matrixd::operator=(const osg::Matrixd & rhs)
	static int _bind_op_assign_overload_1(lua_State *L) {
		if (!_lg_typecheck_op_assign_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Matrixd & osg::Matrixd::operator=(const osg::Matrixd & rhs) function, expected prototype:\nosg::Matrixd & osg::Matrixd::operator=(const osg::Matrixd & rhs)\nClass arguments details:\narg 1 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrixd* rhs_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Matrixd::operator= function");
		}
		const osg::Matrixd & rhs=*rhs_ptr;

		osg::Matrixd* self=(Luna< osg::Matrixd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Matrixd & osg::Matrixd::operator=(const osg::Matrixd &). Got : '%s'\n%s",typeid(Luna< osg::Matrixd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Matrixd* lret = &self->operator=(rhs);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,false);

		return 1;
	}

	// osg::Matrixd & osg::Matrixd::operator=(const osg::Matrixf & other)
	static int _bind_op_assign_overload_2(lua_State *L) {
		if (!_lg_typecheck_op_assign_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Matrixd & osg::Matrixd::operator=(const osg::Matrixf & other) function, expected prototype:\nosg::Matrixd & osg::Matrixd::operator=(const osg::Matrixf & other)\nClass arguments details:\narg 1 ID = 18903840\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrixf* other_ptr=(Luna< osg::Matrixf >::check(L,2));
		if( !other_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg other in osg::Matrixd::operator= function");
		}
		const osg::Matrixf & other=*other_ptr;

		osg::Matrixd* self=(Luna< osg::Matrixd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Matrixd & osg::Matrixd::operator=(const osg::Matrixf &). Got : '%s'\n%s",typeid(Luna< osg::Matrixd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Matrixd* lret = &self->operator=(other);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Matrixd::operator=
	static int _bind_op_assign(lua_State *L) {
		if (_lg_typecheck_op_assign_overload_1(L)) return _bind_op_assign_overload_1(L);
		if (_lg_typecheck_op_assign_overload_2(L)) return _bind_op_assign_overload_2(L);

		luaL_error(L, "error in function operator=, cannot match any of the overloads for function operator=:\n  operator=(const osg::Matrixd &)\n  operator=(const osg::Matrixf &)\n");
		return 0;
	}

	// osg::Vec3f osg::Matrixd::operator*(const osg::Vec3f & v) const
	static int _bind___mul_overload_1(lua_State *L) {
		if (!_lg_typecheck___mul_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3f osg::Matrixd::operator*(const osg::Vec3f & v) const function, expected prototype:\nosg::Vec3f osg::Matrixd::operator*(const osg::Vec3f & v) const\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* v_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osg::Matrixd::operator* function");
		}
		const osg::Vec3f & v=*v_ptr;

		osg::Matrixd* self=(Luna< osg::Matrixd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3f osg::Matrixd::operator*(const osg::Vec3f &) const. Got : '%s'\n%s",typeid(Luna< osg::Matrixd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec3f stack_lret = self->operator*(v);
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// osg::Vec3d osg::Matrixd::operator*(const osg::Vec3d & v) const
	static int _bind___mul_overload_2(lua_State *L) {
		if (!_lg_typecheck___mul_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3d osg::Matrixd::operator*(const osg::Vec3d & v) const function, expected prototype:\nosg::Vec3d osg::Matrixd::operator*(const osg::Vec3d & v) const\nClass arguments details:\narg 1 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3d* v_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osg::Matrixd::operator* function");
		}
		const osg::Vec3d & v=*v_ptr;

		osg::Matrixd* self=(Luna< osg::Matrixd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3d osg::Matrixd::operator*(const osg::Vec3d &) const. Got : '%s'\n%s",typeid(Luna< osg::Matrixd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec3d stack_lret = self->operator*(v);
		osg::Vec3d* lret = new osg::Vec3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3d >::push(L,lret,true);

		return 1;
	}

	// osg::Vec4f osg::Matrixd::operator*(const osg::Vec4f & v) const
	static int _bind___mul_overload_3(lua_State *L) {
		if (!_lg_typecheck___mul_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec4f osg::Matrixd::operator*(const osg::Vec4f & v) const function, expected prototype:\nosg::Vec4f osg::Matrixd::operator*(const osg::Vec4f & v) const\nClass arguments details:\narg 1 ID = 92303235\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec4f* v_ptr=(Luna< osg::Vec4f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osg::Matrixd::operator* function");
		}
		const osg::Vec4f & v=*v_ptr;

		osg::Matrixd* self=(Luna< osg::Matrixd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec4f osg::Matrixd::operator*(const osg::Vec4f &) const. Got : '%s'\n%s",typeid(Luna< osg::Matrixd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec4f stack_lret = self->operator*(v);
		osg::Vec4f* lret = new osg::Vec4f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4f >::push(L,lret,true);

		return 1;
	}

	// osg::Vec4d osg::Matrixd::operator*(const osg::Vec4d & v) const
	static int _bind___mul_overload_4(lua_State *L) {
		if (!_lg_typecheck___mul_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec4d osg::Matrixd::operator*(const osg::Vec4d & v) const function, expected prototype:\nosg::Vec4d osg::Matrixd::operator*(const osg::Vec4d & v) const\nClass arguments details:\narg 1 ID = 92303233\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec4d* v_ptr=(Luna< osg::Vec4d >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osg::Matrixd::operator* function");
		}
		const osg::Vec4d & v=*v_ptr;

		osg::Matrixd* self=(Luna< osg::Matrixd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec4d osg::Matrixd::operator*(const osg::Vec4d &) const. Got : '%s'\n%s",typeid(Luna< osg::Matrixd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec4d stack_lret = self->operator*(v);
		osg::Vec4d* lret = new osg::Vec4d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4d >::push(L,lret,true);

		return 1;
	}

	// osg::Matrixd osg::Matrixd::operator*(const osg::Matrixd & m) const
	static int _bind___mul_overload_5(lua_State *L) {
		if (!_lg_typecheck___mul_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in osg::Matrixd osg::Matrixd::operator*(const osg::Matrixd & m) const function, expected prototype:\nosg::Matrixd osg::Matrixd::operator*(const osg::Matrixd & m) const\nClass arguments details:\narg 1 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrixd* m_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !m_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m in osg::Matrixd::operator* function");
		}
		const osg::Matrixd & m=*m_ptr;

		osg::Matrixd* self=(Luna< osg::Matrixd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Matrixd osg::Matrixd::operator*(const osg::Matrixd &) const. Got : '%s'\n%s",typeid(Luna< osg::Matrixd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Matrixd stack_lret = self->operator*(m);
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// Overload binder for osg::Matrixd::operator*
	static int _bind___mul(lua_State *L) {
		if (_lg_typecheck___mul_overload_1(L)) return _bind___mul_overload_1(L);
		if (_lg_typecheck___mul_overload_2(L)) return _bind___mul_overload_2(L);
		if (_lg_typecheck___mul_overload_3(L)) return _bind___mul_overload_3(L);
		if (_lg_typecheck___mul_overload_4(L)) return _bind___mul_overload_4(L);
		if (_lg_typecheck___mul_overload_5(L)) return _bind___mul_overload_5(L);

		luaL_error(L, "error in function operator*, cannot match any of the overloads for function operator*:\n  operator*(const osg::Vec3f &)\n  operator*(const osg::Vec3d &)\n  operator*(const osg::Vec4f &)\n  operator*(const osg::Vec4d &)\n  operator*(const osg::Matrixd &)\n");
		return 0;
	}

	// void osg::Matrixd::operator*=(const osg::Matrixd & other)
	static int _bind_op_mult(lua_State *L) {
		if (!_lg_typecheck_op_mult(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Matrixd::operator*=(const osg::Matrixd & other) function, expected prototype:\nvoid osg::Matrixd::operator*=(const osg::Matrixd & other)\nClass arguments details:\narg 1 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrixd* other_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !other_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg other in osg::Matrixd::operator*= function");
		}
		const osg::Matrixd & other=*other_ptr;

		osg::Matrixd* self=(Luna< osg::Matrixd >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Matrixd::operator*=(const osg::Matrixd &). Got : '%s'\n%s",typeid(Luna< osg::Matrixd >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->operator*=(other);

		return 0;
	}


};

osg::Matrixd* LunaTraits< osg::Matrixd >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Matrixd::_bind_ctor(L);
}

void LunaTraits< osg::Matrixd >::_bind_dtor(osg::Matrixd* obj) {
	delete obj;
}

const char LunaTraits< osg::Matrixd >::className[] = "Matrixd";
const char LunaTraits< osg::Matrixd >::fullName[] = "osg::Matrixd";
const char LunaTraits< osg::Matrixd >::moduleName[] = "osg";
const char* LunaTraits< osg::Matrixd >::parents[] = {0};
const int LunaTraits< osg::Matrixd >::hash = 18903838;
const int LunaTraits< osg::Matrixd >::uniqueIDs[] = {18903838,0};

luna_RegType LunaTraits< osg::Matrixd >::methods[] = {
	{"compare", &luna_wrapper_osg_Matrixd::_bind_compare},
	{"valid", &luna_wrapper_osg_Matrixd::_bind_valid},
	{"isNaN", &luna_wrapper_osg_Matrixd::_bind_isNaN},
	{"set", &luna_wrapper_osg_Matrixd::_bind_set},
	{"ptr", &luna_wrapper_osg_Matrixd::_bind_ptr},
	{"isIdentity", &luna_wrapper_osg_Matrixd::_bind_isIdentity},
	{"makeIdentity", &luna_wrapper_osg_Matrixd::_bind_makeIdentity},
	{"makeScale", &luna_wrapper_osg_Matrixd::_bind_makeScale},
	{"makeTranslate", &luna_wrapper_osg_Matrixd::_bind_makeTranslate},
	{"makeRotate", &luna_wrapper_osg_Matrixd::_bind_makeRotate},
	{"decompose", &luna_wrapper_osg_Matrixd::_bind_decompose},
	{"makeOrtho", &luna_wrapper_osg_Matrixd::_bind_makeOrtho},
	{"getOrtho", &luna_wrapper_osg_Matrixd::_bind_getOrtho},
	{"makeOrtho2D", &luna_wrapper_osg_Matrixd::_bind_makeOrtho2D},
	{"makeFrustum", &luna_wrapper_osg_Matrixd::_bind_makeFrustum},
	{"getFrustum", &luna_wrapper_osg_Matrixd::_bind_getFrustum},
	{"makePerspective", &luna_wrapper_osg_Matrixd::_bind_makePerspective},
	{"getPerspective", &luna_wrapper_osg_Matrixd::_bind_getPerspective},
	{"makeLookAt", &luna_wrapper_osg_Matrixd::_bind_makeLookAt},
	{"getLookAt", &luna_wrapper_osg_Matrixd::_bind_getLookAt},
	{"invert", &luna_wrapper_osg_Matrixd::_bind_invert},
	{"invert_4x3", &luna_wrapper_osg_Matrixd::_bind_invert_4x3},
	{"invert_4x4", &luna_wrapper_osg_Matrixd::_bind_invert_4x4},
	{"orthoNormalize", &luna_wrapper_osg_Matrixd::_bind_orthoNormalize},
	{"preMult", &luna_wrapper_osg_Matrixd::_bind_preMult},
	{"postMult", &luna_wrapper_osg_Matrixd::_bind_postMult},
	{"get", &luna_wrapper_osg_Matrixd::_bind_get},
	{"setRotate", &luna_wrapper_osg_Matrixd::_bind_setRotate},
	{"getRotate", &luna_wrapper_osg_Matrixd::_bind_getRotate},
	{"setTrans", &luna_wrapper_osg_Matrixd::_bind_setTrans},
	{"getTrans", &luna_wrapper_osg_Matrixd::_bind_getTrans},
	{"getScale", &luna_wrapper_osg_Matrixd::_bind_getScale},
	{"mult", &luna_wrapper_osg_Matrixd::_bind_mult},
	{"preMultTranslate", &luna_wrapper_osg_Matrixd::_bind_preMultTranslate},
	{"postMultTranslate", &luna_wrapper_osg_Matrixd::_bind_postMultTranslate},
	{"preMultScale", &luna_wrapper_osg_Matrixd::_bind_preMultScale},
	{"postMultScale", &luna_wrapper_osg_Matrixd::_bind_postMultScale},
	{"preMultRotate", &luna_wrapper_osg_Matrixd::_bind_preMultRotate},
	{"postMultRotate", &luna_wrapper_osg_Matrixd::_bind_postMultRotate},
	{"identity", &luna_wrapper_osg_Matrixd::_bind_identity},
	{"scale", &luna_wrapper_osg_Matrixd::_bind_scale},
	{"translate", &luna_wrapper_osg_Matrixd::_bind_translate},
	{"rotate", &luna_wrapper_osg_Matrixd::_bind_rotate},
	{"inverse", &luna_wrapper_osg_Matrixd::_bind_inverse},
	{"orthoNormal", &luna_wrapper_osg_Matrixd::_bind_orthoNormal},
	{"ortho", &luna_wrapper_osg_Matrixd::_bind_ortho},
	{"ortho2D", &luna_wrapper_osg_Matrixd::_bind_ortho2D},
	{"frustum", &luna_wrapper_osg_Matrixd::_bind_frustum},
	{"perspective", &luna_wrapper_osg_Matrixd::_bind_perspective},
	{"lookAt", &luna_wrapper_osg_Matrixd::_bind_lookAt},
	{"transform3x3", &luna_wrapper_osg_Matrixd::_bind_transform3x3},
	{"__lt", &luna_wrapper_osg_Matrixd::_bind___lt},
	{"__eq", &luna_wrapper_osg_Matrixd::_bind___eq},
	{"op_neq", &luna_wrapper_osg_Matrixd::_bind_op_neq},
	{"op_call", &luna_wrapper_osg_Matrixd::_bind_op_call},
	{"op_assign", &luna_wrapper_osg_Matrixd::_bind_op_assign},
	{"__mul", &luna_wrapper_osg_Matrixd::_bind___mul},
	{"op_mult", &luna_wrapper_osg_Matrixd::_bind_op_mult},
	{"dynCast", &luna_wrapper_osg_Matrixd::_bind_dynCast},
	{"fromVoid", &luna_wrapper_osg_Matrixd::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_Matrixd::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Matrixd >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Matrixd >::enumValues[] = {
	{0,0}
};



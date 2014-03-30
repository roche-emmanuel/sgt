#include <plug_common.h>

class luna_wrapper_osg_Quat {
public:
	typedef Luna< osg::Quat > luna_t;

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::Quat* self= (osg::Quat*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::Quat >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,80263306) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osg::Quat >::check(L,1));
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

		osg::Quat* self=(Luna< osg::Quat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::Quat");
		
		return luna_dynamicCast(L,converters,"osg::Quat",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,1)!=LUA_TNUMBER ) return false;
		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92303235) ) return false;
		if( (!(Luna< osg::Vec4f >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92303233) ) return false;
		if( (!(Luna< osg::Vec4d >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,1)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,1)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_7(lua_State *L) {
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

	inline static bool _lg_typecheck_ctor_overload_8(lua_State *L) {
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


	// Function checkers:
	inline static bool _lg_typecheck_asVec4(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_asVec3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_set_overload_1(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303235) ) return false;
		if( (!(Luna< osg::Vec4f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303233) ) return false;
		if( (!(Luna< osg::Vec4d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903840) ) return false;
		if( (!(Luna< osg::Matrixf >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		if( (!(Luna< osg::Matrixd >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903840) ) return false;
		if( (!(Luna< osg::Matrixf >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		if( (!(Luna< osg::Matrixd >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_x_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_x_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_y_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_y_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_z_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_z_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_w_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_w_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_zeroRotation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_length(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_length2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_conj(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_inverse(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_makeRotate_overload_1(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_makeRotate_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_makeRotate_overload_3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_makeRotate_overload_4(lua_State *L) {
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

	inline static bool _lg_typecheck_makeRotate_overload_5(lua_State *L) {
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

	inline static bool _lg_typecheck_makeRotate_overload_6(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_makeRotate_overload_7(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_makeRotate_original(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303202) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRotate_overload_1(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRotate_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRotate_overload_3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_slerp(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,3,80263306) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,80263306) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 21 valid operators)
	inline static bool _lg_typecheck_op_assign(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,80263306) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,80263306) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_neq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,80263306) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___lt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,80263306) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_index_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_index_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___mul_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck___mul_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,80263306) ) return false;
		if( (!(Luna< osg::Quat >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___mul_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___mul_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_mult_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_mult_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,80263306) ) return false;
		if( (!(Luna< osg::Quat >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___div_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck___div_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,80263306) ) return false;
		if( (!(Luna< osg::Quat >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_div_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_div_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,80263306) ) return false;
		if( (!(Luna< osg::Quat >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___add(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,80263306) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_add(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,80263306) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___sub(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,80263306) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_sub(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,80263306) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___unm(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		return true;
	}


	// Constructor binds:
	// osg::Quat::Quat()
	static osg::Quat* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Quat::Quat() function, expected prototype:\nosg::Quat::Quat()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::Quat();
	}

	// osg::Quat::Quat(double x, double y, double z, double w)
	static osg::Quat* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Quat::Quat(double x, double y, double z, double w) function, expected prototype:\nosg::Quat::Quat(double x, double y, double z, double w)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double x=(double)lua_tonumber(L,1);
		double y=(double)lua_tonumber(L,2);
		double z=(double)lua_tonumber(L,3);
		double w=(double)lua_tonumber(L,4);

		return new osg::Quat(x, y, z, w);
	}

	// osg::Quat::Quat(const osg::Vec4f & v)
	static osg::Quat* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::Quat::Quat(const osg::Vec4f & v) function, expected prototype:\nosg::Quat::Quat(const osg::Vec4f & v)\nClass arguments details:\narg 1 ID = 92303235\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec4f* v_ptr=(Luna< osg::Vec4f >::check(L,1));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osg::Quat::Quat function");
		}
		const osg::Vec4f & v=*v_ptr;

		return new osg::Quat(v);
	}

	// osg::Quat::Quat(const osg::Vec4d & v)
	static osg::Quat* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::Quat::Quat(const osg::Vec4d & v) function, expected prototype:\nosg::Quat::Quat(const osg::Vec4d & v)\nClass arguments details:\narg 1 ID = 92303233\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec4d* v_ptr=(Luna< osg::Vec4d >::check(L,1));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osg::Quat::Quat function");
		}
		const osg::Vec4d & v=*v_ptr;

		return new osg::Quat(v);
	}

	// osg::Quat::Quat(double angle, const osg::Vec3f & axis)
	static osg::Quat* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in osg::Quat::Quat(double angle, const osg::Vec3f & axis) function, expected prototype:\nosg::Quat::Quat(double angle, const osg::Vec3f & axis)\nClass arguments details:\narg 2 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		double angle=(double)lua_tonumber(L,1);
		const osg::Vec3f* axis_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !axis_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg axis in osg::Quat::Quat function");
		}
		const osg::Vec3f & axis=*axis_ptr;

		return new osg::Quat(angle, axis);
	}

	// osg::Quat::Quat(double angle, const osg::Vec3d & axis)
	static osg::Quat* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in osg::Quat::Quat(double angle, const osg::Vec3d & axis) function, expected prototype:\nosg::Quat::Quat(double angle, const osg::Vec3d & axis)\nClass arguments details:\narg 2 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		double angle=(double)lua_tonumber(L,1);
		const osg::Vec3d* axis_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !axis_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg axis in osg::Quat::Quat function");
		}
		const osg::Vec3d & axis=*axis_ptr;

		return new osg::Quat(angle, axis);
	}

	// osg::Quat::Quat(double angle1, const osg::Vec3f & axis1, double angle2, const osg::Vec3f & axis2, double angle3, const osg::Vec3f & axis3)
	static osg::Quat* _bind_ctor_overload_7(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_7(L)) {
			luaL_error(L, "luna typecheck failed in osg::Quat::Quat(double angle1, const osg::Vec3f & axis1, double angle2, const osg::Vec3f & axis2, double angle3, const osg::Vec3f & axis3) function, expected prototype:\nosg::Quat::Quat(double angle1, const osg::Vec3f & axis1, double angle2, const osg::Vec3f & axis2, double angle3, const osg::Vec3f & axis3)\nClass arguments details:\narg 2 ID = 92303204\narg 4 ID = 92303204\narg 6 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		double angle1=(double)lua_tonumber(L,1);
		const osg::Vec3f* axis1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !axis1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg axis1 in osg::Quat::Quat function");
		}
		const osg::Vec3f & axis1=*axis1_ptr;
		double angle2=(double)lua_tonumber(L,3);
		const osg::Vec3f* axis2_ptr=(Luna< osg::Vec3f >::check(L,4));
		if( !axis2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg axis2 in osg::Quat::Quat function");
		}
		const osg::Vec3f & axis2=*axis2_ptr;
		double angle3=(double)lua_tonumber(L,5);
		const osg::Vec3f* axis3_ptr=(Luna< osg::Vec3f >::check(L,6));
		if( !axis3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg axis3 in osg::Quat::Quat function");
		}
		const osg::Vec3f & axis3=*axis3_ptr;

		return new osg::Quat(angle1, axis1, angle2, axis2, angle3, axis3);
	}

	// osg::Quat::Quat(double angle1, const osg::Vec3d & axis1, double angle2, const osg::Vec3d & axis2, double angle3, const osg::Vec3d & axis3)
	static osg::Quat* _bind_ctor_overload_8(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_8(L)) {
			luaL_error(L, "luna typecheck failed in osg::Quat::Quat(double angle1, const osg::Vec3d & axis1, double angle2, const osg::Vec3d & axis2, double angle3, const osg::Vec3d & axis3) function, expected prototype:\nosg::Quat::Quat(double angle1, const osg::Vec3d & axis1, double angle2, const osg::Vec3d & axis2, double angle3, const osg::Vec3d & axis3)\nClass arguments details:\narg 2 ID = 92303202\narg 4 ID = 92303202\narg 6 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		double angle1=(double)lua_tonumber(L,1);
		const osg::Vec3d* axis1_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !axis1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg axis1 in osg::Quat::Quat function");
		}
		const osg::Vec3d & axis1=*axis1_ptr;
		double angle2=(double)lua_tonumber(L,3);
		const osg::Vec3d* axis2_ptr=(Luna< osg::Vec3d >::check(L,4));
		if( !axis2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg axis2 in osg::Quat::Quat function");
		}
		const osg::Vec3d & axis2=*axis2_ptr;
		double angle3=(double)lua_tonumber(L,5);
		const osg::Vec3d* axis3_ptr=(Luna< osg::Vec3d >::check(L,6));
		if( !axis3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg axis3 in osg::Quat::Quat function");
		}
		const osg::Vec3d & axis3=*axis3_ptr;

		return new osg::Quat(angle1, axis1, angle2, axis2, angle3, axis3);
	}

	// Overload binder for osg::Quat::Quat
	static osg::Quat* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);
		if (_lg_typecheck_ctor_overload_7(L)) return _bind_ctor_overload_7(L);
		if (_lg_typecheck_ctor_overload_8(L)) return _bind_ctor_overload_8(L);

		luaL_error(L, "error in function Quat, cannot match any of the overloads for function Quat:\n  Quat()\n  Quat(double, double, double, double)\n  Quat(const osg::Vec4f &)\n  Quat(const osg::Vec4d &)\n  Quat(double, const osg::Vec3f &)\n  Quat(double, const osg::Vec3d &)\n  Quat(double, const osg::Vec3f &, double, const osg::Vec3f &, double, const osg::Vec3f &)\n  Quat(double, const osg::Vec3d &, double, const osg::Vec3d &, double, const osg::Vec3d &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Vec4d osg::Quat::asVec4() const
	static int _bind_asVec4(lua_State *L) {
		if (!_lg_typecheck_asVec4(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec4d osg::Quat::asVec4() const function, expected prototype:\nosg::Vec4d osg::Quat::asVec4() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Quat* self=(Luna< osg::Quat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec4d osg::Quat::asVec4() const. Got : '%s'\n%s",typeid(Luna< osg::Quat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec4d stack_lret = self->asVec4();
		osg::Vec4d* lret = new osg::Vec4d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4d >::push(L,lret,true);

		return 1;
	}

	// osg::Vec3d osg::Quat::asVec3() const
	static int _bind_asVec3(lua_State *L) {
		if (!_lg_typecheck_asVec3(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3d osg::Quat::asVec3() const function, expected prototype:\nosg::Vec3d osg::Quat::asVec3() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Quat* self=(Luna< osg::Quat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3d osg::Quat::asVec3() const. Got : '%s'\n%s",typeid(Luna< osg::Quat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec3d stack_lret = self->asVec3();
		osg::Vec3d* lret = new osg::Vec3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3d >::push(L,lret,true);

		return 1;
	}

	// void osg::Quat::set(double x, double y, double z, double w)
	static int _bind_set_overload_1(lua_State *L) {
		if (!_lg_typecheck_set_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Quat::set(double x, double y, double z, double w) function, expected prototype:\nvoid osg::Quat::set(double x, double y, double z, double w)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double x=(double)lua_tonumber(L,2);
		double y=(double)lua_tonumber(L,3);
		double z=(double)lua_tonumber(L,4);
		double w=(double)lua_tonumber(L,5);

		osg::Quat* self=(Luna< osg::Quat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Quat::set(double, double, double, double). Got : '%s'\n%s",typeid(Luna< osg::Quat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set(x, y, z, w);

		return 0;
	}

	// void osg::Quat::set(const osg::Vec4f & v)
	static int _bind_set_overload_2(lua_State *L) {
		if (!_lg_typecheck_set_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Quat::set(const osg::Vec4f & v) function, expected prototype:\nvoid osg::Quat::set(const osg::Vec4f & v)\nClass arguments details:\narg 1 ID = 92303235\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec4f* v_ptr=(Luna< osg::Vec4f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osg::Quat::set function");
		}
		const osg::Vec4f & v=*v_ptr;

		osg::Quat* self=(Luna< osg::Quat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Quat::set(const osg::Vec4f &). Got : '%s'\n%s",typeid(Luna< osg::Quat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set(v);

		return 0;
	}

	// void osg::Quat::set(const osg::Vec4d & v)
	static int _bind_set_overload_3(lua_State *L) {
		if (!_lg_typecheck_set_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Quat::set(const osg::Vec4d & v) function, expected prototype:\nvoid osg::Quat::set(const osg::Vec4d & v)\nClass arguments details:\narg 1 ID = 92303233\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec4d* v_ptr=(Luna< osg::Vec4d >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osg::Quat::set function");
		}
		const osg::Vec4d & v=*v_ptr;

		osg::Quat* self=(Luna< osg::Quat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Quat::set(const osg::Vec4d &). Got : '%s'\n%s",typeid(Luna< osg::Quat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set(v);

		return 0;
	}

	// void osg::Quat::set(const osg::Matrixf & matrix)
	static int _bind_set_overload_4(lua_State *L) {
		if (!_lg_typecheck_set_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Quat::set(const osg::Matrixf & matrix) function, expected prototype:\nvoid osg::Quat::set(const osg::Matrixf & matrix)\nClass arguments details:\narg 1 ID = 18903840\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrixf* matrix_ptr=(Luna< osg::Matrixf >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osg::Quat::set function");
		}
		const osg::Matrixf & matrix=*matrix_ptr;

		osg::Quat* self=(Luna< osg::Quat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Quat::set(const osg::Matrixf &). Got : '%s'\n%s",typeid(Luna< osg::Quat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set(matrix);

		return 0;
	}

	// void osg::Quat::set(const osg::Matrixd & matrix)
	static int _bind_set_overload_5(lua_State *L) {
		if (!_lg_typecheck_set_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Quat::set(const osg::Matrixd & matrix) function, expected prototype:\nvoid osg::Quat::set(const osg::Matrixd & matrix)\nClass arguments details:\narg 1 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osg::Quat::set function");
		}
		const osg::Matrixd & matrix=*matrix_ptr;

		osg::Quat* self=(Luna< osg::Quat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Quat::set(const osg::Matrixd &). Got : '%s'\n%s",typeid(Luna< osg::Quat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set(matrix);

		return 0;
	}

	// Overload binder for osg::Quat::set
	static int _bind_set(lua_State *L) {
		if (_lg_typecheck_set_overload_1(L)) return _bind_set_overload_1(L);
		if (_lg_typecheck_set_overload_2(L)) return _bind_set_overload_2(L);
		if (_lg_typecheck_set_overload_3(L)) return _bind_set_overload_3(L);
		if (_lg_typecheck_set_overload_4(L)) return _bind_set_overload_4(L);
		if (_lg_typecheck_set_overload_5(L)) return _bind_set_overload_5(L);

		luaL_error(L, "error in function set, cannot match any of the overloads for function set:\n  set(double, double, double, double)\n  set(const osg::Vec4f &)\n  set(const osg::Vec4d &)\n  set(const osg::Matrixf &)\n  set(const osg::Matrixd &)\n");
		return 0;
	}

	// void osg::Quat::get(osg::Matrixf & matrix) const
	static int _bind_get_overload_1(lua_State *L) {
		if (!_lg_typecheck_get_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Quat::get(osg::Matrixf & matrix) const function, expected prototype:\nvoid osg::Quat::get(osg::Matrixf & matrix) const\nClass arguments details:\narg 1 ID = 18903840\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Matrixf* matrix_ptr=(Luna< osg::Matrixf >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osg::Quat::get function");
		}
		osg::Matrixf & matrix=*matrix_ptr;

		osg::Quat* self=(Luna< osg::Quat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Quat::get(osg::Matrixf &) const. Got : '%s'\n%s",typeid(Luna< osg::Quat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->get(matrix);

		return 0;
	}

	// void osg::Quat::get(osg::Matrixd & matrix) const
	static int _bind_get_overload_2(lua_State *L) {
		if (!_lg_typecheck_get_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Quat::get(osg::Matrixd & matrix) const function, expected prototype:\nvoid osg::Quat::get(osg::Matrixd & matrix) const\nClass arguments details:\narg 1 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osg::Quat::get function");
		}
		osg::Matrixd & matrix=*matrix_ptr;

		osg::Quat* self=(Luna< osg::Quat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Quat::get(osg::Matrixd &) const. Got : '%s'\n%s",typeid(Luna< osg::Quat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->get(matrix);

		return 0;
	}

	// Overload binder for osg::Quat::get
	static int _bind_get(lua_State *L) {
		if (_lg_typecheck_get_overload_1(L)) return _bind_get_overload_1(L);
		if (_lg_typecheck_get_overload_2(L)) return _bind_get_overload_2(L);

		luaL_error(L, "error in function get, cannot match any of the overloads for function get:\n  get(osg::Matrixf &)\n  get(osg::Matrixd &)\n");
		return 0;
	}

	// double & osg::Quat::x()
	static int _bind_x_overload_1(lua_State *L) {
		if (!_lg_typecheck_x_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in double & osg::Quat::x() function, expected prototype:\ndouble & osg::Quat::x()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Quat* self=(Luna< osg::Quat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double & osg::Quat::x(). Got : '%s'\n%s",typeid(Luna< osg::Quat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double & lret = self->x();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double osg::Quat::x() const
	static int _bind_x_overload_2(lua_State *L) {
		if (!_lg_typecheck_x_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in double osg::Quat::x() const function, expected prototype:\ndouble osg::Quat::x() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Quat* self=(Luna< osg::Quat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double osg::Quat::x() const. Got : '%s'\n%s",typeid(Luna< osg::Quat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->x();
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::Quat::x
	static int _bind_x(lua_State *L) {
		if (_lg_typecheck_x_overload_1(L)) return _bind_x_overload_1(L);
		if (_lg_typecheck_x_overload_2(L)) return _bind_x_overload_2(L);

		luaL_error(L, "error in function x, cannot match any of the overloads for function x:\n  x()\n  x()\n");
		return 0;
	}

	// double & osg::Quat::y()
	static int _bind_y_overload_1(lua_State *L) {
		if (!_lg_typecheck_y_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in double & osg::Quat::y() function, expected prototype:\ndouble & osg::Quat::y()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Quat* self=(Luna< osg::Quat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double & osg::Quat::y(). Got : '%s'\n%s",typeid(Luna< osg::Quat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double & lret = self->y();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double osg::Quat::y() const
	static int _bind_y_overload_2(lua_State *L) {
		if (!_lg_typecheck_y_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in double osg::Quat::y() const function, expected prototype:\ndouble osg::Quat::y() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Quat* self=(Luna< osg::Quat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double osg::Quat::y() const. Got : '%s'\n%s",typeid(Luna< osg::Quat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->y();
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::Quat::y
	static int _bind_y(lua_State *L) {
		if (_lg_typecheck_y_overload_1(L)) return _bind_y_overload_1(L);
		if (_lg_typecheck_y_overload_2(L)) return _bind_y_overload_2(L);

		luaL_error(L, "error in function y, cannot match any of the overloads for function y:\n  y()\n  y()\n");
		return 0;
	}

	// double & osg::Quat::z()
	static int _bind_z_overload_1(lua_State *L) {
		if (!_lg_typecheck_z_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in double & osg::Quat::z() function, expected prototype:\ndouble & osg::Quat::z()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Quat* self=(Luna< osg::Quat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double & osg::Quat::z(). Got : '%s'\n%s",typeid(Luna< osg::Quat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double & lret = self->z();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double osg::Quat::z() const
	static int _bind_z_overload_2(lua_State *L) {
		if (!_lg_typecheck_z_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in double osg::Quat::z() const function, expected prototype:\ndouble osg::Quat::z() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Quat* self=(Luna< osg::Quat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double osg::Quat::z() const. Got : '%s'\n%s",typeid(Luna< osg::Quat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->z();
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::Quat::z
	static int _bind_z(lua_State *L) {
		if (_lg_typecheck_z_overload_1(L)) return _bind_z_overload_1(L);
		if (_lg_typecheck_z_overload_2(L)) return _bind_z_overload_2(L);

		luaL_error(L, "error in function z, cannot match any of the overloads for function z:\n  z()\n  z()\n");
		return 0;
	}

	// double & osg::Quat::w()
	static int _bind_w_overload_1(lua_State *L) {
		if (!_lg_typecheck_w_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in double & osg::Quat::w() function, expected prototype:\ndouble & osg::Quat::w()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Quat* self=(Luna< osg::Quat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double & osg::Quat::w(). Got : '%s'\n%s",typeid(Luna< osg::Quat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double & lret = self->w();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double osg::Quat::w() const
	static int _bind_w_overload_2(lua_State *L) {
		if (!_lg_typecheck_w_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in double osg::Quat::w() const function, expected prototype:\ndouble osg::Quat::w() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Quat* self=(Luna< osg::Quat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double osg::Quat::w() const. Got : '%s'\n%s",typeid(Luna< osg::Quat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->w();
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::Quat::w
	static int _bind_w(lua_State *L) {
		if (_lg_typecheck_w_overload_1(L)) return _bind_w_overload_1(L);
		if (_lg_typecheck_w_overload_2(L)) return _bind_w_overload_2(L);

		luaL_error(L, "error in function w, cannot match any of the overloads for function w:\n  w()\n  w()\n");
		return 0;
	}

	// bool osg::Quat::zeroRotation() const
	static int _bind_zeroRotation(lua_State *L) {
		if (!_lg_typecheck_zeroRotation(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Quat::zeroRotation() const function, expected prototype:\nbool osg::Quat::zeroRotation() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Quat* self=(Luna< osg::Quat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Quat::zeroRotation() const. Got : '%s'\n%s",typeid(Luna< osg::Quat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->zeroRotation();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// double osg::Quat::length() const
	static int _bind_length(lua_State *L) {
		if (!_lg_typecheck_length(L)) {
			luaL_error(L, "luna typecheck failed in double osg::Quat::length() const function, expected prototype:\ndouble osg::Quat::length() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Quat* self=(Luna< osg::Quat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double osg::Quat::length() const. Got : '%s'\n%s",typeid(Luna< osg::Quat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->length();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double osg::Quat::length2() const
	static int _bind_length2(lua_State *L) {
		if (!_lg_typecheck_length2(L)) {
			luaL_error(L, "luna typecheck failed in double osg::Quat::length2() const function, expected prototype:\ndouble osg::Quat::length2() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Quat* self=(Luna< osg::Quat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double osg::Quat::length2() const. Got : '%s'\n%s",typeid(Luna< osg::Quat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->length2();
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::Quat osg::Quat::conj() const
	static int _bind_conj(lua_State *L) {
		if (!_lg_typecheck_conj(L)) {
			luaL_error(L, "luna typecheck failed in osg::Quat osg::Quat::conj() const function, expected prototype:\nosg::Quat osg::Quat::conj() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Quat* self=(Luna< osg::Quat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Quat osg::Quat::conj() const. Got : '%s'\n%s",typeid(Luna< osg::Quat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Quat stack_lret = self->conj();
		osg::Quat* lret = new osg::Quat(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Quat >::push(L,lret,true);

		return 1;
	}

	// const osg::Quat osg::Quat::inverse() const
	static int _bind_inverse(lua_State *L) {
		if (!_lg_typecheck_inverse(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Quat osg::Quat::inverse() const function, expected prototype:\nconst osg::Quat osg::Quat::inverse() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Quat* self=(Luna< osg::Quat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Quat osg::Quat::inverse() const. Got : '%s'\n%s",typeid(Luna< osg::Quat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Quat stack_lret = self->inverse();
		const osg::Quat* lret = new const osg::Quat(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Quat >::push(L,lret,true);

		return 1;
	}

	// void osg::Quat::makeRotate(double angle, double x, double y, double z)
	static int _bind_makeRotate_overload_1(lua_State *L) {
		if (!_lg_typecheck_makeRotate_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Quat::makeRotate(double angle, double x, double y, double z) function, expected prototype:\nvoid osg::Quat::makeRotate(double angle, double x, double y, double z)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double angle=(double)lua_tonumber(L,2);
		double x=(double)lua_tonumber(L,3);
		double y=(double)lua_tonumber(L,4);
		double z=(double)lua_tonumber(L,5);

		osg::Quat* self=(Luna< osg::Quat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Quat::makeRotate(double, double, double, double). Got : '%s'\n%s",typeid(Luna< osg::Quat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->makeRotate(angle, x, y, z);

		return 0;
	}

	// void osg::Quat::makeRotate(double angle, const osg::Vec3f & vec)
	static int _bind_makeRotate_overload_2(lua_State *L) {
		if (!_lg_typecheck_makeRotate_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Quat::makeRotate(double angle, const osg::Vec3f & vec) function, expected prototype:\nvoid osg::Quat::makeRotate(double angle, const osg::Vec3f & vec)\nClass arguments details:\narg 2 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		double angle=(double)lua_tonumber(L,2);
		const osg::Vec3f* vec_ptr=(Luna< osg::Vec3f >::check(L,3));
		if( !vec_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vec in osg::Quat::makeRotate function");
		}
		const osg::Vec3f & vec=*vec_ptr;

		osg::Quat* self=(Luna< osg::Quat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Quat::makeRotate(double, const osg::Vec3f &). Got : '%s'\n%s",typeid(Luna< osg::Quat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->makeRotate(angle, vec);

		return 0;
	}

	// void osg::Quat::makeRotate(double angle, const osg::Vec3d & vec)
	static int _bind_makeRotate_overload_3(lua_State *L) {
		if (!_lg_typecheck_makeRotate_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Quat::makeRotate(double angle, const osg::Vec3d & vec) function, expected prototype:\nvoid osg::Quat::makeRotate(double angle, const osg::Vec3d & vec)\nClass arguments details:\narg 2 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		double angle=(double)lua_tonumber(L,2);
		const osg::Vec3d* vec_ptr=(Luna< osg::Vec3d >::check(L,3));
		if( !vec_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vec in osg::Quat::makeRotate function");
		}
		const osg::Vec3d & vec=*vec_ptr;

		osg::Quat* self=(Luna< osg::Quat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Quat::makeRotate(double, const osg::Vec3d &). Got : '%s'\n%s",typeid(Luna< osg::Quat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->makeRotate(angle, vec);

		return 0;
	}

	// void osg::Quat::makeRotate(double angle1, const osg::Vec3f & axis1, double angle2, const osg::Vec3f & axis2, double angle3, const osg::Vec3f & axis3)
	static int _bind_makeRotate_overload_4(lua_State *L) {
		if (!_lg_typecheck_makeRotate_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Quat::makeRotate(double angle1, const osg::Vec3f & axis1, double angle2, const osg::Vec3f & axis2, double angle3, const osg::Vec3f & axis3) function, expected prototype:\nvoid osg::Quat::makeRotate(double angle1, const osg::Vec3f & axis1, double angle2, const osg::Vec3f & axis2, double angle3, const osg::Vec3f & axis3)\nClass arguments details:\narg 2 ID = 92303204\narg 4 ID = 92303204\narg 6 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		double angle1=(double)lua_tonumber(L,2);
		const osg::Vec3f* axis1_ptr=(Luna< osg::Vec3f >::check(L,3));
		if( !axis1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg axis1 in osg::Quat::makeRotate function");
		}
		const osg::Vec3f & axis1=*axis1_ptr;
		double angle2=(double)lua_tonumber(L,4);
		const osg::Vec3f* axis2_ptr=(Luna< osg::Vec3f >::check(L,5));
		if( !axis2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg axis2 in osg::Quat::makeRotate function");
		}
		const osg::Vec3f & axis2=*axis2_ptr;
		double angle3=(double)lua_tonumber(L,6);
		const osg::Vec3f* axis3_ptr=(Luna< osg::Vec3f >::check(L,7));
		if( !axis3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg axis3 in osg::Quat::makeRotate function");
		}
		const osg::Vec3f & axis3=*axis3_ptr;

		osg::Quat* self=(Luna< osg::Quat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Quat::makeRotate(double, const osg::Vec3f &, double, const osg::Vec3f &, double, const osg::Vec3f &). Got : '%s'\n%s",typeid(Luna< osg::Quat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->makeRotate(angle1, axis1, angle2, axis2, angle3, axis3);

		return 0;
	}

	// void osg::Quat::makeRotate(double angle1, const osg::Vec3d & axis1, double angle2, const osg::Vec3d & axis2, double angle3, const osg::Vec3d & axis3)
	static int _bind_makeRotate_overload_5(lua_State *L) {
		if (!_lg_typecheck_makeRotate_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Quat::makeRotate(double angle1, const osg::Vec3d & axis1, double angle2, const osg::Vec3d & axis2, double angle3, const osg::Vec3d & axis3) function, expected prototype:\nvoid osg::Quat::makeRotate(double angle1, const osg::Vec3d & axis1, double angle2, const osg::Vec3d & axis2, double angle3, const osg::Vec3d & axis3)\nClass arguments details:\narg 2 ID = 92303202\narg 4 ID = 92303202\narg 6 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		double angle1=(double)lua_tonumber(L,2);
		const osg::Vec3d* axis1_ptr=(Luna< osg::Vec3d >::check(L,3));
		if( !axis1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg axis1 in osg::Quat::makeRotate function");
		}
		const osg::Vec3d & axis1=*axis1_ptr;
		double angle2=(double)lua_tonumber(L,4);
		const osg::Vec3d* axis2_ptr=(Luna< osg::Vec3d >::check(L,5));
		if( !axis2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg axis2 in osg::Quat::makeRotate function");
		}
		const osg::Vec3d & axis2=*axis2_ptr;
		double angle3=(double)lua_tonumber(L,6);
		const osg::Vec3d* axis3_ptr=(Luna< osg::Vec3d >::check(L,7));
		if( !axis3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg axis3 in osg::Quat::makeRotate function");
		}
		const osg::Vec3d & axis3=*axis3_ptr;

		osg::Quat* self=(Luna< osg::Quat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Quat::makeRotate(double, const osg::Vec3d &, double, const osg::Vec3d &, double, const osg::Vec3d &). Got : '%s'\n%s",typeid(Luna< osg::Quat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->makeRotate(angle1, axis1, angle2, axis2, angle3, axis3);

		return 0;
	}

	// void osg::Quat::makeRotate(const osg::Vec3f & vec1, const osg::Vec3f & vec2)
	static int _bind_makeRotate_overload_6(lua_State *L) {
		if (!_lg_typecheck_makeRotate_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Quat::makeRotate(const osg::Vec3f & vec1, const osg::Vec3f & vec2) function, expected prototype:\nvoid osg::Quat::makeRotate(const osg::Vec3f & vec1, const osg::Vec3f & vec2)\nClass arguments details:\narg 1 ID = 92303204\narg 2 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* vec1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !vec1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vec1 in osg::Quat::makeRotate function");
		}
		const osg::Vec3f & vec1=*vec1_ptr;
		const osg::Vec3f* vec2_ptr=(Luna< osg::Vec3f >::check(L,3));
		if( !vec2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vec2 in osg::Quat::makeRotate function");
		}
		const osg::Vec3f & vec2=*vec2_ptr;

		osg::Quat* self=(Luna< osg::Quat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Quat::makeRotate(const osg::Vec3f &, const osg::Vec3f &). Got : '%s'\n%s",typeid(Luna< osg::Quat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->makeRotate(vec1, vec2);

		return 0;
	}

	// void osg::Quat::makeRotate(const osg::Vec3d & vec1, const osg::Vec3d & vec2)
	static int _bind_makeRotate_overload_7(lua_State *L) {
		if (!_lg_typecheck_makeRotate_overload_7(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Quat::makeRotate(const osg::Vec3d & vec1, const osg::Vec3d & vec2) function, expected prototype:\nvoid osg::Quat::makeRotate(const osg::Vec3d & vec1, const osg::Vec3d & vec2)\nClass arguments details:\narg 1 ID = 92303202\narg 2 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3d* vec1_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !vec1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vec1 in osg::Quat::makeRotate function");
		}
		const osg::Vec3d & vec1=*vec1_ptr;
		const osg::Vec3d* vec2_ptr=(Luna< osg::Vec3d >::check(L,3));
		if( !vec2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vec2 in osg::Quat::makeRotate function");
		}
		const osg::Vec3d & vec2=*vec2_ptr;

		osg::Quat* self=(Luna< osg::Quat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Quat::makeRotate(const osg::Vec3d &, const osg::Vec3d &). Got : '%s'\n%s",typeid(Luna< osg::Quat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->makeRotate(vec1, vec2);

		return 0;
	}

	// Overload binder for osg::Quat::makeRotate
	static int _bind_makeRotate(lua_State *L) {
		if (_lg_typecheck_makeRotate_overload_1(L)) return _bind_makeRotate_overload_1(L);
		if (_lg_typecheck_makeRotate_overload_2(L)) return _bind_makeRotate_overload_2(L);
		if (_lg_typecheck_makeRotate_overload_3(L)) return _bind_makeRotate_overload_3(L);
		if (_lg_typecheck_makeRotate_overload_4(L)) return _bind_makeRotate_overload_4(L);
		if (_lg_typecheck_makeRotate_overload_5(L)) return _bind_makeRotate_overload_5(L);
		if (_lg_typecheck_makeRotate_overload_6(L)) return _bind_makeRotate_overload_6(L);
		if (_lg_typecheck_makeRotate_overload_7(L)) return _bind_makeRotate_overload_7(L);

		luaL_error(L, "error in function makeRotate, cannot match any of the overloads for function makeRotate:\n  makeRotate(double, double, double, double)\n  makeRotate(double, const osg::Vec3f &)\n  makeRotate(double, const osg::Vec3d &)\n  makeRotate(double, const osg::Vec3f &, double, const osg::Vec3f &, double, const osg::Vec3f &)\n  makeRotate(double, const osg::Vec3d &, double, const osg::Vec3d &, double, const osg::Vec3d &)\n  makeRotate(const osg::Vec3f &, const osg::Vec3f &)\n  makeRotate(const osg::Vec3d &, const osg::Vec3d &)\n");
		return 0;
	}

	// void osg::Quat::makeRotate_original(const osg::Vec3d & vec1, const osg::Vec3d & vec2)
	static int _bind_makeRotate_original(lua_State *L) {
		if (!_lg_typecheck_makeRotate_original(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Quat::makeRotate_original(const osg::Vec3d & vec1, const osg::Vec3d & vec2) function, expected prototype:\nvoid osg::Quat::makeRotate_original(const osg::Vec3d & vec1, const osg::Vec3d & vec2)\nClass arguments details:\narg 1 ID = 92303202\narg 2 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3d* vec1_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !vec1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vec1 in osg::Quat::makeRotate_original function");
		}
		const osg::Vec3d & vec1=*vec1_ptr;
		const osg::Vec3d* vec2_ptr=(Luna< osg::Vec3d >::check(L,3));
		if( !vec2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vec2 in osg::Quat::makeRotate_original function");
		}
		const osg::Vec3d & vec2=*vec2_ptr;

		osg::Quat* self=(Luna< osg::Quat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Quat::makeRotate_original(const osg::Vec3d &, const osg::Vec3d &). Got : '%s'\n%s",typeid(Luna< osg::Quat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->makeRotate_original(vec1, vec2);

		return 0;
	}

	// void osg::Quat::getRotate(double & angle, double & x, double & y, double & z) const
	static int _bind_getRotate_overload_1(lua_State *L) {
		if (!_lg_typecheck_getRotate_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Quat::getRotate(double & angle, double & x, double & y, double & z) const function, expected prototype:\nvoid osg::Quat::getRotate(double & angle, double & x, double & y, double & z) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double angle=(double)lua_tonumber(L,2);
		double x=(double)lua_tonumber(L,3);
		double y=(double)lua_tonumber(L,4);
		double z=(double)lua_tonumber(L,5);

		osg::Quat* self=(Luna< osg::Quat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Quat::getRotate(double &, double &, double &, double &) const. Got : '%s'\n%s",typeid(Luna< osg::Quat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getRotate(angle, x, y, z);

		lua_pushnumber(L,angle);
		lua_pushnumber(L,x);
		lua_pushnumber(L,y);
		lua_pushnumber(L,z);
		return 4;
	}

	// void osg::Quat::getRotate(double & angle, osg::Vec3f & vec) const
	static int _bind_getRotate_overload_2(lua_State *L) {
		if (!_lg_typecheck_getRotate_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Quat::getRotate(double & angle, osg::Vec3f & vec) const function, expected prototype:\nvoid osg::Quat::getRotate(double & angle, osg::Vec3f & vec) const\nClass arguments details:\narg 2 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		double angle=(double)lua_tonumber(L,2);
		osg::Vec3f* vec_ptr=(Luna< osg::Vec3f >::check(L,3));
		if( !vec_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vec in osg::Quat::getRotate function");
		}
		osg::Vec3f & vec=*vec_ptr;

		osg::Quat* self=(Luna< osg::Quat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Quat::getRotate(double &, osg::Vec3f &) const. Got : '%s'\n%s",typeid(Luna< osg::Quat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getRotate(angle, vec);

		lua_pushnumber(L,angle);
		return 1;
	}

	// void osg::Quat::getRotate(double & angle, osg::Vec3d & vec) const
	static int _bind_getRotate_overload_3(lua_State *L) {
		if (!_lg_typecheck_getRotate_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Quat::getRotate(double & angle, osg::Vec3d & vec) const function, expected prototype:\nvoid osg::Quat::getRotate(double & angle, osg::Vec3d & vec) const\nClass arguments details:\narg 2 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		double angle=(double)lua_tonumber(L,2);
		osg::Vec3d* vec_ptr=(Luna< osg::Vec3d >::check(L,3));
		if( !vec_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vec in osg::Quat::getRotate function");
		}
		osg::Vec3d & vec=*vec_ptr;

		osg::Quat* self=(Luna< osg::Quat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Quat::getRotate(double &, osg::Vec3d &) const. Got : '%s'\n%s",typeid(Luna< osg::Quat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getRotate(angle, vec);

		lua_pushnumber(L,angle);
		return 1;
	}

	// Overload binder for osg::Quat::getRotate
	static int _bind_getRotate(lua_State *L) {
		if (_lg_typecheck_getRotate_overload_1(L)) return _bind_getRotate_overload_1(L);
		if (_lg_typecheck_getRotate_overload_2(L)) return _bind_getRotate_overload_2(L);
		if (_lg_typecheck_getRotate_overload_3(L)) return _bind_getRotate_overload_3(L);

		luaL_error(L, "error in function getRotate, cannot match any of the overloads for function getRotate:\n  getRotate(double &, double &, double &, double &)\n  getRotate(double &, osg::Vec3f &)\n  getRotate(double &, osg::Vec3d &)\n");
		return 0;
	}

	// void osg::Quat::slerp(double t, const osg::Quat & from, const osg::Quat & to)
	static int _bind_slerp(lua_State *L) {
		if (!_lg_typecheck_slerp(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Quat::slerp(double t, const osg::Quat & from, const osg::Quat & to) function, expected prototype:\nvoid osg::Quat::slerp(double t, const osg::Quat & from, const osg::Quat & to)\nClass arguments details:\narg 2 ID = 80263306\narg 3 ID = 80263306\n\n%s",luna_dumpStack(L).c_str());
		}

		double t=(double)lua_tonumber(L,2);
		const osg::Quat* from_ptr=(Luna< osg::Quat >::check(L,3));
		if( !from_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg from in osg::Quat::slerp function");
		}
		const osg::Quat & from=*from_ptr;
		const osg::Quat* to_ptr=(Luna< osg::Quat >::check(L,4));
		if( !to_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg to in osg::Quat::slerp function");
		}
		const osg::Quat & to=*to_ptr;

		osg::Quat* self=(Luna< osg::Quat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Quat::slerp(double, const osg::Quat &, const osg::Quat &). Got : '%s'\n%s",typeid(Luna< osg::Quat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->slerp(t, from, to);

		return 0;
	}


	// Operator binds:
	// osg::Quat & osg::Quat::operator=(const osg::Quat & v)
	static int _bind_op_assign(lua_State *L) {
		if (!_lg_typecheck_op_assign(L)) {
			luaL_error(L, "luna typecheck failed in osg::Quat & osg::Quat::operator=(const osg::Quat & v) function, expected prototype:\nosg::Quat & osg::Quat::operator=(const osg::Quat & v)\nClass arguments details:\narg 1 ID = 80263306\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Quat* v_ptr=(Luna< osg::Quat >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osg::Quat::operator= function");
		}
		const osg::Quat & v=*v_ptr;

		osg::Quat* self=(Luna< osg::Quat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Quat & osg::Quat::operator=(const osg::Quat &). Got : '%s'\n%s",typeid(Luna< osg::Quat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Quat* lret = &self->operator=(v);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Quat >::push(L,lret,false);

		return 1;
	}

	// bool osg::Quat::operator==(const osg::Quat & v) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Quat::operator==(const osg::Quat & v) const function, expected prototype:\nbool osg::Quat::operator==(const osg::Quat & v) const\nClass arguments details:\narg 1 ID = 80263306\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Quat* v_ptr=(Luna< osg::Quat >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osg::Quat::operator== function");
		}
		const osg::Quat & v=*v_ptr;

		osg::Quat* self=(Luna< osg::Quat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Quat::operator==(const osg::Quat &) const. Got : '%s'\n%s",typeid(Luna< osg::Quat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator==(v);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Quat::operator!=(const osg::Quat & v) const
	static int _bind_op_neq(lua_State *L) {
		if (!_lg_typecheck_op_neq(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Quat::operator!=(const osg::Quat & v) const function, expected prototype:\nbool osg::Quat::operator!=(const osg::Quat & v) const\nClass arguments details:\narg 1 ID = 80263306\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Quat* v_ptr=(Luna< osg::Quat >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osg::Quat::operator!= function");
		}
		const osg::Quat & v=*v_ptr;

		osg::Quat* self=(Luna< osg::Quat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Quat::operator!=(const osg::Quat &) const. Got : '%s'\n%s",typeid(Luna< osg::Quat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator!=(v);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Quat::operator<(const osg::Quat & v) const
	static int _bind___lt(lua_State *L) {
		if (!_lg_typecheck___lt(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Quat::operator<(const osg::Quat & v) const function, expected prototype:\nbool osg::Quat::operator<(const osg::Quat & v) const\nClass arguments details:\narg 1 ID = 80263306\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Quat* v_ptr=(Luna< osg::Quat >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osg::Quat::operator< function");
		}
		const osg::Quat & v=*v_ptr;

		osg::Quat* self=(Luna< osg::Quat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Quat::operator<(const osg::Quat &) const. Got : '%s'\n%s",typeid(Luna< osg::Quat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator<(v);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// double & osg::Quat::operator[](int i)
	static int _bind_op_index_overload_1(lua_State *L) {
		if (!_lg_typecheck_op_index_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in double & osg::Quat::operator[](int i) function, expected prototype:\ndouble & osg::Quat::operator[](int i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);

		osg::Quat* self=(Luna< osg::Quat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double & osg::Quat::operator[](int). Got : '%s'\n%s",typeid(Luna< osg::Quat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double & lret = self->operator[](i);
		lua_pushnumber(L,lret);

		return 1;
	}

	// double osg::Quat::operator[](int i) const
	static int _bind_op_index_overload_2(lua_State *L) {
		if (!_lg_typecheck_op_index_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in double osg::Quat::operator[](int i) const function, expected prototype:\ndouble osg::Quat::operator[](int i) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);

		osg::Quat* self=(Luna< osg::Quat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double osg::Quat::operator[](int) const. Got : '%s'\n%s",typeid(Luna< osg::Quat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->operator[](i);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::Quat::operator[]
	static int _bind_op_index(lua_State *L) {
		if (_lg_typecheck_op_index_overload_1(L)) return _bind_op_index_overload_1(L);
		if (_lg_typecheck_op_index_overload_2(L)) return _bind_op_index_overload_2(L);

		luaL_error(L, "error in function operator[], cannot match any of the overloads for function operator[]:\n  operator[](int)\n  operator[](int)\n");
		return 0;
	}

	// const osg::Quat osg::Quat::operator*(double rhs) const
	static int _bind___mul_overload_1(lua_State *L) {
		if (!_lg_typecheck___mul_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Quat osg::Quat::operator*(double rhs) const function, expected prototype:\nconst osg::Quat osg::Quat::operator*(double rhs) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double rhs=(double)lua_tonumber(L,2);

		osg::Quat* self=(Luna< osg::Quat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Quat osg::Quat::operator*(double) const. Got : '%s'\n%s",typeid(Luna< osg::Quat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Quat stack_lret = self->operator*(rhs);
		const osg::Quat* lret = new const osg::Quat(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Quat >::push(L,lret,true);

		return 1;
	}

	// const osg::Quat osg::Quat::operator*(const osg::Quat & rhs) const
	static int _bind___mul_overload_2(lua_State *L) {
		if (!_lg_typecheck___mul_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Quat osg::Quat::operator*(const osg::Quat & rhs) const function, expected prototype:\nconst osg::Quat osg::Quat::operator*(const osg::Quat & rhs) const\nClass arguments details:\narg 1 ID = 80263306\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Quat* rhs_ptr=(Luna< osg::Quat >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Quat::operator* function");
		}
		const osg::Quat & rhs=*rhs_ptr;

		osg::Quat* self=(Luna< osg::Quat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Quat osg::Quat::operator*(const osg::Quat &) const. Got : '%s'\n%s",typeid(Luna< osg::Quat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Quat stack_lret = self->operator*(rhs);
		const osg::Quat* lret = new const osg::Quat(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Quat >::push(L,lret,true);

		return 1;
	}

	// osg::Vec3f osg::Quat::operator*(const osg::Vec3f & v) const
	static int _bind___mul_overload_3(lua_State *L) {
		if (!_lg_typecheck___mul_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3f osg::Quat::operator*(const osg::Vec3f & v) const function, expected prototype:\nosg::Vec3f osg::Quat::operator*(const osg::Vec3f & v) const\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* v_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osg::Quat::operator* function");
		}
		const osg::Vec3f & v=*v_ptr;

		osg::Quat* self=(Luna< osg::Quat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3f osg::Quat::operator*(const osg::Vec3f &) const. Got : '%s'\n%s",typeid(Luna< osg::Quat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec3f stack_lret = self->operator*(v);
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// osg::Vec3d osg::Quat::operator*(const osg::Vec3d & v) const
	static int _bind___mul_overload_4(lua_State *L) {
		if (!_lg_typecheck___mul_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3d osg::Quat::operator*(const osg::Vec3d & v) const function, expected prototype:\nosg::Vec3d osg::Quat::operator*(const osg::Vec3d & v) const\nClass arguments details:\narg 1 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3d* v_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osg::Quat::operator* function");
		}
		const osg::Vec3d & v=*v_ptr;

		osg::Quat* self=(Luna< osg::Quat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3d osg::Quat::operator*(const osg::Vec3d &) const. Got : '%s'\n%s",typeid(Luna< osg::Quat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec3d stack_lret = self->operator*(v);
		osg::Vec3d* lret = new osg::Vec3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3d >::push(L,lret,true);

		return 1;
	}

	// Overload binder for osg::Quat::operator*
	static int _bind___mul(lua_State *L) {
		if (_lg_typecheck___mul_overload_1(L)) return _bind___mul_overload_1(L);
		if (_lg_typecheck___mul_overload_2(L)) return _bind___mul_overload_2(L);
		if (_lg_typecheck___mul_overload_3(L)) return _bind___mul_overload_3(L);
		if (_lg_typecheck___mul_overload_4(L)) return _bind___mul_overload_4(L);

		luaL_error(L, "error in function operator*, cannot match any of the overloads for function operator*:\n  operator*(double)\n  operator*(const osg::Quat &)\n  operator*(const osg::Vec3f &)\n  operator*(const osg::Vec3d &)\n");
		return 0;
	}

	// osg::Quat & osg::Quat::operator*=(double rhs)
	static int _bind_op_mult_overload_1(lua_State *L) {
		if (!_lg_typecheck_op_mult_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Quat & osg::Quat::operator*=(double rhs) function, expected prototype:\nosg::Quat & osg::Quat::operator*=(double rhs)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double rhs=(double)lua_tonumber(L,2);

		osg::Quat* self=(Luna< osg::Quat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Quat & osg::Quat::operator*=(double). Got : '%s'\n%s",typeid(Luna< osg::Quat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Quat* lret = &self->operator*=(rhs);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Quat >::push(L,lret,false);

		return 1;
	}

	// osg::Quat & osg::Quat::operator*=(const osg::Quat & rhs)
	static int _bind_op_mult_overload_2(lua_State *L) {
		if (!_lg_typecheck_op_mult_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Quat & osg::Quat::operator*=(const osg::Quat & rhs) function, expected prototype:\nosg::Quat & osg::Quat::operator*=(const osg::Quat & rhs)\nClass arguments details:\narg 1 ID = 80263306\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Quat* rhs_ptr=(Luna< osg::Quat >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Quat::operator*= function");
		}
		const osg::Quat & rhs=*rhs_ptr;

		osg::Quat* self=(Luna< osg::Quat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Quat & osg::Quat::operator*=(const osg::Quat &). Got : '%s'\n%s",typeid(Luna< osg::Quat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Quat* lret = &self->operator*=(rhs);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Quat >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Quat::operator*=
	static int _bind_op_mult(lua_State *L) {
		if (_lg_typecheck_op_mult_overload_1(L)) return _bind_op_mult_overload_1(L);
		if (_lg_typecheck_op_mult_overload_2(L)) return _bind_op_mult_overload_2(L);

		luaL_error(L, "error in function operator*=, cannot match any of the overloads for function operator*=:\n  operator*=(double)\n  operator*=(const osg::Quat &)\n");
		return 0;
	}

	// osg::Quat osg::Quat::operator/(double rhs) const
	static int _bind___div_overload_1(lua_State *L) {
		if (!_lg_typecheck___div_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Quat osg::Quat::operator/(double rhs) const function, expected prototype:\nosg::Quat osg::Quat::operator/(double rhs) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double rhs=(double)lua_tonumber(L,2);

		osg::Quat* self=(Luna< osg::Quat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Quat osg::Quat::operator/(double) const. Got : '%s'\n%s",typeid(Luna< osg::Quat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Quat stack_lret = self->operator/(rhs);
		osg::Quat* lret = new osg::Quat(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Quat >::push(L,lret,true);

		return 1;
	}

	// const osg::Quat osg::Quat::operator/(const osg::Quat & denom) const
	static int _bind___div_overload_2(lua_State *L) {
		if (!_lg_typecheck___div_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Quat osg::Quat::operator/(const osg::Quat & denom) const function, expected prototype:\nconst osg::Quat osg::Quat::operator/(const osg::Quat & denom) const\nClass arguments details:\narg 1 ID = 80263306\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Quat* denom_ptr=(Luna< osg::Quat >::check(L,2));
		if( !denom_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg denom in osg::Quat::operator/ function");
		}
		const osg::Quat & denom=*denom_ptr;

		osg::Quat* self=(Luna< osg::Quat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Quat osg::Quat::operator/(const osg::Quat &) const. Got : '%s'\n%s",typeid(Luna< osg::Quat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Quat stack_lret = self->operator/(denom);
		const osg::Quat* lret = new const osg::Quat(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Quat >::push(L,lret,true);

		return 1;
	}

	// Overload binder for osg::Quat::operator/
	static int _bind___div(lua_State *L) {
		if (_lg_typecheck___div_overload_1(L)) return _bind___div_overload_1(L);
		if (_lg_typecheck___div_overload_2(L)) return _bind___div_overload_2(L);

		luaL_error(L, "error in function operator/, cannot match any of the overloads for function operator/:\n  operator/(double)\n  operator/(const osg::Quat &)\n");
		return 0;
	}

	// osg::Quat & osg::Quat::operator/=(double rhs)
	static int _bind_op_div_overload_1(lua_State *L) {
		if (!_lg_typecheck_op_div_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Quat & osg::Quat::operator/=(double rhs) function, expected prototype:\nosg::Quat & osg::Quat::operator/=(double rhs)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double rhs=(double)lua_tonumber(L,2);

		osg::Quat* self=(Luna< osg::Quat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Quat & osg::Quat::operator/=(double). Got : '%s'\n%s",typeid(Luna< osg::Quat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Quat* lret = &self->operator/=(rhs);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Quat >::push(L,lret,false);

		return 1;
	}

	// osg::Quat & osg::Quat::operator/=(const osg::Quat & denom)
	static int _bind_op_div_overload_2(lua_State *L) {
		if (!_lg_typecheck_op_div_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Quat & osg::Quat::operator/=(const osg::Quat & denom) function, expected prototype:\nosg::Quat & osg::Quat::operator/=(const osg::Quat & denom)\nClass arguments details:\narg 1 ID = 80263306\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Quat* denom_ptr=(Luna< osg::Quat >::check(L,2));
		if( !denom_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg denom in osg::Quat::operator/= function");
		}
		const osg::Quat & denom=*denom_ptr;

		osg::Quat* self=(Luna< osg::Quat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Quat & osg::Quat::operator/=(const osg::Quat &). Got : '%s'\n%s",typeid(Luna< osg::Quat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Quat* lret = &self->operator/=(denom);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Quat >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Quat::operator/=
	static int _bind_op_div(lua_State *L) {
		if (_lg_typecheck_op_div_overload_1(L)) return _bind_op_div_overload_1(L);
		if (_lg_typecheck_op_div_overload_2(L)) return _bind_op_div_overload_2(L);

		luaL_error(L, "error in function operator/=, cannot match any of the overloads for function operator/=:\n  operator/=(double)\n  operator/=(const osg::Quat &)\n");
		return 0;
	}

	// const osg::Quat osg::Quat::operator+(const osg::Quat & rhs) const
	static int _bind___add(lua_State *L) {
		if (!_lg_typecheck___add(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Quat osg::Quat::operator+(const osg::Quat & rhs) const function, expected prototype:\nconst osg::Quat osg::Quat::operator+(const osg::Quat & rhs) const\nClass arguments details:\narg 1 ID = 80263306\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Quat* rhs_ptr=(Luna< osg::Quat >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Quat::operator+ function");
		}
		const osg::Quat & rhs=*rhs_ptr;

		osg::Quat* self=(Luna< osg::Quat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Quat osg::Quat::operator+(const osg::Quat &) const. Got : '%s'\n%s",typeid(Luna< osg::Quat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Quat stack_lret = self->operator+(rhs);
		const osg::Quat* lret = new const osg::Quat(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Quat >::push(L,lret,true);

		return 1;
	}

	// osg::Quat & osg::Quat::operator+=(const osg::Quat & rhs)
	static int _bind_op_add(lua_State *L) {
		if (!_lg_typecheck_op_add(L)) {
			luaL_error(L, "luna typecheck failed in osg::Quat & osg::Quat::operator+=(const osg::Quat & rhs) function, expected prototype:\nosg::Quat & osg::Quat::operator+=(const osg::Quat & rhs)\nClass arguments details:\narg 1 ID = 80263306\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Quat* rhs_ptr=(Luna< osg::Quat >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Quat::operator+= function");
		}
		const osg::Quat & rhs=*rhs_ptr;

		osg::Quat* self=(Luna< osg::Quat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Quat & osg::Quat::operator+=(const osg::Quat &). Got : '%s'\n%s",typeid(Luna< osg::Quat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Quat* lret = &self->operator+=(rhs);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Quat >::push(L,lret,false);

		return 1;
	}

	// const osg::Quat osg::Quat::operator-(const osg::Quat & rhs) const
	static int _bind___sub(lua_State *L) {
		if (!_lg_typecheck___sub(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Quat osg::Quat::operator-(const osg::Quat & rhs) const function, expected prototype:\nconst osg::Quat osg::Quat::operator-(const osg::Quat & rhs) const\nClass arguments details:\narg 1 ID = 80263306\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Quat* rhs_ptr=(Luna< osg::Quat >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Quat::operator- function");
		}
		const osg::Quat & rhs=*rhs_ptr;

		osg::Quat* self=(Luna< osg::Quat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Quat osg::Quat::operator-(const osg::Quat &) const. Got : '%s'\n%s",typeid(Luna< osg::Quat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Quat stack_lret = self->operator-(rhs);
		const osg::Quat* lret = new const osg::Quat(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Quat >::push(L,lret,true);

		return 1;
	}

	// osg::Quat & osg::Quat::operator-=(const osg::Quat & rhs)
	static int _bind_op_sub(lua_State *L) {
		if (!_lg_typecheck_op_sub(L)) {
			luaL_error(L, "luna typecheck failed in osg::Quat & osg::Quat::operator-=(const osg::Quat & rhs) function, expected prototype:\nosg::Quat & osg::Quat::operator-=(const osg::Quat & rhs)\nClass arguments details:\narg 1 ID = 80263306\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Quat* rhs_ptr=(Luna< osg::Quat >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Quat::operator-= function");
		}
		const osg::Quat & rhs=*rhs_ptr;

		osg::Quat* self=(Luna< osg::Quat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Quat & osg::Quat::operator-=(const osg::Quat &). Got : '%s'\n%s",typeid(Luna< osg::Quat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Quat* lret = &self->operator-=(rhs);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Quat >::push(L,lret,false);

		return 1;
	}

	// const osg::Quat osg::Quat::operator-() const
	static int _bind___unm(lua_State *L) {
		if (!_lg_typecheck___unm(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Quat osg::Quat::operator-() const function, expected prototype:\nconst osg::Quat osg::Quat::operator-() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Quat* self=(Luna< osg::Quat >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Quat osg::Quat::operator-() const. Got : '%s'\n%s",typeid(Luna< osg::Quat >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Quat stack_lret = self->operator-();
		const osg::Quat* lret = new const osg::Quat(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Quat >::push(L,lret,true);

		return 1;
	}


};

osg::Quat* LunaTraits< osg::Quat >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Quat::_bind_ctor(L);
}

void LunaTraits< osg::Quat >::_bind_dtor(osg::Quat* obj) {
	delete obj;
}

const char LunaTraits< osg::Quat >::className[] = "Quat";
const char LunaTraits< osg::Quat >::fullName[] = "osg::Quat";
const char LunaTraits< osg::Quat >::moduleName[] = "osg";
const char* LunaTraits< osg::Quat >::parents[] = {0};
const int LunaTraits< osg::Quat >::hash = 80263306;
const int LunaTraits< osg::Quat >::uniqueIDs[] = {80263306,0};

luna_RegType LunaTraits< osg::Quat >::methods[] = {
	{"asVec4", &luna_wrapper_osg_Quat::_bind_asVec4},
	{"asVec3", &luna_wrapper_osg_Quat::_bind_asVec3},
	{"set", &luna_wrapper_osg_Quat::_bind_set},
	{"get", &luna_wrapper_osg_Quat::_bind_get},
	{"x", &luna_wrapper_osg_Quat::_bind_x},
	{"y", &luna_wrapper_osg_Quat::_bind_y},
	{"z", &luna_wrapper_osg_Quat::_bind_z},
	{"w", &luna_wrapper_osg_Quat::_bind_w},
	{"zeroRotation", &luna_wrapper_osg_Quat::_bind_zeroRotation},
	{"length", &luna_wrapper_osg_Quat::_bind_length},
	{"length2", &luna_wrapper_osg_Quat::_bind_length2},
	{"conj", &luna_wrapper_osg_Quat::_bind_conj},
	{"inverse", &luna_wrapper_osg_Quat::_bind_inverse},
	{"makeRotate", &luna_wrapper_osg_Quat::_bind_makeRotate},
	{"makeRotate_original", &luna_wrapper_osg_Quat::_bind_makeRotate_original},
	{"getRotate", &luna_wrapper_osg_Quat::_bind_getRotate},
	{"slerp", &luna_wrapper_osg_Quat::_bind_slerp},
	{"op_assign", &luna_wrapper_osg_Quat::_bind_op_assign},
	{"__eq", &luna_wrapper_osg_Quat::_bind___eq},
	{"op_neq", &luna_wrapper_osg_Quat::_bind_op_neq},
	{"__lt", &luna_wrapper_osg_Quat::_bind___lt},
	{"op_index", &luna_wrapper_osg_Quat::_bind_op_index},
	{"__mul", &luna_wrapper_osg_Quat::_bind___mul},
	{"op_mult", &luna_wrapper_osg_Quat::_bind_op_mult},
	{"__div", &luna_wrapper_osg_Quat::_bind___div},
	{"op_div", &luna_wrapper_osg_Quat::_bind_op_div},
	{"__add", &luna_wrapper_osg_Quat::_bind___add},
	{"op_add", &luna_wrapper_osg_Quat::_bind_op_add},
	{"__sub", &luna_wrapper_osg_Quat::_bind___sub},
	{"op_sub", &luna_wrapper_osg_Quat::_bind_op_sub},
	{"__unm", &luna_wrapper_osg_Quat::_bind___unm},
	{"dynCast", &luna_wrapper_osg_Quat::_bind_dynCast},
	{"fromVoid", &luna_wrapper_osg_Quat::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_Quat::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Quat >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Quat >::enumValues[] = {
	{0,0}
};



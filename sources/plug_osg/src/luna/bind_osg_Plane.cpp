#include <plug_common.h>

class luna_wrapper_osg_Plane {
public:
	typedef Luna< osg::Plane > luna_t;

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::Plane* self= (osg::Plane*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::Plane >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,86970521) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osg::Plane >::check(L,1));
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

		osg::Plane* self=(Luna< osg::Plane >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::Plane");
		
		return luna_dynamicCast(L,converters,"osg::Plane",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,86970521) ) return false;
		if( (!(Luna< osg::Plane >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,1)!=LUA_TNUMBER ) return false;
		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92303235) ) return false;
		if( (!(Luna< osg::Vec4f >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92303233) ) return false;
		if( (!(Luna< osg::Vec4d >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,1))) ) return false;
		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_7(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_8(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,2))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_set_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,86970521) ) return false;
		if( (!(Luna< osg::Plane >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_overload_2(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303235) ) return false;
		if( (!(Luna< osg::Vec4f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303233) ) return false;
		if( (!(Luna< osg::Vec4d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_overload_5(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,2))) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_overload_6(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,4))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_overload_7(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_flip(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_makeUnitLength(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_calculateUpperLowerBBCorners(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_ptr_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ptr_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_asVec4(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNormal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_distance_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_distance_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_dotProductNormal_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_dotProductNormal_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_intersect_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,30220088) ) return false;
		if( (!(Luna< std::vector< osg::Vec3f > >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_intersect_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,30218166) ) return false;
		if( (!(Luna< std::vector< osg::Vec3d > >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_intersect_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,65870735) ) return false;
		if( (!(Luna< osg::BoundingSphereImpl< osg::Vec3d > >::checkSubType< osg::BoundingSphered >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_intersect_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,41227270) ) return false;
		if( (!(Luna< osg::BoundingBoxImpl< osg::Vec3d > >::checkSubType< osg::BoundingBoxd >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_transform(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_transformProvidingInverse(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 6 valid operators)
	inline static bool _lg_typecheck_op_assign(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,86970521) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,86970521) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_neq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,86970521) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___lt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,86970521) ) return false;
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


	// Constructor binds:
	// osg::Plane::Plane()
	static osg::Plane* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Plane::Plane() function, expected prototype:\nosg::Plane::Plane()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::Plane();
	}

	// osg::Plane::Plane(const osg::Plane & pl)
	static osg::Plane* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Plane::Plane(const osg::Plane & pl) function, expected prototype:\nosg::Plane::Plane(const osg::Plane & pl)\nClass arguments details:\narg 1 ID = 86970521\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Plane* pl_ptr=(Luna< osg::Plane >::check(L,1));
		if( !pl_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pl in osg::Plane::Plane function");
		}
		const osg::Plane & pl=*pl_ptr;

		return new osg::Plane(pl);
	}

	// osg::Plane::Plane(double a, double b, double c, double d)
	static osg::Plane* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::Plane::Plane(double a, double b, double c, double d) function, expected prototype:\nosg::Plane::Plane(double a, double b, double c, double d)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double a=(double)lua_tonumber(L,1);
		double b=(double)lua_tonumber(L,2);
		double c=(double)lua_tonumber(L,3);
		double d=(double)lua_tonumber(L,4);

		return new osg::Plane(a, b, c, d);
	}

	// osg::Plane::Plane(const osg::Vec4f & vec)
	static osg::Plane* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::Plane::Plane(const osg::Vec4f & vec) function, expected prototype:\nosg::Plane::Plane(const osg::Vec4f & vec)\nClass arguments details:\narg 1 ID = 92303235\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec4f* vec_ptr=(Luna< osg::Vec4f >::check(L,1));
		if( !vec_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vec in osg::Plane::Plane function");
		}
		const osg::Vec4f & vec=*vec_ptr;

		return new osg::Plane(vec);
	}

	// osg::Plane::Plane(const osg::Vec4d & vec)
	static osg::Plane* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in osg::Plane::Plane(const osg::Vec4d & vec) function, expected prototype:\nosg::Plane::Plane(const osg::Vec4d & vec)\nClass arguments details:\narg 1 ID = 92303233\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec4d* vec_ptr=(Luna< osg::Vec4d >::check(L,1));
		if( !vec_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vec in osg::Plane::Plane function");
		}
		const osg::Vec4d & vec=*vec_ptr;

		return new osg::Plane(vec);
	}

	// osg::Plane::Plane(const osg::Vec3d & norm, double d)
	static osg::Plane* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in osg::Plane::Plane(const osg::Vec3d & norm, double d) function, expected prototype:\nosg::Plane::Plane(const osg::Vec3d & norm, double d)\nClass arguments details:\narg 1 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3d* norm_ptr=(Luna< osg::Vec3d >::check(L,1));
		if( !norm_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg norm in osg::Plane::Plane function");
		}
		const osg::Vec3d & norm=*norm_ptr;
		double d=(double)lua_tonumber(L,2);

		return new osg::Plane(norm, d);
	}

	// osg::Plane::Plane(const osg::Vec3d & v1, const osg::Vec3d & v2, const osg::Vec3d & v3)
	static osg::Plane* _bind_ctor_overload_7(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_7(L)) {
			luaL_error(L, "luna typecheck failed in osg::Plane::Plane(const osg::Vec3d & v1, const osg::Vec3d & v2, const osg::Vec3d & v3) function, expected prototype:\nosg::Plane::Plane(const osg::Vec3d & v1, const osg::Vec3d & v2, const osg::Vec3d & v3)\nClass arguments details:\narg 1 ID = 92303202\narg 2 ID = 92303202\narg 3 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3d* v1_ptr=(Luna< osg::Vec3d >::check(L,1));
		if( !v1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v1 in osg::Plane::Plane function");
		}
		const osg::Vec3d & v1=*v1_ptr;
		const osg::Vec3d* v2_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !v2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v2 in osg::Plane::Plane function");
		}
		const osg::Vec3d & v2=*v2_ptr;
		const osg::Vec3d* v3_ptr=(Luna< osg::Vec3d >::check(L,3));
		if( !v3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v3 in osg::Plane::Plane function");
		}
		const osg::Vec3d & v3=*v3_ptr;

		return new osg::Plane(v1, v2, v3);
	}

	// osg::Plane::Plane(const osg::Vec3d & norm, const osg::Vec3d & point)
	static osg::Plane* _bind_ctor_overload_8(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_8(L)) {
			luaL_error(L, "luna typecheck failed in osg::Plane::Plane(const osg::Vec3d & norm, const osg::Vec3d & point) function, expected prototype:\nosg::Plane::Plane(const osg::Vec3d & norm, const osg::Vec3d & point)\nClass arguments details:\narg 1 ID = 92303202\narg 2 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3d* norm_ptr=(Luna< osg::Vec3d >::check(L,1));
		if( !norm_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg norm in osg::Plane::Plane function");
		}
		const osg::Vec3d & norm=*norm_ptr;
		const osg::Vec3d* point_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in osg::Plane::Plane function");
		}
		const osg::Vec3d & point=*point_ptr;

		return new osg::Plane(norm, point);
	}

	// Overload binder for osg::Plane::Plane
	static osg::Plane* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);
		if (_lg_typecheck_ctor_overload_7(L)) return _bind_ctor_overload_7(L);
		if (_lg_typecheck_ctor_overload_8(L)) return _bind_ctor_overload_8(L);

		luaL_error(L, "error in function Plane, cannot match any of the overloads for function Plane:\n  Plane()\n  Plane(const osg::Plane &)\n  Plane(double, double, double, double)\n  Plane(const osg::Vec4f &)\n  Plane(const osg::Vec4d &)\n  Plane(const osg::Vec3d &, double)\n  Plane(const osg::Vec3d &, const osg::Vec3d &, const osg::Vec3d &)\n  Plane(const osg::Vec3d &, const osg::Vec3d &)\n");
		return NULL;
	}


	// Function binds:
	// void osg::Plane::set(const osg::Plane & pl)
	static int _bind_set_overload_1(lua_State *L) {
		if (!_lg_typecheck_set_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Plane::set(const osg::Plane & pl) function, expected prototype:\nvoid osg::Plane::set(const osg::Plane & pl)\nClass arguments details:\narg 1 ID = 86970521\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Plane* pl_ptr=(Luna< osg::Plane >::check(L,2));
		if( !pl_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pl in osg::Plane::set function");
		}
		const osg::Plane & pl=*pl_ptr;

		osg::Plane* self=(Luna< osg::Plane >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Plane::set(const osg::Plane &). Got : '%s'\n%s",typeid(Luna< osg::Plane >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set(pl);

		return 0;
	}

	// void osg::Plane::set(double a, double b, double c, double d)
	static int _bind_set_overload_2(lua_State *L) {
		if (!_lg_typecheck_set_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Plane::set(double a, double b, double c, double d) function, expected prototype:\nvoid osg::Plane::set(double a, double b, double c, double d)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double a=(double)lua_tonumber(L,2);
		double b=(double)lua_tonumber(L,3);
		double c=(double)lua_tonumber(L,4);
		double d=(double)lua_tonumber(L,5);

		osg::Plane* self=(Luna< osg::Plane >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Plane::set(double, double, double, double). Got : '%s'\n%s",typeid(Luna< osg::Plane >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set(a, b, c, d);

		return 0;
	}

	// void osg::Plane::set(const osg::Vec4f & vec)
	static int _bind_set_overload_3(lua_State *L) {
		if (!_lg_typecheck_set_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Plane::set(const osg::Vec4f & vec) function, expected prototype:\nvoid osg::Plane::set(const osg::Vec4f & vec)\nClass arguments details:\narg 1 ID = 92303235\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec4f* vec_ptr=(Luna< osg::Vec4f >::check(L,2));
		if( !vec_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vec in osg::Plane::set function");
		}
		const osg::Vec4f & vec=*vec_ptr;

		osg::Plane* self=(Luna< osg::Plane >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Plane::set(const osg::Vec4f &). Got : '%s'\n%s",typeid(Luna< osg::Plane >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set(vec);

		return 0;
	}

	// void osg::Plane::set(const osg::Vec4d & vec)
	static int _bind_set_overload_4(lua_State *L) {
		if (!_lg_typecheck_set_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Plane::set(const osg::Vec4d & vec) function, expected prototype:\nvoid osg::Plane::set(const osg::Vec4d & vec)\nClass arguments details:\narg 1 ID = 92303233\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec4d* vec_ptr=(Luna< osg::Vec4d >::check(L,2));
		if( !vec_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vec in osg::Plane::set function");
		}
		const osg::Vec4d & vec=*vec_ptr;

		osg::Plane* self=(Luna< osg::Plane >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Plane::set(const osg::Vec4d &). Got : '%s'\n%s",typeid(Luna< osg::Plane >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set(vec);

		return 0;
	}

	// void osg::Plane::set(const osg::Vec3d & norm, double d)
	static int _bind_set_overload_5(lua_State *L) {
		if (!_lg_typecheck_set_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Plane::set(const osg::Vec3d & norm, double d) function, expected prototype:\nvoid osg::Plane::set(const osg::Vec3d & norm, double d)\nClass arguments details:\narg 1 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3d* norm_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !norm_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg norm in osg::Plane::set function");
		}
		const osg::Vec3d & norm=*norm_ptr;
		double d=(double)lua_tonumber(L,3);

		osg::Plane* self=(Luna< osg::Plane >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Plane::set(const osg::Vec3d &, double). Got : '%s'\n%s",typeid(Luna< osg::Plane >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set(norm, d);

		return 0;
	}

	// void osg::Plane::set(const osg::Vec3d & v1, const osg::Vec3d & v2, const osg::Vec3d & v3)
	static int _bind_set_overload_6(lua_State *L) {
		if (!_lg_typecheck_set_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Plane::set(const osg::Vec3d & v1, const osg::Vec3d & v2, const osg::Vec3d & v3) function, expected prototype:\nvoid osg::Plane::set(const osg::Vec3d & v1, const osg::Vec3d & v2, const osg::Vec3d & v3)\nClass arguments details:\narg 1 ID = 92303202\narg 2 ID = 92303202\narg 3 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3d* v1_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !v1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v1 in osg::Plane::set function");
		}
		const osg::Vec3d & v1=*v1_ptr;
		const osg::Vec3d* v2_ptr=(Luna< osg::Vec3d >::check(L,3));
		if( !v2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v2 in osg::Plane::set function");
		}
		const osg::Vec3d & v2=*v2_ptr;
		const osg::Vec3d* v3_ptr=(Luna< osg::Vec3d >::check(L,4));
		if( !v3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v3 in osg::Plane::set function");
		}
		const osg::Vec3d & v3=*v3_ptr;

		osg::Plane* self=(Luna< osg::Plane >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Plane::set(const osg::Vec3d &, const osg::Vec3d &, const osg::Vec3d &). Got : '%s'\n%s",typeid(Luna< osg::Plane >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set(v1, v2, v3);

		return 0;
	}

	// void osg::Plane::set(const osg::Vec3d & norm, const osg::Vec3d & point)
	static int _bind_set_overload_7(lua_State *L) {
		if (!_lg_typecheck_set_overload_7(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Plane::set(const osg::Vec3d & norm, const osg::Vec3d & point) function, expected prototype:\nvoid osg::Plane::set(const osg::Vec3d & norm, const osg::Vec3d & point)\nClass arguments details:\narg 1 ID = 92303202\narg 2 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3d* norm_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !norm_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg norm in osg::Plane::set function");
		}
		const osg::Vec3d & norm=*norm_ptr;
		const osg::Vec3d* point_ptr=(Luna< osg::Vec3d >::check(L,3));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in osg::Plane::set function");
		}
		const osg::Vec3d & point=*point_ptr;

		osg::Plane* self=(Luna< osg::Plane >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Plane::set(const osg::Vec3d &, const osg::Vec3d &). Got : '%s'\n%s",typeid(Luna< osg::Plane >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set(norm, point);

		return 0;
	}

	// Overload binder for osg::Plane::set
	static int _bind_set(lua_State *L) {
		if (_lg_typecheck_set_overload_1(L)) return _bind_set_overload_1(L);
		if (_lg_typecheck_set_overload_2(L)) return _bind_set_overload_2(L);
		if (_lg_typecheck_set_overload_3(L)) return _bind_set_overload_3(L);
		if (_lg_typecheck_set_overload_4(L)) return _bind_set_overload_4(L);
		if (_lg_typecheck_set_overload_5(L)) return _bind_set_overload_5(L);
		if (_lg_typecheck_set_overload_6(L)) return _bind_set_overload_6(L);
		if (_lg_typecheck_set_overload_7(L)) return _bind_set_overload_7(L);

		luaL_error(L, "error in function set, cannot match any of the overloads for function set:\n  set(const osg::Plane &)\n  set(double, double, double, double)\n  set(const osg::Vec4f &)\n  set(const osg::Vec4d &)\n  set(const osg::Vec3d &, double)\n  set(const osg::Vec3d &, const osg::Vec3d &, const osg::Vec3d &)\n  set(const osg::Vec3d &, const osg::Vec3d &)\n");
		return 0;
	}

	// void osg::Plane::flip()
	static int _bind_flip(lua_State *L) {
		if (!_lg_typecheck_flip(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Plane::flip() function, expected prototype:\nvoid osg::Plane::flip()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Plane* self=(Luna< osg::Plane >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Plane::flip(). Got : '%s'\n%s",typeid(Luna< osg::Plane >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->flip();

		return 0;
	}

	// void osg::Plane::makeUnitLength()
	static int _bind_makeUnitLength(lua_State *L) {
		if (!_lg_typecheck_makeUnitLength(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Plane::makeUnitLength() function, expected prototype:\nvoid osg::Plane::makeUnitLength()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Plane* self=(Luna< osg::Plane >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Plane::makeUnitLength(). Got : '%s'\n%s",typeid(Luna< osg::Plane >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->makeUnitLength();

		return 0;
	}

	// void osg::Plane::calculateUpperLowerBBCorners()
	static int _bind_calculateUpperLowerBBCorners(lua_State *L) {
		if (!_lg_typecheck_calculateUpperLowerBBCorners(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Plane::calculateUpperLowerBBCorners() function, expected prototype:\nvoid osg::Plane::calculateUpperLowerBBCorners()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Plane* self=(Luna< osg::Plane >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Plane::calculateUpperLowerBBCorners(). Got : '%s'\n%s",typeid(Luna< osg::Plane >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->calculateUpperLowerBBCorners();

		return 0;
	}

	// bool osg::Plane::valid() const
	static int _bind_valid(lua_State *L) {
		if (!_lg_typecheck_valid(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Plane::valid() const function, expected prototype:\nbool osg::Plane::valid() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Plane* self=(Luna< osg::Plane >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Plane::valid() const. Got : '%s'\n%s",typeid(Luna< osg::Plane >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->valid();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Plane::isNaN() const
	static int _bind_isNaN(lua_State *L) {
		if (!_lg_typecheck_isNaN(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Plane::isNaN() const function, expected prototype:\nbool osg::Plane::isNaN() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Plane* self=(Luna< osg::Plane >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Plane::isNaN() const. Got : '%s'\n%s",typeid(Luna< osg::Plane >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isNaN();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// double * osg::Plane::ptr()
	static int _bind_ptr_overload_1(lua_State *L) {
		if (!_lg_typecheck_ptr_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in double * osg::Plane::ptr() function, expected prototype:\ndouble * osg::Plane::ptr()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Plane* self=(Luna< osg::Plane >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double * osg::Plane::ptr(). Got : '%s'\n%s",typeid(Luna< osg::Plane >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double * lret = self->ptr();
		lua_pushnumber(L,*lret);

		return 1;
	}

	// const double * osg::Plane::ptr() const
	static int _bind_ptr_overload_2(lua_State *L) {
		if (!_lg_typecheck_ptr_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const double * osg::Plane::ptr() const function, expected prototype:\nconst double * osg::Plane::ptr() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Plane* self=(Luna< osg::Plane >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const double * osg::Plane::ptr() const. Got : '%s'\n%s",typeid(Luna< osg::Plane >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const double * lret = self->ptr();
		lua_pushnumber(L,*lret);

		return 1;
	}

	// Overload binder for osg::Plane::ptr
	static int _bind_ptr(lua_State *L) {
		if (_lg_typecheck_ptr_overload_1(L)) return _bind_ptr_overload_1(L);
		if (_lg_typecheck_ptr_overload_2(L)) return _bind_ptr_overload_2(L);

		luaL_error(L, "error in function ptr, cannot match any of the overloads for function ptr:\n  ptr()\n  ptr()\n");
		return 0;
	}

	// osg::Vec4d osg::Plane::asVec4() const
	static int _bind_asVec4(lua_State *L) {
		if (!_lg_typecheck_asVec4(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec4d osg::Plane::asVec4() const function, expected prototype:\nosg::Vec4d osg::Plane::asVec4() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Plane* self=(Luna< osg::Plane >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec4d osg::Plane::asVec4() const. Got : '%s'\n%s",typeid(Luna< osg::Plane >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec4d stack_lret = self->asVec4();
		osg::Vec4d* lret = new osg::Vec4d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4d >::push(L,lret,true);

		return 1;
	}

	// osg::Vec3d osg::Plane::getNormal() const
	static int _bind_getNormal(lua_State *L) {
		if (!_lg_typecheck_getNormal(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3d osg::Plane::getNormal() const function, expected prototype:\nosg::Vec3d osg::Plane::getNormal() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Plane* self=(Luna< osg::Plane >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3d osg::Plane::getNormal() const. Got : '%s'\n%s",typeid(Luna< osg::Plane >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec3d stack_lret = self->getNormal();
		osg::Vec3d* lret = new osg::Vec3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3d >::push(L,lret,true);

		return 1;
	}

	// float osg::Plane::distance(const osg::Vec3f & v) const
	static int _bind_distance_overload_1(lua_State *L) {
		if (!_lg_typecheck_distance_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in float osg::Plane::distance(const osg::Vec3f & v) const function, expected prototype:\nfloat osg::Plane::distance(const osg::Vec3f & v) const\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* v_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osg::Plane::distance function");
		}
		const osg::Vec3f & v=*v_ptr;

		osg::Plane* self=(Luna< osg::Plane >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float osg::Plane::distance(const osg::Vec3f &) const. Got : '%s'\n%s",typeid(Luna< osg::Plane >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->distance(v);
		lua_pushnumber(L,lret);

		return 1;
	}

	// double osg::Plane::distance(const osg::Vec3d & v) const
	static int _bind_distance_overload_2(lua_State *L) {
		if (!_lg_typecheck_distance_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in double osg::Plane::distance(const osg::Vec3d & v) const function, expected prototype:\ndouble osg::Plane::distance(const osg::Vec3d & v) const\nClass arguments details:\narg 1 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3d* v_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osg::Plane::distance function");
		}
		const osg::Vec3d & v=*v_ptr;

		osg::Plane* self=(Luna< osg::Plane >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double osg::Plane::distance(const osg::Vec3d &) const. Got : '%s'\n%s",typeid(Luna< osg::Plane >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->distance(v);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::Plane::distance
	static int _bind_distance(lua_State *L) {
		if (_lg_typecheck_distance_overload_1(L)) return _bind_distance_overload_1(L);
		if (_lg_typecheck_distance_overload_2(L)) return _bind_distance_overload_2(L);

		luaL_error(L, "error in function distance, cannot match any of the overloads for function distance:\n  distance(const osg::Vec3f &)\n  distance(const osg::Vec3d &)\n");
		return 0;
	}

	// float osg::Plane::dotProductNormal(const osg::Vec3f & v) const
	static int _bind_dotProductNormal_overload_1(lua_State *L) {
		if (!_lg_typecheck_dotProductNormal_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in float osg::Plane::dotProductNormal(const osg::Vec3f & v) const function, expected prototype:\nfloat osg::Plane::dotProductNormal(const osg::Vec3f & v) const\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* v_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osg::Plane::dotProductNormal function");
		}
		const osg::Vec3f & v=*v_ptr;

		osg::Plane* self=(Luna< osg::Plane >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float osg::Plane::dotProductNormal(const osg::Vec3f &) const. Got : '%s'\n%s",typeid(Luna< osg::Plane >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->dotProductNormal(v);
		lua_pushnumber(L,lret);

		return 1;
	}

	// double osg::Plane::dotProductNormal(const osg::Vec3d & v) const
	static int _bind_dotProductNormal_overload_2(lua_State *L) {
		if (!_lg_typecheck_dotProductNormal_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in double osg::Plane::dotProductNormal(const osg::Vec3d & v) const function, expected prototype:\ndouble osg::Plane::dotProductNormal(const osg::Vec3d & v) const\nClass arguments details:\narg 1 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3d* v_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osg::Plane::dotProductNormal function");
		}
		const osg::Vec3d & v=*v_ptr;

		osg::Plane* self=(Luna< osg::Plane >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double osg::Plane::dotProductNormal(const osg::Vec3d &) const. Got : '%s'\n%s",typeid(Luna< osg::Plane >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->dotProductNormal(v);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::Plane::dotProductNormal
	static int _bind_dotProductNormal(lua_State *L) {
		if (_lg_typecheck_dotProductNormal_overload_1(L)) return _bind_dotProductNormal_overload_1(L);
		if (_lg_typecheck_dotProductNormal_overload_2(L)) return _bind_dotProductNormal_overload_2(L);

		luaL_error(L, "error in function dotProductNormal, cannot match any of the overloads for function dotProductNormal:\n  dotProductNormal(const osg::Vec3f &)\n  dotProductNormal(const osg::Vec3d &)\n");
		return 0;
	}

	// int osg::Plane::intersect(const std::vector< osg::Vec3f > & vertices) const
	static int _bind_intersect_overload_1(lua_State *L) {
		if (!_lg_typecheck_intersect_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in int osg::Plane::intersect(const std::vector< osg::Vec3f > & vertices) const function, expected prototype:\nint osg::Plane::intersect(const std::vector< osg::Vec3f > & vertices) const\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		const std::vector< osg::Vec3f >* vertices_ptr=(Luna< std::vector< osg::Vec3f > >::check(L,2));
		if( !vertices_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vertices in osg::Plane::intersect function");
		}
		const std::vector< osg::Vec3f > & vertices=*vertices_ptr;

		osg::Plane* self=(Luna< osg::Plane >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::Plane::intersect(const std::vector< osg::Vec3f > &) const. Got : '%s'\n%s",typeid(Luna< osg::Plane >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->intersect(vertices);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Plane::intersect(const std::vector< osg::Vec3d > & vertices) const
	static int _bind_intersect_overload_2(lua_State *L) {
		if (!_lg_typecheck_intersect_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in int osg::Plane::intersect(const std::vector< osg::Vec3d > & vertices) const function, expected prototype:\nint osg::Plane::intersect(const std::vector< osg::Vec3d > & vertices) const\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		const std::vector< osg::Vec3d >* vertices_ptr=(Luna< std::vector< osg::Vec3d > >::check(L,2));
		if( !vertices_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vertices in osg::Plane::intersect function");
		}
		const std::vector< osg::Vec3d > & vertices=*vertices_ptr;

		osg::Plane* self=(Luna< osg::Plane >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::Plane::intersect(const std::vector< osg::Vec3d > &) const. Got : '%s'\n%s",typeid(Luna< osg::Plane >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->intersect(vertices);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Plane::intersect(const osg::BoundingSphered & bs) const
	static int _bind_intersect_overload_3(lua_State *L) {
		if (!_lg_typecheck_intersect_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in int osg::Plane::intersect(const osg::BoundingSphered & bs) const function, expected prototype:\nint osg::Plane::intersect(const osg::BoundingSphered & bs) const\nClass arguments details:\narg 1 ID = 54337300\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::BoundingSphered* bs_ptr=(Luna< osg::BoundingSphereImpl< osg::Vec3d > >::checkSubType< osg::BoundingSphered >(L,2));
		if( !bs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bs in osg::Plane::intersect function");
		}
		const osg::BoundingSphered & bs=*bs_ptr;

		osg::Plane* self=(Luna< osg::Plane >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::Plane::intersect(const osg::BoundingSphered &) const. Got : '%s'\n%s",typeid(Luna< osg::Plane >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->intersect(bs);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Plane::intersect(const osg::BoundingBoxd & bb) const
	static int _bind_intersect_overload_4(lua_State *L) {
		if (!_lg_typecheck_intersect_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in int osg::Plane::intersect(const osg::BoundingBoxd & bb) const function, expected prototype:\nint osg::Plane::intersect(const osg::BoundingBoxd & bb) const\nClass arguments details:\narg 1 ID = 82744897\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::BoundingBoxd* bb_ptr=(Luna< osg::BoundingBoxImpl< osg::Vec3d > >::checkSubType< osg::BoundingBoxd >(L,2));
		if( !bb_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bb in osg::Plane::intersect function");
		}
		const osg::BoundingBoxd & bb=*bb_ptr;

		osg::Plane* self=(Luna< osg::Plane >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::Plane::intersect(const osg::BoundingBoxd &) const. Got : '%s'\n%s",typeid(Luna< osg::Plane >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->intersect(bb);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::Plane::intersect
	static int _bind_intersect(lua_State *L) {
		if (_lg_typecheck_intersect_overload_1(L)) return _bind_intersect_overload_1(L);
		if (_lg_typecheck_intersect_overload_2(L)) return _bind_intersect_overload_2(L);
		if (_lg_typecheck_intersect_overload_3(L)) return _bind_intersect_overload_3(L);
		if (_lg_typecheck_intersect_overload_4(L)) return _bind_intersect_overload_4(L);

		luaL_error(L, "error in function intersect, cannot match any of the overloads for function intersect:\n  intersect(const std::vector< osg::Vec3f > &)\n  intersect(const std::vector< osg::Vec3d > &)\n  intersect(const osg::BoundingSphered &)\n  intersect(const osg::BoundingBoxd &)\n");
		return 0;
	}

	// void osg::Plane::transform(const osg::Matrixd & matrix)
	static int _bind_transform(lua_State *L) {
		if (!_lg_typecheck_transform(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Plane::transform(const osg::Matrixd & matrix) function, expected prototype:\nvoid osg::Plane::transform(const osg::Matrixd & matrix)\nClass arguments details:\narg 1 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osg::Plane::transform function");
		}
		const osg::Matrixd & matrix=*matrix_ptr;

		osg::Plane* self=(Luna< osg::Plane >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Plane::transform(const osg::Matrixd &). Got : '%s'\n%s",typeid(Luna< osg::Plane >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->transform(matrix);

		return 0;
	}

	// void osg::Plane::transformProvidingInverse(const osg::Matrixd & matrix)
	static int _bind_transformProvidingInverse(lua_State *L) {
		if (!_lg_typecheck_transformProvidingInverse(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Plane::transformProvidingInverse(const osg::Matrixd & matrix) function, expected prototype:\nvoid osg::Plane::transformProvidingInverse(const osg::Matrixd & matrix)\nClass arguments details:\narg 1 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osg::Plane::transformProvidingInverse function");
		}
		const osg::Matrixd & matrix=*matrix_ptr;

		osg::Plane* self=(Luna< osg::Plane >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Plane::transformProvidingInverse(const osg::Matrixd &). Got : '%s'\n%s",typeid(Luna< osg::Plane >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->transformProvidingInverse(matrix);

		return 0;
	}


	// Operator binds:
	// osg::Plane & osg::Plane::operator=(const osg::Plane & pl)
	static int _bind_op_assign(lua_State *L) {
		if (!_lg_typecheck_op_assign(L)) {
			luaL_error(L, "luna typecheck failed in osg::Plane & osg::Plane::operator=(const osg::Plane & pl) function, expected prototype:\nosg::Plane & osg::Plane::operator=(const osg::Plane & pl)\nClass arguments details:\narg 1 ID = 86970521\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Plane* pl_ptr=(Luna< osg::Plane >::check(L,2));
		if( !pl_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pl in osg::Plane::operator= function");
		}
		const osg::Plane & pl=*pl_ptr;

		osg::Plane* self=(Luna< osg::Plane >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Plane & osg::Plane::operator=(const osg::Plane &). Got : '%s'\n%s",typeid(Luna< osg::Plane >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Plane* lret = &self->operator=(pl);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Plane >::push(L,lret,false);

		return 1;
	}

	// bool osg::Plane::operator==(const osg::Plane & plane) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Plane::operator==(const osg::Plane & plane) const function, expected prototype:\nbool osg::Plane::operator==(const osg::Plane & plane) const\nClass arguments details:\narg 1 ID = 86970521\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Plane* plane_ptr=(Luna< osg::Plane >::check(L,2));
		if( !plane_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg plane in osg::Plane::operator== function");
		}
		const osg::Plane & plane=*plane_ptr;

		osg::Plane* self=(Luna< osg::Plane >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Plane::operator==(const osg::Plane &) const. Got : '%s'\n%s",typeid(Luna< osg::Plane >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator==(plane);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Plane::operator!=(const osg::Plane & plane) const
	static int _bind_op_neq(lua_State *L) {
		if (!_lg_typecheck_op_neq(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Plane::operator!=(const osg::Plane & plane) const function, expected prototype:\nbool osg::Plane::operator!=(const osg::Plane & plane) const\nClass arguments details:\narg 1 ID = 86970521\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Plane* plane_ptr=(Luna< osg::Plane >::check(L,2));
		if( !plane_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg plane in osg::Plane::operator!= function");
		}
		const osg::Plane & plane=*plane_ptr;

		osg::Plane* self=(Luna< osg::Plane >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Plane::operator!=(const osg::Plane &) const. Got : '%s'\n%s",typeid(Luna< osg::Plane >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator!=(plane);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Plane::operator<(const osg::Plane & plane) const
	static int _bind___lt(lua_State *L) {
		if (!_lg_typecheck___lt(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Plane::operator<(const osg::Plane & plane) const function, expected prototype:\nbool osg::Plane::operator<(const osg::Plane & plane) const\nClass arguments details:\narg 1 ID = 86970521\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Plane* plane_ptr=(Luna< osg::Plane >::check(L,2));
		if( !plane_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg plane in osg::Plane::operator< function");
		}
		const osg::Plane & plane=*plane_ptr;

		osg::Plane* self=(Luna< osg::Plane >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Plane::operator<(const osg::Plane &) const. Got : '%s'\n%s",typeid(Luna< osg::Plane >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator<(plane);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// double & osg::Plane::operator[](unsigned int i)
	static int _bind_op_index_overload_1(lua_State *L) {
		if (!_lg_typecheck_op_index_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in double & osg::Plane::operator[](unsigned int i) function, expected prototype:\ndouble & osg::Plane::operator[](unsigned int i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osg::Plane* self=(Luna< osg::Plane >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double & osg::Plane::operator[](unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Plane >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double & lret = self->operator[](i);
		lua_pushnumber(L,lret);

		return 1;
	}

	// double osg::Plane::operator[](unsigned int i) const
	static int _bind_op_index_overload_2(lua_State *L) {
		if (!_lg_typecheck_op_index_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in double osg::Plane::operator[](unsigned int i) const function, expected prototype:\ndouble osg::Plane::operator[](unsigned int i) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osg::Plane* self=(Luna< osg::Plane >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double osg::Plane::operator[](unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Plane >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->operator[](i);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::Plane::operator[]
	static int _bind_op_index(lua_State *L) {
		if (_lg_typecheck_op_index_overload_1(L)) return _bind_op_index_overload_1(L);
		if (_lg_typecheck_op_index_overload_2(L)) return _bind_op_index_overload_2(L);

		luaL_error(L, "error in function operator[], cannot match any of the overloads for function operator[]:\n  operator[](unsigned int)\n  operator[](unsigned int)\n");
		return 0;
	}


};

osg::Plane* LunaTraits< osg::Plane >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Plane::_bind_ctor(L);
}

void LunaTraits< osg::Plane >::_bind_dtor(osg::Plane* obj) {
	delete obj;
}

const char LunaTraits< osg::Plane >::className[] = "Plane";
const char LunaTraits< osg::Plane >::fullName[] = "osg::Plane";
const char LunaTraits< osg::Plane >::moduleName[] = "osg";
const char* LunaTraits< osg::Plane >::parents[] = {0};
const int LunaTraits< osg::Plane >::hash = 86970521;
const int LunaTraits< osg::Plane >::uniqueIDs[] = {86970521,0};

luna_RegType LunaTraits< osg::Plane >::methods[] = {
	{"set", &luna_wrapper_osg_Plane::_bind_set},
	{"flip", &luna_wrapper_osg_Plane::_bind_flip},
	{"makeUnitLength", &luna_wrapper_osg_Plane::_bind_makeUnitLength},
	{"calculateUpperLowerBBCorners", &luna_wrapper_osg_Plane::_bind_calculateUpperLowerBBCorners},
	{"valid", &luna_wrapper_osg_Plane::_bind_valid},
	{"isNaN", &luna_wrapper_osg_Plane::_bind_isNaN},
	{"ptr", &luna_wrapper_osg_Plane::_bind_ptr},
	{"asVec4", &luna_wrapper_osg_Plane::_bind_asVec4},
	{"getNormal", &luna_wrapper_osg_Plane::_bind_getNormal},
	{"distance", &luna_wrapper_osg_Plane::_bind_distance},
	{"dotProductNormal", &luna_wrapper_osg_Plane::_bind_dotProductNormal},
	{"intersect", &luna_wrapper_osg_Plane::_bind_intersect},
	{"transform", &luna_wrapper_osg_Plane::_bind_transform},
	{"transformProvidingInverse", &luna_wrapper_osg_Plane::_bind_transformProvidingInverse},
	{"op_assign", &luna_wrapper_osg_Plane::_bind_op_assign},
	{"__eq", &luna_wrapper_osg_Plane::_bind___eq},
	{"op_neq", &luna_wrapper_osg_Plane::_bind_op_neq},
	{"__lt", &luna_wrapper_osg_Plane::_bind___lt},
	{"op_index", &luna_wrapper_osg_Plane::_bind_op_index},
	{"dynCast", &luna_wrapper_osg_Plane::_bind_dynCast},
	{"fromVoid", &luna_wrapper_osg_Plane::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_Plane::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Plane >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Plane >::enumValues[] = {
	{"num_components", osg::Plane::num_components},
	{0,0}
};



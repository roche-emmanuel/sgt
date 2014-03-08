#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_CullingSet.h>

class luna_wrapper_osg_CullingSet {
public:
	typedef Luna< osg::CullingSet > luna_t;

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

		osg::CullingSet* self= (osg::CullingSet*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::CullingSet >::push(L,self,false);
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
		//osg::CullingSet* ptr= dynamic_cast< osg::CullingSet* >(Luna< osg::Referenced >::check(L,1));
		osg::CullingSet* ptr= luna_caster< osg::Referenced, osg::CullingSet >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::CullingSet >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::CullingSet >(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::CullingSet >(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		if( (!(Luna< osg::Matrixd >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303235) ) return false;
		if( (!(Luna< osg::Vec4f >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::CullingSet >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::CullingSet >(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,18903838) ) return false;
		if( (!(Luna< osg::Matrixd >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,92303235) ) return false;
		if( (!(Luna< osg::Vec4f >::check(L,4))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_set_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::CullingSet >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::CullingSet >(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,18903838) ) return false;
		if( (!(Luna< osg::Matrixd >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,92303235) ) return false;
		if( (!(Luna< osg::Vec4f >::check(L,4))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCullingMask(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCullingMask(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setFrustum(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,26652350) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFrustum_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFrustum_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_addStateFrustum(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,26652350) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getStateFrustumList_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,42640190) ) return false;
		if( (!(Luna< std::vector< osg::CullingSet::StateFrustumPair > >::checkSubType< osg::CullingSet::StateFrustumList >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getStateFrustumList_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_addOccluder(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,60344650) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPixelSizeVector(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303235) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPixelSizeVector_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPixelSizeVector_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setSmallFeatureCullingPixelSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSmallFeatureCullingPixelSize_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSmallFeatureCullingPixelSize_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_pixelSize_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,2))) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_pixelSize_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,65870735) ) return false;
		if( (!(Luna< osg::BoundingSphereImpl< osg::Vec3d > >::checkSubType< osg::BoundingSphered >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_clampedPixelSize_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,2))) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_clampedPixelSize_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,65870735) ) return false;
		if( (!(Luna< osg::BoundingSphereImpl< osg::Vec3d > >::checkSubType< osg::BoundingSphered >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isCulled_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,30220088) ) return false;
		if( (!(Luna< std::vector< osg::Vec3f > >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isCulled_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,41227270) ) return false;
		if( (!(Luna< osg::BoundingBoxImpl< osg::Vec3d > >::checkSubType< osg::BoundingBoxd >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isCulled_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,65870735) ) return false;
		if( (!(Luna< osg::BoundingSphereImpl< osg::Vec3d > >::checkSubType< osg::BoundingSphered >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_pushCurrentMask(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_popCurrentMask(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_resetCullingMask(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_disableAndPushOccludersCurrentMask(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,52841328) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_popOccludersCurrentMask(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,52841328) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_computePixelSizeVector(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,18903838) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck_op_assign(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}


	// Constructor binds:
	// osg::CullingSet::CullingSet()
	static osg::CullingSet* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::CullingSet::CullingSet() function, expected prototype:\nosg::CullingSet::CullingSet()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::CullingSet();
	}

	// osg::CullingSet::CullingSet(const osg::CullingSet & cs)
	static osg::CullingSet* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::CullingSet::CullingSet(const osg::CullingSet & cs) function, expected prototype:\nosg::CullingSet::CullingSet(const osg::CullingSet & cs)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CullingSet* cs_ptr=(Luna< osg::Referenced >::checkSubType< osg::CullingSet >(L,1));
		if( !cs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cs in osg::CullingSet::CullingSet function");
		}
		const osg::CullingSet & cs=*cs_ptr;

		return new osg::CullingSet(cs);
	}

	// osg::CullingSet::CullingSet(const osg::CullingSet & cs, const osg::Matrixd & matrix, const osg::Vec4f & pixelSizeVector)
	static osg::CullingSet* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::CullingSet::CullingSet(const osg::CullingSet & cs, const osg::Matrixd & matrix, const osg::Vec4f & pixelSizeVector) function, expected prototype:\nosg::CullingSet::CullingSet(const osg::CullingSet & cs, const osg::Matrixd & matrix, const osg::Vec4f & pixelSizeVector)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 18903838\narg 3 ID = 92303235\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CullingSet* cs_ptr=(Luna< osg::Referenced >::checkSubType< osg::CullingSet >(L,1));
		if( !cs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cs in osg::CullingSet::CullingSet function");
		}
		const osg::CullingSet & cs=*cs_ptr;
		const osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osg::CullingSet::CullingSet function");
		}
		const osg::Matrixd & matrix=*matrix_ptr;
		const osg::Vec4f* pixelSizeVector_ptr=(Luna< osg::Vec4f >::check(L,3));
		if( !pixelSizeVector_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pixelSizeVector in osg::CullingSet::CullingSet function");
		}
		const osg::Vec4f & pixelSizeVector=*pixelSizeVector_ptr;

		return new osg::CullingSet(cs, matrix, pixelSizeVector);
	}

	// osg::CullingSet::CullingSet(lua_Table * data)
	static osg::CullingSet* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::CullingSet::CullingSet(lua_Table * data) function, expected prototype:\nosg::CullingSet::CullingSet(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_CullingSet(L,NULL);
	}

	// osg::CullingSet::CullingSet(lua_Table * data, const osg::CullingSet & cs)
	static osg::CullingSet* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in osg::CullingSet::CullingSet(lua_Table * data, const osg::CullingSet & cs) function, expected prototype:\nosg::CullingSet::CullingSet(lua_Table * data, const osg::CullingSet & cs)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CullingSet* cs_ptr=(Luna< osg::Referenced >::checkSubType< osg::CullingSet >(L,2));
		if( !cs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cs in osg::CullingSet::CullingSet function");
		}
		const osg::CullingSet & cs=*cs_ptr;

		return new wrapper_osg_CullingSet(L,NULL, cs);
	}

	// osg::CullingSet::CullingSet(lua_Table * data, const osg::CullingSet & cs, const osg::Matrixd & matrix, const osg::Vec4f & pixelSizeVector)
	static osg::CullingSet* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in osg::CullingSet::CullingSet(lua_Table * data, const osg::CullingSet & cs, const osg::Matrixd & matrix, const osg::Vec4f & pixelSizeVector) function, expected prototype:\nosg::CullingSet::CullingSet(lua_Table * data, const osg::CullingSet & cs, const osg::Matrixd & matrix, const osg::Vec4f & pixelSizeVector)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 18903838\narg 4 ID = 92303235\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CullingSet* cs_ptr=(Luna< osg::Referenced >::checkSubType< osg::CullingSet >(L,2));
		if( !cs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cs in osg::CullingSet::CullingSet function");
		}
		const osg::CullingSet & cs=*cs_ptr;
		const osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,3));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osg::CullingSet::CullingSet function");
		}
		const osg::Matrixd & matrix=*matrix_ptr;
		const osg::Vec4f* pixelSizeVector_ptr=(Luna< osg::Vec4f >::check(L,4));
		if( !pixelSizeVector_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pixelSizeVector in osg::CullingSet::CullingSet function");
		}
		const osg::Vec4f & pixelSizeVector=*pixelSizeVector_ptr;

		return new wrapper_osg_CullingSet(L,NULL, cs, matrix, pixelSizeVector);
	}

	// Overload binder for osg::CullingSet::CullingSet
	static osg::CullingSet* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);

		luaL_error(L, "error in function CullingSet, cannot match any of the overloads for function CullingSet:\n  CullingSet()\n  CullingSet(const osg::CullingSet &)\n  CullingSet(const osg::CullingSet &, const osg::Matrixd &, const osg::Vec4f &)\n  CullingSet(lua_Table *)\n  CullingSet(lua_Table *, const osg::CullingSet &)\n  CullingSet(lua_Table *, const osg::CullingSet &, const osg::Matrixd &, const osg::Vec4f &)\n");
		return NULL;
	}


	// Function binds:
	// void osg::CullingSet::set(const osg::CullingSet & cs)
	static int _bind_set_overload_1(lua_State *L) {
		if (!_lg_typecheck_set_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CullingSet::set(const osg::CullingSet & cs) function, expected prototype:\nvoid osg::CullingSet::set(const osg::CullingSet & cs)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CullingSet* cs_ptr=(Luna< osg::Referenced >::checkSubType< osg::CullingSet >(L,2));
		if( !cs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cs in osg::CullingSet::set function");
		}
		const osg::CullingSet & cs=*cs_ptr;

		osg::CullingSet* self=Luna< osg::Referenced >::checkSubType< osg::CullingSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CullingSet::set(const osg::CullingSet &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set(cs);

		return 0;
	}

	// void osg::CullingSet::set(const osg::CullingSet & cs, const osg::Matrixd & matrix, const osg::Vec4f & pixelSizeVector)
	static int _bind_set_overload_2(lua_State *L) {
		if (!_lg_typecheck_set_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CullingSet::set(const osg::CullingSet & cs, const osg::Matrixd & matrix, const osg::Vec4f & pixelSizeVector) function, expected prototype:\nvoid osg::CullingSet::set(const osg::CullingSet & cs, const osg::Matrixd & matrix, const osg::Vec4f & pixelSizeVector)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 18903838\narg 3 ID = 92303235\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CullingSet* cs_ptr=(Luna< osg::Referenced >::checkSubType< osg::CullingSet >(L,2));
		if( !cs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cs in osg::CullingSet::set function");
		}
		const osg::CullingSet & cs=*cs_ptr;
		const osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,3));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osg::CullingSet::set function");
		}
		const osg::Matrixd & matrix=*matrix_ptr;
		const osg::Vec4f* pixelSizeVector_ptr=(Luna< osg::Vec4f >::check(L,4));
		if( !pixelSizeVector_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pixelSizeVector in osg::CullingSet::set function");
		}
		const osg::Vec4f & pixelSizeVector=*pixelSizeVector_ptr;

		osg::CullingSet* self=Luna< osg::Referenced >::checkSubType< osg::CullingSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CullingSet::set(const osg::CullingSet &, const osg::Matrixd &, const osg::Vec4f &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set(cs, matrix, pixelSizeVector);

		return 0;
	}

	// Overload binder for osg::CullingSet::set
	static int _bind_set(lua_State *L) {
		if (_lg_typecheck_set_overload_1(L)) return _bind_set_overload_1(L);
		if (_lg_typecheck_set_overload_2(L)) return _bind_set_overload_2(L);

		luaL_error(L, "error in function set, cannot match any of the overloads for function set:\n  set(const osg::CullingSet &)\n  set(const osg::CullingSet &, const osg::Matrixd &, const osg::Vec4f &)\n");
		return 0;
	}

	// void osg::CullingSet::setCullingMask(int mask)
	static int _bind_setCullingMask(lua_State *L) {
		if (!_lg_typecheck_setCullingMask(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CullingSet::setCullingMask(int mask) function, expected prototype:\nvoid osg::CullingSet::setCullingMask(int mask)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int mask=(int)lua_tointeger(L,2);

		osg::CullingSet* self=Luna< osg::Referenced >::checkSubType< osg::CullingSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CullingSet::setCullingMask(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setCullingMask(mask);

		return 0;
	}

	// int osg::CullingSet::getCullingMask() const
	static int _bind_getCullingMask(lua_State *L) {
		if (!_lg_typecheck_getCullingMask(L)) {
			luaL_error(L, "luna typecheck failed in int osg::CullingSet::getCullingMask() const function, expected prototype:\nint osg::CullingSet::getCullingMask() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CullingSet* self=Luna< osg::Referenced >::checkSubType< osg::CullingSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::CullingSet::getCullingMask() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getCullingMask();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::CullingSet::setFrustum(osg::Polytope & cv)
	static int _bind_setFrustum(lua_State *L) {
		if (!_lg_typecheck_setFrustum(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CullingSet::setFrustum(osg::Polytope & cv) function, expected prototype:\nvoid osg::CullingSet::setFrustum(osg::Polytope & cv)\nClass arguments details:\narg 1 ID = 26652350\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Polytope* cv_ptr=(Luna< osg::Polytope >::check(L,2));
		if( !cv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cv in osg::CullingSet::setFrustum function");
		}
		osg::Polytope & cv=*cv_ptr;

		osg::CullingSet* self=Luna< osg::Referenced >::checkSubType< osg::CullingSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CullingSet::setFrustum(osg::Polytope &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setFrustum(cv);

		return 0;
	}

	// osg::Polytope & osg::CullingSet::getFrustum()
	static int _bind_getFrustum_overload_1(lua_State *L) {
		if (!_lg_typecheck_getFrustum_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Polytope & osg::CullingSet::getFrustum() function, expected prototype:\nosg::Polytope & osg::CullingSet::getFrustum()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CullingSet* self=Luna< osg::Referenced >::checkSubType< osg::CullingSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Polytope & osg::CullingSet::getFrustum(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Polytope* lret = &self->getFrustum();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Polytope >::push(L,lret,false);

		return 1;
	}

	// const osg::Polytope & osg::CullingSet::getFrustum() const
	static int _bind_getFrustum_overload_2(lua_State *L) {
		if (!_lg_typecheck_getFrustum_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Polytope & osg::CullingSet::getFrustum() const function, expected prototype:\nconst osg::Polytope & osg::CullingSet::getFrustum() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CullingSet* self=Luna< osg::Referenced >::checkSubType< osg::CullingSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Polytope & osg::CullingSet::getFrustum() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Polytope* lret = &self->getFrustum();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Polytope >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::CullingSet::getFrustum
	static int _bind_getFrustum(lua_State *L) {
		if (_lg_typecheck_getFrustum_overload_1(L)) return _bind_getFrustum_overload_1(L);
		if (_lg_typecheck_getFrustum_overload_2(L)) return _bind_getFrustum_overload_2(L);

		luaL_error(L, "error in function getFrustum, cannot match any of the overloads for function getFrustum:\n  getFrustum()\n  getFrustum()\n");
		return 0;
	}

	// void osg::CullingSet::addStateFrustum(osg::StateSet * stateset, osg::Polytope & polytope)
	static int _bind_addStateFrustum(lua_State *L) {
		if (!_lg_typecheck_addStateFrustum(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CullingSet::addStateFrustum(osg::StateSet * stateset, osg::Polytope & polytope) function, expected prototype:\nvoid osg::CullingSet::addStateFrustum(osg::StateSet * stateset, osg::Polytope & polytope)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 26652350\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StateSet* stateset=(Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,2));
		osg::Polytope* polytope_ptr=(Luna< osg::Polytope >::check(L,3));
		if( !polytope_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg polytope in osg::CullingSet::addStateFrustum function");
		}
		osg::Polytope & polytope=*polytope_ptr;

		osg::CullingSet* self=Luna< osg::Referenced >::checkSubType< osg::CullingSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CullingSet::addStateFrustum(osg::StateSet *, osg::Polytope &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addStateFrustum(stateset, polytope);

		return 0;
	}

	// void osg::CullingSet::getStateFrustumList(osg::CullingSet::StateFrustumList & sfl)
	static int _bind_getStateFrustumList_overload_1(lua_State *L) {
		if (!_lg_typecheck_getStateFrustumList_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CullingSet::getStateFrustumList(osg::CullingSet::StateFrustumList & sfl) function, expected prototype:\nvoid osg::CullingSet::getStateFrustumList(osg::CullingSet::StateFrustumList & sfl)\nClass arguments details:\narg 1 ID = 87204151\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::CullingSet::StateFrustumList* sfl_ptr=(Luna< std::vector< osg::CullingSet::StateFrustumPair > >::checkSubType< osg::CullingSet::StateFrustumList >(L,2));
		if( !sfl_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sfl in osg::CullingSet::getStateFrustumList function");
		}
		osg::CullingSet::StateFrustumList & sfl=*sfl_ptr;

		osg::CullingSet* self=Luna< osg::Referenced >::checkSubType< osg::CullingSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CullingSet::getStateFrustumList(osg::CullingSet::StateFrustumList &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getStateFrustumList(sfl);

		return 0;
	}

	// osg::CullingSet::StateFrustumList & osg::CullingSet::getStateFrustumList()
	static int _bind_getStateFrustumList_overload_2(lua_State *L) {
		if (!_lg_typecheck_getStateFrustumList_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::CullingSet::StateFrustumList & osg::CullingSet::getStateFrustumList() function, expected prototype:\nosg::CullingSet::StateFrustumList & osg::CullingSet::getStateFrustumList()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CullingSet* self=Luna< osg::Referenced >::checkSubType< osg::CullingSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::CullingSet::StateFrustumList & osg::CullingSet::getStateFrustumList(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::CullingSet::StateFrustumList* lret = &self->getStateFrustumList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::CullingSet::StateFrustumList >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::CullingSet::getStateFrustumList
	static int _bind_getStateFrustumList(lua_State *L) {
		if (_lg_typecheck_getStateFrustumList_overload_1(L)) return _bind_getStateFrustumList_overload_1(L);
		if (_lg_typecheck_getStateFrustumList_overload_2(L)) return _bind_getStateFrustumList_overload_2(L);

		luaL_error(L, "error in function getStateFrustumList, cannot match any of the overloads for function getStateFrustumList:\n  getStateFrustumList(osg::CullingSet::StateFrustumList &)\n  getStateFrustumList()\n");
		return 0;
	}

	// void osg::CullingSet::addOccluder(osg::ShadowVolumeOccluder & cv)
	static int _bind_addOccluder(lua_State *L) {
		if (!_lg_typecheck_addOccluder(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CullingSet::addOccluder(osg::ShadowVolumeOccluder & cv) function, expected prototype:\nvoid osg::CullingSet::addOccluder(osg::ShadowVolumeOccluder & cv)\nClass arguments details:\narg 1 ID = 60344650\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ShadowVolumeOccluder* cv_ptr=(Luna< osg::ShadowVolumeOccluder >::check(L,2));
		if( !cv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cv in osg::CullingSet::addOccluder function");
		}
		osg::ShadowVolumeOccluder & cv=*cv_ptr;

		osg::CullingSet* self=Luna< osg::Referenced >::checkSubType< osg::CullingSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CullingSet::addOccluder(osg::ShadowVolumeOccluder &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addOccluder(cv);

		return 0;
	}

	// void osg::CullingSet::setPixelSizeVector(const osg::Vec4f & v)
	static int _bind_setPixelSizeVector(lua_State *L) {
		if (!_lg_typecheck_setPixelSizeVector(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CullingSet::setPixelSizeVector(const osg::Vec4f & v) function, expected prototype:\nvoid osg::CullingSet::setPixelSizeVector(const osg::Vec4f & v)\nClass arguments details:\narg 1 ID = 92303235\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec4f* v_ptr=(Luna< osg::Vec4f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osg::CullingSet::setPixelSizeVector function");
		}
		const osg::Vec4f & v=*v_ptr;

		osg::CullingSet* self=Luna< osg::Referenced >::checkSubType< osg::CullingSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CullingSet::setPixelSizeVector(const osg::Vec4f &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setPixelSizeVector(v);

		return 0;
	}

	// osg::Vec4f & osg::CullingSet::getPixelSizeVector()
	static int _bind_getPixelSizeVector_overload_1(lua_State *L) {
		if (!_lg_typecheck_getPixelSizeVector_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec4f & osg::CullingSet::getPixelSizeVector() function, expected prototype:\nosg::Vec4f & osg::CullingSet::getPixelSizeVector()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CullingSet* self=Luna< osg::Referenced >::checkSubType< osg::CullingSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec4f & osg::CullingSet::getPixelSizeVector(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec4f* lret = &self->getPixelSizeVector();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4f >::push(L,lret,false);

		return 1;
	}

	// const osg::Vec4f & osg::CullingSet::getPixelSizeVector() const
	static int _bind_getPixelSizeVector_overload_2(lua_State *L) {
		if (!_lg_typecheck_getPixelSizeVector_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec4f & osg::CullingSet::getPixelSizeVector() const function, expected prototype:\nconst osg::Vec4f & osg::CullingSet::getPixelSizeVector() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CullingSet* self=Luna< osg::Referenced >::checkSubType< osg::CullingSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec4f & osg::CullingSet::getPixelSizeVector() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec4f* lret = &self->getPixelSizeVector();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4f >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::CullingSet::getPixelSizeVector
	static int _bind_getPixelSizeVector(lua_State *L) {
		if (_lg_typecheck_getPixelSizeVector_overload_1(L)) return _bind_getPixelSizeVector_overload_1(L);
		if (_lg_typecheck_getPixelSizeVector_overload_2(L)) return _bind_getPixelSizeVector_overload_2(L);

		luaL_error(L, "error in function getPixelSizeVector, cannot match any of the overloads for function getPixelSizeVector:\n  getPixelSizeVector()\n  getPixelSizeVector()\n");
		return 0;
	}

	// void osg::CullingSet::setSmallFeatureCullingPixelSize(float value)
	static int _bind_setSmallFeatureCullingPixelSize(lua_State *L) {
		if (!_lg_typecheck_setSmallFeatureCullingPixelSize(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CullingSet::setSmallFeatureCullingPixelSize(float value) function, expected prototype:\nvoid osg::CullingSet::setSmallFeatureCullingPixelSize(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		osg::CullingSet* self=Luna< osg::Referenced >::checkSubType< osg::CullingSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CullingSet::setSmallFeatureCullingPixelSize(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setSmallFeatureCullingPixelSize(value);

		return 0;
	}

	// float & osg::CullingSet::getSmallFeatureCullingPixelSize()
	static int _bind_getSmallFeatureCullingPixelSize_overload_1(lua_State *L) {
		if (!_lg_typecheck_getSmallFeatureCullingPixelSize_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in float & osg::CullingSet::getSmallFeatureCullingPixelSize() function, expected prototype:\nfloat & osg::CullingSet::getSmallFeatureCullingPixelSize()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CullingSet* self=Luna< osg::Referenced >::checkSubType< osg::CullingSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float & osg::CullingSet::getSmallFeatureCullingPixelSize(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float & lret = self->getSmallFeatureCullingPixelSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osg::CullingSet::getSmallFeatureCullingPixelSize() const
	static int _bind_getSmallFeatureCullingPixelSize_overload_2(lua_State *L) {
		if (!_lg_typecheck_getSmallFeatureCullingPixelSize_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in float osg::CullingSet::getSmallFeatureCullingPixelSize() const function, expected prototype:\nfloat osg::CullingSet::getSmallFeatureCullingPixelSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CullingSet* self=Luna< osg::Referenced >::checkSubType< osg::CullingSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osg::CullingSet::getSmallFeatureCullingPixelSize() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getSmallFeatureCullingPixelSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::CullingSet::getSmallFeatureCullingPixelSize
	static int _bind_getSmallFeatureCullingPixelSize(lua_State *L) {
		if (_lg_typecheck_getSmallFeatureCullingPixelSize_overload_1(L)) return _bind_getSmallFeatureCullingPixelSize_overload_1(L);
		if (_lg_typecheck_getSmallFeatureCullingPixelSize_overload_2(L)) return _bind_getSmallFeatureCullingPixelSize_overload_2(L);

		luaL_error(L, "error in function getSmallFeatureCullingPixelSize, cannot match any of the overloads for function getSmallFeatureCullingPixelSize:\n  getSmallFeatureCullingPixelSize()\n  getSmallFeatureCullingPixelSize()\n");
		return 0;
	}

	// float osg::CullingSet::pixelSize(const osg::Vec3f & v, float radius) const
	static int _bind_pixelSize_overload_1(lua_State *L) {
		if (!_lg_typecheck_pixelSize_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in float osg::CullingSet::pixelSize(const osg::Vec3f & v, float radius) const function, expected prototype:\nfloat osg::CullingSet::pixelSize(const osg::Vec3f & v, float radius) const\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* v_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osg::CullingSet::pixelSize function");
		}
		const osg::Vec3f & v=*v_ptr;
		float radius=(float)lua_tonumber(L,3);

		osg::CullingSet* self=Luna< osg::Referenced >::checkSubType< osg::CullingSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osg::CullingSet::pixelSize(const osg::Vec3f &, float) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->pixelSize(v, radius);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osg::CullingSet::pixelSize(const osg::BoundingSphered & bs) const
	static int _bind_pixelSize_overload_2(lua_State *L) {
		if (!_lg_typecheck_pixelSize_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in float osg::CullingSet::pixelSize(const osg::BoundingSphered & bs) const function, expected prototype:\nfloat osg::CullingSet::pixelSize(const osg::BoundingSphered & bs) const\nClass arguments details:\narg 1 ID = 54337300\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::BoundingSphered* bs_ptr=(Luna< osg::BoundingSphereImpl< osg::Vec3d > >::checkSubType< osg::BoundingSphered >(L,2));
		if( !bs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bs in osg::CullingSet::pixelSize function");
		}
		const osg::BoundingSphered & bs=*bs_ptr;

		osg::CullingSet* self=Luna< osg::Referenced >::checkSubType< osg::CullingSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osg::CullingSet::pixelSize(const osg::BoundingSphered &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->pixelSize(bs);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::CullingSet::pixelSize
	static int _bind_pixelSize(lua_State *L) {
		if (_lg_typecheck_pixelSize_overload_1(L)) return _bind_pixelSize_overload_1(L);
		if (_lg_typecheck_pixelSize_overload_2(L)) return _bind_pixelSize_overload_2(L);

		luaL_error(L, "error in function pixelSize, cannot match any of the overloads for function pixelSize:\n  pixelSize(const osg::Vec3f &, float)\n  pixelSize(const osg::BoundingSphered &)\n");
		return 0;
	}

	// float osg::CullingSet::clampedPixelSize(const osg::Vec3f & v, float radius) const
	static int _bind_clampedPixelSize_overload_1(lua_State *L) {
		if (!_lg_typecheck_clampedPixelSize_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in float osg::CullingSet::clampedPixelSize(const osg::Vec3f & v, float radius) const function, expected prototype:\nfloat osg::CullingSet::clampedPixelSize(const osg::Vec3f & v, float radius) const\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* v_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osg::CullingSet::clampedPixelSize function");
		}
		const osg::Vec3f & v=*v_ptr;
		float radius=(float)lua_tonumber(L,3);

		osg::CullingSet* self=Luna< osg::Referenced >::checkSubType< osg::CullingSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osg::CullingSet::clampedPixelSize(const osg::Vec3f &, float) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->clampedPixelSize(v, radius);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osg::CullingSet::clampedPixelSize(const osg::BoundingSphered & bs) const
	static int _bind_clampedPixelSize_overload_2(lua_State *L) {
		if (!_lg_typecheck_clampedPixelSize_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in float osg::CullingSet::clampedPixelSize(const osg::BoundingSphered & bs) const function, expected prototype:\nfloat osg::CullingSet::clampedPixelSize(const osg::BoundingSphered & bs) const\nClass arguments details:\narg 1 ID = 54337300\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::BoundingSphered* bs_ptr=(Luna< osg::BoundingSphereImpl< osg::Vec3d > >::checkSubType< osg::BoundingSphered >(L,2));
		if( !bs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bs in osg::CullingSet::clampedPixelSize function");
		}
		const osg::BoundingSphered & bs=*bs_ptr;

		osg::CullingSet* self=Luna< osg::Referenced >::checkSubType< osg::CullingSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osg::CullingSet::clampedPixelSize(const osg::BoundingSphered &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->clampedPixelSize(bs);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::CullingSet::clampedPixelSize
	static int _bind_clampedPixelSize(lua_State *L) {
		if (_lg_typecheck_clampedPixelSize_overload_1(L)) return _bind_clampedPixelSize_overload_1(L);
		if (_lg_typecheck_clampedPixelSize_overload_2(L)) return _bind_clampedPixelSize_overload_2(L);

		luaL_error(L, "error in function clampedPixelSize, cannot match any of the overloads for function clampedPixelSize:\n  clampedPixelSize(const osg::Vec3f &, float)\n  clampedPixelSize(const osg::BoundingSphered &)\n");
		return 0;
	}

	// bool osg::CullingSet::isCulled(const std::vector< osg::Vec3f > & vertices)
	static int _bind_isCulled_overload_1(lua_State *L) {
		if (!_lg_typecheck_isCulled_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::CullingSet::isCulled(const std::vector< osg::Vec3f > & vertices) function, expected prototype:\nbool osg::CullingSet::isCulled(const std::vector< osg::Vec3f > & vertices)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		const std::vector< osg::Vec3f >* vertices_ptr=(Luna< std::vector< osg::Vec3f > >::check(L,2));
		if( !vertices_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vertices in osg::CullingSet::isCulled function");
		}
		const std::vector< osg::Vec3f > & vertices=*vertices_ptr;

		osg::CullingSet* self=Luna< osg::Referenced >::checkSubType< osg::CullingSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::CullingSet::isCulled(const std::vector< osg::Vec3f > &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isCulled(vertices);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::CullingSet::isCulled(const osg::BoundingBoxd & bb)
	static int _bind_isCulled_overload_2(lua_State *L) {
		if (!_lg_typecheck_isCulled_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::CullingSet::isCulled(const osg::BoundingBoxd & bb) function, expected prototype:\nbool osg::CullingSet::isCulled(const osg::BoundingBoxd & bb)\nClass arguments details:\narg 1 ID = 82744897\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::BoundingBoxd* bb_ptr=(Luna< osg::BoundingBoxImpl< osg::Vec3d > >::checkSubType< osg::BoundingBoxd >(L,2));
		if( !bb_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bb in osg::CullingSet::isCulled function");
		}
		const osg::BoundingBoxd & bb=*bb_ptr;

		osg::CullingSet* self=Luna< osg::Referenced >::checkSubType< osg::CullingSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::CullingSet::isCulled(const osg::BoundingBoxd &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isCulled(bb);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::CullingSet::isCulled(const osg::BoundingSphered & bs)
	static int _bind_isCulled_overload_3(lua_State *L) {
		if (!_lg_typecheck_isCulled_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::CullingSet::isCulled(const osg::BoundingSphered & bs) function, expected prototype:\nbool osg::CullingSet::isCulled(const osg::BoundingSphered & bs)\nClass arguments details:\narg 1 ID = 54337300\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::BoundingSphered* bs_ptr=(Luna< osg::BoundingSphereImpl< osg::Vec3d > >::checkSubType< osg::BoundingSphered >(L,2));
		if( !bs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bs in osg::CullingSet::isCulled function");
		}
		const osg::BoundingSphered & bs=*bs_ptr;

		osg::CullingSet* self=Luna< osg::Referenced >::checkSubType< osg::CullingSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::CullingSet::isCulled(const osg::BoundingSphered &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isCulled(bs);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for osg::CullingSet::isCulled
	static int _bind_isCulled(lua_State *L) {
		if (_lg_typecheck_isCulled_overload_1(L)) return _bind_isCulled_overload_1(L);
		if (_lg_typecheck_isCulled_overload_2(L)) return _bind_isCulled_overload_2(L);
		if (_lg_typecheck_isCulled_overload_3(L)) return _bind_isCulled_overload_3(L);

		luaL_error(L, "error in function isCulled, cannot match any of the overloads for function isCulled:\n  isCulled(const std::vector< osg::Vec3f > &)\n  isCulled(const osg::BoundingBoxd &)\n  isCulled(const osg::BoundingSphered &)\n");
		return 0;
	}

	// void osg::CullingSet::pushCurrentMask()
	static int _bind_pushCurrentMask(lua_State *L) {
		if (!_lg_typecheck_pushCurrentMask(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CullingSet::pushCurrentMask() function, expected prototype:\nvoid osg::CullingSet::pushCurrentMask()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CullingSet* self=Luna< osg::Referenced >::checkSubType< osg::CullingSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CullingSet::pushCurrentMask(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->pushCurrentMask();

		return 0;
	}

	// void osg::CullingSet::popCurrentMask()
	static int _bind_popCurrentMask(lua_State *L) {
		if (!_lg_typecheck_popCurrentMask(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CullingSet::popCurrentMask() function, expected prototype:\nvoid osg::CullingSet::popCurrentMask()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CullingSet* self=Luna< osg::Referenced >::checkSubType< osg::CullingSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CullingSet::popCurrentMask(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->popCurrentMask();

		return 0;
	}

	// void osg::CullingSet::resetCullingMask()
	static int _bind_resetCullingMask(lua_State *L) {
		if (!_lg_typecheck_resetCullingMask(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CullingSet::resetCullingMask() function, expected prototype:\nvoid osg::CullingSet::resetCullingMask()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::CullingSet* self=Luna< osg::Referenced >::checkSubType< osg::CullingSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CullingSet::resetCullingMask(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->resetCullingMask();

		return 0;
	}

	// void osg::CullingSet::disableAndPushOccludersCurrentMask(osg::NodePath & nodePath)
	static int _bind_disableAndPushOccludersCurrentMask(lua_State *L) {
		if (!_lg_typecheck_disableAndPushOccludersCurrentMask(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CullingSet::disableAndPushOccludersCurrentMask(osg::NodePath & nodePath) function, expected prototype:\nvoid osg::CullingSet::disableAndPushOccludersCurrentMask(osg::NodePath & nodePath)\nClass arguments details:\narg 1 ID = 52841328\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodePath* nodePath_ptr=(Luna< osg::NodePath >::check(L,2));
		if( !nodePath_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nodePath in osg::CullingSet::disableAndPushOccludersCurrentMask function");
		}
		osg::NodePath & nodePath=*nodePath_ptr;

		osg::CullingSet* self=Luna< osg::Referenced >::checkSubType< osg::CullingSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CullingSet::disableAndPushOccludersCurrentMask(osg::NodePath &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->disableAndPushOccludersCurrentMask(nodePath);

		return 0;
	}

	// void osg::CullingSet::popOccludersCurrentMask(osg::NodePath & nodePath)
	static int _bind_popOccludersCurrentMask(lua_State *L) {
		if (!_lg_typecheck_popOccludersCurrentMask(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CullingSet::popOccludersCurrentMask(osg::NodePath & nodePath) function, expected prototype:\nvoid osg::CullingSet::popOccludersCurrentMask(osg::NodePath & nodePath)\nClass arguments details:\narg 1 ID = 52841328\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodePath* nodePath_ptr=(Luna< osg::NodePath >::check(L,2));
		if( !nodePath_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nodePath in osg::CullingSet::popOccludersCurrentMask function");
		}
		osg::NodePath & nodePath=*nodePath_ptr;

		osg::CullingSet* self=Luna< osg::Referenced >::checkSubType< osg::CullingSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CullingSet::popOccludersCurrentMask(osg::NodePath &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->popOccludersCurrentMask(nodePath);

		return 0;
	}

	// static osg::Vec4f osg::CullingSet::computePixelSizeVector(const osg::Viewport & W, const osg::Matrixd & P, const osg::Matrixd & M)
	static int _bind_computePixelSizeVector(lua_State *L) {
		if (!_lg_typecheck_computePixelSizeVector(L)) {
			luaL_error(L, "luna typecheck failed in static osg::Vec4f osg::CullingSet::computePixelSizeVector(const osg::Viewport & W, const osg::Matrixd & P, const osg::Matrixd & M) function, expected prototype:\nstatic osg::Vec4f osg::CullingSet::computePixelSizeVector(const osg::Viewport & W, const osg::Matrixd & P, const osg::Matrixd & M)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 18903838\narg 3 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Viewport* W_ptr=(Luna< osg::Referenced >::checkSubType< osg::Viewport >(L,1));
		if( !W_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg W in osg::CullingSet::computePixelSizeVector function");
		}
		const osg::Viewport & W=*W_ptr;
		const osg::Matrixd* P_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !P_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg P in osg::CullingSet::computePixelSizeVector function");
		}
		const osg::Matrixd & P=*P_ptr;
		const osg::Matrixd* M_ptr=(Luna< osg::Matrixd >::check(L,3));
		if( !M_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg M in osg::CullingSet::computePixelSizeVector function");
		}
		const osg::Matrixd & M=*M_ptr;

		osg::Vec4f stack_lret = osg::CullingSet::computePixelSizeVector(W, P, M);
		osg::Vec4f* lret = new osg::Vec4f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4f >::push(L,lret,true);

		return 1;
	}

	// void osg::CullingSet::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::CullingSet::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::CullingSet::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::CullingSet* self=Luna< osg::Referenced >::checkSubType< osg::CullingSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::CullingSet::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->CullingSet::setThreadSafeRefUnref(threadSafe);

		return 0;
	}


	// Operator binds:
	// osg::CullingSet & osg::CullingSet::operator=(const osg::CullingSet & cs)
	static int _bind_op_assign(lua_State *L) {
		if (!_lg_typecheck_op_assign(L)) {
			luaL_error(L, "luna typecheck failed in osg::CullingSet & osg::CullingSet::operator=(const osg::CullingSet & cs) function, expected prototype:\nosg::CullingSet & osg::CullingSet::operator=(const osg::CullingSet & cs)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CullingSet* cs_ptr=(Luna< osg::Referenced >::checkSubType< osg::CullingSet >(L,2));
		if( !cs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cs in osg::CullingSet::operator= function");
		}
		const osg::CullingSet & cs=*cs_ptr;

		osg::CullingSet* self=Luna< osg::Referenced >::checkSubType< osg::CullingSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::CullingSet & osg::CullingSet::operator=(const osg::CullingSet &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::CullingSet* lret = &self->operator=(cs);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::CullingSet >::push(L,lret,false);

		return 1;
	}


};

osg::CullingSet* LunaTraits< osg::CullingSet >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_CullingSet::_bind_ctor(L);
}

void LunaTraits< osg::CullingSet >::_bind_dtor(osg::CullingSet* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::CullingSet >::className[] = "CullingSet";
const char LunaTraits< osg::CullingSet >::fullName[] = "osg::CullingSet";
const char LunaTraits< osg::CullingSet >::moduleName[] = "osg";
const char* LunaTraits< osg::CullingSet >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osg::CullingSet >::hash = 55248307;
const int LunaTraits< osg::CullingSet >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::CullingSet >::methods[] = {
	{"set", &luna_wrapper_osg_CullingSet::_bind_set},
	{"setCullingMask", &luna_wrapper_osg_CullingSet::_bind_setCullingMask},
	{"getCullingMask", &luna_wrapper_osg_CullingSet::_bind_getCullingMask},
	{"setFrustum", &luna_wrapper_osg_CullingSet::_bind_setFrustum},
	{"getFrustum", &luna_wrapper_osg_CullingSet::_bind_getFrustum},
	{"addStateFrustum", &luna_wrapper_osg_CullingSet::_bind_addStateFrustum},
	{"getStateFrustumList", &luna_wrapper_osg_CullingSet::_bind_getStateFrustumList},
	{"addOccluder", &luna_wrapper_osg_CullingSet::_bind_addOccluder},
	{"setPixelSizeVector", &luna_wrapper_osg_CullingSet::_bind_setPixelSizeVector},
	{"getPixelSizeVector", &luna_wrapper_osg_CullingSet::_bind_getPixelSizeVector},
	{"setSmallFeatureCullingPixelSize", &luna_wrapper_osg_CullingSet::_bind_setSmallFeatureCullingPixelSize},
	{"getSmallFeatureCullingPixelSize", &luna_wrapper_osg_CullingSet::_bind_getSmallFeatureCullingPixelSize},
	{"pixelSize", &luna_wrapper_osg_CullingSet::_bind_pixelSize},
	{"clampedPixelSize", &luna_wrapper_osg_CullingSet::_bind_clampedPixelSize},
	{"isCulled", &luna_wrapper_osg_CullingSet::_bind_isCulled},
	{"pushCurrentMask", &luna_wrapper_osg_CullingSet::_bind_pushCurrentMask},
	{"popCurrentMask", &luna_wrapper_osg_CullingSet::_bind_popCurrentMask},
	{"resetCullingMask", &luna_wrapper_osg_CullingSet::_bind_resetCullingMask},
	{"disableAndPushOccludersCurrentMask", &luna_wrapper_osg_CullingSet::_bind_disableAndPushOccludersCurrentMask},
	{"popOccludersCurrentMask", &luna_wrapper_osg_CullingSet::_bind_popOccludersCurrentMask},
	{"computePixelSizeVector", &luna_wrapper_osg_CullingSet::_bind_computePixelSizeVector},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_CullingSet::_bind_base_setThreadSafeRefUnref},
	{"op_assign", &luna_wrapper_osg_CullingSet::_bind_op_assign},
	{"fromVoid", &luna_wrapper_osg_CullingSet::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_CullingSet::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_CullingSet::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::CullingSet >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_CullingSet::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::CullingSet >::enumValues[] = {
	{"NO_CULLING", osg::CullingSet::NO_CULLING},
	{"VIEW_FRUSTUM_SIDES_CULLING", osg::CullingSet::VIEW_FRUSTUM_SIDES_CULLING},
	{"NEAR_PLANE_CULLING", osg::CullingSet::NEAR_PLANE_CULLING},
	{"FAR_PLANE_CULLING", osg::CullingSet::FAR_PLANE_CULLING},
	{"VIEW_FRUSTUM_CULLING", osg::CullingSet::VIEW_FRUSTUM_CULLING},
	{"SMALL_FEATURE_CULLING", osg::CullingSet::SMALL_FEATURE_CULLING},
	{"SHADOW_OCCLUSION_CULLING", osg::CullingSet::SHADOW_OCCLUSION_CULLING},
	{"DEFAULT_CULLING", osg::CullingSet::DEFAULT_CULLING},
	{"ENABLE_ALL_CULLING", osg::CullingSet::ENABLE_ALL_CULLING},
	{0,0}
};



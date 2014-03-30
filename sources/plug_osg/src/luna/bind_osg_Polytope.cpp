#include <plug_common.h>

class luna_wrapper_osg_Polytope {
public:
	typedef Luna< osg::Polytope > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,26652350) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::Polytope*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::Polytope* rhs =(Luna< osg::Polytope >::check(L,2));
		osg::Polytope* self=(Luna< osg::Polytope >::check(L,1));
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

		osg::Polytope* self= (osg::Polytope*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::Polytope >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,26652350) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osg::Polytope >::check(L,1));
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

		osg::Polytope* self=(Luna< osg::Polytope >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::Polytope");
		
		return luna_dynamicCast(L,converters,"osg::Polytope",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,26652350) ) return false;
		if( (!(Luna< osg::Polytope >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,33161232) ) return false;
		if( (!(Luna< osg::Polytope::PlaneList >::check(L,1))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_clear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setToUnitFrustum(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setToBoundingBox(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,41227270) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAndTransformProvidingInverse(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,26652350) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,18903838) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,33161232) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_add(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,86970521) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_flip(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_empty(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPlaneList_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPlaneList_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setReferenceVertexList(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,30220088) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getReferenceVertexList_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getReferenceVertexList_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setupMask(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCurrentMask_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCurrentMask_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setResultMask(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getResultMask(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMaskStack_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMaskStack_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_contains_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_contains_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,30220088) ) return false;
		if( (!(Luna< std::vector< osg::Vec3f > >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_contains_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,65870735) ) return false;
		if( (!(Luna< osg::BoundingSphereImpl< osg::Vec3d > >::checkSubType< osg::BoundingSphered >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_contains_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,41227270) ) return false;
		if( (!(Luna< osg::BoundingBoxImpl< osg::Vec3d > >::checkSubType< osg::BoundingBoxd >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_containsAllOf_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,30220088) ) return false;
		if( (!(Luna< std::vector< osg::Vec3f > >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_containsAllOf_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,65870735) ) return false;
		if( (!(Luna< osg::BoundingSphereImpl< osg::Vec3d > >::checkSubType< osg::BoundingSphered >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_containsAllOf_overload_3(lua_State *L) {
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
	// (found 1 valid operators)
	inline static bool _lg_typecheck_op_assign(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,26652350) ) return false;
		return true;
	}


	// Constructor binds:
	// osg::Polytope::Polytope()
	static osg::Polytope* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Polytope::Polytope() function, expected prototype:\nosg::Polytope::Polytope()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::Polytope();
	}

	// osg::Polytope::Polytope(const osg::Polytope & cv)
	static osg::Polytope* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Polytope::Polytope(const osg::Polytope & cv) function, expected prototype:\nosg::Polytope::Polytope(const osg::Polytope & cv)\nClass arguments details:\narg 1 ID = 26652350\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Polytope* cv_ptr=(Luna< osg::Polytope >::check(L,1));
		if( !cv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cv in osg::Polytope::Polytope function");
		}
		const osg::Polytope & cv=*cv_ptr;

		return new osg::Polytope(cv);
	}

	// osg::Polytope::Polytope(const osg::Polytope::PlaneList & pl)
	static osg::Polytope* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::Polytope::Polytope(const osg::Polytope::PlaneList & pl) function, expected prototype:\nosg::Polytope::Polytope(const osg::Polytope::PlaneList & pl)\nClass arguments details:\narg 1 ID = 33161232\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Polytope::PlaneList* pl_ptr=(Luna< osg::Polytope::PlaneList >::check(L,1));
		if( !pl_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pl in osg::Polytope::Polytope function");
		}
		const osg::Polytope::PlaneList & pl=*pl_ptr;

		return new osg::Polytope(pl);
	}

	// Overload binder for osg::Polytope::Polytope
	static osg::Polytope* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function Polytope, cannot match any of the overloads for function Polytope:\n  Polytope()\n  Polytope(const osg::Polytope &)\n  Polytope(const osg::Polytope::PlaneList &)\n");
		return NULL;
	}


	// Function binds:
	// void osg::Polytope::clear()
	static int _bind_clear(lua_State *L) {
		if (!_lg_typecheck_clear(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Polytope::clear() function, expected prototype:\nvoid osg::Polytope::clear()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Polytope* self=(Luna< osg::Polytope >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Polytope::clear(). Got : '%s'\n%s",typeid(Luna< osg::Polytope >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->clear();

		return 0;
	}

	// void osg::Polytope::setToUnitFrustum(bool withNear = true, bool withFar = true)
	static int _bind_setToUnitFrustum(lua_State *L) {
		if (!_lg_typecheck_setToUnitFrustum(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Polytope::setToUnitFrustum(bool withNear = true, bool withFar = true) function, expected prototype:\nvoid osg::Polytope::setToUnitFrustum(bool withNear = true, bool withFar = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool withNear=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;
		bool withFar=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		osg::Polytope* self=(Luna< osg::Polytope >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Polytope::setToUnitFrustum(bool, bool). Got : '%s'\n%s",typeid(Luna< osg::Polytope >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setToUnitFrustum(withNear, withFar);

		return 0;
	}

	// void osg::Polytope::setToBoundingBox(const osg::BoundingBoxd & bb)
	static int _bind_setToBoundingBox(lua_State *L) {
		if (!_lg_typecheck_setToBoundingBox(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Polytope::setToBoundingBox(const osg::BoundingBoxd & bb) function, expected prototype:\nvoid osg::Polytope::setToBoundingBox(const osg::BoundingBoxd & bb)\nClass arguments details:\narg 1 ID = 82744897\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::BoundingBoxd* bb_ptr=(Luna< osg::BoundingBoxImpl< osg::Vec3d > >::checkSubType< osg::BoundingBoxd >(L,2));
		if( !bb_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bb in osg::Polytope::setToBoundingBox function");
		}
		const osg::BoundingBoxd & bb=*bb_ptr;

		osg::Polytope* self=(Luna< osg::Polytope >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Polytope::setToBoundingBox(const osg::BoundingBoxd &). Got : '%s'\n%s",typeid(Luna< osg::Polytope >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setToBoundingBox(bb);

		return 0;
	}

	// void osg::Polytope::setAndTransformProvidingInverse(const osg::Polytope & pt, const osg::Matrixd & matrix)
	static int _bind_setAndTransformProvidingInverse(lua_State *L) {
		if (!_lg_typecheck_setAndTransformProvidingInverse(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Polytope::setAndTransformProvidingInverse(const osg::Polytope & pt, const osg::Matrixd & matrix) function, expected prototype:\nvoid osg::Polytope::setAndTransformProvidingInverse(const osg::Polytope & pt, const osg::Matrixd & matrix)\nClass arguments details:\narg 1 ID = 26652350\narg 2 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Polytope* pt_ptr=(Luna< osg::Polytope >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in osg::Polytope::setAndTransformProvidingInverse function");
		}
		const osg::Polytope & pt=*pt_ptr;
		const osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,3));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osg::Polytope::setAndTransformProvidingInverse function");
		}
		const osg::Matrixd & matrix=*matrix_ptr;

		osg::Polytope* self=(Luna< osg::Polytope >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Polytope::setAndTransformProvidingInverse(const osg::Polytope &, const osg::Matrixd &). Got : '%s'\n%s",typeid(Luna< osg::Polytope >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setAndTransformProvidingInverse(pt, matrix);

		return 0;
	}

	// void osg::Polytope::set(const osg::Polytope::PlaneList & pl)
	static int _bind_set(lua_State *L) {
		if (!_lg_typecheck_set(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Polytope::set(const osg::Polytope::PlaneList & pl) function, expected prototype:\nvoid osg::Polytope::set(const osg::Polytope::PlaneList & pl)\nClass arguments details:\narg 1 ID = 33161232\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Polytope::PlaneList* pl_ptr=(Luna< osg::Polytope::PlaneList >::check(L,2));
		if( !pl_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pl in osg::Polytope::set function");
		}
		const osg::Polytope::PlaneList & pl=*pl_ptr;

		osg::Polytope* self=(Luna< osg::Polytope >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Polytope::set(const osg::Polytope::PlaneList &). Got : '%s'\n%s",typeid(Luna< osg::Polytope >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set(pl);

		return 0;
	}

	// void osg::Polytope::add(const osg::Plane & pl)
	static int _bind_add(lua_State *L) {
		if (!_lg_typecheck_add(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Polytope::add(const osg::Plane & pl) function, expected prototype:\nvoid osg::Polytope::add(const osg::Plane & pl)\nClass arguments details:\narg 1 ID = 86970521\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Plane* pl_ptr=(Luna< osg::Plane >::check(L,2));
		if( !pl_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pl in osg::Polytope::add function");
		}
		const osg::Plane & pl=*pl_ptr;

		osg::Polytope* self=(Luna< osg::Polytope >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Polytope::add(const osg::Plane &). Got : '%s'\n%s",typeid(Luna< osg::Polytope >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->add(pl);

		return 0;
	}

	// void osg::Polytope::flip()
	static int _bind_flip(lua_State *L) {
		if (!_lg_typecheck_flip(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Polytope::flip() function, expected prototype:\nvoid osg::Polytope::flip()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Polytope* self=(Luna< osg::Polytope >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Polytope::flip(). Got : '%s'\n%s",typeid(Luna< osg::Polytope >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->flip();

		return 0;
	}

	// bool osg::Polytope::empty() const
	static int _bind_empty(lua_State *L) {
		if (!_lg_typecheck_empty(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Polytope::empty() const function, expected prototype:\nbool osg::Polytope::empty() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Polytope* self=(Luna< osg::Polytope >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Polytope::empty() const. Got : '%s'\n%s",typeid(Luna< osg::Polytope >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->empty();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// osg::Polytope::PlaneList & osg::Polytope::getPlaneList()
	static int _bind_getPlaneList_overload_1(lua_State *L) {
		if (!_lg_typecheck_getPlaneList_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Polytope::PlaneList & osg::Polytope::getPlaneList() function, expected prototype:\nosg::Polytope::PlaneList & osg::Polytope::getPlaneList()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Polytope* self=(Luna< osg::Polytope >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Polytope::PlaneList & osg::Polytope::getPlaneList(). Got : '%s'\n%s",typeid(Luna< osg::Polytope >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Polytope::PlaneList* lret = &self->getPlaneList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Polytope::PlaneList >::push(L,lret,false);

		return 1;
	}

	// const osg::Polytope::PlaneList & osg::Polytope::getPlaneList() const
	static int _bind_getPlaneList_overload_2(lua_State *L) {
		if (!_lg_typecheck_getPlaneList_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Polytope::PlaneList & osg::Polytope::getPlaneList() const function, expected prototype:\nconst osg::Polytope::PlaneList & osg::Polytope::getPlaneList() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Polytope* self=(Luna< osg::Polytope >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Polytope::PlaneList & osg::Polytope::getPlaneList() const. Got : '%s'\n%s",typeid(Luna< osg::Polytope >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Polytope::PlaneList* lret = &self->getPlaneList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Polytope::PlaneList >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Polytope::getPlaneList
	static int _bind_getPlaneList(lua_State *L) {
		if (_lg_typecheck_getPlaneList_overload_1(L)) return _bind_getPlaneList_overload_1(L);
		if (_lg_typecheck_getPlaneList_overload_2(L)) return _bind_getPlaneList_overload_2(L);

		luaL_error(L, "error in function getPlaneList, cannot match any of the overloads for function getPlaneList:\n  getPlaneList()\n  getPlaneList()\n");
		return 0;
	}

	// void osg::Polytope::setReferenceVertexList(osg::Polytope::VertexList & vertices)
	static int _bind_setReferenceVertexList(lua_State *L) {
		if (!_lg_typecheck_setReferenceVertexList(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Polytope::setReferenceVertexList(osg::Polytope::VertexList & vertices) function, expected prototype:\nvoid osg::Polytope::setReferenceVertexList(osg::Polytope::VertexList & vertices)\nClass arguments details:\narg 1 ID = 71066845\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Polytope::VertexList* vertices_ptr=(Luna< std::vector< osg::Vec3f > >::checkSubType< osg::Polytope::VertexList >(L,2));
		if( !vertices_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vertices in osg::Polytope::setReferenceVertexList function");
		}
		osg::Polytope::VertexList & vertices=*vertices_ptr;

		osg::Polytope* self=(Luna< osg::Polytope >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Polytope::setReferenceVertexList(osg::Polytope::VertexList &). Got : '%s'\n%s",typeid(Luna< osg::Polytope >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setReferenceVertexList(vertices);

		return 0;
	}

	// osg::Polytope::VertexList & osg::Polytope::getReferenceVertexList()
	static int _bind_getReferenceVertexList_overload_1(lua_State *L) {
		if (!_lg_typecheck_getReferenceVertexList_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Polytope::VertexList & osg::Polytope::getReferenceVertexList() function, expected prototype:\nosg::Polytope::VertexList & osg::Polytope::getReferenceVertexList()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Polytope* self=(Luna< osg::Polytope >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Polytope::VertexList & osg::Polytope::getReferenceVertexList(). Got : '%s'\n%s",typeid(Luna< osg::Polytope >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Polytope::VertexList* lret = &self->getReferenceVertexList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Polytope::VertexList >::push(L,lret,false);

		return 1;
	}

	// const osg::Polytope::VertexList & osg::Polytope::getReferenceVertexList() const
	static int _bind_getReferenceVertexList_overload_2(lua_State *L) {
		if (!_lg_typecheck_getReferenceVertexList_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Polytope::VertexList & osg::Polytope::getReferenceVertexList() const function, expected prototype:\nconst osg::Polytope::VertexList & osg::Polytope::getReferenceVertexList() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Polytope* self=(Luna< osg::Polytope >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Polytope::VertexList & osg::Polytope::getReferenceVertexList() const. Got : '%s'\n%s",typeid(Luna< osg::Polytope >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Polytope::VertexList* lret = &self->getReferenceVertexList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Polytope::VertexList >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Polytope::getReferenceVertexList
	static int _bind_getReferenceVertexList(lua_State *L) {
		if (_lg_typecheck_getReferenceVertexList_overload_1(L)) return _bind_getReferenceVertexList_overload_1(L);
		if (_lg_typecheck_getReferenceVertexList_overload_2(L)) return _bind_getReferenceVertexList_overload_2(L);

		luaL_error(L, "error in function getReferenceVertexList, cannot match any of the overloads for function getReferenceVertexList:\n  getReferenceVertexList()\n  getReferenceVertexList()\n");
		return 0;
	}

	// void osg::Polytope::setupMask()
	static int _bind_setupMask(lua_State *L) {
		if (!_lg_typecheck_setupMask(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Polytope::setupMask() function, expected prototype:\nvoid osg::Polytope::setupMask()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Polytope* self=(Luna< osg::Polytope >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Polytope::setupMask(). Got : '%s'\n%s",typeid(Luna< osg::Polytope >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setupMask();

		return 0;
	}

	// unsigned int & osg::Polytope::getCurrentMask()
	static int _bind_getCurrentMask_overload_1(lua_State *L) {
		if (!_lg_typecheck_getCurrentMask_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int & osg::Polytope::getCurrentMask() function, expected prototype:\nunsigned int & osg::Polytope::getCurrentMask()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Polytope* self=(Luna< osg::Polytope >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int & osg::Polytope::getCurrentMask(). Got : '%s'\n%s",typeid(Luna< osg::Polytope >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int & lret = self->getCurrentMask();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::Polytope::getCurrentMask() const
	static int _bind_getCurrentMask_overload_2(lua_State *L) {
		if (!_lg_typecheck_getCurrentMask_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Polytope::getCurrentMask() const function, expected prototype:\nunsigned int osg::Polytope::getCurrentMask() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Polytope* self=(Luna< osg::Polytope >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Polytope::getCurrentMask() const. Got : '%s'\n%s",typeid(Luna< osg::Polytope >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getCurrentMask();
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::Polytope::getCurrentMask
	static int _bind_getCurrentMask(lua_State *L) {
		if (_lg_typecheck_getCurrentMask_overload_1(L)) return _bind_getCurrentMask_overload_1(L);
		if (_lg_typecheck_getCurrentMask_overload_2(L)) return _bind_getCurrentMask_overload_2(L);

		luaL_error(L, "error in function getCurrentMask, cannot match any of the overloads for function getCurrentMask:\n  getCurrentMask()\n  getCurrentMask()\n");
		return 0;
	}

	// void osg::Polytope::setResultMask(unsigned int mask)
	static int _bind_setResultMask(lua_State *L) {
		if (!_lg_typecheck_setResultMask(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Polytope::setResultMask(unsigned int mask) function, expected prototype:\nvoid osg::Polytope::setResultMask(unsigned int mask)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int mask=(unsigned int)lua_tointeger(L,2);

		osg::Polytope* self=(Luna< osg::Polytope >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Polytope::setResultMask(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Polytope >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setResultMask(mask);

		return 0;
	}

	// unsigned int osg::Polytope::getResultMask() const
	static int _bind_getResultMask(lua_State *L) {
		if (!_lg_typecheck_getResultMask(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Polytope::getResultMask() const function, expected prototype:\nunsigned int osg::Polytope::getResultMask() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Polytope* self=(Luna< osg::Polytope >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Polytope::getResultMask() const. Got : '%s'\n%s",typeid(Luna< osg::Polytope >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getResultMask();
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::Polytope::MaskStack & osg::Polytope::getMaskStack()
	static int _bind_getMaskStack_overload_1(lua_State *L) {
		if (!_lg_typecheck_getMaskStack_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Polytope::MaskStack & osg::Polytope::getMaskStack() function, expected prototype:\nosg::Polytope::MaskStack & osg::Polytope::getMaskStack()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Polytope* self=(Luna< osg::Polytope >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Polytope::MaskStack & osg::Polytope::getMaskStack(). Got : '%s'\n%s",typeid(Luna< osg::Polytope >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Polytope::MaskStack* lret = &self->getMaskStack();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Polytope::MaskStack >::push(L,lret,false);

		return 1;
	}

	// const osg::Polytope::MaskStack & osg::Polytope::getMaskStack() const
	static int _bind_getMaskStack_overload_2(lua_State *L) {
		if (!_lg_typecheck_getMaskStack_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Polytope::MaskStack & osg::Polytope::getMaskStack() const function, expected prototype:\nconst osg::Polytope::MaskStack & osg::Polytope::getMaskStack() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Polytope* self=(Luna< osg::Polytope >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Polytope::MaskStack & osg::Polytope::getMaskStack() const. Got : '%s'\n%s",typeid(Luna< osg::Polytope >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Polytope::MaskStack* lret = &self->getMaskStack();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Polytope::MaskStack >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Polytope::getMaskStack
	static int _bind_getMaskStack(lua_State *L) {
		if (_lg_typecheck_getMaskStack_overload_1(L)) return _bind_getMaskStack_overload_1(L);
		if (_lg_typecheck_getMaskStack_overload_2(L)) return _bind_getMaskStack_overload_2(L);

		luaL_error(L, "error in function getMaskStack, cannot match any of the overloads for function getMaskStack:\n  getMaskStack()\n  getMaskStack()\n");
		return 0;
	}

	// void osg::Polytope::pushCurrentMask()
	static int _bind_pushCurrentMask(lua_State *L) {
		if (!_lg_typecheck_pushCurrentMask(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Polytope::pushCurrentMask() function, expected prototype:\nvoid osg::Polytope::pushCurrentMask()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Polytope* self=(Luna< osg::Polytope >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Polytope::pushCurrentMask(). Got : '%s'\n%s",typeid(Luna< osg::Polytope >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->pushCurrentMask();

		return 0;
	}

	// void osg::Polytope::popCurrentMask()
	static int _bind_popCurrentMask(lua_State *L) {
		if (!_lg_typecheck_popCurrentMask(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Polytope::popCurrentMask() function, expected prototype:\nvoid osg::Polytope::popCurrentMask()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Polytope* self=(Luna< osg::Polytope >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Polytope::popCurrentMask(). Got : '%s'\n%s",typeid(Luna< osg::Polytope >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->popCurrentMask();

		return 0;
	}

	// bool osg::Polytope::contains(const osg::Vec3f & v) const
	static int _bind_contains_overload_1(lua_State *L) {
		if (!_lg_typecheck_contains_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Polytope::contains(const osg::Vec3f & v) const function, expected prototype:\nbool osg::Polytope::contains(const osg::Vec3f & v) const\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* v_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osg::Polytope::contains function");
		}
		const osg::Vec3f & v=*v_ptr;

		osg::Polytope* self=(Luna< osg::Polytope >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Polytope::contains(const osg::Vec3f &) const. Got : '%s'\n%s",typeid(Luna< osg::Polytope >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->contains(v);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Polytope::contains(const std::vector< osg::Vec3f > & vertices)
	static int _bind_contains_overload_2(lua_State *L) {
		if (!_lg_typecheck_contains_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Polytope::contains(const std::vector< osg::Vec3f > & vertices) function, expected prototype:\nbool osg::Polytope::contains(const std::vector< osg::Vec3f > & vertices)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		const std::vector< osg::Vec3f >* vertices_ptr=(Luna< std::vector< osg::Vec3f > >::check(L,2));
		if( !vertices_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vertices in osg::Polytope::contains function");
		}
		const std::vector< osg::Vec3f > & vertices=*vertices_ptr;

		osg::Polytope* self=(Luna< osg::Polytope >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Polytope::contains(const std::vector< osg::Vec3f > &). Got : '%s'\n%s",typeid(Luna< osg::Polytope >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->contains(vertices);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Polytope::contains(const osg::BoundingSphered & bs)
	static int _bind_contains_overload_3(lua_State *L) {
		if (!_lg_typecheck_contains_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Polytope::contains(const osg::BoundingSphered & bs) function, expected prototype:\nbool osg::Polytope::contains(const osg::BoundingSphered & bs)\nClass arguments details:\narg 1 ID = 54337300\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::BoundingSphered* bs_ptr=(Luna< osg::BoundingSphereImpl< osg::Vec3d > >::checkSubType< osg::BoundingSphered >(L,2));
		if( !bs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bs in osg::Polytope::contains function");
		}
		const osg::BoundingSphered & bs=*bs_ptr;

		osg::Polytope* self=(Luna< osg::Polytope >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Polytope::contains(const osg::BoundingSphered &). Got : '%s'\n%s",typeid(Luna< osg::Polytope >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->contains(bs);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Polytope::contains(const osg::BoundingBoxd & bb)
	static int _bind_contains_overload_4(lua_State *L) {
		if (!_lg_typecheck_contains_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Polytope::contains(const osg::BoundingBoxd & bb) function, expected prototype:\nbool osg::Polytope::contains(const osg::BoundingBoxd & bb)\nClass arguments details:\narg 1 ID = 82744897\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::BoundingBoxd* bb_ptr=(Luna< osg::BoundingBoxImpl< osg::Vec3d > >::checkSubType< osg::BoundingBoxd >(L,2));
		if( !bb_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bb in osg::Polytope::contains function");
		}
		const osg::BoundingBoxd & bb=*bb_ptr;

		osg::Polytope* self=(Luna< osg::Polytope >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Polytope::contains(const osg::BoundingBoxd &). Got : '%s'\n%s",typeid(Luna< osg::Polytope >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->contains(bb);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for osg::Polytope::contains
	static int _bind_contains(lua_State *L) {
		if (_lg_typecheck_contains_overload_1(L)) return _bind_contains_overload_1(L);
		if (_lg_typecheck_contains_overload_2(L)) return _bind_contains_overload_2(L);
		if (_lg_typecheck_contains_overload_3(L)) return _bind_contains_overload_3(L);
		if (_lg_typecheck_contains_overload_4(L)) return _bind_contains_overload_4(L);

		luaL_error(L, "error in function contains, cannot match any of the overloads for function contains:\n  contains(const osg::Vec3f &)\n  contains(const std::vector< osg::Vec3f > &)\n  contains(const osg::BoundingSphered &)\n  contains(const osg::BoundingBoxd &)\n");
		return 0;
	}

	// bool osg::Polytope::containsAllOf(const std::vector< osg::Vec3f > & vertices)
	static int _bind_containsAllOf_overload_1(lua_State *L) {
		if (!_lg_typecheck_containsAllOf_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Polytope::containsAllOf(const std::vector< osg::Vec3f > & vertices) function, expected prototype:\nbool osg::Polytope::containsAllOf(const std::vector< osg::Vec3f > & vertices)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		const std::vector< osg::Vec3f >* vertices_ptr=(Luna< std::vector< osg::Vec3f > >::check(L,2));
		if( !vertices_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vertices in osg::Polytope::containsAllOf function");
		}
		const std::vector< osg::Vec3f > & vertices=*vertices_ptr;

		osg::Polytope* self=(Luna< osg::Polytope >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Polytope::containsAllOf(const std::vector< osg::Vec3f > &). Got : '%s'\n%s",typeid(Luna< osg::Polytope >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->containsAllOf(vertices);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Polytope::containsAllOf(const osg::BoundingSphered & bs)
	static int _bind_containsAllOf_overload_2(lua_State *L) {
		if (!_lg_typecheck_containsAllOf_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Polytope::containsAllOf(const osg::BoundingSphered & bs) function, expected prototype:\nbool osg::Polytope::containsAllOf(const osg::BoundingSphered & bs)\nClass arguments details:\narg 1 ID = 54337300\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::BoundingSphered* bs_ptr=(Luna< osg::BoundingSphereImpl< osg::Vec3d > >::checkSubType< osg::BoundingSphered >(L,2));
		if( !bs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bs in osg::Polytope::containsAllOf function");
		}
		const osg::BoundingSphered & bs=*bs_ptr;

		osg::Polytope* self=(Luna< osg::Polytope >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Polytope::containsAllOf(const osg::BoundingSphered &). Got : '%s'\n%s",typeid(Luna< osg::Polytope >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->containsAllOf(bs);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Polytope::containsAllOf(const osg::BoundingBoxd & bb)
	static int _bind_containsAllOf_overload_3(lua_State *L) {
		if (!_lg_typecheck_containsAllOf_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Polytope::containsAllOf(const osg::BoundingBoxd & bb) function, expected prototype:\nbool osg::Polytope::containsAllOf(const osg::BoundingBoxd & bb)\nClass arguments details:\narg 1 ID = 82744897\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::BoundingBoxd* bb_ptr=(Luna< osg::BoundingBoxImpl< osg::Vec3d > >::checkSubType< osg::BoundingBoxd >(L,2));
		if( !bb_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bb in osg::Polytope::containsAllOf function");
		}
		const osg::BoundingBoxd & bb=*bb_ptr;

		osg::Polytope* self=(Luna< osg::Polytope >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Polytope::containsAllOf(const osg::BoundingBoxd &). Got : '%s'\n%s",typeid(Luna< osg::Polytope >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->containsAllOf(bb);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for osg::Polytope::containsAllOf
	static int _bind_containsAllOf(lua_State *L) {
		if (_lg_typecheck_containsAllOf_overload_1(L)) return _bind_containsAllOf_overload_1(L);
		if (_lg_typecheck_containsAllOf_overload_2(L)) return _bind_containsAllOf_overload_2(L);
		if (_lg_typecheck_containsAllOf_overload_3(L)) return _bind_containsAllOf_overload_3(L);

		luaL_error(L, "error in function containsAllOf, cannot match any of the overloads for function containsAllOf:\n  containsAllOf(const std::vector< osg::Vec3f > &)\n  containsAllOf(const osg::BoundingSphered &)\n  containsAllOf(const osg::BoundingBoxd &)\n");
		return 0;
	}

	// void osg::Polytope::transform(const osg::Matrixd & matrix)
	static int _bind_transform(lua_State *L) {
		if (!_lg_typecheck_transform(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Polytope::transform(const osg::Matrixd & matrix) function, expected prototype:\nvoid osg::Polytope::transform(const osg::Matrixd & matrix)\nClass arguments details:\narg 1 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osg::Polytope::transform function");
		}
		const osg::Matrixd & matrix=*matrix_ptr;

		osg::Polytope* self=(Luna< osg::Polytope >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Polytope::transform(const osg::Matrixd &). Got : '%s'\n%s",typeid(Luna< osg::Polytope >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->transform(matrix);

		return 0;
	}

	// void osg::Polytope::transformProvidingInverse(const osg::Matrixd & matrix)
	static int _bind_transformProvidingInverse(lua_State *L) {
		if (!_lg_typecheck_transformProvidingInverse(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Polytope::transformProvidingInverse(const osg::Matrixd & matrix) function, expected prototype:\nvoid osg::Polytope::transformProvidingInverse(const osg::Matrixd & matrix)\nClass arguments details:\narg 1 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osg::Polytope::transformProvidingInverse function");
		}
		const osg::Matrixd & matrix=*matrix_ptr;

		osg::Polytope* self=(Luna< osg::Polytope >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Polytope::transformProvidingInverse(const osg::Matrixd &). Got : '%s'\n%s",typeid(Luna< osg::Polytope >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->transformProvidingInverse(matrix);

		return 0;
	}


	// Operator binds:
	// osg::Polytope & osg::Polytope::operator=(const osg::Polytope & cv)
	static int _bind_op_assign(lua_State *L) {
		if (!_lg_typecheck_op_assign(L)) {
			luaL_error(L, "luna typecheck failed in osg::Polytope & osg::Polytope::operator=(const osg::Polytope & cv) function, expected prototype:\nosg::Polytope & osg::Polytope::operator=(const osg::Polytope & cv)\nClass arguments details:\narg 1 ID = 26652350\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Polytope* cv_ptr=(Luna< osg::Polytope >::check(L,2));
		if( !cv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cv in osg::Polytope::operator= function");
		}
		const osg::Polytope & cv=*cv_ptr;

		osg::Polytope* self=(Luna< osg::Polytope >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Polytope & osg::Polytope::operator=(const osg::Polytope &). Got : '%s'\n%s",typeid(Luna< osg::Polytope >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Polytope* lret = &self->operator=(cv);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Polytope >::push(L,lret,false);

		return 1;
	}


};

osg::Polytope* LunaTraits< osg::Polytope >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Polytope::_bind_ctor(L);
}

void LunaTraits< osg::Polytope >::_bind_dtor(osg::Polytope* obj) {
	delete obj;
}

const char LunaTraits< osg::Polytope >::className[] = "Polytope";
const char LunaTraits< osg::Polytope >::fullName[] = "osg::Polytope";
const char LunaTraits< osg::Polytope >::moduleName[] = "osg";
const char* LunaTraits< osg::Polytope >::parents[] = {0};
const int LunaTraits< osg::Polytope >::hash = 26652350;
const int LunaTraits< osg::Polytope >::uniqueIDs[] = {26652350,0};

luna_RegType LunaTraits< osg::Polytope >::methods[] = {
	{"clear", &luna_wrapper_osg_Polytope::_bind_clear},
	{"setToUnitFrustum", &luna_wrapper_osg_Polytope::_bind_setToUnitFrustum},
	{"setToBoundingBox", &luna_wrapper_osg_Polytope::_bind_setToBoundingBox},
	{"setAndTransformProvidingInverse", &luna_wrapper_osg_Polytope::_bind_setAndTransformProvidingInverse},
	{"set", &luna_wrapper_osg_Polytope::_bind_set},
	{"add", &luna_wrapper_osg_Polytope::_bind_add},
	{"flip", &luna_wrapper_osg_Polytope::_bind_flip},
	{"empty", &luna_wrapper_osg_Polytope::_bind_empty},
	{"getPlaneList", &luna_wrapper_osg_Polytope::_bind_getPlaneList},
	{"setReferenceVertexList", &luna_wrapper_osg_Polytope::_bind_setReferenceVertexList},
	{"getReferenceVertexList", &luna_wrapper_osg_Polytope::_bind_getReferenceVertexList},
	{"setupMask", &luna_wrapper_osg_Polytope::_bind_setupMask},
	{"getCurrentMask", &luna_wrapper_osg_Polytope::_bind_getCurrentMask},
	{"setResultMask", &luna_wrapper_osg_Polytope::_bind_setResultMask},
	{"getResultMask", &luna_wrapper_osg_Polytope::_bind_getResultMask},
	{"getMaskStack", &luna_wrapper_osg_Polytope::_bind_getMaskStack},
	{"pushCurrentMask", &luna_wrapper_osg_Polytope::_bind_pushCurrentMask},
	{"popCurrentMask", &luna_wrapper_osg_Polytope::_bind_popCurrentMask},
	{"contains", &luna_wrapper_osg_Polytope::_bind_contains},
	{"containsAllOf", &luna_wrapper_osg_Polytope::_bind_containsAllOf},
	{"transform", &luna_wrapper_osg_Polytope::_bind_transform},
	{"transformProvidingInverse", &luna_wrapper_osg_Polytope::_bind_transformProvidingInverse},
	{"op_assign", &luna_wrapper_osg_Polytope::_bind_op_assign},
	{"dynCast", &luna_wrapper_osg_Polytope::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_Polytope::_bind___eq},
	{"fromVoid", &luna_wrapper_osg_Polytope::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_Polytope::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Polytope >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Polytope >::enumValues[] = {
	{0,0}
};



#include <plug_common.h>

class luna_wrapper_osg_ShadowVolumeOccluder {
public:
	typedef Luna< osg::ShadowVolumeOccluder > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,60344650) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::ShadowVolumeOccluder*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::ShadowVolumeOccluder* rhs =(Luna< osg::ShadowVolumeOccluder >::check(L,2));
		osg::ShadowVolumeOccluder* self=(Luna< osg::ShadowVolumeOccluder >::check(L,1));
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

		osg::ShadowVolumeOccluder* self= (osg::ShadowVolumeOccluder*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::ShadowVolumeOccluder >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,60344650) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osg::ShadowVolumeOccluder >::check(L,1));
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

		osg::ShadowVolumeOccluder* self=(Luna< osg::ShadowVolumeOccluder >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::ShadowVolumeOccluder");
		
		return luna_dynamicCast(L,converters,"osg::ShadowVolumeOccluder",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,60344650) ) return false;
		if( (!(Luna< osg::ShadowVolumeOccluder >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_computeOccluder(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,52841328) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,50169651) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,31435107) ) return false;
		if( luatop>4 && lua_isboolean(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_disableResultMasks(lua_State *L) {
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

	inline static bool _lg_typecheck_matchProjectionMatrix(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNodePath(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,52841328) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNodePath_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNodePath_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getVolume(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getOccluder_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getOccluder_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getHoleList_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getHoleList_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_contains_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,30220088) ) return false;
		if( (!(Luna< std::vector< osg::Vec3f > >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_contains_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,65870735) ) return false;
		if( (!(Luna< osg::BoundingSphereImpl< osg::Vec3d > >::checkSubType< osg::BoundingSphered >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_contains_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,41227270) ) return false;
		if( (!(Luna< osg::BoundingBoxImpl< osg::Vec3d > >::checkSubType< osg::BoundingBoxd >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_transformProvidingInverse(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck___lt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,60344650) ) return false;
		return true;
	}


	// Constructor binds:
	// osg::ShadowVolumeOccluder::ShadowVolumeOccluder(const osg::ShadowVolumeOccluder & svo)
	static osg::ShadowVolumeOccluder* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::ShadowVolumeOccluder::ShadowVolumeOccluder(const osg::ShadowVolumeOccluder & svo) function, expected prototype:\nosg::ShadowVolumeOccluder::ShadowVolumeOccluder(const osg::ShadowVolumeOccluder & svo)\nClass arguments details:\narg 1 ID = 60344650\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::ShadowVolumeOccluder* svo_ptr=(Luna< osg::ShadowVolumeOccluder >::check(L,1));
		if( !svo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg svo in osg::ShadowVolumeOccluder::ShadowVolumeOccluder function");
		}
		const osg::ShadowVolumeOccluder & svo=*svo_ptr;

		return new osg::ShadowVolumeOccluder(svo);
	}

	// osg::ShadowVolumeOccluder::ShadowVolumeOccluder()
	static osg::ShadowVolumeOccluder* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::ShadowVolumeOccluder::ShadowVolumeOccluder() function, expected prototype:\nosg::ShadowVolumeOccluder::ShadowVolumeOccluder()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::ShadowVolumeOccluder();
	}

	// Overload binder for osg::ShadowVolumeOccluder::ShadowVolumeOccluder
	static osg::ShadowVolumeOccluder* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function ShadowVolumeOccluder, cannot match any of the overloads for function ShadowVolumeOccluder:\n  ShadowVolumeOccluder(const osg::ShadowVolumeOccluder &)\n  ShadowVolumeOccluder()\n");
		return NULL;
	}


	// Function binds:
	// bool osg::ShadowVolumeOccluder::computeOccluder(const osg::NodePath & nodePath, const osg::ConvexPlanarOccluder & occluder, osg::CullStack & cullStack, bool createDrawables = false)
	static int _bind_computeOccluder(lua_State *L) {
		if (!_lg_typecheck_computeOccluder(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::ShadowVolumeOccluder::computeOccluder(const osg::NodePath & nodePath, const osg::ConvexPlanarOccluder & occluder, osg::CullStack & cullStack, bool createDrawables = false) function, expected prototype:\nbool osg::ShadowVolumeOccluder::computeOccluder(const osg::NodePath & nodePath, const osg::ConvexPlanarOccluder & occluder, osg::CullStack & cullStack, bool createDrawables = false)\nClass arguments details:\narg 1 ID = 52841328\narg 2 ID = 50169651\narg 3 ID = 31435107\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::NodePath* nodePath_ptr=(Luna< osg::NodePath >::check(L,2));
		if( !nodePath_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nodePath in osg::ShadowVolumeOccluder::computeOccluder function");
		}
		const osg::NodePath & nodePath=*nodePath_ptr;
		const osg::ConvexPlanarOccluder* occluder_ptr=(Luna< osg::Referenced >::checkSubType< osg::ConvexPlanarOccluder >(L,3));
		if( !occluder_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg occluder in osg::ShadowVolumeOccluder::computeOccluder function");
		}
		const osg::ConvexPlanarOccluder & occluder=*occluder_ptr;
		osg::CullStack* cullStack_ptr=(Luna< osg::CullSettings >::checkSubType< osg::CullStack >(L,4));
		if( !cullStack_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cullStack in osg::ShadowVolumeOccluder::computeOccluder function");
		}
		osg::CullStack & cullStack=*cullStack_ptr;
		bool createDrawables=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : (bool)false;

		osg::ShadowVolumeOccluder* self=(Luna< osg::ShadowVolumeOccluder >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::ShadowVolumeOccluder::computeOccluder(const osg::NodePath &, const osg::ConvexPlanarOccluder &, osg::CullStack &, bool). Got : '%s'\n%s",typeid(Luna< osg::ShadowVolumeOccluder >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->computeOccluder(nodePath, occluder, cullStack, createDrawables);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::ShadowVolumeOccluder::disableResultMasks()
	static int _bind_disableResultMasks(lua_State *L) {
		if (!_lg_typecheck_disableResultMasks(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ShadowVolumeOccluder::disableResultMasks() function, expected prototype:\nvoid osg::ShadowVolumeOccluder::disableResultMasks()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ShadowVolumeOccluder* self=(Luna< osg::ShadowVolumeOccluder >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ShadowVolumeOccluder::disableResultMasks(). Got : '%s'\n%s",typeid(Luna< osg::ShadowVolumeOccluder >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->disableResultMasks();

		return 0;
	}

	// void osg::ShadowVolumeOccluder::pushCurrentMask()
	static int _bind_pushCurrentMask(lua_State *L) {
		if (!_lg_typecheck_pushCurrentMask(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ShadowVolumeOccluder::pushCurrentMask() function, expected prototype:\nvoid osg::ShadowVolumeOccluder::pushCurrentMask()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ShadowVolumeOccluder* self=(Luna< osg::ShadowVolumeOccluder >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ShadowVolumeOccluder::pushCurrentMask(). Got : '%s'\n%s",typeid(Luna< osg::ShadowVolumeOccluder >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->pushCurrentMask();

		return 0;
	}

	// void osg::ShadowVolumeOccluder::popCurrentMask()
	static int _bind_popCurrentMask(lua_State *L) {
		if (!_lg_typecheck_popCurrentMask(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ShadowVolumeOccluder::popCurrentMask() function, expected prototype:\nvoid osg::ShadowVolumeOccluder::popCurrentMask()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ShadowVolumeOccluder* self=(Luna< osg::ShadowVolumeOccluder >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ShadowVolumeOccluder::popCurrentMask(). Got : '%s'\n%s",typeid(Luna< osg::ShadowVolumeOccluder >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->popCurrentMask();

		return 0;
	}

	// bool osg::ShadowVolumeOccluder::matchProjectionMatrix(const osg::Matrixd & matrix) const
	static int _bind_matchProjectionMatrix(lua_State *L) {
		if (!_lg_typecheck_matchProjectionMatrix(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::ShadowVolumeOccluder::matchProjectionMatrix(const osg::Matrixd & matrix) const function, expected prototype:\nbool osg::ShadowVolumeOccluder::matchProjectionMatrix(const osg::Matrixd & matrix) const\nClass arguments details:\narg 1 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osg::ShadowVolumeOccluder::matchProjectionMatrix function");
		}
		const osg::Matrixd & matrix=*matrix_ptr;

		osg::ShadowVolumeOccluder* self=(Luna< osg::ShadowVolumeOccluder >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::ShadowVolumeOccluder::matchProjectionMatrix(const osg::Matrixd &) const. Got : '%s'\n%s",typeid(Luna< osg::ShadowVolumeOccluder >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->matchProjectionMatrix(matrix);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::ShadowVolumeOccluder::setNodePath(osg::NodePath & nodePath)
	static int _bind_setNodePath(lua_State *L) {
		if (!_lg_typecheck_setNodePath(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ShadowVolumeOccluder::setNodePath(osg::NodePath & nodePath) function, expected prototype:\nvoid osg::ShadowVolumeOccluder::setNodePath(osg::NodePath & nodePath)\nClass arguments details:\narg 1 ID = 52841328\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodePath* nodePath_ptr=(Luna< osg::NodePath >::check(L,2));
		if( !nodePath_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nodePath in osg::ShadowVolumeOccluder::setNodePath function");
		}
		osg::NodePath & nodePath=*nodePath_ptr;

		osg::ShadowVolumeOccluder* self=(Luna< osg::ShadowVolumeOccluder >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ShadowVolumeOccluder::setNodePath(osg::NodePath &). Got : '%s'\n%s",typeid(Luna< osg::ShadowVolumeOccluder >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setNodePath(nodePath);

		return 0;
	}

	// osg::NodePath & osg::ShadowVolumeOccluder::getNodePath()
	static int _bind_getNodePath_overload_1(lua_State *L) {
		if (!_lg_typecheck_getNodePath_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::NodePath & osg::ShadowVolumeOccluder::getNodePath() function, expected prototype:\nosg::NodePath & osg::ShadowVolumeOccluder::getNodePath()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ShadowVolumeOccluder* self=(Luna< osg::ShadowVolumeOccluder >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::NodePath & osg::ShadowVolumeOccluder::getNodePath(). Got : '%s'\n%s",typeid(Luna< osg::ShadowVolumeOccluder >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::NodePath* lret = &self->getNodePath();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::NodePath >::push(L,lret,false);

		return 1;
	}

	// const osg::NodePath & osg::ShadowVolumeOccluder::getNodePath() const
	static int _bind_getNodePath_overload_2(lua_State *L) {
		if (!_lg_typecheck_getNodePath_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::NodePath & osg::ShadowVolumeOccluder::getNodePath() const function, expected prototype:\nconst osg::NodePath & osg::ShadowVolumeOccluder::getNodePath() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ShadowVolumeOccluder* self=(Luna< osg::ShadowVolumeOccluder >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::NodePath & osg::ShadowVolumeOccluder::getNodePath() const. Got : '%s'\n%s",typeid(Luna< osg::ShadowVolumeOccluder >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::NodePath* lret = &self->getNodePath();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::NodePath >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::ShadowVolumeOccluder::getNodePath
	static int _bind_getNodePath(lua_State *L) {
		if (_lg_typecheck_getNodePath_overload_1(L)) return _bind_getNodePath_overload_1(L);
		if (_lg_typecheck_getNodePath_overload_2(L)) return _bind_getNodePath_overload_2(L);

		luaL_error(L, "error in function getNodePath, cannot match any of the overloads for function getNodePath:\n  getNodePath()\n  getNodePath()\n");
		return 0;
	}

	// float osg::ShadowVolumeOccluder::getVolume() const
	static int _bind_getVolume(lua_State *L) {
		if (!_lg_typecheck_getVolume(L)) {
			luaL_error(L, "luna typecheck failed in float osg::ShadowVolumeOccluder::getVolume() const function, expected prototype:\nfloat osg::ShadowVolumeOccluder::getVolume() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ShadowVolumeOccluder* self=(Luna< osg::ShadowVolumeOccluder >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float osg::ShadowVolumeOccluder::getVolume() const. Got : '%s'\n%s",typeid(Luna< osg::ShadowVolumeOccluder >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getVolume();
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::Polytope & osg::ShadowVolumeOccluder::getOccluder()
	static int _bind_getOccluder_overload_1(lua_State *L) {
		if (!_lg_typecheck_getOccluder_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Polytope & osg::ShadowVolumeOccluder::getOccluder() function, expected prototype:\nosg::Polytope & osg::ShadowVolumeOccluder::getOccluder()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ShadowVolumeOccluder* self=(Luna< osg::ShadowVolumeOccluder >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Polytope & osg::ShadowVolumeOccluder::getOccluder(). Got : '%s'\n%s",typeid(Luna< osg::ShadowVolumeOccluder >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Polytope* lret = &self->getOccluder();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Polytope >::push(L,lret,false);

		return 1;
	}

	// const osg::Polytope & osg::ShadowVolumeOccluder::getOccluder() const
	static int _bind_getOccluder_overload_2(lua_State *L) {
		if (!_lg_typecheck_getOccluder_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Polytope & osg::ShadowVolumeOccluder::getOccluder() const function, expected prototype:\nconst osg::Polytope & osg::ShadowVolumeOccluder::getOccluder() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ShadowVolumeOccluder* self=(Luna< osg::ShadowVolumeOccluder >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Polytope & osg::ShadowVolumeOccluder::getOccluder() const. Got : '%s'\n%s",typeid(Luna< osg::ShadowVolumeOccluder >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Polytope* lret = &self->getOccluder();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Polytope >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::ShadowVolumeOccluder::getOccluder
	static int _bind_getOccluder(lua_State *L) {
		if (_lg_typecheck_getOccluder_overload_1(L)) return _bind_getOccluder_overload_1(L);
		if (_lg_typecheck_getOccluder_overload_2(L)) return _bind_getOccluder_overload_2(L);

		luaL_error(L, "error in function getOccluder, cannot match any of the overloads for function getOccluder:\n  getOccluder()\n  getOccluder()\n");
		return 0;
	}

	// osg::ShadowVolumeOccluder::HoleList & osg::ShadowVolumeOccluder::getHoleList()
	static int _bind_getHoleList_overload_1(lua_State *L) {
		if (!_lg_typecheck_getHoleList_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::ShadowVolumeOccluder::HoleList & osg::ShadowVolumeOccluder::getHoleList() function, expected prototype:\nosg::ShadowVolumeOccluder::HoleList & osg::ShadowVolumeOccluder::getHoleList()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ShadowVolumeOccluder* self=(Luna< osg::ShadowVolumeOccluder >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::ShadowVolumeOccluder::HoleList & osg::ShadowVolumeOccluder::getHoleList(). Got : '%s'\n%s",typeid(Luna< osg::ShadowVolumeOccluder >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::ShadowVolumeOccluder::HoleList* lret = &self->getHoleList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::ShadowVolumeOccluder::HoleList >::push(L,lret,false);

		return 1;
	}

	// const osg::ShadowVolumeOccluder::HoleList & osg::ShadowVolumeOccluder::getHoleList() const
	static int _bind_getHoleList_overload_2(lua_State *L) {
		if (!_lg_typecheck_getHoleList_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::ShadowVolumeOccluder::HoleList & osg::ShadowVolumeOccluder::getHoleList() const function, expected prototype:\nconst osg::ShadowVolumeOccluder::HoleList & osg::ShadowVolumeOccluder::getHoleList() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ShadowVolumeOccluder* self=(Luna< osg::ShadowVolumeOccluder >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::ShadowVolumeOccluder::HoleList & osg::ShadowVolumeOccluder::getHoleList() const. Got : '%s'\n%s",typeid(Luna< osg::ShadowVolumeOccluder >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::ShadowVolumeOccluder::HoleList* lret = &self->getHoleList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::ShadowVolumeOccluder::HoleList >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::ShadowVolumeOccluder::getHoleList
	static int _bind_getHoleList(lua_State *L) {
		if (_lg_typecheck_getHoleList_overload_1(L)) return _bind_getHoleList_overload_1(L);
		if (_lg_typecheck_getHoleList_overload_2(L)) return _bind_getHoleList_overload_2(L);

		luaL_error(L, "error in function getHoleList, cannot match any of the overloads for function getHoleList:\n  getHoleList()\n  getHoleList()\n");
		return 0;
	}

	// bool osg::ShadowVolumeOccluder::contains(const std::vector< osg::Vec3f > & vertices)
	static int _bind_contains_overload_1(lua_State *L) {
		if (!_lg_typecheck_contains_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::ShadowVolumeOccluder::contains(const std::vector< osg::Vec3f > & vertices) function, expected prototype:\nbool osg::ShadowVolumeOccluder::contains(const std::vector< osg::Vec3f > & vertices)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		const std::vector< osg::Vec3f >* vertices_ptr=(Luna< std::vector< osg::Vec3f > >::check(L,2));
		if( !vertices_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vertices in osg::ShadowVolumeOccluder::contains function");
		}
		const std::vector< osg::Vec3f > & vertices=*vertices_ptr;

		osg::ShadowVolumeOccluder* self=(Luna< osg::ShadowVolumeOccluder >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::ShadowVolumeOccluder::contains(const std::vector< osg::Vec3f > &). Got : '%s'\n%s",typeid(Luna< osg::ShadowVolumeOccluder >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->contains(vertices);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::ShadowVolumeOccluder::contains(const osg::BoundingSphered & bound)
	static int _bind_contains_overload_2(lua_State *L) {
		if (!_lg_typecheck_contains_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::ShadowVolumeOccluder::contains(const osg::BoundingSphered & bound) function, expected prototype:\nbool osg::ShadowVolumeOccluder::contains(const osg::BoundingSphered & bound)\nClass arguments details:\narg 1 ID = 54337300\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::BoundingSphered* bound_ptr=(Luna< osg::BoundingSphereImpl< osg::Vec3d > >::checkSubType< osg::BoundingSphered >(L,2));
		if( !bound_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bound in osg::ShadowVolumeOccluder::contains function");
		}
		const osg::BoundingSphered & bound=*bound_ptr;

		osg::ShadowVolumeOccluder* self=(Luna< osg::ShadowVolumeOccluder >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::ShadowVolumeOccluder::contains(const osg::BoundingSphered &). Got : '%s'\n%s",typeid(Luna< osg::ShadowVolumeOccluder >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->contains(bound);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::ShadowVolumeOccluder::contains(const osg::BoundingBoxd & bound)
	static int _bind_contains_overload_3(lua_State *L) {
		if (!_lg_typecheck_contains_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::ShadowVolumeOccluder::contains(const osg::BoundingBoxd & bound) function, expected prototype:\nbool osg::ShadowVolumeOccluder::contains(const osg::BoundingBoxd & bound)\nClass arguments details:\narg 1 ID = 82744897\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::BoundingBoxd* bound_ptr=(Luna< osg::BoundingBoxImpl< osg::Vec3d > >::checkSubType< osg::BoundingBoxd >(L,2));
		if( !bound_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bound in osg::ShadowVolumeOccluder::contains function");
		}
		const osg::BoundingBoxd & bound=*bound_ptr;

		osg::ShadowVolumeOccluder* self=(Luna< osg::ShadowVolumeOccluder >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::ShadowVolumeOccluder::contains(const osg::BoundingBoxd &). Got : '%s'\n%s",typeid(Luna< osg::ShadowVolumeOccluder >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->contains(bound);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for osg::ShadowVolumeOccluder::contains
	static int _bind_contains(lua_State *L) {
		if (_lg_typecheck_contains_overload_1(L)) return _bind_contains_overload_1(L);
		if (_lg_typecheck_contains_overload_2(L)) return _bind_contains_overload_2(L);
		if (_lg_typecheck_contains_overload_3(L)) return _bind_contains_overload_3(L);

		luaL_error(L, "error in function contains, cannot match any of the overloads for function contains:\n  contains(const std::vector< osg::Vec3f > &)\n  contains(const osg::BoundingSphered &)\n  contains(const osg::BoundingBoxd &)\n");
		return 0;
	}

	// void osg::ShadowVolumeOccluder::transformProvidingInverse(const osg::Matrixd & matrix)
	static int _bind_transformProvidingInverse(lua_State *L) {
		if (!_lg_typecheck_transformProvidingInverse(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ShadowVolumeOccluder::transformProvidingInverse(const osg::Matrixd & matrix) function, expected prototype:\nvoid osg::ShadowVolumeOccluder::transformProvidingInverse(const osg::Matrixd & matrix)\nClass arguments details:\narg 1 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osg::ShadowVolumeOccluder::transformProvidingInverse function");
		}
		const osg::Matrixd & matrix=*matrix_ptr;

		osg::ShadowVolumeOccluder* self=(Luna< osg::ShadowVolumeOccluder >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ShadowVolumeOccluder::transformProvidingInverse(const osg::Matrixd &). Got : '%s'\n%s",typeid(Luna< osg::ShadowVolumeOccluder >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->transformProvidingInverse(matrix);

		return 0;
	}


	// Operator binds:
	// bool osg::ShadowVolumeOccluder::operator<(const osg::ShadowVolumeOccluder & svo) const
	static int _bind___lt(lua_State *L) {
		if (!_lg_typecheck___lt(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::ShadowVolumeOccluder::operator<(const osg::ShadowVolumeOccluder & svo) const function, expected prototype:\nbool osg::ShadowVolumeOccluder::operator<(const osg::ShadowVolumeOccluder & svo) const\nClass arguments details:\narg 1 ID = 60344650\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::ShadowVolumeOccluder* svo_ptr=(Luna< osg::ShadowVolumeOccluder >::check(L,2));
		if( !svo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg svo in osg::ShadowVolumeOccluder::operator< function");
		}
		const osg::ShadowVolumeOccluder & svo=*svo_ptr;

		osg::ShadowVolumeOccluder* self=(Luna< osg::ShadowVolumeOccluder >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::ShadowVolumeOccluder::operator<(const osg::ShadowVolumeOccluder &) const. Got : '%s'\n%s",typeid(Luna< osg::ShadowVolumeOccluder >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator<(svo);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

osg::ShadowVolumeOccluder* LunaTraits< osg::ShadowVolumeOccluder >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_ShadowVolumeOccluder::_bind_ctor(L);
}

void LunaTraits< osg::ShadowVolumeOccluder >::_bind_dtor(osg::ShadowVolumeOccluder* obj) {
	delete obj;
}

const char LunaTraits< osg::ShadowVolumeOccluder >::className[] = "ShadowVolumeOccluder";
const char LunaTraits< osg::ShadowVolumeOccluder >::fullName[] = "osg::ShadowVolumeOccluder";
const char LunaTraits< osg::ShadowVolumeOccluder >::moduleName[] = "osg";
const char* LunaTraits< osg::ShadowVolumeOccluder >::parents[] = {0};
const int LunaTraits< osg::ShadowVolumeOccluder >::hash = 60344650;
const int LunaTraits< osg::ShadowVolumeOccluder >::uniqueIDs[] = {60344650,0};

luna_RegType LunaTraits< osg::ShadowVolumeOccluder >::methods[] = {
	{"computeOccluder", &luna_wrapper_osg_ShadowVolumeOccluder::_bind_computeOccluder},
	{"disableResultMasks", &luna_wrapper_osg_ShadowVolumeOccluder::_bind_disableResultMasks},
	{"pushCurrentMask", &luna_wrapper_osg_ShadowVolumeOccluder::_bind_pushCurrentMask},
	{"popCurrentMask", &luna_wrapper_osg_ShadowVolumeOccluder::_bind_popCurrentMask},
	{"matchProjectionMatrix", &luna_wrapper_osg_ShadowVolumeOccluder::_bind_matchProjectionMatrix},
	{"setNodePath", &luna_wrapper_osg_ShadowVolumeOccluder::_bind_setNodePath},
	{"getNodePath", &luna_wrapper_osg_ShadowVolumeOccluder::_bind_getNodePath},
	{"getVolume", &luna_wrapper_osg_ShadowVolumeOccluder::_bind_getVolume},
	{"getOccluder", &luna_wrapper_osg_ShadowVolumeOccluder::_bind_getOccluder},
	{"getHoleList", &luna_wrapper_osg_ShadowVolumeOccluder::_bind_getHoleList},
	{"contains", &luna_wrapper_osg_ShadowVolumeOccluder::_bind_contains},
	{"transformProvidingInverse", &luna_wrapper_osg_ShadowVolumeOccluder::_bind_transformProvidingInverse},
	{"__lt", &luna_wrapper_osg_ShadowVolumeOccluder::_bind___lt},
	{"dynCast", &luna_wrapper_osg_ShadowVolumeOccluder::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_ShadowVolumeOccluder::_bind___eq},
	{"fromVoid", &luna_wrapper_osg_ShadowVolumeOccluder::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_ShadowVolumeOccluder::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ShadowVolumeOccluder >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ShadowVolumeOccluder >::enumValues[] = {
	{0,0}
};



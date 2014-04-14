#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_TerrainNode.h>

class luna_wrapper_proland_TerrainNode {
public:
	typedef Luna< proland::TerrainNode > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::Object* self=(Luna< ork::Object >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<ork::Object,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
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

		proland::TerrainNode* self= (proland::TerrainNode*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::TerrainNode >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,1381405) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< ork::Object >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_Object(lua_State *L) {
		// all checked are already performed before reaching this point.
		//proland::TerrainNode* ptr= dynamic_cast< proland::TerrainNode* >(Luna< ork::Object >::check(L,1));
		proland::TerrainNode* ptr= luna_caster< ork::Object, proland::TerrainNode >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::TerrainNode >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::Deformation >(L,1) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::TerrainQuad >(L,2) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::Deformation >(L,2) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::TerrainQuad >(L,3) ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getDeformedCamera(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDeformedFrustumPlanes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLocalCamera(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCameraDist(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,63151940) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getVisibility(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,63151940) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSplitDistance(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDistFactor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_update(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::SceneNode >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addOccluder(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,63151940) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isOccluded(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,63151940) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDeform(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRoot(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSplitFactor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSplitInvisibleQuads(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getHorizonCulling(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMaxLevel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getGroundHeightAtCamera(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNextGroundHeightAtCamera(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDeform(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::Deformation >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRoot(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::TerrainQuad >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSplitFactor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSplitInvisibleQuads(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setHorizonCulling(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMaxLevel(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setGroundHeightAtCamera(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNextGroundHeightAtCamera(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_toString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::TerrainNode::TerrainNode(ork::ptr< proland::Deformation > deform, ork::ptr< proland::TerrainQuad > root, float splitFactor, int maxLevel)
	static proland::TerrainNode* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::TerrainNode::TerrainNode(ork::ptr< proland::Deformation > deform, ork::ptr< proland::TerrainQuad > root, float splitFactor, int maxLevel) function, expected prototype:\nproland::TerrainNode::TerrainNode(ork::ptr< proland::Deformation > deform, ork::ptr< proland::TerrainQuad > root, float splitFactor, int maxLevel)\nClass arguments details:\narg 1 ID = [unknown]\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< proland::Deformation > deform = Luna< ork::Object >::checkSubType< proland::Deformation >(L,1);
		ork::ptr< proland::TerrainQuad > root = Luna< ork::Object >::checkSubType< proland::TerrainQuad >(L,2);
		float splitFactor=(float)lua_tonumber(L,3);
		int maxLevel=(int)lua_tointeger(L,4);

		return new proland::TerrainNode(deform, root, splitFactor, maxLevel);
	}

	// proland::TerrainNode::TerrainNode(lua_Table * data, ork::ptr< proland::Deformation > deform, ork::ptr< proland::TerrainQuad > root, float splitFactor, int maxLevel)
	static proland::TerrainNode* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::TerrainNode::TerrainNode(lua_Table * data, ork::ptr< proland::Deformation > deform, ork::ptr< proland::TerrainQuad > root, float splitFactor, int maxLevel) function, expected prototype:\nproland::TerrainNode::TerrainNode(lua_Table * data, ork::ptr< proland::Deformation > deform, ork::ptr< proland::TerrainQuad > root, float splitFactor, int maxLevel)\nClass arguments details:\narg 2 ID = [unknown]\narg 3 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< proland::Deformation > deform = Luna< ork::Object >::checkSubType< proland::Deformation >(L,2);
		ork::ptr< proland::TerrainQuad > root = Luna< ork::Object >::checkSubType< proland::TerrainQuad >(L,3);
		float splitFactor=(float)lua_tonumber(L,4);
		int maxLevel=(int)lua_tointeger(L,5);

		return new wrapper_proland_TerrainNode(L,NULL, deform, root, splitFactor, maxLevel);
	}

	// Overload binder for proland::TerrainNode::TerrainNode
	static proland::TerrainNode* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function TerrainNode, cannot match any of the overloads for function TerrainNode:\n  TerrainNode(ork::ptr< proland::Deformation >, ork::ptr< proland::TerrainQuad >, float, int)\n  TerrainNode(lua_Table *, ork::ptr< proland::Deformation >, ork::ptr< proland::TerrainQuad >, float, int)\n");
		return NULL;
	}


	// Function binds:
	// ork::vec3d proland::TerrainNode::getDeformedCamera() const
	static int _bind_getDeformedCamera(lua_State *L) {
		if (!_lg_typecheck_getDeformedCamera(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec3d proland::TerrainNode::getDeformedCamera() const function, expected prototype:\nork::vec3d proland::TerrainNode::getDeformedCamera() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TerrainNode* self=Luna< ork::Object >::checkSubType< proland::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec3d proland::TerrainNode::getDeformedCamera() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec3d stack_lret = self->getDeformedCamera();
		ork::vec3d* lret = new ork::vec3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec3d >::push(L,lret,true);

		return 1;
	}

	// const ork::vec4d * proland::TerrainNode::getDeformedFrustumPlanes() const
	static int _bind_getDeformedFrustumPlanes(lua_State *L) {
		if (!_lg_typecheck_getDeformedFrustumPlanes(L)) {
			luaL_error(L, "luna typecheck failed in const ork::vec4d * proland::TerrainNode::getDeformedFrustumPlanes() const function, expected prototype:\nconst ork::vec4d * proland::TerrainNode::getDeformedFrustumPlanes() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TerrainNode* self=Luna< ork::Object >::checkSubType< proland::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const ork::vec4d * proland::TerrainNode::getDeformedFrustumPlanes() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const ork::vec4d * lret = self->getDeformedFrustumPlanes();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec4d >::push(L,lret,false);

		return 1;
	}

	// ork::vec3d proland::TerrainNode::getLocalCamera() const
	static int _bind_getLocalCamera(lua_State *L) {
		if (!_lg_typecheck_getLocalCamera(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec3d proland::TerrainNode::getLocalCamera() const function, expected prototype:\nork::vec3d proland::TerrainNode::getLocalCamera() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TerrainNode* self=Luna< ork::Object >::checkSubType< proland::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec3d proland::TerrainNode::getLocalCamera() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec3d stack_lret = self->getLocalCamera();
		ork::vec3d* lret = new ork::vec3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec3d >::push(L,lret,true);

		return 1;
	}

	// float proland::TerrainNode::getCameraDist(const ork::box3d & localBox) const
	static int _bind_getCameraDist(lua_State *L) {
		if (!_lg_typecheck_getCameraDist(L)) {
			luaL_error(L, "luna typecheck failed in float proland::TerrainNode::getCameraDist(const ork::box3d & localBox) const function, expected prototype:\nfloat proland::TerrainNode::getCameraDist(const ork::box3d & localBox) const\nClass arguments details:\narg 1 ID = 63151940\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::box3d* localBox_ptr=(Luna< ork::box3d >::check(L,2));
		if( !localBox_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg localBox in proland::TerrainNode::getCameraDist function");
		}
		const ork::box3d & localBox=*localBox_ptr;

		proland::TerrainNode* self=Luna< ork::Object >::checkSubType< proland::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::TerrainNode::getCameraDist(const ork::box3d &) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getCameraDist(localBox);
		lua_pushnumber(L,lret);

		return 1;
	}

	// ork::SceneManager::visibility proland::TerrainNode::getVisibility(const ork::box3d & localBox) const
	static int _bind_getVisibility(lua_State *L) {
		if (!_lg_typecheck_getVisibility(L)) {
			luaL_error(L, "luna typecheck failed in ork::SceneManager::visibility proland::TerrainNode::getVisibility(const ork::box3d & localBox) const function, expected prototype:\nork::SceneManager::visibility proland::TerrainNode::getVisibility(const ork::box3d & localBox) const\nClass arguments details:\narg 1 ID = 63151940\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::box3d* localBox_ptr=(Luna< ork::box3d >::check(L,2));
		if( !localBox_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg localBox in proland::TerrainNode::getVisibility function");
		}
		const ork::box3d & localBox=*localBox_ptr;

		proland::TerrainNode* self=Luna< ork::Object >::checkSubType< proland::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::SceneManager::visibility proland::TerrainNode::getVisibility(const ork::box3d &) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::SceneManager::visibility lret = self->getVisibility(localBox);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float proland::TerrainNode::getSplitDistance() const
	static int _bind_getSplitDistance(lua_State *L) {
		if (!_lg_typecheck_getSplitDistance(L)) {
			luaL_error(L, "luna typecheck failed in float proland::TerrainNode::getSplitDistance() const function, expected prototype:\nfloat proland::TerrainNode::getSplitDistance() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TerrainNode* self=Luna< ork::Object >::checkSubType< proland::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::TerrainNode::getSplitDistance() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getSplitDistance();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float proland::TerrainNode::getDistFactor() const
	static int _bind_getDistFactor(lua_State *L) {
		if (!_lg_typecheck_getDistFactor(L)) {
			luaL_error(L, "luna typecheck failed in float proland::TerrainNode::getDistFactor() const function, expected prototype:\nfloat proland::TerrainNode::getDistFactor() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TerrainNode* self=Luna< ork::Object >::checkSubType< proland::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::TerrainNode::getDistFactor() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getDistFactor();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void proland::TerrainNode::update(ork::ptr< ork::SceneNode > owner)
	static int _bind_update(lua_State *L) {
		if (!_lg_typecheck_update(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TerrainNode::update(ork::ptr< ork::SceneNode > owner) function, expected prototype:\nvoid proland::TerrainNode::update(ork::ptr< ork::SceneNode > owner)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::SceneNode > owner = Luna< ork::Object >::checkSubType< ork::SceneNode >(L,2);

		proland::TerrainNode* self=Luna< ork::Object >::checkSubType< proland::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TerrainNode::update(ork::ptr< ork::SceneNode >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->update(owner);

		return 0;
	}

	// bool proland::TerrainNode::addOccluder(const ork::box3d & occluder)
	static int _bind_addOccluder(lua_State *L) {
		if (!_lg_typecheck_addOccluder(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::TerrainNode::addOccluder(const ork::box3d & occluder) function, expected prototype:\nbool proland::TerrainNode::addOccluder(const ork::box3d & occluder)\nClass arguments details:\narg 1 ID = 63151940\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::box3d* occluder_ptr=(Luna< ork::box3d >::check(L,2));
		if( !occluder_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg occluder in proland::TerrainNode::addOccluder function");
		}
		const ork::box3d & occluder=*occluder_ptr;

		proland::TerrainNode* self=Luna< ork::Object >::checkSubType< proland::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::TerrainNode::addOccluder(const ork::box3d &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->addOccluder(occluder);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::TerrainNode::isOccluded(const ork::box3d & box)
	static int _bind_isOccluded(lua_State *L) {
		if (!_lg_typecheck_isOccluded(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::TerrainNode::isOccluded(const ork::box3d & box) function, expected prototype:\nbool proland::TerrainNode::isOccluded(const ork::box3d & box)\nClass arguments details:\narg 1 ID = 63151940\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::box3d* box_ptr=(Luna< ork::box3d >::check(L,2));
		if( !box_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg box in proland::TerrainNode::isOccluded function");
		}
		const ork::box3d & box=*box_ptr;

		proland::TerrainNode* self=Luna< ork::Object >::checkSubType< proland::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::TerrainNode::isOccluded(const ork::box3d &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isOccluded(box);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// ork::ptr< proland::Deformation > proland::TerrainNode::deform()
	static int _bind_getDeform(lua_State *L) {
		if (!_lg_typecheck_getDeform(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< proland::Deformation > proland::TerrainNode::deform() function, expected prototype:\nork::ptr< proland::Deformation > proland::TerrainNode::deform()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TerrainNode* self=Luna< ork::Object >::checkSubType< proland::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< proland::Deformation > proland::TerrainNode::deform(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< proland::Deformation > lret = self->deform;
		Luna< proland::Deformation >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< proland::TerrainQuad > proland::TerrainNode::root()
	static int _bind_getRoot(lua_State *L) {
		if (!_lg_typecheck_getRoot(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< proland::TerrainQuad > proland::TerrainNode::root() function, expected prototype:\nork::ptr< proland::TerrainQuad > proland::TerrainNode::root()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TerrainNode* self=Luna< ork::Object >::checkSubType< proland::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< proland::TerrainQuad > proland::TerrainNode::root(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< proland::TerrainQuad > lret = self->root;
		Luna< proland::TerrainQuad >::push(L,lret.get(),false);

		return 1;
	}

	// float proland::TerrainNode::splitFactor()
	static int _bind_getSplitFactor(lua_State *L) {
		if (!_lg_typecheck_getSplitFactor(L)) {
			luaL_error(L, "luna typecheck failed in float proland::TerrainNode::splitFactor() function, expected prototype:\nfloat proland::TerrainNode::splitFactor()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TerrainNode* self=Luna< ork::Object >::checkSubType< proland::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::TerrainNode::splitFactor(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->splitFactor;
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool proland::TerrainNode::splitInvisibleQuads()
	static int _bind_getSplitInvisibleQuads(lua_State *L) {
		if (!_lg_typecheck_getSplitInvisibleQuads(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::TerrainNode::splitInvisibleQuads() function, expected prototype:\nbool proland::TerrainNode::splitInvisibleQuads()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TerrainNode* self=Luna< ork::Object >::checkSubType< proland::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::TerrainNode::splitInvisibleQuads(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->splitInvisibleQuads;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::TerrainNode::horizonCulling()
	static int _bind_getHorizonCulling(lua_State *L) {
		if (!_lg_typecheck_getHorizonCulling(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::TerrainNode::horizonCulling() function, expected prototype:\nbool proland::TerrainNode::horizonCulling()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TerrainNode* self=Luna< ork::Object >::checkSubType< proland::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::TerrainNode::horizonCulling(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->horizonCulling;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int proland::TerrainNode::maxLevel()
	static int _bind_getMaxLevel(lua_State *L) {
		if (!_lg_typecheck_getMaxLevel(L)) {
			luaL_error(L, "luna typecheck failed in int proland::TerrainNode::maxLevel() function, expected prototype:\nint proland::TerrainNode::maxLevel()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TerrainNode* self=Luna< ork::Object >::checkSubType< proland::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::TerrainNode::maxLevel(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->maxLevel;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float proland::TerrainNode::groundHeightAtCamera()
	static int _bind_getGroundHeightAtCamera(lua_State *L) {
		if (!_lg_typecheck_getGroundHeightAtCamera(L)) {
			luaL_error(L, "luna typecheck failed in float proland::TerrainNode::groundHeightAtCamera() function, expected prototype:\nfloat proland::TerrainNode::groundHeightAtCamera()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TerrainNode* self=Luna< ork::Object >::checkSubType< proland::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::TerrainNode::groundHeightAtCamera(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->groundHeightAtCamera;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float proland::TerrainNode::nextGroundHeightAtCamera()
	static int _bind_getNextGroundHeightAtCamera(lua_State *L) {
		if (!_lg_typecheck_getNextGroundHeightAtCamera(L)) {
			luaL_error(L, "luna typecheck failed in float proland::TerrainNode::nextGroundHeightAtCamera() function, expected prototype:\nfloat proland::TerrainNode::nextGroundHeightAtCamera()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TerrainNode* self=Luna< ork::Object >::checkSubType< proland::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::TerrainNode::nextGroundHeightAtCamera(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->nextGroundHeightAtCamera;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void proland::TerrainNode::deform(ork::ptr< proland::Deformation > value)
	static int _bind_setDeform(lua_State *L) {
		if (!_lg_typecheck_setDeform(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TerrainNode::deform(ork::ptr< proland::Deformation > value) function, expected prototype:\nvoid proland::TerrainNode::deform(ork::ptr< proland::Deformation > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< proland::Deformation > value = Luna< ork::Object >::checkSubType< proland::Deformation >(L,2);

		proland::TerrainNode* self=Luna< ork::Object >::checkSubType< proland::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TerrainNode::deform(ork::ptr< proland::Deformation >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->deform = value;

		return 0;
	}

	// void proland::TerrainNode::root(ork::ptr< proland::TerrainQuad > value)
	static int _bind_setRoot(lua_State *L) {
		if (!_lg_typecheck_setRoot(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TerrainNode::root(ork::ptr< proland::TerrainQuad > value) function, expected prototype:\nvoid proland::TerrainNode::root(ork::ptr< proland::TerrainQuad > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< proland::TerrainQuad > value = Luna< ork::Object >::checkSubType< proland::TerrainQuad >(L,2);

		proland::TerrainNode* self=Luna< ork::Object >::checkSubType< proland::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TerrainNode::root(ork::ptr< proland::TerrainQuad >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->root = value;

		return 0;
	}

	// void proland::TerrainNode::splitFactor(float value)
	static int _bind_setSplitFactor(lua_State *L) {
		if (!_lg_typecheck_setSplitFactor(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TerrainNode::splitFactor(float value) function, expected prototype:\nvoid proland::TerrainNode::splitFactor(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		proland::TerrainNode* self=Luna< ork::Object >::checkSubType< proland::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TerrainNode::splitFactor(float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->splitFactor = value;

		return 0;
	}

	// void proland::TerrainNode::splitInvisibleQuads(bool value)
	static int _bind_setSplitInvisibleQuads(lua_State *L) {
		if (!_lg_typecheck_setSplitInvisibleQuads(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TerrainNode::splitInvisibleQuads(bool value) function, expected prototype:\nvoid proland::TerrainNode::splitInvisibleQuads(bool value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		proland::TerrainNode* self=Luna< ork::Object >::checkSubType< proland::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TerrainNode::splitInvisibleQuads(bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->splitInvisibleQuads = value;

		return 0;
	}

	// void proland::TerrainNode::horizonCulling(bool value)
	static int _bind_setHorizonCulling(lua_State *L) {
		if (!_lg_typecheck_setHorizonCulling(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TerrainNode::horizonCulling(bool value) function, expected prototype:\nvoid proland::TerrainNode::horizonCulling(bool value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		proland::TerrainNode* self=Luna< ork::Object >::checkSubType< proland::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TerrainNode::horizonCulling(bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->horizonCulling = value;

		return 0;
	}

	// void proland::TerrainNode::maxLevel(int value)
	static int _bind_setMaxLevel(lua_State *L) {
		if (!_lg_typecheck_setMaxLevel(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TerrainNode::maxLevel(int value) function, expected prototype:\nvoid proland::TerrainNode::maxLevel(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		proland::TerrainNode* self=Luna< ork::Object >::checkSubType< proland::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TerrainNode::maxLevel(int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->maxLevel = value;

		return 0;
	}

	// void proland::TerrainNode::groundHeightAtCamera(float value)
	static int _bind_setGroundHeightAtCamera(lua_State *L) {
		if (!_lg_typecheck_setGroundHeightAtCamera(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TerrainNode::groundHeightAtCamera(float value) function, expected prototype:\nvoid proland::TerrainNode::groundHeightAtCamera(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		proland::TerrainNode* self=Luna< ork::Object >::checkSubType< proland::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TerrainNode::groundHeightAtCamera(float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->groundHeightAtCamera = value;

		return 0;
	}

	// void proland::TerrainNode::nextGroundHeightAtCamera(float value)
	static int _bind_setNextGroundHeightAtCamera(lua_State *L) {
		if (!_lg_typecheck_setNextGroundHeightAtCamera(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TerrainNode::nextGroundHeightAtCamera(float value) function, expected prototype:\nvoid proland::TerrainNode::nextGroundHeightAtCamera(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		proland::TerrainNode* self=Luna< ork::Object >::checkSubType< proland::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TerrainNode::nextGroundHeightAtCamera(float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->nextGroundHeightAtCamera = value;

		return 0;
	}

	// const char * proland::TerrainNode::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * proland::TerrainNode::base_toString() function, expected prototype:\nconst char * proland::TerrainNode::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TerrainNode* self=Luna< ork::Object >::checkSubType< proland::TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * proland::TerrainNode::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->TerrainNode::toString();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

proland::TerrainNode* LunaTraits< proland::TerrainNode >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_TerrainNode::_bind_ctor(L);
}

void LunaTraits< proland::TerrainNode >::_bind_dtor(proland::TerrainNode* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< proland::TerrainNode >::className[] = "TerrainNode";
const char LunaTraits< proland::TerrainNode >::fullName[] = "proland::TerrainNode";
const char LunaTraits< proland::TerrainNode >::moduleName[] = "proland";
const char* LunaTraits< proland::TerrainNode >::parents[] = {"ork.Object", 0};
const int LunaTraits< proland::TerrainNode >::hash = 16519225;
const int LunaTraits< proland::TerrainNode >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< proland::TerrainNode >::methods[] = {
	{"getDeformedCamera", &luna_wrapper_proland_TerrainNode::_bind_getDeformedCamera},
	{"getDeformedFrustumPlanes", &luna_wrapper_proland_TerrainNode::_bind_getDeformedFrustumPlanes},
	{"getLocalCamera", &luna_wrapper_proland_TerrainNode::_bind_getLocalCamera},
	{"getCameraDist", &luna_wrapper_proland_TerrainNode::_bind_getCameraDist},
	{"getVisibility", &luna_wrapper_proland_TerrainNode::_bind_getVisibility},
	{"getSplitDistance", &luna_wrapper_proland_TerrainNode::_bind_getSplitDistance},
	{"getDistFactor", &luna_wrapper_proland_TerrainNode::_bind_getDistFactor},
	{"update", &luna_wrapper_proland_TerrainNode::_bind_update},
	{"addOccluder", &luna_wrapper_proland_TerrainNode::_bind_addOccluder},
	{"isOccluded", &luna_wrapper_proland_TerrainNode::_bind_isOccluded},
	{"getDeform", &luna_wrapper_proland_TerrainNode::_bind_getDeform},
	{"getRoot", &luna_wrapper_proland_TerrainNode::_bind_getRoot},
	{"getSplitFactor", &luna_wrapper_proland_TerrainNode::_bind_getSplitFactor},
	{"getSplitInvisibleQuads", &luna_wrapper_proland_TerrainNode::_bind_getSplitInvisibleQuads},
	{"getHorizonCulling", &luna_wrapper_proland_TerrainNode::_bind_getHorizonCulling},
	{"getMaxLevel", &luna_wrapper_proland_TerrainNode::_bind_getMaxLevel},
	{"getGroundHeightAtCamera", &luna_wrapper_proland_TerrainNode::_bind_getGroundHeightAtCamera},
	{"getNextGroundHeightAtCamera", &luna_wrapper_proland_TerrainNode::_bind_getNextGroundHeightAtCamera},
	{"setDeform", &luna_wrapper_proland_TerrainNode::_bind_setDeform},
	{"setRoot", &luna_wrapper_proland_TerrainNode::_bind_setRoot},
	{"setSplitFactor", &luna_wrapper_proland_TerrainNode::_bind_setSplitFactor},
	{"setSplitInvisibleQuads", &luna_wrapper_proland_TerrainNode::_bind_setSplitInvisibleQuads},
	{"setHorizonCulling", &luna_wrapper_proland_TerrainNode::_bind_setHorizonCulling},
	{"setMaxLevel", &luna_wrapper_proland_TerrainNode::_bind_setMaxLevel},
	{"setGroundHeightAtCamera", &luna_wrapper_proland_TerrainNode::_bind_setGroundHeightAtCamera},
	{"setNextGroundHeightAtCamera", &luna_wrapper_proland_TerrainNode::_bind_setNextGroundHeightAtCamera},
	{"base_toString", &luna_wrapper_proland_TerrainNode::_bind_base_toString},
	{"fromVoid", &luna_wrapper_proland_TerrainNode::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_TerrainNode::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_TerrainNode::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::TerrainNode >::converters[] = {
	{"ork::Object", &luna_wrapper_proland_TerrainNode::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::TerrainNode >::enumValues[] = {
	{0,0}
};



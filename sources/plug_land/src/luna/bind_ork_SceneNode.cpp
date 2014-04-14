#include <plug_common.h>

#include <luna/wrappers/wrapper_ork_SceneNode.h>

class luna_wrapper_ork_SceneNode {
public:
	typedef Luna< ork::SceneNode > luna_t;

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

		ork::SceneNode* self= (ork::SceneNode*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ork::SceneNode >::push(L,self,false);
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
		//ork::SceneNode* ptr= dynamic_cast< ork::SceneNode* >(Luna< ork::Object >::check(L,1));
		ork::SceneNode* ptr= luna_caster< ork::Object, ork::SceneNode >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< ork::SceneNode >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getOwner(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLocalToParent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setLocalToParent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,72889784) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getLocalToWorld(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getWorldToLocal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLocalToCamera(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLocalToScreen(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLocalBounds(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setLocalBounds(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,63151940) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getWorldBounds(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getWorldPos(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFlags(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_hasFlag(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addFlag(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeFlag(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getValues(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getValue(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addValue(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Value >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeValue(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getModules(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getModule(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addModule(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Module >(L,3) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeModule(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMeshes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMesh(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addMesh(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::MeshBuffers >(L,3) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeMesh(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFields(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getField(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addField(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Object >(L,3) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeField(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMethods(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMethod(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addMethod(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Method >(L,3) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeMethod(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getChildrenCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getChild(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addChild(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::SceneNode >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeChild(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getIsVisible(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setIsVisible(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_toString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// ork::SceneNode::SceneNode()
	static ork::SceneNode* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::SceneNode::SceneNode() function, expected prototype:\nork::SceneNode::SceneNode()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new ork::SceneNode();
	}

	// ork::SceneNode::SceneNode(lua_Table * data)
	static ork::SceneNode* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::SceneNode::SceneNode(lua_Table * data) function, expected prototype:\nork::SceneNode::SceneNode(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_ork_SceneNode(L,NULL);
	}

	// Overload binder for ork::SceneNode::SceneNode
	static ork::SceneNode* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function SceneNode, cannot match any of the overloads for function SceneNode:\n  SceneNode()\n  SceneNode(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// ork::ptr< ork::SceneManager > ork::SceneNode::getOwner()
	static int _bind_getOwner(lua_State *L) {
		if (!_lg_typecheck_getOwner(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::SceneManager > ork::SceneNode::getOwner() function, expected prototype:\nork::ptr< ork::SceneManager > ork::SceneNode::getOwner()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::SceneNode* self=Luna< ork::Object >::checkSubType< ork::SceneNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::SceneManager > ork::SceneNode::getOwner(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::SceneManager > lret = self->getOwner();
		Luna< ork::SceneManager >::push(L,lret.get(),false);

		return 1;
	}

	// ork::mat4d ork::SceneNode::getLocalToParent()
	static int _bind_getLocalToParent(lua_State *L) {
		if (!_lg_typecheck_getLocalToParent(L)) {
			luaL_error(L, "luna typecheck failed in ork::mat4d ork::SceneNode::getLocalToParent() function, expected prototype:\nork::mat4d ork::SceneNode::getLocalToParent()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::SceneNode* self=Luna< ork::Object >::checkSubType< ork::SceneNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::mat4d ork::SceneNode::getLocalToParent(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::mat4d stack_lret = self->getLocalToParent();
		ork::mat4d* lret = new ork::mat4d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::mat4d >::push(L,lret,true);

		return 1;
	}

	// void ork::SceneNode::setLocalToParent(const ork::mat4d & t)
	static int _bind_setLocalToParent(lua_State *L) {
		if (!_lg_typecheck_setLocalToParent(L)) {
			luaL_error(L, "luna typecheck failed in void ork::SceneNode::setLocalToParent(const ork::mat4d & t) function, expected prototype:\nvoid ork::SceneNode::setLocalToParent(const ork::mat4d & t)\nClass arguments details:\narg 1 ID = 72889784\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::mat4d* t_ptr=(Luna< ork::mat4d >::check(L,2));
		if( !t_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t in ork::SceneNode::setLocalToParent function");
		}
		const ork::mat4d & t=*t_ptr;

		ork::SceneNode* self=Luna< ork::Object >::checkSubType< ork::SceneNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::SceneNode::setLocalToParent(const ork::mat4d &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setLocalToParent(t);

		return 0;
	}

	// ork::mat4d ork::SceneNode::getLocalToWorld()
	static int _bind_getLocalToWorld(lua_State *L) {
		if (!_lg_typecheck_getLocalToWorld(L)) {
			luaL_error(L, "luna typecheck failed in ork::mat4d ork::SceneNode::getLocalToWorld() function, expected prototype:\nork::mat4d ork::SceneNode::getLocalToWorld()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::SceneNode* self=Luna< ork::Object >::checkSubType< ork::SceneNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::mat4d ork::SceneNode::getLocalToWorld(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::mat4d stack_lret = self->getLocalToWorld();
		ork::mat4d* lret = new ork::mat4d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::mat4d >::push(L,lret,true);

		return 1;
	}

	// ork::mat4d ork::SceneNode::getWorldToLocal()
	static int _bind_getWorldToLocal(lua_State *L) {
		if (!_lg_typecheck_getWorldToLocal(L)) {
			luaL_error(L, "luna typecheck failed in ork::mat4d ork::SceneNode::getWorldToLocal() function, expected prototype:\nork::mat4d ork::SceneNode::getWorldToLocal()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::SceneNode* self=Luna< ork::Object >::checkSubType< ork::SceneNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::mat4d ork::SceneNode::getWorldToLocal(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::mat4d stack_lret = self->getWorldToLocal();
		ork::mat4d* lret = new ork::mat4d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::mat4d >::push(L,lret,true);

		return 1;
	}

	// ork::mat4d ork::SceneNode::getLocalToCamera()
	static int _bind_getLocalToCamera(lua_State *L) {
		if (!_lg_typecheck_getLocalToCamera(L)) {
			luaL_error(L, "luna typecheck failed in ork::mat4d ork::SceneNode::getLocalToCamera() function, expected prototype:\nork::mat4d ork::SceneNode::getLocalToCamera()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::SceneNode* self=Luna< ork::Object >::checkSubType< ork::SceneNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::mat4d ork::SceneNode::getLocalToCamera(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::mat4d stack_lret = self->getLocalToCamera();
		ork::mat4d* lret = new ork::mat4d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::mat4d >::push(L,lret,true);

		return 1;
	}

	// ork::mat4d ork::SceneNode::getLocalToScreen()
	static int _bind_getLocalToScreen(lua_State *L) {
		if (!_lg_typecheck_getLocalToScreen(L)) {
			luaL_error(L, "luna typecheck failed in ork::mat4d ork::SceneNode::getLocalToScreen() function, expected prototype:\nork::mat4d ork::SceneNode::getLocalToScreen()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::SceneNode* self=Luna< ork::Object >::checkSubType< ork::SceneNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::mat4d ork::SceneNode::getLocalToScreen(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::mat4d stack_lret = self->getLocalToScreen();
		ork::mat4d* lret = new ork::mat4d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::mat4d >::push(L,lret,true);

		return 1;
	}

	// ork::box3d ork::SceneNode::getLocalBounds()
	static int _bind_getLocalBounds(lua_State *L) {
		if (!_lg_typecheck_getLocalBounds(L)) {
			luaL_error(L, "luna typecheck failed in ork::box3d ork::SceneNode::getLocalBounds() function, expected prototype:\nork::box3d ork::SceneNode::getLocalBounds()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::SceneNode* self=Luna< ork::Object >::checkSubType< ork::SceneNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::box3d ork::SceneNode::getLocalBounds(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::box3d stack_lret = self->getLocalBounds();
		ork::box3d* lret = new ork::box3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::box3d >::push(L,lret,true);

		return 1;
	}

	// void ork::SceneNode::setLocalBounds(const ork::box3d & bounds)
	static int _bind_setLocalBounds(lua_State *L) {
		if (!_lg_typecheck_setLocalBounds(L)) {
			luaL_error(L, "luna typecheck failed in void ork::SceneNode::setLocalBounds(const ork::box3d & bounds) function, expected prototype:\nvoid ork::SceneNode::setLocalBounds(const ork::box3d & bounds)\nClass arguments details:\narg 1 ID = 63151940\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::box3d* bounds_ptr=(Luna< ork::box3d >::check(L,2));
		if( !bounds_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bounds in ork::SceneNode::setLocalBounds function");
		}
		const ork::box3d & bounds=*bounds_ptr;

		ork::SceneNode* self=Luna< ork::Object >::checkSubType< ork::SceneNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::SceneNode::setLocalBounds(const ork::box3d &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setLocalBounds(bounds);

		return 0;
	}

	// ork::box3d ork::SceneNode::getWorldBounds()
	static int _bind_getWorldBounds(lua_State *L) {
		if (!_lg_typecheck_getWorldBounds(L)) {
			luaL_error(L, "luna typecheck failed in ork::box3d ork::SceneNode::getWorldBounds() function, expected prototype:\nork::box3d ork::SceneNode::getWorldBounds()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::SceneNode* self=Luna< ork::Object >::checkSubType< ork::SceneNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::box3d ork::SceneNode::getWorldBounds(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::box3d stack_lret = self->getWorldBounds();
		ork::box3d* lret = new ork::box3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::box3d >::push(L,lret,true);

		return 1;
	}

	// ork::vec3d ork::SceneNode::getWorldPos()
	static int _bind_getWorldPos(lua_State *L) {
		if (!_lg_typecheck_getWorldPos(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec3d ork::SceneNode::getWorldPos() function, expected prototype:\nork::vec3d ork::SceneNode::getWorldPos()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::SceneNode* self=Luna< ork::Object >::checkSubType< ork::SceneNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec3d ork::SceneNode::getWorldPos(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec3d stack_lret = self->getWorldPos();
		ork::vec3d* lret = new ork::vec3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec3d >::push(L,lret,true);

		return 1;
	}

	// ork::SceneNode::FlagIterator ork::SceneNode::getFlags()
	static int _bind_getFlags(lua_State *L) {
		if (!_lg_typecheck_getFlags(L)) {
			luaL_error(L, "luna typecheck failed in ork::SceneNode::FlagIterator ork::SceneNode::getFlags() function, expected prototype:\nork::SceneNode::FlagIterator ork::SceneNode::getFlags()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::SceneNode* self=Luna< ork::Object >::checkSubType< ork::SceneNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::SceneNode::FlagIterator ork::SceneNode::getFlags(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::SceneNode::FlagIterator stack_lret = self->getFlags();
		ork::SceneNode::FlagIterator* lret = new ork::SceneNode::FlagIterator(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::SceneNode::FlagIterator >::push(L,lret,true);

		return 1;
	}

	// bool ork::SceneNode::hasFlag(const std::string & flag)
	static int _bind_hasFlag(lua_State *L) {
		if (!_lg_typecheck_hasFlag(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::SceneNode::hasFlag(const std::string & flag) function, expected prototype:\nbool ork::SceneNode::hasFlag(const std::string & flag)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string flag(lua_tostring(L,2),lua_objlen(L,2));

		ork::SceneNode* self=Luna< ork::Object >::checkSubType< ork::SceneNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::SceneNode::hasFlag(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->hasFlag(flag);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void ork::SceneNode::addFlag(const std::string & flag)
	static int _bind_addFlag(lua_State *L) {
		if (!_lg_typecheck_addFlag(L)) {
			luaL_error(L, "luna typecheck failed in void ork::SceneNode::addFlag(const std::string & flag) function, expected prototype:\nvoid ork::SceneNode::addFlag(const std::string & flag)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string flag(lua_tostring(L,2),lua_objlen(L,2));

		ork::SceneNode* self=Luna< ork::Object >::checkSubType< ork::SceneNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::SceneNode::addFlag(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addFlag(flag);

		return 0;
	}

	// void ork::SceneNode::removeFlag(const std::string & flag)
	static int _bind_removeFlag(lua_State *L) {
		if (!_lg_typecheck_removeFlag(L)) {
			luaL_error(L, "luna typecheck failed in void ork::SceneNode::removeFlag(const std::string & flag) function, expected prototype:\nvoid ork::SceneNode::removeFlag(const std::string & flag)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string flag(lua_tostring(L,2),lua_objlen(L,2));

		ork::SceneNode* self=Luna< ork::Object >::checkSubType< ork::SceneNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::SceneNode::removeFlag(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->removeFlag(flag);

		return 0;
	}

	// ork::SceneNode::ValueIterator ork::SceneNode::getValues()
	static int _bind_getValues(lua_State *L) {
		if (!_lg_typecheck_getValues(L)) {
			luaL_error(L, "luna typecheck failed in ork::SceneNode::ValueIterator ork::SceneNode::getValues() function, expected prototype:\nork::SceneNode::ValueIterator ork::SceneNode::getValues()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::SceneNode* self=Luna< ork::Object >::checkSubType< ork::SceneNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::SceneNode::ValueIterator ork::SceneNode::getValues(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::SceneNode::ValueIterator stack_lret = self->getValues();
		ork::SceneNode::ValueIterator* lret = new ork::SceneNode::ValueIterator(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::SceneNode::ValueIterator >::push(L,lret,true);

		return 1;
	}

	// ork::ptr< ork::Value > ork::SceneNode::getValue(const std::string & name)
	static int _bind_getValue(lua_State *L) {
		if (!_lg_typecheck_getValue(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Value > ork::SceneNode::getValue(const std::string & name) function, expected prototype:\nork::ptr< ork::Value > ork::SceneNode::getValue(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::SceneNode* self=Luna< ork::Object >::checkSubType< ork::SceneNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Value > ork::SceneNode::getValue(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Value > lret = self->getValue(name);
		Luna< ork::Value >::push(L,lret.get(),false);

		return 1;
	}

	// void ork::SceneNode::addValue(ork::ptr< ork::Value > value)
	static int _bind_addValue(lua_State *L) {
		if (!_lg_typecheck_addValue(L)) {
			luaL_error(L, "luna typecheck failed in void ork::SceneNode::addValue(ork::ptr< ork::Value > value) function, expected prototype:\nvoid ork::SceneNode::addValue(ork::ptr< ork::Value > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Value > value = Luna< ork::Object >::checkSubType< ork::Value >(L,2);

		ork::SceneNode* self=Luna< ork::Object >::checkSubType< ork::SceneNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::SceneNode::addValue(ork::ptr< ork::Value >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addValue(value);

		return 0;
	}

	// void ork::SceneNode::removeValue(const std::string & name)
	static int _bind_removeValue(lua_State *L) {
		if (!_lg_typecheck_removeValue(L)) {
			luaL_error(L, "luna typecheck failed in void ork::SceneNode::removeValue(const std::string & name) function, expected prototype:\nvoid ork::SceneNode::removeValue(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::SceneNode* self=Luna< ork::Object >::checkSubType< ork::SceneNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::SceneNode::removeValue(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->removeValue(name);

		return 0;
	}

	// ork::SceneNode::ModuleIterator ork::SceneNode::getModules()
	static int _bind_getModules(lua_State *L) {
		if (!_lg_typecheck_getModules(L)) {
			luaL_error(L, "luna typecheck failed in ork::SceneNode::ModuleIterator ork::SceneNode::getModules() function, expected prototype:\nork::SceneNode::ModuleIterator ork::SceneNode::getModules()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::SceneNode* self=Luna< ork::Object >::checkSubType< ork::SceneNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::SceneNode::ModuleIterator ork::SceneNode::getModules(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::SceneNode::ModuleIterator stack_lret = self->getModules();
		ork::SceneNode::ModuleIterator* lret = new ork::SceneNode::ModuleIterator(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::SceneNode::ModuleIterator >::push(L,lret,true);

		return 1;
	}

	// ork::ptr< ork::Module > ork::SceneNode::getModule(const std::string & name)
	static int _bind_getModule(lua_State *L) {
		if (!_lg_typecheck_getModule(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Module > ork::SceneNode::getModule(const std::string & name) function, expected prototype:\nork::ptr< ork::Module > ork::SceneNode::getModule(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::SceneNode* self=Luna< ork::Object >::checkSubType< ork::SceneNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Module > ork::SceneNode::getModule(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Module > lret = self->getModule(name);
		Luna< ork::Module >::push(L,lret.get(),false);

		return 1;
	}

	// void ork::SceneNode::addModule(const std::string & name, ork::ptr< ork::Module > s)
	static int _bind_addModule(lua_State *L) {
		if (!_lg_typecheck_addModule(L)) {
			luaL_error(L, "luna typecheck failed in void ork::SceneNode::addModule(const std::string & name, ork::ptr< ork::Module > s) function, expected prototype:\nvoid ork::SceneNode::addModule(const std::string & name, ork::ptr< ork::Module > s)\nClass arguments details:\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));
		ork::ptr< ork::Module > s = Luna< ork::Object >::checkSubType< ork::Module >(L,3);

		ork::SceneNode* self=Luna< ork::Object >::checkSubType< ork::SceneNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::SceneNode::addModule(const std::string &, ork::ptr< ork::Module >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addModule(name, s);

		return 0;
	}

	// void ork::SceneNode::removeModule(const std::string & name)
	static int _bind_removeModule(lua_State *L) {
		if (!_lg_typecheck_removeModule(L)) {
			luaL_error(L, "luna typecheck failed in void ork::SceneNode::removeModule(const std::string & name) function, expected prototype:\nvoid ork::SceneNode::removeModule(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::SceneNode* self=Luna< ork::Object >::checkSubType< ork::SceneNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::SceneNode::removeModule(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->removeModule(name);

		return 0;
	}

	// ork::SceneNode::MeshIterator ork::SceneNode::getMeshes()
	static int _bind_getMeshes(lua_State *L) {
		if (!_lg_typecheck_getMeshes(L)) {
			luaL_error(L, "luna typecheck failed in ork::SceneNode::MeshIterator ork::SceneNode::getMeshes() function, expected prototype:\nork::SceneNode::MeshIterator ork::SceneNode::getMeshes()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::SceneNode* self=Luna< ork::Object >::checkSubType< ork::SceneNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::SceneNode::MeshIterator ork::SceneNode::getMeshes(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::SceneNode::MeshIterator stack_lret = self->getMeshes();
		ork::SceneNode::MeshIterator* lret = new ork::SceneNode::MeshIterator(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::SceneNode::MeshIterator >::push(L,lret,true);

		return 1;
	}

	// ork::ptr< ork::MeshBuffers > ork::SceneNode::getMesh(const std::string & name)
	static int _bind_getMesh(lua_State *L) {
		if (!_lg_typecheck_getMesh(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::MeshBuffers > ork::SceneNode::getMesh(const std::string & name) function, expected prototype:\nork::ptr< ork::MeshBuffers > ork::SceneNode::getMesh(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::SceneNode* self=Luna< ork::Object >::checkSubType< ork::SceneNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::MeshBuffers > ork::SceneNode::getMesh(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::MeshBuffers > lret = self->getMesh(name);
		Luna< ork::MeshBuffers >::push(L,lret.get(),false);

		return 1;
	}

	// void ork::SceneNode::addMesh(const std::string & name, ork::ptr< ork::MeshBuffers > m)
	static int _bind_addMesh(lua_State *L) {
		if (!_lg_typecheck_addMesh(L)) {
			luaL_error(L, "luna typecheck failed in void ork::SceneNode::addMesh(const std::string & name, ork::ptr< ork::MeshBuffers > m) function, expected prototype:\nvoid ork::SceneNode::addMesh(const std::string & name, ork::ptr< ork::MeshBuffers > m)\nClass arguments details:\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));
		ork::ptr< ork::MeshBuffers > m = Luna< ork::Object >::checkSubType< ork::MeshBuffers >(L,3);

		ork::SceneNode* self=Luna< ork::Object >::checkSubType< ork::SceneNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::SceneNode::addMesh(const std::string &, ork::ptr< ork::MeshBuffers >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addMesh(name, m);

		return 0;
	}

	// void ork::SceneNode::removeMesh(const std::string & name)
	static int _bind_removeMesh(lua_State *L) {
		if (!_lg_typecheck_removeMesh(L)) {
			luaL_error(L, "luna typecheck failed in void ork::SceneNode::removeMesh(const std::string & name) function, expected prototype:\nvoid ork::SceneNode::removeMesh(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::SceneNode* self=Luna< ork::Object >::checkSubType< ork::SceneNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::SceneNode::removeMesh(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->removeMesh(name);

		return 0;
	}

	// ork::SceneNode::FieldIterator ork::SceneNode::getFields()
	static int _bind_getFields(lua_State *L) {
		if (!_lg_typecheck_getFields(L)) {
			luaL_error(L, "luna typecheck failed in ork::SceneNode::FieldIterator ork::SceneNode::getFields() function, expected prototype:\nork::SceneNode::FieldIterator ork::SceneNode::getFields()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::SceneNode* self=Luna< ork::Object >::checkSubType< ork::SceneNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::SceneNode::FieldIterator ork::SceneNode::getFields(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::SceneNode::FieldIterator stack_lret = self->getFields();
		ork::SceneNode::FieldIterator* lret = new ork::SceneNode::FieldIterator(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::SceneNode::FieldIterator >::push(L,lret,true);

		return 1;
	}

	// ork::ptr< ork::Object > ork::SceneNode::getField(const std::string & name)
	static int _bind_getField(lua_State *L) {
		if (!_lg_typecheck_getField(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Object > ork::SceneNode::getField(const std::string & name) function, expected prototype:\nork::ptr< ork::Object > ork::SceneNode::getField(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::SceneNode* self=Luna< ork::Object >::checkSubType< ork::SceneNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Object > ork::SceneNode::getField(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Object > lret = self->getField(name);
		Luna< ork::Object >::push(L,lret.get(),false);

		return 1;
	}

	// void ork::SceneNode::addField(const std::string & name, ork::ptr< ork::Object > f)
	static int _bind_addField(lua_State *L) {
		if (!_lg_typecheck_addField(L)) {
			luaL_error(L, "luna typecheck failed in void ork::SceneNode::addField(const std::string & name, ork::ptr< ork::Object > f) function, expected prototype:\nvoid ork::SceneNode::addField(const std::string & name, ork::ptr< ork::Object > f)\nClass arguments details:\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));
		ork::ptr< ork::Object > f = Luna< ork::Object >::checkSubType< ork::Object >(L,3);

		ork::SceneNode* self=Luna< ork::Object >::checkSubType< ork::SceneNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::SceneNode::addField(const std::string &, ork::ptr< ork::Object >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addField(name, f);

		return 0;
	}

	// void ork::SceneNode::removeField(const std::string & name)
	static int _bind_removeField(lua_State *L) {
		if (!_lg_typecheck_removeField(L)) {
			luaL_error(L, "luna typecheck failed in void ork::SceneNode::removeField(const std::string & name) function, expected prototype:\nvoid ork::SceneNode::removeField(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::SceneNode* self=Luna< ork::Object >::checkSubType< ork::SceneNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::SceneNode::removeField(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->removeField(name);

		return 0;
	}

	// ork::SceneNode::MethodIterator ork::SceneNode::getMethods()
	static int _bind_getMethods(lua_State *L) {
		if (!_lg_typecheck_getMethods(L)) {
			luaL_error(L, "luna typecheck failed in ork::SceneNode::MethodIterator ork::SceneNode::getMethods() function, expected prototype:\nork::SceneNode::MethodIterator ork::SceneNode::getMethods()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::SceneNode* self=Luna< ork::Object >::checkSubType< ork::SceneNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::SceneNode::MethodIterator ork::SceneNode::getMethods(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::SceneNode::MethodIterator stack_lret = self->getMethods();
		ork::SceneNode::MethodIterator* lret = new ork::SceneNode::MethodIterator(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::SceneNode::MethodIterator >::push(L,lret,true);

		return 1;
	}

	// ork::ptr< ork::Method > ork::SceneNode::getMethod(const std::string & name)
	static int _bind_getMethod(lua_State *L) {
		if (!_lg_typecheck_getMethod(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Method > ork::SceneNode::getMethod(const std::string & name) function, expected prototype:\nork::ptr< ork::Method > ork::SceneNode::getMethod(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::SceneNode* self=Luna< ork::Object >::checkSubType< ork::SceneNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Method > ork::SceneNode::getMethod(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Method > lret = self->getMethod(name);
		Luna< ork::Method >::push(L,lret.get(),false);

		return 1;
	}

	// void ork::SceneNode::addMethod(const std::string & name, ork::ptr< ork::Method > m)
	static int _bind_addMethod(lua_State *L) {
		if (!_lg_typecheck_addMethod(L)) {
			luaL_error(L, "luna typecheck failed in void ork::SceneNode::addMethod(const std::string & name, ork::ptr< ork::Method > m) function, expected prototype:\nvoid ork::SceneNode::addMethod(const std::string & name, ork::ptr< ork::Method > m)\nClass arguments details:\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));
		ork::ptr< ork::Method > m = Luna< ork::Object >::checkSubType< ork::Method >(L,3);

		ork::SceneNode* self=Luna< ork::Object >::checkSubType< ork::SceneNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::SceneNode::addMethod(const std::string &, ork::ptr< ork::Method >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addMethod(name, m);

		return 0;
	}

	// void ork::SceneNode::removeMethod(const std::string & name)
	static int _bind_removeMethod(lua_State *L) {
		if (!_lg_typecheck_removeMethod(L)) {
			luaL_error(L, "luna typecheck failed in void ork::SceneNode::removeMethod(const std::string & name) function, expected prototype:\nvoid ork::SceneNode::removeMethod(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::SceneNode* self=Luna< ork::Object >::checkSubType< ork::SceneNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::SceneNode::removeMethod(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->removeMethod(name);

		return 0;
	}

	// unsigned int ork::SceneNode::getChildrenCount()
	static int _bind_getChildrenCount(lua_State *L) {
		if (!_lg_typecheck_getChildrenCount(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int ork::SceneNode::getChildrenCount() function, expected prototype:\nunsigned int ork::SceneNode::getChildrenCount()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::SceneNode* self=Luna< ork::Object >::checkSubType< ork::SceneNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int ork::SceneNode::getChildrenCount(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getChildrenCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// ork::ptr< ork::SceneNode > ork::SceneNode::getChild(unsigned int index)
	static int _bind_getChild(lua_State *L) {
		if (!_lg_typecheck_getChild(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::SceneNode > ork::SceneNode::getChild(unsigned int index) function, expected prototype:\nork::ptr< ork::SceneNode > ork::SceneNode::getChild(unsigned int index)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);

		ork::SceneNode* self=Luna< ork::Object >::checkSubType< ork::SceneNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::SceneNode > ork::SceneNode::getChild(unsigned int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::SceneNode > lret = self->getChild(index);
		Luna< ork::SceneNode >::push(L,lret.get(),false);

		return 1;
	}

	// void ork::SceneNode::addChild(ork::ptr< ork::SceneNode > child)
	static int _bind_addChild(lua_State *L) {
		if (!_lg_typecheck_addChild(L)) {
			luaL_error(L, "luna typecheck failed in void ork::SceneNode::addChild(ork::ptr< ork::SceneNode > child) function, expected prototype:\nvoid ork::SceneNode::addChild(ork::ptr< ork::SceneNode > child)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::SceneNode > child = Luna< ork::Object >::checkSubType< ork::SceneNode >(L,2);

		ork::SceneNode* self=Luna< ork::Object >::checkSubType< ork::SceneNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::SceneNode::addChild(ork::ptr< ork::SceneNode >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addChild(child);

		return 0;
	}

	// void ork::SceneNode::removeChild(unsigned int index)
	static int _bind_removeChild(lua_State *L) {
		if (!_lg_typecheck_removeChild(L)) {
			luaL_error(L, "luna typecheck failed in void ork::SceneNode::removeChild(unsigned int index) function, expected prototype:\nvoid ork::SceneNode::removeChild(unsigned int index)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);

		ork::SceneNode* self=Luna< ork::Object >::checkSubType< ork::SceneNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::SceneNode::removeChild(unsigned int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->removeChild(index);

		return 0;
	}

	// bool ork::SceneNode::isVisible()
	static int _bind_getIsVisible(lua_State *L) {
		if (!_lg_typecheck_getIsVisible(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::SceneNode::isVisible() function, expected prototype:\nbool ork::SceneNode::isVisible()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::SceneNode* self=Luna< ork::Object >::checkSubType< ork::SceneNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::SceneNode::isVisible(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isVisible;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void ork::SceneNode::isVisible(bool value)
	static int _bind_setIsVisible(lua_State *L) {
		if (!_lg_typecheck_setIsVisible(L)) {
			luaL_error(L, "luna typecheck failed in void ork::SceneNode::isVisible(bool value) function, expected prototype:\nvoid ork::SceneNode::isVisible(bool value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		ork::SceneNode* self=Luna< ork::Object >::checkSubType< ork::SceneNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::SceneNode::isVisible(bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->isVisible = value;

		return 0;
	}

	// const char * ork::SceneNode::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * ork::SceneNode::base_toString() function, expected prototype:\nconst char * ork::SceneNode::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::SceneNode* self=Luna< ork::Object >::checkSubType< ork::SceneNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * ork::SceneNode::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->SceneNode::toString();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

ork::SceneNode* LunaTraits< ork::SceneNode >::_bind_ctor(lua_State *L) {
	return luna_wrapper_ork_SceneNode::_bind_ctor(L);
}

void LunaTraits< ork::SceneNode >::_bind_dtor(ork::SceneNode* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< ork::SceneNode >::className[] = "SceneNode";
const char LunaTraits< ork::SceneNode >::fullName[] = "ork::SceneNode";
const char LunaTraits< ork::SceneNode >::moduleName[] = "ork";
const char* LunaTraits< ork::SceneNode >::parents[] = {"ork.Object", 0};
const int LunaTraits< ork::SceneNode >::hash = 50781538;
const int LunaTraits< ork::SceneNode >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< ork::SceneNode >::methods[] = {
	{"getOwner", &luna_wrapper_ork_SceneNode::_bind_getOwner},
	{"getLocalToParent", &luna_wrapper_ork_SceneNode::_bind_getLocalToParent},
	{"setLocalToParent", &luna_wrapper_ork_SceneNode::_bind_setLocalToParent},
	{"getLocalToWorld", &luna_wrapper_ork_SceneNode::_bind_getLocalToWorld},
	{"getWorldToLocal", &luna_wrapper_ork_SceneNode::_bind_getWorldToLocal},
	{"getLocalToCamera", &luna_wrapper_ork_SceneNode::_bind_getLocalToCamera},
	{"getLocalToScreen", &luna_wrapper_ork_SceneNode::_bind_getLocalToScreen},
	{"getLocalBounds", &luna_wrapper_ork_SceneNode::_bind_getLocalBounds},
	{"setLocalBounds", &luna_wrapper_ork_SceneNode::_bind_setLocalBounds},
	{"getWorldBounds", &luna_wrapper_ork_SceneNode::_bind_getWorldBounds},
	{"getWorldPos", &luna_wrapper_ork_SceneNode::_bind_getWorldPos},
	{"getFlags", &luna_wrapper_ork_SceneNode::_bind_getFlags},
	{"hasFlag", &luna_wrapper_ork_SceneNode::_bind_hasFlag},
	{"addFlag", &luna_wrapper_ork_SceneNode::_bind_addFlag},
	{"removeFlag", &luna_wrapper_ork_SceneNode::_bind_removeFlag},
	{"getValues", &luna_wrapper_ork_SceneNode::_bind_getValues},
	{"getValue", &luna_wrapper_ork_SceneNode::_bind_getValue},
	{"addValue", &luna_wrapper_ork_SceneNode::_bind_addValue},
	{"removeValue", &luna_wrapper_ork_SceneNode::_bind_removeValue},
	{"getModules", &luna_wrapper_ork_SceneNode::_bind_getModules},
	{"getModule", &luna_wrapper_ork_SceneNode::_bind_getModule},
	{"addModule", &luna_wrapper_ork_SceneNode::_bind_addModule},
	{"removeModule", &luna_wrapper_ork_SceneNode::_bind_removeModule},
	{"getMeshes", &luna_wrapper_ork_SceneNode::_bind_getMeshes},
	{"getMesh", &luna_wrapper_ork_SceneNode::_bind_getMesh},
	{"addMesh", &luna_wrapper_ork_SceneNode::_bind_addMesh},
	{"removeMesh", &luna_wrapper_ork_SceneNode::_bind_removeMesh},
	{"getFields", &luna_wrapper_ork_SceneNode::_bind_getFields},
	{"getField", &luna_wrapper_ork_SceneNode::_bind_getField},
	{"addField", &luna_wrapper_ork_SceneNode::_bind_addField},
	{"removeField", &luna_wrapper_ork_SceneNode::_bind_removeField},
	{"getMethods", &luna_wrapper_ork_SceneNode::_bind_getMethods},
	{"getMethod", &luna_wrapper_ork_SceneNode::_bind_getMethod},
	{"addMethod", &luna_wrapper_ork_SceneNode::_bind_addMethod},
	{"removeMethod", &luna_wrapper_ork_SceneNode::_bind_removeMethod},
	{"getChildrenCount", &luna_wrapper_ork_SceneNode::_bind_getChildrenCount},
	{"getChild", &luna_wrapper_ork_SceneNode::_bind_getChild},
	{"addChild", &luna_wrapper_ork_SceneNode::_bind_addChild},
	{"removeChild", &luna_wrapper_ork_SceneNode::_bind_removeChild},
	{"getIsVisible", &luna_wrapper_ork_SceneNode::_bind_getIsVisible},
	{"setIsVisible", &luna_wrapper_ork_SceneNode::_bind_setIsVisible},
	{"base_toString", &luna_wrapper_ork_SceneNode::_bind_base_toString},
	{"fromVoid", &luna_wrapper_ork_SceneNode::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ork_SceneNode::_bind_asVoid},
	{"getTable", &luna_wrapper_ork_SceneNode::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< ork::SceneNode >::converters[] = {
	{"ork::Object", &luna_wrapper_ork_SceneNode::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< ork::SceneNode >::enumValues[] = {
	{0,0}
};



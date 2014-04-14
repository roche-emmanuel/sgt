#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_Deformation.h>

class luna_wrapper_proland_Deformation {
public:
	typedef Luna< proland::Deformation > luna_t;

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

		proland::Deformation* self= (proland::Deformation*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::Deformation >::push(L,self,false);
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
		//proland::Deformation* ptr= dynamic_cast< proland::Deformation* >(Luna< ork::Object >::check(L,1));
		proland::Deformation* ptr= luna_caster< ork::Object, proland::Deformation >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::Deformation >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_localToDeformed(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304269) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_localToDeformedDifferential(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304269) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_deformedToLocal(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304269) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_deformedToLocalBounds(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304269) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_deformedToTangentFrame(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304269) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUniforms_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::SceneNode >(L,2) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::TerrainNode >(L,3) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,4) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUniforms_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::SceneNode >(L,2) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::TerrainQuad >(L,3) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,4) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getLocalDist(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304269) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,63151940) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getVisibility(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,1381405)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,63151940) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_toString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_localToDeformed(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304269) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_localToDeformedDifferential(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304269) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_deformedToLocal(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304269) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_deformedToLocalBounds(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304269) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_deformedToTangentFrame(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304269) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setUniforms_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::SceneNode >(L,2) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::TerrainNode >(L,3) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,4) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setUniforms_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::SceneNode >(L,2) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::TerrainQuad >(L,3) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,4) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getLocalDist(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304269) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,63151940) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getVisibility(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,1381405)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,63151940) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::Deformation::Deformation()
	static proland::Deformation* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::Deformation::Deformation() function, expected prototype:\nproland::Deformation::Deformation()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new proland::Deformation();
	}

	// proland::Deformation::Deformation(lua_Table * data)
	static proland::Deformation* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::Deformation::Deformation(lua_Table * data) function, expected prototype:\nproland::Deformation::Deformation(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_proland_Deformation(L,NULL);
	}

	// Overload binder for proland::Deformation::Deformation
	static proland::Deformation* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Deformation, cannot match any of the overloads for function Deformation:\n  Deformation()\n  Deformation(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// ork::vec3d proland::Deformation::localToDeformed(const ork::vec3d & localPt) const
	static int _bind_localToDeformed(lua_State *L) {
		if (!_lg_typecheck_localToDeformed(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec3d proland::Deformation::localToDeformed(const ork::vec3d & localPt) const function, expected prototype:\nork::vec3d proland::Deformation::localToDeformed(const ork::vec3d & localPt) const\nClass arguments details:\narg 1 ID = 81304269\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec3d* localPt_ptr=(Luna< ork::vec3d >::check(L,2));
		if( !localPt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg localPt in proland::Deformation::localToDeformed function");
		}
		const ork::vec3d & localPt=*localPt_ptr;

		proland::Deformation* self=Luna< ork::Object >::checkSubType< proland::Deformation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec3d proland::Deformation::localToDeformed(const ork::vec3d &) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec3d stack_lret = self->localToDeformed(localPt);
		ork::vec3d* lret = new ork::vec3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec3d >::push(L,lret,true);

		return 1;
	}

	// ork::mat4d proland::Deformation::localToDeformedDifferential(const ork::vec3d & localPt, bool clamp = false) const
	static int _bind_localToDeformedDifferential(lua_State *L) {
		if (!_lg_typecheck_localToDeformedDifferential(L)) {
			luaL_error(L, "luna typecheck failed in ork::mat4d proland::Deformation::localToDeformedDifferential(const ork::vec3d & localPt, bool clamp = false) const function, expected prototype:\nork::mat4d proland::Deformation::localToDeformedDifferential(const ork::vec3d & localPt, bool clamp = false) const\nClass arguments details:\narg 1 ID = 81304269\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const ork::vec3d* localPt_ptr=(Luna< ork::vec3d >::check(L,2));
		if( !localPt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg localPt in proland::Deformation::localToDeformedDifferential function");
		}
		const ork::vec3d & localPt=*localPt_ptr;
		bool clamp=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)false;

		proland::Deformation* self=Luna< ork::Object >::checkSubType< proland::Deformation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::mat4d proland::Deformation::localToDeformedDifferential(const ork::vec3d &, bool) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::mat4d stack_lret = self->localToDeformedDifferential(localPt, clamp);
		ork::mat4d* lret = new ork::mat4d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::mat4d >::push(L,lret,true);

		return 1;
	}

	// ork::vec3d proland::Deformation::deformedToLocal(const ork::vec3d & deformedPt) const
	static int _bind_deformedToLocal(lua_State *L) {
		if (!_lg_typecheck_deformedToLocal(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec3d proland::Deformation::deformedToLocal(const ork::vec3d & deformedPt) const function, expected prototype:\nork::vec3d proland::Deformation::deformedToLocal(const ork::vec3d & deformedPt) const\nClass arguments details:\narg 1 ID = 81304269\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec3d* deformedPt_ptr=(Luna< ork::vec3d >::check(L,2));
		if( !deformedPt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg deformedPt in proland::Deformation::deformedToLocal function");
		}
		const ork::vec3d & deformedPt=*deformedPt_ptr;

		proland::Deformation* self=Luna< ork::Object >::checkSubType< proland::Deformation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec3d proland::Deformation::deformedToLocal(const ork::vec3d &) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec3d stack_lret = self->deformedToLocal(deformedPt);
		ork::vec3d* lret = new ork::vec3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec3d >::push(L,lret,true);

		return 1;
	}

	// ork::box2f proland::Deformation::deformedToLocalBounds(const ork::vec3d & deformedCenter, double deformedRadius) const
	static int _bind_deformedToLocalBounds(lua_State *L) {
		if (!_lg_typecheck_deformedToLocalBounds(L)) {
			luaL_error(L, "luna typecheck failed in ork::box2f proland::Deformation::deformedToLocalBounds(const ork::vec3d & deformedCenter, double deformedRadius) const function, expected prototype:\nork::box2f proland::Deformation::deformedToLocalBounds(const ork::vec3d & deformedCenter, double deformedRadius) const\nClass arguments details:\narg 1 ID = 81304269\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec3d* deformedCenter_ptr=(Luna< ork::vec3d >::check(L,2));
		if( !deformedCenter_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg deformedCenter in proland::Deformation::deformedToLocalBounds function");
		}
		const ork::vec3d & deformedCenter=*deformedCenter_ptr;
		double deformedRadius=(double)lua_tonumber(L,3);

		proland::Deformation* self=Luna< ork::Object >::checkSubType< proland::Deformation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::box2f proland::Deformation::deformedToLocalBounds(const ork::vec3d &, double) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::box2f stack_lret = self->deformedToLocalBounds(deformedCenter, deformedRadius);
		ork::box2f* lret = new ork::box2f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::box2f >::push(L,lret,true);

		return 1;
	}

	// ork::mat4d proland::Deformation::deformedToTangentFrame(const ork::vec3d & deformedPt) const
	static int _bind_deformedToTangentFrame(lua_State *L) {
		if (!_lg_typecheck_deformedToTangentFrame(L)) {
			luaL_error(L, "luna typecheck failed in ork::mat4d proland::Deformation::deformedToTangentFrame(const ork::vec3d & deformedPt) const function, expected prototype:\nork::mat4d proland::Deformation::deformedToTangentFrame(const ork::vec3d & deformedPt) const\nClass arguments details:\narg 1 ID = 81304269\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec3d* deformedPt_ptr=(Luna< ork::vec3d >::check(L,2));
		if( !deformedPt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg deformedPt in proland::Deformation::deformedToTangentFrame function");
		}
		const ork::vec3d & deformedPt=*deformedPt_ptr;

		proland::Deformation* self=Luna< ork::Object >::checkSubType< proland::Deformation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::mat4d proland::Deformation::deformedToTangentFrame(const ork::vec3d &) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::mat4d stack_lret = self->deformedToTangentFrame(deformedPt);
		ork::mat4d* lret = new ork::mat4d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::mat4d >::push(L,lret,true);

		return 1;
	}

	// void proland::Deformation::setUniforms(ork::ptr< ork::SceneNode > context, ork::ptr< proland::TerrainNode > n, ork::ptr< ork::Program > prog) const
	static int _bind_setUniforms_overload_1(lua_State *L) {
		if (!_lg_typecheck_setUniforms_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Deformation::setUniforms(ork::ptr< ork::SceneNode > context, ork::ptr< proland::TerrainNode > n, ork::ptr< ork::Program > prog) const function, expected prototype:\nvoid proland::Deformation::setUniforms(ork::ptr< ork::SceneNode > context, ork::ptr< proland::TerrainNode > n, ork::ptr< ork::Program > prog) const\nClass arguments details:\narg 1 ID = [unknown]\narg 2 ID = [unknown]\narg 3 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::SceneNode > context = Luna< ork::Object >::checkSubType< ork::SceneNode >(L,2);
		ork::ptr< proland::TerrainNode > n = Luna< ork::Object >::checkSubType< proland::TerrainNode >(L,3);
		ork::ptr< ork::Program > prog = Luna< ork::Object >::checkSubType< ork::Program >(L,4);

		proland::Deformation* self=Luna< ork::Object >::checkSubType< proland::Deformation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Deformation::setUniforms(ork::ptr< ork::SceneNode >, ork::ptr< proland::TerrainNode >, ork::ptr< ork::Program >) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setUniforms(context, n, prog);

		return 0;
	}

	// void proland::Deformation::setUniforms(ork::ptr< ork::SceneNode > context, ork::ptr< proland::TerrainQuad > q, ork::ptr< ork::Program > prog) const
	static int _bind_setUniforms_overload_2(lua_State *L) {
		if (!_lg_typecheck_setUniforms_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Deformation::setUniforms(ork::ptr< ork::SceneNode > context, ork::ptr< proland::TerrainQuad > q, ork::ptr< ork::Program > prog) const function, expected prototype:\nvoid proland::Deformation::setUniforms(ork::ptr< ork::SceneNode > context, ork::ptr< proland::TerrainQuad > q, ork::ptr< ork::Program > prog) const\nClass arguments details:\narg 1 ID = [unknown]\narg 2 ID = [unknown]\narg 3 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::SceneNode > context = Luna< ork::Object >::checkSubType< ork::SceneNode >(L,2);
		ork::ptr< proland::TerrainQuad > q = Luna< ork::Object >::checkSubType< proland::TerrainQuad >(L,3);
		ork::ptr< ork::Program > prog = Luna< ork::Object >::checkSubType< ork::Program >(L,4);

		proland::Deformation* self=Luna< ork::Object >::checkSubType< proland::Deformation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Deformation::setUniforms(ork::ptr< ork::SceneNode >, ork::ptr< proland::TerrainQuad >, ork::ptr< ork::Program >) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setUniforms(context, q, prog);

		return 0;
	}

	// Overload binder for proland::Deformation::setUniforms
	static int _bind_setUniforms(lua_State *L) {
		if (_lg_typecheck_setUniforms_overload_1(L)) return _bind_setUniforms_overload_1(L);
		if (_lg_typecheck_setUniforms_overload_2(L)) return _bind_setUniforms_overload_2(L);

		luaL_error(L, "error in function setUniforms, cannot match any of the overloads for function setUniforms:\n  setUniforms(ork::ptr< ork::SceneNode >, ork::ptr< proland::TerrainNode >, ork::ptr< ork::Program >)\n  setUniforms(ork::ptr< ork::SceneNode >, ork::ptr< proland::TerrainQuad >, ork::ptr< ork::Program >)\n");
		return 0;
	}

	// float proland::Deformation::getLocalDist(const ork::vec3d & localPt, const ork::box3d & localBox) const
	static int _bind_getLocalDist(lua_State *L) {
		if (!_lg_typecheck_getLocalDist(L)) {
			luaL_error(L, "luna typecheck failed in float proland::Deformation::getLocalDist(const ork::vec3d & localPt, const ork::box3d & localBox) const function, expected prototype:\nfloat proland::Deformation::getLocalDist(const ork::vec3d & localPt, const ork::box3d & localBox) const\nClass arguments details:\narg 1 ID = 81304269\narg 2 ID = 63151940\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec3d* localPt_ptr=(Luna< ork::vec3d >::check(L,2));
		if( !localPt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg localPt in proland::Deformation::getLocalDist function");
		}
		const ork::vec3d & localPt=*localPt_ptr;
		const ork::box3d* localBox_ptr=(Luna< ork::box3d >::check(L,3));
		if( !localBox_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg localBox in proland::Deformation::getLocalDist function");
		}
		const ork::box3d & localBox=*localBox_ptr;

		proland::Deformation* self=Luna< ork::Object >::checkSubType< proland::Deformation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::Deformation::getLocalDist(const ork::vec3d &, const ork::box3d &) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getLocalDist(localPt, localBox);
		lua_pushnumber(L,lret);

		return 1;
	}

	// ork::SceneManager::visibility proland::Deformation::getVisibility(const proland::TerrainNode * t, const ork::box3d & localBox) const
	static int _bind_getVisibility(lua_State *L) {
		if (!_lg_typecheck_getVisibility(L)) {
			luaL_error(L, "luna typecheck failed in ork::SceneManager::visibility proland::Deformation::getVisibility(const proland::TerrainNode * t, const ork::box3d & localBox) const function, expected prototype:\nork::SceneManager::visibility proland::Deformation::getVisibility(const proland::TerrainNode * t, const ork::box3d & localBox) const\nClass arguments details:\narg 1 ID = 1381405\narg 2 ID = 63151940\n\n%s",luna_dumpStack(L).c_str());
		}

		const proland::TerrainNode* t=(Luna< ork::Object >::checkSubType< proland::TerrainNode >(L,2));
		const ork::box3d* localBox_ptr=(Luna< ork::box3d >::check(L,3));
		if( !localBox_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg localBox in proland::Deformation::getVisibility function");
		}
		const ork::box3d & localBox=*localBox_ptr;

		proland::Deformation* self=Luna< ork::Object >::checkSubType< proland::Deformation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::SceneManager::visibility proland::Deformation::getVisibility(const proland::TerrainNode *, const ork::box3d &) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::SceneManager::visibility lret = self->getVisibility(t, localBox);
		lua_pushnumber(L,lret);

		return 1;
	}

	// const char * proland::Deformation::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * proland::Deformation::base_toString() function, expected prototype:\nconst char * proland::Deformation::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Deformation* self=Luna< ork::Object >::checkSubType< proland::Deformation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * proland::Deformation::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Deformation::toString();
		lua_pushstring(L,lret);

		return 1;
	}

	// ork::vec3d proland::Deformation::base_localToDeformed(const ork::vec3d & localPt) const
	static int _bind_base_localToDeformed(lua_State *L) {
		if (!_lg_typecheck_base_localToDeformed(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec3d proland::Deformation::base_localToDeformed(const ork::vec3d & localPt) const function, expected prototype:\nork::vec3d proland::Deformation::base_localToDeformed(const ork::vec3d & localPt) const\nClass arguments details:\narg 1 ID = 81304269\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec3d* localPt_ptr=(Luna< ork::vec3d >::check(L,2));
		if( !localPt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg localPt in proland::Deformation::base_localToDeformed function");
		}
		const ork::vec3d & localPt=*localPt_ptr;

		proland::Deformation* self=Luna< ork::Object >::checkSubType< proland::Deformation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec3d proland::Deformation::base_localToDeformed(const ork::vec3d &) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec3d stack_lret = self->Deformation::localToDeformed(localPt);
		ork::vec3d* lret = new ork::vec3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec3d >::push(L,lret,true);

		return 1;
	}

	// ork::mat4d proland::Deformation::base_localToDeformedDifferential(const ork::vec3d & localPt, bool clamp = false) const
	static int _bind_base_localToDeformedDifferential(lua_State *L) {
		if (!_lg_typecheck_base_localToDeformedDifferential(L)) {
			luaL_error(L, "luna typecheck failed in ork::mat4d proland::Deformation::base_localToDeformedDifferential(const ork::vec3d & localPt, bool clamp = false) const function, expected prototype:\nork::mat4d proland::Deformation::base_localToDeformedDifferential(const ork::vec3d & localPt, bool clamp = false) const\nClass arguments details:\narg 1 ID = 81304269\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const ork::vec3d* localPt_ptr=(Luna< ork::vec3d >::check(L,2));
		if( !localPt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg localPt in proland::Deformation::base_localToDeformedDifferential function");
		}
		const ork::vec3d & localPt=*localPt_ptr;
		bool clamp=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)false;

		proland::Deformation* self=Luna< ork::Object >::checkSubType< proland::Deformation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::mat4d proland::Deformation::base_localToDeformedDifferential(const ork::vec3d &, bool) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::mat4d stack_lret = self->Deformation::localToDeformedDifferential(localPt, clamp);
		ork::mat4d* lret = new ork::mat4d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::mat4d >::push(L,lret,true);

		return 1;
	}

	// ork::vec3d proland::Deformation::base_deformedToLocal(const ork::vec3d & deformedPt) const
	static int _bind_base_deformedToLocal(lua_State *L) {
		if (!_lg_typecheck_base_deformedToLocal(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec3d proland::Deformation::base_deformedToLocal(const ork::vec3d & deformedPt) const function, expected prototype:\nork::vec3d proland::Deformation::base_deformedToLocal(const ork::vec3d & deformedPt) const\nClass arguments details:\narg 1 ID = 81304269\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec3d* deformedPt_ptr=(Luna< ork::vec3d >::check(L,2));
		if( !deformedPt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg deformedPt in proland::Deformation::base_deformedToLocal function");
		}
		const ork::vec3d & deformedPt=*deformedPt_ptr;

		proland::Deformation* self=Luna< ork::Object >::checkSubType< proland::Deformation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec3d proland::Deformation::base_deformedToLocal(const ork::vec3d &) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec3d stack_lret = self->Deformation::deformedToLocal(deformedPt);
		ork::vec3d* lret = new ork::vec3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec3d >::push(L,lret,true);

		return 1;
	}

	// ork::box2f proland::Deformation::base_deformedToLocalBounds(const ork::vec3d & deformedCenter, double deformedRadius) const
	static int _bind_base_deformedToLocalBounds(lua_State *L) {
		if (!_lg_typecheck_base_deformedToLocalBounds(L)) {
			luaL_error(L, "luna typecheck failed in ork::box2f proland::Deformation::base_deformedToLocalBounds(const ork::vec3d & deformedCenter, double deformedRadius) const function, expected prototype:\nork::box2f proland::Deformation::base_deformedToLocalBounds(const ork::vec3d & deformedCenter, double deformedRadius) const\nClass arguments details:\narg 1 ID = 81304269\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec3d* deformedCenter_ptr=(Luna< ork::vec3d >::check(L,2));
		if( !deformedCenter_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg deformedCenter in proland::Deformation::base_deformedToLocalBounds function");
		}
		const ork::vec3d & deformedCenter=*deformedCenter_ptr;
		double deformedRadius=(double)lua_tonumber(L,3);

		proland::Deformation* self=Luna< ork::Object >::checkSubType< proland::Deformation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::box2f proland::Deformation::base_deformedToLocalBounds(const ork::vec3d &, double) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::box2f stack_lret = self->Deformation::deformedToLocalBounds(deformedCenter, deformedRadius);
		ork::box2f* lret = new ork::box2f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::box2f >::push(L,lret,true);

		return 1;
	}

	// ork::mat4d proland::Deformation::base_deformedToTangentFrame(const ork::vec3d & deformedPt) const
	static int _bind_base_deformedToTangentFrame(lua_State *L) {
		if (!_lg_typecheck_base_deformedToTangentFrame(L)) {
			luaL_error(L, "luna typecheck failed in ork::mat4d proland::Deformation::base_deformedToTangentFrame(const ork::vec3d & deformedPt) const function, expected prototype:\nork::mat4d proland::Deformation::base_deformedToTangentFrame(const ork::vec3d & deformedPt) const\nClass arguments details:\narg 1 ID = 81304269\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec3d* deformedPt_ptr=(Luna< ork::vec3d >::check(L,2));
		if( !deformedPt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg deformedPt in proland::Deformation::base_deformedToTangentFrame function");
		}
		const ork::vec3d & deformedPt=*deformedPt_ptr;

		proland::Deformation* self=Luna< ork::Object >::checkSubType< proland::Deformation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::mat4d proland::Deformation::base_deformedToTangentFrame(const ork::vec3d &) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::mat4d stack_lret = self->Deformation::deformedToTangentFrame(deformedPt);
		ork::mat4d* lret = new ork::mat4d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::mat4d >::push(L,lret,true);

		return 1;
	}

	// void proland::Deformation::base_setUniforms(ork::ptr< ork::SceneNode > context, ork::ptr< proland::TerrainNode > n, ork::ptr< ork::Program > prog) const
	static int _bind_base_setUniforms_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_setUniforms_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Deformation::base_setUniforms(ork::ptr< ork::SceneNode > context, ork::ptr< proland::TerrainNode > n, ork::ptr< ork::Program > prog) const function, expected prototype:\nvoid proland::Deformation::base_setUniforms(ork::ptr< ork::SceneNode > context, ork::ptr< proland::TerrainNode > n, ork::ptr< ork::Program > prog) const\nClass arguments details:\narg 1 ID = [unknown]\narg 2 ID = [unknown]\narg 3 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::SceneNode > context = Luna< ork::Object >::checkSubType< ork::SceneNode >(L,2);
		ork::ptr< proland::TerrainNode > n = Luna< ork::Object >::checkSubType< proland::TerrainNode >(L,3);
		ork::ptr< ork::Program > prog = Luna< ork::Object >::checkSubType< ork::Program >(L,4);

		proland::Deformation* self=Luna< ork::Object >::checkSubType< proland::Deformation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Deformation::base_setUniforms(ork::ptr< ork::SceneNode >, ork::ptr< proland::TerrainNode >, ork::ptr< ork::Program >) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Deformation::setUniforms(context, n, prog);

		return 0;
	}

	// void proland::Deformation::base_setUniforms(ork::ptr< ork::SceneNode > context, ork::ptr< proland::TerrainQuad > q, ork::ptr< ork::Program > prog) const
	static int _bind_base_setUniforms_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_setUniforms_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Deformation::base_setUniforms(ork::ptr< ork::SceneNode > context, ork::ptr< proland::TerrainQuad > q, ork::ptr< ork::Program > prog) const function, expected prototype:\nvoid proland::Deformation::base_setUniforms(ork::ptr< ork::SceneNode > context, ork::ptr< proland::TerrainQuad > q, ork::ptr< ork::Program > prog) const\nClass arguments details:\narg 1 ID = [unknown]\narg 2 ID = [unknown]\narg 3 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::SceneNode > context = Luna< ork::Object >::checkSubType< ork::SceneNode >(L,2);
		ork::ptr< proland::TerrainQuad > q = Luna< ork::Object >::checkSubType< proland::TerrainQuad >(L,3);
		ork::ptr< ork::Program > prog = Luna< ork::Object >::checkSubType< ork::Program >(L,4);

		proland::Deformation* self=Luna< ork::Object >::checkSubType< proland::Deformation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Deformation::base_setUniforms(ork::ptr< ork::SceneNode >, ork::ptr< proland::TerrainQuad >, ork::ptr< ork::Program >) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Deformation::setUniforms(context, q, prog);

		return 0;
	}

	// Overload binder for proland::Deformation::base_setUniforms
	static int _bind_base_setUniforms(lua_State *L) {
		if (_lg_typecheck_base_setUniforms_overload_1(L)) return _bind_base_setUniforms_overload_1(L);
		if (_lg_typecheck_base_setUniforms_overload_2(L)) return _bind_base_setUniforms_overload_2(L);

		luaL_error(L, "error in function base_setUniforms, cannot match any of the overloads for function base_setUniforms:\n  base_setUniforms(ork::ptr< ork::SceneNode >, ork::ptr< proland::TerrainNode >, ork::ptr< ork::Program >)\n  base_setUniforms(ork::ptr< ork::SceneNode >, ork::ptr< proland::TerrainQuad >, ork::ptr< ork::Program >)\n");
		return 0;
	}

	// float proland::Deformation::base_getLocalDist(const ork::vec3d & localPt, const ork::box3d & localBox) const
	static int _bind_base_getLocalDist(lua_State *L) {
		if (!_lg_typecheck_base_getLocalDist(L)) {
			luaL_error(L, "luna typecheck failed in float proland::Deformation::base_getLocalDist(const ork::vec3d & localPt, const ork::box3d & localBox) const function, expected prototype:\nfloat proland::Deformation::base_getLocalDist(const ork::vec3d & localPt, const ork::box3d & localBox) const\nClass arguments details:\narg 1 ID = 81304269\narg 2 ID = 63151940\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec3d* localPt_ptr=(Luna< ork::vec3d >::check(L,2));
		if( !localPt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg localPt in proland::Deformation::base_getLocalDist function");
		}
		const ork::vec3d & localPt=*localPt_ptr;
		const ork::box3d* localBox_ptr=(Luna< ork::box3d >::check(L,3));
		if( !localBox_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg localBox in proland::Deformation::base_getLocalDist function");
		}
		const ork::box3d & localBox=*localBox_ptr;

		proland::Deformation* self=Luna< ork::Object >::checkSubType< proland::Deformation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::Deformation::base_getLocalDist(const ork::vec3d &, const ork::box3d &) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->Deformation::getLocalDist(localPt, localBox);
		lua_pushnumber(L,lret);

		return 1;
	}

	// ork::SceneManager::visibility proland::Deformation::base_getVisibility(const proland::TerrainNode * t, const ork::box3d & localBox) const
	static int _bind_base_getVisibility(lua_State *L) {
		if (!_lg_typecheck_base_getVisibility(L)) {
			luaL_error(L, "luna typecheck failed in ork::SceneManager::visibility proland::Deformation::base_getVisibility(const proland::TerrainNode * t, const ork::box3d & localBox) const function, expected prototype:\nork::SceneManager::visibility proland::Deformation::base_getVisibility(const proland::TerrainNode * t, const ork::box3d & localBox) const\nClass arguments details:\narg 1 ID = 1381405\narg 2 ID = 63151940\n\n%s",luna_dumpStack(L).c_str());
		}

		const proland::TerrainNode* t=(Luna< ork::Object >::checkSubType< proland::TerrainNode >(L,2));
		const ork::box3d* localBox_ptr=(Luna< ork::box3d >::check(L,3));
		if( !localBox_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg localBox in proland::Deformation::base_getVisibility function");
		}
		const ork::box3d & localBox=*localBox_ptr;

		proland::Deformation* self=Luna< ork::Object >::checkSubType< proland::Deformation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::SceneManager::visibility proland::Deformation::base_getVisibility(const proland::TerrainNode *, const ork::box3d &) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::SceneManager::visibility lret = self->Deformation::getVisibility(t, localBox);
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

proland::Deformation* LunaTraits< proland::Deformation >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_Deformation::_bind_ctor(L);
}

void LunaTraits< proland::Deformation >::_bind_dtor(proland::Deformation* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< proland::Deformation >::className[] = "Deformation";
const char LunaTraits< proland::Deformation >::fullName[] = "proland::Deformation";
const char LunaTraits< proland::Deformation >::moduleName[] = "proland";
const char* LunaTraits< proland::Deformation >::parents[] = {"ork.Object", 0};
const int LunaTraits< proland::Deformation >::hash = 42574160;
const int LunaTraits< proland::Deformation >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< proland::Deformation >::methods[] = {
	{"localToDeformed", &luna_wrapper_proland_Deformation::_bind_localToDeformed},
	{"localToDeformedDifferential", &luna_wrapper_proland_Deformation::_bind_localToDeformedDifferential},
	{"deformedToLocal", &luna_wrapper_proland_Deformation::_bind_deformedToLocal},
	{"deformedToLocalBounds", &luna_wrapper_proland_Deformation::_bind_deformedToLocalBounds},
	{"deformedToTangentFrame", &luna_wrapper_proland_Deformation::_bind_deformedToTangentFrame},
	{"setUniforms", &luna_wrapper_proland_Deformation::_bind_setUniforms},
	{"getLocalDist", &luna_wrapper_proland_Deformation::_bind_getLocalDist},
	{"getVisibility", &luna_wrapper_proland_Deformation::_bind_getVisibility},
	{"base_toString", &luna_wrapper_proland_Deformation::_bind_base_toString},
	{"base_localToDeformed", &luna_wrapper_proland_Deformation::_bind_base_localToDeformed},
	{"base_localToDeformedDifferential", &luna_wrapper_proland_Deformation::_bind_base_localToDeformedDifferential},
	{"base_deformedToLocal", &luna_wrapper_proland_Deformation::_bind_base_deformedToLocal},
	{"base_deformedToLocalBounds", &luna_wrapper_proland_Deformation::_bind_base_deformedToLocalBounds},
	{"base_deformedToTangentFrame", &luna_wrapper_proland_Deformation::_bind_base_deformedToTangentFrame},
	{"base_setUniforms", &luna_wrapper_proland_Deformation::_bind_base_setUniforms},
	{"base_getLocalDist", &luna_wrapper_proland_Deformation::_bind_base_getLocalDist},
	{"base_getVisibility", &luna_wrapper_proland_Deformation::_bind_base_getVisibility},
	{"fromVoid", &luna_wrapper_proland_Deformation::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_Deformation::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_Deformation::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::Deformation >::converters[] = {
	{"ork::Object", &luna_wrapper_proland_Deformation::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::Deformation >::enumValues[] = {
	{0,0}
};



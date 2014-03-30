#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_ComputeBoundsVisitor.h>

class luna_wrapper_osg_ComputeBoundsVisitor {
public:
	typedef Luna< osg::ComputeBoundsVisitor > luna_t;

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

		osg::ComputeBoundsVisitor* self= (osg::ComputeBoundsVisitor*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::ComputeBoundsVisitor >::push(L,self,false);
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
		//osg::ComputeBoundsVisitor* ptr= dynamic_cast< osg::ComputeBoundsVisitor* >(Luna< osg::Referenced >::check(L,1));
		osg::ComputeBoundsVisitor* ptr= luna_caster< osg::Referenced, osg::ComputeBoundsVisitor >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::ComputeBoundsVisitor >::push(L,ptr,false);
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

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getBoundingBox(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPolytope(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,26652350) ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getBase(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,26652350) ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Transform >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Geode >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_pushMatrix(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_popMatrix(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_applyDrawable(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getEyePoint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getViewPoint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getDistanceToEyePoint(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getDistanceFromEyePoint(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getDistanceToViewPoint(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Transform >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Geode >(L,2))) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::ComputeBoundsVisitor::ComputeBoundsVisitor(osg::NodeVisitor::TraversalMode traversalMode = osg::NodeVisitor::TRAVERSE_ALL_CHILDREN)
	static osg::ComputeBoundsVisitor* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::ComputeBoundsVisitor::ComputeBoundsVisitor(osg::NodeVisitor::TraversalMode traversalMode = osg::NodeVisitor::TRAVERSE_ALL_CHILDREN) function, expected prototype:\nosg::ComputeBoundsVisitor::ComputeBoundsVisitor(osg::NodeVisitor::TraversalMode traversalMode = osg::NodeVisitor::TRAVERSE_ALL_CHILDREN)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::NodeVisitor::TraversalMode traversalMode=luatop>0 ? (osg::NodeVisitor::TraversalMode)lua_tointeger(L,1) : (osg::NodeVisitor::TraversalMode)osg::NodeVisitor::TRAVERSE_ALL_CHILDREN;

		return new osg::ComputeBoundsVisitor(traversalMode);
	}

	// osg::ComputeBoundsVisitor::ComputeBoundsVisitor(lua_Table * data, osg::NodeVisitor::TraversalMode traversalMode = osg::NodeVisitor::TRAVERSE_ALL_CHILDREN)
	static osg::ComputeBoundsVisitor* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::ComputeBoundsVisitor::ComputeBoundsVisitor(lua_Table * data, osg::NodeVisitor::TraversalMode traversalMode = osg::NodeVisitor::TRAVERSE_ALL_CHILDREN) function, expected prototype:\nosg::ComputeBoundsVisitor::ComputeBoundsVisitor(lua_Table * data, osg::NodeVisitor::TraversalMode traversalMode = osg::NodeVisitor::TRAVERSE_ALL_CHILDREN)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::NodeVisitor::TraversalMode traversalMode=luatop>1 ? (osg::NodeVisitor::TraversalMode)lua_tointeger(L,2) : (osg::NodeVisitor::TraversalMode)osg::NodeVisitor::TRAVERSE_ALL_CHILDREN;

		return new wrapper_osg_ComputeBoundsVisitor(L,NULL, traversalMode);
	}

	// Overload binder for osg::ComputeBoundsVisitor::ComputeBoundsVisitor
	static osg::ComputeBoundsVisitor* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function ComputeBoundsVisitor, cannot match any of the overloads for function ComputeBoundsVisitor:\n  ComputeBoundsVisitor(osg::NodeVisitor::TraversalMode)\n  ComputeBoundsVisitor(lua_Table *, osg::NodeVisitor::TraversalMode)\n");
		return NULL;
	}


	// Function binds:
	// const char * osg::ComputeBoundsVisitor::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::ComputeBoundsVisitor::libraryName() const function, expected prototype:\nconst char * osg::ComputeBoundsVisitor::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ComputeBoundsVisitor* self=Luna< osg::Referenced >::checkSubType< osg::ComputeBoundsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::ComputeBoundsVisitor::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::ComputeBoundsVisitor::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::ComputeBoundsVisitor::className() const function, expected prototype:\nconst char * osg::ComputeBoundsVisitor::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ComputeBoundsVisitor* self=Luna< osg::Referenced >::checkSubType< osg::ComputeBoundsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::ComputeBoundsVisitor::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::ComputeBoundsVisitor::reset()
	static int _bind_reset(lua_State *L) {
		if (!_lg_typecheck_reset(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ComputeBoundsVisitor::reset() function, expected prototype:\nvoid osg::ComputeBoundsVisitor::reset()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ComputeBoundsVisitor* self=Luna< osg::Referenced >::checkSubType< osg::ComputeBoundsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ComputeBoundsVisitor::reset(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->reset();

		return 0;
	}

	// osg::BoundingBoxd & osg::ComputeBoundsVisitor::getBoundingBox()
	static int _bind_getBoundingBox(lua_State *L) {
		if (!_lg_typecheck_getBoundingBox(L)) {
			luaL_error(L, "luna typecheck failed in osg::BoundingBoxd & osg::ComputeBoundsVisitor::getBoundingBox() function, expected prototype:\nosg::BoundingBoxd & osg::ComputeBoundsVisitor::getBoundingBox()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ComputeBoundsVisitor* self=Luna< osg::Referenced >::checkSubType< osg::ComputeBoundsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::BoundingBoxd & osg::ComputeBoundsVisitor::getBoundingBox(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::BoundingBoxd* lret = &self->getBoundingBox();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingBoxd >::push(L,lret,false);

		return 1;
	}

	// void osg::ComputeBoundsVisitor::getPolytope(osg::Polytope & polytope, float margin = 0.1) const
	static int _bind_getPolytope(lua_State *L) {
		if (!_lg_typecheck_getPolytope(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ComputeBoundsVisitor::getPolytope(osg::Polytope & polytope, float margin = 0.1) const function, expected prototype:\nvoid osg::ComputeBoundsVisitor::getPolytope(osg::Polytope & polytope, float margin = 0.1) const\nClass arguments details:\narg 1 ID = 26652350\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::Polytope* polytope_ptr=(Luna< osg::Polytope >::check(L,2));
		if( !polytope_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg polytope in osg::ComputeBoundsVisitor::getPolytope function");
		}
		osg::Polytope & polytope=*polytope_ptr;
		float margin=luatop>2 ? (float)lua_tonumber(L,3) : (float)0.1;

		osg::ComputeBoundsVisitor* self=Luna< osg::Referenced >::checkSubType< osg::ComputeBoundsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ComputeBoundsVisitor::getPolytope(osg::Polytope &, float) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getPolytope(polytope, margin);

		return 0;
	}

	// void osg::ComputeBoundsVisitor::getBase(osg::Polytope & polytope, float margin = 0.1) const
	static int _bind_getBase(lua_State *L) {
		if (!_lg_typecheck_getBase(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ComputeBoundsVisitor::getBase(osg::Polytope & polytope, float margin = 0.1) const function, expected prototype:\nvoid osg::ComputeBoundsVisitor::getBase(osg::Polytope & polytope, float margin = 0.1) const\nClass arguments details:\narg 1 ID = 26652350\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::Polytope* polytope_ptr=(Luna< osg::Polytope >::check(L,2));
		if( !polytope_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg polytope in osg::ComputeBoundsVisitor::getBase function");
		}
		osg::Polytope & polytope=*polytope_ptr;
		float margin=luatop>2 ? (float)lua_tonumber(L,3) : (float)0.1;

		osg::ComputeBoundsVisitor* self=Luna< osg::Referenced >::checkSubType< osg::ComputeBoundsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ComputeBoundsVisitor::getBase(osg::Polytope &, float) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getBase(polytope, margin);

		return 0;
	}

	// void osg::ComputeBoundsVisitor::apply(osg::Node & node)
	static int _bind_apply_overload_1(lua_State *L) {
		if (!_lg_typecheck_apply_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ComputeBoundsVisitor::apply(osg::Node & node) function, expected prototype:\nvoid osg::ComputeBoundsVisitor::apply(osg::Node & node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osg::ComputeBoundsVisitor::apply function");
		}
		osg::Node & node=*node_ptr;

		osg::ComputeBoundsVisitor* self=Luna< osg::Referenced >::checkSubType< osg::ComputeBoundsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ComputeBoundsVisitor::apply(osg::Node &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(node);

		return 0;
	}

	// void osg::ComputeBoundsVisitor::apply(osg::Transform & transform)
	static int _bind_apply_overload_2(lua_State *L) {
		if (!_lg_typecheck_apply_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ComputeBoundsVisitor::apply(osg::Transform & transform) function, expected prototype:\nvoid osg::ComputeBoundsVisitor::apply(osg::Transform & transform)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Transform* transform_ptr=(Luna< osg::Referenced >::checkSubType< osg::Transform >(L,2));
		if( !transform_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transform in osg::ComputeBoundsVisitor::apply function");
		}
		osg::Transform & transform=*transform_ptr;

		osg::ComputeBoundsVisitor* self=Luna< osg::Referenced >::checkSubType< osg::ComputeBoundsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ComputeBoundsVisitor::apply(osg::Transform &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(transform);

		return 0;
	}

	// void osg::ComputeBoundsVisitor::apply(osg::Geode & geode)
	static int _bind_apply_overload_3(lua_State *L) {
		if (!_lg_typecheck_apply_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ComputeBoundsVisitor::apply(osg::Geode & geode) function, expected prototype:\nvoid osg::ComputeBoundsVisitor::apply(osg::Geode & geode)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Geode* geode_ptr=(Luna< osg::Referenced >::checkSubType< osg::Geode >(L,2));
		if( !geode_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg geode in osg::ComputeBoundsVisitor::apply function");
		}
		osg::Geode & geode=*geode_ptr;

		osg::ComputeBoundsVisitor* self=Luna< osg::Referenced >::checkSubType< osg::ComputeBoundsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ComputeBoundsVisitor::apply(osg::Geode &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(geode);

		return 0;
	}

	// Overload binder for osg::ComputeBoundsVisitor::apply
	static int _bind_apply(lua_State *L) {
		if (_lg_typecheck_apply_overload_1(L)) return _bind_apply_overload_1(L);
		if (_lg_typecheck_apply_overload_2(L)) return _bind_apply_overload_2(L);
		if (_lg_typecheck_apply_overload_3(L)) return _bind_apply_overload_3(L);

		luaL_error(L, "error in function apply, cannot match any of the overloads for function apply:\n  apply(osg::Node &)\n  apply(osg::Transform &)\n  apply(osg::Geode &)\n");
		return 0;
	}

	// void osg::ComputeBoundsVisitor::pushMatrix(osg::Matrixd & matrix)
	static int _bind_pushMatrix(lua_State *L) {
		if (!_lg_typecheck_pushMatrix(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ComputeBoundsVisitor::pushMatrix(osg::Matrixd & matrix) function, expected prototype:\nvoid osg::ComputeBoundsVisitor::pushMatrix(osg::Matrixd & matrix)\nClass arguments details:\narg 1 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osg::ComputeBoundsVisitor::pushMatrix function");
		}
		osg::Matrixd & matrix=*matrix_ptr;

		osg::ComputeBoundsVisitor* self=Luna< osg::Referenced >::checkSubType< osg::ComputeBoundsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ComputeBoundsVisitor::pushMatrix(osg::Matrixd &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->pushMatrix(matrix);

		return 0;
	}

	// void osg::ComputeBoundsVisitor::popMatrix()
	static int _bind_popMatrix(lua_State *L) {
		if (!_lg_typecheck_popMatrix(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ComputeBoundsVisitor::popMatrix() function, expected prototype:\nvoid osg::ComputeBoundsVisitor::popMatrix()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ComputeBoundsVisitor* self=Luna< osg::Referenced >::checkSubType< osg::ComputeBoundsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ComputeBoundsVisitor::popMatrix(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->popMatrix();

		return 0;
	}

	// void osg::ComputeBoundsVisitor::applyDrawable(osg::Drawable * drawable)
	static int _bind_applyDrawable(lua_State *L) {
		if (!_lg_typecheck_applyDrawable(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ComputeBoundsVisitor::applyDrawable(osg::Drawable * drawable) function, expected prototype:\nvoid osg::ComputeBoundsVisitor::applyDrawable(osg::Drawable * drawable)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Drawable* drawable=(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,2));

		osg::ComputeBoundsVisitor* self=Luna< osg::Referenced >::checkSubType< osg::ComputeBoundsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ComputeBoundsVisitor::applyDrawable(osg::Drawable *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->applyDrawable(drawable);

		return 0;
	}

	// void osg::ComputeBoundsVisitor::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ComputeBoundsVisitor::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::ComputeBoundsVisitor::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::ComputeBoundsVisitor* self=Luna< osg::Referenced >::checkSubType< osg::ComputeBoundsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ComputeBoundsVisitor::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ComputeBoundsVisitor::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// osg::Vec3f osg::ComputeBoundsVisitor::base_getEyePoint() const
	static int _bind_base_getEyePoint(lua_State *L) {
		if (!_lg_typecheck_base_getEyePoint(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3f osg::ComputeBoundsVisitor::base_getEyePoint() const function, expected prototype:\nosg::Vec3f osg::ComputeBoundsVisitor::base_getEyePoint() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ComputeBoundsVisitor* self=Luna< osg::Referenced >::checkSubType< osg::ComputeBoundsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3f osg::ComputeBoundsVisitor::base_getEyePoint() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec3f stack_lret = self->ComputeBoundsVisitor::getEyePoint();
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// osg::Vec3f osg::ComputeBoundsVisitor::base_getViewPoint() const
	static int _bind_base_getViewPoint(lua_State *L) {
		if (!_lg_typecheck_base_getViewPoint(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3f osg::ComputeBoundsVisitor::base_getViewPoint() const function, expected prototype:\nosg::Vec3f osg::ComputeBoundsVisitor::base_getViewPoint() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ComputeBoundsVisitor* self=Luna< osg::Referenced >::checkSubType< osg::ComputeBoundsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3f osg::ComputeBoundsVisitor::base_getViewPoint() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec3f stack_lret = self->ComputeBoundsVisitor::getViewPoint();
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// float osg::ComputeBoundsVisitor::base_getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const
	static int _bind_base_getDistanceToEyePoint(lua_State *L) {
		if (!_lg_typecheck_base_getDistanceToEyePoint(L)) {
			luaL_error(L, "luna typecheck failed in float osg::ComputeBoundsVisitor::base_getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const function, expected prototype:\nfloat osg::ComputeBoundsVisitor::base_getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ComputeBoundsVisitor::base_getDistanceToEyePoint function");
		}
		const osg::Vec3f & _arg1=*_arg1_ptr;
		bool _arg2=(bool)(lua_toboolean(L,3)==1);

		osg::ComputeBoundsVisitor* self=Luna< osg::Referenced >::checkSubType< osg::ComputeBoundsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osg::ComputeBoundsVisitor::base_getDistanceToEyePoint(const osg::Vec3f &, bool) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->ComputeBoundsVisitor::getDistanceToEyePoint(_arg1, _arg2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osg::ComputeBoundsVisitor::base_getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const
	static int _bind_base_getDistanceFromEyePoint(lua_State *L) {
		if (!_lg_typecheck_base_getDistanceFromEyePoint(L)) {
			luaL_error(L, "luna typecheck failed in float osg::ComputeBoundsVisitor::base_getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const function, expected prototype:\nfloat osg::ComputeBoundsVisitor::base_getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ComputeBoundsVisitor::base_getDistanceFromEyePoint function");
		}
		const osg::Vec3f & _arg1=*_arg1_ptr;
		bool _arg2=(bool)(lua_toboolean(L,3)==1);

		osg::ComputeBoundsVisitor* self=Luna< osg::Referenced >::checkSubType< osg::ComputeBoundsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osg::ComputeBoundsVisitor::base_getDistanceFromEyePoint(const osg::Vec3f &, bool) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->ComputeBoundsVisitor::getDistanceFromEyePoint(_arg1, _arg2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osg::ComputeBoundsVisitor::base_getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const
	static int _bind_base_getDistanceToViewPoint(lua_State *L) {
		if (!_lg_typecheck_base_getDistanceToViewPoint(L)) {
			luaL_error(L, "luna typecheck failed in float osg::ComputeBoundsVisitor::base_getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const function, expected prototype:\nfloat osg::ComputeBoundsVisitor::base_getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ComputeBoundsVisitor::base_getDistanceToViewPoint function");
		}
		const osg::Vec3f & _arg1=*_arg1_ptr;
		bool _arg2=(bool)(lua_toboolean(L,3)==1);

		osg::ComputeBoundsVisitor* self=Luna< osg::Referenced >::checkSubType< osg::ComputeBoundsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osg::ComputeBoundsVisitor::base_getDistanceToViewPoint(const osg::Vec3f &, bool) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->ComputeBoundsVisitor::getDistanceToViewPoint(_arg1, _arg2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// const char * osg::ComputeBoundsVisitor::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::ComputeBoundsVisitor::base_libraryName() const function, expected prototype:\nconst char * osg::ComputeBoundsVisitor::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ComputeBoundsVisitor* self=Luna< osg::Referenced >::checkSubType< osg::ComputeBoundsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::ComputeBoundsVisitor::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->ComputeBoundsVisitor::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::ComputeBoundsVisitor::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::ComputeBoundsVisitor::base_className() const function, expected prototype:\nconst char * osg::ComputeBoundsVisitor::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ComputeBoundsVisitor* self=Luna< osg::Referenced >::checkSubType< osg::ComputeBoundsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::ComputeBoundsVisitor::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->ComputeBoundsVisitor::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::ComputeBoundsVisitor::base_reset()
	static int _bind_base_reset(lua_State *L) {
		if (!_lg_typecheck_base_reset(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ComputeBoundsVisitor::base_reset() function, expected prototype:\nvoid osg::ComputeBoundsVisitor::base_reset()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ComputeBoundsVisitor* self=Luna< osg::Referenced >::checkSubType< osg::ComputeBoundsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ComputeBoundsVisitor::base_reset(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ComputeBoundsVisitor::reset();

		return 0;
	}

	// void osg::ComputeBoundsVisitor::base_apply(osg::Node & node)
	static int _bind_base_apply_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ComputeBoundsVisitor::base_apply(osg::Node & node) function, expected prototype:\nvoid osg::ComputeBoundsVisitor::base_apply(osg::Node & node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osg::ComputeBoundsVisitor::base_apply function");
		}
		osg::Node & node=*node_ptr;

		osg::ComputeBoundsVisitor* self=Luna< osg::Referenced >::checkSubType< osg::ComputeBoundsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ComputeBoundsVisitor::base_apply(osg::Node &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ComputeBoundsVisitor::apply(node);

		return 0;
	}

	// void osg::ComputeBoundsVisitor::base_apply(osg::Transform & transform)
	static int _bind_base_apply_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ComputeBoundsVisitor::base_apply(osg::Transform & transform) function, expected prototype:\nvoid osg::ComputeBoundsVisitor::base_apply(osg::Transform & transform)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Transform* transform_ptr=(Luna< osg::Referenced >::checkSubType< osg::Transform >(L,2));
		if( !transform_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transform in osg::ComputeBoundsVisitor::base_apply function");
		}
		osg::Transform & transform=*transform_ptr;

		osg::ComputeBoundsVisitor* self=Luna< osg::Referenced >::checkSubType< osg::ComputeBoundsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ComputeBoundsVisitor::base_apply(osg::Transform &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ComputeBoundsVisitor::apply(transform);

		return 0;
	}

	// void osg::ComputeBoundsVisitor::base_apply(osg::Geode & geode)
	static int _bind_base_apply_overload_3(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ComputeBoundsVisitor::base_apply(osg::Geode & geode) function, expected prototype:\nvoid osg::ComputeBoundsVisitor::base_apply(osg::Geode & geode)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Geode* geode_ptr=(Luna< osg::Referenced >::checkSubType< osg::Geode >(L,2));
		if( !geode_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg geode in osg::ComputeBoundsVisitor::base_apply function");
		}
		osg::Geode & geode=*geode_ptr;

		osg::ComputeBoundsVisitor* self=Luna< osg::Referenced >::checkSubType< osg::ComputeBoundsVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ComputeBoundsVisitor::base_apply(osg::Geode &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ComputeBoundsVisitor::apply(geode);

		return 0;
	}

	// Overload binder for osg::ComputeBoundsVisitor::base_apply
	static int _bind_base_apply(lua_State *L) {
		if (_lg_typecheck_base_apply_overload_1(L)) return _bind_base_apply_overload_1(L);
		if (_lg_typecheck_base_apply_overload_2(L)) return _bind_base_apply_overload_2(L);
		if (_lg_typecheck_base_apply_overload_3(L)) return _bind_base_apply_overload_3(L);

		luaL_error(L, "error in function base_apply, cannot match any of the overloads for function base_apply:\n  base_apply(osg::Node &)\n  base_apply(osg::Transform &)\n  base_apply(osg::Geode &)\n");
		return 0;
	}


	// Operator binds:

};

osg::ComputeBoundsVisitor* LunaTraits< osg::ComputeBoundsVisitor >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_ComputeBoundsVisitor::_bind_ctor(L);
}

void LunaTraits< osg::ComputeBoundsVisitor >::_bind_dtor(osg::ComputeBoundsVisitor* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::ComputeBoundsVisitor >::className[] = "ComputeBoundsVisitor";
const char LunaTraits< osg::ComputeBoundsVisitor >::fullName[] = "osg::ComputeBoundsVisitor";
const char LunaTraits< osg::ComputeBoundsVisitor >::moduleName[] = "osg";
const char* LunaTraits< osg::ComputeBoundsVisitor >::parents[] = {"osg.NodeVisitor", 0};
const int LunaTraits< osg::ComputeBoundsVisitor >::hash = 55263521;
const int LunaTraits< osg::ComputeBoundsVisitor >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::ComputeBoundsVisitor >::methods[] = {
	{"libraryName", &luna_wrapper_osg_ComputeBoundsVisitor::_bind_libraryName},
	{"className", &luna_wrapper_osg_ComputeBoundsVisitor::_bind_className},
	{"reset", &luna_wrapper_osg_ComputeBoundsVisitor::_bind_reset},
	{"getBoundingBox", &luna_wrapper_osg_ComputeBoundsVisitor::_bind_getBoundingBox},
	{"getPolytope", &luna_wrapper_osg_ComputeBoundsVisitor::_bind_getPolytope},
	{"getBase", &luna_wrapper_osg_ComputeBoundsVisitor::_bind_getBase},
	{"apply", &luna_wrapper_osg_ComputeBoundsVisitor::_bind_apply},
	{"pushMatrix", &luna_wrapper_osg_ComputeBoundsVisitor::_bind_pushMatrix},
	{"popMatrix", &luna_wrapper_osg_ComputeBoundsVisitor::_bind_popMatrix},
	{"applyDrawable", &luna_wrapper_osg_ComputeBoundsVisitor::_bind_applyDrawable},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_ComputeBoundsVisitor::_bind_base_setThreadSafeRefUnref},
	{"base_getEyePoint", &luna_wrapper_osg_ComputeBoundsVisitor::_bind_base_getEyePoint},
	{"base_getViewPoint", &luna_wrapper_osg_ComputeBoundsVisitor::_bind_base_getViewPoint},
	{"base_getDistanceToEyePoint", &luna_wrapper_osg_ComputeBoundsVisitor::_bind_base_getDistanceToEyePoint},
	{"base_getDistanceFromEyePoint", &luna_wrapper_osg_ComputeBoundsVisitor::_bind_base_getDistanceFromEyePoint},
	{"base_getDistanceToViewPoint", &luna_wrapper_osg_ComputeBoundsVisitor::_bind_base_getDistanceToViewPoint},
	{"base_libraryName", &luna_wrapper_osg_ComputeBoundsVisitor::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_ComputeBoundsVisitor::_bind_base_className},
	{"base_reset", &luna_wrapper_osg_ComputeBoundsVisitor::_bind_base_reset},
	{"base_apply", &luna_wrapper_osg_ComputeBoundsVisitor::_bind_base_apply},
	{"fromVoid", &luna_wrapper_osg_ComputeBoundsVisitor::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_ComputeBoundsVisitor::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_ComputeBoundsVisitor::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ComputeBoundsVisitor >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_ComputeBoundsVisitor::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ComputeBoundsVisitor >::enumValues[] = {
	{0,0}
};



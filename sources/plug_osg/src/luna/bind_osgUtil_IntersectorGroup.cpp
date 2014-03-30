#include <plug_common.h>

#include <luna/wrappers/wrapper_osgUtil_IntersectorGroup.h>

class luna_wrapper_osgUtil_IntersectorGroup {
public:
	typedef Luna< osgUtil::IntersectorGroup > luna_t;

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

		osgUtil::IntersectorGroup* self= (osgUtil::IntersectorGroup*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgUtil::IntersectorGroup >::push(L,self,false);
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
		//osgUtil::IntersectorGroup* ptr= dynamic_cast< osgUtil::IntersectorGroup* >(Luna< osg::Referenced >::check(L,1));
		osgUtil::IntersectorGroup* ptr= luna_caster< osg::Referenced, osgUtil::IntersectorGroup >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::IntersectorGroup >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_addIntersector(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getIntersectors(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_clear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_clone(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_enter(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_leave(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_intersect(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_containsIntersections(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_clone(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_enter(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_leave(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_intersect(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_containsIntersections(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgUtil::IntersectorGroup::IntersectorGroup()
	static osgUtil::IntersectorGroup* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::IntersectorGroup::IntersectorGroup() function, expected prototype:\nosgUtil::IntersectorGroup::IntersectorGroup()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osgUtil::IntersectorGroup();
	}

	// osgUtil::IntersectorGroup::IntersectorGroup(lua_Table * data)
	static osgUtil::IntersectorGroup* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::IntersectorGroup::IntersectorGroup(lua_Table * data) function, expected prototype:\nosgUtil::IntersectorGroup::IntersectorGroup(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgUtil_IntersectorGroup(L,NULL);
	}

	// Overload binder for osgUtil::IntersectorGroup::IntersectorGroup
	static osgUtil::IntersectorGroup* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function IntersectorGroup, cannot match any of the overloads for function IntersectorGroup:\n  IntersectorGroup()\n  IntersectorGroup(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void osgUtil::IntersectorGroup::addIntersector(osgUtil::Intersector * intersector)
	static int _bind_addIntersector(lua_State *L) {
		if (!_lg_typecheck_addIntersector(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectorGroup::addIntersector(osgUtil::Intersector * intersector) function, expected prototype:\nvoid osgUtil::IntersectorGroup::addIntersector(osgUtil::Intersector * intersector)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::Intersector* intersector=(Luna< osg::Referenced >::checkSubType< osgUtil::Intersector >(L,2));

		osgUtil::IntersectorGroup* self=Luna< osg::Referenced >::checkSubType< osgUtil::IntersectorGroup >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectorGroup::addIntersector(osgUtil::Intersector *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addIntersector(intersector);

		return 0;
	}

	// osgUtil::IntersectorGroup::Intersectors & osgUtil::IntersectorGroup::getIntersectors()
	static int _bind_getIntersectors(lua_State *L) {
		if (!_lg_typecheck_getIntersectors(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::IntersectorGroup::Intersectors & osgUtil::IntersectorGroup::getIntersectors() function, expected prototype:\nosgUtil::IntersectorGroup::Intersectors & osgUtil::IntersectorGroup::getIntersectors()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::IntersectorGroup* self=Luna< osg::Referenced >::checkSubType< osgUtil::IntersectorGroup >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgUtil::IntersectorGroup::Intersectors & osgUtil::IntersectorGroup::getIntersectors(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgUtil::IntersectorGroup::Intersectors* lret = &self->getIntersectors();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::IntersectorGroup::Intersectors >::push(L,lret,false);

		return 1;
	}

	// void osgUtil::IntersectorGroup::clear()
	static int _bind_clear(lua_State *L) {
		if (!_lg_typecheck_clear(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectorGroup::clear() function, expected prototype:\nvoid osgUtil::IntersectorGroup::clear()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::IntersectorGroup* self=Luna< osg::Referenced >::checkSubType< osgUtil::IntersectorGroup >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectorGroup::clear(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->clear();

		return 0;
	}

	// osgUtil::Intersector * osgUtil::IntersectorGroup::clone(osgUtil::IntersectionVisitor & iv)
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::Intersector * osgUtil::IntersectorGroup::clone(osgUtil::IntersectionVisitor & iv) function, expected prototype:\nosgUtil::Intersector * osgUtil::IntersectorGroup::clone(osgUtil::IntersectionVisitor & iv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::IntersectionVisitor* iv_ptr=(Luna< osg::Referenced >::checkSubType< osgUtil::IntersectionVisitor >(L,2));
		if( !iv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg iv in osgUtil::IntersectorGroup::clone function");
		}
		osgUtil::IntersectionVisitor & iv=*iv_ptr;

		osgUtil::IntersectorGroup* self=Luna< osg::Referenced >::checkSubType< osgUtil::IntersectorGroup >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgUtil::Intersector * osgUtil::IntersectorGroup::clone(osgUtil::IntersectionVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgUtil::Intersector * lret = self->clone(iv);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::Intersector >::push(L,lret,false);

		return 1;
	}

	// bool osgUtil::IntersectorGroup::enter(const osg::Node & node)
	static int _bind_enter(lua_State *L) {
		if (!_lg_typecheck_enter(L)) {
			luaL_error(L, "luna typecheck failed in bool osgUtil::IntersectorGroup::enter(const osg::Node & node) function, expected prototype:\nbool osgUtil::IntersectorGroup::enter(const osg::Node & node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Node* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::IntersectorGroup::enter function");
		}
		const osg::Node & node=*node_ptr;

		osgUtil::IntersectorGroup* self=Luna< osg::Referenced >::checkSubType< osgUtil::IntersectorGroup >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgUtil::IntersectorGroup::enter(const osg::Node &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->enter(node);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgUtil::IntersectorGroup::leave()
	static int _bind_leave(lua_State *L) {
		if (!_lg_typecheck_leave(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectorGroup::leave() function, expected prototype:\nvoid osgUtil::IntersectorGroup::leave()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::IntersectorGroup* self=Luna< osg::Referenced >::checkSubType< osgUtil::IntersectorGroup >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectorGroup::leave(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->leave();

		return 0;
	}

	// void osgUtil::IntersectorGroup::intersect(osgUtil::IntersectionVisitor & iv, osg::Drawable * drawable)
	static int _bind_intersect(lua_State *L) {
		if (!_lg_typecheck_intersect(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectorGroup::intersect(osgUtil::IntersectionVisitor & iv, osg::Drawable * drawable) function, expected prototype:\nvoid osgUtil::IntersectorGroup::intersect(osgUtil::IntersectionVisitor & iv, osg::Drawable * drawable)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::IntersectionVisitor* iv_ptr=(Luna< osg::Referenced >::checkSubType< osgUtil::IntersectionVisitor >(L,2));
		if( !iv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg iv in osgUtil::IntersectorGroup::intersect function");
		}
		osgUtil::IntersectionVisitor & iv=*iv_ptr;
		osg::Drawable* drawable=(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,3));

		osgUtil::IntersectorGroup* self=Luna< osg::Referenced >::checkSubType< osgUtil::IntersectorGroup >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectorGroup::intersect(osgUtil::IntersectionVisitor &, osg::Drawable *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->intersect(iv, drawable);

		return 0;
	}

	// void osgUtil::IntersectorGroup::reset()
	static int _bind_reset(lua_State *L) {
		if (!_lg_typecheck_reset(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectorGroup::reset() function, expected prototype:\nvoid osgUtil::IntersectorGroup::reset()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::IntersectorGroup* self=Luna< osg::Referenced >::checkSubType< osgUtil::IntersectorGroup >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectorGroup::reset(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->reset();

		return 0;
	}

	// bool osgUtil::IntersectorGroup::containsIntersections()
	static int _bind_containsIntersections(lua_State *L) {
		if (!_lg_typecheck_containsIntersections(L)) {
			luaL_error(L, "luna typecheck failed in bool osgUtil::IntersectorGroup::containsIntersections() function, expected prototype:\nbool osgUtil::IntersectorGroup::containsIntersections()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::IntersectorGroup* self=Luna< osg::Referenced >::checkSubType< osgUtil::IntersectorGroup >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgUtil::IntersectorGroup::containsIntersections(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->containsIntersections();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgUtil::IntersectorGroup::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectorGroup::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgUtil::IntersectorGroup::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgUtil::IntersectorGroup* self=Luna< osg::Referenced >::checkSubType< osgUtil::IntersectorGroup >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectorGroup::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->IntersectorGroup::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// osgUtil::Intersector * osgUtil::IntersectorGroup::base_clone(osgUtil::IntersectionVisitor & iv)
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::Intersector * osgUtil::IntersectorGroup::base_clone(osgUtil::IntersectionVisitor & iv) function, expected prototype:\nosgUtil::Intersector * osgUtil::IntersectorGroup::base_clone(osgUtil::IntersectionVisitor & iv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::IntersectionVisitor* iv_ptr=(Luna< osg::Referenced >::checkSubType< osgUtil::IntersectionVisitor >(L,2));
		if( !iv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg iv in osgUtil::IntersectorGroup::base_clone function");
		}
		osgUtil::IntersectionVisitor & iv=*iv_ptr;

		osgUtil::IntersectorGroup* self=Luna< osg::Referenced >::checkSubType< osgUtil::IntersectorGroup >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgUtil::Intersector * osgUtil::IntersectorGroup::base_clone(osgUtil::IntersectionVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgUtil::Intersector * lret = self->IntersectorGroup::clone(iv);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::Intersector >::push(L,lret,false);

		return 1;
	}

	// bool osgUtil::IntersectorGroup::base_enter(const osg::Node & node)
	static int _bind_base_enter(lua_State *L) {
		if (!_lg_typecheck_base_enter(L)) {
			luaL_error(L, "luna typecheck failed in bool osgUtil::IntersectorGroup::base_enter(const osg::Node & node) function, expected prototype:\nbool osgUtil::IntersectorGroup::base_enter(const osg::Node & node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Node* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::IntersectorGroup::base_enter function");
		}
		const osg::Node & node=*node_ptr;

		osgUtil::IntersectorGroup* self=Luna< osg::Referenced >::checkSubType< osgUtil::IntersectorGroup >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgUtil::IntersectorGroup::base_enter(const osg::Node &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IntersectorGroup::enter(node);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgUtil::IntersectorGroup::base_leave()
	static int _bind_base_leave(lua_State *L) {
		if (!_lg_typecheck_base_leave(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectorGroup::base_leave() function, expected prototype:\nvoid osgUtil::IntersectorGroup::base_leave()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::IntersectorGroup* self=Luna< osg::Referenced >::checkSubType< osgUtil::IntersectorGroup >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectorGroup::base_leave(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->IntersectorGroup::leave();

		return 0;
	}

	// void osgUtil::IntersectorGroup::base_intersect(osgUtil::IntersectionVisitor & iv, osg::Drawable * drawable)
	static int _bind_base_intersect(lua_State *L) {
		if (!_lg_typecheck_base_intersect(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectorGroup::base_intersect(osgUtil::IntersectionVisitor & iv, osg::Drawable * drawable) function, expected prototype:\nvoid osgUtil::IntersectorGroup::base_intersect(osgUtil::IntersectionVisitor & iv, osg::Drawable * drawable)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::IntersectionVisitor* iv_ptr=(Luna< osg::Referenced >::checkSubType< osgUtil::IntersectionVisitor >(L,2));
		if( !iv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg iv in osgUtil::IntersectorGroup::base_intersect function");
		}
		osgUtil::IntersectionVisitor & iv=*iv_ptr;
		osg::Drawable* drawable=(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,3));

		osgUtil::IntersectorGroup* self=Luna< osg::Referenced >::checkSubType< osgUtil::IntersectorGroup >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectorGroup::base_intersect(osgUtil::IntersectionVisitor &, osg::Drawable *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->IntersectorGroup::intersect(iv, drawable);

		return 0;
	}

	// void osgUtil::IntersectorGroup::base_reset()
	static int _bind_base_reset(lua_State *L) {
		if (!_lg_typecheck_base_reset(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectorGroup::base_reset() function, expected prototype:\nvoid osgUtil::IntersectorGroup::base_reset()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::IntersectorGroup* self=Luna< osg::Referenced >::checkSubType< osgUtil::IntersectorGroup >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectorGroup::base_reset(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->IntersectorGroup::reset();

		return 0;
	}

	// bool osgUtil::IntersectorGroup::base_containsIntersections()
	static int _bind_base_containsIntersections(lua_State *L) {
		if (!_lg_typecheck_base_containsIntersections(L)) {
			luaL_error(L, "luna typecheck failed in bool osgUtil::IntersectorGroup::base_containsIntersections() function, expected prototype:\nbool osgUtil::IntersectorGroup::base_containsIntersections()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::IntersectorGroup* self=Luna< osg::Referenced >::checkSubType< osgUtil::IntersectorGroup >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgUtil::IntersectorGroup::base_containsIntersections(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IntersectorGroup::containsIntersections();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

osgUtil::IntersectorGroup* LunaTraits< osgUtil::IntersectorGroup >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_IntersectorGroup::_bind_ctor(L);
}

void LunaTraits< osgUtil::IntersectorGroup >::_bind_dtor(osgUtil::IntersectorGroup* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::IntersectorGroup >::className[] = "IntersectorGroup";
const char LunaTraits< osgUtil::IntersectorGroup >::fullName[] = "osgUtil::IntersectorGroup";
const char LunaTraits< osgUtil::IntersectorGroup >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::IntersectorGroup >::parents[] = {"osgUtil.Intersector", 0};
const int LunaTraits< osgUtil::IntersectorGroup >::hash = 27288080;
const int LunaTraits< osgUtil::IntersectorGroup >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::IntersectorGroup >::methods[] = {
	{"addIntersector", &luna_wrapper_osgUtil_IntersectorGroup::_bind_addIntersector},
	{"getIntersectors", &luna_wrapper_osgUtil_IntersectorGroup::_bind_getIntersectors},
	{"clear", &luna_wrapper_osgUtil_IntersectorGroup::_bind_clear},
	{"clone", &luna_wrapper_osgUtil_IntersectorGroup::_bind_clone},
	{"enter", &luna_wrapper_osgUtil_IntersectorGroup::_bind_enter},
	{"leave", &luna_wrapper_osgUtil_IntersectorGroup::_bind_leave},
	{"intersect", &luna_wrapper_osgUtil_IntersectorGroup::_bind_intersect},
	{"reset", &luna_wrapper_osgUtil_IntersectorGroup::_bind_reset},
	{"containsIntersections", &luna_wrapper_osgUtil_IntersectorGroup::_bind_containsIntersections},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgUtil_IntersectorGroup::_bind_base_setThreadSafeRefUnref},
	{"base_clone", &luna_wrapper_osgUtil_IntersectorGroup::_bind_base_clone},
	{"base_enter", &luna_wrapper_osgUtil_IntersectorGroup::_bind_base_enter},
	{"base_leave", &luna_wrapper_osgUtil_IntersectorGroup::_bind_base_leave},
	{"base_intersect", &luna_wrapper_osgUtil_IntersectorGroup::_bind_base_intersect},
	{"base_reset", &luna_wrapper_osgUtil_IntersectorGroup::_bind_base_reset},
	{"base_containsIntersections", &luna_wrapper_osgUtil_IntersectorGroup::_bind_base_containsIntersections},
	{"fromVoid", &luna_wrapper_osgUtil_IntersectorGroup::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgUtil_IntersectorGroup::_bind_asVoid},
	{"getTable", &luna_wrapper_osgUtil_IntersectorGroup::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::IntersectorGroup >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_IntersectorGroup::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::IntersectorGroup >::enumValues[] = {
	{0,0}
};



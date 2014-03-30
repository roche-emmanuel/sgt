#include <plug_common.h>

#include <luna/wrappers/wrapper_osgUtil_Intersector.h>

class luna_wrapper_osgUtil_Intersector {
public:
	typedef Luna< osgUtil::Intersector > luna_t;

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

		osgUtil::Intersector* self= (osgUtil::Intersector*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgUtil::Intersector >::push(L,self,false);
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
		//osgUtil::Intersector* ptr= dynamic_cast< osgUtil::Intersector* >(Luna< osg::Referenced >::check(L,1));
		osgUtil::Intersector* ptr= luna_caster< osg::Referenced, osgUtil::Intersector >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::Intersector >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_setCoordinateFrame(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCoordinateFrame(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setIntersectionLimit(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getIntersectionLimit(lua_State *L) {
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

	inline static bool _lg_typecheck_disabled(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_incrementDisabledCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_decrementDisabledCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_reachedLimit(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgUtil::Intersector::Intersector(lua_Table * data, osgUtil::Intersector::CoordinateFrame cf = osgUtil::Intersector::MODEL)
	static osgUtil::Intersector* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::Intersector::Intersector(lua_Table * data, osgUtil::Intersector::CoordinateFrame cf = osgUtil::Intersector::MODEL) function, expected prototype:\nosgUtil::Intersector::Intersector(lua_Table * data, osgUtil::Intersector::CoordinateFrame cf = osgUtil::Intersector::MODEL)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osgUtil::Intersector::CoordinateFrame cf=luatop>1 ? (osgUtil::Intersector::CoordinateFrame)lua_tointeger(L,2) : (osgUtil::Intersector::CoordinateFrame)osgUtil::Intersector::MODEL;

		return new wrapper_osgUtil_Intersector(L,NULL, cf);
	}


	// Function binds:
	// void osgUtil::Intersector::setCoordinateFrame(osgUtil::Intersector::CoordinateFrame cf)
	static int _bind_setCoordinateFrame(lua_State *L) {
		if (!_lg_typecheck_setCoordinateFrame(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Intersector::setCoordinateFrame(osgUtil::Intersector::CoordinateFrame cf) function, expected prototype:\nvoid osgUtil::Intersector::setCoordinateFrame(osgUtil::Intersector::CoordinateFrame cf)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::Intersector::CoordinateFrame cf=(osgUtil::Intersector::CoordinateFrame)lua_tointeger(L,2);

		osgUtil::Intersector* self=Luna< osg::Referenced >::checkSubType< osgUtil::Intersector >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Intersector::setCoordinateFrame(osgUtil::Intersector::CoordinateFrame). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setCoordinateFrame(cf);

		return 0;
	}

	// osgUtil::Intersector::CoordinateFrame osgUtil::Intersector::getCoordinateFrame() const
	static int _bind_getCoordinateFrame(lua_State *L) {
		if (!_lg_typecheck_getCoordinateFrame(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::Intersector::CoordinateFrame osgUtil::Intersector::getCoordinateFrame() const function, expected prototype:\nosgUtil::Intersector::CoordinateFrame osgUtil::Intersector::getCoordinateFrame() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::Intersector* self=Luna< osg::Referenced >::checkSubType< osgUtil::Intersector >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgUtil::Intersector::CoordinateFrame osgUtil::Intersector::getCoordinateFrame() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgUtil::Intersector::CoordinateFrame lret = self->getCoordinateFrame();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgUtil::Intersector::setIntersectionLimit(osgUtil::Intersector::IntersectionLimit limit)
	static int _bind_setIntersectionLimit(lua_State *L) {
		if (!_lg_typecheck_setIntersectionLimit(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Intersector::setIntersectionLimit(osgUtil::Intersector::IntersectionLimit limit) function, expected prototype:\nvoid osgUtil::Intersector::setIntersectionLimit(osgUtil::Intersector::IntersectionLimit limit)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::Intersector::IntersectionLimit limit=(osgUtil::Intersector::IntersectionLimit)lua_tointeger(L,2);

		osgUtil::Intersector* self=Luna< osg::Referenced >::checkSubType< osgUtil::Intersector >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Intersector::setIntersectionLimit(osgUtil::Intersector::IntersectionLimit). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setIntersectionLimit(limit);

		return 0;
	}

	// osgUtil::Intersector::IntersectionLimit osgUtil::Intersector::getIntersectionLimit() const
	static int _bind_getIntersectionLimit(lua_State *L) {
		if (!_lg_typecheck_getIntersectionLimit(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::Intersector::IntersectionLimit osgUtil::Intersector::getIntersectionLimit() const function, expected prototype:\nosgUtil::Intersector::IntersectionLimit osgUtil::Intersector::getIntersectionLimit() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::Intersector* self=Luna< osg::Referenced >::checkSubType< osgUtil::Intersector >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgUtil::Intersector::IntersectionLimit osgUtil::Intersector::getIntersectionLimit() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgUtil::Intersector::IntersectionLimit lret = self->getIntersectionLimit();
		lua_pushnumber(L,lret);

		return 1;
	}

	// osgUtil::Intersector * osgUtil::Intersector::clone(osgUtil::IntersectionVisitor & iv)
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::Intersector * osgUtil::Intersector::clone(osgUtil::IntersectionVisitor & iv) function, expected prototype:\nosgUtil::Intersector * osgUtil::Intersector::clone(osgUtil::IntersectionVisitor & iv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::IntersectionVisitor* iv_ptr=(Luna< osg::Referenced >::checkSubType< osgUtil::IntersectionVisitor >(L,2));
		if( !iv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg iv in osgUtil::Intersector::clone function");
		}
		osgUtil::IntersectionVisitor & iv=*iv_ptr;

		osgUtil::Intersector* self=Luna< osg::Referenced >::checkSubType< osgUtil::Intersector >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgUtil::Intersector * osgUtil::Intersector::clone(osgUtil::IntersectionVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgUtil::Intersector * lret = self->clone(iv);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::Intersector >::push(L,lret,false);

		return 1;
	}

	// bool osgUtil::Intersector::enter(const osg::Node & node)
	static int _bind_enter(lua_State *L) {
		if (!_lg_typecheck_enter(L)) {
			luaL_error(L, "luna typecheck failed in bool osgUtil::Intersector::enter(const osg::Node & node) function, expected prototype:\nbool osgUtil::Intersector::enter(const osg::Node & node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Node* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::Intersector::enter function");
		}
		const osg::Node & node=*node_ptr;

		osgUtil::Intersector* self=Luna< osg::Referenced >::checkSubType< osgUtil::Intersector >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgUtil::Intersector::enter(const osg::Node &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->enter(node);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgUtil::Intersector::leave()
	static int _bind_leave(lua_State *L) {
		if (!_lg_typecheck_leave(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Intersector::leave() function, expected prototype:\nvoid osgUtil::Intersector::leave()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::Intersector* self=Luna< osg::Referenced >::checkSubType< osgUtil::Intersector >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Intersector::leave(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->leave();

		return 0;
	}

	// void osgUtil::Intersector::intersect(osgUtil::IntersectionVisitor & iv, osg::Drawable * drawable)
	static int _bind_intersect(lua_State *L) {
		if (!_lg_typecheck_intersect(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Intersector::intersect(osgUtil::IntersectionVisitor & iv, osg::Drawable * drawable) function, expected prototype:\nvoid osgUtil::Intersector::intersect(osgUtil::IntersectionVisitor & iv, osg::Drawable * drawable)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::IntersectionVisitor* iv_ptr=(Luna< osg::Referenced >::checkSubType< osgUtil::IntersectionVisitor >(L,2));
		if( !iv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg iv in osgUtil::Intersector::intersect function");
		}
		osgUtil::IntersectionVisitor & iv=*iv_ptr;
		osg::Drawable* drawable=(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,3));

		osgUtil::Intersector* self=Luna< osg::Referenced >::checkSubType< osgUtil::Intersector >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Intersector::intersect(osgUtil::IntersectionVisitor &, osg::Drawable *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->intersect(iv, drawable);

		return 0;
	}

	// void osgUtil::Intersector::reset()
	static int _bind_reset(lua_State *L) {
		if (!_lg_typecheck_reset(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Intersector::reset() function, expected prototype:\nvoid osgUtil::Intersector::reset()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::Intersector* self=Luna< osg::Referenced >::checkSubType< osgUtil::Intersector >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Intersector::reset(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->reset();

		return 0;
	}

	// bool osgUtil::Intersector::containsIntersections()
	static int _bind_containsIntersections(lua_State *L) {
		if (!_lg_typecheck_containsIntersections(L)) {
			luaL_error(L, "luna typecheck failed in bool osgUtil::Intersector::containsIntersections() function, expected prototype:\nbool osgUtil::Intersector::containsIntersections()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::Intersector* self=Luna< osg::Referenced >::checkSubType< osgUtil::Intersector >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgUtil::Intersector::containsIntersections(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->containsIntersections();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgUtil::Intersector::disabled() const
	static int _bind_disabled(lua_State *L) {
		if (!_lg_typecheck_disabled(L)) {
			luaL_error(L, "luna typecheck failed in bool osgUtil::Intersector::disabled() const function, expected prototype:\nbool osgUtil::Intersector::disabled() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::Intersector* self=Luna< osg::Referenced >::checkSubType< osgUtil::Intersector >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgUtil::Intersector::disabled() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->disabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgUtil::Intersector::incrementDisabledCount()
	static int _bind_incrementDisabledCount(lua_State *L) {
		if (!_lg_typecheck_incrementDisabledCount(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Intersector::incrementDisabledCount() function, expected prototype:\nvoid osgUtil::Intersector::incrementDisabledCount()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::Intersector* self=Luna< osg::Referenced >::checkSubType< osgUtil::Intersector >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Intersector::incrementDisabledCount(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->incrementDisabledCount();

		return 0;
	}

	// void osgUtil::Intersector::decrementDisabledCount()
	static int _bind_decrementDisabledCount(lua_State *L) {
		if (!_lg_typecheck_decrementDisabledCount(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Intersector::decrementDisabledCount() function, expected prototype:\nvoid osgUtil::Intersector::decrementDisabledCount()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::Intersector* self=Luna< osg::Referenced >::checkSubType< osgUtil::Intersector >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Intersector::decrementDisabledCount(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->decrementDisabledCount();

		return 0;
	}

	// bool osgUtil::Intersector::reachedLimit()
	static int _bind_reachedLimit(lua_State *L) {
		if (!_lg_typecheck_reachedLimit(L)) {
			luaL_error(L, "luna typecheck failed in bool osgUtil::Intersector::reachedLimit() function, expected prototype:\nbool osgUtil::Intersector::reachedLimit()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::Intersector* self=Luna< osg::Referenced >::checkSubType< osgUtil::Intersector >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgUtil::Intersector::reachedLimit(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->reachedLimit();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgUtil::Intersector::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Intersector::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgUtil::Intersector::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgUtil::Intersector* self=Luna< osg::Referenced >::checkSubType< osgUtil::Intersector >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Intersector::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Intersector::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osgUtil::Intersector::base_reset()
	static int _bind_base_reset(lua_State *L) {
		if (!_lg_typecheck_base_reset(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Intersector::base_reset() function, expected prototype:\nvoid osgUtil::Intersector::base_reset()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::Intersector* self=Luna< osg::Referenced >::checkSubType< osgUtil::Intersector >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Intersector::base_reset(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Intersector::reset();

		return 0;
	}


	// Operator binds:

};

osgUtil::Intersector* LunaTraits< osgUtil::Intersector >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_Intersector::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// osgUtil::Intersector * osgUtil::Intersector::clone(osgUtil::IntersectionVisitor & iv)
	// bool osgUtil::Intersector::enter(const osg::Node & node)
	// void osgUtil::Intersector::leave()
	// void osgUtil::Intersector::intersect(osgUtil::IntersectionVisitor & iv, osg::Drawable * drawable)
	// bool osgUtil::Intersector::containsIntersections()
}

void LunaTraits< osgUtil::Intersector >::_bind_dtor(osgUtil::Intersector* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::Intersector >::className[] = "Intersector";
const char LunaTraits< osgUtil::Intersector >::fullName[] = "osgUtil::Intersector";
const char LunaTraits< osgUtil::Intersector >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::Intersector >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osgUtil::Intersector >::hash = 34879437;
const int LunaTraits< osgUtil::Intersector >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::Intersector >::methods[] = {
	{"setCoordinateFrame", &luna_wrapper_osgUtil_Intersector::_bind_setCoordinateFrame},
	{"getCoordinateFrame", &luna_wrapper_osgUtil_Intersector::_bind_getCoordinateFrame},
	{"setIntersectionLimit", &luna_wrapper_osgUtil_Intersector::_bind_setIntersectionLimit},
	{"getIntersectionLimit", &luna_wrapper_osgUtil_Intersector::_bind_getIntersectionLimit},
	{"clone", &luna_wrapper_osgUtil_Intersector::_bind_clone},
	{"enter", &luna_wrapper_osgUtil_Intersector::_bind_enter},
	{"leave", &luna_wrapper_osgUtil_Intersector::_bind_leave},
	{"intersect", &luna_wrapper_osgUtil_Intersector::_bind_intersect},
	{"reset", &luna_wrapper_osgUtil_Intersector::_bind_reset},
	{"containsIntersections", &luna_wrapper_osgUtil_Intersector::_bind_containsIntersections},
	{"disabled", &luna_wrapper_osgUtil_Intersector::_bind_disabled},
	{"incrementDisabledCount", &luna_wrapper_osgUtil_Intersector::_bind_incrementDisabledCount},
	{"decrementDisabledCount", &luna_wrapper_osgUtil_Intersector::_bind_decrementDisabledCount},
	{"reachedLimit", &luna_wrapper_osgUtil_Intersector::_bind_reachedLimit},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgUtil_Intersector::_bind_base_setThreadSafeRefUnref},
	{"base_reset", &luna_wrapper_osgUtil_Intersector::_bind_base_reset},
	{"fromVoid", &luna_wrapper_osgUtil_Intersector::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgUtil_Intersector::_bind_asVoid},
	{"getTable", &luna_wrapper_osgUtil_Intersector::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::Intersector >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_Intersector::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::Intersector >::enumValues[] = {
	{"WINDOW", osgUtil::Intersector::WINDOW},
	{"PROJECTION", osgUtil::Intersector::PROJECTION},
	{"VIEW", osgUtil::Intersector::VIEW},
	{"MODEL", osgUtil::Intersector::MODEL},
	{"NO_LIMIT", osgUtil::Intersector::NO_LIMIT},
	{"LIMIT_ONE_PER_DRAWABLE", osgUtil::Intersector::LIMIT_ONE_PER_DRAWABLE},
	{"LIMIT_ONE", osgUtil::Intersector::LIMIT_ONE},
	{"LIMIT_NEAREST", osgUtil::Intersector::LIMIT_NEAREST},
	{0,0}
};



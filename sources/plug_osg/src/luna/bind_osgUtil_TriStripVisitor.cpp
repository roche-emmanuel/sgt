#include <plug_common.h>

#include <luna/wrappers/wrapper_osgUtil_TriStripVisitor.h>

class luna_wrapper_osgUtil_TriStripVisitor {
public:
	typedef Luna< osgUtil::TriStripVisitor > luna_t;

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

		osgUtil::TriStripVisitor* self= (osgUtil::TriStripVisitor*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgUtil::TriStripVisitor >::push(L,self,false);
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
		//osgUtil::TriStripVisitor* ptr= dynamic_cast< osgUtil::TriStripVisitor* >(Luna< osg::Referenced >::check(L,1));
		osgUtil::TriStripVisitor* ptr= luna_caster< osg::Referenced, osgUtil::TriStripVisitor >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::TriStripVisitor >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,85233381)) ) return false;
		if( luatop>0 && (lua_isnil(L,1)==0 && !(Luna< osgUtil::Optimizer >::check(L,1)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,85233381)) ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !(Luna< osgUtil::Optimizer >::check(L,2)) ) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_stripify_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_stripify_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_apply(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCacheSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCacheSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setMinStripSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMinStripSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setGenerateFourPointPrimitivesQuads(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getGenerateFourPointPrimitivesQuads(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
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

	inline static bool _lg_typecheck_base_apply(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgUtil::TriStripVisitor::TriStripVisitor(osgUtil::Optimizer * optimizer = 0)
	static osgUtil::TriStripVisitor* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::TriStripVisitor::TriStripVisitor(osgUtil::Optimizer * optimizer = 0) function, expected prototype:\nosgUtil::TriStripVisitor::TriStripVisitor(osgUtil::Optimizer * optimizer = 0)\nClass arguments details:\narg 1 ID = 85233381\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osgUtil::Optimizer* optimizer=luatop>0 ? (Luna< osgUtil::Optimizer >::check(L,1)) : (osgUtil::Optimizer*)0;

		return new osgUtil::TriStripVisitor(optimizer);
	}

	// osgUtil::TriStripVisitor::TriStripVisitor(lua_Table * data, osgUtil::Optimizer * optimizer = 0)
	static osgUtil::TriStripVisitor* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::TriStripVisitor::TriStripVisitor(lua_Table * data, osgUtil::Optimizer * optimizer = 0) function, expected prototype:\nosgUtil::TriStripVisitor::TriStripVisitor(lua_Table * data, osgUtil::Optimizer * optimizer = 0)\nClass arguments details:\narg 2 ID = 85233381\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osgUtil::Optimizer* optimizer=luatop>1 ? (Luna< osgUtil::Optimizer >::check(L,2)) : (osgUtil::Optimizer*)0;

		return new wrapper_osgUtil_TriStripVisitor(L,NULL, optimizer);
	}

	// Overload binder for osgUtil::TriStripVisitor::TriStripVisitor
	static osgUtil::TriStripVisitor* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function TriStripVisitor, cannot match any of the overloads for function TriStripVisitor:\n  TriStripVisitor(osgUtil::Optimizer *)\n  TriStripVisitor(lua_Table *, osgUtil::Optimizer *)\n");
		return NULL;
	}


	// Function binds:
	// void osgUtil::TriStripVisitor::stripify(osg::Geometry & drawable)
	static int _bind_stripify_overload_1(lua_State *L) {
		if (!_lg_typecheck_stripify_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::TriStripVisitor::stripify(osg::Geometry & drawable) function, expected prototype:\nvoid osgUtil::TriStripVisitor::stripify(osg::Geometry & drawable)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Geometry* drawable_ptr=(Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,2));
		if( !drawable_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg drawable in osgUtil::TriStripVisitor::stripify function");
		}
		osg::Geometry & drawable=*drawable_ptr;

		osgUtil::TriStripVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::TriStripVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::TriStripVisitor::stripify(osg::Geometry &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->stripify(drawable);

		return 0;
	}

	// void osgUtil::TriStripVisitor::stripify()
	static int _bind_stripify_overload_2(lua_State *L) {
		if (!_lg_typecheck_stripify_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::TriStripVisitor::stripify() function, expected prototype:\nvoid osgUtil::TriStripVisitor::stripify()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::TriStripVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::TriStripVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::TriStripVisitor::stripify(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->stripify();

		return 0;
	}

	// Overload binder for osgUtil::TriStripVisitor::stripify
	static int _bind_stripify(lua_State *L) {
		if (_lg_typecheck_stripify_overload_1(L)) return _bind_stripify_overload_1(L);
		if (_lg_typecheck_stripify_overload_2(L)) return _bind_stripify_overload_2(L);

		luaL_error(L, "error in function stripify, cannot match any of the overloads for function stripify:\n  stripify(osg::Geometry &)\n  stripify()\n");
		return 0;
	}

	// void osgUtil::TriStripVisitor::apply(osg::Geode & geode)
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::TriStripVisitor::apply(osg::Geode & geode) function, expected prototype:\nvoid osgUtil::TriStripVisitor::apply(osg::Geode & geode)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Geode* geode_ptr=(Luna< osg::Referenced >::checkSubType< osg::Geode >(L,2));
		if( !geode_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg geode in osgUtil::TriStripVisitor::apply function");
		}
		osg::Geode & geode=*geode_ptr;

		osgUtil::TriStripVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::TriStripVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::TriStripVisitor::apply(osg::Geode &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(geode);

		return 0;
	}

	// void osgUtil::TriStripVisitor::setCacheSize(unsigned int size)
	static int _bind_setCacheSize(lua_State *L) {
		if (!_lg_typecheck_setCacheSize(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::TriStripVisitor::setCacheSize(unsigned int size) function, expected prototype:\nvoid osgUtil::TriStripVisitor::setCacheSize(unsigned int size)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int size=(unsigned int)lua_tointeger(L,2);

		osgUtil::TriStripVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::TriStripVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::TriStripVisitor::setCacheSize(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setCacheSize(size);

		return 0;
	}

	// unsigned int osgUtil::TriStripVisitor::getCacheSize() const
	static int _bind_getCacheSize(lua_State *L) {
		if (!_lg_typecheck_getCacheSize(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osgUtil::TriStripVisitor::getCacheSize() const function, expected prototype:\nunsigned int osgUtil::TriStripVisitor::getCacheSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::TriStripVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::TriStripVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osgUtil::TriStripVisitor::getCacheSize() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getCacheSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgUtil::TriStripVisitor::setMinStripSize(unsigned int size)
	static int _bind_setMinStripSize(lua_State *L) {
		if (!_lg_typecheck_setMinStripSize(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::TriStripVisitor::setMinStripSize(unsigned int size) function, expected prototype:\nvoid osgUtil::TriStripVisitor::setMinStripSize(unsigned int size)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int size=(unsigned int)lua_tointeger(L,2);

		osgUtil::TriStripVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::TriStripVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::TriStripVisitor::setMinStripSize(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setMinStripSize(size);

		return 0;
	}

	// unsigned int osgUtil::TriStripVisitor::getMinStripSize() const
	static int _bind_getMinStripSize(lua_State *L) {
		if (!_lg_typecheck_getMinStripSize(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osgUtil::TriStripVisitor::getMinStripSize() const function, expected prototype:\nunsigned int osgUtil::TriStripVisitor::getMinStripSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::TriStripVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::TriStripVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osgUtil::TriStripVisitor::getMinStripSize() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getMinStripSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgUtil::TriStripVisitor::setGenerateFourPointPrimitivesQuads(bool flag)
	static int _bind_setGenerateFourPointPrimitivesQuads(lua_State *L) {
		if (!_lg_typecheck_setGenerateFourPointPrimitivesQuads(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::TriStripVisitor::setGenerateFourPointPrimitivesQuads(bool flag) function, expected prototype:\nvoid osgUtil::TriStripVisitor::setGenerateFourPointPrimitivesQuads(bool flag)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osgUtil::TriStripVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::TriStripVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::TriStripVisitor::setGenerateFourPointPrimitivesQuads(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setGenerateFourPointPrimitivesQuads(flag);

		return 0;
	}

	// bool osgUtil::TriStripVisitor::getGenerateFourPointPrimitivesQuads() const
	static int _bind_getGenerateFourPointPrimitivesQuads(lua_State *L) {
		if (!_lg_typecheck_getGenerateFourPointPrimitivesQuads(L)) {
			luaL_error(L, "luna typecheck failed in bool osgUtil::TriStripVisitor::getGenerateFourPointPrimitivesQuads() const function, expected prototype:\nbool osgUtil::TriStripVisitor::getGenerateFourPointPrimitivesQuads() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::TriStripVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::TriStripVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgUtil::TriStripVisitor::getGenerateFourPointPrimitivesQuads() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getGenerateFourPointPrimitivesQuads();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgUtil::TriStripVisitor::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::TriStripVisitor::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgUtil::TriStripVisitor::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgUtil::TriStripVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::TriStripVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::TriStripVisitor::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TriStripVisitor::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// const char * osgUtil::TriStripVisitor::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgUtil::TriStripVisitor::base_libraryName() const function, expected prototype:\nconst char * osgUtil::TriStripVisitor::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::TriStripVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::TriStripVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgUtil::TriStripVisitor::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->TriStripVisitor::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgUtil::TriStripVisitor::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgUtil::TriStripVisitor::base_className() const function, expected prototype:\nconst char * osgUtil::TriStripVisitor::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::TriStripVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::TriStripVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgUtil::TriStripVisitor::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->TriStripVisitor::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgUtil::TriStripVisitor::base_reset()
	static int _bind_base_reset(lua_State *L) {
		if (!_lg_typecheck_base_reset(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::TriStripVisitor::base_reset() function, expected prototype:\nvoid osgUtil::TriStripVisitor::base_reset()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::TriStripVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::TriStripVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::TriStripVisitor::base_reset(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TriStripVisitor::reset();

		return 0;
	}

	// osg::Vec3f osgUtil::TriStripVisitor::base_getEyePoint() const
	static int _bind_base_getEyePoint(lua_State *L) {
		if (!_lg_typecheck_base_getEyePoint(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3f osgUtil::TriStripVisitor::base_getEyePoint() const function, expected prototype:\nosg::Vec3f osgUtil::TriStripVisitor::base_getEyePoint() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::TriStripVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::TriStripVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3f osgUtil::TriStripVisitor::base_getEyePoint() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec3f stack_lret = self->TriStripVisitor::getEyePoint();
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// osg::Vec3f osgUtil::TriStripVisitor::base_getViewPoint() const
	static int _bind_base_getViewPoint(lua_State *L) {
		if (!_lg_typecheck_base_getViewPoint(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3f osgUtil::TriStripVisitor::base_getViewPoint() const function, expected prototype:\nosg::Vec3f osgUtil::TriStripVisitor::base_getViewPoint() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::TriStripVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::TriStripVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3f osgUtil::TriStripVisitor::base_getViewPoint() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec3f stack_lret = self->TriStripVisitor::getViewPoint();
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// float osgUtil::TriStripVisitor::base_getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const
	static int _bind_base_getDistanceToEyePoint(lua_State *L) {
		if (!_lg_typecheck_base_getDistanceToEyePoint(L)) {
			luaL_error(L, "luna typecheck failed in float osgUtil::TriStripVisitor::base_getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const function, expected prototype:\nfloat osgUtil::TriStripVisitor::base_getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgUtil::TriStripVisitor::base_getDistanceToEyePoint function");
		}
		const osg::Vec3f & _arg1=*_arg1_ptr;
		bool _arg2=(bool)(lua_toboolean(L,3)==1);

		osgUtil::TriStripVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::TriStripVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgUtil::TriStripVisitor::base_getDistanceToEyePoint(const osg::Vec3f &, bool) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->TriStripVisitor::getDistanceToEyePoint(_arg1, _arg2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osgUtil::TriStripVisitor::base_getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const
	static int _bind_base_getDistanceFromEyePoint(lua_State *L) {
		if (!_lg_typecheck_base_getDistanceFromEyePoint(L)) {
			luaL_error(L, "luna typecheck failed in float osgUtil::TriStripVisitor::base_getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const function, expected prototype:\nfloat osgUtil::TriStripVisitor::base_getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgUtil::TriStripVisitor::base_getDistanceFromEyePoint function");
		}
		const osg::Vec3f & _arg1=*_arg1_ptr;
		bool _arg2=(bool)(lua_toboolean(L,3)==1);

		osgUtil::TriStripVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::TriStripVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgUtil::TriStripVisitor::base_getDistanceFromEyePoint(const osg::Vec3f &, bool) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->TriStripVisitor::getDistanceFromEyePoint(_arg1, _arg2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osgUtil::TriStripVisitor::base_getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const
	static int _bind_base_getDistanceToViewPoint(lua_State *L) {
		if (!_lg_typecheck_base_getDistanceToViewPoint(L)) {
			luaL_error(L, "luna typecheck failed in float osgUtil::TriStripVisitor::base_getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const function, expected prototype:\nfloat osgUtil::TriStripVisitor::base_getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgUtil::TriStripVisitor::base_getDistanceToViewPoint function");
		}
		const osg::Vec3f & _arg1=*_arg1_ptr;
		bool _arg2=(bool)(lua_toboolean(L,3)==1);

		osgUtil::TriStripVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::TriStripVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgUtil::TriStripVisitor::base_getDistanceToViewPoint(const osg::Vec3f &, bool) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->TriStripVisitor::getDistanceToViewPoint(_arg1, _arg2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgUtil::TriStripVisitor::base_apply(osg::Geode & geode)
	static int _bind_base_apply(lua_State *L) {
		if (!_lg_typecheck_base_apply(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::TriStripVisitor::base_apply(osg::Geode & geode) function, expected prototype:\nvoid osgUtil::TriStripVisitor::base_apply(osg::Geode & geode)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Geode* geode_ptr=(Luna< osg::Referenced >::checkSubType< osg::Geode >(L,2));
		if( !geode_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg geode in osgUtil::TriStripVisitor::base_apply function");
		}
		osg::Geode & geode=*geode_ptr;

		osgUtil::TriStripVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::TriStripVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::TriStripVisitor::base_apply(osg::Geode &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TriStripVisitor::apply(geode);

		return 0;
	}


	// Operator binds:

};

osgUtil::TriStripVisitor* LunaTraits< osgUtil::TriStripVisitor >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_TriStripVisitor::_bind_ctor(L);
}

void LunaTraits< osgUtil::TriStripVisitor >::_bind_dtor(osgUtil::TriStripVisitor* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::TriStripVisitor >::className[] = "TriStripVisitor";
const char LunaTraits< osgUtil::TriStripVisitor >::fullName[] = "osgUtil::TriStripVisitor";
const char LunaTraits< osgUtil::TriStripVisitor >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::TriStripVisitor >::parents[] = {"osgUtil.BaseOptimizerVisitor", 0};
const int LunaTraits< osgUtil::TriStripVisitor >::hash = 2177155;
const int LunaTraits< osgUtil::TriStripVisitor >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::TriStripVisitor >::methods[] = {
	{"stripify", &luna_wrapper_osgUtil_TriStripVisitor::_bind_stripify},
	{"apply", &luna_wrapper_osgUtil_TriStripVisitor::_bind_apply},
	{"setCacheSize", &luna_wrapper_osgUtil_TriStripVisitor::_bind_setCacheSize},
	{"getCacheSize", &luna_wrapper_osgUtil_TriStripVisitor::_bind_getCacheSize},
	{"setMinStripSize", &luna_wrapper_osgUtil_TriStripVisitor::_bind_setMinStripSize},
	{"getMinStripSize", &luna_wrapper_osgUtil_TriStripVisitor::_bind_getMinStripSize},
	{"setGenerateFourPointPrimitivesQuads", &luna_wrapper_osgUtil_TriStripVisitor::_bind_setGenerateFourPointPrimitivesQuads},
	{"getGenerateFourPointPrimitivesQuads", &luna_wrapper_osgUtil_TriStripVisitor::_bind_getGenerateFourPointPrimitivesQuads},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgUtil_TriStripVisitor::_bind_base_setThreadSafeRefUnref},
	{"base_libraryName", &luna_wrapper_osgUtil_TriStripVisitor::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osgUtil_TriStripVisitor::_bind_base_className},
	{"base_reset", &luna_wrapper_osgUtil_TriStripVisitor::_bind_base_reset},
	{"base_getEyePoint", &luna_wrapper_osgUtil_TriStripVisitor::_bind_base_getEyePoint},
	{"base_getViewPoint", &luna_wrapper_osgUtil_TriStripVisitor::_bind_base_getViewPoint},
	{"base_getDistanceToEyePoint", &luna_wrapper_osgUtil_TriStripVisitor::_bind_base_getDistanceToEyePoint},
	{"base_getDistanceFromEyePoint", &luna_wrapper_osgUtil_TriStripVisitor::_bind_base_getDistanceFromEyePoint},
	{"base_getDistanceToViewPoint", &luna_wrapper_osgUtil_TriStripVisitor::_bind_base_getDistanceToViewPoint},
	{"base_apply", &luna_wrapper_osgUtil_TriStripVisitor::_bind_base_apply},
	{"fromVoid", &luna_wrapper_osgUtil_TriStripVisitor::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgUtil_TriStripVisitor::_bind_asVoid},
	{"getTable", &luna_wrapper_osgUtil_TriStripVisitor::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::TriStripVisitor >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_TriStripVisitor::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::TriStripVisitor >::enumValues[] = {
	{0,0}
};



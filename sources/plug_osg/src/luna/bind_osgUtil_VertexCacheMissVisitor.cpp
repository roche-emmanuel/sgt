#include <plug_common.h>

#include <luna/wrappers/wrapper_osgUtil_VertexCacheMissVisitor.h>

class luna_wrapper_osgUtil_VertexCacheMissVisitor {
public:
	typedef Luna< osgUtil::VertexCacheMissVisitor > luna_t;

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

		osgUtil::VertexCacheMissVisitor* self= (osgUtil::VertexCacheMissVisitor*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgUtil::VertexCacheMissVisitor >::push(L,self,false);
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
		//osgUtil::VertexCacheMissVisitor* ptr= dynamic_cast< osgUtil::VertexCacheMissVisitor* >(Luna< osg::Referenced >::check(L,1));
		osgUtil::VertexCacheMissVisitor* ptr= luna_caster< osg::Referenced, osgUtil::VertexCacheMissVisitor >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::VertexCacheMissVisitor >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_apply(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_doGeometry(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMisses(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTriangles(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setMisses(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTriangles(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
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

	inline static bool _lg_typecheck_base_reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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
	// osgUtil::VertexCacheMissVisitor::VertexCacheMissVisitor(unsigned int cacheSize = 16)
	static osgUtil::VertexCacheMissVisitor* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::VertexCacheMissVisitor::VertexCacheMissVisitor(unsigned int cacheSize = 16) function, expected prototype:\nosgUtil::VertexCacheMissVisitor::VertexCacheMissVisitor(unsigned int cacheSize = 16)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		unsigned cacheSize=luatop>0 ? (unsigned)lua_tointeger(L,1) : (unsigned)16;

		return new osgUtil::VertexCacheMissVisitor(cacheSize);
	}

	// osgUtil::VertexCacheMissVisitor::VertexCacheMissVisitor(lua_Table * data, unsigned int cacheSize = 16)
	static osgUtil::VertexCacheMissVisitor* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::VertexCacheMissVisitor::VertexCacheMissVisitor(lua_Table * data, unsigned int cacheSize = 16) function, expected prototype:\nosgUtil::VertexCacheMissVisitor::VertexCacheMissVisitor(lua_Table * data, unsigned int cacheSize = 16)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		unsigned cacheSize=luatop>1 ? (unsigned)lua_tointeger(L,2) : (unsigned)16;

		return new wrapper_osgUtil_VertexCacheMissVisitor(L,NULL, cacheSize);
	}

	// Overload binder for osgUtil::VertexCacheMissVisitor::VertexCacheMissVisitor
	static osgUtil::VertexCacheMissVisitor* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function VertexCacheMissVisitor, cannot match any of the overloads for function VertexCacheMissVisitor:\n  VertexCacheMissVisitor(unsigned int)\n  VertexCacheMissVisitor(lua_Table *, unsigned int)\n");
		return NULL;
	}


	// Function binds:
	// void osgUtil::VertexCacheMissVisitor::reset()
	static int _bind_reset(lua_State *L) {
		if (!_lg_typecheck_reset(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::VertexCacheMissVisitor::reset() function, expected prototype:\nvoid osgUtil::VertexCacheMissVisitor::reset()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::VertexCacheMissVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::VertexCacheMissVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::VertexCacheMissVisitor::reset(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->reset();

		return 0;
	}

	// void osgUtil::VertexCacheMissVisitor::apply(osg::Geode & geode)
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::VertexCacheMissVisitor::apply(osg::Geode & geode) function, expected prototype:\nvoid osgUtil::VertexCacheMissVisitor::apply(osg::Geode & geode)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Geode* geode_ptr=(Luna< osg::Referenced >::checkSubType< osg::Geode >(L,2));
		if( !geode_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg geode in osgUtil::VertexCacheMissVisitor::apply function");
		}
		osg::Geode & geode=*geode_ptr;

		osgUtil::VertexCacheMissVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::VertexCacheMissVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::VertexCacheMissVisitor::apply(osg::Geode &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(geode);

		return 0;
	}

	// void osgUtil::VertexCacheMissVisitor::doGeometry(osg::Geometry & geom)
	static int _bind_doGeometry(lua_State *L) {
		if (!_lg_typecheck_doGeometry(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::VertexCacheMissVisitor::doGeometry(osg::Geometry & geom) function, expected prototype:\nvoid osgUtil::VertexCacheMissVisitor::doGeometry(osg::Geometry & geom)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Geometry* geom_ptr=(Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,2));
		if( !geom_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg geom in osgUtil::VertexCacheMissVisitor::doGeometry function");
		}
		osg::Geometry & geom=*geom_ptr;

		osgUtil::VertexCacheMissVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::VertexCacheMissVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::VertexCacheMissVisitor::doGeometry(osg::Geometry &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->doGeometry(geom);

		return 0;
	}

	// unsigned int osgUtil::VertexCacheMissVisitor::misses()
	static int _bind_getMisses(lua_State *L) {
		if (!_lg_typecheck_getMisses(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osgUtil::VertexCacheMissVisitor::misses() function, expected prototype:\nunsigned int osgUtil::VertexCacheMissVisitor::misses()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::VertexCacheMissVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::VertexCacheMissVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osgUtil::VertexCacheMissVisitor::misses(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->misses;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osgUtil::VertexCacheMissVisitor::triangles()
	static int _bind_getTriangles(lua_State *L) {
		if (!_lg_typecheck_getTriangles(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osgUtil::VertexCacheMissVisitor::triangles() function, expected prototype:\nunsigned int osgUtil::VertexCacheMissVisitor::triangles()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::VertexCacheMissVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::VertexCacheMissVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osgUtil::VertexCacheMissVisitor::triangles(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->triangles;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgUtil::VertexCacheMissVisitor::misses(unsigned int value)
	static int _bind_setMisses(lua_State *L) {
		if (!_lg_typecheck_setMisses(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::VertexCacheMissVisitor::misses(unsigned int value) function, expected prototype:\nvoid osgUtil::VertexCacheMissVisitor::misses(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned value=(unsigned)lua_tointeger(L,2);

		osgUtil::VertexCacheMissVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::VertexCacheMissVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::VertexCacheMissVisitor::misses(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->misses = value;

		return 0;
	}

	// void osgUtil::VertexCacheMissVisitor::triangles(unsigned int value)
	static int _bind_setTriangles(lua_State *L) {
		if (!_lg_typecheck_setTriangles(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::VertexCacheMissVisitor::triangles(unsigned int value) function, expected prototype:\nvoid osgUtil::VertexCacheMissVisitor::triangles(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned value=(unsigned)lua_tointeger(L,2);

		osgUtil::VertexCacheMissVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::VertexCacheMissVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::VertexCacheMissVisitor::triangles(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->triangles = value;

		return 0;
	}

	// void osgUtil::VertexCacheMissVisitor::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::VertexCacheMissVisitor::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgUtil::VertexCacheMissVisitor::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgUtil::VertexCacheMissVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::VertexCacheMissVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::VertexCacheMissVisitor::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->VertexCacheMissVisitor::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// const char * osgUtil::VertexCacheMissVisitor::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgUtil::VertexCacheMissVisitor::base_libraryName() const function, expected prototype:\nconst char * osgUtil::VertexCacheMissVisitor::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::VertexCacheMissVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::VertexCacheMissVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgUtil::VertexCacheMissVisitor::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->VertexCacheMissVisitor::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgUtil::VertexCacheMissVisitor::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgUtil::VertexCacheMissVisitor::base_className() const function, expected prototype:\nconst char * osgUtil::VertexCacheMissVisitor::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::VertexCacheMissVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::VertexCacheMissVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgUtil::VertexCacheMissVisitor::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->VertexCacheMissVisitor::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::Vec3f osgUtil::VertexCacheMissVisitor::base_getEyePoint() const
	static int _bind_base_getEyePoint(lua_State *L) {
		if (!_lg_typecheck_base_getEyePoint(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3f osgUtil::VertexCacheMissVisitor::base_getEyePoint() const function, expected prototype:\nosg::Vec3f osgUtil::VertexCacheMissVisitor::base_getEyePoint() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::VertexCacheMissVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::VertexCacheMissVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3f osgUtil::VertexCacheMissVisitor::base_getEyePoint() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec3f stack_lret = self->VertexCacheMissVisitor::getEyePoint();
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// osg::Vec3f osgUtil::VertexCacheMissVisitor::base_getViewPoint() const
	static int _bind_base_getViewPoint(lua_State *L) {
		if (!_lg_typecheck_base_getViewPoint(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3f osgUtil::VertexCacheMissVisitor::base_getViewPoint() const function, expected prototype:\nosg::Vec3f osgUtil::VertexCacheMissVisitor::base_getViewPoint() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::VertexCacheMissVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::VertexCacheMissVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3f osgUtil::VertexCacheMissVisitor::base_getViewPoint() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec3f stack_lret = self->VertexCacheMissVisitor::getViewPoint();
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// float osgUtil::VertexCacheMissVisitor::base_getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const
	static int _bind_base_getDistanceToEyePoint(lua_State *L) {
		if (!_lg_typecheck_base_getDistanceToEyePoint(L)) {
			luaL_error(L, "luna typecheck failed in float osgUtil::VertexCacheMissVisitor::base_getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const function, expected prototype:\nfloat osgUtil::VertexCacheMissVisitor::base_getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgUtil::VertexCacheMissVisitor::base_getDistanceToEyePoint function");
		}
		const osg::Vec3f & _arg1=*_arg1_ptr;
		bool _arg2=(bool)(lua_toboolean(L,3)==1);

		osgUtil::VertexCacheMissVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::VertexCacheMissVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgUtil::VertexCacheMissVisitor::base_getDistanceToEyePoint(const osg::Vec3f &, bool) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->VertexCacheMissVisitor::getDistanceToEyePoint(_arg1, _arg2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osgUtil::VertexCacheMissVisitor::base_getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const
	static int _bind_base_getDistanceFromEyePoint(lua_State *L) {
		if (!_lg_typecheck_base_getDistanceFromEyePoint(L)) {
			luaL_error(L, "luna typecheck failed in float osgUtil::VertexCacheMissVisitor::base_getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const function, expected prototype:\nfloat osgUtil::VertexCacheMissVisitor::base_getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgUtil::VertexCacheMissVisitor::base_getDistanceFromEyePoint function");
		}
		const osg::Vec3f & _arg1=*_arg1_ptr;
		bool _arg2=(bool)(lua_toboolean(L,3)==1);

		osgUtil::VertexCacheMissVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::VertexCacheMissVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgUtil::VertexCacheMissVisitor::base_getDistanceFromEyePoint(const osg::Vec3f &, bool) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->VertexCacheMissVisitor::getDistanceFromEyePoint(_arg1, _arg2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osgUtil::VertexCacheMissVisitor::base_getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const
	static int _bind_base_getDistanceToViewPoint(lua_State *L) {
		if (!_lg_typecheck_base_getDistanceToViewPoint(L)) {
			luaL_error(L, "luna typecheck failed in float osgUtil::VertexCacheMissVisitor::base_getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const function, expected prototype:\nfloat osgUtil::VertexCacheMissVisitor::base_getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgUtil::VertexCacheMissVisitor::base_getDistanceToViewPoint function");
		}
		const osg::Vec3f & _arg1=*_arg1_ptr;
		bool _arg2=(bool)(lua_toboolean(L,3)==1);

		osgUtil::VertexCacheMissVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::VertexCacheMissVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgUtil::VertexCacheMissVisitor::base_getDistanceToViewPoint(const osg::Vec3f &, bool) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->VertexCacheMissVisitor::getDistanceToViewPoint(_arg1, _arg2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgUtil::VertexCacheMissVisitor::base_reset()
	static int _bind_base_reset(lua_State *L) {
		if (!_lg_typecheck_base_reset(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::VertexCacheMissVisitor::base_reset() function, expected prototype:\nvoid osgUtil::VertexCacheMissVisitor::base_reset()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::VertexCacheMissVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::VertexCacheMissVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::VertexCacheMissVisitor::base_reset(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->VertexCacheMissVisitor::reset();

		return 0;
	}

	// void osgUtil::VertexCacheMissVisitor::base_apply(osg::Geode & geode)
	static int _bind_base_apply(lua_State *L) {
		if (!_lg_typecheck_base_apply(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::VertexCacheMissVisitor::base_apply(osg::Geode & geode) function, expected prototype:\nvoid osgUtil::VertexCacheMissVisitor::base_apply(osg::Geode & geode)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Geode* geode_ptr=(Luna< osg::Referenced >::checkSubType< osg::Geode >(L,2));
		if( !geode_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg geode in osgUtil::VertexCacheMissVisitor::base_apply function");
		}
		osg::Geode & geode=*geode_ptr;

		osgUtil::VertexCacheMissVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::VertexCacheMissVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::VertexCacheMissVisitor::base_apply(osg::Geode &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->VertexCacheMissVisitor::apply(geode);

		return 0;
	}


	// Operator binds:

};

osgUtil::VertexCacheMissVisitor* LunaTraits< osgUtil::VertexCacheMissVisitor >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_VertexCacheMissVisitor::_bind_ctor(L);
}

void LunaTraits< osgUtil::VertexCacheMissVisitor >::_bind_dtor(osgUtil::VertexCacheMissVisitor* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::VertexCacheMissVisitor >::className[] = "VertexCacheMissVisitor";
const char LunaTraits< osgUtil::VertexCacheMissVisitor >::fullName[] = "osgUtil::VertexCacheMissVisitor";
const char LunaTraits< osgUtil::VertexCacheMissVisitor >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::VertexCacheMissVisitor >::parents[] = {"osg.NodeVisitor", 0};
const int LunaTraits< osgUtil::VertexCacheMissVisitor >::hash = 61441161;
const int LunaTraits< osgUtil::VertexCacheMissVisitor >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::VertexCacheMissVisitor >::methods[] = {
	{"reset", &luna_wrapper_osgUtil_VertexCacheMissVisitor::_bind_reset},
	{"apply", &luna_wrapper_osgUtil_VertexCacheMissVisitor::_bind_apply},
	{"doGeometry", &luna_wrapper_osgUtil_VertexCacheMissVisitor::_bind_doGeometry},
	{"getMisses", &luna_wrapper_osgUtil_VertexCacheMissVisitor::_bind_getMisses},
	{"getTriangles", &luna_wrapper_osgUtil_VertexCacheMissVisitor::_bind_getTriangles},
	{"setMisses", &luna_wrapper_osgUtil_VertexCacheMissVisitor::_bind_setMisses},
	{"setTriangles", &luna_wrapper_osgUtil_VertexCacheMissVisitor::_bind_setTriangles},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgUtil_VertexCacheMissVisitor::_bind_base_setThreadSafeRefUnref},
	{"base_libraryName", &luna_wrapper_osgUtil_VertexCacheMissVisitor::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osgUtil_VertexCacheMissVisitor::_bind_base_className},
	{"base_getEyePoint", &luna_wrapper_osgUtil_VertexCacheMissVisitor::_bind_base_getEyePoint},
	{"base_getViewPoint", &luna_wrapper_osgUtil_VertexCacheMissVisitor::_bind_base_getViewPoint},
	{"base_getDistanceToEyePoint", &luna_wrapper_osgUtil_VertexCacheMissVisitor::_bind_base_getDistanceToEyePoint},
	{"base_getDistanceFromEyePoint", &luna_wrapper_osgUtil_VertexCacheMissVisitor::_bind_base_getDistanceFromEyePoint},
	{"base_getDistanceToViewPoint", &luna_wrapper_osgUtil_VertexCacheMissVisitor::_bind_base_getDistanceToViewPoint},
	{"base_reset", &luna_wrapper_osgUtil_VertexCacheMissVisitor::_bind_base_reset},
	{"base_apply", &luna_wrapper_osgUtil_VertexCacheMissVisitor::_bind_base_apply},
	{"fromVoid", &luna_wrapper_osgUtil_VertexCacheMissVisitor::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgUtil_VertexCacheMissVisitor::_bind_asVoid},
	{"getTable", &luna_wrapper_osgUtil_VertexCacheMissVisitor::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::VertexCacheMissVisitor >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_VertexCacheMissVisitor::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::VertexCacheMissVisitor >::enumValues[] = {
	{0,0}
};



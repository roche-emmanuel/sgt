#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_ConvexPlanarOccluder.h>

class luna_wrapper_osg_ConvexPlanarOccluder {
public:
	typedef Luna< osg::ConvexPlanarOccluder > luna_t;

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

		osg::ConvexPlanarOccluder* self= (osg::ConvexPlanarOccluder*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::ConvexPlanarOccluder >::push(L,self,false);
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
		//osg::ConvexPlanarOccluder* ptr= dynamic_cast< osg::ConvexPlanarOccluder* >(Luna< osg::Referenced >::check(L,1));
		osg::ConvexPlanarOccluder* ptr= luna_caster< osg::Referenced, osg::ConvexPlanarOccluder >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::ConvexPlanarOccluder >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::ConvexPlanarOccluder >(L,1))) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( luatop>1 && (!(Luna< osg::CopyOp >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::ConvexPlanarOccluder >(L,2))) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,27134364) ) return false;
		if( luatop>2 && (!(Luna< osg::CopyOp >::check(L,3))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_cloneType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_clone(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isSameKindAs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setOccluder(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,16091124) ) return false;
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

	inline static bool _lg_typecheck_addHole(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,16091124) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setHoleList(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,35991211) ) return false;
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

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_computeDataVariance(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setUserData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getUserData_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getUserData_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_releaseGLObjects(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_cloneType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_clone(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_isSameKindAs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::ConvexPlanarOccluder::ConvexPlanarOccluder()
	static osg::ConvexPlanarOccluder* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::ConvexPlanarOccluder::ConvexPlanarOccluder() function, expected prototype:\nosg::ConvexPlanarOccluder::ConvexPlanarOccluder()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::ConvexPlanarOccluder();
	}

	// osg::ConvexPlanarOccluder::ConvexPlanarOccluder(const osg::ConvexPlanarOccluder & cpo, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::ConvexPlanarOccluder* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::ConvexPlanarOccluder::ConvexPlanarOccluder(const osg::ConvexPlanarOccluder & cpo, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::ConvexPlanarOccluder::ConvexPlanarOccluder(const osg::ConvexPlanarOccluder & cpo, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::ConvexPlanarOccluder* cpo_ptr=(Luna< osg::Referenced >::checkSubType< osg::ConvexPlanarOccluder >(L,1));
		if( !cpo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cpo in osg::ConvexPlanarOccluder::ConvexPlanarOccluder function");
		}
		const osg::ConvexPlanarOccluder & cpo=*cpo_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::ConvexPlanarOccluder::ConvexPlanarOccluder function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osg::ConvexPlanarOccluder(cpo, copyop);
	}

	// osg::ConvexPlanarOccluder::ConvexPlanarOccluder(lua_Table * data)
	static osg::ConvexPlanarOccluder* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::ConvexPlanarOccluder::ConvexPlanarOccluder(lua_Table * data) function, expected prototype:\nosg::ConvexPlanarOccluder::ConvexPlanarOccluder(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_ConvexPlanarOccluder(L,NULL);
	}

	// osg::ConvexPlanarOccluder::ConvexPlanarOccluder(lua_Table * data, const osg::ConvexPlanarOccluder & cpo, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::ConvexPlanarOccluder* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::ConvexPlanarOccluder::ConvexPlanarOccluder(lua_Table * data, const osg::ConvexPlanarOccluder & cpo, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::ConvexPlanarOccluder::ConvexPlanarOccluder(lua_Table * data, const osg::ConvexPlanarOccluder & cpo, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::ConvexPlanarOccluder* cpo_ptr=(Luna< osg::Referenced >::checkSubType< osg::ConvexPlanarOccluder >(L,2));
		if( !cpo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cpo in osg::ConvexPlanarOccluder::ConvexPlanarOccluder function");
		}
		const osg::ConvexPlanarOccluder & cpo=*cpo_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::ConvexPlanarOccluder::ConvexPlanarOccluder function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_ConvexPlanarOccluder(L,NULL, cpo, copyop);
	}

	// Overload binder for osg::ConvexPlanarOccluder::ConvexPlanarOccluder
	static osg::ConvexPlanarOccluder* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function ConvexPlanarOccluder, cannot match any of the overloads for function ConvexPlanarOccluder:\n  ConvexPlanarOccluder()\n  ConvexPlanarOccluder(const osg::ConvexPlanarOccluder &, const osg::CopyOp &)\n  ConvexPlanarOccluder(lua_Table *)\n  ConvexPlanarOccluder(lua_Table *, const osg::ConvexPlanarOccluder &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::ConvexPlanarOccluder::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::ConvexPlanarOccluder::cloneType() const function, expected prototype:\nosg::Object * osg::ConvexPlanarOccluder::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ConvexPlanarOccluder* self=Luna< osg::Referenced >::checkSubType< osg::ConvexPlanarOccluder >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::ConvexPlanarOccluder::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::ConvexPlanarOccluder::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::ConvexPlanarOccluder::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::ConvexPlanarOccluder::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConvexPlanarOccluder::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::ConvexPlanarOccluder* self=Luna< osg::Referenced >::checkSubType< osg::ConvexPlanarOccluder >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::ConvexPlanarOccluder::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::ConvexPlanarOccluder::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::ConvexPlanarOccluder::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::ConvexPlanarOccluder::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::ConvexPlanarOccluder* self=Luna< osg::Referenced >::checkSubType< osg::ConvexPlanarOccluder >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::ConvexPlanarOccluder::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::ConvexPlanarOccluder::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::ConvexPlanarOccluder::libraryName() const function, expected prototype:\nconst char * osg::ConvexPlanarOccluder::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ConvexPlanarOccluder* self=Luna< osg::Referenced >::checkSubType< osg::ConvexPlanarOccluder >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::ConvexPlanarOccluder::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::ConvexPlanarOccluder::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::ConvexPlanarOccluder::className() const function, expected prototype:\nconst char * osg::ConvexPlanarOccluder::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ConvexPlanarOccluder* self=Luna< osg::Referenced >::checkSubType< osg::ConvexPlanarOccluder >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::ConvexPlanarOccluder::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::ConvexPlanarOccluder::setOccluder(const osg::ConvexPlanarPolygon & cpp)
	static int _bind_setOccluder(lua_State *L) {
		if (!_lg_typecheck_setOccluder(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ConvexPlanarOccluder::setOccluder(const osg::ConvexPlanarPolygon & cpp) function, expected prototype:\nvoid osg::ConvexPlanarOccluder::setOccluder(const osg::ConvexPlanarPolygon & cpp)\nClass arguments details:\narg 1 ID = 16091124\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::ConvexPlanarPolygon* cpp_ptr=(Luna< osg::ConvexPlanarPolygon >::check(L,2));
		if( !cpp_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cpp in osg::ConvexPlanarOccluder::setOccluder function");
		}
		const osg::ConvexPlanarPolygon & cpp=*cpp_ptr;

		osg::ConvexPlanarOccluder* self=Luna< osg::Referenced >::checkSubType< osg::ConvexPlanarOccluder >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ConvexPlanarOccluder::setOccluder(const osg::ConvexPlanarPolygon &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setOccluder(cpp);

		return 0;
	}

	// osg::ConvexPlanarPolygon & osg::ConvexPlanarOccluder::getOccluder()
	static int _bind_getOccluder_overload_1(lua_State *L) {
		if (!_lg_typecheck_getOccluder_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::ConvexPlanarPolygon & osg::ConvexPlanarOccluder::getOccluder() function, expected prototype:\nosg::ConvexPlanarPolygon & osg::ConvexPlanarOccluder::getOccluder()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ConvexPlanarOccluder* self=Luna< osg::Referenced >::checkSubType< osg::ConvexPlanarOccluder >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::ConvexPlanarPolygon & osg::ConvexPlanarOccluder::getOccluder(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::ConvexPlanarPolygon* lret = &self->getOccluder();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::ConvexPlanarPolygon >::push(L,lret,false);

		return 1;
	}

	// const osg::ConvexPlanarPolygon & osg::ConvexPlanarOccluder::getOccluder() const
	static int _bind_getOccluder_overload_2(lua_State *L) {
		if (!_lg_typecheck_getOccluder_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::ConvexPlanarPolygon & osg::ConvexPlanarOccluder::getOccluder() const function, expected prototype:\nconst osg::ConvexPlanarPolygon & osg::ConvexPlanarOccluder::getOccluder() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ConvexPlanarOccluder* self=Luna< osg::Referenced >::checkSubType< osg::ConvexPlanarOccluder >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::ConvexPlanarPolygon & osg::ConvexPlanarOccluder::getOccluder() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::ConvexPlanarPolygon* lret = &self->getOccluder();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::ConvexPlanarPolygon >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::ConvexPlanarOccluder::getOccluder
	static int _bind_getOccluder(lua_State *L) {
		if (_lg_typecheck_getOccluder_overload_1(L)) return _bind_getOccluder_overload_1(L);
		if (_lg_typecheck_getOccluder_overload_2(L)) return _bind_getOccluder_overload_2(L);

		luaL_error(L, "error in function getOccluder, cannot match any of the overloads for function getOccluder:\n  getOccluder()\n  getOccluder()\n");
		return 0;
	}

	// void osg::ConvexPlanarOccluder::addHole(const osg::ConvexPlanarPolygon & cpp)
	static int _bind_addHole(lua_State *L) {
		if (!_lg_typecheck_addHole(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ConvexPlanarOccluder::addHole(const osg::ConvexPlanarPolygon & cpp) function, expected prototype:\nvoid osg::ConvexPlanarOccluder::addHole(const osg::ConvexPlanarPolygon & cpp)\nClass arguments details:\narg 1 ID = 16091124\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::ConvexPlanarPolygon* cpp_ptr=(Luna< osg::ConvexPlanarPolygon >::check(L,2));
		if( !cpp_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cpp in osg::ConvexPlanarOccluder::addHole function");
		}
		const osg::ConvexPlanarPolygon & cpp=*cpp_ptr;

		osg::ConvexPlanarOccluder* self=Luna< osg::Referenced >::checkSubType< osg::ConvexPlanarOccluder >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ConvexPlanarOccluder::addHole(const osg::ConvexPlanarPolygon &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addHole(cpp);

		return 0;
	}

	// void osg::ConvexPlanarOccluder::setHoleList(const osg::ConvexPlanarOccluder::HoleList & holeList)
	static int _bind_setHoleList(lua_State *L) {
		if (!_lg_typecheck_setHoleList(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ConvexPlanarOccluder::setHoleList(const osg::ConvexPlanarOccluder::HoleList & holeList) function, expected prototype:\nvoid osg::ConvexPlanarOccluder::setHoleList(const osg::ConvexPlanarOccluder::HoleList & holeList)\nClass arguments details:\narg 1 ID = 25393619\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::ConvexPlanarOccluder::HoleList* holeList_ptr=(Luna< std::vector< osg::ConvexPlanarPolygon > >::checkSubType< osg::ConvexPlanarOccluder::HoleList >(L,2));
		if( !holeList_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg holeList in osg::ConvexPlanarOccluder::setHoleList function");
		}
		const osg::ConvexPlanarOccluder::HoleList & holeList=*holeList_ptr;

		osg::ConvexPlanarOccluder* self=Luna< osg::Referenced >::checkSubType< osg::ConvexPlanarOccluder >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ConvexPlanarOccluder::setHoleList(const osg::ConvexPlanarOccluder::HoleList &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setHoleList(holeList);

		return 0;
	}

	// osg::ConvexPlanarOccluder::HoleList & osg::ConvexPlanarOccluder::getHoleList()
	static int _bind_getHoleList_overload_1(lua_State *L) {
		if (!_lg_typecheck_getHoleList_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::ConvexPlanarOccluder::HoleList & osg::ConvexPlanarOccluder::getHoleList() function, expected prototype:\nosg::ConvexPlanarOccluder::HoleList & osg::ConvexPlanarOccluder::getHoleList()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ConvexPlanarOccluder* self=Luna< osg::Referenced >::checkSubType< osg::ConvexPlanarOccluder >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::ConvexPlanarOccluder::HoleList & osg::ConvexPlanarOccluder::getHoleList(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::ConvexPlanarOccluder::HoleList* lret = &self->getHoleList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::ConvexPlanarOccluder::HoleList >::push(L,lret,false);

		return 1;
	}

	// const osg::ConvexPlanarOccluder::HoleList & osg::ConvexPlanarOccluder::getHoleList() const
	static int _bind_getHoleList_overload_2(lua_State *L) {
		if (!_lg_typecheck_getHoleList_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::ConvexPlanarOccluder::HoleList & osg::ConvexPlanarOccluder::getHoleList() const function, expected prototype:\nconst osg::ConvexPlanarOccluder::HoleList & osg::ConvexPlanarOccluder::getHoleList() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ConvexPlanarOccluder* self=Luna< osg::Referenced >::checkSubType< osg::ConvexPlanarOccluder >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::ConvexPlanarOccluder::HoleList & osg::ConvexPlanarOccluder::getHoleList() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::ConvexPlanarOccluder::HoleList* lret = &self->getHoleList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::ConvexPlanarOccluder::HoleList >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::ConvexPlanarOccluder::getHoleList
	static int _bind_getHoleList(lua_State *L) {
		if (_lg_typecheck_getHoleList_overload_1(L)) return _bind_getHoleList_overload_1(L);
		if (_lg_typecheck_getHoleList_overload_2(L)) return _bind_getHoleList_overload_2(L);

		luaL_error(L, "error in function getHoleList, cannot match any of the overloads for function getHoleList:\n  getHoleList()\n  getHoleList()\n");
		return 0;
	}

	// void osg::ConvexPlanarOccluder::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ConvexPlanarOccluder::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::ConvexPlanarOccluder::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::ConvexPlanarOccluder* self=Luna< osg::Referenced >::checkSubType< osg::ConvexPlanarOccluder >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ConvexPlanarOccluder::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ConvexPlanarOccluder::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::ConvexPlanarOccluder::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ConvexPlanarOccluder::base_setName(const std::string & name) function, expected prototype:\nvoid osg::ConvexPlanarOccluder::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::ConvexPlanarOccluder* self=Luna< osg::Referenced >::checkSubType< osg::ConvexPlanarOccluder >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ConvexPlanarOccluder::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ConvexPlanarOccluder::setName(name);

		return 0;
	}

	// void osg::ConvexPlanarOccluder::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ConvexPlanarOccluder::base_computeDataVariance() function, expected prototype:\nvoid osg::ConvexPlanarOccluder::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ConvexPlanarOccluder* self=Luna< osg::Referenced >::checkSubType< osg::ConvexPlanarOccluder >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ConvexPlanarOccluder::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ConvexPlanarOccluder::computeDataVariance();

		return 0;
	}

	// void osg::ConvexPlanarOccluder::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ConvexPlanarOccluder::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::ConvexPlanarOccluder::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::ConvexPlanarOccluder* self=Luna< osg::Referenced >::checkSubType< osg::ConvexPlanarOccluder >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ConvexPlanarOccluder::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ConvexPlanarOccluder::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::ConvexPlanarOccluder::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::ConvexPlanarOccluder::base_getUserData() function, expected prototype:\nosg::Referenced * osg::ConvexPlanarOccluder::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ConvexPlanarOccluder* self=Luna< osg::Referenced >::checkSubType< osg::ConvexPlanarOccluder >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::ConvexPlanarOccluder::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->ConvexPlanarOccluder::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::ConvexPlanarOccluder::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::ConvexPlanarOccluder::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::ConvexPlanarOccluder::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ConvexPlanarOccluder* self=Luna< osg::Referenced >::checkSubType< osg::ConvexPlanarOccluder >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::ConvexPlanarOccluder::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->ConvexPlanarOccluder::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::ConvexPlanarOccluder::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osg::ConvexPlanarOccluder::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ConvexPlanarOccluder::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::ConvexPlanarOccluder::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::ConvexPlanarOccluder* self=Luna< osg::Referenced >::checkSubType< osg::ConvexPlanarOccluder >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ConvexPlanarOccluder::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ConvexPlanarOccluder::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osg::ConvexPlanarOccluder::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::ConvexPlanarOccluder::base_cloneType() const function, expected prototype:\nosg::Object * osg::ConvexPlanarOccluder::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ConvexPlanarOccluder* self=Luna< osg::Referenced >::checkSubType< osg::ConvexPlanarOccluder >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::ConvexPlanarOccluder::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->ConvexPlanarOccluder::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::ConvexPlanarOccluder::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::ConvexPlanarOccluder::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::ConvexPlanarOccluder::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConvexPlanarOccluder::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::ConvexPlanarOccluder* self=Luna< osg::Referenced >::checkSubType< osg::ConvexPlanarOccluder >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::ConvexPlanarOccluder::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->ConvexPlanarOccluder::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::ConvexPlanarOccluder::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::ConvexPlanarOccluder::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::ConvexPlanarOccluder::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::ConvexPlanarOccluder* self=Luna< osg::Referenced >::checkSubType< osg::ConvexPlanarOccluder >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::ConvexPlanarOccluder::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ConvexPlanarOccluder::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::ConvexPlanarOccluder::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::ConvexPlanarOccluder::base_libraryName() const function, expected prototype:\nconst char * osg::ConvexPlanarOccluder::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ConvexPlanarOccluder* self=Luna< osg::Referenced >::checkSubType< osg::ConvexPlanarOccluder >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::ConvexPlanarOccluder::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->ConvexPlanarOccluder::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::ConvexPlanarOccluder::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::ConvexPlanarOccluder::base_className() const function, expected prototype:\nconst char * osg::ConvexPlanarOccluder::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ConvexPlanarOccluder* self=Luna< osg::Referenced >::checkSubType< osg::ConvexPlanarOccluder >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::ConvexPlanarOccluder::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->ConvexPlanarOccluder::className();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

osg::ConvexPlanarOccluder* LunaTraits< osg::ConvexPlanarOccluder >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_ConvexPlanarOccluder::_bind_ctor(L);
}

void LunaTraits< osg::ConvexPlanarOccluder >::_bind_dtor(osg::ConvexPlanarOccluder* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::ConvexPlanarOccluder >::className[] = "ConvexPlanarOccluder";
const char LunaTraits< osg::ConvexPlanarOccluder >::fullName[] = "osg::ConvexPlanarOccluder";
const char LunaTraits< osg::ConvexPlanarOccluder >::moduleName[] = "osg";
const char* LunaTraits< osg::ConvexPlanarOccluder >::parents[] = {"osg.Object", 0};
const int LunaTraits< osg::ConvexPlanarOccluder >::hash = 66912903;
const int LunaTraits< osg::ConvexPlanarOccluder >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::ConvexPlanarOccluder >::methods[] = {
	{"cloneType", &luna_wrapper_osg_ConvexPlanarOccluder::_bind_cloneType},
	{"clone", &luna_wrapper_osg_ConvexPlanarOccluder::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_ConvexPlanarOccluder::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_ConvexPlanarOccluder::_bind_libraryName},
	{"className", &luna_wrapper_osg_ConvexPlanarOccluder::_bind_className},
	{"setOccluder", &luna_wrapper_osg_ConvexPlanarOccluder::_bind_setOccluder},
	{"getOccluder", &luna_wrapper_osg_ConvexPlanarOccluder::_bind_getOccluder},
	{"addHole", &luna_wrapper_osg_ConvexPlanarOccluder::_bind_addHole},
	{"setHoleList", &luna_wrapper_osg_ConvexPlanarOccluder::_bind_setHoleList},
	{"getHoleList", &luna_wrapper_osg_ConvexPlanarOccluder::_bind_getHoleList},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_ConvexPlanarOccluder::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osg_ConvexPlanarOccluder::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_ConvexPlanarOccluder::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_ConvexPlanarOccluder::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_ConvexPlanarOccluder::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osg_ConvexPlanarOccluder::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osg_ConvexPlanarOccluder::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_ConvexPlanarOccluder::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_ConvexPlanarOccluder::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_ConvexPlanarOccluder::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_ConvexPlanarOccluder::_bind_base_className},
	{"fromVoid", &luna_wrapper_osg_ConvexPlanarOccluder::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_ConvexPlanarOccluder::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_ConvexPlanarOccluder::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ConvexPlanarOccluder >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_ConvexPlanarOccluder::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ConvexPlanarOccluder >::enumValues[] = {
	{0,0}
};



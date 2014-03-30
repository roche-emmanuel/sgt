#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_Sphere.h>

class luna_wrapper_osg_Sphere {
public:
	typedef Luna< osg::Sphere > luna_t;

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

		osg::Sphere* self= (osg::Sphere*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::Sphere >::push(L,self,false);
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
		//osg::Sphere* ptr= dynamic_cast< osg::Sphere* >(Luna< osg::Referenced >::check(L,1));
		osg::Sphere* ptr= luna_caster< osg::Referenced, osg::Sphere >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::Sphere >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,1))) ) return false;
		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Sphere >(L,1))) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( luatop>1 && (!(Luna< osg::CopyOp >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,2))) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Sphere >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_accept_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,36301858) ) return false;
		if( (!(Luna< osg::ShapeVisitor >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_accept_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45826538) ) return false;
		if( (!(Luna< osg::ConstShapeVisitor >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_valid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_set(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCenter(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCenter(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setRadius(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRadius(lua_State *L) {
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

	inline static bool _lg_typecheck_base_accept_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,36301858) ) return false;
		if( (!(Luna< osg::ShapeVisitor >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_accept_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45826538) ) return false;
		if( (!(Luna< osg::ConstShapeVisitor >::check(L,2))) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::Sphere::Sphere()
	static osg::Sphere* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Sphere::Sphere() function, expected prototype:\nosg::Sphere::Sphere()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::Sphere();
	}

	// osg::Sphere::Sphere(const osg::Vec3f & center, float radius)
	static osg::Sphere* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Sphere::Sphere(const osg::Vec3f & center, float radius) function, expected prototype:\nosg::Sphere::Sphere(const osg::Vec3f & center, float radius)\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* center_ptr=(Luna< osg::Vec3f >::check(L,1));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in osg::Sphere::Sphere function");
		}
		const osg::Vec3f & center=*center_ptr;
		float radius=(float)lua_tonumber(L,2);

		return new osg::Sphere(center, radius);
	}

	// osg::Sphere::Sphere(const osg::Sphere & sphere, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::Sphere* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::Sphere::Sphere(const osg::Sphere & sphere, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::Sphere::Sphere(const osg::Sphere & sphere, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::Sphere* sphere_ptr=(Luna< osg::Referenced >::checkSubType< osg::Sphere >(L,1));
		if( !sphere_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sphere in osg::Sphere::Sphere function");
		}
		const osg::Sphere & sphere=*sphere_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Sphere::Sphere function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osg::Sphere(sphere, copyop);
	}

	// osg::Sphere::Sphere(lua_Table * data)
	static osg::Sphere* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::Sphere::Sphere(lua_Table * data) function, expected prototype:\nosg::Sphere::Sphere(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_Sphere(L,NULL);
	}

	// osg::Sphere::Sphere(lua_Table * data, const osg::Vec3f & center, float radius)
	static osg::Sphere* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in osg::Sphere::Sphere(lua_Table * data, const osg::Vec3f & center, float radius) function, expected prototype:\nosg::Sphere::Sphere(lua_Table * data, const osg::Vec3f & center, float radius)\nClass arguments details:\narg 2 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* center_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in osg::Sphere::Sphere function");
		}
		const osg::Vec3f & center=*center_ptr;
		float radius=(float)lua_tonumber(L,3);

		return new wrapper_osg_Sphere(L,NULL, center, radius);
	}

	// osg::Sphere::Sphere(lua_Table * data, const osg::Sphere & sphere, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::Sphere* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in osg::Sphere::Sphere(lua_Table * data, const osg::Sphere & sphere, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::Sphere::Sphere(lua_Table * data, const osg::Sphere & sphere, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::Sphere* sphere_ptr=(Luna< osg::Referenced >::checkSubType< osg::Sphere >(L,2));
		if( !sphere_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sphere in osg::Sphere::Sphere function");
		}
		const osg::Sphere & sphere=*sphere_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Sphere::Sphere function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_Sphere(L,NULL, sphere, copyop);
	}

	// Overload binder for osg::Sphere::Sphere
	static osg::Sphere* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);

		luaL_error(L, "error in function Sphere, cannot match any of the overloads for function Sphere:\n  Sphere()\n  Sphere(const osg::Vec3f &, float)\n  Sphere(const osg::Sphere &, const osg::CopyOp &)\n  Sphere(lua_Table *)\n  Sphere(lua_Table *, const osg::Vec3f &, float)\n  Sphere(lua_Table *, const osg::Sphere &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::Sphere::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Sphere::cloneType() const function, expected prototype:\nosg::Object * osg::Sphere::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Sphere* self=Luna< osg::Referenced >::checkSubType< osg::Sphere >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Sphere::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Sphere::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Sphere::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::Sphere::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Sphere::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::Sphere* self=Luna< osg::Referenced >::checkSubType< osg::Sphere >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Sphere::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::Sphere::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Sphere::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Sphere::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::Sphere* self=Luna< osg::Referenced >::checkSubType< osg::Sphere >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Sphere::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Sphere::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Sphere::libraryName() const function, expected prototype:\nconst char * osg::Sphere::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Sphere* self=Luna< osg::Referenced >::checkSubType< osg::Sphere >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Sphere::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Sphere::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Sphere::className() const function, expected prototype:\nconst char * osg::Sphere::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Sphere* self=Luna< osg::Referenced >::checkSubType< osg::Sphere >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Sphere::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::Sphere::accept(osg::ShapeVisitor & arg1)
	static int _bind_accept_overload_1(lua_State *L) {
		if (!_lg_typecheck_accept_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Sphere::accept(osg::ShapeVisitor & arg1) function, expected prototype:\nvoid osg::Sphere::accept(osg::ShapeVisitor & arg1)\nClass arguments details:\narg 1 ID = 36301858\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ShapeVisitor* _arg1_ptr=(Luna< osg::ShapeVisitor >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Sphere::accept function");
		}
		osg::ShapeVisitor & _arg1=*_arg1_ptr;

		osg::Sphere* self=Luna< osg::Referenced >::checkSubType< osg::Sphere >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Sphere::accept(osg::ShapeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->accept(_arg1);

		return 0;
	}

	// void osg::Sphere::accept(osg::ConstShapeVisitor & arg1) const
	static int _bind_accept_overload_2(lua_State *L) {
		if (!_lg_typecheck_accept_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Sphere::accept(osg::ConstShapeVisitor & arg1) const function, expected prototype:\nvoid osg::Sphere::accept(osg::ConstShapeVisitor & arg1) const\nClass arguments details:\narg 1 ID = 45826538\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ConstShapeVisitor* _arg1_ptr=(Luna< osg::ConstShapeVisitor >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Sphere::accept function");
		}
		osg::ConstShapeVisitor & _arg1=*_arg1_ptr;

		osg::Sphere* self=Luna< osg::Referenced >::checkSubType< osg::Sphere >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Sphere::accept(osg::ConstShapeVisitor &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->accept(_arg1);

		return 0;
	}

	// Overload binder for osg::Sphere::accept
	static int _bind_accept(lua_State *L) {
		if (_lg_typecheck_accept_overload_1(L)) return _bind_accept_overload_1(L);
		if (_lg_typecheck_accept_overload_2(L)) return _bind_accept_overload_2(L);

		luaL_error(L, "error in function accept, cannot match any of the overloads for function accept:\n  accept(osg::ShapeVisitor &)\n  accept(osg::ConstShapeVisitor &)\n");
		return 0;
	}

	// bool osg::Sphere::valid() const
	static int _bind_valid(lua_State *L) {
		if (!_lg_typecheck_valid(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Sphere::valid() const function, expected prototype:\nbool osg::Sphere::valid() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Sphere* self=Luna< osg::Referenced >::checkSubType< osg::Sphere >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Sphere::valid() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->valid();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Sphere::set(const osg::Vec3f & center, float radius)
	static int _bind_set(lua_State *L) {
		if (!_lg_typecheck_set(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Sphere::set(const osg::Vec3f & center, float radius) function, expected prototype:\nvoid osg::Sphere::set(const osg::Vec3f & center, float radius)\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* center_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in osg::Sphere::set function");
		}
		const osg::Vec3f & center=*center_ptr;
		float radius=(float)lua_tonumber(L,3);

		osg::Sphere* self=Luna< osg::Referenced >::checkSubType< osg::Sphere >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Sphere::set(const osg::Vec3f &, float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set(center, radius);

		return 0;
	}

	// void osg::Sphere::setCenter(const osg::Vec3f & center)
	static int _bind_setCenter(lua_State *L) {
		if (!_lg_typecheck_setCenter(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Sphere::setCenter(const osg::Vec3f & center) function, expected prototype:\nvoid osg::Sphere::setCenter(const osg::Vec3f & center)\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* center_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in osg::Sphere::setCenter function");
		}
		const osg::Vec3f & center=*center_ptr;

		osg::Sphere* self=Luna< osg::Referenced >::checkSubType< osg::Sphere >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Sphere::setCenter(const osg::Vec3f &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setCenter(center);

		return 0;
	}

	// const osg::Vec3f & osg::Sphere::getCenter() const
	static int _bind_getCenter(lua_State *L) {
		if (!_lg_typecheck_getCenter(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec3f & osg::Sphere::getCenter() const function, expected prototype:\nconst osg::Vec3f & osg::Sphere::getCenter() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Sphere* self=Luna< osg::Referenced >::checkSubType< osg::Sphere >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec3f & osg::Sphere::getCenter() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec3f* lret = &self->getCenter();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// void osg::Sphere::setRadius(float radius)
	static int _bind_setRadius(lua_State *L) {
		if (!_lg_typecheck_setRadius(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Sphere::setRadius(float radius) function, expected prototype:\nvoid osg::Sphere::setRadius(float radius)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float radius=(float)lua_tonumber(L,2);

		osg::Sphere* self=Luna< osg::Referenced >::checkSubType< osg::Sphere >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Sphere::setRadius(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setRadius(radius);

		return 0;
	}

	// float osg::Sphere::getRadius() const
	static int _bind_getRadius(lua_State *L) {
		if (!_lg_typecheck_getRadius(L)) {
			luaL_error(L, "luna typecheck failed in float osg::Sphere::getRadius() const function, expected prototype:\nfloat osg::Sphere::getRadius() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Sphere* self=Luna< osg::Referenced >::checkSubType< osg::Sphere >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osg::Sphere::getRadius() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getRadius();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Sphere::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Sphere::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::Sphere::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::Sphere* self=Luna< osg::Referenced >::checkSubType< osg::Sphere >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Sphere::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Sphere::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::Sphere::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Sphere::base_setName(const std::string & name) function, expected prototype:\nvoid osg::Sphere::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::Sphere* self=Luna< osg::Referenced >::checkSubType< osg::Sphere >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Sphere::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Sphere::setName(name);

		return 0;
	}

	// void osg::Sphere::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Sphere::base_computeDataVariance() function, expected prototype:\nvoid osg::Sphere::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Sphere* self=Luna< osg::Referenced >::checkSubType< osg::Sphere >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Sphere::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Sphere::computeDataVariance();

		return 0;
	}

	// void osg::Sphere::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Sphere::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::Sphere::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::Sphere* self=Luna< osg::Referenced >::checkSubType< osg::Sphere >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Sphere::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Sphere::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::Sphere::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::Sphere::base_getUserData() function, expected prototype:\nosg::Referenced * osg::Sphere::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Sphere* self=Luna< osg::Referenced >::checkSubType< osg::Sphere >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::Sphere::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->Sphere::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::Sphere::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::Sphere::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::Sphere::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Sphere* self=Luna< osg::Referenced >::checkSubType< osg::Sphere >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::Sphere::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->Sphere::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Sphere::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osg::Sphere::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Sphere::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::Sphere::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::Sphere* self=Luna< osg::Referenced >::checkSubType< osg::Sphere >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Sphere::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Sphere::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osg::Sphere::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Sphere::base_cloneType() const function, expected prototype:\nosg::Object * osg::Sphere::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Sphere* self=Luna< osg::Referenced >::checkSubType< osg::Sphere >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Sphere::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->Sphere::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Sphere::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Sphere::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::Sphere::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Sphere::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::Sphere* self=Luna< osg::Referenced >::checkSubType< osg::Sphere >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Sphere::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->Sphere::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::Sphere::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Sphere::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Sphere::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::Sphere* self=Luna< osg::Referenced >::checkSubType< osg::Sphere >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Sphere::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Sphere::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Sphere::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Sphere::base_libraryName() const function, expected prototype:\nconst char * osg::Sphere::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Sphere* self=Luna< osg::Referenced >::checkSubType< osg::Sphere >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Sphere::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Sphere::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Sphere::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Sphere::base_className() const function, expected prototype:\nconst char * osg::Sphere::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Sphere* self=Luna< osg::Referenced >::checkSubType< osg::Sphere >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Sphere::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Sphere::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::Sphere::base_accept(osg::ShapeVisitor & arg1)
	static int _bind_base_accept_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_accept_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Sphere::base_accept(osg::ShapeVisitor & arg1) function, expected prototype:\nvoid osg::Sphere::base_accept(osg::ShapeVisitor & arg1)\nClass arguments details:\narg 1 ID = 36301858\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ShapeVisitor* _arg1_ptr=(Luna< osg::ShapeVisitor >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Sphere::base_accept function");
		}
		osg::ShapeVisitor & _arg1=*_arg1_ptr;

		osg::Sphere* self=Luna< osg::Referenced >::checkSubType< osg::Sphere >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Sphere::base_accept(osg::ShapeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Sphere::accept(_arg1);

		return 0;
	}

	// void osg::Sphere::base_accept(osg::ConstShapeVisitor & arg1) const
	static int _bind_base_accept_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_accept_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Sphere::base_accept(osg::ConstShapeVisitor & arg1) const function, expected prototype:\nvoid osg::Sphere::base_accept(osg::ConstShapeVisitor & arg1) const\nClass arguments details:\narg 1 ID = 45826538\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ConstShapeVisitor* _arg1_ptr=(Luna< osg::ConstShapeVisitor >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Sphere::base_accept function");
		}
		osg::ConstShapeVisitor & _arg1=*_arg1_ptr;

		osg::Sphere* self=Luna< osg::Referenced >::checkSubType< osg::Sphere >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Sphere::base_accept(osg::ConstShapeVisitor &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Sphere::accept(_arg1);

		return 0;
	}

	// Overload binder for osg::Sphere::base_accept
	static int _bind_base_accept(lua_State *L) {
		if (_lg_typecheck_base_accept_overload_1(L)) return _bind_base_accept_overload_1(L);
		if (_lg_typecheck_base_accept_overload_2(L)) return _bind_base_accept_overload_2(L);

		luaL_error(L, "error in function base_accept, cannot match any of the overloads for function base_accept:\n  base_accept(osg::ShapeVisitor &)\n  base_accept(osg::ConstShapeVisitor &)\n");
		return 0;
	}


	// Operator binds:

};

osg::Sphere* LunaTraits< osg::Sphere >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Sphere::_bind_ctor(L);
}

void LunaTraits< osg::Sphere >::_bind_dtor(osg::Sphere* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::Sphere >::className[] = "Sphere";
const char LunaTraits< osg::Sphere >::fullName[] = "osg::Sphere";
const char LunaTraits< osg::Sphere >::moduleName[] = "osg";
const char* LunaTraits< osg::Sphere >::parents[] = {"osg.Shape", 0};
const int LunaTraits< osg::Sphere >::hash = 85867783;
const int LunaTraits< osg::Sphere >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::Sphere >::methods[] = {
	{"cloneType", &luna_wrapper_osg_Sphere::_bind_cloneType},
	{"clone", &luna_wrapper_osg_Sphere::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_Sphere::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_Sphere::_bind_libraryName},
	{"className", &luna_wrapper_osg_Sphere::_bind_className},
	{"accept", &luna_wrapper_osg_Sphere::_bind_accept},
	{"valid", &luna_wrapper_osg_Sphere::_bind_valid},
	{"set", &luna_wrapper_osg_Sphere::_bind_set},
	{"setCenter", &luna_wrapper_osg_Sphere::_bind_setCenter},
	{"getCenter", &luna_wrapper_osg_Sphere::_bind_getCenter},
	{"setRadius", &luna_wrapper_osg_Sphere::_bind_setRadius},
	{"getRadius", &luna_wrapper_osg_Sphere::_bind_getRadius},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_Sphere::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osg_Sphere::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_Sphere::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_Sphere::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_Sphere::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osg_Sphere::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osg_Sphere::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_Sphere::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_Sphere::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_Sphere::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_Sphere::_bind_base_className},
	{"base_accept", &luna_wrapper_osg_Sphere::_bind_base_accept},
	{"fromVoid", &luna_wrapper_osg_Sphere::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_Sphere::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_Sphere::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Sphere >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_Sphere::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Sphere >::enumValues[] = {
	{0,0}
};



#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_Capsule.h>

class luna_wrapper_osg_Capsule {
public:
	typedef Luna< osg::Capsule > luna_t;

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

		osg::Capsule* self= (osg::Capsule*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::Capsule >::push(L,self,false);
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
		//osg::Capsule* ptr= dynamic_cast< osg::Capsule* >(Luna< osg::Referenced >::check(L,1));
		osg::Capsule* ptr= luna_caster< osg::Referenced, osg::Capsule >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::Capsule >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,1))) ) return false;
		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Capsule >(L,1))) ) return false;
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
		if( lua_gettop(L)!=4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,2))) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Capsule >(L,2))) ) return false;
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
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
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

	inline static bool _lg_typecheck_setHeight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setRotation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,80263306) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRotation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_computeRotationMatrix(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_zeroRotation(lua_State *L) {
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
	// osg::Capsule::Capsule()
	static osg::Capsule* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Capsule::Capsule() function, expected prototype:\nosg::Capsule::Capsule()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::Capsule();
	}

	// osg::Capsule::Capsule(const osg::Vec3f & center, float radius, float height)
	static osg::Capsule* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Capsule::Capsule(const osg::Vec3f & center, float radius, float height) function, expected prototype:\nosg::Capsule::Capsule(const osg::Vec3f & center, float radius, float height)\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* center_ptr=(Luna< osg::Vec3f >::check(L,1));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in osg::Capsule::Capsule function");
		}
		const osg::Vec3f & center=*center_ptr;
		float radius=(float)lua_tonumber(L,2);
		float height=(float)lua_tonumber(L,3);

		return new osg::Capsule(center, radius, height);
	}

	// osg::Capsule::Capsule(const osg::Capsule & capsule, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::Capsule* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::Capsule::Capsule(const osg::Capsule & capsule, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::Capsule::Capsule(const osg::Capsule & capsule, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::Capsule* capsule_ptr=(Luna< osg::Referenced >::checkSubType< osg::Capsule >(L,1));
		if( !capsule_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg capsule in osg::Capsule::Capsule function");
		}
		const osg::Capsule & capsule=*capsule_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Capsule::Capsule function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osg::Capsule(capsule, copyop);
	}

	// osg::Capsule::Capsule(lua_Table * data)
	static osg::Capsule* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::Capsule::Capsule(lua_Table * data) function, expected prototype:\nosg::Capsule::Capsule(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_Capsule(L,NULL);
	}

	// osg::Capsule::Capsule(lua_Table * data, const osg::Vec3f & center, float radius, float height)
	static osg::Capsule* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in osg::Capsule::Capsule(lua_Table * data, const osg::Vec3f & center, float radius, float height) function, expected prototype:\nosg::Capsule::Capsule(lua_Table * data, const osg::Vec3f & center, float radius, float height)\nClass arguments details:\narg 2 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* center_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in osg::Capsule::Capsule function");
		}
		const osg::Vec3f & center=*center_ptr;
		float radius=(float)lua_tonumber(L,3);
		float height=(float)lua_tonumber(L,4);

		return new wrapper_osg_Capsule(L,NULL, center, radius, height);
	}

	// osg::Capsule::Capsule(lua_Table * data, const osg::Capsule & capsule, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::Capsule* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in osg::Capsule::Capsule(lua_Table * data, const osg::Capsule & capsule, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::Capsule::Capsule(lua_Table * data, const osg::Capsule & capsule, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::Capsule* capsule_ptr=(Luna< osg::Referenced >::checkSubType< osg::Capsule >(L,2));
		if( !capsule_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg capsule in osg::Capsule::Capsule function");
		}
		const osg::Capsule & capsule=*capsule_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Capsule::Capsule function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_Capsule(L,NULL, capsule, copyop);
	}

	// Overload binder for osg::Capsule::Capsule
	static osg::Capsule* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);

		luaL_error(L, "error in function Capsule, cannot match any of the overloads for function Capsule:\n  Capsule()\n  Capsule(const osg::Vec3f &, float, float)\n  Capsule(const osg::Capsule &, const osg::CopyOp &)\n  Capsule(lua_Table *)\n  Capsule(lua_Table *, const osg::Vec3f &, float, float)\n  Capsule(lua_Table *, const osg::Capsule &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::Capsule::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Capsule::cloneType() const function, expected prototype:\nosg::Object * osg::Capsule::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Capsule* self=Luna< osg::Referenced >::checkSubType< osg::Capsule >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Capsule::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Capsule::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Capsule::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::Capsule::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Capsule::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::Capsule* self=Luna< osg::Referenced >::checkSubType< osg::Capsule >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Capsule::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::Capsule::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Capsule::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Capsule::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::Capsule* self=Luna< osg::Referenced >::checkSubType< osg::Capsule >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Capsule::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Capsule::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Capsule::libraryName() const function, expected prototype:\nconst char * osg::Capsule::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Capsule* self=Luna< osg::Referenced >::checkSubType< osg::Capsule >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Capsule::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Capsule::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Capsule::className() const function, expected prototype:\nconst char * osg::Capsule::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Capsule* self=Luna< osg::Referenced >::checkSubType< osg::Capsule >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Capsule::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::Capsule::accept(osg::ShapeVisitor & arg1)
	static int _bind_accept_overload_1(lua_State *L) {
		if (!_lg_typecheck_accept_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Capsule::accept(osg::ShapeVisitor & arg1) function, expected prototype:\nvoid osg::Capsule::accept(osg::ShapeVisitor & arg1)\nClass arguments details:\narg 1 ID = 36301858\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ShapeVisitor* _arg1_ptr=(Luna< osg::ShapeVisitor >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Capsule::accept function");
		}
		osg::ShapeVisitor & _arg1=*_arg1_ptr;

		osg::Capsule* self=Luna< osg::Referenced >::checkSubType< osg::Capsule >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Capsule::accept(osg::ShapeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->accept(_arg1);

		return 0;
	}

	// void osg::Capsule::accept(osg::ConstShapeVisitor & arg1) const
	static int _bind_accept_overload_2(lua_State *L) {
		if (!_lg_typecheck_accept_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Capsule::accept(osg::ConstShapeVisitor & arg1) const function, expected prototype:\nvoid osg::Capsule::accept(osg::ConstShapeVisitor & arg1) const\nClass arguments details:\narg 1 ID = 45826538\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ConstShapeVisitor* _arg1_ptr=(Luna< osg::ConstShapeVisitor >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Capsule::accept function");
		}
		osg::ConstShapeVisitor & _arg1=*_arg1_ptr;

		osg::Capsule* self=Luna< osg::Referenced >::checkSubType< osg::Capsule >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Capsule::accept(osg::ConstShapeVisitor &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->accept(_arg1);

		return 0;
	}

	// Overload binder for osg::Capsule::accept
	static int _bind_accept(lua_State *L) {
		if (_lg_typecheck_accept_overload_1(L)) return _bind_accept_overload_1(L);
		if (_lg_typecheck_accept_overload_2(L)) return _bind_accept_overload_2(L);

		luaL_error(L, "error in function accept, cannot match any of the overloads for function accept:\n  accept(osg::ShapeVisitor &)\n  accept(osg::ConstShapeVisitor &)\n");
		return 0;
	}

	// bool osg::Capsule::valid() const
	static int _bind_valid(lua_State *L) {
		if (!_lg_typecheck_valid(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Capsule::valid() const function, expected prototype:\nbool osg::Capsule::valid() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Capsule* self=Luna< osg::Referenced >::checkSubType< osg::Capsule >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Capsule::valid() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->valid();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Capsule::set(const osg::Vec3f & center, float radius, float height)
	static int _bind_set(lua_State *L) {
		if (!_lg_typecheck_set(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Capsule::set(const osg::Vec3f & center, float radius, float height) function, expected prototype:\nvoid osg::Capsule::set(const osg::Vec3f & center, float radius, float height)\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* center_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in osg::Capsule::set function");
		}
		const osg::Vec3f & center=*center_ptr;
		float radius=(float)lua_tonumber(L,3);
		float height=(float)lua_tonumber(L,4);

		osg::Capsule* self=Luna< osg::Referenced >::checkSubType< osg::Capsule >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Capsule::set(const osg::Vec3f &, float, float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set(center, radius, height);

		return 0;
	}

	// void osg::Capsule::setCenter(const osg::Vec3f & center)
	static int _bind_setCenter(lua_State *L) {
		if (!_lg_typecheck_setCenter(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Capsule::setCenter(const osg::Vec3f & center) function, expected prototype:\nvoid osg::Capsule::setCenter(const osg::Vec3f & center)\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* center_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in osg::Capsule::setCenter function");
		}
		const osg::Vec3f & center=*center_ptr;

		osg::Capsule* self=Luna< osg::Referenced >::checkSubType< osg::Capsule >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Capsule::setCenter(const osg::Vec3f &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setCenter(center);

		return 0;
	}

	// const osg::Vec3f & osg::Capsule::getCenter() const
	static int _bind_getCenter(lua_State *L) {
		if (!_lg_typecheck_getCenter(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec3f & osg::Capsule::getCenter() const function, expected prototype:\nconst osg::Vec3f & osg::Capsule::getCenter() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Capsule* self=Luna< osg::Referenced >::checkSubType< osg::Capsule >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec3f & osg::Capsule::getCenter() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec3f* lret = &self->getCenter();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// void osg::Capsule::setRadius(float radius)
	static int _bind_setRadius(lua_State *L) {
		if (!_lg_typecheck_setRadius(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Capsule::setRadius(float radius) function, expected prototype:\nvoid osg::Capsule::setRadius(float radius)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float radius=(float)lua_tonumber(L,2);

		osg::Capsule* self=Luna< osg::Referenced >::checkSubType< osg::Capsule >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Capsule::setRadius(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setRadius(radius);

		return 0;
	}

	// float osg::Capsule::getRadius() const
	static int _bind_getRadius(lua_State *L) {
		if (!_lg_typecheck_getRadius(L)) {
			luaL_error(L, "luna typecheck failed in float osg::Capsule::getRadius() const function, expected prototype:\nfloat osg::Capsule::getRadius() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Capsule* self=Luna< osg::Referenced >::checkSubType< osg::Capsule >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osg::Capsule::getRadius() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getRadius();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Capsule::setHeight(float height)
	static int _bind_setHeight(lua_State *L) {
		if (!_lg_typecheck_setHeight(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Capsule::setHeight(float height) function, expected prototype:\nvoid osg::Capsule::setHeight(float height)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float height=(float)lua_tonumber(L,2);

		osg::Capsule* self=Luna< osg::Referenced >::checkSubType< osg::Capsule >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Capsule::setHeight(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setHeight(height);

		return 0;
	}

	// float osg::Capsule::getHeight() const
	static int _bind_getHeight(lua_State *L) {
		if (!_lg_typecheck_getHeight(L)) {
			luaL_error(L, "luna typecheck failed in float osg::Capsule::getHeight() const function, expected prototype:\nfloat osg::Capsule::getHeight() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Capsule* self=Luna< osg::Referenced >::checkSubType< osg::Capsule >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osg::Capsule::getHeight() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Capsule::setRotation(const osg::Quat & quat)
	static int _bind_setRotation(lua_State *L) {
		if (!_lg_typecheck_setRotation(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Capsule::setRotation(const osg::Quat & quat) function, expected prototype:\nvoid osg::Capsule::setRotation(const osg::Quat & quat)\nClass arguments details:\narg 1 ID = 80263306\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Quat* quat_ptr=(Luna< osg::Quat >::check(L,2));
		if( !quat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg quat in osg::Capsule::setRotation function");
		}
		const osg::Quat & quat=*quat_ptr;

		osg::Capsule* self=Luna< osg::Referenced >::checkSubType< osg::Capsule >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Capsule::setRotation(const osg::Quat &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setRotation(quat);

		return 0;
	}

	// const osg::Quat & osg::Capsule::getRotation() const
	static int _bind_getRotation(lua_State *L) {
		if (!_lg_typecheck_getRotation(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Quat & osg::Capsule::getRotation() const function, expected prototype:\nconst osg::Quat & osg::Capsule::getRotation() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Capsule* self=Luna< osg::Referenced >::checkSubType< osg::Capsule >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Quat & osg::Capsule::getRotation() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Quat* lret = &self->getRotation();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Quat >::push(L,lret,false);

		return 1;
	}

	// osg::Matrixd osg::Capsule::computeRotationMatrix() const
	static int _bind_computeRotationMatrix(lua_State *L) {
		if (!_lg_typecheck_computeRotationMatrix(L)) {
			luaL_error(L, "luna typecheck failed in osg::Matrixd osg::Capsule::computeRotationMatrix() const function, expected prototype:\nosg::Matrixd osg::Capsule::computeRotationMatrix() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Capsule* self=Luna< osg::Referenced >::checkSubType< osg::Capsule >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Matrixd osg::Capsule::computeRotationMatrix() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Matrixd stack_lret = self->computeRotationMatrix();
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// bool osg::Capsule::zeroRotation() const
	static int _bind_zeroRotation(lua_State *L) {
		if (!_lg_typecheck_zeroRotation(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Capsule::zeroRotation() const function, expected prototype:\nbool osg::Capsule::zeroRotation() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Capsule* self=Luna< osg::Referenced >::checkSubType< osg::Capsule >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Capsule::zeroRotation() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->zeroRotation();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Capsule::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Capsule::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::Capsule::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::Capsule* self=Luna< osg::Referenced >::checkSubType< osg::Capsule >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Capsule::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Capsule::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::Capsule::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Capsule::base_setName(const std::string & name) function, expected prototype:\nvoid osg::Capsule::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::Capsule* self=Luna< osg::Referenced >::checkSubType< osg::Capsule >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Capsule::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Capsule::setName(name);

		return 0;
	}

	// void osg::Capsule::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Capsule::base_computeDataVariance() function, expected prototype:\nvoid osg::Capsule::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Capsule* self=Luna< osg::Referenced >::checkSubType< osg::Capsule >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Capsule::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Capsule::computeDataVariance();

		return 0;
	}

	// void osg::Capsule::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Capsule::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::Capsule::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::Capsule* self=Luna< osg::Referenced >::checkSubType< osg::Capsule >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Capsule::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Capsule::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::Capsule::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::Capsule::base_getUserData() function, expected prototype:\nosg::Referenced * osg::Capsule::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Capsule* self=Luna< osg::Referenced >::checkSubType< osg::Capsule >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::Capsule::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->Capsule::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::Capsule::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::Capsule::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::Capsule::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Capsule* self=Luna< osg::Referenced >::checkSubType< osg::Capsule >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::Capsule::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->Capsule::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Capsule::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osg::Capsule::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Capsule::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::Capsule::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::Capsule* self=Luna< osg::Referenced >::checkSubType< osg::Capsule >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Capsule::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Capsule::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osg::Capsule::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Capsule::base_cloneType() const function, expected prototype:\nosg::Object * osg::Capsule::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Capsule* self=Luna< osg::Referenced >::checkSubType< osg::Capsule >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Capsule::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->Capsule::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Capsule::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Capsule::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::Capsule::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Capsule::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::Capsule* self=Luna< osg::Referenced >::checkSubType< osg::Capsule >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Capsule::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->Capsule::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::Capsule::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Capsule::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Capsule::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::Capsule* self=Luna< osg::Referenced >::checkSubType< osg::Capsule >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Capsule::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Capsule::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Capsule::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Capsule::base_libraryName() const function, expected prototype:\nconst char * osg::Capsule::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Capsule* self=Luna< osg::Referenced >::checkSubType< osg::Capsule >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Capsule::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Capsule::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Capsule::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Capsule::base_className() const function, expected prototype:\nconst char * osg::Capsule::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Capsule* self=Luna< osg::Referenced >::checkSubType< osg::Capsule >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Capsule::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Capsule::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::Capsule::base_accept(osg::ShapeVisitor & arg1)
	static int _bind_base_accept_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_accept_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Capsule::base_accept(osg::ShapeVisitor & arg1) function, expected prototype:\nvoid osg::Capsule::base_accept(osg::ShapeVisitor & arg1)\nClass arguments details:\narg 1 ID = 36301858\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ShapeVisitor* _arg1_ptr=(Luna< osg::ShapeVisitor >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Capsule::base_accept function");
		}
		osg::ShapeVisitor & _arg1=*_arg1_ptr;

		osg::Capsule* self=Luna< osg::Referenced >::checkSubType< osg::Capsule >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Capsule::base_accept(osg::ShapeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Capsule::accept(_arg1);

		return 0;
	}

	// void osg::Capsule::base_accept(osg::ConstShapeVisitor & arg1) const
	static int _bind_base_accept_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_accept_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Capsule::base_accept(osg::ConstShapeVisitor & arg1) const function, expected prototype:\nvoid osg::Capsule::base_accept(osg::ConstShapeVisitor & arg1) const\nClass arguments details:\narg 1 ID = 45826538\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ConstShapeVisitor* _arg1_ptr=(Luna< osg::ConstShapeVisitor >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Capsule::base_accept function");
		}
		osg::ConstShapeVisitor & _arg1=*_arg1_ptr;

		osg::Capsule* self=Luna< osg::Referenced >::checkSubType< osg::Capsule >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Capsule::base_accept(osg::ConstShapeVisitor &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Capsule::accept(_arg1);

		return 0;
	}

	// Overload binder for osg::Capsule::base_accept
	static int _bind_base_accept(lua_State *L) {
		if (_lg_typecheck_base_accept_overload_1(L)) return _bind_base_accept_overload_1(L);
		if (_lg_typecheck_base_accept_overload_2(L)) return _bind_base_accept_overload_2(L);

		luaL_error(L, "error in function base_accept, cannot match any of the overloads for function base_accept:\n  base_accept(osg::ShapeVisitor &)\n  base_accept(osg::ConstShapeVisitor &)\n");
		return 0;
	}


	// Operator binds:

};

osg::Capsule* LunaTraits< osg::Capsule >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Capsule::_bind_ctor(L);
}

void LunaTraits< osg::Capsule >::_bind_dtor(osg::Capsule* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::Capsule >::className[] = "Capsule";
const char LunaTraits< osg::Capsule >::fullName[] = "osg::Capsule";
const char LunaTraits< osg::Capsule >::moduleName[] = "osg";
const char* LunaTraits< osg::Capsule >::parents[] = {"osg.Shape", 0};
const int LunaTraits< osg::Capsule >::hash = 40214871;
const int LunaTraits< osg::Capsule >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::Capsule >::methods[] = {
	{"cloneType", &luna_wrapper_osg_Capsule::_bind_cloneType},
	{"clone", &luna_wrapper_osg_Capsule::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_Capsule::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_Capsule::_bind_libraryName},
	{"className", &luna_wrapper_osg_Capsule::_bind_className},
	{"accept", &luna_wrapper_osg_Capsule::_bind_accept},
	{"valid", &luna_wrapper_osg_Capsule::_bind_valid},
	{"set", &luna_wrapper_osg_Capsule::_bind_set},
	{"setCenter", &luna_wrapper_osg_Capsule::_bind_setCenter},
	{"getCenter", &luna_wrapper_osg_Capsule::_bind_getCenter},
	{"setRadius", &luna_wrapper_osg_Capsule::_bind_setRadius},
	{"getRadius", &luna_wrapper_osg_Capsule::_bind_getRadius},
	{"setHeight", &luna_wrapper_osg_Capsule::_bind_setHeight},
	{"getHeight", &luna_wrapper_osg_Capsule::_bind_getHeight},
	{"setRotation", &luna_wrapper_osg_Capsule::_bind_setRotation},
	{"getRotation", &luna_wrapper_osg_Capsule::_bind_getRotation},
	{"computeRotationMatrix", &luna_wrapper_osg_Capsule::_bind_computeRotationMatrix},
	{"zeroRotation", &luna_wrapper_osg_Capsule::_bind_zeroRotation},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_Capsule::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osg_Capsule::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_Capsule::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_Capsule::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_Capsule::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osg_Capsule::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osg_Capsule::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_Capsule::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_Capsule::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_Capsule::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_Capsule::_bind_base_className},
	{"base_accept", &luna_wrapper_osg_Capsule::_bind_base_accept},
	{"fromVoid", &luna_wrapper_osg_Capsule::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_Capsule::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_Capsule::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Capsule >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_Capsule::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Capsule >::enumValues[] = {
	{0,0}
};



#include <plug_common.h>

#include <luna/wrappers/wrapper_osgParticle_Interpolator.h>

class luna_wrapper_osgParticle_Interpolator {
public:
	typedef Luna< osgParticle::Interpolator > luna_t;

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

		osgParticle::Interpolator* self= (osgParticle::Interpolator*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgParticle::Interpolator >::push(L,self,false);
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
		//osgParticle::Interpolator* ptr= dynamic_cast< osgParticle::Interpolator* >(Luna< osg::Referenced >::check(L,1));
		osgParticle::Interpolator* ptr= luna_caster< osg::Referenced, osgParticle::Interpolator >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgParticle::Interpolator >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osgParticle::Interpolator >(L,2))) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,27134364) ) return false;
		if( luatop>2 && (!(Luna< osg::CopyOp >::check(L,3))) ) return false;
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

	inline static bool _lg_typecheck_isSameKindAs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_interpolate_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_interpolate_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303173) ) return false;
		if( (!(Luna< osg::Vec2f >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,92303173) ) return false;
		if( (!(Luna< osg::Vec2f >::check(L,4))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_interpolate_overload_3(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,4))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_interpolate_overload_4(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303235) ) return false;
		if( (!(Luna< osg::Vec4f >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,92303235) ) return false;
		if( (!(Luna< osg::Vec4f >::check(L,4))) ) return false;
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

	inline static bool _lg_typecheck_base_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_isSameKindAs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_interpolate_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303173) ) return false;
		if( (!(Luna< osg::Vec2f >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,92303173) ) return false;
		if( (!(Luna< osg::Vec2f >::check(L,4))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_interpolate_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,4))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_interpolate_overload_3(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303235) ) return false;
		if( (!(Luna< osg::Vec4f >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,92303235) ) return false;
		if( (!(Luna< osg::Vec4f >::check(L,4))) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgParticle::Interpolator::Interpolator(lua_Table * data)
	static osgParticle::Interpolator* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::Interpolator::Interpolator(lua_Table * data) function, expected prototype:\nosgParticle::Interpolator::Interpolator(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgParticle_Interpolator(L,NULL);
	}

	// osgParticle::Interpolator::Interpolator(lua_Table * data, const osgParticle::Interpolator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgParticle::Interpolator* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::Interpolator::Interpolator(lua_Table * data, const osgParticle::Interpolator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgParticle::Interpolator::Interpolator(lua_Table * data, const osgParticle::Interpolator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osgParticle::Interpolator* copy_ptr=(Luna< osg::Referenced >::checkSubType< osgParticle::Interpolator >(L,2));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgParticle::Interpolator::Interpolator function");
		}
		const osgParticle::Interpolator & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::Interpolator::Interpolator function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osgParticle_Interpolator(L,NULL, copy, copyop);
	}

	// Overload binder for osgParticle::Interpolator::Interpolator
	static osgParticle::Interpolator* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Interpolator, cannot match any of the overloads for function Interpolator:\n  Interpolator(lua_Table *)\n  Interpolator(lua_Table *, const osgParticle::Interpolator &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// const char * osgParticle::Interpolator::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::Interpolator::libraryName() const function, expected prototype:\nconst char * osgParticle::Interpolator::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Interpolator* self=Luna< osg::Referenced >::checkSubType< osgParticle::Interpolator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::Interpolator::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::Interpolator::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::Interpolator::className() const function, expected prototype:\nconst char * osgParticle::Interpolator::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Interpolator* self=Luna< osg::Referenced >::checkSubType< osgParticle::Interpolator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::Interpolator::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// bool osgParticle::Interpolator::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::Interpolator::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::Interpolator::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgParticle::Interpolator* self=Luna< osg::Referenced >::checkSubType< osgParticle::Interpolator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::Interpolator::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// float osgParticle::Interpolator::interpolate(float t, float y1, float y2) const
	static int _bind_interpolate_overload_1(lua_State *L) {
		if (!_lg_typecheck_interpolate_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in float osgParticle::Interpolator::interpolate(float t, float y1, float y2) const function, expected prototype:\nfloat osgParticle::Interpolator::interpolate(float t, float y1, float y2) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float t=(float)lua_tonumber(L,2);
		float y1=(float)lua_tonumber(L,3);
		float y2=(float)lua_tonumber(L,4);

		osgParticle::Interpolator* self=Luna< osg::Referenced >::checkSubType< osgParticle::Interpolator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgParticle::Interpolator::interpolate(float, float, float) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->interpolate(t, y1, y2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::Vec2f osgParticle::Interpolator::interpolate(float t, const osg::Vec2f & y1, const osg::Vec2f & y2) const
	static int _bind_interpolate_overload_2(lua_State *L) {
		if (!_lg_typecheck_interpolate_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec2f osgParticle::Interpolator::interpolate(float t, const osg::Vec2f & y1, const osg::Vec2f & y2) const function, expected prototype:\nosg::Vec2f osgParticle::Interpolator::interpolate(float t, const osg::Vec2f & y1, const osg::Vec2f & y2) const\nClass arguments details:\narg 2 ID = 92303173\narg 3 ID = 92303173\n\n%s",luna_dumpStack(L).c_str());
		}

		float t=(float)lua_tonumber(L,2);
		const osg::Vec2f* y1_ptr=(Luna< osg::Vec2f >::check(L,3));
		if( !y1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y1 in osgParticle::Interpolator::interpolate function");
		}
		const osg::Vec2f & y1=*y1_ptr;
		const osg::Vec2f* y2_ptr=(Luna< osg::Vec2f >::check(L,4));
		if( !y2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y2 in osgParticle::Interpolator::interpolate function");
		}
		const osg::Vec2f & y2=*y2_ptr;

		osgParticle::Interpolator* self=Luna< osg::Referenced >::checkSubType< osgParticle::Interpolator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec2f osgParticle::Interpolator::interpolate(float, const osg::Vec2f &, const osg::Vec2f &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec2f stack_lret = self->interpolate(t, y1, y2);
		osg::Vec2f* lret = new osg::Vec2f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec2f >::push(L,lret,true);

		return 1;
	}

	// osg::Vec3f osgParticle::Interpolator::interpolate(float t, const osg::Vec3f & y1, const osg::Vec3f & y2) const
	static int _bind_interpolate_overload_3(lua_State *L) {
		if (!_lg_typecheck_interpolate_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3f osgParticle::Interpolator::interpolate(float t, const osg::Vec3f & y1, const osg::Vec3f & y2) const function, expected prototype:\nosg::Vec3f osgParticle::Interpolator::interpolate(float t, const osg::Vec3f & y1, const osg::Vec3f & y2) const\nClass arguments details:\narg 2 ID = 92303204\narg 3 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		float t=(float)lua_tonumber(L,2);
		const osg::Vec3f* y1_ptr=(Luna< osg::Vec3f >::check(L,3));
		if( !y1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y1 in osgParticle::Interpolator::interpolate function");
		}
		const osg::Vec3f & y1=*y1_ptr;
		const osg::Vec3f* y2_ptr=(Luna< osg::Vec3f >::check(L,4));
		if( !y2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y2 in osgParticle::Interpolator::interpolate function");
		}
		const osg::Vec3f & y2=*y2_ptr;

		osgParticle::Interpolator* self=Luna< osg::Referenced >::checkSubType< osgParticle::Interpolator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3f osgParticle::Interpolator::interpolate(float, const osg::Vec3f &, const osg::Vec3f &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec3f stack_lret = self->interpolate(t, y1, y2);
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// osg::Vec4f osgParticle::Interpolator::interpolate(float t, const osg::Vec4f & y1, const osg::Vec4f & y2) const
	static int _bind_interpolate_overload_4(lua_State *L) {
		if (!_lg_typecheck_interpolate_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec4f osgParticle::Interpolator::interpolate(float t, const osg::Vec4f & y1, const osg::Vec4f & y2) const function, expected prototype:\nosg::Vec4f osgParticle::Interpolator::interpolate(float t, const osg::Vec4f & y1, const osg::Vec4f & y2) const\nClass arguments details:\narg 2 ID = 92303235\narg 3 ID = 92303235\n\n%s",luna_dumpStack(L).c_str());
		}

		float t=(float)lua_tonumber(L,2);
		const osg::Vec4f* y1_ptr=(Luna< osg::Vec4f >::check(L,3));
		if( !y1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y1 in osgParticle::Interpolator::interpolate function");
		}
		const osg::Vec4f & y1=*y1_ptr;
		const osg::Vec4f* y2_ptr=(Luna< osg::Vec4f >::check(L,4));
		if( !y2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y2 in osgParticle::Interpolator::interpolate function");
		}
		const osg::Vec4f & y2=*y2_ptr;

		osgParticle::Interpolator* self=Luna< osg::Referenced >::checkSubType< osgParticle::Interpolator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec4f osgParticle::Interpolator::interpolate(float, const osg::Vec4f &, const osg::Vec4f &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec4f stack_lret = self->interpolate(t, y1, y2);
		osg::Vec4f* lret = new osg::Vec4f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4f >::push(L,lret,true);

		return 1;
	}

	// Overload binder for osgParticle::Interpolator::interpolate
	static int _bind_interpolate(lua_State *L) {
		if (_lg_typecheck_interpolate_overload_1(L)) return _bind_interpolate_overload_1(L);
		if (_lg_typecheck_interpolate_overload_2(L)) return _bind_interpolate_overload_2(L);
		if (_lg_typecheck_interpolate_overload_3(L)) return _bind_interpolate_overload_3(L);
		if (_lg_typecheck_interpolate_overload_4(L)) return _bind_interpolate_overload_4(L);

		luaL_error(L, "error in function interpolate, cannot match any of the overloads for function interpolate:\n  interpolate(float, float, float)\n  interpolate(float, const osg::Vec2f &, const osg::Vec2f &)\n  interpolate(float, const osg::Vec3f &, const osg::Vec3f &)\n  interpolate(float, const osg::Vec4f &, const osg::Vec4f &)\n");
		return 0;
	}

	// void osgParticle::Interpolator::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::Interpolator::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgParticle::Interpolator::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgParticle::Interpolator* self=Luna< osg::Referenced >::checkSubType< osgParticle::Interpolator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::Interpolator::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Interpolator::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osgParticle::Interpolator::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::Interpolator::base_setName(const std::string & name) function, expected prototype:\nvoid osgParticle::Interpolator::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgParticle::Interpolator* self=Luna< osg::Referenced >::checkSubType< osgParticle::Interpolator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::Interpolator::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Interpolator::setName(name);

		return 0;
	}

	// void osgParticle::Interpolator::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::Interpolator::base_computeDataVariance() function, expected prototype:\nvoid osgParticle::Interpolator::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Interpolator* self=Luna< osg::Referenced >::checkSubType< osgParticle::Interpolator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::Interpolator::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Interpolator::computeDataVariance();

		return 0;
	}

	// void osgParticle::Interpolator::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::Interpolator::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osgParticle::Interpolator::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osgParticle::Interpolator* self=Luna< osg::Referenced >::checkSubType< osgParticle::Interpolator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::Interpolator::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Interpolator::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osgParticle::Interpolator::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osgParticle::Interpolator::base_getUserData() function, expected prototype:\nosg::Referenced * osgParticle::Interpolator::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Interpolator* self=Luna< osg::Referenced >::checkSubType< osgParticle::Interpolator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osgParticle::Interpolator::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->Interpolator::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osgParticle::Interpolator::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osgParticle::Interpolator::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osgParticle::Interpolator::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Interpolator* self=Luna< osg::Referenced >::checkSubType< osgParticle::Interpolator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osgParticle::Interpolator::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->Interpolator::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::Interpolator::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osgParticle::Interpolator::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::Interpolator::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osgParticle::Interpolator::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osgParticle::Interpolator* self=Luna< osg::Referenced >::checkSubType< osgParticle::Interpolator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::Interpolator::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Interpolator::releaseGLObjects(_arg1);

		return 0;
	}

	// const char * osgParticle::Interpolator::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::Interpolator::base_libraryName() const function, expected prototype:\nconst char * osgParticle::Interpolator::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Interpolator* self=Luna< osg::Referenced >::checkSubType< osgParticle::Interpolator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::Interpolator::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Interpolator::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::Interpolator::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgParticle::Interpolator::base_className() const function, expected prototype:\nconst char * osgParticle::Interpolator::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::Interpolator* self=Luna< osg::Referenced >::checkSubType< osgParticle::Interpolator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgParticle::Interpolator::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Interpolator::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// bool osgParticle::Interpolator::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::Interpolator::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::Interpolator::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgParticle::Interpolator* self=Luna< osg::Referenced >::checkSubType< osgParticle::Interpolator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::Interpolator::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Interpolator::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// osg::Vec2f osgParticle::Interpolator::base_interpolate(float t, const osg::Vec2f & y1, const osg::Vec2f & y2) const
	static int _bind_base_interpolate_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_interpolate_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec2f osgParticle::Interpolator::base_interpolate(float t, const osg::Vec2f & y1, const osg::Vec2f & y2) const function, expected prototype:\nosg::Vec2f osgParticle::Interpolator::base_interpolate(float t, const osg::Vec2f & y1, const osg::Vec2f & y2) const\nClass arguments details:\narg 2 ID = 92303173\narg 3 ID = 92303173\n\n%s",luna_dumpStack(L).c_str());
		}

		float t=(float)lua_tonumber(L,2);
		const osg::Vec2f* y1_ptr=(Luna< osg::Vec2f >::check(L,3));
		if( !y1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y1 in osgParticle::Interpolator::base_interpolate function");
		}
		const osg::Vec2f & y1=*y1_ptr;
		const osg::Vec2f* y2_ptr=(Luna< osg::Vec2f >::check(L,4));
		if( !y2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y2 in osgParticle::Interpolator::base_interpolate function");
		}
		const osg::Vec2f & y2=*y2_ptr;

		osgParticle::Interpolator* self=Luna< osg::Referenced >::checkSubType< osgParticle::Interpolator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec2f osgParticle::Interpolator::base_interpolate(float, const osg::Vec2f &, const osg::Vec2f &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec2f stack_lret = self->Interpolator::interpolate(t, y1, y2);
		osg::Vec2f* lret = new osg::Vec2f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec2f >::push(L,lret,true);

		return 1;
	}

	// osg::Vec3f osgParticle::Interpolator::base_interpolate(float t, const osg::Vec3f & y1, const osg::Vec3f & y2) const
	static int _bind_base_interpolate_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_interpolate_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3f osgParticle::Interpolator::base_interpolate(float t, const osg::Vec3f & y1, const osg::Vec3f & y2) const function, expected prototype:\nosg::Vec3f osgParticle::Interpolator::base_interpolate(float t, const osg::Vec3f & y1, const osg::Vec3f & y2) const\nClass arguments details:\narg 2 ID = 92303204\narg 3 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		float t=(float)lua_tonumber(L,2);
		const osg::Vec3f* y1_ptr=(Luna< osg::Vec3f >::check(L,3));
		if( !y1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y1 in osgParticle::Interpolator::base_interpolate function");
		}
		const osg::Vec3f & y1=*y1_ptr;
		const osg::Vec3f* y2_ptr=(Luna< osg::Vec3f >::check(L,4));
		if( !y2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y2 in osgParticle::Interpolator::base_interpolate function");
		}
		const osg::Vec3f & y2=*y2_ptr;

		osgParticle::Interpolator* self=Luna< osg::Referenced >::checkSubType< osgParticle::Interpolator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3f osgParticle::Interpolator::base_interpolate(float, const osg::Vec3f &, const osg::Vec3f &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec3f stack_lret = self->Interpolator::interpolate(t, y1, y2);
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// osg::Vec4f osgParticle::Interpolator::base_interpolate(float t, const osg::Vec4f & y1, const osg::Vec4f & y2) const
	static int _bind_base_interpolate_overload_3(lua_State *L) {
		if (!_lg_typecheck_base_interpolate_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec4f osgParticle::Interpolator::base_interpolate(float t, const osg::Vec4f & y1, const osg::Vec4f & y2) const function, expected prototype:\nosg::Vec4f osgParticle::Interpolator::base_interpolate(float t, const osg::Vec4f & y1, const osg::Vec4f & y2) const\nClass arguments details:\narg 2 ID = 92303235\narg 3 ID = 92303235\n\n%s",luna_dumpStack(L).c_str());
		}

		float t=(float)lua_tonumber(L,2);
		const osg::Vec4f* y1_ptr=(Luna< osg::Vec4f >::check(L,3));
		if( !y1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y1 in osgParticle::Interpolator::base_interpolate function");
		}
		const osg::Vec4f & y1=*y1_ptr;
		const osg::Vec4f* y2_ptr=(Luna< osg::Vec4f >::check(L,4));
		if( !y2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y2 in osgParticle::Interpolator::base_interpolate function");
		}
		const osg::Vec4f & y2=*y2_ptr;

		osgParticle::Interpolator* self=Luna< osg::Referenced >::checkSubType< osgParticle::Interpolator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec4f osgParticle::Interpolator::base_interpolate(float, const osg::Vec4f &, const osg::Vec4f &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec4f stack_lret = self->Interpolator::interpolate(t, y1, y2);
		osg::Vec4f* lret = new osg::Vec4f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4f >::push(L,lret,true);

		return 1;
	}

	// Overload binder for osgParticle::Interpolator::base_interpolate
	static int _bind_base_interpolate(lua_State *L) {
		if (_lg_typecheck_base_interpolate_overload_1(L)) return _bind_base_interpolate_overload_1(L);
		if (_lg_typecheck_base_interpolate_overload_2(L)) return _bind_base_interpolate_overload_2(L);
		if (_lg_typecheck_base_interpolate_overload_3(L)) return _bind_base_interpolate_overload_3(L);

		luaL_error(L, "error in function base_interpolate, cannot match any of the overloads for function base_interpolate:\n  base_interpolate(float, const osg::Vec2f &, const osg::Vec2f &)\n  base_interpolate(float, const osg::Vec3f &, const osg::Vec3f &)\n  base_interpolate(float, const osg::Vec4f &, const osg::Vec4f &)\n");
		return 0;
	}


	// Operator binds:

};

osgParticle::Interpolator* LunaTraits< osgParticle::Interpolator >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgParticle_Interpolator::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// float osgParticle::Interpolator::interpolate(float t, float y1, float y2) const
	// osg::Object * osg::Object::cloneType() const
	// osg::Object * osg::Object::clone(const osg::CopyOp & arg1) const
}

void LunaTraits< osgParticle::Interpolator >::_bind_dtor(osgParticle::Interpolator* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgParticle::Interpolator >::className[] = "Interpolator";
const char LunaTraits< osgParticle::Interpolator >::fullName[] = "osgParticle::Interpolator";
const char LunaTraits< osgParticle::Interpolator >::moduleName[] = "osgParticle";
const char* LunaTraits< osgParticle::Interpolator >::parents[] = {"osg.Object", 0};
const int LunaTraits< osgParticle::Interpolator >::hash = 41745010;
const int LunaTraits< osgParticle::Interpolator >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgParticle::Interpolator >::methods[] = {
	{"libraryName", &luna_wrapper_osgParticle_Interpolator::_bind_libraryName},
	{"className", &luna_wrapper_osgParticle_Interpolator::_bind_className},
	{"isSameKindAs", &luna_wrapper_osgParticle_Interpolator::_bind_isSameKindAs},
	{"interpolate", &luna_wrapper_osgParticle_Interpolator::_bind_interpolate},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgParticle_Interpolator::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osgParticle_Interpolator::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osgParticle_Interpolator::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osgParticle_Interpolator::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osgParticle_Interpolator::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osgParticle_Interpolator::_bind_base_releaseGLObjects},
	{"base_libraryName", &luna_wrapper_osgParticle_Interpolator::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osgParticle_Interpolator::_bind_base_className},
	{"base_isSameKindAs", &luna_wrapper_osgParticle_Interpolator::_bind_base_isSameKindAs},
	{"base_interpolate", &luna_wrapper_osgParticle_Interpolator::_bind_base_interpolate},
	{"fromVoid", &luna_wrapper_osgParticle_Interpolator::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgParticle_Interpolator::_bind_asVoid},
	{"getTable", &luna_wrapper_osgParticle_Interpolator::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgParticle::Interpolator >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgParticle_Interpolator::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgParticle::Interpolator >::enumValues[] = {
	{0,0}
};



#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_DrawPixels.h>

class luna_wrapper_osg_DrawPixels {
public:
	typedef Luna< osg::DrawPixels > luna_t;

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

		osg::DrawPixels* self= (osg::DrawPixels*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::DrawPixels >::push(L,self,false);
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
		//osg::DrawPixels* ptr= dynamic_cast< osg::DrawPixels* >(Luna< osg::Referenced >::check(L,1));
		osg::DrawPixels* ptr= luna_caster< osg::Referenced, osg::DrawPixels >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::DrawPixels >::push(L,ptr,false);
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::DrawPixels >(L,1))) ) return false;
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::DrawPixels >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_setPosition(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPosition_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPosition_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setImage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getImage_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getImage_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setUseSubImage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUseSubImage(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setSubImageDimensions(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSubImageDimensions(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_drawImplementation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2286263) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_computeBound(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
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

	inline static bool _lg_typecheck_base_asGeometry_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asGeometry_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_computeDataVariance(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setUseVertexBufferObjects(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_dirtyDisplayList(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getGLObjectSizeHint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_compileGLObjects(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2286263) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_releaseGLObjects(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setUpdateCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setEventCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setCullCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setDrawCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
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

	inline static bool _lg_typecheck_base_drawImplementation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2286263) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_computeBound(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::DrawPixels::DrawPixels()
	static osg::DrawPixels* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::DrawPixels::DrawPixels() function, expected prototype:\nosg::DrawPixels::DrawPixels()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::DrawPixels();
	}

	// osg::DrawPixels::DrawPixels(const osg::DrawPixels & drawimage, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::DrawPixels* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::DrawPixels::DrawPixels(const osg::DrawPixels & drawimage, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::DrawPixels::DrawPixels(const osg::DrawPixels & drawimage, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::DrawPixels* drawimage_ptr=(Luna< osg::Referenced >::checkSubType< osg::DrawPixels >(L,1));
		if( !drawimage_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg drawimage in osg::DrawPixels::DrawPixels function");
		}
		const osg::DrawPixels & drawimage=*drawimage_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::DrawPixels::DrawPixels function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osg::DrawPixels(drawimage, copyop);
	}

	// osg::DrawPixels::DrawPixels(lua_Table * data)
	static osg::DrawPixels* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::DrawPixels::DrawPixels(lua_Table * data) function, expected prototype:\nosg::DrawPixels::DrawPixels(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_DrawPixels(L,NULL);
	}

	// osg::DrawPixels::DrawPixels(lua_Table * data, const osg::DrawPixels & drawimage, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::DrawPixels* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::DrawPixels::DrawPixels(lua_Table * data, const osg::DrawPixels & drawimage, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::DrawPixels::DrawPixels(lua_Table * data, const osg::DrawPixels & drawimage, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::DrawPixels* drawimage_ptr=(Luna< osg::Referenced >::checkSubType< osg::DrawPixels >(L,2));
		if( !drawimage_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg drawimage in osg::DrawPixels::DrawPixels function");
		}
		const osg::DrawPixels & drawimage=*drawimage_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::DrawPixels::DrawPixels function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_DrawPixels(L,NULL, drawimage, copyop);
	}

	// Overload binder for osg::DrawPixels::DrawPixels
	static osg::DrawPixels* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function DrawPixels, cannot match any of the overloads for function DrawPixels:\n  DrawPixels()\n  DrawPixels(const osg::DrawPixels &, const osg::CopyOp &)\n  DrawPixels(lua_Table *)\n  DrawPixels(lua_Table *, const osg::DrawPixels &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::DrawPixels::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::DrawPixels::cloneType() const function, expected prototype:\nosg::Object * osg::DrawPixels::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawPixels* self=Luna< osg::Referenced >::checkSubType< osg::DrawPixels >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::DrawPixels::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::DrawPixels::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::DrawPixels::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::DrawPixels::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::DrawPixels::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::DrawPixels* self=Luna< osg::Referenced >::checkSubType< osg::DrawPixels >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::DrawPixels::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::DrawPixels::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::DrawPixels::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::DrawPixels::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::DrawPixels* self=Luna< osg::Referenced >::checkSubType< osg::DrawPixels >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::DrawPixels::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::DrawPixels::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::DrawPixels::libraryName() const function, expected prototype:\nconst char * osg::DrawPixels::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawPixels* self=Luna< osg::Referenced >::checkSubType< osg::DrawPixels >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::DrawPixels::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::DrawPixels::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::DrawPixels::className() const function, expected prototype:\nconst char * osg::DrawPixels::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawPixels* self=Luna< osg::Referenced >::checkSubType< osg::DrawPixels >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::DrawPixels::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::DrawPixels::setPosition(const osg::Vec3f & position)
	static int _bind_setPosition(lua_State *L) {
		if (!_lg_typecheck_setPosition(L)) {
			luaL_error(L, "luna typecheck failed in void osg::DrawPixels::setPosition(const osg::Vec3f & position) function, expected prototype:\nvoid osg::DrawPixels::setPosition(const osg::Vec3f & position)\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* position_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !position_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg position in osg::DrawPixels::setPosition function");
		}
		const osg::Vec3f & position=*position_ptr;

		osg::DrawPixels* self=Luna< osg::Referenced >::checkSubType< osg::DrawPixels >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::DrawPixels::setPosition(const osg::Vec3f &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setPosition(position);

		return 0;
	}

	// osg::Vec3f & osg::DrawPixels::getPosition()
	static int _bind_getPosition_overload_1(lua_State *L) {
		if (!_lg_typecheck_getPosition_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3f & osg::DrawPixels::getPosition() function, expected prototype:\nosg::Vec3f & osg::DrawPixels::getPosition()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawPixels* self=Luna< osg::Referenced >::checkSubType< osg::DrawPixels >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3f & osg::DrawPixels::getPosition(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec3f* lret = &self->getPosition();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// const osg::Vec3f & osg::DrawPixels::getPosition() const
	static int _bind_getPosition_overload_2(lua_State *L) {
		if (!_lg_typecheck_getPosition_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec3f & osg::DrawPixels::getPosition() const function, expected prototype:\nconst osg::Vec3f & osg::DrawPixels::getPosition() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawPixels* self=Luna< osg::Referenced >::checkSubType< osg::DrawPixels >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec3f & osg::DrawPixels::getPosition() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec3f* lret = &self->getPosition();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::DrawPixels::getPosition
	static int _bind_getPosition(lua_State *L) {
		if (_lg_typecheck_getPosition_overload_1(L)) return _bind_getPosition_overload_1(L);
		if (_lg_typecheck_getPosition_overload_2(L)) return _bind_getPosition_overload_2(L);

		luaL_error(L, "error in function getPosition, cannot match any of the overloads for function getPosition:\n  getPosition()\n  getPosition()\n");
		return 0;
	}

	// void osg::DrawPixels::setImage(osg::Image * image)
	static int _bind_setImage(lua_State *L) {
		if (!_lg_typecheck_setImage(L)) {
			luaL_error(L, "luna typecheck failed in void osg::DrawPixels::setImage(osg::Image * image) function, expected prototype:\nvoid osg::DrawPixels::setImage(osg::Image * image)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Image* image=(Luna< osg::Referenced >::checkSubType< osg::Image >(L,2));

		osg::DrawPixels* self=Luna< osg::Referenced >::checkSubType< osg::DrawPixels >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::DrawPixels::setImage(osg::Image *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setImage(image);

		return 0;
	}

	// osg::Image * osg::DrawPixels::getImage()
	static int _bind_getImage_overload_1(lua_State *L) {
		if (!_lg_typecheck_getImage_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Image * osg::DrawPixels::getImage() function, expected prototype:\nosg::Image * osg::DrawPixels::getImage()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawPixels* self=Luna< osg::Referenced >::checkSubType< osg::DrawPixels >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Image * osg::DrawPixels::getImage(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Image * lret = self->getImage();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Image >::push(L,lret,false);

		return 1;
	}

	// const osg::Image * osg::DrawPixels::getImage() const
	static int _bind_getImage_overload_2(lua_State *L) {
		if (!_lg_typecheck_getImage_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Image * osg::DrawPixels::getImage() const function, expected prototype:\nconst osg::Image * osg::DrawPixels::getImage() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawPixels* self=Luna< osg::Referenced >::checkSubType< osg::DrawPixels >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Image * osg::DrawPixels::getImage() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Image * lret = self->getImage();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Image >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::DrawPixels::getImage
	static int _bind_getImage(lua_State *L) {
		if (_lg_typecheck_getImage_overload_1(L)) return _bind_getImage_overload_1(L);
		if (_lg_typecheck_getImage_overload_2(L)) return _bind_getImage_overload_2(L);

		luaL_error(L, "error in function getImage, cannot match any of the overloads for function getImage:\n  getImage()\n  getImage()\n");
		return 0;
	}

	// void osg::DrawPixels::setUseSubImage(bool useSubImage)
	static int _bind_setUseSubImage(lua_State *L) {
		if (!_lg_typecheck_setUseSubImage(L)) {
			luaL_error(L, "luna typecheck failed in void osg::DrawPixels::setUseSubImage(bool useSubImage) function, expected prototype:\nvoid osg::DrawPixels::setUseSubImage(bool useSubImage)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool useSubImage=(bool)(lua_toboolean(L,2)==1);

		osg::DrawPixels* self=Luna< osg::Referenced >::checkSubType< osg::DrawPixels >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::DrawPixels::setUseSubImage(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setUseSubImage(useSubImage);

		return 0;
	}

	// bool osg::DrawPixels::getUseSubImage() const
	static int _bind_getUseSubImage(lua_State *L) {
		if (!_lg_typecheck_getUseSubImage(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::DrawPixels::getUseSubImage() const function, expected prototype:\nbool osg::DrawPixels::getUseSubImage() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawPixels* self=Luna< osg::Referenced >::checkSubType< osg::DrawPixels >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::DrawPixels::getUseSubImage() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getUseSubImage();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::DrawPixels::setSubImageDimensions(unsigned int offsetX, unsigned int offsetY, unsigned int width, unsigned int height)
	static int _bind_setSubImageDimensions(lua_State *L) {
		if (!_lg_typecheck_setSubImageDimensions(L)) {
			luaL_error(L, "luna typecheck failed in void osg::DrawPixels::setSubImageDimensions(unsigned int offsetX, unsigned int offsetY, unsigned int width, unsigned int height) function, expected prototype:\nvoid osg::DrawPixels::setSubImageDimensions(unsigned int offsetX, unsigned int offsetY, unsigned int width, unsigned int height)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int offsetX=(unsigned int)lua_tointeger(L,2);
		unsigned int offsetY=(unsigned int)lua_tointeger(L,3);
		unsigned int width=(unsigned int)lua_tointeger(L,4);
		unsigned int height=(unsigned int)lua_tointeger(L,5);

		osg::DrawPixels* self=Luna< osg::Referenced >::checkSubType< osg::DrawPixels >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::DrawPixels::setSubImageDimensions(unsigned int, unsigned int, unsigned int, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setSubImageDimensions(offsetX, offsetY, width, height);

		return 0;
	}

	// void osg::DrawPixels::getSubImageDimensions(unsigned int & offsetX, unsigned int & offsetY, unsigned int & width, unsigned int & height) const
	static int _bind_getSubImageDimensions(lua_State *L) {
		if (!_lg_typecheck_getSubImageDimensions(L)) {
			luaL_error(L, "luna typecheck failed in void osg::DrawPixels::getSubImageDimensions(unsigned int & offsetX, unsigned int & offsetY, unsigned int & width, unsigned int & height) const function, expected prototype:\nvoid osg::DrawPixels::getSubImageDimensions(unsigned int & offsetX, unsigned int & offsetY, unsigned int & width, unsigned int & height) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int offsetX=(unsigned int)lua_tointeger(L,2);
		unsigned int offsetY=(unsigned int)lua_tointeger(L,3);
		unsigned int width=(unsigned int)lua_tointeger(L,4);
		unsigned int height=(unsigned int)lua_tointeger(L,5);

		osg::DrawPixels* self=Luna< osg::Referenced >::checkSubType< osg::DrawPixels >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::DrawPixels::getSubImageDimensions(unsigned int &, unsigned int &, unsigned int &, unsigned int &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getSubImageDimensions(offsetX, offsetY, width, height);

		lua_pushnumber(L,offsetX);
		lua_pushnumber(L,offsetY);
		lua_pushnumber(L,width);
		lua_pushnumber(L,height);
		return 4;
	}

	// void osg::DrawPixels::drawImplementation(osg::RenderInfo & renderInfo) const
	static int _bind_drawImplementation(lua_State *L) {
		if (!_lg_typecheck_drawImplementation(L)) {
			luaL_error(L, "luna typecheck failed in void osg::DrawPixels::drawImplementation(osg::RenderInfo & renderInfo) const function, expected prototype:\nvoid osg::DrawPixels::drawImplementation(osg::RenderInfo & renderInfo) const\nClass arguments details:\narg 1 ID = 2286263\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::RenderInfo* renderInfo_ptr=(Luna< osg::RenderInfo >::check(L,2));
		if( !renderInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg renderInfo in osg::DrawPixels::drawImplementation function");
		}
		osg::RenderInfo & renderInfo=*renderInfo_ptr;

		osg::DrawPixels* self=Luna< osg::Referenced >::checkSubType< osg::DrawPixels >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::DrawPixels::drawImplementation(osg::RenderInfo &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->drawImplementation(renderInfo);

		return 0;
	}

	// osg::BoundingBoxd osg::DrawPixels::computeBound() const
	static int _bind_computeBound(lua_State *L) {
		if (!_lg_typecheck_computeBound(L)) {
			luaL_error(L, "luna typecheck failed in osg::BoundingBoxd osg::DrawPixels::computeBound() const function, expected prototype:\nosg::BoundingBoxd osg::DrawPixels::computeBound() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawPixels* self=Luna< osg::Referenced >::checkSubType< osg::DrawPixels >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::BoundingBoxd osg::DrawPixels::computeBound() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::BoundingBoxd stack_lret = self->computeBound();
		osg::BoundingBoxd* lret = new osg::BoundingBoxd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingBoxd >::push(L,lret,true);

		return 1;
	}

	// void osg::DrawPixels::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::DrawPixels::base_setName(const std::string & name) function, expected prototype:\nvoid osg::DrawPixels::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::DrawPixels* self=Luna< osg::Referenced >::checkSubType< osg::DrawPixels >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::DrawPixels::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawPixels::setName(name);

		return 0;
	}

	// void osg::DrawPixels::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::DrawPixels::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::DrawPixels::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::DrawPixels* self=Luna< osg::Referenced >::checkSubType< osg::DrawPixels >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::DrawPixels::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawPixels::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::DrawPixels::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::DrawPixels::base_getUserData() function, expected prototype:\nosg::Referenced * osg::DrawPixels::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawPixels* self=Luna< osg::Referenced >::checkSubType< osg::DrawPixels >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::DrawPixels::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->DrawPixels::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::DrawPixels::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::DrawPixels::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::DrawPixels::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawPixels* self=Luna< osg::Referenced >::checkSubType< osg::DrawPixels >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::DrawPixels::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->DrawPixels::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::DrawPixels::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// osg::Geometry * osg::DrawPixels::base_asGeometry()
	static int _bind_base_asGeometry_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asGeometry_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Geometry * osg::DrawPixels::base_asGeometry() function, expected prototype:\nosg::Geometry * osg::DrawPixels::base_asGeometry()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawPixels* self=Luna< osg::Referenced >::checkSubType< osg::DrawPixels >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Geometry * osg::DrawPixels::base_asGeometry(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Geometry * lret = self->DrawPixels::asGeometry();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geometry >::push(L,lret,false);

		return 1;
	}

	// const osg::Geometry * osg::DrawPixels::base_asGeometry() const
	static int _bind_base_asGeometry_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asGeometry_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Geometry * osg::DrawPixels::base_asGeometry() const function, expected prototype:\nconst osg::Geometry * osg::DrawPixels::base_asGeometry() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawPixels* self=Luna< osg::Referenced >::checkSubType< osg::DrawPixels >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Geometry * osg::DrawPixels::base_asGeometry() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Geometry * lret = self->DrawPixels::asGeometry();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geometry >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::DrawPixels::base_asGeometry
	static int _bind_base_asGeometry(lua_State *L) {
		if (_lg_typecheck_base_asGeometry_overload_1(L)) return _bind_base_asGeometry_overload_1(L);
		if (_lg_typecheck_base_asGeometry_overload_2(L)) return _bind_base_asGeometry_overload_2(L);

		luaL_error(L, "error in function base_asGeometry, cannot match any of the overloads for function base_asGeometry:\n  base_asGeometry()\n  base_asGeometry()\n");
		return 0;
	}

	// void osg::DrawPixels::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::DrawPixels::base_computeDataVariance() function, expected prototype:\nvoid osg::DrawPixels::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawPixels* self=Luna< osg::Referenced >::checkSubType< osg::DrawPixels >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::DrawPixels::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawPixels::computeDataVariance();

		return 0;
	}

	// void osg::DrawPixels::base_setUseVertexBufferObjects(bool flag)
	static int _bind_base_setUseVertexBufferObjects(lua_State *L) {
		if (!_lg_typecheck_base_setUseVertexBufferObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::DrawPixels::base_setUseVertexBufferObjects(bool flag) function, expected prototype:\nvoid osg::DrawPixels::base_setUseVertexBufferObjects(bool flag)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osg::DrawPixels* self=Luna< osg::Referenced >::checkSubType< osg::DrawPixels >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::DrawPixels::base_setUseVertexBufferObjects(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawPixels::setUseVertexBufferObjects(flag);

		return 0;
	}

	// void osg::DrawPixels::base_dirtyDisplayList()
	static int _bind_base_dirtyDisplayList(lua_State *L) {
		if (!_lg_typecheck_base_dirtyDisplayList(L)) {
			luaL_error(L, "luna typecheck failed in void osg::DrawPixels::base_dirtyDisplayList() function, expected prototype:\nvoid osg::DrawPixels::base_dirtyDisplayList()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawPixels* self=Luna< osg::Referenced >::checkSubType< osg::DrawPixels >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::DrawPixels::base_dirtyDisplayList(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawPixels::dirtyDisplayList();

		return 0;
	}

	// unsigned int osg::DrawPixels::base_getGLObjectSizeHint() const
	static int _bind_base_getGLObjectSizeHint(lua_State *L) {
		if (!_lg_typecheck_base_getGLObjectSizeHint(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::DrawPixels::base_getGLObjectSizeHint() const function, expected prototype:\nunsigned int osg::DrawPixels::base_getGLObjectSizeHint() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawPixels* self=Luna< osg::Referenced >::checkSubType< osg::DrawPixels >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::DrawPixels::base_getGLObjectSizeHint() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->DrawPixels::getGLObjectSizeHint();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::DrawPixels::base_compileGLObjects(osg::RenderInfo & renderInfo) const
	static int _bind_base_compileGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_compileGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::DrawPixels::base_compileGLObjects(osg::RenderInfo & renderInfo) const function, expected prototype:\nvoid osg::DrawPixels::base_compileGLObjects(osg::RenderInfo & renderInfo) const\nClass arguments details:\narg 1 ID = 2286263\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::RenderInfo* renderInfo_ptr=(Luna< osg::RenderInfo >::check(L,2));
		if( !renderInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg renderInfo in osg::DrawPixels::base_compileGLObjects function");
		}
		osg::RenderInfo & renderInfo=*renderInfo_ptr;

		osg::DrawPixels* self=Luna< osg::Referenced >::checkSubType< osg::DrawPixels >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::DrawPixels::base_compileGLObjects(osg::RenderInfo &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawPixels::compileGLObjects(renderInfo);

		return 0;
	}

	// void osg::DrawPixels::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::DrawPixels::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::DrawPixels::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::DrawPixels* self=Luna< osg::Referenced >::checkSubType< osg::DrawPixels >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::DrawPixels::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawPixels::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::DrawPixels::base_releaseGLObjects(osg::State * state = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::DrawPixels::base_releaseGLObjects(osg::State * state = 0) const function, expected prototype:\nvoid osg::DrawPixels::base_releaseGLObjects(osg::State * state = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* state=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::DrawPixels* self=Luna< osg::Referenced >::checkSubType< osg::DrawPixels >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::DrawPixels::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawPixels::releaseGLObjects(state);

		return 0;
	}

	// void osg::DrawPixels::base_setUpdateCallback(osg::Drawable::UpdateCallback * ac)
	static int _bind_base_setUpdateCallback(lua_State *L) {
		if (!_lg_typecheck_base_setUpdateCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osg::DrawPixels::base_setUpdateCallback(osg::Drawable::UpdateCallback * ac) function, expected prototype:\nvoid osg::DrawPixels::base_setUpdateCallback(osg::Drawable::UpdateCallback * ac)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Drawable::UpdateCallback* ac=(Luna< osg::Referenced >::checkSubType< osg::Drawable::UpdateCallback >(L,2));

		osg::DrawPixels* self=Luna< osg::Referenced >::checkSubType< osg::DrawPixels >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::DrawPixels::base_setUpdateCallback(osg::Drawable::UpdateCallback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawPixels::setUpdateCallback(ac);

		return 0;
	}

	// void osg::DrawPixels::base_setEventCallback(osg::Drawable::EventCallback * ac)
	static int _bind_base_setEventCallback(lua_State *L) {
		if (!_lg_typecheck_base_setEventCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osg::DrawPixels::base_setEventCallback(osg::Drawable::EventCallback * ac) function, expected prototype:\nvoid osg::DrawPixels::base_setEventCallback(osg::Drawable::EventCallback * ac)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Drawable::EventCallback* ac=(Luna< osg::Referenced >::checkSubType< osg::Drawable::EventCallback >(L,2));

		osg::DrawPixels* self=Luna< osg::Referenced >::checkSubType< osg::DrawPixels >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::DrawPixels::base_setEventCallback(osg::Drawable::EventCallback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawPixels::setEventCallback(ac);

		return 0;
	}

	// void osg::DrawPixels::base_setCullCallback(osg::Drawable::CullCallback * cc)
	static int _bind_base_setCullCallback(lua_State *L) {
		if (!_lg_typecheck_base_setCullCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osg::DrawPixels::base_setCullCallback(osg::Drawable::CullCallback * cc) function, expected prototype:\nvoid osg::DrawPixels::base_setCullCallback(osg::Drawable::CullCallback * cc)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Drawable::CullCallback* cc=(Luna< osg::Referenced >::checkSubType< osg::Drawable::CullCallback >(L,2));

		osg::DrawPixels* self=Luna< osg::Referenced >::checkSubType< osg::DrawPixels >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::DrawPixels::base_setCullCallback(osg::Drawable::CullCallback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawPixels::setCullCallback(cc);

		return 0;
	}

	// void osg::DrawPixels::base_setDrawCallback(osg::Drawable::DrawCallback * dc)
	static int _bind_base_setDrawCallback(lua_State *L) {
		if (!_lg_typecheck_base_setDrawCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osg::DrawPixels::base_setDrawCallback(osg::Drawable::DrawCallback * dc) function, expected prototype:\nvoid osg::DrawPixels::base_setDrawCallback(osg::Drawable::DrawCallback * dc)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Drawable::DrawCallback* dc=(Luna< osg::Referenced >::checkSubType< osg::Drawable::DrawCallback >(L,2));

		osg::DrawPixels* self=Luna< osg::Referenced >::checkSubType< osg::DrawPixels >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::DrawPixels::base_setDrawCallback(osg::Drawable::DrawCallback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawPixels::setDrawCallback(dc);

		return 0;
	}

	// osg::Object * osg::DrawPixels::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::DrawPixels::base_cloneType() const function, expected prototype:\nosg::Object * osg::DrawPixels::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawPixels* self=Luna< osg::Referenced >::checkSubType< osg::DrawPixels >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::DrawPixels::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->DrawPixels::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::DrawPixels::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::DrawPixels::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::DrawPixels::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::DrawPixels::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::DrawPixels* self=Luna< osg::Referenced >::checkSubType< osg::DrawPixels >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::DrawPixels::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->DrawPixels::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::DrawPixels::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::DrawPixels::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::DrawPixels::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::DrawPixels* self=Luna< osg::Referenced >::checkSubType< osg::DrawPixels >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::DrawPixels::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->DrawPixels::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::DrawPixels::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::DrawPixels::base_libraryName() const function, expected prototype:\nconst char * osg::DrawPixels::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawPixels* self=Luna< osg::Referenced >::checkSubType< osg::DrawPixels >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::DrawPixels::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->DrawPixels::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::DrawPixels::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::DrawPixels::base_className() const function, expected prototype:\nconst char * osg::DrawPixels::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawPixels* self=Luna< osg::Referenced >::checkSubType< osg::DrawPixels >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::DrawPixels::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->DrawPixels::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::DrawPixels::base_drawImplementation(osg::RenderInfo & renderInfo) const
	static int _bind_base_drawImplementation(lua_State *L) {
		if (!_lg_typecheck_base_drawImplementation(L)) {
			luaL_error(L, "luna typecheck failed in void osg::DrawPixels::base_drawImplementation(osg::RenderInfo & renderInfo) const function, expected prototype:\nvoid osg::DrawPixels::base_drawImplementation(osg::RenderInfo & renderInfo) const\nClass arguments details:\narg 1 ID = 2286263\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::RenderInfo* renderInfo_ptr=(Luna< osg::RenderInfo >::check(L,2));
		if( !renderInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg renderInfo in osg::DrawPixels::base_drawImplementation function");
		}
		osg::RenderInfo & renderInfo=*renderInfo_ptr;

		osg::DrawPixels* self=Luna< osg::Referenced >::checkSubType< osg::DrawPixels >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::DrawPixels::base_drawImplementation(osg::RenderInfo &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawPixels::drawImplementation(renderInfo);

		return 0;
	}

	// osg::BoundingBoxd osg::DrawPixels::base_computeBound() const
	static int _bind_base_computeBound(lua_State *L) {
		if (!_lg_typecheck_base_computeBound(L)) {
			luaL_error(L, "luna typecheck failed in osg::BoundingBoxd osg::DrawPixels::base_computeBound() const function, expected prototype:\nosg::BoundingBoxd osg::DrawPixels::base_computeBound() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DrawPixels* self=Luna< osg::Referenced >::checkSubType< osg::DrawPixels >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::BoundingBoxd osg::DrawPixels::base_computeBound() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::BoundingBoxd stack_lret = self->DrawPixels::computeBound();
		osg::BoundingBoxd* lret = new osg::BoundingBoxd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingBoxd >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

osg::DrawPixels* LunaTraits< osg::DrawPixels >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_DrawPixels::_bind_ctor(L);
}

void LunaTraits< osg::DrawPixels >::_bind_dtor(osg::DrawPixels* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::DrawPixels >::className[] = "DrawPixels";
const char LunaTraits< osg::DrawPixels >::fullName[] = "osg::DrawPixels";
const char LunaTraits< osg::DrawPixels >::moduleName[] = "osg";
const char* LunaTraits< osg::DrawPixels >::parents[] = {"osg.Drawable", 0};
const int LunaTraits< osg::DrawPixels >::hash = 5432009;
const int LunaTraits< osg::DrawPixels >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::DrawPixels >::methods[] = {
	{"cloneType", &luna_wrapper_osg_DrawPixels::_bind_cloneType},
	{"clone", &luna_wrapper_osg_DrawPixels::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_DrawPixels::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_DrawPixels::_bind_libraryName},
	{"className", &luna_wrapper_osg_DrawPixels::_bind_className},
	{"setPosition", &luna_wrapper_osg_DrawPixels::_bind_setPosition},
	{"getPosition", &luna_wrapper_osg_DrawPixels::_bind_getPosition},
	{"setImage", &luna_wrapper_osg_DrawPixels::_bind_setImage},
	{"getImage", &luna_wrapper_osg_DrawPixels::_bind_getImage},
	{"setUseSubImage", &luna_wrapper_osg_DrawPixels::_bind_setUseSubImage},
	{"getUseSubImage", &luna_wrapper_osg_DrawPixels::_bind_getUseSubImage},
	{"setSubImageDimensions", &luna_wrapper_osg_DrawPixels::_bind_setSubImageDimensions},
	{"getSubImageDimensions", &luna_wrapper_osg_DrawPixels::_bind_getSubImageDimensions},
	{"drawImplementation", &luna_wrapper_osg_DrawPixels::_bind_drawImplementation},
	{"computeBound", &luna_wrapper_osg_DrawPixels::_bind_computeBound},
	{"base_setName", &luna_wrapper_osg_DrawPixels::_bind_base_setName},
	{"base_setUserData", &luna_wrapper_osg_DrawPixels::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_DrawPixels::_bind_base_getUserData},
	{"base_asGeometry", &luna_wrapper_osg_DrawPixels::_bind_base_asGeometry},
	{"base_computeDataVariance", &luna_wrapper_osg_DrawPixels::_bind_base_computeDataVariance},
	{"base_setUseVertexBufferObjects", &luna_wrapper_osg_DrawPixels::_bind_base_setUseVertexBufferObjects},
	{"base_dirtyDisplayList", &luna_wrapper_osg_DrawPixels::_bind_base_dirtyDisplayList},
	{"base_getGLObjectSizeHint", &luna_wrapper_osg_DrawPixels::_bind_base_getGLObjectSizeHint},
	{"base_compileGLObjects", &luna_wrapper_osg_DrawPixels::_bind_base_compileGLObjects},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_DrawPixels::_bind_base_setThreadSafeRefUnref},
	{"base_releaseGLObjects", &luna_wrapper_osg_DrawPixels::_bind_base_releaseGLObjects},
	{"base_setUpdateCallback", &luna_wrapper_osg_DrawPixels::_bind_base_setUpdateCallback},
	{"base_setEventCallback", &luna_wrapper_osg_DrawPixels::_bind_base_setEventCallback},
	{"base_setCullCallback", &luna_wrapper_osg_DrawPixels::_bind_base_setCullCallback},
	{"base_setDrawCallback", &luna_wrapper_osg_DrawPixels::_bind_base_setDrawCallback},
	{"base_cloneType", &luna_wrapper_osg_DrawPixels::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_DrawPixels::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_DrawPixels::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_DrawPixels::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_DrawPixels::_bind_base_className},
	{"base_drawImplementation", &luna_wrapper_osg_DrawPixels::_bind_base_drawImplementation},
	{"base_computeBound", &luna_wrapper_osg_DrawPixels::_bind_base_computeBound},
	{"fromVoid", &luna_wrapper_osg_DrawPixels::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_DrawPixels::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_DrawPixels::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::DrawPixels >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_DrawPixels::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::DrawPixels >::enumValues[] = {
	{0,0}
};



#include <plug_common.h>

#include <luna/wrappers/wrapper_osgText_Text3D.h>

class luna_wrapper_osgText_Text3D {
public:
	typedef Luna< osgText::Text3D > luna_t;

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

		osgText::Text3D* self= (osgText::Text3D*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgText::Text3D >::push(L,self,false);
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
		//osgText::Text3D* ptr= dynamic_cast< osgText::Text3D* >(Luna< osg::Referenced >::check(L,1));
		osgText::Text3D* ptr= luna_caster< osg::Referenced, osgText::Text3D >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgText::Text3D >::push(L,ptr,false);
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
		if( (!(Luna< osg::Referenced >::checkSubType< osgText::Text3D >(L,1))) ) return false;
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
		if( (!(Luna< osg::Referenced >::checkSubType< osgText::Text3D >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_getCharacterDepth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCharacterDepth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRenderMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setRenderMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getWallStateSet_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getWallStateSet_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getOrCreateWallStateSet(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setWallStateSet(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getBackStateSet_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getBackStateSet_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getOrCreateBackStateSet(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setBackStateSet(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_drawImplementation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2286263) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_releaseGLObjects(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
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

	inline static bool _lg_typecheck_base_setFont_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osgText::Font >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setFont_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
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

	inline static bool _lg_typecheck_base_computeBound(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgText::Text3D::Text3D()
	static osgText::Text3D* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgText::Text3D::Text3D() function, expected prototype:\nosgText::Text3D::Text3D()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osgText::Text3D();
	}

	// osgText::Text3D::Text3D(const osgText::Text3D & text, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgText::Text3D* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgText::Text3D::Text3D(const osgText::Text3D & text, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgText::Text3D::Text3D(const osgText::Text3D & text, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osgText::Text3D* text_ptr=(Luna< osg::Referenced >::checkSubType< osgText::Text3D >(L,1));
		if( !text_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg text in osgText::Text3D::Text3D function");
		}
		const osgText::Text3D & text=*text_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgText::Text3D::Text3D function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osgText::Text3D(text, copyop);
	}

	// osgText::Text3D::Text3D(lua_Table * data)
	static osgText::Text3D* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osgText::Text3D::Text3D(lua_Table * data) function, expected prototype:\nosgText::Text3D::Text3D(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgText_Text3D(L,NULL);
	}

	// osgText::Text3D::Text3D(lua_Table * data, const osgText::Text3D & text, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgText::Text3D* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osgText::Text3D::Text3D(lua_Table * data, const osgText::Text3D & text, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgText::Text3D::Text3D(lua_Table * data, const osgText::Text3D & text, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osgText::Text3D* text_ptr=(Luna< osg::Referenced >::checkSubType< osgText::Text3D >(L,2));
		if( !text_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg text in osgText::Text3D::Text3D function");
		}
		const osgText::Text3D & text=*text_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgText::Text3D::Text3D function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osgText_Text3D(L,NULL, text, copyop);
	}

	// Overload binder for osgText::Text3D::Text3D
	static osgText::Text3D* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function Text3D, cannot match any of the overloads for function Text3D:\n  Text3D()\n  Text3D(const osgText::Text3D &, const osg::CopyOp &)\n  Text3D(lua_Table *)\n  Text3D(lua_Table *, const osgText::Text3D &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osgText::Text3D::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgText::Text3D::cloneType() const function, expected prototype:\nosg::Object * osgText::Text3D::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::Text3D* self=Luna< osg::Referenced >::checkSubType< osgText::Text3D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgText::Text3D::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgText::Text3D::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgText::Text3D::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgText::Text3D::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgText::Text3D::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgText::Text3D* self=Luna< osg::Referenced >::checkSubType< osgText::Text3D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgText::Text3D::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgText::Text3D::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgText::Text3D::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgText::Text3D::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgText::Text3D* self=Luna< osg::Referenced >::checkSubType< osgText::Text3D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgText::Text3D::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgText::Text3D::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgText::Text3D::libraryName() const function, expected prototype:\nconst char * osgText::Text3D::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::Text3D* self=Luna< osg::Referenced >::checkSubType< osgText::Text3D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgText::Text3D::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgText::Text3D::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgText::Text3D::className() const function, expected prototype:\nconst char * osgText::Text3D::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::Text3D* self=Luna< osg::Referenced >::checkSubType< osgText::Text3D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgText::Text3D::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// float osgText::Text3D::getCharacterDepth() const
	static int _bind_getCharacterDepth(lua_State *L) {
		if (!_lg_typecheck_getCharacterDepth(L)) {
			luaL_error(L, "luna typecheck failed in float osgText::Text3D::getCharacterDepth() const function, expected prototype:\nfloat osgText::Text3D::getCharacterDepth() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::Text3D* self=Luna< osg::Referenced >::checkSubType< osgText::Text3D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgText::Text3D::getCharacterDepth() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getCharacterDepth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgText::Text3D::setCharacterDepth(float characterDepth)
	static int _bind_setCharacterDepth(lua_State *L) {
		if (!_lg_typecheck_setCharacterDepth(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::Text3D::setCharacterDepth(float characterDepth) function, expected prototype:\nvoid osgText::Text3D::setCharacterDepth(float characterDepth)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float characterDepth=(float)lua_tonumber(L,2);

		osgText::Text3D* self=Luna< osg::Referenced >::checkSubType< osgText::Text3D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::Text3D::setCharacterDepth(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setCharacterDepth(characterDepth);

		return 0;
	}

	// osgText::Text3D::RenderMode osgText::Text3D::getRenderMode() const
	static int _bind_getRenderMode(lua_State *L) {
		if (!_lg_typecheck_getRenderMode(L)) {
			luaL_error(L, "luna typecheck failed in osgText::Text3D::RenderMode osgText::Text3D::getRenderMode() const function, expected prototype:\nosgText::Text3D::RenderMode osgText::Text3D::getRenderMode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::Text3D* self=Luna< osg::Referenced >::checkSubType< osgText::Text3D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgText::Text3D::RenderMode osgText::Text3D::getRenderMode() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgText::Text3D::RenderMode lret = self->getRenderMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgText::Text3D::setRenderMode(osgText::Text3D::RenderMode renderMode)
	static int _bind_setRenderMode(lua_State *L) {
		if (!_lg_typecheck_setRenderMode(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::Text3D::setRenderMode(osgText::Text3D::RenderMode renderMode) function, expected prototype:\nvoid osgText::Text3D::setRenderMode(osgText::Text3D::RenderMode renderMode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osgText::Text3D::RenderMode renderMode=(osgText::Text3D::RenderMode)lua_tointeger(L,2);

		osgText::Text3D* self=Luna< osg::Referenced >::checkSubType< osgText::Text3D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::Text3D::setRenderMode(osgText::Text3D::RenderMode). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setRenderMode(renderMode);

		return 0;
	}

	// osg::StateSet * osgText::Text3D::getWallStateSet()
	static int _bind_getWallStateSet_overload_1(lua_State *L) {
		if (!_lg_typecheck_getWallStateSet_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateSet * osgText::Text3D::getWallStateSet() function, expected prototype:\nosg::StateSet * osgText::Text3D::getWallStateSet()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::Text3D* self=Luna< osg::Referenced >::checkSubType< osgText::Text3D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateSet * osgText::Text3D::getWallStateSet(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::StateSet * lret = self->getWallStateSet();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateSet >::push(L,lret,false);

		return 1;
	}

	// const osg::StateSet * osgText::Text3D::getWallStateSet() const
	static int _bind_getWallStateSet_overload_2(lua_State *L) {
		if (!_lg_typecheck_getWallStateSet_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::StateSet * osgText::Text3D::getWallStateSet() const function, expected prototype:\nconst osg::StateSet * osgText::Text3D::getWallStateSet() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::Text3D* self=Luna< osg::Referenced >::checkSubType< osgText::Text3D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::StateSet * osgText::Text3D::getWallStateSet() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::StateSet * lret = self->getWallStateSet();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateSet >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgText::Text3D::getWallStateSet
	static int _bind_getWallStateSet(lua_State *L) {
		if (_lg_typecheck_getWallStateSet_overload_1(L)) return _bind_getWallStateSet_overload_1(L);
		if (_lg_typecheck_getWallStateSet_overload_2(L)) return _bind_getWallStateSet_overload_2(L);

		luaL_error(L, "error in function getWallStateSet, cannot match any of the overloads for function getWallStateSet:\n  getWallStateSet()\n  getWallStateSet()\n");
		return 0;
	}

	// osg::StateSet * osgText::Text3D::getOrCreateWallStateSet()
	static int _bind_getOrCreateWallStateSet(lua_State *L) {
		if (!_lg_typecheck_getOrCreateWallStateSet(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateSet * osgText::Text3D::getOrCreateWallStateSet() function, expected prototype:\nosg::StateSet * osgText::Text3D::getOrCreateWallStateSet()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::Text3D* self=Luna< osg::Referenced >::checkSubType< osgText::Text3D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateSet * osgText::Text3D::getOrCreateWallStateSet(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::StateSet * lret = self->getOrCreateWallStateSet();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateSet >::push(L,lret,false);

		return 1;
	}

	// void osgText::Text3D::setWallStateSet(osg::StateSet * wallStateSet)
	static int _bind_setWallStateSet(lua_State *L) {
		if (!_lg_typecheck_setWallStateSet(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::Text3D::setWallStateSet(osg::StateSet * wallStateSet) function, expected prototype:\nvoid osgText::Text3D::setWallStateSet(osg::StateSet * wallStateSet)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StateSet* wallStateSet=(Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,2));

		osgText::Text3D* self=Luna< osg::Referenced >::checkSubType< osgText::Text3D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::Text3D::setWallStateSet(osg::StateSet *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setWallStateSet(wallStateSet);

		return 0;
	}

	// osg::StateSet * osgText::Text3D::getBackStateSet()
	static int _bind_getBackStateSet_overload_1(lua_State *L) {
		if (!_lg_typecheck_getBackStateSet_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateSet * osgText::Text3D::getBackStateSet() function, expected prototype:\nosg::StateSet * osgText::Text3D::getBackStateSet()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::Text3D* self=Luna< osg::Referenced >::checkSubType< osgText::Text3D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateSet * osgText::Text3D::getBackStateSet(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::StateSet * lret = self->getBackStateSet();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateSet >::push(L,lret,false);

		return 1;
	}

	// osg::StateSet * osgText::Text3D::getBackStateSet() const
	static int _bind_getBackStateSet_overload_2(lua_State *L) {
		if (!_lg_typecheck_getBackStateSet_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateSet * osgText::Text3D::getBackStateSet() const function, expected prototype:\nosg::StateSet * osgText::Text3D::getBackStateSet() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::Text3D* self=Luna< osg::Referenced >::checkSubType< osgText::Text3D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateSet * osgText::Text3D::getBackStateSet() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::StateSet * lret = self->getBackStateSet();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateSet >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgText::Text3D::getBackStateSet
	static int _bind_getBackStateSet(lua_State *L) {
		if (_lg_typecheck_getBackStateSet_overload_1(L)) return _bind_getBackStateSet_overload_1(L);
		if (_lg_typecheck_getBackStateSet_overload_2(L)) return _bind_getBackStateSet_overload_2(L);

		luaL_error(L, "error in function getBackStateSet, cannot match any of the overloads for function getBackStateSet:\n  getBackStateSet()\n  getBackStateSet()\n");
		return 0;
	}

	// osg::StateSet * osgText::Text3D::getOrCreateBackStateSet()
	static int _bind_getOrCreateBackStateSet(lua_State *L) {
		if (!_lg_typecheck_getOrCreateBackStateSet(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateSet * osgText::Text3D::getOrCreateBackStateSet() function, expected prototype:\nosg::StateSet * osgText::Text3D::getOrCreateBackStateSet()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::Text3D* self=Luna< osg::Referenced >::checkSubType< osgText::Text3D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateSet * osgText::Text3D::getOrCreateBackStateSet(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::StateSet * lret = self->getOrCreateBackStateSet();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateSet >::push(L,lret,false);

		return 1;
	}

	// void osgText::Text3D::setBackStateSet(osg::StateSet * backStateSet)
	static int _bind_setBackStateSet(lua_State *L) {
		if (!_lg_typecheck_setBackStateSet(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::Text3D::setBackStateSet(osg::StateSet * backStateSet) function, expected prototype:\nvoid osgText::Text3D::setBackStateSet(osg::StateSet * backStateSet)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StateSet* backStateSet=(Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,2));

		osgText::Text3D* self=Luna< osg::Referenced >::checkSubType< osgText::Text3D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::Text3D::setBackStateSet(osg::StateSet *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setBackStateSet(backStateSet);

		return 0;
	}

	// void osgText::Text3D::drawImplementation(osg::RenderInfo & renderInfo) const
	static int _bind_drawImplementation(lua_State *L) {
		if (!_lg_typecheck_drawImplementation(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::Text3D::drawImplementation(osg::RenderInfo & renderInfo) const function, expected prototype:\nvoid osgText::Text3D::drawImplementation(osg::RenderInfo & renderInfo) const\nClass arguments details:\narg 1 ID = 2286263\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::RenderInfo* renderInfo_ptr=(Luna< osg::RenderInfo >::check(L,2));
		if( !renderInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg renderInfo in osgText::Text3D::drawImplementation function");
		}
		osg::RenderInfo & renderInfo=*renderInfo_ptr;

		osgText::Text3D* self=Luna< osg::Referenced >::checkSubType< osgText::Text3D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::Text3D::drawImplementation(osg::RenderInfo &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->drawImplementation(renderInfo);

		return 0;
	}

	// void osgText::Text3D::setThreadSafeRefUnref(bool threadSafe)
	static int _bind_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::Text3D::setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgText::Text3D::setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgText::Text3D* self=Luna< osg::Referenced >::checkSubType< osgText::Text3D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::Text3D::setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osgText::Text3D::releaseGLObjects(osg::State * state = 0) const
	static int _bind_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::Text3D::releaseGLObjects(osg::State * state = 0) const function, expected prototype:\nvoid osgText::Text3D::releaseGLObjects(osg::State * state = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* state=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osgText::Text3D* self=Luna< osg::Referenced >::checkSubType< osgText::Text3D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::Text3D::releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->releaseGLObjects(state);

		return 0;
	}

	// osg::BoundingBoxd osgText::Text3D::computeBound() const
	static int _bind_computeBound(lua_State *L) {
		if (!_lg_typecheck_computeBound(L)) {
			luaL_error(L, "luna typecheck failed in osg::BoundingBoxd osgText::Text3D::computeBound() const function, expected prototype:\nosg::BoundingBoxd osgText::Text3D::computeBound() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::Text3D* self=Luna< osg::Referenced >::checkSubType< osgText::Text3D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::BoundingBoxd osgText::Text3D::computeBound() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::BoundingBoxd stack_lret = self->computeBound();
		osg::BoundingBoxd* lret = new osg::BoundingBoxd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingBoxd >::push(L,lret,true);

		return 1;
	}

	// void osgText::Text3D::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::Text3D::base_setName(const std::string & name) function, expected prototype:\nvoid osgText::Text3D::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgText::Text3D* self=Luna< osg::Referenced >::checkSubType< osgText::Text3D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::Text3D::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Text3D::setName(name);

		return 0;
	}

	// void osgText::Text3D::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::Text3D::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osgText::Text3D::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osgText::Text3D* self=Luna< osg::Referenced >::checkSubType< osgText::Text3D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::Text3D::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Text3D::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osgText::Text3D::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osgText::Text3D::base_getUserData() function, expected prototype:\nosg::Referenced * osgText::Text3D::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::Text3D* self=Luna< osg::Referenced >::checkSubType< osgText::Text3D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osgText::Text3D::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->Text3D::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osgText::Text3D::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osgText::Text3D::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osgText::Text3D::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::Text3D* self=Luna< osg::Referenced >::checkSubType< osgText::Text3D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osgText::Text3D::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->Text3D::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgText::Text3D::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// osg::Geometry * osgText::Text3D::base_asGeometry()
	static int _bind_base_asGeometry_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asGeometry_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Geometry * osgText::Text3D::base_asGeometry() function, expected prototype:\nosg::Geometry * osgText::Text3D::base_asGeometry()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::Text3D* self=Luna< osg::Referenced >::checkSubType< osgText::Text3D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Geometry * osgText::Text3D::base_asGeometry(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Geometry * lret = self->Text3D::asGeometry();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geometry >::push(L,lret,false);

		return 1;
	}

	// const osg::Geometry * osgText::Text3D::base_asGeometry() const
	static int _bind_base_asGeometry_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asGeometry_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Geometry * osgText::Text3D::base_asGeometry() const function, expected prototype:\nconst osg::Geometry * osgText::Text3D::base_asGeometry() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::Text3D* self=Luna< osg::Referenced >::checkSubType< osgText::Text3D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Geometry * osgText::Text3D::base_asGeometry() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Geometry * lret = self->Text3D::asGeometry();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geometry >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgText::Text3D::base_asGeometry
	static int _bind_base_asGeometry(lua_State *L) {
		if (_lg_typecheck_base_asGeometry_overload_1(L)) return _bind_base_asGeometry_overload_1(L);
		if (_lg_typecheck_base_asGeometry_overload_2(L)) return _bind_base_asGeometry_overload_2(L);

		luaL_error(L, "error in function base_asGeometry, cannot match any of the overloads for function base_asGeometry:\n  base_asGeometry()\n  base_asGeometry()\n");
		return 0;
	}

	// void osgText::Text3D::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::Text3D::base_computeDataVariance() function, expected prototype:\nvoid osgText::Text3D::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::Text3D* self=Luna< osg::Referenced >::checkSubType< osgText::Text3D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::Text3D::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Text3D::computeDataVariance();

		return 0;
	}

	// void osgText::Text3D::base_setUseVertexBufferObjects(bool flag)
	static int _bind_base_setUseVertexBufferObjects(lua_State *L) {
		if (!_lg_typecheck_base_setUseVertexBufferObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::Text3D::base_setUseVertexBufferObjects(bool flag) function, expected prototype:\nvoid osgText::Text3D::base_setUseVertexBufferObjects(bool flag)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osgText::Text3D* self=Luna< osg::Referenced >::checkSubType< osgText::Text3D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::Text3D::base_setUseVertexBufferObjects(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Text3D::setUseVertexBufferObjects(flag);

		return 0;
	}

	// void osgText::Text3D::base_dirtyDisplayList()
	static int _bind_base_dirtyDisplayList(lua_State *L) {
		if (!_lg_typecheck_base_dirtyDisplayList(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::Text3D::base_dirtyDisplayList() function, expected prototype:\nvoid osgText::Text3D::base_dirtyDisplayList()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::Text3D* self=Luna< osg::Referenced >::checkSubType< osgText::Text3D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::Text3D::base_dirtyDisplayList(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Text3D::dirtyDisplayList();

		return 0;
	}

	// unsigned int osgText::Text3D::base_getGLObjectSizeHint() const
	static int _bind_base_getGLObjectSizeHint(lua_State *L) {
		if (!_lg_typecheck_base_getGLObjectSizeHint(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osgText::Text3D::base_getGLObjectSizeHint() const function, expected prototype:\nunsigned int osgText::Text3D::base_getGLObjectSizeHint() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::Text3D* self=Luna< osg::Referenced >::checkSubType< osgText::Text3D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osgText::Text3D::base_getGLObjectSizeHint() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->Text3D::getGLObjectSizeHint();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgText::Text3D::base_compileGLObjects(osg::RenderInfo & renderInfo) const
	static int _bind_base_compileGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_compileGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::Text3D::base_compileGLObjects(osg::RenderInfo & renderInfo) const function, expected prototype:\nvoid osgText::Text3D::base_compileGLObjects(osg::RenderInfo & renderInfo) const\nClass arguments details:\narg 1 ID = 2286263\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::RenderInfo* renderInfo_ptr=(Luna< osg::RenderInfo >::check(L,2));
		if( !renderInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg renderInfo in osgText::Text3D::base_compileGLObjects function");
		}
		osg::RenderInfo & renderInfo=*renderInfo_ptr;

		osgText::Text3D* self=Luna< osg::Referenced >::checkSubType< osgText::Text3D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::Text3D::base_compileGLObjects(osg::RenderInfo &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Text3D::compileGLObjects(renderInfo);

		return 0;
	}

	// void osgText::Text3D::base_setUpdateCallback(osg::Drawable::UpdateCallback * ac)
	static int _bind_base_setUpdateCallback(lua_State *L) {
		if (!_lg_typecheck_base_setUpdateCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::Text3D::base_setUpdateCallback(osg::Drawable::UpdateCallback * ac) function, expected prototype:\nvoid osgText::Text3D::base_setUpdateCallback(osg::Drawable::UpdateCallback * ac)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Drawable::UpdateCallback* ac=(Luna< osg::Referenced >::checkSubType< osg::Drawable::UpdateCallback >(L,2));

		osgText::Text3D* self=Luna< osg::Referenced >::checkSubType< osgText::Text3D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::Text3D::base_setUpdateCallback(osg::Drawable::UpdateCallback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Text3D::setUpdateCallback(ac);

		return 0;
	}

	// void osgText::Text3D::base_setEventCallback(osg::Drawable::EventCallback * ac)
	static int _bind_base_setEventCallback(lua_State *L) {
		if (!_lg_typecheck_base_setEventCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::Text3D::base_setEventCallback(osg::Drawable::EventCallback * ac) function, expected prototype:\nvoid osgText::Text3D::base_setEventCallback(osg::Drawable::EventCallback * ac)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Drawable::EventCallback* ac=(Luna< osg::Referenced >::checkSubType< osg::Drawable::EventCallback >(L,2));

		osgText::Text3D* self=Luna< osg::Referenced >::checkSubType< osgText::Text3D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::Text3D::base_setEventCallback(osg::Drawable::EventCallback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Text3D::setEventCallback(ac);

		return 0;
	}

	// void osgText::Text3D::base_setCullCallback(osg::Drawable::CullCallback * cc)
	static int _bind_base_setCullCallback(lua_State *L) {
		if (!_lg_typecheck_base_setCullCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::Text3D::base_setCullCallback(osg::Drawable::CullCallback * cc) function, expected prototype:\nvoid osgText::Text3D::base_setCullCallback(osg::Drawable::CullCallback * cc)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Drawable::CullCallback* cc=(Luna< osg::Referenced >::checkSubType< osg::Drawable::CullCallback >(L,2));

		osgText::Text3D* self=Luna< osg::Referenced >::checkSubType< osgText::Text3D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::Text3D::base_setCullCallback(osg::Drawable::CullCallback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Text3D::setCullCallback(cc);

		return 0;
	}

	// void osgText::Text3D::base_setDrawCallback(osg::Drawable::DrawCallback * dc)
	static int _bind_base_setDrawCallback(lua_State *L) {
		if (!_lg_typecheck_base_setDrawCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::Text3D::base_setDrawCallback(osg::Drawable::DrawCallback * dc) function, expected prototype:\nvoid osgText::Text3D::base_setDrawCallback(osg::Drawable::DrawCallback * dc)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Drawable::DrawCallback* dc=(Luna< osg::Referenced >::checkSubType< osg::Drawable::DrawCallback >(L,2));

		osgText::Text3D* self=Luna< osg::Referenced >::checkSubType< osgText::Text3D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::Text3D::base_setDrawCallback(osg::Drawable::DrawCallback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Text3D::setDrawCallback(dc);

		return 0;
	}

	// void osgText::Text3D::base_setFont(osgText::Font * font = 0)
	static int _bind_base_setFont_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_setFont_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::Text3D::base_setFont(osgText::Font * font = 0) function, expected prototype:\nvoid osgText::Text3D::base_setFont(osgText::Font * font = 0)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osgText::Font* font=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osgText::Font >(L,2)) : (osgText::Font*)0;

		osgText::Text3D* self=Luna< osg::Referenced >::checkSubType< osgText::Text3D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::Text3D::base_setFont(osgText::Font *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Text3D::setFont(font);

		return 0;
	}

	// void osgText::Text3D::base_setFont(const std::string & fontfile)
	static int _bind_base_setFont_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_setFont_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::Text3D::base_setFont(const std::string & fontfile) function, expected prototype:\nvoid osgText::Text3D::base_setFont(const std::string & fontfile)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string fontfile(lua_tostring(L,2),lua_objlen(L,2));

		osgText::Text3D* self=Luna< osg::Referenced >::checkSubType< osgText::Text3D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::Text3D::base_setFont(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Text3D::setFont(fontfile);

		return 0;
	}

	// Overload binder for osgText::Text3D::base_setFont
	static int _bind_base_setFont(lua_State *L) {
		if (_lg_typecheck_base_setFont_overload_1(L)) return _bind_base_setFont_overload_1(L);
		if (_lg_typecheck_base_setFont_overload_2(L)) return _bind_base_setFont_overload_2(L);

		luaL_error(L, "error in function base_setFont, cannot match any of the overloads for function base_setFont:\n  base_setFont(osgText::Font *)\n  base_setFont(const std::string &)\n");
		return 0;
	}

	// osg::Object * osgText::Text3D::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgText::Text3D::base_cloneType() const function, expected prototype:\nosg::Object * osgText::Text3D::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::Text3D* self=Luna< osg::Referenced >::checkSubType< osgText::Text3D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgText::Text3D::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->Text3D::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgText::Text3D::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgText::Text3D::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgText::Text3D::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgText::Text3D::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgText::Text3D* self=Luna< osg::Referenced >::checkSubType< osgText::Text3D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgText::Text3D::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->Text3D::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgText::Text3D::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgText::Text3D::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgText::Text3D::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgText::Text3D* self=Luna< osg::Referenced >::checkSubType< osgText::Text3D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgText::Text3D::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Text3D::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgText::Text3D::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgText::Text3D::base_libraryName() const function, expected prototype:\nconst char * osgText::Text3D::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::Text3D* self=Luna< osg::Referenced >::checkSubType< osgText::Text3D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgText::Text3D::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Text3D::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgText::Text3D::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgText::Text3D::base_className() const function, expected prototype:\nconst char * osgText::Text3D::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::Text3D* self=Luna< osg::Referenced >::checkSubType< osgText::Text3D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgText::Text3D::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Text3D::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgText::Text3D::base_drawImplementation(osg::RenderInfo & renderInfo) const
	static int _bind_base_drawImplementation(lua_State *L) {
		if (!_lg_typecheck_base_drawImplementation(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::Text3D::base_drawImplementation(osg::RenderInfo & renderInfo) const function, expected prototype:\nvoid osgText::Text3D::base_drawImplementation(osg::RenderInfo & renderInfo) const\nClass arguments details:\narg 1 ID = 2286263\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::RenderInfo* renderInfo_ptr=(Luna< osg::RenderInfo >::check(L,2));
		if( !renderInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg renderInfo in osgText::Text3D::base_drawImplementation function");
		}
		osg::RenderInfo & renderInfo=*renderInfo_ptr;

		osgText::Text3D* self=Luna< osg::Referenced >::checkSubType< osgText::Text3D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::Text3D::base_drawImplementation(osg::RenderInfo &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Text3D::drawImplementation(renderInfo);

		return 0;
	}

	// void osgText::Text3D::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::Text3D::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgText::Text3D::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgText::Text3D* self=Luna< osg::Referenced >::checkSubType< osgText::Text3D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::Text3D::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Text3D::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osgText::Text3D::base_releaseGLObjects(osg::State * state = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::Text3D::base_releaseGLObjects(osg::State * state = 0) const function, expected prototype:\nvoid osgText::Text3D::base_releaseGLObjects(osg::State * state = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* state=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osgText::Text3D* self=Luna< osg::Referenced >::checkSubType< osgText::Text3D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::Text3D::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Text3D::releaseGLObjects(state);

		return 0;
	}

	// osg::BoundingBoxd osgText::Text3D::base_computeBound() const
	static int _bind_base_computeBound(lua_State *L) {
		if (!_lg_typecheck_base_computeBound(L)) {
			luaL_error(L, "luna typecheck failed in osg::BoundingBoxd osgText::Text3D::base_computeBound() const function, expected prototype:\nosg::BoundingBoxd osgText::Text3D::base_computeBound() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::Text3D* self=Luna< osg::Referenced >::checkSubType< osgText::Text3D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::BoundingBoxd osgText::Text3D::base_computeBound() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::BoundingBoxd stack_lret = self->Text3D::computeBound();
		osg::BoundingBoxd* lret = new osg::BoundingBoxd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingBoxd >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

osgText::Text3D* LunaTraits< osgText::Text3D >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgText_Text3D::_bind_ctor(L);
}

void LunaTraits< osgText::Text3D >::_bind_dtor(osgText::Text3D* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgText::Text3D >::className[] = "Text3D";
const char LunaTraits< osgText::Text3D >::fullName[] = "osgText::Text3D";
const char LunaTraits< osgText::Text3D >::moduleName[] = "osgText";
const char* LunaTraits< osgText::Text3D >::parents[] = {"osgText.TextBase", 0};
const int LunaTraits< osgText::Text3D >::hash = 57050122;
const int LunaTraits< osgText::Text3D >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgText::Text3D >::methods[] = {
	{"cloneType", &luna_wrapper_osgText_Text3D::_bind_cloneType},
	{"clone", &luna_wrapper_osgText_Text3D::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osgText_Text3D::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osgText_Text3D::_bind_libraryName},
	{"className", &luna_wrapper_osgText_Text3D::_bind_className},
	{"getCharacterDepth", &luna_wrapper_osgText_Text3D::_bind_getCharacterDepth},
	{"setCharacterDepth", &luna_wrapper_osgText_Text3D::_bind_setCharacterDepth},
	{"getRenderMode", &luna_wrapper_osgText_Text3D::_bind_getRenderMode},
	{"setRenderMode", &luna_wrapper_osgText_Text3D::_bind_setRenderMode},
	{"getWallStateSet", &luna_wrapper_osgText_Text3D::_bind_getWallStateSet},
	{"getOrCreateWallStateSet", &luna_wrapper_osgText_Text3D::_bind_getOrCreateWallStateSet},
	{"setWallStateSet", &luna_wrapper_osgText_Text3D::_bind_setWallStateSet},
	{"getBackStateSet", &luna_wrapper_osgText_Text3D::_bind_getBackStateSet},
	{"getOrCreateBackStateSet", &luna_wrapper_osgText_Text3D::_bind_getOrCreateBackStateSet},
	{"setBackStateSet", &luna_wrapper_osgText_Text3D::_bind_setBackStateSet},
	{"drawImplementation", &luna_wrapper_osgText_Text3D::_bind_drawImplementation},
	{"setThreadSafeRefUnref", &luna_wrapper_osgText_Text3D::_bind_setThreadSafeRefUnref},
	{"releaseGLObjects", &luna_wrapper_osgText_Text3D::_bind_releaseGLObjects},
	{"computeBound", &luna_wrapper_osgText_Text3D::_bind_computeBound},
	{"base_setName", &luna_wrapper_osgText_Text3D::_bind_base_setName},
	{"base_setUserData", &luna_wrapper_osgText_Text3D::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osgText_Text3D::_bind_base_getUserData},
	{"base_asGeometry", &luna_wrapper_osgText_Text3D::_bind_base_asGeometry},
	{"base_computeDataVariance", &luna_wrapper_osgText_Text3D::_bind_base_computeDataVariance},
	{"base_setUseVertexBufferObjects", &luna_wrapper_osgText_Text3D::_bind_base_setUseVertexBufferObjects},
	{"base_dirtyDisplayList", &luna_wrapper_osgText_Text3D::_bind_base_dirtyDisplayList},
	{"base_getGLObjectSizeHint", &luna_wrapper_osgText_Text3D::_bind_base_getGLObjectSizeHint},
	{"base_compileGLObjects", &luna_wrapper_osgText_Text3D::_bind_base_compileGLObjects},
	{"base_setUpdateCallback", &luna_wrapper_osgText_Text3D::_bind_base_setUpdateCallback},
	{"base_setEventCallback", &luna_wrapper_osgText_Text3D::_bind_base_setEventCallback},
	{"base_setCullCallback", &luna_wrapper_osgText_Text3D::_bind_base_setCullCallback},
	{"base_setDrawCallback", &luna_wrapper_osgText_Text3D::_bind_base_setDrawCallback},
	{"base_setFont", &luna_wrapper_osgText_Text3D::_bind_base_setFont},
	{"base_cloneType", &luna_wrapper_osgText_Text3D::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osgText_Text3D::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osgText_Text3D::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osgText_Text3D::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osgText_Text3D::_bind_base_className},
	{"base_drawImplementation", &luna_wrapper_osgText_Text3D::_bind_base_drawImplementation},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgText_Text3D::_bind_base_setThreadSafeRefUnref},
	{"base_releaseGLObjects", &luna_wrapper_osgText_Text3D::_bind_base_releaseGLObjects},
	{"base_computeBound", &luna_wrapper_osgText_Text3D::_bind_base_computeBound},
	{"fromVoid", &luna_wrapper_osgText_Text3D::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgText_Text3D::_bind_asVoid},
	{"getTable", &luna_wrapper_osgText_Text3D::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgText::Text3D >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgText_Text3D::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgText::Text3D >::enumValues[] = {
	{"PER_FACE", osgText::Text3D::PER_FACE},
	{"PER_GLYPH", osgText::Text3D::PER_GLYPH},
	{0,0}
};



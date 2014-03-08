#include <plug_common.h>

#include <luna/wrappers/wrapper_osgText_Bevel.h>

class luna_wrapper_osgText_Bevel {
public:
	typedef Luna< osgText::Bevel > luna_t;

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

		osgText::Bevel* self= (osgText::Bevel*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgText::Bevel >::push(L,self,false);
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
		//osgText::Bevel* ptr= dynamic_cast< osgText::Bevel* >(Luna< osg::Referenced >::check(L,1));
		osgText::Bevel* ptr= luna_caster< osg::Referenced, osgText::Bevel >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgText::Bevel >::push(L,ptr,false);
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
		if( (!(Luna< osg::Referenced >::checkSubType< osgText::Bevel >(L,1))) ) return false;
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
		if( (!(Luna< osg::Referenced >::checkSubType< osgText::Bevel >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_setBevelThickness(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getBevelThickness(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_flatBevel(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_roundedBevel(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_roundedBevel2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setVertices(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,30190297) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getVertices_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getVertices_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_print(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2993706) ) return false;
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
	// (found 1 valid operators)
	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}


	// Constructor binds:
	// osgText::Bevel::Bevel()
	static osgText::Bevel* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgText::Bevel::Bevel() function, expected prototype:\nosgText::Bevel::Bevel()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osgText::Bevel();
	}

	// osgText::Bevel::Bevel(const osgText::Bevel & bevel, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgText::Bevel* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgText::Bevel::Bevel(const osgText::Bevel & bevel, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgText::Bevel::Bevel(const osgText::Bevel & bevel, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osgText::Bevel* bevel_ptr=(Luna< osg::Referenced >::checkSubType< osgText::Bevel >(L,1));
		if( !bevel_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bevel in osgText::Bevel::Bevel function");
		}
		const osgText::Bevel & bevel=*bevel_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgText::Bevel::Bevel function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osgText::Bevel(bevel, copyop);
	}

	// osgText::Bevel::Bevel(lua_Table * data)
	static osgText::Bevel* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osgText::Bevel::Bevel(lua_Table * data) function, expected prototype:\nosgText::Bevel::Bevel(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgText_Bevel(L,NULL);
	}

	// osgText::Bevel::Bevel(lua_Table * data, const osgText::Bevel & bevel, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgText::Bevel* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osgText::Bevel::Bevel(lua_Table * data, const osgText::Bevel & bevel, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgText::Bevel::Bevel(lua_Table * data, const osgText::Bevel & bevel, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osgText::Bevel* bevel_ptr=(Luna< osg::Referenced >::checkSubType< osgText::Bevel >(L,2));
		if( !bevel_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bevel in osgText::Bevel::Bevel function");
		}
		const osgText::Bevel & bevel=*bevel_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgText::Bevel::Bevel function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osgText_Bevel(L,NULL, bevel, copyop);
	}

	// Overload binder for osgText::Bevel::Bevel
	static osgText::Bevel* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function Bevel, cannot match any of the overloads for function Bevel:\n  Bevel()\n  Bevel(const osgText::Bevel &, const osg::CopyOp &)\n  Bevel(lua_Table *)\n  Bevel(lua_Table *, const osgText::Bevel &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osgText::Bevel::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgText::Bevel::cloneType() const function, expected prototype:\nosg::Object * osgText::Bevel::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::Bevel* self=Luna< osg::Referenced >::checkSubType< osgText::Bevel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgText::Bevel::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgText::Bevel::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgText::Bevel::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgText::Bevel::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgText::Bevel::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgText::Bevel* self=Luna< osg::Referenced >::checkSubType< osgText::Bevel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgText::Bevel::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgText::Bevel::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgText::Bevel::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgText::Bevel::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgText::Bevel* self=Luna< osg::Referenced >::checkSubType< osgText::Bevel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgText::Bevel::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgText::Bevel::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgText::Bevel::libraryName() const function, expected prototype:\nconst char * osgText::Bevel::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::Bevel* self=Luna< osg::Referenced >::checkSubType< osgText::Bevel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgText::Bevel::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgText::Bevel::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgText::Bevel::className() const function, expected prototype:\nconst char * osgText::Bevel::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::Bevel* self=Luna< osg::Referenced >::checkSubType< osgText::Bevel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgText::Bevel::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgText::Bevel::setBevelThickness(float thickness)
	static int _bind_setBevelThickness(lua_State *L) {
		if (!_lg_typecheck_setBevelThickness(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::Bevel::setBevelThickness(float thickness) function, expected prototype:\nvoid osgText::Bevel::setBevelThickness(float thickness)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float thickness=(float)lua_tonumber(L,2);

		osgText::Bevel* self=Luna< osg::Referenced >::checkSubType< osgText::Bevel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::Bevel::setBevelThickness(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setBevelThickness(thickness);

		return 0;
	}

	// float osgText::Bevel::getBevelThickness() const
	static int _bind_getBevelThickness(lua_State *L) {
		if (!_lg_typecheck_getBevelThickness(L)) {
			luaL_error(L, "luna typecheck failed in float osgText::Bevel::getBevelThickness() const function, expected prototype:\nfloat osgText::Bevel::getBevelThickness() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::Bevel* self=Luna< osg::Referenced >::checkSubType< osgText::Bevel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgText::Bevel::getBevelThickness() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getBevelThickness();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgText::Bevel::flatBevel(float width = 0.25f)
	static int _bind_flatBevel(lua_State *L) {
		if (!_lg_typecheck_flatBevel(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::Bevel::flatBevel(float width = 0.25f) function, expected prototype:\nvoid osgText::Bevel::flatBevel(float width = 0.25f)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		float width=luatop>1 ? (float)lua_tonumber(L,2) : (float)0.25f;

		osgText::Bevel* self=Luna< osg::Referenced >::checkSubType< osgText::Bevel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::Bevel::flatBevel(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->flatBevel(width);

		return 0;
	}

	// void osgText::Bevel::roundedBevel(float width = 0.5f, unsigned int numSteps = 10)
	static int _bind_roundedBevel(lua_State *L) {
		if (!_lg_typecheck_roundedBevel(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::Bevel::roundedBevel(float width = 0.5f, unsigned int numSteps = 10) function, expected prototype:\nvoid osgText::Bevel::roundedBevel(float width = 0.5f, unsigned int numSteps = 10)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		float width=luatop>1 ? (float)lua_tonumber(L,2) : (float)0.5f;
		unsigned int numSteps=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)10;

		osgText::Bevel* self=Luna< osg::Referenced >::checkSubType< osgText::Bevel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::Bevel::roundedBevel(float, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->roundedBevel(width, numSteps);

		return 0;
	}

	// void osgText::Bevel::roundedBevel2(float width = 0.5f, unsigned int numSteps = 10)
	static int _bind_roundedBevel2(lua_State *L) {
		if (!_lg_typecheck_roundedBevel2(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::Bevel::roundedBevel2(float width = 0.5f, unsigned int numSteps = 10) function, expected prototype:\nvoid osgText::Bevel::roundedBevel2(float width = 0.5f, unsigned int numSteps = 10)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		float width=luatop>1 ? (float)lua_tonumber(L,2) : (float)0.5f;
		unsigned int numSteps=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)10;

		osgText::Bevel* self=Luna< osg::Referenced >::checkSubType< osgText::Bevel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::Bevel::roundedBevel2(float, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->roundedBevel2(width, numSteps);

		return 0;
	}

	// void osgText::Bevel::setVertices(const osgText::Bevel::Vertices & vertices)
	static int _bind_setVertices(lua_State *L) {
		if (!_lg_typecheck_setVertices(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::Bevel::setVertices(const osgText::Bevel::Vertices & vertices) function, expected prototype:\nvoid osgText::Bevel::setVertices(const osgText::Bevel::Vertices & vertices)\nClass arguments details:\narg 1 ID = 78061823\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgText::Bevel::Vertices* vertices_ptr=(Luna< std::vector< osg::Vec2f > >::checkSubType< osgText::Bevel::Vertices >(L,2));
		if( !vertices_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vertices in osgText::Bevel::setVertices function");
		}
		const osgText::Bevel::Vertices & vertices=*vertices_ptr;

		osgText::Bevel* self=Luna< osg::Referenced >::checkSubType< osgText::Bevel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::Bevel::setVertices(const osgText::Bevel::Vertices &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setVertices(vertices);

		return 0;
	}

	// osgText::Bevel::Vertices & osgText::Bevel::getVertices()
	static int _bind_getVertices_overload_1(lua_State *L) {
		if (!_lg_typecheck_getVertices_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgText::Bevel::Vertices & osgText::Bevel::getVertices() function, expected prototype:\nosgText::Bevel::Vertices & osgText::Bevel::getVertices()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::Bevel* self=Luna< osg::Referenced >::checkSubType< osgText::Bevel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgText::Bevel::Vertices & osgText::Bevel::getVertices(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgText::Bevel::Vertices* lret = &self->getVertices();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgText::Bevel::Vertices >::push(L,lret,false);

		return 1;
	}

	// const osgText::Bevel::Vertices & osgText::Bevel::getVertices() const
	static int _bind_getVertices_overload_2(lua_State *L) {
		if (!_lg_typecheck_getVertices_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osgText::Bevel::Vertices & osgText::Bevel::getVertices() const function, expected prototype:\nconst osgText::Bevel::Vertices & osgText::Bevel::getVertices() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::Bevel* self=Luna< osg::Referenced >::checkSubType< osgText::Bevel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgText::Bevel::Vertices & osgText::Bevel::getVertices() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgText::Bevel::Vertices* lret = &self->getVertices();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgText::Bevel::Vertices >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgText::Bevel::getVertices
	static int _bind_getVertices(lua_State *L) {
		if (_lg_typecheck_getVertices_overload_1(L)) return _bind_getVertices_overload_1(L);
		if (_lg_typecheck_getVertices_overload_2(L)) return _bind_getVertices_overload_2(L);

		luaL_error(L, "error in function getVertices, cannot match any of the overloads for function getVertices:\n  getVertices()\n  getVertices()\n");
		return 0;
	}

	// void osgText::Bevel::print(std::ostream & fout)
	static int _bind_print(lua_State *L) {
		if (!_lg_typecheck_print(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::Bevel::print(std::ostream & fout) function, expected prototype:\nvoid osgText::Bevel::print(std::ostream & fout)\nClass arguments details:\narg 1 ID = 2993706\n\n%s",luna_dumpStack(L).c_str());
		}

		std::ostream* fout_ptr=(Luna< std::ostream >::check(L,2));
		if( !fout_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg fout in osgText::Bevel::print function");
		}
		std::ostream & fout=*fout_ptr;

		osgText::Bevel* self=Luna< osg::Referenced >::checkSubType< osgText::Bevel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::Bevel::print(std::ostream &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->print(fout);

		return 0;
	}

	// void osgText::Bevel::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::Bevel::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgText::Bevel::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgText::Bevel* self=Luna< osg::Referenced >::checkSubType< osgText::Bevel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::Bevel::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Bevel::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osgText::Bevel::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::Bevel::base_setName(const std::string & name) function, expected prototype:\nvoid osgText::Bevel::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgText::Bevel* self=Luna< osg::Referenced >::checkSubType< osgText::Bevel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::Bevel::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Bevel::setName(name);

		return 0;
	}

	// void osgText::Bevel::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::Bevel::base_computeDataVariance() function, expected prototype:\nvoid osgText::Bevel::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::Bevel* self=Luna< osg::Referenced >::checkSubType< osgText::Bevel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::Bevel::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Bevel::computeDataVariance();

		return 0;
	}

	// void osgText::Bevel::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::Bevel::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osgText::Bevel::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osgText::Bevel* self=Luna< osg::Referenced >::checkSubType< osgText::Bevel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::Bevel::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Bevel::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osgText::Bevel::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osgText::Bevel::base_getUserData() function, expected prototype:\nosg::Referenced * osgText::Bevel::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::Bevel* self=Luna< osg::Referenced >::checkSubType< osgText::Bevel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osgText::Bevel::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->Bevel::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osgText::Bevel::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osgText::Bevel::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osgText::Bevel::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::Bevel* self=Luna< osg::Referenced >::checkSubType< osgText::Bevel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osgText::Bevel::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->Bevel::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgText::Bevel::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osgText::Bevel::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::Bevel::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osgText::Bevel::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osgText::Bevel* self=Luna< osg::Referenced >::checkSubType< osgText::Bevel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::Bevel::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Bevel::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osgText::Bevel::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgText::Bevel::base_cloneType() const function, expected prototype:\nosg::Object * osgText::Bevel::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::Bevel* self=Luna< osg::Referenced >::checkSubType< osgText::Bevel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgText::Bevel::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->Bevel::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgText::Bevel::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgText::Bevel::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgText::Bevel::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgText::Bevel::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgText::Bevel* self=Luna< osg::Referenced >::checkSubType< osgText::Bevel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgText::Bevel::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->Bevel::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgText::Bevel::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgText::Bevel::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgText::Bevel::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgText::Bevel* self=Luna< osg::Referenced >::checkSubType< osgText::Bevel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgText::Bevel::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Bevel::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgText::Bevel::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgText::Bevel::base_libraryName() const function, expected prototype:\nconst char * osgText::Bevel::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::Bevel* self=Luna< osg::Referenced >::checkSubType< osgText::Bevel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgText::Bevel::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Bevel::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgText::Bevel::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgText::Bevel::base_className() const function, expected prototype:\nconst char * osgText::Bevel::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::Bevel* self=Luna< osg::Referenced >::checkSubType< osgText::Bevel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgText::Bevel::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Bevel::className();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:
	// bool osgText::Bevel::operator==(const osgText::Bevel & rhs) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in bool osgText::Bevel::operator==(const osgText::Bevel & rhs) const function, expected prototype:\nbool osgText::Bevel::operator==(const osgText::Bevel & rhs) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgText::Bevel* rhs_ptr=(Luna< osg::Referenced >::checkSubType< osgText::Bevel >(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osgText::Bevel::operator== function");
		}
		const osgText::Bevel & rhs=*rhs_ptr;

		osgText::Bevel* self=Luna< osg::Referenced >::checkSubType< osgText::Bevel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgText::Bevel::operator==(const osgText::Bevel &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator==(rhs);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

osgText::Bevel* LunaTraits< osgText::Bevel >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgText_Bevel::_bind_ctor(L);
}

void LunaTraits< osgText::Bevel >::_bind_dtor(osgText::Bevel* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgText::Bevel >::className[] = "Bevel";
const char LunaTraits< osgText::Bevel >::fullName[] = "osgText::Bevel";
const char LunaTraits< osgText::Bevel >::moduleName[] = "osgText";
const char* LunaTraits< osgText::Bevel >::parents[] = {"osg.Object", 0};
const int LunaTraits< osgText::Bevel >::hash = 1343651;
const int LunaTraits< osgText::Bevel >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgText::Bevel >::methods[] = {
	{"cloneType", &luna_wrapper_osgText_Bevel::_bind_cloneType},
	{"clone", &luna_wrapper_osgText_Bevel::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osgText_Bevel::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osgText_Bevel::_bind_libraryName},
	{"className", &luna_wrapper_osgText_Bevel::_bind_className},
	{"setBevelThickness", &luna_wrapper_osgText_Bevel::_bind_setBevelThickness},
	{"getBevelThickness", &luna_wrapper_osgText_Bevel::_bind_getBevelThickness},
	{"flatBevel", &luna_wrapper_osgText_Bevel::_bind_flatBevel},
	{"roundedBevel", &luna_wrapper_osgText_Bevel::_bind_roundedBevel},
	{"roundedBevel2", &luna_wrapper_osgText_Bevel::_bind_roundedBevel2},
	{"setVertices", &luna_wrapper_osgText_Bevel::_bind_setVertices},
	{"getVertices", &luna_wrapper_osgText_Bevel::_bind_getVertices},
	{"print", &luna_wrapper_osgText_Bevel::_bind_print},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgText_Bevel::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osgText_Bevel::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osgText_Bevel::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osgText_Bevel::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osgText_Bevel::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osgText_Bevel::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osgText_Bevel::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osgText_Bevel::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osgText_Bevel::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osgText_Bevel::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osgText_Bevel::_bind_base_className},
	{"__eq", &luna_wrapper_osgText_Bevel::_bind___eq},
	{"fromVoid", &luna_wrapper_osgText_Bevel::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgText_Bevel::_bind_asVoid},
	{"getTable", &luna_wrapper_osgText_Bevel::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgText::Bevel >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgText_Bevel::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgText::Bevel >::enumValues[] = {
	{0,0}
};



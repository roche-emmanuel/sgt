#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_TransferFunction1D.h>

class luna_wrapper_osg_TransferFunction1D {
public:
	typedef Luna< osg::TransferFunction1D > luna_t;

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

		osg::TransferFunction1D* self= (osg::TransferFunction1D*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::TransferFunction1D >::push(L,self,false);
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
		//osg::TransferFunction1D* ptr= dynamic_cast< osg::TransferFunction1D* >(Luna< osg::Referenced >::check(L,1));
		osg::TransferFunction1D* ptr= luna_caster< osg::Referenced, osg::TransferFunction1D >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::TransferFunction1D >::push(L,ptr,false);
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::TransferFunction1D >(L,1))) ) return false;
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::TransferFunction1D >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_getMinimum(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMaximum(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_allocate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_clear(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,92303235) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPixelValue(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumberImageCells(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setColor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303235) ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getColor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getColorMap_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getColorMap_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_assign(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,55588956) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_updateImage(lua_State *L) {
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
	// osg::TransferFunction1D::TransferFunction1D()
	static osg::TransferFunction1D* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::TransferFunction1D::TransferFunction1D() function, expected prototype:\nosg::TransferFunction1D::TransferFunction1D()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::TransferFunction1D();
	}

	// osg::TransferFunction1D::TransferFunction1D(const osg::TransferFunction1D & tf, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::TransferFunction1D* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::TransferFunction1D::TransferFunction1D(const osg::TransferFunction1D & tf, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::TransferFunction1D::TransferFunction1D(const osg::TransferFunction1D & tf, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::TransferFunction1D* tf_ptr=(Luna< osg::Referenced >::checkSubType< osg::TransferFunction1D >(L,1));
		if( !tf_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg tf in osg::TransferFunction1D::TransferFunction1D function");
		}
		const osg::TransferFunction1D & tf=*tf_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::TransferFunction1D::TransferFunction1D function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osg::TransferFunction1D(tf, copyop);
	}

	// osg::TransferFunction1D::TransferFunction1D(lua_Table * data)
	static osg::TransferFunction1D* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::TransferFunction1D::TransferFunction1D(lua_Table * data) function, expected prototype:\nosg::TransferFunction1D::TransferFunction1D(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_TransferFunction1D(L,NULL);
	}

	// osg::TransferFunction1D::TransferFunction1D(lua_Table * data, const osg::TransferFunction1D & tf, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::TransferFunction1D* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::TransferFunction1D::TransferFunction1D(lua_Table * data, const osg::TransferFunction1D & tf, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::TransferFunction1D::TransferFunction1D(lua_Table * data, const osg::TransferFunction1D & tf, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::TransferFunction1D* tf_ptr=(Luna< osg::Referenced >::checkSubType< osg::TransferFunction1D >(L,2));
		if( !tf_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg tf in osg::TransferFunction1D::TransferFunction1D function");
		}
		const osg::TransferFunction1D & tf=*tf_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::TransferFunction1D::TransferFunction1D function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_TransferFunction1D(L,NULL, tf, copyop);
	}

	// Overload binder for osg::TransferFunction1D::TransferFunction1D
	static osg::TransferFunction1D* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function TransferFunction1D, cannot match any of the overloads for function TransferFunction1D:\n  TransferFunction1D()\n  TransferFunction1D(const osg::TransferFunction1D &, const osg::CopyOp &)\n  TransferFunction1D(lua_Table *)\n  TransferFunction1D(lua_Table *, const osg::TransferFunction1D &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::TransferFunction1D::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::TransferFunction1D::cloneType() const function, expected prototype:\nosg::Object * osg::TransferFunction1D::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TransferFunction1D* self=Luna< osg::Referenced >::checkSubType< osg::TransferFunction1D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::TransferFunction1D::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::TransferFunction1D::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::TransferFunction1D::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::TransferFunction1D::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::TransferFunction1D::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::TransferFunction1D* self=Luna< osg::Referenced >::checkSubType< osg::TransferFunction1D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::TransferFunction1D::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::TransferFunction1D::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::TransferFunction1D::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::TransferFunction1D::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::TransferFunction1D* self=Luna< osg::Referenced >::checkSubType< osg::TransferFunction1D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::TransferFunction1D::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::TransferFunction1D::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::TransferFunction1D::libraryName() const function, expected prototype:\nconst char * osg::TransferFunction1D::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TransferFunction1D* self=Luna< osg::Referenced >::checkSubType< osg::TransferFunction1D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::TransferFunction1D::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::TransferFunction1D::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::TransferFunction1D::className() const function, expected prototype:\nconst char * osg::TransferFunction1D::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TransferFunction1D* self=Luna< osg::Referenced >::checkSubType< osg::TransferFunction1D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::TransferFunction1D::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// float osg::TransferFunction1D::getMinimum() const
	static int _bind_getMinimum(lua_State *L) {
		if (!_lg_typecheck_getMinimum(L)) {
			luaL_error(L, "luna typecheck failed in float osg::TransferFunction1D::getMinimum() const function, expected prototype:\nfloat osg::TransferFunction1D::getMinimum() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TransferFunction1D* self=Luna< osg::Referenced >::checkSubType< osg::TransferFunction1D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osg::TransferFunction1D::getMinimum() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getMinimum();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osg::TransferFunction1D::getMaximum() const
	static int _bind_getMaximum(lua_State *L) {
		if (!_lg_typecheck_getMaximum(L)) {
			luaL_error(L, "luna typecheck failed in float osg::TransferFunction1D::getMaximum() const function, expected prototype:\nfloat osg::TransferFunction1D::getMaximum() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TransferFunction1D* self=Luna< osg::Referenced >::checkSubType< osg::TransferFunction1D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osg::TransferFunction1D::getMaximum() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getMaximum();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::TransferFunction1D::allocate(unsigned int numImageCells)
	static int _bind_allocate(lua_State *L) {
		if (!_lg_typecheck_allocate(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TransferFunction1D::allocate(unsigned int numImageCells) function, expected prototype:\nvoid osg::TransferFunction1D::allocate(unsigned int numImageCells)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int numImageCells=(unsigned int)lua_tointeger(L,2);

		osg::TransferFunction1D* self=Luna< osg::Referenced >::checkSubType< osg::TransferFunction1D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TransferFunction1D::allocate(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->allocate(numImageCells);

		return 0;
	}

	// void osg::TransferFunction1D::clear(const osg::Vec4f & color = osg::Vec4f (1.0f, 1.0f, 1.0f, 1.0f))
	static int _bind_clear(lua_State *L) {
		if (!_lg_typecheck_clear(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TransferFunction1D::clear(const osg::Vec4f & color = osg::Vec4f (1.0f, 1.0f, 1.0f, 1.0f)) function, expected prototype:\nvoid osg::TransferFunction1D::clear(const osg::Vec4f & color = osg::Vec4f (1.0f, 1.0f, 1.0f, 1.0f))\nClass arguments details:\narg 1 ID = 92303235\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::Vec4f* color_ptr=luatop>1 ? (Luna< osg::Vec4f >::check(L,2)) : NULL;
		if( luatop>1 && !color_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg color in osg::TransferFunction1D::clear function");
		}
		const osg::Vec4f & color=luatop>1 ? *color_ptr : (const osg::Vec4f&)osg::Vec4f (1.0f, 1.0f, 1.0f, 1.0f);

		osg::TransferFunction1D* self=Luna< osg::Referenced >::checkSubType< osg::TransferFunction1D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TransferFunction1D::clear(const osg::Vec4f &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->clear(color);

		return 0;
	}

	// osg::Vec4f osg::TransferFunction1D::getPixelValue(unsigned int i) const
	static int _bind_getPixelValue(lua_State *L) {
		if (!_lg_typecheck_getPixelValue(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec4f osg::TransferFunction1D::getPixelValue(unsigned int i) const function, expected prototype:\nosg::Vec4f osg::TransferFunction1D::getPixelValue(unsigned int i) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osg::TransferFunction1D* self=Luna< osg::Referenced >::checkSubType< osg::TransferFunction1D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec4f osg::TransferFunction1D::getPixelValue(unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec4f stack_lret = self->getPixelValue(i);
		osg::Vec4f* lret = new osg::Vec4f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4f >::push(L,lret,true);

		return 1;
	}

	// unsigned int osg::TransferFunction1D::getNumberImageCells() const
	static int _bind_getNumberImageCells(lua_State *L) {
		if (!_lg_typecheck_getNumberImageCells(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::TransferFunction1D::getNumberImageCells() const function, expected prototype:\nunsigned int osg::TransferFunction1D::getNumberImageCells() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TransferFunction1D* self=Luna< osg::Referenced >::checkSubType< osg::TransferFunction1D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::TransferFunction1D::getNumberImageCells() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getNumberImageCells();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::TransferFunction1D::setColor(float v, const osg::Vec4f & color, bool updateImage = true)
	static int _bind_setColor(lua_State *L) {
		if (!_lg_typecheck_setColor(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TransferFunction1D::setColor(float v, const osg::Vec4f & color, bool updateImage = true) function, expected prototype:\nvoid osg::TransferFunction1D::setColor(float v, const osg::Vec4f & color, bool updateImage = true)\nClass arguments details:\narg 2 ID = 92303235\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		float v=(float)lua_tonumber(L,2);
		const osg::Vec4f* color_ptr=(Luna< osg::Vec4f >::check(L,3));
		if( !color_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg color in osg::TransferFunction1D::setColor function");
		}
		const osg::Vec4f & color=*color_ptr;
		bool updateImage=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)true;

		osg::TransferFunction1D* self=Luna< osg::Referenced >::checkSubType< osg::TransferFunction1D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TransferFunction1D::setColor(float, const osg::Vec4f &, bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setColor(v, color, updateImage);

		return 0;
	}

	// osg::Vec4f osg::TransferFunction1D::getColor(float v) const
	static int _bind_getColor(lua_State *L) {
		if (!_lg_typecheck_getColor(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec4f osg::TransferFunction1D::getColor(float v) const function, expected prototype:\nosg::Vec4f osg::TransferFunction1D::getColor(float v) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float v=(float)lua_tonumber(L,2);

		osg::TransferFunction1D* self=Luna< osg::Referenced >::checkSubType< osg::TransferFunction1D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec4f osg::TransferFunction1D::getColor(float) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec4f stack_lret = self->getColor(v);
		osg::Vec4f* lret = new osg::Vec4f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4f >::push(L,lret,true);

		return 1;
	}

	// osg::TransferFunction1D::ColorMap & osg::TransferFunction1D::getColorMap()
	static int _bind_getColorMap_overload_1(lua_State *L) {
		if (!_lg_typecheck_getColorMap_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::TransferFunction1D::ColorMap & osg::TransferFunction1D::getColorMap() function, expected prototype:\nosg::TransferFunction1D::ColorMap & osg::TransferFunction1D::getColorMap()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TransferFunction1D* self=Luna< osg::Referenced >::checkSubType< osg::TransferFunction1D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::TransferFunction1D::ColorMap & osg::TransferFunction1D::getColorMap(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::TransferFunction1D::ColorMap* lret = &self->getColorMap();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::TransferFunction1D::ColorMap >::push(L,lret,false);

		return 1;
	}

	// const osg::TransferFunction1D::ColorMap & osg::TransferFunction1D::getColorMap() const
	static int _bind_getColorMap_overload_2(lua_State *L) {
		if (!_lg_typecheck_getColorMap_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::TransferFunction1D::ColorMap & osg::TransferFunction1D::getColorMap() const function, expected prototype:\nconst osg::TransferFunction1D::ColorMap & osg::TransferFunction1D::getColorMap() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TransferFunction1D* self=Luna< osg::Referenced >::checkSubType< osg::TransferFunction1D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::TransferFunction1D::ColorMap & osg::TransferFunction1D::getColorMap() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::TransferFunction1D::ColorMap* lret = &self->getColorMap();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::TransferFunction1D::ColorMap >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::TransferFunction1D::getColorMap
	static int _bind_getColorMap(lua_State *L) {
		if (_lg_typecheck_getColorMap_overload_1(L)) return _bind_getColorMap_overload_1(L);
		if (_lg_typecheck_getColorMap_overload_2(L)) return _bind_getColorMap_overload_2(L);

		luaL_error(L, "error in function getColorMap, cannot match any of the overloads for function getColorMap:\n  getColorMap()\n  getColorMap()\n");
		return 0;
	}

	// void osg::TransferFunction1D::assign(const osg::TransferFunction1D::ColorMap & vcm)
	static int _bind_assign(lua_State *L) {
		if (!_lg_typecheck_assign(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TransferFunction1D::assign(const osg::TransferFunction1D::ColorMap & vcm) function, expected prototype:\nvoid osg::TransferFunction1D::assign(const osg::TransferFunction1D::ColorMap & vcm)\nClass arguments details:\narg 1 ID = 93067344\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::TransferFunction1D::ColorMap* vcm_ptr=(Luna< std::map< float, osg::Vec4f > >::checkSubType< osg::TransferFunction1D::ColorMap >(L,2));
		if( !vcm_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vcm in osg::TransferFunction1D::assign function");
		}
		const osg::TransferFunction1D::ColorMap & vcm=*vcm_ptr;

		osg::TransferFunction1D* self=Luna< osg::Referenced >::checkSubType< osg::TransferFunction1D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TransferFunction1D::assign(const osg::TransferFunction1D::ColorMap &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->assign(vcm);

		return 0;
	}

	// void osg::TransferFunction1D::updateImage()
	static int _bind_updateImage(lua_State *L) {
		if (!_lg_typecheck_updateImage(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TransferFunction1D::updateImage() function, expected prototype:\nvoid osg::TransferFunction1D::updateImage()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TransferFunction1D* self=Luna< osg::Referenced >::checkSubType< osg::TransferFunction1D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TransferFunction1D::updateImage(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->updateImage();

		return 0;
	}

	// void osg::TransferFunction1D::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TransferFunction1D::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::TransferFunction1D::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::TransferFunction1D* self=Luna< osg::Referenced >::checkSubType< osg::TransferFunction1D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TransferFunction1D::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TransferFunction1D::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::TransferFunction1D::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TransferFunction1D::base_setName(const std::string & name) function, expected prototype:\nvoid osg::TransferFunction1D::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::TransferFunction1D* self=Luna< osg::Referenced >::checkSubType< osg::TransferFunction1D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TransferFunction1D::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TransferFunction1D::setName(name);

		return 0;
	}

	// void osg::TransferFunction1D::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TransferFunction1D::base_computeDataVariance() function, expected prototype:\nvoid osg::TransferFunction1D::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TransferFunction1D* self=Luna< osg::Referenced >::checkSubType< osg::TransferFunction1D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TransferFunction1D::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TransferFunction1D::computeDataVariance();

		return 0;
	}

	// void osg::TransferFunction1D::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TransferFunction1D::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::TransferFunction1D::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::TransferFunction1D* self=Luna< osg::Referenced >::checkSubType< osg::TransferFunction1D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TransferFunction1D::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TransferFunction1D::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::TransferFunction1D::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::TransferFunction1D::base_getUserData() function, expected prototype:\nosg::Referenced * osg::TransferFunction1D::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TransferFunction1D* self=Luna< osg::Referenced >::checkSubType< osg::TransferFunction1D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::TransferFunction1D::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->TransferFunction1D::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::TransferFunction1D::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::TransferFunction1D::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::TransferFunction1D::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TransferFunction1D* self=Luna< osg::Referenced >::checkSubType< osg::TransferFunction1D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::TransferFunction1D::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->TransferFunction1D::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::TransferFunction1D::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osg::TransferFunction1D::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TransferFunction1D::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::TransferFunction1D::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::TransferFunction1D* self=Luna< osg::Referenced >::checkSubType< osg::TransferFunction1D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TransferFunction1D::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TransferFunction1D::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osg::TransferFunction1D::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::TransferFunction1D::base_cloneType() const function, expected prototype:\nosg::Object * osg::TransferFunction1D::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TransferFunction1D* self=Luna< osg::Referenced >::checkSubType< osg::TransferFunction1D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::TransferFunction1D::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->TransferFunction1D::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::TransferFunction1D::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::TransferFunction1D::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::TransferFunction1D::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::TransferFunction1D::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::TransferFunction1D* self=Luna< osg::Referenced >::checkSubType< osg::TransferFunction1D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::TransferFunction1D::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->TransferFunction1D::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::TransferFunction1D::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::TransferFunction1D::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::TransferFunction1D::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::TransferFunction1D* self=Luna< osg::Referenced >::checkSubType< osg::TransferFunction1D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::TransferFunction1D::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TransferFunction1D::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::TransferFunction1D::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::TransferFunction1D::base_libraryName() const function, expected prototype:\nconst char * osg::TransferFunction1D::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TransferFunction1D* self=Luna< osg::Referenced >::checkSubType< osg::TransferFunction1D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::TransferFunction1D::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->TransferFunction1D::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::TransferFunction1D::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::TransferFunction1D::base_className() const function, expected prototype:\nconst char * osg::TransferFunction1D::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TransferFunction1D* self=Luna< osg::Referenced >::checkSubType< osg::TransferFunction1D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::TransferFunction1D::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->TransferFunction1D::className();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

osg::TransferFunction1D* LunaTraits< osg::TransferFunction1D >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_TransferFunction1D::_bind_ctor(L);
}

void LunaTraits< osg::TransferFunction1D >::_bind_dtor(osg::TransferFunction1D* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::TransferFunction1D >::className[] = "TransferFunction1D";
const char LunaTraits< osg::TransferFunction1D >::fullName[] = "osg::TransferFunction1D";
const char LunaTraits< osg::TransferFunction1D >::moduleName[] = "osg";
const char* LunaTraits< osg::TransferFunction1D >::parents[] = {"osg.TransferFunction", 0};
const int LunaTraits< osg::TransferFunction1D >::hash = 46026100;
const int LunaTraits< osg::TransferFunction1D >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::TransferFunction1D >::methods[] = {
	{"cloneType", &luna_wrapper_osg_TransferFunction1D::_bind_cloneType},
	{"clone", &luna_wrapper_osg_TransferFunction1D::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_TransferFunction1D::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_TransferFunction1D::_bind_libraryName},
	{"className", &luna_wrapper_osg_TransferFunction1D::_bind_className},
	{"getMinimum", &luna_wrapper_osg_TransferFunction1D::_bind_getMinimum},
	{"getMaximum", &luna_wrapper_osg_TransferFunction1D::_bind_getMaximum},
	{"allocate", &luna_wrapper_osg_TransferFunction1D::_bind_allocate},
	{"clear", &luna_wrapper_osg_TransferFunction1D::_bind_clear},
	{"getPixelValue", &luna_wrapper_osg_TransferFunction1D::_bind_getPixelValue},
	{"getNumberImageCells", &luna_wrapper_osg_TransferFunction1D::_bind_getNumberImageCells},
	{"setColor", &luna_wrapper_osg_TransferFunction1D::_bind_setColor},
	{"getColor", &luna_wrapper_osg_TransferFunction1D::_bind_getColor},
	{"getColorMap", &luna_wrapper_osg_TransferFunction1D::_bind_getColorMap},
	{"assign", &luna_wrapper_osg_TransferFunction1D::_bind_assign},
	{"updateImage", &luna_wrapper_osg_TransferFunction1D::_bind_updateImage},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_TransferFunction1D::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osg_TransferFunction1D::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_TransferFunction1D::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_TransferFunction1D::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_TransferFunction1D::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osg_TransferFunction1D::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osg_TransferFunction1D::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_TransferFunction1D::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_TransferFunction1D::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_TransferFunction1D::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_TransferFunction1D::_bind_base_className},
	{"fromVoid", &luna_wrapper_osg_TransferFunction1D::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_TransferFunction1D::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_TransferFunction1D::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::TransferFunction1D >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_TransferFunction1D::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::TransferFunction1D >::enumValues[] = {
	{0,0}
};



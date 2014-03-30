#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_TransferFunction.h>

class luna_wrapper_osg_TransferFunction {
public:
	typedef Luna< osg::TransferFunction > luna_t;

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

		osg::TransferFunction* self= (osg::TransferFunction*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::TransferFunction >::push(L,self,false);
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
		//osg::TransferFunction* ptr= dynamic_cast< osg::TransferFunction* >(Luna< osg::Referenced >::check(L,1));
		osg::TransferFunction* ptr= luna_caster< osg::Referenced, osg::TransferFunction >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::TransferFunction >::push(L,ptr,false);
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::TransferFunction >(L,1))) ) return false;
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::TransferFunction >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_getImage_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getImage_overload_2(lua_State *L) {
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
	// osg::TransferFunction::TransferFunction()
	static osg::TransferFunction* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::TransferFunction::TransferFunction() function, expected prototype:\nosg::TransferFunction::TransferFunction()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::TransferFunction();
	}

	// osg::TransferFunction::TransferFunction(const osg::TransferFunction & tf, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::TransferFunction* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::TransferFunction::TransferFunction(const osg::TransferFunction & tf, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::TransferFunction::TransferFunction(const osg::TransferFunction & tf, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::TransferFunction* tf_ptr=(Luna< osg::Referenced >::checkSubType< osg::TransferFunction >(L,1));
		if( !tf_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg tf in osg::TransferFunction::TransferFunction function");
		}
		const osg::TransferFunction & tf=*tf_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::TransferFunction::TransferFunction function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osg::TransferFunction(tf, copyop);
	}

	// osg::TransferFunction::TransferFunction(lua_Table * data)
	static osg::TransferFunction* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::TransferFunction::TransferFunction(lua_Table * data) function, expected prototype:\nosg::TransferFunction::TransferFunction(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_TransferFunction(L,NULL);
	}

	// osg::TransferFunction::TransferFunction(lua_Table * data, const osg::TransferFunction & tf, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::TransferFunction* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::TransferFunction::TransferFunction(lua_Table * data, const osg::TransferFunction & tf, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::TransferFunction::TransferFunction(lua_Table * data, const osg::TransferFunction & tf, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::TransferFunction* tf_ptr=(Luna< osg::Referenced >::checkSubType< osg::TransferFunction >(L,2));
		if( !tf_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg tf in osg::TransferFunction::TransferFunction function");
		}
		const osg::TransferFunction & tf=*tf_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::TransferFunction::TransferFunction function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_TransferFunction(L,NULL, tf, copyop);
	}

	// Overload binder for osg::TransferFunction::TransferFunction
	static osg::TransferFunction* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function TransferFunction, cannot match any of the overloads for function TransferFunction:\n  TransferFunction()\n  TransferFunction(const osg::TransferFunction &, const osg::CopyOp &)\n  TransferFunction(lua_Table *)\n  TransferFunction(lua_Table *, const osg::TransferFunction &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::TransferFunction::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::TransferFunction::cloneType() const function, expected prototype:\nosg::Object * osg::TransferFunction::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TransferFunction* self=Luna< osg::Referenced >::checkSubType< osg::TransferFunction >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::TransferFunction::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::TransferFunction::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::TransferFunction::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::TransferFunction::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::TransferFunction::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::TransferFunction* self=Luna< osg::Referenced >::checkSubType< osg::TransferFunction >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::TransferFunction::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::TransferFunction::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::TransferFunction::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::TransferFunction::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::TransferFunction* self=Luna< osg::Referenced >::checkSubType< osg::TransferFunction >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::TransferFunction::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::TransferFunction::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::TransferFunction::libraryName() const function, expected prototype:\nconst char * osg::TransferFunction::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TransferFunction* self=Luna< osg::Referenced >::checkSubType< osg::TransferFunction >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::TransferFunction::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::TransferFunction::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::TransferFunction::className() const function, expected prototype:\nconst char * osg::TransferFunction::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TransferFunction* self=Luna< osg::Referenced >::checkSubType< osg::TransferFunction >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::TransferFunction::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::Image * osg::TransferFunction::getImage()
	static int _bind_getImage_overload_1(lua_State *L) {
		if (!_lg_typecheck_getImage_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Image * osg::TransferFunction::getImage() function, expected prototype:\nosg::Image * osg::TransferFunction::getImage()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TransferFunction* self=Luna< osg::Referenced >::checkSubType< osg::TransferFunction >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Image * osg::TransferFunction::getImage(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Image * lret = self->getImage();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Image >::push(L,lret,false);

		return 1;
	}

	// const osg::Image * osg::TransferFunction::getImage() const
	static int _bind_getImage_overload_2(lua_State *L) {
		if (!_lg_typecheck_getImage_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Image * osg::TransferFunction::getImage() const function, expected prototype:\nconst osg::Image * osg::TransferFunction::getImage() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TransferFunction* self=Luna< osg::Referenced >::checkSubType< osg::TransferFunction >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Image * osg::TransferFunction::getImage() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Image * lret = self->getImage();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Image >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::TransferFunction::getImage
	static int _bind_getImage(lua_State *L) {
		if (_lg_typecheck_getImage_overload_1(L)) return _bind_getImage_overload_1(L);
		if (_lg_typecheck_getImage_overload_2(L)) return _bind_getImage_overload_2(L);

		luaL_error(L, "error in function getImage, cannot match any of the overloads for function getImage:\n  getImage()\n  getImage()\n");
		return 0;
	}

	// void osg::TransferFunction::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TransferFunction::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::TransferFunction::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::TransferFunction* self=Luna< osg::Referenced >::checkSubType< osg::TransferFunction >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TransferFunction::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TransferFunction::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::TransferFunction::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TransferFunction::base_setName(const std::string & name) function, expected prototype:\nvoid osg::TransferFunction::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::TransferFunction* self=Luna< osg::Referenced >::checkSubType< osg::TransferFunction >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TransferFunction::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TransferFunction::setName(name);

		return 0;
	}

	// void osg::TransferFunction::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TransferFunction::base_computeDataVariance() function, expected prototype:\nvoid osg::TransferFunction::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TransferFunction* self=Luna< osg::Referenced >::checkSubType< osg::TransferFunction >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TransferFunction::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TransferFunction::computeDataVariance();

		return 0;
	}

	// void osg::TransferFunction::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TransferFunction::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::TransferFunction::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::TransferFunction* self=Luna< osg::Referenced >::checkSubType< osg::TransferFunction >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TransferFunction::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TransferFunction::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::TransferFunction::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::TransferFunction::base_getUserData() function, expected prototype:\nosg::Referenced * osg::TransferFunction::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TransferFunction* self=Luna< osg::Referenced >::checkSubType< osg::TransferFunction >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::TransferFunction::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->TransferFunction::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::TransferFunction::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::TransferFunction::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::TransferFunction::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TransferFunction* self=Luna< osg::Referenced >::checkSubType< osg::TransferFunction >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::TransferFunction::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->TransferFunction::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::TransferFunction::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osg::TransferFunction::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TransferFunction::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::TransferFunction::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::TransferFunction* self=Luna< osg::Referenced >::checkSubType< osg::TransferFunction >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TransferFunction::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TransferFunction::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osg::TransferFunction::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::TransferFunction::base_cloneType() const function, expected prototype:\nosg::Object * osg::TransferFunction::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TransferFunction* self=Luna< osg::Referenced >::checkSubType< osg::TransferFunction >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::TransferFunction::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->TransferFunction::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::TransferFunction::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::TransferFunction::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::TransferFunction::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::TransferFunction::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::TransferFunction* self=Luna< osg::Referenced >::checkSubType< osg::TransferFunction >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::TransferFunction::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->TransferFunction::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::TransferFunction::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::TransferFunction::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::TransferFunction::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::TransferFunction* self=Luna< osg::Referenced >::checkSubType< osg::TransferFunction >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::TransferFunction::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TransferFunction::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::TransferFunction::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::TransferFunction::base_libraryName() const function, expected prototype:\nconst char * osg::TransferFunction::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TransferFunction* self=Luna< osg::Referenced >::checkSubType< osg::TransferFunction >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::TransferFunction::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->TransferFunction::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::TransferFunction::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::TransferFunction::base_className() const function, expected prototype:\nconst char * osg::TransferFunction::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TransferFunction* self=Luna< osg::Referenced >::checkSubType< osg::TransferFunction >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::TransferFunction::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->TransferFunction::className();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

osg::TransferFunction* LunaTraits< osg::TransferFunction >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_TransferFunction::_bind_ctor(L);
}

void LunaTraits< osg::TransferFunction >::_bind_dtor(osg::TransferFunction* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::TransferFunction >::className[] = "TransferFunction";
const char LunaTraits< osg::TransferFunction >::fullName[] = "osg::TransferFunction";
const char LunaTraits< osg::TransferFunction >::moduleName[] = "osg";
const char* LunaTraits< osg::TransferFunction >::parents[] = {"osg.Object", 0};
const int LunaTraits< osg::TransferFunction >::hash = 14720112;
const int LunaTraits< osg::TransferFunction >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::TransferFunction >::methods[] = {
	{"cloneType", &luna_wrapper_osg_TransferFunction::_bind_cloneType},
	{"clone", &luna_wrapper_osg_TransferFunction::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_TransferFunction::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_TransferFunction::_bind_libraryName},
	{"className", &luna_wrapper_osg_TransferFunction::_bind_className},
	{"getImage", &luna_wrapper_osg_TransferFunction::_bind_getImage},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_TransferFunction::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osg_TransferFunction::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_TransferFunction::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_TransferFunction::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_TransferFunction::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osg_TransferFunction::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osg_TransferFunction::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_TransferFunction::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_TransferFunction::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_TransferFunction::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_TransferFunction::_bind_base_className},
	{"fromVoid", &luna_wrapper_osg_TransferFunction::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_TransferFunction::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_TransferFunction::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::TransferFunction >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_TransferFunction::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::TransferFunction >::enumValues[] = {
	{0,0}
};



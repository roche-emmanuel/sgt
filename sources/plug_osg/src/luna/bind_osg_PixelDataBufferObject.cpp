#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_PixelDataBufferObject.h>

class luna_wrapper_osg_PixelDataBufferObject {
public:
	typedef Luna< osg::PixelDataBufferObject > luna_t;

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

		osg::PixelDataBufferObject* self= (osg::PixelDataBufferObject*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::PixelDataBufferObject >::push(L,self,false);
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
		//osg::PixelDataBufferObject* ptr= dynamic_cast< osg::PixelDataBufferObject* >(Luna< osg::Referenced >::check(L,1));
		osg::PixelDataBufferObject* ptr= luna_caster< osg::Referenced, osg::PixelDataBufferObject >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::PixelDataBufferObject >::push(L,ptr,false);
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::PixelDataBufferObject >(L,1))) ) return false;
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::PixelDataBufferObject >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_setDataSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDataSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_compileBuffer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_bindBufferInReadMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_bindBufferInWriteMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_unbindBuffer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
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

	inline static bool _lg_typecheck_base_compileBuffer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_bindBufferInReadMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_bindBufferInWriteMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_unbindBuffer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::PixelDataBufferObject::PixelDataBufferObject()
	static osg::PixelDataBufferObject* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::PixelDataBufferObject::PixelDataBufferObject() function, expected prototype:\nosg::PixelDataBufferObject::PixelDataBufferObject()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::PixelDataBufferObject();
	}

	// osg::PixelDataBufferObject::PixelDataBufferObject(const osg::PixelDataBufferObject & pbo, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::PixelDataBufferObject* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::PixelDataBufferObject::PixelDataBufferObject(const osg::PixelDataBufferObject & pbo, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::PixelDataBufferObject::PixelDataBufferObject(const osg::PixelDataBufferObject & pbo, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::PixelDataBufferObject* pbo_ptr=(Luna< osg::Referenced >::checkSubType< osg::PixelDataBufferObject >(L,1));
		if( !pbo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pbo in osg::PixelDataBufferObject::PixelDataBufferObject function");
		}
		const osg::PixelDataBufferObject & pbo=*pbo_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::PixelDataBufferObject::PixelDataBufferObject function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osg::PixelDataBufferObject(pbo, copyop);
	}

	// osg::PixelDataBufferObject::PixelDataBufferObject(lua_Table * data)
	static osg::PixelDataBufferObject* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::PixelDataBufferObject::PixelDataBufferObject(lua_Table * data) function, expected prototype:\nosg::PixelDataBufferObject::PixelDataBufferObject(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_PixelDataBufferObject(L,NULL);
	}

	// osg::PixelDataBufferObject::PixelDataBufferObject(lua_Table * data, const osg::PixelDataBufferObject & pbo, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::PixelDataBufferObject* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::PixelDataBufferObject::PixelDataBufferObject(lua_Table * data, const osg::PixelDataBufferObject & pbo, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::PixelDataBufferObject::PixelDataBufferObject(lua_Table * data, const osg::PixelDataBufferObject & pbo, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::PixelDataBufferObject* pbo_ptr=(Luna< osg::Referenced >::checkSubType< osg::PixelDataBufferObject >(L,2));
		if( !pbo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pbo in osg::PixelDataBufferObject::PixelDataBufferObject function");
		}
		const osg::PixelDataBufferObject & pbo=*pbo_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::PixelDataBufferObject::PixelDataBufferObject function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_PixelDataBufferObject(L,NULL, pbo, copyop);
	}

	// Overload binder for osg::PixelDataBufferObject::PixelDataBufferObject
	static osg::PixelDataBufferObject* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function PixelDataBufferObject, cannot match any of the overloads for function PixelDataBufferObject:\n  PixelDataBufferObject()\n  PixelDataBufferObject(const osg::PixelDataBufferObject &, const osg::CopyOp &)\n  PixelDataBufferObject(lua_Table *)\n  PixelDataBufferObject(lua_Table *, const osg::PixelDataBufferObject &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::PixelDataBufferObject::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::PixelDataBufferObject::cloneType() const function, expected prototype:\nosg::Object * osg::PixelDataBufferObject::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PixelDataBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::PixelDataBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::PixelDataBufferObject::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::PixelDataBufferObject::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::PixelDataBufferObject::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::PixelDataBufferObject::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::PixelDataBufferObject::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::PixelDataBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::PixelDataBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::PixelDataBufferObject::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::PixelDataBufferObject::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::PixelDataBufferObject::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::PixelDataBufferObject::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::PixelDataBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::PixelDataBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::PixelDataBufferObject::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::PixelDataBufferObject::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::PixelDataBufferObject::libraryName() const function, expected prototype:\nconst char * osg::PixelDataBufferObject::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PixelDataBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::PixelDataBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::PixelDataBufferObject::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::PixelDataBufferObject::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::PixelDataBufferObject::className() const function, expected prototype:\nconst char * osg::PixelDataBufferObject::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PixelDataBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::PixelDataBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::PixelDataBufferObject::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::PixelDataBufferObject::setDataSize(unsigned int size)
	static int _bind_setDataSize(lua_State *L) {
		if (!_lg_typecheck_setDataSize(L)) {
			luaL_error(L, "luna typecheck failed in void osg::PixelDataBufferObject::setDataSize(unsigned int size) function, expected prototype:\nvoid osg::PixelDataBufferObject::setDataSize(unsigned int size)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int size=(unsigned int)lua_tointeger(L,2);

		osg::PixelDataBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::PixelDataBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::PixelDataBufferObject::setDataSize(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setDataSize(size);

		return 0;
	}

	// unsigned int osg::PixelDataBufferObject::getDataSize() const
	static int _bind_getDataSize(lua_State *L) {
		if (!_lg_typecheck_getDataSize(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::PixelDataBufferObject::getDataSize() const function, expected prototype:\nunsigned int osg::PixelDataBufferObject::getDataSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PixelDataBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::PixelDataBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::PixelDataBufferObject::getDataSize() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getDataSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::PixelDataBufferObject::compileBuffer(osg::State & state) const
	static int _bind_compileBuffer(lua_State *L) {
		if (!_lg_typecheck_compileBuffer(L)) {
			luaL_error(L, "luna typecheck failed in void osg::PixelDataBufferObject::compileBuffer(osg::State & state) const function, expected prototype:\nvoid osg::PixelDataBufferObject::compileBuffer(osg::State & state) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* state_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osg::PixelDataBufferObject::compileBuffer function");
		}
		osg::State & state=*state_ptr;

		osg::PixelDataBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::PixelDataBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::PixelDataBufferObject::compileBuffer(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->compileBuffer(state);

		return 0;
	}

	// void osg::PixelDataBufferObject::bindBufferInReadMode(osg::State & state)
	static int _bind_bindBufferInReadMode(lua_State *L) {
		if (!_lg_typecheck_bindBufferInReadMode(L)) {
			luaL_error(L, "luna typecheck failed in void osg::PixelDataBufferObject::bindBufferInReadMode(osg::State & state) function, expected prototype:\nvoid osg::PixelDataBufferObject::bindBufferInReadMode(osg::State & state)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* state_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osg::PixelDataBufferObject::bindBufferInReadMode function");
		}
		osg::State & state=*state_ptr;

		osg::PixelDataBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::PixelDataBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::PixelDataBufferObject::bindBufferInReadMode(osg::State &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->bindBufferInReadMode(state);

		return 0;
	}

	// void osg::PixelDataBufferObject::bindBufferInWriteMode(osg::State & state)
	static int _bind_bindBufferInWriteMode(lua_State *L) {
		if (!_lg_typecheck_bindBufferInWriteMode(L)) {
			luaL_error(L, "luna typecheck failed in void osg::PixelDataBufferObject::bindBufferInWriteMode(osg::State & state) function, expected prototype:\nvoid osg::PixelDataBufferObject::bindBufferInWriteMode(osg::State & state)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* state_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osg::PixelDataBufferObject::bindBufferInWriteMode function");
		}
		osg::State & state=*state_ptr;

		osg::PixelDataBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::PixelDataBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::PixelDataBufferObject::bindBufferInWriteMode(osg::State &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->bindBufferInWriteMode(state);

		return 0;
	}

	// void osg::PixelDataBufferObject::unbindBuffer(unsigned int contextID) const
	static int _bind_unbindBuffer(lua_State *L) {
		if (!_lg_typecheck_unbindBuffer(L)) {
			luaL_error(L, "luna typecheck failed in void osg::PixelDataBufferObject::unbindBuffer(unsigned int contextID) const function, expected prototype:\nvoid osg::PixelDataBufferObject::unbindBuffer(unsigned int contextID) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,2);

		osg::PixelDataBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::PixelDataBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::PixelDataBufferObject::unbindBuffer(unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->unbindBuffer(contextID);

		return 0;
	}

	// osg::PixelDataBufferObject::Mode osg::PixelDataBufferObject::getMode(unsigned int contextID) const
	static int _bind_getMode(lua_State *L) {
		if (!_lg_typecheck_getMode(L)) {
			luaL_error(L, "luna typecheck failed in osg::PixelDataBufferObject::Mode osg::PixelDataBufferObject::getMode(unsigned int contextID) const function, expected prototype:\nosg::PixelDataBufferObject::Mode osg::PixelDataBufferObject::getMode(unsigned int contextID) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,2);

		osg::PixelDataBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::PixelDataBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::PixelDataBufferObject::Mode osg::PixelDataBufferObject::getMode(unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::PixelDataBufferObject::Mode lret = self->getMode(contextID);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::PixelDataBufferObject::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::PixelDataBufferObject::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::PixelDataBufferObject::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::PixelDataBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::PixelDataBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::PixelDataBufferObject::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PixelDataBufferObject::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::PixelDataBufferObject::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::PixelDataBufferObject::base_setName(const std::string & name) function, expected prototype:\nvoid osg::PixelDataBufferObject::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::PixelDataBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::PixelDataBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::PixelDataBufferObject::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PixelDataBufferObject::setName(name);

		return 0;
	}

	// void osg::PixelDataBufferObject::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::PixelDataBufferObject::base_computeDataVariance() function, expected prototype:\nvoid osg::PixelDataBufferObject::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PixelDataBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::PixelDataBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::PixelDataBufferObject::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PixelDataBufferObject::computeDataVariance();

		return 0;
	}

	// void osg::PixelDataBufferObject::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::PixelDataBufferObject::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::PixelDataBufferObject::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::PixelDataBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::PixelDataBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::PixelDataBufferObject::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PixelDataBufferObject::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::PixelDataBufferObject::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::PixelDataBufferObject::base_getUserData() function, expected prototype:\nosg::Referenced * osg::PixelDataBufferObject::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PixelDataBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::PixelDataBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::PixelDataBufferObject::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->PixelDataBufferObject::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::PixelDataBufferObject::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::PixelDataBufferObject::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::PixelDataBufferObject::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PixelDataBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::PixelDataBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::PixelDataBufferObject::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->PixelDataBufferObject::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::PixelDataBufferObject::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osg::PixelDataBufferObject::base_releaseGLObjects(osg::State * state = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::PixelDataBufferObject::base_releaseGLObjects(osg::State * state = 0) const function, expected prototype:\nvoid osg::PixelDataBufferObject::base_releaseGLObjects(osg::State * state = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* state=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::PixelDataBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::PixelDataBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::PixelDataBufferObject::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PixelDataBufferObject::releaseGLObjects(state);

		return 0;
	}

	// osg::Object * osg::PixelDataBufferObject::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::PixelDataBufferObject::base_cloneType() const function, expected prototype:\nosg::Object * osg::PixelDataBufferObject::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PixelDataBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::PixelDataBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::PixelDataBufferObject::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->PixelDataBufferObject::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::PixelDataBufferObject::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::PixelDataBufferObject::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::PixelDataBufferObject::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::PixelDataBufferObject::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::PixelDataBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::PixelDataBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::PixelDataBufferObject::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->PixelDataBufferObject::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::PixelDataBufferObject::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::PixelDataBufferObject::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::PixelDataBufferObject::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::PixelDataBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::PixelDataBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::PixelDataBufferObject::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->PixelDataBufferObject::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::PixelDataBufferObject::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::PixelDataBufferObject::base_libraryName() const function, expected prototype:\nconst char * osg::PixelDataBufferObject::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PixelDataBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::PixelDataBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::PixelDataBufferObject::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->PixelDataBufferObject::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::PixelDataBufferObject::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::PixelDataBufferObject::base_className() const function, expected prototype:\nconst char * osg::PixelDataBufferObject::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PixelDataBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::PixelDataBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::PixelDataBufferObject::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->PixelDataBufferObject::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::PixelDataBufferObject::base_compileBuffer(osg::State & state) const
	static int _bind_base_compileBuffer(lua_State *L) {
		if (!_lg_typecheck_base_compileBuffer(L)) {
			luaL_error(L, "luna typecheck failed in void osg::PixelDataBufferObject::base_compileBuffer(osg::State & state) const function, expected prototype:\nvoid osg::PixelDataBufferObject::base_compileBuffer(osg::State & state) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* state_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osg::PixelDataBufferObject::base_compileBuffer function");
		}
		osg::State & state=*state_ptr;

		osg::PixelDataBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::PixelDataBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::PixelDataBufferObject::base_compileBuffer(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PixelDataBufferObject::compileBuffer(state);

		return 0;
	}

	// void osg::PixelDataBufferObject::base_bindBufferInReadMode(osg::State & state)
	static int _bind_base_bindBufferInReadMode(lua_State *L) {
		if (!_lg_typecheck_base_bindBufferInReadMode(L)) {
			luaL_error(L, "luna typecheck failed in void osg::PixelDataBufferObject::base_bindBufferInReadMode(osg::State & state) function, expected prototype:\nvoid osg::PixelDataBufferObject::base_bindBufferInReadMode(osg::State & state)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* state_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osg::PixelDataBufferObject::base_bindBufferInReadMode function");
		}
		osg::State & state=*state_ptr;

		osg::PixelDataBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::PixelDataBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::PixelDataBufferObject::base_bindBufferInReadMode(osg::State &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PixelDataBufferObject::bindBufferInReadMode(state);

		return 0;
	}

	// void osg::PixelDataBufferObject::base_bindBufferInWriteMode(osg::State & state)
	static int _bind_base_bindBufferInWriteMode(lua_State *L) {
		if (!_lg_typecheck_base_bindBufferInWriteMode(L)) {
			luaL_error(L, "luna typecheck failed in void osg::PixelDataBufferObject::base_bindBufferInWriteMode(osg::State & state) function, expected prototype:\nvoid osg::PixelDataBufferObject::base_bindBufferInWriteMode(osg::State & state)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* state_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osg::PixelDataBufferObject::base_bindBufferInWriteMode function");
		}
		osg::State & state=*state_ptr;

		osg::PixelDataBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::PixelDataBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::PixelDataBufferObject::base_bindBufferInWriteMode(osg::State &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PixelDataBufferObject::bindBufferInWriteMode(state);

		return 0;
	}

	// void osg::PixelDataBufferObject::base_unbindBuffer(unsigned int contextID) const
	static int _bind_base_unbindBuffer(lua_State *L) {
		if (!_lg_typecheck_base_unbindBuffer(L)) {
			luaL_error(L, "luna typecheck failed in void osg::PixelDataBufferObject::base_unbindBuffer(unsigned int contextID) const function, expected prototype:\nvoid osg::PixelDataBufferObject::base_unbindBuffer(unsigned int contextID) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,2);

		osg::PixelDataBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::PixelDataBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::PixelDataBufferObject::base_unbindBuffer(unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PixelDataBufferObject::unbindBuffer(contextID);

		return 0;
	}


	// Operator binds:

};

osg::PixelDataBufferObject* LunaTraits< osg::PixelDataBufferObject >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_PixelDataBufferObject::_bind_ctor(L);
}

void LunaTraits< osg::PixelDataBufferObject >::_bind_dtor(osg::PixelDataBufferObject* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::PixelDataBufferObject >::className[] = "PixelDataBufferObject";
const char LunaTraits< osg::PixelDataBufferObject >::fullName[] = "osg::PixelDataBufferObject";
const char LunaTraits< osg::PixelDataBufferObject >::moduleName[] = "osg";
const char* LunaTraits< osg::PixelDataBufferObject >::parents[] = {"osg.BufferObject", 0};
const int LunaTraits< osg::PixelDataBufferObject >::hash = 74197586;
const int LunaTraits< osg::PixelDataBufferObject >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::PixelDataBufferObject >::methods[] = {
	{"cloneType", &luna_wrapper_osg_PixelDataBufferObject::_bind_cloneType},
	{"clone", &luna_wrapper_osg_PixelDataBufferObject::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_PixelDataBufferObject::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_PixelDataBufferObject::_bind_libraryName},
	{"className", &luna_wrapper_osg_PixelDataBufferObject::_bind_className},
	{"setDataSize", &luna_wrapper_osg_PixelDataBufferObject::_bind_setDataSize},
	{"getDataSize", &luna_wrapper_osg_PixelDataBufferObject::_bind_getDataSize},
	{"compileBuffer", &luna_wrapper_osg_PixelDataBufferObject::_bind_compileBuffer},
	{"bindBufferInReadMode", &luna_wrapper_osg_PixelDataBufferObject::_bind_bindBufferInReadMode},
	{"bindBufferInWriteMode", &luna_wrapper_osg_PixelDataBufferObject::_bind_bindBufferInWriteMode},
	{"unbindBuffer", &luna_wrapper_osg_PixelDataBufferObject::_bind_unbindBuffer},
	{"getMode", &luna_wrapper_osg_PixelDataBufferObject::_bind_getMode},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_PixelDataBufferObject::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osg_PixelDataBufferObject::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_PixelDataBufferObject::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_PixelDataBufferObject::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_PixelDataBufferObject::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osg_PixelDataBufferObject::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osg_PixelDataBufferObject::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_PixelDataBufferObject::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_PixelDataBufferObject::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_PixelDataBufferObject::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_PixelDataBufferObject::_bind_base_className},
	{"base_compileBuffer", &luna_wrapper_osg_PixelDataBufferObject::_bind_base_compileBuffer},
	{"base_bindBufferInReadMode", &luna_wrapper_osg_PixelDataBufferObject::_bind_base_bindBufferInReadMode},
	{"base_bindBufferInWriteMode", &luna_wrapper_osg_PixelDataBufferObject::_bind_base_bindBufferInWriteMode},
	{"base_unbindBuffer", &luna_wrapper_osg_PixelDataBufferObject::_bind_base_unbindBuffer},
	{"fromVoid", &luna_wrapper_osg_PixelDataBufferObject::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_PixelDataBufferObject::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_PixelDataBufferObject::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::PixelDataBufferObject >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_PixelDataBufferObject::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::PixelDataBufferObject >::enumValues[] = {
	{"NONE", osg::PixelDataBufferObject::NONE},
	{"READ", osg::PixelDataBufferObject::READ},
	{"WRITE", osg::PixelDataBufferObject::WRITE},
	{0,0}
};



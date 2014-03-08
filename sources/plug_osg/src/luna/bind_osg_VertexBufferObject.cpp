#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_VertexBufferObject.h>

class luna_wrapper_osg_VertexBufferObject {
public:
	typedef Luna< osg::VertexBufferObject > luna_t;

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

		osg::VertexBufferObject* self= (osg::VertexBufferObject*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::VertexBufferObject >::push(L,self,false);
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
		//osg::VertexBufferObject* ptr= dynamic_cast< osg::VertexBufferObject* >(Luna< osg::Referenced >::check(L,1));
		osg::VertexBufferObject* ptr= luna_caster< osg::Referenced, osg::VertexBufferObject >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::VertexBufferObject >::push(L,ptr,false);
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::VertexBufferObject >(L,1))) ) return false;
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::VertexBufferObject >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_addArray(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeArray(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setArray(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getArray_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getArray_overload_2(lua_State *L) {
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::VertexBufferObject::VertexBufferObject()
	static osg::VertexBufferObject* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::VertexBufferObject::VertexBufferObject() function, expected prototype:\nosg::VertexBufferObject::VertexBufferObject()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::VertexBufferObject();
	}

	// osg::VertexBufferObject::VertexBufferObject(const osg::VertexBufferObject & vbo, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::VertexBufferObject* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::VertexBufferObject::VertexBufferObject(const osg::VertexBufferObject & vbo, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::VertexBufferObject::VertexBufferObject(const osg::VertexBufferObject & vbo, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::VertexBufferObject* vbo_ptr=(Luna< osg::Referenced >::checkSubType< osg::VertexBufferObject >(L,1));
		if( !vbo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vbo in osg::VertexBufferObject::VertexBufferObject function");
		}
		const osg::VertexBufferObject & vbo=*vbo_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::VertexBufferObject::VertexBufferObject function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osg::VertexBufferObject(vbo, copyop);
	}

	// osg::VertexBufferObject::VertexBufferObject(lua_Table * data)
	static osg::VertexBufferObject* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::VertexBufferObject::VertexBufferObject(lua_Table * data) function, expected prototype:\nosg::VertexBufferObject::VertexBufferObject(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_VertexBufferObject(L,NULL);
	}

	// osg::VertexBufferObject::VertexBufferObject(lua_Table * data, const osg::VertexBufferObject & vbo, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::VertexBufferObject* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::VertexBufferObject::VertexBufferObject(lua_Table * data, const osg::VertexBufferObject & vbo, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::VertexBufferObject::VertexBufferObject(lua_Table * data, const osg::VertexBufferObject & vbo, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::VertexBufferObject* vbo_ptr=(Luna< osg::Referenced >::checkSubType< osg::VertexBufferObject >(L,2));
		if( !vbo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vbo in osg::VertexBufferObject::VertexBufferObject function");
		}
		const osg::VertexBufferObject & vbo=*vbo_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::VertexBufferObject::VertexBufferObject function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_VertexBufferObject(L,NULL, vbo, copyop);
	}

	// Overload binder for osg::VertexBufferObject::VertexBufferObject
	static osg::VertexBufferObject* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function VertexBufferObject, cannot match any of the overloads for function VertexBufferObject:\n  VertexBufferObject()\n  VertexBufferObject(const osg::VertexBufferObject &, const osg::CopyOp &)\n  VertexBufferObject(lua_Table *)\n  VertexBufferObject(lua_Table *, const osg::VertexBufferObject &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::VertexBufferObject::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::VertexBufferObject::cloneType() const function, expected prototype:\nosg::Object * osg::VertexBufferObject::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::VertexBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::VertexBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::VertexBufferObject::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::VertexBufferObject::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::VertexBufferObject::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::VertexBufferObject::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::VertexBufferObject::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::VertexBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::VertexBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::VertexBufferObject::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::VertexBufferObject::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::VertexBufferObject::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::VertexBufferObject::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::VertexBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::VertexBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::VertexBufferObject::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::VertexBufferObject::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::VertexBufferObject::libraryName() const function, expected prototype:\nconst char * osg::VertexBufferObject::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::VertexBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::VertexBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::VertexBufferObject::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::VertexBufferObject::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::VertexBufferObject::className() const function, expected prototype:\nconst char * osg::VertexBufferObject::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::VertexBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::VertexBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::VertexBufferObject::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// unsigned int osg::VertexBufferObject::addArray(osg::Array * array)
	static int _bind_addArray(lua_State *L) {
		if (!_lg_typecheck_addArray(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::VertexBufferObject::addArray(osg::Array * array) function, expected prototype:\nunsigned int osg::VertexBufferObject::addArray(osg::Array * array)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Array* array=(Luna< osg::Referenced >::checkSubType< osg::Array >(L,2));

		osg::VertexBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::VertexBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::VertexBufferObject::addArray(osg::Array *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->addArray(array);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::VertexBufferObject::removeArray(osg::Array * array)
	static int _bind_removeArray(lua_State *L) {
		if (!_lg_typecheck_removeArray(L)) {
			luaL_error(L, "luna typecheck failed in void osg::VertexBufferObject::removeArray(osg::Array * array) function, expected prototype:\nvoid osg::VertexBufferObject::removeArray(osg::Array * array)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Array* array=(Luna< osg::Referenced >::checkSubType< osg::Array >(L,2));

		osg::VertexBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::VertexBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::VertexBufferObject::removeArray(osg::Array *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->removeArray(array);

		return 0;
	}

	// void osg::VertexBufferObject::setArray(unsigned int i, osg::Array * array)
	static int _bind_setArray(lua_State *L) {
		if (!_lg_typecheck_setArray(L)) {
			luaL_error(L, "luna typecheck failed in void osg::VertexBufferObject::setArray(unsigned int i, osg::Array * array) function, expected prototype:\nvoid osg::VertexBufferObject::setArray(unsigned int i, osg::Array * array)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);
		osg::Array* array=(Luna< osg::Referenced >::checkSubType< osg::Array >(L,3));

		osg::VertexBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::VertexBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::VertexBufferObject::setArray(unsigned int, osg::Array *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setArray(i, array);

		return 0;
	}

	// osg::Array * osg::VertexBufferObject::getArray(unsigned int i)
	static int _bind_getArray_overload_1(lua_State *L) {
		if (!_lg_typecheck_getArray_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Array * osg::VertexBufferObject::getArray(unsigned int i) function, expected prototype:\nosg::Array * osg::VertexBufferObject::getArray(unsigned int i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osg::VertexBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::VertexBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Array * osg::VertexBufferObject::getArray(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Array * lret = self->getArray(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Array >::push(L,lret,false);

		return 1;
	}

	// const osg::Array * osg::VertexBufferObject::getArray(unsigned int i) const
	static int _bind_getArray_overload_2(lua_State *L) {
		if (!_lg_typecheck_getArray_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Array * osg::VertexBufferObject::getArray(unsigned int i) const function, expected prototype:\nconst osg::Array * osg::VertexBufferObject::getArray(unsigned int i) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osg::VertexBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::VertexBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Array * osg::VertexBufferObject::getArray(unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Array * lret = self->getArray(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Array >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::VertexBufferObject::getArray
	static int _bind_getArray(lua_State *L) {
		if (_lg_typecheck_getArray_overload_1(L)) return _bind_getArray_overload_1(L);
		if (_lg_typecheck_getArray_overload_2(L)) return _bind_getArray_overload_2(L);

		luaL_error(L, "error in function getArray, cannot match any of the overloads for function getArray:\n  getArray(unsigned int)\n  getArray(unsigned int)\n");
		return 0;
	}

	// void osg::VertexBufferObject::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::VertexBufferObject::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::VertexBufferObject::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::VertexBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::VertexBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::VertexBufferObject::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->VertexBufferObject::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::VertexBufferObject::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::VertexBufferObject::base_setName(const std::string & name) function, expected prototype:\nvoid osg::VertexBufferObject::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::VertexBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::VertexBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::VertexBufferObject::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->VertexBufferObject::setName(name);

		return 0;
	}

	// void osg::VertexBufferObject::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::VertexBufferObject::base_computeDataVariance() function, expected prototype:\nvoid osg::VertexBufferObject::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::VertexBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::VertexBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::VertexBufferObject::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->VertexBufferObject::computeDataVariance();

		return 0;
	}

	// void osg::VertexBufferObject::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::VertexBufferObject::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::VertexBufferObject::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::VertexBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::VertexBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::VertexBufferObject::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->VertexBufferObject::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::VertexBufferObject::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::VertexBufferObject::base_getUserData() function, expected prototype:\nosg::Referenced * osg::VertexBufferObject::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::VertexBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::VertexBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::VertexBufferObject::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->VertexBufferObject::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::VertexBufferObject::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::VertexBufferObject::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::VertexBufferObject::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::VertexBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::VertexBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::VertexBufferObject::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->VertexBufferObject::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::VertexBufferObject::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osg::VertexBufferObject::base_releaseGLObjects(osg::State * state = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::VertexBufferObject::base_releaseGLObjects(osg::State * state = 0) const function, expected prototype:\nvoid osg::VertexBufferObject::base_releaseGLObjects(osg::State * state = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* state=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::VertexBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::VertexBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::VertexBufferObject::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->VertexBufferObject::releaseGLObjects(state);

		return 0;
	}

	// osg::Object * osg::VertexBufferObject::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::VertexBufferObject::base_cloneType() const function, expected prototype:\nosg::Object * osg::VertexBufferObject::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::VertexBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::VertexBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::VertexBufferObject::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->VertexBufferObject::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::VertexBufferObject::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::VertexBufferObject::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::VertexBufferObject::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::VertexBufferObject::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::VertexBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::VertexBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::VertexBufferObject::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->VertexBufferObject::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::VertexBufferObject::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::VertexBufferObject::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::VertexBufferObject::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::VertexBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::VertexBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::VertexBufferObject::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->VertexBufferObject::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::VertexBufferObject::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::VertexBufferObject::base_libraryName() const function, expected prototype:\nconst char * osg::VertexBufferObject::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::VertexBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::VertexBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::VertexBufferObject::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->VertexBufferObject::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::VertexBufferObject::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::VertexBufferObject::base_className() const function, expected prototype:\nconst char * osg::VertexBufferObject::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::VertexBufferObject* self=Luna< osg::Referenced >::checkSubType< osg::VertexBufferObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::VertexBufferObject::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->VertexBufferObject::className();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

osg::VertexBufferObject* LunaTraits< osg::VertexBufferObject >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_VertexBufferObject::_bind_ctor(L);
}

void LunaTraits< osg::VertexBufferObject >::_bind_dtor(osg::VertexBufferObject* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::VertexBufferObject >::className[] = "VertexBufferObject";
const char LunaTraits< osg::VertexBufferObject >::fullName[] = "osg::VertexBufferObject";
const char LunaTraits< osg::VertexBufferObject >::moduleName[] = "osg";
const char* LunaTraits< osg::VertexBufferObject >::parents[] = {"osg.BufferObject", 0};
const int LunaTraits< osg::VertexBufferObject >::hash = 70709163;
const int LunaTraits< osg::VertexBufferObject >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::VertexBufferObject >::methods[] = {
	{"cloneType", &luna_wrapper_osg_VertexBufferObject::_bind_cloneType},
	{"clone", &luna_wrapper_osg_VertexBufferObject::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_VertexBufferObject::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_VertexBufferObject::_bind_libraryName},
	{"className", &luna_wrapper_osg_VertexBufferObject::_bind_className},
	{"addArray", &luna_wrapper_osg_VertexBufferObject::_bind_addArray},
	{"removeArray", &luna_wrapper_osg_VertexBufferObject::_bind_removeArray},
	{"setArray", &luna_wrapper_osg_VertexBufferObject::_bind_setArray},
	{"getArray", &luna_wrapper_osg_VertexBufferObject::_bind_getArray},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_VertexBufferObject::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osg_VertexBufferObject::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_VertexBufferObject::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_VertexBufferObject::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_VertexBufferObject::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osg_VertexBufferObject::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osg_VertexBufferObject::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_VertexBufferObject::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_VertexBufferObject::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_VertexBufferObject::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_VertexBufferObject::_bind_base_className},
	{"fromVoid", &luna_wrapper_osg_VertexBufferObject::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_VertexBufferObject::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_VertexBufferObject::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::VertexBufferObject >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_VertexBufferObject::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::VertexBufferObject >::enumValues[] = {
	{0,0}
};



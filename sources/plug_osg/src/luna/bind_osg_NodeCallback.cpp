#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_NodeCallback.h>

class luna_wrapper_osg_NodeCallback {
public:
	typedef Luna< osg::NodeCallback > luna_t;

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

		osg::NodeCallback* self= (osg::NodeCallback*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::NodeCallback >::push(L,self,false);
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
		//osg::NodeCallback* ptr= dynamic_cast< osg::NodeCallback* >(Luna< osg::Referenced >::check(L,1));
		osg::NodeCallback* ptr= luna_caster< osg::Referenced, osg::NodeCallback >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::NodeCallback >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::NodeCallback >(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( (!(Luna< osg::CopyOp >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::NodeCallback >(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,27134364) ) return false;
		if( (!(Luna< osg::CopyOp >::check(L,3))) ) return false;
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

	inline static bool _lg_typecheck_traverse(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNestedCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNestedCallback_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNestedCallback_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_addNestedCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeNestedCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
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
	inline static bool _lg_typecheck_op_call(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}


	// Constructor binds:
	// osg::NodeCallback::NodeCallback()
	static osg::NodeCallback* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::NodeCallback::NodeCallback() function, expected prototype:\nosg::NodeCallback::NodeCallback()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::NodeCallback();
	}

	// osg::NodeCallback::NodeCallback(const osg::NodeCallback & nc, const osg::CopyOp & arg2)
	static osg::NodeCallback* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::NodeCallback::NodeCallback(const osg::NodeCallback & nc, const osg::CopyOp & arg2) function, expected prototype:\nosg::NodeCallback::NodeCallback(const osg::NodeCallback & nc, const osg::CopyOp & arg2)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::NodeCallback* nc_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeCallback >(L,1));
		if( !nc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nc in osg::NodeCallback::NodeCallback function");
		}
		const osg::NodeCallback & nc=*nc_ptr;
		const osg::CopyOp* _arg2_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osg::NodeCallback::NodeCallback function");
		}
		const osg::CopyOp & _arg2=*_arg2_ptr;

		return new osg::NodeCallback(nc, _arg2);
	}

	// osg::NodeCallback::NodeCallback(lua_Table * data)
	static osg::NodeCallback* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::NodeCallback::NodeCallback(lua_Table * data) function, expected prototype:\nosg::NodeCallback::NodeCallback(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_NodeCallback(L,NULL);
	}

	// osg::NodeCallback::NodeCallback(lua_Table * data, const osg::NodeCallback & nc, const osg::CopyOp & arg3)
	static osg::NodeCallback* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::NodeCallback::NodeCallback(lua_Table * data, const osg::NodeCallback & nc, const osg::CopyOp & arg3) function, expected prototype:\nosg::NodeCallback::NodeCallback(lua_Table * data, const osg::NodeCallback & nc, const osg::CopyOp & arg3)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::NodeCallback* nc_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeCallback >(L,2));
		if( !nc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nc in osg::NodeCallback::NodeCallback function");
		}
		const osg::NodeCallback & nc=*nc_ptr;
		const osg::CopyOp* _arg3_ptr=(Luna< osg::CopyOp >::check(L,3));
		if( !_arg3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg3 in osg::NodeCallback::NodeCallback function");
		}
		const osg::CopyOp & _arg3=*_arg3_ptr;

		return new wrapper_osg_NodeCallback(L,NULL, nc, _arg3);
	}

	// Overload binder for osg::NodeCallback::NodeCallback
	static osg::NodeCallback* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function NodeCallback, cannot match any of the overloads for function NodeCallback:\n  NodeCallback()\n  NodeCallback(const osg::NodeCallback &, const osg::CopyOp &)\n  NodeCallback(lua_Table *)\n  NodeCallback(lua_Table *, const osg::NodeCallback &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::NodeCallback::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::NodeCallback::cloneType() const function, expected prototype:\nosg::Object * osg::NodeCallback::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::NodeCallback* self=Luna< osg::Referenced >::checkSubType< osg::NodeCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::NodeCallback::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::NodeCallback::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::NodeCallback::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::NodeCallback::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::NodeCallback::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::NodeCallback* self=Luna< osg::Referenced >::checkSubType< osg::NodeCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::NodeCallback::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::NodeCallback::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::NodeCallback::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::NodeCallback::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::NodeCallback* self=Luna< osg::Referenced >::checkSubType< osg::NodeCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::NodeCallback::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::NodeCallback::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::NodeCallback::libraryName() const function, expected prototype:\nconst char * osg::NodeCallback::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::NodeCallback* self=Luna< osg::Referenced >::checkSubType< osg::NodeCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::NodeCallback::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::NodeCallback::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::NodeCallback::className() const function, expected prototype:\nconst char * osg::NodeCallback::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::NodeCallback* self=Luna< osg::Referenced >::checkSubType< osg::NodeCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::NodeCallback::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::NodeCallback::traverse(osg::Node * node, osg::NodeVisitor * nv)
	static int _bind_traverse(lua_State *L) {
		if (!_lg_typecheck_traverse(L)) {
			luaL_error(L, "luna typecheck failed in void osg::NodeCallback::traverse(osg::Node * node, osg::NodeVisitor * nv) function, expected prototype:\nvoid osg::NodeCallback::traverse(osg::Node * node, osg::NodeVisitor * nv)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* node=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		osg::NodeVisitor* nv=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,3));

		osg::NodeCallback* self=Luna< osg::Referenced >::checkSubType< osg::NodeCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::NodeCallback::traverse(osg::Node *, osg::NodeVisitor *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->traverse(node, nv);

		return 0;
	}

	// void osg::NodeCallback::setNestedCallback(osg::NodeCallback * nc)
	static int _bind_setNestedCallback(lua_State *L) {
		if (!_lg_typecheck_setNestedCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osg::NodeCallback::setNestedCallback(osg::NodeCallback * nc) function, expected prototype:\nvoid osg::NodeCallback::setNestedCallback(osg::NodeCallback * nc)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeCallback* nc=(Luna< osg::Referenced >::checkSubType< osg::NodeCallback >(L,2));

		osg::NodeCallback* self=Luna< osg::Referenced >::checkSubType< osg::NodeCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::NodeCallback::setNestedCallback(osg::NodeCallback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setNestedCallback(nc);

		return 0;
	}

	// osg::NodeCallback * osg::NodeCallback::getNestedCallback()
	static int _bind_getNestedCallback_overload_1(lua_State *L) {
		if (!_lg_typecheck_getNestedCallback_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::NodeCallback * osg::NodeCallback::getNestedCallback() function, expected prototype:\nosg::NodeCallback * osg::NodeCallback::getNestedCallback()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::NodeCallback* self=Luna< osg::Referenced >::checkSubType< osg::NodeCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::NodeCallback * osg::NodeCallback::getNestedCallback(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::NodeCallback * lret = self->getNestedCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::NodeCallback >::push(L,lret,false);

		return 1;
	}

	// const osg::NodeCallback * osg::NodeCallback::getNestedCallback() const
	static int _bind_getNestedCallback_overload_2(lua_State *L) {
		if (!_lg_typecheck_getNestedCallback_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::NodeCallback * osg::NodeCallback::getNestedCallback() const function, expected prototype:\nconst osg::NodeCallback * osg::NodeCallback::getNestedCallback() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::NodeCallback* self=Luna< osg::Referenced >::checkSubType< osg::NodeCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::NodeCallback * osg::NodeCallback::getNestedCallback() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::NodeCallback * lret = self->getNestedCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::NodeCallback >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::NodeCallback::getNestedCallback
	static int _bind_getNestedCallback(lua_State *L) {
		if (_lg_typecheck_getNestedCallback_overload_1(L)) return _bind_getNestedCallback_overload_1(L);
		if (_lg_typecheck_getNestedCallback_overload_2(L)) return _bind_getNestedCallback_overload_2(L);

		luaL_error(L, "error in function getNestedCallback, cannot match any of the overloads for function getNestedCallback:\n  getNestedCallback()\n  getNestedCallback()\n");
		return 0;
	}

	// void osg::NodeCallback::addNestedCallback(osg::NodeCallback * nc)
	static int _bind_addNestedCallback(lua_State *L) {
		if (!_lg_typecheck_addNestedCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osg::NodeCallback::addNestedCallback(osg::NodeCallback * nc) function, expected prototype:\nvoid osg::NodeCallback::addNestedCallback(osg::NodeCallback * nc)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeCallback* nc=(Luna< osg::Referenced >::checkSubType< osg::NodeCallback >(L,2));

		osg::NodeCallback* self=Luna< osg::Referenced >::checkSubType< osg::NodeCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::NodeCallback::addNestedCallback(osg::NodeCallback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addNestedCallback(nc);

		return 0;
	}

	// void osg::NodeCallback::removeNestedCallback(osg::NodeCallback * nc)
	static int _bind_removeNestedCallback(lua_State *L) {
		if (!_lg_typecheck_removeNestedCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osg::NodeCallback::removeNestedCallback(osg::NodeCallback * nc) function, expected prototype:\nvoid osg::NodeCallback::removeNestedCallback(osg::NodeCallback * nc)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeCallback* nc=(Luna< osg::Referenced >::checkSubType< osg::NodeCallback >(L,2));

		osg::NodeCallback* self=Luna< osg::Referenced >::checkSubType< osg::NodeCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::NodeCallback::removeNestedCallback(osg::NodeCallback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->removeNestedCallback(nc);

		return 0;
	}

	// void osg::NodeCallback::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::NodeCallback::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::NodeCallback::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::NodeCallback* self=Luna< osg::Referenced >::checkSubType< osg::NodeCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::NodeCallback::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->NodeCallback::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::NodeCallback::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::NodeCallback::base_setName(const std::string & name) function, expected prototype:\nvoid osg::NodeCallback::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::NodeCallback* self=Luna< osg::Referenced >::checkSubType< osg::NodeCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::NodeCallback::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->NodeCallback::setName(name);

		return 0;
	}

	// void osg::NodeCallback::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::NodeCallback::base_computeDataVariance() function, expected prototype:\nvoid osg::NodeCallback::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::NodeCallback* self=Luna< osg::Referenced >::checkSubType< osg::NodeCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::NodeCallback::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->NodeCallback::computeDataVariance();

		return 0;
	}

	// void osg::NodeCallback::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::NodeCallback::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::NodeCallback::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::NodeCallback* self=Luna< osg::Referenced >::checkSubType< osg::NodeCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::NodeCallback::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->NodeCallback::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::NodeCallback::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::NodeCallback::base_getUserData() function, expected prototype:\nosg::Referenced * osg::NodeCallback::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::NodeCallback* self=Luna< osg::Referenced >::checkSubType< osg::NodeCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::NodeCallback::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->NodeCallback::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::NodeCallback::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::NodeCallback::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::NodeCallback::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::NodeCallback* self=Luna< osg::Referenced >::checkSubType< osg::NodeCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::NodeCallback::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->NodeCallback::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::NodeCallback::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osg::NodeCallback::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::NodeCallback::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::NodeCallback::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::NodeCallback* self=Luna< osg::Referenced >::checkSubType< osg::NodeCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::NodeCallback::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->NodeCallback::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osg::NodeCallback::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::NodeCallback::base_cloneType() const function, expected prototype:\nosg::Object * osg::NodeCallback::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::NodeCallback* self=Luna< osg::Referenced >::checkSubType< osg::NodeCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::NodeCallback::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->NodeCallback::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::NodeCallback::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::NodeCallback::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::NodeCallback::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::NodeCallback::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::NodeCallback* self=Luna< osg::Referenced >::checkSubType< osg::NodeCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::NodeCallback::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->NodeCallback::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::NodeCallback::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::NodeCallback::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::NodeCallback::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::NodeCallback* self=Luna< osg::Referenced >::checkSubType< osg::NodeCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::NodeCallback::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->NodeCallback::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::NodeCallback::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::NodeCallback::base_libraryName() const function, expected prototype:\nconst char * osg::NodeCallback::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::NodeCallback* self=Luna< osg::Referenced >::checkSubType< osg::NodeCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::NodeCallback::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->NodeCallback::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::NodeCallback::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::NodeCallback::base_className() const function, expected prototype:\nconst char * osg::NodeCallback::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::NodeCallback* self=Luna< osg::Referenced >::checkSubType< osg::NodeCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::NodeCallback::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->NodeCallback::className();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:
	// void osg::NodeCallback::operator()(osg::Node * node, osg::NodeVisitor * nv)
	static int _bind_op_call(lua_State *L) {
		if (!_lg_typecheck_op_call(L)) {
			luaL_error(L, "luna typecheck failed in void osg::NodeCallback::operator()(osg::Node * node, osg::NodeVisitor * nv) function, expected prototype:\nvoid osg::NodeCallback::operator()(osg::Node * node, osg::NodeVisitor * nv)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* node=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		osg::NodeVisitor* nv=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,3));

		osg::NodeCallback* self=Luna< osg::Referenced >::checkSubType< osg::NodeCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::NodeCallback::operator()(osg::Node *, osg::NodeVisitor *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->operator()(node, nv);

		return 0;
	}


};

osg::NodeCallback* LunaTraits< osg::NodeCallback >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_NodeCallback::_bind_ctor(L);
}

void LunaTraits< osg::NodeCallback >::_bind_dtor(osg::NodeCallback* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::NodeCallback >::className[] = "NodeCallback";
const char LunaTraits< osg::NodeCallback >::fullName[] = "osg::NodeCallback";
const char LunaTraits< osg::NodeCallback >::moduleName[] = "osg";
const char* LunaTraits< osg::NodeCallback >::parents[] = {"osg.Object", 0};
const int LunaTraits< osg::NodeCallback >::hash = 82979481;
const int LunaTraits< osg::NodeCallback >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::NodeCallback >::methods[] = {
	{"cloneType", &luna_wrapper_osg_NodeCallback::_bind_cloneType},
	{"clone", &luna_wrapper_osg_NodeCallback::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_NodeCallback::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_NodeCallback::_bind_libraryName},
	{"className", &luna_wrapper_osg_NodeCallback::_bind_className},
	{"traverse", &luna_wrapper_osg_NodeCallback::_bind_traverse},
	{"setNestedCallback", &luna_wrapper_osg_NodeCallback::_bind_setNestedCallback},
	{"getNestedCallback", &luna_wrapper_osg_NodeCallback::_bind_getNestedCallback},
	{"addNestedCallback", &luna_wrapper_osg_NodeCallback::_bind_addNestedCallback},
	{"removeNestedCallback", &luna_wrapper_osg_NodeCallback::_bind_removeNestedCallback},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_NodeCallback::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osg_NodeCallback::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_NodeCallback::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_NodeCallback::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_NodeCallback::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osg_NodeCallback::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osg_NodeCallback::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_NodeCallback::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_NodeCallback::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_NodeCallback::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_NodeCallback::_bind_base_className},
	{"op_call", &luna_wrapper_osg_NodeCallback::_bind_op_call},
	{"fromVoid", &luna_wrapper_osg_NodeCallback::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_NodeCallback::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_NodeCallback::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::NodeCallback >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_NodeCallback::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::NodeCallback >::enumValues[] = {
	{0,0}
};



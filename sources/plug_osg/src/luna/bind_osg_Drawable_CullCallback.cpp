#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_Drawable_CullCallback.h>

class luna_wrapper_osg_Drawable_CullCallback {
public:
	typedef Luna< osg::Drawable::CullCallback > luna_t;

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

		osg::Drawable::CullCallback* self= (osg::Drawable::CullCallback*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::Drawable::CullCallback >::push(L,self,false);
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
		//osg::Drawable::CullCallback* ptr= dynamic_cast< osg::Drawable::CullCallback* >(Luna< osg::Referenced >::check(L,1));
		osg::Drawable::CullCallback* ptr= luna_caster< osg::Referenced, osg::Drawable::CullCallback >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::Drawable::CullCallback >::push(L,ptr,false);
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Drawable::CullCallback >(L,1))) ) return false;
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Drawable::CullCallback >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_cull_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2)) ) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,3)) ) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		if( (lua_isnil(L,4)==0 && !(Luna< osg::Referenced >::checkSubType< osg::State >(L,4)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_cull_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2)) ) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,3)) ) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,2286263)) ) return false;
		if( (lua_isnil(L,4)==0 && !(Luna< osg::RenderInfo >::check(L,4)) ) ) return false;
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

	inline static bool _lg_typecheck_base_cull_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2)) ) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,3)) ) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		if( (lua_isnil(L,4)==0 && !(Luna< osg::Referenced >::checkSubType< osg::State >(L,4)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_cull_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2)) ) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,3)) ) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,2286263)) ) return false;
		if( (lua_isnil(L,4)==0 && !(Luna< osg::RenderInfo >::check(L,4)) ) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::Drawable::CullCallback::CullCallback()
	static osg::Drawable::CullCallback* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Drawable::CullCallback::CullCallback() function, expected prototype:\nosg::Drawable::CullCallback::CullCallback()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::Drawable::CullCallback();
	}

	// osg::Drawable::CullCallback::CullCallback(const osg::Drawable::CullCallback & arg1, const osg::CopyOp & arg2)
	static osg::Drawable::CullCallback* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Drawable::CullCallback::CullCallback(const osg::Drawable::CullCallback & arg1, const osg::CopyOp & arg2) function, expected prototype:\nosg::Drawable::CullCallback::CullCallback(const osg::Drawable::CullCallback & arg1, const osg::CopyOp & arg2)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Drawable::CullCallback* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::Drawable::CullCallback >(L,1));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Drawable::CullCallback::CullCallback function");
		}
		const osg::Drawable::CullCallback & _arg1=*_arg1_ptr;
		const osg::CopyOp* _arg2_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osg::Drawable::CullCallback::CullCallback function");
		}
		const osg::CopyOp & _arg2=*_arg2_ptr;

		return new osg::Drawable::CullCallback(_arg1, _arg2);
	}

	// osg::Drawable::CullCallback::CullCallback(lua_Table * data)
	static osg::Drawable::CullCallback* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::Drawable::CullCallback::CullCallback(lua_Table * data) function, expected prototype:\nosg::Drawable::CullCallback::CullCallback(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_Drawable_CullCallback(L,NULL);
	}

	// osg::Drawable::CullCallback::CullCallback(lua_Table * data, const osg::Drawable::CullCallback & arg2, const osg::CopyOp & arg3)
	static osg::Drawable::CullCallback* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::Drawable::CullCallback::CullCallback(lua_Table * data, const osg::Drawable::CullCallback & arg2, const osg::CopyOp & arg3) function, expected prototype:\nosg::Drawable::CullCallback::CullCallback(lua_Table * data, const osg::Drawable::CullCallback & arg2, const osg::CopyOp & arg3)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Drawable::CullCallback* _arg2_ptr=(Luna< osg::Referenced >::checkSubType< osg::Drawable::CullCallback >(L,2));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osg::Drawable::CullCallback::CullCallback function");
		}
		const osg::Drawable::CullCallback & _arg2=*_arg2_ptr;
		const osg::CopyOp* _arg3_ptr=(Luna< osg::CopyOp >::check(L,3));
		if( !_arg3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg3 in osg::Drawable::CullCallback::CullCallback function");
		}
		const osg::CopyOp & _arg3=*_arg3_ptr;

		return new wrapper_osg_Drawable_CullCallback(L,NULL, _arg2, _arg3);
	}

	// Overload binder for osg::Drawable::CullCallback::CullCallback
	static osg::Drawable::CullCallback* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function CullCallback, cannot match any of the overloads for function CullCallback:\n  CullCallback()\n  CullCallback(const osg::Drawable::CullCallback &, const osg::CopyOp &)\n  CullCallback(lua_Table *)\n  CullCallback(lua_Table *, const osg::Drawable::CullCallback &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::Drawable::CullCallback::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Drawable::CullCallback::cloneType() const function, expected prototype:\nosg::Object * osg::Drawable::CullCallback::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Drawable::CullCallback* self=Luna< osg::Referenced >::checkSubType< osg::Drawable::CullCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Drawable::CullCallback::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Drawable::CullCallback::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Drawable::CullCallback::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::Drawable::CullCallback::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Drawable::CullCallback::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::Drawable::CullCallback* self=Luna< osg::Referenced >::checkSubType< osg::Drawable::CullCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Drawable::CullCallback::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::Drawable::CullCallback::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Drawable::CullCallback::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Drawable::CullCallback::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::Drawable::CullCallback* self=Luna< osg::Referenced >::checkSubType< osg::Drawable::CullCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Drawable::CullCallback::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Drawable::CullCallback::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Drawable::CullCallback::libraryName() const function, expected prototype:\nconst char * osg::Drawable::CullCallback::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Drawable::CullCallback* self=Luna< osg::Referenced >::checkSubType< osg::Drawable::CullCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Drawable::CullCallback::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Drawable::CullCallback::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Drawable::CullCallback::className() const function, expected prototype:\nconst char * osg::Drawable::CullCallback::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Drawable::CullCallback* self=Luna< osg::Referenced >::checkSubType< osg::Drawable::CullCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Drawable::CullCallback::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// bool osg::Drawable::CullCallback::cull(osg::NodeVisitor * arg1, osg::Drawable * arg2, osg::State * arg3) const
	static int _bind_cull_overload_1(lua_State *L) {
		if (!_lg_typecheck_cull_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Drawable::CullCallback::cull(osg::NodeVisitor * arg1, osg::Drawable * arg2, osg::State * arg3) const function, expected prototype:\nbool osg::Drawable::CullCallback::cull(osg::NodeVisitor * arg1, osg::Drawable * arg2, osg::State * arg3) const\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* _arg1=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		osg::Drawable* _arg2=(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,3));
		osg::State* _arg3=(Luna< osg::Referenced >::checkSubType< osg::State >(L,4));

		osg::Drawable::CullCallback* self=Luna< osg::Referenced >::checkSubType< osg::Drawable::CullCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Drawable::CullCallback::cull(osg::NodeVisitor *, osg::Drawable *, osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->cull(_arg1, _arg2, _arg3);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Drawable::CullCallback::cull(osg::NodeVisitor * nv, osg::Drawable * drawable, osg::RenderInfo * renderInfo) const
	static int _bind_cull_overload_2(lua_State *L) {
		if (!_lg_typecheck_cull_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Drawable::CullCallback::cull(osg::NodeVisitor * nv, osg::Drawable * drawable, osg::RenderInfo * renderInfo) const function, expected prototype:\nbool osg::Drawable::CullCallback::cull(osg::NodeVisitor * nv, osg::Drawable * drawable, osg::RenderInfo * renderInfo) const\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\narg 3 ID = 2286263\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		osg::Drawable* drawable=(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,3));
		osg::RenderInfo* renderInfo=(Luna< osg::RenderInfo >::check(L,4));

		osg::Drawable::CullCallback* self=Luna< osg::Referenced >::checkSubType< osg::Drawable::CullCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Drawable::CullCallback::cull(osg::NodeVisitor *, osg::Drawable *, osg::RenderInfo *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->cull(nv, drawable, renderInfo);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for osg::Drawable::CullCallback::cull
	static int _bind_cull(lua_State *L) {
		if (_lg_typecheck_cull_overload_1(L)) return _bind_cull_overload_1(L);
		if (_lg_typecheck_cull_overload_2(L)) return _bind_cull_overload_2(L);

		luaL_error(L, "error in function cull, cannot match any of the overloads for function cull:\n  cull(osg::NodeVisitor *, osg::Drawable *, osg::State *)\n  cull(osg::NodeVisitor *, osg::Drawable *, osg::RenderInfo *)\n");
		return 0;
	}

	// void osg::Drawable::CullCallback::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Drawable::CullCallback::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::Drawable::CullCallback::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::Drawable::CullCallback* self=Luna< osg::Referenced >::checkSubType< osg::Drawable::CullCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Drawable::CullCallback::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->CullCallback::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::Drawable::CullCallback::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Drawable::CullCallback::base_setName(const std::string & name) function, expected prototype:\nvoid osg::Drawable::CullCallback::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::Drawable::CullCallback* self=Luna< osg::Referenced >::checkSubType< osg::Drawable::CullCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Drawable::CullCallback::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->CullCallback::setName(name);

		return 0;
	}

	// void osg::Drawable::CullCallback::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Drawable::CullCallback::base_computeDataVariance() function, expected prototype:\nvoid osg::Drawable::CullCallback::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Drawable::CullCallback* self=Luna< osg::Referenced >::checkSubType< osg::Drawable::CullCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Drawable::CullCallback::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->CullCallback::computeDataVariance();

		return 0;
	}

	// void osg::Drawable::CullCallback::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Drawable::CullCallback::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::Drawable::CullCallback::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::Drawable::CullCallback* self=Luna< osg::Referenced >::checkSubType< osg::Drawable::CullCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Drawable::CullCallback::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->CullCallback::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::Drawable::CullCallback::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::Drawable::CullCallback::base_getUserData() function, expected prototype:\nosg::Referenced * osg::Drawable::CullCallback::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Drawable::CullCallback* self=Luna< osg::Referenced >::checkSubType< osg::Drawable::CullCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::Drawable::CullCallback::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->CullCallback::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::Drawable::CullCallback::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::Drawable::CullCallback::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::Drawable::CullCallback::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Drawable::CullCallback* self=Luna< osg::Referenced >::checkSubType< osg::Drawable::CullCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::Drawable::CullCallback::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->CullCallback::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Drawable::CullCallback::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osg::Drawable::CullCallback::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Drawable::CullCallback::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::Drawable::CullCallback::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::Drawable::CullCallback* self=Luna< osg::Referenced >::checkSubType< osg::Drawable::CullCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Drawable::CullCallback::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->CullCallback::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osg::Drawable::CullCallback::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Drawable::CullCallback::base_cloneType() const function, expected prototype:\nosg::Object * osg::Drawable::CullCallback::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Drawable::CullCallback* self=Luna< osg::Referenced >::checkSubType< osg::Drawable::CullCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Drawable::CullCallback::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->CullCallback::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Drawable::CullCallback::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Drawable::CullCallback::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::Drawable::CullCallback::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Drawable::CullCallback::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::Drawable::CullCallback* self=Luna< osg::Referenced >::checkSubType< osg::Drawable::CullCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Drawable::CullCallback::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->CullCallback::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::Drawable::CullCallback::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Drawable::CullCallback::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Drawable::CullCallback::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::Drawable::CullCallback* self=Luna< osg::Referenced >::checkSubType< osg::Drawable::CullCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Drawable::CullCallback::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->CullCallback::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Drawable::CullCallback::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Drawable::CullCallback::base_libraryName() const function, expected prototype:\nconst char * osg::Drawable::CullCallback::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Drawable::CullCallback* self=Luna< osg::Referenced >::checkSubType< osg::Drawable::CullCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Drawable::CullCallback::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->CullCallback::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Drawable::CullCallback::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Drawable::CullCallback::base_className() const function, expected prototype:\nconst char * osg::Drawable::CullCallback::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Drawable::CullCallback* self=Luna< osg::Referenced >::checkSubType< osg::Drawable::CullCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Drawable::CullCallback::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->CullCallback::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// bool osg::Drawable::CullCallback::base_cull(osg::NodeVisitor * arg1, osg::Drawable * arg2, osg::State * arg3) const
	static int _bind_base_cull_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_cull_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Drawable::CullCallback::base_cull(osg::NodeVisitor * arg1, osg::Drawable * arg2, osg::State * arg3) const function, expected prototype:\nbool osg::Drawable::CullCallback::base_cull(osg::NodeVisitor * arg1, osg::Drawable * arg2, osg::State * arg3) const\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* _arg1=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		osg::Drawable* _arg2=(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,3));
		osg::State* _arg3=(Luna< osg::Referenced >::checkSubType< osg::State >(L,4));

		osg::Drawable::CullCallback* self=Luna< osg::Referenced >::checkSubType< osg::Drawable::CullCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Drawable::CullCallback::base_cull(osg::NodeVisitor *, osg::Drawable *, osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->CullCallback::cull(_arg1, _arg2, _arg3);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Drawable::CullCallback::base_cull(osg::NodeVisitor * nv, osg::Drawable * drawable, osg::RenderInfo * renderInfo) const
	static int _bind_base_cull_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_cull_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Drawable::CullCallback::base_cull(osg::NodeVisitor * nv, osg::Drawable * drawable, osg::RenderInfo * renderInfo) const function, expected prototype:\nbool osg::Drawable::CullCallback::base_cull(osg::NodeVisitor * nv, osg::Drawable * drawable, osg::RenderInfo * renderInfo) const\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\narg 3 ID = 2286263\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		osg::Drawable* drawable=(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,3));
		osg::RenderInfo* renderInfo=(Luna< osg::RenderInfo >::check(L,4));

		osg::Drawable::CullCallback* self=Luna< osg::Referenced >::checkSubType< osg::Drawable::CullCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Drawable::CullCallback::base_cull(osg::NodeVisitor *, osg::Drawable *, osg::RenderInfo *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->CullCallback::cull(nv, drawable, renderInfo);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for osg::Drawable::CullCallback::base_cull
	static int _bind_base_cull(lua_State *L) {
		if (_lg_typecheck_base_cull_overload_1(L)) return _bind_base_cull_overload_1(L);
		if (_lg_typecheck_base_cull_overload_2(L)) return _bind_base_cull_overload_2(L);

		luaL_error(L, "error in function base_cull, cannot match any of the overloads for function base_cull:\n  base_cull(osg::NodeVisitor *, osg::Drawable *, osg::State *)\n  base_cull(osg::NodeVisitor *, osg::Drawable *, osg::RenderInfo *)\n");
		return 0;
	}


	// Operator binds:

};

osg::Drawable::CullCallback* LunaTraits< osg::Drawable::CullCallback >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Drawable_CullCallback::_bind_ctor(L);
}

void LunaTraits< osg::Drawable::CullCallback >::_bind_dtor(osg::Drawable::CullCallback* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::Drawable::CullCallback >::className[] = "Drawable_CullCallback";
const char LunaTraits< osg::Drawable::CullCallback >::fullName[] = "osg::Drawable::CullCallback";
const char LunaTraits< osg::Drawable::CullCallback >::moduleName[] = "osg";
const char* LunaTraits< osg::Drawable::CullCallback >::parents[] = {"osg.Object", 0};
const int LunaTraits< osg::Drawable::CullCallback >::hash = 93939871;
const int LunaTraits< osg::Drawable::CullCallback >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::Drawable::CullCallback >::methods[] = {
	{"cloneType", &luna_wrapper_osg_Drawable_CullCallback::_bind_cloneType},
	{"clone", &luna_wrapper_osg_Drawable_CullCallback::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_Drawable_CullCallback::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_Drawable_CullCallback::_bind_libraryName},
	{"className", &luna_wrapper_osg_Drawable_CullCallback::_bind_className},
	{"cull", &luna_wrapper_osg_Drawable_CullCallback::_bind_cull},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_Drawable_CullCallback::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osg_Drawable_CullCallback::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_Drawable_CullCallback::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_Drawable_CullCallback::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_Drawable_CullCallback::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osg_Drawable_CullCallback::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osg_Drawable_CullCallback::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_Drawable_CullCallback::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_Drawable_CullCallback::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_Drawable_CullCallback::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_Drawable_CullCallback::_bind_base_className},
	{"base_cull", &luna_wrapper_osg_Drawable_CullCallback::_bind_base_cull},
	{"fromVoid", &luna_wrapper_osg_Drawable_CullCallback::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_Drawable_CullCallback::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_Drawable_CullCallback::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Drawable::CullCallback >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_Drawable_CullCallback::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Drawable::CullCallback >::enumValues[] = {
	{0,0}
};



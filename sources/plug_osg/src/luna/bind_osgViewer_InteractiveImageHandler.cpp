#include <plug_common.h>

#include <luna/wrappers/wrapper_osgViewer_InteractiveImageHandler.h>

class luna_wrapper_osgViewer_InteractiveImageHandler {
public:
	typedef Luna< osgViewer::InteractiveImageHandler > luna_t;

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

		osgViewer::InteractiveImageHandler* self= (osgViewer::InteractiveImageHandler*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgViewer::InteractiveImageHandler >::push(L,self,false);
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
		//osgViewer::InteractiveImageHandler* ptr= dynamic_cast< osgViewer::InteractiveImageHandler* >(Luna< osg::Referenced >::check(L,1));
		osgViewer::InteractiveImageHandler* ptr= luna_caster< osg::Referenced, osgViewer::InteractiveImageHandler >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgViewer::InteractiveImageHandler >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Image >(L,1)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Image >(L,1)) ) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Texture2D >(L,2)) ) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Camera >(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Image >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Image >(L,2)) ) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Texture2D >(L,3)) ) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		if( (lua_isnil(L,4)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Camera >(L,4)) ) ) return false;
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

	inline static bool _lg_typecheck_handle(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,85302998) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_cull(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,2286263)) ) return false;
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

	inline static bool _lg_typecheck_base_event(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getUsage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
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

	inline static bool _lg_typecheck_base_handle(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,85302998) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_cull(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,2286263)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgViewer::InteractiveImageHandler::InteractiveImageHandler(osg::Image * image)
	static osgViewer::InteractiveImageHandler* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgViewer::InteractiveImageHandler::InteractiveImageHandler(osg::Image * image) function, expected prototype:\nosgViewer::InteractiveImageHandler::InteractiveImageHandler(osg::Image * image)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Image* image=(Luna< osg::Referenced >::checkSubType< osg::Image >(L,1));

		return new osgViewer::InteractiveImageHandler(image);
	}

	// osgViewer::InteractiveImageHandler::InteractiveImageHandler(osg::Image * image, osg::Texture2D * texture, osg::Camera * camera)
	static osgViewer::InteractiveImageHandler* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgViewer::InteractiveImageHandler::InteractiveImageHandler(osg::Image * image, osg::Texture2D * texture, osg::Camera * camera) function, expected prototype:\nosgViewer::InteractiveImageHandler::InteractiveImageHandler(osg::Image * image, osg::Texture2D * texture, osg::Camera * camera)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Image* image=(Luna< osg::Referenced >::checkSubType< osg::Image >(L,1));
		osg::Texture2D* texture=(Luna< osg::Referenced >::checkSubType< osg::Texture2D >(L,2));
		osg::Camera* camera=(Luna< osg::Referenced >::checkSubType< osg::Camera >(L,3));

		return new osgViewer::InteractiveImageHandler(image, texture, camera);
	}

	// osgViewer::InteractiveImageHandler::InteractiveImageHandler(lua_Table * data, osg::Image * image)
	static osgViewer::InteractiveImageHandler* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osgViewer::InteractiveImageHandler::InteractiveImageHandler(lua_Table * data, osg::Image * image) function, expected prototype:\nosgViewer::InteractiveImageHandler::InteractiveImageHandler(lua_Table * data, osg::Image * image)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Image* image=(Luna< osg::Referenced >::checkSubType< osg::Image >(L,2));

		return new wrapper_osgViewer_InteractiveImageHandler(L,NULL, image);
	}

	// osgViewer::InteractiveImageHandler::InteractiveImageHandler(lua_Table * data, osg::Image * image, osg::Texture2D * texture, osg::Camera * camera)
	static osgViewer::InteractiveImageHandler* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osgViewer::InteractiveImageHandler::InteractiveImageHandler(lua_Table * data, osg::Image * image, osg::Texture2D * texture, osg::Camera * camera) function, expected prototype:\nosgViewer::InteractiveImageHandler::InteractiveImageHandler(lua_Table * data, osg::Image * image, osg::Texture2D * texture, osg::Camera * camera)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 50169651\narg 4 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Image* image=(Luna< osg::Referenced >::checkSubType< osg::Image >(L,2));
		osg::Texture2D* texture=(Luna< osg::Referenced >::checkSubType< osg::Texture2D >(L,3));
		osg::Camera* camera=(Luna< osg::Referenced >::checkSubType< osg::Camera >(L,4));

		return new wrapper_osgViewer_InteractiveImageHandler(L,NULL, image, texture, camera);
	}

	// Overload binder for osgViewer::InteractiveImageHandler::InteractiveImageHandler
	static osgViewer::InteractiveImageHandler* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function InteractiveImageHandler, cannot match any of the overloads for function InteractiveImageHandler:\n  InteractiveImageHandler(osg::Image *)\n  InteractiveImageHandler(osg::Image *, osg::Texture2D *, osg::Camera *)\n  InteractiveImageHandler(lua_Table *, osg::Image *)\n  InteractiveImageHandler(lua_Table *, osg::Image *, osg::Texture2D *, osg::Camera *)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osgViewer::InteractiveImageHandler::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgViewer::InteractiveImageHandler::cloneType() const function, expected prototype:\nosg::Object * osgViewer::InteractiveImageHandler::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::InteractiveImageHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::InteractiveImageHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgViewer::InteractiveImageHandler::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgViewer::InteractiveImageHandler::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgViewer::InteractiveImageHandler::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgViewer::InteractiveImageHandler::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgViewer::InteractiveImageHandler::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgViewer::InteractiveImageHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::InteractiveImageHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgViewer::InteractiveImageHandler::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgViewer::InteractiveImageHandler::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgViewer::InteractiveImageHandler::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgViewer::InteractiveImageHandler::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgViewer::InteractiveImageHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::InteractiveImageHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgViewer::InteractiveImageHandler::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgViewer::InteractiveImageHandler::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgViewer::InteractiveImageHandler::libraryName() const function, expected prototype:\nconst char * osgViewer::InteractiveImageHandler::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::InteractiveImageHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::InteractiveImageHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgViewer::InteractiveImageHandler::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgViewer::InteractiveImageHandler::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgViewer::InteractiveImageHandler::className() const function, expected prototype:\nconst char * osgViewer::InteractiveImageHandler::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::InteractiveImageHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::InteractiveImageHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgViewer::InteractiveImageHandler::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// bool osgViewer::InteractiveImageHandler::handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & aa, osg::Object * arg3, osg::NodeVisitor * arg4)
	static int _bind_handle(lua_State *L) {
		if (!_lg_typecheck_handle(L)) {
			luaL_error(L, "luna typecheck failed in bool osgViewer::InteractiveImageHandler::handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & aa, osg::Object * arg3, osg::NodeVisitor * arg4) function, expected prototype:\nbool osgViewer::InteractiveImageHandler::handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & aa, osg::Object * arg3, osg::NodeVisitor * arg4)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\narg 3 ID = 50169651\narg 4 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgGA::GUIEventAdapter* ea_ptr=(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,2));
		if( !ea_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ea in osgViewer::InteractiveImageHandler::handle function");
		}
		const osgGA::GUIEventAdapter & ea=*ea_ptr;
		osgGA::GUIActionAdapter* aa_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !aa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aa in osgViewer::InteractiveImageHandler::handle function");
		}
		osgGA::GUIActionAdapter & aa=*aa_ptr;
		osg::Object* _arg3=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,4));
		osg::NodeVisitor* _arg4=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,5));

		osgViewer::InteractiveImageHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::InteractiveImageHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgViewer::InteractiveImageHandler::handle(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &, osg::Object *, osg::NodeVisitor *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->handle(ea, aa, _arg3, _arg4);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgViewer::InteractiveImageHandler::cull(osg::NodeVisitor * nv, osg::Drawable * drawable, osg::RenderInfo * renderInfo) const
	static int _bind_cull(lua_State *L) {
		if (!_lg_typecheck_cull(L)) {
			luaL_error(L, "luna typecheck failed in bool osgViewer::InteractiveImageHandler::cull(osg::NodeVisitor * nv, osg::Drawable * drawable, osg::RenderInfo * renderInfo) const function, expected prototype:\nbool osgViewer::InteractiveImageHandler::cull(osg::NodeVisitor * nv, osg::Drawable * drawable, osg::RenderInfo * renderInfo) const\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\narg 3 ID = 2286263\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		osg::Drawable* drawable=(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,3));
		osg::RenderInfo* renderInfo=(Luna< osg::RenderInfo >::check(L,4));

		osgViewer::InteractiveImageHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::InteractiveImageHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgViewer::InteractiveImageHandler::cull(osg::NodeVisitor *, osg::Drawable *, osg::RenderInfo *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->cull(nv, drawable, renderInfo);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgViewer::InteractiveImageHandler::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::InteractiveImageHandler::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgViewer::InteractiveImageHandler::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgViewer::InteractiveImageHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::InteractiveImageHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::InteractiveImageHandler::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->InteractiveImageHandler::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osgViewer::InteractiveImageHandler::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::InteractiveImageHandler::base_setName(const std::string & name) function, expected prototype:\nvoid osgViewer::InteractiveImageHandler::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgViewer::InteractiveImageHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::InteractiveImageHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::InteractiveImageHandler::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->InteractiveImageHandler::setName(name);

		return 0;
	}

	// void osgViewer::InteractiveImageHandler::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::InteractiveImageHandler::base_computeDataVariance() function, expected prototype:\nvoid osgViewer::InteractiveImageHandler::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::InteractiveImageHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::InteractiveImageHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::InteractiveImageHandler::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->InteractiveImageHandler::computeDataVariance();

		return 0;
	}

	// void osgViewer::InteractiveImageHandler::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::InteractiveImageHandler::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osgViewer::InteractiveImageHandler::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osgViewer::InteractiveImageHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::InteractiveImageHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::InteractiveImageHandler::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->InteractiveImageHandler::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osgViewer::InteractiveImageHandler::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osgViewer::InteractiveImageHandler::base_getUserData() function, expected prototype:\nosg::Referenced * osgViewer::InteractiveImageHandler::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::InteractiveImageHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::InteractiveImageHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osgViewer::InteractiveImageHandler::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->InteractiveImageHandler::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osgViewer::InteractiveImageHandler::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osgViewer::InteractiveImageHandler::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osgViewer::InteractiveImageHandler::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::InteractiveImageHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::InteractiveImageHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osgViewer::InteractiveImageHandler::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->InteractiveImageHandler::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgViewer::InteractiveImageHandler::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osgViewer::InteractiveImageHandler::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::InteractiveImageHandler::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osgViewer::InteractiveImageHandler::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osgViewer::InteractiveImageHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::InteractiveImageHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::InteractiveImageHandler::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->InteractiveImageHandler::releaseGLObjects(_arg1);

		return 0;
	}

	// void osgViewer::InteractiveImageHandler::base_event(osg::NodeVisitor * nv, osg::Drawable * drawable)
	static int _bind_base_event(lua_State *L) {
		if (!_lg_typecheck_base_event(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::InteractiveImageHandler::base_event(osg::NodeVisitor * nv, osg::Drawable * drawable) function, expected prototype:\nvoid osgViewer::InteractiveImageHandler::base_event(osg::NodeVisitor * nv, osg::Drawable * drawable)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		osg::Drawable* drawable=(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,3));

		osgViewer::InteractiveImageHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::InteractiveImageHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::InteractiveImageHandler::base_event(osg::NodeVisitor *, osg::Drawable *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->InteractiveImageHandler::event(nv, drawable);

		return 0;
	}

	// void osgViewer::InteractiveImageHandler::base_getUsage(osg::ApplicationUsage & arg1) const
	static int _bind_base_getUsage(lua_State *L) {
		if (!_lg_typecheck_base_getUsage(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::InteractiveImageHandler::base_getUsage(osg::ApplicationUsage & arg1) const function, expected prototype:\nvoid osgViewer::InteractiveImageHandler::base_getUsage(osg::ApplicationUsage & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ApplicationUsage* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::ApplicationUsage >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgViewer::InteractiveImageHandler::base_getUsage function");
		}
		osg::ApplicationUsage & _arg1=*_arg1_ptr;

		osgViewer::InteractiveImageHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::InteractiveImageHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::InteractiveImageHandler::base_getUsage(osg::ApplicationUsage &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->InteractiveImageHandler::getUsage(_arg1);

		return 0;
	}

	// osg::Object * osgViewer::InteractiveImageHandler::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgViewer::InteractiveImageHandler::base_cloneType() const function, expected prototype:\nosg::Object * osgViewer::InteractiveImageHandler::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::InteractiveImageHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::InteractiveImageHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgViewer::InteractiveImageHandler::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->InteractiveImageHandler::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgViewer::InteractiveImageHandler::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgViewer::InteractiveImageHandler::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgViewer::InteractiveImageHandler::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgViewer::InteractiveImageHandler::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgViewer::InteractiveImageHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::InteractiveImageHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgViewer::InteractiveImageHandler::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->InteractiveImageHandler::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgViewer::InteractiveImageHandler::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgViewer::InteractiveImageHandler::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgViewer::InteractiveImageHandler::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgViewer::InteractiveImageHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::InteractiveImageHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgViewer::InteractiveImageHandler::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->InteractiveImageHandler::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgViewer::InteractiveImageHandler::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgViewer::InteractiveImageHandler::base_libraryName() const function, expected prototype:\nconst char * osgViewer::InteractiveImageHandler::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::InteractiveImageHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::InteractiveImageHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgViewer::InteractiveImageHandler::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->InteractiveImageHandler::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgViewer::InteractiveImageHandler::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgViewer::InteractiveImageHandler::base_className() const function, expected prototype:\nconst char * osgViewer::InteractiveImageHandler::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::InteractiveImageHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::InteractiveImageHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgViewer::InteractiveImageHandler::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->InteractiveImageHandler::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// bool osgViewer::InteractiveImageHandler::base_handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & aa, osg::Object * arg3, osg::NodeVisitor * arg4)
	static int _bind_base_handle(lua_State *L) {
		if (!_lg_typecheck_base_handle(L)) {
			luaL_error(L, "luna typecheck failed in bool osgViewer::InteractiveImageHandler::base_handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & aa, osg::Object * arg3, osg::NodeVisitor * arg4) function, expected prototype:\nbool osgViewer::InteractiveImageHandler::base_handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & aa, osg::Object * arg3, osg::NodeVisitor * arg4)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\narg 3 ID = 50169651\narg 4 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgGA::GUIEventAdapter* ea_ptr=(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,2));
		if( !ea_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ea in osgViewer::InteractiveImageHandler::base_handle function");
		}
		const osgGA::GUIEventAdapter & ea=*ea_ptr;
		osgGA::GUIActionAdapter* aa_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !aa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aa in osgViewer::InteractiveImageHandler::base_handle function");
		}
		osgGA::GUIActionAdapter & aa=*aa_ptr;
		osg::Object* _arg3=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,4));
		osg::NodeVisitor* _arg4=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,5));

		osgViewer::InteractiveImageHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::InteractiveImageHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgViewer::InteractiveImageHandler::base_handle(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &, osg::Object *, osg::NodeVisitor *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->InteractiveImageHandler::handle(ea, aa, _arg3, _arg4);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgViewer::InteractiveImageHandler::base_cull(osg::NodeVisitor * nv, osg::Drawable * drawable, osg::RenderInfo * renderInfo) const
	static int _bind_base_cull(lua_State *L) {
		if (!_lg_typecheck_base_cull(L)) {
			luaL_error(L, "luna typecheck failed in bool osgViewer::InteractiveImageHandler::base_cull(osg::NodeVisitor * nv, osg::Drawable * drawable, osg::RenderInfo * renderInfo) const function, expected prototype:\nbool osgViewer::InteractiveImageHandler::base_cull(osg::NodeVisitor * nv, osg::Drawable * drawable, osg::RenderInfo * renderInfo) const\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\narg 3 ID = 2286263\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		osg::Drawable* drawable=(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,3));
		osg::RenderInfo* renderInfo=(Luna< osg::RenderInfo >::check(L,4));

		osgViewer::InteractiveImageHandler* self=Luna< osg::Referenced >::checkSubType< osgViewer::InteractiveImageHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgViewer::InteractiveImageHandler::base_cull(osg::NodeVisitor *, osg::Drawable *, osg::RenderInfo *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->InteractiveImageHandler::cull(nv, drawable, renderInfo);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

osgViewer::InteractiveImageHandler* LunaTraits< osgViewer::InteractiveImageHandler >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgViewer_InteractiveImageHandler::_bind_ctor(L);
}

void LunaTraits< osgViewer::InteractiveImageHandler >::_bind_dtor(osgViewer::InteractiveImageHandler* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgViewer::InteractiveImageHandler >::className[] = "InteractiveImageHandler";
const char LunaTraits< osgViewer::InteractiveImageHandler >::fullName[] = "osgViewer::InteractiveImageHandler";
const char LunaTraits< osgViewer::InteractiveImageHandler >::moduleName[] = "osgViewer";
const char* LunaTraits< osgViewer::InteractiveImageHandler >::parents[] = {"osgGA.GUIEventHandler", "osg.Drawable_CullCallback", 0};
const int LunaTraits< osgViewer::InteractiveImageHandler >::hash = 75863370;
const int LunaTraits< osgViewer::InteractiveImageHandler >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgViewer::InteractiveImageHandler >::methods[] = {
	{"cloneType", &luna_wrapper_osgViewer_InteractiveImageHandler::_bind_cloneType},
	{"clone", &luna_wrapper_osgViewer_InteractiveImageHandler::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osgViewer_InteractiveImageHandler::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osgViewer_InteractiveImageHandler::_bind_libraryName},
	{"className", &luna_wrapper_osgViewer_InteractiveImageHandler::_bind_className},
	{"handle", &luna_wrapper_osgViewer_InteractiveImageHandler::_bind_handle},
	{"cull", &luna_wrapper_osgViewer_InteractiveImageHandler::_bind_cull},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgViewer_InteractiveImageHandler::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osgViewer_InteractiveImageHandler::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osgViewer_InteractiveImageHandler::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osgViewer_InteractiveImageHandler::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osgViewer_InteractiveImageHandler::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osgViewer_InteractiveImageHandler::_bind_base_releaseGLObjects},
	{"base_event", &luna_wrapper_osgViewer_InteractiveImageHandler::_bind_base_event},
	{"base_getUsage", &luna_wrapper_osgViewer_InteractiveImageHandler::_bind_base_getUsage},
	{"base_cloneType", &luna_wrapper_osgViewer_InteractiveImageHandler::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osgViewer_InteractiveImageHandler::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osgViewer_InteractiveImageHandler::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osgViewer_InteractiveImageHandler::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osgViewer_InteractiveImageHandler::_bind_base_className},
	{"base_handle", &luna_wrapper_osgViewer_InteractiveImageHandler::_bind_base_handle},
	{"base_cull", &luna_wrapper_osgViewer_InteractiveImageHandler::_bind_base_cull},
	{"fromVoid", &luna_wrapper_osgViewer_InteractiveImageHandler::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgViewer_InteractiveImageHandler::_bind_asVoid},
	{"getTable", &luna_wrapper_osgViewer_InteractiveImageHandler::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgViewer::InteractiveImageHandler >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgViewer_InteractiveImageHandler::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgViewer::InteractiveImageHandler >::enumValues[] = {
	{0,0}
};



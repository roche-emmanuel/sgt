#include <plug_common.h>

#include <luna/wrappers/wrapper_osgText_FadeText.h>

class luna_wrapper_osgText_FadeText {
public:
	typedef Luna< osgText::FadeText > luna_t;

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

		osgText::FadeText* self= (osgText::FadeText*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgText::FadeText >::push(L,self,false);
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
		//osgText::FadeText* ptr= dynamic_cast< osgText::FadeText* >(Luna< osg::Referenced >::check(L,1));
		osgText::FadeText* ptr= luna_caster< osg::Referenced, osgText::FadeText >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgText::FadeText >::push(L,ptr,false);
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
		if( (!(Luna< osg::Referenced >::checkSubType< osgText::Text >(L,1))) ) return false;
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
		if( (!(Luna< osg::Referenced >::checkSubType< osgText::Text >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_setFadeSpeed(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFadeSpeed(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_drawImplementation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2286263) ) return false;
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

	inline static bool _lg_typecheck_base_computeBound(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgText::FadeText::FadeText()
	static osgText::FadeText* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgText::FadeText::FadeText() function, expected prototype:\nosgText::FadeText::FadeText()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osgText::FadeText();
	}

	// osgText::FadeText::FadeText(const osgText::Text & text, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgText::FadeText* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgText::FadeText::FadeText(const osgText::Text & text, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgText::FadeText::FadeText(const osgText::Text & text, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osgText::Text* text_ptr=(Luna< osg::Referenced >::checkSubType< osgText::Text >(L,1));
		if( !text_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg text in osgText::FadeText::FadeText function");
		}
		const osgText::Text & text=*text_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgText::FadeText::FadeText function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osgText::FadeText(text, copyop);
	}

	// osgText::FadeText::FadeText(lua_Table * data)
	static osgText::FadeText* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osgText::FadeText::FadeText(lua_Table * data) function, expected prototype:\nosgText::FadeText::FadeText(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgText_FadeText(L,NULL);
	}

	// osgText::FadeText::FadeText(lua_Table * data, const osgText::Text & text, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgText::FadeText* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osgText::FadeText::FadeText(lua_Table * data, const osgText::Text & text, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgText::FadeText::FadeText(lua_Table * data, const osgText::Text & text, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osgText::Text* text_ptr=(Luna< osg::Referenced >::checkSubType< osgText::Text >(L,2));
		if( !text_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg text in osgText::FadeText::FadeText function");
		}
		const osgText::Text & text=*text_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgText::FadeText::FadeText function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osgText_FadeText(L,NULL, text, copyop);
	}

	// Overload binder for osgText::FadeText::FadeText
	static osgText::FadeText* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function FadeText, cannot match any of the overloads for function FadeText:\n  FadeText()\n  FadeText(const osgText::Text &, const osg::CopyOp &)\n  FadeText(lua_Table *)\n  FadeText(lua_Table *, const osgText::Text &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osgText::FadeText::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgText::FadeText::cloneType() const function, expected prototype:\nosg::Object * osgText::FadeText::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::FadeText* self=Luna< osg::Referenced >::checkSubType< osgText::FadeText >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgText::FadeText::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgText::FadeText::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgText::FadeText::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgText::FadeText::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgText::FadeText::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgText::FadeText* self=Luna< osg::Referenced >::checkSubType< osgText::FadeText >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgText::FadeText::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgText::FadeText::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgText::FadeText::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgText::FadeText::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgText::FadeText* self=Luna< osg::Referenced >::checkSubType< osgText::FadeText >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgText::FadeText::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgText::FadeText::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgText::FadeText::libraryName() const function, expected prototype:\nconst char * osgText::FadeText::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::FadeText* self=Luna< osg::Referenced >::checkSubType< osgText::FadeText >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgText::FadeText::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgText::FadeText::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgText::FadeText::className() const function, expected prototype:\nconst char * osgText::FadeText::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::FadeText* self=Luna< osg::Referenced >::checkSubType< osgText::FadeText >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgText::FadeText::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgText::FadeText::setFadeSpeed(float fadeSpeed)
	static int _bind_setFadeSpeed(lua_State *L) {
		if (!_lg_typecheck_setFadeSpeed(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::FadeText::setFadeSpeed(float fadeSpeed) function, expected prototype:\nvoid osgText::FadeText::setFadeSpeed(float fadeSpeed)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float fadeSpeed=(float)lua_tonumber(L,2);

		osgText::FadeText* self=Luna< osg::Referenced >::checkSubType< osgText::FadeText >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::FadeText::setFadeSpeed(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setFadeSpeed(fadeSpeed);

		return 0;
	}

	// float osgText::FadeText::getFadeSpeed() const
	static int _bind_getFadeSpeed(lua_State *L) {
		if (!_lg_typecheck_getFadeSpeed(L)) {
			luaL_error(L, "luna typecheck failed in float osgText::FadeText::getFadeSpeed() const function, expected prototype:\nfloat osgText::FadeText::getFadeSpeed() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::FadeText* self=Luna< osg::Referenced >::checkSubType< osgText::FadeText >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgText::FadeText::getFadeSpeed() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getFadeSpeed();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgText::FadeText::drawImplementation(osg::RenderInfo & renderInfo) const
	static int _bind_drawImplementation(lua_State *L) {
		if (!_lg_typecheck_drawImplementation(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::FadeText::drawImplementation(osg::RenderInfo & renderInfo) const function, expected prototype:\nvoid osgText::FadeText::drawImplementation(osg::RenderInfo & renderInfo) const\nClass arguments details:\narg 1 ID = 2286263\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::RenderInfo* renderInfo_ptr=(Luna< osg::RenderInfo >::check(L,2));
		if( !renderInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg renderInfo in osgText::FadeText::drawImplementation function");
		}
		osg::RenderInfo & renderInfo=*renderInfo_ptr;

		osgText::FadeText* self=Luna< osg::Referenced >::checkSubType< osgText::FadeText >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::FadeText::drawImplementation(osg::RenderInfo &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->drawImplementation(renderInfo);

		return 0;
	}

	// void osgText::FadeText::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::FadeText::base_setName(const std::string & name) function, expected prototype:\nvoid osgText::FadeText::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgText::FadeText* self=Luna< osg::Referenced >::checkSubType< osgText::FadeText >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::FadeText::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->FadeText::setName(name);

		return 0;
	}

	// void osgText::FadeText::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::FadeText::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osgText::FadeText::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osgText::FadeText* self=Luna< osg::Referenced >::checkSubType< osgText::FadeText >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::FadeText::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->FadeText::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osgText::FadeText::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osgText::FadeText::base_getUserData() function, expected prototype:\nosg::Referenced * osgText::FadeText::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::FadeText* self=Luna< osg::Referenced >::checkSubType< osgText::FadeText >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osgText::FadeText::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->FadeText::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osgText::FadeText::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osgText::FadeText::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osgText::FadeText::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::FadeText* self=Luna< osg::Referenced >::checkSubType< osgText::FadeText >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osgText::FadeText::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->FadeText::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgText::FadeText::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// osg::Geometry * osgText::FadeText::base_asGeometry()
	static int _bind_base_asGeometry_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asGeometry_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Geometry * osgText::FadeText::base_asGeometry() function, expected prototype:\nosg::Geometry * osgText::FadeText::base_asGeometry()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::FadeText* self=Luna< osg::Referenced >::checkSubType< osgText::FadeText >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Geometry * osgText::FadeText::base_asGeometry(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Geometry * lret = self->FadeText::asGeometry();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geometry >::push(L,lret,false);

		return 1;
	}

	// const osg::Geometry * osgText::FadeText::base_asGeometry() const
	static int _bind_base_asGeometry_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asGeometry_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Geometry * osgText::FadeText::base_asGeometry() const function, expected prototype:\nconst osg::Geometry * osgText::FadeText::base_asGeometry() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::FadeText* self=Luna< osg::Referenced >::checkSubType< osgText::FadeText >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Geometry * osgText::FadeText::base_asGeometry() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Geometry * lret = self->FadeText::asGeometry();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geometry >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgText::FadeText::base_asGeometry
	static int _bind_base_asGeometry(lua_State *L) {
		if (_lg_typecheck_base_asGeometry_overload_1(L)) return _bind_base_asGeometry_overload_1(L);
		if (_lg_typecheck_base_asGeometry_overload_2(L)) return _bind_base_asGeometry_overload_2(L);

		luaL_error(L, "error in function base_asGeometry, cannot match any of the overloads for function base_asGeometry:\n  base_asGeometry()\n  base_asGeometry()\n");
		return 0;
	}

	// void osgText::FadeText::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::FadeText::base_computeDataVariance() function, expected prototype:\nvoid osgText::FadeText::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::FadeText* self=Luna< osg::Referenced >::checkSubType< osgText::FadeText >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::FadeText::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->FadeText::computeDataVariance();

		return 0;
	}

	// void osgText::FadeText::base_setUseVertexBufferObjects(bool flag)
	static int _bind_base_setUseVertexBufferObjects(lua_State *L) {
		if (!_lg_typecheck_base_setUseVertexBufferObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::FadeText::base_setUseVertexBufferObjects(bool flag) function, expected prototype:\nvoid osgText::FadeText::base_setUseVertexBufferObjects(bool flag)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osgText::FadeText* self=Luna< osg::Referenced >::checkSubType< osgText::FadeText >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::FadeText::base_setUseVertexBufferObjects(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->FadeText::setUseVertexBufferObjects(flag);

		return 0;
	}

	// void osgText::FadeText::base_dirtyDisplayList()
	static int _bind_base_dirtyDisplayList(lua_State *L) {
		if (!_lg_typecheck_base_dirtyDisplayList(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::FadeText::base_dirtyDisplayList() function, expected prototype:\nvoid osgText::FadeText::base_dirtyDisplayList()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::FadeText* self=Luna< osg::Referenced >::checkSubType< osgText::FadeText >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::FadeText::base_dirtyDisplayList(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->FadeText::dirtyDisplayList();

		return 0;
	}

	// unsigned int osgText::FadeText::base_getGLObjectSizeHint() const
	static int _bind_base_getGLObjectSizeHint(lua_State *L) {
		if (!_lg_typecheck_base_getGLObjectSizeHint(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osgText::FadeText::base_getGLObjectSizeHint() const function, expected prototype:\nunsigned int osgText::FadeText::base_getGLObjectSizeHint() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::FadeText* self=Luna< osg::Referenced >::checkSubType< osgText::FadeText >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osgText::FadeText::base_getGLObjectSizeHint() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->FadeText::getGLObjectSizeHint();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgText::FadeText::base_compileGLObjects(osg::RenderInfo & renderInfo) const
	static int _bind_base_compileGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_compileGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::FadeText::base_compileGLObjects(osg::RenderInfo & renderInfo) const function, expected prototype:\nvoid osgText::FadeText::base_compileGLObjects(osg::RenderInfo & renderInfo) const\nClass arguments details:\narg 1 ID = 2286263\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::RenderInfo* renderInfo_ptr=(Luna< osg::RenderInfo >::check(L,2));
		if( !renderInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg renderInfo in osgText::FadeText::base_compileGLObjects function");
		}
		osg::RenderInfo & renderInfo=*renderInfo_ptr;

		osgText::FadeText* self=Luna< osg::Referenced >::checkSubType< osgText::FadeText >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::FadeText::base_compileGLObjects(osg::RenderInfo &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->FadeText::compileGLObjects(renderInfo);

		return 0;
	}

	// void osgText::FadeText::base_setUpdateCallback(osg::Drawable::UpdateCallback * ac)
	static int _bind_base_setUpdateCallback(lua_State *L) {
		if (!_lg_typecheck_base_setUpdateCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::FadeText::base_setUpdateCallback(osg::Drawable::UpdateCallback * ac) function, expected prototype:\nvoid osgText::FadeText::base_setUpdateCallback(osg::Drawable::UpdateCallback * ac)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Drawable::UpdateCallback* ac=(Luna< osg::Referenced >::checkSubType< osg::Drawable::UpdateCallback >(L,2));

		osgText::FadeText* self=Luna< osg::Referenced >::checkSubType< osgText::FadeText >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::FadeText::base_setUpdateCallback(osg::Drawable::UpdateCallback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->FadeText::setUpdateCallback(ac);

		return 0;
	}

	// void osgText::FadeText::base_setEventCallback(osg::Drawable::EventCallback * ac)
	static int _bind_base_setEventCallback(lua_State *L) {
		if (!_lg_typecheck_base_setEventCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::FadeText::base_setEventCallback(osg::Drawable::EventCallback * ac) function, expected prototype:\nvoid osgText::FadeText::base_setEventCallback(osg::Drawable::EventCallback * ac)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Drawable::EventCallback* ac=(Luna< osg::Referenced >::checkSubType< osg::Drawable::EventCallback >(L,2));

		osgText::FadeText* self=Luna< osg::Referenced >::checkSubType< osgText::FadeText >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::FadeText::base_setEventCallback(osg::Drawable::EventCallback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->FadeText::setEventCallback(ac);

		return 0;
	}

	// void osgText::FadeText::base_setCullCallback(osg::Drawable::CullCallback * cc)
	static int _bind_base_setCullCallback(lua_State *L) {
		if (!_lg_typecheck_base_setCullCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::FadeText::base_setCullCallback(osg::Drawable::CullCallback * cc) function, expected prototype:\nvoid osgText::FadeText::base_setCullCallback(osg::Drawable::CullCallback * cc)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Drawable::CullCallback* cc=(Luna< osg::Referenced >::checkSubType< osg::Drawable::CullCallback >(L,2));

		osgText::FadeText* self=Luna< osg::Referenced >::checkSubType< osgText::FadeText >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::FadeText::base_setCullCallback(osg::Drawable::CullCallback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->FadeText::setCullCallback(cc);

		return 0;
	}

	// void osgText::FadeText::base_setDrawCallback(osg::Drawable::DrawCallback * dc)
	static int _bind_base_setDrawCallback(lua_State *L) {
		if (!_lg_typecheck_base_setDrawCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::FadeText::base_setDrawCallback(osg::Drawable::DrawCallback * dc) function, expected prototype:\nvoid osgText::FadeText::base_setDrawCallback(osg::Drawable::DrawCallback * dc)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Drawable::DrawCallback* dc=(Luna< osg::Referenced >::checkSubType< osg::Drawable::DrawCallback >(L,2));

		osgText::FadeText* self=Luna< osg::Referenced >::checkSubType< osgText::FadeText >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::FadeText::base_setDrawCallback(osg::Drawable::DrawCallback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->FadeText::setDrawCallback(dc);

		return 0;
	}

	// osg::BoundingBoxd osgText::FadeText::base_computeBound() const
	static int _bind_base_computeBound(lua_State *L) {
		if (!_lg_typecheck_base_computeBound(L)) {
			luaL_error(L, "luna typecheck failed in osg::BoundingBoxd osgText::FadeText::base_computeBound() const function, expected prototype:\nosg::BoundingBoxd osgText::FadeText::base_computeBound() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::FadeText* self=Luna< osg::Referenced >::checkSubType< osgText::FadeText >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::BoundingBoxd osgText::FadeText::base_computeBound() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::BoundingBoxd stack_lret = self->FadeText::computeBound();
		osg::BoundingBoxd* lret = new osg::BoundingBoxd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingBoxd >::push(L,lret,true);

		return 1;
	}

	// void osgText::FadeText::base_setFont(osgText::Font * font = 0)
	static int _bind_base_setFont_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_setFont_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::FadeText::base_setFont(osgText::Font * font = 0) function, expected prototype:\nvoid osgText::FadeText::base_setFont(osgText::Font * font = 0)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osgText::Font* font=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osgText::Font >(L,2)) : (osgText::Font*)0;

		osgText::FadeText* self=Luna< osg::Referenced >::checkSubType< osgText::FadeText >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::FadeText::base_setFont(osgText::Font *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->FadeText::setFont(font);

		return 0;
	}

	// void osgText::FadeText::base_setFont(const std::string & fontfile)
	static int _bind_base_setFont_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_setFont_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::FadeText::base_setFont(const std::string & fontfile) function, expected prototype:\nvoid osgText::FadeText::base_setFont(const std::string & fontfile)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string fontfile(lua_tostring(L,2),lua_objlen(L,2));

		osgText::FadeText* self=Luna< osg::Referenced >::checkSubType< osgText::FadeText >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::FadeText::base_setFont(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->FadeText::setFont(fontfile);

		return 0;
	}

	// Overload binder for osgText::FadeText::base_setFont
	static int _bind_base_setFont(lua_State *L) {
		if (_lg_typecheck_base_setFont_overload_1(L)) return _bind_base_setFont_overload_1(L);
		if (_lg_typecheck_base_setFont_overload_2(L)) return _bind_base_setFont_overload_2(L);

		luaL_error(L, "error in function base_setFont, cannot match any of the overloads for function base_setFont:\n  base_setFont(osgText::Font *)\n  base_setFont(const std::string &)\n");
		return 0;
	}

	// void osgText::FadeText::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::FadeText::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgText::FadeText::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgText::FadeText* self=Luna< osg::Referenced >::checkSubType< osgText::FadeText >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::FadeText::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->FadeText::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osgText::FadeText::base_releaseGLObjects(osg::State * state = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::FadeText::base_releaseGLObjects(osg::State * state = 0) const function, expected prototype:\nvoid osgText::FadeText::base_releaseGLObjects(osg::State * state = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* state=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osgText::FadeText* self=Luna< osg::Referenced >::checkSubType< osgText::FadeText >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::FadeText::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->FadeText::releaseGLObjects(state);

		return 0;
	}

	// osg::Object * osgText::FadeText::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgText::FadeText::base_cloneType() const function, expected prototype:\nosg::Object * osgText::FadeText::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::FadeText* self=Luna< osg::Referenced >::checkSubType< osgText::FadeText >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgText::FadeText::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->FadeText::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgText::FadeText::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgText::FadeText::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgText::FadeText::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgText::FadeText::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgText::FadeText* self=Luna< osg::Referenced >::checkSubType< osgText::FadeText >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgText::FadeText::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->FadeText::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgText::FadeText::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgText::FadeText::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgText::FadeText::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgText::FadeText* self=Luna< osg::Referenced >::checkSubType< osgText::FadeText >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgText::FadeText::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->FadeText::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgText::FadeText::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgText::FadeText::base_libraryName() const function, expected prototype:\nconst char * osgText::FadeText::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::FadeText* self=Luna< osg::Referenced >::checkSubType< osgText::FadeText >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgText::FadeText::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->FadeText::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgText::FadeText::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgText::FadeText::base_className() const function, expected prototype:\nconst char * osgText::FadeText::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::FadeText* self=Luna< osg::Referenced >::checkSubType< osgText::FadeText >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgText::FadeText::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->FadeText::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgText::FadeText::base_drawImplementation(osg::RenderInfo & renderInfo) const
	static int _bind_base_drawImplementation(lua_State *L) {
		if (!_lg_typecheck_base_drawImplementation(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::FadeText::base_drawImplementation(osg::RenderInfo & renderInfo) const function, expected prototype:\nvoid osgText::FadeText::base_drawImplementation(osg::RenderInfo & renderInfo) const\nClass arguments details:\narg 1 ID = 2286263\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::RenderInfo* renderInfo_ptr=(Luna< osg::RenderInfo >::check(L,2));
		if( !renderInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg renderInfo in osgText::FadeText::base_drawImplementation function");
		}
		osg::RenderInfo & renderInfo=*renderInfo_ptr;

		osgText::FadeText* self=Luna< osg::Referenced >::checkSubType< osgText::FadeText >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::FadeText::base_drawImplementation(osg::RenderInfo &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->FadeText::drawImplementation(renderInfo);

		return 0;
	}


	// Operator binds:

};

osgText::FadeText* LunaTraits< osgText::FadeText >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgText_FadeText::_bind_ctor(L);
}

void LunaTraits< osgText::FadeText >::_bind_dtor(osgText::FadeText* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgText::FadeText >::className[] = "FadeText";
const char LunaTraits< osgText::FadeText >::fullName[] = "osgText::FadeText";
const char LunaTraits< osgText::FadeText >::moduleName[] = "osgText";
const char* LunaTraits< osgText::FadeText >::parents[] = {"osgText.Text", 0};
const int LunaTraits< osgText::FadeText >::hash = 13187454;
const int LunaTraits< osgText::FadeText >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgText::FadeText >::methods[] = {
	{"cloneType", &luna_wrapper_osgText_FadeText::_bind_cloneType},
	{"clone", &luna_wrapper_osgText_FadeText::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osgText_FadeText::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osgText_FadeText::_bind_libraryName},
	{"className", &luna_wrapper_osgText_FadeText::_bind_className},
	{"setFadeSpeed", &luna_wrapper_osgText_FadeText::_bind_setFadeSpeed},
	{"getFadeSpeed", &luna_wrapper_osgText_FadeText::_bind_getFadeSpeed},
	{"drawImplementation", &luna_wrapper_osgText_FadeText::_bind_drawImplementation},
	{"base_setName", &luna_wrapper_osgText_FadeText::_bind_base_setName},
	{"base_setUserData", &luna_wrapper_osgText_FadeText::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osgText_FadeText::_bind_base_getUserData},
	{"base_asGeometry", &luna_wrapper_osgText_FadeText::_bind_base_asGeometry},
	{"base_computeDataVariance", &luna_wrapper_osgText_FadeText::_bind_base_computeDataVariance},
	{"base_setUseVertexBufferObjects", &luna_wrapper_osgText_FadeText::_bind_base_setUseVertexBufferObjects},
	{"base_dirtyDisplayList", &luna_wrapper_osgText_FadeText::_bind_base_dirtyDisplayList},
	{"base_getGLObjectSizeHint", &luna_wrapper_osgText_FadeText::_bind_base_getGLObjectSizeHint},
	{"base_compileGLObjects", &luna_wrapper_osgText_FadeText::_bind_base_compileGLObjects},
	{"base_setUpdateCallback", &luna_wrapper_osgText_FadeText::_bind_base_setUpdateCallback},
	{"base_setEventCallback", &luna_wrapper_osgText_FadeText::_bind_base_setEventCallback},
	{"base_setCullCallback", &luna_wrapper_osgText_FadeText::_bind_base_setCullCallback},
	{"base_setDrawCallback", &luna_wrapper_osgText_FadeText::_bind_base_setDrawCallback},
	{"base_computeBound", &luna_wrapper_osgText_FadeText::_bind_base_computeBound},
	{"base_setFont", &luna_wrapper_osgText_FadeText::_bind_base_setFont},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgText_FadeText::_bind_base_setThreadSafeRefUnref},
	{"base_releaseGLObjects", &luna_wrapper_osgText_FadeText::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osgText_FadeText::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osgText_FadeText::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osgText_FadeText::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osgText_FadeText::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osgText_FadeText::_bind_base_className},
	{"base_drawImplementation", &luna_wrapper_osgText_FadeText::_bind_base_drawImplementation},
	{"fromVoid", &luna_wrapper_osgText_FadeText::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgText_FadeText::_bind_asVoid},
	{"getTable", &luna_wrapper_osgText_FadeText::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgText::FadeText >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgText_FadeText::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgText::FadeText >::enumValues[] = {
	{0,0}
};



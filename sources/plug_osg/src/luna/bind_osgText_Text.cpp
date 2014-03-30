#include <plug_common.h>

#include <luna/wrappers/wrapper_osgText_Text.h>

class luna_wrapper_osgText_Text {
public:
	typedef Luna< osgText::Text > luna_t;

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

		osgText::Text* self= (osgText::Text*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgText::Text >::push(L,self,false);
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
		//osgText::Text* ptr= dynamic_cast< osgText::Text* >(Luna< osg::Referenced >::check(L,1));
		osgText::Text* ptr= luna_caster< osg::Referenced, osgText::Text >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgText::Text >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setFont_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osgText::Font >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFont_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setEnableDepthWrites(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getEnableDepthWrites(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setBackdropType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getBackdropType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setBackdropOffset_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setBackdropOffset_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getBackdropHorizontalOffset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getBackdropVerticalOffset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setBackdropColor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303235) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getBackdropColor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setBackdropImplementation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getBackdropImplementation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setColorGradientMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getColorGradientMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setColorGradientCorners(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303235) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303235) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,92303235) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,92303235) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getColorGradientTopLeft(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getColorGradientBottomLeft(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getColorGradientBottomRight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getColorGradientTopRight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_getGlyphQuads(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTextureGlyphQuadMap(lua_State *L) {
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

	inline static bool _lg_typecheck_base_computeBound(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_base_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_libraryName(lua_State *L) {
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgText::Text::Text()
	static osgText::Text* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgText::Text::Text() function, expected prototype:\nosgText::Text::Text()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osgText::Text();
	}

	// osgText::Text::Text(const osgText::Text & text, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgText::Text* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgText::Text::Text(const osgText::Text & text, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgText::Text::Text(const osgText::Text & text, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osgText::Text* text_ptr=(Luna< osg::Referenced >::checkSubType< osgText::Text >(L,1));
		if( !text_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg text in osgText::Text::Text function");
		}
		const osgText::Text & text=*text_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgText::Text::Text function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osgText::Text(text, copyop);
	}

	// osgText::Text::Text(lua_Table * data)
	static osgText::Text* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osgText::Text::Text(lua_Table * data) function, expected prototype:\nosgText::Text::Text(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgText_Text(L,NULL);
	}

	// osgText::Text::Text(lua_Table * data, const osgText::Text & text, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgText::Text* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osgText::Text::Text(lua_Table * data, const osgText::Text & text, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgText::Text::Text(lua_Table * data, const osgText::Text & text, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osgText::Text* text_ptr=(Luna< osg::Referenced >::checkSubType< osgText::Text >(L,2));
		if( !text_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg text in osgText::Text::Text function");
		}
		const osgText::Text & text=*text_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgText::Text::Text function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osgText_Text(L,NULL, text, copyop);
	}

	// Overload binder for osgText::Text::Text
	static osgText::Text* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function Text, cannot match any of the overloads for function Text:\n  Text()\n  Text(const osgText::Text &, const osg::CopyOp &)\n  Text(lua_Table *)\n  Text(lua_Table *, const osgText::Text &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osgText::Text::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgText::Text::cloneType() const function, expected prototype:\nosg::Object * osgText::Text::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::Text* self=Luna< osg::Referenced >::checkSubType< osgText::Text >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgText::Text::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgText::Text::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgText::Text::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgText::Text::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgText::Text::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgText::Text* self=Luna< osg::Referenced >::checkSubType< osgText::Text >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgText::Text::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgText::Text::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgText::Text::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgText::Text::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgText::Text* self=Luna< osg::Referenced >::checkSubType< osgText::Text >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgText::Text::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgText::Text::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgText::Text::className() const function, expected prototype:\nconst char * osgText::Text::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::Text* self=Luna< osg::Referenced >::checkSubType< osgText::Text >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgText::Text::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgText::Text::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgText::Text::libraryName() const function, expected prototype:\nconst char * osgText::Text::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::Text* self=Luna< osg::Referenced >::checkSubType< osgText::Text >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgText::Text::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgText::Text::setFont(osgText::Font * font = 0)
	static int _bind_setFont_overload_1(lua_State *L) {
		if (!_lg_typecheck_setFont_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::Text::setFont(osgText::Font * font = 0) function, expected prototype:\nvoid osgText::Text::setFont(osgText::Font * font = 0)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osgText::Font* font=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osgText::Font >(L,2)) : (osgText::Font*)0;

		osgText::Text* self=Luna< osg::Referenced >::checkSubType< osgText::Text >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::Text::setFont(osgText::Font *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setFont(font);

		return 0;
	}

	// void osgText::Text::setFont(const std::string & fontfile)
	static int _bind_setFont_overload_2(lua_State *L) {
		if (!_lg_typecheck_setFont_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::Text::setFont(const std::string & fontfile) function, expected prototype:\nvoid osgText::Text::setFont(const std::string & fontfile)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string fontfile(lua_tostring(L,2),lua_objlen(L,2));

		osgText::Text* self=Luna< osg::Referenced >::checkSubType< osgText::Text >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::Text::setFont(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setFont(fontfile);

		return 0;
	}

	// Overload binder for osgText::Text::setFont
	static int _bind_setFont(lua_State *L) {
		if (_lg_typecheck_setFont_overload_1(L)) return _bind_setFont_overload_1(L);
		if (_lg_typecheck_setFont_overload_2(L)) return _bind_setFont_overload_2(L);

		luaL_error(L, "error in function setFont, cannot match any of the overloads for function setFont:\n  setFont(osgText::Font *)\n  setFont(const std::string &)\n");
		return 0;
	}

	// void osgText::Text::setEnableDepthWrites(bool enable)
	static int _bind_setEnableDepthWrites(lua_State *L) {
		if (!_lg_typecheck_setEnableDepthWrites(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::Text::setEnableDepthWrites(bool enable) function, expected prototype:\nvoid osgText::Text::setEnableDepthWrites(bool enable)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool enable=(bool)(lua_toboolean(L,2)==1);

		osgText::Text* self=Luna< osg::Referenced >::checkSubType< osgText::Text >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::Text::setEnableDepthWrites(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setEnableDepthWrites(enable);

		return 0;
	}

	// bool osgText::Text::getEnableDepthWrites() const
	static int _bind_getEnableDepthWrites(lua_State *L) {
		if (!_lg_typecheck_getEnableDepthWrites(L)) {
			luaL_error(L, "luna typecheck failed in bool osgText::Text::getEnableDepthWrites() const function, expected prototype:\nbool osgText::Text::getEnableDepthWrites() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::Text* self=Luna< osg::Referenced >::checkSubType< osgText::Text >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgText::Text::getEnableDepthWrites() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getEnableDepthWrites();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgText::Text::setBackdropType(osgText::Text::BackdropType type)
	static int _bind_setBackdropType(lua_State *L) {
		if (!_lg_typecheck_setBackdropType(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::Text::setBackdropType(osgText::Text::BackdropType type) function, expected prototype:\nvoid osgText::Text::setBackdropType(osgText::Text::BackdropType type)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osgText::Text::BackdropType type=(osgText::Text::BackdropType)lua_tointeger(L,2);

		osgText::Text* self=Luna< osg::Referenced >::checkSubType< osgText::Text >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::Text::setBackdropType(osgText::Text::BackdropType). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setBackdropType(type);

		return 0;
	}

	// osgText::Text::BackdropType osgText::Text::getBackdropType() const
	static int _bind_getBackdropType(lua_State *L) {
		if (!_lg_typecheck_getBackdropType(L)) {
			luaL_error(L, "luna typecheck failed in osgText::Text::BackdropType osgText::Text::getBackdropType() const function, expected prototype:\nosgText::Text::BackdropType osgText::Text::getBackdropType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::Text* self=Luna< osg::Referenced >::checkSubType< osgText::Text >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgText::Text::BackdropType osgText::Text::getBackdropType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgText::Text::BackdropType lret = self->getBackdropType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgText::Text::setBackdropOffset(float offset = 0.07f)
	static int _bind_setBackdropOffset_overload_1(lua_State *L) {
		if (!_lg_typecheck_setBackdropOffset_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::Text::setBackdropOffset(float offset = 0.07f) function, expected prototype:\nvoid osgText::Text::setBackdropOffset(float offset = 0.07f)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		float offset=luatop>1 ? (float)lua_tonumber(L,2) : (float)0.07f;

		osgText::Text* self=Luna< osg::Referenced >::checkSubType< osgText::Text >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::Text::setBackdropOffset(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setBackdropOffset(offset);

		return 0;
	}

	// void osgText::Text::setBackdropOffset(float horizontal, float vertical)
	static int _bind_setBackdropOffset_overload_2(lua_State *L) {
		if (!_lg_typecheck_setBackdropOffset_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::Text::setBackdropOffset(float horizontal, float vertical) function, expected prototype:\nvoid osgText::Text::setBackdropOffset(float horizontal, float vertical)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float horizontal=(float)lua_tonumber(L,2);
		float vertical=(float)lua_tonumber(L,3);

		osgText::Text* self=Luna< osg::Referenced >::checkSubType< osgText::Text >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::Text::setBackdropOffset(float, float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setBackdropOffset(horizontal, vertical);

		return 0;
	}

	// Overload binder for osgText::Text::setBackdropOffset
	static int _bind_setBackdropOffset(lua_State *L) {
		if (_lg_typecheck_setBackdropOffset_overload_1(L)) return _bind_setBackdropOffset_overload_1(L);
		if (_lg_typecheck_setBackdropOffset_overload_2(L)) return _bind_setBackdropOffset_overload_2(L);

		luaL_error(L, "error in function setBackdropOffset, cannot match any of the overloads for function setBackdropOffset:\n  setBackdropOffset(float)\n  setBackdropOffset(float, float)\n");
		return 0;
	}

	// float osgText::Text::getBackdropHorizontalOffset() const
	static int _bind_getBackdropHorizontalOffset(lua_State *L) {
		if (!_lg_typecheck_getBackdropHorizontalOffset(L)) {
			luaL_error(L, "luna typecheck failed in float osgText::Text::getBackdropHorizontalOffset() const function, expected prototype:\nfloat osgText::Text::getBackdropHorizontalOffset() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::Text* self=Luna< osg::Referenced >::checkSubType< osgText::Text >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgText::Text::getBackdropHorizontalOffset() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getBackdropHorizontalOffset();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osgText::Text::getBackdropVerticalOffset() const
	static int _bind_getBackdropVerticalOffset(lua_State *L) {
		if (!_lg_typecheck_getBackdropVerticalOffset(L)) {
			luaL_error(L, "luna typecheck failed in float osgText::Text::getBackdropVerticalOffset() const function, expected prototype:\nfloat osgText::Text::getBackdropVerticalOffset() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::Text* self=Luna< osg::Referenced >::checkSubType< osgText::Text >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgText::Text::getBackdropVerticalOffset() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getBackdropVerticalOffset();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgText::Text::setBackdropColor(const osg::Vec4f & color)
	static int _bind_setBackdropColor(lua_State *L) {
		if (!_lg_typecheck_setBackdropColor(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::Text::setBackdropColor(const osg::Vec4f & color) function, expected prototype:\nvoid osgText::Text::setBackdropColor(const osg::Vec4f & color)\nClass arguments details:\narg 1 ID = 92303235\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec4f* color_ptr=(Luna< osg::Vec4f >::check(L,2));
		if( !color_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg color in osgText::Text::setBackdropColor function");
		}
		const osg::Vec4f & color=*color_ptr;

		osgText::Text* self=Luna< osg::Referenced >::checkSubType< osgText::Text >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::Text::setBackdropColor(const osg::Vec4f &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setBackdropColor(color);

		return 0;
	}

	// const osg::Vec4f & osgText::Text::getBackdropColor() const
	static int _bind_getBackdropColor(lua_State *L) {
		if (!_lg_typecheck_getBackdropColor(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec4f & osgText::Text::getBackdropColor() const function, expected prototype:\nconst osg::Vec4f & osgText::Text::getBackdropColor() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::Text* self=Luna< osg::Referenced >::checkSubType< osgText::Text >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec4f & osgText::Text::getBackdropColor() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec4f* lret = &self->getBackdropColor();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4f >::push(L,lret,false);

		return 1;
	}

	// void osgText::Text::setBackdropImplementation(osgText::Text::BackdropImplementation implementation)
	static int _bind_setBackdropImplementation(lua_State *L) {
		if (!_lg_typecheck_setBackdropImplementation(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::Text::setBackdropImplementation(osgText::Text::BackdropImplementation implementation) function, expected prototype:\nvoid osgText::Text::setBackdropImplementation(osgText::Text::BackdropImplementation implementation)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osgText::Text::BackdropImplementation implementation=(osgText::Text::BackdropImplementation)lua_tointeger(L,2);

		osgText::Text* self=Luna< osg::Referenced >::checkSubType< osgText::Text >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::Text::setBackdropImplementation(osgText::Text::BackdropImplementation). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setBackdropImplementation(implementation);

		return 0;
	}

	// osgText::Text::BackdropImplementation osgText::Text::getBackdropImplementation() const
	static int _bind_getBackdropImplementation(lua_State *L) {
		if (!_lg_typecheck_getBackdropImplementation(L)) {
			luaL_error(L, "luna typecheck failed in osgText::Text::BackdropImplementation osgText::Text::getBackdropImplementation() const function, expected prototype:\nosgText::Text::BackdropImplementation osgText::Text::getBackdropImplementation() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::Text* self=Luna< osg::Referenced >::checkSubType< osgText::Text >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgText::Text::BackdropImplementation osgText::Text::getBackdropImplementation() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgText::Text::BackdropImplementation lret = self->getBackdropImplementation();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgText::Text::setColorGradientMode(osgText::Text::ColorGradientMode mode)
	static int _bind_setColorGradientMode(lua_State *L) {
		if (!_lg_typecheck_setColorGradientMode(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::Text::setColorGradientMode(osgText::Text::ColorGradientMode mode) function, expected prototype:\nvoid osgText::Text::setColorGradientMode(osgText::Text::ColorGradientMode mode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osgText::Text::ColorGradientMode mode=(osgText::Text::ColorGradientMode)lua_tointeger(L,2);

		osgText::Text* self=Luna< osg::Referenced >::checkSubType< osgText::Text >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::Text::setColorGradientMode(osgText::Text::ColorGradientMode). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setColorGradientMode(mode);

		return 0;
	}

	// osgText::Text::ColorGradientMode osgText::Text::getColorGradientMode() const
	static int _bind_getColorGradientMode(lua_State *L) {
		if (!_lg_typecheck_getColorGradientMode(L)) {
			luaL_error(L, "luna typecheck failed in osgText::Text::ColorGradientMode osgText::Text::getColorGradientMode() const function, expected prototype:\nosgText::Text::ColorGradientMode osgText::Text::getColorGradientMode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::Text* self=Luna< osg::Referenced >::checkSubType< osgText::Text >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgText::Text::ColorGradientMode osgText::Text::getColorGradientMode() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgText::Text::ColorGradientMode lret = self->getColorGradientMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgText::Text::setColorGradientCorners(const osg::Vec4f & topLeft, const osg::Vec4f & bottomLeft, const osg::Vec4f & bottomRight, const osg::Vec4f & topRight)
	static int _bind_setColorGradientCorners(lua_State *L) {
		if (!_lg_typecheck_setColorGradientCorners(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::Text::setColorGradientCorners(const osg::Vec4f & topLeft, const osg::Vec4f & bottomLeft, const osg::Vec4f & bottomRight, const osg::Vec4f & topRight) function, expected prototype:\nvoid osgText::Text::setColorGradientCorners(const osg::Vec4f & topLeft, const osg::Vec4f & bottomLeft, const osg::Vec4f & bottomRight, const osg::Vec4f & topRight)\nClass arguments details:\narg 1 ID = 92303235\narg 2 ID = 92303235\narg 3 ID = 92303235\narg 4 ID = 92303235\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec4f* topLeft_ptr=(Luna< osg::Vec4f >::check(L,2));
		if( !topLeft_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg topLeft in osgText::Text::setColorGradientCorners function");
		}
		const osg::Vec4f & topLeft=*topLeft_ptr;
		const osg::Vec4f* bottomLeft_ptr=(Luna< osg::Vec4f >::check(L,3));
		if( !bottomLeft_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bottomLeft in osgText::Text::setColorGradientCorners function");
		}
		const osg::Vec4f & bottomLeft=*bottomLeft_ptr;
		const osg::Vec4f* bottomRight_ptr=(Luna< osg::Vec4f >::check(L,4));
		if( !bottomRight_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bottomRight in osgText::Text::setColorGradientCorners function");
		}
		const osg::Vec4f & bottomRight=*bottomRight_ptr;
		const osg::Vec4f* topRight_ptr=(Luna< osg::Vec4f >::check(L,5));
		if( !topRight_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg topRight in osgText::Text::setColorGradientCorners function");
		}
		const osg::Vec4f & topRight=*topRight_ptr;

		osgText::Text* self=Luna< osg::Referenced >::checkSubType< osgText::Text >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::Text::setColorGradientCorners(const osg::Vec4f &, const osg::Vec4f &, const osg::Vec4f &, const osg::Vec4f &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setColorGradientCorners(topLeft, bottomLeft, bottomRight, topRight);

		return 0;
	}

	// const osg::Vec4f & osgText::Text::getColorGradientTopLeft() const
	static int _bind_getColorGradientTopLeft(lua_State *L) {
		if (!_lg_typecheck_getColorGradientTopLeft(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec4f & osgText::Text::getColorGradientTopLeft() const function, expected prototype:\nconst osg::Vec4f & osgText::Text::getColorGradientTopLeft() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::Text* self=Luna< osg::Referenced >::checkSubType< osgText::Text >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec4f & osgText::Text::getColorGradientTopLeft() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec4f* lret = &self->getColorGradientTopLeft();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4f >::push(L,lret,false);

		return 1;
	}

	// const osg::Vec4f & osgText::Text::getColorGradientBottomLeft() const
	static int _bind_getColorGradientBottomLeft(lua_State *L) {
		if (!_lg_typecheck_getColorGradientBottomLeft(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec4f & osgText::Text::getColorGradientBottomLeft() const function, expected prototype:\nconst osg::Vec4f & osgText::Text::getColorGradientBottomLeft() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::Text* self=Luna< osg::Referenced >::checkSubType< osgText::Text >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec4f & osgText::Text::getColorGradientBottomLeft() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec4f* lret = &self->getColorGradientBottomLeft();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4f >::push(L,lret,false);

		return 1;
	}

	// const osg::Vec4f & osgText::Text::getColorGradientBottomRight() const
	static int _bind_getColorGradientBottomRight(lua_State *L) {
		if (!_lg_typecheck_getColorGradientBottomRight(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec4f & osgText::Text::getColorGradientBottomRight() const function, expected prototype:\nconst osg::Vec4f & osgText::Text::getColorGradientBottomRight() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::Text* self=Luna< osg::Referenced >::checkSubType< osgText::Text >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec4f & osgText::Text::getColorGradientBottomRight() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec4f* lret = &self->getColorGradientBottomRight();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4f >::push(L,lret,false);

		return 1;
	}

	// const osg::Vec4f & osgText::Text::getColorGradientTopRight() const
	static int _bind_getColorGradientTopRight(lua_State *L) {
		if (!_lg_typecheck_getColorGradientTopRight(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec4f & osgText::Text::getColorGradientTopRight() const function, expected prototype:\nconst osg::Vec4f & osgText::Text::getColorGradientTopRight() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::Text* self=Luna< osg::Referenced >::checkSubType< osgText::Text >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec4f & osgText::Text::getColorGradientTopRight() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec4f* lret = &self->getColorGradientTopRight();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4f >::push(L,lret,false);

		return 1;
	}

	// void osgText::Text::drawImplementation(osg::RenderInfo & renderInfo) const
	static int _bind_drawImplementation(lua_State *L) {
		if (!_lg_typecheck_drawImplementation(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::Text::drawImplementation(osg::RenderInfo & renderInfo) const function, expected prototype:\nvoid osgText::Text::drawImplementation(osg::RenderInfo & renderInfo) const\nClass arguments details:\narg 1 ID = 2286263\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::RenderInfo* renderInfo_ptr=(Luna< osg::RenderInfo >::check(L,2));
		if( !renderInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg renderInfo in osgText::Text::drawImplementation function");
		}
		osg::RenderInfo & renderInfo=*renderInfo_ptr;

		osgText::Text* self=Luna< osg::Referenced >::checkSubType< osgText::Text >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::Text::drawImplementation(osg::RenderInfo &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->drawImplementation(renderInfo);

		return 0;
	}

	// void osgText::Text::setThreadSafeRefUnref(bool threadSafe)
	static int _bind_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::Text::setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgText::Text::setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgText::Text* self=Luna< osg::Referenced >::checkSubType< osgText::Text >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::Text::setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osgText::Text::releaseGLObjects(osg::State * state = 0) const
	static int _bind_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::Text::releaseGLObjects(osg::State * state = 0) const function, expected prototype:\nvoid osgText::Text::releaseGLObjects(osg::State * state = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* state=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osgText::Text* self=Luna< osg::Referenced >::checkSubType< osgText::Text >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::Text::releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->releaseGLObjects(state);

		return 0;
	}

	// const osgText::Text::GlyphQuads * osgText::Text::getGlyphQuads(osgText::GlyphTexture * texture) const
	static int _bind_getGlyphQuads(lua_State *L) {
		if (!_lg_typecheck_getGlyphQuads(L)) {
			luaL_error(L, "luna typecheck failed in const osgText::Text::GlyphQuads * osgText::Text::getGlyphQuads(osgText::GlyphTexture * texture) const function, expected prototype:\nconst osgText::Text::GlyphQuads * osgText::Text::getGlyphQuads(osgText::GlyphTexture * texture) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgText::GlyphTexture* texture=(Luna< osg::Referenced >::checkSubType< osgText::GlyphTexture >(L,2));

		osgText::Text* self=Luna< osg::Referenced >::checkSubType< osgText::Text >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgText::Text::GlyphQuads * osgText::Text::getGlyphQuads(osgText::GlyphTexture *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgText::Text::GlyphQuads * lret = self->getGlyphQuads(texture);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgText::Text::GlyphQuads >::push(L,lret,false);

		return 1;
	}

	// const osgText::Text::TextureGlyphQuadMap & osgText::Text::getTextureGlyphQuadMap() const
	static int _bind_getTextureGlyphQuadMap(lua_State *L) {
		if (!_lg_typecheck_getTextureGlyphQuadMap(L)) {
			luaL_error(L, "luna typecheck failed in const osgText::Text::TextureGlyphQuadMap & osgText::Text::getTextureGlyphQuadMap() const function, expected prototype:\nconst osgText::Text::TextureGlyphQuadMap & osgText::Text::getTextureGlyphQuadMap() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::Text* self=Luna< osg::Referenced >::checkSubType< osgText::Text >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgText::Text::TextureGlyphQuadMap & osgText::Text::getTextureGlyphQuadMap() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgText::Text::TextureGlyphQuadMap* lret = &self->getTextureGlyphQuadMap();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgText::Text::TextureGlyphQuadMap >::push(L,lret,false);

		return 1;
	}

	// void osgText::Text::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::Text::base_setName(const std::string & name) function, expected prototype:\nvoid osgText::Text::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgText::Text* self=Luna< osg::Referenced >::checkSubType< osgText::Text >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::Text::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Text::setName(name);

		return 0;
	}

	// void osgText::Text::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::Text::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osgText::Text::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osgText::Text* self=Luna< osg::Referenced >::checkSubType< osgText::Text >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::Text::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Text::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osgText::Text::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osgText::Text::base_getUserData() function, expected prototype:\nosg::Referenced * osgText::Text::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::Text* self=Luna< osg::Referenced >::checkSubType< osgText::Text >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osgText::Text::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->Text::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osgText::Text::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osgText::Text::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osgText::Text::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::Text* self=Luna< osg::Referenced >::checkSubType< osgText::Text >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osgText::Text::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->Text::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgText::Text::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// osg::Geometry * osgText::Text::base_asGeometry()
	static int _bind_base_asGeometry_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asGeometry_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Geometry * osgText::Text::base_asGeometry() function, expected prototype:\nosg::Geometry * osgText::Text::base_asGeometry()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::Text* self=Luna< osg::Referenced >::checkSubType< osgText::Text >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Geometry * osgText::Text::base_asGeometry(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Geometry * lret = self->Text::asGeometry();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geometry >::push(L,lret,false);

		return 1;
	}

	// const osg::Geometry * osgText::Text::base_asGeometry() const
	static int _bind_base_asGeometry_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asGeometry_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Geometry * osgText::Text::base_asGeometry() const function, expected prototype:\nconst osg::Geometry * osgText::Text::base_asGeometry() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::Text* self=Luna< osg::Referenced >::checkSubType< osgText::Text >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Geometry * osgText::Text::base_asGeometry() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Geometry * lret = self->Text::asGeometry();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geometry >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgText::Text::base_asGeometry
	static int _bind_base_asGeometry(lua_State *L) {
		if (_lg_typecheck_base_asGeometry_overload_1(L)) return _bind_base_asGeometry_overload_1(L);
		if (_lg_typecheck_base_asGeometry_overload_2(L)) return _bind_base_asGeometry_overload_2(L);

		luaL_error(L, "error in function base_asGeometry, cannot match any of the overloads for function base_asGeometry:\n  base_asGeometry()\n  base_asGeometry()\n");
		return 0;
	}

	// void osgText::Text::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::Text::base_computeDataVariance() function, expected prototype:\nvoid osgText::Text::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::Text* self=Luna< osg::Referenced >::checkSubType< osgText::Text >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::Text::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Text::computeDataVariance();

		return 0;
	}

	// void osgText::Text::base_setUseVertexBufferObjects(bool flag)
	static int _bind_base_setUseVertexBufferObjects(lua_State *L) {
		if (!_lg_typecheck_base_setUseVertexBufferObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::Text::base_setUseVertexBufferObjects(bool flag) function, expected prototype:\nvoid osgText::Text::base_setUseVertexBufferObjects(bool flag)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osgText::Text* self=Luna< osg::Referenced >::checkSubType< osgText::Text >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::Text::base_setUseVertexBufferObjects(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Text::setUseVertexBufferObjects(flag);

		return 0;
	}

	// void osgText::Text::base_dirtyDisplayList()
	static int _bind_base_dirtyDisplayList(lua_State *L) {
		if (!_lg_typecheck_base_dirtyDisplayList(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::Text::base_dirtyDisplayList() function, expected prototype:\nvoid osgText::Text::base_dirtyDisplayList()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::Text* self=Luna< osg::Referenced >::checkSubType< osgText::Text >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::Text::base_dirtyDisplayList(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Text::dirtyDisplayList();

		return 0;
	}

	// unsigned int osgText::Text::base_getGLObjectSizeHint() const
	static int _bind_base_getGLObjectSizeHint(lua_State *L) {
		if (!_lg_typecheck_base_getGLObjectSizeHint(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osgText::Text::base_getGLObjectSizeHint() const function, expected prototype:\nunsigned int osgText::Text::base_getGLObjectSizeHint() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::Text* self=Luna< osg::Referenced >::checkSubType< osgText::Text >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osgText::Text::base_getGLObjectSizeHint() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->Text::getGLObjectSizeHint();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgText::Text::base_compileGLObjects(osg::RenderInfo & renderInfo) const
	static int _bind_base_compileGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_compileGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::Text::base_compileGLObjects(osg::RenderInfo & renderInfo) const function, expected prototype:\nvoid osgText::Text::base_compileGLObjects(osg::RenderInfo & renderInfo) const\nClass arguments details:\narg 1 ID = 2286263\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::RenderInfo* renderInfo_ptr=(Luna< osg::RenderInfo >::check(L,2));
		if( !renderInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg renderInfo in osgText::Text::base_compileGLObjects function");
		}
		osg::RenderInfo & renderInfo=*renderInfo_ptr;

		osgText::Text* self=Luna< osg::Referenced >::checkSubType< osgText::Text >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::Text::base_compileGLObjects(osg::RenderInfo &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Text::compileGLObjects(renderInfo);

		return 0;
	}

	// void osgText::Text::base_setUpdateCallback(osg::Drawable::UpdateCallback * ac)
	static int _bind_base_setUpdateCallback(lua_State *L) {
		if (!_lg_typecheck_base_setUpdateCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::Text::base_setUpdateCallback(osg::Drawable::UpdateCallback * ac) function, expected prototype:\nvoid osgText::Text::base_setUpdateCallback(osg::Drawable::UpdateCallback * ac)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Drawable::UpdateCallback* ac=(Luna< osg::Referenced >::checkSubType< osg::Drawable::UpdateCallback >(L,2));

		osgText::Text* self=Luna< osg::Referenced >::checkSubType< osgText::Text >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::Text::base_setUpdateCallback(osg::Drawable::UpdateCallback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Text::setUpdateCallback(ac);

		return 0;
	}

	// void osgText::Text::base_setEventCallback(osg::Drawable::EventCallback * ac)
	static int _bind_base_setEventCallback(lua_State *L) {
		if (!_lg_typecheck_base_setEventCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::Text::base_setEventCallback(osg::Drawable::EventCallback * ac) function, expected prototype:\nvoid osgText::Text::base_setEventCallback(osg::Drawable::EventCallback * ac)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Drawable::EventCallback* ac=(Luna< osg::Referenced >::checkSubType< osg::Drawable::EventCallback >(L,2));

		osgText::Text* self=Luna< osg::Referenced >::checkSubType< osgText::Text >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::Text::base_setEventCallback(osg::Drawable::EventCallback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Text::setEventCallback(ac);

		return 0;
	}

	// void osgText::Text::base_setCullCallback(osg::Drawable::CullCallback * cc)
	static int _bind_base_setCullCallback(lua_State *L) {
		if (!_lg_typecheck_base_setCullCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::Text::base_setCullCallback(osg::Drawable::CullCallback * cc) function, expected prototype:\nvoid osgText::Text::base_setCullCallback(osg::Drawable::CullCallback * cc)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Drawable::CullCallback* cc=(Luna< osg::Referenced >::checkSubType< osg::Drawable::CullCallback >(L,2));

		osgText::Text* self=Luna< osg::Referenced >::checkSubType< osgText::Text >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::Text::base_setCullCallback(osg::Drawable::CullCallback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Text::setCullCallback(cc);

		return 0;
	}

	// void osgText::Text::base_setDrawCallback(osg::Drawable::DrawCallback * dc)
	static int _bind_base_setDrawCallback(lua_State *L) {
		if (!_lg_typecheck_base_setDrawCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::Text::base_setDrawCallback(osg::Drawable::DrawCallback * dc) function, expected prototype:\nvoid osgText::Text::base_setDrawCallback(osg::Drawable::DrawCallback * dc)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Drawable::DrawCallback* dc=(Luna< osg::Referenced >::checkSubType< osg::Drawable::DrawCallback >(L,2));

		osgText::Text* self=Luna< osg::Referenced >::checkSubType< osgText::Text >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::Text::base_setDrawCallback(osg::Drawable::DrawCallback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Text::setDrawCallback(dc);

		return 0;
	}

	// osg::BoundingBoxd osgText::Text::base_computeBound() const
	static int _bind_base_computeBound(lua_State *L) {
		if (!_lg_typecheck_base_computeBound(L)) {
			luaL_error(L, "luna typecheck failed in osg::BoundingBoxd osgText::Text::base_computeBound() const function, expected prototype:\nosg::BoundingBoxd osgText::Text::base_computeBound() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::Text* self=Luna< osg::Referenced >::checkSubType< osgText::Text >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::BoundingBoxd osgText::Text::base_computeBound() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::BoundingBoxd stack_lret = self->Text::computeBound();
		osg::BoundingBoxd* lret = new osg::BoundingBoxd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingBoxd >::push(L,lret,true);

		return 1;
	}

	// osg::Object * osgText::Text::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgText::Text::base_cloneType() const function, expected prototype:\nosg::Object * osgText::Text::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::Text* self=Luna< osg::Referenced >::checkSubType< osgText::Text >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgText::Text::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->Text::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgText::Text::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgText::Text::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgText::Text::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgText::Text::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgText::Text* self=Luna< osg::Referenced >::checkSubType< osgText::Text >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgText::Text::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->Text::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgText::Text::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgText::Text::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgText::Text::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgText::Text* self=Luna< osg::Referenced >::checkSubType< osgText::Text >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgText::Text::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Text::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgText::Text::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgText::Text::base_className() const function, expected prototype:\nconst char * osgText::Text::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::Text* self=Luna< osg::Referenced >::checkSubType< osgText::Text >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgText::Text::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Text::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgText::Text::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgText::Text::base_libraryName() const function, expected prototype:\nconst char * osgText::Text::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::Text* self=Luna< osg::Referenced >::checkSubType< osgText::Text >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgText::Text::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Text::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgText::Text::base_setFont(osgText::Font * font = 0)
	static int _bind_base_setFont_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_setFont_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::Text::base_setFont(osgText::Font * font = 0) function, expected prototype:\nvoid osgText::Text::base_setFont(osgText::Font * font = 0)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osgText::Font* font=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osgText::Font >(L,2)) : (osgText::Font*)0;

		osgText::Text* self=Luna< osg::Referenced >::checkSubType< osgText::Text >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::Text::base_setFont(osgText::Font *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Text::setFont(font);

		return 0;
	}

	// void osgText::Text::base_setFont(const std::string & fontfile)
	static int _bind_base_setFont_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_setFont_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::Text::base_setFont(const std::string & fontfile) function, expected prototype:\nvoid osgText::Text::base_setFont(const std::string & fontfile)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string fontfile(lua_tostring(L,2),lua_objlen(L,2));

		osgText::Text* self=Luna< osg::Referenced >::checkSubType< osgText::Text >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::Text::base_setFont(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Text::setFont(fontfile);

		return 0;
	}

	// Overload binder for osgText::Text::base_setFont
	static int _bind_base_setFont(lua_State *L) {
		if (_lg_typecheck_base_setFont_overload_1(L)) return _bind_base_setFont_overload_1(L);
		if (_lg_typecheck_base_setFont_overload_2(L)) return _bind_base_setFont_overload_2(L);

		luaL_error(L, "error in function base_setFont, cannot match any of the overloads for function base_setFont:\n  base_setFont(osgText::Font *)\n  base_setFont(const std::string &)\n");
		return 0;
	}

	// void osgText::Text::base_drawImplementation(osg::RenderInfo & renderInfo) const
	static int _bind_base_drawImplementation(lua_State *L) {
		if (!_lg_typecheck_base_drawImplementation(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::Text::base_drawImplementation(osg::RenderInfo & renderInfo) const function, expected prototype:\nvoid osgText::Text::base_drawImplementation(osg::RenderInfo & renderInfo) const\nClass arguments details:\narg 1 ID = 2286263\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::RenderInfo* renderInfo_ptr=(Luna< osg::RenderInfo >::check(L,2));
		if( !renderInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg renderInfo in osgText::Text::base_drawImplementation function");
		}
		osg::RenderInfo & renderInfo=*renderInfo_ptr;

		osgText::Text* self=Luna< osg::Referenced >::checkSubType< osgText::Text >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::Text::base_drawImplementation(osg::RenderInfo &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Text::drawImplementation(renderInfo);

		return 0;
	}

	// void osgText::Text::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::Text::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgText::Text::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgText::Text* self=Luna< osg::Referenced >::checkSubType< osgText::Text >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::Text::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Text::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osgText::Text::base_releaseGLObjects(osg::State * state = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::Text::base_releaseGLObjects(osg::State * state = 0) const function, expected prototype:\nvoid osgText::Text::base_releaseGLObjects(osg::State * state = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* state=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osgText::Text* self=Luna< osg::Referenced >::checkSubType< osgText::Text >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::Text::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Text::releaseGLObjects(state);

		return 0;
	}


	// Operator binds:

};

osgText::Text* LunaTraits< osgText::Text >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgText_Text::_bind_ctor(L);
}

void LunaTraits< osgText::Text >::_bind_dtor(osgText::Text* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgText::Text >::className[] = "Text";
const char LunaTraits< osgText::Text >::fullName[] = "osgText::Text";
const char LunaTraits< osgText::Text >::moduleName[] = "osgText";
const char* LunaTraits< osgText::Text >::parents[] = {"osgText.TextBase", 0};
const int LunaTraits< osgText::Text >::hash = 3805462;
const int LunaTraits< osgText::Text >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgText::Text >::methods[] = {
	{"cloneType", &luna_wrapper_osgText_Text::_bind_cloneType},
	{"clone", &luna_wrapper_osgText_Text::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osgText_Text::_bind_isSameKindAs},
	{"className", &luna_wrapper_osgText_Text::_bind_className},
	{"libraryName", &luna_wrapper_osgText_Text::_bind_libraryName},
	{"setFont", &luna_wrapper_osgText_Text::_bind_setFont},
	{"setEnableDepthWrites", &luna_wrapper_osgText_Text::_bind_setEnableDepthWrites},
	{"getEnableDepthWrites", &luna_wrapper_osgText_Text::_bind_getEnableDepthWrites},
	{"setBackdropType", &luna_wrapper_osgText_Text::_bind_setBackdropType},
	{"getBackdropType", &luna_wrapper_osgText_Text::_bind_getBackdropType},
	{"setBackdropOffset", &luna_wrapper_osgText_Text::_bind_setBackdropOffset},
	{"getBackdropHorizontalOffset", &luna_wrapper_osgText_Text::_bind_getBackdropHorizontalOffset},
	{"getBackdropVerticalOffset", &luna_wrapper_osgText_Text::_bind_getBackdropVerticalOffset},
	{"setBackdropColor", &luna_wrapper_osgText_Text::_bind_setBackdropColor},
	{"getBackdropColor", &luna_wrapper_osgText_Text::_bind_getBackdropColor},
	{"setBackdropImplementation", &luna_wrapper_osgText_Text::_bind_setBackdropImplementation},
	{"getBackdropImplementation", &luna_wrapper_osgText_Text::_bind_getBackdropImplementation},
	{"setColorGradientMode", &luna_wrapper_osgText_Text::_bind_setColorGradientMode},
	{"getColorGradientMode", &luna_wrapper_osgText_Text::_bind_getColorGradientMode},
	{"setColorGradientCorners", &luna_wrapper_osgText_Text::_bind_setColorGradientCorners},
	{"getColorGradientTopLeft", &luna_wrapper_osgText_Text::_bind_getColorGradientTopLeft},
	{"getColorGradientBottomLeft", &luna_wrapper_osgText_Text::_bind_getColorGradientBottomLeft},
	{"getColorGradientBottomRight", &luna_wrapper_osgText_Text::_bind_getColorGradientBottomRight},
	{"getColorGradientTopRight", &luna_wrapper_osgText_Text::_bind_getColorGradientTopRight},
	{"drawImplementation", &luna_wrapper_osgText_Text::_bind_drawImplementation},
	{"setThreadSafeRefUnref", &luna_wrapper_osgText_Text::_bind_setThreadSafeRefUnref},
	{"releaseGLObjects", &luna_wrapper_osgText_Text::_bind_releaseGLObjects},
	{"getGlyphQuads", &luna_wrapper_osgText_Text::_bind_getGlyphQuads},
	{"getTextureGlyphQuadMap", &luna_wrapper_osgText_Text::_bind_getTextureGlyphQuadMap},
	{"base_setName", &luna_wrapper_osgText_Text::_bind_base_setName},
	{"base_setUserData", &luna_wrapper_osgText_Text::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osgText_Text::_bind_base_getUserData},
	{"base_asGeometry", &luna_wrapper_osgText_Text::_bind_base_asGeometry},
	{"base_computeDataVariance", &luna_wrapper_osgText_Text::_bind_base_computeDataVariance},
	{"base_setUseVertexBufferObjects", &luna_wrapper_osgText_Text::_bind_base_setUseVertexBufferObjects},
	{"base_dirtyDisplayList", &luna_wrapper_osgText_Text::_bind_base_dirtyDisplayList},
	{"base_getGLObjectSizeHint", &luna_wrapper_osgText_Text::_bind_base_getGLObjectSizeHint},
	{"base_compileGLObjects", &luna_wrapper_osgText_Text::_bind_base_compileGLObjects},
	{"base_setUpdateCallback", &luna_wrapper_osgText_Text::_bind_base_setUpdateCallback},
	{"base_setEventCallback", &luna_wrapper_osgText_Text::_bind_base_setEventCallback},
	{"base_setCullCallback", &luna_wrapper_osgText_Text::_bind_base_setCullCallback},
	{"base_setDrawCallback", &luna_wrapper_osgText_Text::_bind_base_setDrawCallback},
	{"base_computeBound", &luna_wrapper_osgText_Text::_bind_base_computeBound},
	{"base_cloneType", &luna_wrapper_osgText_Text::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osgText_Text::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osgText_Text::_bind_base_isSameKindAs},
	{"base_className", &luna_wrapper_osgText_Text::_bind_base_className},
	{"base_libraryName", &luna_wrapper_osgText_Text::_bind_base_libraryName},
	{"base_setFont", &luna_wrapper_osgText_Text::_bind_base_setFont},
	{"base_drawImplementation", &luna_wrapper_osgText_Text::_bind_base_drawImplementation},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgText_Text::_bind_base_setThreadSafeRefUnref},
	{"base_releaseGLObjects", &luna_wrapper_osgText_Text::_bind_base_releaseGLObjects},
	{"fromVoid", &luna_wrapper_osgText_Text::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgText_Text::_bind_asVoid},
	{"getTable", &luna_wrapper_osgText_Text::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgText::Text >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgText_Text::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgText::Text >::enumValues[] = {
	{"DROP_SHADOW_BOTTOM_RIGHT", osgText::Text::DROP_SHADOW_BOTTOM_RIGHT},
	{"DROP_SHADOW_CENTER_RIGHT", osgText::Text::DROP_SHADOW_CENTER_RIGHT},
	{"DROP_SHADOW_TOP_RIGHT", osgText::Text::DROP_SHADOW_TOP_RIGHT},
	{"DROP_SHADOW_BOTTOM_CENTER", osgText::Text::DROP_SHADOW_BOTTOM_CENTER},
	{"DROP_SHADOW_TOP_CENTER", osgText::Text::DROP_SHADOW_TOP_CENTER},
	{"DROP_SHADOW_BOTTOM_LEFT", osgText::Text::DROP_SHADOW_BOTTOM_LEFT},
	{"DROP_SHADOW_CENTER_LEFT", osgText::Text::DROP_SHADOW_CENTER_LEFT},
	{"DROP_SHADOW_TOP_LEFT", osgText::Text::DROP_SHADOW_TOP_LEFT},
	{"OUTLINE", osgText::Text::OUTLINE},
	{"NONE", osgText::Text::NONE},
	{"POLYGON_OFFSET", osgText::Text::POLYGON_OFFSET},
	{"NO_DEPTH_BUFFER", osgText::Text::NO_DEPTH_BUFFER},
	{"DEPTH_RANGE", osgText::Text::DEPTH_RANGE},
	{"STENCIL_BUFFER", osgText::Text::STENCIL_BUFFER},
	{"DELAYED_DEPTH_WRITES", osgText::Text::DELAYED_DEPTH_WRITES},
	{"SOLID", osgText::Text::SOLID},
	{"PER_CHARACTER", osgText::Text::PER_CHARACTER},
	{"OVERALL", osgText::Text::OVERALL},
	{0,0}
};



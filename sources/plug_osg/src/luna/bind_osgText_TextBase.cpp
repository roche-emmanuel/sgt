#include <plug_common.h>

#include <luna/wrappers/wrapper_osgText_TextBase.h>

class luna_wrapper_osgText_TextBase {
public:
	typedef Luna< osgText::TextBase > luna_t;

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

		osgText::TextBase* self= (osgText::TextBase*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgText::TextBase >::push(L,self,false);
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
		//osgText::TextBase* ptr= dynamic_cast< osgText::TextBase* >(Luna< osg::Referenced >::check(L,1));
		osgText::TextBase* ptr= luna_caster< osg::Referenced, osgText::TextBase >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgText::TextBase >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osgText::TextBase >(L,2))) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,27134364) ) return false;
		if( luatop>2 && (!(Luna< osg::CopyOp >::check(L,3))) ) return false;
		return true;
	}


	// Function checkers:
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

	inline static bool _lg_typecheck_setColor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303235) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getColor(lua_State *L) {
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

	inline static bool _lg_typecheck_getFont(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setStyle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getStyle_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getStyle_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getOrCreateStyle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setFontResolution(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFontWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFontHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setText_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,42086333) ) return false;
		if( (!(Luna< osgText::String >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setText_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setText_overload_3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getText_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getText_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_update(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCharacterSize_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCharacterSize_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCharacterHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCharacterAspectRatio(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCharacterSizeMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCharacterSizeMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setMaximumWidth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMaximumWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setMaximumHeight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMaximumHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setLineSpacing(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getLineSpacing(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setPosition(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPosition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setAlignment(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAlignment(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setAxisAlignment(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAxisAlignment(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setRotation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,80263306) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRotation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setAutoRotateToScreen(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAutoRotateToScreen(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setLayout(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getLayout(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDrawMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDrawMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setBoundingBoxMargin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getBoundingBoxMargin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setBoundingBoxColor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303235) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getBoundingBoxColor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setKerningType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getKerningType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLineCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_computeBound(lua_State *L) {
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

	inline static bool _lg_typecheck_base_computeBound(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgText::TextBase::TextBase(lua_Table * data)
	static osgText::TextBase* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgText::TextBase::TextBase(lua_Table * data) function, expected prototype:\nosgText::TextBase::TextBase(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgText_TextBase(L,NULL);
	}

	// osgText::TextBase::TextBase(lua_Table * data, const osgText::TextBase & text, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgText::TextBase* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgText::TextBase::TextBase(lua_Table * data, const osgText::TextBase & text, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgText::TextBase::TextBase(lua_Table * data, const osgText::TextBase & text, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osgText::TextBase* text_ptr=(Luna< osg::Referenced >::checkSubType< osgText::TextBase >(L,2));
		if( !text_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg text in osgText::TextBase::TextBase function");
		}
		const osgText::TextBase & text=*text_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgText::TextBase::TextBase function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osgText_TextBase(L,NULL, text, copyop);
	}

	// Overload binder for osgText::TextBase::TextBase
	static osgText::TextBase* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function TextBase, cannot match any of the overloads for function TextBase:\n  TextBase(lua_Table *)\n  TextBase(lua_Table *, const osgText::TextBase &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// bool osgText::TextBase::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgText::TextBase::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgText::TextBase::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgText::TextBase* self=Luna< osg::Referenced >::checkSubType< osgText::TextBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgText::TextBase::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgText::TextBase::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgText::TextBase::className() const function, expected prototype:\nconst char * osgText::TextBase::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::TextBase* self=Luna< osg::Referenced >::checkSubType< osgText::TextBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgText::TextBase::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgText::TextBase::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgText::TextBase::libraryName() const function, expected prototype:\nconst char * osgText::TextBase::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::TextBase* self=Luna< osg::Referenced >::checkSubType< osgText::TextBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgText::TextBase::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgText::TextBase::setColor(const osg::Vec4f & color)
	static int _bind_setColor(lua_State *L) {
		if (!_lg_typecheck_setColor(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::TextBase::setColor(const osg::Vec4f & color) function, expected prototype:\nvoid osgText::TextBase::setColor(const osg::Vec4f & color)\nClass arguments details:\narg 1 ID = 92303235\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec4f* color_ptr=(Luna< osg::Vec4f >::check(L,2));
		if( !color_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg color in osgText::TextBase::setColor function");
		}
		const osg::Vec4f & color=*color_ptr;

		osgText::TextBase* self=Luna< osg::Referenced >::checkSubType< osgText::TextBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::TextBase::setColor(const osg::Vec4f &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setColor(color);

		return 0;
	}

	// const osg::Vec4f & osgText::TextBase::getColor() const
	static int _bind_getColor(lua_State *L) {
		if (!_lg_typecheck_getColor(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec4f & osgText::TextBase::getColor() const function, expected prototype:\nconst osg::Vec4f & osgText::TextBase::getColor() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::TextBase* self=Luna< osg::Referenced >::checkSubType< osgText::TextBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec4f & osgText::TextBase::getColor() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec4f* lret = &self->getColor();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4f >::push(L,lret,false);

		return 1;
	}

	// void osgText::TextBase::setFont(osgText::Font * font = 0)
	static int _bind_setFont_overload_1(lua_State *L) {
		if (!_lg_typecheck_setFont_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::TextBase::setFont(osgText::Font * font = 0) function, expected prototype:\nvoid osgText::TextBase::setFont(osgText::Font * font = 0)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osgText::Font* font=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osgText::Font >(L,2)) : (osgText::Font*)0;

		osgText::TextBase* self=Luna< osg::Referenced >::checkSubType< osgText::TextBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::TextBase::setFont(osgText::Font *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setFont(font);

		return 0;
	}

	// void osgText::TextBase::setFont(const std::string & fontfile)
	static int _bind_setFont_overload_2(lua_State *L) {
		if (!_lg_typecheck_setFont_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::TextBase::setFont(const std::string & fontfile) function, expected prototype:\nvoid osgText::TextBase::setFont(const std::string & fontfile)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string fontfile(lua_tostring(L,2),lua_objlen(L,2));

		osgText::TextBase* self=Luna< osg::Referenced >::checkSubType< osgText::TextBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::TextBase::setFont(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setFont(fontfile);

		return 0;
	}

	// Overload binder for osgText::TextBase::setFont
	static int _bind_setFont(lua_State *L) {
		if (_lg_typecheck_setFont_overload_1(L)) return _bind_setFont_overload_1(L);
		if (_lg_typecheck_setFont_overload_2(L)) return _bind_setFont_overload_2(L);

		luaL_error(L, "error in function setFont, cannot match any of the overloads for function setFont:\n  setFont(osgText::Font *)\n  setFont(const std::string &)\n");
		return 0;
	}

	// const osgText::Font * osgText::TextBase::getFont() const
	static int _bind_getFont(lua_State *L) {
		if (!_lg_typecheck_getFont(L)) {
			luaL_error(L, "luna typecheck failed in const osgText::Font * osgText::TextBase::getFont() const function, expected prototype:\nconst osgText::Font * osgText::TextBase::getFont() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::TextBase* self=Luna< osg::Referenced >::checkSubType< osgText::TextBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgText::Font * osgText::TextBase::getFont() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgText::Font * lret = self->getFont();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgText::Font >::push(L,lret,false);

		return 1;
	}

	// void osgText::TextBase::setStyle(osgText::Style * style)
	static int _bind_setStyle(lua_State *L) {
		if (!_lg_typecheck_setStyle(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::TextBase::setStyle(osgText::Style * style) function, expected prototype:\nvoid osgText::TextBase::setStyle(osgText::Style * style)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgText::Style* style=(Luna< osg::Referenced >::checkSubType< osgText::Style >(L,2));

		osgText::TextBase* self=Luna< osg::Referenced >::checkSubType< osgText::TextBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::TextBase::setStyle(osgText::Style *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setStyle(style);

		return 0;
	}

	// osgText::Style * osgText::TextBase::getStyle()
	static int _bind_getStyle_overload_1(lua_State *L) {
		if (!_lg_typecheck_getStyle_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgText::Style * osgText::TextBase::getStyle() function, expected prototype:\nosgText::Style * osgText::TextBase::getStyle()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::TextBase* self=Luna< osg::Referenced >::checkSubType< osgText::TextBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgText::Style * osgText::TextBase::getStyle(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgText::Style * lret = self->getStyle();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgText::Style >::push(L,lret,false);

		return 1;
	}

	// const osgText::Style * osgText::TextBase::getStyle() const
	static int _bind_getStyle_overload_2(lua_State *L) {
		if (!_lg_typecheck_getStyle_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osgText::Style * osgText::TextBase::getStyle() const function, expected prototype:\nconst osgText::Style * osgText::TextBase::getStyle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::TextBase* self=Luna< osg::Referenced >::checkSubType< osgText::TextBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgText::Style * osgText::TextBase::getStyle() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgText::Style * lret = self->getStyle();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgText::Style >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgText::TextBase::getStyle
	static int _bind_getStyle(lua_State *L) {
		if (_lg_typecheck_getStyle_overload_1(L)) return _bind_getStyle_overload_1(L);
		if (_lg_typecheck_getStyle_overload_2(L)) return _bind_getStyle_overload_2(L);

		luaL_error(L, "error in function getStyle, cannot match any of the overloads for function getStyle:\n  getStyle()\n  getStyle()\n");
		return 0;
	}

	// osgText::Style * osgText::TextBase::getOrCreateStyle()
	static int _bind_getOrCreateStyle(lua_State *L) {
		if (!_lg_typecheck_getOrCreateStyle(L)) {
			luaL_error(L, "luna typecheck failed in osgText::Style * osgText::TextBase::getOrCreateStyle() function, expected prototype:\nosgText::Style * osgText::TextBase::getOrCreateStyle()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::TextBase* self=Luna< osg::Referenced >::checkSubType< osgText::TextBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgText::Style * osgText::TextBase::getOrCreateStyle(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgText::Style * lret = self->getOrCreateStyle();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgText::Style >::push(L,lret,false);

		return 1;
	}

	// void osgText::TextBase::setFontResolution(unsigned int width, unsigned int height)
	static int _bind_setFontResolution(lua_State *L) {
		if (!_lg_typecheck_setFontResolution(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::TextBase::setFontResolution(unsigned int width, unsigned int height) function, expected prototype:\nvoid osgText::TextBase::setFontResolution(unsigned int width, unsigned int height)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int width=(unsigned int)lua_tointeger(L,2);
		unsigned int height=(unsigned int)lua_tointeger(L,3);

		osgText::TextBase* self=Luna< osg::Referenced >::checkSubType< osgText::TextBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::TextBase::setFontResolution(unsigned int, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setFontResolution(width, height);

		return 0;
	}

	// unsigned int osgText::TextBase::getFontWidth() const
	static int _bind_getFontWidth(lua_State *L) {
		if (!_lg_typecheck_getFontWidth(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osgText::TextBase::getFontWidth() const function, expected prototype:\nunsigned int osgText::TextBase::getFontWidth() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::TextBase* self=Luna< osg::Referenced >::checkSubType< osgText::TextBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osgText::TextBase::getFontWidth() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getFontWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osgText::TextBase::getFontHeight() const
	static int _bind_getFontHeight(lua_State *L) {
		if (!_lg_typecheck_getFontHeight(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osgText::TextBase::getFontHeight() const function, expected prototype:\nunsigned int osgText::TextBase::getFontHeight() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::TextBase* self=Luna< osg::Referenced >::checkSubType< osgText::TextBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osgText::TextBase::getFontHeight() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getFontHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgText::TextBase::setText(const osgText::String & text)
	static int _bind_setText_overload_1(lua_State *L) {
		if (!_lg_typecheck_setText_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::TextBase::setText(const osgText::String & text) function, expected prototype:\nvoid osgText::TextBase::setText(const osgText::String & text)\nClass arguments details:\narg 1 ID = 42086333\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgText::String* text_ptr=(Luna< osgText::String >::check(L,2));
		if( !text_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg text in osgText::TextBase::setText function");
		}
		const osgText::String & text=*text_ptr;

		osgText::TextBase* self=Luna< osg::Referenced >::checkSubType< osgText::TextBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::TextBase::setText(const osgText::String &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setText(text);

		return 0;
	}

	// void osgText::TextBase::setText(const std::string & text)
	static int _bind_setText_overload_2(lua_State *L) {
		if (!_lg_typecheck_setText_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::TextBase::setText(const std::string & text) function, expected prototype:\nvoid osgText::TextBase::setText(const std::string & text)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string text(lua_tostring(L,2),lua_objlen(L,2));

		osgText::TextBase* self=Luna< osg::Referenced >::checkSubType< osgText::TextBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::TextBase::setText(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setText(text);

		return 0;
	}

	// void osgText::TextBase::setText(const std::string & text, osgText::String::Encoding encoding)
	static int _bind_setText_overload_3(lua_State *L) {
		if (!_lg_typecheck_setText_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::TextBase::setText(const std::string & text, osgText::String::Encoding encoding) function, expected prototype:\nvoid osgText::TextBase::setText(const std::string & text, osgText::String::Encoding encoding)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string text(lua_tostring(L,2),lua_objlen(L,2));
		osgText::String::Encoding encoding=(osgText::String::Encoding)lua_tointeger(L,3);

		osgText::TextBase* self=Luna< osg::Referenced >::checkSubType< osgText::TextBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::TextBase::setText(const std::string &, osgText::String::Encoding). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setText(text, encoding);

		return 0;
	}

	// Overload binder for osgText::TextBase::setText
	static int _bind_setText(lua_State *L) {
		if (_lg_typecheck_setText_overload_1(L)) return _bind_setText_overload_1(L);
		if (_lg_typecheck_setText_overload_2(L)) return _bind_setText_overload_2(L);
		if (_lg_typecheck_setText_overload_3(L)) return _bind_setText_overload_3(L);

		luaL_error(L, "error in function setText, cannot match any of the overloads for function setText:\n  setText(const osgText::String &)\n  setText(const std::string &)\n  setText(const std::string &, osgText::String::Encoding)\n");
		return 0;
	}

	// osgText::String & osgText::TextBase::getText()
	static int _bind_getText_overload_1(lua_State *L) {
		if (!_lg_typecheck_getText_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgText::String & osgText::TextBase::getText() function, expected prototype:\nosgText::String & osgText::TextBase::getText()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::TextBase* self=Luna< osg::Referenced >::checkSubType< osgText::TextBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgText::String & osgText::TextBase::getText(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgText::String* lret = &self->getText();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgText::String >::push(L,lret,false);

		return 1;
	}

	// const osgText::String & osgText::TextBase::getText() const
	static int _bind_getText_overload_2(lua_State *L) {
		if (!_lg_typecheck_getText_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osgText::String & osgText::TextBase::getText() const function, expected prototype:\nconst osgText::String & osgText::TextBase::getText() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::TextBase* self=Luna< osg::Referenced >::checkSubType< osgText::TextBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgText::String & osgText::TextBase::getText() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgText::String* lret = &self->getText();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgText::String >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgText::TextBase::getText
	static int _bind_getText(lua_State *L) {
		if (_lg_typecheck_getText_overload_1(L)) return _bind_getText_overload_1(L);
		if (_lg_typecheck_getText_overload_2(L)) return _bind_getText_overload_2(L);

		luaL_error(L, "error in function getText, cannot match any of the overloads for function getText:\n  getText()\n  getText()\n");
		return 0;
	}

	// void osgText::TextBase::update()
	static int _bind_update(lua_State *L) {
		if (!_lg_typecheck_update(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::TextBase::update() function, expected prototype:\nvoid osgText::TextBase::update()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::TextBase* self=Luna< osg::Referenced >::checkSubType< osgText::TextBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::TextBase::update(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->update();

		return 0;
	}

	// void osgText::TextBase::setCharacterSize(float height)
	static int _bind_setCharacterSize_overload_1(lua_State *L) {
		if (!_lg_typecheck_setCharacterSize_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::TextBase::setCharacterSize(float height) function, expected prototype:\nvoid osgText::TextBase::setCharacterSize(float height)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float height=(float)lua_tonumber(L,2);

		osgText::TextBase* self=Luna< osg::Referenced >::checkSubType< osgText::TextBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::TextBase::setCharacterSize(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setCharacterSize(height);

		return 0;
	}

	// void osgText::TextBase::setCharacterSize(float height, float aspectRatio)
	static int _bind_setCharacterSize_overload_2(lua_State *L) {
		if (!_lg_typecheck_setCharacterSize_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::TextBase::setCharacterSize(float height, float aspectRatio) function, expected prototype:\nvoid osgText::TextBase::setCharacterSize(float height, float aspectRatio)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float height=(float)lua_tonumber(L,2);
		float aspectRatio=(float)lua_tonumber(L,3);

		osgText::TextBase* self=Luna< osg::Referenced >::checkSubType< osgText::TextBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::TextBase::setCharacterSize(float, float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setCharacterSize(height, aspectRatio);

		return 0;
	}

	// Overload binder for osgText::TextBase::setCharacterSize
	static int _bind_setCharacterSize(lua_State *L) {
		if (_lg_typecheck_setCharacterSize_overload_1(L)) return _bind_setCharacterSize_overload_1(L);
		if (_lg_typecheck_setCharacterSize_overload_2(L)) return _bind_setCharacterSize_overload_2(L);

		luaL_error(L, "error in function setCharacterSize, cannot match any of the overloads for function setCharacterSize:\n  setCharacterSize(float)\n  setCharacterSize(float, float)\n");
		return 0;
	}

	// float osgText::TextBase::getCharacterHeight() const
	static int _bind_getCharacterHeight(lua_State *L) {
		if (!_lg_typecheck_getCharacterHeight(L)) {
			luaL_error(L, "luna typecheck failed in float osgText::TextBase::getCharacterHeight() const function, expected prototype:\nfloat osgText::TextBase::getCharacterHeight() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::TextBase* self=Luna< osg::Referenced >::checkSubType< osgText::TextBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgText::TextBase::getCharacterHeight() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getCharacterHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osgText::TextBase::getCharacterAspectRatio() const
	static int _bind_getCharacterAspectRatio(lua_State *L) {
		if (!_lg_typecheck_getCharacterAspectRatio(L)) {
			luaL_error(L, "luna typecheck failed in float osgText::TextBase::getCharacterAspectRatio() const function, expected prototype:\nfloat osgText::TextBase::getCharacterAspectRatio() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::TextBase* self=Luna< osg::Referenced >::checkSubType< osgText::TextBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgText::TextBase::getCharacterAspectRatio() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getCharacterAspectRatio();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgText::TextBase::setCharacterSizeMode(osgText::TextBase::CharacterSizeMode mode)
	static int _bind_setCharacterSizeMode(lua_State *L) {
		if (!_lg_typecheck_setCharacterSizeMode(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::TextBase::setCharacterSizeMode(osgText::TextBase::CharacterSizeMode mode) function, expected prototype:\nvoid osgText::TextBase::setCharacterSizeMode(osgText::TextBase::CharacterSizeMode mode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osgText::TextBase::CharacterSizeMode mode=(osgText::TextBase::CharacterSizeMode)lua_tointeger(L,2);

		osgText::TextBase* self=Luna< osg::Referenced >::checkSubType< osgText::TextBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::TextBase::setCharacterSizeMode(osgText::TextBase::CharacterSizeMode). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setCharacterSizeMode(mode);

		return 0;
	}

	// osgText::TextBase::CharacterSizeMode osgText::TextBase::getCharacterSizeMode() const
	static int _bind_getCharacterSizeMode(lua_State *L) {
		if (!_lg_typecheck_getCharacterSizeMode(L)) {
			luaL_error(L, "luna typecheck failed in osgText::TextBase::CharacterSizeMode osgText::TextBase::getCharacterSizeMode() const function, expected prototype:\nosgText::TextBase::CharacterSizeMode osgText::TextBase::getCharacterSizeMode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::TextBase* self=Luna< osg::Referenced >::checkSubType< osgText::TextBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgText::TextBase::CharacterSizeMode osgText::TextBase::getCharacterSizeMode() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgText::TextBase::CharacterSizeMode lret = self->getCharacterSizeMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgText::TextBase::setMaximumWidth(float maximumWidth)
	static int _bind_setMaximumWidth(lua_State *L) {
		if (!_lg_typecheck_setMaximumWidth(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::TextBase::setMaximumWidth(float maximumWidth) function, expected prototype:\nvoid osgText::TextBase::setMaximumWidth(float maximumWidth)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float maximumWidth=(float)lua_tonumber(L,2);

		osgText::TextBase* self=Luna< osg::Referenced >::checkSubType< osgText::TextBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::TextBase::setMaximumWidth(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setMaximumWidth(maximumWidth);

		return 0;
	}

	// float osgText::TextBase::getMaximumWidth() const
	static int _bind_getMaximumWidth(lua_State *L) {
		if (!_lg_typecheck_getMaximumWidth(L)) {
			luaL_error(L, "luna typecheck failed in float osgText::TextBase::getMaximumWidth() const function, expected prototype:\nfloat osgText::TextBase::getMaximumWidth() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::TextBase* self=Luna< osg::Referenced >::checkSubType< osgText::TextBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgText::TextBase::getMaximumWidth() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getMaximumWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgText::TextBase::setMaximumHeight(float maximumHeight)
	static int _bind_setMaximumHeight(lua_State *L) {
		if (!_lg_typecheck_setMaximumHeight(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::TextBase::setMaximumHeight(float maximumHeight) function, expected prototype:\nvoid osgText::TextBase::setMaximumHeight(float maximumHeight)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float maximumHeight=(float)lua_tonumber(L,2);

		osgText::TextBase* self=Luna< osg::Referenced >::checkSubType< osgText::TextBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::TextBase::setMaximumHeight(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setMaximumHeight(maximumHeight);

		return 0;
	}

	// float osgText::TextBase::getMaximumHeight() const
	static int _bind_getMaximumHeight(lua_State *L) {
		if (!_lg_typecheck_getMaximumHeight(L)) {
			luaL_error(L, "luna typecheck failed in float osgText::TextBase::getMaximumHeight() const function, expected prototype:\nfloat osgText::TextBase::getMaximumHeight() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::TextBase* self=Luna< osg::Referenced >::checkSubType< osgText::TextBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgText::TextBase::getMaximumHeight() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getMaximumHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgText::TextBase::setLineSpacing(float lineSpacing)
	static int _bind_setLineSpacing(lua_State *L) {
		if (!_lg_typecheck_setLineSpacing(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::TextBase::setLineSpacing(float lineSpacing) function, expected prototype:\nvoid osgText::TextBase::setLineSpacing(float lineSpacing)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float lineSpacing=(float)lua_tonumber(L,2);

		osgText::TextBase* self=Luna< osg::Referenced >::checkSubType< osgText::TextBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::TextBase::setLineSpacing(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setLineSpacing(lineSpacing);

		return 0;
	}

	// float osgText::TextBase::getLineSpacing() const
	static int _bind_getLineSpacing(lua_State *L) {
		if (!_lg_typecheck_getLineSpacing(L)) {
			luaL_error(L, "luna typecheck failed in float osgText::TextBase::getLineSpacing() const function, expected prototype:\nfloat osgText::TextBase::getLineSpacing() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::TextBase* self=Luna< osg::Referenced >::checkSubType< osgText::TextBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgText::TextBase::getLineSpacing() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getLineSpacing();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgText::TextBase::setPosition(const osg::Vec3f & pos)
	static int _bind_setPosition(lua_State *L) {
		if (!_lg_typecheck_setPosition(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::TextBase::setPosition(const osg::Vec3f & pos) function, expected prototype:\nvoid osgText::TextBase::setPosition(const osg::Vec3f & pos)\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* pos_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in osgText::TextBase::setPosition function");
		}
		const osg::Vec3f & pos=*pos_ptr;

		osgText::TextBase* self=Luna< osg::Referenced >::checkSubType< osgText::TextBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::TextBase::setPosition(const osg::Vec3f &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setPosition(pos);

		return 0;
	}

	// const osg::Vec3f & osgText::TextBase::getPosition() const
	static int _bind_getPosition(lua_State *L) {
		if (!_lg_typecheck_getPosition(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec3f & osgText::TextBase::getPosition() const function, expected prototype:\nconst osg::Vec3f & osgText::TextBase::getPosition() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::TextBase* self=Luna< osg::Referenced >::checkSubType< osgText::TextBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec3f & osgText::TextBase::getPosition() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec3f* lret = &self->getPosition();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// void osgText::TextBase::setAlignment(osgText::TextBase::AlignmentType alignment)
	static int _bind_setAlignment(lua_State *L) {
		if (!_lg_typecheck_setAlignment(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::TextBase::setAlignment(osgText::TextBase::AlignmentType alignment) function, expected prototype:\nvoid osgText::TextBase::setAlignment(osgText::TextBase::AlignmentType alignment)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osgText::TextBase::AlignmentType alignment=(osgText::TextBase::AlignmentType)lua_tointeger(L,2);

		osgText::TextBase* self=Luna< osg::Referenced >::checkSubType< osgText::TextBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::TextBase::setAlignment(osgText::TextBase::AlignmentType). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setAlignment(alignment);

		return 0;
	}

	// osgText::TextBase::AlignmentType osgText::TextBase::getAlignment() const
	static int _bind_getAlignment(lua_State *L) {
		if (!_lg_typecheck_getAlignment(L)) {
			luaL_error(L, "luna typecheck failed in osgText::TextBase::AlignmentType osgText::TextBase::getAlignment() const function, expected prototype:\nosgText::TextBase::AlignmentType osgText::TextBase::getAlignment() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::TextBase* self=Luna< osg::Referenced >::checkSubType< osgText::TextBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgText::TextBase::AlignmentType osgText::TextBase::getAlignment() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgText::TextBase::AlignmentType lret = self->getAlignment();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgText::TextBase::setAxisAlignment(osgText::TextBase::AxisAlignment axis)
	static int _bind_setAxisAlignment(lua_State *L) {
		if (!_lg_typecheck_setAxisAlignment(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::TextBase::setAxisAlignment(osgText::TextBase::AxisAlignment axis) function, expected prototype:\nvoid osgText::TextBase::setAxisAlignment(osgText::TextBase::AxisAlignment axis)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osgText::TextBase::AxisAlignment axis=(osgText::TextBase::AxisAlignment)lua_tointeger(L,2);

		osgText::TextBase* self=Luna< osg::Referenced >::checkSubType< osgText::TextBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::TextBase::setAxisAlignment(osgText::TextBase::AxisAlignment). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setAxisAlignment(axis);

		return 0;
	}

	// osgText::TextBase::AxisAlignment osgText::TextBase::getAxisAlignment() const
	static int _bind_getAxisAlignment(lua_State *L) {
		if (!_lg_typecheck_getAxisAlignment(L)) {
			luaL_error(L, "luna typecheck failed in osgText::TextBase::AxisAlignment osgText::TextBase::getAxisAlignment() const function, expected prototype:\nosgText::TextBase::AxisAlignment osgText::TextBase::getAxisAlignment() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::TextBase* self=Luna< osg::Referenced >::checkSubType< osgText::TextBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgText::TextBase::AxisAlignment osgText::TextBase::getAxisAlignment() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgText::TextBase::AxisAlignment lret = self->getAxisAlignment();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgText::TextBase::setRotation(const osg::Quat & quat)
	static int _bind_setRotation(lua_State *L) {
		if (!_lg_typecheck_setRotation(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::TextBase::setRotation(const osg::Quat & quat) function, expected prototype:\nvoid osgText::TextBase::setRotation(const osg::Quat & quat)\nClass arguments details:\narg 1 ID = 80263306\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Quat* quat_ptr=(Luna< osg::Quat >::check(L,2));
		if( !quat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg quat in osgText::TextBase::setRotation function");
		}
		const osg::Quat & quat=*quat_ptr;

		osgText::TextBase* self=Luna< osg::Referenced >::checkSubType< osgText::TextBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::TextBase::setRotation(const osg::Quat &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setRotation(quat);

		return 0;
	}

	// const osg::Quat & osgText::TextBase::getRotation() const
	static int _bind_getRotation(lua_State *L) {
		if (!_lg_typecheck_getRotation(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Quat & osgText::TextBase::getRotation() const function, expected prototype:\nconst osg::Quat & osgText::TextBase::getRotation() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::TextBase* self=Luna< osg::Referenced >::checkSubType< osgText::TextBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Quat & osgText::TextBase::getRotation() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Quat* lret = &self->getRotation();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Quat >::push(L,lret,false);

		return 1;
	}

	// void osgText::TextBase::setAutoRotateToScreen(bool autoRotateToScreen)
	static int _bind_setAutoRotateToScreen(lua_State *L) {
		if (!_lg_typecheck_setAutoRotateToScreen(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::TextBase::setAutoRotateToScreen(bool autoRotateToScreen) function, expected prototype:\nvoid osgText::TextBase::setAutoRotateToScreen(bool autoRotateToScreen)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool autoRotateToScreen=(bool)(lua_toboolean(L,2)==1);

		osgText::TextBase* self=Luna< osg::Referenced >::checkSubType< osgText::TextBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::TextBase::setAutoRotateToScreen(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setAutoRotateToScreen(autoRotateToScreen);

		return 0;
	}

	// bool osgText::TextBase::getAutoRotateToScreen() const
	static int _bind_getAutoRotateToScreen(lua_State *L) {
		if (!_lg_typecheck_getAutoRotateToScreen(L)) {
			luaL_error(L, "luna typecheck failed in bool osgText::TextBase::getAutoRotateToScreen() const function, expected prototype:\nbool osgText::TextBase::getAutoRotateToScreen() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::TextBase* self=Luna< osg::Referenced >::checkSubType< osgText::TextBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgText::TextBase::getAutoRotateToScreen() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getAutoRotateToScreen();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgText::TextBase::setLayout(osgText::TextBase::Layout layout)
	static int _bind_setLayout(lua_State *L) {
		if (!_lg_typecheck_setLayout(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::TextBase::setLayout(osgText::TextBase::Layout layout) function, expected prototype:\nvoid osgText::TextBase::setLayout(osgText::TextBase::Layout layout)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osgText::TextBase::Layout layout=(osgText::TextBase::Layout)lua_tointeger(L,2);

		osgText::TextBase* self=Luna< osg::Referenced >::checkSubType< osgText::TextBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::TextBase::setLayout(osgText::TextBase::Layout). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setLayout(layout);

		return 0;
	}

	// osgText::TextBase::Layout osgText::TextBase::getLayout() const
	static int _bind_getLayout(lua_State *L) {
		if (!_lg_typecheck_getLayout(L)) {
			luaL_error(L, "luna typecheck failed in osgText::TextBase::Layout osgText::TextBase::getLayout() const function, expected prototype:\nosgText::TextBase::Layout osgText::TextBase::getLayout() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::TextBase* self=Luna< osg::Referenced >::checkSubType< osgText::TextBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgText::TextBase::Layout osgText::TextBase::getLayout() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgText::TextBase::Layout lret = self->getLayout();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgText::TextBase::setDrawMode(unsigned int mode)
	static int _bind_setDrawMode(lua_State *L) {
		if (!_lg_typecheck_setDrawMode(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::TextBase::setDrawMode(unsigned int mode) function, expected prototype:\nvoid osgText::TextBase::setDrawMode(unsigned int mode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int mode=(unsigned int)lua_tointeger(L,2);

		osgText::TextBase* self=Luna< osg::Referenced >::checkSubType< osgText::TextBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::TextBase::setDrawMode(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setDrawMode(mode);

		return 0;
	}

	// unsigned int osgText::TextBase::getDrawMode() const
	static int _bind_getDrawMode(lua_State *L) {
		if (!_lg_typecheck_getDrawMode(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osgText::TextBase::getDrawMode() const function, expected prototype:\nunsigned int osgText::TextBase::getDrawMode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::TextBase* self=Luna< osg::Referenced >::checkSubType< osgText::TextBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osgText::TextBase::getDrawMode() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getDrawMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgText::TextBase::setBoundingBoxMargin(float margin)
	static int _bind_setBoundingBoxMargin(lua_State *L) {
		if (!_lg_typecheck_setBoundingBoxMargin(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::TextBase::setBoundingBoxMargin(float margin) function, expected prototype:\nvoid osgText::TextBase::setBoundingBoxMargin(float margin)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float margin=(float)lua_tonumber(L,2);

		osgText::TextBase* self=Luna< osg::Referenced >::checkSubType< osgText::TextBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::TextBase::setBoundingBoxMargin(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setBoundingBoxMargin(margin);

		return 0;
	}

	// float osgText::TextBase::getBoundingBoxMargin() const
	static int _bind_getBoundingBoxMargin(lua_State *L) {
		if (!_lg_typecheck_getBoundingBoxMargin(L)) {
			luaL_error(L, "luna typecheck failed in float osgText::TextBase::getBoundingBoxMargin() const function, expected prototype:\nfloat osgText::TextBase::getBoundingBoxMargin() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::TextBase* self=Luna< osg::Referenced >::checkSubType< osgText::TextBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgText::TextBase::getBoundingBoxMargin() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getBoundingBoxMargin();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgText::TextBase::setBoundingBoxColor(const osg::Vec4f & color)
	static int _bind_setBoundingBoxColor(lua_State *L) {
		if (!_lg_typecheck_setBoundingBoxColor(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::TextBase::setBoundingBoxColor(const osg::Vec4f & color) function, expected prototype:\nvoid osgText::TextBase::setBoundingBoxColor(const osg::Vec4f & color)\nClass arguments details:\narg 1 ID = 92303235\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec4f* color_ptr=(Luna< osg::Vec4f >::check(L,2));
		if( !color_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg color in osgText::TextBase::setBoundingBoxColor function");
		}
		const osg::Vec4f & color=*color_ptr;

		osgText::TextBase* self=Luna< osg::Referenced >::checkSubType< osgText::TextBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::TextBase::setBoundingBoxColor(const osg::Vec4f &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setBoundingBoxColor(color);

		return 0;
	}

	// const osg::Vec4f & osgText::TextBase::getBoundingBoxColor() const
	static int _bind_getBoundingBoxColor(lua_State *L) {
		if (!_lg_typecheck_getBoundingBoxColor(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec4f & osgText::TextBase::getBoundingBoxColor() const function, expected prototype:\nconst osg::Vec4f & osgText::TextBase::getBoundingBoxColor() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::TextBase* self=Luna< osg::Referenced >::checkSubType< osgText::TextBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec4f & osgText::TextBase::getBoundingBoxColor() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec4f* lret = &self->getBoundingBoxColor();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4f >::push(L,lret,false);

		return 1;
	}

	// void osgText::TextBase::setKerningType(osgText::KerningType kerningType)
	static int _bind_setKerningType(lua_State *L) {
		if (!_lg_typecheck_setKerningType(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::TextBase::setKerningType(osgText::KerningType kerningType) function, expected prototype:\nvoid osgText::TextBase::setKerningType(osgText::KerningType kerningType)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osgText::KerningType kerningType=(osgText::KerningType)lua_tointeger(L,2);

		osgText::TextBase* self=Luna< osg::Referenced >::checkSubType< osgText::TextBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::TextBase::setKerningType(osgText::KerningType). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setKerningType(kerningType);

		return 0;
	}

	// osgText::KerningType osgText::TextBase::getKerningType() const
	static int _bind_getKerningType(lua_State *L) {
		if (!_lg_typecheck_getKerningType(L)) {
			luaL_error(L, "luna typecheck failed in osgText::KerningType osgText::TextBase::getKerningType() const function, expected prototype:\nosgText::KerningType osgText::TextBase::getKerningType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::TextBase* self=Luna< osg::Referenced >::checkSubType< osgText::TextBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgText::KerningType osgText::TextBase::getKerningType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgText::KerningType lret = self->getKerningType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osgText::TextBase::getLineCount() const
	static int _bind_getLineCount(lua_State *L) {
		if (!_lg_typecheck_getLineCount(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osgText::TextBase::getLineCount() const function, expected prototype:\nunsigned int osgText::TextBase::getLineCount() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::TextBase* self=Luna< osg::Referenced >::checkSubType< osgText::TextBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osgText::TextBase::getLineCount() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getLineCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgText::TextBase::setThreadSafeRefUnref(bool threadSafe)
	static int _bind_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::TextBase::setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgText::TextBase::setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgText::TextBase* self=Luna< osg::Referenced >::checkSubType< osgText::TextBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::TextBase::setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osgText::TextBase::releaseGLObjects(osg::State * state = 0) const
	static int _bind_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::TextBase::releaseGLObjects(osg::State * state = 0) const function, expected prototype:\nvoid osgText::TextBase::releaseGLObjects(osg::State * state = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* state=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osgText::TextBase* self=Luna< osg::Referenced >::checkSubType< osgText::TextBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::TextBase::releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->releaseGLObjects(state);

		return 0;
	}

	// osg::BoundingBoxd osgText::TextBase::computeBound() const
	static int _bind_computeBound(lua_State *L) {
		if (!_lg_typecheck_computeBound(L)) {
			luaL_error(L, "luna typecheck failed in osg::BoundingBoxd osgText::TextBase::computeBound() const function, expected prototype:\nosg::BoundingBoxd osgText::TextBase::computeBound() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::TextBase* self=Luna< osg::Referenced >::checkSubType< osgText::TextBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::BoundingBoxd osgText::TextBase::computeBound() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::BoundingBoxd stack_lret = self->computeBound();
		osg::BoundingBoxd* lret = new osg::BoundingBoxd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingBoxd >::push(L,lret,true);

		return 1;
	}

	// void osgText::TextBase::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::TextBase::base_setName(const std::string & name) function, expected prototype:\nvoid osgText::TextBase::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgText::TextBase* self=Luna< osg::Referenced >::checkSubType< osgText::TextBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::TextBase::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TextBase::setName(name);

		return 0;
	}

	// void osgText::TextBase::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::TextBase::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osgText::TextBase::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osgText::TextBase* self=Luna< osg::Referenced >::checkSubType< osgText::TextBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::TextBase::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TextBase::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osgText::TextBase::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osgText::TextBase::base_getUserData() function, expected prototype:\nosg::Referenced * osgText::TextBase::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::TextBase* self=Luna< osg::Referenced >::checkSubType< osgText::TextBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osgText::TextBase::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->TextBase::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osgText::TextBase::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osgText::TextBase::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osgText::TextBase::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::TextBase* self=Luna< osg::Referenced >::checkSubType< osgText::TextBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osgText::TextBase::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->TextBase::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgText::TextBase::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// osg::Geometry * osgText::TextBase::base_asGeometry()
	static int _bind_base_asGeometry_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asGeometry_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Geometry * osgText::TextBase::base_asGeometry() function, expected prototype:\nosg::Geometry * osgText::TextBase::base_asGeometry()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::TextBase* self=Luna< osg::Referenced >::checkSubType< osgText::TextBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Geometry * osgText::TextBase::base_asGeometry(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Geometry * lret = self->TextBase::asGeometry();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geometry >::push(L,lret,false);

		return 1;
	}

	// const osg::Geometry * osgText::TextBase::base_asGeometry() const
	static int _bind_base_asGeometry_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asGeometry_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Geometry * osgText::TextBase::base_asGeometry() const function, expected prototype:\nconst osg::Geometry * osgText::TextBase::base_asGeometry() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::TextBase* self=Luna< osg::Referenced >::checkSubType< osgText::TextBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Geometry * osgText::TextBase::base_asGeometry() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Geometry * lret = self->TextBase::asGeometry();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geometry >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgText::TextBase::base_asGeometry
	static int _bind_base_asGeometry(lua_State *L) {
		if (_lg_typecheck_base_asGeometry_overload_1(L)) return _bind_base_asGeometry_overload_1(L);
		if (_lg_typecheck_base_asGeometry_overload_2(L)) return _bind_base_asGeometry_overload_2(L);

		luaL_error(L, "error in function base_asGeometry, cannot match any of the overloads for function base_asGeometry:\n  base_asGeometry()\n  base_asGeometry()\n");
		return 0;
	}

	// void osgText::TextBase::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::TextBase::base_computeDataVariance() function, expected prototype:\nvoid osgText::TextBase::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::TextBase* self=Luna< osg::Referenced >::checkSubType< osgText::TextBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::TextBase::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TextBase::computeDataVariance();

		return 0;
	}

	// void osgText::TextBase::base_setUseVertexBufferObjects(bool flag)
	static int _bind_base_setUseVertexBufferObjects(lua_State *L) {
		if (!_lg_typecheck_base_setUseVertexBufferObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::TextBase::base_setUseVertexBufferObjects(bool flag) function, expected prototype:\nvoid osgText::TextBase::base_setUseVertexBufferObjects(bool flag)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osgText::TextBase* self=Luna< osg::Referenced >::checkSubType< osgText::TextBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::TextBase::base_setUseVertexBufferObjects(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TextBase::setUseVertexBufferObjects(flag);

		return 0;
	}

	// void osgText::TextBase::base_dirtyDisplayList()
	static int _bind_base_dirtyDisplayList(lua_State *L) {
		if (!_lg_typecheck_base_dirtyDisplayList(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::TextBase::base_dirtyDisplayList() function, expected prototype:\nvoid osgText::TextBase::base_dirtyDisplayList()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::TextBase* self=Luna< osg::Referenced >::checkSubType< osgText::TextBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::TextBase::base_dirtyDisplayList(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TextBase::dirtyDisplayList();

		return 0;
	}

	// unsigned int osgText::TextBase::base_getGLObjectSizeHint() const
	static int _bind_base_getGLObjectSizeHint(lua_State *L) {
		if (!_lg_typecheck_base_getGLObjectSizeHint(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osgText::TextBase::base_getGLObjectSizeHint() const function, expected prototype:\nunsigned int osgText::TextBase::base_getGLObjectSizeHint() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::TextBase* self=Luna< osg::Referenced >::checkSubType< osgText::TextBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osgText::TextBase::base_getGLObjectSizeHint() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->TextBase::getGLObjectSizeHint();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgText::TextBase::base_compileGLObjects(osg::RenderInfo & renderInfo) const
	static int _bind_base_compileGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_compileGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::TextBase::base_compileGLObjects(osg::RenderInfo & renderInfo) const function, expected prototype:\nvoid osgText::TextBase::base_compileGLObjects(osg::RenderInfo & renderInfo) const\nClass arguments details:\narg 1 ID = 2286263\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::RenderInfo* renderInfo_ptr=(Luna< osg::RenderInfo >::check(L,2));
		if( !renderInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg renderInfo in osgText::TextBase::base_compileGLObjects function");
		}
		osg::RenderInfo & renderInfo=*renderInfo_ptr;

		osgText::TextBase* self=Luna< osg::Referenced >::checkSubType< osgText::TextBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::TextBase::base_compileGLObjects(osg::RenderInfo &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TextBase::compileGLObjects(renderInfo);

		return 0;
	}

	// void osgText::TextBase::base_setUpdateCallback(osg::Drawable::UpdateCallback * ac)
	static int _bind_base_setUpdateCallback(lua_State *L) {
		if (!_lg_typecheck_base_setUpdateCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::TextBase::base_setUpdateCallback(osg::Drawable::UpdateCallback * ac) function, expected prototype:\nvoid osgText::TextBase::base_setUpdateCallback(osg::Drawable::UpdateCallback * ac)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Drawable::UpdateCallback* ac=(Luna< osg::Referenced >::checkSubType< osg::Drawable::UpdateCallback >(L,2));

		osgText::TextBase* self=Luna< osg::Referenced >::checkSubType< osgText::TextBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::TextBase::base_setUpdateCallback(osg::Drawable::UpdateCallback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TextBase::setUpdateCallback(ac);

		return 0;
	}

	// void osgText::TextBase::base_setEventCallback(osg::Drawable::EventCallback * ac)
	static int _bind_base_setEventCallback(lua_State *L) {
		if (!_lg_typecheck_base_setEventCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::TextBase::base_setEventCallback(osg::Drawable::EventCallback * ac) function, expected prototype:\nvoid osgText::TextBase::base_setEventCallback(osg::Drawable::EventCallback * ac)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Drawable::EventCallback* ac=(Luna< osg::Referenced >::checkSubType< osg::Drawable::EventCallback >(L,2));

		osgText::TextBase* self=Luna< osg::Referenced >::checkSubType< osgText::TextBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::TextBase::base_setEventCallback(osg::Drawable::EventCallback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TextBase::setEventCallback(ac);

		return 0;
	}

	// void osgText::TextBase::base_setCullCallback(osg::Drawable::CullCallback * cc)
	static int _bind_base_setCullCallback(lua_State *L) {
		if (!_lg_typecheck_base_setCullCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::TextBase::base_setCullCallback(osg::Drawable::CullCallback * cc) function, expected prototype:\nvoid osgText::TextBase::base_setCullCallback(osg::Drawable::CullCallback * cc)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Drawable::CullCallback* cc=(Luna< osg::Referenced >::checkSubType< osg::Drawable::CullCallback >(L,2));

		osgText::TextBase* self=Luna< osg::Referenced >::checkSubType< osgText::TextBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::TextBase::base_setCullCallback(osg::Drawable::CullCallback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TextBase::setCullCallback(cc);

		return 0;
	}

	// void osgText::TextBase::base_setDrawCallback(osg::Drawable::DrawCallback * dc)
	static int _bind_base_setDrawCallback(lua_State *L) {
		if (!_lg_typecheck_base_setDrawCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::TextBase::base_setDrawCallback(osg::Drawable::DrawCallback * dc) function, expected prototype:\nvoid osgText::TextBase::base_setDrawCallback(osg::Drawable::DrawCallback * dc)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Drawable::DrawCallback* dc=(Luna< osg::Referenced >::checkSubType< osg::Drawable::DrawCallback >(L,2));

		osgText::TextBase* self=Luna< osg::Referenced >::checkSubType< osgText::TextBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::TextBase::base_setDrawCallback(osg::Drawable::DrawCallback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TextBase::setDrawCallback(dc);

		return 0;
	}

	// bool osgText::TextBase::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgText::TextBase::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgText::TextBase::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgText::TextBase* self=Luna< osg::Referenced >::checkSubType< osgText::TextBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgText::TextBase::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TextBase::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgText::TextBase::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgText::TextBase::base_className() const function, expected prototype:\nconst char * osgText::TextBase::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::TextBase* self=Luna< osg::Referenced >::checkSubType< osgText::TextBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgText::TextBase::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->TextBase::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgText::TextBase::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgText::TextBase::base_libraryName() const function, expected prototype:\nconst char * osgText::TextBase::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::TextBase* self=Luna< osg::Referenced >::checkSubType< osgText::TextBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgText::TextBase::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->TextBase::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgText::TextBase::base_setFont(osgText::Font * font = 0)
	static int _bind_base_setFont_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_setFont_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::TextBase::base_setFont(osgText::Font * font = 0) function, expected prototype:\nvoid osgText::TextBase::base_setFont(osgText::Font * font = 0)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osgText::Font* font=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osgText::Font >(L,2)) : (osgText::Font*)0;

		osgText::TextBase* self=Luna< osg::Referenced >::checkSubType< osgText::TextBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::TextBase::base_setFont(osgText::Font *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TextBase::setFont(font);

		return 0;
	}

	// void osgText::TextBase::base_setFont(const std::string & fontfile)
	static int _bind_base_setFont_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_setFont_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::TextBase::base_setFont(const std::string & fontfile) function, expected prototype:\nvoid osgText::TextBase::base_setFont(const std::string & fontfile)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string fontfile(lua_tostring(L,2),lua_objlen(L,2));

		osgText::TextBase* self=Luna< osg::Referenced >::checkSubType< osgText::TextBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::TextBase::base_setFont(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TextBase::setFont(fontfile);

		return 0;
	}

	// Overload binder for osgText::TextBase::base_setFont
	static int _bind_base_setFont(lua_State *L) {
		if (_lg_typecheck_base_setFont_overload_1(L)) return _bind_base_setFont_overload_1(L);
		if (_lg_typecheck_base_setFont_overload_2(L)) return _bind_base_setFont_overload_2(L);

		luaL_error(L, "error in function base_setFont, cannot match any of the overloads for function base_setFont:\n  base_setFont(osgText::Font *)\n  base_setFont(const std::string &)\n");
		return 0;
	}

	// void osgText::TextBase::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::TextBase::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgText::TextBase::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgText::TextBase* self=Luna< osg::Referenced >::checkSubType< osgText::TextBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::TextBase::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TextBase::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osgText::TextBase::base_releaseGLObjects(osg::State * state = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::TextBase::base_releaseGLObjects(osg::State * state = 0) const function, expected prototype:\nvoid osgText::TextBase::base_releaseGLObjects(osg::State * state = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* state=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osgText::TextBase* self=Luna< osg::Referenced >::checkSubType< osgText::TextBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::TextBase::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TextBase::releaseGLObjects(state);

		return 0;
	}

	// osg::BoundingBoxd osgText::TextBase::base_computeBound() const
	static int _bind_base_computeBound(lua_State *L) {
		if (!_lg_typecheck_base_computeBound(L)) {
			luaL_error(L, "luna typecheck failed in osg::BoundingBoxd osgText::TextBase::base_computeBound() const function, expected prototype:\nosg::BoundingBoxd osgText::TextBase::base_computeBound() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::TextBase* self=Luna< osg::Referenced >::checkSubType< osgText::TextBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::BoundingBoxd osgText::TextBase::base_computeBound() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::BoundingBoxd stack_lret = self->TextBase::computeBound();
		osg::BoundingBoxd* lret = new osg::BoundingBoxd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingBoxd >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

osgText::TextBase* LunaTraits< osgText::TextBase >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgText_TextBase::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void osgText::TextBase::computePositions(unsigned int contextID) const
	// void osgText::TextBase::computeGlyphRepresentation()
	// void osg::Drawable::drawImplementation(osg::RenderInfo & renderInfo) const
	// osg::Object * osg::Object::cloneType() const
	// osg::Object * osg::Object::clone(const osg::CopyOp & arg1) const
}

void LunaTraits< osgText::TextBase >::_bind_dtor(osgText::TextBase* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgText::TextBase >::className[] = "TextBase";
const char LunaTraits< osgText::TextBase >::fullName[] = "osgText::TextBase";
const char LunaTraits< osgText::TextBase >::moduleName[] = "osgText";
const char* LunaTraits< osgText::TextBase >::parents[] = {"osg.Drawable", 0};
const int LunaTraits< osgText::TextBase >::hash = 25636853;
const int LunaTraits< osgText::TextBase >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgText::TextBase >::methods[] = {
	{"isSameKindAs", &luna_wrapper_osgText_TextBase::_bind_isSameKindAs},
	{"className", &luna_wrapper_osgText_TextBase::_bind_className},
	{"libraryName", &luna_wrapper_osgText_TextBase::_bind_libraryName},
	{"setColor", &luna_wrapper_osgText_TextBase::_bind_setColor},
	{"getColor", &luna_wrapper_osgText_TextBase::_bind_getColor},
	{"setFont", &luna_wrapper_osgText_TextBase::_bind_setFont},
	{"getFont", &luna_wrapper_osgText_TextBase::_bind_getFont},
	{"setStyle", &luna_wrapper_osgText_TextBase::_bind_setStyle},
	{"getStyle", &luna_wrapper_osgText_TextBase::_bind_getStyle},
	{"getOrCreateStyle", &luna_wrapper_osgText_TextBase::_bind_getOrCreateStyle},
	{"setFontResolution", &luna_wrapper_osgText_TextBase::_bind_setFontResolution},
	{"getFontWidth", &luna_wrapper_osgText_TextBase::_bind_getFontWidth},
	{"getFontHeight", &luna_wrapper_osgText_TextBase::_bind_getFontHeight},
	{"setText", &luna_wrapper_osgText_TextBase::_bind_setText},
	{"getText", &luna_wrapper_osgText_TextBase::_bind_getText},
	{"update", &luna_wrapper_osgText_TextBase::_bind_update},
	{"setCharacterSize", &luna_wrapper_osgText_TextBase::_bind_setCharacterSize},
	{"getCharacterHeight", &luna_wrapper_osgText_TextBase::_bind_getCharacterHeight},
	{"getCharacterAspectRatio", &luna_wrapper_osgText_TextBase::_bind_getCharacterAspectRatio},
	{"setCharacterSizeMode", &luna_wrapper_osgText_TextBase::_bind_setCharacterSizeMode},
	{"getCharacterSizeMode", &luna_wrapper_osgText_TextBase::_bind_getCharacterSizeMode},
	{"setMaximumWidth", &luna_wrapper_osgText_TextBase::_bind_setMaximumWidth},
	{"getMaximumWidth", &luna_wrapper_osgText_TextBase::_bind_getMaximumWidth},
	{"setMaximumHeight", &luna_wrapper_osgText_TextBase::_bind_setMaximumHeight},
	{"getMaximumHeight", &luna_wrapper_osgText_TextBase::_bind_getMaximumHeight},
	{"setLineSpacing", &luna_wrapper_osgText_TextBase::_bind_setLineSpacing},
	{"getLineSpacing", &luna_wrapper_osgText_TextBase::_bind_getLineSpacing},
	{"setPosition", &luna_wrapper_osgText_TextBase::_bind_setPosition},
	{"getPosition", &luna_wrapper_osgText_TextBase::_bind_getPosition},
	{"setAlignment", &luna_wrapper_osgText_TextBase::_bind_setAlignment},
	{"getAlignment", &luna_wrapper_osgText_TextBase::_bind_getAlignment},
	{"setAxisAlignment", &luna_wrapper_osgText_TextBase::_bind_setAxisAlignment},
	{"getAxisAlignment", &luna_wrapper_osgText_TextBase::_bind_getAxisAlignment},
	{"setRotation", &luna_wrapper_osgText_TextBase::_bind_setRotation},
	{"getRotation", &luna_wrapper_osgText_TextBase::_bind_getRotation},
	{"setAutoRotateToScreen", &luna_wrapper_osgText_TextBase::_bind_setAutoRotateToScreen},
	{"getAutoRotateToScreen", &luna_wrapper_osgText_TextBase::_bind_getAutoRotateToScreen},
	{"setLayout", &luna_wrapper_osgText_TextBase::_bind_setLayout},
	{"getLayout", &luna_wrapper_osgText_TextBase::_bind_getLayout},
	{"setDrawMode", &luna_wrapper_osgText_TextBase::_bind_setDrawMode},
	{"getDrawMode", &luna_wrapper_osgText_TextBase::_bind_getDrawMode},
	{"setBoundingBoxMargin", &luna_wrapper_osgText_TextBase::_bind_setBoundingBoxMargin},
	{"getBoundingBoxMargin", &luna_wrapper_osgText_TextBase::_bind_getBoundingBoxMargin},
	{"setBoundingBoxColor", &luna_wrapper_osgText_TextBase::_bind_setBoundingBoxColor},
	{"getBoundingBoxColor", &luna_wrapper_osgText_TextBase::_bind_getBoundingBoxColor},
	{"setKerningType", &luna_wrapper_osgText_TextBase::_bind_setKerningType},
	{"getKerningType", &luna_wrapper_osgText_TextBase::_bind_getKerningType},
	{"getLineCount", &luna_wrapper_osgText_TextBase::_bind_getLineCount},
	{"setThreadSafeRefUnref", &luna_wrapper_osgText_TextBase::_bind_setThreadSafeRefUnref},
	{"releaseGLObjects", &luna_wrapper_osgText_TextBase::_bind_releaseGLObjects},
	{"computeBound", &luna_wrapper_osgText_TextBase::_bind_computeBound},
	{"base_setName", &luna_wrapper_osgText_TextBase::_bind_base_setName},
	{"base_setUserData", &luna_wrapper_osgText_TextBase::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osgText_TextBase::_bind_base_getUserData},
	{"base_asGeometry", &luna_wrapper_osgText_TextBase::_bind_base_asGeometry},
	{"base_computeDataVariance", &luna_wrapper_osgText_TextBase::_bind_base_computeDataVariance},
	{"base_setUseVertexBufferObjects", &luna_wrapper_osgText_TextBase::_bind_base_setUseVertexBufferObjects},
	{"base_dirtyDisplayList", &luna_wrapper_osgText_TextBase::_bind_base_dirtyDisplayList},
	{"base_getGLObjectSizeHint", &luna_wrapper_osgText_TextBase::_bind_base_getGLObjectSizeHint},
	{"base_compileGLObjects", &luna_wrapper_osgText_TextBase::_bind_base_compileGLObjects},
	{"base_setUpdateCallback", &luna_wrapper_osgText_TextBase::_bind_base_setUpdateCallback},
	{"base_setEventCallback", &luna_wrapper_osgText_TextBase::_bind_base_setEventCallback},
	{"base_setCullCallback", &luna_wrapper_osgText_TextBase::_bind_base_setCullCallback},
	{"base_setDrawCallback", &luna_wrapper_osgText_TextBase::_bind_base_setDrawCallback},
	{"base_isSameKindAs", &luna_wrapper_osgText_TextBase::_bind_base_isSameKindAs},
	{"base_className", &luna_wrapper_osgText_TextBase::_bind_base_className},
	{"base_libraryName", &luna_wrapper_osgText_TextBase::_bind_base_libraryName},
	{"base_setFont", &luna_wrapper_osgText_TextBase::_bind_base_setFont},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgText_TextBase::_bind_base_setThreadSafeRefUnref},
	{"base_releaseGLObjects", &luna_wrapper_osgText_TextBase::_bind_base_releaseGLObjects},
	{"base_computeBound", &luna_wrapper_osgText_TextBase::_bind_base_computeBound},
	{"fromVoid", &luna_wrapper_osgText_TextBase::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgText_TextBase::_bind_asVoid},
	{"getTable", &luna_wrapper_osgText_TextBase::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgText::TextBase >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgText_TextBase::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgText::TextBase >::enumValues[] = {
	{"OBJECT_COORDS", osgText::TextBase::OBJECT_COORDS},
	{"SCREEN_COORDS", osgText::TextBase::SCREEN_COORDS},
	{"OBJECT_COORDS_WITH_MAXIMUM_SCREEN_SIZE_CAPPED_BY_FONT_HEIGHT", osgText::TextBase::OBJECT_COORDS_WITH_MAXIMUM_SCREEN_SIZE_CAPPED_BY_FONT_HEIGHT},
	{"LEFT_TOP", osgText::TextBase::LEFT_TOP},
	{"LEFT_CENTER", osgText::TextBase::LEFT_CENTER},
	{"LEFT_BOTTOM", osgText::TextBase::LEFT_BOTTOM},
	{"CENTER_TOP", osgText::TextBase::CENTER_TOP},
	{"CENTER_CENTER", osgText::TextBase::CENTER_CENTER},
	{"CENTER_BOTTOM", osgText::TextBase::CENTER_BOTTOM},
	{"RIGHT_TOP", osgText::TextBase::RIGHT_TOP},
	{"RIGHT_CENTER", osgText::TextBase::RIGHT_CENTER},
	{"RIGHT_BOTTOM", osgText::TextBase::RIGHT_BOTTOM},
	{"LEFT_BASE_LINE", osgText::TextBase::LEFT_BASE_LINE},
	{"CENTER_BASE_LINE", osgText::TextBase::CENTER_BASE_LINE},
	{"RIGHT_BASE_LINE", osgText::TextBase::RIGHT_BASE_LINE},
	{"LEFT_BOTTOM_BASE_LINE", osgText::TextBase::LEFT_BOTTOM_BASE_LINE},
	{"CENTER_BOTTOM_BASE_LINE", osgText::TextBase::CENTER_BOTTOM_BASE_LINE},
	{"RIGHT_BOTTOM_BASE_LINE", osgText::TextBase::RIGHT_BOTTOM_BASE_LINE},
	{"BASE_LINE", osgText::TextBase::BASE_LINE},
	{"XY_PLANE", osgText::TextBase::XY_PLANE},
	{"REVERSED_XY_PLANE", osgText::TextBase::REVERSED_XY_PLANE},
	{"XZ_PLANE", osgText::TextBase::XZ_PLANE},
	{"REVERSED_XZ_PLANE", osgText::TextBase::REVERSED_XZ_PLANE},
	{"YZ_PLANE", osgText::TextBase::YZ_PLANE},
	{"REVERSED_YZ_PLANE", osgText::TextBase::REVERSED_YZ_PLANE},
	{"SCREEN", osgText::TextBase::SCREEN},
	{"USER_DEFINED_ROTATION", osgText::TextBase::USER_DEFINED_ROTATION},
	{"LEFT_TO_RIGHT", osgText::TextBase::LEFT_TO_RIGHT},
	{"RIGHT_TO_LEFT", osgText::TextBase::RIGHT_TO_LEFT},
	{"VERTICAL", osgText::TextBase::VERTICAL},
	{"TEXT", osgText::TextBase::TEXT},
	{"BOUNDINGBOX", osgText::TextBase::BOUNDINGBOX},
	{"FILLEDBOUNDINGBOX", osgText::TextBase::FILLEDBOUNDINGBOX},
	{"ALIGNMENT", osgText::TextBase::ALIGNMENT},
	{0,0}
};



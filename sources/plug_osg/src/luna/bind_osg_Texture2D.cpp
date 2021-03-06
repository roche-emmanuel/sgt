#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_Texture2D.h>

class luna_wrapper_osg_Texture2D {
public:
	typedef Luna< osg::Texture2D > luna_t;

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

		osg::Texture2D* self= (osg::Texture2D*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::Texture2D >::push(L,self,false);
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
		//osg::Texture2D* ptr= dynamic_cast< osg::Texture2D* >(Luna< osg::Referenced >::check(L,1));
		osg::Texture2D* ptr= luna_caster< osg::Referenced, osg::Texture2D >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::Texture2D >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Image >(L,1)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Texture2D >(L,1))) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( luatop>1 && (!(Luna< osg::CopyOp >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Image >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Texture2D >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_getType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_compare(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTextureTarget(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setImage_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Image >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setImage_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Image >(L,3)) ) ) return false;
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

	inline static bool _lg_typecheck_getImage_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getImage_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getModifiedCount(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumImages(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTextureSize(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTextureWidth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTextureHeight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTextureWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTextureHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTextureDepth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setSubloadCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSubloadCallback_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSubloadCallback_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setNumMipmapLevels(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumMipmapLevels(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_copyTexImage2D(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_copyTexSubImage2D(lua_State *L) {
		if( lua_gettop(L)!=8 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( (lua_type(L,8)!=LUA_TNUMBER || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
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

	inline static bool _lg_typecheck_base_getMember(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_checkValidityOfAssociatedModes(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_asTexture_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asTexture_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_isTextureAttribute(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getModeUsage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,48108040) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_compileGLObjects(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
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

	inline static bool _lg_typecheck_base_getType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_compare(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getTextureTarget(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setImage(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getImage_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getImage_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getNumImages(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getTextureWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getTextureHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getTextureDepth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_apply(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::Texture2D::Texture2D()
	static osg::Texture2D* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Texture2D::Texture2D() function, expected prototype:\nosg::Texture2D::Texture2D()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::Texture2D();
	}

	// osg::Texture2D::Texture2D(osg::Image * image)
	static osg::Texture2D* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Texture2D::Texture2D(osg::Image * image) function, expected prototype:\nosg::Texture2D::Texture2D(osg::Image * image)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Image* image=(Luna< osg::Referenced >::checkSubType< osg::Image >(L,1));

		return new osg::Texture2D(image);
	}

	// osg::Texture2D::Texture2D(const osg::Texture2D & text, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::Texture2D* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::Texture2D::Texture2D(const osg::Texture2D & text, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::Texture2D::Texture2D(const osg::Texture2D & text, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::Texture2D* text_ptr=(Luna< osg::Referenced >::checkSubType< osg::Texture2D >(L,1));
		if( !text_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg text in osg::Texture2D::Texture2D function");
		}
		const osg::Texture2D & text=*text_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Texture2D::Texture2D function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osg::Texture2D(text, copyop);
	}

	// osg::Texture2D::Texture2D(lua_Table * data)
	static osg::Texture2D* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::Texture2D::Texture2D(lua_Table * data) function, expected prototype:\nosg::Texture2D::Texture2D(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_Texture2D(L,NULL);
	}

	// osg::Texture2D::Texture2D(lua_Table * data, osg::Image * image)
	static osg::Texture2D* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in osg::Texture2D::Texture2D(lua_Table * data, osg::Image * image) function, expected prototype:\nosg::Texture2D::Texture2D(lua_Table * data, osg::Image * image)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Image* image=(Luna< osg::Referenced >::checkSubType< osg::Image >(L,2));

		return new wrapper_osg_Texture2D(L,NULL, image);
	}

	// osg::Texture2D::Texture2D(lua_Table * data, const osg::Texture2D & text, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::Texture2D* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in osg::Texture2D::Texture2D(lua_Table * data, const osg::Texture2D & text, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::Texture2D::Texture2D(lua_Table * data, const osg::Texture2D & text, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::Texture2D* text_ptr=(Luna< osg::Referenced >::checkSubType< osg::Texture2D >(L,2));
		if( !text_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg text in osg::Texture2D::Texture2D function");
		}
		const osg::Texture2D & text=*text_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Texture2D::Texture2D function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_Texture2D(L,NULL, text, copyop);
	}

	// Overload binder for osg::Texture2D::Texture2D
	static osg::Texture2D* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);

		luaL_error(L, "error in function Texture2D, cannot match any of the overloads for function Texture2D:\n  Texture2D()\n  Texture2D(osg::Image *)\n  Texture2D(const osg::Texture2D &, const osg::CopyOp &)\n  Texture2D(lua_Table *)\n  Texture2D(lua_Table *, osg::Image *)\n  Texture2D(lua_Table *, const osg::Texture2D &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::Texture2D::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Texture2D::cloneType() const function, expected prototype:\nosg::Object * osg::Texture2D::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Texture2D* self=Luna< osg::Referenced >::checkSubType< osg::Texture2D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Texture2D::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Texture2D::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Texture2D::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::Texture2D::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Texture2D::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::Texture2D* self=Luna< osg::Referenced >::checkSubType< osg::Texture2D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Texture2D::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::Texture2D::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Texture2D::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Texture2D::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::Texture2D* self=Luna< osg::Referenced >::checkSubType< osg::Texture2D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Texture2D::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Texture2D::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Texture2D::libraryName() const function, expected prototype:\nconst char * osg::Texture2D::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Texture2D* self=Luna< osg::Referenced >::checkSubType< osg::Texture2D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Texture2D::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Texture2D::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Texture2D::className() const function, expected prototype:\nconst char * osg::Texture2D::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Texture2D* self=Luna< osg::Referenced >::checkSubType< osg::Texture2D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Texture2D::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::Texture2D::getType() const
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::Texture2D::getType() const function, expected prototype:\nosg::StateAttribute::Type osg::Texture2D::getType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Texture2D* self=Luna< osg::Referenced >::checkSubType< osg::Texture2D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::Texture2D::getType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::StateAttribute::Type lret = self->getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Texture2D::compare(const osg::StateAttribute & rhs) const
	static int _bind_compare(lua_State *L) {
		if (!_lg_typecheck_compare(L)) {
			luaL_error(L, "luna typecheck failed in int osg::Texture2D::compare(const osg::StateAttribute & rhs) const function, expected prototype:\nint osg::Texture2D::compare(const osg::StateAttribute & rhs) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::StateAttribute* rhs_ptr=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Texture2D::compare function");
		}
		const osg::StateAttribute & rhs=*rhs_ptr;

		osg::Texture2D* self=Luna< osg::Referenced >::checkSubType< osg::Texture2D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::Texture2D::compare(const osg::StateAttribute &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->compare(rhs);
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::Texture2D::getTextureTarget() const
	static int _bind_getTextureTarget(lua_State *L) {
		if (!_lg_typecheck_getTextureTarget(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Texture2D::getTextureTarget() const function, expected prototype:\nunsigned int osg::Texture2D::getTextureTarget() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Texture2D* self=Luna< osg::Referenced >::checkSubType< osg::Texture2D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Texture2D::getTextureTarget() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getTextureTarget();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Texture2D::setImage(osg::Image * image)
	static int _bind_setImage_overload_1(lua_State *L) {
		if (!_lg_typecheck_setImage_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Texture2D::setImage(osg::Image * image) function, expected prototype:\nvoid osg::Texture2D::setImage(osg::Image * image)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Image* image=(Luna< osg::Referenced >::checkSubType< osg::Image >(L,2));

		osg::Texture2D* self=Luna< osg::Referenced >::checkSubType< osg::Texture2D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Texture2D::setImage(osg::Image *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setImage(image);

		return 0;
	}

	// void osg::Texture2D::setImage(unsigned int arg1, osg::Image * image)
	static int _bind_setImage_overload_2(lua_State *L) {
		if (!_lg_typecheck_setImage_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Texture2D::setImage(unsigned int arg1, osg::Image * image) function, expected prototype:\nvoid osg::Texture2D::setImage(unsigned int arg1, osg::Image * image)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned _arg1=(unsigned)lua_tointeger(L,2);
		osg::Image* image=(Luna< osg::Referenced >::checkSubType< osg::Image >(L,3));

		osg::Texture2D* self=Luna< osg::Referenced >::checkSubType< osg::Texture2D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Texture2D::setImage(unsigned int, osg::Image *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setImage(_arg1, image);

		return 0;
	}

	// Overload binder for osg::Texture2D::setImage
	static int _bind_setImage(lua_State *L) {
		if (_lg_typecheck_setImage_overload_1(L)) return _bind_setImage_overload_1(L);
		if (_lg_typecheck_setImage_overload_2(L)) return _bind_setImage_overload_2(L);

		luaL_error(L, "error in function setImage, cannot match any of the overloads for function setImage:\n  setImage(osg::Image *)\n  setImage(unsigned int, osg::Image *)\n");
		return 0;
	}

	// osg::Image * osg::Texture2D::getImage()
	static int _bind_getImage_overload_1(lua_State *L) {
		if (!_lg_typecheck_getImage_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Image * osg::Texture2D::getImage() function, expected prototype:\nosg::Image * osg::Texture2D::getImage()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Texture2D* self=Luna< osg::Referenced >::checkSubType< osg::Texture2D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Image * osg::Texture2D::getImage(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Image * lret = self->getImage();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Image >::push(L,lret,false);

		return 1;
	}

	// const osg::Image * osg::Texture2D::getImage() const
	static int _bind_getImage_overload_2(lua_State *L) {
		if (!_lg_typecheck_getImage_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Image * osg::Texture2D::getImage() const function, expected prototype:\nconst osg::Image * osg::Texture2D::getImage() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Texture2D* self=Luna< osg::Referenced >::checkSubType< osg::Texture2D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Image * osg::Texture2D::getImage() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Image * lret = self->getImage();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Image >::push(L,lret,false);

		return 1;
	}

	// osg::Image * osg::Texture2D::getImage(unsigned int arg1)
	static int _bind_getImage_overload_3(lua_State *L) {
		if (!_lg_typecheck_getImage_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::Image * osg::Texture2D::getImage(unsigned int arg1) function, expected prototype:\nosg::Image * osg::Texture2D::getImage(unsigned int arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned _arg1=(unsigned)lua_tointeger(L,2);

		osg::Texture2D* self=Luna< osg::Referenced >::checkSubType< osg::Texture2D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Image * osg::Texture2D::getImage(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Image * lret = self->getImage(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Image >::push(L,lret,false);

		return 1;
	}

	// const osg::Image * osg::Texture2D::getImage(unsigned int arg1) const
	static int _bind_getImage_overload_4(lua_State *L) {
		if (!_lg_typecheck_getImage_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Image * osg::Texture2D::getImage(unsigned int arg1) const function, expected prototype:\nconst osg::Image * osg::Texture2D::getImage(unsigned int arg1) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned _arg1=(unsigned)lua_tointeger(L,2);

		osg::Texture2D* self=Luna< osg::Referenced >::checkSubType< osg::Texture2D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Image * osg::Texture2D::getImage(unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Image * lret = self->getImage(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Image >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Texture2D::getImage
	static int _bind_getImage(lua_State *L) {
		if (_lg_typecheck_getImage_overload_1(L)) return _bind_getImage_overload_1(L);
		if (_lg_typecheck_getImage_overload_2(L)) return _bind_getImage_overload_2(L);
		if (_lg_typecheck_getImage_overload_3(L)) return _bind_getImage_overload_3(L);
		if (_lg_typecheck_getImage_overload_4(L)) return _bind_getImage_overload_4(L);

		luaL_error(L, "error in function getImage, cannot match any of the overloads for function getImage:\n  getImage()\n  getImage()\n  getImage(unsigned int)\n  getImage(unsigned int)\n");
		return 0;
	}

	// unsigned int & osg::Texture2D::getModifiedCount(unsigned int contextID) const
	static int _bind_getModifiedCount(lua_State *L) {
		if (!_lg_typecheck_getModifiedCount(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int & osg::Texture2D::getModifiedCount(unsigned int contextID) const function, expected prototype:\nunsigned int & osg::Texture2D::getModifiedCount(unsigned int contextID) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,2);

		osg::Texture2D* self=Luna< osg::Referenced >::checkSubType< osg::Texture2D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int & osg::Texture2D::getModifiedCount(unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int & lret = self->getModifiedCount(contextID);
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::Texture2D::getNumImages() const
	static int _bind_getNumImages(lua_State *L) {
		if (!_lg_typecheck_getNumImages(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Texture2D::getNumImages() const function, expected prototype:\nunsigned int osg::Texture2D::getNumImages() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Texture2D* self=Luna< osg::Referenced >::checkSubType< osg::Texture2D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Texture2D::getNumImages() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getNumImages();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Texture2D::setTextureSize(int width, int height) const
	static int _bind_setTextureSize(lua_State *L) {
		if (!_lg_typecheck_setTextureSize(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Texture2D::setTextureSize(int width, int height) const function, expected prototype:\nvoid osg::Texture2D::setTextureSize(int width, int height) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int width=(int)lua_tointeger(L,2);
		int height=(int)lua_tointeger(L,3);

		osg::Texture2D* self=Luna< osg::Referenced >::checkSubType< osg::Texture2D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Texture2D::setTextureSize(int, int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setTextureSize(width, height);

		return 0;
	}

	// void osg::Texture2D::setTextureWidth(int width)
	static int _bind_setTextureWidth(lua_State *L) {
		if (!_lg_typecheck_setTextureWidth(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Texture2D::setTextureWidth(int width) function, expected prototype:\nvoid osg::Texture2D::setTextureWidth(int width)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int width=(int)lua_tointeger(L,2);

		osg::Texture2D* self=Luna< osg::Referenced >::checkSubType< osg::Texture2D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Texture2D::setTextureWidth(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setTextureWidth(width);

		return 0;
	}

	// void osg::Texture2D::setTextureHeight(int height)
	static int _bind_setTextureHeight(lua_State *L) {
		if (!_lg_typecheck_setTextureHeight(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Texture2D::setTextureHeight(int height) function, expected prototype:\nvoid osg::Texture2D::setTextureHeight(int height)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int height=(int)lua_tointeger(L,2);

		osg::Texture2D* self=Luna< osg::Referenced >::checkSubType< osg::Texture2D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Texture2D::setTextureHeight(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setTextureHeight(height);

		return 0;
	}

	// int osg::Texture2D::getTextureWidth() const
	static int _bind_getTextureWidth(lua_State *L) {
		if (!_lg_typecheck_getTextureWidth(L)) {
			luaL_error(L, "luna typecheck failed in int osg::Texture2D::getTextureWidth() const function, expected prototype:\nint osg::Texture2D::getTextureWidth() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Texture2D* self=Luna< osg::Referenced >::checkSubType< osg::Texture2D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::Texture2D::getTextureWidth() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getTextureWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Texture2D::getTextureHeight() const
	static int _bind_getTextureHeight(lua_State *L) {
		if (!_lg_typecheck_getTextureHeight(L)) {
			luaL_error(L, "luna typecheck failed in int osg::Texture2D::getTextureHeight() const function, expected prototype:\nint osg::Texture2D::getTextureHeight() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Texture2D* self=Luna< osg::Referenced >::checkSubType< osg::Texture2D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::Texture2D::getTextureHeight() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getTextureHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Texture2D::getTextureDepth() const
	static int _bind_getTextureDepth(lua_State *L) {
		if (!_lg_typecheck_getTextureDepth(L)) {
			luaL_error(L, "luna typecheck failed in int osg::Texture2D::getTextureDepth() const function, expected prototype:\nint osg::Texture2D::getTextureDepth() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Texture2D* self=Luna< osg::Referenced >::checkSubType< osg::Texture2D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::Texture2D::getTextureDepth() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getTextureDepth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Texture2D::setSubloadCallback(osg::Texture2D::SubloadCallback * cb)
	static int _bind_setSubloadCallback(lua_State *L) {
		if (!_lg_typecheck_setSubloadCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Texture2D::setSubloadCallback(osg::Texture2D::SubloadCallback * cb) function, expected prototype:\nvoid osg::Texture2D::setSubloadCallback(osg::Texture2D::SubloadCallback * cb)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Texture2D::SubloadCallback* cb=(Luna< osg::Referenced >::checkSubType< osg::Texture2D::SubloadCallback >(L,2));

		osg::Texture2D* self=Luna< osg::Referenced >::checkSubType< osg::Texture2D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Texture2D::setSubloadCallback(osg::Texture2D::SubloadCallback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setSubloadCallback(cb);

		return 0;
	}

	// osg::Texture2D::SubloadCallback * osg::Texture2D::getSubloadCallback()
	static int _bind_getSubloadCallback_overload_1(lua_State *L) {
		if (!_lg_typecheck_getSubloadCallback_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Texture2D::SubloadCallback * osg::Texture2D::getSubloadCallback() function, expected prototype:\nosg::Texture2D::SubloadCallback * osg::Texture2D::getSubloadCallback()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Texture2D* self=Luna< osg::Referenced >::checkSubType< osg::Texture2D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Texture2D::SubloadCallback * osg::Texture2D::getSubloadCallback(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Texture2D::SubloadCallback * lret = self->getSubloadCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture2D::SubloadCallback >::push(L,lret,false);

		return 1;
	}

	// const osg::Texture2D::SubloadCallback * osg::Texture2D::getSubloadCallback() const
	static int _bind_getSubloadCallback_overload_2(lua_State *L) {
		if (!_lg_typecheck_getSubloadCallback_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Texture2D::SubloadCallback * osg::Texture2D::getSubloadCallback() const function, expected prototype:\nconst osg::Texture2D::SubloadCallback * osg::Texture2D::getSubloadCallback() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Texture2D* self=Luna< osg::Referenced >::checkSubType< osg::Texture2D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Texture2D::SubloadCallback * osg::Texture2D::getSubloadCallback() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Texture2D::SubloadCallback * lret = self->getSubloadCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture2D::SubloadCallback >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Texture2D::getSubloadCallback
	static int _bind_getSubloadCallback(lua_State *L) {
		if (_lg_typecheck_getSubloadCallback_overload_1(L)) return _bind_getSubloadCallback_overload_1(L);
		if (_lg_typecheck_getSubloadCallback_overload_2(L)) return _bind_getSubloadCallback_overload_2(L);

		luaL_error(L, "error in function getSubloadCallback, cannot match any of the overloads for function getSubloadCallback:\n  getSubloadCallback()\n  getSubloadCallback()\n");
		return 0;
	}

	// void osg::Texture2D::setNumMipmapLevels(unsigned int num) const
	static int _bind_setNumMipmapLevels(lua_State *L) {
		if (!_lg_typecheck_setNumMipmapLevels(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Texture2D::setNumMipmapLevels(unsigned int num) const function, expected prototype:\nvoid osg::Texture2D::setNumMipmapLevels(unsigned int num) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int num=(unsigned int)lua_tointeger(L,2);

		osg::Texture2D* self=Luna< osg::Referenced >::checkSubType< osg::Texture2D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Texture2D::setNumMipmapLevels(unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setNumMipmapLevels(num);

		return 0;
	}

	// unsigned int osg::Texture2D::getNumMipmapLevels() const
	static int _bind_getNumMipmapLevels(lua_State *L) {
		if (!_lg_typecheck_getNumMipmapLevels(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Texture2D::getNumMipmapLevels() const function, expected prototype:\nunsigned int osg::Texture2D::getNumMipmapLevels() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Texture2D* self=Luna< osg::Referenced >::checkSubType< osg::Texture2D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Texture2D::getNumMipmapLevels() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getNumMipmapLevels();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Texture2D::copyTexImage2D(osg::State & state, int x, int y, int width, int height)
	static int _bind_copyTexImage2D(lua_State *L) {
		if (!_lg_typecheck_copyTexImage2D(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Texture2D::copyTexImage2D(osg::State & state, int x, int y, int width, int height) function, expected prototype:\nvoid osg::Texture2D::copyTexImage2D(osg::State & state, int x, int y, int width, int height)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* state_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osg::Texture2D::copyTexImage2D function");
		}
		osg::State & state=*state_ptr;
		int x=(int)lua_tointeger(L,3);
		int y=(int)lua_tointeger(L,4);
		int width=(int)lua_tointeger(L,5);
		int height=(int)lua_tointeger(L,6);

		osg::Texture2D* self=Luna< osg::Referenced >::checkSubType< osg::Texture2D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Texture2D::copyTexImage2D(osg::State &, int, int, int, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->copyTexImage2D(state, x, y, width, height);

		return 0;
	}

	// void osg::Texture2D::copyTexSubImage2D(osg::State & state, int xoffset, int yoffset, int x, int y, int width, int height)
	static int _bind_copyTexSubImage2D(lua_State *L) {
		if (!_lg_typecheck_copyTexSubImage2D(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Texture2D::copyTexSubImage2D(osg::State & state, int xoffset, int yoffset, int x, int y, int width, int height) function, expected prototype:\nvoid osg::Texture2D::copyTexSubImage2D(osg::State & state, int xoffset, int yoffset, int x, int y, int width, int height)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* state_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osg::Texture2D::copyTexSubImage2D function");
		}
		osg::State & state=*state_ptr;
		int xoffset=(int)lua_tointeger(L,3);
		int yoffset=(int)lua_tointeger(L,4);
		int x=(int)lua_tointeger(L,5);
		int y=(int)lua_tointeger(L,6);
		int width=(int)lua_tointeger(L,7);
		int height=(int)lua_tointeger(L,8);

		osg::Texture2D* self=Luna< osg::Referenced >::checkSubType< osg::Texture2D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Texture2D::copyTexSubImage2D(osg::State &, int, int, int, int, int, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->copyTexSubImage2D(state, xoffset, yoffset, x, y, width, height);

		return 0;
	}

	// void osg::Texture2D::apply(osg::State & state) const
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Texture2D::apply(osg::State & state) const function, expected prototype:\nvoid osg::Texture2D::apply(osg::State & state) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* state_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osg::Texture2D::apply function");
		}
		osg::State & state=*state_ptr;

		osg::Texture2D* self=Luna< osg::Referenced >::checkSubType< osg::Texture2D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Texture2D::apply(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(state);

		return 0;
	}

	// void osg::Texture2D::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Texture2D::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::Texture2D::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::Texture2D* self=Luna< osg::Referenced >::checkSubType< osg::Texture2D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Texture2D::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Texture2D::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::Texture2D::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Texture2D::base_setName(const std::string & name) function, expected prototype:\nvoid osg::Texture2D::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::Texture2D* self=Luna< osg::Referenced >::checkSubType< osg::Texture2D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Texture2D::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Texture2D::setName(name);

		return 0;
	}

	// void osg::Texture2D::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Texture2D::base_computeDataVariance() function, expected prototype:\nvoid osg::Texture2D::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Texture2D* self=Luna< osg::Referenced >::checkSubType< osg::Texture2D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Texture2D::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Texture2D::computeDataVariance();

		return 0;
	}

	// void osg::Texture2D::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Texture2D::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::Texture2D::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::Texture2D* self=Luna< osg::Referenced >::checkSubType< osg::Texture2D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Texture2D::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Texture2D::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::Texture2D::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::Texture2D::base_getUserData() function, expected prototype:\nosg::Referenced * osg::Texture2D::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Texture2D* self=Luna< osg::Referenced >::checkSubType< osg::Texture2D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::Texture2D::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->Texture2D::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::Texture2D::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::Texture2D::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::Texture2D::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Texture2D* self=Luna< osg::Referenced >::checkSubType< osg::Texture2D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::Texture2D::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->Texture2D::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Texture2D::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// unsigned int osg::Texture2D::base_getMember() const
	static int _bind_base_getMember(lua_State *L) {
		if (!_lg_typecheck_base_getMember(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Texture2D::base_getMember() const function, expected prototype:\nunsigned int osg::Texture2D::base_getMember() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Texture2D* self=Luna< osg::Referenced >::checkSubType< osg::Texture2D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Texture2D::base_getMember() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->Texture2D::getMember();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::Texture2D::base_checkValidityOfAssociatedModes(osg::State & arg1) const
	static int _bind_base_checkValidityOfAssociatedModes(lua_State *L) {
		if (!_lg_typecheck_base_checkValidityOfAssociatedModes(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Texture2D::base_checkValidityOfAssociatedModes(osg::State & arg1) const function, expected prototype:\nbool osg::Texture2D::base_checkValidityOfAssociatedModes(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Texture2D::base_checkValidityOfAssociatedModes function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::Texture2D* self=Luna< osg::Referenced >::checkSubType< osg::Texture2D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Texture2D::base_checkValidityOfAssociatedModes(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Texture2D::checkValidityOfAssociatedModes(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// osg::Texture * osg::Texture2D::base_asTexture()
	static int _bind_base_asTexture_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asTexture_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Texture * osg::Texture2D::base_asTexture() function, expected prototype:\nosg::Texture * osg::Texture2D::base_asTexture()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Texture2D* self=Luna< osg::Referenced >::checkSubType< osg::Texture2D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Texture * osg::Texture2D::base_asTexture(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Texture * lret = self->Texture2D::asTexture();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture >::push(L,lret,false);

		return 1;
	}

	// const osg::Texture * osg::Texture2D::base_asTexture() const
	static int _bind_base_asTexture_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asTexture_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Texture * osg::Texture2D::base_asTexture() const function, expected prototype:\nconst osg::Texture * osg::Texture2D::base_asTexture() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Texture2D* self=Luna< osg::Referenced >::checkSubType< osg::Texture2D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Texture * osg::Texture2D::base_asTexture() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Texture * lret = self->Texture2D::asTexture();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Texture2D::base_asTexture
	static int _bind_base_asTexture(lua_State *L) {
		if (_lg_typecheck_base_asTexture_overload_1(L)) return _bind_base_asTexture_overload_1(L);
		if (_lg_typecheck_base_asTexture_overload_2(L)) return _bind_base_asTexture_overload_2(L);

		luaL_error(L, "error in function base_asTexture, cannot match any of the overloads for function base_asTexture:\n  base_asTexture()\n  base_asTexture()\n");
		return 0;
	}

	// bool osg::Texture2D::base_isTextureAttribute() const
	static int _bind_base_isTextureAttribute(lua_State *L) {
		if (!_lg_typecheck_base_isTextureAttribute(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Texture2D::base_isTextureAttribute() const function, expected prototype:\nbool osg::Texture2D::base_isTextureAttribute() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Texture2D* self=Luna< osg::Referenced >::checkSubType< osg::Texture2D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Texture2D::base_isTextureAttribute() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Texture2D::isTextureAttribute();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Texture2D::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const
	static int _bind_base_getModeUsage(lua_State *L) {
		if (!_lg_typecheck_base_getModeUsage(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Texture2D::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const function, expected prototype:\nbool osg::Texture2D::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const\nClass arguments details:\narg 1 ID = 48108040\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StateAttribute::ModeUsage* _arg1_ptr=(Luna< osg::StateAttribute::ModeUsage >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Texture2D::base_getModeUsage function");
		}
		osg::StateAttribute::ModeUsage & _arg1=*_arg1_ptr;

		osg::Texture2D* self=Luna< osg::Referenced >::checkSubType< osg::Texture2D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Texture2D::base_getModeUsage(osg::StateAttribute::ModeUsage &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Texture2D::getModeUsage(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Texture2D::base_compileGLObjects(osg::State & state) const
	static int _bind_base_compileGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_compileGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Texture2D::base_compileGLObjects(osg::State & state) const function, expected prototype:\nvoid osg::Texture2D::base_compileGLObjects(osg::State & state) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* state_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osg::Texture2D::base_compileGLObjects function");
		}
		osg::State & state=*state_ptr;

		osg::Texture2D* self=Luna< osg::Referenced >::checkSubType< osg::Texture2D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Texture2D::base_compileGLObjects(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Texture2D::compileGLObjects(state);

		return 0;
	}

	// void osg::Texture2D::base_releaseGLObjects(osg::State * state = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Texture2D::base_releaseGLObjects(osg::State * state = 0) const function, expected prototype:\nvoid osg::Texture2D::base_releaseGLObjects(osg::State * state = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* state=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::Texture2D* self=Luna< osg::Referenced >::checkSubType< osg::Texture2D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Texture2D::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Texture2D::releaseGLObjects(state);

		return 0;
	}

	// osg::Object * osg::Texture2D::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Texture2D::base_cloneType() const function, expected prototype:\nosg::Object * osg::Texture2D::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Texture2D* self=Luna< osg::Referenced >::checkSubType< osg::Texture2D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Texture2D::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->Texture2D::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Texture2D::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Texture2D::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::Texture2D::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Texture2D::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::Texture2D* self=Luna< osg::Referenced >::checkSubType< osg::Texture2D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Texture2D::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->Texture2D::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::Texture2D::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Texture2D::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Texture2D::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::Texture2D* self=Luna< osg::Referenced >::checkSubType< osg::Texture2D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Texture2D::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Texture2D::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Texture2D::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Texture2D::base_libraryName() const function, expected prototype:\nconst char * osg::Texture2D::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Texture2D* self=Luna< osg::Referenced >::checkSubType< osg::Texture2D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Texture2D::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Texture2D::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Texture2D::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Texture2D::base_className() const function, expected prototype:\nconst char * osg::Texture2D::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Texture2D* self=Luna< osg::Referenced >::checkSubType< osg::Texture2D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Texture2D::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Texture2D::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::Texture2D::base_getType() const
	static int _bind_base_getType(lua_State *L) {
		if (!_lg_typecheck_base_getType(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::Texture2D::base_getType() const function, expected prototype:\nosg::StateAttribute::Type osg::Texture2D::base_getType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Texture2D* self=Luna< osg::Referenced >::checkSubType< osg::Texture2D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::Texture2D::base_getType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::StateAttribute::Type lret = self->Texture2D::getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Texture2D::base_compare(const osg::StateAttribute & rhs) const
	static int _bind_base_compare(lua_State *L) {
		if (!_lg_typecheck_base_compare(L)) {
			luaL_error(L, "luna typecheck failed in int osg::Texture2D::base_compare(const osg::StateAttribute & rhs) const function, expected prototype:\nint osg::Texture2D::base_compare(const osg::StateAttribute & rhs) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::StateAttribute* rhs_ptr=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Texture2D::base_compare function");
		}
		const osg::StateAttribute & rhs=*rhs_ptr;

		osg::Texture2D* self=Luna< osg::Referenced >::checkSubType< osg::Texture2D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::Texture2D::base_compare(const osg::StateAttribute &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->Texture2D::compare(rhs);
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::Texture2D::base_getTextureTarget() const
	static int _bind_base_getTextureTarget(lua_State *L) {
		if (!_lg_typecheck_base_getTextureTarget(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Texture2D::base_getTextureTarget() const function, expected prototype:\nunsigned int osg::Texture2D::base_getTextureTarget() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Texture2D* self=Luna< osg::Referenced >::checkSubType< osg::Texture2D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Texture2D::base_getTextureTarget() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->Texture2D::getTextureTarget();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Texture2D::base_setImage(unsigned int arg1, osg::Image * image)
	static int _bind_base_setImage(lua_State *L) {
		if (!_lg_typecheck_base_setImage(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Texture2D::base_setImage(unsigned int arg1, osg::Image * image) function, expected prototype:\nvoid osg::Texture2D::base_setImage(unsigned int arg1, osg::Image * image)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned _arg1=(unsigned)lua_tointeger(L,2);
		osg::Image* image=(Luna< osg::Referenced >::checkSubType< osg::Image >(L,3));

		osg::Texture2D* self=Luna< osg::Referenced >::checkSubType< osg::Texture2D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Texture2D::base_setImage(unsigned int, osg::Image *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Texture2D::setImage(_arg1, image);

		return 0;
	}

	// osg::Image * osg::Texture2D::base_getImage(unsigned int arg1)
	static int _bind_base_getImage_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getImage_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Image * osg::Texture2D::base_getImage(unsigned int arg1) function, expected prototype:\nosg::Image * osg::Texture2D::base_getImage(unsigned int arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned _arg1=(unsigned)lua_tointeger(L,2);

		osg::Texture2D* self=Luna< osg::Referenced >::checkSubType< osg::Texture2D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Image * osg::Texture2D::base_getImage(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Image * lret = self->Texture2D::getImage(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Image >::push(L,lret,false);

		return 1;
	}

	// const osg::Image * osg::Texture2D::base_getImage(unsigned int arg1) const
	static int _bind_base_getImage_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getImage_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Image * osg::Texture2D::base_getImage(unsigned int arg1) const function, expected prototype:\nconst osg::Image * osg::Texture2D::base_getImage(unsigned int arg1) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned _arg1=(unsigned)lua_tointeger(L,2);

		osg::Texture2D* self=Luna< osg::Referenced >::checkSubType< osg::Texture2D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Image * osg::Texture2D::base_getImage(unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Image * lret = self->Texture2D::getImage(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Image >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Texture2D::base_getImage
	static int _bind_base_getImage(lua_State *L) {
		if (_lg_typecheck_base_getImage_overload_1(L)) return _bind_base_getImage_overload_1(L);
		if (_lg_typecheck_base_getImage_overload_2(L)) return _bind_base_getImage_overload_2(L);

		luaL_error(L, "error in function base_getImage, cannot match any of the overloads for function base_getImage:\n  base_getImage(unsigned int)\n  base_getImage(unsigned int)\n");
		return 0;
	}

	// unsigned int osg::Texture2D::base_getNumImages() const
	static int _bind_base_getNumImages(lua_State *L) {
		if (!_lg_typecheck_base_getNumImages(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Texture2D::base_getNumImages() const function, expected prototype:\nunsigned int osg::Texture2D::base_getNumImages() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Texture2D* self=Luna< osg::Referenced >::checkSubType< osg::Texture2D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Texture2D::base_getNumImages() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->Texture2D::getNumImages();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Texture2D::base_getTextureWidth() const
	static int _bind_base_getTextureWidth(lua_State *L) {
		if (!_lg_typecheck_base_getTextureWidth(L)) {
			luaL_error(L, "luna typecheck failed in int osg::Texture2D::base_getTextureWidth() const function, expected prototype:\nint osg::Texture2D::base_getTextureWidth() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Texture2D* self=Luna< osg::Referenced >::checkSubType< osg::Texture2D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::Texture2D::base_getTextureWidth() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->Texture2D::getTextureWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Texture2D::base_getTextureHeight() const
	static int _bind_base_getTextureHeight(lua_State *L) {
		if (!_lg_typecheck_base_getTextureHeight(L)) {
			luaL_error(L, "luna typecheck failed in int osg::Texture2D::base_getTextureHeight() const function, expected prototype:\nint osg::Texture2D::base_getTextureHeight() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Texture2D* self=Luna< osg::Referenced >::checkSubType< osg::Texture2D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::Texture2D::base_getTextureHeight() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->Texture2D::getTextureHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Texture2D::base_getTextureDepth() const
	static int _bind_base_getTextureDepth(lua_State *L) {
		if (!_lg_typecheck_base_getTextureDepth(L)) {
			luaL_error(L, "luna typecheck failed in int osg::Texture2D::base_getTextureDepth() const function, expected prototype:\nint osg::Texture2D::base_getTextureDepth() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Texture2D* self=Luna< osg::Referenced >::checkSubType< osg::Texture2D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::Texture2D::base_getTextureDepth() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->Texture2D::getTextureDepth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Texture2D::base_apply(osg::State & state) const
	static int _bind_base_apply(lua_State *L) {
		if (!_lg_typecheck_base_apply(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Texture2D::base_apply(osg::State & state) const function, expected prototype:\nvoid osg::Texture2D::base_apply(osg::State & state) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* state_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osg::Texture2D::base_apply function");
		}
		osg::State & state=*state_ptr;

		osg::Texture2D* self=Luna< osg::Referenced >::checkSubType< osg::Texture2D >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Texture2D::base_apply(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Texture2D::apply(state);

		return 0;
	}


	// Operator binds:

};

osg::Texture2D* LunaTraits< osg::Texture2D >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Texture2D::_bind_ctor(L);
}

void LunaTraits< osg::Texture2D >::_bind_dtor(osg::Texture2D* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::Texture2D >::className[] = "Texture2D";
const char LunaTraits< osg::Texture2D >::fullName[] = "osg::Texture2D";
const char LunaTraits< osg::Texture2D >::moduleName[] = "osg";
const char* LunaTraits< osg::Texture2D >::parents[] = {"osg.Texture", 0};
const int LunaTraits< osg::Texture2D >::hash = 71812813;
const int LunaTraits< osg::Texture2D >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::Texture2D >::methods[] = {
	{"cloneType", &luna_wrapper_osg_Texture2D::_bind_cloneType},
	{"clone", &luna_wrapper_osg_Texture2D::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_Texture2D::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_Texture2D::_bind_libraryName},
	{"className", &luna_wrapper_osg_Texture2D::_bind_className},
	{"getType", &luna_wrapper_osg_Texture2D::_bind_getType},
	{"compare", &luna_wrapper_osg_Texture2D::_bind_compare},
	{"getTextureTarget", &luna_wrapper_osg_Texture2D::_bind_getTextureTarget},
	{"setImage", &luna_wrapper_osg_Texture2D::_bind_setImage},
	{"getImage", &luna_wrapper_osg_Texture2D::_bind_getImage},
	{"getModifiedCount", &luna_wrapper_osg_Texture2D::_bind_getModifiedCount},
	{"getNumImages", &luna_wrapper_osg_Texture2D::_bind_getNumImages},
	{"setTextureSize", &luna_wrapper_osg_Texture2D::_bind_setTextureSize},
	{"setTextureWidth", &luna_wrapper_osg_Texture2D::_bind_setTextureWidth},
	{"setTextureHeight", &luna_wrapper_osg_Texture2D::_bind_setTextureHeight},
	{"getTextureWidth", &luna_wrapper_osg_Texture2D::_bind_getTextureWidth},
	{"getTextureHeight", &luna_wrapper_osg_Texture2D::_bind_getTextureHeight},
	{"getTextureDepth", &luna_wrapper_osg_Texture2D::_bind_getTextureDepth},
	{"setSubloadCallback", &luna_wrapper_osg_Texture2D::_bind_setSubloadCallback},
	{"getSubloadCallback", &luna_wrapper_osg_Texture2D::_bind_getSubloadCallback},
	{"setNumMipmapLevels", &luna_wrapper_osg_Texture2D::_bind_setNumMipmapLevels},
	{"getNumMipmapLevels", &luna_wrapper_osg_Texture2D::_bind_getNumMipmapLevels},
	{"copyTexImage2D", &luna_wrapper_osg_Texture2D::_bind_copyTexImage2D},
	{"copyTexSubImage2D", &luna_wrapper_osg_Texture2D::_bind_copyTexSubImage2D},
	{"apply", &luna_wrapper_osg_Texture2D::_bind_apply},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_Texture2D::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osg_Texture2D::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_Texture2D::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_Texture2D::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_Texture2D::_bind_base_getUserData},
	{"base_getMember", &luna_wrapper_osg_Texture2D::_bind_base_getMember},
	{"base_checkValidityOfAssociatedModes", &luna_wrapper_osg_Texture2D::_bind_base_checkValidityOfAssociatedModes},
	{"base_asTexture", &luna_wrapper_osg_Texture2D::_bind_base_asTexture},
	{"base_isTextureAttribute", &luna_wrapper_osg_Texture2D::_bind_base_isTextureAttribute},
	{"base_getModeUsage", &luna_wrapper_osg_Texture2D::_bind_base_getModeUsage},
	{"base_compileGLObjects", &luna_wrapper_osg_Texture2D::_bind_base_compileGLObjects},
	{"base_releaseGLObjects", &luna_wrapper_osg_Texture2D::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osg_Texture2D::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_Texture2D::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_Texture2D::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_Texture2D::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_Texture2D::_bind_base_className},
	{"base_getType", &luna_wrapper_osg_Texture2D::_bind_base_getType},
	{"base_compare", &luna_wrapper_osg_Texture2D::_bind_base_compare},
	{"base_getTextureTarget", &luna_wrapper_osg_Texture2D::_bind_base_getTextureTarget},
	{"base_setImage", &luna_wrapper_osg_Texture2D::_bind_base_setImage},
	{"base_getImage", &luna_wrapper_osg_Texture2D::_bind_base_getImage},
	{"base_getNumImages", &luna_wrapper_osg_Texture2D::_bind_base_getNumImages},
	{"base_getTextureWidth", &luna_wrapper_osg_Texture2D::_bind_base_getTextureWidth},
	{"base_getTextureHeight", &luna_wrapper_osg_Texture2D::_bind_base_getTextureHeight},
	{"base_getTextureDepth", &luna_wrapper_osg_Texture2D::_bind_base_getTextureDepth},
	{"base_apply", &luna_wrapper_osg_Texture2D::_bind_base_apply},
	{"fromVoid", &luna_wrapper_osg_Texture2D::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_Texture2D::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_Texture2D::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Texture2D >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_Texture2D::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Texture2D >::enumValues[] = {
	{0,0}
};



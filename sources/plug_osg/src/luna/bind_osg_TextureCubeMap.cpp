#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_TextureCubeMap.h>

class luna_wrapper_osg_TextureCubeMap {
public:
	typedef Luna< osg::TextureCubeMap > luna_t;

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

		osg::TextureCubeMap* self= (osg::TextureCubeMap*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::TextureCubeMap >::push(L,self,false);
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
		//osg::TextureCubeMap* ptr= dynamic_cast< osg::TextureCubeMap* >(Luna< osg::Referenced >::check(L,1));
		osg::TextureCubeMap* ptr= luna_caster< osg::Referenced, osg::TextureCubeMap >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::TextureCubeMap >::push(L,ptr,false);
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::TextureCubeMap >(L,1))) ) return false;
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::TextureCubeMap >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_setImage(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getImage_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getImage_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumImages(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getModifiedCount(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
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

	inline static bool _lg_typecheck_copyTexSubImageCubeMap(lua_State *L) {
		if( lua_gettop(L)!=9 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( (lua_type(L,8)!=LUA_TNUMBER || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		if( (lua_type(L,9)!=LUA_TNUMBER || lua_tointeger(L,9) != lua_tonumber(L,9)) ) return false;
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
	// osg::TextureCubeMap::TextureCubeMap()
	static osg::TextureCubeMap* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::TextureCubeMap::TextureCubeMap() function, expected prototype:\nosg::TextureCubeMap::TextureCubeMap()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::TextureCubeMap();
	}

	// osg::TextureCubeMap::TextureCubeMap(const osg::TextureCubeMap & cm, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::TextureCubeMap* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::TextureCubeMap::TextureCubeMap(const osg::TextureCubeMap & cm, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::TextureCubeMap::TextureCubeMap(const osg::TextureCubeMap & cm, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::TextureCubeMap* cm_ptr=(Luna< osg::Referenced >::checkSubType< osg::TextureCubeMap >(L,1));
		if( !cm_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cm in osg::TextureCubeMap::TextureCubeMap function");
		}
		const osg::TextureCubeMap & cm=*cm_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::TextureCubeMap::TextureCubeMap function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osg::TextureCubeMap(cm, copyop);
	}

	// osg::TextureCubeMap::TextureCubeMap(lua_Table * data)
	static osg::TextureCubeMap* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::TextureCubeMap::TextureCubeMap(lua_Table * data) function, expected prototype:\nosg::TextureCubeMap::TextureCubeMap(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_TextureCubeMap(L,NULL);
	}

	// osg::TextureCubeMap::TextureCubeMap(lua_Table * data, const osg::TextureCubeMap & cm, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::TextureCubeMap* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::TextureCubeMap::TextureCubeMap(lua_Table * data, const osg::TextureCubeMap & cm, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::TextureCubeMap::TextureCubeMap(lua_Table * data, const osg::TextureCubeMap & cm, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::TextureCubeMap* cm_ptr=(Luna< osg::Referenced >::checkSubType< osg::TextureCubeMap >(L,2));
		if( !cm_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cm in osg::TextureCubeMap::TextureCubeMap function");
		}
		const osg::TextureCubeMap & cm=*cm_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::TextureCubeMap::TextureCubeMap function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_TextureCubeMap(L,NULL, cm, copyop);
	}

	// Overload binder for osg::TextureCubeMap::TextureCubeMap
	static osg::TextureCubeMap* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function TextureCubeMap, cannot match any of the overloads for function TextureCubeMap:\n  TextureCubeMap()\n  TextureCubeMap(const osg::TextureCubeMap &, const osg::CopyOp &)\n  TextureCubeMap(lua_Table *)\n  TextureCubeMap(lua_Table *, const osg::TextureCubeMap &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::TextureCubeMap::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::TextureCubeMap::cloneType() const function, expected prototype:\nosg::Object * osg::TextureCubeMap::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TextureCubeMap* self=Luna< osg::Referenced >::checkSubType< osg::TextureCubeMap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::TextureCubeMap::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::TextureCubeMap::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::TextureCubeMap::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::TextureCubeMap::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::TextureCubeMap::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::TextureCubeMap* self=Luna< osg::Referenced >::checkSubType< osg::TextureCubeMap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::TextureCubeMap::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::TextureCubeMap::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::TextureCubeMap::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::TextureCubeMap::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::TextureCubeMap* self=Luna< osg::Referenced >::checkSubType< osg::TextureCubeMap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::TextureCubeMap::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::TextureCubeMap::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::TextureCubeMap::libraryName() const function, expected prototype:\nconst char * osg::TextureCubeMap::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TextureCubeMap* self=Luna< osg::Referenced >::checkSubType< osg::TextureCubeMap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::TextureCubeMap::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::TextureCubeMap::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::TextureCubeMap::className() const function, expected prototype:\nconst char * osg::TextureCubeMap::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TextureCubeMap* self=Luna< osg::Referenced >::checkSubType< osg::TextureCubeMap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::TextureCubeMap::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::TextureCubeMap::getType() const
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::TextureCubeMap::getType() const function, expected prototype:\nosg::StateAttribute::Type osg::TextureCubeMap::getType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TextureCubeMap* self=Luna< osg::Referenced >::checkSubType< osg::TextureCubeMap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::TextureCubeMap::getType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::StateAttribute::Type lret = self->getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::TextureCubeMap::compare(const osg::StateAttribute & rhs) const
	static int _bind_compare(lua_State *L) {
		if (!_lg_typecheck_compare(L)) {
			luaL_error(L, "luna typecheck failed in int osg::TextureCubeMap::compare(const osg::StateAttribute & rhs) const function, expected prototype:\nint osg::TextureCubeMap::compare(const osg::StateAttribute & rhs) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::StateAttribute* rhs_ptr=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::TextureCubeMap::compare function");
		}
		const osg::StateAttribute & rhs=*rhs_ptr;

		osg::TextureCubeMap* self=Luna< osg::Referenced >::checkSubType< osg::TextureCubeMap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::TextureCubeMap::compare(const osg::StateAttribute &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->compare(rhs);
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::TextureCubeMap::getTextureTarget() const
	static int _bind_getTextureTarget(lua_State *L) {
		if (!_lg_typecheck_getTextureTarget(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::TextureCubeMap::getTextureTarget() const function, expected prototype:\nunsigned int osg::TextureCubeMap::getTextureTarget() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TextureCubeMap* self=Luna< osg::Referenced >::checkSubType< osg::TextureCubeMap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::TextureCubeMap::getTextureTarget() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getTextureTarget();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::TextureCubeMap::setImage(unsigned int face, osg::Image * image)
	static int _bind_setImage(lua_State *L) {
		if (!_lg_typecheck_setImage(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TextureCubeMap::setImage(unsigned int face, osg::Image * image) function, expected prototype:\nvoid osg::TextureCubeMap::setImage(unsigned int face, osg::Image * image)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int face=(unsigned int)lua_tointeger(L,2);
		osg::Image* image=(Luna< osg::Referenced >::checkSubType< osg::Image >(L,3));

		osg::TextureCubeMap* self=Luna< osg::Referenced >::checkSubType< osg::TextureCubeMap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TextureCubeMap::setImage(unsigned int, osg::Image *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setImage(face, image);

		return 0;
	}

	// osg::Image * osg::TextureCubeMap::getImage(unsigned int face)
	static int _bind_getImage_overload_1(lua_State *L) {
		if (!_lg_typecheck_getImage_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Image * osg::TextureCubeMap::getImage(unsigned int face) function, expected prototype:\nosg::Image * osg::TextureCubeMap::getImage(unsigned int face)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int face=(unsigned int)lua_tointeger(L,2);

		osg::TextureCubeMap* self=Luna< osg::Referenced >::checkSubType< osg::TextureCubeMap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Image * osg::TextureCubeMap::getImage(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Image * lret = self->getImage(face);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Image >::push(L,lret,false);

		return 1;
	}

	// const osg::Image * osg::TextureCubeMap::getImage(unsigned int face) const
	static int _bind_getImage_overload_2(lua_State *L) {
		if (!_lg_typecheck_getImage_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Image * osg::TextureCubeMap::getImage(unsigned int face) const function, expected prototype:\nconst osg::Image * osg::TextureCubeMap::getImage(unsigned int face) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int face=(unsigned int)lua_tointeger(L,2);

		osg::TextureCubeMap* self=Luna< osg::Referenced >::checkSubType< osg::TextureCubeMap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Image * osg::TextureCubeMap::getImage(unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Image * lret = self->getImage(face);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Image >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::TextureCubeMap::getImage
	static int _bind_getImage(lua_State *L) {
		if (_lg_typecheck_getImage_overload_1(L)) return _bind_getImage_overload_1(L);
		if (_lg_typecheck_getImage_overload_2(L)) return _bind_getImage_overload_2(L);

		luaL_error(L, "error in function getImage, cannot match any of the overloads for function getImage:\n  getImage(unsigned int)\n  getImage(unsigned int)\n");
		return 0;
	}

	// unsigned int osg::TextureCubeMap::getNumImages() const
	static int _bind_getNumImages(lua_State *L) {
		if (!_lg_typecheck_getNumImages(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::TextureCubeMap::getNumImages() const function, expected prototype:\nunsigned int osg::TextureCubeMap::getNumImages() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TextureCubeMap* self=Luna< osg::Referenced >::checkSubType< osg::TextureCubeMap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::TextureCubeMap::getNumImages() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getNumImages();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int & osg::TextureCubeMap::getModifiedCount(unsigned int face, unsigned int contextID) const
	static int _bind_getModifiedCount(lua_State *L) {
		if (!_lg_typecheck_getModifiedCount(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int & osg::TextureCubeMap::getModifiedCount(unsigned int face, unsigned int contextID) const function, expected prototype:\nunsigned int & osg::TextureCubeMap::getModifiedCount(unsigned int face, unsigned int contextID) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int face=(unsigned int)lua_tointeger(L,2);
		unsigned int contextID=(unsigned int)lua_tointeger(L,3);

		osg::TextureCubeMap* self=Luna< osg::Referenced >::checkSubType< osg::TextureCubeMap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int & osg::TextureCubeMap::getModifiedCount(unsigned int, unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int & lret = self->getModifiedCount(face, contextID);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::TextureCubeMap::setTextureSize(int width, int height) const
	static int _bind_setTextureSize(lua_State *L) {
		if (!_lg_typecheck_setTextureSize(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TextureCubeMap::setTextureSize(int width, int height) const function, expected prototype:\nvoid osg::TextureCubeMap::setTextureSize(int width, int height) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int width=(int)lua_tointeger(L,2);
		int height=(int)lua_tointeger(L,3);

		osg::TextureCubeMap* self=Luna< osg::Referenced >::checkSubType< osg::TextureCubeMap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TextureCubeMap::setTextureSize(int, int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setTextureSize(width, height);

		return 0;
	}

	// void osg::TextureCubeMap::setTextureWidth(int width)
	static int _bind_setTextureWidth(lua_State *L) {
		if (!_lg_typecheck_setTextureWidth(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TextureCubeMap::setTextureWidth(int width) function, expected prototype:\nvoid osg::TextureCubeMap::setTextureWidth(int width)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int width=(int)lua_tointeger(L,2);

		osg::TextureCubeMap* self=Luna< osg::Referenced >::checkSubType< osg::TextureCubeMap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TextureCubeMap::setTextureWidth(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setTextureWidth(width);

		return 0;
	}

	// void osg::TextureCubeMap::setTextureHeight(int height)
	static int _bind_setTextureHeight(lua_State *L) {
		if (!_lg_typecheck_setTextureHeight(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TextureCubeMap::setTextureHeight(int height) function, expected prototype:\nvoid osg::TextureCubeMap::setTextureHeight(int height)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int height=(int)lua_tointeger(L,2);

		osg::TextureCubeMap* self=Luna< osg::Referenced >::checkSubType< osg::TextureCubeMap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TextureCubeMap::setTextureHeight(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setTextureHeight(height);

		return 0;
	}

	// int osg::TextureCubeMap::getTextureWidth() const
	static int _bind_getTextureWidth(lua_State *L) {
		if (!_lg_typecheck_getTextureWidth(L)) {
			luaL_error(L, "luna typecheck failed in int osg::TextureCubeMap::getTextureWidth() const function, expected prototype:\nint osg::TextureCubeMap::getTextureWidth() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TextureCubeMap* self=Luna< osg::Referenced >::checkSubType< osg::TextureCubeMap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::TextureCubeMap::getTextureWidth() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getTextureWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::TextureCubeMap::getTextureHeight() const
	static int _bind_getTextureHeight(lua_State *L) {
		if (!_lg_typecheck_getTextureHeight(L)) {
			luaL_error(L, "luna typecheck failed in int osg::TextureCubeMap::getTextureHeight() const function, expected prototype:\nint osg::TextureCubeMap::getTextureHeight() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TextureCubeMap* self=Luna< osg::Referenced >::checkSubType< osg::TextureCubeMap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::TextureCubeMap::getTextureHeight() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getTextureHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::TextureCubeMap::getTextureDepth() const
	static int _bind_getTextureDepth(lua_State *L) {
		if (!_lg_typecheck_getTextureDepth(L)) {
			luaL_error(L, "luna typecheck failed in int osg::TextureCubeMap::getTextureDepth() const function, expected prototype:\nint osg::TextureCubeMap::getTextureDepth() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TextureCubeMap* self=Luna< osg::Referenced >::checkSubType< osg::TextureCubeMap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::TextureCubeMap::getTextureDepth() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getTextureDepth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::TextureCubeMap::setSubloadCallback(osg::TextureCubeMap::SubloadCallback * cb)
	static int _bind_setSubloadCallback(lua_State *L) {
		if (!_lg_typecheck_setSubloadCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TextureCubeMap::setSubloadCallback(osg::TextureCubeMap::SubloadCallback * cb) function, expected prototype:\nvoid osg::TextureCubeMap::setSubloadCallback(osg::TextureCubeMap::SubloadCallback * cb)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::TextureCubeMap::SubloadCallback* cb=(Luna< osg::Referenced >::checkSubType< osg::TextureCubeMap::SubloadCallback >(L,2));

		osg::TextureCubeMap* self=Luna< osg::Referenced >::checkSubType< osg::TextureCubeMap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TextureCubeMap::setSubloadCallback(osg::TextureCubeMap::SubloadCallback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setSubloadCallback(cb);

		return 0;
	}

	// osg::TextureCubeMap::SubloadCallback * osg::TextureCubeMap::getSubloadCallback()
	static int _bind_getSubloadCallback_overload_1(lua_State *L) {
		if (!_lg_typecheck_getSubloadCallback_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::TextureCubeMap::SubloadCallback * osg::TextureCubeMap::getSubloadCallback() function, expected prototype:\nosg::TextureCubeMap::SubloadCallback * osg::TextureCubeMap::getSubloadCallback()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TextureCubeMap* self=Luna< osg::Referenced >::checkSubType< osg::TextureCubeMap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::TextureCubeMap::SubloadCallback * osg::TextureCubeMap::getSubloadCallback(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::TextureCubeMap::SubloadCallback * lret = self->getSubloadCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::TextureCubeMap::SubloadCallback >::push(L,lret,false);

		return 1;
	}

	// const osg::TextureCubeMap::SubloadCallback * osg::TextureCubeMap::getSubloadCallback() const
	static int _bind_getSubloadCallback_overload_2(lua_State *L) {
		if (!_lg_typecheck_getSubloadCallback_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::TextureCubeMap::SubloadCallback * osg::TextureCubeMap::getSubloadCallback() const function, expected prototype:\nconst osg::TextureCubeMap::SubloadCallback * osg::TextureCubeMap::getSubloadCallback() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TextureCubeMap* self=Luna< osg::Referenced >::checkSubType< osg::TextureCubeMap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::TextureCubeMap::SubloadCallback * osg::TextureCubeMap::getSubloadCallback() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::TextureCubeMap::SubloadCallback * lret = self->getSubloadCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::TextureCubeMap::SubloadCallback >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::TextureCubeMap::getSubloadCallback
	static int _bind_getSubloadCallback(lua_State *L) {
		if (_lg_typecheck_getSubloadCallback_overload_1(L)) return _bind_getSubloadCallback_overload_1(L);
		if (_lg_typecheck_getSubloadCallback_overload_2(L)) return _bind_getSubloadCallback_overload_2(L);

		luaL_error(L, "error in function getSubloadCallback, cannot match any of the overloads for function getSubloadCallback:\n  getSubloadCallback()\n  getSubloadCallback()\n");
		return 0;
	}

	// void osg::TextureCubeMap::setNumMipmapLevels(unsigned int num) const
	static int _bind_setNumMipmapLevels(lua_State *L) {
		if (!_lg_typecheck_setNumMipmapLevels(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TextureCubeMap::setNumMipmapLevels(unsigned int num) const function, expected prototype:\nvoid osg::TextureCubeMap::setNumMipmapLevels(unsigned int num) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int num=(unsigned int)lua_tointeger(L,2);

		osg::TextureCubeMap* self=Luna< osg::Referenced >::checkSubType< osg::TextureCubeMap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TextureCubeMap::setNumMipmapLevels(unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setNumMipmapLevels(num);

		return 0;
	}

	// unsigned int osg::TextureCubeMap::getNumMipmapLevels() const
	static int _bind_getNumMipmapLevels(lua_State *L) {
		if (!_lg_typecheck_getNumMipmapLevels(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::TextureCubeMap::getNumMipmapLevels() const function, expected prototype:\nunsigned int osg::TextureCubeMap::getNumMipmapLevels() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TextureCubeMap* self=Luna< osg::Referenced >::checkSubType< osg::TextureCubeMap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::TextureCubeMap::getNumMipmapLevels() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getNumMipmapLevels();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::TextureCubeMap::copyTexSubImageCubeMap(osg::State & state, int face, int xoffset, int yoffset, int x, int y, int width, int height)
	static int _bind_copyTexSubImageCubeMap(lua_State *L) {
		if (!_lg_typecheck_copyTexSubImageCubeMap(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TextureCubeMap::copyTexSubImageCubeMap(osg::State & state, int face, int xoffset, int yoffset, int x, int y, int width, int height) function, expected prototype:\nvoid osg::TextureCubeMap::copyTexSubImageCubeMap(osg::State & state, int face, int xoffset, int yoffset, int x, int y, int width, int height)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* state_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osg::TextureCubeMap::copyTexSubImageCubeMap function");
		}
		osg::State & state=*state_ptr;
		int face=(int)lua_tointeger(L,3);
		int xoffset=(int)lua_tointeger(L,4);
		int yoffset=(int)lua_tointeger(L,5);
		int x=(int)lua_tointeger(L,6);
		int y=(int)lua_tointeger(L,7);
		int width=(int)lua_tointeger(L,8);
		int height=(int)lua_tointeger(L,9);

		osg::TextureCubeMap* self=Luna< osg::Referenced >::checkSubType< osg::TextureCubeMap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TextureCubeMap::copyTexSubImageCubeMap(osg::State &, int, int, int, int, int, int, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->copyTexSubImageCubeMap(state, face, xoffset, yoffset, x, y, width, height);

		return 0;
	}

	// void osg::TextureCubeMap::apply(osg::State & state) const
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TextureCubeMap::apply(osg::State & state) const function, expected prototype:\nvoid osg::TextureCubeMap::apply(osg::State & state) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* state_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osg::TextureCubeMap::apply function");
		}
		osg::State & state=*state_ptr;

		osg::TextureCubeMap* self=Luna< osg::Referenced >::checkSubType< osg::TextureCubeMap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TextureCubeMap::apply(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(state);

		return 0;
	}

	// void osg::TextureCubeMap::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TextureCubeMap::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::TextureCubeMap::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::TextureCubeMap* self=Luna< osg::Referenced >::checkSubType< osg::TextureCubeMap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TextureCubeMap::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TextureCubeMap::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::TextureCubeMap::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TextureCubeMap::base_setName(const std::string & name) function, expected prototype:\nvoid osg::TextureCubeMap::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::TextureCubeMap* self=Luna< osg::Referenced >::checkSubType< osg::TextureCubeMap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TextureCubeMap::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TextureCubeMap::setName(name);

		return 0;
	}

	// void osg::TextureCubeMap::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TextureCubeMap::base_computeDataVariance() function, expected prototype:\nvoid osg::TextureCubeMap::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TextureCubeMap* self=Luna< osg::Referenced >::checkSubType< osg::TextureCubeMap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TextureCubeMap::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TextureCubeMap::computeDataVariance();

		return 0;
	}

	// void osg::TextureCubeMap::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TextureCubeMap::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::TextureCubeMap::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::TextureCubeMap* self=Luna< osg::Referenced >::checkSubType< osg::TextureCubeMap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TextureCubeMap::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TextureCubeMap::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::TextureCubeMap::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::TextureCubeMap::base_getUserData() function, expected prototype:\nosg::Referenced * osg::TextureCubeMap::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TextureCubeMap* self=Luna< osg::Referenced >::checkSubType< osg::TextureCubeMap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::TextureCubeMap::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->TextureCubeMap::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::TextureCubeMap::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::TextureCubeMap::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::TextureCubeMap::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TextureCubeMap* self=Luna< osg::Referenced >::checkSubType< osg::TextureCubeMap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::TextureCubeMap::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->TextureCubeMap::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::TextureCubeMap::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// unsigned int osg::TextureCubeMap::base_getMember() const
	static int _bind_base_getMember(lua_State *L) {
		if (!_lg_typecheck_base_getMember(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::TextureCubeMap::base_getMember() const function, expected prototype:\nunsigned int osg::TextureCubeMap::base_getMember() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TextureCubeMap* self=Luna< osg::Referenced >::checkSubType< osg::TextureCubeMap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::TextureCubeMap::base_getMember() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->TextureCubeMap::getMember();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::TextureCubeMap::base_checkValidityOfAssociatedModes(osg::State & arg1) const
	static int _bind_base_checkValidityOfAssociatedModes(lua_State *L) {
		if (!_lg_typecheck_base_checkValidityOfAssociatedModes(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::TextureCubeMap::base_checkValidityOfAssociatedModes(osg::State & arg1) const function, expected prototype:\nbool osg::TextureCubeMap::base_checkValidityOfAssociatedModes(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::TextureCubeMap::base_checkValidityOfAssociatedModes function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::TextureCubeMap* self=Luna< osg::Referenced >::checkSubType< osg::TextureCubeMap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::TextureCubeMap::base_checkValidityOfAssociatedModes(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TextureCubeMap::checkValidityOfAssociatedModes(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// osg::Texture * osg::TextureCubeMap::base_asTexture()
	static int _bind_base_asTexture_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asTexture_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Texture * osg::TextureCubeMap::base_asTexture() function, expected prototype:\nosg::Texture * osg::TextureCubeMap::base_asTexture()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TextureCubeMap* self=Luna< osg::Referenced >::checkSubType< osg::TextureCubeMap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Texture * osg::TextureCubeMap::base_asTexture(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Texture * lret = self->TextureCubeMap::asTexture();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture >::push(L,lret,false);

		return 1;
	}

	// const osg::Texture * osg::TextureCubeMap::base_asTexture() const
	static int _bind_base_asTexture_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asTexture_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Texture * osg::TextureCubeMap::base_asTexture() const function, expected prototype:\nconst osg::Texture * osg::TextureCubeMap::base_asTexture() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TextureCubeMap* self=Luna< osg::Referenced >::checkSubType< osg::TextureCubeMap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Texture * osg::TextureCubeMap::base_asTexture() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Texture * lret = self->TextureCubeMap::asTexture();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::TextureCubeMap::base_asTexture
	static int _bind_base_asTexture(lua_State *L) {
		if (_lg_typecheck_base_asTexture_overload_1(L)) return _bind_base_asTexture_overload_1(L);
		if (_lg_typecheck_base_asTexture_overload_2(L)) return _bind_base_asTexture_overload_2(L);

		luaL_error(L, "error in function base_asTexture, cannot match any of the overloads for function base_asTexture:\n  base_asTexture()\n  base_asTexture()\n");
		return 0;
	}

	// bool osg::TextureCubeMap::base_isTextureAttribute() const
	static int _bind_base_isTextureAttribute(lua_State *L) {
		if (!_lg_typecheck_base_isTextureAttribute(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::TextureCubeMap::base_isTextureAttribute() const function, expected prototype:\nbool osg::TextureCubeMap::base_isTextureAttribute() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TextureCubeMap* self=Luna< osg::Referenced >::checkSubType< osg::TextureCubeMap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::TextureCubeMap::base_isTextureAttribute() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TextureCubeMap::isTextureAttribute();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::TextureCubeMap::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const
	static int _bind_base_getModeUsage(lua_State *L) {
		if (!_lg_typecheck_base_getModeUsage(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::TextureCubeMap::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const function, expected prototype:\nbool osg::TextureCubeMap::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const\nClass arguments details:\narg 1 ID = 48108040\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StateAttribute::ModeUsage* _arg1_ptr=(Luna< osg::StateAttribute::ModeUsage >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::TextureCubeMap::base_getModeUsage function");
		}
		osg::StateAttribute::ModeUsage & _arg1=*_arg1_ptr;

		osg::TextureCubeMap* self=Luna< osg::Referenced >::checkSubType< osg::TextureCubeMap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::TextureCubeMap::base_getModeUsage(osg::StateAttribute::ModeUsage &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TextureCubeMap::getModeUsage(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::TextureCubeMap::base_compileGLObjects(osg::State & state) const
	static int _bind_base_compileGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_compileGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TextureCubeMap::base_compileGLObjects(osg::State & state) const function, expected prototype:\nvoid osg::TextureCubeMap::base_compileGLObjects(osg::State & state) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* state_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osg::TextureCubeMap::base_compileGLObjects function");
		}
		osg::State & state=*state_ptr;

		osg::TextureCubeMap* self=Luna< osg::Referenced >::checkSubType< osg::TextureCubeMap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TextureCubeMap::base_compileGLObjects(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TextureCubeMap::compileGLObjects(state);

		return 0;
	}

	// void osg::TextureCubeMap::base_releaseGLObjects(osg::State * state = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TextureCubeMap::base_releaseGLObjects(osg::State * state = 0) const function, expected prototype:\nvoid osg::TextureCubeMap::base_releaseGLObjects(osg::State * state = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* state=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::TextureCubeMap* self=Luna< osg::Referenced >::checkSubType< osg::TextureCubeMap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TextureCubeMap::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TextureCubeMap::releaseGLObjects(state);

		return 0;
	}

	// osg::Object * osg::TextureCubeMap::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::TextureCubeMap::base_cloneType() const function, expected prototype:\nosg::Object * osg::TextureCubeMap::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TextureCubeMap* self=Luna< osg::Referenced >::checkSubType< osg::TextureCubeMap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::TextureCubeMap::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->TextureCubeMap::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::TextureCubeMap::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::TextureCubeMap::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::TextureCubeMap::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::TextureCubeMap::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::TextureCubeMap* self=Luna< osg::Referenced >::checkSubType< osg::TextureCubeMap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::TextureCubeMap::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->TextureCubeMap::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::TextureCubeMap::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::TextureCubeMap::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::TextureCubeMap::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::TextureCubeMap* self=Luna< osg::Referenced >::checkSubType< osg::TextureCubeMap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::TextureCubeMap::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TextureCubeMap::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::TextureCubeMap::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::TextureCubeMap::base_libraryName() const function, expected prototype:\nconst char * osg::TextureCubeMap::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TextureCubeMap* self=Luna< osg::Referenced >::checkSubType< osg::TextureCubeMap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::TextureCubeMap::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->TextureCubeMap::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::TextureCubeMap::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::TextureCubeMap::base_className() const function, expected prototype:\nconst char * osg::TextureCubeMap::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TextureCubeMap* self=Luna< osg::Referenced >::checkSubType< osg::TextureCubeMap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::TextureCubeMap::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->TextureCubeMap::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::TextureCubeMap::base_getType() const
	static int _bind_base_getType(lua_State *L) {
		if (!_lg_typecheck_base_getType(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::TextureCubeMap::base_getType() const function, expected prototype:\nosg::StateAttribute::Type osg::TextureCubeMap::base_getType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TextureCubeMap* self=Luna< osg::Referenced >::checkSubType< osg::TextureCubeMap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::TextureCubeMap::base_getType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::StateAttribute::Type lret = self->TextureCubeMap::getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::TextureCubeMap::base_compare(const osg::StateAttribute & rhs) const
	static int _bind_base_compare(lua_State *L) {
		if (!_lg_typecheck_base_compare(L)) {
			luaL_error(L, "luna typecheck failed in int osg::TextureCubeMap::base_compare(const osg::StateAttribute & rhs) const function, expected prototype:\nint osg::TextureCubeMap::base_compare(const osg::StateAttribute & rhs) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::StateAttribute* rhs_ptr=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::TextureCubeMap::base_compare function");
		}
		const osg::StateAttribute & rhs=*rhs_ptr;

		osg::TextureCubeMap* self=Luna< osg::Referenced >::checkSubType< osg::TextureCubeMap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::TextureCubeMap::base_compare(const osg::StateAttribute &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->TextureCubeMap::compare(rhs);
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::TextureCubeMap::base_getTextureTarget() const
	static int _bind_base_getTextureTarget(lua_State *L) {
		if (!_lg_typecheck_base_getTextureTarget(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::TextureCubeMap::base_getTextureTarget() const function, expected prototype:\nunsigned int osg::TextureCubeMap::base_getTextureTarget() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TextureCubeMap* self=Luna< osg::Referenced >::checkSubType< osg::TextureCubeMap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::TextureCubeMap::base_getTextureTarget() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->TextureCubeMap::getTextureTarget();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::TextureCubeMap::base_setImage(unsigned int face, osg::Image * image)
	static int _bind_base_setImage(lua_State *L) {
		if (!_lg_typecheck_base_setImage(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TextureCubeMap::base_setImage(unsigned int face, osg::Image * image) function, expected prototype:\nvoid osg::TextureCubeMap::base_setImage(unsigned int face, osg::Image * image)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int face=(unsigned int)lua_tointeger(L,2);
		osg::Image* image=(Luna< osg::Referenced >::checkSubType< osg::Image >(L,3));

		osg::TextureCubeMap* self=Luna< osg::Referenced >::checkSubType< osg::TextureCubeMap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TextureCubeMap::base_setImage(unsigned int, osg::Image *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TextureCubeMap::setImage(face, image);

		return 0;
	}

	// osg::Image * osg::TextureCubeMap::base_getImage(unsigned int face)
	static int _bind_base_getImage_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getImage_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Image * osg::TextureCubeMap::base_getImage(unsigned int face) function, expected prototype:\nosg::Image * osg::TextureCubeMap::base_getImage(unsigned int face)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int face=(unsigned int)lua_tointeger(L,2);

		osg::TextureCubeMap* self=Luna< osg::Referenced >::checkSubType< osg::TextureCubeMap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Image * osg::TextureCubeMap::base_getImage(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Image * lret = self->TextureCubeMap::getImage(face);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Image >::push(L,lret,false);

		return 1;
	}

	// const osg::Image * osg::TextureCubeMap::base_getImage(unsigned int face) const
	static int _bind_base_getImage_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getImage_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Image * osg::TextureCubeMap::base_getImage(unsigned int face) const function, expected prototype:\nconst osg::Image * osg::TextureCubeMap::base_getImage(unsigned int face) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int face=(unsigned int)lua_tointeger(L,2);

		osg::TextureCubeMap* self=Luna< osg::Referenced >::checkSubType< osg::TextureCubeMap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Image * osg::TextureCubeMap::base_getImage(unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Image * lret = self->TextureCubeMap::getImage(face);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Image >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::TextureCubeMap::base_getImage
	static int _bind_base_getImage(lua_State *L) {
		if (_lg_typecheck_base_getImage_overload_1(L)) return _bind_base_getImage_overload_1(L);
		if (_lg_typecheck_base_getImage_overload_2(L)) return _bind_base_getImage_overload_2(L);

		luaL_error(L, "error in function base_getImage, cannot match any of the overloads for function base_getImage:\n  base_getImage(unsigned int)\n  base_getImage(unsigned int)\n");
		return 0;
	}

	// unsigned int osg::TextureCubeMap::base_getNumImages() const
	static int _bind_base_getNumImages(lua_State *L) {
		if (!_lg_typecheck_base_getNumImages(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::TextureCubeMap::base_getNumImages() const function, expected prototype:\nunsigned int osg::TextureCubeMap::base_getNumImages() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TextureCubeMap* self=Luna< osg::Referenced >::checkSubType< osg::TextureCubeMap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::TextureCubeMap::base_getNumImages() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->TextureCubeMap::getNumImages();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::TextureCubeMap::base_getTextureWidth() const
	static int _bind_base_getTextureWidth(lua_State *L) {
		if (!_lg_typecheck_base_getTextureWidth(L)) {
			luaL_error(L, "luna typecheck failed in int osg::TextureCubeMap::base_getTextureWidth() const function, expected prototype:\nint osg::TextureCubeMap::base_getTextureWidth() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TextureCubeMap* self=Luna< osg::Referenced >::checkSubType< osg::TextureCubeMap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::TextureCubeMap::base_getTextureWidth() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->TextureCubeMap::getTextureWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::TextureCubeMap::base_getTextureHeight() const
	static int _bind_base_getTextureHeight(lua_State *L) {
		if (!_lg_typecheck_base_getTextureHeight(L)) {
			luaL_error(L, "luna typecheck failed in int osg::TextureCubeMap::base_getTextureHeight() const function, expected prototype:\nint osg::TextureCubeMap::base_getTextureHeight() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TextureCubeMap* self=Luna< osg::Referenced >::checkSubType< osg::TextureCubeMap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::TextureCubeMap::base_getTextureHeight() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->TextureCubeMap::getTextureHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::TextureCubeMap::base_getTextureDepth() const
	static int _bind_base_getTextureDepth(lua_State *L) {
		if (!_lg_typecheck_base_getTextureDepth(L)) {
			luaL_error(L, "luna typecheck failed in int osg::TextureCubeMap::base_getTextureDepth() const function, expected prototype:\nint osg::TextureCubeMap::base_getTextureDepth() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TextureCubeMap* self=Luna< osg::Referenced >::checkSubType< osg::TextureCubeMap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::TextureCubeMap::base_getTextureDepth() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->TextureCubeMap::getTextureDepth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::TextureCubeMap::base_apply(osg::State & state) const
	static int _bind_base_apply(lua_State *L) {
		if (!_lg_typecheck_base_apply(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TextureCubeMap::base_apply(osg::State & state) const function, expected prototype:\nvoid osg::TextureCubeMap::base_apply(osg::State & state) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* state_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osg::TextureCubeMap::base_apply function");
		}
		osg::State & state=*state_ptr;

		osg::TextureCubeMap* self=Luna< osg::Referenced >::checkSubType< osg::TextureCubeMap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TextureCubeMap::base_apply(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TextureCubeMap::apply(state);

		return 0;
	}


	// Operator binds:

};

osg::TextureCubeMap* LunaTraits< osg::TextureCubeMap >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_TextureCubeMap::_bind_ctor(L);
}

void LunaTraits< osg::TextureCubeMap >::_bind_dtor(osg::TextureCubeMap* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::TextureCubeMap >::className[] = "TextureCubeMap";
const char LunaTraits< osg::TextureCubeMap >::fullName[] = "osg::TextureCubeMap";
const char LunaTraits< osg::TextureCubeMap >::moduleName[] = "osg";
const char* LunaTraits< osg::TextureCubeMap >::parents[] = {"osg.Texture", 0};
const int LunaTraits< osg::TextureCubeMap >::hash = 42453611;
const int LunaTraits< osg::TextureCubeMap >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::TextureCubeMap >::methods[] = {
	{"cloneType", &luna_wrapper_osg_TextureCubeMap::_bind_cloneType},
	{"clone", &luna_wrapper_osg_TextureCubeMap::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_TextureCubeMap::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_TextureCubeMap::_bind_libraryName},
	{"className", &luna_wrapper_osg_TextureCubeMap::_bind_className},
	{"getType", &luna_wrapper_osg_TextureCubeMap::_bind_getType},
	{"compare", &luna_wrapper_osg_TextureCubeMap::_bind_compare},
	{"getTextureTarget", &luna_wrapper_osg_TextureCubeMap::_bind_getTextureTarget},
	{"setImage", &luna_wrapper_osg_TextureCubeMap::_bind_setImage},
	{"getImage", &luna_wrapper_osg_TextureCubeMap::_bind_getImage},
	{"getNumImages", &luna_wrapper_osg_TextureCubeMap::_bind_getNumImages},
	{"getModifiedCount", &luna_wrapper_osg_TextureCubeMap::_bind_getModifiedCount},
	{"setTextureSize", &luna_wrapper_osg_TextureCubeMap::_bind_setTextureSize},
	{"setTextureWidth", &luna_wrapper_osg_TextureCubeMap::_bind_setTextureWidth},
	{"setTextureHeight", &luna_wrapper_osg_TextureCubeMap::_bind_setTextureHeight},
	{"getTextureWidth", &luna_wrapper_osg_TextureCubeMap::_bind_getTextureWidth},
	{"getTextureHeight", &luna_wrapper_osg_TextureCubeMap::_bind_getTextureHeight},
	{"getTextureDepth", &luna_wrapper_osg_TextureCubeMap::_bind_getTextureDepth},
	{"setSubloadCallback", &luna_wrapper_osg_TextureCubeMap::_bind_setSubloadCallback},
	{"getSubloadCallback", &luna_wrapper_osg_TextureCubeMap::_bind_getSubloadCallback},
	{"setNumMipmapLevels", &luna_wrapper_osg_TextureCubeMap::_bind_setNumMipmapLevels},
	{"getNumMipmapLevels", &luna_wrapper_osg_TextureCubeMap::_bind_getNumMipmapLevels},
	{"copyTexSubImageCubeMap", &luna_wrapper_osg_TextureCubeMap::_bind_copyTexSubImageCubeMap},
	{"apply", &luna_wrapper_osg_TextureCubeMap::_bind_apply},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_TextureCubeMap::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osg_TextureCubeMap::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_TextureCubeMap::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_TextureCubeMap::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_TextureCubeMap::_bind_base_getUserData},
	{"base_getMember", &luna_wrapper_osg_TextureCubeMap::_bind_base_getMember},
	{"base_checkValidityOfAssociatedModes", &luna_wrapper_osg_TextureCubeMap::_bind_base_checkValidityOfAssociatedModes},
	{"base_asTexture", &luna_wrapper_osg_TextureCubeMap::_bind_base_asTexture},
	{"base_isTextureAttribute", &luna_wrapper_osg_TextureCubeMap::_bind_base_isTextureAttribute},
	{"base_getModeUsage", &luna_wrapper_osg_TextureCubeMap::_bind_base_getModeUsage},
	{"base_compileGLObjects", &luna_wrapper_osg_TextureCubeMap::_bind_base_compileGLObjects},
	{"base_releaseGLObjects", &luna_wrapper_osg_TextureCubeMap::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osg_TextureCubeMap::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_TextureCubeMap::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_TextureCubeMap::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_TextureCubeMap::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_TextureCubeMap::_bind_base_className},
	{"base_getType", &luna_wrapper_osg_TextureCubeMap::_bind_base_getType},
	{"base_compare", &luna_wrapper_osg_TextureCubeMap::_bind_base_compare},
	{"base_getTextureTarget", &luna_wrapper_osg_TextureCubeMap::_bind_base_getTextureTarget},
	{"base_setImage", &luna_wrapper_osg_TextureCubeMap::_bind_base_setImage},
	{"base_getImage", &luna_wrapper_osg_TextureCubeMap::_bind_base_getImage},
	{"base_getNumImages", &luna_wrapper_osg_TextureCubeMap::_bind_base_getNumImages},
	{"base_getTextureWidth", &luna_wrapper_osg_TextureCubeMap::_bind_base_getTextureWidth},
	{"base_getTextureHeight", &luna_wrapper_osg_TextureCubeMap::_bind_base_getTextureHeight},
	{"base_getTextureDepth", &luna_wrapper_osg_TextureCubeMap::_bind_base_getTextureDepth},
	{"base_apply", &luna_wrapper_osg_TextureCubeMap::_bind_base_apply},
	{"fromVoid", &luna_wrapper_osg_TextureCubeMap::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_TextureCubeMap::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_TextureCubeMap::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::TextureCubeMap >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_TextureCubeMap::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::TextureCubeMap >::enumValues[] = {
	{"POSITIVE_X", osg::TextureCubeMap::POSITIVE_X},
	{"NEGATIVE_X", osg::TextureCubeMap::NEGATIVE_X},
	{"POSITIVE_Y", osg::TextureCubeMap::POSITIVE_Y},
	{"NEGATIVE_Y", osg::TextureCubeMap::NEGATIVE_Y},
	{"POSITIVE_Z", osg::TextureCubeMap::POSITIVE_Z},
	{"NEGATIVE_Z", osg::TextureCubeMap::NEGATIVE_Z},
	{0,0}
};



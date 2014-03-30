#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_StateSet.h>

class luna_wrapper_osg_StateSet {
public:
	typedef Luna< osg::StateSet > luna_t;

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

		osg::StateSet* self= (osg::StateSet*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::StateSet >::push(L,self,false);
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
		//osg::StateSet* ptr= dynamic_cast< osg::StateSet* >(Luna< osg::Referenced >::check(L,1));
		osg::StateSet* ptr= luna_caster< osg::Referenced, osg::StateSet >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::StateSet >::push(L,ptr,false);
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1))) ) return false;
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_compare(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getParents_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getParents_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getParent_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getParent_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumParents(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_computeDataVariance(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setGlobalDefaults(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_clear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_merge(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMode(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setModeList(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50375310) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getModeList_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getModeList_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setAttribute(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAttributeAndModes(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeAttribute_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeAttribute_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAttribute_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAttribute_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAttributePair(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAttributeList(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,94158825) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAttributeList_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAttributeList_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTextureMode(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeTextureMode(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTextureMode(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTextureModeList(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,68848182) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTextureModeList_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTextureModeList_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumTextureModeLists(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTextureAttribute(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTextureAttributeAndModes(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeTextureAttribute_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeTextureAttribute_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTextureAttribute_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTextureAttribute_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTextureAttributePair(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTextureAttributeList(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,27505286) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTextureAttributeList_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTextureAttributeList_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumTextureAttributeLists(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setAssociatedModes(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeAssociatedModes(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAssociatedTextureModes(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeAssociatedTextureModes(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addUniform(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeUniform_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeUniform_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUniform_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUniform_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getOrCreateUniform(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUniformPair(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUniformList(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,97138515) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUniformList_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUniformList_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setRenderingHint(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRenderingHint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setRenderBinDetails(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRenderBinToInherit(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_useRenderBinDetails(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setRenderBinMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRenderBinMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setBinNumber(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getBinNumber(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setBinName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getBinName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setNestRenderBins(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNestRenderBins(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setUpdateCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUpdateCallback_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUpdateCallback_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_requiresUpdateTraversal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumChildrenRequiringUpdateTraversal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_runUpdateCallbacks(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setEventCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getEventCallback_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getEventCallback_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_requiresEventTraversal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumChildrenRequiringEventTraversal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_runEventCallbacks(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_checkValidityOfAssociatedModes(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_compileGLObjects(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_releaseGLObjects(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
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

	inline static bool _lg_typecheck_base_computeDataVariance(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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
	// (found 3 valid operators)
	inline static bool _lg_typecheck___lt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_neq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}


	// Constructor binds:
	// osg::StateSet::StateSet()
	static osg::StateSet* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateSet::StateSet() function, expected prototype:\nosg::StateSet::StateSet()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::StateSet();
	}

	// osg::StateSet::StateSet(const osg::StateSet & arg1, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::StateSet* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateSet::StateSet(const osg::StateSet & arg1, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::StateSet::StateSet(const osg::StateSet & arg1, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::StateSet* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::StateSet::StateSet function");
		}
		const osg::StateSet & _arg1=*_arg1_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::StateSet::StateSet function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osg::StateSet(_arg1, copyop);
	}

	// osg::StateSet::StateSet(lua_Table * data)
	static osg::StateSet* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateSet::StateSet(lua_Table * data) function, expected prototype:\nosg::StateSet::StateSet(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_StateSet(L,NULL);
	}

	// osg::StateSet::StateSet(lua_Table * data, const osg::StateSet & arg2, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::StateSet* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateSet::StateSet(lua_Table * data, const osg::StateSet & arg2, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::StateSet::StateSet(lua_Table * data, const osg::StateSet & arg2, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::StateSet* _arg2_ptr=(Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,2));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osg::StateSet::StateSet function");
		}
		const osg::StateSet & _arg2=*_arg2_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::StateSet::StateSet function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_StateSet(L,NULL, _arg2, copyop);
	}

	// Overload binder for osg::StateSet::StateSet
	static osg::StateSet* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function StateSet, cannot match any of the overloads for function StateSet:\n  StateSet()\n  StateSet(const osg::StateSet &, const osg::CopyOp &)\n  StateSet(lua_Table *)\n  StateSet(lua_Table *, const osg::StateSet &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::StateSet::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::StateSet::cloneType() const function, expected prototype:\nosg::Object * osg::StateSet::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::StateSet::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::StateSet::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::StateSet::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::StateSet::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::StateSet::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::StateSet::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::StateSet::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::StateSet::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::StateSet::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::StateSet::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::StateSet::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::StateSet::libraryName() const function, expected prototype:\nconst char * osg::StateSet::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::StateSet::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::StateSet::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::StateSet::className() const function, expected prototype:\nconst char * osg::StateSet::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::StateSet::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// int osg::StateSet::compare(const osg::StateSet & rhs, bool compareAttributeContents = false) const
	static int _bind_compare(lua_State *L) {
		if (!_lg_typecheck_compare(L)) {
			luaL_error(L, "luna typecheck failed in int osg::StateSet::compare(const osg::StateSet & rhs, bool compareAttributeContents = false) const function, expected prototype:\nint osg::StateSet::compare(const osg::StateSet & rhs, bool compareAttributeContents = false) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::StateSet* rhs_ptr=(Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::StateSet::compare function");
		}
		const osg::StateSet & rhs=*rhs_ptr;
		bool compareAttributeContents=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)false;

		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::StateSet::compare(const osg::StateSet &, bool) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->compare(rhs, compareAttributeContents);
		lua_pushnumber(L,lret);

		return 1;
	}

	// const osg::StateSet::ParentList & osg::StateSet::getParents() const
	static int _bind_getParents_overload_1(lua_State *L) {
		if (!_lg_typecheck_getParents_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const osg::StateSet::ParentList & osg::StateSet::getParents() const function, expected prototype:\nconst osg::StateSet::ParentList & osg::StateSet::getParents() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::StateSet::ParentList & osg::StateSet::getParents() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::StateSet::ParentList* lret = &self->getParents();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateSet::ParentList >::push(L,lret,false);

		return 1;
	}

	// osg::StateSet::ParentList osg::StateSet::getParents()
	static int _bind_getParents_overload_2(lua_State *L) {
		if (!_lg_typecheck_getParents_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateSet::ParentList osg::StateSet::getParents() function, expected prototype:\nosg::StateSet::ParentList osg::StateSet::getParents()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateSet::ParentList osg::StateSet::getParents(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::StateSet::ParentList stack_lret = self->getParents();
		osg::StateSet::ParentList* lret = new osg::StateSet::ParentList(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateSet::ParentList >::push(L,lret,true);

		return 1;
	}

	// Overload binder for osg::StateSet::getParents
	static int _bind_getParents(lua_State *L) {
		if (_lg_typecheck_getParents_overload_1(L)) return _bind_getParents_overload_1(L);
		if (_lg_typecheck_getParents_overload_2(L)) return _bind_getParents_overload_2(L);

		luaL_error(L, "error in function getParents, cannot match any of the overloads for function getParents:\n  getParents()\n  getParents()\n");
		return 0;
	}

	// osg::Object * osg::StateSet::getParent(unsigned int i)
	static int _bind_getParent_overload_1(lua_State *L) {
		if (!_lg_typecheck_getParent_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::StateSet::getParent(unsigned int i) function, expected prototype:\nosg::Object * osg::StateSet::getParent(unsigned int i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::StateSet::getParent(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->getParent(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// const osg::Object * osg::StateSet::getParent(unsigned int i) const
	static int _bind_getParent_overload_2(lua_State *L) {
		if (!_lg_typecheck_getParent_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Object * osg::StateSet::getParent(unsigned int i) const function, expected prototype:\nconst osg::Object * osg::StateSet::getParent(unsigned int i) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Object * osg::StateSet::getParent(unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Object * lret = self->getParent(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::StateSet::getParent
	static int _bind_getParent(lua_State *L) {
		if (_lg_typecheck_getParent_overload_1(L)) return _bind_getParent_overload_1(L);
		if (_lg_typecheck_getParent_overload_2(L)) return _bind_getParent_overload_2(L);

		luaL_error(L, "error in function getParent, cannot match any of the overloads for function getParent:\n  getParent(unsigned int)\n  getParent(unsigned int)\n");
		return 0;
	}

	// unsigned int osg::StateSet::getNumParents() const
	static int _bind_getNumParents(lua_State *L) {
		if (!_lg_typecheck_getNumParents(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::StateSet::getNumParents() const function, expected prototype:\nunsigned int osg::StateSet::getNumParents() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::StateSet::getNumParents() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getNumParents();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::StateSet::computeDataVariance()
	static int _bind_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StateSet::computeDataVariance() function, expected prototype:\nvoid osg::StateSet::computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StateSet::computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->computeDataVariance();

		return 0;
	}

	// void osg::StateSet::setGlobalDefaults()
	static int _bind_setGlobalDefaults(lua_State *L) {
		if (!_lg_typecheck_setGlobalDefaults(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StateSet::setGlobalDefaults() function, expected prototype:\nvoid osg::StateSet::setGlobalDefaults()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StateSet::setGlobalDefaults(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setGlobalDefaults();

		return 0;
	}

	// void osg::StateSet::clear()
	static int _bind_clear(lua_State *L) {
		if (!_lg_typecheck_clear(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StateSet::clear() function, expected prototype:\nvoid osg::StateSet::clear()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StateSet::clear(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->clear();

		return 0;
	}

	// void osg::StateSet::merge(const osg::StateSet & rhs)
	static int _bind_merge(lua_State *L) {
		if (!_lg_typecheck_merge(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StateSet::merge(const osg::StateSet & rhs) function, expected prototype:\nvoid osg::StateSet::merge(const osg::StateSet & rhs)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::StateSet* rhs_ptr=(Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::StateSet::merge function");
		}
		const osg::StateSet & rhs=*rhs_ptr;

		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StateSet::merge(const osg::StateSet &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->merge(rhs);

		return 0;
	}

	// void osg::StateSet::setMode(unsigned int mode, unsigned int value)
	static int _bind_setMode(lua_State *L) {
		if (!_lg_typecheck_setMode(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StateSet::setMode(unsigned int mode, unsigned int value) function, expected prototype:\nvoid osg::StateSet::setMode(unsigned int mode, unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int mode=(unsigned int)lua_tointeger(L,2);
		unsigned int value=(unsigned int)lua_tointeger(L,3);

		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StateSet::setMode(unsigned int, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setMode(mode, value);

		return 0;
	}

	// void osg::StateSet::removeMode(unsigned int mode)
	static int _bind_removeMode(lua_State *L) {
		if (!_lg_typecheck_removeMode(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StateSet::removeMode(unsigned int mode) function, expected prototype:\nvoid osg::StateSet::removeMode(unsigned int mode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int mode=(unsigned int)lua_tointeger(L,2);

		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StateSet::removeMode(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->removeMode(mode);

		return 0;
	}

	// unsigned int osg::StateSet::getMode(unsigned int mode) const
	static int _bind_getMode(lua_State *L) {
		if (!_lg_typecheck_getMode(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::StateSet::getMode(unsigned int mode) const function, expected prototype:\nunsigned int osg::StateSet::getMode(unsigned int mode) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int mode=(unsigned int)lua_tointeger(L,2);

		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::StateSet::getMode(unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getMode(mode);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::StateSet::setModeList(osg::StateSet::ModeList & ml)
	static int _bind_setModeList(lua_State *L) {
		if (!_lg_typecheck_setModeList(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StateSet::setModeList(osg::StateSet::ModeList & ml) function, expected prototype:\nvoid osg::StateSet::setModeList(osg::StateSet::ModeList & ml)\nClass arguments details:\narg 1 ID = 59463386\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StateSet::ModeList* ml_ptr=(Luna< std::map< unsigned int, unsigned int > >::checkSubType< osg::StateSet::ModeList >(L,2));
		if( !ml_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ml in osg::StateSet::setModeList function");
		}
		osg::StateSet::ModeList & ml=*ml_ptr;

		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StateSet::setModeList(osg::StateSet::ModeList &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setModeList(ml);

		return 0;
	}

	// osg::StateSet::ModeList & osg::StateSet::getModeList()
	static int _bind_getModeList_overload_1(lua_State *L) {
		if (!_lg_typecheck_getModeList_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateSet::ModeList & osg::StateSet::getModeList() function, expected prototype:\nosg::StateSet::ModeList & osg::StateSet::getModeList()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateSet::ModeList & osg::StateSet::getModeList(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::StateSet::ModeList* lret = &self->getModeList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateSet::ModeList >::push(L,lret,false);

		return 1;
	}

	// const osg::StateSet::ModeList & osg::StateSet::getModeList() const
	static int _bind_getModeList_overload_2(lua_State *L) {
		if (!_lg_typecheck_getModeList_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::StateSet::ModeList & osg::StateSet::getModeList() const function, expected prototype:\nconst osg::StateSet::ModeList & osg::StateSet::getModeList() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::StateSet::ModeList & osg::StateSet::getModeList() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::StateSet::ModeList* lret = &self->getModeList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateSet::ModeList >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::StateSet::getModeList
	static int _bind_getModeList(lua_State *L) {
		if (_lg_typecheck_getModeList_overload_1(L)) return _bind_getModeList_overload_1(L);
		if (_lg_typecheck_getModeList_overload_2(L)) return _bind_getModeList_overload_2(L);

		luaL_error(L, "error in function getModeList, cannot match any of the overloads for function getModeList:\n  getModeList()\n  getModeList()\n");
		return 0;
	}

	// void osg::StateSet::setAttribute(osg::StateAttribute * attribute, unsigned int value = osg::StateAttribute::OFF)
	static int _bind_setAttribute(lua_State *L) {
		if (!_lg_typecheck_setAttribute(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StateSet::setAttribute(osg::StateAttribute * attribute, unsigned int value = osg::StateAttribute::OFF) function, expected prototype:\nvoid osg::StateSet::setAttribute(osg::StateAttribute * attribute, unsigned int value = osg::StateAttribute::OFF)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::StateAttribute* attribute=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2));
		unsigned int value=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)osg::StateAttribute::OFF;

		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StateSet::setAttribute(osg::StateAttribute *, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setAttribute(attribute, value);

		return 0;
	}

	// void osg::StateSet::setAttributeAndModes(osg::StateAttribute * attribute, unsigned int value = osg::StateAttribute::ON)
	static int _bind_setAttributeAndModes(lua_State *L) {
		if (!_lg_typecheck_setAttributeAndModes(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StateSet::setAttributeAndModes(osg::StateAttribute * attribute, unsigned int value = osg::StateAttribute::ON) function, expected prototype:\nvoid osg::StateSet::setAttributeAndModes(osg::StateAttribute * attribute, unsigned int value = osg::StateAttribute::ON)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::StateAttribute* attribute=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2));
		unsigned int value=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)osg::StateAttribute::ON;

		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StateSet::setAttributeAndModes(osg::StateAttribute *, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setAttributeAndModes(attribute, value);

		return 0;
	}

	// void osg::StateSet::removeAttribute(osg::StateAttribute::Type type, unsigned int member = 0)
	static int _bind_removeAttribute_overload_1(lua_State *L) {
		if (!_lg_typecheck_removeAttribute_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StateSet::removeAttribute(osg::StateAttribute::Type type, unsigned int member = 0) function, expected prototype:\nvoid osg::StateSet::removeAttribute(osg::StateAttribute::Type type, unsigned int member = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::StateAttribute::Type type=(osg::StateAttribute::Type)lua_tointeger(L,2);
		unsigned int member=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)0;

		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StateSet::removeAttribute(osg::StateAttribute::Type, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->removeAttribute(type, member);

		return 0;
	}

	// void osg::StateSet::removeAttribute(osg::StateAttribute * attribute)
	static int _bind_removeAttribute_overload_2(lua_State *L) {
		if (!_lg_typecheck_removeAttribute_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StateSet::removeAttribute(osg::StateAttribute * attribute) function, expected prototype:\nvoid osg::StateSet::removeAttribute(osg::StateAttribute * attribute)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StateAttribute* attribute=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2));

		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StateSet::removeAttribute(osg::StateAttribute *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->removeAttribute(attribute);

		return 0;
	}

	// Overload binder for osg::StateSet::removeAttribute
	static int _bind_removeAttribute(lua_State *L) {
		if (_lg_typecheck_removeAttribute_overload_1(L)) return _bind_removeAttribute_overload_1(L);
		if (_lg_typecheck_removeAttribute_overload_2(L)) return _bind_removeAttribute_overload_2(L);

		luaL_error(L, "error in function removeAttribute, cannot match any of the overloads for function removeAttribute:\n  removeAttribute(osg::StateAttribute::Type, unsigned int)\n  removeAttribute(osg::StateAttribute *)\n");
		return 0;
	}

	// osg::StateAttribute * osg::StateSet::getAttribute(osg::StateAttribute::Type type, unsigned int member = 0)
	static int _bind_getAttribute_overload_1(lua_State *L) {
		if (!_lg_typecheck_getAttribute_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateAttribute * osg::StateSet::getAttribute(osg::StateAttribute::Type type, unsigned int member = 0) function, expected prototype:\nosg::StateAttribute * osg::StateSet::getAttribute(osg::StateAttribute::Type type, unsigned int member = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::StateAttribute::Type type=(osg::StateAttribute::Type)lua_tointeger(L,2);
		unsigned int member=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)0;

		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateAttribute * osg::StateSet::getAttribute(osg::StateAttribute::Type, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::StateAttribute * lret = self->getAttribute(type, member);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateAttribute >::push(L,lret,false);

		return 1;
	}

	// const osg::StateAttribute * osg::StateSet::getAttribute(osg::StateAttribute::Type type, unsigned int member = 0) const
	static int _bind_getAttribute_overload_2(lua_State *L) {
		if (!_lg_typecheck_getAttribute_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::StateAttribute * osg::StateSet::getAttribute(osg::StateAttribute::Type type, unsigned int member = 0) const function, expected prototype:\nconst osg::StateAttribute * osg::StateSet::getAttribute(osg::StateAttribute::Type type, unsigned int member = 0) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::StateAttribute::Type type=(osg::StateAttribute::Type)lua_tointeger(L,2);
		unsigned int member=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)0;

		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::StateAttribute * osg::StateSet::getAttribute(osg::StateAttribute::Type, unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::StateAttribute * lret = self->getAttribute(type, member);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateAttribute >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::StateSet::getAttribute
	static int _bind_getAttribute(lua_State *L) {
		if (_lg_typecheck_getAttribute_overload_1(L)) return _bind_getAttribute_overload_1(L);
		if (_lg_typecheck_getAttribute_overload_2(L)) return _bind_getAttribute_overload_2(L);

		luaL_error(L, "error in function getAttribute, cannot match any of the overloads for function getAttribute:\n  getAttribute(osg::StateAttribute::Type, unsigned int)\n  getAttribute(osg::StateAttribute::Type, unsigned int)\n");
		return 0;
	}

	// const osg::StateSet::RefAttributePair * osg::StateSet::getAttributePair(osg::StateAttribute::Type type, unsigned int member = 0) const
	static int _bind_getAttributePair(lua_State *L) {
		if (!_lg_typecheck_getAttributePair(L)) {
			luaL_error(L, "luna typecheck failed in const osg::StateSet::RefAttributePair * osg::StateSet::getAttributePair(osg::StateAttribute::Type type, unsigned int member = 0) const function, expected prototype:\nconst osg::StateSet::RefAttributePair * osg::StateSet::getAttributePair(osg::StateAttribute::Type type, unsigned int member = 0) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::StateAttribute::Type type=(osg::StateAttribute::Type)lua_tointeger(L,2);
		unsigned int member=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)0;

		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::StateSet::RefAttributePair * osg::StateSet::getAttributePair(osg::StateAttribute::Type, unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::StateSet::RefAttributePair * lret = self->getAttributePair(type, member);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateSet::RefAttributePair >::push(L,lret,false);

		return 1;
	}

	// void osg::StateSet::setAttributeList(osg::StateSet::AttributeList & al)
	static int _bind_setAttributeList(lua_State *L) {
		if (!_lg_typecheck_setAttributeList(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StateSet::setAttributeList(osg::StateSet::AttributeList & al) function, expected prototype:\nvoid osg::StateSet::setAttributeList(osg::StateSet::AttributeList & al)\nClass arguments details:\narg 1 ID = 84373691\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StateSet::AttributeList* al_ptr=(Luna< std::map< osg::StateAttribute::TypeMemberPair, osg::StateSet::RefAttributePair > >::checkSubType< osg::StateSet::AttributeList >(L,2));
		if( !al_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg al in osg::StateSet::setAttributeList function");
		}
		osg::StateSet::AttributeList & al=*al_ptr;

		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StateSet::setAttributeList(osg::StateSet::AttributeList &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setAttributeList(al);

		return 0;
	}

	// osg::StateSet::AttributeList & osg::StateSet::getAttributeList()
	static int _bind_getAttributeList_overload_1(lua_State *L) {
		if (!_lg_typecheck_getAttributeList_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateSet::AttributeList & osg::StateSet::getAttributeList() function, expected prototype:\nosg::StateSet::AttributeList & osg::StateSet::getAttributeList()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateSet::AttributeList & osg::StateSet::getAttributeList(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::StateSet::AttributeList* lret = &self->getAttributeList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateSet::AttributeList >::push(L,lret,false);

		return 1;
	}

	// const osg::StateSet::AttributeList & osg::StateSet::getAttributeList() const
	static int _bind_getAttributeList_overload_2(lua_State *L) {
		if (!_lg_typecheck_getAttributeList_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::StateSet::AttributeList & osg::StateSet::getAttributeList() const function, expected prototype:\nconst osg::StateSet::AttributeList & osg::StateSet::getAttributeList() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::StateSet::AttributeList & osg::StateSet::getAttributeList() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::StateSet::AttributeList* lret = &self->getAttributeList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateSet::AttributeList >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::StateSet::getAttributeList
	static int _bind_getAttributeList(lua_State *L) {
		if (_lg_typecheck_getAttributeList_overload_1(L)) return _bind_getAttributeList_overload_1(L);
		if (_lg_typecheck_getAttributeList_overload_2(L)) return _bind_getAttributeList_overload_2(L);

		luaL_error(L, "error in function getAttributeList, cannot match any of the overloads for function getAttributeList:\n  getAttributeList()\n  getAttributeList()\n");
		return 0;
	}

	// void osg::StateSet::setTextureMode(unsigned int unit, unsigned int mode, unsigned int value)
	static int _bind_setTextureMode(lua_State *L) {
		if (!_lg_typecheck_setTextureMode(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StateSet::setTextureMode(unsigned int unit, unsigned int mode, unsigned int value) function, expected prototype:\nvoid osg::StateSet::setTextureMode(unsigned int unit, unsigned int mode, unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int unit=(unsigned int)lua_tointeger(L,2);
		unsigned int mode=(unsigned int)lua_tointeger(L,3);
		unsigned int value=(unsigned int)lua_tointeger(L,4);

		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StateSet::setTextureMode(unsigned int, unsigned int, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setTextureMode(unit, mode, value);

		return 0;
	}

	// void osg::StateSet::removeTextureMode(unsigned int unit, unsigned int mode)
	static int _bind_removeTextureMode(lua_State *L) {
		if (!_lg_typecheck_removeTextureMode(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StateSet::removeTextureMode(unsigned int unit, unsigned int mode) function, expected prototype:\nvoid osg::StateSet::removeTextureMode(unsigned int unit, unsigned int mode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int unit=(unsigned int)lua_tointeger(L,2);
		unsigned int mode=(unsigned int)lua_tointeger(L,3);

		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StateSet::removeTextureMode(unsigned int, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->removeTextureMode(unit, mode);

		return 0;
	}

	// unsigned int osg::StateSet::getTextureMode(unsigned int unit, unsigned int mode) const
	static int _bind_getTextureMode(lua_State *L) {
		if (!_lg_typecheck_getTextureMode(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::StateSet::getTextureMode(unsigned int unit, unsigned int mode) const function, expected prototype:\nunsigned int osg::StateSet::getTextureMode(unsigned int unit, unsigned int mode) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int unit=(unsigned int)lua_tointeger(L,2);
		unsigned int mode=(unsigned int)lua_tointeger(L,3);

		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::StateSet::getTextureMode(unsigned int, unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getTextureMode(unit, mode);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::StateSet::setTextureModeList(osg::StateSet::TextureModeList & tml)
	static int _bind_setTextureModeList(lua_State *L) {
		if (!_lg_typecheck_setTextureModeList(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StateSet::setTextureModeList(osg::StateSet::TextureModeList & tml) function, expected prototype:\nvoid osg::StateSet::setTextureModeList(osg::StateSet::TextureModeList & tml)\nClass arguments details:\narg 1 ID = 14028616\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StateSet::TextureModeList* tml_ptr=(Luna< std::vector< osg::StateSet::ModeList > >::checkSubType< osg::StateSet::TextureModeList >(L,2));
		if( !tml_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg tml in osg::StateSet::setTextureModeList function");
		}
		osg::StateSet::TextureModeList & tml=*tml_ptr;

		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StateSet::setTextureModeList(osg::StateSet::TextureModeList &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setTextureModeList(tml);

		return 0;
	}

	// osg::StateSet::TextureModeList & osg::StateSet::getTextureModeList()
	static int _bind_getTextureModeList_overload_1(lua_State *L) {
		if (!_lg_typecheck_getTextureModeList_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateSet::TextureModeList & osg::StateSet::getTextureModeList() function, expected prototype:\nosg::StateSet::TextureModeList & osg::StateSet::getTextureModeList()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateSet::TextureModeList & osg::StateSet::getTextureModeList(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::StateSet::TextureModeList* lret = &self->getTextureModeList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateSet::TextureModeList >::push(L,lret,false);

		return 1;
	}

	// const osg::StateSet::TextureModeList & osg::StateSet::getTextureModeList() const
	static int _bind_getTextureModeList_overload_2(lua_State *L) {
		if (!_lg_typecheck_getTextureModeList_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::StateSet::TextureModeList & osg::StateSet::getTextureModeList() const function, expected prototype:\nconst osg::StateSet::TextureModeList & osg::StateSet::getTextureModeList() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::StateSet::TextureModeList & osg::StateSet::getTextureModeList() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::StateSet::TextureModeList* lret = &self->getTextureModeList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateSet::TextureModeList >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::StateSet::getTextureModeList
	static int _bind_getTextureModeList(lua_State *L) {
		if (_lg_typecheck_getTextureModeList_overload_1(L)) return _bind_getTextureModeList_overload_1(L);
		if (_lg_typecheck_getTextureModeList_overload_2(L)) return _bind_getTextureModeList_overload_2(L);

		luaL_error(L, "error in function getTextureModeList, cannot match any of the overloads for function getTextureModeList:\n  getTextureModeList()\n  getTextureModeList()\n");
		return 0;
	}

	// unsigned int osg::StateSet::getNumTextureModeLists() const
	static int _bind_getNumTextureModeLists(lua_State *L) {
		if (!_lg_typecheck_getNumTextureModeLists(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::StateSet::getNumTextureModeLists() const function, expected prototype:\nunsigned int osg::StateSet::getNumTextureModeLists() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::StateSet::getNumTextureModeLists() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getNumTextureModeLists();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::StateSet::setTextureAttribute(unsigned int unit, osg::StateAttribute * attribute, unsigned int value = osg::StateAttribute::OFF)
	static int _bind_setTextureAttribute(lua_State *L) {
		if (!_lg_typecheck_setTextureAttribute(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StateSet::setTextureAttribute(unsigned int unit, osg::StateAttribute * attribute, unsigned int value = osg::StateAttribute::OFF) function, expected prototype:\nvoid osg::StateSet::setTextureAttribute(unsigned int unit, osg::StateAttribute * attribute, unsigned int value = osg::StateAttribute::OFF)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		unsigned int unit=(unsigned int)lua_tointeger(L,2);
		osg::StateAttribute* attribute=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,3));
		unsigned int value=luatop>3 ? (unsigned int)lua_tointeger(L,4) : (unsigned int)osg::StateAttribute::OFF;

		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StateSet::setTextureAttribute(unsigned int, osg::StateAttribute *, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setTextureAttribute(unit, attribute, value);

		return 0;
	}

	// void osg::StateSet::setTextureAttributeAndModes(unsigned int unit, osg::StateAttribute * attribute, unsigned int value = osg::StateAttribute::ON)
	static int _bind_setTextureAttributeAndModes(lua_State *L) {
		if (!_lg_typecheck_setTextureAttributeAndModes(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StateSet::setTextureAttributeAndModes(unsigned int unit, osg::StateAttribute * attribute, unsigned int value = osg::StateAttribute::ON) function, expected prototype:\nvoid osg::StateSet::setTextureAttributeAndModes(unsigned int unit, osg::StateAttribute * attribute, unsigned int value = osg::StateAttribute::ON)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		unsigned int unit=(unsigned int)lua_tointeger(L,2);
		osg::StateAttribute* attribute=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,3));
		unsigned int value=luatop>3 ? (unsigned int)lua_tointeger(L,4) : (unsigned int)osg::StateAttribute::ON;

		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StateSet::setTextureAttributeAndModes(unsigned int, osg::StateAttribute *, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setTextureAttributeAndModes(unit, attribute, value);

		return 0;
	}

	// void osg::StateSet::removeTextureAttribute(unsigned int unit, osg::StateAttribute::Type type)
	static int _bind_removeTextureAttribute_overload_1(lua_State *L) {
		if (!_lg_typecheck_removeTextureAttribute_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StateSet::removeTextureAttribute(unsigned int unit, osg::StateAttribute::Type type) function, expected prototype:\nvoid osg::StateSet::removeTextureAttribute(unsigned int unit, osg::StateAttribute::Type type)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int unit=(unsigned int)lua_tointeger(L,2);
		osg::StateAttribute::Type type=(osg::StateAttribute::Type)lua_tointeger(L,3);

		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StateSet::removeTextureAttribute(unsigned int, osg::StateAttribute::Type). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->removeTextureAttribute(unit, type);

		return 0;
	}

	// void osg::StateSet::removeTextureAttribute(unsigned int unit, osg::StateAttribute * attribute)
	static int _bind_removeTextureAttribute_overload_2(lua_State *L) {
		if (!_lg_typecheck_removeTextureAttribute_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StateSet::removeTextureAttribute(unsigned int unit, osg::StateAttribute * attribute) function, expected prototype:\nvoid osg::StateSet::removeTextureAttribute(unsigned int unit, osg::StateAttribute * attribute)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int unit=(unsigned int)lua_tointeger(L,2);
		osg::StateAttribute* attribute=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,3));

		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StateSet::removeTextureAttribute(unsigned int, osg::StateAttribute *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->removeTextureAttribute(unit, attribute);

		return 0;
	}

	// Overload binder for osg::StateSet::removeTextureAttribute
	static int _bind_removeTextureAttribute(lua_State *L) {
		if (_lg_typecheck_removeTextureAttribute_overload_1(L)) return _bind_removeTextureAttribute_overload_1(L);
		if (_lg_typecheck_removeTextureAttribute_overload_2(L)) return _bind_removeTextureAttribute_overload_2(L);

		luaL_error(L, "error in function removeTextureAttribute, cannot match any of the overloads for function removeTextureAttribute:\n  removeTextureAttribute(unsigned int, osg::StateAttribute::Type)\n  removeTextureAttribute(unsigned int, osg::StateAttribute *)\n");
		return 0;
	}

	// osg::StateAttribute * osg::StateSet::getTextureAttribute(unsigned int unit, osg::StateAttribute::Type type)
	static int _bind_getTextureAttribute_overload_1(lua_State *L) {
		if (!_lg_typecheck_getTextureAttribute_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateAttribute * osg::StateSet::getTextureAttribute(unsigned int unit, osg::StateAttribute::Type type) function, expected prototype:\nosg::StateAttribute * osg::StateSet::getTextureAttribute(unsigned int unit, osg::StateAttribute::Type type)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int unit=(unsigned int)lua_tointeger(L,2);
		osg::StateAttribute::Type type=(osg::StateAttribute::Type)lua_tointeger(L,3);

		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateAttribute * osg::StateSet::getTextureAttribute(unsigned int, osg::StateAttribute::Type). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::StateAttribute * lret = self->getTextureAttribute(unit, type);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateAttribute >::push(L,lret,false);

		return 1;
	}

	// const osg::StateAttribute * osg::StateSet::getTextureAttribute(unsigned int unit, osg::StateAttribute::Type type) const
	static int _bind_getTextureAttribute_overload_2(lua_State *L) {
		if (!_lg_typecheck_getTextureAttribute_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::StateAttribute * osg::StateSet::getTextureAttribute(unsigned int unit, osg::StateAttribute::Type type) const function, expected prototype:\nconst osg::StateAttribute * osg::StateSet::getTextureAttribute(unsigned int unit, osg::StateAttribute::Type type) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int unit=(unsigned int)lua_tointeger(L,2);
		osg::StateAttribute::Type type=(osg::StateAttribute::Type)lua_tointeger(L,3);

		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::StateAttribute * osg::StateSet::getTextureAttribute(unsigned int, osg::StateAttribute::Type) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::StateAttribute * lret = self->getTextureAttribute(unit, type);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateAttribute >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::StateSet::getTextureAttribute
	static int _bind_getTextureAttribute(lua_State *L) {
		if (_lg_typecheck_getTextureAttribute_overload_1(L)) return _bind_getTextureAttribute_overload_1(L);
		if (_lg_typecheck_getTextureAttribute_overload_2(L)) return _bind_getTextureAttribute_overload_2(L);

		luaL_error(L, "error in function getTextureAttribute, cannot match any of the overloads for function getTextureAttribute:\n  getTextureAttribute(unsigned int, osg::StateAttribute::Type)\n  getTextureAttribute(unsigned int, osg::StateAttribute::Type)\n");
		return 0;
	}

	// const osg::StateSet::RefAttributePair * osg::StateSet::getTextureAttributePair(unsigned int unit, osg::StateAttribute::Type type) const
	static int _bind_getTextureAttributePair(lua_State *L) {
		if (!_lg_typecheck_getTextureAttributePair(L)) {
			luaL_error(L, "luna typecheck failed in const osg::StateSet::RefAttributePair * osg::StateSet::getTextureAttributePair(unsigned int unit, osg::StateAttribute::Type type) const function, expected prototype:\nconst osg::StateSet::RefAttributePair * osg::StateSet::getTextureAttributePair(unsigned int unit, osg::StateAttribute::Type type) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int unit=(unsigned int)lua_tointeger(L,2);
		osg::StateAttribute::Type type=(osg::StateAttribute::Type)lua_tointeger(L,3);

		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::StateSet::RefAttributePair * osg::StateSet::getTextureAttributePair(unsigned int, osg::StateAttribute::Type) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::StateSet::RefAttributePair * lret = self->getTextureAttributePair(unit, type);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateSet::RefAttributePair >::push(L,lret,false);

		return 1;
	}

	// void osg::StateSet::setTextureAttributeList(osg::StateSet::TextureAttributeList & tal)
	static int _bind_setTextureAttributeList(lua_State *L) {
		if (!_lg_typecheck_setTextureAttributeList(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StateSet::setTextureAttributeList(osg::StateSet::TextureAttributeList & tal) function, expected prototype:\nvoid osg::StateSet::setTextureAttributeList(osg::StateSet::TextureAttributeList & tal)\nClass arguments details:\narg 1 ID = 35981382\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StateSet::TextureAttributeList* tal_ptr=(Luna< std::vector< osg::StateSet::AttributeList > >::checkSubType< osg::StateSet::TextureAttributeList >(L,2));
		if( !tal_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg tal in osg::StateSet::setTextureAttributeList function");
		}
		osg::StateSet::TextureAttributeList & tal=*tal_ptr;

		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StateSet::setTextureAttributeList(osg::StateSet::TextureAttributeList &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setTextureAttributeList(tal);

		return 0;
	}

	// osg::StateSet::TextureAttributeList & osg::StateSet::getTextureAttributeList()
	static int _bind_getTextureAttributeList_overload_1(lua_State *L) {
		if (!_lg_typecheck_getTextureAttributeList_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateSet::TextureAttributeList & osg::StateSet::getTextureAttributeList() function, expected prototype:\nosg::StateSet::TextureAttributeList & osg::StateSet::getTextureAttributeList()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateSet::TextureAttributeList & osg::StateSet::getTextureAttributeList(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::StateSet::TextureAttributeList* lret = &self->getTextureAttributeList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateSet::TextureAttributeList >::push(L,lret,false);

		return 1;
	}

	// const osg::StateSet::TextureAttributeList & osg::StateSet::getTextureAttributeList() const
	static int _bind_getTextureAttributeList_overload_2(lua_State *L) {
		if (!_lg_typecheck_getTextureAttributeList_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::StateSet::TextureAttributeList & osg::StateSet::getTextureAttributeList() const function, expected prototype:\nconst osg::StateSet::TextureAttributeList & osg::StateSet::getTextureAttributeList() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::StateSet::TextureAttributeList & osg::StateSet::getTextureAttributeList() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::StateSet::TextureAttributeList* lret = &self->getTextureAttributeList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateSet::TextureAttributeList >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::StateSet::getTextureAttributeList
	static int _bind_getTextureAttributeList(lua_State *L) {
		if (_lg_typecheck_getTextureAttributeList_overload_1(L)) return _bind_getTextureAttributeList_overload_1(L);
		if (_lg_typecheck_getTextureAttributeList_overload_2(L)) return _bind_getTextureAttributeList_overload_2(L);

		luaL_error(L, "error in function getTextureAttributeList, cannot match any of the overloads for function getTextureAttributeList:\n  getTextureAttributeList()\n  getTextureAttributeList()\n");
		return 0;
	}

	// unsigned int osg::StateSet::getNumTextureAttributeLists() const
	static int _bind_getNumTextureAttributeLists(lua_State *L) {
		if (!_lg_typecheck_getNumTextureAttributeLists(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::StateSet::getNumTextureAttributeLists() const function, expected prototype:\nunsigned int osg::StateSet::getNumTextureAttributeLists() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::StateSet::getNumTextureAttributeLists() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getNumTextureAttributeLists();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::StateSet::setAssociatedModes(const osg::StateAttribute * attribute, unsigned int value)
	static int _bind_setAssociatedModes(lua_State *L) {
		if (!_lg_typecheck_setAssociatedModes(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StateSet::setAssociatedModes(const osg::StateAttribute * attribute, unsigned int value) function, expected prototype:\nvoid osg::StateSet::setAssociatedModes(const osg::StateAttribute * attribute, unsigned int value)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::StateAttribute* attribute=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2));
		unsigned int value=(unsigned int)lua_tointeger(L,3);

		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StateSet::setAssociatedModes(const osg::StateAttribute *, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setAssociatedModes(attribute, value);

		return 0;
	}

	// void osg::StateSet::removeAssociatedModes(const osg::StateAttribute * attribute)
	static int _bind_removeAssociatedModes(lua_State *L) {
		if (!_lg_typecheck_removeAssociatedModes(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StateSet::removeAssociatedModes(const osg::StateAttribute * attribute) function, expected prototype:\nvoid osg::StateSet::removeAssociatedModes(const osg::StateAttribute * attribute)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::StateAttribute* attribute=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2));

		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StateSet::removeAssociatedModes(const osg::StateAttribute *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->removeAssociatedModes(attribute);

		return 0;
	}

	// void osg::StateSet::setAssociatedTextureModes(unsigned int unit, const osg::StateAttribute * attribute, unsigned int value)
	static int _bind_setAssociatedTextureModes(lua_State *L) {
		if (!_lg_typecheck_setAssociatedTextureModes(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StateSet::setAssociatedTextureModes(unsigned int unit, const osg::StateAttribute * attribute, unsigned int value) function, expected prototype:\nvoid osg::StateSet::setAssociatedTextureModes(unsigned int unit, const osg::StateAttribute * attribute, unsigned int value)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int unit=(unsigned int)lua_tointeger(L,2);
		const osg::StateAttribute* attribute=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,3));
		unsigned int value=(unsigned int)lua_tointeger(L,4);

		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StateSet::setAssociatedTextureModes(unsigned int, const osg::StateAttribute *, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setAssociatedTextureModes(unit, attribute, value);

		return 0;
	}

	// void osg::StateSet::removeAssociatedTextureModes(unsigned int unit, const osg::StateAttribute * attribute)
	static int _bind_removeAssociatedTextureModes(lua_State *L) {
		if (!_lg_typecheck_removeAssociatedTextureModes(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StateSet::removeAssociatedTextureModes(unsigned int unit, const osg::StateAttribute * attribute) function, expected prototype:\nvoid osg::StateSet::removeAssociatedTextureModes(unsigned int unit, const osg::StateAttribute * attribute)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int unit=(unsigned int)lua_tointeger(L,2);
		const osg::StateAttribute* attribute=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,3));

		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StateSet::removeAssociatedTextureModes(unsigned int, const osg::StateAttribute *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->removeAssociatedTextureModes(unit, attribute);

		return 0;
	}

	// void osg::StateSet::addUniform(osg::Uniform * uniform, unsigned int value = osg::StateAttribute::ON)
	static int _bind_addUniform(lua_State *L) {
		if (!_lg_typecheck_addUniform(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StateSet::addUniform(osg::Uniform * uniform, unsigned int value = osg::StateAttribute::ON) function, expected prototype:\nvoid osg::StateSet::addUniform(osg::Uniform * uniform, unsigned int value = osg::StateAttribute::ON)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::Uniform* uniform=(Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,2));
		unsigned int value=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)osg::StateAttribute::ON;

		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StateSet::addUniform(osg::Uniform *, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addUniform(uniform, value);

		return 0;
	}

	// void osg::StateSet::removeUniform(const std::string & name)
	static int _bind_removeUniform_overload_1(lua_State *L) {
		if (!_lg_typecheck_removeUniform_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StateSet::removeUniform(const std::string & name) function, expected prototype:\nvoid osg::StateSet::removeUniform(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StateSet::removeUniform(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->removeUniform(name);

		return 0;
	}

	// void osg::StateSet::removeUniform(osg::Uniform * uniform)
	static int _bind_removeUniform_overload_2(lua_State *L) {
		if (!_lg_typecheck_removeUniform_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StateSet::removeUniform(osg::Uniform * uniform) function, expected prototype:\nvoid osg::StateSet::removeUniform(osg::Uniform * uniform)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Uniform* uniform=(Luna< osg::Referenced >::checkSubType< osg::Uniform >(L,2));

		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StateSet::removeUniform(osg::Uniform *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->removeUniform(uniform);

		return 0;
	}

	// Overload binder for osg::StateSet::removeUniform
	static int _bind_removeUniform(lua_State *L) {
		if (_lg_typecheck_removeUniform_overload_1(L)) return _bind_removeUniform_overload_1(L);
		if (_lg_typecheck_removeUniform_overload_2(L)) return _bind_removeUniform_overload_2(L);

		luaL_error(L, "error in function removeUniform, cannot match any of the overloads for function removeUniform:\n  removeUniform(const std::string &)\n  removeUniform(osg::Uniform *)\n");
		return 0;
	}

	// osg::Uniform * osg::StateSet::getUniform(const std::string & name)
	static int _bind_getUniform_overload_1(lua_State *L) {
		if (!_lg_typecheck_getUniform_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform * osg::StateSet::getUniform(const std::string & name) function, expected prototype:\nosg::Uniform * osg::StateSet::getUniform(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Uniform * osg::StateSet::getUniform(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Uniform * lret = self->getUniform(name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Uniform >::push(L,lret,false);

		return 1;
	}

	// const osg::Uniform * osg::StateSet::getUniform(const std::string & name) const
	static int _bind_getUniform_overload_2(lua_State *L) {
		if (!_lg_typecheck_getUniform_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Uniform * osg::StateSet::getUniform(const std::string & name) const function, expected prototype:\nconst osg::Uniform * osg::StateSet::getUniform(const std::string & name) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Uniform * osg::StateSet::getUniform(const std::string &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Uniform * lret = self->getUniform(name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Uniform >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::StateSet::getUniform
	static int _bind_getUniform(lua_State *L) {
		if (_lg_typecheck_getUniform_overload_1(L)) return _bind_getUniform_overload_1(L);
		if (_lg_typecheck_getUniform_overload_2(L)) return _bind_getUniform_overload_2(L);

		luaL_error(L, "error in function getUniform, cannot match any of the overloads for function getUniform:\n  getUniform(const std::string &)\n  getUniform(const std::string &)\n");
		return 0;
	}

	// osg::Uniform * osg::StateSet::getOrCreateUniform(const std::string & name, osg::Uniform::Type type, unsigned int numElements = 1)
	static int _bind_getOrCreateUniform(lua_State *L) {
		if (!_lg_typecheck_getOrCreateUniform(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform * osg::StateSet::getOrCreateUniform(const std::string & name, osg::Uniform::Type type, unsigned int numElements = 1) function, expected prototype:\nosg::Uniform * osg::StateSet::getOrCreateUniform(const std::string & name, osg::Uniform::Type type, unsigned int numElements = 1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		std::string name(lua_tostring(L,2),lua_objlen(L,2));
		osg::Uniform::Type type=(osg::Uniform::Type)lua_tointeger(L,3);
		unsigned int numElements=luatop>3 ? (unsigned int)lua_tointeger(L,4) : (unsigned int)1;

		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Uniform * osg::StateSet::getOrCreateUniform(const std::string &, osg::Uniform::Type, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Uniform * lret = self->getOrCreateUniform(name, type, numElements);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Uniform >::push(L,lret,false);

		return 1;
	}

	// const osg::StateSet::RefUniformPair * osg::StateSet::getUniformPair(const std::string & name) const
	static int _bind_getUniformPair(lua_State *L) {
		if (!_lg_typecheck_getUniformPair(L)) {
			luaL_error(L, "luna typecheck failed in const osg::StateSet::RefUniformPair * osg::StateSet::getUniformPair(const std::string & name) const function, expected prototype:\nconst osg::StateSet::RefUniformPair * osg::StateSet::getUniformPair(const std::string & name) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::StateSet::RefUniformPair * osg::StateSet::getUniformPair(const std::string &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::StateSet::RefUniformPair * lret = self->getUniformPair(name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateSet::RefUniformPair >::push(L,lret,false);

		return 1;
	}

	// void osg::StateSet::setUniformList(osg::StateSet::UniformList & al)
	static int _bind_setUniformList(lua_State *L) {
		if (!_lg_typecheck_setUniformList(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StateSet::setUniformList(osg::StateSet::UniformList & al) function, expected prototype:\nvoid osg::StateSet::setUniformList(osg::StateSet::UniformList & al)\nClass arguments details:\narg 1 ID = 47344864\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StateSet::UniformList* al_ptr=(Luna< std::map< std::string, osg::StateSet::RefUniformPair > >::checkSubType< osg::StateSet::UniformList >(L,2));
		if( !al_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg al in osg::StateSet::setUniformList function");
		}
		osg::StateSet::UniformList & al=*al_ptr;

		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StateSet::setUniformList(osg::StateSet::UniformList &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setUniformList(al);

		return 0;
	}

	// osg::StateSet::UniformList & osg::StateSet::getUniformList()
	static int _bind_getUniformList_overload_1(lua_State *L) {
		if (!_lg_typecheck_getUniformList_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateSet::UniformList & osg::StateSet::getUniformList() function, expected prototype:\nosg::StateSet::UniformList & osg::StateSet::getUniformList()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateSet::UniformList & osg::StateSet::getUniformList(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::StateSet::UniformList* lret = &self->getUniformList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateSet::UniformList >::push(L,lret,false);

		return 1;
	}

	// const osg::StateSet::UniformList & osg::StateSet::getUniformList() const
	static int _bind_getUniformList_overload_2(lua_State *L) {
		if (!_lg_typecheck_getUniformList_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::StateSet::UniformList & osg::StateSet::getUniformList() const function, expected prototype:\nconst osg::StateSet::UniformList & osg::StateSet::getUniformList() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::StateSet::UniformList & osg::StateSet::getUniformList() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::StateSet::UniformList* lret = &self->getUniformList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateSet::UniformList >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::StateSet::getUniformList
	static int _bind_getUniformList(lua_State *L) {
		if (_lg_typecheck_getUniformList_overload_1(L)) return _bind_getUniformList_overload_1(L);
		if (_lg_typecheck_getUniformList_overload_2(L)) return _bind_getUniformList_overload_2(L);

		luaL_error(L, "error in function getUniformList, cannot match any of the overloads for function getUniformList:\n  getUniformList()\n  getUniformList()\n");
		return 0;
	}

	// void osg::StateSet::setRenderingHint(int hint)
	static int _bind_setRenderingHint(lua_State *L) {
		if (!_lg_typecheck_setRenderingHint(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StateSet::setRenderingHint(int hint) function, expected prototype:\nvoid osg::StateSet::setRenderingHint(int hint)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int hint=(int)lua_tointeger(L,2);

		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StateSet::setRenderingHint(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setRenderingHint(hint);

		return 0;
	}

	// int osg::StateSet::getRenderingHint() const
	static int _bind_getRenderingHint(lua_State *L) {
		if (!_lg_typecheck_getRenderingHint(L)) {
			luaL_error(L, "luna typecheck failed in int osg::StateSet::getRenderingHint() const function, expected prototype:\nint osg::StateSet::getRenderingHint() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::StateSet::getRenderingHint() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getRenderingHint();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::StateSet::setRenderBinDetails(int binNum, const std::string & binName, osg::StateSet::RenderBinMode mode = osg::StateSet::USE_RENDERBIN_DETAILS)
	static int _bind_setRenderBinDetails(lua_State *L) {
		if (!_lg_typecheck_setRenderBinDetails(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StateSet::setRenderBinDetails(int binNum, const std::string & binName, osg::StateSet::RenderBinMode mode = osg::StateSet::USE_RENDERBIN_DETAILS) function, expected prototype:\nvoid osg::StateSet::setRenderBinDetails(int binNum, const std::string & binName, osg::StateSet::RenderBinMode mode = osg::StateSet::USE_RENDERBIN_DETAILS)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int binNum=(int)lua_tointeger(L,2);
		std::string binName(lua_tostring(L,3),lua_objlen(L,3));
		osg::StateSet::RenderBinMode mode=luatop>3 ? (osg::StateSet::RenderBinMode)lua_tointeger(L,4) : (osg::StateSet::RenderBinMode)osg::StateSet::USE_RENDERBIN_DETAILS;

		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StateSet::setRenderBinDetails(int, const std::string &, osg::StateSet::RenderBinMode). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setRenderBinDetails(binNum, binName, mode);

		return 0;
	}

	// void osg::StateSet::setRenderBinToInherit()
	static int _bind_setRenderBinToInherit(lua_State *L) {
		if (!_lg_typecheck_setRenderBinToInherit(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StateSet::setRenderBinToInherit() function, expected prototype:\nvoid osg::StateSet::setRenderBinToInherit()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StateSet::setRenderBinToInherit(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setRenderBinToInherit();

		return 0;
	}

	// bool osg::StateSet::useRenderBinDetails() const
	static int _bind_useRenderBinDetails(lua_State *L) {
		if (!_lg_typecheck_useRenderBinDetails(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::StateSet::useRenderBinDetails() const function, expected prototype:\nbool osg::StateSet::useRenderBinDetails() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::StateSet::useRenderBinDetails() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->useRenderBinDetails();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::StateSet::setRenderBinMode(osg::StateSet::RenderBinMode mode)
	static int _bind_setRenderBinMode(lua_State *L) {
		if (!_lg_typecheck_setRenderBinMode(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StateSet::setRenderBinMode(osg::StateSet::RenderBinMode mode) function, expected prototype:\nvoid osg::StateSet::setRenderBinMode(osg::StateSet::RenderBinMode mode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StateSet::RenderBinMode mode=(osg::StateSet::RenderBinMode)lua_tointeger(L,2);

		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StateSet::setRenderBinMode(osg::StateSet::RenderBinMode). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setRenderBinMode(mode);

		return 0;
	}

	// osg::StateSet::RenderBinMode osg::StateSet::getRenderBinMode() const
	static int _bind_getRenderBinMode(lua_State *L) {
		if (!_lg_typecheck_getRenderBinMode(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateSet::RenderBinMode osg::StateSet::getRenderBinMode() const function, expected prototype:\nosg::StateSet::RenderBinMode osg::StateSet::getRenderBinMode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateSet::RenderBinMode osg::StateSet::getRenderBinMode() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::StateSet::RenderBinMode lret = self->getRenderBinMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::StateSet::setBinNumber(int num)
	static int _bind_setBinNumber(lua_State *L) {
		if (!_lg_typecheck_setBinNumber(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StateSet::setBinNumber(int num) function, expected prototype:\nvoid osg::StateSet::setBinNumber(int num)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int num=(int)lua_tointeger(L,2);

		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StateSet::setBinNumber(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setBinNumber(num);

		return 0;
	}

	// int osg::StateSet::getBinNumber() const
	static int _bind_getBinNumber(lua_State *L) {
		if (!_lg_typecheck_getBinNumber(L)) {
			luaL_error(L, "luna typecheck failed in int osg::StateSet::getBinNumber() const function, expected prototype:\nint osg::StateSet::getBinNumber() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::StateSet::getBinNumber() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getBinNumber();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::StateSet::setBinName(const std::string & name)
	static int _bind_setBinName(lua_State *L) {
		if (!_lg_typecheck_setBinName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StateSet::setBinName(const std::string & name) function, expected prototype:\nvoid osg::StateSet::setBinName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StateSet::setBinName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setBinName(name);

		return 0;
	}

	// const std::string & osg::StateSet::getBinName() const
	static int _bind_getBinName(lua_State *L) {
		if (!_lg_typecheck_getBinName(L)) {
			luaL_error(L, "luna typecheck failed in const std::string & osg::StateSet::getBinName() const function, expected prototype:\nconst std::string & osg::StateSet::getBinName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const std::string & osg::StateSet::getBinName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const std::string & lret = self->getBinName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void osg::StateSet::setNestRenderBins(bool val)
	static int _bind_setNestRenderBins(lua_State *L) {
		if (!_lg_typecheck_setNestRenderBins(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StateSet::setNestRenderBins(bool val) function, expected prototype:\nvoid osg::StateSet::setNestRenderBins(bool val)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool val=(bool)(lua_toboolean(L,2)==1);

		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StateSet::setNestRenderBins(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setNestRenderBins(val);

		return 0;
	}

	// bool osg::StateSet::getNestRenderBins() const
	static int _bind_getNestRenderBins(lua_State *L) {
		if (!_lg_typecheck_getNestRenderBins(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::StateSet::getNestRenderBins() const function, expected prototype:\nbool osg::StateSet::getNestRenderBins() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::StateSet::getNestRenderBins() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getNestRenderBins();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::StateSet::setUpdateCallback(osg::StateSet::Callback * ac)
	static int _bind_setUpdateCallback(lua_State *L) {
		if (!_lg_typecheck_setUpdateCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StateSet::setUpdateCallback(osg::StateSet::Callback * ac) function, expected prototype:\nvoid osg::StateSet::setUpdateCallback(osg::StateSet::Callback * ac)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StateSet::Callback* ac=(Luna< osg::Referenced >::checkSubType< osg::StateSet::Callback >(L,2));

		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StateSet::setUpdateCallback(osg::StateSet::Callback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setUpdateCallback(ac);

		return 0;
	}

	// osg::StateSet::Callback * osg::StateSet::getUpdateCallback()
	static int _bind_getUpdateCallback_overload_1(lua_State *L) {
		if (!_lg_typecheck_getUpdateCallback_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateSet::Callback * osg::StateSet::getUpdateCallback() function, expected prototype:\nosg::StateSet::Callback * osg::StateSet::getUpdateCallback()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateSet::Callback * osg::StateSet::getUpdateCallback(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::StateSet::Callback * lret = self->getUpdateCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateSet::Callback >::push(L,lret,false);

		return 1;
	}

	// const osg::StateSet::Callback * osg::StateSet::getUpdateCallback() const
	static int _bind_getUpdateCallback_overload_2(lua_State *L) {
		if (!_lg_typecheck_getUpdateCallback_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::StateSet::Callback * osg::StateSet::getUpdateCallback() const function, expected prototype:\nconst osg::StateSet::Callback * osg::StateSet::getUpdateCallback() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::StateSet::Callback * osg::StateSet::getUpdateCallback() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::StateSet::Callback * lret = self->getUpdateCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateSet::Callback >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::StateSet::getUpdateCallback
	static int _bind_getUpdateCallback(lua_State *L) {
		if (_lg_typecheck_getUpdateCallback_overload_1(L)) return _bind_getUpdateCallback_overload_1(L);
		if (_lg_typecheck_getUpdateCallback_overload_2(L)) return _bind_getUpdateCallback_overload_2(L);

		luaL_error(L, "error in function getUpdateCallback, cannot match any of the overloads for function getUpdateCallback:\n  getUpdateCallback()\n  getUpdateCallback()\n");
		return 0;
	}

	// bool osg::StateSet::requiresUpdateTraversal() const
	static int _bind_requiresUpdateTraversal(lua_State *L) {
		if (!_lg_typecheck_requiresUpdateTraversal(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::StateSet::requiresUpdateTraversal() const function, expected prototype:\nbool osg::StateSet::requiresUpdateTraversal() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::StateSet::requiresUpdateTraversal() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->requiresUpdateTraversal();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// unsigned int osg::StateSet::getNumChildrenRequiringUpdateTraversal() const
	static int _bind_getNumChildrenRequiringUpdateTraversal(lua_State *L) {
		if (!_lg_typecheck_getNumChildrenRequiringUpdateTraversal(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::StateSet::getNumChildrenRequiringUpdateTraversal() const function, expected prototype:\nunsigned int osg::StateSet::getNumChildrenRequiringUpdateTraversal() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::StateSet::getNumChildrenRequiringUpdateTraversal() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getNumChildrenRequiringUpdateTraversal();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::StateSet::runUpdateCallbacks(osg::NodeVisitor * nv)
	static int _bind_runUpdateCallbacks(lua_State *L) {
		if (!_lg_typecheck_runUpdateCallbacks(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StateSet::runUpdateCallbacks(osg::NodeVisitor * nv) function, expected prototype:\nvoid osg::StateSet::runUpdateCallbacks(osg::NodeVisitor * nv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));

		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StateSet::runUpdateCallbacks(osg::NodeVisitor *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->runUpdateCallbacks(nv);

		return 0;
	}

	// void osg::StateSet::setEventCallback(osg::StateSet::Callback * ac)
	static int _bind_setEventCallback(lua_State *L) {
		if (!_lg_typecheck_setEventCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StateSet::setEventCallback(osg::StateSet::Callback * ac) function, expected prototype:\nvoid osg::StateSet::setEventCallback(osg::StateSet::Callback * ac)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StateSet::Callback* ac=(Luna< osg::Referenced >::checkSubType< osg::StateSet::Callback >(L,2));

		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StateSet::setEventCallback(osg::StateSet::Callback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setEventCallback(ac);

		return 0;
	}

	// osg::StateSet::Callback * osg::StateSet::getEventCallback()
	static int _bind_getEventCallback_overload_1(lua_State *L) {
		if (!_lg_typecheck_getEventCallback_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateSet::Callback * osg::StateSet::getEventCallback() function, expected prototype:\nosg::StateSet::Callback * osg::StateSet::getEventCallback()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateSet::Callback * osg::StateSet::getEventCallback(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::StateSet::Callback * lret = self->getEventCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateSet::Callback >::push(L,lret,false);

		return 1;
	}

	// const osg::StateSet::Callback * osg::StateSet::getEventCallback() const
	static int _bind_getEventCallback_overload_2(lua_State *L) {
		if (!_lg_typecheck_getEventCallback_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::StateSet::Callback * osg::StateSet::getEventCallback() const function, expected prototype:\nconst osg::StateSet::Callback * osg::StateSet::getEventCallback() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::StateSet::Callback * osg::StateSet::getEventCallback() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::StateSet::Callback * lret = self->getEventCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateSet::Callback >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::StateSet::getEventCallback
	static int _bind_getEventCallback(lua_State *L) {
		if (_lg_typecheck_getEventCallback_overload_1(L)) return _bind_getEventCallback_overload_1(L);
		if (_lg_typecheck_getEventCallback_overload_2(L)) return _bind_getEventCallback_overload_2(L);

		luaL_error(L, "error in function getEventCallback, cannot match any of the overloads for function getEventCallback:\n  getEventCallback()\n  getEventCallback()\n");
		return 0;
	}

	// bool osg::StateSet::requiresEventTraversal() const
	static int _bind_requiresEventTraversal(lua_State *L) {
		if (!_lg_typecheck_requiresEventTraversal(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::StateSet::requiresEventTraversal() const function, expected prototype:\nbool osg::StateSet::requiresEventTraversal() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::StateSet::requiresEventTraversal() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->requiresEventTraversal();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// unsigned int osg::StateSet::getNumChildrenRequiringEventTraversal() const
	static int _bind_getNumChildrenRequiringEventTraversal(lua_State *L) {
		if (!_lg_typecheck_getNumChildrenRequiringEventTraversal(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::StateSet::getNumChildrenRequiringEventTraversal() const function, expected prototype:\nunsigned int osg::StateSet::getNumChildrenRequiringEventTraversal() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::StateSet::getNumChildrenRequiringEventTraversal() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getNumChildrenRequiringEventTraversal();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::StateSet::runEventCallbacks(osg::NodeVisitor * nv)
	static int _bind_runEventCallbacks(lua_State *L) {
		if (!_lg_typecheck_runEventCallbacks(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StateSet::runEventCallbacks(osg::NodeVisitor * nv) function, expected prototype:\nvoid osg::StateSet::runEventCallbacks(osg::NodeVisitor * nv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));

		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StateSet::runEventCallbacks(osg::NodeVisitor *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->runEventCallbacks(nv);

		return 0;
	}

	// bool osg::StateSet::checkValidityOfAssociatedModes(osg::State & state) const
	static int _bind_checkValidityOfAssociatedModes(lua_State *L) {
		if (!_lg_typecheck_checkValidityOfAssociatedModes(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::StateSet::checkValidityOfAssociatedModes(osg::State & state) const function, expected prototype:\nbool osg::StateSet::checkValidityOfAssociatedModes(osg::State & state) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* state_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osg::StateSet::checkValidityOfAssociatedModes function");
		}
		osg::State & state=*state_ptr;

		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::StateSet::checkValidityOfAssociatedModes(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->checkValidityOfAssociatedModes(state);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::StateSet::setThreadSafeRefUnref(bool threadSafe)
	static int _bind_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StateSet::setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::StateSet::setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StateSet::setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::StateSet::compileGLObjects(osg::State & state) const
	static int _bind_compileGLObjects(lua_State *L) {
		if (!_lg_typecheck_compileGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StateSet::compileGLObjects(osg::State & state) const function, expected prototype:\nvoid osg::StateSet::compileGLObjects(osg::State & state) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* state_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osg::StateSet::compileGLObjects function");
		}
		osg::State & state=*state_ptr;

		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StateSet::compileGLObjects(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->compileGLObjects(state);

		return 0;
	}

	// void osg::StateSet::releaseGLObjects(osg::State * state = 0) const
	static int _bind_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StateSet::releaseGLObjects(osg::State * state = 0) const function, expected prototype:\nvoid osg::StateSet::releaseGLObjects(osg::State * state = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* state=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StateSet::releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->releaseGLObjects(state);

		return 0;
	}

	// void osg::StateSet::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StateSet::base_setName(const std::string & name) function, expected prototype:\nvoid osg::StateSet::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StateSet::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->StateSet::setName(name);

		return 0;
	}

	// void osg::StateSet::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StateSet::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::StateSet::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StateSet::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->StateSet::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::StateSet::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::StateSet::base_getUserData() function, expected prototype:\nosg::Referenced * osg::StateSet::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::StateSet::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->StateSet::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::StateSet::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::StateSet::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::StateSet::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::StateSet::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->StateSet::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::StateSet::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// osg::Object * osg::StateSet::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::StateSet::base_cloneType() const function, expected prototype:\nosg::Object * osg::StateSet::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::StateSet::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->StateSet::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::StateSet::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::StateSet::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::StateSet::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::StateSet::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::StateSet::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->StateSet::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::StateSet::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::StateSet::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::StateSet::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::StateSet::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->StateSet::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::StateSet::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::StateSet::base_libraryName() const function, expected prototype:\nconst char * osg::StateSet::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::StateSet::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->StateSet::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::StateSet::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::StateSet::base_className() const function, expected prototype:\nconst char * osg::StateSet::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::StateSet::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->StateSet::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::StateSet::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StateSet::base_computeDataVariance() function, expected prototype:\nvoid osg::StateSet::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StateSet::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->StateSet::computeDataVariance();

		return 0;
	}

	// void osg::StateSet::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StateSet::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::StateSet::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StateSet::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->StateSet::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::StateSet::base_releaseGLObjects(osg::State * state = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StateSet::base_releaseGLObjects(osg::State * state = 0) const function, expected prototype:\nvoid osg::StateSet::base_releaseGLObjects(osg::State * state = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* state=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StateSet::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->StateSet::releaseGLObjects(state);

		return 0;
	}


	// Operator binds:
	// bool osg::StateSet::operator<(const osg::StateSet & rhs) const
	static int _bind___lt(lua_State *L) {
		if (!_lg_typecheck___lt(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::StateSet::operator<(const osg::StateSet & rhs) const function, expected prototype:\nbool osg::StateSet::operator<(const osg::StateSet & rhs) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::StateSet* rhs_ptr=(Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::StateSet::operator< function");
		}
		const osg::StateSet & rhs=*rhs_ptr;

		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::StateSet::operator<(const osg::StateSet &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator<(rhs);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::StateSet::operator==(const osg::StateSet & rhs) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::StateSet::operator==(const osg::StateSet & rhs) const function, expected prototype:\nbool osg::StateSet::operator==(const osg::StateSet & rhs) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::StateSet* rhs_ptr=(Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::StateSet::operator== function");
		}
		const osg::StateSet & rhs=*rhs_ptr;

		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::StateSet::operator==(const osg::StateSet &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator==(rhs);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::StateSet::operator!=(const osg::StateSet & rhs) const
	static int _bind_op_neq(lua_State *L) {
		if (!_lg_typecheck_op_neq(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::StateSet::operator!=(const osg::StateSet & rhs) const function, expected prototype:\nbool osg::StateSet::operator!=(const osg::StateSet & rhs) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::StateSet* rhs_ptr=(Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::StateSet::operator!= function");
		}
		const osg::StateSet & rhs=*rhs_ptr;

		osg::StateSet* self=Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::StateSet::operator!=(const osg::StateSet &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator!=(rhs);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

osg::StateSet* LunaTraits< osg::StateSet >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_StateSet::_bind_ctor(L);
}

void LunaTraits< osg::StateSet >::_bind_dtor(osg::StateSet* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::StateSet >::className[] = "StateSet";
const char LunaTraits< osg::StateSet >::fullName[] = "osg::StateSet";
const char LunaTraits< osg::StateSet >::moduleName[] = "osg";
const char* LunaTraits< osg::StateSet >::parents[] = {"osg.Object", 0};
const int LunaTraits< osg::StateSet >::hash = 81991294;
const int LunaTraits< osg::StateSet >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::StateSet >::methods[] = {
	{"cloneType", &luna_wrapper_osg_StateSet::_bind_cloneType},
	{"clone", &luna_wrapper_osg_StateSet::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_StateSet::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_StateSet::_bind_libraryName},
	{"className", &luna_wrapper_osg_StateSet::_bind_className},
	{"compare", &luna_wrapper_osg_StateSet::_bind_compare},
	{"getParents", &luna_wrapper_osg_StateSet::_bind_getParents},
	{"getParent", &luna_wrapper_osg_StateSet::_bind_getParent},
	{"getNumParents", &luna_wrapper_osg_StateSet::_bind_getNumParents},
	{"computeDataVariance", &luna_wrapper_osg_StateSet::_bind_computeDataVariance},
	{"setGlobalDefaults", &luna_wrapper_osg_StateSet::_bind_setGlobalDefaults},
	{"clear", &luna_wrapper_osg_StateSet::_bind_clear},
	{"merge", &luna_wrapper_osg_StateSet::_bind_merge},
	{"setMode", &luna_wrapper_osg_StateSet::_bind_setMode},
	{"removeMode", &luna_wrapper_osg_StateSet::_bind_removeMode},
	{"getMode", &luna_wrapper_osg_StateSet::_bind_getMode},
	{"setModeList", &luna_wrapper_osg_StateSet::_bind_setModeList},
	{"getModeList", &luna_wrapper_osg_StateSet::_bind_getModeList},
	{"setAttribute", &luna_wrapper_osg_StateSet::_bind_setAttribute},
	{"setAttributeAndModes", &luna_wrapper_osg_StateSet::_bind_setAttributeAndModes},
	{"removeAttribute", &luna_wrapper_osg_StateSet::_bind_removeAttribute},
	{"getAttribute", &luna_wrapper_osg_StateSet::_bind_getAttribute},
	{"getAttributePair", &luna_wrapper_osg_StateSet::_bind_getAttributePair},
	{"setAttributeList", &luna_wrapper_osg_StateSet::_bind_setAttributeList},
	{"getAttributeList", &luna_wrapper_osg_StateSet::_bind_getAttributeList},
	{"setTextureMode", &luna_wrapper_osg_StateSet::_bind_setTextureMode},
	{"removeTextureMode", &luna_wrapper_osg_StateSet::_bind_removeTextureMode},
	{"getTextureMode", &luna_wrapper_osg_StateSet::_bind_getTextureMode},
	{"setTextureModeList", &luna_wrapper_osg_StateSet::_bind_setTextureModeList},
	{"getTextureModeList", &luna_wrapper_osg_StateSet::_bind_getTextureModeList},
	{"getNumTextureModeLists", &luna_wrapper_osg_StateSet::_bind_getNumTextureModeLists},
	{"setTextureAttribute", &luna_wrapper_osg_StateSet::_bind_setTextureAttribute},
	{"setTextureAttributeAndModes", &luna_wrapper_osg_StateSet::_bind_setTextureAttributeAndModes},
	{"removeTextureAttribute", &luna_wrapper_osg_StateSet::_bind_removeTextureAttribute},
	{"getTextureAttribute", &luna_wrapper_osg_StateSet::_bind_getTextureAttribute},
	{"getTextureAttributePair", &luna_wrapper_osg_StateSet::_bind_getTextureAttributePair},
	{"setTextureAttributeList", &luna_wrapper_osg_StateSet::_bind_setTextureAttributeList},
	{"getTextureAttributeList", &luna_wrapper_osg_StateSet::_bind_getTextureAttributeList},
	{"getNumTextureAttributeLists", &luna_wrapper_osg_StateSet::_bind_getNumTextureAttributeLists},
	{"setAssociatedModes", &luna_wrapper_osg_StateSet::_bind_setAssociatedModes},
	{"removeAssociatedModes", &luna_wrapper_osg_StateSet::_bind_removeAssociatedModes},
	{"setAssociatedTextureModes", &luna_wrapper_osg_StateSet::_bind_setAssociatedTextureModes},
	{"removeAssociatedTextureModes", &luna_wrapper_osg_StateSet::_bind_removeAssociatedTextureModes},
	{"addUniform", &luna_wrapper_osg_StateSet::_bind_addUniform},
	{"removeUniform", &luna_wrapper_osg_StateSet::_bind_removeUniform},
	{"getUniform", &luna_wrapper_osg_StateSet::_bind_getUniform},
	{"getOrCreateUniform", &luna_wrapper_osg_StateSet::_bind_getOrCreateUniform},
	{"getUniformPair", &luna_wrapper_osg_StateSet::_bind_getUniformPair},
	{"setUniformList", &luna_wrapper_osg_StateSet::_bind_setUniformList},
	{"getUniformList", &luna_wrapper_osg_StateSet::_bind_getUniformList},
	{"setRenderingHint", &luna_wrapper_osg_StateSet::_bind_setRenderingHint},
	{"getRenderingHint", &luna_wrapper_osg_StateSet::_bind_getRenderingHint},
	{"setRenderBinDetails", &luna_wrapper_osg_StateSet::_bind_setRenderBinDetails},
	{"setRenderBinToInherit", &luna_wrapper_osg_StateSet::_bind_setRenderBinToInherit},
	{"useRenderBinDetails", &luna_wrapper_osg_StateSet::_bind_useRenderBinDetails},
	{"setRenderBinMode", &luna_wrapper_osg_StateSet::_bind_setRenderBinMode},
	{"getRenderBinMode", &luna_wrapper_osg_StateSet::_bind_getRenderBinMode},
	{"setBinNumber", &luna_wrapper_osg_StateSet::_bind_setBinNumber},
	{"getBinNumber", &luna_wrapper_osg_StateSet::_bind_getBinNumber},
	{"setBinName", &luna_wrapper_osg_StateSet::_bind_setBinName},
	{"getBinName", &luna_wrapper_osg_StateSet::_bind_getBinName},
	{"setNestRenderBins", &luna_wrapper_osg_StateSet::_bind_setNestRenderBins},
	{"getNestRenderBins", &luna_wrapper_osg_StateSet::_bind_getNestRenderBins},
	{"setUpdateCallback", &luna_wrapper_osg_StateSet::_bind_setUpdateCallback},
	{"getUpdateCallback", &luna_wrapper_osg_StateSet::_bind_getUpdateCallback},
	{"requiresUpdateTraversal", &luna_wrapper_osg_StateSet::_bind_requiresUpdateTraversal},
	{"getNumChildrenRequiringUpdateTraversal", &luna_wrapper_osg_StateSet::_bind_getNumChildrenRequiringUpdateTraversal},
	{"runUpdateCallbacks", &luna_wrapper_osg_StateSet::_bind_runUpdateCallbacks},
	{"setEventCallback", &luna_wrapper_osg_StateSet::_bind_setEventCallback},
	{"getEventCallback", &luna_wrapper_osg_StateSet::_bind_getEventCallback},
	{"requiresEventTraversal", &luna_wrapper_osg_StateSet::_bind_requiresEventTraversal},
	{"getNumChildrenRequiringEventTraversal", &luna_wrapper_osg_StateSet::_bind_getNumChildrenRequiringEventTraversal},
	{"runEventCallbacks", &luna_wrapper_osg_StateSet::_bind_runEventCallbacks},
	{"checkValidityOfAssociatedModes", &luna_wrapper_osg_StateSet::_bind_checkValidityOfAssociatedModes},
	{"setThreadSafeRefUnref", &luna_wrapper_osg_StateSet::_bind_setThreadSafeRefUnref},
	{"compileGLObjects", &luna_wrapper_osg_StateSet::_bind_compileGLObjects},
	{"releaseGLObjects", &luna_wrapper_osg_StateSet::_bind_releaseGLObjects},
	{"base_setName", &luna_wrapper_osg_StateSet::_bind_base_setName},
	{"base_setUserData", &luna_wrapper_osg_StateSet::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_StateSet::_bind_base_getUserData},
	{"base_cloneType", &luna_wrapper_osg_StateSet::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_StateSet::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_StateSet::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_StateSet::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_StateSet::_bind_base_className},
	{"base_computeDataVariance", &luna_wrapper_osg_StateSet::_bind_base_computeDataVariance},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_StateSet::_bind_base_setThreadSafeRefUnref},
	{"base_releaseGLObjects", &luna_wrapper_osg_StateSet::_bind_base_releaseGLObjects},
	{"__lt", &luna_wrapper_osg_StateSet::_bind___lt},
	{"__eq", &luna_wrapper_osg_StateSet::_bind___eq},
	{"op_neq", &luna_wrapper_osg_StateSet::_bind_op_neq},
	{"fromVoid", &luna_wrapper_osg_StateSet::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_StateSet::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_StateSet::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::StateSet >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_StateSet::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::StateSet >::enumValues[] = {
	{"DEFAULT_BIN", osg::StateSet::DEFAULT_BIN},
	{"OPAQUE_BIN", osg::StateSet::OPAQUE_BIN},
	{"TRANSPARENT_BIN", osg::StateSet::TRANSPARENT_BIN},
	{"INHERIT_RENDERBIN_DETAILS", osg::StateSet::INHERIT_RENDERBIN_DETAILS},
	{"USE_RENDERBIN_DETAILS", osg::StateSet::USE_RENDERBIN_DETAILS},
	{"OVERRIDE_RENDERBIN_DETAILS", osg::StateSet::OVERRIDE_RENDERBIN_DETAILS},
	{0,0}
};



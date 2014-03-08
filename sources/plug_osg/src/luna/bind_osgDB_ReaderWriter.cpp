#include <plug_common.h>

#include <luna/wrappers/wrapper_osgDB_ReaderWriter.h>

class luna_wrapper_osgDB_ReaderWriter {
public:
	typedef Luna< osgDB::ReaderWriter > luna_t;

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

		osgDB::ReaderWriter* self= (osgDB::ReaderWriter*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgDB::ReaderWriter >::push(L,self,false);
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
		//osgDB::ReaderWriter* ptr= dynamic_cast< osgDB::ReaderWriter* >(Luna< osg::Referenced >::check(L,1));
		osgDB::ReaderWriter* ptr= luna_caster< osg::Referenced, osgDB::ReaderWriter >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgDB::ReaderWriter >::push(L,ptr,false);
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
		if( (!(Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriter >(L,1))) ) return false;
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
		if( (!(Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriter >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_supportedProtocols(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_supportedExtensions(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_supportedOptions(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_acceptsExtension(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_acceptsProtocol(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_supportedFeatures(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_fileExists(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_openArchive_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,50169651)) ) return false;
		if( luatop>4 && (lua_isnil(L,5)==0 && !(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,5)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_openArchive_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,77972206) ) return false;
		if( (!(Luna< std::istream >::check(L,2))) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readObject_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readObject_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,77972206) ) return false;
		if( (!(Luna< std::istream >::check(L,2))) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readImage_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readImage_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,77972206) ) return false;
		if( (!(Luna< std::istream >::check(L,2))) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readHeightField_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readHeightField_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,77972206) ) return false;
		if( (!(Luna< std::istream >::check(L,2))) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readNode_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readNode_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,77972206) ) return false;
		if( (!(Luna< std::istream >::check(L,2))) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readShader_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readShader_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,77972206) ) return false;
		if( (!(Luna< std::istream >::check(L,2))) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeObject_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2))) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,4)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeObject_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,2993706) ) return false;
		if( (!(Luna< std::ostream >::check(L,3))) ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,4)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeImage_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Image >(L,2))) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,4)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeImage_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Image >(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,2993706) ) return false;
		if( (!(Luna< std::ostream >::check(L,3))) ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,4)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeHeightField_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::HeightField >(L,2))) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,4)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeHeightField_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::HeightField >(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,2993706) ) return false;
		if( (!(Luna< std::ostream >::check(L,3))) ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,4)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeNode_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2))) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,4)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeNode_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,2993706) ) return false;
		if( (!(Luna< std::ostream >::check(L,3))) ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,4)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeShader_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Shader >(L,2))) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,4)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeShader_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Shader >(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,2993706) ) return false;
		if( (!(Luna< std::ostream >::check(L,3))) ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,4)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_supportsProtocol(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_supportsExtension(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_supportsOption(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_featureAsString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
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

	inline static bool _lg_typecheck_base_supportedProtocols(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_supportedExtensions(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_supportedOptions(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_acceptsExtension(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_acceptsProtocol(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_supportedFeatures(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_fileExists(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_openArchive_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,50169651)) ) return false;
		if( luatop>4 && (lua_isnil(L,5)==0 && !(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,5)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_openArchive_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,77972206) ) return false;
		if( (!(Luna< std::istream >::check(L,2))) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_readObject_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_readObject_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,77972206) ) return false;
		if( (!(Luna< std::istream >::check(L,2))) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_readImage_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_readImage_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,77972206) ) return false;
		if( (!(Luna< std::istream >::check(L,2))) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_readHeightField_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_readHeightField_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,77972206) ) return false;
		if( (!(Luna< std::istream >::check(L,2))) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_readNode_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_readNode_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,77972206) ) return false;
		if( (!(Luna< std::istream >::check(L,2))) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_readShader_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_readShader_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,77972206) ) return false;
		if( (!(Luna< std::istream >::check(L,2))) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_writeObject_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2))) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,4)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_writeObject_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,2993706) ) return false;
		if( (!(Luna< std::ostream >::check(L,3))) ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,4)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_writeImage_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Image >(L,2))) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,4)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_writeImage_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Image >(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,2993706) ) return false;
		if( (!(Luna< std::ostream >::check(L,3))) ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,4)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_writeHeightField_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::HeightField >(L,2))) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,4)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_writeHeightField_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::HeightField >(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,2993706) ) return false;
		if( (!(Luna< std::ostream >::check(L,3))) ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,4)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_writeNode_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2))) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,4)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_writeNode_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,2993706) ) return false;
		if( (!(Luna< std::ostream >::check(L,3))) ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,4)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_writeShader_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Shader >(L,2))) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,4)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_writeShader_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Shader >(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,2993706) ) return false;
		if( (!(Luna< std::ostream >::check(L,3))) ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,4)) ) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgDB::ReaderWriter::ReaderWriter()
	static osgDB::ReaderWriter* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::ReaderWriter() function, expected prototype:\nosgDB::ReaderWriter::ReaderWriter()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osgDB::ReaderWriter();
	}

	// osgDB::ReaderWriter::ReaderWriter(const osgDB::ReaderWriter & rw, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgDB::ReaderWriter* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::ReaderWriter(const osgDB::ReaderWriter & rw, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgDB::ReaderWriter::ReaderWriter(const osgDB::ReaderWriter & rw, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osgDB::ReaderWriter* rw_ptr=(Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriter >(L,1));
		if( !rw_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rw in osgDB::ReaderWriter::ReaderWriter function");
		}
		const osgDB::ReaderWriter & rw=*rw_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgDB::ReaderWriter::ReaderWriter function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osgDB::ReaderWriter(rw, copyop);
	}

	// osgDB::ReaderWriter::ReaderWriter(lua_Table * data)
	static osgDB::ReaderWriter* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::ReaderWriter(lua_Table * data) function, expected prototype:\nosgDB::ReaderWriter::ReaderWriter(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgDB_ReaderWriter(L,NULL);
	}

	// osgDB::ReaderWriter::ReaderWriter(lua_Table * data, const osgDB::ReaderWriter & rw, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgDB::ReaderWriter* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::ReaderWriter(lua_Table * data, const osgDB::ReaderWriter & rw, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgDB::ReaderWriter::ReaderWriter(lua_Table * data, const osgDB::ReaderWriter & rw, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osgDB::ReaderWriter* rw_ptr=(Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriter >(L,2));
		if( !rw_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rw in osgDB::ReaderWriter::ReaderWriter function");
		}
		const osgDB::ReaderWriter & rw=*rw_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgDB::ReaderWriter::ReaderWriter function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osgDB_ReaderWriter(L,NULL, rw, copyop);
	}

	// Overload binder for osgDB::ReaderWriter::ReaderWriter
	static osgDB::ReaderWriter* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function ReaderWriter, cannot match any of the overloads for function ReaderWriter:\n  ReaderWriter()\n  ReaderWriter(const osgDB::ReaderWriter &, const osg::CopyOp &)\n  ReaderWriter(lua_Table *)\n  ReaderWriter(lua_Table *, const osgDB::ReaderWriter &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osgDB::ReaderWriter::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgDB::ReaderWriter::cloneType() const function, expected prototype:\nosg::Object * osgDB::ReaderWriter::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ReaderWriter* self=Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgDB::ReaderWriter::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgDB::ReaderWriter::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgDB::ReaderWriter::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgDB::ReaderWriter::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgDB::ReaderWriter::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgDB::ReaderWriter* self=Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgDB::ReaderWriter::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgDB::ReaderWriter::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::ReaderWriter::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgDB::ReaderWriter::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgDB::ReaderWriter* self=Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::ReaderWriter::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgDB::ReaderWriter::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgDB::ReaderWriter::libraryName() const function, expected prototype:\nconst char * osgDB::ReaderWriter::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ReaderWriter* self=Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgDB::ReaderWriter::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgDB::ReaderWriter::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgDB::ReaderWriter::className() const function, expected prototype:\nconst char * osgDB::ReaderWriter::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ReaderWriter* self=Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgDB::ReaderWriter::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const osgDB::ReaderWriter::FormatDescriptionMap & osgDB::ReaderWriter::supportedProtocols() const
	static int _bind_supportedProtocols(lua_State *L) {
		if (!_lg_typecheck_supportedProtocols(L)) {
			luaL_error(L, "luna typecheck failed in const osgDB::ReaderWriter::FormatDescriptionMap & osgDB::ReaderWriter::supportedProtocols() const function, expected prototype:\nconst osgDB::ReaderWriter::FormatDescriptionMap & osgDB::ReaderWriter::supportedProtocols() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ReaderWriter* self=Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgDB::ReaderWriter::FormatDescriptionMap & osgDB::ReaderWriter::supportedProtocols() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::ReaderWriter::FormatDescriptionMap* lret = &self->supportedProtocols();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::FormatDescriptionMap >::push(L,lret,false);

		return 1;
	}

	// const osgDB::ReaderWriter::FormatDescriptionMap & osgDB::ReaderWriter::supportedExtensions() const
	static int _bind_supportedExtensions(lua_State *L) {
		if (!_lg_typecheck_supportedExtensions(L)) {
			luaL_error(L, "luna typecheck failed in const osgDB::ReaderWriter::FormatDescriptionMap & osgDB::ReaderWriter::supportedExtensions() const function, expected prototype:\nconst osgDB::ReaderWriter::FormatDescriptionMap & osgDB::ReaderWriter::supportedExtensions() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ReaderWriter* self=Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgDB::ReaderWriter::FormatDescriptionMap & osgDB::ReaderWriter::supportedExtensions() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::ReaderWriter::FormatDescriptionMap* lret = &self->supportedExtensions();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::FormatDescriptionMap >::push(L,lret,false);

		return 1;
	}

	// const osgDB::ReaderWriter::FormatDescriptionMap & osgDB::ReaderWriter::supportedOptions() const
	static int _bind_supportedOptions(lua_State *L) {
		if (!_lg_typecheck_supportedOptions(L)) {
			luaL_error(L, "luna typecheck failed in const osgDB::ReaderWriter::FormatDescriptionMap & osgDB::ReaderWriter::supportedOptions() const function, expected prototype:\nconst osgDB::ReaderWriter::FormatDescriptionMap & osgDB::ReaderWriter::supportedOptions() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ReaderWriter* self=Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgDB::ReaderWriter::FormatDescriptionMap & osgDB::ReaderWriter::supportedOptions() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::ReaderWriter::FormatDescriptionMap* lret = &self->supportedOptions();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::FormatDescriptionMap >::push(L,lret,false);

		return 1;
	}

	// bool osgDB::ReaderWriter::acceptsExtension(const std::string & arg1) const
	static int _bind_acceptsExtension(lua_State *L) {
		if (!_lg_typecheck_acceptsExtension(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::ReaderWriter::acceptsExtension(const std::string & arg1) const function, expected prototype:\nbool osgDB::ReaderWriter::acceptsExtension(const std::string & arg1) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string _arg1(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::ReaderWriter* self=Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::ReaderWriter::acceptsExtension(const std::string &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->acceptsExtension(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::ReaderWriter::acceptsProtocol(const std::string & protocol) const
	static int _bind_acceptsProtocol(lua_State *L) {
		if (!_lg_typecheck_acceptsProtocol(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::ReaderWriter::acceptsProtocol(const std::string & protocol) const function, expected prototype:\nbool osgDB::ReaderWriter::acceptsProtocol(const std::string & protocol) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string protocol(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::ReaderWriter* self=Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::ReaderWriter::acceptsProtocol(const std::string &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->acceptsProtocol(protocol);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// osgDB::ReaderWriter::Features osgDB::ReaderWriter::supportedFeatures() const
	static int _bind_supportedFeatures(lua_State *L) {
		if (!_lg_typecheck_supportedFeatures(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::Features osgDB::ReaderWriter::supportedFeatures() const function, expected prototype:\nosgDB::ReaderWriter::Features osgDB::ReaderWriter::supportedFeatures() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ReaderWriter* self=Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::Features osgDB::ReaderWriter::supportedFeatures() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::Features lret = self->supportedFeatures();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osgDB::ReaderWriter::fileExists(const std::string & filename, const osgDB::Options * options) const
	static int _bind_fileExists(lua_State *L) {
		if (!_lg_typecheck_fileExists(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::ReaderWriter::fileExists(const std::string & filename, const osgDB::Options * options) const function, expected prototype:\nbool osgDB::ReaderWriter::fileExists(const std::string & filename, const osgDB::Options * options) const\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string filename(lua_tostring(L,2),lua_objlen(L,2));
		const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3));

		osgDB::ReaderWriter* self=Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::ReaderWriter::fileExists(const std::string &, const osgDB::Options *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->fileExists(filename, options);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::openArchive(const std::string & arg1, osgDB::ReaderWriter::ArchiveStatus arg2, unsigned int arg3 = 4096, const osgDB::Options * arg4 = NULL) const
	static int _bind_openArchive_overload_1(lua_State *L) {
		if (!_lg_typecheck_openArchive_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::openArchive(const std::string & arg1, osgDB::ReaderWriter::ArchiveStatus arg2, unsigned int arg3 = 4096, const osgDB::Options * arg4 = NULL) const function, expected prototype:\nosgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::openArchive(const std::string & arg1, osgDB::ReaderWriter::ArchiveStatus arg2, unsigned int arg3 = 4096, const osgDB::Options * arg4 = NULL) const\nClass arguments details:\narg 4 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		std::string _arg1(lua_tostring(L,2),lua_objlen(L,2));
		osgDB::ReaderWriter::ArchiveStatus _arg2=(osgDB::ReaderWriter::ArchiveStatus)lua_tointeger(L,3);
		unsigned _arg3=luatop>3 ? (unsigned)lua_tointeger(L,4) : (unsigned)4096;
		const osgDB::Options* _arg4=luatop>4 ? (Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,5)) : (const osgDB::Options*)((void *) 0);

		osgDB::ReaderWriter* self=Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::openArchive(const std::string &, osgDB::ReaderWriter::ArchiveStatus, unsigned int, const osgDB::Options *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::ReadResult stack_lret = self->openArchive(_arg1, _arg2, _arg3, _arg4);
		osgDB::ReaderWriter::ReadResult* lret = new osgDB::ReaderWriter::ReadResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::ReadResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::openArchive(std::istream & arg1, const osgDB::Options * arg2 = NULL) const
	static int _bind_openArchive_overload_2(lua_State *L) {
		if (!_lg_typecheck_openArchive_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::openArchive(std::istream & arg1, const osgDB::Options * arg2 = NULL) const function, expected prototype:\nosgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::openArchive(std::istream & arg1, const osgDB::Options * arg2 = NULL) const\nClass arguments details:\narg 1 ID = 77972206\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		std::istream* _arg1_ptr=(Luna< std::istream >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgDB::ReaderWriter::openArchive function");
		}
		std::istream & _arg1=*_arg1_ptr;
		const osgDB::Options* _arg2=luatop>2 ? (Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3)) : (const osgDB::Options*)((void *) 0);

		osgDB::ReaderWriter* self=Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::openArchive(std::istream &, const osgDB::Options *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::ReadResult stack_lret = self->openArchive(_arg1, _arg2);
		osgDB::ReaderWriter::ReadResult* lret = new osgDB::ReaderWriter::ReadResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::ReadResult >::push(L,lret,true);

		return 1;
	}

	// Overload binder for osgDB::ReaderWriter::openArchive
	static int _bind_openArchive(lua_State *L) {
		if (_lg_typecheck_openArchive_overload_1(L)) return _bind_openArchive_overload_1(L);
		if (_lg_typecheck_openArchive_overload_2(L)) return _bind_openArchive_overload_2(L);

		luaL_error(L, "error in function openArchive, cannot match any of the overloads for function openArchive:\n  openArchive(const std::string &, osgDB::ReaderWriter::ArchiveStatus, unsigned int, const osgDB::Options *)\n  openArchive(std::istream &, const osgDB::Options *)\n");
		return 0;
	}

	// osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::readObject(const std::string & arg1, const osgDB::Options * arg2 = NULL) const
	static int _bind_readObject_overload_1(lua_State *L) {
		if (!_lg_typecheck_readObject_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::readObject(const std::string & arg1, const osgDB::Options * arg2 = NULL) const function, expected prototype:\nosgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::readObject(const std::string & arg1, const osgDB::Options * arg2 = NULL) const\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		std::string _arg1(lua_tostring(L,2),lua_objlen(L,2));
		const osgDB::Options* _arg2=luatop>2 ? (Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3)) : (const osgDB::Options*)((void *) 0);

		osgDB::ReaderWriter* self=Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::readObject(const std::string &, const osgDB::Options *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::ReadResult stack_lret = self->readObject(_arg1, _arg2);
		osgDB::ReaderWriter::ReadResult* lret = new osgDB::ReaderWriter::ReadResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::ReadResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::readObject(std::istream & arg1, const osgDB::Options * arg2 = NULL) const
	static int _bind_readObject_overload_2(lua_State *L) {
		if (!_lg_typecheck_readObject_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::readObject(std::istream & arg1, const osgDB::Options * arg2 = NULL) const function, expected prototype:\nosgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::readObject(std::istream & arg1, const osgDB::Options * arg2 = NULL) const\nClass arguments details:\narg 1 ID = 77972206\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		std::istream* _arg1_ptr=(Luna< std::istream >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgDB::ReaderWriter::readObject function");
		}
		std::istream & _arg1=*_arg1_ptr;
		const osgDB::Options* _arg2=luatop>2 ? (Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3)) : (const osgDB::Options*)((void *) 0);

		osgDB::ReaderWriter* self=Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::readObject(std::istream &, const osgDB::Options *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::ReadResult stack_lret = self->readObject(_arg1, _arg2);
		osgDB::ReaderWriter::ReadResult* lret = new osgDB::ReaderWriter::ReadResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::ReadResult >::push(L,lret,true);

		return 1;
	}

	// Overload binder for osgDB::ReaderWriter::readObject
	static int _bind_readObject(lua_State *L) {
		if (_lg_typecheck_readObject_overload_1(L)) return _bind_readObject_overload_1(L);
		if (_lg_typecheck_readObject_overload_2(L)) return _bind_readObject_overload_2(L);

		luaL_error(L, "error in function readObject, cannot match any of the overloads for function readObject:\n  readObject(const std::string &, const osgDB::Options *)\n  readObject(std::istream &, const osgDB::Options *)\n");
		return 0;
	}

	// osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::readImage(const std::string & arg1, const osgDB::Options * arg2 = NULL) const
	static int _bind_readImage_overload_1(lua_State *L) {
		if (!_lg_typecheck_readImage_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::readImage(const std::string & arg1, const osgDB::Options * arg2 = NULL) const function, expected prototype:\nosgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::readImage(const std::string & arg1, const osgDB::Options * arg2 = NULL) const\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		std::string _arg1(lua_tostring(L,2),lua_objlen(L,2));
		const osgDB::Options* _arg2=luatop>2 ? (Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3)) : (const osgDB::Options*)((void *) 0);

		osgDB::ReaderWriter* self=Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::readImage(const std::string &, const osgDB::Options *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::ReadResult stack_lret = self->readImage(_arg1, _arg2);
		osgDB::ReaderWriter::ReadResult* lret = new osgDB::ReaderWriter::ReadResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::ReadResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::readImage(std::istream & arg1, const osgDB::Options * arg2 = NULL) const
	static int _bind_readImage_overload_2(lua_State *L) {
		if (!_lg_typecheck_readImage_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::readImage(std::istream & arg1, const osgDB::Options * arg2 = NULL) const function, expected prototype:\nosgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::readImage(std::istream & arg1, const osgDB::Options * arg2 = NULL) const\nClass arguments details:\narg 1 ID = 77972206\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		std::istream* _arg1_ptr=(Luna< std::istream >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgDB::ReaderWriter::readImage function");
		}
		std::istream & _arg1=*_arg1_ptr;
		const osgDB::Options* _arg2=luatop>2 ? (Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3)) : (const osgDB::Options*)((void *) 0);

		osgDB::ReaderWriter* self=Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::readImage(std::istream &, const osgDB::Options *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::ReadResult stack_lret = self->readImage(_arg1, _arg2);
		osgDB::ReaderWriter::ReadResult* lret = new osgDB::ReaderWriter::ReadResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::ReadResult >::push(L,lret,true);

		return 1;
	}

	// Overload binder for osgDB::ReaderWriter::readImage
	static int _bind_readImage(lua_State *L) {
		if (_lg_typecheck_readImage_overload_1(L)) return _bind_readImage_overload_1(L);
		if (_lg_typecheck_readImage_overload_2(L)) return _bind_readImage_overload_2(L);

		luaL_error(L, "error in function readImage, cannot match any of the overloads for function readImage:\n  readImage(const std::string &, const osgDB::Options *)\n  readImage(std::istream &, const osgDB::Options *)\n");
		return 0;
	}

	// osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::readHeightField(const std::string & arg1, const osgDB::Options * arg2 = NULL) const
	static int _bind_readHeightField_overload_1(lua_State *L) {
		if (!_lg_typecheck_readHeightField_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::readHeightField(const std::string & arg1, const osgDB::Options * arg2 = NULL) const function, expected prototype:\nosgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::readHeightField(const std::string & arg1, const osgDB::Options * arg2 = NULL) const\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		std::string _arg1(lua_tostring(L,2),lua_objlen(L,2));
		const osgDB::Options* _arg2=luatop>2 ? (Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3)) : (const osgDB::Options*)((void *) 0);

		osgDB::ReaderWriter* self=Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::readHeightField(const std::string &, const osgDB::Options *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::ReadResult stack_lret = self->readHeightField(_arg1, _arg2);
		osgDB::ReaderWriter::ReadResult* lret = new osgDB::ReaderWriter::ReadResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::ReadResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::readHeightField(std::istream & arg1, const osgDB::Options * arg2 = NULL) const
	static int _bind_readHeightField_overload_2(lua_State *L) {
		if (!_lg_typecheck_readHeightField_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::readHeightField(std::istream & arg1, const osgDB::Options * arg2 = NULL) const function, expected prototype:\nosgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::readHeightField(std::istream & arg1, const osgDB::Options * arg2 = NULL) const\nClass arguments details:\narg 1 ID = 77972206\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		std::istream* _arg1_ptr=(Luna< std::istream >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgDB::ReaderWriter::readHeightField function");
		}
		std::istream & _arg1=*_arg1_ptr;
		const osgDB::Options* _arg2=luatop>2 ? (Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3)) : (const osgDB::Options*)((void *) 0);

		osgDB::ReaderWriter* self=Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::readHeightField(std::istream &, const osgDB::Options *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::ReadResult stack_lret = self->readHeightField(_arg1, _arg2);
		osgDB::ReaderWriter::ReadResult* lret = new osgDB::ReaderWriter::ReadResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::ReadResult >::push(L,lret,true);

		return 1;
	}

	// Overload binder for osgDB::ReaderWriter::readHeightField
	static int _bind_readHeightField(lua_State *L) {
		if (_lg_typecheck_readHeightField_overload_1(L)) return _bind_readHeightField_overload_1(L);
		if (_lg_typecheck_readHeightField_overload_2(L)) return _bind_readHeightField_overload_2(L);

		luaL_error(L, "error in function readHeightField, cannot match any of the overloads for function readHeightField:\n  readHeightField(const std::string &, const osgDB::Options *)\n  readHeightField(std::istream &, const osgDB::Options *)\n");
		return 0;
	}

	// osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::readNode(const std::string & arg1, const osgDB::Options * arg2 = NULL) const
	static int _bind_readNode_overload_1(lua_State *L) {
		if (!_lg_typecheck_readNode_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::readNode(const std::string & arg1, const osgDB::Options * arg2 = NULL) const function, expected prototype:\nosgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::readNode(const std::string & arg1, const osgDB::Options * arg2 = NULL) const\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		std::string _arg1(lua_tostring(L,2),lua_objlen(L,2));
		const osgDB::Options* _arg2=luatop>2 ? (Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3)) : (const osgDB::Options*)((void *) 0);

		osgDB::ReaderWriter* self=Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::readNode(const std::string &, const osgDB::Options *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::ReadResult stack_lret = self->readNode(_arg1, _arg2);
		osgDB::ReaderWriter::ReadResult* lret = new osgDB::ReaderWriter::ReadResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::ReadResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::readNode(std::istream & arg1, const osgDB::Options * arg2 = NULL) const
	static int _bind_readNode_overload_2(lua_State *L) {
		if (!_lg_typecheck_readNode_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::readNode(std::istream & arg1, const osgDB::Options * arg2 = NULL) const function, expected prototype:\nosgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::readNode(std::istream & arg1, const osgDB::Options * arg2 = NULL) const\nClass arguments details:\narg 1 ID = 77972206\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		std::istream* _arg1_ptr=(Luna< std::istream >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgDB::ReaderWriter::readNode function");
		}
		std::istream & _arg1=*_arg1_ptr;
		const osgDB::Options* _arg2=luatop>2 ? (Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3)) : (const osgDB::Options*)((void *) 0);

		osgDB::ReaderWriter* self=Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::readNode(std::istream &, const osgDB::Options *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::ReadResult stack_lret = self->readNode(_arg1, _arg2);
		osgDB::ReaderWriter::ReadResult* lret = new osgDB::ReaderWriter::ReadResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::ReadResult >::push(L,lret,true);

		return 1;
	}

	// Overload binder for osgDB::ReaderWriter::readNode
	static int _bind_readNode(lua_State *L) {
		if (_lg_typecheck_readNode_overload_1(L)) return _bind_readNode_overload_1(L);
		if (_lg_typecheck_readNode_overload_2(L)) return _bind_readNode_overload_2(L);

		luaL_error(L, "error in function readNode, cannot match any of the overloads for function readNode:\n  readNode(const std::string &, const osgDB::Options *)\n  readNode(std::istream &, const osgDB::Options *)\n");
		return 0;
	}

	// osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::readShader(const std::string & arg1, const osgDB::Options * arg2 = NULL) const
	static int _bind_readShader_overload_1(lua_State *L) {
		if (!_lg_typecheck_readShader_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::readShader(const std::string & arg1, const osgDB::Options * arg2 = NULL) const function, expected prototype:\nosgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::readShader(const std::string & arg1, const osgDB::Options * arg2 = NULL) const\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		std::string _arg1(lua_tostring(L,2),lua_objlen(L,2));
		const osgDB::Options* _arg2=luatop>2 ? (Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3)) : (const osgDB::Options*)((void *) 0);

		osgDB::ReaderWriter* self=Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::readShader(const std::string &, const osgDB::Options *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::ReadResult stack_lret = self->readShader(_arg1, _arg2);
		osgDB::ReaderWriter::ReadResult* lret = new osgDB::ReaderWriter::ReadResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::ReadResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::readShader(std::istream & arg1, const osgDB::Options * arg2 = NULL) const
	static int _bind_readShader_overload_2(lua_State *L) {
		if (!_lg_typecheck_readShader_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::readShader(std::istream & arg1, const osgDB::Options * arg2 = NULL) const function, expected prototype:\nosgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::readShader(std::istream & arg1, const osgDB::Options * arg2 = NULL) const\nClass arguments details:\narg 1 ID = 77972206\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		std::istream* _arg1_ptr=(Luna< std::istream >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgDB::ReaderWriter::readShader function");
		}
		std::istream & _arg1=*_arg1_ptr;
		const osgDB::Options* _arg2=luatop>2 ? (Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3)) : (const osgDB::Options*)((void *) 0);

		osgDB::ReaderWriter* self=Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::readShader(std::istream &, const osgDB::Options *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::ReadResult stack_lret = self->readShader(_arg1, _arg2);
		osgDB::ReaderWriter::ReadResult* lret = new osgDB::ReaderWriter::ReadResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::ReadResult >::push(L,lret,true);

		return 1;
	}

	// Overload binder for osgDB::ReaderWriter::readShader
	static int _bind_readShader(lua_State *L) {
		if (_lg_typecheck_readShader_overload_1(L)) return _bind_readShader_overload_1(L);
		if (_lg_typecheck_readShader_overload_2(L)) return _bind_readShader_overload_2(L);

		luaL_error(L, "error in function readShader, cannot match any of the overloads for function readShader:\n  readShader(const std::string &, const osgDB::Options *)\n  readShader(std::istream &, const osgDB::Options *)\n");
		return 0;
	}

	// osgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::writeObject(const osg::Object & arg1, const std::string & arg2, const osgDB::Options * arg3 = NULL) const
	static int _bind_writeObject_overload_1(lua_State *L) {
		if (!_lg_typecheck_writeObject_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::writeObject(const osg::Object & arg1, const std::string & arg2, const osgDB::Options * arg3 = NULL) const function, expected prototype:\nosgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::writeObject(const osg::Object & arg1, const std::string & arg2, const osgDB::Options * arg3 = NULL) const\nClass arguments details:\narg 1 ID = 50169651\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::Object* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgDB::ReaderWriter::writeObject function");
		}
		const osg::Object & _arg1=*_arg1_ptr;
		std::string _arg2(lua_tostring(L,3),lua_objlen(L,3));
		const osgDB::Options* _arg3=luatop>3 ? (Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,4)) : (const osgDB::Options*)((void *) 0);

		osgDB::ReaderWriter* self=Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::writeObject(const osg::Object &, const std::string &, const osgDB::Options *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::WriteResult stack_lret = self->writeObject(_arg1, _arg2, _arg3);
		osgDB::ReaderWriter::WriteResult* lret = new osgDB::ReaderWriter::WriteResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::WriteResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::writeObject(const osg::Object & arg1, std::ostream & arg2, const osgDB::Options * arg3 = NULL) const
	static int _bind_writeObject_overload_2(lua_State *L) {
		if (!_lg_typecheck_writeObject_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::writeObject(const osg::Object & arg1, std::ostream & arg2, const osgDB::Options * arg3 = NULL) const function, expected prototype:\nosgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::writeObject(const osg::Object & arg1, std::ostream & arg2, const osgDB::Options * arg3 = NULL) const\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 2993706\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::Object* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgDB::ReaderWriter::writeObject function");
		}
		const osg::Object & _arg1=*_arg1_ptr;
		std::ostream* _arg2_ptr=(Luna< std::ostream >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osgDB::ReaderWriter::writeObject function");
		}
		std::ostream & _arg2=*_arg2_ptr;
		const osgDB::Options* _arg3=luatop>3 ? (Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,4)) : (const osgDB::Options*)((void *) 0);

		osgDB::ReaderWriter* self=Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::writeObject(const osg::Object &, std::ostream &, const osgDB::Options *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::WriteResult stack_lret = self->writeObject(_arg1, _arg2, _arg3);
		osgDB::ReaderWriter::WriteResult* lret = new osgDB::ReaderWriter::WriteResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::WriteResult >::push(L,lret,true);

		return 1;
	}

	// Overload binder for osgDB::ReaderWriter::writeObject
	static int _bind_writeObject(lua_State *L) {
		if (_lg_typecheck_writeObject_overload_1(L)) return _bind_writeObject_overload_1(L);
		if (_lg_typecheck_writeObject_overload_2(L)) return _bind_writeObject_overload_2(L);

		luaL_error(L, "error in function writeObject, cannot match any of the overloads for function writeObject:\n  writeObject(const osg::Object &, const std::string &, const osgDB::Options *)\n  writeObject(const osg::Object &, std::ostream &, const osgDB::Options *)\n");
		return 0;
	}

	// osgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::writeImage(const osg::Image & arg1, const std::string & arg2, const osgDB::Options * arg3 = NULL) const
	static int _bind_writeImage_overload_1(lua_State *L) {
		if (!_lg_typecheck_writeImage_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::writeImage(const osg::Image & arg1, const std::string & arg2, const osgDB::Options * arg3 = NULL) const function, expected prototype:\nosgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::writeImage(const osg::Image & arg1, const std::string & arg2, const osgDB::Options * arg3 = NULL) const\nClass arguments details:\narg 1 ID = 50169651\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::Image* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::Image >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgDB::ReaderWriter::writeImage function");
		}
		const osg::Image & _arg1=*_arg1_ptr;
		std::string _arg2(lua_tostring(L,3),lua_objlen(L,3));
		const osgDB::Options* _arg3=luatop>3 ? (Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,4)) : (const osgDB::Options*)((void *) 0);

		osgDB::ReaderWriter* self=Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::writeImage(const osg::Image &, const std::string &, const osgDB::Options *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::WriteResult stack_lret = self->writeImage(_arg1, _arg2, _arg3);
		osgDB::ReaderWriter::WriteResult* lret = new osgDB::ReaderWriter::WriteResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::WriteResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::writeImage(const osg::Image & arg1, std::ostream & arg2, const osgDB::Options * arg3 = NULL) const
	static int _bind_writeImage_overload_2(lua_State *L) {
		if (!_lg_typecheck_writeImage_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::writeImage(const osg::Image & arg1, std::ostream & arg2, const osgDB::Options * arg3 = NULL) const function, expected prototype:\nosgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::writeImage(const osg::Image & arg1, std::ostream & arg2, const osgDB::Options * arg3 = NULL) const\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 2993706\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::Image* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::Image >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgDB::ReaderWriter::writeImage function");
		}
		const osg::Image & _arg1=*_arg1_ptr;
		std::ostream* _arg2_ptr=(Luna< std::ostream >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osgDB::ReaderWriter::writeImage function");
		}
		std::ostream & _arg2=*_arg2_ptr;
		const osgDB::Options* _arg3=luatop>3 ? (Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,4)) : (const osgDB::Options*)((void *) 0);

		osgDB::ReaderWriter* self=Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::writeImage(const osg::Image &, std::ostream &, const osgDB::Options *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::WriteResult stack_lret = self->writeImage(_arg1, _arg2, _arg3);
		osgDB::ReaderWriter::WriteResult* lret = new osgDB::ReaderWriter::WriteResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::WriteResult >::push(L,lret,true);

		return 1;
	}

	// Overload binder for osgDB::ReaderWriter::writeImage
	static int _bind_writeImage(lua_State *L) {
		if (_lg_typecheck_writeImage_overload_1(L)) return _bind_writeImage_overload_1(L);
		if (_lg_typecheck_writeImage_overload_2(L)) return _bind_writeImage_overload_2(L);

		luaL_error(L, "error in function writeImage, cannot match any of the overloads for function writeImage:\n  writeImage(const osg::Image &, const std::string &, const osgDB::Options *)\n  writeImage(const osg::Image &, std::ostream &, const osgDB::Options *)\n");
		return 0;
	}

	// osgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::writeHeightField(const osg::HeightField & arg1, const std::string & arg2, const osgDB::Options * arg3 = NULL) const
	static int _bind_writeHeightField_overload_1(lua_State *L) {
		if (!_lg_typecheck_writeHeightField_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::writeHeightField(const osg::HeightField & arg1, const std::string & arg2, const osgDB::Options * arg3 = NULL) const function, expected prototype:\nosgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::writeHeightField(const osg::HeightField & arg1, const std::string & arg2, const osgDB::Options * arg3 = NULL) const\nClass arguments details:\narg 1 ID = 50169651\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::HeightField* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::HeightField >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgDB::ReaderWriter::writeHeightField function");
		}
		const osg::HeightField & _arg1=*_arg1_ptr;
		std::string _arg2(lua_tostring(L,3),lua_objlen(L,3));
		const osgDB::Options* _arg3=luatop>3 ? (Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,4)) : (const osgDB::Options*)((void *) 0);

		osgDB::ReaderWriter* self=Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::writeHeightField(const osg::HeightField &, const std::string &, const osgDB::Options *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::WriteResult stack_lret = self->writeHeightField(_arg1, _arg2, _arg3);
		osgDB::ReaderWriter::WriteResult* lret = new osgDB::ReaderWriter::WriteResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::WriteResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::writeHeightField(const osg::HeightField & arg1, std::ostream & arg2, const osgDB::Options * arg3 = NULL) const
	static int _bind_writeHeightField_overload_2(lua_State *L) {
		if (!_lg_typecheck_writeHeightField_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::writeHeightField(const osg::HeightField & arg1, std::ostream & arg2, const osgDB::Options * arg3 = NULL) const function, expected prototype:\nosgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::writeHeightField(const osg::HeightField & arg1, std::ostream & arg2, const osgDB::Options * arg3 = NULL) const\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 2993706\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::HeightField* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::HeightField >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgDB::ReaderWriter::writeHeightField function");
		}
		const osg::HeightField & _arg1=*_arg1_ptr;
		std::ostream* _arg2_ptr=(Luna< std::ostream >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osgDB::ReaderWriter::writeHeightField function");
		}
		std::ostream & _arg2=*_arg2_ptr;
		const osgDB::Options* _arg3=luatop>3 ? (Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,4)) : (const osgDB::Options*)((void *) 0);

		osgDB::ReaderWriter* self=Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::writeHeightField(const osg::HeightField &, std::ostream &, const osgDB::Options *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::WriteResult stack_lret = self->writeHeightField(_arg1, _arg2, _arg3);
		osgDB::ReaderWriter::WriteResult* lret = new osgDB::ReaderWriter::WriteResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::WriteResult >::push(L,lret,true);

		return 1;
	}

	// Overload binder for osgDB::ReaderWriter::writeHeightField
	static int _bind_writeHeightField(lua_State *L) {
		if (_lg_typecheck_writeHeightField_overload_1(L)) return _bind_writeHeightField_overload_1(L);
		if (_lg_typecheck_writeHeightField_overload_2(L)) return _bind_writeHeightField_overload_2(L);

		luaL_error(L, "error in function writeHeightField, cannot match any of the overloads for function writeHeightField:\n  writeHeightField(const osg::HeightField &, const std::string &, const osgDB::Options *)\n  writeHeightField(const osg::HeightField &, std::ostream &, const osgDB::Options *)\n");
		return 0;
	}

	// osgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::writeNode(const osg::Node & arg1, const std::string & arg2, const osgDB::Options * arg3 = NULL) const
	static int _bind_writeNode_overload_1(lua_State *L) {
		if (!_lg_typecheck_writeNode_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::writeNode(const osg::Node & arg1, const std::string & arg2, const osgDB::Options * arg3 = NULL) const function, expected prototype:\nosgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::writeNode(const osg::Node & arg1, const std::string & arg2, const osgDB::Options * arg3 = NULL) const\nClass arguments details:\narg 1 ID = 50169651\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::Node* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgDB::ReaderWriter::writeNode function");
		}
		const osg::Node & _arg1=*_arg1_ptr;
		std::string _arg2(lua_tostring(L,3),lua_objlen(L,3));
		const osgDB::Options* _arg3=luatop>3 ? (Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,4)) : (const osgDB::Options*)((void *) 0);

		osgDB::ReaderWriter* self=Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::writeNode(const osg::Node &, const std::string &, const osgDB::Options *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::WriteResult stack_lret = self->writeNode(_arg1, _arg2, _arg3);
		osgDB::ReaderWriter::WriteResult* lret = new osgDB::ReaderWriter::WriteResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::WriteResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::writeNode(const osg::Node & arg1, std::ostream & arg2, const osgDB::Options * arg3 = NULL) const
	static int _bind_writeNode_overload_2(lua_State *L) {
		if (!_lg_typecheck_writeNode_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::writeNode(const osg::Node & arg1, std::ostream & arg2, const osgDB::Options * arg3 = NULL) const function, expected prototype:\nosgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::writeNode(const osg::Node & arg1, std::ostream & arg2, const osgDB::Options * arg3 = NULL) const\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 2993706\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::Node* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgDB::ReaderWriter::writeNode function");
		}
		const osg::Node & _arg1=*_arg1_ptr;
		std::ostream* _arg2_ptr=(Luna< std::ostream >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osgDB::ReaderWriter::writeNode function");
		}
		std::ostream & _arg2=*_arg2_ptr;
		const osgDB::Options* _arg3=luatop>3 ? (Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,4)) : (const osgDB::Options*)((void *) 0);

		osgDB::ReaderWriter* self=Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::writeNode(const osg::Node &, std::ostream &, const osgDB::Options *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::WriteResult stack_lret = self->writeNode(_arg1, _arg2, _arg3);
		osgDB::ReaderWriter::WriteResult* lret = new osgDB::ReaderWriter::WriteResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::WriteResult >::push(L,lret,true);

		return 1;
	}

	// Overload binder for osgDB::ReaderWriter::writeNode
	static int _bind_writeNode(lua_State *L) {
		if (_lg_typecheck_writeNode_overload_1(L)) return _bind_writeNode_overload_1(L);
		if (_lg_typecheck_writeNode_overload_2(L)) return _bind_writeNode_overload_2(L);

		luaL_error(L, "error in function writeNode, cannot match any of the overloads for function writeNode:\n  writeNode(const osg::Node &, const std::string &, const osgDB::Options *)\n  writeNode(const osg::Node &, std::ostream &, const osgDB::Options *)\n");
		return 0;
	}

	// osgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::writeShader(const osg::Shader & arg1, const std::string & arg2, const osgDB::Options * arg3 = NULL) const
	static int _bind_writeShader_overload_1(lua_State *L) {
		if (!_lg_typecheck_writeShader_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::writeShader(const osg::Shader & arg1, const std::string & arg2, const osgDB::Options * arg3 = NULL) const function, expected prototype:\nosgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::writeShader(const osg::Shader & arg1, const std::string & arg2, const osgDB::Options * arg3 = NULL) const\nClass arguments details:\narg 1 ID = 50169651\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::Shader* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::Shader >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgDB::ReaderWriter::writeShader function");
		}
		const osg::Shader & _arg1=*_arg1_ptr;
		std::string _arg2(lua_tostring(L,3),lua_objlen(L,3));
		const osgDB::Options* _arg3=luatop>3 ? (Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,4)) : (const osgDB::Options*)((void *) 0);

		osgDB::ReaderWriter* self=Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::writeShader(const osg::Shader &, const std::string &, const osgDB::Options *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::WriteResult stack_lret = self->writeShader(_arg1, _arg2, _arg3);
		osgDB::ReaderWriter::WriteResult* lret = new osgDB::ReaderWriter::WriteResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::WriteResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::writeShader(const osg::Shader & arg1, std::ostream & arg2, const osgDB::Options * arg3 = NULL) const
	static int _bind_writeShader_overload_2(lua_State *L) {
		if (!_lg_typecheck_writeShader_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::writeShader(const osg::Shader & arg1, std::ostream & arg2, const osgDB::Options * arg3 = NULL) const function, expected prototype:\nosgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::writeShader(const osg::Shader & arg1, std::ostream & arg2, const osgDB::Options * arg3 = NULL) const\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 2993706\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::Shader* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::Shader >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgDB::ReaderWriter::writeShader function");
		}
		const osg::Shader & _arg1=*_arg1_ptr;
		std::ostream* _arg2_ptr=(Luna< std::ostream >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osgDB::ReaderWriter::writeShader function");
		}
		std::ostream & _arg2=*_arg2_ptr;
		const osgDB::Options* _arg3=luatop>3 ? (Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,4)) : (const osgDB::Options*)((void *) 0);

		osgDB::ReaderWriter* self=Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::writeShader(const osg::Shader &, std::ostream &, const osgDB::Options *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::WriteResult stack_lret = self->writeShader(_arg1, _arg2, _arg3);
		osgDB::ReaderWriter::WriteResult* lret = new osgDB::ReaderWriter::WriteResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::WriteResult >::push(L,lret,true);

		return 1;
	}

	// Overload binder for osgDB::ReaderWriter::writeShader
	static int _bind_writeShader(lua_State *L) {
		if (_lg_typecheck_writeShader_overload_1(L)) return _bind_writeShader_overload_1(L);
		if (_lg_typecheck_writeShader_overload_2(L)) return _bind_writeShader_overload_2(L);

		luaL_error(L, "error in function writeShader, cannot match any of the overloads for function writeShader:\n  writeShader(const osg::Shader &, const std::string &, const osgDB::Options *)\n  writeShader(const osg::Shader &, std::ostream &, const osgDB::Options *)\n");
		return 0;
	}

	// void osgDB::ReaderWriter::supportsProtocol(const std::string & fmt, const std::string & description)
	static int _bind_supportsProtocol(lua_State *L) {
		if (!_lg_typecheck_supportsProtocol(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::ReaderWriter::supportsProtocol(const std::string & fmt, const std::string & description) function, expected prototype:\nvoid osgDB::ReaderWriter::supportsProtocol(const std::string & fmt, const std::string & description)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string fmt(lua_tostring(L,2),lua_objlen(L,2));
		std::string description(lua_tostring(L,3),lua_objlen(L,3));

		osgDB::ReaderWriter* self=Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::ReaderWriter::supportsProtocol(const std::string &, const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->supportsProtocol(fmt, description);

		return 0;
	}

	// void osgDB::ReaderWriter::supportsExtension(const std::string & ext, const std::string & description)
	static int _bind_supportsExtension(lua_State *L) {
		if (!_lg_typecheck_supportsExtension(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::ReaderWriter::supportsExtension(const std::string & ext, const std::string & description) function, expected prototype:\nvoid osgDB::ReaderWriter::supportsExtension(const std::string & ext, const std::string & description)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string ext(lua_tostring(L,2),lua_objlen(L,2));
		std::string description(lua_tostring(L,3),lua_objlen(L,3));

		osgDB::ReaderWriter* self=Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::ReaderWriter::supportsExtension(const std::string &, const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->supportsExtension(ext, description);

		return 0;
	}

	// void osgDB::ReaderWriter::supportsOption(const std::string & opt, const std::string & description)
	static int _bind_supportsOption(lua_State *L) {
		if (!_lg_typecheck_supportsOption(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::ReaderWriter::supportsOption(const std::string & opt, const std::string & description) function, expected prototype:\nvoid osgDB::ReaderWriter::supportsOption(const std::string & opt, const std::string & description)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string opt(lua_tostring(L,2),lua_objlen(L,2));
		std::string description(lua_tostring(L,3),lua_objlen(L,3));

		osgDB::ReaderWriter* self=Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::ReaderWriter::supportsOption(const std::string &, const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->supportsOption(opt, description);

		return 0;
	}

	// static osgDB::ReaderWriter::FeatureList osgDB::ReaderWriter::featureAsString(osgDB::ReaderWriter::Features feature)
	static int _bind_featureAsString(lua_State *L) {
		if (!_lg_typecheck_featureAsString(L)) {
			luaL_error(L, "luna typecheck failed in static osgDB::ReaderWriter::FeatureList osgDB::ReaderWriter::featureAsString(osgDB::ReaderWriter::Features feature) function, expected prototype:\nstatic osgDB::ReaderWriter::FeatureList osgDB::ReaderWriter::featureAsString(osgDB::ReaderWriter::Features feature)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::ReaderWriter::Features feature=(osgDB::ReaderWriter::Features)lua_tointeger(L,1);

		osgDB::ReaderWriter::FeatureList stack_lret = osgDB::ReaderWriter::featureAsString(feature);
		osgDB::ReaderWriter::FeatureList* lret = new osgDB::ReaderWriter::FeatureList(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::FeatureList >::push(L,lret,true);

		return 1;
	}

	// void osgDB::ReaderWriter::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::ReaderWriter::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgDB::ReaderWriter::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgDB::ReaderWriter* self=Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::ReaderWriter::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ReaderWriter::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osgDB::ReaderWriter::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::ReaderWriter::base_setName(const std::string & name) function, expected prototype:\nvoid osgDB::ReaderWriter::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::ReaderWriter* self=Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::ReaderWriter::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ReaderWriter::setName(name);

		return 0;
	}

	// void osgDB::ReaderWriter::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::ReaderWriter::base_computeDataVariance() function, expected prototype:\nvoid osgDB::ReaderWriter::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ReaderWriter* self=Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::ReaderWriter::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ReaderWriter::computeDataVariance();

		return 0;
	}

	// void osgDB::ReaderWriter::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::ReaderWriter::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osgDB::ReaderWriter::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osgDB::ReaderWriter* self=Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::ReaderWriter::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ReaderWriter::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osgDB::ReaderWriter::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osgDB::ReaderWriter::base_getUserData() function, expected prototype:\nosg::Referenced * osgDB::ReaderWriter::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ReaderWriter* self=Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osgDB::ReaderWriter::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->ReaderWriter::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osgDB::ReaderWriter::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osgDB::ReaderWriter::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osgDB::ReaderWriter::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ReaderWriter* self=Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osgDB::ReaderWriter::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->ReaderWriter::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgDB::ReaderWriter::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osgDB::ReaderWriter::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::ReaderWriter::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osgDB::ReaderWriter::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osgDB::ReaderWriter* self=Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::ReaderWriter::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ReaderWriter::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osgDB::ReaderWriter::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgDB::ReaderWriter::base_cloneType() const function, expected prototype:\nosg::Object * osgDB::ReaderWriter::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ReaderWriter* self=Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgDB::ReaderWriter::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->ReaderWriter::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgDB::ReaderWriter::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgDB::ReaderWriter::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgDB::ReaderWriter::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgDB::ReaderWriter::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgDB::ReaderWriter* self=Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgDB::ReaderWriter::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->ReaderWriter::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgDB::ReaderWriter::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::ReaderWriter::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgDB::ReaderWriter::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgDB::ReaderWriter* self=Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::ReaderWriter::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ReaderWriter::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgDB::ReaderWriter::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgDB::ReaderWriter::base_libraryName() const function, expected prototype:\nconst char * osgDB::ReaderWriter::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ReaderWriter* self=Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgDB::ReaderWriter::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->ReaderWriter::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgDB::ReaderWriter::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgDB::ReaderWriter::base_className() const function, expected prototype:\nconst char * osgDB::ReaderWriter::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ReaderWriter* self=Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgDB::ReaderWriter::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->ReaderWriter::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const osgDB::ReaderWriter::FormatDescriptionMap & osgDB::ReaderWriter::base_supportedProtocols() const
	static int _bind_base_supportedProtocols(lua_State *L) {
		if (!_lg_typecheck_base_supportedProtocols(L)) {
			luaL_error(L, "luna typecheck failed in const osgDB::ReaderWriter::FormatDescriptionMap & osgDB::ReaderWriter::base_supportedProtocols() const function, expected prototype:\nconst osgDB::ReaderWriter::FormatDescriptionMap & osgDB::ReaderWriter::base_supportedProtocols() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ReaderWriter* self=Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgDB::ReaderWriter::FormatDescriptionMap & osgDB::ReaderWriter::base_supportedProtocols() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::ReaderWriter::FormatDescriptionMap* lret = &self->ReaderWriter::supportedProtocols();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::FormatDescriptionMap >::push(L,lret,false);

		return 1;
	}

	// const osgDB::ReaderWriter::FormatDescriptionMap & osgDB::ReaderWriter::base_supportedExtensions() const
	static int _bind_base_supportedExtensions(lua_State *L) {
		if (!_lg_typecheck_base_supportedExtensions(L)) {
			luaL_error(L, "luna typecheck failed in const osgDB::ReaderWriter::FormatDescriptionMap & osgDB::ReaderWriter::base_supportedExtensions() const function, expected prototype:\nconst osgDB::ReaderWriter::FormatDescriptionMap & osgDB::ReaderWriter::base_supportedExtensions() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ReaderWriter* self=Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgDB::ReaderWriter::FormatDescriptionMap & osgDB::ReaderWriter::base_supportedExtensions() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::ReaderWriter::FormatDescriptionMap* lret = &self->ReaderWriter::supportedExtensions();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::FormatDescriptionMap >::push(L,lret,false);

		return 1;
	}

	// const osgDB::ReaderWriter::FormatDescriptionMap & osgDB::ReaderWriter::base_supportedOptions() const
	static int _bind_base_supportedOptions(lua_State *L) {
		if (!_lg_typecheck_base_supportedOptions(L)) {
			luaL_error(L, "luna typecheck failed in const osgDB::ReaderWriter::FormatDescriptionMap & osgDB::ReaderWriter::base_supportedOptions() const function, expected prototype:\nconst osgDB::ReaderWriter::FormatDescriptionMap & osgDB::ReaderWriter::base_supportedOptions() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ReaderWriter* self=Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgDB::ReaderWriter::FormatDescriptionMap & osgDB::ReaderWriter::base_supportedOptions() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::ReaderWriter::FormatDescriptionMap* lret = &self->ReaderWriter::supportedOptions();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::FormatDescriptionMap >::push(L,lret,false);

		return 1;
	}

	// bool osgDB::ReaderWriter::base_acceptsExtension(const std::string & arg1) const
	static int _bind_base_acceptsExtension(lua_State *L) {
		if (!_lg_typecheck_base_acceptsExtension(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::ReaderWriter::base_acceptsExtension(const std::string & arg1) const function, expected prototype:\nbool osgDB::ReaderWriter::base_acceptsExtension(const std::string & arg1) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string _arg1(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::ReaderWriter* self=Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::ReaderWriter::base_acceptsExtension(const std::string &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ReaderWriter::acceptsExtension(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::ReaderWriter::base_acceptsProtocol(const std::string & protocol) const
	static int _bind_base_acceptsProtocol(lua_State *L) {
		if (!_lg_typecheck_base_acceptsProtocol(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::ReaderWriter::base_acceptsProtocol(const std::string & protocol) const function, expected prototype:\nbool osgDB::ReaderWriter::base_acceptsProtocol(const std::string & protocol) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string protocol(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::ReaderWriter* self=Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::ReaderWriter::base_acceptsProtocol(const std::string &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ReaderWriter::acceptsProtocol(protocol);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// osgDB::ReaderWriter::Features osgDB::ReaderWriter::base_supportedFeatures() const
	static int _bind_base_supportedFeatures(lua_State *L) {
		if (!_lg_typecheck_base_supportedFeatures(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::Features osgDB::ReaderWriter::base_supportedFeatures() const function, expected prototype:\nosgDB::ReaderWriter::Features osgDB::ReaderWriter::base_supportedFeatures() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ReaderWriter* self=Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::Features osgDB::ReaderWriter::base_supportedFeatures() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::Features lret = self->ReaderWriter::supportedFeatures();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osgDB::ReaderWriter::base_fileExists(const std::string & filename, const osgDB::Options * options) const
	static int _bind_base_fileExists(lua_State *L) {
		if (!_lg_typecheck_base_fileExists(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::ReaderWriter::base_fileExists(const std::string & filename, const osgDB::Options * options) const function, expected prototype:\nbool osgDB::ReaderWriter::base_fileExists(const std::string & filename, const osgDB::Options * options) const\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string filename(lua_tostring(L,2),lua_objlen(L,2));
		const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3));

		osgDB::ReaderWriter* self=Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::ReaderWriter::base_fileExists(const std::string &, const osgDB::Options *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ReaderWriter::fileExists(filename, options);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::base_openArchive(const std::string & arg1, osgDB::ReaderWriter::ArchiveStatus arg2, unsigned int arg3 = 4096, const osgDB::Options * arg4 = NULL) const
	static int _bind_base_openArchive_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_openArchive_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::base_openArchive(const std::string & arg1, osgDB::ReaderWriter::ArchiveStatus arg2, unsigned int arg3 = 4096, const osgDB::Options * arg4 = NULL) const function, expected prototype:\nosgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::base_openArchive(const std::string & arg1, osgDB::ReaderWriter::ArchiveStatus arg2, unsigned int arg3 = 4096, const osgDB::Options * arg4 = NULL) const\nClass arguments details:\narg 4 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		std::string _arg1(lua_tostring(L,2),lua_objlen(L,2));
		osgDB::ReaderWriter::ArchiveStatus _arg2=(osgDB::ReaderWriter::ArchiveStatus)lua_tointeger(L,3);
		unsigned _arg3=luatop>3 ? (unsigned)lua_tointeger(L,4) : (unsigned)4096;
		const osgDB::Options* _arg4=luatop>4 ? (Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,5)) : (const osgDB::Options*)((void *) 0);

		osgDB::ReaderWriter* self=Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::base_openArchive(const std::string &, osgDB::ReaderWriter::ArchiveStatus, unsigned int, const osgDB::Options *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::ReadResult stack_lret = self->ReaderWriter::openArchive(_arg1, _arg2, _arg3, _arg4);
		osgDB::ReaderWriter::ReadResult* lret = new osgDB::ReaderWriter::ReadResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::ReadResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::base_openArchive(std::istream & arg1, const osgDB::Options * arg2 = NULL) const
	static int _bind_base_openArchive_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_openArchive_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::base_openArchive(std::istream & arg1, const osgDB::Options * arg2 = NULL) const function, expected prototype:\nosgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::base_openArchive(std::istream & arg1, const osgDB::Options * arg2 = NULL) const\nClass arguments details:\narg 1 ID = 77972206\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		std::istream* _arg1_ptr=(Luna< std::istream >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgDB::ReaderWriter::base_openArchive function");
		}
		std::istream & _arg1=*_arg1_ptr;
		const osgDB::Options* _arg2=luatop>2 ? (Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3)) : (const osgDB::Options*)((void *) 0);

		osgDB::ReaderWriter* self=Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::base_openArchive(std::istream &, const osgDB::Options *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::ReadResult stack_lret = self->ReaderWriter::openArchive(_arg1, _arg2);
		osgDB::ReaderWriter::ReadResult* lret = new osgDB::ReaderWriter::ReadResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::ReadResult >::push(L,lret,true);

		return 1;
	}

	// Overload binder for osgDB::ReaderWriter::base_openArchive
	static int _bind_base_openArchive(lua_State *L) {
		if (_lg_typecheck_base_openArchive_overload_1(L)) return _bind_base_openArchive_overload_1(L);
		if (_lg_typecheck_base_openArchive_overload_2(L)) return _bind_base_openArchive_overload_2(L);

		luaL_error(L, "error in function base_openArchive, cannot match any of the overloads for function base_openArchive:\n  base_openArchive(const std::string &, osgDB::ReaderWriter::ArchiveStatus, unsigned int, const osgDB::Options *)\n  base_openArchive(std::istream &, const osgDB::Options *)\n");
		return 0;
	}

	// osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::base_readObject(const std::string & arg1, const osgDB::Options * arg2 = NULL) const
	static int _bind_base_readObject_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_readObject_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::base_readObject(const std::string & arg1, const osgDB::Options * arg2 = NULL) const function, expected prototype:\nosgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::base_readObject(const std::string & arg1, const osgDB::Options * arg2 = NULL) const\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		std::string _arg1(lua_tostring(L,2),lua_objlen(L,2));
		const osgDB::Options* _arg2=luatop>2 ? (Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3)) : (const osgDB::Options*)((void *) 0);

		osgDB::ReaderWriter* self=Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::base_readObject(const std::string &, const osgDB::Options *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::ReadResult stack_lret = self->ReaderWriter::readObject(_arg1, _arg2);
		osgDB::ReaderWriter::ReadResult* lret = new osgDB::ReaderWriter::ReadResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::ReadResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::base_readObject(std::istream & arg1, const osgDB::Options * arg2 = NULL) const
	static int _bind_base_readObject_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_readObject_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::base_readObject(std::istream & arg1, const osgDB::Options * arg2 = NULL) const function, expected prototype:\nosgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::base_readObject(std::istream & arg1, const osgDB::Options * arg2 = NULL) const\nClass arguments details:\narg 1 ID = 77972206\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		std::istream* _arg1_ptr=(Luna< std::istream >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgDB::ReaderWriter::base_readObject function");
		}
		std::istream & _arg1=*_arg1_ptr;
		const osgDB::Options* _arg2=luatop>2 ? (Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3)) : (const osgDB::Options*)((void *) 0);

		osgDB::ReaderWriter* self=Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::base_readObject(std::istream &, const osgDB::Options *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::ReadResult stack_lret = self->ReaderWriter::readObject(_arg1, _arg2);
		osgDB::ReaderWriter::ReadResult* lret = new osgDB::ReaderWriter::ReadResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::ReadResult >::push(L,lret,true);

		return 1;
	}

	// Overload binder for osgDB::ReaderWriter::base_readObject
	static int _bind_base_readObject(lua_State *L) {
		if (_lg_typecheck_base_readObject_overload_1(L)) return _bind_base_readObject_overload_1(L);
		if (_lg_typecheck_base_readObject_overload_2(L)) return _bind_base_readObject_overload_2(L);

		luaL_error(L, "error in function base_readObject, cannot match any of the overloads for function base_readObject:\n  base_readObject(const std::string &, const osgDB::Options *)\n  base_readObject(std::istream &, const osgDB::Options *)\n");
		return 0;
	}

	// osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::base_readImage(const std::string & arg1, const osgDB::Options * arg2 = NULL) const
	static int _bind_base_readImage_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_readImage_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::base_readImage(const std::string & arg1, const osgDB::Options * arg2 = NULL) const function, expected prototype:\nosgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::base_readImage(const std::string & arg1, const osgDB::Options * arg2 = NULL) const\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		std::string _arg1(lua_tostring(L,2),lua_objlen(L,2));
		const osgDB::Options* _arg2=luatop>2 ? (Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3)) : (const osgDB::Options*)((void *) 0);

		osgDB::ReaderWriter* self=Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::base_readImage(const std::string &, const osgDB::Options *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::ReadResult stack_lret = self->ReaderWriter::readImage(_arg1, _arg2);
		osgDB::ReaderWriter::ReadResult* lret = new osgDB::ReaderWriter::ReadResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::ReadResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::base_readImage(std::istream & arg1, const osgDB::Options * arg2 = NULL) const
	static int _bind_base_readImage_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_readImage_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::base_readImage(std::istream & arg1, const osgDB::Options * arg2 = NULL) const function, expected prototype:\nosgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::base_readImage(std::istream & arg1, const osgDB::Options * arg2 = NULL) const\nClass arguments details:\narg 1 ID = 77972206\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		std::istream* _arg1_ptr=(Luna< std::istream >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgDB::ReaderWriter::base_readImage function");
		}
		std::istream & _arg1=*_arg1_ptr;
		const osgDB::Options* _arg2=luatop>2 ? (Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3)) : (const osgDB::Options*)((void *) 0);

		osgDB::ReaderWriter* self=Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::base_readImage(std::istream &, const osgDB::Options *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::ReadResult stack_lret = self->ReaderWriter::readImage(_arg1, _arg2);
		osgDB::ReaderWriter::ReadResult* lret = new osgDB::ReaderWriter::ReadResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::ReadResult >::push(L,lret,true);

		return 1;
	}

	// Overload binder for osgDB::ReaderWriter::base_readImage
	static int _bind_base_readImage(lua_State *L) {
		if (_lg_typecheck_base_readImage_overload_1(L)) return _bind_base_readImage_overload_1(L);
		if (_lg_typecheck_base_readImage_overload_2(L)) return _bind_base_readImage_overload_2(L);

		luaL_error(L, "error in function base_readImage, cannot match any of the overloads for function base_readImage:\n  base_readImage(const std::string &, const osgDB::Options *)\n  base_readImage(std::istream &, const osgDB::Options *)\n");
		return 0;
	}

	// osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::base_readHeightField(const std::string & arg1, const osgDB::Options * arg2 = NULL) const
	static int _bind_base_readHeightField_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_readHeightField_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::base_readHeightField(const std::string & arg1, const osgDB::Options * arg2 = NULL) const function, expected prototype:\nosgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::base_readHeightField(const std::string & arg1, const osgDB::Options * arg2 = NULL) const\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		std::string _arg1(lua_tostring(L,2),lua_objlen(L,2));
		const osgDB::Options* _arg2=luatop>2 ? (Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3)) : (const osgDB::Options*)((void *) 0);

		osgDB::ReaderWriter* self=Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::base_readHeightField(const std::string &, const osgDB::Options *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::ReadResult stack_lret = self->ReaderWriter::readHeightField(_arg1, _arg2);
		osgDB::ReaderWriter::ReadResult* lret = new osgDB::ReaderWriter::ReadResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::ReadResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::base_readHeightField(std::istream & arg1, const osgDB::Options * arg2 = NULL) const
	static int _bind_base_readHeightField_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_readHeightField_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::base_readHeightField(std::istream & arg1, const osgDB::Options * arg2 = NULL) const function, expected prototype:\nosgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::base_readHeightField(std::istream & arg1, const osgDB::Options * arg2 = NULL) const\nClass arguments details:\narg 1 ID = 77972206\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		std::istream* _arg1_ptr=(Luna< std::istream >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgDB::ReaderWriter::base_readHeightField function");
		}
		std::istream & _arg1=*_arg1_ptr;
		const osgDB::Options* _arg2=luatop>2 ? (Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3)) : (const osgDB::Options*)((void *) 0);

		osgDB::ReaderWriter* self=Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::base_readHeightField(std::istream &, const osgDB::Options *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::ReadResult stack_lret = self->ReaderWriter::readHeightField(_arg1, _arg2);
		osgDB::ReaderWriter::ReadResult* lret = new osgDB::ReaderWriter::ReadResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::ReadResult >::push(L,lret,true);

		return 1;
	}

	// Overload binder for osgDB::ReaderWriter::base_readHeightField
	static int _bind_base_readHeightField(lua_State *L) {
		if (_lg_typecheck_base_readHeightField_overload_1(L)) return _bind_base_readHeightField_overload_1(L);
		if (_lg_typecheck_base_readHeightField_overload_2(L)) return _bind_base_readHeightField_overload_2(L);

		luaL_error(L, "error in function base_readHeightField, cannot match any of the overloads for function base_readHeightField:\n  base_readHeightField(const std::string &, const osgDB::Options *)\n  base_readHeightField(std::istream &, const osgDB::Options *)\n");
		return 0;
	}

	// osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::base_readNode(const std::string & arg1, const osgDB::Options * arg2 = NULL) const
	static int _bind_base_readNode_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_readNode_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::base_readNode(const std::string & arg1, const osgDB::Options * arg2 = NULL) const function, expected prototype:\nosgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::base_readNode(const std::string & arg1, const osgDB::Options * arg2 = NULL) const\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		std::string _arg1(lua_tostring(L,2),lua_objlen(L,2));
		const osgDB::Options* _arg2=luatop>2 ? (Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3)) : (const osgDB::Options*)((void *) 0);

		osgDB::ReaderWriter* self=Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::base_readNode(const std::string &, const osgDB::Options *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::ReadResult stack_lret = self->ReaderWriter::readNode(_arg1, _arg2);
		osgDB::ReaderWriter::ReadResult* lret = new osgDB::ReaderWriter::ReadResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::ReadResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::base_readNode(std::istream & arg1, const osgDB::Options * arg2 = NULL) const
	static int _bind_base_readNode_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_readNode_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::base_readNode(std::istream & arg1, const osgDB::Options * arg2 = NULL) const function, expected prototype:\nosgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::base_readNode(std::istream & arg1, const osgDB::Options * arg2 = NULL) const\nClass arguments details:\narg 1 ID = 77972206\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		std::istream* _arg1_ptr=(Luna< std::istream >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgDB::ReaderWriter::base_readNode function");
		}
		std::istream & _arg1=*_arg1_ptr;
		const osgDB::Options* _arg2=luatop>2 ? (Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3)) : (const osgDB::Options*)((void *) 0);

		osgDB::ReaderWriter* self=Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::base_readNode(std::istream &, const osgDB::Options *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::ReadResult stack_lret = self->ReaderWriter::readNode(_arg1, _arg2);
		osgDB::ReaderWriter::ReadResult* lret = new osgDB::ReaderWriter::ReadResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::ReadResult >::push(L,lret,true);

		return 1;
	}

	// Overload binder for osgDB::ReaderWriter::base_readNode
	static int _bind_base_readNode(lua_State *L) {
		if (_lg_typecheck_base_readNode_overload_1(L)) return _bind_base_readNode_overload_1(L);
		if (_lg_typecheck_base_readNode_overload_2(L)) return _bind_base_readNode_overload_2(L);

		luaL_error(L, "error in function base_readNode, cannot match any of the overloads for function base_readNode:\n  base_readNode(const std::string &, const osgDB::Options *)\n  base_readNode(std::istream &, const osgDB::Options *)\n");
		return 0;
	}

	// osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::base_readShader(const std::string & arg1, const osgDB::Options * arg2 = NULL) const
	static int _bind_base_readShader_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_readShader_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::base_readShader(const std::string & arg1, const osgDB::Options * arg2 = NULL) const function, expected prototype:\nosgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::base_readShader(const std::string & arg1, const osgDB::Options * arg2 = NULL) const\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		std::string _arg1(lua_tostring(L,2),lua_objlen(L,2));
		const osgDB::Options* _arg2=luatop>2 ? (Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3)) : (const osgDB::Options*)((void *) 0);

		osgDB::ReaderWriter* self=Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::base_readShader(const std::string &, const osgDB::Options *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::ReadResult stack_lret = self->ReaderWriter::readShader(_arg1, _arg2);
		osgDB::ReaderWriter::ReadResult* lret = new osgDB::ReaderWriter::ReadResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::ReadResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::base_readShader(std::istream & arg1, const osgDB::Options * arg2 = NULL) const
	static int _bind_base_readShader_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_readShader_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::base_readShader(std::istream & arg1, const osgDB::Options * arg2 = NULL) const function, expected prototype:\nosgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::base_readShader(std::istream & arg1, const osgDB::Options * arg2 = NULL) const\nClass arguments details:\narg 1 ID = 77972206\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		std::istream* _arg1_ptr=(Luna< std::istream >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgDB::ReaderWriter::base_readShader function");
		}
		std::istream & _arg1=*_arg1_ptr;
		const osgDB::Options* _arg2=luatop>2 ? (Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3)) : (const osgDB::Options*)((void *) 0);

		osgDB::ReaderWriter* self=Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::base_readShader(std::istream &, const osgDB::Options *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::ReadResult stack_lret = self->ReaderWriter::readShader(_arg1, _arg2);
		osgDB::ReaderWriter::ReadResult* lret = new osgDB::ReaderWriter::ReadResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::ReadResult >::push(L,lret,true);

		return 1;
	}

	// Overload binder for osgDB::ReaderWriter::base_readShader
	static int _bind_base_readShader(lua_State *L) {
		if (_lg_typecheck_base_readShader_overload_1(L)) return _bind_base_readShader_overload_1(L);
		if (_lg_typecheck_base_readShader_overload_2(L)) return _bind_base_readShader_overload_2(L);

		luaL_error(L, "error in function base_readShader, cannot match any of the overloads for function base_readShader:\n  base_readShader(const std::string &, const osgDB::Options *)\n  base_readShader(std::istream &, const osgDB::Options *)\n");
		return 0;
	}

	// osgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::base_writeObject(const osg::Object & arg1, const std::string & arg2, const osgDB::Options * arg3 = NULL) const
	static int _bind_base_writeObject_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_writeObject_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::base_writeObject(const osg::Object & arg1, const std::string & arg2, const osgDB::Options * arg3 = NULL) const function, expected prototype:\nosgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::base_writeObject(const osg::Object & arg1, const std::string & arg2, const osgDB::Options * arg3 = NULL) const\nClass arguments details:\narg 1 ID = 50169651\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::Object* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgDB::ReaderWriter::base_writeObject function");
		}
		const osg::Object & _arg1=*_arg1_ptr;
		std::string _arg2(lua_tostring(L,3),lua_objlen(L,3));
		const osgDB::Options* _arg3=luatop>3 ? (Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,4)) : (const osgDB::Options*)((void *) 0);

		osgDB::ReaderWriter* self=Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::base_writeObject(const osg::Object &, const std::string &, const osgDB::Options *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::WriteResult stack_lret = self->ReaderWriter::writeObject(_arg1, _arg2, _arg3);
		osgDB::ReaderWriter::WriteResult* lret = new osgDB::ReaderWriter::WriteResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::WriteResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::base_writeObject(const osg::Object & arg1, std::ostream & arg2, const osgDB::Options * arg3 = NULL) const
	static int _bind_base_writeObject_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_writeObject_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::base_writeObject(const osg::Object & arg1, std::ostream & arg2, const osgDB::Options * arg3 = NULL) const function, expected prototype:\nosgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::base_writeObject(const osg::Object & arg1, std::ostream & arg2, const osgDB::Options * arg3 = NULL) const\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 2993706\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::Object* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgDB::ReaderWriter::base_writeObject function");
		}
		const osg::Object & _arg1=*_arg1_ptr;
		std::ostream* _arg2_ptr=(Luna< std::ostream >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osgDB::ReaderWriter::base_writeObject function");
		}
		std::ostream & _arg2=*_arg2_ptr;
		const osgDB::Options* _arg3=luatop>3 ? (Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,4)) : (const osgDB::Options*)((void *) 0);

		osgDB::ReaderWriter* self=Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::base_writeObject(const osg::Object &, std::ostream &, const osgDB::Options *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::WriteResult stack_lret = self->ReaderWriter::writeObject(_arg1, _arg2, _arg3);
		osgDB::ReaderWriter::WriteResult* lret = new osgDB::ReaderWriter::WriteResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::WriteResult >::push(L,lret,true);

		return 1;
	}

	// Overload binder for osgDB::ReaderWriter::base_writeObject
	static int _bind_base_writeObject(lua_State *L) {
		if (_lg_typecheck_base_writeObject_overload_1(L)) return _bind_base_writeObject_overload_1(L);
		if (_lg_typecheck_base_writeObject_overload_2(L)) return _bind_base_writeObject_overload_2(L);

		luaL_error(L, "error in function base_writeObject, cannot match any of the overloads for function base_writeObject:\n  base_writeObject(const osg::Object &, const std::string &, const osgDB::Options *)\n  base_writeObject(const osg::Object &, std::ostream &, const osgDB::Options *)\n");
		return 0;
	}

	// osgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::base_writeImage(const osg::Image & arg1, const std::string & arg2, const osgDB::Options * arg3 = NULL) const
	static int _bind_base_writeImage_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_writeImage_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::base_writeImage(const osg::Image & arg1, const std::string & arg2, const osgDB::Options * arg3 = NULL) const function, expected prototype:\nosgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::base_writeImage(const osg::Image & arg1, const std::string & arg2, const osgDB::Options * arg3 = NULL) const\nClass arguments details:\narg 1 ID = 50169651\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::Image* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::Image >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgDB::ReaderWriter::base_writeImage function");
		}
		const osg::Image & _arg1=*_arg1_ptr;
		std::string _arg2(lua_tostring(L,3),lua_objlen(L,3));
		const osgDB::Options* _arg3=luatop>3 ? (Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,4)) : (const osgDB::Options*)((void *) 0);

		osgDB::ReaderWriter* self=Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::base_writeImage(const osg::Image &, const std::string &, const osgDB::Options *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::WriteResult stack_lret = self->ReaderWriter::writeImage(_arg1, _arg2, _arg3);
		osgDB::ReaderWriter::WriteResult* lret = new osgDB::ReaderWriter::WriteResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::WriteResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::base_writeImage(const osg::Image & arg1, std::ostream & arg2, const osgDB::Options * arg3 = NULL) const
	static int _bind_base_writeImage_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_writeImage_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::base_writeImage(const osg::Image & arg1, std::ostream & arg2, const osgDB::Options * arg3 = NULL) const function, expected prototype:\nosgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::base_writeImage(const osg::Image & arg1, std::ostream & arg2, const osgDB::Options * arg3 = NULL) const\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 2993706\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::Image* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::Image >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgDB::ReaderWriter::base_writeImage function");
		}
		const osg::Image & _arg1=*_arg1_ptr;
		std::ostream* _arg2_ptr=(Luna< std::ostream >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osgDB::ReaderWriter::base_writeImage function");
		}
		std::ostream & _arg2=*_arg2_ptr;
		const osgDB::Options* _arg3=luatop>3 ? (Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,4)) : (const osgDB::Options*)((void *) 0);

		osgDB::ReaderWriter* self=Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::base_writeImage(const osg::Image &, std::ostream &, const osgDB::Options *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::WriteResult stack_lret = self->ReaderWriter::writeImage(_arg1, _arg2, _arg3);
		osgDB::ReaderWriter::WriteResult* lret = new osgDB::ReaderWriter::WriteResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::WriteResult >::push(L,lret,true);

		return 1;
	}

	// Overload binder for osgDB::ReaderWriter::base_writeImage
	static int _bind_base_writeImage(lua_State *L) {
		if (_lg_typecheck_base_writeImage_overload_1(L)) return _bind_base_writeImage_overload_1(L);
		if (_lg_typecheck_base_writeImage_overload_2(L)) return _bind_base_writeImage_overload_2(L);

		luaL_error(L, "error in function base_writeImage, cannot match any of the overloads for function base_writeImage:\n  base_writeImage(const osg::Image &, const std::string &, const osgDB::Options *)\n  base_writeImage(const osg::Image &, std::ostream &, const osgDB::Options *)\n");
		return 0;
	}

	// osgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::base_writeHeightField(const osg::HeightField & arg1, const std::string & arg2, const osgDB::Options * arg3 = NULL) const
	static int _bind_base_writeHeightField_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_writeHeightField_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::base_writeHeightField(const osg::HeightField & arg1, const std::string & arg2, const osgDB::Options * arg3 = NULL) const function, expected prototype:\nosgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::base_writeHeightField(const osg::HeightField & arg1, const std::string & arg2, const osgDB::Options * arg3 = NULL) const\nClass arguments details:\narg 1 ID = 50169651\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::HeightField* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::HeightField >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgDB::ReaderWriter::base_writeHeightField function");
		}
		const osg::HeightField & _arg1=*_arg1_ptr;
		std::string _arg2(lua_tostring(L,3),lua_objlen(L,3));
		const osgDB::Options* _arg3=luatop>3 ? (Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,4)) : (const osgDB::Options*)((void *) 0);

		osgDB::ReaderWriter* self=Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::base_writeHeightField(const osg::HeightField &, const std::string &, const osgDB::Options *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::WriteResult stack_lret = self->ReaderWriter::writeHeightField(_arg1, _arg2, _arg3);
		osgDB::ReaderWriter::WriteResult* lret = new osgDB::ReaderWriter::WriteResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::WriteResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::base_writeHeightField(const osg::HeightField & arg1, std::ostream & arg2, const osgDB::Options * arg3 = NULL) const
	static int _bind_base_writeHeightField_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_writeHeightField_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::base_writeHeightField(const osg::HeightField & arg1, std::ostream & arg2, const osgDB::Options * arg3 = NULL) const function, expected prototype:\nosgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::base_writeHeightField(const osg::HeightField & arg1, std::ostream & arg2, const osgDB::Options * arg3 = NULL) const\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 2993706\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::HeightField* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::HeightField >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgDB::ReaderWriter::base_writeHeightField function");
		}
		const osg::HeightField & _arg1=*_arg1_ptr;
		std::ostream* _arg2_ptr=(Luna< std::ostream >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osgDB::ReaderWriter::base_writeHeightField function");
		}
		std::ostream & _arg2=*_arg2_ptr;
		const osgDB::Options* _arg3=luatop>3 ? (Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,4)) : (const osgDB::Options*)((void *) 0);

		osgDB::ReaderWriter* self=Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::base_writeHeightField(const osg::HeightField &, std::ostream &, const osgDB::Options *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::WriteResult stack_lret = self->ReaderWriter::writeHeightField(_arg1, _arg2, _arg3);
		osgDB::ReaderWriter::WriteResult* lret = new osgDB::ReaderWriter::WriteResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::WriteResult >::push(L,lret,true);

		return 1;
	}

	// Overload binder for osgDB::ReaderWriter::base_writeHeightField
	static int _bind_base_writeHeightField(lua_State *L) {
		if (_lg_typecheck_base_writeHeightField_overload_1(L)) return _bind_base_writeHeightField_overload_1(L);
		if (_lg_typecheck_base_writeHeightField_overload_2(L)) return _bind_base_writeHeightField_overload_2(L);

		luaL_error(L, "error in function base_writeHeightField, cannot match any of the overloads for function base_writeHeightField:\n  base_writeHeightField(const osg::HeightField &, const std::string &, const osgDB::Options *)\n  base_writeHeightField(const osg::HeightField &, std::ostream &, const osgDB::Options *)\n");
		return 0;
	}

	// osgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::base_writeNode(const osg::Node & arg1, const std::string & arg2, const osgDB::Options * arg3 = NULL) const
	static int _bind_base_writeNode_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_writeNode_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::base_writeNode(const osg::Node & arg1, const std::string & arg2, const osgDB::Options * arg3 = NULL) const function, expected prototype:\nosgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::base_writeNode(const osg::Node & arg1, const std::string & arg2, const osgDB::Options * arg3 = NULL) const\nClass arguments details:\narg 1 ID = 50169651\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::Node* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgDB::ReaderWriter::base_writeNode function");
		}
		const osg::Node & _arg1=*_arg1_ptr;
		std::string _arg2(lua_tostring(L,3),lua_objlen(L,3));
		const osgDB::Options* _arg3=luatop>3 ? (Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,4)) : (const osgDB::Options*)((void *) 0);

		osgDB::ReaderWriter* self=Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::base_writeNode(const osg::Node &, const std::string &, const osgDB::Options *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::WriteResult stack_lret = self->ReaderWriter::writeNode(_arg1, _arg2, _arg3);
		osgDB::ReaderWriter::WriteResult* lret = new osgDB::ReaderWriter::WriteResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::WriteResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::base_writeNode(const osg::Node & arg1, std::ostream & arg2, const osgDB::Options * arg3 = NULL) const
	static int _bind_base_writeNode_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_writeNode_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::base_writeNode(const osg::Node & arg1, std::ostream & arg2, const osgDB::Options * arg3 = NULL) const function, expected prototype:\nosgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::base_writeNode(const osg::Node & arg1, std::ostream & arg2, const osgDB::Options * arg3 = NULL) const\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 2993706\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::Node* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgDB::ReaderWriter::base_writeNode function");
		}
		const osg::Node & _arg1=*_arg1_ptr;
		std::ostream* _arg2_ptr=(Luna< std::ostream >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osgDB::ReaderWriter::base_writeNode function");
		}
		std::ostream & _arg2=*_arg2_ptr;
		const osgDB::Options* _arg3=luatop>3 ? (Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,4)) : (const osgDB::Options*)((void *) 0);

		osgDB::ReaderWriter* self=Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::base_writeNode(const osg::Node &, std::ostream &, const osgDB::Options *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::WriteResult stack_lret = self->ReaderWriter::writeNode(_arg1, _arg2, _arg3);
		osgDB::ReaderWriter::WriteResult* lret = new osgDB::ReaderWriter::WriteResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::WriteResult >::push(L,lret,true);

		return 1;
	}

	// Overload binder for osgDB::ReaderWriter::base_writeNode
	static int _bind_base_writeNode(lua_State *L) {
		if (_lg_typecheck_base_writeNode_overload_1(L)) return _bind_base_writeNode_overload_1(L);
		if (_lg_typecheck_base_writeNode_overload_2(L)) return _bind_base_writeNode_overload_2(L);

		luaL_error(L, "error in function base_writeNode, cannot match any of the overloads for function base_writeNode:\n  base_writeNode(const osg::Node &, const std::string &, const osgDB::Options *)\n  base_writeNode(const osg::Node &, std::ostream &, const osgDB::Options *)\n");
		return 0;
	}

	// osgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::base_writeShader(const osg::Shader & arg1, const std::string & arg2, const osgDB::Options * arg3 = NULL) const
	static int _bind_base_writeShader_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_writeShader_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::base_writeShader(const osg::Shader & arg1, const std::string & arg2, const osgDB::Options * arg3 = NULL) const function, expected prototype:\nosgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::base_writeShader(const osg::Shader & arg1, const std::string & arg2, const osgDB::Options * arg3 = NULL) const\nClass arguments details:\narg 1 ID = 50169651\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::Shader* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::Shader >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgDB::ReaderWriter::base_writeShader function");
		}
		const osg::Shader & _arg1=*_arg1_ptr;
		std::string _arg2(lua_tostring(L,3),lua_objlen(L,3));
		const osgDB::Options* _arg3=luatop>3 ? (Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,4)) : (const osgDB::Options*)((void *) 0);

		osgDB::ReaderWriter* self=Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::base_writeShader(const osg::Shader &, const std::string &, const osgDB::Options *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::WriteResult stack_lret = self->ReaderWriter::writeShader(_arg1, _arg2, _arg3);
		osgDB::ReaderWriter::WriteResult* lret = new osgDB::ReaderWriter::WriteResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::WriteResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::base_writeShader(const osg::Shader & arg1, std::ostream & arg2, const osgDB::Options * arg3 = NULL) const
	static int _bind_base_writeShader_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_writeShader_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::base_writeShader(const osg::Shader & arg1, std::ostream & arg2, const osgDB::Options * arg3 = NULL) const function, expected prototype:\nosgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::base_writeShader(const osg::Shader & arg1, std::ostream & arg2, const osgDB::Options * arg3 = NULL) const\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 2993706\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::Shader* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::Shader >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgDB::ReaderWriter::base_writeShader function");
		}
		const osg::Shader & _arg1=*_arg1_ptr;
		std::ostream* _arg2_ptr=(Luna< std::ostream >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osgDB::ReaderWriter::base_writeShader function");
		}
		std::ostream & _arg2=*_arg2_ptr;
		const osgDB::Options* _arg3=luatop>3 ? (Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,4)) : (const osgDB::Options*)((void *) 0);

		osgDB::ReaderWriter* self=Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::base_writeShader(const osg::Shader &, std::ostream &, const osgDB::Options *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::WriteResult stack_lret = self->ReaderWriter::writeShader(_arg1, _arg2, _arg3);
		osgDB::ReaderWriter::WriteResult* lret = new osgDB::ReaderWriter::WriteResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::WriteResult >::push(L,lret,true);

		return 1;
	}

	// Overload binder for osgDB::ReaderWriter::base_writeShader
	static int _bind_base_writeShader(lua_State *L) {
		if (_lg_typecheck_base_writeShader_overload_1(L)) return _bind_base_writeShader_overload_1(L);
		if (_lg_typecheck_base_writeShader_overload_2(L)) return _bind_base_writeShader_overload_2(L);

		luaL_error(L, "error in function base_writeShader, cannot match any of the overloads for function base_writeShader:\n  base_writeShader(const osg::Shader &, const std::string &, const osgDB::Options *)\n  base_writeShader(const osg::Shader &, std::ostream &, const osgDB::Options *)\n");
		return 0;
	}


	// Operator binds:

};

osgDB::ReaderWriter* LunaTraits< osgDB::ReaderWriter >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgDB_ReaderWriter::_bind_ctor(L);
}

void LunaTraits< osgDB::ReaderWriter >::_bind_dtor(osgDB::ReaderWriter* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgDB::ReaderWriter >::className[] = "ReaderWriter";
const char LunaTraits< osgDB::ReaderWriter >::fullName[] = "osgDB::ReaderWriter";
const char LunaTraits< osgDB::ReaderWriter >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::ReaderWriter >::parents[] = {"osg.Object", 0};
const int LunaTraits< osgDB::ReaderWriter >::hash = 29019984;
const int LunaTraits< osgDB::ReaderWriter >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgDB::ReaderWriter >::methods[] = {
	{"cloneType", &luna_wrapper_osgDB_ReaderWriter::_bind_cloneType},
	{"clone", &luna_wrapper_osgDB_ReaderWriter::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osgDB_ReaderWriter::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osgDB_ReaderWriter::_bind_libraryName},
	{"className", &luna_wrapper_osgDB_ReaderWriter::_bind_className},
	{"supportedProtocols", &luna_wrapper_osgDB_ReaderWriter::_bind_supportedProtocols},
	{"supportedExtensions", &luna_wrapper_osgDB_ReaderWriter::_bind_supportedExtensions},
	{"supportedOptions", &luna_wrapper_osgDB_ReaderWriter::_bind_supportedOptions},
	{"acceptsExtension", &luna_wrapper_osgDB_ReaderWriter::_bind_acceptsExtension},
	{"acceptsProtocol", &luna_wrapper_osgDB_ReaderWriter::_bind_acceptsProtocol},
	{"supportedFeatures", &luna_wrapper_osgDB_ReaderWriter::_bind_supportedFeatures},
	{"fileExists", &luna_wrapper_osgDB_ReaderWriter::_bind_fileExists},
	{"openArchive", &luna_wrapper_osgDB_ReaderWriter::_bind_openArchive},
	{"readObject", &luna_wrapper_osgDB_ReaderWriter::_bind_readObject},
	{"readImage", &luna_wrapper_osgDB_ReaderWriter::_bind_readImage},
	{"readHeightField", &luna_wrapper_osgDB_ReaderWriter::_bind_readHeightField},
	{"readNode", &luna_wrapper_osgDB_ReaderWriter::_bind_readNode},
	{"readShader", &luna_wrapper_osgDB_ReaderWriter::_bind_readShader},
	{"writeObject", &luna_wrapper_osgDB_ReaderWriter::_bind_writeObject},
	{"writeImage", &luna_wrapper_osgDB_ReaderWriter::_bind_writeImage},
	{"writeHeightField", &luna_wrapper_osgDB_ReaderWriter::_bind_writeHeightField},
	{"writeNode", &luna_wrapper_osgDB_ReaderWriter::_bind_writeNode},
	{"writeShader", &luna_wrapper_osgDB_ReaderWriter::_bind_writeShader},
	{"supportsProtocol", &luna_wrapper_osgDB_ReaderWriter::_bind_supportsProtocol},
	{"supportsExtension", &luna_wrapper_osgDB_ReaderWriter::_bind_supportsExtension},
	{"supportsOption", &luna_wrapper_osgDB_ReaderWriter::_bind_supportsOption},
	{"featureAsString", &luna_wrapper_osgDB_ReaderWriter::_bind_featureAsString},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgDB_ReaderWriter::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osgDB_ReaderWriter::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osgDB_ReaderWriter::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osgDB_ReaderWriter::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osgDB_ReaderWriter::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osgDB_ReaderWriter::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osgDB_ReaderWriter::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osgDB_ReaderWriter::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osgDB_ReaderWriter::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osgDB_ReaderWriter::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osgDB_ReaderWriter::_bind_base_className},
	{"base_supportedProtocols", &luna_wrapper_osgDB_ReaderWriter::_bind_base_supportedProtocols},
	{"base_supportedExtensions", &luna_wrapper_osgDB_ReaderWriter::_bind_base_supportedExtensions},
	{"base_supportedOptions", &luna_wrapper_osgDB_ReaderWriter::_bind_base_supportedOptions},
	{"base_acceptsExtension", &luna_wrapper_osgDB_ReaderWriter::_bind_base_acceptsExtension},
	{"base_acceptsProtocol", &luna_wrapper_osgDB_ReaderWriter::_bind_base_acceptsProtocol},
	{"base_supportedFeatures", &luna_wrapper_osgDB_ReaderWriter::_bind_base_supportedFeatures},
	{"base_fileExists", &luna_wrapper_osgDB_ReaderWriter::_bind_base_fileExists},
	{"base_openArchive", &luna_wrapper_osgDB_ReaderWriter::_bind_base_openArchive},
	{"base_readObject", &luna_wrapper_osgDB_ReaderWriter::_bind_base_readObject},
	{"base_readImage", &luna_wrapper_osgDB_ReaderWriter::_bind_base_readImage},
	{"base_readHeightField", &luna_wrapper_osgDB_ReaderWriter::_bind_base_readHeightField},
	{"base_readNode", &luna_wrapper_osgDB_ReaderWriter::_bind_base_readNode},
	{"base_readShader", &luna_wrapper_osgDB_ReaderWriter::_bind_base_readShader},
	{"base_writeObject", &luna_wrapper_osgDB_ReaderWriter::_bind_base_writeObject},
	{"base_writeImage", &luna_wrapper_osgDB_ReaderWriter::_bind_base_writeImage},
	{"base_writeHeightField", &luna_wrapper_osgDB_ReaderWriter::_bind_base_writeHeightField},
	{"base_writeNode", &luna_wrapper_osgDB_ReaderWriter::_bind_base_writeNode},
	{"base_writeShader", &luna_wrapper_osgDB_ReaderWriter::_bind_base_writeShader},
	{"fromVoid", &luna_wrapper_osgDB_ReaderWriter::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgDB_ReaderWriter::_bind_asVoid},
	{"getTable", &luna_wrapper_osgDB_ReaderWriter::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::ReaderWriter >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgDB_ReaderWriter::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::ReaderWriter >::enumValues[] = {
	{"FEATURE_NONE", osgDB::ReaderWriter::FEATURE_NONE},
	{"FEATURE_READ_OBJECT", osgDB::ReaderWriter::FEATURE_READ_OBJECT},
	{"FEATURE_READ_IMAGE", osgDB::ReaderWriter::FEATURE_READ_IMAGE},
	{"FEATURE_READ_HEIGHT_FIELD", osgDB::ReaderWriter::FEATURE_READ_HEIGHT_FIELD},
	{"FEATURE_READ_NODE", osgDB::ReaderWriter::FEATURE_READ_NODE},
	{"FEATURE_READ_SHADER", osgDB::ReaderWriter::FEATURE_READ_SHADER},
	{"FEATURE_WRITE_OBJECT", osgDB::ReaderWriter::FEATURE_WRITE_OBJECT},
	{"FEATURE_WRITE_IMAGE", osgDB::ReaderWriter::FEATURE_WRITE_IMAGE},
	{"FEATURE_WRITE_HEIGHT_FIELD", osgDB::ReaderWriter::FEATURE_WRITE_HEIGHT_FIELD},
	{"FEATURE_WRITE_NODE", osgDB::ReaderWriter::FEATURE_WRITE_NODE},
	{"FEATURE_WRITE_SHADER", osgDB::ReaderWriter::FEATURE_WRITE_SHADER},
	{"FEATURE_ALL", osgDB::ReaderWriter::FEATURE_ALL},
	{"READ", osgDB::ReaderWriter::READ},
	{"WRITE", osgDB::ReaderWriter::WRITE},
	{"CREATE", osgDB::ReaderWriter::CREATE},
	{0,0}
};



#include <plug_common.h>

#include <luna/wrappers/wrapper_osgDB_Registry.h>

class luna_wrapper_osgDB_Registry {
public:
	typedef Luna< osgDB::Registry > luna_t;

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

		osgDB::Registry* self= (osgDB::Registry*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgDB::Registry >::push(L,self,false);
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
		//osgDB::Registry* ptr= dynamic_cast< osgDB::Registry* >(Luna< osg::Referenced >::check(L,1));
		osgDB::Registry* ptr= luna_caster< osg::Referenced, osgDB::Registry >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgDB::Registry >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_instance(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && lua_isboolean(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readCommandLine(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,99527028) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addFileExtensionAlias(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readPluginAliasConfigurationFile(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addMimeTypeExtensionMapping(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMimeTypeExtensionMap_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMimeTypeExtensionMap_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_addReaderWriter(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeReaderWriter(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addImageProcessor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeImageProcessor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_createLibraryNameForFile(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_createLibraryNameForExtension(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_createLibraryNameForNodeKit(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_loadLibrary(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_closeLibrary(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_closeAllLibraries(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getReaderWriterForExtension(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getReaderWriterForMimeType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getReaderWriterList_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getReaderWriterList_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getReaderWriterListForProtocol(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,3,16674959) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getReaderWriterForProtocolAndExtension(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getImageProcessor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getImageProcessorForExtension(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getImageProcessorList_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getImageProcessorList_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setFindFileCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFindFileCallback_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFindFileCallback_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_findDataFile(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_findDataFileImplementation(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_findLibraryFile(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_findLibraryFileImplementation(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setReadFileCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getReadFileCallback_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getReadFileCallback_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_openArchive(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_openArchiveImplementation(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readObject(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readObjectImplementation(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readImage(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readImageImplementation(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readHeightField(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readHeightFieldImplementation(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readNode(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readNodeImplementation(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readShader(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readShaderImplementation(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setWriteFileCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getWriteFileCallback_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getWriteFileCallback_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_writeObject(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeObjectImplementation(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeImage(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeImageImplementation(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeHeightField(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeHeightFieldImplementation(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeNode(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeNodeImplementation(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeShader(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeShaderImplementation(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck__buildKdTreeIfRequired(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25279089) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFileLocationCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFileLocationCallback(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setBuildKdTreesHint(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getBuildKdTreesHint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setKdTreeBuilder(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getKdTreeBuilder(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setFileCache(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFileCache_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFileCache_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAuthenticationMap_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAuthenticationMap_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCreateNodeFromImage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCreateNodeFromImage(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setOptions(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getOptions_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getOptions_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_initFilePathLists(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_initDataFilePathList(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDataFilePathList_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,79889541) ) return false;
		if( (!(Luna< std::deque< std::string > >::checkSubType< osgDB::FilePathList >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDataFilePathList_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDataFilePathList_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDataFilePathList_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_initLibraryFilePathList(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setLibraryFilePathList_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,79889541) ) return false;
		if( (!(Luna< std::deque< std::string > >::checkSubType< osgDB::FilePathList >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLibraryFilePathList_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getLibraryFilePathList_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLibraryFilePathList_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_updateTimeStampOfObjectsInCacheWithExternalReferences(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeExpiredObjectsInCache(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setExpiryDelay(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getExpiryDelay(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_clearObjectCache(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_addEntryToObjectCache(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeFromObjectCache(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFromObjectCache(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRefFromObjectCache(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addToArchiveCache(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeFromArchiveCache(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFromArchiveCache(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRefFromArchiveCache(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_clearArchiveCache(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_releaseGLObjects(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getLibrary(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSharedStateManager(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getOrCreateSharedStateManager(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSharedStateManager(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_addArchiveExtension(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_registerProtocol(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isProtocolRegistered(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getObjectWrapperManager(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getArchiveExtensions(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// static osgDB::Registry * osgDB::Registry::instance(bool erase = false)
	static int _bind_instance(lua_State *L) {
		if (!_lg_typecheck_instance(L)) {
			luaL_error(L, "luna typecheck failed in static osgDB::Registry * osgDB::Registry::instance(bool erase = false) function, expected prototype:\nstatic osgDB::Registry * osgDB::Registry::instance(bool erase = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool erase=luatop>0 ? (bool)(lua_toboolean(L,1)==1) : (bool)false;

		osgDB::Registry * lret = osgDB::Registry::instance(erase);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::Registry >::push(L,lret,false);

		return 1;
	}

	// void osgDB::Registry::readCommandLine(osg::ArgumentParser & commandLine)
	static int _bind_readCommandLine(lua_State *L) {
		if (!_lg_typecheck_readCommandLine(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::Registry::readCommandLine(osg::ArgumentParser & commandLine) function, expected prototype:\nvoid osgDB::Registry::readCommandLine(osg::ArgumentParser & commandLine)\nClass arguments details:\narg 1 ID = 99527028\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ArgumentParser* commandLine_ptr=(Luna< osg::ArgumentParser >::check(L,2));
		if( !commandLine_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg commandLine in osgDB::Registry::readCommandLine function");
		}
		osg::ArgumentParser & commandLine=*commandLine_ptr;

		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::Registry::readCommandLine(osg::ArgumentParser &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->readCommandLine(commandLine);

		return 0;
	}

	// void osgDB::Registry::addFileExtensionAlias(const std::string mapExt, const std::string toExt)
	static int _bind_addFileExtensionAlias(lua_State *L) {
		if (!_lg_typecheck_addFileExtensionAlias(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::Registry::addFileExtensionAlias(const std::string mapExt, const std::string toExt) function, expected prototype:\nvoid osgDB::Registry::addFileExtensionAlias(const std::string mapExt, const std::string toExt)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string mapExt(lua_tostring(L,2),lua_objlen(L,2));
		std::string toExt(lua_tostring(L,3),lua_objlen(L,3));

		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::Registry::addFileExtensionAlias(const std::string, const std::string). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addFileExtensionAlias(mapExt, toExt);

		return 0;
	}

	// bool osgDB::Registry::readPluginAliasConfigurationFile(const std::string & file)
	static int _bind_readPluginAliasConfigurationFile(lua_State *L) {
		if (!_lg_typecheck_readPluginAliasConfigurationFile(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::Registry::readPluginAliasConfigurationFile(const std::string & file) function, expected prototype:\nbool osgDB::Registry::readPluginAliasConfigurationFile(const std::string & file)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string file(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::Registry::readPluginAliasConfigurationFile(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->readPluginAliasConfigurationFile(file);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgDB::Registry::addMimeTypeExtensionMapping(const std::string fromMimeType, const std::string toExt)
	static int _bind_addMimeTypeExtensionMapping(lua_State *L) {
		if (!_lg_typecheck_addMimeTypeExtensionMapping(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::Registry::addMimeTypeExtensionMapping(const std::string fromMimeType, const std::string toExt) function, expected prototype:\nvoid osgDB::Registry::addMimeTypeExtensionMapping(const std::string fromMimeType, const std::string toExt)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string fromMimeType(lua_tostring(L,2),lua_objlen(L,2));
		std::string toExt(lua_tostring(L,3),lua_objlen(L,3));

		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::Registry::addMimeTypeExtensionMapping(const std::string, const std::string). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addMimeTypeExtensionMapping(fromMimeType, toExt);

		return 0;
	}

	// osgDB::Registry::MimeTypeExtensionMap & osgDB::Registry::getMimeTypeExtensionMap()
	static int _bind_getMimeTypeExtensionMap_overload_1(lua_State *L) {
		if (!_lg_typecheck_getMimeTypeExtensionMap_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::Registry::MimeTypeExtensionMap & osgDB::Registry::getMimeTypeExtensionMap() function, expected prototype:\nosgDB::Registry::MimeTypeExtensionMap & osgDB::Registry::getMimeTypeExtensionMap()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::Registry::MimeTypeExtensionMap & osgDB::Registry::getMimeTypeExtensionMap(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::Registry::MimeTypeExtensionMap* lret = &self->getMimeTypeExtensionMap();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::Registry::MimeTypeExtensionMap >::push(L,lret,false);

		return 1;
	}

	// const osgDB::Registry::MimeTypeExtensionMap & osgDB::Registry::getMimeTypeExtensionMap() const
	static int _bind_getMimeTypeExtensionMap_overload_2(lua_State *L) {
		if (!_lg_typecheck_getMimeTypeExtensionMap_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osgDB::Registry::MimeTypeExtensionMap & osgDB::Registry::getMimeTypeExtensionMap() const function, expected prototype:\nconst osgDB::Registry::MimeTypeExtensionMap & osgDB::Registry::getMimeTypeExtensionMap() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgDB::Registry::MimeTypeExtensionMap & osgDB::Registry::getMimeTypeExtensionMap() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::Registry::MimeTypeExtensionMap* lret = &self->getMimeTypeExtensionMap();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::Registry::MimeTypeExtensionMap >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgDB::Registry::getMimeTypeExtensionMap
	static int _bind_getMimeTypeExtensionMap(lua_State *L) {
		if (_lg_typecheck_getMimeTypeExtensionMap_overload_1(L)) return _bind_getMimeTypeExtensionMap_overload_1(L);
		if (_lg_typecheck_getMimeTypeExtensionMap_overload_2(L)) return _bind_getMimeTypeExtensionMap_overload_2(L);

		luaL_error(L, "error in function getMimeTypeExtensionMap, cannot match any of the overloads for function getMimeTypeExtensionMap:\n  getMimeTypeExtensionMap()\n  getMimeTypeExtensionMap()\n");
		return 0;
	}

	// void osgDB::Registry::addReaderWriter(osgDB::ReaderWriter * rw)
	static int _bind_addReaderWriter(lua_State *L) {
		if (!_lg_typecheck_addReaderWriter(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::Registry::addReaderWriter(osgDB::ReaderWriter * rw) function, expected prototype:\nvoid osgDB::Registry::addReaderWriter(osgDB::ReaderWriter * rw)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::ReaderWriter* rw=(Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriter >(L,2));

		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::Registry::addReaderWriter(osgDB::ReaderWriter *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addReaderWriter(rw);

		return 0;
	}

	// void osgDB::Registry::removeReaderWriter(osgDB::ReaderWriter * rw)
	static int _bind_removeReaderWriter(lua_State *L) {
		if (!_lg_typecheck_removeReaderWriter(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::Registry::removeReaderWriter(osgDB::ReaderWriter * rw) function, expected prototype:\nvoid osgDB::Registry::removeReaderWriter(osgDB::ReaderWriter * rw)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::ReaderWriter* rw=(Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriter >(L,2));

		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::Registry::removeReaderWriter(osgDB::ReaderWriter *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->removeReaderWriter(rw);

		return 0;
	}

	// void osgDB::Registry::addImageProcessor(osgDB::ImageProcessor * ip)
	static int _bind_addImageProcessor(lua_State *L) {
		if (!_lg_typecheck_addImageProcessor(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::Registry::addImageProcessor(osgDB::ImageProcessor * ip) function, expected prototype:\nvoid osgDB::Registry::addImageProcessor(osgDB::ImageProcessor * ip)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::ImageProcessor* ip=(Luna< osg::Referenced >::checkSubType< osgDB::ImageProcessor >(L,2));

		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::Registry::addImageProcessor(osgDB::ImageProcessor *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addImageProcessor(ip);

		return 0;
	}

	// void osgDB::Registry::removeImageProcessor(osgDB::ImageProcessor * ip)
	static int _bind_removeImageProcessor(lua_State *L) {
		if (!_lg_typecheck_removeImageProcessor(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::Registry::removeImageProcessor(osgDB::ImageProcessor * ip) function, expected prototype:\nvoid osgDB::Registry::removeImageProcessor(osgDB::ImageProcessor * ip)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::ImageProcessor* ip=(Luna< osg::Referenced >::checkSubType< osgDB::ImageProcessor >(L,2));

		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::Registry::removeImageProcessor(osgDB::ImageProcessor *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->removeImageProcessor(ip);

		return 0;
	}

	// std::string osgDB::Registry::createLibraryNameForFile(const std::string & fileName)
	static int _bind_createLibraryNameForFile(lua_State *L) {
		if (!_lg_typecheck_createLibraryNameForFile(L)) {
			luaL_error(L, "luna typecheck failed in std::string osgDB::Registry::createLibraryNameForFile(const std::string & fileName) function, expected prototype:\nstd::string osgDB::Registry::createLibraryNameForFile(const std::string & fileName)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string fileName(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call std::string osgDB::Registry::createLibraryNameForFile(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		std::string lret = self->createLibraryNameForFile(fileName);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// std::string osgDB::Registry::createLibraryNameForExtension(const std::string & ext)
	static int _bind_createLibraryNameForExtension(lua_State *L) {
		if (!_lg_typecheck_createLibraryNameForExtension(L)) {
			luaL_error(L, "luna typecheck failed in std::string osgDB::Registry::createLibraryNameForExtension(const std::string & ext) function, expected prototype:\nstd::string osgDB::Registry::createLibraryNameForExtension(const std::string & ext)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string ext(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call std::string osgDB::Registry::createLibraryNameForExtension(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		std::string lret = self->createLibraryNameForExtension(ext);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// std::string osgDB::Registry::createLibraryNameForNodeKit(const std::string & name)
	static int _bind_createLibraryNameForNodeKit(lua_State *L) {
		if (!_lg_typecheck_createLibraryNameForNodeKit(L)) {
			luaL_error(L, "luna typecheck failed in std::string osgDB::Registry::createLibraryNameForNodeKit(const std::string & name) function, expected prototype:\nstd::string osgDB::Registry::createLibraryNameForNodeKit(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call std::string osgDB::Registry::createLibraryNameForNodeKit(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		std::string lret = self->createLibraryNameForNodeKit(name);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// osgDB::Registry::LoadStatus osgDB::Registry::loadLibrary(const std::string & fileName)
	static int _bind_loadLibrary(lua_State *L) {
		if (!_lg_typecheck_loadLibrary(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::Registry::LoadStatus osgDB::Registry::loadLibrary(const std::string & fileName) function, expected prototype:\nosgDB::Registry::LoadStatus osgDB::Registry::loadLibrary(const std::string & fileName)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string fileName(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::Registry::LoadStatus osgDB::Registry::loadLibrary(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::Registry::LoadStatus lret = self->loadLibrary(fileName);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osgDB::Registry::closeLibrary(const std::string & fileName)
	static int _bind_closeLibrary(lua_State *L) {
		if (!_lg_typecheck_closeLibrary(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::Registry::closeLibrary(const std::string & fileName) function, expected prototype:\nbool osgDB::Registry::closeLibrary(const std::string & fileName)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string fileName(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::Registry::closeLibrary(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->closeLibrary(fileName);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgDB::Registry::closeAllLibraries()
	static int _bind_closeAllLibraries(lua_State *L) {
		if (!_lg_typecheck_closeAllLibraries(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::Registry::closeAllLibraries() function, expected prototype:\nvoid osgDB::Registry::closeAllLibraries()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::Registry::closeAllLibraries(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->closeAllLibraries();

		return 0;
	}

	// osgDB::ReaderWriter * osgDB::Registry::getReaderWriterForExtension(const std::string & ext)
	static int _bind_getReaderWriterForExtension(lua_State *L) {
		if (!_lg_typecheck_getReaderWriterForExtension(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter * osgDB::Registry::getReaderWriterForExtension(const std::string & ext) function, expected prototype:\nosgDB::ReaderWriter * osgDB::Registry::getReaderWriterForExtension(const std::string & ext)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string ext(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter * osgDB::Registry::getReaderWriterForExtension(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter * lret = self->getReaderWriterForExtension(ext);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter >::push(L,lret,false);

		return 1;
	}

	// osgDB::ReaderWriter * osgDB::Registry::getReaderWriterForMimeType(const std::string & mimeType)
	static int _bind_getReaderWriterForMimeType(lua_State *L) {
		if (!_lg_typecheck_getReaderWriterForMimeType(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter * osgDB::Registry::getReaderWriterForMimeType(const std::string & mimeType) function, expected prototype:\nosgDB::ReaderWriter * osgDB::Registry::getReaderWriterForMimeType(const std::string & mimeType)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string mimeType(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter * osgDB::Registry::getReaderWriterForMimeType(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter * lret = self->getReaderWriterForMimeType(mimeType);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter >::push(L,lret,false);

		return 1;
	}

	// osgDB::Registry::ReaderWriterList & osgDB::Registry::getReaderWriterList()
	static int _bind_getReaderWriterList_overload_1(lua_State *L) {
		if (!_lg_typecheck_getReaderWriterList_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::Registry::ReaderWriterList & osgDB::Registry::getReaderWriterList() function, expected prototype:\nosgDB::Registry::ReaderWriterList & osgDB::Registry::getReaderWriterList()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::Registry::ReaderWriterList & osgDB::Registry::getReaderWriterList(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::Registry::ReaderWriterList* lret = &self->getReaderWriterList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::Registry::ReaderWriterList >::push(L,lret,false);

		return 1;
	}

	// const osgDB::Registry::ReaderWriterList & osgDB::Registry::getReaderWriterList() const
	static int _bind_getReaderWriterList_overload_2(lua_State *L) {
		if (!_lg_typecheck_getReaderWriterList_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osgDB::Registry::ReaderWriterList & osgDB::Registry::getReaderWriterList() const function, expected prototype:\nconst osgDB::Registry::ReaderWriterList & osgDB::Registry::getReaderWriterList() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgDB::Registry::ReaderWriterList & osgDB::Registry::getReaderWriterList() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::Registry::ReaderWriterList* lret = &self->getReaderWriterList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::Registry::ReaderWriterList >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgDB::Registry::getReaderWriterList
	static int _bind_getReaderWriterList(lua_State *L) {
		if (_lg_typecheck_getReaderWriterList_overload_1(L)) return _bind_getReaderWriterList_overload_1(L);
		if (_lg_typecheck_getReaderWriterList_overload_2(L)) return _bind_getReaderWriterList_overload_2(L);

		luaL_error(L, "error in function getReaderWriterList, cannot match any of the overloads for function getReaderWriterList:\n  getReaderWriterList()\n  getReaderWriterList()\n");
		return 0;
	}

	// void osgDB::Registry::getReaderWriterListForProtocol(const std::string & protocol, osgDB::Registry::ReaderWriterList & results) const
	static int _bind_getReaderWriterListForProtocol(lua_State *L) {
		if (!_lg_typecheck_getReaderWriterListForProtocol(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::Registry::getReaderWriterListForProtocol(const std::string & protocol, osgDB::Registry::ReaderWriterList & results) const function, expected prototype:\nvoid osgDB::Registry::getReaderWriterListForProtocol(const std::string & protocol, osgDB::Registry::ReaderWriterList & results) const\nClass arguments details:\narg 2 ID = 48032032\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string protocol(lua_tostring(L,2),lua_objlen(L,2));
		osgDB::Registry::ReaderWriterList* results_ptr=(Luna< std::vector< osg::ref_ptr< osgDB::ReaderWriter > > >::checkSubType< osgDB::Registry::ReaderWriterList >(L,3));
		if( !results_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg results in osgDB::Registry::getReaderWriterListForProtocol function");
		}
		osgDB::Registry::ReaderWriterList & results=*results_ptr;

		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::Registry::getReaderWriterListForProtocol(const std::string &, osgDB::Registry::ReaderWriterList &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getReaderWriterListForProtocol(protocol, results);

		return 0;
	}

	// osgDB::ReaderWriter * osgDB::Registry::getReaderWriterForProtocolAndExtension(const std::string & protocol, const std::string & extension)
	static int _bind_getReaderWriterForProtocolAndExtension(lua_State *L) {
		if (!_lg_typecheck_getReaderWriterForProtocolAndExtension(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter * osgDB::Registry::getReaderWriterForProtocolAndExtension(const std::string & protocol, const std::string & extension) function, expected prototype:\nosgDB::ReaderWriter * osgDB::Registry::getReaderWriterForProtocolAndExtension(const std::string & protocol, const std::string & extension)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string protocol(lua_tostring(L,2),lua_objlen(L,2));
		std::string extension(lua_tostring(L,3),lua_objlen(L,3));

		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter * osgDB::Registry::getReaderWriterForProtocolAndExtension(const std::string &, const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter * lret = self->getReaderWriterForProtocolAndExtension(protocol, extension);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter >::push(L,lret,false);

		return 1;
	}

	// osgDB::ImageProcessor * osgDB::Registry::getImageProcessor()
	static int _bind_getImageProcessor(lua_State *L) {
		if (!_lg_typecheck_getImageProcessor(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ImageProcessor * osgDB::Registry::getImageProcessor() function, expected prototype:\nosgDB::ImageProcessor * osgDB::Registry::getImageProcessor()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ImageProcessor * osgDB::Registry::getImageProcessor(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ImageProcessor * lret = self->getImageProcessor();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ImageProcessor >::push(L,lret,false);

		return 1;
	}

	// osgDB::ImageProcessor * osgDB::Registry::getImageProcessorForExtension(const std::string & ext)
	static int _bind_getImageProcessorForExtension(lua_State *L) {
		if (!_lg_typecheck_getImageProcessorForExtension(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ImageProcessor * osgDB::Registry::getImageProcessorForExtension(const std::string & ext) function, expected prototype:\nosgDB::ImageProcessor * osgDB::Registry::getImageProcessorForExtension(const std::string & ext)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string ext(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ImageProcessor * osgDB::Registry::getImageProcessorForExtension(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ImageProcessor * lret = self->getImageProcessorForExtension(ext);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ImageProcessor >::push(L,lret,false);

		return 1;
	}

	// osgDB::Registry::ImageProcessorList & osgDB::Registry::getImageProcessorList()
	static int _bind_getImageProcessorList_overload_1(lua_State *L) {
		if (!_lg_typecheck_getImageProcessorList_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::Registry::ImageProcessorList & osgDB::Registry::getImageProcessorList() function, expected prototype:\nosgDB::Registry::ImageProcessorList & osgDB::Registry::getImageProcessorList()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::Registry::ImageProcessorList & osgDB::Registry::getImageProcessorList(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::Registry::ImageProcessorList* lret = &self->getImageProcessorList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::Registry::ImageProcessorList >::push(L,lret,false);

		return 1;
	}

	// const osgDB::Registry::ImageProcessorList & osgDB::Registry::getImageProcessorList() const
	static int _bind_getImageProcessorList_overload_2(lua_State *L) {
		if (!_lg_typecheck_getImageProcessorList_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osgDB::Registry::ImageProcessorList & osgDB::Registry::getImageProcessorList() const function, expected prototype:\nconst osgDB::Registry::ImageProcessorList & osgDB::Registry::getImageProcessorList() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgDB::Registry::ImageProcessorList & osgDB::Registry::getImageProcessorList() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::Registry::ImageProcessorList* lret = &self->getImageProcessorList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::Registry::ImageProcessorList >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgDB::Registry::getImageProcessorList
	static int _bind_getImageProcessorList(lua_State *L) {
		if (_lg_typecheck_getImageProcessorList_overload_1(L)) return _bind_getImageProcessorList_overload_1(L);
		if (_lg_typecheck_getImageProcessorList_overload_2(L)) return _bind_getImageProcessorList_overload_2(L);

		luaL_error(L, "error in function getImageProcessorList, cannot match any of the overloads for function getImageProcessorList:\n  getImageProcessorList()\n  getImageProcessorList()\n");
		return 0;
	}

	// void osgDB::Registry::setFindFileCallback(class osgDB::FindFileCallback * cb)
	static int _bind_setFindFileCallback(lua_State *L) {
		if (!_lg_typecheck_setFindFileCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::Registry::setFindFileCallback(class osgDB::FindFileCallback * cb) function, expected prototype:\nvoid osgDB::Registry::setFindFileCallback(class osgDB::FindFileCallback * cb)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::FindFileCallback* cb=(Luna< osg::Referenced >::checkSubType< osgDB::FindFileCallback >(L,2));

		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::Registry::setFindFileCallback(class osgDB::FindFileCallback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setFindFileCallback(cb);

		return 0;
	}

	// class osgDB::FindFileCallback * osgDB::Registry::getFindFileCallback()
	static int _bind_getFindFileCallback_overload_1(lua_State *L) {
		if (!_lg_typecheck_getFindFileCallback_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in class osgDB::FindFileCallback * osgDB::Registry::getFindFileCallback() function, expected prototype:\nclass osgDB::FindFileCallback * osgDB::Registry::getFindFileCallback()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call class osgDB::FindFileCallback * osgDB::Registry::getFindFileCallback(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		class osgDB::FindFileCallback * lret = self->getFindFileCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::FindFileCallback >::push(L,lret,false);

		return 1;
	}

	// const osgDB::FindFileCallback * osgDB::Registry::getFindFileCallback() const
	static int _bind_getFindFileCallback_overload_2(lua_State *L) {
		if (!_lg_typecheck_getFindFileCallback_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osgDB::FindFileCallback * osgDB::Registry::getFindFileCallback() const function, expected prototype:\nconst osgDB::FindFileCallback * osgDB::Registry::getFindFileCallback() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgDB::FindFileCallback * osgDB::Registry::getFindFileCallback() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::FindFileCallback * lret = self->getFindFileCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::FindFileCallback >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgDB::Registry::getFindFileCallback
	static int _bind_getFindFileCallback(lua_State *L) {
		if (_lg_typecheck_getFindFileCallback_overload_1(L)) return _bind_getFindFileCallback_overload_1(L);
		if (_lg_typecheck_getFindFileCallback_overload_2(L)) return _bind_getFindFileCallback_overload_2(L);

		luaL_error(L, "error in function getFindFileCallback, cannot match any of the overloads for function getFindFileCallback:\n  getFindFileCallback()\n  getFindFileCallback()\n");
		return 0;
	}

	// std::string osgDB::Registry::findDataFile(const std::string & fileName, const osgDB::Options * options, osgDB::CaseSensitivity caseSensitivity)
	static int _bind_findDataFile(lua_State *L) {
		if (!_lg_typecheck_findDataFile(L)) {
			luaL_error(L, "luna typecheck failed in std::string osgDB::Registry::findDataFile(const std::string & fileName, const osgDB::Options * options, osgDB::CaseSensitivity caseSensitivity) function, expected prototype:\nstd::string osgDB::Registry::findDataFile(const std::string & fileName, const osgDB::Options * options, osgDB::CaseSensitivity caseSensitivity)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string fileName(lua_tostring(L,2),lua_objlen(L,2));
		const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3));
		osgDB::CaseSensitivity caseSensitivity=(osgDB::CaseSensitivity)lua_tointeger(L,4);

		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call std::string osgDB::Registry::findDataFile(const std::string &, const osgDB::Options *, osgDB::CaseSensitivity). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		std::string lret = self->findDataFile(fileName, options, caseSensitivity);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// std::string osgDB::Registry::findDataFileImplementation(const std::string & fileName, const osgDB::Options * options, osgDB::CaseSensitivity caseSensitivity)
	static int _bind_findDataFileImplementation(lua_State *L) {
		if (!_lg_typecheck_findDataFileImplementation(L)) {
			luaL_error(L, "luna typecheck failed in std::string osgDB::Registry::findDataFileImplementation(const std::string & fileName, const osgDB::Options * options, osgDB::CaseSensitivity caseSensitivity) function, expected prototype:\nstd::string osgDB::Registry::findDataFileImplementation(const std::string & fileName, const osgDB::Options * options, osgDB::CaseSensitivity caseSensitivity)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string fileName(lua_tostring(L,2),lua_objlen(L,2));
		const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3));
		osgDB::CaseSensitivity caseSensitivity=(osgDB::CaseSensitivity)lua_tointeger(L,4);

		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call std::string osgDB::Registry::findDataFileImplementation(const std::string &, const osgDB::Options *, osgDB::CaseSensitivity). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		std::string lret = self->findDataFileImplementation(fileName, options, caseSensitivity);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// std::string osgDB::Registry::findLibraryFile(const std::string & fileName, const osgDB::Options * options, osgDB::CaseSensitivity caseSensitivity)
	static int _bind_findLibraryFile(lua_State *L) {
		if (!_lg_typecheck_findLibraryFile(L)) {
			luaL_error(L, "luna typecheck failed in std::string osgDB::Registry::findLibraryFile(const std::string & fileName, const osgDB::Options * options, osgDB::CaseSensitivity caseSensitivity) function, expected prototype:\nstd::string osgDB::Registry::findLibraryFile(const std::string & fileName, const osgDB::Options * options, osgDB::CaseSensitivity caseSensitivity)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string fileName(lua_tostring(L,2),lua_objlen(L,2));
		const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3));
		osgDB::CaseSensitivity caseSensitivity=(osgDB::CaseSensitivity)lua_tointeger(L,4);

		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call std::string osgDB::Registry::findLibraryFile(const std::string &, const osgDB::Options *, osgDB::CaseSensitivity). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		std::string lret = self->findLibraryFile(fileName, options, caseSensitivity);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// std::string osgDB::Registry::findLibraryFileImplementation(const std::string & fileName, const osgDB::Options * options, osgDB::CaseSensitivity caseSensitivity)
	static int _bind_findLibraryFileImplementation(lua_State *L) {
		if (!_lg_typecheck_findLibraryFileImplementation(L)) {
			luaL_error(L, "luna typecheck failed in std::string osgDB::Registry::findLibraryFileImplementation(const std::string & fileName, const osgDB::Options * options, osgDB::CaseSensitivity caseSensitivity) function, expected prototype:\nstd::string osgDB::Registry::findLibraryFileImplementation(const std::string & fileName, const osgDB::Options * options, osgDB::CaseSensitivity caseSensitivity)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string fileName(lua_tostring(L,2),lua_objlen(L,2));
		const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3));
		osgDB::CaseSensitivity caseSensitivity=(osgDB::CaseSensitivity)lua_tointeger(L,4);

		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call std::string osgDB::Registry::findLibraryFileImplementation(const std::string &, const osgDB::Options *, osgDB::CaseSensitivity). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		std::string lret = self->findLibraryFileImplementation(fileName, options, caseSensitivity);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void osgDB::Registry::setReadFileCallback(class osgDB::ReadFileCallback * cb)
	static int _bind_setReadFileCallback(lua_State *L) {
		if (!_lg_typecheck_setReadFileCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::Registry::setReadFileCallback(class osgDB::ReadFileCallback * cb) function, expected prototype:\nvoid osgDB::Registry::setReadFileCallback(class osgDB::ReadFileCallback * cb)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::ReadFileCallback* cb=(Luna< osg::Referenced >::checkSubType< osgDB::ReadFileCallback >(L,2));

		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::Registry::setReadFileCallback(class osgDB::ReadFileCallback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setReadFileCallback(cb);

		return 0;
	}

	// class osgDB::ReadFileCallback * osgDB::Registry::getReadFileCallback()
	static int _bind_getReadFileCallback_overload_1(lua_State *L) {
		if (!_lg_typecheck_getReadFileCallback_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in class osgDB::ReadFileCallback * osgDB::Registry::getReadFileCallback() function, expected prototype:\nclass osgDB::ReadFileCallback * osgDB::Registry::getReadFileCallback()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call class osgDB::ReadFileCallback * osgDB::Registry::getReadFileCallback(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		class osgDB::ReadFileCallback * lret = self->getReadFileCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReadFileCallback >::push(L,lret,false);

		return 1;
	}

	// const osgDB::ReadFileCallback * osgDB::Registry::getReadFileCallback() const
	static int _bind_getReadFileCallback_overload_2(lua_State *L) {
		if (!_lg_typecheck_getReadFileCallback_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osgDB::ReadFileCallback * osgDB::Registry::getReadFileCallback() const function, expected prototype:\nconst osgDB::ReadFileCallback * osgDB::Registry::getReadFileCallback() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgDB::ReadFileCallback * osgDB::Registry::getReadFileCallback() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::ReadFileCallback * lret = self->getReadFileCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReadFileCallback >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgDB::Registry::getReadFileCallback
	static int _bind_getReadFileCallback(lua_State *L) {
		if (_lg_typecheck_getReadFileCallback_overload_1(L)) return _bind_getReadFileCallback_overload_1(L);
		if (_lg_typecheck_getReadFileCallback_overload_2(L)) return _bind_getReadFileCallback_overload_2(L);

		luaL_error(L, "error in function getReadFileCallback, cannot match any of the overloads for function getReadFileCallback:\n  getReadFileCallback()\n  getReadFileCallback()\n");
		return 0;
	}

	// osgDB::ReaderWriter::ReadResult osgDB::Registry::openArchive(const std::string & fileName, osgDB::ReaderWriter::ArchiveStatus status, unsigned int indexBlockSizeHint, const osgDB::Options * options)
	static int _bind_openArchive(lua_State *L) {
		if (!_lg_typecheck_openArchive(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::ReadResult osgDB::Registry::openArchive(const std::string & fileName, osgDB::ReaderWriter::ArchiveStatus status, unsigned int indexBlockSizeHint, const osgDB::Options * options) function, expected prototype:\nosgDB::ReaderWriter::ReadResult osgDB::Registry::openArchive(const std::string & fileName, osgDB::ReaderWriter::ArchiveStatus status, unsigned int indexBlockSizeHint, const osgDB::Options * options)\nClass arguments details:\narg 4 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string fileName(lua_tostring(L,2),lua_objlen(L,2));
		osgDB::ReaderWriter::ArchiveStatus status=(osgDB::ReaderWriter::ArchiveStatus)lua_tointeger(L,3);
		unsigned int indexBlockSizeHint=(unsigned int)lua_tointeger(L,4);
		const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,5));

		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::ReadResult osgDB::Registry::openArchive(const std::string &, osgDB::ReaderWriter::ArchiveStatus, unsigned int, const osgDB::Options *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::ReadResult stack_lret = self->openArchive(fileName, status, indexBlockSizeHint, options);
		osgDB::ReaderWriter::ReadResult* lret = new osgDB::ReaderWriter::ReadResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::ReadResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::ReadResult osgDB::Registry::openArchiveImplementation(const std::string & fileName, osgDB::ReaderWriter::ArchiveStatus status, unsigned int indexBlockSizeHint, const osgDB::Options * options)
	static int _bind_openArchiveImplementation(lua_State *L) {
		if (!_lg_typecheck_openArchiveImplementation(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::ReadResult osgDB::Registry::openArchiveImplementation(const std::string & fileName, osgDB::ReaderWriter::ArchiveStatus status, unsigned int indexBlockSizeHint, const osgDB::Options * options) function, expected prototype:\nosgDB::ReaderWriter::ReadResult osgDB::Registry::openArchiveImplementation(const std::string & fileName, osgDB::ReaderWriter::ArchiveStatus status, unsigned int indexBlockSizeHint, const osgDB::Options * options)\nClass arguments details:\narg 4 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string fileName(lua_tostring(L,2),lua_objlen(L,2));
		osgDB::ReaderWriter::ArchiveStatus status=(osgDB::ReaderWriter::ArchiveStatus)lua_tointeger(L,3);
		unsigned int indexBlockSizeHint=(unsigned int)lua_tointeger(L,4);
		const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,5));

		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::ReadResult osgDB::Registry::openArchiveImplementation(const std::string &, osgDB::ReaderWriter::ArchiveStatus, unsigned int, const osgDB::Options *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::ReadResult stack_lret = self->openArchiveImplementation(fileName, status, indexBlockSizeHint, options);
		osgDB::ReaderWriter::ReadResult* lret = new osgDB::ReaderWriter::ReadResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::ReadResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::ReadResult osgDB::Registry::readObject(const std::string & fileName, const osgDB::Options * options, bool buildKdTreeIfRequired = true)
	static int _bind_readObject(lua_State *L) {
		if (!_lg_typecheck_readObject(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::ReadResult osgDB::Registry::readObject(const std::string & fileName, const osgDB::Options * options, bool buildKdTreeIfRequired = true) function, expected prototype:\nosgDB::ReaderWriter::ReadResult osgDB::Registry::readObject(const std::string & fileName, const osgDB::Options * options, bool buildKdTreeIfRequired = true)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		std::string fileName(lua_tostring(L,2),lua_objlen(L,2));
		const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3));
		bool buildKdTreeIfRequired=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)true;

		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::ReadResult osgDB::Registry::readObject(const std::string &, const osgDB::Options *, bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::ReadResult stack_lret = self->readObject(fileName, options, buildKdTreeIfRequired);
		osgDB::ReaderWriter::ReadResult* lret = new osgDB::ReaderWriter::ReadResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::ReadResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::ReadResult osgDB::Registry::readObjectImplementation(const std::string & fileName, const osgDB::Options * options)
	static int _bind_readObjectImplementation(lua_State *L) {
		if (!_lg_typecheck_readObjectImplementation(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::ReadResult osgDB::Registry::readObjectImplementation(const std::string & fileName, const osgDB::Options * options) function, expected prototype:\nosgDB::ReaderWriter::ReadResult osgDB::Registry::readObjectImplementation(const std::string & fileName, const osgDB::Options * options)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string fileName(lua_tostring(L,2),lua_objlen(L,2));
		const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3));

		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::ReadResult osgDB::Registry::readObjectImplementation(const std::string &, const osgDB::Options *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::ReadResult stack_lret = self->readObjectImplementation(fileName, options);
		osgDB::ReaderWriter::ReadResult* lret = new osgDB::ReaderWriter::ReadResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::ReadResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::ReadResult osgDB::Registry::readImage(const std::string & fileName, const osgDB::Options * options)
	static int _bind_readImage(lua_State *L) {
		if (!_lg_typecheck_readImage(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::ReadResult osgDB::Registry::readImage(const std::string & fileName, const osgDB::Options * options) function, expected prototype:\nosgDB::ReaderWriter::ReadResult osgDB::Registry::readImage(const std::string & fileName, const osgDB::Options * options)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string fileName(lua_tostring(L,2),lua_objlen(L,2));
		const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3));

		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::ReadResult osgDB::Registry::readImage(const std::string &, const osgDB::Options *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::ReadResult stack_lret = self->readImage(fileName, options);
		osgDB::ReaderWriter::ReadResult* lret = new osgDB::ReaderWriter::ReadResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::ReadResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::ReadResult osgDB::Registry::readImageImplementation(const std::string & fileName, const osgDB::Options * options)
	static int _bind_readImageImplementation(lua_State *L) {
		if (!_lg_typecheck_readImageImplementation(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::ReadResult osgDB::Registry::readImageImplementation(const std::string & fileName, const osgDB::Options * options) function, expected prototype:\nosgDB::ReaderWriter::ReadResult osgDB::Registry::readImageImplementation(const std::string & fileName, const osgDB::Options * options)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string fileName(lua_tostring(L,2),lua_objlen(L,2));
		const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3));

		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::ReadResult osgDB::Registry::readImageImplementation(const std::string &, const osgDB::Options *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::ReadResult stack_lret = self->readImageImplementation(fileName, options);
		osgDB::ReaderWriter::ReadResult* lret = new osgDB::ReaderWriter::ReadResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::ReadResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::ReadResult osgDB::Registry::readHeightField(const std::string & fileName, const osgDB::Options * options)
	static int _bind_readHeightField(lua_State *L) {
		if (!_lg_typecheck_readHeightField(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::ReadResult osgDB::Registry::readHeightField(const std::string & fileName, const osgDB::Options * options) function, expected prototype:\nosgDB::ReaderWriter::ReadResult osgDB::Registry::readHeightField(const std::string & fileName, const osgDB::Options * options)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string fileName(lua_tostring(L,2),lua_objlen(L,2));
		const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3));

		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::ReadResult osgDB::Registry::readHeightField(const std::string &, const osgDB::Options *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::ReadResult stack_lret = self->readHeightField(fileName, options);
		osgDB::ReaderWriter::ReadResult* lret = new osgDB::ReaderWriter::ReadResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::ReadResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::ReadResult osgDB::Registry::readHeightFieldImplementation(const std::string & fileName, const osgDB::Options * options)
	static int _bind_readHeightFieldImplementation(lua_State *L) {
		if (!_lg_typecheck_readHeightFieldImplementation(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::ReadResult osgDB::Registry::readHeightFieldImplementation(const std::string & fileName, const osgDB::Options * options) function, expected prototype:\nosgDB::ReaderWriter::ReadResult osgDB::Registry::readHeightFieldImplementation(const std::string & fileName, const osgDB::Options * options)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string fileName(lua_tostring(L,2),lua_objlen(L,2));
		const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3));

		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::ReadResult osgDB::Registry::readHeightFieldImplementation(const std::string &, const osgDB::Options *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::ReadResult stack_lret = self->readHeightFieldImplementation(fileName, options);
		osgDB::ReaderWriter::ReadResult* lret = new osgDB::ReaderWriter::ReadResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::ReadResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::ReadResult osgDB::Registry::readNode(const std::string & fileName, const osgDB::Options * options, bool buildKdTreeIfRequired = true)
	static int _bind_readNode(lua_State *L) {
		if (!_lg_typecheck_readNode(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::ReadResult osgDB::Registry::readNode(const std::string & fileName, const osgDB::Options * options, bool buildKdTreeIfRequired = true) function, expected prototype:\nosgDB::ReaderWriter::ReadResult osgDB::Registry::readNode(const std::string & fileName, const osgDB::Options * options, bool buildKdTreeIfRequired = true)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		std::string fileName(lua_tostring(L,2),lua_objlen(L,2));
		const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3));
		bool buildKdTreeIfRequired=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)true;

		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::ReadResult osgDB::Registry::readNode(const std::string &, const osgDB::Options *, bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::ReadResult stack_lret = self->readNode(fileName, options, buildKdTreeIfRequired);
		osgDB::ReaderWriter::ReadResult* lret = new osgDB::ReaderWriter::ReadResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::ReadResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::ReadResult osgDB::Registry::readNodeImplementation(const std::string & fileName, const osgDB::Options * options)
	static int _bind_readNodeImplementation(lua_State *L) {
		if (!_lg_typecheck_readNodeImplementation(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::ReadResult osgDB::Registry::readNodeImplementation(const std::string & fileName, const osgDB::Options * options) function, expected prototype:\nosgDB::ReaderWriter::ReadResult osgDB::Registry::readNodeImplementation(const std::string & fileName, const osgDB::Options * options)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string fileName(lua_tostring(L,2),lua_objlen(L,2));
		const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3));

		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::ReadResult osgDB::Registry::readNodeImplementation(const std::string &, const osgDB::Options *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::ReadResult stack_lret = self->readNodeImplementation(fileName, options);
		osgDB::ReaderWriter::ReadResult* lret = new osgDB::ReaderWriter::ReadResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::ReadResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::ReadResult osgDB::Registry::readShader(const std::string & fileName, const osgDB::Options * options)
	static int _bind_readShader(lua_State *L) {
		if (!_lg_typecheck_readShader(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::ReadResult osgDB::Registry::readShader(const std::string & fileName, const osgDB::Options * options) function, expected prototype:\nosgDB::ReaderWriter::ReadResult osgDB::Registry::readShader(const std::string & fileName, const osgDB::Options * options)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string fileName(lua_tostring(L,2),lua_objlen(L,2));
		const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3));

		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::ReadResult osgDB::Registry::readShader(const std::string &, const osgDB::Options *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::ReadResult stack_lret = self->readShader(fileName, options);
		osgDB::ReaderWriter::ReadResult* lret = new osgDB::ReaderWriter::ReadResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::ReadResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::ReadResult osgDB::Registry::readShaderImplementation(const std::string & fileName, const osgDB::Options * options)
	static int _bind_readShaderImplementation(lua_State *L) {
		if (!_lg_typecheck_readShaderImplementation(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::ReadResult osgDB::Registry::readShaderImplementation(const std::string & fileName, const osgDB::Options * options) function, expected prototype:\nosgDB::ReaderWriter::ReadResult osgDB::Registry::readShaderImplementation(const std::string & fileName, const osgDB::Options * options)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string fileName(lua_tostring(L,2),lua_objlen(L,2));
		const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3));

		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::ReadResult osgDB::Registry::readShaderImplementation(const std::string &, const osgDB::Options *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::ReadResult stack_lret = self->readShaderImplementation(fileName, options);
		osgDB::ReaderWriter::ReadResult* lret = new osgDB::ReaderWriter::ReadResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::ReadResult >::push(L,lret,true);

		return 1;
	}

	// void osgDB::Registry::setWriteFileCallback(class osgDB::WriteFileCallback * cb)
	static int _bind_setWriteFileCallback(lua_State *L) {
		if (!_lg_typecheck_setWriteFileCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::Registry::setWriteFileCallback(class osgDB::WriteFileCallback * cb) function, expected prototype:\nvoid osgDB::Registry::setWriteFileCallback(class osgDB::WriteFileCallback * cb)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::WriteFileCallback* cb=(Luna< osg::Referenced >::checkSubType< osgDB::WriteFileCallback >(L,2));

		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::Registry::setWriteFileCallback(class osgDB::WriteFileCallback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setWriteFileCallback(cb);

		return 0;
	}

	// class osgDB::WriteFileCallback * osgDB::Registry::getWriteFileCallback()
	static int _bind_getWriteFileCallback_overload_1(lua_State *L) {
		if (!_lg_typecheck_getWriteFileCallback_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in class osgDB::WriteFileCallback * osgDB::Registry::getWriteFileCallback() function, expected prototype:\nclass osgDB::WriteFileCallback * osgDB::Registry::getWriteFileCallback()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call class osgDB::WriteFileCallback * osgDB::Registry::getWriteFileCallback(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		class osgDB::WriteFileCallback * lret = self->getWriteFileCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::WriteFileCallback >::push(L,lret,false);

		return 1;
	}

	// const osgDB::WriteFileCallback * osgDB::Registry::getWriteFileCallback() const
	static int _bind_getWriteFileCallback_overload_2(lua_State *L) {
		if (!_lg_typecheck_getWriteFileCallback_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osgDB::WriteFileCallback * osgDB::Registry::getWriteFileCallback() const function, expected prototype:\nconst osgDB::WriteFileCallback * osgDB::Registry::getWriteFileCallback() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgDB::WriteFileCallback * osgDB::Registry::getWriteFileCallback() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::WriteFileCallback * lret = self->getWriteFileCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::WriteFileCallback >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgDB::Registry::getWriteFileCallback
	static int _bind_getWriteFileCallback(lua_State *L) {
		if (_lg_typecheck_getWriteFileCallback_overload_1(L)) return _bind_getWriteFileCallback_overload_1(L);
		if (_lg_typecheck_getWriteFileCallback_overload_2(L)) return _bind_getWriteFileCallback_overload_2(L);

		luaL_error(L, "error in function getWriteFileCallback, cannot match any of the overloads for function getWriteFileCallback:\n  getWriteFileCallback()\n  getWriteFileCallback()\n");
		return 0;
	}

	// osgDB::ReaderWriter::WriteResult osgDB::Registry::writeObject(const osg::Object & obj, const std::string & fileName, const osgDB::Options * options)
	static int _bind_writeObject(lua_State *L) {
		if (!_lg_typecheck_writeObject(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::WriteResult osgDB::Registry::writeObject(const osg::Object & obj, const std::string & fileName, const osgDB::Options * options) function, expected prototype:\nosgDB::ReaderWriter::WriteResult osgDB::Registry::writeObject(const osg::Object & obj, const std::string & fileName, const osgDB::Options * options)\nClass arguments details:\narg 1 ID = 50169651\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj_ptr=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));
		if( !obj_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg obj in osgDB::Registry::writeObject function");
		}
		const osg::Object & obj=*obj_ptr;
		std::string fileName(lua_tostring(L,3),lua_objlen(L,3));
		const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,4));

		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::WriteResult osgDB::Registry::writeObject(const osg::Object &, const std::string &, const osgDB::Options *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::WriteResult stack_lret = self->writeObject(obj, fileName, options);
		osgDB::ReaderWriter::WriteResult* lret = new osgDB::ReaderWriter::WriteResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::WriteResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::WriteResult osgDB::Registry::writeObjectImplementation(const osg::Object & obj, const std::string & fileName, const osgDB::Options * options)
	static int _bind_writeObjectImplementation(lua_State *L) {
		if (!_lg_typecheck_writeObjectImplementation(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::WriteResult osgDB::Registry::writeObjectImplementation(const osg::Object & obj, const std::string & fileName, const osgDB::Options * options) function, expected prototype:\nosgDB::ReaderWriter::WriteResult osgDB::Registry::writeObjectImplementation(const osg::Object & obj, const std::string & fileName, const osgDB::Options * options)\nClass arguments details:\narg 1 ID = 50169651\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj_ptr=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));
		if( !obj_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg obj in osgDB::Registry::writeObjectImplementation function");
		}
		const osg::Object & obj=*obj_ptr;
		std::string fileName(lua_tostring(L,3),lua_objlen(L,3));
		const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,4));

		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::WriteResult osgDB::Registry::writeObjectImplementation(const osg::Object &, const std::string &, const osgDB::Options *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::WriteResult stack_lret = self->writeObjectImplementation(obj, fileName, options);
		osgDB::ReaderWriter::WriteResult* lret = new osgDB::ReaderWriter::WriteResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::WriteResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::WriteResult osgDB::Registry::writeImage(const osg::Image & obj, const std::string & fileName, const osgDB::Options * options)
	static int _bind_writeImage(lua_State *L) {
		if (!_lg_typecheck_writeImage(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::WriteResult osgDB::Registry::writeImage(const osg::Image & obj, const std::string & fileName, const osgDB::Options * options) function, expected prototype:\nosgDB::ReaderWriter::WriteResult osgDB::Registry::writeImage(const osg::Image & obj, const std::string & fileName, const osgDB::Options * options)\nClass arguments details:\narg 1 ID = 50169651\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Image* obj_ptr=(Luna< osg::Referenced >::checkSubType< osg::Image >(L,2));
		if( !obj_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg obj in osgDB::Registry::writeImage function");
		}
		const osg::Image & obj=*obj_ptr;
		std::string fileName(lua_tostring(L,3),lua_objlen(L,3));
		const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,4));

		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::WriteResult osgDB::Registry::writeImage(const osg::Image &, const std::string &, const osgDB::Options *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::WriteResult stack_lret = self->writeImage(obj, fileName, options);
		osgDB::ReaderWriter::WriteResult* lret = new osgDB::ReaderWriter::WriteResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::WriteResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::WriteResult osgDB::Registry::writeImageImplementation(const osg::Image & obj, const std::string & fileName, const osgDB::Options * options)
	static int _bind_writeImageImplementation(lua_State *L) {
		if (!_lg_typecheck_writeImageImplementation(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::WriteResult osgDB::Registry::writeImageImplementation(const osg::Image & obj, const std::string & fileName, const osgDB::Options * options) function, expected prototype:\nosgDB::ReaderWriter::WriteResult osgDB::Registry::writeImageImplementation(const osg::Image & obj, const std::string & fileName, const osgDB::Options * options)\nClass arguments details:\narg 1 ID = 50169651\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Image* obj_ptr=(Luna< osg::Referenced >::checkSubType< osg::Image >(L,2));
		if( !obj_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg obj in osgDB::Registry::writeImageImplementation function");
		}
		const osg::Image & obj=*obj_ptr;
		std::string fileName(lua_tostring(L,3),lua_objlen(L,3));
		const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,4));

		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::WriteResult osgDB::Registry::writeImageImplementation(const osg::Image &, const std::string &, const osgDB::Options *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::WriteResult stack_lret = self->writeImageImplementation(obj, fileName, options);
		osgDB::ReaderWriter::WriteResult* lret = new osgDB::ReaderWriter::WriteResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::WriteResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::WriteResult osgDB::Registry::writeHeightField(const osg::HeightField & obj, const std::string & fileName, const osgDB::Options * options)
	static int _bind_writeHeightField(lua_State *L) {
		if (!_lg_typecheck_writeHeightField(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::WriteResult osgDB::Registry::writeHeightField(const osg::HeightField & obj, const std::string & fileName, const osgDB::Options * options) function, expected prototype:\nosgDB::ReaderWriter::WriteResult osgDB::Registry::writeHeightField(const osg::HeightField & obj, const std::string & fileName, const osgDB::Options * options)\nClass arguments details:\narg 1 ID = 50169651\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::HeightField* obj_ptr=(Luna< osg::Referenced >::checkSubType< osg::HeightField >(L,2));
		if( !obj_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg obj in osgDB::Registry::writeHeightField function");
		}
		const osg::HeightField & obj=*obj_ptr;
		std::string fileName(lua_tostring(L,3),lua_objlen(L,3));
		const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,4));

		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::WriteResult osgDB::Registry::writeHeightField(const osg::HeightField &, const std::string &, const osgDB::Options *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::WriteResult stack_lret = self->writeHeightField(obj, fileName, options);
		osgDB::ReaderWriter::WriteResult* lret = new osgDB::ReaderWriter::WriteResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::WriteResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::WriteResult osgDB::Registry::writeHeightFieldImplementation(const osg::HeightField & obj, const std::string & fileName, const osgDB::Options * options)
	static int _bind_writeHeightFieldImplementation(lua_State *L) {
		if (!_lg_typecheck_writeHeightFieldImplementation(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::WriteResult osgDB::Registry::writeHeightFieldImplementation(const osg::HeightField & obj, const std::string & fileName, const osgDB::Options * options) function, expected prototype:\nosgDB::ReaderWriter::WriteResult osgDB::Registry::writeHeightFieldImplementation(const osg::HeightField & obj, const std::string & fileName, const osgDB::Options * options)\nClass arguments details:\narg 1 ID = 50169651\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::HeightField* obj_ptr=(Luna< osg::Referenced >::checkSubType< osg::HeightField >(L,2));
		if( !obj_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg obj in osgDB::Registry::writeHeightFieldImplementation function");
		}
		const osg::HeightField & obj=*obj_ptr;
		std::string fileName(lua_tostring(L,3),lua_objlen(L,3));
		const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,4));

		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::WriteResult osgDB::Registry::writeHeightFieldImplementation(const osg::HeightField &, const std::string &, const osgDB::Options *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::WriteResult stack_lret = self->writeHeightFieldImplementation(obj, fileName, options);
		osgDB::ReaderWriter::WriteResult* lret = new osgDB::ReaderWriter::WriteResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::WriteResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::WriteResult osgDB::Registry::writeNode(const osg::Node & node, const std::string & fileName, const osgDB::Options * options)
	static int _bind_writeNode(lua_State *L) {
		if (!_lg_typecheck_writeNode(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::WriteResult osgDB::Registry::writeNode(const osg::Node & node, const std::string & fileName, const osgDB::Options * options) function, expected prototype:\nosgDB::ReaderWriter::WriteResult osgDB::Registry::writeNode(const osg::Node & node, const std::string & fileName, const osgDB::Options * options)\nClass arguments details:\narg 1 ID = 50169651\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Node* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgDB::Registry::writeNode function");
		}
		const osg::Node & node=*node_ptr;
		std::string fileName(lua_tostring(L,3),lua_objlen(L,3));
		const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,4));

		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::WriteResult osgDB::Registry::writeNode(const osg::Node &, const std::string &, const osgDB::Options *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::WriteResult stack_lret = self->writeNode(node, fileName, options);
		osgDB::ReaderWriter::WriteResult* lret = new osgDB::ReaderWriter::WriteResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::WriteResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::WriteResult osgDB::Registry::writeNodeImplementation(const osg::Node & node, const std::string & fileName, const osgDB::Options * options)
	static int _bind_writeNodeImplementation(lua_State *L) {
		if (!_lg_typecheck_writeNodeImplementation(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::WriteResult osgDB::Registry::writeNodeImplementation(const osg::Node & node, const std::string & fileName, const osgDB::Options * options) function, expected prototype:\nosgDB::ReaderWriter::WriteResult osgDB::Registry::writeNodeImplementation(const osg::Node & node, const std::string & fileName, const osgDB::Options * options)\nClass arguments details:\narg 1 ID = 50169651\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Node* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgDB::Registry::writeNodeImplementation function");
		}
		const osg::Node & node=*node_ptr;
		std::string fileName(lua_tostring(L,3),lua_objlen(L,3));
		const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,4));

		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::WriteResult osgDB::Registry::writeNodeImplementation(const osg::Node &, const std::string &, const osgDB::Options *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::WriteResult stack_lret = self->writeNodeImplementation(node, fileName, options);
		osgDB::ReaderWriter::WriteResult* lret = new osgDB::ReaderWriter::WriteResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::WriteResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::WriteResult osgDB::Registry::writeShader(const osg::Shader & obj, const std::string & fileName, const osgDB::Options * options)
	static int _bind_writeShader(lua_State *L) {
		if (!_lg_typecheck_writeShader(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::WriteResult osgDB::Registry::writeShader(const osg::Shader & obj, const std::string & fileName, const osgDB::Options * options) function, expected prototype:\nosgDB::ReaderWriter::WriteResult osgDB::Registry::writeShader(const osg::Shader & obj, const std::string & fileName, const osgDB::Options * options)\nClass arguments details:\narg 1 ID = 50169651\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Shader* obj_ptr=(Luna< osg::Referenced >::checkSubType< osg::Shader >(L,2));
		if( !obj_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg obj in osgDB::Registry::writeShader function");
		}
		const osg::Shader & obj=*obj_ptr;
		std::string fileName(lua_tostring(L,3),lua_objlen(L,3));
		const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,4));

		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::WriteResult osgDB::Registry::writeShader(const osg::Shader &, const std::string &, const osgDB::Options *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::WriteResult stack_lret = self->writeShader(obj, fileName, options);
		osgDB::ReaderWriter::WriteResult* lret = new osgDB::ReaderWriter::WriteResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::WriteResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::WriteResult osgDB::Registry::writeShaderImplementation(const osg::Shader & obj, const std::string & fileName, const osgDB::Options * options)
	static int _bind_writeShaderImplementation(lua_State *L) {
		if (!_lg_typecheck_writeShaderImplementation(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::WriteResult osgDB::Registry::writeShaderImplementation(const osg::Shader & obj, const std::string & fileName, const osgDB::Options * options) function, expected prototype:\nosgDB::ReaderWriter::WriteResult osgDB::Registry::writeShaderImplementation(const osg::Shader & obj, const std::string & fileName, const osgDB::Options * options)\nClass arguments details:\narg 1 ID = 50169651\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Shader* obj_ptr=(Luna< osg::Referenced >::checkSubType< osg::Shader >(L,2));
		if( !obj_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg obj in osgDB::Registry::writeShaderImplementation function");
		}
		const osg::Shader & obj=*obj_ptr;
		std::string fileName(lua_tostring(L,3),lua_objlen(L,3));
		const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,4));

		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::WriteResult osgDB::Registry::writeShaderImplementation(const osg::Shader &, const std::string &, const osgDB::Options *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::WriteResult stack_lret = self->writeShaderImplementation(obj, fileName, options);
		osgDB::ReaderWriter::WriteResult* lret = new osgDB::ReaderWriter::WriteResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::WriteResult >::push(L,lret,true);

		return 1;
	}

	// void osgDB::Registry::_buildKdTreeIfRequired(osgDB::ReaderWriter::ReadResult & result, const osgDB::Options * options)
	static int _bind__buildKdTreeIfRequired(lua_State *L) {
		if (!_lg_typecheck__buildKdTreeIfRequired(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::Registry::_buildKdTreeIfRequired(osgDB::ReaderWriter::ReadResult & result, const osgDB::Options * options) function, expected prototype:\nvoid osgDB::Registry::_buildKdTreeIfRequired(osgDB::ReaderWriter::ReadResult & result, const osgDB::Options * options)\nClass arguments details:\narg 1 ID = 25279089\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::ReaderWriter::ReadResult* result_ptr=(Luna< osgDB::ReaderWriter::ReadResult >::check(L,2));
		if( !result_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg result in osgDB::Registry::_buildKdTreeIfRequired function");
		}
		osgDB::ReaderWriter::ReadResult & result=*result_ptr;
		const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3));

		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::Registry::_buildKdTreeIfRequired(osgDB::ReaderWriter::ReadResult &, const osgDB::Options *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_buildKdTreeIfRequired(result, options);

		return 0;
	}

	// void osgDB::Registry::setFileLocationCallback(class osgDB::FileLocationCallback * cb)
	static int _bind_setFileLocationCallback(lua_State *L) {
		if (!_lg_typecheck_setFileLocationCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::Registry::setFileLocationCallback(class osgDB::FileLocationCallback * cb) function, expected prototype:\nvoid osgDB::Registry::setFileLocationCallback(class osgDB::FileLocationCallback * cb)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::FileLocationCallback* cb=(Luna< osg::Referenced >::checkSubType< osgDB::FileLocationCallback >(L,2));

		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::Registry::setFileLocationCallback(class osgDB::FileLocationCallback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setFileLocationCallback(cb);

		return 0;
	}

	// class osgDB::FileLocationCallback * osgDB::Registry::getFileLocationCallback() const
	static int _bind_getFileLocationCallback(lua_State *L) {
		if (!_lg_typecheck_getFileLocationCallback(L)) {
			luaL_error(L, "luna typecheck failed in class osgDB::FileLocationCallback * osgDB::Registry::getFileLocationCallback() const function, expected prototype:\nclass osgDB::FileLocationCallback * osgDB::Registry::getFileLocationCallback() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call class osgDB::FileLocationCallback * osgDB::Registry::getFileLocationCallback() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		class osgDB::FileLocationCallback * lret = self->getFileLocationCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::FileLocationCallback >::push(L,lret,false);

		return 1;
	}

	// void osgDB::Registry::setBuildKdTreesHint(osgDB::Options::BuildKdTreesHint hint)
	static int _bind_setBuildKdTreesHint(lua_State *L) {
		if (!_lg_typecheck_setBuildKdTreesHint(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::Registry::setBuildKdTreesHint(osgDB::Options::BuildKdTreesHint hint) function, expected prototype:\nvoid osgDB::Registry::setBuildKdTreesHint(osgDB::Options::BuildKdTreesHint hint)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::Options::BuildKdTreesHint hint=(osgDB::Options::BuildKdTreesHint)lua_tointeger(L,2);

		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::Registry::setBuildKdTreesHint(osgDB::Options::BuildKdTreesHint). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setBuildKdTreesHint(hint);

		return 0;
	}

	// osgDB::Options::BuildKdTreesHint osgDB::Registry::getBuildKdTreesHint() const
	static int _bind_getBuildKdTreesHint(lua_State *L) {
		if (!_lg_typecheck_getBuildKdTreesHint(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::Options::BuildKdTreesHint osgDB::Registry::getBuildKdTreesHint() const function, expected prototype:\nosgDB::Options::BuildKdTreesHint osgDB::Registry::getBuildKdTreesHint() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::Options::BuildKdTreesHint osgDB::Registry::getBuildKdTreesHint() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::Options::BuildKdTreesHint lret = self->getBuildKdTreesHint();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgDB::Registry::setKdTreeBuilder(osg::KdTreeBuilder * builder)
	static int _bind_setKdTreeBuilder(lua_State *L) {
		if (!_lg_typecheck_setKdTreeBuilder(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::Registry::setKdTreeBuilder(osg::KdTreeBuilder * builder) function, expected prototype:\nvoid osgDB::Registry::setKdTreeBuilder(osg::KdTreeBuilder * builder)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::KdTreeBuilder* builder=(Luna< osg::Referenced >::checkSubType< osg::KdTreeBuilder >(L,2));

		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::Registry::setKdTreeBuilder(osg::KdTreeBuilder *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setKdTreeBuilder(builder);

		return 0;
	}

	// osg::KdTreeBuilder * osgDB::Registry::getKdTreeBuilder()
	static int _bind_getKdTreeBuilder(lua_State *L) {
		if (!_lg_typecheck_getKdTreeBuilder(L)) {
			luaL_error(L, "luna typecheck failed in osg::KdTreeBuilder * osgDB::Registry::getKdTreeBuilder() function, expected prototype:\nosg::KdTreeBuilder * osgDB::Registry::getKdTreeBuilder()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::KdTreeBuilder * osgDB::Registry::getKdTreeBuilder(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::KdTreeBuilder * lret = self->getKdTreeBuilder();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::KdTreeBuilder >::push(L,lret,false);

		return 1;
	}

	// void osgDB::Registry::setFileCache(osgDB::FileCache * fileCache)
	static int _bind_setFileCache(lua_State *L) {
		if (!_lg_typecheck_setFileCache(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::Registry::setFileCache(osgDB::FileCache * fileCache) function, expected prototype:\nvoid osgDB::Registry::setFileCache(osgDB::FileCache * fileCache)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::FileCache* fileCache=(Luna< osg::Referenced >::checkSubType< osgDB::FileCache >(L,2));

		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::Registry::setFileCache(osgDB::FileCache *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setFileCache(fileCache);

		return 0;
	}

	// osgDB::FileCache * osgDB::Registry::getFileCache()
	static int _bind_getFileCache_overload_1(lua_State *L) {
		if (!_lg_typecheck_getFileCache_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::FileCache * osgDB::Registry::getFileCache() function, expected prototype:\nosgDB::FileCache * osgDB::Registry::getFileCache()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::FileCache * osgDB::Registry::getFileCache(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::FileCache * lret = self->getFileCache();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::FileCache >::push(L,lret,false);

		return 1;
	}

	// const osgDB::FileCache * osgDB::Registry::getFileCache() const
	static int _bind_getFileCache_overload_2(lua_State *L) {
		if (!_lg_typecheck_getFileCache_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osgDB::FileCache * osgDB::Registry::getFileCache() const function, expected prototype:\nconst osgDB::FileCache * osgDB::Registry::getFileCache() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgDB::FileCache * osgDB::Registry::getFileCache() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::FileCache * lret = self->getFileCache();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::FileCache >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgDB::Registry::getFileCache
	static int _bind_getFileCache(lua_State *L) {
		if (_lg_typecheck_getFileCache_overload_1(L)) return _bind_getFileCache_overload_1(L);
		if (_lg_typecheck_getFileCache_overload_2(L)) return _bind_getFileCache_overload_2(L);

		luaL_error(L, "error in function getFileCache, cannot match any of the overloads for function getFileCache:\n  getFileCache()\n  getFileCache()\n");
		return 0;
	}

	// osgDB::AuthenticationMap * osgDB::Registry::getAuthenticationMap()
	static int _bind_getAuthenticationMap_overload_1(lua_State *L) {
		if (!_lg_typecheck_getAuthenticationMap_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::AuthenticationMap * osgDB::Registry::getAuthenticationMap() function, expected prototype:\nosgDB::AuthenticationMap * osgDB::Registry::getAuthenticationMap()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::AuthenticationMap * osgDB::Registry::getAuthenticationMap(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::AuthenticationMap * lret = self->getAuthenticationMap();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::AuthenticationMap >::push(L,lret,false);

		return 1;
	}

	// const osgDB::AuthenticationMap * osgDB::Registry::getAuthenticationMap() const
	static int _bind_getAuthenticationMap_overload_2(lua_State *L) {
		if (!_lg_typecheck_getAuthenticationMap_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osgDB::AuthenticationMap * osgDB::Registry::getAuthenticationMap() const function, expected prototype:\nconst osgDB::AuthenticationMap * osgDB::Registry::getAuthenticationMap() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgDB::AuthenticationMap * osgDB::Registry::getAuthenticationMap() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::AuthenticationMap * lret = self->getAuthenticationMap();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::AuthenticationMap >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgDB::Registry::getAuthenticationMap
	static int _bind_getAuthenticationMap(lua_State *L) {
		if (_lg_typecheck_getAuthenticationMap_overload_1(L)) return _bind_getAuthenticationMap_overload_1(L);
		if (_lg_typecheck_getAuthenticationMap_overload_2(L)) return _bind_getAuthenticationMap_overload_2(L);

		luaL_error(L, "error in function getAuthenticationMap, cannot match any of the overloads for function getAuthenticationMap:\n  getAuthenticationMap()\n  getAuthenticationMap()\n");
		return 0;
	}

	// void osgDB::Registry::setCreateNodeFromImage(bool flag)
	static int _bind_setCreateNodeFromImage(lua_State *L) {
		if (!_lg_typecheck_setCreateNodeFromImage(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::Registry::setCreateNodeFromImage(bool flag) function, expected prototype:\nvoid osgDB::Registry::setCreateNodeFromImage(bool flag)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::Registry::setCreateNodeFromImage(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setCreateNodeFromImage(flag);

		return 0;
	}

	// bool osgDB::Registry::getCreateNodeFromImage() const
	static int _bind_getCreateNodeFromImage(lua_State *L) {
		if (!_lg_typecheck_getCreateNodeFromImage(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::Registry::getCreateNodeFromImage() const function, expected prototype:\nbool osgDB::Registry::getCreateNodeFromImage() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::Registry::getCreateNodeFromImage() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getCreateNodeFromImage();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgDB::Registry::setOptions(osgDB::Options * opt)
	static int _bind_setOptions(lua_State *L) {
		if (!_lg_typecheck_setOptions(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::Registry::setOptions(osgDB::Options * opt) function, expected prototype:\nvoid osgDB::Registry::setOptions(osgDB::Options * opt)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::Options* opt=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,2));

		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::Registry::setOptions(osgDB::Options *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setOptions(opt);

		return 0;
	}

	// osgDB::Options * osgDB::Registry::getOptions()
	static int _bind_getOptions_overload_1(lua_State *L) {
		if (!_lg_typecheck_getOptions_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::Options * osgDB::Registry::getOptions() function, expected prototype:\nosgDB::Options * osgDB::Registry::getOptions()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::Options * osgDB::Registry::getOptions(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::Options * lret = self->getOptions();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::Options >::push(L,lret,false);

		return 1;
	}

	// const osgDB::Options * osgDB::Registry::getOptions() const
	static int _bind_getOptions_overload_2(lua_State *L) {
		if (!_lg_typecheck_getOptions_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osgDB::Options * osgDB::Registry::getOptions() const function, expected prototype:\nconst osgDB::Options * osgDB::Registry::getOptions() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgDB::Options * osgDB::Registry::getOptions() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::Options * lret = self->getOptions();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::Options >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgDB::Registry::getOptions
	static int _bind_getOptions(lua_State *L) {
		if (_lg_typecheck_getOptions_overload_1(L)) return _bind_getOptions_overload_1(L);
		if (_lg_typecheck_getOptions_overload_2(L)) return _bind_getOptions_overload_2(L);

		luaL_error(L, "error in function getOptions, cannot match any of the overloads for function getOptions:\n  getOptions()\n  getOptions()\n");
		return 0;
	}

	// void osgDB::Registry::initFilePathLists()
	static int _bind_initFilePathLists(lua_State *L) {
		if (!_lg_typecheck_initFilePathLists(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::Registry::initFilePathLists() function, expected prototype:\nvoid osgDB::Registry::initFilePathLists()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::Registry::initFilePathLists(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->initFilePathLists();

		return 0;
	}

	// void osgDB::Registry::initDataFilePathList()
	static int _bind_initDataFilePathList(lua_State *L) {
		if (!_lg_typecheck_initDataFilePathList(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::Registry::initDataFilePathList() function, expected prototype:\nvoid osgDB::Registry::initDataFilePathList()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::Registry::initDataFilePathList(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->initDataFilePathList();

		return 0;
	}

	// void osgDB::Registry::setDataFilePathList(const osgDB::FilePathList & filepath)
	static int _bind_setDataFilePathList_overload_1(lua_State *L) {
		if (!_lg_typecheck_setDataFilePathList_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::Registry::setDataFilePathList(const osgDB::FilePathList & filepath) function, expected prototype:\nvoid osgDB::Registry::setDataFilePathList(const osgDB::FilePathList & filepath)\nClass arguments details:\narg 1 ID = 54591957\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgDB::FilePathList* filepath_ptr=(Luna< std::deque< std::string > >::checkSubType< osgDB::FilePathList >(L,2));
		if( !filepath_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg filepath in osgDB::Registry::setDataFilePathList function");
		}
		const osgDB::FilePathList & filepath=*filepath_ptr;

		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::Registry::setDataFilePathList(const osgDB::FilePathList &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setDataFilePathList(filepath);

		return 0;
	}

	// void osgDB::Registry::setDataFilePathList(const std::string & paths)
	static int _bind_setDataFilePathList_overload_2(lua_State *L) {
		if (!_lg_typecheck_setDataFilePathList_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::Registry::setDataFilePathList(const std::string & paths) function, expected prototype:\nvoid osgDB::Registry::setDataFilePathList(const std::string & paths)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string paths(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::Registry::setDataFilePathList(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setDataFilePathList(paths);

		return 0;
	}

	// Overload binder for osgDB::Registry::setDataFilePathList
	static int _bind_setDataFilePathList(lua_State *L) {
		if (_lg_typecheck_setDataFilePathList_overload_1(L)) return _bind_setDataFilePathList_overload_1(L);
		if (_lg_typecheck_setDataFilePathList_overload_2(L)) return _bind_setDataFilePathList_overload_2(L);

		luaL_error(L, "error in function setDataFilePathList, cannot match any of the overloads for function setDataFilePathList:\n  setDataFilePathList(const osgDB::FilePathList &)\n  setDataFilePathList(const std::string &)\n");
		return 0;
	}

	// osgDB::FilePathList & osgDB::Registry::getDataFilePathList()
	static int _bind_getDataFilePathList_overload_1(lua_State *L) {
		if (!_lg_typecheck_getDataFilePathList_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::FilePathList & osgDB::Registry::getDataFilePathList() function, expected prototype:\nosgDB::FilePathList & osgDB::Registry::getDataFilePathList()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::FilePathList & osgDB::Registry::getDataFilePathList(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::FilePathList* lret = &self->getDataFilePathList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::FilePathList >::push(L,lret,false);

		return 1;
	}

	// const osgDB::FilePathList & osgDB::Registry::getDataFilePathList() const
	static int _bind_getDataFilePathList_overload_2(lua_State *L) {
		if (!_lg_typecheck_getDataFilePathList_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osgDB::FilePathList & osgDB::Registry::getDataFilePathList() const function, expected prototype:\nconst osgDB::FilePathList & osgDB::Registry::getDataFilePathList() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgDB::FilePathList & osgDB::Registry::getDataFilePathList() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::FilePathList* lret = &self->getDataFilePathList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::FilePathList >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgDB::Registry::getDataFilePathList
	static int _bind_getDataFilePathList(lua_State *L) {
		if (_lg_typecheck_getDataFilePathList_overload_1(L)) return _bind_getDataFilePathList_overload_1(L);
		if (_lg_typecheck_getDataFilePathList_overload_2(L)) return _bind_getDataFilePathList_overload_2(L);

		luaL_error(L, "error in function getDataFilePathList, cannot match any of the overloads for function getDataFilePathList:\n  getDataFilePathList()\n  getDataFilePathList()\n");
		return 0;
	}

	// void osgDB::Registry::initLibraryFilePathList()
	static int _bind_initLibraryFilePathList(lua_State *L) {
		if (!_lg_typecheck_initLibraryFilePathList(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::Registry::initLibraryFilePathList() function, expected prototype:\nvoid osgDB::Registry::initLibraryFilePathList()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::Registry::initLibraryFilePathList(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->initLibraryFilePathList();

		return 0;
	}

	// void osgDB::Registry::setLibraryFilePathList(const osgDB::FilePathList & filepath)
	static int _bind_setLibraryFilePathList_overload_1(lua_State *L) {
		if (!_lg_typecheck_setLibraryFilePathList_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::Registry::setLibraryFilePathList(const osgDB::FilePathList & filepath) function, expected prototype:\nvoid osgDB::Registry::setLibraryFilePathList(const osgDB::FilePathList & filepath)\nClass arguments details:\narg 1 ID = 54591957\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgDB::FilePathList* filepath_ptr=(Luna< std::deque< std::string > >::checkSubType< osgDB::FilePathList >(L,2));
		if( !filepath_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg filepath in osgDB::Registry::setLibraryFilePathList function");
		}
		const osgDB::FilePathList & filepath=*filepath_ptr;

		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::Registry::setLibraryFilePathList(const osgDB::FilePathList &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setLibraryFilePathList(filepath);

		return 0;
	}

	// void osgDB::Registry::setLibraryFilePathList(const std::string & paths)
	static int _bind_setLibraryFilePathList_overload_2(lua_State *L) {
		if (!_lg_typecheck_setLibraryFilePathList_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::Registry::setLibraryFilePathList(const std::string & paths) function, expected prototype:\nvoid osgDB::Registry::setLibraryFilePathList(const std::string & paths)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string paths(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::Registry::setLibraryFilePathList(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setLibraryFilePathList(paths);

		return 0;
	}

	// Overload binder for osgDB::Registry::setLibraryFilePathList
	static int _bind_setLibraryFilePathList(lua_State *L) {
		if (_lg_typecheck_setLibraryFilePathList_overload_1(L)) return _bind_setLibraryFilePathList_overload_1(L);
		if (_lg_typecheck_setLibraryFilePathList_overload_2(L)) return _bind_setLibraryFilePathList_overload_2(L);

		luaL_error(L, "error in function setLibraryFilePathList, cannot match any of the overloads for function setLibraryFilePathList:\n  setLibraryFilePathList(const osgDB::FilePathList &)\n  setLibraryFilePathList(const std::string &)\n");
		return 0;
	}

	// osgDB::FilePathList & osgDB::Registry::getLibraryFilePathList()
	static int _bind_getLibraryFilePathList_overload_1(lua_State *L) {
		if (!_lg_typecheck_getLibraryFilePathList_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::FilePathList & osgDB::Registry::getLibraryFilePathList() function, expected prototype:\nosgDB::FilePathList & osgDB::Registry::getLibraryFilePathList()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::FilePathList & osgDB::Registry::getLibraryFilePathList(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::FilePathList* lret = &self->getLibraryFilePathList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::FilePathList >::push(L,lret,false);

		return 1;
	}

	// const osgDB::FilePathList & osgDB::Registry::getLibraryFilePathList() const
	static int _bind_getLibraryFilePathList_overload_2(lua_State *L) {
		if (!_lg_typecheck_getLibraryFilePathList_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osgDB::FilePathList & osgDB::Registry::getLibraryFilePathList() const function, expected prototype:\nconst osgDB::FilePathList & osgDB::Registry::getLibraryFilePathList() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgDB::FilePathList & osgDB::Registry::getLibraryFilePathList() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::FilePathList* lret = &self->getLibraryFilePathList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::FilePathList >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgDB::Registry::getLibraryFilePathList
	static int _bind_getLibraryFilePathList(lua_State *L) {
		if (_lg_typecheck_getLibraryFilePathList_overload_1(L)) return _bind_getLibraryFilePathList_overload_1(L);
		if (_lg_typecheck_getLibraryFilePathList_overload_2(L)) return _bind_getLibraryFilePathList_overload_2(L);

		luaL_error(L, "error in function getLibraryFilePathList, cannot match any of the overloads for function getLibraryFilePathList:\n  getLibraryFilePathList()\n  getLibraryFilePathList()\n");
		return 0;
	}

	// void osgDB::Registry::updateTimeStampOfObjectsInCacheWithExternalReferences(const osg::FrameStamp & frameStamp)
	static int _bind_updateTimeStampOfObjectsInCacheWithExternalReferences(lua_State *L) {
		if (!_lg_typecheck_updateTimeStampOfObjectsInCacheWithExternalReferences(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::Registry::updateTimeStampOfObjectsInCacheWithExternalReferences(const osg::FrameStamp & frameStamp) function, expected prototype:\nvoid osgDB::Registry::updateTimeStampOfObjectsInCacheWithExternalReferences(const osg::FrameStamp & frameStamp)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::FrameStamp* frameStamp_ptr=(Luna< osg::Referenced >::checkSubType< osg::FrameStamp >(L,2));
		if( !frameStamp_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg frameStamp in osgDB::Registry::updateTimeStampOfObjectsInCacheWithExternalReferences function");
		}
		const osg::FrameStamp & frameStamp=*frameStamp_ptr;

		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::Registry::updateTimeStampOfObjectsInCacheWithExternalReferences(const osg::FrameStamp &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->updateTimeStampOfObjectsInCacheWithExternalReferences(frameStamp);

		return 0;
	}

	// void osgDB::Registry::removeExpiredObjectsInCache(const osg::FrameStamp & frameStamp)
	static int _bind_removeExpiredObjectsInCache(lua_State *L) {
		if (!_lg_typecheck_removeExpiredObjectsInCache(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::Registry::removeExpiredObjectsInCache(const osg::FrameStamp & frameStamp) function, expected prototype:\nvoid osgDB::Registry::removeExpiredObjectsInCache(const osg::FrameStamp & frameStamp)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::FrameStamp* frameStamp_ptr=(Luna< osg::Referenced >::checkSubType< osg::FrameStamp >(L,2));
		if( !frameStamp_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg frameStamp in osgDB::Registry::removeExpiredObjectsInCache function");
		}
		const osg::FrameStamp & frameStamp=*frameStamp_ptr;

		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::Registry::removeExpiredObjectsInCache(const osg::FrameStamp &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->removeExpiredObjectsInCache(frameStamp);

		return 0;
	}

	// void osgDB::Registry::setExpiryDelay(double expiryDelay)
	static int _bind_setExpiryDelay(lua_State *L) {
		if (!_lg_typecheck_setExpiryDelay(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::Registry::setExpiryDelay(double expiryDelay) function, expected prototype:\nvoid osgDB::Registry::setExpiryDelay(double expiryDelay)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double expiryDelay=(double)lua_tonumber(L,2);

		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::Registry::setExpiryDelay(double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setExpiryDelay(expiryDelay);

		return 0;
	}

	// double osgDB::Registry::getExpiryDelay() const
	static int _bind_getExpiryDelay(lua_State *L) {
		if (!_lg_typecheck_getExpiryDelay(L)) {
			luaL_error(L, "luna typecheck failed in double osgDB::Registry::getExpiryDelay() const function, expected prototype:\ndouble osgDB::Registry::getExpiryDelay() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double osgDB::Registry::getExpiryDelay() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getExpiryDelay();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgDB::Registry::clearObjectCache()
	static int _bind_clearObjectCache(lua_State *L) {
		if (!_lg_typecheck_clearObjectCache(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::Registry::clearObjectCache() function, expected prototype:\nvoid osgDB::Registry::clearObjectCache()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::Registry::clearObjectCache(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->clearObjectCache();

		return 0;
	}

	// void osgDB::Registry::addEntryToObjectCache(const std::string & filename, osg::Object * object, double timestamp = 0.0)
	static int _bind_addEntryToObjectCache(lua_State *L) {
		if (!_lg_typecheck_addEntryToObjectCache(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::Registry::addEntryToObjectCache(const std::string & filename, osg::Object * object, double timestamp = 0.0) function, expected prototype:\nvoid osgDB::Registry::addEntryToObjectCache(const std::string & filename, osg::Object * object, double timestamp = 0.0)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		std::string filename(lua_tostring(L,2),lua_objlen(L,2));
		osg::Object* object=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,3));
		double timestamp=luatop>3 ? (double)lua_tonumber(L,4) : (double)0.0;

		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::Registry::addEntryToObjectCache(const std::string &, osg::Object *, double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addEntryToObjectCache(filename, object, timestamp);

		return 0;
	}

	// void osgDB::Registry::removeFromObjectCache(const std::string & fileName)
	static int _bind_removeFromObjectCache(lua_State *L) {
		if (!_lg_typecheck_removeFromObjectCache(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::Registry::removeFromObjectCache(const std::string & fileName) function, expected prototype:\nvoid osgDB::Registry::removeFromObjectCache(const std::string & fileName)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string fileName(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::Registry::removeFromObjectCache(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->removeFromObjectCache(fileName);

		return 0;
	}

	// osg::Object * osgDB::Registry::getFromObjectCache(const std::string & fileName)
	static int _bind_getFromObjectCache(lua_State *L) {
		if (!_lg_typecheck_getFromObjectCache(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgDB::Registry::getFromObjectCache(const std::string & fileName) function, expected prototype:\nosg::Object * osgDB::Registry::getFromObjectCache(const std::string & fileName)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string fileName(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgDB::Registry::getFromObjectCache(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->getFromObjectCache(fileName);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::ref_ptr< osg::Object > osgDB::Registry::getRefFromObjectCache(const std::string & fileName)
	static int _bind_getRefFromObjectCache(lua_State *L) {
		if (!_lg_typecheck_getRefFromObjectCache(L)) {
			luaL_error(L, "luna typecheck failed in osg::ref_ptr< osg::Object > osgDB::Registry::getRefFromObjectCache(const std::string & fileName) function, expected prototype:\nosg::ref_ptr< osg::Object > osgDB::Registry::getRefFromObjectCache(const std::string & fileName)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string fileName(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::ref_ptr< osg::Object > osgDB::Registry::getRefFromObjectCache(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::ref_ptr< osg::Object > lret = self->getRefFromObjectCache(fileName);
		Luna< osg::Object >::push(L,lret.get(),false);

		return 1;
	}

	// void osgDB::Registry::addToArchiveCache(const std::string & fileName, osgDB::Archive * archive)
	static int _bind_addToArchiveCache(lua_State *L) {
		if (!_lg_typecheck_addToArchiveCache(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::Registry::addToArchiveCache(const std::string & fileName, osgDB::Archive * archive) function, expected prototype:\nvoid osgDB::Registry::addToArchiveCache(const std::string & fileName, osgDB::Archive * archive)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string fileName(lua_tostring(L,2),lua_objlen(L,2));
		osgDB::Archive* archive=(Luna< osg::Referenced >::checkSubType< osgDB::Archive >(L,3));

		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::Registry::addToArchiveCache(const std::string &, osgDB::Archive *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addToArchiveCache(fileName, archive);

		return 0;
	}

	// void osgDB::Registry::removeFromArchiveCache(const std::string & fileName)
	static int _bind_removeFromArchiveCache(lua_State *L) {
		if (!_lg_typecheck_removeFromArchiveCache(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::Registry::removeFromArchiveCache(const std::string & fileName) function, expected prototype:\nvoid osgDB::Registry::removeFromArchiveCache(const std::string & fileName)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string fileName(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::Registry::removeFromArchiveCache(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->removeFromArchiveCache(fileName);

		return 0;
	}

	// osgDB::Archive * osgDB::Registry::getFromArchiveCache(const std::string & fileName)
	static int _bind_getFromArchiveCache(lua_State *L) {
		if (!_lg_typecheck_getFromArchiveCache(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::Archive * osgDB::Registry::getFromArchiveCache(const std::string & fileName) function, expected prototype:\nosgDB::Archive * osgDB::Registry::getFromArchiveCache(const std::string & fileName)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string fileName(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::Archive * osgDB::Registry::getFromArchiveCache(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::Archive * lret = self->getFromArchiveCache(fileName);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::Archive >::push(L,lret,false);

		return 1;
	}

	// osg::ref_ptr< osgDB::Archive > osgDB::Registry::getRefFromArchiveCache(const std::string & fileName)
	static int _bind_getRefFromArchiveCache(lua_State *L) {
		if (!_lg_typecheck_getRefFromArchiveCache(L)) {
			luaL_error(L, "luna typecheck failed in osg::ref_ptr< osgDB::Archive > osgDB::Registry::getRefFromArchiveCache(const std::string & fileName) function, expected prototype:\nosg::ref_ptr< osgDB::Archive > osgDB::Registry::getRefFromArchiveCache(const std::string & fileName)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string fileName(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::ref_ptr< osgDB::Archive > osgDB::Registry::getRefFromArchiveCache(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::ref_ptr< osgDB::Archive > lret = self->getRefFromArchiveCache(fileName);
		Luna< osgDB::Archive >::push(L,lret.get(),false);

		return 1;
	}

	// void osgDB::Registry::clearArchiveCache()
	static int _bind_clearArchiveCache(lua_State *L) {
		if (!_lg_typecheck_clearArchiveCache(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::Registry::clearArchiveCache() function, expected prototype:\nvoid osgDB::Registry::clearArchiveCache()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::Registry::clearArchiveCache(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->clearArchiveCache();

		return 0;
	}

	// void osgDB::Registry::releaseGLObjects(osg::State * state = 0)
	static int _bind_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::Registry::releaseGLObjects(osg::State * state = 0) function, expected prototype:\nvoid osgDB::Registry::releaseGLObjects(osg::State * state = 0)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* state=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::Registry::releaseGLObjects(osg::State *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->releaseGLObjects(state);

		return 0;
	}

	// osgDB::DynamicLibrary * osgDB::Registry::getLibrary(const std::string & fileName)
	static int _bind_getLibrary(lua_State *L) {
		if (!_lg_typecheck_getLibrary(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::DynamicLibrary * osgDB::Registry::getLibrary(const std::string & fileName) function, expected prototype:\nosgDB::DynamicLibrary * osgDB::Registry::getLibrary(const std::string & fileName)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string fileName(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::DynamicLibrary * osgDB::Registry::getLibrary(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::DynamicLibrary * lret = self->getLibrary(fileName);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::DynamicLibrary >::push(L,lret,false);

		return 1;
	}

	// void osgDB::Registry::setSharedStateManager(osgDB::SharedStateManager * SharedStateManager)
	static int _bind_setSharedStateManager(lua_State *L) {
		if (!_lg_typecheck_setSharedStateManager(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::Registry::setSharedStateManager(osgDB::SharedStateManager * SharedStateManager) function, expected prototype:\nvoid osgDB::Registry::setSharedStateManager(osgDB::SharedStateManager * SharedStateManager)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::SharedStateManager* SharedStateManager=(Luna< osg::Referenced >::checkSubType< osgDB::SharedStateManager >(L,2));

		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::Registry::setSharedStateManager(osgDB::SharedStateManager *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setSharedStateManager(SharedStateManager);

		return 0;
	}

	// osgDB::SharedStateManager * osgDB::Registry::getOrCreateSharedStateManager()
	static int _bind_getOrCreateSharedStateManager(lua_State *L) {
		if (!_lg_typecheck_getOrCreateSharedStateManager(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::SharedStateManager * osgDB::Registry::getOrCreateSharedStateManager() function, expected prototype:\nosgDB::SharedStateManager * osgDB::Registry::getOrCreateSharedStateManager()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::SharedStateManager * osgDB::Registry::getOrCreateSharedStateManager(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::SharedStateManager * lret = self->getOrCreateSharedStateManager();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::SharedStateManager >::push(L,lret,false);

		return 1;
	}

	// osgDB::SharedStateManager * osgDB::Registry::getSharedStateManager()
	static int _bind_getSharedStateManager(lua_State *L) {
		if (!_lg_typecheck_getSharedStateManager(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::SharedStateManager * osgDB::Registry::getSharedStateManager() function, expected prototype:\nosgDB::SharedStateManager * osgDB::Registry::getSharedStateManager()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::SharedStateManager * osgDB::Registry::getSharedStateManager(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::SharedStateManager * lret = self->getSharedStateManager();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::SharedStateManager >::push(L,lret,false);

		return 1;
	}

	// void osgDB::Registry::addArchiveExtension(const std::string ext)
	static int _bind_addArchiveExtension(lua_State *L) {
		if (!_lg_typecheck_addArchiveExtension(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::Registry::addArchiveExtension(const std::string ext) function, expected prototype:\nvoid osgDB::Registry::addArchiveExtension(const std::string ext)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string ext(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::Registry::addArchiveExtension(const std::string). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addArchiveExtension(ext);

		return 0;
	}

	// void osgDB::Registry::registerProtocol(const std::string & protocol)
	static int _bind_registerProtocol(lua_State *L) {
		if (!_lg_typecheck_registerProtocol(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::Registry::registerProtocol(const std::string & protocol) function, expected prototype:\nvoid osgDB::Registry::registerProtocol(const std::string & protocol)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string protocol(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::Registry::registerProtocol(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->registerProtocol(protocol);

		return 0;
	}

	// bool osgDB::Registry::isProtocolRegistered(const std::string & protocol)
	static int _bind_isProtocolRegistered(lua_State *L) {
		if (!_lg_typecheck_isProtocolRegistered(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::Registry::isProtocolRegistered(const std::string & protocol) function, expected prototype:\nbool osgDB::Registry::isProtocolRegistered(const std::string & protocol)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string protocol(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::Registry::isProtocolRegistered(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isProtocolRegistered(protocol);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// osgDB::ObjectWrapperManager * osgDB::Registry::getObjectWrapperManager()
	static int _bind_getObjectWrapperManager(lua_State *L) {
		if (!_lg_typecheck_getObjectWrapperManager(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ObjectWrapperManager * osgDB::Registry::getObjectWrapperManager() function, expected prototype:\nosgDB::ObjectWrapperManager * osgDB::Registry::getObjectWrapperManager()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ObjectWrapperManager * osgDB::Registry::getObjectWrapperManager(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ObjectWrapperManager * lret = self->getObjectWrapperManager();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ObjectWrapperManager >::push(L,lret,false);

		return 1;
	}

	// const osgDB::Registry::ArchiveExtensionList & osgDB::Registry::getArchiveExtensions() const
	static int _bind_getArchiveExtensions(lua_State *L) {
		if (!_lg_typecheck_getArchiveExtensions(L)) {
			luaL_error(L, "luna typecheck failed in const osgDB::Registry::ArchiveExtensionList & osgDB::Registry::getArchiveExtensions() const function, expected prototype:\nconst osgDB::Registry::ArchiveExtensionList & osgDB::Registry::getArchiveExtensions() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgDB::Registry::ArchiveExtensionList & osgDB::Registry::getArchiveExtensions() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::Registry::ArchiveExtensionList* lret = &self->getArchiveExtensions();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::Registry::ArchiveExtensionList >::push(L,lret,false);

		return 1;
	}

	// void osgDB::Registry::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::Registry::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgDB::Registry::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgDB::Registry* self=Luna< osg::Referenced >::checkSubType< osgDB::Registry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::Registry::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Registry::setThreadSafeRefUnref(threadSafe);

		return 0;
	}


	// Operator binds:

};

osgDB::Registry* LunaTraits< osgDB::Registry >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osgDB::Registry >::_bind_dtor(osgDB::Registry* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgDB::Registry >::className[] = "Registry";
const char LunaTraits< osgDB::Registry >::fullName[] = "osgDB::Registry";
const char LunaTraits< osgDB::Registry >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::Registry >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osgDB::Registry >::hash = 71342862;
const int LunaTraits< osgDB::Registry >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgDB::Registry >::methods[] = {
	{"instance", &luna_wrapper_osgDB_Registry::_bind_instance},
	{"readCommandLine", &luna_wrapper_osgDB_Registry::_bind_readCommandLine},
	{"addFileExtensionAlias", &luna_wrapper_osgDB_Registry::_bind_addFileExtensionAlias},
	{"readPluginAliasConfigurationFile", &luna_wrapper_osgDB_Registry::_bind_readPluginAliasConfigurationFile},
	{"addMimeTypeExtensionMapping", &luna_wrapper_osgDB_Registry::_bind_addMimeTypeExtensionMapping},
	{"getMimeTypeExtensionMap", &luna_wrapper_osgDB_Registry::_bind_getMimeTypeExtensionMap},
	{"addReaderWriter", &luna_wrapper_osgDB_Registry::_bind_addReaderWriter},
	{"removeReaderWriter", &luna_wrapper_osgDB_Registry::_bind_removeReaderWriter},
	{"addImageProcessor", &luna_wrapper_osgDB_Registry::_bind_addImageProcessor},
	{"removeImageProcessor", &luna_wrapper_osgDB_Registry::_bind_removeImageProcessor},
	{"createLibraryNameForFile", &luna_wrapper_osgDB_Registry::_bind_createLibraryNameForFile},
	{"createLibraryNameForExtension", &luna_wrapper_osgDB_Registry::_bind_createLibraryNameForExtension},
	{"createLibraryNameForNodeKit", &luna_wrapper_osgDB_Registry::_bind_createLibraryNameForNodeKit},
	{"loadLibrary", &luna_wrapper_osgDB_Registry::_bind_loadLibrary},
	{"closeLibrary", &luna_wrapper_osgDB_Registry::_bind_closeLibrary},
	{"closeAllLibraries", &luna_wrapper_osgDB_Registry::_bind_closeAllLibraries},
	{"getReaderWriterForExtension", &luna_wrapper_osgDB_Registry::_bind_getReaderWriterForExtension},
	{"getReaderWriterForMimeType", &luna_wrapper_osgDB_Registry::_bind_getReaderWriterForMimeType},
	{"getReaderWriterList", &luna_wrapper_osgDB_Registry::_bind_getReaderWriterList},
	{"getReaderWriterListForProtocol", &luna_wrapper_osgDB_Registry::_bind_getReaderWriterListForProtocol},
	{"getReaderWriterForProtocolAndExtension", &luna_wrapper_osgDB_Registry::_bind_getReaderWriterForProtocolAndExtension},
	{"getImageProcessor", &luna_wrapper_osgDB_Registry::_bind_getImageProcessor},
	{"getImageProcessorForExtension", &luna_wrapper_osgDB_Registry::_bind_getImageProcessorForExtension},
	{"getImageProcessorList", &luna_wrapper_osgDB_Registry::_bind_getImageProcessorList},
	{"setFindFileCallback", &luna_wrapper_osgDB_Registry::_bind_setFindFileCallback},
	{"getFindFileCallback", &luna_wrapper_osgDB_Registry::_bind_getFindFileCallback},
	{"findDataFile", &luna_wrapper_osgDB_Registry::_bind_findDataFile},
	{"findDataFileImplementation", &luna_wrapper_osgDB_Registry::_bind_findDataFileImplementation},
	{"findLibraryFile", &luna_wrapper_osgDB_Registry::_bind_findLibraryFile},
	{"findLibraryFileImplementation", &luna_wrapper_osgDB_Registry::_bind_findLibraryFileImplementation},
	{"setReadFileCallback", &luna_wrapper_osgDB_Registry::_bind_setReadFileCallback},
	{"getReadFileCallback", &luna_wrapper_osgDB_Registry::_bind_getReadFileCallback},
	{"openArchive", &luna_wrapper_osgDB_Registry::_bind_openArchive},
	{"openArchiveImplementation", &luna_wrapper_osgDB_Registry::_bind_openArchiveImplementation},
	{"readObject", &luna_wrapper_osgDB_Registry::_bind_readObject},
	{"readObjectImplementation", &luna_wrapper_osgDB_Registry::_bind_readObjectImplementation},
	{"readImage", &luna_wrapper_osgDB_Registry::_bind_readImage},
	{"readImageImplementation", &luna_wrapper_osgDB_Registry::_bind_readImageImplementation},
	{"readHeightField", &luna_wrapper_osgDB_Registry::_bind_readHeightField},
	{"readHeightFieldImplementation", &luna_wrapper_osgDB_Registry::_bind_readHeightFieldImplementation},
	{"readNode", &luna_wrapper_osgDB_Registry::_bind_readNode},
	{"readNodeImplementation", &luna_wrapper_osgDB_Registry::_bind_readNodeImplementation},
	{"readShader", &luna_wrapper_osgDB_Registry::_bind_readShader},
	{"readShaderImplementation", &luna_wrapper_osgDB_Registry::_bind_readShaderImplementation},
	{"setWriteFileCallback", &luna_wrapper_osgDB_Registry::_bind_setWriteFileCallback},
	{"getWriteFileCallback", &luna_wrapper_osgDB_Registry::_bind_getWriteFileCallback},
	{"writeObject", &luna_wrapper_osgDB_Registry::_bind_writeObject},
	{"writeObjectImplementation", &luna_wrapper_osgDB_Registry::_bind_writeObjectImplementation},
	{"writeImage", &luna_wrapper_osgDB_Registry::_bind_writeImage},
	{"writeImageImplementation", &luna_wrapper_osgDB_Registry::_bind_writeImageImplementation},
	{"writeHeightField", &luna_wrapper_osgDB_Registry::_bind_writeHeightField},
	{"writeHeightFieldImplementation", &luna_wrapper_osgDB_Registry::_bind_writeHeightFieldImplementation},
	{"writeNode", &luna_wrapper_osgDB_Registry::_bind_writeNode},
	{"writeNodeImplementation", &luna_wrapper_osgDB_Registry::_bind_writeNodeImplementation},
	{"writeShader", &luna_wrapper_osgDB_Registry::_bind_writeShader},
	{"writeShaderImplementation", &luna_wrapper_osgDB_Registry::_bind_writeShaderImplementation},
	{"_buildKdTreeIfRequired", &luna_wrapper_osgDB_Registry::_bind__buildKdTreeIfRequired},
	{"setFileLocationCallback", &luna_wrapper_osgDB_Registry::_bind_setFileLocationCallback},
	{"getFileLocationCallback", &luna_wrapper_osgDB_Registry::_bind_getFileLocationCallback},
	{"setBuildKdTreesHint", &luna_wrapper_osgDB_Registry::_bind_setBuildKdTreesHint},
	{"getBuildKdTreesHint", &luna_wrapper_osgDB_Registry::_bind_getBuildKdTreesHint},
	{"setKdTreeBuilder", &luna_wrapper_osgDB_Registry::_bind_setKdTreeBuilder},
	{"getKdTreeBuilder", &luna_wrapper_osgDB_Registry::_bind_getKdTreeBuilder},
	{"setFileCache", &luna_wrapper_osgDB_Registry::_bind_setFileCache},
	{"getFileCache", &luna_wrapper_osgDB_Registry::_bind_getFileCache},
	{"getAuthenticationMap", &luna_wrapper_osgDB_Registry::_bind_getAuthenticationMap},
	{"setCreateNodeFromImage", &luna_wrapper_osgDB_Registry::_bind_setCreateNodeFromImage},
	{"getCreateNodeFromImage", &luna_wrapper_osgDB_Registry::_bind_getCreateNodeFromImage},
	{"setOptions", &luna_wrapper_osgDB_Registry::_bind_setOptions},
	{"getOptions", &luna_wrapper_osgDB_Registry::_bind_getOptions},
	{"initFilePathLists", &luna_wrapper_osgDB_Registry::_bind_initFilePathLists},
	{"initDataFilePathList", &luna_wrapper_osgDB_Registry::_bind_initDataFilePathList},
	{"setDataFilePathList", &luna_wrapper_osgDB_Registry::_bind_setDataFilePathList},
	{"getDataFilePathList", &luna_wrapper_osgDB_Registry::_bind_getDataFilePathList},
	{"initLibraryFilePathList", &luna_wrapper_osgDB_Registry::_bind_initLibraryFilePathList},
	{"setLibraryFilePathList", &luna_wrapper_osgDB_Registry::_bind_setLibraryFilePathList},
	{"getLibraryFilePathList", &luna_wrapper_osgDB_Registry::_bind_getLibraryFilePathList},
	{"updateTimeStampOfObjectsInCacheWithExternalReferences", &luna_wrapper_osgDB_Registry::_bind_updateTimeStampOfObjectsInCacheWithExternalReferences},
	{"removeExpiredObjectsInCache", &luna_wrapper_osgDB_Registry::_bind_removeExpiredObjectsInCache},
	{"setExpiryDelay", &luna_wrapper_osgDB_Registry::_bind_setExpiryDelay},
	{"getExpiryDelay", &luna_wrapper_osgDB_Registry::_bind_getExpiryDelay},
	{"clearObjectCache", &luna_wrapper_osgDB_Registry::_bind_clearObjectCache},
	{"addEntryToObjectCache", &luna_wrapper_osgDB_Registry::_bind_addEntryToObjectCache},
	{"removeFromObjectCache", &luna_wrapper_osgDB_Registry::_bind_removeFromObjectCache},
	{"getFromObjectCache", &luna_wrapper_osgDB_Registry::_bind_getFromObjectCache},
	{"getRefFromObjectCache", &luna_wrapper_osgDB_Registry::_bind_getRefFromObjectCache},
	{"addToArchiveCache", &luna_wrapper_osgDB_Registry::_bind_addToArchiveCache},
	{"removeFromArchiveCache", &luna_wrapper_osgDB_Registry::_bind_removeFromArchiveCache},
	{"getFromArchiveCache", &luna_wrapper_osgDB_Registry::_bind_getFromArchiveCache},
	{"getRefFromArchiveCache", &luna_wrapper_osgDB_Registry::_bind_getRefFromArchiveCache},
	{"clearArchiveCache", &luna_wrapper_osgDB_Registry::_bind_clearArchiveCache},
	{"releaseGLObjects", &luna_wrapper_osgDB_Registry::_bind_releaseGLObjects},
	{"getLibrary", &luna_wrapper_osgDB_Registry::_bind_getLibrary},
	{"setSharedStateManager", &luna_wrapper_osgDB_Registry::_bind_setSharedStateManager},
	{"getOrCreateSharedStateManager", &luna_wrapper_osgDB_Registry::_bind_getOrCreateSharedStateManager},
	{"getSharedStateManager", &luna_wrapper_osgDB_Registry::_bind_getSharedStateManager},
	{"addArchiveExtension", &luna_wrapper_osgDB_Registry::_bind_addArchiveExtension},
	{"registerProtocol", &luna_wrapper_osgDB_Registry::_bind_registerProtocol},
	{"isProtocolRegistered", &luna_wrapper_osgDB_Registry::_bind_isProtocolRegistered},
	{"getObjectWrapperManager", &luna_wrapper_osgDB_Registry::_bind_getObjectWrapperManager},
	{"getArchiveExtensions", &luna_wrapper_osgDB_Registry::_bind_getArchiveExtensions},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgDB_Registry::_bind_base_setThreadSafeRefUnref},
	{"fromVoid", &luna_wrapper_osgDB_Registry::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgDB_Registry::_bind_asVoid},
	{"getTable", &luna_wrapper_osgDB_Registry::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::Registry >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgDB_Registry::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::Registry >::enumValues[] = {
	{"NOT_LOADED", osgDB::Registry::NOT_LOADED},
	{"PREVIOUSLY_LOADED", osgDB::Registry::PREVIOUSLY_LOADED},
	{"LOADED", osgDB::Registry::LOADED},
	{0,0}
};



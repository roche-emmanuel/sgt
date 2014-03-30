#include <plug_common.h>

#include <luna/wrappers/wrapper_osgDB_Input.h>

class luna_wrapper_osgDB_Input {
public:
	typedef Luna< osgDB::Input > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::FieldReaderIterator* self=(Luna< osgDB::FieldReaderIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<osgDB::FieldReaderIterator,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
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

		osgDB::Input* self= (osgDB::Input*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgDB::Input >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,2696163) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osgDB::FieldReaderIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_FieldReaderIterator(lua_State *L) {
		// all checked are already performed before reaching this point.
		//osgDB::Input* ptr= dynamic_cast< osgDB::Input* >(Luna< osgDB::FieldReaderIterator >::check(L,1));
		osgDB::Input* ptr= luna_caster< osgDB::FieldReaderIterator, osgDB::Input >::cast(Luna< osgDB::FieldReaderIterator >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgDB::Input >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_setOptions(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getOptions(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_readObjectOfType_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readObjectOfType_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56095127) ) return false;
		if( (!(Luna< osgDB::basic_type_wrapper >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readObject_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_readObject_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readImage_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_readImage_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readDrawable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_readStateAttribute(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_readUniform(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_readNode_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_readNode_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readShader_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_readShader_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getObjectForUniqueID(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_registerUniqueIDForObject(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_read_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_read_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_read_overload_3(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,4))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_read_overload_4(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,5))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_read_overload_5(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,5))) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,6))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_read_overload_6(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,5))) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,6))) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,7))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_read_overload_7(lua_State *L) {
		if( lua_gettop(L)!=8 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,5))) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,6))) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,7))) ) return false;
		if( !Luna<void>::has_uniqueid(L,8,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,8))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_read_overload_8(lua_State *L) {
		if( lua_gettop(L)!=9 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,5))) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,6))) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,7))) ) return false;
		if( !Luna<void>::has_uniqueid(L,8,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,8))) ) return false;
		if( !Luna<void>::has_uniqueid(L,9,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,9))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_read_overload_9(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_read_overload_10(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,3,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_read_overload_11(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,3,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,4))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_read_overload_12(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,3,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,5))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_read_overload_13(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,3,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,5))) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,6))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_read_overload_14(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,3,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,5))) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,6))) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,7))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_read_overload_15(lua_State *L) {
		if( lua_gettop(L)!=8 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,3,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,5))) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,6))) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,7))) ) return false;
		if( !Luna<void>::has_uniqueid(L,8,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,8))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_read_overload_16(lua_State *L) {
		if( lua_gettop(L)!=9 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,3,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,5))) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,6))) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,7))) ) return false;
		if( !Luna<void>::has_uniqueid(L,8,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,8))) ) return false;
		if( !Luna<void>::has_uniqueid(L,9,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,9))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_read_overload_17(lua_State *L) {
		if( lua_gettop(L)!=10 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,3,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,5))) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,6))) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,7))) ) return false;
		if( !Luna<void>::has_uniqueid(L,8,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,8))) ) return false;
		if( !Luna<void>::has_uniqueid(L,9,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,9))) ) return false;
		if( !Luna<void>::has_uniqueid(L,10,67360031) ) return false;
		if( (!(Luna< osg::ArgumentParser::Parameter >::check(L,10))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_eof(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_readObjectOfType_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_readObjectOfType_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56095127) ) return false;
		if( (!(Luna< osgDB::basic_type_wrapper >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_readObject_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_readObject_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_readImage_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_readImage_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_readDrawable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_readStateAttribute(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_readUniform(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_readNode_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_readNode_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_readShader_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_readShader_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getObjectForUniqueID(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_registerUniqueIDForObject(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgDB::Input::Input()
	static osgDB::Input* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::Input::Input() function, expected prototype:\nosgDB::Input::Input()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osgDB::Input();
	}

	// osgDB::Input::Input(lua_Table * data)
	static osgDB::Input* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::Input::Input(lua_Table * data) function, expected prototype:\nosgDB::Input::Input(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgDB_Input(L,NULL);
	}

	// Overload binder for osgDB::Input::Input
	static osgDB::Input* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Input, cannot match any of the overloads for function Input:\n  Input()\n  Input(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void osgDB::Input::setOptions(const osgDB::Options * options)
	static int _bind_setOptions(lua_State *L) {
		if (!_lg_typecheck_setOptions(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::Input::setOptions(const osgDB::Options * options) function, expected prototype:\nvoid osgDB::Input::setOptions(const osgDB::Options * options)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,2));

		osgDB::Input* self=Luna< osgDB::FieldReaderIterator >::checkSubType< osgDB::Input >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::Input::setOptions(const osgDB::Options *). Got : '%s'\n%s",typeid(Luna< osgDB::FieldReaderIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setOptions(options);

		return 0;
	}

	// const osgDB::Options * osgDB::Input::getOptions() const
	static int _bind_getOptions(lua_State *L) {
		if (!_lg_typecheck_getOptions(L)) {
			luaL_error(L, "luna typecheck failed in const osgDB::Options * osgDB::Input::getOptions() const function, expected prototype:\nconst osgDB::Options * osgDB::Input::getOptions() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::Input* self=Luna< osgDB::FieldReaderIterator >::checkSubType< osgDB::Input >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgDB::Options * osgDB::Input::getOptions() const. Got : '%s'\n%s",typeid(Luna< osgDB::FieldReaderIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::Options * lret = self->getOptions();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::Options >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgDB::Input::readObjectOfType(const osg::Object & compObj)
	static int _bind_readObjectOfType_overload_1(lua_State *L) {
		if (!_lg_typecheck_readObjectOfType_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgDB::Input::readObjectOfType(const osg::Object & compObj) function, expected prototype:\nosg::Object * osgDB::Input::readObjectOfType(const osg::Object & compObj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* compObj_ptr=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));
		if( !compObj_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg compObj in osgDB::Input::readObjectOfType function");
		}
		const osg::Object & compObj=*compObj_ptr;

		osgDB::Input* self=Luna< osgDB::FieldReaderIterator >::checkSubType< osgDB::Input >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgDB::Input::readObjectOfType(const osg::Object &). Got : '%s'\n%s",typeid(Luna< osgDB::FieldReaderIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->readObjectOfType(compObj);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgDB::Input::readObjectOfType(const osgDB::basic_type_wrapper & btw)
	static int _bind_readObjectOfType_overload_2(lua_State *L) {
		if (!_lg_typecheck_readObjectOfType_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgDB::Input::readObjectOfType(const osgDB::basic_type_wrapper & btw) function, expected prototype:\nosg::Object * osgDB::Input::readObjectOfType(const osgDB::basic_type_wrapper & btw)\nClass arguments details:\narg 1 ID = 56095127\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgDB::basic_type_wrapper* btw_ptr=(Luna< osgDB::basic_type_wrapper >::check(L,2));
		if( !btw_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg btw in osgDB::Input::readObjectOfType function");
		}
		const osgDB::basic_type_wrapper & btw=*btw_ptr;

		osgDB::Input* self=Luna< osgDB::FieldReaderIterator >::checkSubType< osgDB::Input >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgDB::Input::readObjectOfType(const osgDB::basic_type_wrapper &). Got : '%s'\n%s",typeid(Luna< osgDB::FieldReaderIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->readObjectOfType(btw);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgDB::Input::readObjectOfType
	static int _bind_readObjectOfType(lua_State *L) {
		if (_lg_typecheck_readObjectOfType_overload_1(L)) return _bind_readObjectOfType_overload_1(L);
		if (_lg_typecheck_readObjectOfType_overload_2(L)) return _bind_readObjectOfType_overload_2(L);

		luaL_error(L, "error in function readObjectOfType, cannot match any of the overloads for function readObjectOfType:\n  readObjectOfType(const osg::Object &)\n  readObjectOfType(const osgDB::basic_type_wrapper &)\n");
		return 0;
	}

	// osg::Object * osgDB::Input::readObject()
	static int _bind_readObject_overload_1(lua_State *L) {
		if (!_lg_typecheck_readObject_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgDB::Input::readObject() function, expected prototype:\nosg::Object * osgDB::Input::readObject()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::Input* self=Luna< osgDB::FieldReaderIterator >::checkSubType< osgDB::Input >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgDB::Input::readObject(). Got : '%s'\n%s",typeid(Luna< osgDB::FieldReaderIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->readObject();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgDB::Input::readObject(const std::string & fileName)
	static int _bind_readObject_overload_2(lua_State *L) {
		if (!_lg_typecheck_readObject_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgDB::Input::readObject(const std::string & fileName) function, expected prototype:\nosg::Object * osgDB::Input::readObject(const std::string & fileName)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string fileName(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::Input* self=Luna< osgDB::FieldReaderIterator >::checkSubType< osgDB::Input >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgDB::Input::readObject(const std::string &). Got : '%s'\n%s",typeid(Luna< osgDB::FieldReaderIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->readObject(fileName);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgDB::Input::readObject
	static int _bind_readObject(lua_State *L) {
		if (_lg_typecheck_readObject_overload_1(L)) return _bind_readObject_overload_1(L);
		if (_lg_typecheck_readObject_overload_2(L)) return _bind_readObject_overload_2(L);

		luaL_error(L, "error in function readObject, cannot match any of the overloads for function readObject:\n  readObject()\n  readObject(const std::string &)\n");
		return 0;
	}

	// osg::Image * osgDB::Input::readImage()
	static int _bind_readImage_overload_1(lua_State *L) {
		if (!_lg_typecheck_readImage_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Image * osgDB::Input::readImage() function, expected prototype:\nosg::Image * osgDB::Input::readImage()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::Input* self=Luna< osgDB::FieldReaderIterator >::checkSubType< osgDB::Input >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Image * osgDB::Input::readImage(). Got : '%s'\n%s",typeid(Luna< osgDB::FieldReaderIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Image * lret = self->readImage();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Image >::push(L,lret,false);

		return 1;
	}

	// osg::Image * osgDB::Input::readImage(const std::string & fileName)
	static int _bind_readImage_overload_2(lua_State *L) {
		if (!_lg_typecheck_readImage_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Image * osgDB::Input::readImage(const std::string & fileName) function, expected prototype:\nosg::Image * osgDB::Input::readImage(const std::string & fileName)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string fileName(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::Input* self=Luna< osgDB::FieldReaderIterator >::checkSubType< osgDB::Input >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Image * osgDB::Input::readImage(const std::string &). Got : '%s'\n%s",typeid(Luna< osgDB::FieldReaderIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Image * lret = self->readImage(fileName);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Image >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgDB::Input::readImage
	static int _bind_readImage(lua_State *L) {
		if (_lg_typecheck_readImage_overload_1(L)) return _bind_readImage_overload_1(L);
		if (_lg_typecheck_readImage_overload_2(L)) return _bind_readImage_overload_2(L);

		luaL_error(L, "error in function readImage, cannot match any of the overloads for function readImage:\n  readImage()\n  readImage(const std::string &)\n");
		return 0;
	}

	// osg::Drawable * osgDB::Input::readDrawable()
	static int _bind_readDrawable(lua_State *L) {
		if (!_lg_typecheck_readDrawable(L)) {
			luaL_error(L, "luna typecheck failed in osg::Drawable * osgDB::Input::readDrawable() function, expected prototype:\nosg::Drawable * osgDB::Input::readDrawable()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::Input* self=Luna< osgDB::FieldReaderIterator >::checkSubType< osgDB::Input >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Drawable * osgDB::Input::readDrawable(). Got : '%s'\n%s",typeid(Luna< osgDB::FieldReaderIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Drawable * lret = self->readDrawable();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Drawable >::push(L,lret,false);

		return 1;
	}

	// osg::StateAttribute * osgDB::Input::readStateAttribute()
	static int _bind_readStateAttribute(lua_State *L) {
		if (!_lg_typecheck_readStateAttribute(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateAttribute * osgDB::Input::readStateAttribute() function, expected prototype:\nosg::StateAttribute * osgDB::Input::readStateAttribute()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::Input* self=Luna< osgDB::FieldReaderIterator >::checkSubType< osgDB::Input >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateAttribute * osgDB::Input::readStateAttribute(). Got : '%s'\n%s",typeid(Luna< osgDB::FieldReaderIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::StateAttribute * lret = self->readStateAttribute();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateAttribute >::push(L,lret,false);

		return 1;
	}

	// osg::Uniform * osgDB::Input::readUniform()
	static int _bind_readUniform(lua_State *L) {
		if (!_lg_typecheck_readUniform(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform * osgDB::Input::readUniform() function, expected prototype:\nosg::Uniform * osgDB::Input::readUniform()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::Input* self=Luna< osgDB::FieldReaderIterator >::checkSubType< osgDB::Input >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Uniform * osgDB::Input::readUniform(). Got : '%s'\n%s",typeid(Luna< osgDB::FieldReaderIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Uniform * lret = self->readUniform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Uniform >::push(L,lret,false);

		return 1;
	}

	// osg::Node * osgDB::Input::readNode()
	static int _bind_readNode_overload_1(lua_State *L) {
		if (!_lg_typecheck_readNode_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Node * osgDB::Input::readNode() function, expected prototype:\nosg::Node * osgDB::Input::readNode()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::Input* self=Luna< osgDB::FieldReaderIterator >::checkSubType< osgDB::Input >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Node * osgDB::Input::readNode(). Got : '%s'\n%s",typeid(Luna< osgDB::FieldReaderIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Node * lret = self->readNode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Node >::push(L,lret,false);

		return 1;
	}

	// osg::Node * osgDB::Input::readNode(const std::string & fileName)
	static int _bind_readNode_overload_2(lua_State *L) {
		if (!_lg_typecheck_readNode_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Node * osgDB::Input::readNode(const std::string & fileName) function, expected prototype:\nosg::Node * osgDB::Input::readNode(const std::string & fileName)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string fileName(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::Input* self=Luna< osgDB::FieldReaderIterator >::checkSubType< osgDB::Input >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Node * osgDB::Input::readNode(const std::string &). Got : '%s'\n%s",typeid(Luna< osgDB::FieldReaderIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Node * lret = self->readNode(fileName);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Node >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgDB::Input::readNode
	static int _bind_readNode(lua_State *L) {
		if (_lg_typecheck_readNode_overload_1(L)) return _bind_readNode_overload_1(L);
		if (_lg_typecheck_readNode_overload_2(L)) return _bind_readNode_overload_2(L);

		luaL_error(L, "error in function readNode, cannot match any of the overloads for function readNode:\n  readNode()\n  readNode(const std::string &)\n");
		return 0;
	}

	// osg::Shader * osgDB::Input::readShader()
	static int _bind_readShader_overload_1(lua_State *L) {
		if (!_lg_typecheck_readShader_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Shader * osgDB::Input::readShader() function, expected prototype:\nosg::Shader * osgDB::Input::readShader()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::Input* self=Luna< osgDB::FieldReaderIterator >::checkSubType< osgDB::Input >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Shader * osgDB::Input::readShader(). Got : '%s'\n%s",typeid(Luna< osgDB::FieldReaderIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Shader * lret = self->readShader();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Shader >::push(L,lret,false);

		return 1;
	}

	// osg::Shader * osgDB::Input::readShader(const std::string & fileName)
	static int _bind_readShader_overload_2(lua_State *L) {
		if (!_lg_typecheck_readShader_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Shader * osgDB::Input::readShader(const std::string & fileName) function, expected prototype:\nosg::Shader * osgDB::Input::readShader(const std::string & fileName)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string fileName(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::Input* self=Luna< osgDB::FieldReaderIterator >::checkSubType< osgDB::Input >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Shader * osgDB::Input::readShader(const std::string &). Got : '%s'\n%s",typeid(Luna< osgDB::FieldReaderIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Shader * lret = self->readShader(fileName);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Shader >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgDB::Input::readShader
	static int _bind_readShader(lua_State *L) {
		if (_lg_typecheck_readShader_overload_1(L)) return _bind_readShader_overload_1(L);
		if (_lg_typecheck_readShader_overload_2(L)) return _bind_readShader_overload_2(L);

		luaL_error(L, "error in function readShader, cannot match any of the overloads for function readShader:\n  readShader()\n  readShader(const std::string &)\n");
		return 0;
	}

	// osg::Object * osgDB::Input::getObjectForUniqueID(const std::string & uniqueID)
	static int _bind_getObjectForUniqueID(lua_State *L) {
		if (!_lg_typecheck_getObjectForUniqueID(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgDB::Input::getObjectForUniqueID(const std::string & uniqueID) function, expected prototype:\nosg::Object * osgDB::Input::getObjectForUniqueID(const std::string & uniqueID)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string uniqueID(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::Input* self=Luna< osgDB::FieldReaderIterator >::checkSubType< osgDB::Input >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgDB::Input::getObjectForUniqueID(const std::string &). Got : '%s'\n%s",typeid(Luna< osgDB::FieldReaderIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->getObjectForUniqueID(uniqueID);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// void osgDB::Input::registerUniqueIDForObject(const std::string & uniqueID, osg::Object * obj)
	static int _bind_registerUniqueIDForObject(lua_State *L) {
		if (!_lg_typecheck_registerUniqueIDForObject(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::Input::registerUniqueIDForObject(const std::string & uniqueID, osg::Object * obj) function, expected prototype:\nvoid osgDB::Input::registerUniqueIDForObject(const std::string & uniqueID, osg::Object * obj)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string uniqueID(lua_tostring(L,2),lua_objlen(L,2));
		osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,3));

		osgDB::Input* self=Luna< osgDB::FieldReaderIterator >::checkSubType< osgDB::Input >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::Input::registerUniqueIDForObject(const std::string &, osg::Object *). Got : '%s'\n%s",typeid(Luna< osgDB::FieldReaderIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->registerUniqueIDForObject(uniqueID, obj);

		return 0;
	}

	// bool osgDB::Input::read(osg::ArgumentParser::Parameter value1)
	static int _bind_read_overload_1(lua_State *L) {
		if (!_lg_typecheck_read_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::Input::read(osg::ArgumentParser::Parameter value1) function, expected prototype:\nbool osgDB::Input::read(osg::ArgumentParser::Parameter value1)\nClass arguments details:\narg 1 ID = 67360031\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ArgumentParser::Parameter* value1_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,2));
		if( !value1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value1 in osgDB::Input::read function");
		}
		osg::ArgumentParser::Parameter value1=*value1_ptr;

		osgDB::Input* self=Luna< osgDB::FieldReaderIterator >::checkSubType< osgDB::Input >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::Input::read(osg::ArgumentParser::Parameter). Got : '%s'\n%s",typeid(Luna< osgDB::FieldReaderIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->read(value1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::Input::read(osg::ArgumentParser::Parameter value1, osg::ArgumentParser::Parameter value2)
	static int _bind_read_overload_2(lua_State *L) {
		if (!_lg_typecheck_read_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::Input::read(osg::ArgumentParser::Parameter value1, osg::ArgumentParser::Parameter value2) function, expected prototype:\nbool osgDB::Input::read(osg::ArgumentParser::Parameter value1, osg::ArgumentParser::Parameter value2)\nClass arguments details:\narg 1 ID = 67360031\narg 2 ID = 67360031\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ArgumentParser::Parameter* value1_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,2));
		if( !value1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value1 in osgDB::Input::read function");
		}
		osg::ArgumentParser::Parameter value1=*value1_ptr;
		osg::ArgumentParser::Parameter* value2_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,3));
		if( !value2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value2 in osgDB::Input::read function");
		}
		osg::ArgumentParser::Parameter value2=*value2_ptr;

		osgDB::Input* self=Luna< osgDB::FieldReaderIterator >::checkSubType< osgDB::Input >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::Input::read(osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter). Got : '%s'\n%s",typeid(Luna< osgDB::FieldReaderIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->read(value1, value2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::Input::read(osg::ArgumentParser::Parameter value1, osg::ArgumentParser::Parameter value2, osg::ArgumentParser::Parameter value3)
	static int _bind_read_overload_3(lua_State *L) {
		if (!_lg_typecheck_read_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::Input::read(osg::ArgumentParser::Parameter value1, osg::ArgumentParser::Parameter value2, osg::ArgumentParser::Parameter value3) function, expected prototype:\nbool osgDB::Input::read(osg::ArgumentParser::Parameter value1, osg::ArgumentParser::Parameter value2, osg::ArgumentParser::Parameter value3)\nClass arguments details:\narg 1 ID = 67360031\narg 2 ID = 67360031\narg 3 ID = 67360031\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ArgumentParser::Parameter* value1_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,2));
		if( !value1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value1 in osgDB::Input::read function");
		}
		osg::ArgumentParser::Parameter value1=*value1_ptr;
		osg::ArgumentParser::Parameter* value2_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,3));
		if( !value2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value2 in osgDB::Input::read function");
		}
		osg::ArgumentParser::Parameter value2=*value2_ptr;
		osg::ArgumentParser::Parameter* value3_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,4));
		if( !value3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value3 in osgDB::Input::read function");
		}
		osg::ArgumentParser::Parameter value3=*value3_ptr;

		osgDB::Input* self=Luna< osgDB::FieldReaderIterator >::checkSubType< osgDB::Input >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::Input::read(osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter). Got : '%s'\n%s",typeid(Luna< osgDB::FieldReaderIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->read(value1, value2, value3);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::Input::read(osg::ArgumentParser::Parameter value1, osg::ArgumentParser::Parameter value2, osg::ArgumentParser::Parameter value3, osg::ArgumentParser::Parameter value4)
	static int _bind_read_overload_4(lua_State *L) {
		if (!_lg_typecheck_read_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::Input::read(osg::ArgumentParser::Parameter value1, osg::ArgumentParser::Parameter value2, osg::ArgumentParser::Parameter value3, osg::ArgumentParser::Parameter value4) function, expected prototype:\nbool osgDB::Input::read(osg::ArgumentParser::Parameter value1, osg::ArgumentParser::Parameter value2, osg::ArgumentParser::Parameter value3, osg::ArgumentParser::Parameter value4)\nClass arguments details:\narg 1 ID = 67360031\narg 2 ID = 67360031\narg 3 ID = 67360031\narg 4 ID = 67360031\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ArgumentParser::Parameter* value1_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,2));
		if( !value1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value1 in osgDB::Input::read function");
		}
		osg::ArgumentParser::Parameter value1=*value1_ptr;
		osg::ArgumentParser::Parameter* value2_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,3));
		if( !value2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value2 in osgDB::Input::read function");
		}
		osg::ArgumentParser::Parameter value2=*value2_ptr;
		osg::ArgumentParser::Parameter* value3_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,4));
		if( !value3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value3 in osgDB::Input::read function");
		}
		osg::ArgumentParser::Parameter value3=*value3_ptr;
		osg::ArgumentParser::Parameter* value4_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,5));
		if( !value4_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value4 in osgDB::Input::read function");
		}
		osg::ArgumentParser::Parameter value4=*value4_ptr;

		osgDB::Input* self=Luna< osgDB::FieldReaderIterator >::checkSubType< osgDB::Input >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::Input::read(osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter). Got : '%s'\n%s",typeid(Luna< osgDB::FieldReaderIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->read(value1, value2, value3, value4);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::Input::read(osg::ArgumentParser::Parameter value1, osg::ArgumentParser::Parameter value2, osg::ArgumentParser::Parameter value3, osg::ArgumentParser::Parameter value4, osg::ArgumentParser::Parameter value5)
	static int _bind_read_overload_5(lua_State *L) {
		if (!_lg_typecheck_read_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::Input::read(osg::ArgumentParser::Parameter value1, osg::ArgumentParser::Parameter value2, osg::ArgumentParser::Parameter value3, osg::ArgumentParser::Parameter value4, osg::ArgumentParser::Parameter value5) function, expected prototype:\nbool osgDB::Input::read(osg::ArgumentParser::Parameter value1, osg::ArgumentParser::Parameter value2, osg::ArgumentParser::Parameter value3, osg::ArgumentParser::Parameter value4, osg::ArgumentParser::Parameter value5)\nClass arguments details:\narg 1 ID = 67360031\narg 2 ID = 67360031\narg 3 ID = 67360031\narg 4 ID = 67360031\narg 5 ID = 67360031\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ArgumentParser::Parameter* value1_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,2));
		if( !value1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value1 in osgDB::Input::read function");
		}
		osg::ArgumentParser::Parameter value1=*value1_ptr;
		osg::ArgumentParser::Parameter* value2_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,3));
		if( !value2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value2 in osgDB::Input::read function");
		}
		osg::ArgumentParser::Parameter value2=*value2_ptr;
		osg::ArgumentParser::Parameter* value3_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,4));
		if( !value3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value3 in osgDB::Input::read function");
		}
		osg::ArgumentParser::Parameter value3=*value3_ptr;
		osg::ArgumentParser::Parameter* value4_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,5));
		if( !value4_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value4 in osgDB::Input::read function");
		}
		osg::ArgumentParser::Parameter value4=*value4_ptr;
		osg::ArgumentParser::Parameter* value5_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,6));
		if( !value5_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value5 in osgDB::Input::read function");
		}
		osg::ArgumentParser::Parameter value5=*value5_ptr;

		osgDB::Input* self=Luna< osgDB::FieldReaderIterator >::checkSubType< osgDB::Input >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::Input::read(osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter). Got : '%s'\n%s",typeid(Luna< osgDB::FieldReaderIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->read(value1, value2, value3, value4, value5);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::Input::read(osg::ArgumentParser::Parameter value1, osg::ArgumentParser::Parameter value2, osg::ArgumentParser::Parameter value3, osg::ArgumentParser::Parameter value4, osg::ArgumentParser::Parameter value5, osg::ArgumentParser::Parameter value6)
	static int _bind_read_overload_6(lua_State *L) {
		if (!_lg_typecheck_read_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::Input::read(osg::ArgumentParser::Parameter value1, osg::ArgumentParser::Parameter value2, osg::ArgumentParser::Parameter value3, osg::ArgumentParser::Parameter value4, osg::ArgumentParser::Parameter value5, osg::ArgumentParser::Parameter value6) function, expected prototype:\nbool osgDB::Input::read(osg::ArgumentParser::Parameter value1, osg::ArgumentParser::Parameter value2, osg::ArgumentParser::Parameter value3, osg::ArgumentParser::Parameter value4, osg::ArgumentParser::Parameter value5, osg::ArgumentParser::Parameter value6)\nClass arguments details:\narg 1 ID = 67360031\narg 2 ID = 67360031\narg 3 ID = 67360031\narg 4 ID = 67360031\narg 5 ID = 67360031\narg 6 ID = 67360031\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ArgumentParser::Parameter* value1_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,2));
		if( !value1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value1 in osgDB::Input::read function");
		}
		osg::ArgumentParser::Parameter value1=*value1_ptr;
		osg::ArgumentParser::Parameter* value2_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,3));
		if( !value2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value2 in osgDB::Input::read function");
		}
		osg::ArgumentParser::Parameter value2=*value2_ptr;
		osg::ArgumentParser::Parameter* value3_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,4));
		if( !value3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value3 in osgDB::Input::read function");
		}
		osg::ArgumentParser::Parameter value3=*value3_ptr;
		osg::ArgumentParser::Parameter* value4_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,5));
		if( !value4_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value4 in osgDB::Input::read function");
		}
		osg::ArgumentParser::Parameter value4=*value4_ptr;
		osg::ArgumentParser::Parameter* value5_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,6));
		if( !value5_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value5 in osgDB::Input::read function");
		}
		osg::ArgumentParser::Parameter value5=*value5_ptr;
		osg::ArgumentParser::Parameter* value6_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,7));
		if( !value6_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value6 in osgDB::Input::read function");
		}
		osg::ArgumentParser::Parameter value6=*value6_ptr;

		osgDB::Input* self=Luna< osgDB::FieldReaderIterator >::checkSubType< osgDB::Input >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::Input::read(osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter). Got : '%s'\n%s",typeid(Luna< osgDB::FieldReaderIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->read(value1, value2, value3, value4, value5, value6);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::Input::read(osg::ArgumentParser::Parameter value1, osg::ArgumentParser::Parameter value2, osg::ArgumentParser::Parameter value3, osg::ArgumentParser::Parameter value4, osg::ArgumentParser::Parameter value5, osg::ArgumentParser::Parameter value6, osg::ArgumentParser::Parameter value7)
	static int _bind_read_overload_7(lua_State *L) {
		if (!_lg_typecheck_read_overload_7(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::Input::read(osg::ArgumentParser::Parameter value1, osg::ArgumentParser::Parameter value2, osg::ArgumentParser::Parameter value3, osg::ArgumentParser::Parameter value4, osg::ArgumentParser::Parameter value5, osg::ArgumentParser::Parameter value6, osg::ArgumentParser::Parameter value7) function, expected prototype:\nbool osgDB::Input::read(osg::ArgumentParser::Parameter value1, osg::ArgumentParser::Parameter value2, osg::ArgumentParser::Parameter value3, osg::ArgumentParser::Parameter value4, osg::ArgumentParser::Parameter value5, osg::ArgumentParser::Parameter value6, osg::ArgumentParser::Parameter value7)\nClass arguments details:\narg 1 ID = 67360031\narg 2 ID = 67360031\narg 3 ID = 67360031\narg 4 ID = 67360031\narg 5 ID = 67360031\narg 6 ID = 67360031\narg 7 ID = 67360031\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ArgumentParser::Parameter* value1_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,2));
		if( !value1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value1 in osgDB::Input::read function");
		}
		osg::ArgumentParser::Parameter value1=*value1_ptr;
		osg::ArgumentParser::Parameter* value2_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,3));
		if( !value2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value2 in osgDB::Input::read function");
		}
		osg::ArgumentParser::Parameter value2=*value2_ptr;
		osg::ArgumentParser::Parameter* value3_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,4));
		if( !value3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value3 in osgDB::Input::read function");
		}
		osg::ArgumentParser::Parameter value3=*value3_ptr;
		osg::ArgumentParser::Parameter* value4_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,5));
		if( !value4_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value4 in osgDB::Input::read function");
		}
		osg::ArgumentParser::Parameter value4=*value4_ptr;
		osg::ArgumentParser::Parameter* value5_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,6));
		if( !value5_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value5 in osgDB::Input::read function");
		}
		osg::ArgumentParser::Parameter value5=*value5_ptr;
		osg::ArgumentParser::Parameter* value6_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,7));
		if( !value6_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value6 in osgDB::Input::read function");
		}
		osg::ArgumentParser::Parameter value6=*value6_ptr;
		osg::ArgumentParser::Parameter* value7_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,8));
		if( !value7_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value7 in osgDB::Input::read function");
		}
		osg::ArgumentParser::Parameter value7=*value7_ptr;

		osgDB::Input* self=Luna< osgDB::FieldReaderIterator >::checkSubType< osgDB::Input >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::Input::read(osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter). Got : '%s'\n%s",typeid(Luna< osgDB::FieldReaderIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->read(value1, value2, value3, value4, value5, value6, value7);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::Input::read(osg::ArgumentParser::Parameter value1, osg::ArgumentParser::Parameter value2, osg::ArgumentParser::Parameter value3, osg::ArgumentParser::Parameter value4, osg::ArgumentParser::Parameter value5, osg::ArgumentParser::Parameter value6, osg::ArgumentParser::Parameter value7, osg::ArgumentParser::Parameter value8)
	static int _bind_read_overload_8(lua_State *L) {
		if (!_lg_typecheck_read_overload_8(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::Input::read(osg::ArgumentParser::Parameter value1, osg::ArgumentParser::Parameter value2, osg::ArgumentParser::Parameter value3, osg::ArgumentParser::Parameter value4, osg::ArgumentParser::Parameter value5, osg::ArgumentParser::Parameter value6, osg::ArgumentParser::Parameter value7, osg::ArgumentParser::Parameter value8) function, expected prototype:\nbool osgDB::Input::read(osg::ArgumentParser::Parameter value1, osg::ArgumentParser::Parameter value2, osg::ArgumentParser::Parameter value3, osg::ArgumentParser::Parameter value4, osg::ArgumentParser::Parameter value5, osg::ArgumentParser::Parameter value6, osg::ArgumentParser::Parameter value7, osg::ArgumentParser::Parameter value8)\nClass arguments details:\narg 1 ID = 67360031\narg 2 ID = 67360031\narg 3 ID = 67360031\narg 4 ID = 67360031\narg 5 ID = 67360031\narg 6 ID = 67360031\narg 7 ID = 67360031\narg 8 ID = 67360031\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ArgumentParser::Parameter* value1_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,2));
		if( !value1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value1 in osgDB::Input::read function");
		}
		osg::ArgumentParser::Parameter value1=*value1_ptr;
		osg::ArgumentParser::Parameter* value2_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,3));
		if( !value2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value2 in osgDB::Input::read function");
		}
		osg::ArgumentParser::Parameter value2=*value2_ptr;
		osg::ArgumentParser::Parameter* value3_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,4));
		if( !value3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value3 in osgDB::Input::read function");
		}
		osg::ArgumentParser::Parameter value3=*value3_ptr;
		osg::ArgumentParser::Parameter* value4_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,5));
		if( !value4_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value4 in osgDB::Input::read function");
		}
		osg::ArgumentParser::Parameter value4=*value4_ptr;
		osg::ArgumentParser::Parameter* value5_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,6));
		if( !value5_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value5 in osgDB::Input::read function");
		}
		osg::ArgumentParser::Parameter value5=*value5_ptr;
		osg::ArgumentParser::Parameter* value6_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,7));
		if( !value6_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value6 in osgDB::Input::read function");
		}
		osg::ArgumentParser::Parameter value6=*value6_ptr;
		osg::ArgumentParser::Parameter* value7_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,8));
		if( !value7_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value7 in osgDB::Input::read function");
		}
		osg::ArgumentParser::Parameter value7=*value7_ptr;
		osg::ArgumentParser::Parameter* value8_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,9));
		if( !value8_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value8 in osgDB::Input::read function");
		}
		osg::ArgumentParser::Parameter value8=*value8_ptr;

		osgDB::Input* self=Luna< osgDB::FieldReaderIterator >::checkSubType< osgDB::Input >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::Input::read(osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter). Got : '%s'\n%s",typeid(Luna< osgDB::FieldReaderIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->read(value1, value2, value3, value4, value5, value6, value7, value8);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::Input::read(const char * str)
	static int _bind_read_overload_9(lua_State *L) {
		if (!_lg_typecheck_read_overload_9(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::Input::read(const char * str) function, expected prototype:\nbool osgDB::Input::read(const char * str)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * str=(const char *)lua_tostring(L,2);

		osgDB::Input* self=Luna< osgDB::FieldReaderIterator >::checkSubType< osgDB::Input >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::Input::read(const char *). Got : '%s'\n%s",typeid(Luna< osgDB::FieldReaderIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->read(str);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::Input::read(const char * str, osg::ArgumentParser::Parameter value1)
	static int _bind_read_overload_10(lua_State *L) {
		if (!_lg_typecheck_read_overload_10(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::Input::read(const char * str, osg::ArgumentParser::Parameter value1) function, expected prototype:\nbool osgDB::Input::read(const char * str, osg::ArgumentParser::Parameter value1)\nClass arguments details:\narg 2 ID = 67360031\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * str=(const char *)lua_tostring(L,2);
		osg::ArgumentParser::Parameter* value1_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,3));
		if( !value1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value1 in osgDB::Input::read function");
		}
		osg::ArgumentParser::Parameter value1=*value1_ptr;

		osgDB::Input* self=Luna< osgDB::FieldReaderIterator >::checkSubType< osgDB::Input >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::Input::read(const char *, osg::ArgumentParser::Parameter). Got : '%s'\n%s",typeid(Luna< osgDB::FieldReaderIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->read(str, value1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::Input::read(const char * str, osg::ArgumentParser::Parameter value1, osg::ArgumentParser::Parameter value2)
	static int _bind_read_overload_11(lua_State *L) {
		if (!_lg_typecheck_read_overload_11(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::Input::read(const char * str, osg::ArgumentParser::Parameter value1, osg::ArgumentParser::Parameter value2) function, expected prototype:\nbool osgDB::Input::read(const char * str, osg::ArgumentParser::Parameter value1, osg::ArgumentParser::Parameter value2)\nClass arguments details:\narg 2 ID = 67360031\narg 3 ID = 67360031\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * str=(const char *)lua_tostring(L,2);
		osg::ArgumentParser::Parameter* value1_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,3));
		if( !value1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value1 in osgDB::Input::read function");
		}
		osg::ArgumentParser::Parameter value1=*value1_ptr;
		osg::ArgumentParser::Parameter* value2_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,4));
		if( !value2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value2 in osgDB::Input::read function");
		}
		osg::ArgumentParser::Parameter value2=*value2_ptr;

		osgDB::Input* self=Luna< osgDB::FieldReaderIterator >::checkSubType< osgDB::Input >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::Input::read(const char *, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter). Got : '%s'\n%s",typeid(Luna< osgDB::FieldReaderIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->read(str, value1, value2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::Input::read(const char * str, osg::ArgumentParser::Parameter value1, osg::ArgumentParser::Parameter value2, osg::ArgumentParser::Parameter value3)
	static int _bind_read_overload_12(lua_State *L) {
		if (!_lg_typecheck_read_overload_12(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::Input::read(const char * str, osg::ArgumentParser::Parameter value1, osg::ArgumentParser::Parameter value2, osg::ArgumentParser::Parameter value3) function, expected prototype:\nbool osgDB::Input::read(const char * str, osg::ArgumentParser::Parameter value1, osg::ArgumentParser::Parameter value2, osg::ArgumentParser::Parameter value3)\nClass arguments details:\narg 2 ID = 67360031\narg 3 ID = 67360031\narg 4 ID = 67360031\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * str=(const char *)lua_tostring(L,2);
		osg::ArgumentParser::Parameter* value1_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,3));
		if( !value1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value1 in osgDB::Input::read function");
		}
		osg::ArgumentParser::Parameter value1=*value1_ptr;
		osg::ArgumentParser::Parameter* value2_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,4));
		if( !value2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value2 in osgDB::Input::read function");
		}
		osg::ArgumentParser::Parameter value2=*value2_ptr;
		osg::ArgumentParser::Parameter* value3_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,5));
		if( !value3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value3 in osgDB::Input::read function");
		}
		osg::ArgumentParser::Parameter value3=*value3_ptr;

		osgDB::Input* self=Luna< osgDB::FieldReaderIterator >::checkSubType< osgDB::Input >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::Input::read(const char *, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter). Got : '%s'\n%s",typeid(Luna< osgDB::FieldReaderIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->read(str, value1, value2, value3);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::Input::read(const char * str, osg::ArgumentParser::Parameter value1, osg::ArgumentParser::Parameter value2, osg::ArgumentParser::Parameter value3, osg::ArgumentParser::Parameter value4)
	static int _bind_read_overload_13(lua_State *L) {
		if (!_lg_typecheck_read_overload_13(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::Input::read(const char * str, osg::ArgumentParser::Parameter value1, osg::ArgumentParser::Parameter value2, osg::ArgumentParser::Parameter value3, osg::ArgumentParser::Parameter value4) function, expected prototype:\nbool osgDB::Input::read(const char * str, osg::ArgumentParser::Parameter value1, osg::ArgumentParser::Parameter value2, osg::ArgumentParser::Parameter value3, osg::ArgumentParser::Parameter value4)\nClass arguments details:\narg 2 ID = 67360031\narg 3 ID = 67360031\narg 4 ID = 67360031\narg 5 ID = 67360031\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * str=(const char *)lua_tostring(L,2);
		osg::ArgumentParser::Parameter* value1_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,3));
		if( !value1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value1 in osgDB::Input::read function");
		}
		osg::ArgumentParser::Parameter value1=*value1_ptr;
		osg::ArgumentParser::Parameter* value2_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,4));
		if( !value2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value2 in osgDB::Input::read function");
		}
		osg::ArgumentParser::Parameter value2=*value2_ptr;
		osg::ArgumentParser::Parameter* value3_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,5));
		if( !value3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value3 in osgDB::Input::read function");
		}
		osg::ArgumentParser::Parameter value3=*value3_ptr;
		osg::ArgumentParser::Parameter* value4_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,6));
		if( !value4_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value4 in osgDB::Input::read function");
		}
		osg::ArgumentParser::Parameter value4=*value4_ptr;

		osgDB::Input* self=Luna< osgDB::FieldReaderIterator >::checkSubType< osgDB::Input >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::Input::read(const char *, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter). Got : '%s'\n%s",typeid(Luna< osgDB::FieldReaderIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->read(str, value1, value2, value3, value4);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::Input::read(const char * str, osg::ArgumentParser::Parameter value1, osg::ArgumentParser::Parameter value2, osg::ArgumentParser::Parameter value3, osg::ArgumentParser::Parameter value4, osg::ArgumentParser::Parameter value5)
	static int _bind_read_overload_14(lua_State *L) {
		if (!_lg_typecheck_read_overload_14(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::Input::read(const char * str, osg::ArgumentParser::Parameter value1, osg::ArgumentParser::Parameter value2, osg::ArgumentParser::Parameter value3, osg::ArgumentParser::Parameter value4, osg::ArgumentParser::Parameter value5) function, expected prototype:\nbool osgDB::Input::read(const char * str, osg::ArgumentParser::Parameter value1, osg::ArgumentParser::Parameter value2, osg::ArgumentParser::Parameter value3, osg::ArgumentParser::Parameter value4, osg::ArgumentParser::Parameter value5)\nClass arguments details:\narg 2 ID = 67360031\narg 3 ID = 67360031\narg 4 ID = 67360031\narg 5 ID = 67360031\narg 6 ID = 67360031\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * str=(const char *)lua_tostring(L,2);
		osg::ArgumentParser::Parameter* value1_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,3));
		if( !value1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value1 in osgDB::Input::read function");
		}
		osg::ArgumentParser::Parameter value1=*value1_ptr;
		osg::ArgumentParser::Parameter* value2_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,4));
		if( !value2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value2 in osgDB::Input::read function");
		}
		osg::ArgumentParser::Parameter value2=*value2_ptr;
		osg::ArgumentParser::Parameter* value3_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,5));
		if( !value3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value3 in osgDB::Input::read function");
		}
		osg::ArgumentParser::Parameter value3=*value3_ptr;
		osg::ArgumentParser::Parameter* value4_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,6));
		if( !value4_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value4 in osgDB::Input::read function");
		}
		osg::ArgumentParser::Parameter value4=*value4_ptr;
		osg::ArgumentParser::Parameter* value5_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,7));
		if( !value5_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value5 in osgDB::Input::read function");
		}
		osg::ArgumentParser::Parameter value5=*value5_ptr;

		osgDB::Input* self=Luna< osgDB::FieldReaderIterator >::checkSubType< osgDB::Input >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::Input::read(const char *, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter). Got : '%s'\n%s",typeid(Luna< osgDB::FieldReaderIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->read(str, value1, value2, value3, value4, value5);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::Input::read(const char * str, osg::ArgumentParser::Parameter value1, osg::ArgumentParser::Parameter value2, osg::ArgumentParser::Parameter value3, osg::ArgumentParser::Parameter value4, osg::ArgumentParser::Parameter value5, osg::ArgumentParser::Parameter value6)
	static int _bind_read_overload_15(lua_State *L) {
		if (!_lg_typecheck_read_overload_15(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::Input::read(const char * str, osg::ArgumentParser::Parameter value1, osg::ArgumentParser::Parameter value2, osg::ArgumentParser::Parameter value3, osg::ArgumentParser::Parameter value4, osg::ArgumentParser::Parameter value5, osg::ArgumentParser::Parameter value6) function, expected prototype:\nbool osgDB::Input::read(const char * str, osg::ArgumentParser::Parameter value1, osg::ArgumentParser::Parameter value2, osg::ArgumentParser::Parameter value3, osg::ArgumentParser::Parameter value4, osg::ArgumentParser::Parameter value5, osg::ArgumentParser::Parameter value6)\nClass arguments details:\narg 2 ID = 67360031\narg 3 ID = 67360031\narg 4 ID = 67360031\narg 5 ID = 67360031\narg 6 ID = 67360031\narg 7 ID = 67360031\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * str=(const char *)lua_tostring(L,2);
		osg::ArgumentParser::Parameter* value1_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,3));
		if( !value1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value1 in osgDB::Input::read function");
		}
		osg::ArgumentParser::Parameter value1=*value1_ptr;
		osg::ArgumentParser::Parameter* value2_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,4));
		if( !value2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value2 in osgDB::Input::read function");
		}
		osg::ArgumentParser::Parameter value2=*value2_ptr;
		osg::ArgumentParser::Parameter* value3_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,5));
		if( !value3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value3 in osgDB::Input::read function");
		}
		osg::ArgumentParser::Parameter value3=*value3_ptr;
		osg::ArgumentParser::Parameter* value4_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,6));
		if( !value4_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value4 in osgDB::Input::read function");
		}
		osg::ArgumentParser::Parameter value4=*value4_ptr;
		osg::ArgumentParser::Parameter* value5_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,7));
		if( !value5_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value5 in osgDB::Input::read function");
		}
		osg::ArgumentParser::Parameter value5=*value5_ptr;
		osg::ArgumentParser::Parameter* value6_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,8));
		if( !value6_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value6 in osgDB::Input::read function");
		}
		osg::ArgumentParser::Parameter value6=*value6_ptr;

		osgDB::Input* self=Luna< osgDB::FieldReaderIterator >::checkSubType< osgDB::Input >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::Input::read(const char *, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter). Got : '%s'\n%s",typeid(Luna< osgDB::FieldReaderIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->read(str, value1, value2, value3, value4, value5, value6);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::Input::read(const char * str, osg::ArgumentParser::Parameter value1, osg::ArgumentParser::Parameter value2, osg::ArgumentParser::Parameter value3, osg::ArgumentParser::Parameter value4, osg::ArgumentParser::Parameter value5, osg::ArgumentParser::Parameter value6, osg::ArgumentParser::Parameter value7)
	static int _bind_read_overload_16(lua_State *L) {
		if (!_lg_typecheck_read_overload_16(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::Input::read(const char * str, osg::ArgumentParser::Parameter value1, osg::ArgumentParser::Parameter value2, osg::ArgumentParser::Parameter value3, osg::ArgumentParser::Parameter value4, osg::ArgumentParser::Parameter value5, osg::ArgumentParser::Parameter value6, osg::ArgumentParser::Parameter value7) function, expected prototype:\nbool osgDB::Input::read(const char * str, osg::ArgumentParser::Parameter value1, osg::ArgumentParser::Parameter value2, osg::ArgumentParser::Parameter value3, osg::ArgumentParser::Parameter value4, osg::ArgumentParser::Parameter value5, osg::ArgumentParser::Parameter value6, osg::ArgumentParser::Parameter value7)\nClass arguments details:\narg 2 ID = 67360031\narg 3 ID = 67360031\narg 4 ID = 67360031\narg 5 ID = 67360031\narg 6 ID = 67360031\narg 7 ID = 67360031\narg 8 ID = 67360031\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * str=(const char *)lua_tostring(L,2);
		osg::ArgumentParser::Parameter* value1_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,3));
		if( !value1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value1 in osgDB::Input::read function");
		}
		osg::ArgumentParser::Parameter value1=*value1_ptr;
		osg::ArgumentParser::Parameter* value2_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,4));
		if( !value2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value2 in osgDB::Input::read function");
		}
		osg::ArgumentParser::Parameter value2=*value2_ptr;
		osg::ArgumentParser::Parameter* value3_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,5));
		if( !value3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value3 in osgDB::Input::read function");
		}
		osg::ArgumentParser::Parameter value3=*value3_ptr;
		osg::ArgumentParser::Parameter* value4_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,6));
		if( !value4_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value4 in osgDB::Input::read function");
		}
		osg::ArgumentParser::Parameter value4=*value4_ptr;
		osg::ArgumentParser::Parameter* value5_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,7));
		if( !value5_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value5 in osgDB::Input::read function");
		}
		osg::ArgumentParser::Parameter value5=*value5_ptr;
		osg::ArgumentParser::Parameter* value6_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,8));
		if( !value6_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value6 in osgDB::Input::read function");
		}
		osg::ArgumentParser::Parameter value6=*value6_ptr;
		osg::ArgumentParser::Parameter* value7_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,9));
		if( !value7_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value7 in osgDB::Input::read function");
		}
		osg::ArgumentParser::Parameter value7=*value7_ptr;

		osgDB::Input* self=Luna< osgDB::FieldReaderIterator >::checkSubType< osgDB::Input >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::Input::read(const char *, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter). Got : '%s'\n%s",typeid(Luna< osgDB::FieldReaderIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->read(str, value1, value2, value3, value4, value5, value6, value7);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::Input::read(const char * str, osg::ArgumentParser::Parameter value1, osg::ArgumentParser::Parameter value2, osg::ArgumentParser::Parameter value3, osg::ArgumentParser::Parameter value4, osg::ArgumentParser::Parameter value5, osg::ArgumentParser::Parameter value6, osg::ArgumentParser::Parameter value7, osg::ArgumentParser::Parameter value8)
	static int _bind_read_overload_17(lua_State *L) {
		if (!_lg_typecheck_read_overload_17(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::Input::read(const char * str, osg::ArgumentParser::Parameter value1, osg::ArgumentParser::Parameter value2, osg::ArgumentParser::Parameter value3, osg::ArgumentParser::Parameter value4, osg::ArgumentParser::Parameter value5, osg::ArgumentParser::Parameter value6, osg::ArgumentParser::Parameter value7, osg::ArgumentParser::Parameter value8) function, expected prototype:\nbool osgDB::Input::read(const char * str, osg::ArgumentParser::Parameter value1, osg::ArgumentParser::Parameter value2, osg::ArgumentParser::Parameter value3, osg::ArgumentParser::Parameter value4, osg::ArgumentParser::Parameter value5, osg::ArgumentParser::Parameter value6, osg::ArgumentParser::Parameter value7, osg::ArgumentParser::Parameter value8)\nClass arguments details:\narg 2 ID = 67360031\narg 3 ID = 67360031\narg 4 ID = 67360031\narg 5 ID = 67360031\narg 6 ID = 67360031\narg 7 ID = 67360031\narg 8 ID = 67360031\narg 9 ID = 67360031\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * str=(const char *)lua_tostring(L,2);
		osg::ArgumentParser::Parameter* value1_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,3));
		if( !value1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value1 in osgDB::Input::read function");
		}
		osg::ArgumentParser::Parameter value1=*value1_ptr;
		osg::ArgumentParser::Parameter* value2_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,4));
		if( !value2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value2 in osgDB::Input::read function");
		}
		osg::ArgumentParser::Parameter value2=*value2_ptr;
		osg::ArgumentParser::Parameter* value3_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,5));
		if( !value3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value3 in osgDB::Input::read function");
		}
		osg::ArgumentParser::Parameter value3=*value3_ptr;
		osg::ArgumentParser::Parameter* value4_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,6));
		if( !value4_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value4 in osgDB::Input::read function");
		}
		osg::ArgumentParser::Parameter value4=*value4_ptr;
		osg::ArgumentParser::Parameter* value5_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,7));
		if( !value5_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value5 in osgDB::Input::read function");
		}
		osg::ArgumentParser::Parameter value5=*value5_ptr;
		osg::ArgumentParser::Parameter* value6_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,8));
		if( !value6_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value6 in osgDB::Input::read function");
		}
		osg::ArgumentParser::Parameter value6=*value6_ptr;
		osg::ArgumentParser::Parameter* value7_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,9));
		if( !value7_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value7 in osgDB::Input::read function");
		}
		osg::ArgumentParser::Parameter value7=*value7_ptr;
		osg::ArgumentParser::Parameter* value8_ptr=(Luna< osg::ArgumentParser::Parameter >::check(L,10));
		if( !value8_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value8 in osgDB::Input::read function");
		}
		osg::ArgumentParser::Parameter value8=*value8_ptr;

		osgDB::Input* self=Luna< osgDB::FieldReaderIterator >::checkSubType< osgDB::Input >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::Input::read(const char *, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter). Got : '%s'\n%s",typeid(Luna< osgDB::FieldReaderIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->read(str, value1, value2, value3, value4, value5, value6, value7, value8);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for osgDB::Input::read
	static int _bind_read(lua_State *L) {
		if (_lg_typecheck_read_overload_1(L)) return _bind_read_overload_1(L);
		if (_lg_typecheck_read_overload_2(L)) return _bind_read_overload_2(L);
		if (_lg_typecheck_read_overload_3(L)) return _bind_read_overload_3(L);
		if (_lg_typecheck_read_overload_4(L)) return _bind_read_overload_4(L);
		if (_lg_typecheck_read_overload_5(L)) return _bind_read_overload_5(L);
		if (_lg_typecheck_read_overload_6(L)) return _bind_read_overload_6(L);
		if (_lg_typecheck_read_overload_7(L)) return _bind_read_overload_7(L);
		if (_lg_typecheck_read_overload_8(L)) return _bind_read_overload_8(L);
		if (_lg_typecheck_read_overload_9(L)) return _bind_read_overload_9(L);
		if (_lg_typecheck_read_overload_10(L)) return _bind_read_overload_10(L);
		if (_lg_typecheck_read_overload_11(L)) return _bind_read_overload_11(L);
		if (_lg_typecheck_read_overload_12(L)) return _bind_read_overload_12(L);
		if (_lg_typecheck_read_overload_13(L)) return _bind_read_overload_13(L);
		if (_lg_typecheck_read_overload_14(L)) return _bind_read_overload_14(L);
		if (_lg_typecheck_read_overload_15(L)) return _bind_read_overload_15(L);
		if (_lg_typecheck_read_overload_16(L)) return _bind_read_overload_16(L);
		if (_lg_typecheck_read_overload_17(L)) return _bind_read_overload_17(L);

		luaL_error(L, "error in function read, cannot match any of the overloads for function read:\n  read(osg::ArgumentParser::Parameter)\n  read(osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter)\n  read(osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter)\n  read(osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter)\n  read(osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter)\n  read(osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter)\n  read(osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter)\n  read(osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter)\n  read(const char *)\n  read(const char *, osg::ArgumentParser::Parameter)\n  read(const char *, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter)\n  read(const char *, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter)\n  read(const char *, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter)\n  read(const char *, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter)\n  read(const char *, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter)\n  read(const char *, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter)\n  read(const char *, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter, osg::ArgumentParser::Parameter)\n");
		return 0;
	}

	// bool osgDB::Input::base_eof() const
	static int _bind_base_eof(lua_State *L) {
		if (!_lg_typecheck_base_eof(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::Input::base_eof() const function, expected prototype:\nbool osgDB::Input::base_eof() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::Input* self=Luna< osgDB::FieldReaderIterator >::checkSubType< osgDB::Input >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::Input::base_eof() const. Got : '%s'\n%s",typeid(Luna< osgDB::FieldReaderIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Input::eof();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// osg::Object * osgDB::Input::base_readObjectOfType(const osg::Object & compObj)
	static int _bind_base_readObjectOfType_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_readObjectOfType_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgDB::Input::base_readObjectOfType(const osg::Object & compObj) function, expected prototype:\nosg::Object * osgDB::Input::base_readObjectOfType(const osg::Object & compObj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* compObj_ptr=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));
		if( !compObj_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg compObj in osgDB::Input::base_readObjectOfType function");
		}
		const osg::Object & compObj=*compObj_ptr;

		osgDB::Input* self=Luna< osgDB::FieldReaderIterator >::checkSubType< osgDB::Input >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgDB::Input::base_readObjectOfType(const osg::Object &). Got : '%s'\n%s",typeid(Luna< osgDB::FieldReaderIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->Input::readObjectOfType(compObj);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgDB::Input::base_readObjectOfType(const osgDB::basic_type_wrapper & btw)
	static int _bind_base_readObjectOfType_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_readObjectOfType_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgDB::Input::base_readObjectOfType(const osgDB::basic_type_wrapper & btw) function, expected prototype:\nosg::Object * osgDB::Input::base_readObjectOfType(const osgDB::basic_type_wrapper & btw)\nClass arguments details:\narg 1 ID = 56095127\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgDB::basic_type_wrapper* btw_ptr=(Luna< osgDB::basic_type_wrapper >::check(L,2));
		if( !btw_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg btw in osgDB::Input::base_readObjectOfType function");
		}
		const osgDB::basic_type_wrapper & btw=*btw_ptr;

		osgDB::Input* self=Luna< osgDB::FieldReaderIterator >::checkSubType< osgDB::Input >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgDB::Input::base_readObjectOfType(const osgDB::basic_type_wrapper &). Got : '%s'\n%s",typeid(Luna< osgDB::FieldReaderIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->Input::readObjectOfType(btw);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgDB::Input::base_readObjectOfType
	static int _bind_base_readObjectOfType(lua_State *L) {
		if (_lg_typecheck_base_readObjectOfType_overload_1(L)) return _bind_base_readObjectOfType_overload_1(L);
		if (_lg_typecheck_base_readObjectOfType_overload_2(L)) return _bind_base_readObjectOfType_overload_2(L);

		luaL_error(L, "error in function base_readObjectOfType, cannot match any of the overloads for function base_readObjectOfType:\n  base_readObjectOfType(const osg::Object &)\n  base_readObjectOfType(const osgDB::basic_type_wrapper &)\n");
		return 0;
	}

	// osg::Object * osgDB::Input::base_readObject()
	static int _bind_base_readObject_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_readObject_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgDB::Input::base_readObject() function, expected prototype:\nosg::Object * osgDB::Input::base_readObject()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::Input* self=Luna< osgDB::FieldReaderIterator >::checkSubType< osgDB::Input >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgDB::Input::base_readObject(). Got : '%s'\n%s",typeid(Luna< osgDB::FieldReaderIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->Input::readObject();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgDB::Input::base_readObject(const std::string & fileName)
	static int _bind_base_readObject_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_readObject_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgDB::Input::base_readObject(const std::string & fileName) function, expected prototype:\nosg::Object * osgDB::Input::base_readObject(const std::string & fileName)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string fileName(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::Input* self=Luna< osgDB::FieldReaderIterator >::checkSubType< osgDB::Input >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgDB::Input::base_readObject(const std::string &). Got : '%s'\n%s",typeid(Luna< osgDB::FieldReaderIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->Input::readObject(fileName);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgDB::Input::base_readObject
	static int _bind_base_readObject(lua_State *L) {
		if (_lg_typecheck_base_readObject_overload_1(L)) return _bind_base_readObject_overload_1(L);
		if (_lg_typecheck_base_readObject_overload_2(L)) return _bind_base_readObject_overload_2(L);

		luaL_error(L, "error in function base_readObject, cannot match any of the overloads for function base_readObject:\n  base_readObject()\n  base_readObject(const std::string &)\n");
		return 0;
	}

	// osg::Image * osgDB::Input::base_readImage()
	static int _bind_base_readImage_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_readImage_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Image * osgDB::Input::base_readImage() function, expected prototype:\nosg::Image * osgDB::Input::base_readImage()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::Input* self=Luna< osgDB::FieldReaderIterator >::checkSubType< osgDB::Input >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Image * osgDB::Input::base_readImage(). Got : '%s'\n%s",typeid(Luna< osgDB::FieldReaderIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Image * lret = self->Input::readImage();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Image >::push(L,lret,false);

		return 1;
	}

	// osg::Image * osgDB::Input::base_readImage(const std::string & fileName)
	static int _bind_base_readImage_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_readImage_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Image * osgDB::Input::base_readImage(const std::string & fileName) function, expected prototype:\nosg::Image * osgDB::Input::base_readImage(const std::string & fileName)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string fileName(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::Input* self=Luna< osgDB::FieldReaderIterator >::checkSubType< osgDB::Input >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Image * osgDB::Input::base_readImage(const std::string &). Got : '%s'\n%s",typeid(Luna< osgDB::FieldReaderIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Image * lret = self->Input::readImage(fileName);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Image >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgDB::Input::base_readImage
	static int _bind_base_readImage(lua_State *L) {
		if (_lg_typecheck_base_readImage_overload_1(L)) return _bind_base_readImage_overload_1(L);
		if (_lg_typecheck_base_readImage_overload_2(L)) return _bind_base_readImage_overload_2(L);

		luaL_error(L, "error in function base_readImage, cannot match any of the overloads for function base_readImage:\n  base_readImage()\n  base_readImage(const std::string &)\n");
		return 0;
	}

	// osg::Drawable * osgDB::Input::base_readDrawable()
	static int _bind_base_readDrawable(lua_State *L) {
		if (!_lg_typecheck_base_readDrawable(L)) {
			luaL_error(L, "luna typecheck failed in osg::Drawable * osgDB::Input::base_readDrawable() function, expected prototype:\nosg::Drawable * osgDB::Input::base_readDrawable()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::Input* self=Luna< osgDB::FieldReaderIterator >::checkSubType< osgDB::Input >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Drawable * osgDB::Input::base_readDrawable(). Got : '%s'\n%s",typeid(Luna< osgDB::FieldReaderIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Drawable * lret = self->Input::readDrawable();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Drawable >::push(L,lret,false);

		return 1;
	}

	// osg::StateAttribute * osgDB::Input::base_readStateAttribute()
	static int _bind_base_readStateAttribute(lua_State *L) {
		if (!_lg_typecheck_base_readStateAttribute(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateAttribute * osgDB::Input::base_readStateAttribute() function, expected prototype:\nosg::StateAttribute * osgDB::Input::base_readStateAttribute()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::Input* self=Luna< osgDB::FieldReaderIterator >::checkSubType< osgDB::Input >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateAttribute * osgDB::Input::base_readStateAttribute(). Got : '%s'\n%s",typeid(Luna< osgDB::FieldReaderIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::StateAttribute * lret = self->Input::readStateAttribute();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateAttribute >::push(L,lret,false);

		return 1;
	}

	// osg::Uniform * osgDB::Input::base_readUniform()
	static int _bind_base_readUniform(lua_State *L) {
		if (!_lg_typecheck_base_readUniform(L)) {
			luaL_error(L, "luna typecheck failed in osg::Uniform * osgDB::Input::base_readUniform() function, expected prototype:\nosg::Uniform * osgDB::Input::base_readUniform()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::Input* self=Luna< osgDB::FieldReaderIterator >::checkSubType< osgDB::Input >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Uniform * osgDB::Input::base_readUniform(). Got : '%s'\n%s",typeid(Luna< osgDB::FieldReaderIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Uniform * lret = self->Input::readUniform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Uniform >::push(L,lret,false);

		return 1;
	}

	// osg::Node * osgDB::Input::base_readNode()
	static int _bind_base_readNode_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_readNode_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Node * osgDB::Input::base_readNode() function, expected prototype:\nosg::Node * osgDB::Input::base_readNode()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::Input* self=Luna< osgDB::FieldReaderIterator >::checkSubType< osgDB::Input >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Node * osgDB::Input::base_readNode(). Got : '%s'\n%s",typeid(Luna< osgDB::FieldReaderIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Node * lret = self->Input::readNode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Node >::push(L,lret,false);

		return 1;
	}

	// osg::Node * osgDB::Input::base_readNode(const std::string & fileName)
	static int _bind_base_readNode_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_readNode_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Node * osgDB::Input::base_readNode(const std::string & fileName) function, expected prototype:\nosg::Node * osgDB::Input::base_readNode(const std::string & fileName)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string fileName(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::Input* self=Luna< osgDB::FieldReaderIterator >::checkSubType< osgDB::Input >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Node * osgDB::Input::base_readNode(const std::string &). Got : '%s'\n%s",typeid(Luna< osgDB::FieldReaderIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Node * lret = self->Input::readNode(fileName);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Node >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgDB::Input::base_readNode
	static int _bind_base_readNode(lua_State *L) {
		if (_lg_typecheck_base_readNode_overload_1(L)) return _bind_base_readNode_overload_1(L);
		if (_lg_typecheck_base_readNode_overload_2(L)) return _bind_base_readNode_overload_2(L);

		luaL_error(L, "error in function base_readNode, cannot match any of the overloads for function base_readNode:\n  base_readNode()\n  base_readNode(const std::string &)\n");
		return 0;
	}

	// osg::Shader * osgDB::Input::base_readShader()
	static int _bind_base_readShader_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_readShader_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Shader * osgDB::Input::base_readShader() function, expected prototype:\nosg::Shader * osgDB::Input::base_readShader()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::Input* self=Luna< osgDB::FieldReaderIterator >::checkSubType< osgDB::Input >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Shader * osgDB::Input::base_readShader(). Got : '%s'\n%s",typeid(Luna< osgDB::FieldReaderIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Shader * lret = self->Input::readShader();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Shader >::push(L,lret,false);

		return 1;
	}

	// osg::Shader * osgDB::Input::base_readShader(const std::string & fileName)
	static int _bind_base_readShader_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_readShader_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Shader * osgDB::Input::base_readShader(const std::string & fileName) function, expected prototype:\nosg::Shader * osgDB::Input::base_readShader(const std::string & fileName)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string fileName(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::Input* self=Luna< osgDB::FieldReaderIterator >::checkSubType< osgDB::Input >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Shader * osgDB::Input::base_readShader(const std::string &). Got : '%s'\n%s",typeid(Luna< osgDB::FieldReaderIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Shader * lret = self->Input::readShader(fileName);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Shader >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgDB::Input::base_readShader
	static int _bind_base_readShader(lua_State *L) {
		if (_lg_typecheck_base_readShader_overload_1(L)) return _bind_base_readShader_overload_1(L);
		if (_lg_typecheck_base_readShader_overload_2(L)) return _bind_base_readShader_overload_2(L);

		luaL_error(L, "error in function base_readShader, cannot match any of the overloads for function base_readShader:\n  base_readShader()\n  base_readShader(const std::string &)\n");
		return 0;
	}

	// osg::Object * osgDB::Input::base_getObjectForUniqueID(const std::string & uniqueID)
	static int _bind_base_getObjectForUniqueID(lua_State *L) {
		if (!_lg_typecheck_base_getObjectForUniqueID(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgDB::Input::base_getObjectForUniqueID(const std::string & uniqueID) function, expected prototype:\nosg::Object * osgDB::Input::base_getObjectForUniqueID(const std::string & uniqueID)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string uniqueID(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::Input* self=Luna< osgDB::FieldReaderIterator >::checkSubType< osgDB::Input >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgDB::Input::base_getObjectForUniqueID(const std::string &). Got : '%s'\n%s",typeid(Luna< osgDB::FieldReaderIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->Input::getObjectForUniqueID(uniqueID);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// void osgDB::Input::base_registerUniqueIDForObject(const std::string & uniqueID, osg::Object * obj)
	static int _bind_base_registerUniqueIDForObject(lua_State *L) {
		if (!_lg_typecheck_base_registerUniqueIDForObject(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::Input::base_registerUniqueIDForObject(const std::string & uniqueID, osg::Object * obj) function, expected prototype:\nvoid osgDB::Input::base_registerUniqueIDForObject(const std::string & uniqueID, osg::Object * obj)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string uniqueID(lua_tostring(L,2),lua_objlen(L,2));
		osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,3));

		osgDB::Input* self=Luna< osgDB::FieldReaderIterator >::checkSubType< osgDB::Input >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::Input::base_registerUniqueIDForObject(const std::string &, osg::Object *). Got : '%s'\n%s",typeid(Luna< osgDB::FieldReaderIterator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Input::registerUniqueIDForObject(uniqueID, obj);

		return 0;
	}


	// Operator binds:

};

osgDB::Input* LunaTraits< osgDB::Input >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgDB_Input::_bind_ctor(L);
}

void LunaTraits< osgDB::Input >::_bind_dtor(osgDB::Input* obj) {
	delete obj;
}

const char LunaTraits< osgDB::Input >::className[] = "Input";
const char LunaTraits< osgDB::Input >::fullName[] = "osgDB::Input";
const char LunaTraits< osgDB::Input >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::Input >::parents[] = {"osgDB.FieldReaderIterator", 0};
const int LunaTraits< osgDB::Input >::hash = 10476791;
const int LunaTraits< osgDB::Input >::uniqueIDs[] = {2696163,0};

luna_RegType LunaTraits< osgDB::Input >::methods[] = {
	{"setOptions", &luna_wrapper_osgDB_Input::_bind_setOptions},
	{"getOptions", &luna_wrapper_osgDB_Input::_bind_getOptions},
	{"readObjectOfType", &luna_wrapper_osgDB_Input::_bind_readObjectOfType},
	{"readObject", &luna_wrapper_osgDB_Input::_bind_readObject},
	{"readImage", &luna_wrapper_osgDB_Input::_bind_readImage},
	{"readDrawable", &luna_wrapper_osgDB_Input::_bind_readDrawable},
	{"readStateAttribute", &luna_wrapper_osgDB_Input::_bind_readStateAttribute},
	{"readUniform", &luna_wrapper_osgDB_Input::_bind_readUniform},
	{"readNode", &luna_wrapper_osgDB_Input::_bind_readNode},
	{"readShader", &luna_wrapper_osgDB_Input::_bind_readShader},
	{"getObjectForUniqueID", &luna_wrapper_osgDB_Input::_bind_getObjectForUniqueID},
	{"registerUniqueIDForObject", &luna_wrapper_osgDB_Input::_bind_registerUniqueIDForObject},
	{"read", &luna_wrapper_osgDB_Input::_bind_read},
	{"base_eof", &luna_wrapper_osgDB_Input::_bind_base_eof},
	{"base_readObjectOfType", &luna_wrapper_osgDB_Input::_bind_base_readObjectOfType},
	{"base_readObject", &luna_wrapper_osgDB_Input::_bind_base_readObject},
	{"base_readImage", &luna_wrapper_osgDB_Input::_bind_base_readImage},
	{"base_readDrawable", &luna_wrapper_osgDB_Input::_bind_base_readDrawable},
	{"base_readStateAttribute", &luna_wrapper_osgDB_Input::_bind_base_readStateAttribute},
	{"base_readUniform", &luna_wrapper_osgDB_Input::_bind_base_readUniform},
	{"base_readNode", &luna_wrapper_osgDB_Input::_bind_base_readNode},
	{"base_readShader", &luna_wrapper_osgDB_Input::_bind_base_readShader},
	{"base_getObjectForUniqueID", &luna_wrapper_osgDB_Input::_bind_base_getObjectForUniqueID},
	{"base_registerUniqueIDForObject", &luna_wrapper_osgDB_Input::_bind_base_registerUniqueIDForObject},
	{"fromVoid", &luna_wrapper_osgDB_Input::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgDB_Input::_bind_asVoid},
	{"getTable", &luna_wrapper_osgDB_Input::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::Input >::converters[] = {
	{"osgDB::FieldReaderIterator", &luna_wrapper_osgDB_Input::_cast_from_FieldReaderIterator},
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::Input >::enumValues[] = {
	{0,0}
};



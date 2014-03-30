#include <plug_common.h>

#include <luna/wrappers/wrapper_osgDB_BaseCompressor.h>

class luna_wrapper_osgDB_BaseCompressor {
public:
	typedef Luna< osgDB::BaseCompressor > luna_t;

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

		osgDB::BaseCompressor* self= (osgDB::BaseCompressor*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgDB::BaseCompressor >::push(L,self,false);
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
		//osgDB::BaseCompressor* ptr= dynamic_cast< osgDB::BaseCompressor* >(Luna< osg::Referenced >::check(L,1));
		osgDB::BaseCompressor* ptr= luna_caster< osg::Referenced, osgDB::BaseCompressor >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgDB::BaseCompressor >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_setName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_compress(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2993706) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_decompress(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,77972206) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
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
	// osgDB::BaseCompressor::BaseCompressor(lua_Table * data)
	static osgDB::BaseCompressor* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::BaseCompressor::BaseCompressor(lua_Table * data) function, expected prototype:\nosgDB::BaseCompressor::BaseCompressor(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgDB_BaseCompressor(L,NULL);
	}


	// Function binds:
	// void osgDB::BaseCompressor::setName(const std::string & name)
	static int _bind_setName(lua_State *L) {
		if (!_lg_typecheck_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::BaseCompressor::setName(const std::string & name) function, expected prototype:\nvoid osgDB::BaseCompressor::setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::BaseCompressor* self=Luna< osg::Referenced >::checkSubType< osgDB::BaseCompressor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::BaseCompressor::setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setName(name);

		return 0;
	}

	// const std::string & osgDB::BaseCompressor::getName() const
	static int _bind_getName(lua_State *L) {
		if (!_lg_typecheck_getName(L)) {
			luaL_error(L, "luna typecheck failed in const std::string & osgDB::BaseCompressor::getName() const function, expected prototype:\nconst std::string & osgDB::BaseCompressor::getName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::BaseCompressor* self=Luna< osg::Referenced >::checkSubType< osgDB::BaseCompressor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const std::string & osgDB::BaseCompressor::getName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const std::string & lret = self->getName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool osgDB::BaseCompressor::compress(std::ostream & arg1, const std::string & arg2)
	static int _bind_compress(lua_State *L) {
		if (!_lg_typecheck_compress(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::BaseCompressor::compress(std::ostream & arg1, const std::string & arg2) function, expected prototype:\nbool osgDB::BaseCompressor::compress(std::ostream & arg1, const std::string & arg2)\nClass arguments details:\narg 1 ID = 2993706\n\n%s",luna_dumpStack(L).c_str());
		}

		std::ostream* _arg1_ptr=(Luna< std::ostream >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgDB::BaseCompressor::compress function");
		}
		std::ostream & _arg1=*_arg1_ptr;
		std::string _arg2(lua_tostring(L,3),lua_objlen(L,3));

		osgDB::BaseCompressor* self=Luna< osg::Referenced >::checkSubType< osgDB::BaseCompressor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::BaseCompressor::compress(std::ostream &, const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->compress(_arg1, _arg2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::BaseCompressor::decompress(std::istream & arg1, std::string & arg2)
	static int _bind_decompress(lua_State *L) {
		if (!_lg_typecheck_decompress(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::BaseCompressor::decompress(std::istream & arg1, std::string & arg2) function, expected prototype:\nbool osgDB::BaseCompressor::decompress(std::istream & arg1, std::string & arg2)\nClass arguments details:\narg 1 ID = 77972206\n\n%s",luna_dumpStack(L).c_str());
		}

		std::istream* _arg1_ptr=(Luna< std::istream >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgDB::BaseCompressor::decompress function");
		}
		std::istream & _arg1=*_arg1_ptr;
		std::string _arg2(lua_tostring(L,3),lua_objlen(L,3));

		osgDB::BaseCompressor* self=Luna< osg::Referenced >::checkSubType< osgDB::BaseCompressor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::BaseCompressor::decompress(std::istream &, std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->decompress(_arg1, _arg2);
		lua_pushboolean(L,lret?1:0);

		lua_pushlstring(L,_arg2.data(),_arg2.size());
		return 2;
	}

	// void osgDB::BaseCompressor::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::BaseCompressor::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgDB::BaseCompressor::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgDB::BaseCompressor* self=Luna< osg::Referenced >::checkSubType< osgDB::BaseCompressor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::BaseCompressor::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->BaseCompressor::setThreadSafeRefUnref(threadSafe);

		return 0;
	}


	// Operator binds:

};

osgDB::BaseCompressor* LunaTraits< osgDB::BaseCompressor >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgDB_BaseCompressor::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// bool osgDB::BaseCompressor::compress(std::ostream & arg1, const std::string & arg2)
	// bool osgDB::BaseCompressor::decompress(std::istream & arg1, std::string & arg2)
}

void LunaTraits< osgDB::BaseCompressor >::_bind_dtor(osgDB::BaseCompressor* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgDB::BaseCompressor >::className[] = "BaseCompressor";
const char LunaTraits< osgDB::BaseCompressor >::fullName[] = "osgDB::BaseCompressor";
const char LunaTraits< osgDB::BaseCompressor >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::BaseCompressor >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osgDB::BaseCompressor >::hash = 3546363;
const int LunaTraits< osgDB::BaseCompressor >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgDB::BaseCompressor >::methods[] = {
	{"setName", &luna_wrapper_osgDB_BaseCompressor::_bind_setName},
	{"getName", &luna_wrapper_osgDB_BaseCompressor::_bind_getName},
	{"compress", &luna_wrapper_osgDB_BaseCompressor::_bind_compress},
	{"decompress", &luna_wrapper_osgDB_BaseCompressor::_bind_decompress},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgDB_BaseCompressor::_bind_base_setThreadSafeRefUnref},
	{"fromVoid", &luna_wrapper_osgDB_BaseCompressor::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgDB_BaseCompressor::_bind_asVoid},
	{"getTable", &luna_wrapper_osgDB_BaseCompressor::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::BaseCompressor >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgDB_BaseCompressor::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::BaseCompressor >::enumValues[] = {
	{0,0}
};



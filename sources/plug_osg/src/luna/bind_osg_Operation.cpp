#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_Operation.h>

class luna_wrapper_osg_Operation {
public:
	typedef Luna< osg::Operation > luna_t;

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

		osg::Operation* self= (osg::Operation*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::Operation >::push(L,self,false);
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
		//osg::Operation* ptr= dynamic_cast< osg::Operation* >(Luna< osg::Referenced >::check(L,1));
		osg::Operation* ptr= luna_caster< osg::Referenced, osg::Operation >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::Operation >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
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

	inline static bool _lg_typecheck_setKeep(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getKeep(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_release(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_release(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck_op_call(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}


	// Constructor binds:
	// osg::Operation::Operation(lua_Table * data, const std::string & name, bool keep)
	static osg::Operation* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in osg::Operation::Operation(lua_Table * data, const std::string & name, bool keep) function, expected prototype:\nosg::Operation::Operation(lua_Table * data, const std::string & name, bool keep)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));
		bool keep=(bool)(lua_toboolean(L,3)==1);

		return new wrapper_osg_Operation(L,NULL, name, keep);
	}


	// Function binds:
	// void osg::Operation::setName(const std::string & name)
	static int _bind_setName(lua_State *L) {
		if (!_lg_typecheck_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Operation::setName(const std::string & name) function, expected prototype:\nvoid osg::Operation::setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::Operation* self=Luna< osg::Referenced >::checkSubType< osg::Operation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Operation::setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setName(name);

		return 0;
	}

	// const std::string & osg::Operation::getName() const
	static int _bind_getName(lua_State *L) {
		if (!_lg_typecheck_getName(L)) {
			luaL_error(L, "luna typecheck failed in const std::string & osg::Operation::getName() const function, expected prototype:\nconst std::string & osg::Operation::getName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Operation* self=Luna< osg::Referenced >::checkSubType< osg::Operation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const std::string & osg::Operation::getName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const std::string & lret = self->getName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void osg::Operation::setKeep(bool keep)
	static int _bind_setKeep(lua_State *L) {
		if (!_lg_typecheck_setKeep(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Operation::setKeep(bool keep) function, expected prototype:\nvoid osg::Operation::setKeep(bool keep)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool keep=(bool)(lua_toboolean(L,2)==1);

		osg::Operation* self=Luna< osg::Referenced >::checkSubType< osg::Operation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Operation::setKeep(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setKeep(keep);

		return 0;
	}

	// bool osg::Operation::getKeep() const
	static int _bind_getKeep(lua_State *L) {
		if (!_lg_typecheck_getKeep(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Operation::getKeep() const function, expected prototype:\nbool osg::Operation::getKeep() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Operation* self=Luna< osg::Referenced >::checkSubType< osg::Operation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Operation::getKeep() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getKeep();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Operation::release()
	static int _bind_release(lua_State *L) {
		if (!_lg_typecheck_release(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Operation::release() function, expected prototype:\nvoid osg::Operation::release()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Operation* self=Luna< osg::Referenced >::checkSubType< osg::Operation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Operation::release(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->release();

		return 0;
	}

	// void osg::Operation::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Operation::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::Operation::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::Operation* self=Luna< osg::Referenced >::checkSubType< osg::Operation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Operation::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Operation::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::Operation::base_release()
	static int _bind_base_release(lua_State *L) {
		if (!_lg_typecheck_base_release(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Operation::base_release() function, expected prototype:\nvoid osg::Operation::base_release()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Operation* self=Luna< osg::Referenced >::checkSubType< osg::Operation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Operation::base_release(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Operation::release();

		return 0;
	}


	// Operator binds:
	// void osg::Operation::operator()(osg::Object * arg1)
	static int _bind_op_call(lua_State *L) {
		if (!_lg_typecheck_op_call(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Operation::operator()(osg::Object * arg1) function, expected prototype:\nvoid osg::Operation::operator()(osg::Object * arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Object* _arg1=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::Operation* self=Luna< osg::Referenced >::checkSubType< osg::Operation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Operation::operator()(osg::Object *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->operator()(_arg1);

		return 0;
	}


};

osg::Operation* LunaTraits< osg::Operation >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Operation::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void osg::Operation::operator()(osg::Object * arg1)
}

void LunaTraits< osg::Operation >::_bind_dtor(osg::Operation* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::Operation >::className[] = "Operation";
const char LunaTraits< osg::Operation >::fullName[] = "osg::Operation";
const char LunaTraits< osg::Operation >::moduleName[] = "osg";
const char* LunaTraits< osg::Operation >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osg::Operation >::hash = 17565758;
const int LunaTraits< osg::Operation >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::Operation >::methods[] = {
	{"setName", &luna_wrapper_osg_Operation::_bind_setName},
	{"getName", &luna_wrapper_osg_Operation::_bind_getName},
	{"setKeep", &luna_wrapper_osg_Operation::_bind_setKeep},
	{"getKeep", &luna_wrapper_osg_Operation::_bind_getKeep},
	{"release", &luna_wrapper_osg_Operation::_bind_release},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_Operation::_bind_base_setThreadSafeRefUnref},
	{"base_release", &luna_wrapper_osg_Operation::_bind_base_release},
	{"op_call", &luna_wrapper_osg_Operation::_bind_op_call},
	{"fromVoid", &luna_wrapper_osg_Operation::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_Operation::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_Operation::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Operation >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_Operation::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Operation >::enumValues[] = {
	{0,0}
};



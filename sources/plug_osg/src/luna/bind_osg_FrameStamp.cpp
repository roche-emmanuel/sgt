#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_FrameStamp.h>

class luna_wrapper_osg_FrameStamp {
public:
	typedef Luna< osg::FrameStamp > luna_t;

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

		osg::FrameStamp* self= (osg::FrameStamp*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::FrameStamp >::push(L,self,false);
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
		//osg::FrameStamp* ptr= dynamic_cast< osg::FrameStamp* >(Luna< osg::Referenced >::check(L,1));
		osg::FrameStamp* ptr= luna_caster< osg::Referenced, osg::FrameStamp >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::FrameStamp >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::FrameStamp >(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::FrameStamp >(L,2))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_setFrameNumber(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFrameNumber(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setReferenceTime(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getReferenceTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setSimulationTime(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSimulationTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck_op_assign(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}


	// Constructor binds:
	// osg::FrameStamp::FrameStamp()
	static osg::FrameStamp* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::FrameStamp::FrameStamp() function, expected prototype:\nosg::FrameStamp::FrameStamp()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::FrameStamp();
	}

	// osg::FrameStamp::FrameStamp(const osg::FrameStamp & fs)
	static osg::FrameStamp* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::FrameStamp::FrameStamp(const osg::FrameStamp & fs) function, expected prototype:\nosg::FrameStamp::FrameStamp(const osg::FrameStamp & fs)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::FrameStamp* fs_ptr=(Luna< osg::Referenced >::checkSubType< osg::FrameStamp >(L,1));
		if( !fs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg fs in osg::FrameStamp::FrameStamp function");
		}
		const osg::FrameStamp & fs=*fs_ptr;

		return new osg::FrameStamp(fs);
	}

	// osg::FrameStamp::FrameStamp(lua_Table * data)
	static osg::FrameStamp* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::FrameStamp::FrameStamp(lua_Table * data) function, expected prototype:\nosg::FrameStamp::FrameStamp(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_FrameStamp(L,NULL);
	}

	// osg::FrameStamp::FrameStamp(lua_Table * data, const osg::FrameStamp & fs)
	static osg::FrameStamp* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::FrameStamp::FrameStamp(lua_Table * data, const osg::FrameStamp & fs) function, expected prototype:\nosg::FrameStamp::FrameStamp(lua_Table * data, const osg::FrameStamp & fs)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::FrameStamp* fs_ptr=(Luna< osg::Referenced >::checkSubType< osg::FrameStamp >(L,2));
		if( !fs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg fs in osg::FrameStamp::FrameStamp function");
		}
		const osg::FrameStamp & fs=*fs_ptr;

		return new wrapper_osg_FrameStamp(L,NULL, fs);
	}

	// Overload binder for osg::FrameStamp::FrameStamp
	static osg::FrameStamp* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function FrameStamp, cannot match any of the overloads for function FrameStamp:\n  FrameStamp()\n  FrameStamp(const osg::FrameStamp &)\n  FrameStamp(lua_Table *)\n  FrameStamp(lua_Table *, const osg::FrameStamp &)\n");
		return NULL;
	}


	// Function binds:
	// void osg::FrameStamp::setFrameNumber(unsigned int fnum)
	static int _bind_setFrameNumber(lua_State *L) {
		if (!_lg_typecheck_setFrameNumber(L)) {
			luaL_error(L, "luna typecheck failed in void osg::FrameStamp::setFrameNumber(unsigned int fnum) function, expected prototype:\nvoid osg::FrameStamp::setFrameNumber(unsigned int fnum)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int fnum=(unsigned int)lua_tointeger(L,2);

		osg::FrameStamp* self=Luna< osg::Referenced >::checkSubType< osg::FrameStamp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::FrameStamp::setFrameNumber(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setFrameNumber(fnum);

		return 0;
	}

	// unsigned int osg::FrameStamp::getFrameNumber() const
	static int _bind_getFrameNumber(lua_State *L) {
		if (!_lg_typecheck_getFrameNumber(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::FrameStamp::getFrameNumber() const function, expected prototype:\nunsigned int osg::FrameStamp::getFrameNumber() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::FrameStamp* self=Luna< osg::Referenced >::checkSubType< osg::FrameStamp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::FrameStamp::getFrameNumber() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getFrameNumber();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::FrameStamp::setReferenceTime(double refTime)
	static int _bind_setReferenceTime(lua_State *L) {
		if (!_lg_typecheck_setReferenceTime(L)) {
			luaL_error(L, "luna typecheck failed in void osg::FrameStamp::setReferenceTime(double refTime) function, expected prototype:\nvoid osg::FrameStamp::setReferenceTime(double refTime)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double refTime=(double)lua_tonumber(L,2);

		osg::FrameStamp* self=Luna< osg::Referenced >::checkSubType< osg::FrameStamp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::FrameStamp::setReferenceTime(double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setReferenceTime(refTime);

		return 0;
	}

	// double osg::FrameStamp::getReferenceTime() const
	static int _bind_getReferenceTime(lua_State *L) {
		if (!_lg_typecheck_getReferenceTime(L)) {
			luaL_error(L, "luna typecheck failed in double osg::FrameStamp::getReferenceTime() const function, expected prototype:\ndouble osg::FrameStamp::getReferenceTime() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::FrameStamp* self=Luna< osg::Referenced >::checkSubType< osg::FrameStamp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double osg::FrameStamp::getReferenceTime() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getReferenceTime();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::FrameStamp::setSimulationTime(double refTime)
	static int _bind_setSimulationTime(lua_State *L) {
		if (!_lg_typecheck_setSimulationTime(L)) {
			luaL_error(L, "luna typecheck failed in void osg::FrameStamp::setSimulationTime(double refTime) function, expected prototype:\nvoid osg::FrameStamp::setSimulationTime(double refTime)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double refTime=(double)lua_tonumber(L,2);

		osg::FrameStamp* self=Luna< osg::Referenced >::checkSubType< osg::FrameStamp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::FrameStamp::setSimulationTime(double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setSimulationTime(refTime);

		return 0;
	}

	// double osg::FrameStamp::getSimulationTime() const
	static int _bind_getSimulationTime(lua_State *L) {
		if (!_lg_typecheck_getSimulationTime(L)) {
			luaL_error(L, "luna typecheck failed in double osg::FrameStamp::getSimulationTime() const function, expected prototype:\ndouble osg::FrameStamp::getSimulationTime() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::FrameStamp* self=Luna< osg::Referenced >::checkSubType< osg::FrameStamp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double osg::FrameStamp::getSimulationTime() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getSimulationTime();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::FrameStamp::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::FrameStamp::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::FrameStamp::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::FrameStamp* self=Luna< osg::Referenced >::checkSubType< osg::FrameStamp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::FrameStamp::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->FrameStamp::setThreadSafeRefUnref(threadSafe);

		return 0;
	}


	// Operator binds:
	// osg::FrameStamp & osg::FrameStamp::operator=(const osg::FrameStamp & fs)
	static int _bind_op_assign(lua_State *L) {
		if (!_lg_typecheck_op_assign(L)) {
			luaL_error(L, "luna typecheck failed in osg::FrameStamp & osg::FrameStamp::operator=(const osg::FrameStamp & fs) function, expected prototype:\nosg::FrameStamp & osg::FrameStamp::operator=(const osg::FrameStamp & fs)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::FrameStamp* fs_ptr=(Luna< osg::Referenced >::checkSubType< osg::FrameStamp >(L,2));
		if( !fs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg fs in osg::FrameStamp::operator= function");
		}
		const osg::FrameStamp & fs=*fs_ptr;

		osg::FrameStamp* self=Luna< osg::Referenced >::checkSubType< osg::FrameStamp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::FrameStamp & osg::FrameStamp::operator=(const osg::FrameStamp &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::FrameStamp* lret = &self->operator=(fs);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::FrameStamp >::push(L,lret,false);

		return 1;
	}


};

osg::FrameStamp* LunaTraits< osg::FrameStamp >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_FrameStamp::_bind_ctor(L);
}

void LunaTraits< osg::FrameStamp >::_bind_dtor(osg::FrameStamp* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::FrameStamp >::className[] = "FrameStamp";
const char LunaTraits< osg::FrameStamp >::fullName[] = "osg::FrameStamp";
const char LunaTraits< osg::FrameStamp >::moduleName[] = "osg";
const char* LunaTraits< osg::FrameStamp >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osg::FrameStamp >::hash = 50044858;
const int LunaTraits< osg::FrameStamp >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::FrameStamp >::methods[] = {
	{"setFrameNumber", &luna_wrapper_osg_FrameStamp::_bind_setFrameNumber},
	{"getFrameNumber", &luna_wrapper_osg_FrameStamp::_bind_getFrameNumber},
	{"setReferenceTime", &luna_wrapper_osg_FrameStamp::_bind_setReferenceTime},
	{"getReferenceTime", &luna_wrapper_osg_FrameStamp::_bind_getReferenceTime},
	{"setSimulationTime", &luna_wrapper_osg_FrameStamp::_bind_setSimulationTime},
	{"getSimulationTime", &luna_wrapper_osg_FrameStamp::_bind_getSimulationTime},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_FrameStamp::_bind_base_setThreadSafeRefUnref},
	{"op_assign", &luna_wrapper_osg_FrameStamp::_bind_op_assign},
	{"fromVoid", &luna_wrapper_osg_FrameStamp::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_FrameStamp::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_FrameStamp::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::FrameStamp >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_FrameStamp::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::FrameStamp >::enumValues[] = {
	{0,0}
};



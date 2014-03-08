#include <plug_common.h>

#include <luna/wrappers/wrapper_osgUtil_Simplifier_ContinueSimplificationCallback.h>

class luna_wrapper_osgUtil_Simplifier_ContinueSimplificationCallback {
public:
	typedef Luna< osgUtil::Simplifier::ContinueSimplificationCallback > luna_t;

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

		osgUtil::Simplifier::ContinueSimplificationCallback* self= (osgUtil::Simplifier::ContinueSimplificationCallback*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgUtil::Simplifier::ContinueSimplificationCallback >::push(L,self,false);
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
		//osgUtil::Simplifier::ContinueSimplificationCallback* ptr= dynamic_cast< osgUtil::Simplifier::ContinueSimplificationCallback* >(Luna< osg::Referenced >::check(L,1));
		osgUtil::Simplifier::ContinueSimplificationCallback* ptr= luna_caster< osg::Referenced, osgUtil::Simplifier::ContinueSimplificationCallback >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::Simplifier::ContinueSimplificationCallback >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_continueSimplification(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_continueSimplification(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgUtil::Simplifier::ContinueSimplificationCallback::ContinueSimplificationCallback()
	static osgUtil::Simplifier::ContinueSimplificationCallback* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::Simplifier::ContinueSimplificationCallback::ContinueSimplificationCallback() function, expected prototype:\nosgUtil::Simplifier::ContinueSimplificationCallback::ContinueSimplificationCallback()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osgUtil::Simplifier::ContinueSimplificationCallback();
	}

	// osgUtil::Simplifier::ContinueSimplificationCallback::ContinueSimplificationCallback(lua_Table * data)
	static osgUtil::Simplifier::ContinueSimplificationCallback* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::Simplifier::ContinueSimplificationCallback::ContinueSimplificationCallback(lua_Table * data) function, expected prototype:\nosgUtil::Simplifier::ContinueSimplificationCallback::ContinueSimplificationCallback(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgUtil_Simplifier_ContinueSimplificationCallback(L,NULL);
	}

	// Overload binder for osgUtil::Simplifier::ContinueSimplificationCallback::ContinueSimplificationCallback
	static osgUtil::Simplifier::ContinueSimplificationCallback* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function ContinueSimplificationCallback, cannot match any of the overloads for function ContinueSimplificationCallback:\n  ContinueSimplificationCallback()\n  ContinueSimplificationCallback(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// bool osgUtil::Simplifier::ContinueSimplificationCallback::continueSimplification(const osgUtil::Simplifier & simplifier, float nextError, unsigned int numOriginalPrimitives, unsigned int numRemainingPrimitives) const
	static int _bind_continueSimplification(lua_State *L) {
		if (!_lg_typecheck_continueSimplification(L)) {
			luaL_error(L, "luna typecheck failed in bool osgUtil::Simplifier::ContinueSimplificationCallback::continueSimplification(const osgUtil::Simplifier & simplifier, float nextError, unsigned int numOriginalPrimitives, unsigned int numRemainingPrimitives) const function, expected prototype:\nbool osgUtil::Simplifier::ContinueSimplificationCallback::continueSimplification(const osgUtil::Simplifier & simplifier, float nextError, unsigned int numOriginalPrimitives, unsigned int numRemainingPrimitives) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgUtil::Simplifier* simplifier_ptr=(Luna< osg::Referenced >::checkSubType< osgUtil::Simplifier >(L,2));
		if( !simplifier_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg simplifier in osgUtil::Simplifier::ContinueSimplificationCallback::continueSimplification function");
		}
		const osgUtil::Simplifier & simplifier=*simplifier_ptr;
		float nextError=(float)lua_tonumber(L,3);
		unsigned int numOriginalPrimitives=(unsigned int)lua_tointeger(L,4);
		unsigned int numRemainingPrimitives=(unsigned int)lua_tointeger(L,5);

		osgUtil::Simplifier::ContinueSimplificationCallback* self=Luna< osg::Referenced >::checkSubType< osgUtil::Simplifier::ContinueSimplificationCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgUtil::Simplifier::ContinueSimplificationCallback::continueSimplification(const osgUtil::Simplifier &, float, unsigned int, unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->continueSimplification(simplifier, nextError, numOriginalPrimitives, numRemainingPrimitives);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgUtil::Simplifier::ContinueSimplificationCallback::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Simplifier::ContinueSimplificationCallback::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgUtil::Simplifier::ContinueSimplificationCallback::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgUtil::Simplifier::ContinueSimplificationCallback* self=Luna< osg::Referenced >::checkSubType< osgUtil::Simplifier::ContinueSimplificationCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Simplifier::ContinueSimplificationCallback::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ContinueSimplificationCallback::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// bool osgUtil::Simplifier::ContinueSimplificationCallback::base_continueSimplification(const osgUtil::Simplifier & simplifier, float nextError, unsigned int numOriginalPrimitives, unsigned int numRemainingPrimitives) const
	static int _bind_base_continueSimplification(lua_State *L) {
		if (!_lg_typecheck_base_continueSimplification(L)) {
			luaL_error(L, "luna typecheck failed in bool osgUtil::Simplifier::ContinueSimplificationCallback::base_continueSimplification(const osgUtil::Simplifier & simplifier, float nextError, unsigned int numOriginalPrimitives, unsigned int numRemainingPrimitives) const function, expected prototype:\nbool osgUtil::Simplifier::ContinueSimplificationCallback::base_continueSimplification(const osgUtil::Simplifier & simplifier, float nextError, unsigned int numOriginalPrimitives, unsigned int numRemainingPrimitives) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgUtil::Simplifier* simplifier_ptr=(Luna< osg::Referenced >::checkSubType< osgUtil::Simplifier >(L,2));
		if( !simplifier_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg simplifier in osgUtil::Simplifier::ContinueSimplificationCallback::base_continueSimplification function");
		}
		const osgUtil::Simplifier & simplifier=*simplifier_ptr;
		float nextError=(float)lua_tonumber(L,3);
		unsigned int numOriginalPrimitives=(unsigned int)lua_tointeger(L,4);
		unsigned int numRemainingPrimitives=(unsigned int)lua_tointeger(L,5);

		osgUtil::Simplifier::ContinueSimplificationCallback* self=Luna< osg::Referenced >::checkSubType< osgUtil::Simplifier::ContinueSimplificationCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgUtil::Simplifier::ContinueSimplificationCallback::base_continueSimplification(const osgUtil::Simplifier &, float, unsigned int, unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ContinueSimplificationCallback::continueSimplification(simplifier, nextError, numOriginalPrimitives, numRemainingPrimitives);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

osgUtil::Simplifier::ContinueSimplificationCallback* LunaTraits< osgUtil::Simplifier::ContinueSimplificationCallback >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_Simplifier_ContinueSimplificationCallback::_bind_ctor(L);
}

void LunaTraits< osgUtil::Simplifier::ContinueSimplificationCallback >::_bind_dtor(osgUtil::Simplifier::ContinueSimplificationCallback* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::Simplifier::ContinueSimplificationCallback >::className[] = "Simplifier_ContinueSimplificationCallback";
const char LunaTraits< osgUtil::Simplifier::ContinueSimplificationCallback >::fullName[] = "osgUtil::Simplifier::ContinueSimplificationCallback";
const char LunaTraits< osgUtil::Simplifier::ContinueSimplificationCallback >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::Simplifier::ContinueSimplificationCallback >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osgUtil::Simplifier::ContinueSimplificationCallback >::hash = 84446537;
const int LunaTraits< osgUtil::Simplifier::ContinueSimplificationCallback >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::Simplifier::ContinueSimplificationCallback >::methods[] = {
	{"continueSimplification", &luna_wrapper_osgUtil_Simplifier_ContinueSimplificationCallback::_bind_continueSimplification},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgUtil_Simplifier_ContinueSimplificationCallback::_bind_base_setThreadSafeRefUnref},
	{"base_continueSimplification", &luna_wrapper_osgUtil_Simplifier_ContinueSimplificationCallback::_bind_base_continueSimplification},
	{"fromVoid", &luna_wrapper_osgUtil_Simplifier_ContinueSimplificationCallback::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgUtil_Simplifier_ContinueSimplificationCallback::_bind_asVoid},
	{"getTable", &luna_wrapper_osgUtil_Simplifier_ContinueSimplificationCallback::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::Simplifier::ContinueSimplificationCallback >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_Simplifier_ContinueSimplificationCallback::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::Simplifier::ContinueSimplificationCallback >::enumValues[] = {
	{0,0}
};



#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_ProgramCostEstimator.h>

class luna_wrapper_osg_ProgramCostEstimator {
public:
	typedef Luna< osg::ProgramCostEstimator > luna_t;

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

		osg::ProgramCostEstimator* self= (osg::ProgramCostEstimator*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::ProgramCostEstimator >::push(L,self,false);
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
		//osg::ProgramCostEstimator* ptr= dynamic_cast< osg::ProgramCostEstimator* >(Luna< osg::Referenced >::check(L,1));
		osg::ProgramCostEstimator* ptr= luna_caster< osg::Referenced, osg::ProgramCostEstimator >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::ProgramCostEstimator >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_setDefaults(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_calibrate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2286263) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_estimateCompileCost(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_estimateDrawCost(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
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
	// osg::ProgramCostEstimator::ProgramCostEstimator()
	static osg::ProgramCostEstimator* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::ProgramCostEstimator::ProgramCostEstimator() function, expected prototype:\nosg::ProgramCostEstimator::ProgramCostEstimator()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::ProgramCostEstimator();
	}

	// osg::ProgramCostEstimator::ProgramCostEstimator(lua_Table * data)
	static osg::ProgramCostEstimator* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::ProgramCostEstimator::ProgramCostEstimator(lua_Table * data) function, expected prototype:\nosg::ProgramCostEstimator::ProgramCostEstimator(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_ProgramCostEstimator(L,NULL);
	}

	// Overload binder for osg::ProgramCostEstimator::ProgramCostEstimator
	static osg::ProgramCostEstimator* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function ProgramCostEstimator, cannot match any of the overloads for function ProgramCostEstimator:\n  ProgramCostEstimator()\n  ProgramCostEstimator(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void osg::ProgramCostEstimator::setDefaults()
	static int _bind_setDefaults(lua_State *L) {
		if (!_lg_typecheck_setDefaults(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ProgramCostEstimator::setDefaults() function, expected prototype:\nvoid osg::ProgramCostEstimator::setDefaults()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ProgramCostEstimator* self=Luna< osg::Referenced >::checkSubType< osg::ProgramCostEstimator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ProgramCostEstimator::setDefaults(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setDefaults();

		return 0;
	}

	// void osg::ProgramCostEstimator::calibrate(osg::RenderInfo & renderInfo)
	static int _bind_calibrate(lua_State *L) {
		if (!_lg_typecheck_calibrate(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ProgramCostEstimator::calibrate(osg::RenderInfo & renderInfo) function, expected prototype:\nvoid osg::ProgramCostEstimator::calibrate(osg::RenderInfo & renderInfo)\nClass arguments details:\narg 1 ID = 2286263\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::RenderInfo* renderInfo_ptr=(Luna< osg::RenderInfo >::check(L,2));
		if( !renderInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg renderInfo in osg::ProgramCostEstimator::calibrate function");
		}
		osg::RenderInfo & renderInfo=*renderInfo_ptr;

		osg::ProgramCostEstimator* self=Luna< osg::Referenced >::checkSubType< osg::ProgramCostEstimator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ProgramCostEstimator::calibrate(osg::RenderInfo &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->calibrate(renderInfo);

		return 0;
	}

	// osg::CostPair osg::ProgramCostEstimator::estimateCompileCost(const osg::Program * program) const
	static int _bind_estimateCompileCost(lua_State *L) {
		if (!_lg_typecheck_estimateCompileCost(L)) {
			luaL_error(L, "luna typecheck failed in osg::CostPair osg::ProgramCostEstimator::estimateCompileCost(const osg::Program * program) const function, expected prototype:\nosg::CostPair osg::ProgramCostEstimator::estimateCompileCost(const osg::Program * program) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Program* program=(Luna< osg::Referenced >::checkSubType< osg::Program >(L,2));

		osg::ProgramCostEstimator* self=Luna< osg::Referenced >::checkSubType< osg::ProgramCostEstimator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::CostPair osg::ProgramCostEstimator::estimateCompileCost(const osg::Program *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::CostPair stack_lret = self->estimateCompileCost(program);
		osg::CostPair* lret = new osg::CostPair(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::CostPair >::push(L,lret,true);

		return 1;
	}

	// osg::CostPair osg::ProgramCostEstimator::estimateDrawCost(const osg::Program * program) const
	static int _bind_estimateDrawCost(lua_State *L) {
		if (!_lg_typecheck_estimateDrawCost(L)) {
			luaL_error(L, "luna typecheck failed in osg::CostPair osg::ProgramCostEstimator::estimateDrawCost(const osg::Program * program) const function, expected prototype:\nosg::CostPair osg::ProgramCostEstimator::estimateDrawCost(const osg::Program * program) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Program* program=(Luna< osg::Referenced >::checkSubType< osg::Program >(L,2));

		osg::ProgramCostEstimator* self=Luna< osg::Referenced >::checkSubType< osg::ProgramCostEstimator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::CostPair osg::ProgramCostEstimator::estimateDrawCost(const osg::Program *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::CostPair stack_lret = self->estimateDrawCost(program);
		osg::CostPair* lret = new osg::CostPair(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::CostPair >::push(L,lret,true);

		return 1;
	}

	// void osg::ProgramCostEstimator::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ProgramCostEstimator::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::ProgramCostEstimator::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::ProgramCostEstimator* self=Luna< osg::Referenced >::checkSubType< osg::ProgramCostEstimator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ProgramCostEstimator::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ProgramCostEstimator::setThreadSafeRefUnref(threadSafe);

		return 0;
	}


	// Operator binds:

};

osg::ProgramCostEstimator* LunaTraits< osg::ProgramCostEstimator >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_ProgramCostEstimator::_bind_ctor(L);
}

void LunaTraits< osg::ProgramCostEstimator >::_bind_dtor(osg::ProgramCostEstimator* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::ProgramCostEstimator >::className[] = "ProgramCostEstimator";
const char LunaTraits< osg::ProgramCostEstimator >::fullName[] = "osg::ProgramCostEstimator";
const char LunaTraits< osg::ProgramCostEstimator >::moduleName[] = "osg";
const char* LunaTraits< osg::ProgramCostEstimator >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osg::ProgramCostEstimator >::hash = 38869562;
const int LunaTraits< osg::ProgramCostEstimator >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::ProgramCostEstimator >::methods[] = {
	{"setDefaults", &luna_wrapper_osg_ProgramCostEstimator::_bind_setDefaults},
	{"calibrate", &luna_wrapper_osg_ProgramCostEstimator::_bind_calibrate},
	{"estimateCompileCost", &luna_wrapper_osg_ProgramCostEstimator::_bind_estimateCompileCost},
	{"estimateDrawCost", &luna_wrapper_osg_ProgramCostEstimator::_bind_estimateDrawCost},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_ProgramCostEstimator::_bind_base_setThreadSafeRefUnref},
	{"fromVoid", &luna_wrapper_osg_ProgramCostEstimator::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_ProgramCostEstimator::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_ProgramCostEstimator::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ProgramCostEstimator >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_ProgramCostEstimator::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ProgramCostEstimator >::enumValues[] = {
	{0,0}
};



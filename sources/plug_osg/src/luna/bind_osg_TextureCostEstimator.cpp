#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_TextureCostEstimator.h>

class luna_wrapper_osg_TextureCostEstimator {
public:
	typedef Luna< osg::TextureCostEstimator > luna_t;

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

		osg::TextureCostEstimator* self= (osg::TextureCostEstimator*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::TextureCostEstimator >::push(L,self,false);
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
		//osg::TextureCostEstimator* ptr= dynamic_cast< osg::TextureCostEstimator* >(Luna< osg::Referenced >::check(L,1));
		osg::TextureCostEstimator* ptr= luna_caster< osg::Referenced, osg::TextureCostEstimator >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::TextureCostEstimator >::push(L,ptr,false);
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
	// osg::TextureCostEstimator::TextureCostEstimator()
	static osg::TextureCostEstimator* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::TextureCostEstimator::TextureCostEstimator() function, expected prototype:\nosg::TextureCostEstimator::TextureCostEstimator()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::TextureCostEstimator();
	}

	// osg::TextureCostEstimator::TextureCostEstimator(lua_Table * data)
	static osg::TextureCostEstimator* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::TextureCostEstimator::TextureCostEstimator(lua_Table * data) function, expected prototype:\nosg::TextureCostEstimator::TextureCostEstimator(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_TextureCostEstimator(L,NULL);
	}

	// Overload binder for osg::TextureCostEstimator::TextureCostEstimator
	static osg::TextureCostEstimator* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function TextureCostEstimator, cannot match any of the overloads for function TextureCostEstimator:\n  TextureCostEstimator()\n  TextureCostEstimator(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void osg::TextureCostEstimator::setDefaults()
	static int _bind_setDefaults(lua_State *L) {
		if (!_lg_typecheck_setDefaults(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TextureCostEstimator::setDefaults() function, expected prototype:\nvoid osg::TextureCostEstimator::setDefaults()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::TextureCostEstimator* self=Luna< osg::Referenced >::checkSubType< osg::TextureCostEstimator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TextureCostEstimator::setDefaults(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setDefaults();

		return 0;
	}

	// void osg::TextureCostEstimator::calibrate(osg::RenderInfo & renderInfo)
	static int _bind_calibrate(lua_State *L) {
		if (!_lg_typecheck_calibrate(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TextureCostEstimator::calibrate(osg::RenderInfo & renderInfo) function, expected prototype:\nvoid osg::TextureCostEstimator::calibrate(osg::RenderInfo & renderInfo)\nClass arguments details:\narg 1 ID = 2286263\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::RenderInfo* renderInfo_ptr=(Luna< osg::RenderInfo >::check(L,2));
		if( !renderInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg renderInfo in osg::TextureCostEstimator::calibrate function");
		}
		osg::RenderInfo & renderInfo=*renderInfo_ptr;

		osg::TextureCostEstimator* self=Luna< osg::Referenced >::checkSubType< osg::TextureCostEstimator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TextureCostEstimator::calibrate(osg::RenderInfo &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->calibrate(renderInfo);

		return 0;
	}

	// osg::CostPair osg::TextureCostEstimator::estimateCompileCost(const osg::Texture * texture) const
	static int _bind_estimateCompileCost(lua_State *L) {
		if (!_lg_typecheck_estimateCompileCost(L)) {
			luaL_error(L, "luna typecheck failed in osg::CostPair osg::TextureCostEstimator::estimateCompileCost(const osg::Texture * texture) const function, expected prototype:\nosg::CostPair osg::TextureCostEstimator::estimateCompileCost(const osg::Texture * texture) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Texture* texture=(Luna< osg::Referenced >::checkSubType< osg::Texture >(L,2));

		osg::TextureCostEstimator* self=Luna< osg::Referenced >::checkSubType< osg::TextureCostEstimator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::CostPair osg::TextureCostEstimator::estimateCompileCost(const osg::Texture *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::CostPair stack_lret = self->estimateCompileCost(texture);
		osg::CostPair* lret = new osg::CostPair(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::CostPair >::push(L,lret,true);

		return 1;
	}

	// osg::CostPair osg::TextureCostEstimator::estimateDrawCost(const osg::Texture * texture) const
	static int _bind_estimateDrawCost(lua_State *L) {
		if (!_lg_typecheck_estimateDrawCost(L)) {
			luaL_error(L, "luna typecheck failed in osg::CostPair osg::TextureCostEstimator::estimateDrawCost(const osg::Texture * texture) const function, expected prototype:\nosg::CostPair osg::TextureCostEstimator::estimateDrawCost(const osg::Texture * texture) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Texture* texture=(Luna< osg::Referenced >::checkSubType< osg::Texture >(L,2));

		osg::TextureCostEstimator* self=Luna< osg::Referenced >::checkSubType< osg::TextureCostEstimator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::CostPair osg::TextureCostEstimator::estimateDrawCost(const osg::Texture *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::CostPair stack_lret = self->estimateDrawCost(texture);
		osg::CostPair* lret = new osg::CostPair(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::CostPair >::push(L,lret,true);

		return 1;
	}

	// void osg::TextureCostEstimator::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::TextureCostEstimator::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::TextureCostEstimator::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::TextureCostEstimator* self=Luna< osg::Referenced >::checkSubType< osg::TextureCostEstimator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::TextureCostEstimator::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TextureCostEstimator::setThreadSafeRefUnref(threadSafe);

		return 0;
	}


	// Operator binds:

};

osg::TextureCostEstimator* LunaTraits< osg::TextureCostEstimator >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_TextureCostEstimator::_bind_ctor(L);
}

void LunaTraits< osg::TextureCostEstimator >::_bind_dtor(osg::TextureCostEstimator* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::TextureCostEstimator >::className[] = "TextureCostEstimator";
const char LunaTraits< osg::TextureCostEstimator >::fullName[] = "osg::TextureCostEstimator";
const char LunaTraits< osg::TextureCostEstimator >::moduleName[] = "osg";
const char* LunaTraits< osg::TextureCostEstimator >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osg::TextureCostEstimator >::hash = 13759554;
const int LunaTraits< osg::TextureCostEstimator >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::TextureCostEstimator >::methods[] = {
	{"setDefaults", &luna_wrapper_osg_TextureCostEstimator::_bind_setDefaults},
	{"calibrate", &luna_wrapper_osg_TextureCostEstimator::_bind_calibrate},
	{"estimateCompileCost", &luna_wrapper_osg_TextureCostEstimator::_bind_estimateCompileCost},
	{"estimateDrawCost", &luna_wrapper_osg_TextureCostEstimator::_bind_estimateDrawCost},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_TextureCostEstimator::_bind_base_setThreadSafeRefUnref},
	{"fromVoid", &luna_wrapper_osg_TextureCostEstimator::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_TextureCostEstimator::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_TextureCostEstimator::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::TextureCostEstimator >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_TextureCostEstimator::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::TextureCostEstimator >::enumValues[] = {
	{0,0}
};



#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_AtmoProcessor.h>

class luna_wrapper_proland_AtmoProcessor {
public:
	typedef Luna< proland::AtmoProcessor > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::Object* self=(Luna< ork::Object >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<ork::Object,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
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

		proland::AtmoProcessor* self= (proland::AtmoProcessor*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::AtmoProcessor >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,1381405) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< ork::Object >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_Object(lua_State *L) {
		// all checked are already performed before reaching this point.
		//proland::AtmoProcessor* ptr= dynamic_cast< proland::AtmoProcessor* >(Luna< ork::Object >::check(L,1));
		proland::AtmoProcessor* ptr= luna_caster< ork::Object, proland::AtmoProcessor >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::AtmoProcessor >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,84217978) ) return false;
		if( (!(Luna< proland::AtmoParameters >::check(L,1))) ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,84217978) ) return false;
		if( (!(Luna< proland::AtmoParameters >::check(L,2))) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_preprocess(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getParams(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getOutput(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTransmittanceT(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getIrradianceT(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getInscatterT(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDeltaET(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDeltaSRT(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDeltaSMT(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDeltaJT(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCopyInscatter1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCopyInscatterN(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCopyIrradiance(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getInscatter1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getInscatterN(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getInscatterS(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getIrradiance1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getIrradianceN(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTransmittance(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFbo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getStep(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getOrder(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setParams(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,84217978) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTransmittanceT(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Texture2D >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setIrradianceT(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Texture2D >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setInscatterT(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Texture3D >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDeltaET(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Texture2D >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDeltaSRT(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Texture3D >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDeltaSMT(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Texture3D >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDeltaJT(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Texture3D >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCopyInscatter1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCopyInscatterN(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCopyIrradiance(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setInscatter1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setInscatterN(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setInscatterS(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setIrradiance1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setIrradianceN(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTransmittance(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFbo(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setStep(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setOrder(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_toString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::AtmoProcessor::AtmoProcessor(const proland::AtmoParameters & params, const char * output)
	static proland::AtmoProcessor* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::AtmoProcessor::AtmoProcessor(const proland::AtmoParameters & params, const char * output) function, expected prototype:\nproland::AtmoProcessor::AtmoProcessor(const proland::AtmoParameters & params, const char * output)\nClass arguments details:\narg 1 ID = 84217978\n\n%s",luna_dumpStack(L).c_str());
		}

		const proland::AtmoParameters* params_ptr=(Luna< proland::AtmoParameters >::check(L,1));
		if( !params_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg params in proland::AtmoProcessor::AtmoProcessor function");
		}
		const proland::AtmoParameters & params=*params_ptr;
		const char * output=(const char *)lua_tostring(L,2);

		return new proland::AtmoProcessor(params, output);
	}

	// proland::AtmoProcessor::AtmoProcessor(lua_Table * data, const proland::AtmoParameters & params, const char * output)
	static proland::AtmoProcessor* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::AtmoProcessor::AtmoProcessor(lua_Table * data, const proland::AtmoParameters & params, const char * output) function, expected prototype:\nproland::AtmoProcessor::AtmoProcessor(lua_Table * data, const proland::AtmoParameters & params, const char * output)\nClass arguments details:\narg 2 ID = 84217978\n\n%s",luna_dumpStack(L).c_str());
		}

		const proland::AtmoParameters* params_ptr=(Luna< proland::AtmoParameters >::check(L,2));
		if( !params_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg params in proland::AtmoProcessor::AtmoProcessor function");
		}
		const proland::AtmoParameters & params=*params_ptr;
		const char * output=(const char *)lua_tostring(L,3);

		return new wrapper_proland_AtmoProcessor(L,NULL, params, output);
	}

	// Overload binder for proland::AtmoProcessor::AtmoProcessor
	static proland::AtmoProcessor* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function AtmoProcessor, cannot match any of the overloads for function AtmoProcessor:\n  AtmoProcessor(const proland::AtmoParameters &, const char *)\n  AtmoProcessor(lua_Table *, const proland::AtmoParameters &, const char *)\n");
		return NULL;
	}


	// Function binds:
	// bool proland::AtmoProcessor::preprocess()
	static int _bind_preprocess(lua_State *L) {
		if (!_lg_typecheck_preprocess(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::AtmoProcessor::preprocess() function, expected prototype:\nbool proland::AtmoProcessor::preprocess()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::AtmoProcessor* self=Luna< ork::Object >::checkSubType< proland::AtmoProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::AtmoProcessor::preprocess(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->preprocess();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// proland::AtmoParameters proland::AtmoProcessor::params()
	static int _bind_getParams(lua_State *L) {
		if (!_lg_typecheck_getParams(L)) {
			luaL_error(L, "luna typecheck failed in proland::AtmoParameters proland::AtmoProcessor::params() function, expected prototype:\nproland::AtmoParameters proland::AtmoProcessor::params()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::AtmoProcessor* self=Luna< ork::Object >::checkSubType< proland::AtmoProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::AtmoParameters proland::AtmoProcessor::params(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const proland::AtmoParameters* lret = &self->params;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::AtmoParameters >::push(L,lret,false);

		return 1;
	}

	// const char * proland::AtmoProcessor::output()
	static int _bind_getOutput(lua_State *L) {
		if (!_lg_typecheck_getOutput(L)) {
			luaL_error(L, "luna typecheck failed in const char * proland::AtmoProcessor::output() function, expected prototype:\nconst char * proland::AtmoProcessor::output()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::AtmoProcessor* self=Luna< ork::Object >::checkSubType< proland::AtmoProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * proland::AtmoProcessor::output(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->output;
		lua_pushstring(L,lret);

		return 1;
	}

	// ork::ptr< ork::Texture2D > proland::AtmoProcessor::transmittanceT()
	static int _bind_getTransmittanceT(lua_State *L) {
		if (!_lg_typecheck_getTransmittanceT(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Texture2D > proland::AtmoProcessor::transmittanceT() function, expected prototype:\nork::ptr< ork::Texture2D > proland::AtmoProcessor::transmittanceT()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::AtmoProcessor* self=Luna< ork::Object >::checkSubType< proland::AtmoProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Texture2D > proland::AtmoProcessor::transmittanceT(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Texture2D > lret = self->transmittanceT;
		Luna< ork::Texture2D >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::Texture2D > proland::AtmoProcessor::irradianceT()
	static int _bind_getIrradianceT(lua_State *L) {
		if (!_lg_typecheck_getIrradianceT(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Texture2D > proland::AtmoProcessor::irradianceT() function, expected prototype:\nork::ptr< ork::Texture2D > proland::AtmoProcessor::irradianceT()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::AtmoProcessor* self=Luna< ork::Object >::checkSubType< proland::AtmoProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Texture2D > proland::AtmoProcessor::irradianceT(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Texture2D > lret = self->irradianceT;
		Luna< ork::Texture2D >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::Texture3D > proland::AtmoProcessor::inscatterT()
	static int _bind_getInscatterT(lua_State *L) {
		if (!_lg_typecheck_getInscatterT(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Texture3D > proland::AtmoProcessor::inscatterT() function, expected prototype:\nork::ptr< ork::Texture3D > proland::AtmoProcessor::inscatterT()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::AtmoProcessor* self=Luna< ork::Object >::checkSubType< proland::AtmoProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Texture3D > proland::AtmoProcessor::inscatterT(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Texture3D > lret = self->inscatterT;
		Luna< ork::Texture3D >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::Texture2D > proland::AtmoProcessor::deltaET()
	static int _bind_getDeltaET(lua_State *L) {
		if (!_lg_typecheck_getDeltaET(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Texture2D > proland::AtmoProcessor::deltaET() function, expected prototype:\nork::ptr< ork::Texture2D > proland::AtmoProcessor::deltaET()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::AtmoProcessor* self=Luna< ork::Object >::checkSubType< proland::AtmoProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Texture2D > proland::AtmoProcessor::deltaET(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Texture2D > lret = self->deltaET;
		Luna< ork::Texture2D >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::Texture3D > proland::AtmoProcessor::deltaSRT()
	static int _bind_getDeltaSRT(lua_State *L) {
		if (!_lg_typecheck_getDeltaSRT(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Texture3D > proland::AtmoProcessor::deltaSRT() function, expected prototype:\nork::ptr< ork::Texture3D > proland::AtmoProcessor::deltaSRT()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::AtmoProcessor* self=Luna< ork::Object >::checkSubType< proland::AtmoProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Texture3D > proland::AtmoProcessor::deltaSRT(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Texture3D > lret = self->deltaSRT;
		Luna< ork::Texture3D >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::Texture3D > proland::AtmoProcessor::deltaSMT()
	static int _bind_getDeltaSMT(lua_State *L) {
		if (!_lg_typecheck_getDeltaSMT(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Texture3D > proland::AtmoProcessor::deltaSMT() function, expected prototype:\nork::ptr< ork::Texture3D > proland::AtmoProcessor::deltaSMT()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::AtmoProcessor* self=Luna< ork::Object >::checkSubType< proland::AtmoProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Texture3D > proland::AtmoProcessor::deltaSMT(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Texture3D > lret = self->deltaSMT;
		Luna< ork::Texture3D >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::Texture3D > proland::AtmoProcessor::deltaJT()
	static int _bind_getDeltaJT(lua_State *L) {
		if (!_lg_typecheck_getDeltaJT(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Texture3D > proland::AtmoProcessor::deltaJT() function, expected prototype:\nork::ptr< ork::Texture3D > proland::AtmoProcessor::deltaJT()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::AtmoProcessor* self=Luna< ork::Object >::checkSubType< proland::AtmoProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Texture3D > proland::AtmoProcessor::deltaJT(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Texture3D > lret = self->deltaJT;
		Luna< ork::Texture3D >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::Program > proland::AtmoProcessor::copyInscatter1()
	static int _bind_getCopyInscatter1(lua_State *L) {
		if (!_lg_typecheck_getCopyInscatter1(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Program > proland::AtmoProcessor::copyInscatter1() function, expected prototype:\nork::ptr< ork::Program > proland::AtmoProcessor::copyInscatter1()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::AtmoProcessor* self=Luna< ork::Object >::checkSubType< proland::AtmoProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Program > proland::AtmoProcessor::copyInscatter1(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Program > lret = self->copyInscatter1;
		Luna< ork::Program >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::Program > proland::AtmoProcessor::copyInscatterN()
	static int _bind_getCopyInscatterN(lua_State *L) {
		if (!_lg_typecheck_getCopyInscatterN(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Program > proland::AtmoProcessor::copyInscatterN() function, expected prototype:\nork::ptr< ork::Program > proland::AtmoProcessor::copyInscatterN()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::AtmoProcessor* self=Luna< ork::Object >::checkSubType< proland::AtmoProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Program > proland::AtmoProcessor::copyInscatterN(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Program > lret = self->copyInscatterN;
		Luna< ork::Program >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::Program > proland::AtmoProcessor::copyIrradiance()
	static int _bind_getCopyIrradiance(lua_State *L) {
		if (!_lg_typecheck_getCopyIrradiance(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Program > proland::AtmoProcessor::copyIrradiance() function, expected prototype:\nork::ptr< ork::Program > proland::AtmoProcessor::copyIrradiance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::AtmoProcessor* self=Luna< ork::Object >::checkSubType< proland::AtmoProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Program > proland::AtmoProcessor::copyIrradiance(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Program > lret = self->copyIrradiance;
		Luna< ork::Program >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::Program > proland::AtmoProcessor::inscatter1()
	static int _bind_getInscatter1(lua_State *L) {
		if (!_lg_typecheck_getInscatter1(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Program > proland::AtmoProcessor::inscatter1() function, expected prototype:\nork::ptr< ork::Program > proland::AtmoProcessor::inscatter1()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::AtmoProcessor* self=Luna< ork::Object >::checkSubType< proland::AtmoProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Program > proland::AtmoProcessor::inscatter1(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Program > lret = self->inscatter1;
		Luna< ork::Program >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::Program > proland::AtmoProcessor::inscatterN()
	static int _bind_getInscatterN(lua_State *L) {
		if (!_lg_typecheck_getInscatterN(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Program > proland::AtmoProcessor::inscatterN() function, expected prototype:\nork::ptr< ork::Program > proland::AtmoProcessor::inscatterN()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::AtmoProcessor* self=Luna< ork::Object >::checkSubType< proland::AtmoProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Program > proland::AtmoProcessor::inscatterN(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Program > lret = self->inscatterN;
		Luna< ork::Program >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::Program > proland::AtmoProcessor::inscatterS()
	static int _bind_getInscatterS(lua_State *L) {
		if (!_lg_typecheck_getInscatterS(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Program > proland::AtmoProcessor::inscatterS() function, expected prototype:\nork::ptr< ork::Program > proland::AtmoProcessor::inscatterS()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::AtmoProcessor* self=Luna< ork::Object >::checkSubType< proland::AtmoProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Program > proland::AtmoProcessor::inscatterS(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Program > lret = self->inscatterS;
		Luna< ork::Program >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::Program > proland::AtmoProcessor::irradiance1()
	static int _bind_getIrradiance1(lua_State *L) {
		if (!_lg_typecheck_getIrradiance1(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Program > proland::AtmoProcessor::irradiance1() function, expected prototype:\nork::ptr< ork::Program > proland::AtmoProcessor::irradiance1()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::AtmoProcessor* self=Luna< ork::Object >::checkSubType< proland::AtmoProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Program > proland::AtmoProcessor::irradiance1(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Program > lret = self->irradiance1;
		Luna< ork::Program >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::Program > proland::AtmoProcessor::irradianceN()
	static int _bind_getIrradianceN(lua_State *L) {
		if (!_lg_typecheck_getIrradianceN(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Program > proland::AtmoProcessor::irradianceN() function, expected prototype:\nork::ptr< ork::Program > proland::AtmoProcessor::irradianceN()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::AtmoProcessor* self=Luna< ork::Object >::checkSubType< proland::AtmoProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Program > proland::AtmoProcessor::irradianceN(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Program > lret = self->irradianceN;
		Luna< ork::Program >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::Program > proland::AtmoProcessor::transmittance()
	static int _bind_getTransmittance(lua_State *L) {
		if (!_lg_typecheck_getTransmittance(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Program > proland::AtmoProcessor::transmittance() function, expected prototype:\nork::ptr< ork::Program > proland::AtmoProcessor::transmittance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::AtmoProcessor* self=Luna< ork::Object >::checkSubType< proland::AtmoProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Program > proland::AtmoProcessor::transmittance(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Program > lret = self->transmittance;
		Luna< ork::Program >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::FrameBuffer > proland::AtmoProcessor::fbo()
	static int _bind_getFbo(lua_State *L) {
		if (!_lg_typecheck_getFbo(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::FrameBuffer > proland::AtmoProcessor::fbo() function, expected prototype:\nork::ptr< ork::FrameBuffer > proland::AtmoProcessor::fbo()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::AtmoProcessor* self=Luna< ork::Object >::checkSubType< proland::AtmoProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::FrameBuffer > proland::AtmoProcessor::fbo(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::FrameBuffer > lret = self->fbo;
		Luna< ork::FrameBuffer >::push(L,lret.get(),false);

		return 1;
	}

	// int proland::AtmoProcessor::step()
	static int _bind_getStep(lua_State *L) {
		if (!_lg_typecheck_getStep(L)) {
			luaL_error(L, "luna typecheck failed in int proland::AtmoProcessor::step() function, expected prototype:\nint proland::AtmoProcessor::step()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::AtmoProcessor* self=Luna< ork::Object >::checkSubType< proland::AtmoProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::AtmoProcessor::step(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->step;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int proland::AtmoProcessor::order()
	static int _bind_getOrder(lua_State *L) {
		if (!_lg_typecheck_getOrder(L)) {
			luaL_error(L, "luna typecheck failed in int proland::AtmoProcessor::order() function, expected prototype:\nint proland::AtmoProcessor::order()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::AtmoProcessor* self=Luna< ork::Object >::checkSubType< proland::AtmoProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::AtmoProcessor::order(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->order;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void proland::AtmoProcessor::params(proland::AtmoParameters value)
	static int _bind_setParams(lua_State *L) {
		if (!_lg_typecheck_setParams(L)) {
			luaL_error(L, "luna typecheck failed in void proland::AtmoProcessor::params(proland::AtmoParameters value) function, expected prototype:\nvoid proland::AtmoProcessor::params(proland::AtmoParameters value)\nClass arguments details:\narg 1 ID = 84217978\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::AtmoParameters* value_ptr=(Luna< proland::AtmoParameters >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in proland::AtmoProcessor::params function");
		}
		proland::AtmoParameters value=*value_ptr;

		proland::AtmoProcessor* self=Luna< ork::Object >::checkSubType< proland::AtmoProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::AtmoProcessor::params(proland::AtmoParameters). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->params = value;

		return 0;
	}

	// void proland::AtmoProcessor::transmittanceT(ork::ptr< ork::Texture2D > value)
	static int _bind_setTransmittanceT(lua_State *L) {
		if (!_lg_typecheck_setTransmittanceT(L)) {
			luaL_error(L, "luna typecheck failed in void proland::AtmoProcessor::transmittanceT(ork::ptr< ork::Texture2D > value) function, expected prototype:\nvoid proland::AtmoProcessor::transmittanceT(ork::ptr< ork::Texture2D > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Texture2D > value = Luna< ork::Object >::checkSubType< ork::Texture2D >(L,2);

		proland::AtmoProcessor* self=Luna< ork::Object >::checkSubType< proland::AtmoProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::AtmoProcessor::transmittanceT(ork::ptr< ork::Texture2D >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->transmittanceT = value;

		return 0;
	}

	// void proland::AtmoProcessor::irradianceT(ork::ptr< ork::Texture2D > value)
	static int _bind_setIrradianceT(lua_State *L) {
		if (!_lg_typecheck_setIrradianceT(L)) {
			luaL_error(L, "luna typecheck failed in void proland::AtmoProcessor::irradianceT(ork::ptr< ork::Texture2D > value) function, expected prototype:\nvoid proland::AtmoProcessor::irradianceT(ork::ptr< ork::Texture2D > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Texture2D > value = Luna< ork::Object >::checkSubType< ork::Texture2D >(L,2);

		proland::AtmoProcessor* self=Luna< ork::Object >::checkSubType< proland::AtmoProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::AtmoProcessor::irradianceT(ork::ptr< ork::Texture2D >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->irradianceT = value;

		return 0;
	}

	// void proland::AtmoProcessor::inscatterT(ork::ptr< ork::Texture3D > value)
	static int _bind_setInscatterT(lua_State *L) {
		if (!_lg_typecheck_setInscatterT(L)) {
			luaL_error(L, "luna typecheck failed in void proland::AtmoProcessor::inscatterT(ork::ptr< ork::Texture3D > value) function, expected prototype:\nvoid proland::AtmoProcessor::inscatterT(ork::ptr< ork::Texture3D > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Texture3D > value = Luna< ork::Object >::checkSubType< ork::Texture3D >(L,2);

		proland::AtmoProcessor* self=Luna< ork::Object >::checkSubType< proland::AtmoProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::AtmoProcessor::inscatterT(ork::ptr< ork::Texture3D >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->inscatterT = value;

		return 0;
	}

	// void proland::AtmoProcessor::deltaET(ork::ptr< ork::Texture2D > value)
	static int _bind_setDeltaET(lua_State *L) {
		if (!_lg_typecheck_setDeltaET(L)) {
			luaL_error(L, "luna typecheck failed in void proland::AtmoProcessor::deltaET(ork::ptr< ork::Texture2D > value) function, expected prototype:\nvoid proland::AtmoProcessor::deltaET(ork::ptr< ork::Texture2D > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Texture2D > value = Luna< ork::Object >::checkSubType< ork::Texture2D >(L,2);

		proland::AtmoProcessor* self=Luna< ork::Object >::checkSubType< proland::AtmoProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::AtmoProcessor::deltaET(ork::ptr< ork::Texture2D >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->deltaET = value;

		return 0;
	}

	// void proland::AtmoProcessor::deltaSRT(ork::ptr< ork::Texture3D > value)
	static int _bind_setDeltaSRT(lua_State *L) {
		if (!_lg_typecheck_setDeltaSRT(L)) {
			luaL_error(L, "luna typecheck failed in void proland::AtmoProcessor::deltaSRT(ork::ptr< ork::Texture3D > value) function, expected prototype:\nvoid proland::AtmoProcessor::deltaSRT(ork::ptr< ork::Texture3D > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Texture3D > value = Luna< ork::Object >::checkSubType< ork::Texture3D >(L,2);

		proland::AtmoProcessor* self=Luna< ork::Object >::checkSubType< proland::AtmoProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::AtmoProcessor::deltaSRT(ork::ptr< ork::Texture3D >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->deltaSRT = value;

		return 0;
	}

	// void proland::AtmoProcessor::deltaSMT(ork::ptr< ork::Texture3D > value)
	static int _bind_setDeltaSMT(lua_State *L) {
		if (!_lg_typecheck_setDeltaSMT(L)) {
			luaL_error(L, "luna typecheck failed in void proland::AtmoProcessor::deltaSMT(ork::ptr< ork::Texture3D > value) function, expected prototype:\nvoid proland::AtmoProcessor::deltaSMT(ork::ptr< ork::Texture3D > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Texture3D > value = Luna< ork::Object >::checkSubType< ork::Texture3D >(L,2);

		proland::AtmoProcessor* self=Luna< ork::Object >::checkSubType< proland::AtmoProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::AtmoProcessor::deltaSMT(ork::ptr< ork::Texture3D >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->deltaSMT = value;

		return 0;
	}

	// void proland::AtmoProcessor::deltaJT(ork::ptr< ork::Texture3D > value)
	static int _bind_setDeltaJT(lua_State *L) {
		if (!_lg_typecheck_setDeltaJT(L)) {
			luaL_error(L, "luna typecheck failed in void proland::AtmoProcessor::deltaJT(ork::ptr< ork::Texture3D > value) function, expected prototype:\nvoid proland::AtmoProcessor::deltaJT(ork::ptr< ork::Texture3D > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Texture3D > value = Luna< ork::Object >::checkSubType< ork::Texture3D >(L,2);

		proland::AtmoProcessor* self=Luna< ork::Object >::checkSubType< proland::AtmoProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::AtmoProcessor::deltaJT(ork::ptr< ork::Texture3D >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->deltaJT = value;

		return 0;
	}

	// void proland::AtmoProcessor::copyInscatter1(ork::ptr< ork::Program > value)
	static int _bind_setCopyInscatter1(lua_State *L) {
		if (!_lg_typecheck_setCopyInscatter1(L)) {
			luaL_error(L, "luna typecheck failed in void proland::AtmoProcessor::copyInscatter1(ork::ptr< ork::Program > value) function, expected prototype:\nvoid proland::AtmoProcessor::copyInscatter1(ork::ptr< ork::Program > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Program > value = Luna< ork::Object >::checkSubType< ork::Program >(L,2);

		proland::AtmoProcessor* self=Luna< ork::Object >::checkSubType< proland::AtmoProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::AtmoProcessor::copyInscatter1(ork::ptr< ork::Program >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->copyInscatter1 = value;

		return 0;
	}

	// void proland::AtmoProcessor::copyInscatterN(ork::ptr< ork::Program > value)
	static int _bind_setCopyInscatterN(lua_State *L) {
		if (!_lg_typecheck_setCopyInscatterN(L)) {
			luaL_error(L, "luna typecheck failed in void proland::AtmoProcessor::copyInscatterN(ork::ptr< ork::Program > value) function, expected prototype:\nvoid proland::AtmoProcessor::copyInscatterN(ork::ptr< ork::Program > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Program > value = Luna< ork::Object >::checkSubType< ork::Program >(L,2);

		proland::AtmoProcessor* self=Luna< ork::Object >::checkSubType< proland::AtmoProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::AtmoProcessor::copyInscatterN(ork::ptr< ork::Program >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->copyInscatterN = value;

		return 0;
	}

	// void proland::AtmoProcessor::copyIrradiance(ork::ptr< ork::Program > value)
	static int _bind_setCopyIrradiance(lua_State *L) {
		if (!_lg_typecheck_setCopyIrradiance(L)) {
			luaL_error(L, "luna typecheck failed in void proland::AtmoProcessor::copyIrradiance(ork::ptr< ork::Program > value) function, expected prototype:\nvoid proland::AtmoProcessor::copyIrradiance(ork::ptr< ork::Program > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Program > value = Luna< ork::Object >::checkSubType< ork::Program >(L,2);

		proland::AtmoProcessor* self=Luna< ork::Object >::checkSubType< proland::AtmoProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::AtmoProcessor::copyIrradiance(ork::ptr< ork::Program >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->copyIrradiance = value;

		return 0;
	}

	// void proland::AtmoProcessor::inscatter1(ork::ptr< ork::Program > value)
	static int _bind_setInscatter1(lua_State *L) {
		if (!_lg_typecheck_setInscatter1(L)) {
			luaL_error(L, "luna typecheck failed in void proland::AtmoProcessor::inscatter1(ork::ptr< ork::Program > value) function, expected prototype:\nvoid proland::AtmoProcessor::inscatter1(ork::ptr< ork::Program > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Program > value = Luna< ork::Object >::checkSubType< ork::Program >(L,2);

		proland::AtmoProcessor* self=Luna< ork::Object >::checkSubType< proland::AtmoProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::AtmoProcessor::inscatter1(ork::ptr< ork::Program >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->inscatter1 = value;

		return 0;
	}

	// void proland::AtmoProcessor::inscatterN(ork::ptr< ork::Program > value)
	static int _bind_setInscatterN(lua_State *L) {
		if (!_lg_typecheck_setInscatterN(L)) {
			luaL_error(L, "luna typecheck failed in void proland::AtmoProcessor::inscatterN(ork::ptr< ork::Program > value) function, expected prototype:\nvoid proland::AtmoProcessor::inscatterN(ork::ptr< ork::Program > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Program > value = Luna< ork::Object >::checkSubType< ork::Program >(L,2);

		proland::AtmoProcessor* self=Luna< ork::Object >::checkSubType< proland::AtmoProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::AtmoProcessor::inscatterN(ork::ptr< ork::Program >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->inscatterN = value;

		return 0;
	}

	// void proland::AtmoProcessor::inscatterS(ork::ptr< ork::Program > value)
	static int _bind_setInscatterS(lua_State *L) {
		if (!_lg_typecheck_setInscatterS(L)) {
			luaL_error(L, "luna typecheck failed in void proland::AtmoProcessor::inscatterS(ork::ptr< ork::Program > value) function, expected prototype:\nvoid proland::AtmoProcessor::inscatterS(ork::ptr< ork::Program > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Program > value = Luna< ork::Object >::checkSubType< ork::Program >(L,2);

		proland::AtmoProcessor* self=Luna< ork::Object >::checkSubType< proland::AtmoProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::AtmoProcessor::inscatterS(ork::ptr< ork::Program >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->inscatterS = value;

		return 0;
	}

	// void proland::AtmoProcessor::irradiance1(ork::ptr< ork::Program > value)
	static int _bind_setIrradiance1(lua_State *L) {
		if (!_lg_typecheck_setIrradiance1(L)) {
			luaL_error(L, "luna typecheck failed in void proland::AtmoProcessor::irradiance1(ork::ptr< ork::Program > value) function, expected prototype:\nvoid proland::AtmoProcessor::irradiance1(ork::ptr< ork::Program > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Program > value = Luna< ork::Object >::checkSubType< ork::Program >(L,2);

		proland::AtmoProcessor* self=Luna< ork::Object >::checkSubType< proland::AtmoProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::AtmoProcessor::irradiance1(ork::ptr< ork::Program >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->irradiance1 = value;

		return 0;
	}

	// void proland::AtmoProcessor::irradianceN(ork::ptr< ork::Program > value)
	static int _bind_setIrradianceN(lua_State *L) {
		if (!_lg_typecheck_setIrradianceN(L)) {
			luaL_error(L, "luna typecheck failed in void proland::AtmoProcessor::irradianceN(ork::ptr< ork::Program > value) function, expected prototype:\nvoid proland::AtmoProcessor::irradianceN(ork::ptr< ork::Program > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Program > value = Luna< ork::Object >::checkSubType< ork::Program >(L,2);

		proland::AtmoProcessor* self=Luna< ork::Object >::checkSubType< proland::AtmoProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::AtmoProcessor::irradianceN(ork::ptr< ork::Program >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->irradianceN = value;

		return 0;
	}

	// void proland::AtmoProcessor::transmittance(ork::ptr< ork::Program > value)
	static int _bind_setTransmittance(lua_State *L) {
		if (!_lg_typecheck_setTransmittance(L)) {
			luaL_error(L, "luna typecheck failed in void proland::AtmoProcessor::transmittance(ork::ptr< ork::Program > value) function, expected prototype:\nvoid proland::AtmoProcessor::transmittance(ork::ptr< ork::Program > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Program > value = Luna< ork::Object >::checkSubType< ork::Program >(L,2);

		proland::AtmoProcessor* self=Luna< ork::Object >::checkSubType< proland::AtmoProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::AtmoProcessor::transmittance(ork::ptr< ork::Program >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->transmittance = value;

		return 0;
	}

	// void proland::AtmoProcessor::fbo(ork::ptr< ork::FrameBuffer > value)
	static int _bind_setFbo(lua_State *L) {
		if (!_lg_typecheck_setFbo(L)) {
			luaL_error(L, "luna typecheck failed in void proland::AtmoProcessor::fbo(ork::ptr< ork::FrameBuffer > value) function, expected prototype:\nvoid proland::AtmoProcessor::fbo(ork::ptr< ork::FrameBuffer > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::FrameBuffer > value = Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,2);

		proland::AtmoProcessor* self=Luna< ork::Object >::checkSubType< proland::AtmoProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::AtmoProcessor::fbo(ork::ptr< ork::FrameBuffer >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->fbo = value;

		return 0;
	}

	// void proland::AtmoProcessor::step(int value)
	static int _bind_setStep(lua_State *L) {
		if (!_lg_typecheck_setStep(L)) {
			luaL_error(L, "luna typecheck failed in void proland::AtmoProcessor::step(int value) function, expected prototype:\nvoid proland::AtmoProcessor::step(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		proland::AtmoProcessor* self=Luna< ork::Object >::checkSubType< proland::AtmoProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::AtmoProcessor::step(int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->step = value;

		return 0;
	}

	// void proland::AtmoProcessor::order(int value)
	static int _bind_setOrder(lua_State *L) {
		if (!_lg_typecheck_setOrder(L)) {
			luaL_error(L, "luna typecheck failed in void proland::AtmoProcessor::order(int value) function, expected prototype:\nvoid proland::AtmoProcessor::order(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		proland::AtmoProcessor* self=Luna< ork::Object >::checkSubType< proland::AtmoProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::AtmoProcessor::order(int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->order = value;

		return 0;
	}

	// const char * proland::AtmoProcessor::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * proland::AtmoProcessor::base_toString() function, expected prototype:\nconst char * proland::AtmoProcessor::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::AtmoProcessor* self=Luna< ork::Object >::checkSubType< proland::AtmoProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * proland::AtmoProcessor::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->AtmoProcessor::toString();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

proland::AtmoProcessor* LunaTraits< proland::AtmoProcessor >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_AtmoProcessor::_bind_ctor(L);
}

void LunaTraits< proland::AtmoProcessor >::_bind_dtor(proland::AtmoProcessor* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< proland::AtmoProcessor >::className[] = "AtmoProcessor";
const char LunaTraits< proland::AtmoProcessor >::fullName[] = "proland::AtmoProcessor";
const char LunaTraits< proland::AtmoProcessor >::moduleName[] = "proland";
const char* LunaTraits< proland::AtmoProcessor >::parents[] = {"ork.Object", 0};
const int LunaTraits< proland::AtmoProcessor >::hash = 33871504;
const int LunaTraits< proland::AtmoProcessor >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< proland::AtmoProcessor >::methods[] = {
	{"preprocess", &luna_wrapper_proland_AtmoProcessor::_bind_preprocess},
	{"getParams", &luna_wrapper_proland_AtmoProcessor::_bind_getParams},
	{"getOutput", &luna_wrapper_proland_AtmoProcessor::_bind_getOutput},
	{"getTransmittanceT", &luna_wrapper_proland_AtmoProcessor::_bind_getTransmittanceT},
	{"getIrradianceT", &luna_wrapper_proland_AtmoProcessor::_bind_getIrradianceT},
	{"getInscatterT", &luna_wrapper_proland_AtmoProcessor::_bind_getInscatterT},
	{"getDeltaET", &luna_wrapper_proland_AtmoProcessor::_bind_getDeltaET},
	{"getDeltaSRT", &luna_wrapper_proland_AtmoProcessor::_bind_getDeltaSRT},
	{"getDeltaSMT", &luna_wrapper_proland_AtmoProcessor::_bind_getDeltaSMT},
	{"getDeltaJT", &luna_wrapper_proland_AtmoProcessor::_bind_getDeltaJT},
	{"getCopyInscatter1", &luna_wrapper_proland_AtmoProcessor::_bind_getCopyInscatter1},
	{"getCopyInscatterN", &luna_wrapper_proland_AtmoProcessor::_bind_getCopyInscatterN},
	{"getCopyIrradiance", &luna_wrapper_proland_AtmoProcessor::_bind_getCopyIrradiance},
	{"getInscatter1", &luna_wrapper_proland_AtmoProcessor::_bind_getInscatter1},
	{"getInscatterN", &luna_wrapper_proland_AtmoProcessor::_bind_getInscatterN},
	{"getInscatterS", &luna_wrapper_proland_AtmoProcessor::_bind_getInscatterS},
	{"getIrradiance1", &luna_wrapper_proland_AtmoProcessor::_bind_getIrradiance1},
	{"getIrradianceN", &luna_wrapper_proland_AtmoProcessor::_bind_getIrradianceN},
	{"getTransmittance", &luna_wrapper_proland_AtmoProcessor::_bind_getTransmittance},
	{"getFbo", &luna_wrapper_proland_AtmoProcessor::_bind_getFbo},
	{"getStep", &luna_wrapper_proland_AtmoProcessor::_bind_getStep},
	{"getOrder", &luna_wrapper_proland_AtmoProcessor::_bind_getOrder},
	{"setParams", &luna_wrapper_proland_AtmoProcessor::_bind_setParams},
	{"setTransmittanceT", &luna_wrapper_proland_AtmoProcessor::_bind_setTransmittanceT},
	{"setIrradianceT", &luna_wrapper_proland_AtmoProcessor::_bind_setIrradianceT},
	{"setInscatterT", &luna_wrapper_proland_AtmoProcessor::_bind_setInscatterT},
	{"setDeltaET", &luna_wrapper_proland_AtmoProcessor::_bind_setDeltaET},
	{"setDeltaSRT", &luna_wrapper_proland_AtmoProcessor::_bind_setDeltaSRT},
	{"setDeltaSMT", &luna_wrapper_proland_AtmoProcessor::_bind_setDeltaSMT},
	{"setDeltaJT", &luna_wrapper_proland_AtmoProcessor::_bind_setDeltaJT},
	{"setCopyInscatter1", &luna_wrapper_proland_AtmoProcessor::_bind_setCopyInscatter1},
	{"setCopyInscatterN", &luna_wrapper_proland_AtmoProcessor::_bind_setCopyInscatterN},
	{"setCopyIrradiance", &luna_wrapper_proland_AtmoProcessor::_bind_setCopyIrradiance},
	{"setInscatter1", &luna_wrapper_proland_AtmoProcessor::_bind_setInscatter1},
	{"setInscatterN", &luna_wrapper_proland_AtmoProcessor::_bind_setInscatterN},
	{"setInscatterS", &luna_wrapper_proland_AtmoProcessor::_bind_setInscatterS},
	{"setIrradiance1", &luna_wrapper_proland_AtmoProcessor::_bind_setIrradiance1},
	{"setIrradianceN", &luna_wrapper_proland_AtmoProcessor::_bind_setIrradianceN},
	{"setTransmittance", &luna_wrapper_proland_AtmoProcessor::_bind_setTransmittance},
	{"setFbo", &luna_wrapper_proland_AtmoProcessor::_bind_setFbo},
	{"setStep", &luna_wrapper_proland_AtmoProcessor::_bind_setStep},
	{"setOrder", &luna_wrapper_proland_AtmoProcessor::_bind_setOrder},
	{"base_toString", &luna_wrapper_proland_AtmoProcessor::_bind_base_toString},
	{"fromVoid", &luna_wrapper_proland_AtmoProcessor::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_AtmoProcessor::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_AtmoProcessor::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::AtmoProcessor >::converters[] = {
	{"ork::Object", &luna_wrapper_proland_AtmoProcessor::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::AtmoProcessor >::enumValues[] = {
	{0,0}
};



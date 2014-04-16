#ifndef _WRAPPERS_WRAPPER_PROLAND_CURVEDATAFACTORY_H_
#define _WRAPPERS_WRAPPER_PROLAND_CURVEDATAFACTORY_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <W:/Cloud/Projects/sgt/sources/proland/sources/graph/proland/graph/producer/CurveDataFactory.h>

class wrapper_proland_CurveDataFactory : public proland::CurveDataFactory, public luna_wrapper_base {

public:
		

	~wrapper_proland_CurveDataFactory() {
		logDEBUG3("Calling delete function for wrapper proland_CurveDataFactory");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::CurveDataFactory*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_CurveDataFactory(lua_State* L, lua_Table* dum) 
		: proland::CurveDataFactory(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::CurveDataFactory*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_proland_CurveDataFactory(lua_State* L, lua_Table* dum, ork::ptr< proland::TileProducer > producer) 
		: proland::CurveDataFactory(producer), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::CurveDataFactory*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void proland::CurveDataFactory::swap(proland::CurveDataFactory * factory)
	void swap(proland::CurveDataFactory * factory) {
		if(_obj.pushFunction("swap")) {
			_obj.pushArg((proland::CurveDataFactory*)this);
			_obj.pushArg(factory);
			return (_obj.callFunction<void>());
		}

		return CurveDataFactory::swap(factory);
	};

public:
	// Public virtual methods:
	// proland::CurveData * proland::CurveDataFactory::newCurveData(proland::CurveId id, proland::CurvePtr flattenCurve)
	proland::CurveData * newCurveData(proland::CurveId id, proland::CurvePtr flattenCurve) {
		if(_obj.pushFunction("newCurveData")) {
			_obj.pushArg((proland::CurveDataFactory*)this);
			_obj.pushArg(&id);
			_obj.pushArg(&flattenCurve);
			return (_obj.callFunction<proland::CurveData*>());
		}

		return CurveDataFactory::newCurveData(id, flattenCurve);
	};

	// void proland::CurveDataFactory::graphChanged()
	void graphChanged() {
		if(_obj.pushFunction("graphChanged")) {
			_obj.pushArg((proland::CurveDataFactory*)this);
			return (_obj.callFunction<void>());
		}

		return CurveDataFactory::graphChanged();
	};


	// Protected non-virtual methods:
	// void proland::CurveDataFactory::init(ork::ptr< proland::TileProducer > producer)
	void public_init(ork::ptr< proland::TileProducer > producer) {
		return proland::CurveDataFactory::init(producer);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_init(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::TileProducer >(L,2) ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void proland::CurveDataFactory::public_init(ork::ptr< proland::TileProducer > producer)
	static int _bind_public_init(lua_State *L) {
		if (!_lg_typecheck_public_init(L)) {
			luaL_error(L, "luna typecheck failed in void proland::CurveDataFactory::public_init(ork::ptr< proland::TileProducer > producer) function, expected prototype:\nvoid proland::CurveDataFactory::public_init(ork::ptr< proland::TileProducer > producer)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< proland::TileProducer > producer = Luna< ork::Object >::checkSubType< proland::TileProducer >(L,2);

		wrapper_proland_CurveDataFactory* self=Luna< proland::GraphListener >::checkSubType< wrapper_proland_CurveDataFactory >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::CurveDataFactory::public_init(ork::ptr< proland::TileProducer >). Got : '%s'\n%s",typeid(Luna< proland::GraphListener >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_init(producer);

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"init",_bind_public_init},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif


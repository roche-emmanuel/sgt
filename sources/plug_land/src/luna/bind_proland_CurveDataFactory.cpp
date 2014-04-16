#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_CurveDataFactory.h>

class luna_wrapper_proland_CurveDataFactory {
public:
	typedef Luna< proland::CurveDataFactory > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		proland::GraphListener* self=(Luna< proland::GraphListener >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<proland::GraphListener,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
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

		proland::CurveDataFactory* self= (proland::CurveDataFactory*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::CurveDataFactory >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,23314933) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< proland::GraphListener >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_GraphListener(lua_State *L) {
		// all checked are already performed before reaching this point.
		//proland::CurveDataFactory* ptr= dynamic_cast< proland::CurveDataFactory* >(Luna< proland::GraphListener >::check(L,1));
		proland::CurveDataFactory* ptr= luna_caster< proland::GraphListener, proland::CurveDataFactory >::cast(Luna< proland::GraphListener >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::CurveDataFactory >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::TileProducer >(L,1) ) return false;
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
		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::TileProducer >(L,2) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_newCurveData(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,58015782) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,17549196) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_graphChanged(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCurveData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,17549196) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_putCurveData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,58015782) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_findCurveData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,17549196) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_releaseCurveData(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addUsedCurveDatas(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,92772708) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_clear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_hasCurveData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,58015782) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_newCurveData(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,58015782) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,17549196) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_graphChanged(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::CurveDataFactory::CurveDataFactory()
	static proland::CurveDataFactory* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurveDataFactory::CurveDataFactory() function, expected prototype:\nproland::CurveDataFactory::CurveDataFactory()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new proland::CurveDataFactory();
	}

	// proland::CurveDataFactory::CurveDataFactory(ork::ptr< proland::TileProducer > producer)
	static proland::CurveDataFactory* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurveDataFactory::CurveDataFactory(ork::ptr< proland::TileProducer > producer) function, expected prototype:\nproland::CurveDataFactory::CurveDataFactory(ork::ptr< proland::TileProducer > producer)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< proland::TileProducer > producer = Luna< ork::Object >::checkSubType< proland::TileProducer >(L,1);

		return new proland::CurveDataFactory(producer);
	}

	// proland::CurveDataFactory::CurveDataFactory(lua_Table * data)
	static proland::CurveDataFactory* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurveDataFactory::CurveDataFactory(lua_Table * data) function, expected prototype:\nproland::CurveDataFactory::CurveDataFactory(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_proland_CurveDataFactory(L,NULL);
	}

	// proland::CurveDataFactory::CurveDataFactory(lua_Table * data, ork::ptr< proland::TileProducer > producer)
	static proland::CurveDataFactory* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurveDataFactory::CurveDataFactory(lua_Table * data, ork::ptr< proland::TileProducer > producer) function, expected prototype:\nproland::CurveDataFactory::CurveDataFactory(lua_Table * data, ork::ptr< proland::TileProducer > producer)\nClass arguments details:\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< proland::TileProducer > producer = Luna< ork::Object >::checkSubType< proland::TileProducer >(L,2);

		return new wrapper_proland_CurveDataFactory(L,NULL, producer);
	}

	// Overload binder for proland::CurveDataFactory::CurveDataFactory
	static proland::CurveDataFactory* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function CurveDataFactory, cannot match any of the overloads for function CurveDataFactory:\n  CurveDataFactory()\n  CurveDataFactory(ork::ptr< proland::TileProducer >)\n  CurveDataFactory(lua_Table *)\n  CurveDataFactory(lua_Table *, ork::ptr< proland::TileProducer >)\n");
		return NULL;
	}


	// Function binds:
	// proland::CurveData * proland::CurveDataFactory::newCurveData(proland::CurveId id, proland::CurvePtr flattenCurve)
	static int _bind_newCurveData(lua_State *L) {
		if (!_lg_typecheck_newCurveData(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurveData * proland::CurveDataFactory::newCurveData(proland::CurveId id, proland::CurvePtr flattenCurve) function, expected prototype:\nproland::CurveData * proland::CurveDataFactory::newCurveData(proland::CurveId id, proland::CurvePtr flattenCurve)\nClass arguments details:\narg 1 ID = 58015782\narg 2 ID = 98496290\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::CurveId* id_ptr=(Luna< proland::CurveId >::check(L,2));
		if( !id_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg id in proland::CurveDataFactory::newCurveData function");
		}
		proland::CurveId id=*id_ptr;
		proland::CurvePtr* flattenCurve_ptr=(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,3));
		if( !flattenCurve_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg flattenCurve in proland::CurveDataFactory::newCurveData function");
		}
		proland::CurvePtr flattenCurve=*flattenCurve_ptr;

		proland::CurveDataFactory* self=Luna< proland::GraphListener >::checkSubType< proland::CurveDataFactory >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::CurveData * proland::CurveDataFactory::newCurveData(proland::CurveId, proland::CurvePtr). Got : '%s'\n%s",typeid(Luna< proland::GraphListener >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::CurveData * lret = self->newCurveData(id, flattenCurve);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::CurveData >::push(L,lret,false);

		return 1;
	}

	// void proland::CurveDataFactory::graphChanged()
	static int _bind_graphChanged(lua_State *L) {
		if (!_lg_typecheck_graphChanged(L)) {
			luaL_error(L, "luna typecheck failed in void proland::CurveDataFactory::graphChanged() function, expected prototype:\nvoid proland::CurveDataFactory::graphChanged()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::CurveDataFactory* self=Luna< proland::GraphListener >::checkSubType< proland::CurveDataFactory >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::CurveDataFactory::graphChanged(). Got : '%s'\n%s",typeid(Luna< proland::GraphListener >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->graphChanged();

		return 0;
	}

	// proland::CurveData * proland::CurveDataFactory::getCurveData(proland::CurvePtr c)
	static int _bind_getCurveData(lua_State *L) {
		if (!_lg_typecheck_getCurveData(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurveData * proland::CurveDataFactory::getCurveData(proland::CurvePtr c) function, expected prototype:\nproland::CurveData * proland::CurveDataFactory::getCurveData(proland::CurvePtr c)\nClass arguments details:\narg 1 ID = 98496290\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::CurvePtr* c_ptr=(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,2));
		if( !c_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg c in proland::CurveDataFactory::getCurveData function");
		}
		proland::CurvePtr c=*c_ptr;

		proland::CurveDataFactory* self=Luna< proland::GraphListener >::checkSubType< proland::CurveDataFactory >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::CurveData * proland::CurveDataFactory::getCurveData(proland::CurvePtr). Got : '%s'\n%s",typeid(Luna< proland::GraphListener >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::CurveData * lret = self->getCurveData(c);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::CurveData >::push(L,lret,false);

		return 1;
	}

	// void proland::CurveDataFactory::putCurveData(proland::CurveId id)
	static int _bind_putCurveData(lua_State *L) {
		if (!_lg_typecheck_putCurveData(L)) {
			luaL_error(L, "luna typecheck failed in void proland::CurveDataFactory::putCurveData(proland::CurveId id) function, expected prototype:\nvoid proland::CurveDataFactory::putCurveData(proland::CurveId id)\nClass arguments details:\narg 1 ID = 58015782\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::CurveId* id_ptr=(Luna< proland::CurveId >::check(L,2));
		if( !id_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg id in proland::CurveDataFactory::putCurveData function");
		}
		proland::CurveId id=*id_ptr;

		proland::CurveDataFactory* self=Luna< proland::GraphListener >::checkSubType< proland::CurveDataFactory >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::CurveDataFactory::putCurveData(proland::CurveId). Got : '%s'\n%s",typeid(Luna< proland::GraphListener >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->putCurveData(id);

		return 0;
	}

	// proland::CurveData * proland::CurveDataFactory::findCurveData(proland::CurvePtr c)
	static int _bind_findCurveData(lua_State *L) {
		if (!_lg_typecheck_findCurveData(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurveData * proland::CurveDataFactory::findCurveData(proland::CurvePtr c) function, expected prototype:\nproland::CurveData * proland::CurveDataFactory::findCurveData(proland::CurvePtr c)\nClass arguments details:\narg 1 ID = 98496290\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::CurvePtr* c_ptr=(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,2));
		if( !c_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg c in proland::CurveDataFactory::findCurveData function");
		}
		proland::CurvePtr c=*c_ptr;

		proland::CurveDataFactory* self=Luna< proland::GraphListener >::checkSubType< proland::CurveDataFactory >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::CurveData * proland::CurveDataFactory::findCurveData(proland::CurvePtr). Got : '%s'\n%s",typeid(Luna< proland::GraphListener >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::CurveData * lret = self->findCurveData(c);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::CurveData >::push(L,lret,false);

		return 1;
	}

	// void proland::CurveDataFactory::releaseCurveData(int level, int tx, int ty)
	static int _bind_releaseCurveData(lua_State *L) {
		if (!_lg_typecheck_releaseCurveData(L)) {
			luaL_error(L, "luna typecheck failed in void proland::CurveDataFactory::releaseCurveData(int level, int tx, int ty) function, expected prototype:\nvoid proland::CurveDataFactory::releaseCurveData(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		proland::CurveDataFactory* self=Luna< proland::GraphListener >::checkSubType< proland::CurveDataFactory >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::CurveDataFactory::releaseCurveData(int, int, int). Got : '%s'\n%s",typeid(Luna< proland::GraphListener >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->releaseCurveData(level, tx, ty);

		return 0;
	}

	// void proland::CurveDataFactory::addUsedCurveDatas(int level, int tx, int ty, set< proland::CurveId > curveDatas)
	static int _bind_addUsedCurveDatas(lua_State *L) {
		if (!_lg_typecheck_addUsedCurveDatas(L)) {
			luaL_error(L, "luna typecheck failed in void proland::CurveDataFactory::addUsedCurveDatas(int level, int tx, int ty, set< proland::CurveId > curveDatas) function, expected prototype:\nvoid proland::CurveDataFactory::addUsedCurveDatas(int level, int tx, int ty, set< proland::CurveId > curveDatas)\nClass arguments details:\narg 4 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);
		set< proland::CurveId >* curveDatas_ptr=(Luna< set< proland::CurveId > >::check(L,5));
		if( !curveDatas_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg curveDatas in proland::CurveDataFactory::addUsedCurveDatas function");
		}
		set< proland::CurveId > curveDatas=*curveDatas_ptr;

		proland::CurveDataFactory* self=Luna< proland::GraphListener >::checkSubType< proland::CurveDataFactory >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::CurveDataFactory::addUsedCurveDatas(int, int, int, set< proland::CurveId >). Got : '%s'\n%s",typeid(Luna< proland::GraphListener >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addUsedCurveDatas(level, tx, ty, curveDatas);

		return 0;
	}

	// void proland::CurveDataFactory::clear()
	static int _bind_clear(lua_State *L) {
		if (!_lg_typecheck_clear(L)) {
			luaL_error(L, "luna typecheck failed in void proland::CurveDataFactory::clear() function, expected prototype:\nvoid proland::CurveDataFactory::clear()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::CurveDataFactory* self=Luna< proland::GraphListener >::checkSubType< proland::CurveDataFactory >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::CurveDataFactory::clear(). Got : '%s'\n%s",typeid(Luna< proland::GraphListener >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->clear();

		return 0;
	}

	// bool proland::CurveDataFactory::hasCurveData(proland::CurveId id)
	static int _bind_hasCurveData(lua_State *L) {
		if (!_lg_typecheck_hasCurveData(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::CurveDataFactory::hasCurveData(proland::CurveId id) function, expected prototype:\nbool proland::CurveDataFactory::hasCurveData(proland::CurveId id)\nClass arguments details:\narg 1 ID = 58015782\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::CurveId* id_ptr=(Luna< proland::CurveId >::check(L,2));
		if( !id_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg id in proland::CurveDataFactory::hasCurveData function");
		}
		proland::CurveId id=*id_ptr;

		proland::CurveDataFactory* self=Luna< proland::GraphListener >::checkSubType< proland::CurveDataFactory >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::CurveDataFactory::hasCurveData(proland::CurveId). Got : '%s'\n%s",typeid(Luna< proland::GraphListener >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->hasCurveData(id);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// proland::CurveData * proland::CurveDataFactory::base_newCurveData(proland::CurveId id, proland::CurvePtr flattenCurve)
	static int _bind_base_newCurveData(lua_State *L) {
		if (!_lg_typecheck_base_newCurveData(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurveData * proland::CurveDataFactory::base_newCurveData(proland::CurveId id, proland::CurvePtr flattenCurve) function, expected prototype:\nproland::CurveData * proland::CurveDataFactory::base_newCurveData(proland::CurveId id, proland::CurvePtr flattenCurve)\nClass arguments details:\narg 1 ID = 58015782\narg 2 ID = 98496290\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::CurveId* id_ptr=(Luna< proland::CurveId >::check(L,2));
		if( !id_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg id in proland::CurveDataFactory::base_newCurveData function");
		}
		proland::CurveId id=*id_ptr;
		proland::CurvePtr* flattenCurve_ptr=(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,3));
		if( !flattenCurve_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg flattenCurve in proland::CurveDataFactory::base_newCurveData function");
		}
		proland::CurvePtr flattenCurve=*flattenCurve_ptr;

		proland::CurveDataFactory* self=Luna< proland::GraphListener >::checkSubType< proland::CurveDataFactory >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::CurveData * proland::CurveDataFactory::base_newCurveData(proland::CurveId, proland::CurvePtr). Got : '%s'\n%s",typeid(Luna< proland::GraphListener >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::CurveData * lret = self->CurveDataFactory::newCurveData(id, flattenCurve);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::CurveData >::push(L,lret,false);

		return 1;
	}

	// void proland::CurveDataFactory::base_graphChanged()
	static int _bind_base_graphChanged(lua_State *L) {
		if (!_lg_typecheck_base_graphChanged(L)) {
			luaL_error(L, "luna typecheck failed in void proland::CurveDataFactory::base_graphChanged() function, expected prototype:\nvoid proland::CurveDataFactory::base_graphChanged()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::CurveDataFactory* self=Luna< proland::GraphListener >::checkSubType< proland::CurveDataFactory >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::CurveDataFactory::base_graphChanged(). Got : '%s'\n%s",typeid(Luna< proland::GraphListener >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->CurveDataFactory::graphChanged();

		return 0;
	}


	// Operator binds:

};

proland::CurveDataFactory* LunaTraits< proland::CurveDataFactory >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_CurveDataFactory::_bind_ctor(L);
}

void LunaTraits< proland::CurveDataFactory >::_bind_dtor(proland::CurveDataFactory* obj) {
	delete obj;
}

const char LunaTraits< proland::CurveDataFactory >::className[] = "CurveDataFactory";
const char LunaTraits< proland::CurveDataFactory >::fullName[] = "proland::CurveDataFactory";
const char LunaTraits< proland::CurveDataFactory >::moduleName[] = "proland";
const char* LunaTraits< proland::CurveDataFactory >::parents[] = {"proland.GraphListener", 0};
const int LunaTraits< proland::CurveDataFactory >::hash = 21016304;
const int LunaTraits< proland::CurveDataFactory >::uniqueIDs[] = {23314933,0};

luna_RegType LunaTraits< proland::CurveDataFactory >::methods[] = {
	{"newCurveData", &luna_wrapper_proland_CurveDataFactory::_bind_newCurveData},
	{"graphChanged", &luna_wrapper_proland_CurveDataFactory::_bind_graphChanged},
	{"getCurveData", &luna_wrapper_proland_CurveDataFactory::_bind_getCurveData},
	{"putCurveData", &luna_wrapper_proland_CurveDataFactory::_bind_putCurveData},
	{"findCurveData", &luna_wrapper_proland_CurveDataFactory::_bind_findCurveData},
	{"releaseCurveData", &luna_wrapper_proland_CurveDataFactory::_bind_releaseCurveData},
	{"addUsedCurveDatas", &luna_wrapper_proland_CurveDataFactory::_bind_addUsedCurveDatas},
	{"clear", &luna_wrapper_proland_CurveDataFactory::_bind_clear},
	{"hasCurveData", &luna_wrapper_proland_CurveDataFactory::_bind_hasCurveData},
	{"base_newCurveData", &luna_wrapper_proland_CurveDataFactory::_bind_base_newCurveData},
	{"base_graphChanged", &luna_wrapper_proland_CurveDataFactory::_bind_base_graphChanged},
	{"fromVoid", &luna_wrapper_proland_CurveDataFactory::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_CurveDataFactory::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_CurveDataFactory::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::CurveDataFactory >::converters[] = {
	{"proland::GraphListener", &luna_wrapper_proland_CurveDataFactory::_cast_from_GraphListener},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::CurveDataFactory >::enumValues[] = {
	{0,0}
};



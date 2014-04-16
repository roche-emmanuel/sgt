#include <plug_common.h>

class luna_wrapper_proland_EditGraphOrthoLayer_SelectionData {
public:
	typedef Luna< proland::EditGraphOrthoLayer::SelectionData > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,2199838) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(proland::EditGraphOrthoLayer::SelectionData*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		proland::EditGraphOrthoLayer::SelectionData* rhs =(Luna< proland::EditGraphOrthoLayer::SelectionData >::check(L,2));
		proland::EditGraphOrthoLayer::SelectionData* self=(Luna< proland::EditGraphOrthoLayer::SelectionData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		lua_pushboolean(L,self==rhs?1:0);

		return 1;
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

		proland::EditGraphOrthoLayer::SelectionData* self= (proland::EditGraphOrthoLayer::SelectionData*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::EditGraphOrthoLayer::SelectionData >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,2199838) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< proland::EditGraphOrthoLayer::SelectionData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		proland::EditGraphOrthoLayer::SelectionData* self=(Luna< proland::EditGraphOrthoLayer::SelectionData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("proland::EditGraphOrthoLayer::SelectionData");
		
		return luna_dynamicCast(L,converters,"proland::EditGraphOrthoLayer::SelectionData",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,1381405)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,1)) ) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_print(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSelectedCurve(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSelectedPoint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSelectedSegment(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getC(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getEditor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPoints(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMousePosition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setSelectedCurve(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSelectedPoint(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSelectedSegment(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setC(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,1381405)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setEditor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,1381405)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPoints(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,55059854) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMousePosition(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304269) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::EditGraphOrthoLayer::SelectionData::SelectionData()
	static proland::EditGraphOrthoLayer::SelectionData* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::EditGraphOrthoLayer::SelectionData::SelectionData() function, expected prototype:\nproland::EditGraphOrthoLayer::SelectionData::SelectionData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new proland::EditGraphOrthoLayer::SelectionData();
	}

	// proland::EditGraphOrthoLayer::SelectionData::SelectionData(proland::EditGraphOrthoLayer * e)
	static proland::EditGraphOrthoLayer::SelectionData* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::EditGraphOrthoLayer::SelectionData::SelectionData(proland::EditGraphOrthoLayer * e) function, expected prototype:\nproland::EditGraphOrthoLayer::SelectionData::SelectionData(proland::EditGraphOrthoLayer * e)\nClass arguments details:\narg 1 ID = 1381405\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::EditGraphOrthoLayer* e=(Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,1));

		return new proland::EditGraphOrthoLayer::SelectionData(e);
	}

	// Overload binder for proland::EditGraphOrthoLayer::SelectionData::SelectionData
	static proland::EditGraphOrthoLayer::SelectionData* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function SelectionData, cannot match any of the overloads for function SelectionData:\n  SelectionData()\n  SelectionData(proland::EditGraphOrthoLayer *)\n");
		return NULL;
	}


	// Function binds:
	// void proland::EditGraphOrthoLayer::SelectionData::print()
	static int _bind_print(lua_State *L) {
		if (!_lg_typecheck_print(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditGraphOrthoLayer::SelectionData::print() function, expected prototype:\nvoid proland::EditGraphOrthoLayer::SelectionData::print()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditGraphOrthoLayer::SelectionData* self=(Luna< proland::EditGraphOrthoLayer::SelectionData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditGraphOrthoLayer::SelectionData::print(). Got : '%s'\n%s",typeid(Luna< proland::EditGraphOrthoLayer::SelectionData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->print();

		return 0;
	}

	// std::string proland::EditGraphOrthoLayer::SelectionData::selectedCurve()
	static int _bind_getSelectedCurve(lua_State *L) {
		if (!_lg_typecheck_getSelectedCurve(L)) {
			luaL_error(L, "luna typecheck failed in std::string proland::EditGraphOrthoLayer::SelectionData::selectedCurve() function, expected prototype:\nstd::string proland::EditGraphOrthoLayer::SelectionData::selectedCurve()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditGraphOrthoLayer::SelectionData* self=(Luna< proland::EditGraphOrthoLayer::SelectionData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call std::string proland::EditGraphOrthoLayer::SelectionData::selectedCurve(). Got : '%s'\n%s",typeid(Luna< proland::EditGraphOrthoLayer::SelectionData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		std::string lret = self->selectedCurve;
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// int proland::EditGraphOrthoLayer::SelectionData::selectedPoint()
	static int _bind_getSelectedPoint(lua_State *L) {
		if (!_lg_typecheck_getSelectedPoint(L)) {
			luaL_error(L, "luna typecheck failed in int proland::EditGraphOrthoLayer::SelectionData::selectedPoint() function, expected prototype:\nint proland::EditGraphOrthoLayer::SelectionData::selectedPoint()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditGraphOrthoLayer::SelectionData* self=(Luna< proland::EditGraphOrthoLayer::SelectionData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::EditGraphOrthoLayer::SelectionData::selectedPoint(). Got : '%s'\n%s",typeid(Luna< proland::EditGraphOrthoLayer::SelectionData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->selectedPoint;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int proland::EditGraphOrthoLayer::SelectionData::selectedSegment()
	static int _bind_getSelectedSegment(lua_State *L) {
		if (!_lg_typecheck_getSelectedSegment(L)) {
			luaL_error(L, "luna typecheck failed in int proland::EditGraphOrthoLayer::SelectionData::selectedSegment() function, expected prototype:\nint proland::EditGraphOrthoLayer::SelectionData::selectedSegment()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditGraphOrthoLayer::SelectionData* self=(Luna< proland::EditGraphOrthoLayer::SelectionData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::EditGraphOrthoLayer::SelectionData::selectedSegment(). Got : '%s'\n%s",typeid(Luna< proland::EditGraphOrthoLayer::SelectionData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->selectedSegment;
		lua_pushnumber(L,lret);

		return 1;
	}

	// proland::Curve * proland::EditGraphOrthoLayer::SelectionData::c()
	static int _bind_getC(lua_State *L) {
		if (!_lg_typecheck_getC(L)) {
			luaL_error(L, "luna typecheck failed in proland::Curve * proland::EditGraphOrthoLayer::SelectionData::c() function, expected prototype:\nproland::Curve * proland::EditGraphOrthoLayer::SelectionData::c()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditGraphOrthoLayer::SelectionData* self=(Luna< proland::EditGraphOrthoLayer::SelectionData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::Curve * proland::EditGraphOrthoLayer::SelectionData::c(). Got : '%s'\n%s",typeid(Luna< proland::EditGraphOrthoLayer::SelectionData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::Curve * lret = self->c;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::Curve >::push(L,lret,false);

		return 1;
	}

	// proland::EditGraphOrthoLayer * proland::EditGraphOrthoLayer::SelectionData::editor()
	static int _bind_getEditor(lua_State *L) {
		if (!_lg_typecheck_getEditor(L)) {
			luaL_error(L, "luna typecheck failed in proland::EditGraphOrthoLayer * proland::EditGraphOrthoLayer::SelectionData::editor() function, expected prototype:\nproland::EditGraphOrthoLayer * proland::EditGraphOrthoLayer::SelectionData::editor()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditGraphOrthoLayer::SelectionData* self=(Luna< proland::EditGraphOrthoLayer::SelectionData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::EditGraphOrthoLayer * proland::EditGraphOrthoLayer::SelectionData::editor(). Got : '%s'\n%s",typeid(Luna< proland::EditGraphOrthoLayer::SelectionData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::EditGraphOrthoLayer * lret = self->editor;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::EditGraphOrthoLayer >::push(L,lret,false);

		return 1;
	}

	// vector< proland::EditGraphOrthoLayer::VertexData > proland::EditGraphOrthoLayer::SelectionData::points()
	static int _bind_getPoints(lua_State *L) {
		if (!_lg_typecheck_getPoints(L)) {
			luaL_error(L, "luna typecheck failed in vector< proland::EditGraphOrthoLayer::VertexData > proland::EditGraphOrthoLayer::SelectionData::points() function, expected prototype:\nvector< proland::EditGraphOrthoLayer::VertexData > proland::EditGraphOrthoLayer::SelectionData::points()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditGraphOrthoLayer::SelectionData* self=(Luna< proland::EditGraphOrthoLayer::SelectionData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call vector< proland::EditGraphOrthoLayer::VertexData > proland::EditGraphOrthoLayer::SelectionData::points(). Got : '%s'\n%s",typeid(Luna< proland::EditGraphOrthoLayer::SelectionData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const vector< proland::EditGraphOrthoLayer::VertexData >* lret = &self->points;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< vector< proland::EditGraphOrthoLayer::VertexData > >::push(L,lret,false);

		return 1;
	}

	// ork::vec3d proland::EditGraphOrthoLayer::SelectionData::mousePosition()
	static int _bind_getMousePosition(lua_State *L) {
		if (!_lg_typecheck_getMousePosition(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec3d proland::EditGraphOrthoLayer::SelectionData::mousePosition() function, expected prototype:\nork::vec3d proland::EditGraphOrthoLayer::SelectionData::mousePosition()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditGraphOrthoLayer::SelectionData* self=(Luna< proland::EditGraphOrthoLayer::SelectionData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec3d proland::EditGraphOrthoLayer::SelectionData::mousePosition(). Got : '%s'\n%s",typeid(Luna< proland::EditGraphOrthoLayer::SelectionData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const ork::vec3d* lret = &self->mousePosition;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec3d >::push(L,lret,false);

		return 1;
	}

	// void proland::EditGraphOrthoLayer::SelectionData::selectedCurve(std::string value)
	static int _bind_setSelectedCurve(lua_State *L) {
		if (!_lg_typecheck_setSelectedCurve(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditGraphOrthoLayer::SelectionData::selectedCurve(std::string value) function, expected prototype:\nvoid proland::EditGraphOrthoLayer::SelectionData::selectedCurve(std::string value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string value(lua_tostring(L,2),lua_objlen(L,2));

		proland::EditGraphOrthoLayer::SelectionData* self=(Luna< proland::EditGraphOrthoLayer::SelectionData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditGraphOrthoLayer::SelectionData::selectedCurve(std::string). Got : '%s'\n%s",typeid(Luna< proland::EditGraphOrthoLayer::SelectionData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->selectedCurve = value;

		return 0;
	}

	// void proland::EditGraphOrthoLayer::SelectionData::selectedPoint(int value)
	static int _bind_setSelectedPoint(lua_State *L) {
		if (!_lg_typecheck_setSelectedPoint(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditGraphOrthoLayer::SelectionData::selectedPoint(int value) function, expected prototype:\nvoid proland::EditGraphOrthoLayer::SelectionData::selectedPoint(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		proland::EditGraphOrthoLayer::SelectionData* self=(Luna< proland::EditGraphOrthoLayer::SelectionData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditGraphOrthoLayer::SelectionData::selectedPoint(int). Got : '%s'\n%s",typeid(Luna< proland::EditGraphOrthoLayer::SelectionData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->selectedPoint = value;

		return 0;
	}

	// void proland::EditGraphOrthoLayer::SelectionData::selectedSegment(int value)
	static int _bind_setSelectedSegment(lua_State *L) {
		if (!_lg_typecheck_setSelectedSegment(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditGraphOrthoLayer::SelectionData::selectedSegment(int value) function, expected prototype:\nvoid proland::EditGraphOrthoLayer::SelectionData::selectedSegment(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		proland::EditGraphOrthoLayer::SelectionData* self=(Luna< proland::EditGraphOrthoLayer::SelectionData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditGraphOrthoLayer::SelectionData::selectedSegment(int). Got : '%s'\n%s",typeid(Luna< proland::EditGraphOrthoLayer::SelectionData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->selectedSegment = value;

		return 0;
	}

	// void proland::EditGraphOrthoLayer::SelectionData::c(proland::Curve * value)
	static int _bind_setC(lua_State *L) {
		if (!_lg_typecheck_setC(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditGraphOrthoLayer::SelectionData::c(proland::Curve * value) function, expected prototype:\nvoid proland::EditGraphOrthoLayer::SelectionData::c(proland::Curve * value)\nClass arguments details:\narg 1 ID = 1381405\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::Curve* value=(Luna< ork::Object >::checkSubType< proland::Curve >(L,2));

		proland::EditGraphOrthoLayer::SelectionData* self=(Luna< proland::EditGraphOrthoLayer::SelectionData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditGraphOrthoLayer::SelectionData::c(proland::Curve *). Got : '%s'\n%s",typeid(Luna< proland::EditGraphOrthoLayer::SelectionData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->c = value;

		return 0;
	}

	// void proland::EditGraphOrthoLayer::SelectionData::editor(proland::EditGraphOrthoLayer * value)
	static int _bind_setEditor(lua_State *L) {
		if (!_lg_typecheck_setEditor(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditGraphOrthoLayer::SelectionData::editor(proland::EditGraphOrthoLayer * value) function, expected prototype:\nvoid proland::EditGraphOrthoLayer::SelectionData::editor(proland::EditGraphOrthoLayer * value)\nClass arguments details:\narg 1 ID = 1381405\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::EditGraphOrthoLayer* value=(Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,2));

		proland::EditGraphOrthoLayer::SelectionData* self=(Luna< proland::EditGraphOrthoLayer::SelectionData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditGraphOrthoLayer::SelectionData::editor(proland::EditGraphOrthoLayer *). Got : '%s'\n%s",typeid(Luna< proland::EditGraphOrthoLayer::SelectionData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->editor = value;

		return 0;
	}

	// void proland::EditGraphOrthoLayer::SelectionData::points(vector< proland::EditGraphOrthoLayer::VertexData > value)
	static int _bind_setPoints(lua_State *L) {
		if (!_lg_typecheck_setPoints(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditGraphOrthoLayer::SelectionData::points(vector< proland::EditGraphOrthoLayer::VertexData > value) function, expected prototype:\nvoid proland::EditGraphOrthoLayer::SelectionData::points(vector< proland::EditGraphOrthoLayer::VertexData > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		vector< proland::EditGraphOrthoLayer::VertexData >* value_ptr=(Luna< vector< proland::EditGraphOrthoLayer::VertexData > >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in proland::EditGraphOrthoLayer::SelectionData::points function");
		}
		vector< proland::EditGraphOrthoLayer::VertexData > value=*value_ptr;

		proland::EditGraphOrthoLayer::SelectionData* self=(Luna< proland::EditGraphOrthoLayer::SelectionData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditGraphOrthoLayer::SelectionData::points(vector< proland::EditGraphOrthoLayer::VertexData >). Got : '%s'\n%s",typeid(Luna< proland::EditGraphOrthoLayer::SelectionData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->points = value;

		return 0;
	}

	// void proland::EditGraphOrthoLayer::SelectionData::mousePosition(ork::vec3d value)
	static int _bind_setMousePosition(lua_State *L) {
		if (!_lg_typecheck_setMousePosition(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditGraphOrthoLayer::SelectionData::mousePosition(ork::vec3d value) function, expected prototype:\nvoid proland::EditGraphOrthoLayer::SelectionData::mousePosition(ork::vec3d value)\nClass arguments details:\narg 1 ID = 81304269\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::vec3d* value_ptr=(Luna< ork::vec3d >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in proland::EditGraphOrthoLayer::SelectionData::mousePosition function");
		}
		ork::vec3d value=*value_ptr;

		proland::EditGraphOrthoLayer::SelectionData* self=(Luna< proland::EditGraphOrthoLayer::SelectionData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditGraphOrthoLayer::SelectionData::mousePosition(ork::vec3d). Got : '%s'\n%s",typeid(Luna< proland::EditGraphOrthoLayer::SelectionData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->mousePosition = value;

		return 0;
	}


	// Operator binds:

};

proland::EditGraphOrthoLayer::SelectionData* LunaTraits< proland::EditGraphOrthoLayer::SelectionData >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_EditGraphOrthoLayer_SelectionData::_bind_ctor(L);
}

void LunaTraits< proland::EditGraphOrthoLayer::SelectionData >::_bind_dtor(proland::EditGraphOrthoLayer::SelectionData* obj) {
	delete obj;
}

const char LunaTraits< proland::EditGraphOrthoLayer::SelectionData >::className[] = "EditGraphOrthoLayer_SelectionData";
const char LunaTraits< proland::EditGraphOrthoLayer::SelectionData >::fullName[] = "proland::EditGraphOrthoLayer::SelectionData";
const char LunaTraits< proland::EditGraphOrthoLayer::SelectionData >::moduleName[] = "proland";
const char* LunaTraits< proland::EditGraphOrthoLayer::SelectionData >::parents[] = {0};
const int LunaTraits< proland::EditGraphOrthoLayer::SelectionData >::hash = 2199838;
const int LunaTraits< proland::EditGraphOrthoLayer::SelectionData >::uniqueIDs[] = {2199838,0};

luna_RegType LunaTraits< proland::EditGraphOrthoLayer::SelectionData >::methods[] = {
	{"print", &luna_wrapper_proland_EditGraphOrthoLayer_SelectionData::_bind_print},
	{"getSelectedCurve", &luna_wrapper_proland_EditGraphOrthoLayer_SelectionData::_bind_getSelectedCurve},
	{"getSelectedPoint", &luna_wrapper_proland_EditGraphOrthoLayer_SelectionData::_bind_getSelectedPoint},
	{"getSelectedSegment", &luna_wrapper_proland_EditGraphOrthoLayer_SelectionData::_bind_getSelectedSegment},
	{"getC", &luna_wrapper_proland_EditGraphOrthoLayer_SelectionData::_bind_getC},
	{"getEditor", &luna_wrapper_proland_EditGraphOrthoLayer_SelectionData::_bind_getEditor},
	{"getPoints", &luna_wrapper_proland_EditGraphOrthoLayer_SelectionData::_bind_getPoints},
	{"getMousePosition", &luna_wrapper_proland_EditGraphOrthoLayer_SelectionData::_bind_getMousePosition},
	{"setSelectedCurve", &luna_wrapper_proland_EditGraphOrthoLayer_SelectionData::_bind_setSelectedCurve},
	{"setSelectedPoint", &luna_wrapper_proland_EditGraphOrthoLayer_SelectionData::_bind_setSelectedPoint},
	{"setSelectedSegment", &luna_wrapper_proland_EditGraphOrthoLayer_SelectionData::_bind_setSelectedSegment},
	{"setC", &luna_wrapper_proland_EditGraphOrthoLayer_SelectionData::_bind_setC},
	{"setEditor", &luna_wrapper_proland_EditGraphOrthoLayer_SelectionData::_bind_setEditor},
	{"setPoints", &luna_wrapper_proland_EditGraphOrthoLayer_SelectionData::_bind_setPoints},
	{"setMousePosition", &luna_wrapper_proland_EditGraphOrthoLayer_SelectionData::_bind_setMousePosition},
	{"dynCast", &luna_wrapper_proland_EditGraphOrthoLayer_SelectionData::_bind_dynCast},
	{"__eq", &luna_wrapper_proland_EditGraphOrthoLayer_SelectionData::_bind___eq},
	{"fromVoid", &luna_wrapper_proland_EditGraphOrthoLayer_SelectionData::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_EditGraphOrthoLayer_SelectionData::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< proland::EditGraphOrthoLayer::SelectionData >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< proland::EditGraphOrthoLayer::SelectionData >::enumValues[] = {
	{0,0}
};



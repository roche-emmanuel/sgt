#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_Editor.h>

class luna_wrapper_proland_Editor {
public:
	typedef Luna< proland::Editor > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		proland::Editor* self=(Luna< proland::Editor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<proland::Editor,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,4450546) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(proland::Editor*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		proland::Editor* rhs =(Luna< proland::Editor >::check(L,2));
		proland::Editor* self=(Luna< proland::Editor >::check(L,1));
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

		proland::Editor* self= (proland::Editor*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::Editor >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,4450546) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< proland::Editor >::check(L,1));
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

		proland::Editor* self=(Luna< proland::Editor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("proland::Editor");
		
		return luna_dynamicCast(L,converters,"proland::Editor",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getTerrain(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTerrainNode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setPencil(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304302) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,81304302) ) return false;
		if( lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getBrushColor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_edit(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,55852521) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_update(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isActive(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setActive(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getGroup(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setGroup(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::Editor::Editor(lua_Table * data, string name = "Editor", string group = "defaultGroup", bool active = true)
	static proland::Editor* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in proland::Editor::Editor(lua_Table * data, string name = \"Editor\", string group = \"defaultGroup\", bool active = true) function, expected prototype:\nproland::Editor::Editor(lua_Table * data, string name = \"Editor\", string group = \"defaultGroup\", bool active = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		std::string name(lua_tostring(L,2),lua_objlen(L,2));
		std::string group(lua_tostring(L,3),lua_objlen(L,3));
		bool active=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)true;

		return new wrapper_proland_Editor(L,NULL, name, group, active);
	}


	// Function binds:
	// ork::SceneNode * proland::Editor::getTerrain()
	static int _bind_getTerrain(lua_State *L) {
		if (!_lg_typecheck_getTerrain(L)) {
			luaL_error(L, "luna typecheck failed in ork::SceneNode * proland::Editor::getTerrain() function, expected prototype:\nork::SceneNode * proland::Editor::getTerrain()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Editor* self=(Luna< proland::Editor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::SceneNode * proland::Editor::getTerrain(). Got : '%s'\n%s",typeid(Luna< proland::Editor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::SceneNode * lret = self->getTerrain();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::SceneNode >::push(L,lret,false);

		return 1;
	}

	// proland::TerrainNode * proland::Editor::getTerrainNode()
	static int _bind_getTerrainNode(lua_State *L) {
		if (!_lg_typecheck_getTerrainNode(L)) {
			luaL_error(L, "luna typecheck failed in proland::TerrainNode * proland::Editor::getTerrainNode() function, expected prototype:\nproland::TerrainNode * proland::Editor::getTerrainNode()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Editor* self=(Luna< proland::Editor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::TerrainNode * proland::Editor::getTerrainNode(). Got : '%s'\n%s",typeid(Luna< proland::Editor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::TerrainNode * lret = self->getTerrainNode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::TerrainNode >::push(L,lret,false);

		return 1;
	}

	// void proland::Editor::setPencil(const ork::vec4f & pencil, const ork::vec4f & brushColor, bool paint)
	static int _bind_setPencil(lua_State *L) {
		if (!_lg_typecheck_setPencil(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Editor::setPencil(const ork::vec4f & pencil, const ork::vec4f & brushColor, bool paint) function, expected prototype:\nvoid proland::Editor::setPencil(const ork::vec4f & pencil, const ork::vec4f & brushColor, bool paint)\nClass arguments details:\narg 1 ID = 81304302\narg 2 ID = 81304302\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec4f* pencil_ptr=(Luna< ork::vec4f >::check(L,2));
		if( !pencil_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pencil in proland::Editor::setPencil function");
		}
		const ork::vec4f & pencil=*pencil_ptr;
		const ork::vec4f* brushColor_ptr=(Luna< ork::vec4f >::check(L,3));
		if( !brushColor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg brushColor in proland::Editor::setPencil function");
		}
		const ork::vec4f & brushColor=*brushColor_ptr;
		bool paint=(bool)(lua_toboolean(L,4)==1);

		proland::Editor* self=(Luna< proland::Editor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Editor::setPencil(const ork::vec4f &, const ork::vec4f &, bool). Got : '%s'\n%s",typeid(Luna< proland::Editor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setPencil(pencil, brushColor, paint);

		return 0;
	}

	// ork::vec4f proland::Editor::getBrushColor()
	static int _bind_getBrushColor(lua_State *L) {
		if (!_lg_typecheck_getBrushColor(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec4f proland::Editor::getBrushColor() function, expected prototype:\nork::vec4f proland::Editor::getBrushColor()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Editor* self=(Luna< proland::Editor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec4f proland::Editor::getBrushColor(). Got : '%s'\n%s",typeid(Luna< proland::Editor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec4f stack_lret = self->getBrushColor();
		ork::vec4f* lret = new ork::vec4f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec4f >::push(L,lret,true);

		return 1;
	}

	// void proland::Editor::edit(const vector< ork::vec4d > & strokes)
	static int _bind_edit(lua_State *L) {
		if (!_lg_typecheck_edit(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Editor::edit(const vector< ork::vec4d > & strokes) function, expected prototype:\nvoid proland::Editor::edit(const vector< ork::vec4d > & strokes)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		const vector< ork::vec4d >* strokes_ptr=(Luna< vector< ork::vec4d > >::check(L,2));
		if( !strokes_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg strokes in proland::Editor::edit function");
		}
		const vector< ork::vec4d > & strokes=*strokes_ptr;

		proland::Editor* self=(Luna< proland::Editor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Editor::edit(const vector< ork::vec4d > &). Got : '%s'\n%s",typeid(Luna< proland::Editor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->edit(strokes);

		return 0;
	}

	// void proland::Editor::update()
	static int _bind_update(lua_State *L) {
		if (!_lg_typecheck_update(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Editor::update() function, expected prototype:\nvoid proland::Editor::update()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Editor* self=(Luna< proland::Editor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Editor::update(). Got : '%s'\n%s",typeid(Luna< proland::Editor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->update();

		return 0;
	}

	// void proland::Editor::reset()
	static int _bind_reset(lua_State *L) {
		if (!_lg_typecheck_reset(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Editor::reset() function, expected prototype:\nvoid proland::Editor::reset()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Editor* self=(Luna< proland::Editor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Editor::reset(). Got : '%s'\n%s",typeid(Luna< proland::Editor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->reset();

		return 0;
	}

	// bool proland::Editor::isActive()
	static int _bind_isActive(lua_State *L) {
		if (!_lg_typecheck_isActive(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::Editor::isActive() function, expected prototype:\nbool proland::Editor::isActive()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Editor* self=(Luna< proland::Editor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::Editor::isActive(). Got : '%s'\n%s",typeid(Luna< proland::Editor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isActive();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void proland::Editor::setActive(bool active)
	static int _bind_setActive(lua_State *L) {
		if (!_lg_typecheck_setActive(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Editor::setActive(bool active) function, expected prototype:\nvoid proland::Editor::setActive(bool active)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool active=(bool)(lua_toboolean(L,2)==1);

		proland::Editor* self=(Luna< proland::Editor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Editor::setActive(bool). Got : '%s'\n%s",typeid(Luna< proland::Editor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setActive(active);

		return 0;
	}

	// string proland::Editor::getName()
	static int _bind_getName(lua_State *L) {
		if (!_lg_typecheck_getName(L)) {
			luaL_error(L, "luna typecheck failed in string proland::Editor::getName() function, expected prototype:\nstring proland::Editor::getName()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Editor* self=(Luna< proland::Editor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call string proland::Editor::getName(). Got : '%s'\n%s",typeid(Luna< proland::Editor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		string lret = self->getName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void proland::Editor::setName(string name)
	static int _bind_setName(lua_State *L) {
		if (!_lg_typecheck_setName(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Editor::setName(string name) function, expected prototype:\nvoid proland::Editor::setName(string name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		proland::Editor* self=(Luna< proland::Editor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Editor::setName(string). Got : '%s'\n%s",typeid(Luna< proland::Editor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setName(name);

		return 0;
	}

	// string proland::Editor::getGroup()
	static int _bind_getGroup(lua_State *L) {
		if (!_lg_typecheck_getGroup(L)) {
			luaL_error(L, "luna typecheck failed in string proland::Editor::getGroup() function, expected prototype:\nstring proland::Editor::getGroup()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::Editor* self=(Luna< proland::Editor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call string proland::Editor::getGroup(). Got : '%s'\n%s",typeid(Luna< proland::Editor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		string lret = self->getGroup();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void proland::Editor::setGroup(string group)
	static int _bind_setGroup(lua_State *L) {
		if (!_lg_typecheck_setGroup(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Editor::setGroup(string group) function, expected prototype:\nvoid proland::Editor::setGroup(string group)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string group(lua_tostring(L,2),lua_objlen(L,2));

		proland::Editor* self=(Luna< proland::Editor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Editor::setGroup(string). Got : '%s'\n%s",typeid(Luna< proland::Editor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setGroup(group);

		return 0;
	}


	// Operator binds:

};

proland::Editor* LunaTraits< proland::Editor >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_Editor::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// ork::SceneNode * proland::Editor::getTerrain()
	// proland::TerrainNode * proland::Editor::getTerrainNode()
	// void proland::Editor::setPencil(const ork::vec4f & pencil, const ork::vec4f & brushColor, bool paint)
	// ork::vec4f proland::Editor::getBrushColor()
	// void proland::Editor::edit(const vector< ork::vec4d > & strokes)
	// void proland::Editor::update()
	// void proland::Editor::reset()
}

void LunaTraits< proland::Editor >::_bind_dtor(proland::Editor* obj) {
	delete obj;
}

const char LunaTraits< proland::Editor >::className[] = "Editor";
const char LunaTraits< proland::Editor >::fullName[] = "proland::Editor";
const char LunaTraits< proland::Editor >::moduleName[] = "proland";
const char* LunaTraits< proland::Editor >::parents[] = {0};
const int LunaTraits< proland::Editor >::hash = 4450546;
const int LunaTraits< proland::Editor >::uniqueIDs[] = {4450546,0};

luna_RegType LunaTraits< proland::Editor >::methods[] = {
	{"getTerrain", &luna_wrapper_proland_Editor::_bind_getTerrain},
	{"getTerrainNode", &luna_wrapper_proland_Editor::_bind_getTerrainNode},
	{"setPencil", &luna_wrapper_proland_Editor::_bind_setPencil},
	{"getBrushColor", &luna_wrapper_proland_Editor::_bind_getBrushColor},
	{"edit", &luna_wrapper_proland_Editor::_bind_edit},
	{"update", &luna_wrapper_proland_Editor::_bind_update},
	{"reset", &luna_wrapper_proland_Editor::_bind_reset},
	{"isActive", &luna_wrapper_proland_Editor::_bind_isActive},
	{"setActive", &luna_wrapper_proland_Editor::_bind_setActive},
	{"getName", &luna_wrapper_proland_Editor::_bind_getName},
	{"setName", &luna_wrapper_proland_Editor::_bind_setName},
	{"getGroup", &luna_wrapper_proland_Editor::_bind_getGroup},
	{"setGroup", &luna_wrapper_proland_Editor::_bind_setGroup},
	{"dynCast", &luna_wrapper_proland_Editor::_bind_dynCast},
	{"__eq", &luna_wrapper_proland_Editor::_bind___eq},
	{"fromVoid", &luna_wrapper_proland_Editor::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_Editor::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_Editor::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::Editor >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< proland::Editor >::enumValues[] = {
	{0,0}
};



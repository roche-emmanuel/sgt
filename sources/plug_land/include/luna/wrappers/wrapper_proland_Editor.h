#ifndef _WRAPPERS_WRAPPER_PROLAND_EDITOR_H_
#define _WRAPPERS_WRAPPER_PROLAND_EDITOR_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <W:/Cloud/Projects/sgt/sources/proland/sources/edit/proland/edit/EditorHandler.h>

class wrapper_proland_Editor : public proland::Editor, public luna_wrapper_base {

public:
		

	~wrapper_proland_Editor() {
		logDEBUG3("Calling delete function for wrapper proland_Editor");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::Editor*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_Editor(lua_State* L, lua_Table* dum, string name = "Editor", string group = "defaultGroup", bool active = true) 
		: proland::Editor(name, group, active), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::Editor*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// ork::SceneNode * proland::Editor::getTerrain()
	ork::SceneNode * getTerrain() {
		THROW_IF(!_obj.pushFunction("getTerrain"),"No implementation for abstract function proland::Editor::getTerrain");
		_obj.pushArg((proland::Editor*)this);
		return (_obj.callFunction<ork::SceneNode*>());
	};

	// proland::TerrainNode * proland::Editor::getTerrainNode()
	proland::TerrainNode * getTerrainNode() {
		THROW_IF(!_obj.pushFunction("getTerrainNode"),"No implementation for abstract function proland::Editor::getTerrainNode");
		_obj.pushArg((proland::Editor*)this);
		return (_obj.callFunction<proland::TerrainNode*>());
	};

	// void proland::Editor::setPencil(const ork::vec4f & pencil, const ork::vec4f & brushColor, bool paint)
	void setPencil(const ork::vec4f & pencil, const ork::vec4f & brushColor, bool paint) {
		THROW_IF(!_obj.pushFunction("setPencil"),"No implementation for abstract function proland::Editor::setPencil");
		_obj.pushArg((proland::Editor*)this);
		_obj.pushArg(&pencil);
		_obj.pushArg(&brushColor);
		_obj.pushArg(paint);
		return (_obj.callFunction<void>());
	};

	// ork::vec4f proland::Editor::getBrushColor()
	ork::vec4f getBrushColor() {
		THROW_IF(!_obj.pushFunction("getBrushColor"),"No implementation for abstract function proland::Editor::getBrushColor");
		_obj.pushArg((proland::Editor*)this);
		return *(_obj.callFunction<ork::vec4f*>());
	};

	// void proland::Editor::edit(const vector< ork::vec4d > & strokes)
	void edit(const vector< ork::vec4d > & strokes) {
		THROW_IF(!_obj.pushFunction("edit"),"No implementation for abstract function proland::Editor::edit");
		_obj.pushArg((proland::Editor*)this);
		_obj.pushArg(&strokes);
		return (_obj.callFunction<void>());
	};

	// void proland::Editor::update()
	void update() {
		THROW_IF(!_obj.pushFunction("update"),"No implementation for abstract function proland::Editor::update");
		_obj.pushArg((proland::Editor*)this);
		return (_obj.callFunction<void>());
	};

	// void proland::Editor::reset()
	void reset() {
		THROW_IF(!_obj.pushFunction("reset"),"No implementation for abstract function proland::Editor::reset");
		_obj.pushArg((proland::Editor*)this);
		return (_obj.callFunction<void>());
	};


	// Protected non-virtual methods:
	// void proland::Editor::swap(proland::Editor * e)
	void public_swap(proland::Editor * e) {
		return proland::Editor::swap(e);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_swap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,4450546)) ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void proland::Editor::public_swap(proland::Editor * e)
	static int _bind_public_swap(lua_State *L) {
		if (!_lg_typecheck_public_swap(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Editor::public_swap(proland::Editor * e) function, expected prototype:\nvoid proland::Editor::public_swap(proland::Editor * e)\nClass arguments details:\narg 1 ID = 4450546\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::Editor* e=(Luna< proland::Editor >::check(L,2));

		wrapper_proland_Editor* self=Luna< proland::Editor >::checkSubType< wrapper_proland_Editor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Editor::public_swap(proland::Editor *). Got : '%s'\n%s",typeid(Luna< proland::Editor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_swap(e);

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"swap",_bind_public_swap},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif


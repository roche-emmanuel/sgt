#ifndef _WRAPPERS_WRAPPER_PROLAND_TERRAINNODE_H_
#define _WRAPPERS_WRAPPER_PROLAND_TERRAINNODE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <proland/terrain/TerrainNode.h>

class wrapper_proland_TerrainNode : public proland::TerrainNode, public luna_wrapper_base {

public:
		

	~wrapper_proland_TerrainNode() {
		logDEBUG3("Calling delete function for wrapper proland_TerrainNode");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::TerrainNode*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_TerrainNode(lua_State* L, lua_Table* dum, ork::ptr< proland::Deformation > deform, ork::ptr< proland::TerrainQuad > root, float splitFactor, int maxLevel) 
		: proland::TerrainNode(deform, root, splitFactor, maxLevel), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::TerrainNode*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_proland_TerrainNode(lua_State* L, lua_Table* dum) 
		: proland::TerrainNode(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::TerrainNode*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((proland::TerrainNode*)this);
			return (_obj.callFunction<void>());
		}

		return TerrainNode::doRelease();
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((proland::TerrainNode*)this);
			return (_obj.callFunction<const char*>());
		}

		return TerrainNode::toString();
	};


	// Protected non-virtual methods:
	// void proland::TerrainNode::init(ork::ptr< proland::Deformation > deform, ork::ptr< proland::TerrainQuad > root, float splitFactor, int maxLevel)
	void public_init(ork::ptr< proland::Deformation > deform, ork::ptr< proland::TerrainQuad > root, float splitFactor, int maxLevel) {
		return proland::TerrainNode::init(deform, root, splitFactor, maxLevel);
	};

	// void proland::TerrainNode::swap(ork::ptr< proland::TerrainNode > node)
	void public_swap(ork::ptr< proland::TerrainNode > node) {
		return proland::TerrainNode::swap(node);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_init(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::Deformation >(L,2) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::TerrainQuad >(L,3) ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_swap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::TerrainNode >(L,2) ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void proland::TerrainNode::public_init(ork::ptr< proland::Deformation > deform, ork::ptr< proland::TerrainQuad > root, float splitFactor, int maxLevel)
	static int _bind_public_init(lua_State *L) {
		if (!_lg_typecheck_public_init(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TerrainNode::public_init(ork::ptr< proland::Deformation > deform, ork::ptr< proland::TerrainQuad > root, float splitFactor, int maxLevel) function, expected prototype:\nvoid proland::TerrainNode::public_init(ork::ptr< proland::Deformation > deform, ork::ptr< proland::TerrainQuad > root, float splitFactor, int maxLevel)\nClass arguments details:\narg 1 ID = [unknown]\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< proland::Deformation > deform = Luna< ork::Object >::checkSubType< proland::Deformation >(L,2);
		ork::ptr< proland::TerrainQuad > root = Luna< ork::Object >::checkSubType< proland::TerrainQuad >(L,3);
		float splitFactor=(float)lua_tonumber(L,4);
		int maxLevel=(int)lua_tointeger(L,5);

		wrapper_proland_TerrainNode* self=Luna< ork::Object >::checkSubType< wrapper_proland_TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TerrainNode::public_init(ork::ptr< proland::Deformation >, ork::ptr< proland::TerrainQuad >, float, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_init(deform, root, splitFactor, maxLevel);

		return 0;
	}

	// void proland::TerrainNode::public_swap(ork::ptr< proland::TerrainNode > node)
	static int _bind_public_swap(lua_State *L) {
		if (!_lg_typecheck_public_swap(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TerrainNode::public_swap(ork::ptr< proland::TerrainNode > node) function, expected prototype:\nvoid proland::TerrainNode::public_swap(ork::ptr< proland::TerrainNode > node)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< proland::TerrainNode > node = Luna< ork::Object >::checkSubType< proland::TerrainNode >(L,2);

		wrapper_proland_TerrainNode* self=Luna< ork::Object >::checkSubType< wrapper_proland_TerrainNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TerrainNode::public_swap(ork::ptr< proland::TerrainNode >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_swap(node);

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"init",_bind_public_init},
		{"swap",_bind_public_swap},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif


#ifndef _WRAPPERS_WRAPPER_ORK_SCENENODE_H_
#define _WRAPPERS_WRAPPER_ORK_SCENENODE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <ork/scenegraph/SceneNode.h>

class wrapper_ork_SceneNode : public ork::SceneNode, public luna_wrapper_base {

public:
		

	~wrapper_ork_SceneNode() {
		logDEBUG3("Calling delete function for wrapper ork_SceneNode");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((ork::SceneNode*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_ork_SceneNode(lua_State* L, lua_Table* dum) 
		: ork::SceneNode(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((ork::SceneNode*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((ork::SceneNode*)this);
			return (_obj.callFunction<void>());
		}

		return SceneNode::doRelease();
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((ork::SceneNode*)this);
			return (_obj.callFunction<const char*>());
		}

		return SceneNode::toString();
	};


	// Protected non-virtual methods:
	// void ork::SceneNode::swap(ork::ptr< ork::SceneNode > n)
	void public_swap(ork::ptr< ork::SceneNode > n) {
		return ork::SceneNode::swap(n);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_swap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::SceneNode >(L,2) ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void ork::SceneNode::public_swap(ork::ptr< ork::SceneNode > n)
	static int _bind_public_swap(lua_State *L) {
		if (!_lg_typecheck_public_swap(L)) {
			luaL_error(L, "luna typecheck failed in void ork::SceneNode::public_swap(ork::ptr< ork::SceneNode > n) function, expected prototype:\nvoid ork::SceneNode::public_swap(ork::ptr< ork::SceneNode > n)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::SceneNode > n = Luna< ork::Object >::checkSubType< ork::SceneNode >(L,2);

		wrapper_ork_SceneNode* self=Luna< ork::Object >::checkSubType< wrapper_ork_SceneNode >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::SceneNode::public_swap(ork::ptr< ork::SceneNode >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_swap(n);

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


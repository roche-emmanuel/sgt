#ifndef _WRAPPERS_WRAPPER_PROLAND_OBJECTTILESTORAGE_OBJECTSLOT_H_
#define _WRAPPERS_WRAPPER_PROLAND_OBJECTTILESTORAGE_OBJECTSLOT_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <W:/Cloud/Projects/sgt/sources/proland/sources/core/proland/producer/ObjectTileStorage.h>

class wrapper_proland_ObjectTileStorage_ObjectSlot : public proland::ObjectTileStorage::ObjectSlot, public luna_wrapper_base {

public:
		

	~wrapper_proland_ObjectTileStorage_ObjectSlot() {
		logDEBUG3("Calling delete function for wrapper proland_ObjectTileStorage_ObjectSlot");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::ObjectTileStorage::ObjectSlot*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_ObjectTileStorage_ObjectSlot(lua_State* L, lua_Table* dum, proland::TileStorage * owner) 
		: proland::ObjectTileStorage::ObjectSlot(owner), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::ObjectTileStorage::ObjectSlot*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:

	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


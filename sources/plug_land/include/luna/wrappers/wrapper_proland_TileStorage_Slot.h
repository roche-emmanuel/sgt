#ifndef _WRAPPERS_WRAPPER_PROLAND_TILESTORAGE_SLOT_H_
#define _WRAPPERS_WRAPPER_PROLAND_TILESTORAGE_SLOT_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <W:/Cloud/Projects/sgt/sources/proland/sources/core/proland/producer/TileStorage.h>

class wrapper_proland_TileStorage_Slot : public proland::TileStorage::Slot, public luna_wrapper_base {

public:
		

	~wrapper_proland_TileStorage_Slot() {
		logDEBUG3("Calling delete function for wrapper proland_TileStorage_Slot");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::TileStorage::Slot*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_TileStorage_Slot(lua_State* L, lua_Table* dum, proland::TileStorage * owner) 
		: proland::TileStorage::Slot(owner), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::TileStorage::Slot*)this);
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


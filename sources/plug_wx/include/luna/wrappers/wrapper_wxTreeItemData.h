#ifndef _WRAPPERS_WRAPPER_WXTREEITEMDATA_H_
#define _WRAPPERS_WRAPPER_WXTREEITEMDATA_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/treebase.h>

class wrapper_wxTreeItemData : public wxTreeItemData, public luna_wrapper_base {

public:
		

	~wrapper_wxTreeItemData() {
		logDEBUG3("Calling delete function for wrapper wxTreeItemData");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxTreeItemData*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxTreeItemData(lua_State* L, lua_Table* dum) 
		: wxTreeItemData(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxTreeItemData*)this);
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


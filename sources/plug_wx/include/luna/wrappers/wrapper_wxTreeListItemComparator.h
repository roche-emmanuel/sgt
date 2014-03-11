#ifndef _WRAPPERS_WRAPPER_WXTREELISTITEMCOMPARATOR_H_
#define _WRAPPERS_WRAPPER_WXTREELISTITEMCOMPARATOR_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/treelist.h>

class wrapper_wxTreeListItemComparator : public wxTreeListItemComparator, public luna_wrapper_base {

public:
		

	~wrapper_wxTreeListItemComparator() {
		logDEBUG3("Calling delete function for wrapper wxTreeListItemComparator");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxTreeListItemComparator*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxTreeListItemComparator(lua_State* L, lua_Table* dum) 
		: wxTreeListItemComparator(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxTreeListItemComparator*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// int wxTreeListItemComparator::Compare(wxTreeListCtrl * treelist, unsigned int column, wxTreeListItem first, wxTreeListItem second)
	int Compare(wxTreeListCtrl * treelist, unsigned int column, wxTreeListItem first, wxTreeListItem second) {
		THROW_IF(!_obj.pushFunction("Compare"),"No implementation for abstract function wxTreeListItemComparator::Compare");
		_obj.pushArg((wxTreeListItemComparator*)this);
		_obj.pushArg(treelist);
		_obj.pushArg(column);
		_obj.pushArg(&first);
		_obj.pushArg(&second);
		return (_obj.callFunction<int>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


#ifndef _WRAPPERS_WRAPPER_IDOCLISTITEM_H_
#define _WRAPPERS_WRAPPER_IDOCLISTITEM_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <doxmlintf.h>

class wrapper_IDocListItem : public IDocListItem, public luna_wrapper_base {

public:
		

	~wrapper_IDocListItem() {
		logDEBUG3("Calling delete function for wrapper IDocListItem");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((IDocListItem*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_IDocListItem(lua_State* L, lua_Table* dum) 
		: IDocListItem(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((IDocListItem*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// IDoc::Kind IDoc::kind() const
	IDoc::Kind kind() const {
		THROW_IF(!_obj.pushFunction("kind"),"No implementation for abstract function IDoc::kind");
		_obj.pushArg((IDocListItem*)this);
		return (IDoc::Kind)(_obj.callFunction<int>());
	};

	// IDocIterator * IDocListItem::contents() const
	IDocIterator * contents() const {
		THROW_IF(!_obj.pushFunction("contents"),"No implementation for abstract function IDocListItem::contents");
		_obj.pushArg((IDocListItem*)this);
		return (_obj.callFunction<IDocIterator*>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


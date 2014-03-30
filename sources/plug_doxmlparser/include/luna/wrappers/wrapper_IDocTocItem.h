#ifndef _WRAPPERS_WRAPPER_IDOCTOCITEM_H_
#define _WRAPPERS_WRAPPER_IDOCTOCITEM_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <doxmlintf.h>

class wrapper_IDocTocItem : public IDocTocItem, public luna_wrapper_base {

public:
		

	~wrapper_IDocTocItem() {
		logDEBUG3("Calling delete function for wrapper IDocTocItem");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((IDocTocItem*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_IDocTocItem(lua_State* L, lua_Table* dum) 
		: IDocTocItem(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((IDocTocItem*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// IDoc::Kind IDoc::kind() const
	IDoc::Kind kind() const {
		THROW_IF(!_obj.pushFunction("kind"),"No implementation for abstract function IDoc::kind");
		_obj.pushArg((IDocTocItem*)this);
		return (IDoc::Kind)(_obj.callFunction<int>());
	};

	// const IString * IDocTocItem::id() const
	const IString * id() const {
		THROW_IF(!_obj.pushFunction("id"),"No implementation for abstract function IDocTocItem::id");
		_obj.pushArg((IDocTocItem*)this);
		return (_obj.callFunction<IString*>());
	};

	// const IString * IDocTocItem::title() const
	const IString * title() const {
		THROW_IF(!_obj.pushFunction("title"),"No implementation for abstract function IDocTocItem::title");
		_obj.pushArg((IDocTocItem*)this);
		return (_obj.callFunction<IString*>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


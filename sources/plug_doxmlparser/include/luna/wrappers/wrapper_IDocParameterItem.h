#ifndef _WRAPPERS_WRAPPER_IDOCPARAMETERITEM_H_
#define _WRAPPERS_WRAPPER_IDOCPARAMETERITEM_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <doxmlintf.h>

class wrapper_IDocParameterItem : public IDocParameterItem, public luna_wrapper_base {

public:
		

	~wrapper_IDocParameterItem() {
		logDEBUG3("Calling delete function for wrapper IDocParameterItem");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((IDocParameterItem*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_IDocParameterItem(lua_State* L, lua_Table* dum) 
		: IDocParameterItem(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((IDocParameterItem*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// IDoc::Kind IDoc::kind() const
	IDoc::Kind kind() const {
		THROW_IF(!_obj.pushFunction("kind"),"No implementation for abstract function IDoc::kind");
		_obj.pushArg((IDocParameterItem*)this);
		return (IDoc::Kind)(_obj.callFunction<int>());
	};

	// IDocIterator * IDocParameterItem::paramNames() const
	IDocIterator * paramNames() const {
		THROW_IF(!_obj.pushFunction("paramNames"),"No implementation for abstract function IDocParameterItem::paramNames");
		_obj.pushArg((IDocParameterItem*)this);
		return (_obj.callFunction<IDocIterator*>());
	};

	// IDocPara * IDocParameterItem::description() const
	IDocPara * description() const {
		THROW_IF(!_obj.pushFunction("description"),"No implementation for abstract function IDocParameterItem::description");
		_obj.pushArg((IDocParameterItem*)this);
		return (_obj.callFunction<IDocPara*>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


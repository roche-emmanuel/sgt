#ifndef _WRAPPERS_WRAPPER_IDOCINTERNAL_H_
#define _WRAPPERS_WRAPPER_IDOCINTERNAL_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <doxmlintf.h>

class wrapper_IDocInternal : public IDocInternal, public luna_wrapper_base {

public:
		

	~wrapper_IDocInternal() {
		logDEBUG3("Calling delete function for wrapper IDocInternal");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((IDocInternal*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_IDocInternal(lua_State* L, lua_Table* dum) 
		: IDocInternal(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((IDocInternal*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// IDoc::Kind IDoc::kind() const
	IDoc::Kind kind() const {
		THROW_IF(!_obj.pushFunction("kind"),"No implementation for abstract function IDoc::kind");
		_obj.pushArg((IDocInternal*)this);
		return (IDoc::Kind)(_obj.callFunction<int>());
	};

	// IDocIterator * IDocInternal::paragraphs() const
	IDocIterator * paragraphs() const {
		THROW_IF(!_obj.pushFunction("paragraphs"),"No implementation for abstract function IDocInternal::paragraphs");
		_obj.pushArg((IDocInternal*)this);
		return (_obj.callFunction<IDocIterator*>());
	};

	// IDocIterator * IDocInternal::subSections() const
	IDocIterator * subSections() const {
		THROW_IF(!_obj.pushFunction("subSections"),"No implementation for abstract function IDocInternal::subSections");
		_obj.pushArg((IDocInternal*)this);
		return (_obj.callFunction<IDocIterator*>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


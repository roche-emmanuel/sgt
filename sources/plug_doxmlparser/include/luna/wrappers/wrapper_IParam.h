#ifndef _WRAPPERS_WRAPPER_IPARAM_H_
#define _WRAPPERS_WRAPPER_IPARAM_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <doxmlintf.h>

class wrapper_IParam : public IParam, public luna_wrapper_base {

public:
		

	~wrapper_IParam() {
		logDEBUG3("Calling delete function for wrapper IParam");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((IParam*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_IParam(lua_State* L, lua_Table* dum) 
		: IParam(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((IParam*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// ILinkedTextIterator * IParam::type() const
	ILinkedTextIterator * type() const {
		THROW_IF(!_obj.pushFunction("type"),"No implementation for abstract function IParam::type");
		_obj.pushArg((IParam*)this);
		return (_obj.callFunction<ILinkedTextIterator*>());
	};

	// const IString * IParam::declarationName() const
	const IString * declarationName() const {
		THROW_IF(!_obj.pushFunction("declarationName"),"No implementation for abstract function IParam::declarationName");
		_obj.pushArg((IParam*)this);
		return (_obj.callFunction<IString*>());
	};

	// const IString * IParam::definitionName() const
	const IString * definitionName() const {
		THROW_IF(!_obj.pushFunction("definitionName"),"No implementation for abstract function IParam::definitionName");
		_obj.pushArg((IParam*)this);
		return (_obj.callFunction<IString*>());
	};

	// const IString * IParam::attrib() const
	const IString * attrib() const {
		THROW_IF(!_obj.pushFunction("attrib"),"No implementation for abstract function IParam::attrib");
		_obj.pushArg((IParam*)this);
		return (_obj.callFunction<IString*>());
	};

	// const IString * IParam::arraySpecifier() const
	const IString * arraySpecifier() const {
		THROW_IF(!_obj.pushFunction("arraySpecifier"),"No implementation for abstract function IParam::arraySpecifier");
		_obj.pushArg((IParam*)this);
		return (_obj.callFunction<IString*>());
	};

	// ILinkedTextIterator * IParam::defaultValue() const
	ILinkedTextIterator * defaultValue() const {
		THROW_IF(!_obj.pushFunction("defaultValue"),"No implementation for abstract function IParam::defaultValue");
		_obj.pushArg((IParam*)this);
		return (_obj.callFunction<ILinkedTextIterator*>());
	};

	// IDocRoot * IParam::briefDescription() const
	IDocRoot * briefDescription() const {
		THROW_IF(!_obj.pushFunction("briefDescription"),"No implementation for abstract function IParam::briefDescription");
		_obj.pushArg((IParam*)this);
		return (_obj.callFunction<IDocRoot*>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


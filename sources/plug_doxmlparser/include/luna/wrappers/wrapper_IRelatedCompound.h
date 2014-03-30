#ifndef _WRAPPERS_WRAPPER_IRELATEDCOMPOUND_H_
#define _WRAPPERS_WRAPPER_IRELATEDCOMPOUND_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <doxmlintf.h>

class wrapper_IRelatedCompound : public IRelatedCompound, public luna_wrapper_base {

public:
		

	~wrapper_IRelatedCompound() {
		logDEBUG3("Calling delete function for wrapper IRelatedCompound");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((IRelatedCompound*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_IRelatedCompound(lua_State* L, lua_Table* dum) 
		: IRelatedCompound(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((IRelatedCompound*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// ICompound * IRelatedCompound::compound() const
	ICompound * compound() const {
		THROW_IF(!_obj.pushFunction("compound"),"No implementation for abstract function IRelatedCompound::compound");
		_obj.pushArg((IRelatedCompound*)this);
		return (_obj.callFunction<ICompound*>());
	};

	// IRelatedCompound::Protection IRelatedCompound::protection() const
	IRelatedCompound::Protection protection() const {
		THROW_IF(!_obj.pushFunction("protection"),"No implementation for abstract function IRelatedCompound::protection");
		_obj.pushArg((IRelatedCompound*)this);
		return (IRelatedCompound::Protection)(_obj.callFunction<int>());
	};

	// IRelatedCompound::Kind IRelatedCompound::kind() const
	IRelatedCompound::Kind kind() const {
		THROW_IF(!_obj.pushFunction("kind"),"No implementation for abstract function IRelatedCompound::kind");
		_obj.pushArg((IRelatedCompound*)this);
		return (IRelatedCompound::Kind)(_obj.callFunction<int>());
	};

	// const IString * IRelatedCompound::name() const
	const IString * name() const {
		THROW_IF(!_obj.pushFunction("name"),"No implementation for abstract function IRelatedCompound::name");
		_obj.pushArg((IRelatedCompound*)this);
		return (_obj.callFunction<IString*>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


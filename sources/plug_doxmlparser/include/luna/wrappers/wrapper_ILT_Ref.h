#ifndef _WRAPPERS_WRAPPER_ILT_REF_H_
#define _WRAPPERS_WRAPPER_ILT_REF_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <doxmlintf.h>

class wrapper_ILT_Ref : public ILT_Ref, public luna_wrapper_base {

public:
		

	~wrapper_ILT_Ref() {
		logDEBUG3("Calling delete function for wrapper ILT_Ref");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((ILT_Ref*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_ILT_Ref(lua_State* L, lua_Table* dum) 
		: ILT_Ref(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((ILT_Ref*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// ILinkedText::Kind ILinkedText::kind() const
	ILinkedText::Kind kind() const {
		THROW_IF(!_obj.pushFunction("kind"),"No implementation for abstract function ILinkedText::kind");
		_obj.pushArg((ILT_Ref*)this);
		return (ILinkedText::Kind)(_obj.callFunction<int>());
	};

	// const IString * ILT_Ref::id() const
	const IString * id() const {
		THROW_IF(!_obj.pushFunction("id"),"No implementation for abstract function ILT_Ref::id");
		_obj.pushArg((ILT_Ref*)this);
		return (_obj.callFunction<IString*>());
	};

	// ILT_Ref::TargetKind ILT_Ref::targetKind() const
	ILT_Ref::TargetKind targetKind() const {
		THROW_IF(!_obj.pushFunction("targetKind"),"No implementation for abstract function ILT_Ref::targetKind");
		_obj.pushArg((ILT_Ref*)this);
		return (ILT_Ref::TargetKind)(_obj.callFunction<int>());
	};

	// const IString * ILT_Ref::external() const
	const IString * external() const {
		THROW_IF(!_obj.pushFunction("external"),"No implementation for abstract function ILT_Ref::external");
		_obj.pushArg((ILT_Ref*)this);
		return (_obj.callFunction<IString*>());
	};

	// const IString * ILT_Ref::text() const
	const IString * text() const {
		THROW_IF(!_obj.pushFunction("text"),"No implementation for abstract function ILT_Ref::text");
		_obj.pushArg((ILT_Ref*)this);
		return (_obj.callFunction<IString*>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


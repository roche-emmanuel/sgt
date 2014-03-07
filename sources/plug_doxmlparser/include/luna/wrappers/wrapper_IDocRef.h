#ifndef _WRAPPERS_WRAPPER_IDOCREF_H_
#define _WRAPPERS_WRAPPER_IDOCREF_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <doxmlintf.h>

class wrapper_IDocRef : public IDocRef, public luna_wrapper_base {

public:
		

	~wrapper_IDocRef() {
		logDEBUG3("Calling delete function for wrapper IDocRef");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((IDocRef*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_IDocRef(lua_State* L, lua_Table* dum) 
		: IDocRef(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((IDocRef*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// IDoc::Kind IDoc::kind() const
	IDoc::Kind kind() const {
		THROW_IF(!_obj.pushFunction("kind"),"No implementation for abstract function IDoc::kind");
		_obj.pushArg((IDocRef*)this);
		return (IDoc::Kind)(_obj.callFunction<int>());
	};

	// const IString * IDocRef::refId() const
	const IString * refId() const {
		THROW_IF(!_obj.pushFunction("refId"),"No implementation for abstract function IDocRef::refId");
		_obj.pushArg((IDocRef*)this);
		return (_obj.callFunction<IString*>());
	};

	// IDocRef::TargetKind IDocRef::targetKind() const
	IDocRef::TargetKind targetKind() const {
		THROW_IF(!_obj.pushFunction("targetKind"),"No implementation for abstract function IDocRef::targetKind");
		_obj.pushArg((IDocRef*)this);
		return (IDocRef::TargetKind)(_obj.callFunction<int>());
	};

	// const IString * IDocRef::external() const
	const IString * external() const {
		THROW_IF(!_obj.pushFunction("external"),"No implementation for abstract function IDocRef::external");
		_obj.pushArg((IDocRef*)this);
		return (_obj.callFunction<IString*>());
	};

	// const IString * IDocRef::text() const
	const IString * text() const {
		THROW_IF(!_obj.pushFunction("text"),"No implementation for abstract function IDocRef::text");
		_obj.pushArg((IDocRef*)this);
		return (_obj.callFunction<IString*>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


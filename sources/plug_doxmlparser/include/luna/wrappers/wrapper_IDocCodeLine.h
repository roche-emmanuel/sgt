#ifndef _WRAPPERS_WRAPPER_IDOCCODELINE_H_
#define _WRAPPERS_WRAPPER_IDOCCODELINE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <doxmlintf.h>

class wrapper_IDocCodeLine : public IDocCodeLine, public luna_wrapper_base {

public:
		

	~wrapper_IDocCodeLine() {
		logDEBUG3("Calling delete function for wrapper IDocCodeLine");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((IDocCodeLine*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_IDocCodeLine(lua_State* L, lua_Table* dum) 
		: IDocCodeLine(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((IDocCodeLine*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// IDoc::Kind IDoc::kind() const
	IDoc::Kind kind() const {
		THROW_IF(!_obj.pushFunction("kind"),"No implementation for abstract function IDoc::kind");
		_obj.pushArg((IDocCodeLine*)this);
		return (IDoc::Kind)(_obj.callFunction<int>());
	};

	// int IDocCodeLine::lineNumber() const
	int lineNumber() const {
		THROW_IF(!_obj.pushFunction("lineNumber"),"No implementation for abstract function IDocCodeLine::lineNumber");
		_obj.pushArg((IDocCodeLine*)this);
		return (_obj.callFunction<int>());
	};

	// const IString * IDocCodeLine::refId() const
	const IString * refId() const {
		THROW_IF(!_obj.pushFunction("refId"),"No implementation for abstract function IDocCodeLine::refId");
		_obj.pushArg((IDocCodeLine*)this);
		return (_obj.callFunction<IString*>());
	};

	// IDocIterator * IDocCodeLine::codeElements() const
	IDocIterator * codeElements() const {
		THROW_IF(!_obj.pushFunction("codeElements"),"No implementation for abstract function IDocCodeLine::codeElements");
		_obj.pushArg((IDocCodeLine*)this);
		return (_obj.callFunction<IDocIterator*>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


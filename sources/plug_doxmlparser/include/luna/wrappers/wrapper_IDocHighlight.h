#ifndef _WRAPPERS_WRAPPER_IDOCHIGHLIGHT_H_
#define _WRAPPERS_WRAPPER_IDOCHIGHLIGHT_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <doxmlintf.h>

class wrapper_IDocHighlight : public IDocHighlight, public luna_wrapper_base {

public:
		

	~wrapper_IDocHighlight() {
		logDEBUG3("Calling delete function for wrapper IDocHighlight");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((IDocHighlight*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_IDocHighlight(lua_State* L, lua_Table* dum) 
		: IDocHighlight(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((IDocHighlight*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// IDoc::Kind IDoc::kind() const
	IDoc::Kind kind() const {
		THROW_IF(!_obj.pushFunction("kind"),"No implementation for abstract function IDoc::kind");
		_obj.pushArg((IDocHighlight*)this);
		return (IDoc::Kind)(_obj.callFunction<int>());
	};

	// IDocHighlight::HighlightKind IDocHighlight::highlightKind() const
	IDocHighlight::HighlightKind highlightKind() const {
		THROW_IF(!_obj.pushFunction("highlightKind"),"No implementation for abstract function IDocHighlight::highlightKind");
		_obj.pushArg((IDocHighlight*)this);
		return (IDocHighlight::HighlightKind)(_obj.callFunction<int>());
	};

	// IDocIterator * IDocHighlight::codeElements() const
	IDocIterator * codeElements() const {
		THROW_IF(!_obj.pushFunction("codeElements"),"No implementation for abstract function IDocHighlight::codeElements");
		_obj.pushArg((IDocHighlight*)this);
		return (_obj.callFunction<IDocIterator*>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


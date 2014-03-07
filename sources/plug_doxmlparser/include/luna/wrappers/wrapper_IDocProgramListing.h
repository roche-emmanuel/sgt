#ifndef _WRAPPERS_WRAPPER_IDOCPROGRAMLISTING_H_
#define _WRAPPERS_WRAPPER_IDOCPROGRAMLISTING_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <doxmlintf.h>

class wrapper_IDocProgramListing : public IDocProgramListing, public luna_wrapper_base {

public:
		

	~wrapper_IDocProgramListing() {
		logDEBUG3("Calling delete function for wrapper IDocProgramListing");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((IDocProgramListing*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_IDocProgramListing(lua_State* L, lua_Table* dum) 
		: IDocProgramListing(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((IDocProgramListing*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// IDoc::Kind IDoc::kind() const
	IDoc::Kind kind() const {
		THROW_IF(!_obj.pushFunction("kind"),"No implementation for abstract function IDoc::kind");
		_obj.pushArg((IDocProgramListing*)this);
		return (IDoc::Kind)(_obj.callFunction<int>());
	};

	// IDocIterator * IDocProgramListing::codeLines() const
	IDocIterator * codeLines() const {
		THROW_IF(!_obj.pushFunction("codeLines"),"No implementation for abstract function IDocProgramListing::codeLines");
		_obj.pushArg((IDocProgramListing*)this);
		return (_obj.callFunction<IDocIterator*>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


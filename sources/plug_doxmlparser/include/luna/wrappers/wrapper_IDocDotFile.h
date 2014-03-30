#ifndef _WRAPPERS_WRAPPER_IDOCDOTFILE_H_
#define _WRAPPERS_WRAPPER_IDOCDOTFILE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <doxmlintf.h>

class wrapper_IDocDotFile : public IDocDotFile, public luna_wrapper_base {

public:
		

	~wrapper_IDocDotFile() {
		logDEBUG3("Calling delete function for wrapper IDocDotFile");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((IDocDotFile*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_IDocDotFile(lua_State* L, lua_Table* dum) 
		: IDocDotFile(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((IDocDotFile*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// IDoc::Kind IDoc::kind() const
	IDoc::Kind kind() const {
		THROW_IF(!_obj.pushFunction("kind"),"No implementation for abstract function IDoc::kind");
		_obj.pushArg((IDocDotFile*)this);
		return (IDoc::Kind)(_obj.callFunction<int>());
	};

	// const IString * IDocDotFile::name() const
	const IString * name() const {
		THROW_IF(!_obj.pushFunction("name"),"No implementation for abstract function IDocDotFile::name");
		_obj.pushArg((IDocDotFile*)this);
		return (_obj.callFunction<IString*>());
	};

	// const IString * IDocDotFile::caption() const
	const IString * caption() const {
		THROW_IF(!_obj.pushFunction("caption"),"No implementation for abstract function IDocDotFile::caption");
		_obj.pushArg((IDocDotFile*)this);
		return (_obj.callFunction<IString*>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


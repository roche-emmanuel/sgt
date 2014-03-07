#ifndef _WRAPPERS_WRAPPER_IDOCSIMPLESECT_H_
#define _WRAPPERS_WRAPPER_IDOCSIMPLESECT_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <doxmlintf.h>

class wrapper_IDocSimpleSect : public IDocSimpleSect, public luna_wrapper_base {

public:
		

	~wrapper_IDocSimpleSect() {
		logDEBUG3("Calling delete function for wrapper IDocSimpleSect");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((IDocSimpleSect*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_IDocSimpleSect(lua_State* L, lua_Table* dum) 
		: IDocSimpleSect(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((IDocSimpleSect*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// IDoc::Kind IDoc::kind() const
	IDoc::Kind kind() const {
		THROW_IF(!_obj.pushFunction("kind"),"No implementation for abstract function IDoc::kind");
		_obj.pushArg((IDocSimpleSect*)this);
		return (IDoc::Kind)(_obj.callFunction<int>());
	};

	// IDocSimpleSect::Types IDocSimpleSect::type() const
	IDocSimpleSect::Types type() const {
		THROW_IF(!_obj.pushFunction("type"),"No implementation for abstract function IDocSimpleSect::type");
		_obj.pushArg((IDocSimpleSect*)this);
		return (IDocSimpleSect::Types)(_obj.callFunction<int>());
	};

	// const IString * IDocSimpleSect::typeString() const
	const IString * typeString() const {
		THROW_IF(!_obj.pushFunction("typeString"),"No implementation for abstract function IDocSimpleSect::typeString");
		_obj.pushArg((IDocSimpleSect*)this);
		return (_obj.callFunction<IString*>());
	};

	// IDocTitle * IDocSimpleSect::title() const
	IDocTitle * title() const {
		THROW_IF(!_obj.pushFunction("title"),"No implementation for abstract function IDocSimpleSect::title");
		_obj.pushArg((IDocSimpleSect*)this);
		return (_obj.callFunction<IDocTitle*>());
	};

	// IDocPara * IDocSimpleSect::description() const
	IDocPara * description() const {
		THROW_IF(!_obj.pushFunction("description"),"No implementation for abstract function IDocSimpleSect::description");
		_obj.pushArg((IDocSimpleSect*)this);
		return (_obj.callFunction<IDocPara*>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


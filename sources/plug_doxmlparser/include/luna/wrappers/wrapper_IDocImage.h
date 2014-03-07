#ifndef _WRAPPERS_WRAPPER_IDOCIMAGE_H_
#define _WRAPPERS_WRAPPER_IDOCIMAGE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <doxmlintf.h>

class wrapper_IDocImage : public IDocImage, public luna_wrapper_base {

public:
		

	~wrapper_IDocImage() {
		logDEBUG3("Calling delete function for wrapper IDocImage");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((IDocImage*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_IDocImage(lua_State* L, lua_Table* dum) 
		: IDocImage(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((IDocImage*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// IDoc::Kind IDoc::kind() const
	IDoc::Kind kind() const {
		THROW_IF(!_obj.pushFunction("kind"),"No implementation for abstract function IDoc::kind");
		_obj.pushArg((IDocImage*)this);
		return (IDoc::Kind)(_obj.callFunction<int>());
	};

	// const IString * IDocImage::name() const
	const IString * name() const {
		THROW_IF(!_obj.pushFunction("name"),"No implementation for abstract function IDocImage::name");
		_obj.pushArg((IDocImage*)this);
		return (_obj.callFunction<IString*>());
	};

	// const IString * IDocImage::caption() const
	const IString * caption() const {
		THROW_IF(!_obj.pushFunction("caption"),"No implementation for abstract function IDocImage::caption");
		_obj.pushArg((IDocImage*)this);
		return (_obj.callFunction<IString*>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


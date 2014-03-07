#ifndef _WRAPPERS_WRAPPER_IDOCSECTION_H_
#define _WRAPPERS_WRAPPER_IDOCSECTION_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <doxmlintf.h>

class wrapper_IDocSection : public IDocSection, public luna_wrapper_base {

public:
		

	~wrapper_IDocSection() {
		logDEBUG3("Calling delete function for wrapper IDocSection");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((IDocSection*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_IDocSection(lua_State* L, lua_Table* dum) 
		: IDocSection(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((IDocSection*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// IDoc::Kind IDoc::kind() const
	IDoc::Kind kind() const {
		THROW_IF(!_obj.pushFunction("kind"),"No implementation for abstract function IDoc::kind");
		_obj.pushArg((IDocSection*)this);
		return (IDoc::Kind)(_obj.callFunction<int>());
	};

	// const IString * IDocSection::id() const
	const IString * id() const {
		THROW_IF(!_obj.pushFunction("id"),"No implementation for abstract function IDocSection::id");
		_obj.pushArg((IDocSection*)this);
		return (_obj.callFunction<IString*>());
	};

	// int IDocSection::level() const
	int level() const {
		THROW_IF(!_obj.pushFunction("level"),"No implementation for abstract function IDocSection::level");
		_obj.pushArg((IDocSection*)this);
		return (_obj.callFunction<int>());
	};

	// IDocTitle * IDocSection::title() const
	IDocTitle * title() const {
		THROW_IF(!_obj.pushFunction("title"),"No implementation for abstract function IDocSection::title");
		_obj.pushArg((IDocSection*)this);
		return (_obj.callFunction<IDocTitle*>());
	};

	// IDocIterator * IDocSection::paragraphs() const
	IDocIterator * paragraphs() const {
		THROW_IF(!_obj.pushFunction("paragraphs"),"No implementation for abstract function IDocSection::paragraphs");
		_obj.pushArg((IDocSection*)this);
		return (_obj.callFunction<IDocIterator*>());
	};

	// IDocIterator * IDocSection::subSections() const
	IDocIterator * subSections() const {
		THROW_IF(!_obj.pushFunction("subSections"),"No implementation for abstract function IDocSection::subSections");
		_obj.pushArg((IDocSection*)this);
		return (_obj.callFunction<IDocIterator*>());
	};

	// IDocInternal * IDocSection::internal() const
	IDocInternal * internal() const {
		THROW_IF(!_obj.pushFunction("internal"),"No implementation for abstract function IDocSection::internal");
		_obj.pushArg((IDocSection*)this);
		return (_obj.callFunction<IDocInternal*>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


#ifndef _WRAPPERS_WRAPPER_ISECTION_H_
#define _WRAPPERS_WRAPPER_ISECTION_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <doxmlintf.h>

class wrapper_ISection : public ISection, public luna_wrapper_base {

public:
		

	~wrapper_ISection() {
		logDEBUG3("Calling delete function for wrapper ISection");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((ISection*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_ISection(lua_State* L, lua_Table* dum) 
		: ISection(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((ISection*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// const IString * ISection::kindString() const
	const IString * kindString() const {
		THROW_IF(!_obj.pushFunction("kindString"),"No implementation for abstract function ISection::kindString");
		_obj.pushArg((ISection*)this);
		return (_obj.callFunction<IString*>());
	};

	// ISection::SectionKind ISection::kind() const
	ISection::SectionKind kind() const {
		THROW_IF(!_obj.pushFunction("kind"),"No implementation for abstract function ISection::kind");
		_obj.pushArg((ISection*)this);
		return (ISection::SectionKind)(_obj.callFunction<int>());
	};

	// IDocRoot * ISection::description() const
	IDocRoot * description() const {
		THROW_IF(!_obj.pushFunction("description"),"No implementation for abstract function ISection::description");
		_obj.pushArg((ISection*)this);
		return (_obj.callFunction<IDocRoot*>());
	};

	// IMemberIterator * ISection::members() const
	IMemberIterator * members() const {
		THROW_IF(!_obj.pushFunction("members"),"No implementation for abstract function ISection::members");
		_obj.pushArg((ISection*)this);
		return (_obj.callFunction<IMemberIterator*>());
	};

	// bool ISection::isStatic() const
	bool isStatic() const {
		THROW_IF(!_obj.pushFunction("isStatic"),"No implementation for abstract function ISection::isStatic");
		_obj.pushArg((ISection*)this);
		return (_obj.callFunction<bool>());
	};

	// bool ISection::isPublic() const
	bool isPublic() const {
		THROW_IF(!_obj.pushFunction("isPublic"),"No implementation for abstract function ISection::isPublic");
		_obj.pushArg((ISection*)this);
		return (_obj.callFunction<bool>());
	};

	// bool ISection::isPrivate() const
	bool isPrivate() const {
		THROW_IF(!_obj.pushFunction("isPrivate"),"No implementation for abstract function ISection::isPrivate");
		_obj.pushArg((ISection*)this);
		return (_obj.callFunction<bool>());
	};

	// bool ISection::isProtected() const
	bool isProtected() const {
		THROW_IF(!_obj.pushFunction("isProtected"),"No implementation for abstract function ISection::isProtected");
		_obj.pushArg((ISection*)this);
		return (_obj.callFunction<bool>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


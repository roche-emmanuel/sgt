#ifndef _WRAPPERS_WRAPPER_IUSERDEFINED_H_
#define _WRAPPERS_WRAPPER_IUSERDEFINED_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <doxmlintf.h>

class wrapper_IUserDefined : public IUserDefined, public luna_wrapper_base {

public:
		

	~wrapper_IUserDefined() {
		logDEBUG3("Calling delete function for wrapper IUserDefined");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((IUserDefined*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_IUserDefined(lua_State* L, lua_Table* dum) 
		: IUserDefined(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((IUserDefined*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// const IString * ISection::kindString() const
	const IString * kindString() const {
		THROW_IF(!_obj.pushFunction("kindString"),"No implementation for abstract function ISection::kindString");
		_obj.pushArg((IUserDefined*)this);
		return (_obj.callFunction<IString*>());
	};

	// ISection::SectionKind ISection::kind() const
	ISection::SectionKind kind() const {
		THROW_IF(!_obj.pushFunction("kind"),"No implementation for abstract function ISection::kind");
		_obj.pushArg((IUserDefined*)this);
		return (ISection::SectionKind)(_obj.callFunction<int>());
	};

	// IDocRoot * ISection::description() const
	IDocRoot * description() const {
		THROW_IF(!_obj.pushFunction("description"),"No implementation for abstract function ISection::description");
		_obj.pushArg((IUserDefined*)this);
		return (_obj.callFunction<IDocRoot*>());
	};

	// IMemberIterator * ISection::members() const
	IMemberIterator * members() const {
		THROW_IF(!_obj.pushFunction("members"),"No implementation for abstract function ISection::members");
		_obj.pushArg((IUserDefined*)this);
		return (_obj.callFunction<IMemberIterator*>());
	};

	// bool ISection::isStatic() const
	bool isStatic() const {
		THROW_IF(!_obj.pushFunction("isStatic"),"No implementation for abstract function ISection::isStatic");
		_obj.pushArg((IUserDefined*)this);
		return (_obj.callFunction<bool>());
	};

	// bool ISection::isPublic() const
	bool isPublic() const {
		THROW_IF(!_obj.pushFunction("isPublic"),"No implementation for abstract function ISection::isPublic");
		_obj.pushArg((IUserDefined*)this);
		return (_obj.callFunction<bool>());
	};

	// bool ISection::isPrivate() const
	bool isPrivate() const {
		THROW_IF(!_obj.pushFunction("isPrivate"),"No implementation for abstract function ISection::isPrivate");
		_obj.pushArg((IUserDefined*)this);
		return (_obj.callFunction<bool>());
	};

	// bool ISection::isProtected() const
	bool isProtected() const {
		THROW_IF(!_obj.pushFunction("isProtected"),"No implementation for abstract function ISection::isProtected");
		_obj.pushArg((IUserDefined*)this);
		return (_obj.callFunction<bool>());
	};

	// const IString * IUserDefined::header() const
	const IString * header() const {
		THROW_IF(!_obj.pushFunction("header"),"No implementation for abstract function IUserDefined::header");
		_obj.pushArg((IUserDefined*)this);
		return (_obj.callFunction<IString*>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


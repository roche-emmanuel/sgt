#ifndef _WRAPPERS_WRAPPER_IINTERFACE_H_
#define _WRAPPERS_WRAPPER_IINTERFACE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <doxmlintf.h>

class wrapper_IInterface : public IInterface, public luna_wrapper_base {

public:
		

	~wrapper_IInterface() {
		logDEBUG3("Calling delete function for wrapper IInterface");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((IInterface*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_IInterface(lua_State* L, lua_Table* dum) 
		: IInterface(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((IInterface*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// const IString * ICompound::protection() const
	const IString * protection() const {
		THROW_IF(!_obj.pushFunction("protection"),"No implementation for abstract function ICompound::protection");
		_obj.pushArg((IInterface*)this);
		return (_obj.callFunction<IString*>());
	};

	// const IString * ICompound::name() const
	const IString * name() const {
		THROW_IF(!_obj.pushFunction("name"),"No implementation for abstract function ICompound::name");
		_obj.pushArg((IInterface*)this);
		return (_obj.callFunction<IString*>());
	};

	// const IString * ICompound::id() const
	const IString * id() const {
		THROW_IF(!_obj.pushFunction("id"),"No implementation for abstract function ICompound::id");
		_obj.pushArg((IInterface*)this);
		return (_obj.callFunction<IString*>());
	};

	// ICompound::CompoundKind ICompound::kind() const
	ICompound::CompoundKind kind() const {
		THROW_IF(!_obj.pushFunction("kind"),"No implementation for abstract function ICompound::kind");
		_obj.pushArg((IInterface*)this);
		return (ICompound::CompoundKind)(_obj.callFunction<int>());
	};

	// const IString * ICompound::kindString() const
	const IString * kindString() const {
		THROW_IF(!_obj.pushFunction("kindString"),"No implementation for abstract function ICompound::kindString");
		_obj.pushArg((IInterface*)this);
		return (_obj.callFunction<IString*>());
	};

	// ISectionIterator * ICompound::sections() const
	ISectionIterator * sections() const {
		THROW_IF(!_obj.pushFunction("sections"),"No implementation for abstract function ICompound::sections");
		_obj.pushArg((IInterface*)this);
		return (_obj.callFunction<ISectionIterator*>());
	};

	// IDocRoot * ICompound::briefDescription() const
	IDocRoot * briefDescription() const {
		THROW_IF(!_obj.pushFunction("briefDescription"),"No implementation for abstract function ICompound::briefDescription");
		_obj.pushArg((IInterface*)this);
		return (_obj.callFunction<IDocRoot*>());
	};

	// IDocRoot * ICompound::detailedDescription() const
	IDocRoot * detailedDescription() const {
		THROW_IF(!_obj.pushFunction("detailedDescription"),"No implementation for abstract function ICompound::detailedDescription");
		_obj.pushArg((IInterface*)this);
		return (_obj.callFunction<IDocRoot*>());
	};

	// IMember * ICompound::memberById(const char * id) const
	IMember * memberById(const char * id) const {
		THROW_IF(!_obj.pushFunction("memberById"),"No implementation for abstract function ICompound::memberById");
		_obj.pushArg((IInterface*)this);
		_obj.pushArg(id);
		return (_obj.callFunction<IMember*>());
	};

	// IMemberIterator * ICompound::memberByName(const char * name) const
	IMemberIterator * memberByName(const char * name) const {
		THROW_IF(!_obj.pushFunction("memberByName"),"No implementation for abstract function ICompound::memberByName");
		_obj.pushArg((IInterface*)this);
		_obj.pushArg(name);
		return (_obj.callFunction<IMemberIterator*>());
	};

	// void ICompound::release()
	void release() {
		THROW_IF(!_obj.pushFunction("release"),"No implementation for abstract function ICompound::release");
		_obj.pushArg((IInterface*)this);
		return (_obj.callFunction<void>());
	};

	// IRelatedCompoundIterator * IInterface::baseCompounds() const
	IRelatedCompoundIterator * baseCompounds() const {
		THROW_IF(!_obj.pushFunction("baseCompounds"),"No implementation for abstract function IInterface::baseCompounds");
		_obj.pushArg((IInterface*)this);
		return (_obj.callFunction<IRelatedCompoundIterator*>());
	};

	// IRelatedCompoundIterator * IInterface::derivedCompounds() const
	IRelatedCompoundIterator * derivedCompounds() const {
		THROW_IF(!_obj.pushFunction("derivedCompounds"),"No implementation for abstract function IInterface::derivedCompounds");
		_obj.pushArg((IInterface*)this);
		return (_obj.callFunction<IRelatedCompoundIterator*>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


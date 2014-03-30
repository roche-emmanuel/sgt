#ifndef _WRAPPERS_WRAPPER_ISTRUCT_H_
#define _WRAPPERS_WRAPPER_ISTRUCT_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <doxmlintf.h>

class wrapper_IStruct : public IStruct, public luna_wrapper_base {

public:
		

	~wrapper_IStruct() {
		logDEBUG3("Calling delete function for wrapper IStruct");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((IStruct*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_IStruct(lua_State* L, lua_Table* dum) 
		: IStruct(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((IStruct*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// const IString * ICompound::protection() const
	const IString * protection() const {
		THROW_IF(!_obj.pushFunction("protection"),"No implementation for abstract function ICompound::protection");
		_obj.pushArg((IStruct*)this);
		return (_obj.callFunction<IString*>());
	};

	// const IString * ICompound::name() const
	const IString * name() const {
		THROW_IF(!_obj.pushFunction("name"),"No implementation for abstract function ICompound::name");
		_obj.pushArg((IStruct*)this);
		return (_obj.callFunction<IString*>());
	};

	// const IString * ICompound::id() const
	const IString * id() const {
		THROW_IF(!_obj.pushFunction("id"),"No implementation for abstract function ICompound::id");
		_obj.pushArg((IStruct*)this);
		return (_obj.callFunction<IString*>());
	};

	// ICompound::CompoundKind ICompound::kind() const
	ICompound::CompoundKind kind() const {
		THROW_IF(!_obj.pushFunction("kind"),"No implementation for abstract function ICompound::kind");
		_obj.pushArg((IStruct*)this);
		return (ICompound::CompoundKind)(_obj.callFunction<int>());
	};

	// const IString * ICompound::kindString() const
	const IString * kindString() const {
		THROW_IF(!_obj.pushFunction("kindString"),"No implementation for abstract function ICompound::kindString");
		_obj.pushArg((IStruct*)this);
		return (_obj.callFunction<IString*>());
	};

	// ISectionIterator * ICompound::sections() const
	ISectionIterator * sections() const {
		THROW_IF(!_obj.pushFunction("sections"),"No implementation for abstract function ICompound::sections");
		_obj.pushArg((IStruct*)this);
		return (_obj.callFunction<ISectionIterator*>());
	};

	// IDocRoot * ICompound::briefDescription() const
	IDocRoot * briefDescription() const {
		THROW_IF(!_obj.pushFunction("briefDescription"),"No implementation for abstract function ICompound::briefDescription");
		_obj.pushArg((IStruct*)this);
		return (_obj.callFunction<IDocRoot*>());
	};

	// IDocRoot * ICompound::detailedDescription() const
	IDocRoot * detailedDescription() const {
		THROW_IF(!_obj.pushFunction("detailedDescription"),"No implementation for abstract function ICompound::detailedDescription");
		_obj.pushArg((IStruct*)this);
		return (_obj.callFunction<IDocRoot*>());
	};

	// IMember * ICompound::memberById(const char * id) const
	IMember * memberById(const char * id) const {
		THROW_IF(!_obj.pushFunction("memberById"),"No implementation for abstract function ICompound::memberById");
		_obj.pushArg((IStruct*)this);
		_obj.pushArg(id);
		return (_obj.callFunction<IMember*>());
	};

	// IMemberIterator * ICompound::memberByName(const char * name) const
	IMemberIterator * memberByName(const char * name) const {
		THROW_IF(!_obj.pushFunction("memberByName"),"No implementation for abstract function ICompound::memberByName");
		_obj.pushArg((IStruct*)this);
		_obj.pushArg(name);
		return (_obj.callFunction<IMemberIterator*>());
	};

	// void ICompound::release()
	void release() {
		THROW_IF(!_obj.pushFunction("release"),"No implementation for abstract function ICompound::release");
		_obj.pushArg((IStruct*)this);
		return (_obj.callFunction<void>());
	};

	// ICompoundIterator * IStruct::nestedCompounds() const
	ICompoundIterator * nestedCompounds() const {
		THROW_IF(!_obj.pushFunction("nestedCompounds"),"No implementation for abstract function IStruct::nestedCompounds");
		_obj.pushArg((IStruct*)this);
		return (_obj.callFunction<ICompoundIterator*>());
	};

	// IRelatedCompoundIterator * IStruct::baseCompounds() const
	IRelatedCompoundIterator * baseCompounds() const {
		THROW_IF(!_obj.pushFunction("baseCompounds"),"No implementation for abstract function IStruct::baseCompounds");
		_obj.pushArg((IStruct*)this);
		return (_obj.callFunction<IRelatedCompoundIterator*>());
	};

	// IRelatedCompoundIterator * IStruct::derivedCompounds() const
	IRelatedCompoundIterator * derivedCompounds() const {
		THROW_IF(!_obj.pushFunction("derivedCompounds"),"No implementation for abstract function IStruct::derivedCompounds");
		_obj.pushArg((IStruct*)this);
		return (_obj.callFunction<IRelatedCompoundIterator*>());
	};

	// const IString * IStruct::locationFile() const
	const IString * locationFile() const {
		THROW_IF(!_obj.pushFunction("locationFile"),"No implementation for abstract function IStruct::locationFile");
		_obj.pushArg((IStruct*)this);
		return (_obj.callFunction<IString*>());
	};

	// int IStruct::locationLine() const
	int locationLine() const {
		THROW_IF(!_obj.pushFunction("locationLine"),"No implementation for abstract function IStruct::locationLine");
		_obj.pushArg((IStruct*)this);
		return (_obj.callFunction<int>());
	};

	// int IStruct::locationBodyStartLine() const
	int locationBodyStartLine() const {
		THROW_IF(!_obj.pushFunction("locationBodyStartLine"),"No implementation for abstract function IStruct::locationBodyStartLine");
		_obj.pushArg((IStruct*)this);
		return (_obj.callFunction<int>());
	};

	// int IStruct::locationBodyEndLine() const
	int locationBodyEndLine() const {
		THROW_IF(!_obj.pushFunction("locationBodyEndLine"),"No implementation for abstract function IStruct::locationBodyEndLine");
		_obj.pushArg((IStruct*)this);
		return (_obj.callFunction<int>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


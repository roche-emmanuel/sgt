#ifndef _WRAPPERS_WRAPPER_ICLASS_H_
#define _WRAPPERS_WRAPPER_ICLASS_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <doxmlintf.h>

class wrapper_IClass : public IClass, public luna_wrapper_base {

public:
		

	~wrapper_IClass() {
		logDEBUG3("Calling delete function for wrapper IClass");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((IClass*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_IClass(lua_State* L, lua_Table* dum) 
		: IClass(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((IClass*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// const IString * ICompound::protection() const
	const IString * protection() const {
		THROW_IF(!_obj.pushFunction("protection"),"No implementation for abstract function ICompound::protection");
		_obj.pushArg((IClass*)this);
		return (_obj.callFunction<IString*>());
	};

	// const IString * ICompound::name() const
	const IString * name() const {
		THROW_IF(!_obj.pushFunction("name"),"No implementation for abstract function ICompound::name");
		_obj.pushArg((IClass*)this);
		return (_obj.callFunction<IString*>());
	};

	// const IString * ICompound::id() const
	const IString * id() const {
		THROW_IF(!_obj.pushFunction("id"),"No implementation for abstract function ICompound::id");
		_obj.pushArg((IClass*)this);
		return (_obj.callFunction<IString*>());
	};

	// ICompound::CompoundKind ICompound::kind() const
	ICompound::CompoundKind kind() const {
		THROW_IF(!_obj.pushFunction("kind"),"No implementation for abstract function ICompound::kind");
		_obj.pushArg((IClass*)this);
		return (ICompound::CompoundKind)(_obj.callFunction<int>());
	};

	// const IString * ICompound::kindString() const
	const IString * kindString() const {
		THROW_IF(!_obj.pushFunction("kindString"),"No implementation for abstract function ICompound::kindString");
		_obj.pushArg((IClass*)this);
		return (_obj.callFunction<IString*>());
	};

	// ISectionIterator * ICompound::sections() const
	ISectionIterator * sections() const {
		THROW_IF(!_obj.pushFunction("sections"),"No implementation for abstract function ICompound::sections");
		_obj.pushArg((IClass*)this);
		return (_obj.callFunction<ISectionIterator*>());
	};

	// IDocRoot * ICompound::briefDescription() const
	IDocRoot * briefDescription() const {
		THROW_IF(!_obj.pushFunction("briefDescription"),"No implementation for abstract function ICompound::briefDescription");
		_obj.pushArg((IClass*)this);
		return (_obj.callFunction<IDocRoot*>());
	};

	// IDocRoot * ICompound::detailedDescription() const
	IDocRoot * detailedDescription() const {
		THROW_IF(!_obj.pushFunction("detailedDescription"),"No implementation for abstract function ICompound::detailedDescription");
		_obj.pushArg((IClass*)this);
		return (_obj.callFunction<IDocRoot*>());
	};

	// IMember * ICompound::memberById(const char * id) const
	IMember * memberById(const char * id) const {
		THROW_IF(!_obj.pushFunction("memberById"),"No implementation for abstract function ICompound::memberById");
		_obj.pushArg((IClass*)this);
		_obj.pushArg(id);
		return (_obj.callFunction<IMember*>());
	};

	// IMemberIterator * ICompound::memberByName(const char * name) const
	IMemberIterator * memberByName(const char * name) const {
		THROW_IF(!_obj.pushFunction("memberByName"),"No implementation for abstract function ICompound::memberByName");
		_obj.pushArg((IClass*)this);
		_obj.pushArg(name);
		return (_obj.callFunction<IMemberIterator*>());
	};

	// void ICompound::release()
	void release() {
		THROW_IF(!_obj.pushFunction("release"),"No implementation for abstract function ICompound::release");
		_obj.pushArg((IClass*)this);
		return (_obj.callFunction<void>());
	};

	// IGraph * IClass::inheritanceGraph() const
	IGraph * inheritanceGraph() const {
		THROW_IF(!_obj.pushFunction("inheritanceGraph"),"No implementation for abstract function IClass::inheritanceGraph");
		_obj.pushArg((IClass*)this);
		return (_obj.callFunction<IGraph*>());
	};

	// IGraph * IClass::collaborationGraph() const
	IGraph * collaborationGraph() const {
		THROW_IF(!_obj.pushFunction("collaborationGraph"),"No implementation for abstract function IClass::collaborationGraph");
		_obj.pushArg((IClass*)this);
		return (_obj.callFunction<IGraph*>());
	};

	// IRelatedCompoundIterator * IClass::baseCompounds() const
	IRelatedCompoundIterator * baseCompounds() const {
		THROW_IF(!_obj.pushFunction("baseCompounds"),"No implementation for abstract function IClass::baseCompounds");
		_obj.pushArg((IClass*)this);
		return (_obj.callFunction<IRelatedCompoundIterator*>());
	};

	// IRelatedCompoundIterator * IClass::derivedCompounds() const
	IRelatedCompoundIterator * derivedCompounds() const {
		THROW_IF(!_obj.pushFunction("derivedCompounds"),"No implementation for abstract function IClass::derivedCompounds");
		_obj.pushArg((IClass*)this);
		return (_obj.callFunction<IRelatedCompoundIterator*>());
	};

	// ICompoundIterator * IClass::nestedCompounds() const
	ICompoundIterator * nestedCompounds() const {
		THROW_IF(!_obj.pushFunction("nestedCompounds"),"No implementation for abstract function IClass::nestedCompounds");
		_obj.pushArg((IClass*)this);
		return (_obj.callFunction<ICompoundIterator*>());
	};

	// IParamIterator * IClass::templateParameters() const
	IParamIterator * templateParameters() const {
		THROW_IF(!_obj.pushFunction("templateParameters"),"No implementation for abstract function IClass::templateParameters");
		_obj.pushArg((IClass*)this);
		return (_obj.callFunction<IParamIterator*>());
	};

	// const IString * IClass::locationFile() const
	const IString * locationFile() const {
		THROW_IF(!_obj.pushFunction("locationFile"),"No implementation for abstract function IClass::locationFile");
		_obj.pushArg((IClass*)this);
		return (_obj.callFunction<IString*>());
	};

	// int IClass::locationLine() const
	int locationLine() const {
		THROW_IF(!_obj.pushFunction("locationLine"),"No implementation for abstract function IClass::locationLine");
		_obj.pushArg((IClass*)this);
		return (_obj.callFunction<int>());
	};

	// const IString * IClass::locationBodyFile() const
	const IString * locationBodyFile() const {
		THROW_IF(!_obj.pushFunction("locationBodyFile"),"No implementation for abstract function IClass::locationBodyFile");
		_obj.pushArg((IClass*)this);
		return (_obj.callFunction<IString*>());
	};

	// int IClass::locationBodyStartLine() const
	int locationBodyStartLine() const {
		THROW_IF(!_obj.pushFunction("locationBodyStartLine"),"No implementation for abstract function IClass::locationBodyStartLine");
		_obj.pushArg((IClass*)this);
		return (_obj.callFunction<int>());
	};

	// int IClass::locationBodyEndLine() const
	int locationBodyEndLine() const {
		THROW_IF(!_obj.pushFunction("locationBodyEndLine"),"No implementation for abstract function IClass::locationBodyEndLine");
		_obj.pushArg((IClass*)this);
		return (_obj.callFunction<int>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


#ifndef _WRAPPERS_WRAPPER_ITYPEDEF_H_
#define _WRAPPERS_WRAPPER_ITYPEDEF_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <doxmlintf.h>

class wrapper_ITypedef : public ITypedef, public luna_wrapper_base {

public:
		

	~wrapper_ITypedef() {
		logDEBUG3("Calling delete function for wrapper ITypedef");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((ITypedef*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_ITypedef(lua_State* L, lua_Table* dum) 
		: ITypedef(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((ITypedef*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// ICompound * IMember::compound() const
	ICompound * compound() const {
		THROW_IF(!_obj.pushFunction("compound"),"No implementation for abstract function IMember::compound");
		_obj.pushArg((ITypedef*)this);
		return (_obj.callFunction<ICompound*>());
	};

	// ISection * IMember::section() const
	ISection * section() const {
		THROW_IF(!_obj.pushFunction("section"),"No implementation for abstract function IMember::section");
		_obj.pushArg((ITypedef*)this);
		return (_obj.callFunction<ISection*>());
	};

	// IMember::MemberKind IMember::kind() const
	IMember::MemberKind kind() const {
		THROW_IF(!_obj.pushFunction("kind"),"No implementation for abstract function IMember::kind");
		_obj.pushArg((ITypedef*)this);
		return (IMember::MemberKind)(_obj.callFunction<int>());
	};

	// const IString * IMember::kindString() const
	const IString * kindString() const {
		THROW_IF(!_obj.pushFunction("kindString"),"No implementation for abstract function IMember::kindString");
		_obj.pushArg((ITypedef*)this);
		return (_obj.callFunction<IString*>());
	};

	// const IString * IMember::id() const
	const IString * id() const {
		THROW_IF(!_obj.pushFunction("id"),"No implementation for abstract function IMember::id");
		_obj.pushArg((ITypedef*)this);
		return (_obj.callFunction<IString*>());
	};

	// const IString * IMember::protection() const
	const IString * protection() const {
		THROW_IF(!_obj.pushFunction("protection"),"No implementation for abstract function IMember::protection");
		_obj.pushArg((ITypedef*)this);
		return (_obj.callFunction<IString*>());
	};

	// const IString * IMember::virtualness() const
	const IString * virtualness() const {
		THROW_IF(!_obj.pushFunction("virtualness"),"No implementation for abstract function IMember::virtualness");
		_obj.pushArg((ITypedef*)this);
		return (_obj.callFunction<IString*>());
	};

	// ILinkedTextIterator * IMember::type() const
	ILinkedTextIterator * type() const {
		THROW_IF(!_obj.pushFunction("type"),"No implementation for abstract function IMember::type");
		_obj.pushArg((ITypedef*)this);
		return (_obj.callFunction<ILinkedTextIterator*>());
	};

	// const IString * IMember::typeString() const
	const IString * typeString() const {
		THROW_IF(!_obj.pushFunction("typeString"),"No implementation for abstract function IMember::typeString");
		_obj.pushArg((ITypedef*)this);
		return (_obj.callFunction<IString*>());
	};

	// const IString * IMember::name() const
	const IString * name() const {
		THROW_IF(!_obj.pushFunction("name"),"No implementation for abstract function IMember::name");
		_obj.pushArg((ITypedef*)this);
		return (_obj.callFunction<IString*>());
	};

	// const IString * IMember::readAccessor() const
	const IString * readAccessor() const {
		THROW_IF(!_obj.pushFunction("readAccessor"),"No implementation for abstract function IMember::readAccessor");
		_obj.pushArg((ITypedef*)this);
		return (_obj.callFunction<IString*>());
	};

	// const IString * IMember::writeAccessor() const
	const IString * writeAccessor() const {
		THROW_IF(!_obj.pushFunction("writeAccessor"),"No implementation for abstract function IMember::writeAccessor");
		_obj.pushArg((ITypedef*)this);
		return (_obj.callFunction<IString*>());
	};

	// const IString * IMember::definition() const
	const IString * definition() const {
		THROW_IF(!_obj.pushFunction("definition"),"No implementation for abstract function IMember::definition");
		_obj.pushArg((ITypedef*)this);
		return (_obj.callFunction<IString*>());
	};

	// const IString * IMember::argsstring() const
	const IString * argsstring() const {
		THROW_IF(!_obj.pushFunction("argsstring"),"No implementation for abstract function IMember::argsstring");
		_obj.pushArg((ITypedef*)this);
		return (_obj.callFunction<IString*>());
	};

	// bool IMember::isConst() const
	bool isConst() const {
		THROW_IF(!_obj.pushFunction("isConst"),"No implementation for abstract function IMember::isConst");
		_obj.pushArg((ITypedef*)this);
		return (_obj.callFunction<bool>());
	};

	// bool IMember::isVolatile() const
	bool isVolatile() const {
		THROW_IF(!_obj.pushFunction("isVolatile"),"No implementation for abstract function IMember::isVolatile");
		_obj.pushArg((ITypedef*)this);
		return (_obj.callFunction<bool>());
	};

	// bool IMember::isStatic() const
	bool isStatic() const {
		THROW_IF(!_obj.pushFunction("isStatic"),"No implementation for abstract function IMember::isStatic");
		_obj.pushArg((ITypedef*)this);
		return (_obj.callFunction<bool>());
	};

	// bool IMember::isExplicit() const
	bool isExplicit() const {
		THROW_IF(!_obj.pushFunction("isExplicit"),"No implementation for abstract function IMember::isExplicit");
		_obj.pushArg((ITypedef*)this);
		return (_obj.callFunction<bool>());
	};

	// bool IMember::isInline() const
	bool isInline() const {
		THROW_IF(!_obj.pushFunction("isInline"),"No implementation for abstract function IMember::isInline");
		_obj.pushArg((ITypedef*)this);
		return (_obj.callFunction<bool>());
	};

	// bool IMember::isMutable() const
	bool isMutable() const {
		THROW_IF(!_obj.pushFunction("isMutable"),"No implementation for abstract function IMember::isMutable");
		_obj.pushArg((ITypedef*)this);
		return (_obj.callFunction<bool>());
	};

	// bool IMember::isReadable() const
	bool isReadable() const {
		THROW_IF(!_obj.pushFunction("isReadable"),"No implementation for abstract function IMember::isReadable");
		_obj.pushArg((ITypedef*)this);
		return (_obj.callFunction<bool>());
	};

	// bool IMember::isWritable() const
	bool isWritable() const {
		THROW_IF(!_obj.pushFunction("isWritable"),"No implementation for abstract function IMember::isWritable");
		_obj.pushArg((ITypedef*)this);
		return (_obj.callFunction<bool>());
	};

	// IParamIterator * IMember::parameters() const
	IParamIterator * parameters() const {
		THROW_IF(!_obj.pushFunction("parameters"),"No implementation for abstract function IMember::parameters");
		_obj.pushArg((ITypedef*)this);
		return (_obj.callFunction<IParamIterator*>());
	};

	// IParamIterator * IMember::templateParameters() const
	IParamIterator * templateParameters() const {
		THROW_IF(!_obj.pushFunction("templateParameters"),"No implementation for abstract function IMember::templateParameters");
		_obj.pushArg((ITypedef*)this);
		return (_obj.callFunction<IParamIterator*>());
	};

	// ILinkedTextIterator * IMember::initializer() const
	ILinkedTextIterator * initializer() const {
		THROW_IF(!_obj.pushFunction("initializer"),"No implementation for abstract function IMember::initializer");
		_obj.pushArg((ITypedef*)this);
		return (_obj.callFunction<ILinkedTextIterator*>());
	};

	// ILinkedTextIterator * IMember::exceptions() const
	ILinkedTextIterator * exceptions() const {
		THROW_IF(!_obj.pushFunction("exceptions"),"No implementation for abstract function IMember::exceptions");
		_obj.pushArg((ITypedef*)this);
		return (_obj.callFunction<ILinkedTextIterator*>());
	};

	// IMemberReferenceIterator * IMember::references() const
	IMemberReferenceIterator * references() const {
		THROW_IF(!_obj.pushFunction("references"),"No implementation for abstract function IMember::references");
		_obj.pushArg((ITypedef*)this);
		return (_obj.callFunction<IMemberReferenceIterator*>());
	};

	// IMemberReferenceIterator * IMember::referencedBy() const
	IMemberReferenceIterator * referencedBy() const {
		THROW_IF(!_obj.pushFunction("referencedBy"),"No implementation for abstract function IMember::referencedBy");
		_obj.pushArg((ITypedef*)this);
		return (_obj.callFunction<IMemberReferenceIterator*>());
	};

	// const IString * IMember::bodyFile() const
	const IString * bodyFile() const {
		THROW_IF(!_obj.pushFunction("bodyFile"),"No implementation for abstract function IMember::bodyFile");
		_obj.pushArg((ITypedef*)this);
		return (_obj.callFunction<IString*>());
	};

	// int IMember::bodyStart() const
	int bodyStart() const {
		THROW_IF(!_obj.pushFunction("bodyStart"),"No implementation for abstract function IMember::bodyStart");
		_obj.pushArg((ITypedef*)this);
		return (_obj.callFunction<int>());
	};

	// int IMember::bodyEnd() const
	int bodyEnd() const {
		THROW_IF(!_obj.pushFunction("bodyEnd"),"No implementation for abstract function IMember::bodyEnd");
		_obj.pushArg((ITypedef*)this);
		return (_obj.callFunction<int>());
	};

	// const IString * IMember::definitionFile() const
	const IString * definitionFile() const {
		THROW_IF(!_obj.pushFunction("definitionFile"),"No implementation for abstract function IMember::definitionFile");
		_obj.pushArg((ITypedef*)this);
		return (_obj.callFunction<IString*>());
	};

	// int IMember::definitionLine() const
	int definitionLine() const {
		THROW_IF(!_obj.pushFunction("definitionLine"),"No implementation for abstract function IMember::definitionLine");
		_obj.pushArg((ITypedef*)this);
		return (_obj.callFunction<int>());
	};

	// IMemberReference * IMember::reimplements() const
	IMemberReference * reimplements() const {
		THROW_IF(!_obj.pushFunction("reimplements"),"No implementation for abstract function IMember::reimplements");
		_obj.pushArg((ITypedef*)this);
		return (_obj.callFunction<IMemberReference*>());
	};

	// IMemberReferenceIterator * IMember::reimplementedBy() const
	IMemberReferenceIterator * reimplementedBy() const {
		THROW_IF(!_obj.pushFunction("reimplementedBy"),"No implementation for abstract function IMember::reimplementedBy");
		_obj.pushArg((ITypedef*)this);
		return (_obj.callFunction<IMemberReferenceIterator*>());
	};

	// IDocRoot * IMember::briefDescription() const
	IDocRoot * briefDescription() const {
		THROW_IF(!_obj.pushFunction("briefDescription"),"No implementation for abstract function IMember::briefDescription");
		_obj.pushArg((ITypedef*)this);
		return (_obj.callFunction<IDocRoot*>());
	};

	// IDocRoot * IMember::detailedDescription() const
	IDocRoot * detailedDescription() const {
		THROW_IF(!_obj.pushFunction("detailedDescription"),"No implementation for abstract function IMember::detailedDescription");
		_obj.pushArg((ITypedef*)this);
		return (_obj.callFunction<IDocRoot*>());
	};

	// IDocRoot * IMember::inbodyDescription() const
	IDocRoot * inbodyDescription() const {
		THROW_IF(!_obj.pushFunction("inbodyDescription"),"No implementation for abstract function IMember::inbodyDescription");
		_obj.pushArg((ITypedef*)this);
		return (_obj.callFunction<IDocRoot*>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


#ifndef _WRAPPERS_WRAPPER_IFILE_H_
#define _WRAPPERS_WRAPPER_IFILE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <doxmlintf.h>

class wrapper_IFile : public IFile, public luna_wrapper_base {

public:
		

	~wrapper_IFile() {
		logDEBUG3("Calling delete function for wrapper IFile");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((IFile*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_IFile(lua_State* L, lua_Table* dum) 
		: IFile(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((IFile*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// const IString * ICompound::protection() const
	const IString * protection() const {
		THROW_IF(!_obj.pushFunction("protection"),"No implementation for abstract function ICompound::protection");
		_obj.pushArg((IFile*)this);
		return (_obj.callFunction<IString*>());
	};

	// const IString * ICompound::name() const
	const IString * name() const {
		THROW_IF(!_obj.pushFunction("name"),"No implementation for abstract function ICompound::name");
		_obj.pushArg((IFile*)this);
		return (_obj.callFunction<IString*>());
	};

	// const IString * ICompound::id() const
	const IString * id() const {
		THROW_IF(!_obj.pushFunction("id"),"No implementation for abstract function ICompound::id");
		_obj.pushArg((IFile*)this);
		return (_obj.callFunction<IString*>());
	};

	// ICompound::CompoundKind ICompound::kind() const
	ICompound::CompoundKind kind() const {
		THROW_IF(!_obj.pushFunction("kind"),"No implementation for abstract function ICompound::kind");
		_obj.pushArg((IFile*)this);
		return (ICompound::CompoundKind)(_obj.callFunction<int>());
	};

	// const IString * ICompound::kindString() const
	const IString * kindString() const {
		THROW_IF(!_obj.pushFunction("kindString"),"No implementation for abstract function ICompound::kindString");
		_obj.pushArg((IFile*)this);
		return (_obj.callFunction<IString*>());
	};

	// ISectionIterator * ICompound::sections() const
	ISectionIterator * sections() const {
		THROW_IF(!_obj.pushFunction("sections"),"No implementation for abstract function ICompound::sections");
		_obj.pushArg((IFile*)this);
		return (_obj.callFunction<ISectionIterator*>());
	};

	// IDocRoot * ICompound::briefDescription() const
	IDocRoot * briefDescription() const {
		THROW_IF(!_obj.pushFunction("briefDescription"),"No implementation for abstract function ICompound::briefDescription");
		_obj.pushArg((IFile*)this);
		return (_obj.callFunction<IDocRoot*>());
	};

	// IDocRoot * ICompound::detailedDescription() const
	IDocRoot * detailedDescription() const {
		THROW_IF(!_obj.pushFunction("detailedDescription"),"No implementation for abstract function ICompound::detailedDescription");
		_obj.pushArg((IFile*)this);
		return (_obj.callFunction<IDocRoot*>());
	};

	// IMember * ICompound::memberById(const char * id) const
	IMember * memberById(const char * id) const {
		THROW_IF(!_obj.pushFunction("memberById"),"No implementation for abstract function ICompound::memberById");
		_obj.pushArg((IFile*)this);
		_obj.pushArg(id);
		return (_obj.callFunction<IMember*>());
	};

	// IMemberIterator * ICompound::memberByName(const char * name) const
	IMemberIterator * memberByName(const char * name) const {
		THROW_IF(!_obj.pushFunction("memberByName"),"No implementation for abstract function ICompound::memberByName");
		_obj.pushArg((IFile*)this);
		_obj.pushArg(name);
		return (_obj.callFunction<IMemberIterator*>());
	};

	// void ICompound::release()
	void release() {
		THROW_IF(!_obj.pushFunction("release"),"No implementation for abstract function ICompound::release");
		_obj.pushArg((IFile*)this);
		return (_obj.callFunction<void>());
	};

	// IGraph * IFile::includeDependencyGraph() const
	IGraph * includeDependencyGraph() const {
		THROW_IF(!_obj.pushFunction("includeDependencyGraph"),"No implementation for abstract function IFile::includeDependencyGraph");
		_obj.pushArg((IFile*)this);
		return (_obj.callFunction<IGraph*>());
	};

	// IGraph * IFile::includedByDependencyGraph() const
	IGraph * includedByDependencyGraph() const {
		THROW_IF(!_obj.pushFunction("includedByDependencyGraph"),"No implementation for abstract function IFile::includedByDependencyGraph");
		_obj.pushArg((IFile*)this);
		return (_obj.callFunction<IGraph*>());
	};

	// IDocProgramListing * IFile::source() const
	IDocProgramListing * source() const {
		THROW_IF(!_obj.pushFunction("source"),"No implementation for abstract function IFile::source");
		_obj.pushArg((IFile*)this);
		return (_obj.callFunction<IDocProgramListing*>());
	};

	// ICompoundIterator * IFile::nestedCompounds() const
	ICompoundIterator * nestedCompounds() const {
		THROW_IF(!_obj.pushFunction("nestedCompounds"),"No implementation for abstract function IFile::nestedCompounds");
		_obj.pushArg((IFile*)this);
		return (_obj.callFunction<ICompoundIterator*>());
	};

	// IIncludeIterator * IFile::includes() const
	IIncludeIterator * includes() const {
		THROW_IF(!_obj.pushFunction("includes"),"No implementation for abstract function IFile::includes");
		_obj.pushArg((IFile*)this);
		return (_obj.callFunction<IIncludeIterator*>());
	};

	// IIncludeIterator * IFile::includedBy() const
	IIncludeIterator * includedBy() const {
		THROW_IF(!_obj.pushFunction("includedBy"),"No implementation for abstract function IFile::includedBy");
		_obj.pushArg((IFile*)this);
		return (_obj.callFunction<IIncludeIterator*>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


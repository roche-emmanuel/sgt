#ifndef _WRAPPERS_WRAPPER_IDOXYGEN_H_
#define _WRAPPERS_WRAPPER_IDOXYGEN_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <doxmlintf.h>

class wrapper_IDoxygen : public IDoxygen, public luna_wrapper_base {

public:
		

	~wrapper_IDoxygen() {
		logDEBUG3("Calling delete function for wrapper IDoxygen");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((IDoxygen*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_IDoxygen(lua_State* L, lua_Table* dum) 
		: IDoxygen(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((IDoxygen*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// ICompoundIterator * IDoxygen::compounds() const
	ICompoundIterator * compounds() const {
		THROW_IF(!_obj.pushFunction("compounds"),"No implementation for abstract function IDoxygen::compounds");
		_obj.pushArg((IDoxygen*)this);
		return (_obj.callFunction<ICompoundIterator*>());
	};

	// ICompound * IDoxygen::compoundById(const char * id) const
	ICompound * compoundById(const char * id) const {
		THROW_IF(!_obj.pushFunction("compoundById"),"No implementation for abstract function IDoxygen::compoundById");
		_obj.pushArg((IDoxygen*)this);
		_obj.pushArg(id);
		return (_obj.callFunction<ICompound*>());
	};

	// ICompound * IDoxygen::compoundByName(const char * name) const
	ICompound * compoundByName(const char * name) const {
		THROW_IF(!_obj.pushFunction("compoundByName"),"No implementation for abstract function IDoxygen::compoundByName");
		_obj.pushArg((IDoxygen*)this);
		_obj.pushArg(name);
		return (_obj.callFunction<ICompound*>());
	};

	// ICompound * IDoxygen::memberById(const char * id) const
	ICompound * memberById(const char * id) const {
		THROW_IF(!_obj.pushFunction("memberById"),"No implementation for abstract function IDoxygen::memberById");
		_obj.pushArg((IDoxygen*)this);
		_obj.pushArg(id);
		return (_obj.callFunction<ICompound*>());
	};

	// ICompoundIterator * IDoxygen::memberByName(const char * name) const
	ICompoundIterator * memberByName(const char * name) const {
		THROW_IF(!_obj.pushFunction("memberByName"),"No implementation for abstract function IDoxygen::memberByName");
		_obj.pushArg((IDoxygen*)this);
		_obj.pushArg(name);
		return (_obj.callFunction<ICompoundIterator*>());
	};

	// void IDoxygen::release()
	void release() {
		THROW_IF(!_obj.pushFunction("release"),"No implementation for abstract function IDoxygen::release");
		_obj.pushArg((IDoxygen*)this);
		return (_obj.callFunction<void>());
	};

	// void IDoxygen::setDebugLevel(int level)
	void setDebugLevel(int level) {
		THROW_IF(!_obj.pushFunction("setDebugLevel"),"No implementation for abstract function IDoxygen::setDebugLevel");
		_obj.pushArg((IDoxygen*)this);
		_obj.pushArg(level);
		return (_obj.callFunction<void>());
	};

	// bool IDoxygen::readXMLDir(const char * xmlDirName)
	bool readXMLDir(const char * xmlDirName) {
		THROW_IF(!_obj.pushFunction("readXMLDir"),"No implementation for abstract function IDoxygen::readXMLDir");
		_obj.pushArg((IDoxygen*)this);
		_obj.pushArg(xmlDirName);
		return (_obj.callFunction<bool>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


#ifndef _WRAPPERS_WRAPPER_IDOCTABLE_H_
#define _WRAPPERS_WRAPPER_IDOCTABLE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <doxmlintf.h>

class wrapper_IDocTable : public IDocTable, public luna_wrapper_base {

public:
		

	~wrapper_IDocTable() {
		logDEBUG3("Calling delete function for wrapper IDocTable");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((IDocTable*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_IDocTable(lua_State* L, lua_Table* dum) 
		: IDocTable(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((IDocTable*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// IDoc::Kind IDoc::kind() const
	IDoc::Kind kind() const {
		THROW_IF(!_obj.pushFunction("kind"),"No implementation for abstract function IDoc::kind");
		_obj.pushArg((IDocTable*)this);
		return (IDoc::Kind)(_obj.callFunction<int>());
	};

	// IDocIterator * IDocTable::rows() const
	IDocIterator * rows() const {
		THROW_IF(!_obj.pushFunction("rows"),"No implementation for abstract function IDocTable::rows");
		_obj.pushArg((IDocTable*)this);
		return (_obj.callFunction<IDocIterator*>());
	};

	// int IDocTable::numColumns() const
	int numColumns() const {
		THROW_IF(!_obj.pushFunction("numColumns"),"No implementation for abstract function IDocTable::numColumns");
		_obj.pushArg((IDocTable*)this);
		return (_obj.callFunction<int>());
	};

	// const IString * IDocTable::caption() const
	const IString * caption() const {
		THROW_IF(!_obj.pushFunction("caption"),"No implementation for abstract function IDocTable::caption");
		_obj.pushArg((IDocTable*)this);
		return (_obj.callFunction<IString*>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


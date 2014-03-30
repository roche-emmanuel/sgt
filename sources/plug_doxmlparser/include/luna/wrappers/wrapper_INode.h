#ifndef _WRAPPERS_WRAPPER_INODE_H_
#define _WRAPPERS_WRAPPER_INODE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <doxmlintf.h>

class wrapper_INode : public INode, public luna_wrapper_base {

public:
		

	~wrapper_INode() {
		logDEBUG3("Calling delete function for wrapper INode");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((INode*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_INode(lua_State* L, lua_Table* dum) 
		: INode(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((INode*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// const IString * INode::id() const
	const IString * id() const {
		THROW_IF(!_obj.pushFunction("id"),"No implementation for abstract function INode::id");
		_obj.pushArg((INode*)this);
		return (_obj.callFunction<IString*>());
	};

	// const IString * INode::label() const
	const IString * label() const {
		THROW_IF(!_obj.pushFunction("label"),"No implementation for abstract function INode::label");
		_obj.pushArg((INode*)this);
		return (_obj.callFunction<IString*>());
	};

	// const IString * INode::linkId() const
	const IString * linkId() const {
		THROW_IF(!_obj.pushFunction("linkId"),"No implementation for abstract function INode::linkId");
		_obj.pushArg((INode*)this);
		return (_obj.callFunction<IString*>());
	};

	// IChildNodeIterator * INode::children() const
	IChildNodeIterator * children() const {
		THROW_IF(!_obj.pushFunction("children"),"No implementation for abstract function INode::children");
		_obj.pushArg((INode*)this);
		return (_obj.callFunction<IChildNodeIterator*>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


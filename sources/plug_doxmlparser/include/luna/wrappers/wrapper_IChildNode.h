#ifndef _WRAPPERS_WRAPPER_ICHILDNODE_H_
#define _WRAPPERS_WRAPPER_ICHILDNODE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <doxmlintf.h>

class wrapper_IChildNode : public IChildNode, public luna_wrapper_base {

public:
		

	~wrapper_IChildNode() {
		logDEBUG3("Calling delete function for wrapper IChildNode");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((IChildNode*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_IChildNode(lua_State* L, lua_Table* dum) 
		: IChildNode(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((IChildNode*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// INode * IChildNode::node() const
	INode * node() const {
		THROW_IF(!_obj.pushFunction("node"),"No implementation for abstract function IChildNode::node");
		_obj.pushArg((IChildNode*)this);
		return (_obj.callFunction<INode*>());
	};

	// IChildNode::NodeRelation IChildNode::relation() const
	IChildNode::NodeRelation relation() const {
		THROW_IF(!_obj.pushFunction("relation"),"No implementation for abstract function IChildNode::relation");
		_obj.pushArg((IChildNode*)this);
		return (IChildNode::NodeRelation)(_obj.callFunction<int>());
	};

	// const IString * IChildNode::relationString() const
	const IString * relationString() const {
		THROW_IF(!_obj.pushFunction("relationString"),"No implementation for abstract function IChildNode::relationString");
		_obj.pushArg((IChildNode*)this);
		return (_obj.callFunction<IString*>());
	};

	// IEdgeLabelIterator * IChildNode::edgeLabels() const
	IEdgeLabelIterator * edgeLabels() const {
		THROW_IF(!_obj.pushFunction("edgeLabels"),"No implementation for abstract function IChildNode::edgeLabels");
		_obj.pushArg((IChildNode*)this);
		return (_obj.callFunction<IEdgeLabelIterator*>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


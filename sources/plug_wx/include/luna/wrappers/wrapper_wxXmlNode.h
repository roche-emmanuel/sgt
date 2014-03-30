#ifndef _WRAPPERS_WRAPPER_WXXMLNODE_H_
#define _WRAPPERS_WRAPPER_WXXMLNODE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/xml/xml.h>

class wrapper_wxXmlNode : public wxXmlNode, public luna_wrapper_base {

public:
		

	~wrapper_wxXmlNode() {
		logDEBUG3("Calling delete function for wrapper wxXmlNode");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxXmlNode*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxXmlNode(lua_State* L, lua_Table* dum, wxXmlNode * parent, wxXmlNodeType type, const wxString & name, const wxString & content = wxEmptyString, wxXmlAttribute * attrs = NULL, wxXmlNode * next = NULL, int lineNo = -1) 
		: wxXmlNode(parent, type, name, content, attrs, next, lineNo), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxXmlNode*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxXmlNode(lua_State* L, lua_Table* dum, wxXmlNodeType type, const wxString & name, const wxString & content = wxEmptyString, int lineNo = -1) 
		: wxXmlNode(type, name, content, lineNo), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxXmlNode*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxXmlNode(lua_State* L, lua_Table* dum, const wxXmlNode & node) 
		: wxXmlNode(node), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxXmlNode*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void wxXmlNode::AddAttribute(const wxString & name, const wxString & value)
	void AddAttribute(const wxString & name, const wxString & value) {
		if(_obj.pushFunction("AddAttribute")) {
			_obj.pushArg((wxXmlNode*)this);
			_obj.pushArg(name);
			_obj.pushArg(value);
			return (_obj.callFunction<void>());
		}

		return wxXmlNode::AddAttribute(name, value);
	};

	// void wxXmlNode::AddAttribute(wxXmlAttribute * attr)
	void AddAttribute(wxXmlAttribute * attr) {
		if(_obj.pushFunction("AddAttribute")) {
			_obj.pushArg((wxXmlNode*)this);
			_obj.pushArg(attr);
			return (_obj.callFunction<void>());
		}

		return wxXmlNode::AddAttribute(attr);
	};

	// void wxXmlNode::AddChild(wxXmlNode * child)
	void AddChild(wxXmlNode * child) {
		if(_obj.pushFunction("AddChild")) {
			_obj.pushArg((wxXmlNode*)this);
			_obj.pushArg(child);
			return (_obj.callFunction<void>());
		}

		return wxXmlNode::AddChild(child);
	};

	// bool wxXmlNode::DeleteAttribute(const wxString & name)
	bool DeleteAttribute(const wxString & name) {
		if(_obj.pushFunction("DeleteAttribute")) {
			_obj.pushArg((wxXmlNode*)this);
			_obj.pushArg(name);
			return (_obj.callFunction<bool>());
		}

		return wxXmlNode::DeleteAttribute(name);
	};

	// bool wxXmlNode::InsertChild(wxXmlNode * child, wxXmlNode * followingNode)
	bool InsertChild(wxXmlNode * child, wxXmlNode * followingNode) {
		if(_obj.pushFunction("InsertChild")) {
			_obj.pushArg((wxXmlNode*)this);
			_obj.pushArg(child);
			_obj.pushArg(followingNode);
			return (_obj.callFunction<bool>());
		}

		return wxXmlNode::InsertChild(child, followingNode);
	};

	// bool wxXmlNode::InsertChildAfter(wxXmlNode * child, wxXmlNode * precedingNode)
	bool InsertChildAfter(wxXmlNode * child, wxXmlNode * precedingNode) {
		if(_obj.pushFunction("InsertChildAfter")) {
			_obj.pushArg((wxXmlNode*)this);
			_obj.pushArg(child);
			_obj.pushArg(precedingNode);
			return (_obj.callFunction<bool>());
		}

		return wxXmlNode::InsertChildAfter(child, precedingNode);
	};

	// bool wxXmlNode::RemoveChild(wxXmlNode * child)
	bool RemoveChild(wxXmlNode * child) {
		if(_obj.pushFunction("RemoveChild")) {
			_obj.pushArg((wxXmlNode*)this);
			_obj.pushArg(child);
			return (_obj.callFunction<bool>());
		}

		return wxXmlNode::RemoveChild(child);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


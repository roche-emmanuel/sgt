#ifndef _WRAPPERS_WRAPPER_TIXMLVISITOR_H_
#define _WRAPPERS_WRAPPER_TIXMLVISITOR_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <ork/resource/tinyxml.h>

class wrapper_TiXmlVisitor : public TiXmlVisitor, public luna_wrapper_base {

public:
		

	~wrapper_TiXmlVisitor() {
		logDEBUG3("Calling delete function for wrapper TiXmlVisitor");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((TiXmlVisitor*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_TiXmlVisitor(lua_State* L, lua_Table* dum) 
		: TiXmlVisitor(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((TiXmlVisitor*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// bool TiXmlVisitor::VisitEnter(const TiXmlDocument & arg1)
	bool VisitEnter(const TiXmlDocument & arg1) {
		if(_obj.pushFunction("VisitEnter")) {
			_obj.pushArg((TiXmlVisitor*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<bool>());
		}

		return TiXmlVisitor::VisitEnter(arg1);
	};

	// bool TiXmlVisitor::VisitExit(const TiXmlDocument & arg1)
	bool VisitExit(const TiXmlDocument & arg1) {
		if(_obj.pushFunction("VisitExit")) {
			_obj.pushArg((TiXmlVisitor*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<bool>());
		}

		return TiXmlVisitor::VisitExit(arg1);
	};

	// bool TiXmlVisitor::VisitEnter(const TiXmlElement & arg1, const TiXmlAttribute * arg2)
	bool VisitEnter(const TiXmlElement & arg1, const TiXmlAttribute * arg2) {
		if(_obj.pushFunction("VisitEnter")) {
			_obj.pushArg((TiXmlVisitor*)this);
			_obj.pushArg(&arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<bool>());
		}

		return TiXmlVisitor::VisitEnter(arg1, arg2);
	};

	// bool TiXmlVisitor::VisitExit(const TiXmlElement & arg1)
	bool VisitExit(const TiXmlElement & arg1) {
		if(_obj.pushFunction("VisitExit")) {
			_obj.pushArg((TiXmlVisitor*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<bool>());
		}

		return TiXmlVisitor::VisitExit(arg1);
	};

	// bool TiXmlVisitor::Visit(const TiXmlDeclaration & arg1)
	bool Visit(const TiXmlDeclaration & arg1) {
		if(_obj.pushFunction("Visit")) {
			_obj.pushArg((TiXmlVisitor*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<bool>());
		}

		return TiXmlVisitor::Visit(arg1);
	};

	// bool TiXmlVisitor::Visit(const TiXmlText & arg1)
	bool Visit(const TiXmlText & arg1) {
		if(_obj.pushFunction("Visit")) {
			_obj.pushArg((TiXmlVisitor*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<bool>());
		}

		return TiXmlVisitor::Visit(arg1);
	};

	// bool TiXmlVisitor::Visit(const TiXmlComment & arg1)
	bool Visit(const TiXmlComment & arg1) {
		if(_obj.pushFunction("Visit")) {
			_obj.pushArg((TiXmlVisitor*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<bool>());
		}

		return TiXmlVisitor::Visit(arg1);
	};

	// bool TiXmlVisitor::Visit(const TiXmlUnknown & arg1)
	bool Visit(const TiXmlUnknown & arg1) {
		if(_obj.pushFunction("Visit")) {
			_obj.pushArg((TiXmlVisitor*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<bool>());
		}

		return TiXmlVisitor::Visit(arg1);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


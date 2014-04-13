#ifndef _WRAPPERS_WRAPPER_TIXMLPRINTER_H_
#define _WRAPPERS_WRAPPER_TIXMLPRINTER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <ork/resource/tinyxml.h>

class wrapper_TiXmlPrinter : public TiXmlPrinter, public luna_wrapper_base {

public:
		

	~wrapper_TiXmlPrinter() {
		logDEBUG3("Calling delete function for wrapper TiXmlPrinter");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((TiXmlPrinter*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_TiXmlPrinter(lua_State* L, lua_Table* dum) 
		: TiXmlPrinter(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((TiXmlPrinter*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// bool TiXmlPrinter::VisitEnter(const TiXmlDocument & arg1)
	bool VisitEnter(const TiXmlDocument & arg1) {
		if(_obj.pushFunction("VisitEnter")) {
			_obj.pushArg((TiXmlPrinter*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<bool>());
		}

		return TiXmlPrinter::VisitEnter(arg1);
	};

	// bool TiXmlPrinter::VisitExit(const TiXmlDocument & arg1)
	bool VisitExit(const TiXmlDocument & arg1) {
		if(_obj.pushFunction("VisitExit")) {
			_obj.pushArg((TiXmlPrinter*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<bool>());
		}

		return TiXmlPrinter::VisitExit(arg1);
	};

	// bool TiXmlPrinter::VisitEnter(const TiXmlElement & arg1, const TiXmlAttribute * arg2)
	bool VisitEnter(const TiXmlElement & arg1, const TiXmlAttribute * arg2) {
		if(_obj.pushFunction("VisitEnter")) {
			_obj.pushArg((TiXmlPrinter*)this);
			_obj.pushArg(&arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<bool>());
		}

		return TiXmlPrinter::VisitEnter(arg1, arg2);
	};

	// bool TiXmlPrinter::VisitExit(const TiXmlElement & arg1)
	bool VisitExit(const TiXmlElement & arg1) {
		if(_obj.pushFunction("VisitExit")) {
			_obj.pushArg((TiXmlPrinter*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<bool>());
		}

		return TiXmlPrinter::VisitExit(arg1);
	};

	// bool TiXmlPrinter::Visit(const TiXmlDeclaration & arg1)
	bool Visit(const TiXmlDeclaration & arg1) {
		if(_obj.pushFunction("Visit")) {
			_obj.pushArg((TiXmlPrinter*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<bool>());
		}

		return TiXmlPrinter::Visit(arg1);
	};

	// bool TiXmlPrinter::Visit(const TiXmlText & arg1)
	bool Visit(const TiXmlText & arg1) {
		if(_obj.pushFunction("Visit")) {
			_obj.pushArg((TiXmlPrinter*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<bool>());
		}

		return TiXmlPrinter::Visit(arg1);
	};

	// bool TiXmlPrinter::Visit(const TiXmlComment & arg1)
	bool Visit(const TiXmlComment & arg1) {
		if(_obj.pushFunction("Visit")) {
			_obj.pushArg((TiXmlPrinter*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<bool>());
		}

		return TiXmlPrinter::Visit(arg1);
	};

	// bool TiXmlPrinter::Visit(const TiXmlUnknown & arg1)
	bool Visit(const TiXmlUnknown & arg1) {
		if(_obj.pushFunction("Visit")) {
			_obj.pushArg((TiXmlPrinter*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<bool>());
		}

		return TiXmlPrinter::Visit(arg1);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


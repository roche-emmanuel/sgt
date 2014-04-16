#ifndef _WRAPPERS_WRAPPER_PROLAND_MARGIN_H_
#define _WRAPPERS_WRAPPER_PROLAND_MARGIN_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <W:/Cloud/Projects/sgt/sources/proland/sources/graph/proland/graph/Margin.h>

class wrapper_proland_Margin : public proland::Margin, public luna_wrapper_base {

public:
		

	~wrapper_proland_Margin() {
		logDEBUG3("Calling delete function for wrapper proland_Margin");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::Margin*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_Margin(lua_State* L, lua_Table* dum) 
		: proland::Margin(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::Margin*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// double proland::Margin::getMargin(double clipSize)
	double getMargin(double clipSize) {
		THROW_IF(!_obj.pushFunction("getMargin"),"No implementation for abstract function proland::Margin::getMargin");
		_obj.pushArg((proland::Margin*)this);
		_obj.pushArg(clipSize);
		return (_obj.callFunction<double>());
	};

	// double proland::Margin::getMargin(double clipSize, proland::CurvePtr p)
	double getMargin(double clipSize, proland::CurvePtr p) {
		THROW_IF(!_obj.pushFunction("getMargin"),"No implementation for abstract function proland::Margin::getMargin");
		_obj.pushArg((proland::Margin*)this);
		_obj.pushArg(clipSize);
		_obj.pushArg(&p);
		return (_obj.callFunction<double>());
	};

	// double proland::Margin::getMargin(double clipSize, proland::AreaPtr a)
	double getMargin(double clipSize, proland::AreaPtr a) {
		if(_obj.pushFunction("getMargin")) {
			_obj.pushArg((proland::Margin*)this);
			_obj.pushArg(clipSize);
			_obj.pushArg(&a);
			return (_obj.callFunction<double>());
		}

		return Margin::getMargin(clipSize, a);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


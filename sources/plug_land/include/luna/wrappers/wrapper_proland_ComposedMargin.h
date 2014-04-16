#ifndef _WRAPPERS_WRAPPER_PROLAND_COMPOSEDMARGIN_H_
#define _WRAPPERS_WRAPPER_PROLAND_COMPOSEDMARGIN_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <W:/Cloud/Projects/sgt/sources/proland/sources/graph/proland/graph/ComposedMargin.h>

class wrapper_proland_ComposedMargin : public proland::ComposedMargin, public luna_wrapper_base {

public:
		

	~wrapper_proland_ComposedMargin() {
		logDEBUG3("Calling delete function for wrapper proland_ComposedMargin");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::ComposedMargin*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_ComposedMargin(lua_State* L, lua_Table* dum) 
		: proland::ComposedMargin(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::ComposedMargin*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// double proland::ComposedMargin::getMargin(double clipSize)
	double getMargin(double clipSize) {
		if(_obj.pushFunction("getMargin")) {
			_obj.pushArg((proland::ComposedMargin*)this);
			_obj.pushArg(clipSize);
			return (_obj.callFunction<double>());
		}

		return ComposedMargin::getMargin(clipSize);
	};

	// double proland::ComposedMargin::getMargin(double clipSize, proland::CurvePtr p)
	double getMargin(double clipSize, proland::CurvePtr p) {
		if(_obj.pushFunction("getMargin")) {
			_obj.pushArg((proland::ComposedMargin*)this);
			_obj.pushArg(clipSize);
			_obj.pushArg(&p);
			return (_obj.callFunction<double>());
		}

		return ComposedMargin::getMargin(clipSize, p);
	};

	// double proland::ComposedMargin::getMargin(double clipSize, proland::AreaPtr a)
	double getMargin(double clipSize, proland::AreaPtr a) {
		if(_obj.pushFunction("getMargin")) {
			_obj.pushArg((proland::ComposedMargin*)this);
			_obj.pushArg(clipSize);
			_obj.pushArg(&a);
			return (_obj.callFunction<double>());
		}

		return ComposedMargin::getMargin(clipSize, a);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


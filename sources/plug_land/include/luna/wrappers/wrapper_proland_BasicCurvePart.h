#ifndef _WRAPPERS_WRAPPER_PROLAND_BASICCURVEPART_H_
#define _WRAPPERS_WRAPPER_PROLAND_BASICCURVEPART_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <W:/Cloud/Projects/sgt/sources/proland/sources/graph/proland/graph/BasicCurvePart.h>

class wrapper_proland_BasicCurvePart : public proland::BasicCurvePart, public luna_wrapper_base {

public:
		

	~wrapper_proland_BasicCurvePart() {
		logDEBUG3("Calling delete function for wrapper proland_BasicCurvePart");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::BasicCurvePart*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_BasicCurvePart(lua_State* L, lua_Table* dum, proland::CurvePtr p, int start, int end) 
		: proland::BasicCurvePart(p, start, end), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::BasicCurvePart*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_proland_BasicCurvePart(lua_State* L, lua_Table* dum, proland::CurvePtr p, int orientation, int start, int end) 
		: proland::BasicCurvePart(p, orientation, start, end), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::BasicCurvePart*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// proland::CurveId proland::BasicCurvePart::getId() const
	proland::CurveId getId() const {
		if(_obj.pushFunction("getId")) {
			_obj.pushArg((proland::BasicCurvePart*)this);
			return *(_obj.callFunction<proland::CurveId*>());
		}

		return BasicCurvePart::getId();
	};

	// proland::CurveId proland::BasicCurvePart::getParentId() const
	proland::CurveId getParentId() const {
		if(_obj.pushFunction("getParentId")) {
			_obj.pushArg((proland::BasicCurvePart*)this);
			return *(_obj.callFunction<proland::CurveId*>());
		}

		return BasicCurvePart::getParentId();
	};

	// proland::CurvePtr proland::BasicCurvePart::getCurve() const
	proland::CurvePtr getCurve() const {
		if(_obj.pushFunction("getCurve")) {
			_obj.pushArg((proland::BasicCurvePart*)this);
			return *(_obj.callFunction<proland::CurvePtr*>());
		}

		return BasicCurvePart::getCurve();
	};

	// int proland::BasicCurvePart::getType() const
	int getType() const {
		if(_obj.pushFunction("getType")) {
			_obj.pushArg((proland::BasicCurvePart*)this);
			return (_obj.callFunction<int>());
		}

		return BasicCurvePart::getType();
	};

	// float proland::BasicCurvePart::getWidth() const
	float getWidth() const {
		if(_obj.pushFunction("getWidth")) {
			_obj.pushArg((proland::BasicCurvePart*)this);
			return (_obj.callFunction<float>());
		}

		return BasicCurvePart::getWidth();
	};

	// int proland::BasicCurvePart::getEnd() const
	int getEnd() const {
		if(_obj.pushFunction("getEnd")) {
			_obj.pushArg((proland::BasicCurvePart*)this);
			return (_obj.callFunction<int>());
		}

		return BasicCurvePart::getEnd();
	};

	// ork::vec2d proland::BasicCurvePart::getXY(int i) const
	ork::vec2d getXY(int i) const {
		if(_obj.pushFunction("getXY")) {
			_obj.pushArg((proland::BasicCurvePart*)this);
			_obj.pushArg(i);
			return *(_obj.callFunction<ork::vec2d*>());
		}

		return BasicCurvePart::getXY(i);
	};

	// bool proland::BasicCurvePart::getIsControl(int i) const
	bool getIsControl(int i) const {
		if(_obj.pushFunction("getIsControl")) {
			_obj.pushArg((proland::BasicCurvePart*)this);
			_obj.pushArg(i);
			return (_obj.callFunction<bool>());
		}

		return BasicCurvePart::getIsControl(i);
	};

	// float proland::BasicCurvePart::getS(int i) const
	float getS(int i) const {
		if(_obj.pushFunction("getS")) {
			_obj.pushArg((proland::BasicCurvePart*)this);
			_obj.pushArg(i);
			return (_obj.callFunction<float>());
		}

		return BasicCurvePart::getS(i);
	};

	// ork::box2d proland::BasicCurvePart::getBounds() const
	ork::box2d getBounds() const {
		if(_obj.pushFunction("getBounds")) {
			_obj.pushArg((proland::BasicCurvePart*)this);
			return *(_obj.callFunction<ork::box2d*>());
		}

		return BasicCurvePart::getBounds();
	};

	// bool proland::BasicCurvePart::canClip(int i) const
	bool canClip(int i) const {
		if(_obj.pushFunction("canClip")) {
			_obj.pushArg((proland::BasicCurvePart*)this);
			_obj.pushArg(i);
			return (_obj.callFunction<bool>());
		}

		return BasicCurvePart::canClip(i);
	};

	// proland::CurvePart * proland::BasicCurvePart::clip(int start, int end) const
	proland::CurvePart * clip(int start, int end) const {
		if(_obj.pushFunction("clip")) {
			_obj.pushArg((proland::BasicCurvePart*)this);
			_obj.pushArg(start);
			_obj.pushArg(end);
			return (_obj.callFunction<proland::CurvePart*>());
		}

		return BasicCurvePart::clip(start, end);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


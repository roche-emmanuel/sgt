#ifndef _WRAPPERS_WRAPPER_PROLAND_CURVEPART_H_
#define _WRAPPERS_WRAPPER_PROLAND_CURVEPART_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <W:/Cloud/Projects/sgt/sources/proland/sources/graph/proland/graph/CurvePart.h>

class wrapper_proland_CurvePart : public proland::CurvePart, public luna_wrapper_base {

public:
		

	~wrapper_proland_CurvePart() {
		logDEBUG3("Calling delete function for wrapper proland_CurvePart");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::CurvePart*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_CurvePart(lua_State* L, lua_Table* dum) 
		: proland::CurvePart(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::CurvePart*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// proland::CurveId proland::CurvePart::getId() const
	proland::CurveId getId() const {
		if(_obj.pushFunction("getId")) {
			_obj.pushArg((proland::CurvePart*)this);
			return *(_obj.callFunction<proland::CurveId*>());
		}

		return CurvePart::getId();
	};

	// proland::CurveId proland::CurvePart::getParentId() const
	proland::CurveId getParentId() const {
		if(_obj.pushFunction("getParentId")) {
			_obj.pushArg((proland::CurvePart*)this);
			return *(_obj.callFunction<proland::CurveId*>());
		}

		return CurvePart::getParentId();
	};

	// int proland::CurvePart::getType() const
	int getType() const {
		if(_obj.pushFunction("getType")) {
			_obj.pushArg((proland::CurvePart*)this);
			return (_obj.callFunction<int>());
		}

		return CurvePart::getType();
	};

	// float proland::CurvePart::getWidth() const
	float getWidth() const {
		if(_obj.pushFunction("getWidth")) {
			_obj.pushArg((proland::CurvePart*)this);
			return (_obj.callFunction<float>());
		}

		return CurvePart::getWidth();
	};

	// proland::CurvePtr proland::CurvePart::getCurve() const
	proland::CurvePtr getCurve() const {
		if(_obj.pushFunction("getCurve")) {
			_obj.pushArg((proland::CurvePart*)this);
			return *(_obj.callFunction<proland::CurvePtr*>());
		}

		return CurvePart::getCurve();
	};

	// int proland::CurvePart::getEnd() const
	int getEnd() const {
		THROW_IF(!_obj.pushFunction("getEnd"),"No implementation for abstract function proland::CurvePart::getEnd");
		_obj.pushArg((proland::CurvePart*)this);
		return (_obj.callFunction<int>());
	};

	// ork::vec2d proland::CurvePart::getXY(int i) const
	ork::vec2d getXY(int i) const {
		THROW_IF(!_obj.pushFunction("getXY"),"No implementation for abstract function proland::CurvePart::getXY");
		_obj.pushArg((proland::CurvePart*)this);
		_obj.pushArg(i);
		return *(_obj.callFunction<ork::vec2d*>());
	};

	// bool proland::CurvePart::getIsControl(int i) const
	bool getIsControl(int i) const {
		if(_obj.pushFunction("getIsControl")) {
			_obj.pushArg((proland::CurvePart*)this);
			_obj.pushArg(i);
			return (_obj.callFunction<bool>());
		}

		return CurvePart::getIsControl(i);
	};

	// float proland::CurvePart::getS(int i) const
	float getS(int i) const {
		THROW_IF(!_obj.pushFunction("getS"),"No implementation for abstract function proland::CurvePart::getS");
		_obj.pushArg((proland::CurvePart*)this);
		_obj.pushArg(i);
		return (_obj.callFunction<float>());
	};

	// ork::box2d proland::CurvePart::getBounds() const
	ork::box2d getBounds() const {
		THROW_IF(!_obj.pushFunction("getBounds"),"No implementation for abstract function proland::CurvePart::getBounds");
		_obj.pushArg((proland::CurvePart*)this);
		return *(_obj.callFunction<ork::box2d*>());
	};

	// bool proland::CurvePart::canClip(int i) const
	bool canClip(int i) const {
		if(_obj.pushFunction("canClip")) {
			_obj.pushArg((proland::CurvePart*)this);
			_obj.pushArg(i);
			return (_obj.callFunction<bool>());
		}

		return CurvePart::canClip(i);
	};

	// proland::CurvePart * proland::CurvePart::clip(int start, int end) const
	proland::CurvePart * clip(int start, int end) const {
		THROW_IF(!_obj.pushFunction("clip"),"No implementation for abstract function proland::CurvePart::clip");
		_obj.pushArg((proland::CurvePart*)this);
		_obj.pushArg(start);
		_obj.pushArg(end);
		return (_obj.callFunction<proland::CurvePart*>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


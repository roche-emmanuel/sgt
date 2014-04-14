#ifndef _WRAPPERS_WRAPPER_PROLAND_CYLINDRICALDEFORMATION_H_
#define _WRAPPERS_WRAPPER_PROLAND_CYLINDRICALDEFORMATION_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <W:/Cloud/Projects/sgt/sources/proland/sources/core/proland/terrain/CylindricalDeformation.h>

class wrapper_proland_CylindricalDeformation : public proland::CylindricalDeformation, public luna_wrapper_base {

public:
		

	~wrapper_proland_CylindricalDeformation() {
		logDEBUG3("Calling delete function for wrapper proland_CylindricalDeformation");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::CylindricalDeformation*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_CylindricalDeformation(lua_State* L, lua_Table* dum, float R) 
		: proland::CylindricalDeformation(R), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::CylindricalDeformation*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((proland::CylindricalDeformation*)this);
			return (_obj.callFunction<void>());
		}

		return CylindricalDeformation::doRelease();
	};

	// void proland::Deformation::setScreenUniforms(ork::ptr< ork::SceneNode > context, ork::ptr< proland::TerrainQuad > q, ork::ptr< ork::Program > prog) const
	void setScreenUniforms(ork::ptr< ork::SceneNode > context, ork::ptr< proland::TerrainQuad > q, ork::ptr< ork::Program > prog) const {
		if(_obj.pushFunction("setScreenUniforms")) {
			_obj.pushArg((proland::CylindricalDeformation*)this);
			_obj.pushArg((ork::SceneNode*)context.get());
			_obj.pushArg((proland::TerrainQuad*)q.get());
			_obj.pushArg((ork::Program*)prog.get());
			return (_obj.callFunction<void>());
		}

		return CylindricalDeformation::setScreenUniforms(context, q, prog);
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((proland::CylindricalDeformation*)this);
			return (_obj.callFunction<const char*>());
		}

		return CylindricalDeformation::toString();
	};

	// float proland::Deformation::getLocalDist(const ork::vec3d & localPt, const ork::box3d & localBox) const
	float getLocalDist(const ork::vec3d & localPt, const ork::box3d & localBox) const {
		if(_obj.pushFunction("getLocalDist")) {
			_obj.pushArg((proland::CylindricalDeformation*)this);
			_obj.pushArg(&localPt);
			_obj.pushArg(&localBox);
			return (_obj.callFunction<float>());
		}

		return CylindricalDeformation::getLocalDist(localPt, localBox);
	};

	// ork::vec3d proland::CylindricalDeformation::localToDeformed(const ork::vec3d & localPt) const
	ork::vec3d localToDeformed(const ork::vec3d & localPt) const {
		if(_obj.pushFunction("localToDeformed")) {
			_obj.pushArg((proland::CylindricalDeformation*)this);
			_obj.pushArg(&localPt);
			return *(_obj.callFunction<ork::vec3d*>());
		}

		return CylindricalDeformation::localToDeformed(localPt);
	};

	// ork::mat4d proland::CylindricalDeformation::localToDeformedDifferential(const ork::vec3d & localPt, bool clamp = false) const
	ork::mat4d localToDeformedDifferential(const ork::vec3d & localPt, bool clamp = false) const {
		if(_obj.pushFunction("localToDeformedDifferential")) {
			_obj.pushArg((proland::CylindricalDeformation*)this);
			_obj.pushArg(&localPt);
			_obj.pushArg(clamp);
			return *(_obj.callFunction<ork::mat4d*>());
		}

		return CylindricalDeformation::localToDeformedDifferential(localPt, clamp);
	};

	// ork::vec3d proland::CylindricalDeformation::deformedToLocal(const ork::vec3d & deformedPt) const
	ork::vec3d deformedToLocal(const ork::vec3d & deformedPt) const {
		if(_obj.pushFunction("deformedToLocal")) {
			_obj.pushArg((proland::CylindricalDeformation*)this);
			_obj.pushArg(&deformedPt);
			return *(_obj.callFunction<ork::vec3d*>());
		}

		return CylindricalDeformation::deformedToLocal(deformedPt);
	};

	// ork::box2f proland::CylindricalDeformation::deformedToLocalBounds(const ork::vec3d & deformedCenter, double deformedRadius) const
	ork::box2f deformedToLocalBounds(const ork::vec3d & deformedCenter, double deformedRadius) const {
		if(_obj.pushFunction("deformedToLocalBounds")) {
			_obj.pushArg((proland::CylindricalDeformation*)this);
			_obj.pushArg(&deformedCenter);
			_obj.pushArg(deformedRadius);
			return *(_obj.callFunction<ork::box2f*>());
		}

		return CylindricalDeformation::deformedToLocalBounds(deformedCenter, deformedRadius);
	};

	// ork::mat4d proland::CylindricalDeformation::deformedToTangentFrame(const ork::vec3d & deformedPt) const
	ork::mat4d deformedToTangentFrame(const ork::vec3d & deformedPt) const {
		if(_obj.pushFunction("deformedToTangentFrame")) {
			_obj.pushArg((proland::CylindricalDeformation*)this);
			_obj.pushArg(&deformedPt);
			return *(_obj.callFunction<ork::mat4d*>());
		}

		return CylindricalDeformation::deformedToTangentFrame(deformedPt);
	};

	// void proland::CylindricalDeformation::setUniforms(ork::ptr< ork::SceneNode > context, ork::ptr< proland::TerrainNode > n, ork::ptr< ork::Program > prog) const
	void setUniforms(ork::ptr< ork::SceneNode > context, ork::ptr< proland::TerrainNode > n, ork::ptr< ork::Program > prog) const {
		if(_obj.pushFunction("setUniforms")) {
			_obj.pushArg((proland::CylindricalDeformation*)this);
			_obj.pushArg((ork::SceneNode*)context.get());
			_obj.pushArg((proland::TerrainNode*)n.get());
			_obj.pushArg((ork::Program*)prog.get());
			return (_obj.callFunction<void>());
		}

		return CylindricalDeformation::setUniforms(context, n, prog);
	};

	// ork::SceneManager::visibility proland::CylindricalDeformation::getVisibility(const proland::TerrainNode * t, const ork::box3d & localBox) const
	ork::SceneManager::visibility getVisibility(const proland::TerrainNode * t, const ork::box3d & localBox) const {
		if(_obj.pushFunction("getVisibility")) {
			_obj.pushArg((proland::CylindricalDeformation*)this);
			_obj.pushArg(t);
			_obj.pushArg(&localBox);
			return (ork::SceneManager::visibility)(_obj.callFunction<int>());
		}

		return CylindricalDeformation::getVisibility(t, localBox);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


#ifndef _WRAPPERS_WRAPPER_PROLAND_DEFORMATION_H_
#define _WRAPPERS_WRAPPER_PROLAND_DEFORMATION_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <W:/Cloud/Projects/sgt/sources/proland/sources/core/proland/terrain/Deformation.h>

class wrapper_proland_Deformation : public proland::Deformation, public luna_wrapper_base {

public:
		

	~wrapper_proland_Deformation() {
		logDEBUG3("Calling delete function for wrapper proland_Deformation");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::Deformation*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_Deformation(lua_State* L, lua_Table* dum) 
		: proland::Deformation(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::Deformation*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((proland::Deformation*)this);
			return (_obj.callFunction<void>());
		}

		return Deformation::doRelease();
	};

	// void proland::Deformation::setScreenUniforms(ork::ptr< ork::SceneNode > context, ork::ptr< proland::TerrainQuad > q, ork::ptr< ork::Program > prog) const
	void setScreenUniforms(ork::ptr< ork::SceneNode > context, ork::ptr< proland::TerrainQuad > q, ork::ptr< ork::Program > prog) const {
		if(_obj.pushFunction("setScreenUniforms")) {
			_obj.pushArg((proland::Deformation*)this);
			_obj.pushArg((ork::SceneNode*)context.get());
			_obj.pushArg((proland::TerrainQuad*)q.get());
			_obj.pushArg((ork::Program*)prog.get());
			return (_obj.callFunction<void>());
		}

		return Deformation::setScreenUniforms(context, q, prog);
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((proland::Deformation*)this);
			return (_obj.callFunction<const char*>());
		}

		return Deformation::toString();
	};

	// ork::vec3d proland::Deformation::localToDeformed(const ork::vec3d & localPt) const
	ork::vec3d localToDeformed(const ork::vec3d & localPt) const {
		if(_obj.pushFunction("localToDeformed")) {
			_obj.pushArg((proland::Deformation*)this);
			_obj.pushArg(&localPt);
			return *(_obj.callFunction<ork::vec3d*>());
		}

		return Deformation::localToDeformed(localPt);
	};

	// ork::mat4d proland::Deformation::localToDeformedDifferential(const ork::vec3d & localPt, bool clamp = false) const
	ork::mat4d localToDeformedDifferential(const ork::vec3d & localPt, bool clamp = false) const {
		if(_obj.pushFunction("localToDeformedDifferential")) {
			_obj.pushArg((proland::Deformation*)this);
			_obj.pushArg(&localPt);
			_obj.pushArg(clamp);
			return *(_obj.callFunction<ork::mat4d*>());
		}

		return Deformation::localToDeformedDifferential(localPt, clamp);
	};

	// ork::vec3d proland::Deformation::deformedToLocal(const ork::vec3d & deformedPt) const
	ork::vec3d deformedToLocal(const ork::vec3d & deformedPt) const {
		if(_obj.pushFunction("deformedToLocal")) {
			_obj.pushArg((proland::Deformation*)this);
			_obj.pushArg(&deformedPt);
			return *(_obj.callFunction<ork::vec3d*>());
		}

		return Deformation::deformedToLocal(deformedPt);
	};

	// ork::box2f proland::Deformation::deformedToLocalBounds(const ork::vec3d & deformedCenter, double deformedRadius) const
	ork::box2f deformedToLocalBounds(const ork::vec3d & deformedCenter, double deformedRadius) const {
		if(_obj.pushFunction("deformedToLocalBounds")) {
			_obj.pushArg((proland::Deformation*)this);
			_obj.pushArg(&deformedCenter);
			_obj.pushArg(deformedRadius);
			return *(_obj.callFunction<ork::box2f*>());
		}

		return Deformation::deformedToLocalBounds(deformedCenter, deformedRadius);
	};

	// ork::mat4d proland::Deformation::deformedToTangentFrame(const ork::vec3d & deformedPt) const
	ork::mat4d deformedToTangentFrame(const ork::vec3d & deformedPt) const {
		if(_obj.pushFunction("deformedToTangentFrame")) {
			_obj.pushArg((proland::Deformation*)this);
			_obj.pushArg(&deformedPt);
			return *(_obj.callFunction<ork::mat4d*>());
		}

		return Deformation::deformedToTangentFrame(deformedPt);
	};

	// void proland::Deformation::setUniforms(ork::ptr< ork::SceneNode > context, ork::ptr< proland::TerrainNode > n, ork::ptr< ork::Program > prog) const
	void setUniforms(ork::ptr< ork::SceneNode > context, ork::ptr< proland::TerrainNode > n, ork::ptr< ork::Program > prog) const {
		if(_obj.pushFunction("setUniforms")) {
			_obj.pushArg((proland::Deformation*)this);
			_obj.pushArg((ork::SceneNode*)context.get());
			_obj.pushArg((proland::TerrainNode*)n.get());
			_obj.pushArg((ork::Program*)prog.get());
			return (_obj.callFunction<void>());
		}

		return Deformation::setUniforms(context, n, prog);
	};

	// void proland::Deformation::setUniforms(ork::ptr< ork::SceneNode > context, ork::ptr< proland::TerrainQuad > q, ork::ptr< ork::Program > prog) const
	void setUniforms(ork::ptr< ork::SceneNode > context, ork::ptr< proland::TerrainQuad > q, ork::ptr< ork::Program > prog) const {
		if(_obj.pushFunction("setUniforms")) {
			_obj.pushArg((proland::Deformation*)this);
			_obj.pushArg((ork::SceneNode*)context.get());
			_obj.pushArg((proland::TerrainQuad*)q.get());
			_obj.pushArg((ork::Program*)prog.get());
			return (_obj.callFunction<void>());
		}

		return Deformation::setUniforms(context, q, prog);
	};

	// float proland::Deformation::getLocalDist(const ork::vec3d & localPt, const ork::box3d & localBox) const
	float getLocalDist(const ork::vec3d & localPt, const ork::box3d & localBox) const {
		if(_obj.pushFunction("getLocalDist")) {
			_obj.pushArg((proland::Deformation*)this);
			_obj.pushArg(&localPt);
			_obj.pushArg(&localBox);
			return (_obj.callFunction<float>());
		}

		return Deformation::getLocalDist(localPt, localBox);
	};

	// ork::SceneManager::visibility proland::Deformation::getVisibility(const proland::TerrainNode * t, const ork::box3d & localBox) const
	ork::SceneManager::visibility getVisibility(const proland::TerrainNode * t, const ork::box3d & localBox) const {
		if(_obj.pushFunction("getVisibility")) {
			_obj.pushArg((proland::Deformation*)this);
			_obj.pushArg(t);
			_obj.pushArg(&localBox);
			return (ork::SceneManager::visibility)(_obj.callFunction<int>());
		}

		return Deformation::getVisibility(t, localBox);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


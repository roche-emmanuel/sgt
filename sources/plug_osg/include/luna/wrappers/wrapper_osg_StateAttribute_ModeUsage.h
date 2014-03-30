#ifndef _WRAPPERS_WRAPPER_OSG_STATEATTRIBUTE_MODEUSAGE_H_
#define _WRAPPERS_WRAPPER_OSG_STATEATTRIBUTE_MODEUSAGE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <osg/StateAttribute>

class wrapper_osg_StateAttribute_ModeUsage : public osg::StateAttribute::ModeUsage, public luna_wrapper_base {

public:
		

	~wrapper_osg_StateAttribute_ModeUsage() {
		logDEBUG3("Calling delete function for wrapper osg_StateAttribute_ModeUsage");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osg::StateAttribute::ModeUsage*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_StateAttribute_ModeUsage(lua_State* L, lua_Table* dum) 
		: osg::StateAttribute::ModeUsage(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osg::StateAttribute::ModeUsage*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void osg::StateAttribute::ModeUsage::usesMode(unsigned int mode)
	void usesMode(unsigned int mode) {
		THROW_IF(!_obj.pushFunction("usesMode"),"No implementation for abstract function osg::StateAttribute::ModeUsage::usesMode");
		_obj.pushArg((osg::StateAttribute::ModeUsage*)this);
		_obj.pushArg(mode);
		return (_obj.callFunction<void>());
	};

	// void osg::StateAttribute::ModeUsage::usesTextureMode(unsigned int mode)
	void usesTextureMode(unsigned int mode) {
		THROW_IF(!_obj.pushFunction("usesTextureMode"),"No implementation for abstract function osg::StateAttribute::ModeUsage::usesTextureMode");
		_obj.pushArg((osg::StateAttribute::ModeUsage*)this);
		_obj.pushArg(mode);
		return (_obj.callFunction<void>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


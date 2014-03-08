#ifndef _WRAPPERS_WRAPPER_OSG_CULLSETTINGS_H_
#define _WRAPPERS_WRAPPER_OSG_CULLSETTINGS_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <osg/CullSettings>

class wrapper_osg_CullSettings : public osg::CullSettings, public luna_wrapper_base {

public:
		

	~wrapper_osg_CullSettings() {
		logDEBUG3("Calling delete function for wrapper osg_CullSettings");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osg::CullSettings*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_CullSettings(lua_State* L, lua_Table* dum) 
		: osg::CullSettings(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osg::CullSettings*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_osg_CullSettings(lua_State* L, lua_Table* dum, osg::ArgumentParser & arguments) 
		: osg::CullSettings(arguments), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osg::CullSettings*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_osg_CullSettings(lua_State* L, lua_Table* dum, const osg::CullSettings & cs) 
		: osg::CullSettings(cs), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osg::CullSettings*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void osg::CullSettings::setDefaults()
	void setDefaults() {
		if(_obj.pushFunction("setDefaults")) {
			_obj.pushArg((osg::CullSettings*)this);
			return (_obj.callFunction<void>());
		}

		return CullSettings::setDefaults();
	};

	// void osg::CullSettings::inheritCullSettings(const osg::CullSettings & settings)
	void inheritCullSettings(const osg::CullSettings & settings) {
		if(_obj.pushFunction("inheritCullSettings")) {
			_obj.pushArg((osg::CullSettings*)this);
			_obj.pushArg(&settings);
			return (_obj.callFunction<void>());
		}

		return CullSettings::inheritCullSettings(settings);
	};

	// void osg::CullSettings::inheritCullSettings(const osg::CullSettings & settings, unsigned int inheritanceMask)
	void inheritCullSettings(const osg::CullSettings & settings, unsigned int inheritanceMask) {
		if(_obj.pushFunction("inheritCullSettings")) {
			_obj.pushArg((osg::CullSettings*)this);
			_obj.pushArg(&settings);
			_obj.pushArg(inheritanceMask);
			return (_obj.callFunction<void>());
		}

		return CullSettings::inheritCullSettings(settings, inheritanceMask);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif


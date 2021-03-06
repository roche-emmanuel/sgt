#ifndef _WRAPPERS_WRAPPER_OSG_GRAPHICSCONTEXT_WINDOWINGSYSTEMINTERFACE_H_
#define _WRAPPERS_WRAPPER_OSG_GRAPHICSCONTEXT_WINDOWINGSYSTEMINTERFACE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <osg/GraphicsContext>

class wrapper_osg_GraphicsContext_WindowingSystemInterface : public osg::GraphicsContext::WindowingSystemInterface, public luna_wrapper_base {

public:
		

	~wrapper_osg_GraphicsContext_WindowingSystemInterface() {
		logDEBUG3("Calling delete function for wrapper osg_GraphicsContext_WindowingSystemInterface");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osg::GraphicsContext::WindowingSystemInterface*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_GraphicsContext_WindowingSystemInterface(lua_State* L, lua_Table* dum) 
		: osg::GraphicsContext::WindowingSystemInterface(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osg::GraphicsContext::WindowingSystemInterface*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void osg::Referenced::setThreadSafeRefUnref(bool threadSafe)
	void setThreadSafeRefUnref(bool threadSafe) {
		if(_obj.pushFunction("setThreadSafeRefUnref")) {
			_obj.pushArg((osg::GraphicsContext::WindowingSystemInterface*)this);
			_obj.pushArg(threadSafe);
			return (_obj.callFunction<void>());
		}

		return WindowingSystemInterface::setThreadSafeRefUnref(threadSafe);
	};

	// osg::GraphicsContext * osg::GraphicsContext::WindowingSystemInterface::createGraphicsContext(osg::GraphicsContext::Traits * traits)
	osg::GraphicsContext * createGraphicsContext(osg::GraphicsContext::Traits * traits) {
		THROW_IF(!_obj.pushFunction("createGraphicsContext"),"No implementation for abstract function osg::GraphicsContext::WindowingSystemInterface::createGraphicsContext");
		_obj.pushArg((osg::GraphicsContext::WindowingSystemInterface*)this);
		_obj.pushArg(traits);
		return (_obj.callFunction<osg::GraphicsContext*>());
	};


	// Protected non-virtual methods:
	// void osg::Referenced::signalObserversAndDelete(bool signalDelete, bool doDelete) const
	void public_signalObserversAndDelete(bool signalDelete, bool doDelete) const {
		return osg::Referenced::signalObserversAndDelete(signalDelete, doDelete);
	};

	// void osg::Referenced::deleteUsingDeleteHandler() const
	void public_deleteUsingDeleteHandler() const {
		return osg::Referenced::deleteUsingDeleteHandler();
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_signalObserversAndDelete(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_deleteUsingDeleteHandler(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Protected non-virtual function binds:
	// void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const
	static int _bind_public_signalObserversAndDelete(lua_State *L) {
		if (!_lg_typecheck_public_signalObserversAndDelete(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const function, expected prototype:\nvoid osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool signalDelete=(bool)(lua_toboolean(L,2)==1);
		bool doDelete=(bool)(lua_toboolean(L,3)==1);

		wrapper_osg_GraphicsContext_WindowingSystemInterface* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_GraphicsContext_WindowingSystemInterface >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_signalObserversAndDelete(bool, bool) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_signalObserversAndDelete(signalDelete, doDelete);

		return 0;
	}

	// void osg::Referenced::public_deleteUsingDeleteHandler() const
	static int _bind_public_deleteUsingDeleteHandler(lua_State *L) {
		if (!_lg_typecheck_public_deleteUsingDeleteHandler(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Referenced::public_deleteUsingDeleteHandler() const function, expected prototype:\nvoid osg::Referenced::public_deleteUsingDeleteHandler() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wrapper_osg_GraphicsContext_WindowingSystemInterface* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_GraphicsContext_WindowingSystemInterface >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_deleteUsingDeleteHandler() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_deleteUsingDeleteHandler();

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"signalObserversAndDelete",_bind_public_signalObserversAndDelete},
		{"deleteUsingDeleteHandler",_bind_public_deleteUsingDeleteHandler},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


public:
// unsigned int osg::GraphicsContext::WindowingSystemInterface::getNumScreens(const osg::GraphicsContext::ScreenIdentifier & screenIdentifier = osg::GraphicsContext::ScreenIdentifier ())
unsigned int getNumScreens(const osg::GraphicsContext::ScreenIdentifier &) {
	THROW_IF(true,"The function call unsigned int osg::GraphicsContext::WindowingSystemInterface::getNumScreens(const osg::GraphicsContext::ScreenIdentifier &) is not implemented in wrapper.");
	return (unsigned int)0;
};

public:
// void osg::GraphicsContext::WindowingSystemInterface::getScreenSettings(const osg::GraphicsContext::ScreenIdentifier & screenIdentifier, osg::GraphicsContext::ScreenSettings & resolution)
void getScreenSettings(const osg::GraphicsContext::ScreenIdentifier &, osg::GraphicsContext::ScreenSettings &) {
	THROW_IF(true,"The function call void osg::GraphicsContext::WindowingSystemInterface::getScreenSettings(const osg::GraphicsContext::ScreenIdentifier &, osg::GraphicsContext::ScreenSettings &) is not implemented in wrapper.");
};

public:
// void osg::GraphicsContext::WindowingSystemInterface::enumerateScreenSettings(const osg::GraphicsContext::ScreenIdentifier & screenIdentifier, osg::GraphicsContext::ScreenSettingsList & resolutionList)
void enumerateScreenSettings(const osg::GraphicsContext::ScreenIdentifier &, osg::GraphicsContext::ScreenSettingsList &) {
	THROW_IF(true,"The function call void osg::GraphicsContext::WindowingSystemInterface::enumerateScreenSettings(const osg::GraphicsContext::ScreenIdentifier &, osg::GraphicsContext::ScreenSettingsList &) is not implemented in wrapper.");
};

};




#endif


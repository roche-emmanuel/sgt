#ifndef _WRAPPERS_WRAPPER_OSGUTIL_SHADERGENCACHE_H_
#define _WRAPPERS_WRAPPER_OSGUTIL_SHADERGENCACHE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <osgUtil/ShaderGen>

class wrapper_osgUtil_ShaderGenCache : public osgUtil::ShaderGenCache, public luna_wrapper_base {

public:
		

	~wrapper_osgUtil_ShaderGenCache() {
		logDEBUG3("Calling delete function for wrapper osgUtil_ShaderGenCache");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osgUtil::ShaderGenCache*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgUtil_ShaderGenCache(lua_State* L, lua_Table* dum) 
		: osgUtil::ShaderGenCache(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osgUtil::ShaderGenCache*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void osg::Referenced::setThreadSafeRefUnref(bool threadSafe)
	void setThreadSafeRefUnref(bool threadSafe) {
		if(_obj.pushFunction("setThreadSafeRefUnref")) {
			_obj.pushArg((osgUtil::ShaderGenCache*)this);
			_obj.pushArg(threadSafe);
			return (_obj.callFunction<void>());
		}

		return ShaderGenCache::setThreadSafeRefUnref(threadSafe);
	};


	// Protected non-virtual methods:
	// osg::StateSet * osgUtil::ShaderGenCache::createStateSet(int stateMask) const
	osg::StateSet * public_createStateSet(int stateMask) const {
		return osgUtil::ShaderGenCache::createStateSet(stateMask);
	};

	// void osg::Referenced::signalObserversAndDelete(bool signalDelete, bool doDelete) const
	void public_signalObserversAndDelete(bool signalDelete, bool doDelete) const {
		return osg::Referenced::signalObserversAndDelete(signalDelete, doDelete);
	};

	// void osg::Referenced::deleteUsingDeleteHandler() const
	void public_deleteUsingDeleteHandler() const {
		return osg::Referenced::deleteUsingDeleteHandler();
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_createStateSet(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

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
	// osg::StateSet * osgUtil::ShaderGenCache::public_createStateSet(int stateMask) const
	static int _bind_public_createStateSet(lua_State *L) {
		if (!_lg_typecheck_public_createStateSet(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateSet * osgUtil::ShaderGenCache::public_createStateSet(int stateMask) const function, expected prototype:\nosg::StateSet * osgUtil::ShaderGenCache::public_createStateSet(int stateMask) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int stateMask=(int)lua_tointeger(L,2);

		wrapper_osgUtil_ShaderGenCache* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_ShaderGenCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateSet * osgUtil::ShaderGenCache::public_createStateSet(int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::StateSet * lret = self->public_createStateSet(stateMask);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateSet >::push(L,lret,false);

		return 1;
	}

	// void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const
	static int _bind_public_signalObserversAndDelete(lua_State *L) {
		if (!_lg_typecheck_public_signalObserversAndDelete(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const function, expected prototype:\nvoid osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool signalDelete=(bool)(lua_toboolean(L,2)==1);
		bool doDelete=(bool)(lua_toboolean(L,3)==1);

		wrapper_osgUtil_ShaderGenCache* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_ShaderGenCache >(L,1);
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


		wrapper_osgUtil_ShaderGenCache* self=Luna< osg::Referenced >::checkSubType< wrapper_osgUtil_ShaderGenCache >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_deleteUsingDeleteHandler() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_deleteUsingDeleteHandler();

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"createStateSet",_bind_public_createStateSet},
		{"signalObserversAndDelete",_bind_public_signalObserversAndDelete},
		{"deleteUsingDeleteHandler",_bind_public_deleteUsingDeleteHandler},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif


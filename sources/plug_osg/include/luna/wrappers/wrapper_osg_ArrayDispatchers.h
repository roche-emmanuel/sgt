#ifndef _WRAPPERS_WRAPPER_OSG_ARRAYDISPATCHERS_H_
#define _WRAPPERS_WRAPPER_OSG_ARRAYDISPATCHERS_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <osg/ArrayDispatchers>

class wrapper_osg_ArrayDispatchers : public osg::ArrayDispatchers, public luna_wrapper_base {

public:
		

	~wrapper_osg_ArrayDispatchers() {
		logDEBUG3("Calling delete function for wrapper osg_ArrayDispatchers");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osg::ArrayDispatchers*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_ArrayDispatchers(lua_State* L, lua_Table* dum) 
		: osg::ArrayDispatchers(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osg::ArrayDispatchers*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void osg::Referenced::setThreadSafeRefUnref(bool threadSafe)
	void setThreadSafeRefUnref(bool threadSafe) {
		if(_obj.pushFunction("setThreadSafeRefUnref")) {
			_obj.pushArg((osg::ArrayDispatchers*)this);
			_obj.pushArg(threadSafe);
			return (_obj.callFunction<void>());
		}

		return ArrayDispatchers::setThreadSafeRefUnref(threadSafe);
	};


	// Protected non-virtual methods:
	// void osg::ArrayDispatchers::init()
	void public_init() {
		return osg::ArrayDispatchers::init();
	};

	// void osg::ArrayDispatchers::assignTexCoordDispatchers(unsigned int unit)
	void public_assignTexCoordDispatchers(unsigned int unit) {
		return osg::ArrayDispatchers::assignTexCoordDispatchers(unit);
	};

	// void osg::ArrayDispatchers::assignVertexAttribDispatchers(unsigned int unit)
	void public_assignVertexAttribDispatchers(unsigned int unit) {
		return osg::ArrayDispatchers::assignVertexAttribDispatchers(unit);
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
	inline static bool _lg_typecheck_public_init(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_assignTexCoordDispatchers(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_assignVertexAttribDispatchers(lua_State *L) {
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
	// void osg::ArrayDispatchers::public_init()
	static int _bind_public_init(lua_State *L) {
		if (!_lg_typecheck_public_init(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ArrayDispatchers::public_init() function, expected prototype:\nvoid osg::ArrayDispatchers::public_init()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wrapper_osg_ArrayDispatchers* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_ArrayDispatchers >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ArrayDispatchers::public_init(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_init();

		return 0;
	}

	// void osg::ArrayDispatchers::public_assignTexCoordDispatchers(unsigned int unit)
	static int _bind_public_assignTexCoordDispatchers(lua_State *L) {
		if (!_lg_typecheck_public_assignTexCoordDispatchers(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ArrayDispatchers::public_assignTexCoordDispatchers(unsigned int unit) function, expected prototype:\nvoid osg::ArrayDispatchers::public_assignTexCoordDispatchers(unsigned int unit)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int unit=(unsigned int)lua_tointeger(L,2);

		wrapper_osg_ArrayDispatchers* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_ArrayDispatchers >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ArrayDispatchers::public_assignTexCoordDispatchers(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_assignTexCoordDispatchers(unit);

		return 0;
	}

	// void osg::ArrayDispatchers::public_assignVertexAttribDispatchers(unsigned int unit)
	static int _bind_public_assignVertexAttribDispatchers(lua_State *L) {
		if (!_lg_typecheck_public_assignVertexAttribDispatchers(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ArrayDispatchers::public_assignVertexAttribDispatchers(unsigned int unit) function, expected prototype:\nvoid osg::ArrayDispatchers::public_assignVertexAttribDispatchers(unsigned int unit)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int unit=(unsigned int)lua_tointeger(L,2);

		wrapper_osg_ArrayDispatchers* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_ArrayDispatchers >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ArrayDispatchers::public_assignVertexAttribDispatchers(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_assignVertexAttribDispatchers(unit);

		return 0;
	}

	// void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const
	static int _bind_public_signalObserversAndDelete(lua_State *L) {
		if (!_lg_typecheck_public_signalObserversAndDelete(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const function, expected prototype:\nvoid osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool signalDelete=(bool)(lua_toboolean(L,2)==1);
		bool doDelete=(bool)(lua_toboolean(L,3)==1);

		wrapper_osg_ArrayDispatchers* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_ArrayDispatchers >(L,1);
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


		wrapper_osg_ArrayDispatchers* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_ArrayDispatchers >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_deleteUsingDeleteHandler() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_deleteUsingDeleteHandler();

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"init",_bind_public_init},
		{"assignTexCoordDispatchers",_bind_public_assignTexCoordDispatchers},
		{"assignVertexAttribDispatchers",_bind_public_assignVertexAttribDispatchers},
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


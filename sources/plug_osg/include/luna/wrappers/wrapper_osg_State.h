#ifndef _WRAPPERS_WRAPPER_OSG_STATE_H_
#define _WRAPPERS_WRAPPER_OSG_STATE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <osg/State>

class wrapper_osg_State : public osg::State, public luna_wrapper_base {

public:
		

	~wrapper_osg_State() {
		logDEBUG3("Calling delete function for wrapper osg_State");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osg::State*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_State(lua_State* L, lua_Table* dum) 
		: osg::State(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osg::State*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void osg::Referenced::setThreadSafeRefUnref(bool threadSafe)
	void setThreadSafeRefUnref(bool threadSafe) {
		if(_obj.pushFunction("setThreadSafeRefUnref")) {
			_obj.pushArg((osg::State*)this);
			_obj.pushArg(threadSafe);
			return (_obj.callFunction<void>());
		}

		return State::setThreadSafeRefUnref(threadSafe);
	};

	// void osg::State::objectDeleted(void * arg1)
	void objectDeleted(void * arg1) {
		if(_obj.pushFunction("objectDeleted")) {
			_obj.pushArg((osg::State*)this);
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return State::objectDeleted(arg1);
	};

	// void osg::State::frameCompleted()
	void frameCompleted() {
		if(_obj.pushFunction("frameCompleted")) {
			_obj.pushArg((osg::State*)this);
			return (_obj.callFunction<void>());
		}

		return State::frameCompleted();
	};


	// Protected non-virtual methods:
	// void osg::State::setUpVertexAttribAlias(osg::VertexAttribAlias & alias, unsigned int location, const std::string glName, const std::string osgName, const std::string & declaration)
	void public_setUpVertexAttribAlias(osg::VertexAttribAlias & alias, unsigned int location, const std::string glName, const std::string osgName, const std::string & declaration) {
		return osg::State::setUpVertexAttribAlias(alias, location, glName, osgName, declaration);
	};

	// void osg::State::loadModelViewMatrix()
	void public_loadModelViewMatrix() {
		return osg::State::loadModelViewMatrix();
	};

	// bool osg::State::computeSecondaryColorSupported() const
	bool public_computeSecondaryColorSupported() const {
		return osg::State::computeSecondaryColorSupported();
	};

	// bool osg::State::computeFogCoordSupported() const
	bool public_computeFogCoordSupported() const {
		return osg::State::computeFogCoordSupported();
	};

	// bool osg::State::computeVertexBufferObjectSupported() const
	bool public_computeVertexBufferObjectSupported() const {
		return osg::State::computeVertexBufferObjectSupported();
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
	inline static bool _lg_typecheck_public_setUpVertexAttribAlias(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,48453816) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		if( lua_type(L,5)!=LUA_TSTRING ) return false;
		if( lua_type(L,6)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_loadModelViewMatrix(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_computeSecondaryColorSupported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_computeFogCoordSupported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_computeVertexBufferObjectSupported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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
	// void osg::State::public_setUpVertexAttribAlias(osg::VertexAttribAlias & alias, unsigned int location, const std::string glName, const std::string osgName, const std::string & declaration)
	static int _bind_public_setUpVertexAttribAlias(lua_State *L) {
		if (!_lg_typecheck_public_setUpVertexAttribAlias(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::public_setUpVertexAttribAlias(osg::VertexAttribAlias & alias, unsigned int location, const std::string glName, const std::string osgName, const std::string & declaration) function, expected prototype:\nvoid osg::State::public_setUpVertexAttribAlias(osg::VertexAttribAlias & alias, unsigned int location, const std::string glName, const std::string osgName, const std::string & declaration)\nClass arguments details:\narg 1 ID = 48453816\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::VertexAttribAlias* alias_ptr=(Luna< osg::VertexAttribAlias >::check(L,2));
		if( !alias_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg alias in osg::State::public_setUpVertexAttribAlias function");
		}
		osg::VertexAttribAlias & alias=*alias_ptr;
		unsigned int location=(unsigned int)lua_tointeger(L,3);
		std::string glName(lua_tostring(L,4),lua_objlen(L,4));
		std::string osgName(lua_tostring(L,5),lua_objlen(L,5));
		std::string declaration(lua_tostring(L,6),lua_objlen(L,6));

		wrapper_osg_State* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::public_setUpVertexAttribAlias(osg::VertexAttribAlias &, unsigned int, const std::string, const std::string, const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_setUpVertexAttribAlias(alias, location, glName, osgName, declaration);

		return 0;
	}

	// void osg::State::public_loadModelViewMatrix()
	static int _bind_public_loadModelViewMatrix(lua_State *L) {
		if (!_lg_typecheck_public_loadModelViewMatrix(L)) {
			luaL_error(L, "luna typecheck failed in void osg::State::public_loadModelViewMatrix() function, expected prototype:\nvoid osg::State::public_loadModelViewMatrix()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wrapper_osg_State* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::State::public_loadModelViewMatrix(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_loadModelViewMatrix();

		return 0;
	}

	// bool osg::State::public_computeSecondaryColorSupported() const
	static int _bind_public_computeSecondaryColorSupported(lua_State *L) {
		if (!_lg_typecheck_public_computeSecondaryColorSupported(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::State::public_computeSecondaryColorSupported() const function, expected prototype:\nbool osg::State::public_computeSecondaryColorSupported() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wrapper_osg_State* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::State::public_computeSecondaryColorSupported() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->public_computeSecondaryColorSupported();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::State::public_computeFogCoordSupported() const
	static int _bind_public_computeFogCoordSupported(lua_State *L) {
		if (!_lg_typecheck_public_computeFogCoordSupported(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::State::public_computeFogCoordSupported() const function, expected prototype:\nbool osg::State::public_computeFogCoordSupported() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wrapper_osg_State* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::State::public_computeFogCoordSupported() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->public_computeFogCoordSupported();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::State::public_computeVertexBufferObjectSupported() const
	static int _bind_public_computeVertexBufferObjectSupported(lua_State *L) {
		if (!_lg_typecheck_public_computeVertexBufferObjectSupported(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::State::public_computeVertexBufferObjectSupported() const function, expected prototype:\nbool osg::State::public_computeVertexBufferObjectSupported() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wrapper_osg_State* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::State::public_computeVertexBufferObjectSupported() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->public_computeVertexBufferObjectSupported();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const
	static int _bind_public_signalObserversAndDelete(lua_State *L) {
		if (!_lg_typecheck_public_signalObserversAndDelete(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const function, expected prototype:\nvoid osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool signalDelete=(bool)(lua_toboolean(L,2)==1);
		bool doDelete=(bool)(lua_toboolean(L,3)==1);

		wrapper_osg_State* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_State >(L,1);
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


		wrapper_osg_State* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_State >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_deleteUsingDeleteHandler() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_deleteUsingDeleteHandler();

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"setUpVertexAttribAlias",_bind_public_setUpVertexAttribAlias},
		{"loadModelViewMatrix",_bind_public_loadModelViewMatrix},
		{"computeSecondaryColorSupported",_bind_public_computeSecondaryColorSupported},
		{"computeFogCoordSupported",_bind_public_computeFogCoordSupported},
		{"computeVertexBufferObjectSupported",_bind_public_computeVertexBufferObjectSupported},
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


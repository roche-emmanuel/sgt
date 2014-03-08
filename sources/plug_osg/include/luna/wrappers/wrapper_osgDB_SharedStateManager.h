#ifndef _WRAPPERS_WRAPPER_OSGDB_SHAREDSTATEMANAGER_H_
#define _WRAPPERS_WRAPPER_OSGDB_SHAREDSTATEMANAGER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <osgDB/SharedStateManager>

class wrapper_osgDB_SharedStateManager : public osgDB::SharedStateManager, public luna_wrapper_base {

public:
		

	~wrapper_osgDB_SharedStateManager() {
		logDEBUG3("Calling delete function for wrapper osgDB_SharedStateManager");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osgDB::SharedStateManager*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgDB_SharedStateManager(lua_State* L, lua_Table* dum, unsigned int mode = osgDB::SharedStateManager::SHARE_ALL) 
		: osgDB::SharedStateManager(mode), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osgDB::SharedStateManager*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void osg::Referenced::setThreadSafeRefUnref(bool threadSafe)
	void setThreadSafeRefUnref(bool threadSafe) {
		if(_obj.pushFunction("setThreadSafeRefUnref")) {
			_obj.pushArg((osgDB::SharedStateManager*)this);
			_obj.pushArg(threadSafe);
			return (_obj.callFunction<void>());
		}

		return SharedStateManager::setThreadSafeRefUnref(threadSafe);
	};

	// void osg::NodeVisitor::reset()
	void reset() {
		if(_obj.pushFunction("reset")) {
			_obj.pushArg((osgDB::SharedStateManager*)this);
			return (_obj.callFunction<void>());
		}

		return SharedStateManager::reset();
	};

	// osg::Vec3f osg::NodeVisitor::getEyePoint() const
	osg::Vec3f getEyePoint() const {
		if(_obj.pushFunction("getEyePoint")) {
			_obj.pushArg((osgDB::SharedStateManager*)this);
			return *(_obj.callFunction<osg::Vec3f*>());
		}

		return SharedStateManager::getEyePoint();
	};

	// osg::Vec3f osg::NodeVisitor::getViewPoint() const
	osg::Vec3f getViewPoint() const {
		if(_obj.pushFunction("getViewPoint")) {
			_obj.pushArg((osgDB::SharedStateManager*)this);
			return *(_obj.callFunction<osg::Vec3f*>());
		}

		return SharedStateManager::getViewPoint();
	};

	// float osg::NodeVisitor::getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const
	float getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const {
		if(_obj.pushFunction("getDistanceToEyePoint")) {
			_obj.pushArg((osgDB::SharedStateManager*)this);
			_obj.pushArg(&arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<float>());
		}

		return SharedStateManager::getDistanceToEyePoint(arg1, arg2);
	};

	// float osg::NodeVisitor::getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const
	float getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const {
		if(_obj.pushFunction("getDistanceFromEyePoint")) {
			_obj.pushArg((osgDB::SharedStateManager*)this);
			_obj.pushArg(&arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<float>());
		}

		return SharedStateManager::getDistanceFromEyePoint(arg1, arg2);
	};

	// float osg::NodeVisitor::getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const
	float getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const {
		if(_obj.pushFunction("getDistanceToViewPoint")) {
			_obj.pushArg((osgDB::SharedStateManager*)this);
			_obj.pushArg(&arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<float>());
		}

		return SharedStateManager::getDistanceToViewPoint(arg1, arg2);
	};

	// const char * osgDB::SharedStateManager::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			_obj.pushArg((osgDB::SharedStateManager*)this);
			return (_obj.callFunction<const char*>());
		}

		return SharedStateManager::libraryName();
	};

	// const char * osgDB::SharedStateManager::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			_obj.pushArg((osgDB::SharedStateManager*)this);
			return (_obj.callFunction<const char*>());
		}

		return SharedStateManager::className();
	};

	// void osgDB::SharedStateManager::apply(osg::Node & node)
	void apply(osg::Node & node) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osgDB::SharedStateManager*)this);
			_obj.pushArg(&node);
			return (_obj.callFunction<void>());
		}

		return SharedStateManager::apply(node);
	};

	// void osgDB::SharedStateManager::apply(osg::Geode & geode)
	void apply(osg::Geode & geode) {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osgDB::SharedStateManager*)this);
			_obj.pushArg(&geode);
			return (_obj.callFunction<void>());
		}

		return SharedStateManager::apply(geode);
	};


	// Protected non-virtual methods:
	// bool osgDB::SharedStateManager::shareTexture(osg::Object::DataVariance variance)
	bool public_shareTexture(osg::Object::DataVariance variance) {
		return osgDB::SharedStateManager::shareTexture(variance);
	};

	// bool osgDB::SharedStateManager::shareStateSet(osg::Object::DataVariance variance)
	bool public_shareStateSet(osg::Object::DataVariance variance) {
		return osgDB::SharedStateManager::shareStateSet(variance);
	};

	// void osgDB::SharedStateManager::process(osg::StateSet * ss, osg::Object * parent)
	void public_process(osg::StateSet * ss, osg::Object * parent) {
		return osgDB::SharedStateManager::process(ss, parent);
	};

	// osg::StateAttribute * osgDB::SharedStateManager::find(osg::StateAttribute * sa)
	osg::StateAttribute * public_find(osg::StateAttribute * sa) {
		return osgDB::SharedStateManager::find(sa);
	};

	// void osgDB::SharedStateManager::setStateSet(osg::StateSet * ss, osg::Object * object)
	void public_setStateSet(osg::StateSet * ss, osg::Object * object) {
		return osgDB::SharedStateManager::setStateSet(ss, object);
	};

	// void osgDB::SharedStateManager::shareTextures(osg::StateSet * ss)
	void public_shareTextures(osg::StateSet * ss) {
		return osgDB::SharedStateManager::shareTextures(ss);
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
	inline static bool _lg_typecheck_public_shareTexture(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_shareStateSet(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_process(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_find(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_setStateSet(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_shareTextures(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
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
	// bool osgDB::SharedStateManager::public_shareTexture(osg::Object::DataVariance variance)
	static int _bind_public_shareTexture(lua_State *L) {
		if (!_lg_typecheck_public_shareTexture(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::SharedStateManager::public_shareTexture(osg::Object::DataVariance variance) function, expected prototype:\nbool osgDB::SharedStateManager::public_shareTexture(osg::Object::DataVariance variance)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Object::DataVariance variance=(osg::Object::DataVariance)lua_tointeger(L,2);

		wrapper_osgDB_SharedStateManager* self=Luna< osg::Referenced >::checkSubType< wrapper_osgDB_SharedStateManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::SharedStateManager::public_shareTexture(osg::Object::DataVariance). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->public_shareTexture(variance);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::SharedStateManager::public_shareStateSet(osg::Object::DataVariance variance)
	static int _bind_public_shareStateSet(lua_State *L) {
		if (!_lg_typecheck_public_shareStateSet(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::SharedStateManager::public_shareStateSet(osg::Object::DataVariance variance) function, expected prototype:\nbool osgDB::SharedStateManager::public_shareStateSet(osg::Object::DataVariance variance)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Object::DataVariance variance=(osg::Object::DataVariance)lua_tointeger(L,2);

		wrapper_osgDB_SharedStateManager* self=Luna< osg::Referenced >::checkSubType< wrapper_osgDB_SharedStateManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::SharedStateManager::public_shareStateSet(osg::Object::DataVariance). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->public_shareStateSet(variance);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgDB::SharedStateManager::public_process(osg::StateSet * ss, osg::Object * parent)
	static int _bind_public_process(lua_State *L) {
		if (!_lg_typecheck_public_process(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::SharedStateManager::public_process(osg::StateSet * ss, osg::Object * parent) function, expected prototype:\nvoid osgDB::SharedStateManager::public_process(osg::StateSet * ss, osg::Object * parent)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StateSet* ss=(Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,2));
		osg::Object* parent=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,3));

		wrapper_osgDB_SharedStateManager* self=Luna< osg::Referenced >::checkSubType< wrapper_osgDB_SharedStateManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::SharedStateManager::public_process(osg::StateSet *, osg::Object *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_process(ss, parent);

		return 0;
	}

	// osg::StateAttribute * osgDB::SharedStateManager::public_find(osg::StateAttribute * sa)
	static int _bind_public_find(lua_State *L) {
		if (!_lg_typecheck_public_find(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateAttribute * osgDB::SharedStateManager::public_find(osg::StateAttribute * sa) function, expected prototype:\nosg::StateAttribute * osgDB::SharedStateManager::public_find(osg::StateAttribute * sa)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StateAttribute* sa=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2));

		wrapper_osgDB_SharedStateManager* self=Luna< osg::Referenced >::checkSubType< wrapper_osgDB_SharedStateManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateAttribute * osgDB::SharedStateManager::public_find(osg::StateAttribute *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::StateAttribute * lret = self->public_find(sa);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateAttribute >::push(L,lret,false);

		return 1;
	}

	// void osgDB::SharedStateManager::public_setStateSet(osg::StateSet * ss, osg::Object * object)
	static int _bind_public_setStateSet(lua_State *L) {
		if (!_lg_typecheck_public_setStateSet(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::SharedStateManager::public_setStateSet(osg::StateSet * ss, osg::Object * object) function, expected prototype:\nvoid osgDB::SharedStateManager::public_setStateSet(osg::StateSet * ss, osg::Object * object)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StateSet* ss=(Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,2));
		osg::Object* object=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,3));

		wrapper_osgDB_SharedStateManager* self=Luna< osg::Referenced >::checkSubType< wrapper_osgDB_SharedStateManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::SharedStateManager::public_setStateSet(osg::StateSet *, osg::Object *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_setStateSet(ss, object);

		return 0;
	}

	// void osgDB::SharedStateManager::public_shareTextures(osg::StateSet * ss)
	static int _bind_public_shareTextures(lua_State *L) {
		if (!_lg_typecheck_public_shareTextures(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::SharedStateManager::public_shareTextures(osg::StateSet * ss) function, expected prototype:\nvoid osgDB::SharedStateManager::public_shareTextures(osg::StateSet * ss)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StateSet* ss=(Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,2));

		wrapper_osgDB_SharedStateManager* self=Luna< osg::Referenced >::checkSubType< wrapper_osgDB_SharedStateManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::SharedStateManager::public_shareTextures(osg::StateSet *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_shareTextures(ss);

		return 0;
	}

	// void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const
	static int _bind_public_signalObserversAndDelete(lua_State *L) {
		if (!_lg_typecheck_public_signalObserversAndDelete(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const function, expected prototype:\nvoid osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool signalDelete=(bool)(lua_toboolean(L,2)==1);
		bool doDelete=(bool)(lua_toboolean(L,3)==1);

		wrapper_osgDB_SharedStateManager* self=Luna< osg::Referenced >::checkSubType< wrapper_osgDB_SharedStateManager >(L,1);
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


		wrapper_osgDB_SharedStateManager* self=Luna< osg::Referenced >::checkSubType< wrapper_osgDB_SharedStateManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_deleteUsingDeleteHandler() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_deleteUsingDeleteHandler();

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"shareTexture",_bind_public_shareTexture},
		{"shareStateSet",_bind_public_shareStateSet},
		{"process",_bind_public_process},
		{"find",_bind_public_find},
		{"setStateSet",_bind_public_setStateSet},
		{"shareTextures",_bind_public_shareTextures},
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


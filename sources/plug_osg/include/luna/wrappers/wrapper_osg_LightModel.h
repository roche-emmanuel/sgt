#ifndef _WRAPPERS_WRAPPER_OSG_LIGHTMODEL_H_
#define _WRAPPERS_WRAPPER_OSG_LIGHTMODEL_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <osg/LightModel>

class wrapper_osg_LightModel : public osg::LightModel, public luna_wrapper_base {

public:
		

	~wrapper_osg_LightModel() {
		logDEBUG3("Calling delete function for wrapper osg_LightModel");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osg::LightModel*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_LightModel(lua_State* L, lua_Table* dum) 
		: osg::LightModel(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osg::LightModel*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_osg_LightModel(lua_State* L, lua_Table* dum, const osg::LightModel & lw, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) 
		: osg::LightModel(lw, copyop), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osg::LightModel*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void osg::Object::setThreadSafeRefUnref(bool threadSafe)
	void setThreadSafeRefUnref(bool threadSafe) {
		if(_obj.pushFunction("setThreadSafeRefUnref")) {
			_obj.pushArg((osg::LightModel*)this);
			_obj.pushArg(threadSafe);
			return (_obj.callFunction<void>());
		}

		return LightModel::setThreadSafeRefUnref(threadSafe);
	};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg((osg::LightModel*)this);
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return LightModel::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			_obj.pushArg((osg::LightModel*)this);
			return (_obj.callFunction<void>());
		}

		return LightModel::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg((osg::LightModel*)this);
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return LightModel::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			_obj.pushArg((osg::LightModel*)this);
			return (_obj.callFunction<osg::Referenced*>());
		}

		return LightModel::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			_obj.pushArg((osg::LightModel*)this);
			return (_obj.callFunction<osg::Referenced*>());
		}

		return LightModel::getUserData();
	};

	// osg::Texture * osg::StateAttribute::asTexture()
	osg::Texture * asTexture() {
		if(_obj.pushFunction("asTexture")) {
			_obj.pushArg((osg::LightModel*)this);
			return (_obj.callFunction<osg::Texture*>());
		}

		return LightModel::asTexture();
	};

	// const osg::Texture * osg::StateAttribute::asTexture() const
	const osg::Texture * asTexture() const {
		if(_obj.pushFunction("asTexture")) {
			_obj.pushArg((osg::LightModel*)this);
			return (_obj.callFunction<osg::Texture*>());
		}

		return LightModel::asTexture();
	};

	// unsigned int osg::StateAttribute::getMember() const
	unsigned int getMember() const {
		if(_obj.pushFunction("getMember")) {
			_obj.pushArg((osg::LightModel*)this);
			return (_obj.callFunction<unsigned int>());
		}

		return LightModel::getMember();
	};

	// bool osg::StateAttribute::isTextureAttribute() const
	bool isTextureAttribute() const {
		if(_obj.pushFunction("isTextureAttribute")) {
			_obj.pushArg((osg::LightModel*)this);
			return (_obj.callFunction<bool>());
		}

		return LightModel::isTextureAttribute();
	};

	// bool osg::StateAttribute::getModeUsage(osg::StateAttribute::ModeUsage & arg1) const
	bool getModeUsage(osg::StateAttribute::ModeUsage & arg1) const {
		if(_obj.pushFunction("getModeUsage")) {
			_obj.pushArg((osg::LightModel*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<bool>());
		}

		return LightModel::getModeUsage(arg1);
	};

	// bool osg::StateAttribute::checkValidityOfAssociatedModes(osg::State & arg1) const
	bool checkValidityOfAssociatedModes(osg::State & arg1) const {
		if(_obj.pushFunction("checkValidityOfAssociatedModes")) {
			_obj.pushArg((osg::LightModel*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<bool>());
		}

		return LightModel::checkValidityOfAssociatedModes(arg1);
	};

	// void osg::StateAttribute::compileGLObjects(osg::State & arg1) const
	void compileGLObjects(osg::State & arg1) const {
		if(_obj.pushFunction("compileGLObjects")) {
			_obj.pushArg((osg::LightModel*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return LightModel::compileGLObjects(arg1);
	};

	// void osg::StateAttribute::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg((osg::LightModel*)this);
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return LightModel::releaseGLObjects(arg1);
	};

	// osg::Object * osg::LightModel::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			_obj.pushArg((osg::LightModel*)this);
			return (_obj.callFunction<osg::Object*>());
		}

		return LightModel::cloneType();
	};

	// osg::Object * osg::LightModel::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg((osg::LightModel*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return LightModel::clone(arg1);
	};

	// bool osg::LightModel::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg((osg::LightModel*)this);
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return LightModel::isSameKindAs(obj);
	};

	// const char * osg::LightModel::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			_obj.pushArg((osg::LightModel*)this);
			return (_obj.callFunction<const char*>());
		}

		return LightModel::libraryName();
	};

	// const char * osg::LightModel::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			_obj.pushArg((osg::LightModel*)this);
			return (_obj.callFunction<const char*>());
		}

		return LightModel::className();
	};

	// osg::StateAttribute::Type osg::LightModel::getType() const
	osg::StateAttribute::Type getType() const {
		if(_obj.pushFunction("getType")) {
			_obj.pushArg((osg::LightModel*)this);
			return (osg::StateAttribute::Type)(_obj.callFunction<int>());
		}

		return LightModel::getType();
	};

	// int osg::LightModel::compare(const osg::StateAttribute & sa) const
	int compare(const osg::StateAttribute & sa) const {
		if(_obj.pushFunction("compare")) {
			_obj.pushArg((osg::LightModel*)this);
			_obj.pushArg(&sa);
			return (_obj.callFunction<int>());
		}

		return LightModel::compare(sa);
	};

	// void osg::LightModel::apply(osg::State & arg1) const
	void apply(osg::State & arg1) const {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::LightModel*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return LightModel::apply(arg1);
	};


	// Protected non-virtual methods:
	// void osg::StateAttribute::addParent(osg::StateSet * object)
	void public_addParent(osg::StateSet * object) {
		return osg::StateAttribute::addParent(object);
	};

	// void osg::StateAttribute::removeParent(osg::StateSet * object)
	void public_removeParent(osg::StateSet * object) {
		return osg::StateAttribute::removeParent(object);
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
	inline static bool _lg_typecheck_public_addParent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_removeParent(lua_State *L) {
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
	// void osg::StateAttribute::public_addParent(osg::StateSet * object)
	static int _bind_public_addParent(lua_State *L) {
		if (!_lg_typecheck_public_addParent(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StateAttribute::public_addParent(osg::StateSet * object) function, expected prototype:\nvoid osg::StateAttribute::public_addParent(osg::StateSet * object)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StateSet* object=(Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,2));

		wrapper_osg_LightModel* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_LightModel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StateAttribute::public_addParent(osg::StateSet *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_addParent(object);

		return 0;
	}

	// void osg::StateAttribute::public_removeParent(osg::StateSet * object)
	static int _bind_public_removeParent(lua_State *L) {
		if (!_lg_typecheck_public_removeParent(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StateAttribute::public_removeParent(osg::StateSet * object) function, expected prototype:\nvoid osg::StateAttribute::public_removeParent(osg::StateSet * object)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StateSet* object=(Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,2));

		wrapper_osg_LightModel* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_LightModel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StateAttribute::public_removeParent(osg::StateSet *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_removeParent(object);

		return 0;
	}

	// void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const
	static int _bind_public_signalObserversAndDelete(lua_State *L) {
		if (!_lg_typecheck_public_signalObserversAndDelete(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const function, expected prototype:\nvoid osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool signalDelete=(bool)(lua_toboolean(L,2)==1);
		bool doDelete=(bool)(lua_toboolean(L,3)==1);

		wrapper_osg_LightModel* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_LightModel >(L,1);
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


		wrapper_osg_LightModel* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_LightModel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_deleteUsingDeleteHandler() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_deleteUsingDeleteHandler();

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"addParent",_bind_public_addParent},
		{"removeParent",_bind_public_removeParent},
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


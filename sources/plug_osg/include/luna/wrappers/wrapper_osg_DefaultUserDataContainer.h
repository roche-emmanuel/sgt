#ifndef _WRAPPERS_WRAPPER_OSG_DEFAULTUSERDATACONTAINER_H_
#define _WRAPPERS_WRAPPER_OSG_DEFAULTUSERDATACONTAINER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <osg/UserDataContainer>

class wrapper_osg_DefaultUserDataContainer : public osg::DefaultUserDataContainer, public luna_wrapper_base {

public:
		

	~wrapper_osg_DefaultUserDataContainer() {
		logDEBUG3("Calling delete function for wrapper osg_DefaultUserDataContainer");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osg::DefaultUserDataContainer*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_DefaultUserDataContainer(lua_State* L, lua_Table* dum) 
		: osg::DefaultUserDataContainer(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osg::DefaultUserDataContainer*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_osg_DefaultUserDataContainer(lua_State* L, lua_Table* dum, const osg::DefaultUserDataContainer & udc, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) 
		: osg::DefaultUserDataContainer(udc, copyop), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osg::DefaultUserDataContainer*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg((osg::DefaultUserDataContainer*)this);
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return DefaultUserDataContainer::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			_obj.pushArg((osg::DefaultUserDataContainer*)this);
			return (_obj.callFunction<void>());
		}

		return DefaultUserDataContainer::computeDataVariance();
	};

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg((osg::DefaultUserDataContainer*)this);
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return DefaultUserDataContainer::releaseGLObjects(arg1);
	};

	// osg::Object * osg::DefaultUserDataContainer::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			_obj.pushArg((osg::DefaultUserDataContainer*)this);
			return (_obj.callFunction<osg::Object*>());
		}

		return DefaultUserDataContainer::cloneType();
	};

	// osg::Object * osg::DefaultUserDataContainer::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg((osg::DefaultUserDataContainer*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return DefaultUserDataContainer::clone(arg1);
	};

	// bool osg::DefaultUserDataContainer::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg((osg::DefaultUserDataContainer*)this);
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return DefaultUserDataContainer::isSameKindAs(obj);
	};

	// const char * osg::DefaultUserDataContainer::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			_obj.pushArg((osg::DefaultUserDataContainer*)this);
			return (_obj.callFunction<const char*>());
		}

		return DefaultUserDataContainer::libraryName();
	};

	// const char * osg::DefaultUserDataContainer::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			_obj.pushArg((osg::DefaultUserDataContainer*)this);
			return (_obj.callFunction<const char*>());
		}

		return DefaultUserDataContainer::className();
	};

	// void osg::DefaultUserDataContainer::setThreadSafeRefUnref(bool threadSafe)
	void setThreadSafeRefUnref(bool threadSafe) {
		if(_obj.pushFunction("setThreadSafeRefUnref")) {
			_obj.pushArg((osg::DefaultUserDataContainer*)this);
			_obj.pushArg(threadSafe);
			return (_obj.callFunction<void>());
		}

		return DefaultUserDataContainer::setThreadSafeRefUnref(threadSafe);
	};

	// void osg::DefaultUserDataContainer::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg((osg::DefaultUserDataContainer*)this);
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return DefaultUserDataContainer::setUserData(obj);
	};

	// osg::Referenced * osg::DefaultUserDataContainer::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			_obj.pushArg((osg::DefaultUserDataContainer*)this);
			return (_obj.callFunction<osg::Referenced*>());
		}

		return DefaultUserDataContainer::getUserData();
	};

	// const osg::Referenced * osg::DefaultUserDataContainer::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			_obj.pushArg((osg::DefaultUserDataContainer*)this);
			return (_obj.callFunction<osg::Referenced*>());
		}

		return DefaultUserDataContainer::getUserData();
	};

	// unsigned int osg::DefaultUserDataContainer::addUserObject(osg::Object * obj)
	unsigned int addUserObject(osg::Object * obj) {
		if(_obj.pushFunction("addUserObject")) {
			_obj.pushArg((osg::DefaultUserDataContainer*)this);
			_obj.pushArg(obj);
			return (_obj.callFunction<unsigned int>());
		}

		return DefaultUserDataContainer::addUserObject(obj);
	};

	// void osg::DefaultUserDataContainer::setUserObject(unsigned int i, osg::Object * obj)
	void setUserObject(unsigned int i, osg::Object * obj) {
		if(_obj.pushFunction("setUserObject")) {
			_obj.pushArg((osg::DefaultUserDataContainer*)this);
			_obj.pushArg(i);
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return DefaultUserDataContainer::setUserObject(i, obj);
	};

	// void osg::DefaultUserDataContainer::removeUserObject(unsigned int i)
	void removeUserObject(unsigned int i) {
		if(_obj.pushFunction("removeUserObject")) {
			_obj.pushArg((osg::DefaultUserDataContainer*)this);
			_obj.pushArg(i);
			return (_obj.callFunction<void>());
		}

		return DefaultUserDataContainer::removeUserObject(i);
	};

	// osg::Object * osg::DefaultUserDataContainer::getUserObject(unsigned int i)
	osg::Object * getUserObject(unsigned int i) {
		if(_obj.pushFunction("getUserObject")) {
			_obj.pushArg((osg::DefaultUserDataContainer*)this);
			_obj.pushArg(i);
			return (_obj.callFunction<osg::Object*>());
		}

		return DefaultUserDataContainer::getUserObject(i);
	};

	// const osg::Object * osg::DefaultUserDataContainer::getUserObject(unsigned int i) const
	const osg::Object * getUserObject(unsigned int i) const {
		if(_obj.pushFunction("getUserObject")) {
			_obj.pushArg((osg::DefaultUserDataContainer*)this);
			_obj.pushArg(i);
			return (_obj.callFunction<osg::Object*>());
		}

		return DefaultUserDataContainer::getUserObject(i);
	};

	// unsigned int osg::DefaultUserDataContainer::getNumUserObjects() const
	unsigned int getNumUserObjects() const {
		if(_obj.pushFunction("getNumUserObjects")) {
			_obj.pushArg((osg::DefaultUserDataContainer*)this);
			return (_obj.callFunction<unsigned int>());
		}

		return DefaultUserDataContainer::getNumUserObjects();
	};

	// unsigned int osg::DefaultUserDataContainer::getUserObjectIndex(const osg::Object * obj, unsigned int startPos = 0) const
	unsigned int getUserObjectIndex(const osg::Object * obj, unsigned int startPos = 0) const {
		if(_obj.pushFunction("getUserObjectIndex")) {
			_obj.pushArg((osg::DefaultUserDataContainer*)this);
			_obj.pushArg(obj);
			_obj.pushArg(startPos);
			return (_obj.callFunction<unsigned int>());
		}

		return DefaultUserDataContainer::getUserObjectIndex(obj, startPos);
	};

	// unsigned int osg::DefaultUserDataContainer::getUserObjectIndex(const std::string & name, unsigned int startPos = 0) const
	unsigned int getUserObjectIndex(const std::string & name, unsigned int startPos = 0) const {
		if(_obj.pushFunction("getUserObjectIndex")) {
			_obj.pushArg((osg::DefaultUserDataContainer*)this);
			_obj.pushArg(name);
			_obj.pushArg(startPos);
			return (_obj.callFunction<unsigned int>());
		}

		return DefaultUserDataContainer::getUserObjectIndex(name, startPos);
	};

	// void osg::DefaultUserDataContainer::setDescriptions(const osg::UserDataContainer::DescriptionList & descriptions)
	void setDescriptions(const osg::UserDataContainer::DescriptionList & descriptions) {
		if(_obj.pushFunction("setDescriptions")) {
			_obj.pushArg((osg::DefaultUserDataContainer*)this);
			_obj.pushArg(&descriptions);
			return (_obj.callFunction<void>());
		}

		return DefaultUserDataContainer::setDescriptions(descriptions);
	};

	// osg::UserDataContainer::DescriptionList & osg::DefaultUserDataContainer::getDescriptions()
	osg::UserDataContainer::DescriptionList & getDescriptions() {
		if(_obj.pushFunction("getDescriptions")) {
			_obj.pushArg((osg::DefaultUserDataContainer*)this);
			return *(_obj.callFunction<osg::UserDataContainer::DescriptionList*>());
		}

		return DefaultUserDataContainer::getDescriptions();
	};

	// const osg::UserDataContainer::DescriptionList & osg::DefaultUserDataContainer::getDescriptions() const
	const osg::UserDataContainer::DescriptionList & getDescriptions() const {
		if(_obj.pushFunction("getDescriptions")) {
			_obj.pushArg((osg::DefaultUserDataContainer*)this);
			return *(_obj.callFunction<osg::UserDataContainer::DescriptionList*>());
		}

		return DefaultUserDataContainer::getDescriptions();
	};

	// unsigned int osg::DefaultUserDataContainer::getNumDescriptions() const
	unsigned int getNumDescriptions() const {
		if(_obj.pushFunction("getNumDescriptions")) {
			_obj.pushArg((osg::DefaultUserDataContainer*)this);
			return (_obj.callFunction<unsigned int>());
		}

		return DefaultUserDataContainer::getNumDescriptions();
	};

	// void osg::DefaultUserDataContainer::addDescription(const std::string & desc)
	void addDescription(const std::string & desc) {
		if(_obj.pushFunction("addDescription")) {
			_obj.pushArg((osg::DefaultUserDataContainer*)this);
			_obj.pushArg(desc);
			return (_obj.callFunction<void>());
		}

		return DefaultUserDataContainer::addDescription(desc);
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

		wrapper_osg_DefaultUserDataContainer* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_DefaultUserDataContainer >(L,1);
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


		wrapper_osg_DefaultUserDataContainer* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_DefaultUserDataContainer >(L,1);
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


};




#endif


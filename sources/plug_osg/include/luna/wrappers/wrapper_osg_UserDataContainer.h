#ifndef _WRAPPERS_WRAPPER_OSG_USERDATACONTAINER_H_
#define _WRAPPERS_WRAPPER_OSG_USERDATACONTAINER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <osg/UserDataContainer>

class wrapper_osg_UserDataContainer : public osg::UserDataContainer, public luna_wrapper_base {

public:
		

	~wrapper_osg_UserDataContainer() {
		logDEBUG3("Calling delete function for wrapper osg_UserDataContainer");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osg::UserDataContainer*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_UserDataContainer(lua_State* L, lua_Table* dum) 
		: osg::UserDataContainer(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osg::UserDataContainer*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_osg_UserDataContainer(lua_State* L, lua_Table* dum, const osg::UserDataContainer & udc, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) 
		: osg::UserDataContainer(udc, copyop), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osg::UserDataContainer*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// osg::Object * osg::Object::cloneType() const
	osg::Object * cloneType() const {
		THROW_IF(!_obj.pushFunction("cloneType"),"No implementation for abstract function osg::Object::cloneType");
		_obj.pushArg((osg::UserDataContainer*)this);
		return (_obj.callFunction<osg::Object*>());
	};

	// osg::Object * osg::Object::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		THROW_IF(!_obj.pushFunction("clone"),"No implementation for abstract function osg::Object::clone");
		_obj.pushArg((osg::UserDataContainer*)this);
		_obj.pushArg(&arg1);
		return (_obj.callFunction<osg::Object*>());
	};

	// void osg::Object::setThreadSafeRefUnref(bool threadSafe)
	void setThreadSafeRefUnref(bool threadSafe) {
		if(_obj.pushFunction("setThreadSafeRefUnref")) {
			_obj.pushArg((osg::UserDataContainer*)this);
			_obj.pushArg(threadSafe);
			return (_obj.callFunction<void>());
		}

		return UserDataContainer::setThreadSafeRefUnref(threadSafe);
	};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg((osg::UserDataContainer*)this);
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return UserDataContainer::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			_obj.pushArg((osg::UserDataContainer*)this);
			return (_obj.callFunction<void>());
		}

		return UserDataContainer::computeDataVariance();
	};

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg((osg::UserDataContainer*)this);
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return UserDataContainer::releaseGLObjects(arg1);
	};

	// bool osg::UserDataContainer::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg((osg::UserDataContainer*)this);
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return UserDataContainer::isSameKindAs(obj);
	};

	// const char * osg::UserDataContainer::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			_obj.pushArg((osg::UserDataContainer*)this);
			return (_obj.callFunction<const char*>());
		}

		return UserDataContainer::libraryName();
	};

	// const char * osg::UserDataContainer::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			_obj.pushArg((osg::UserDataContainer*)this);
			return (_obj.callFunction<const char*>());
		}

		return UserDataContainer::className();
	};

	// void osg::UserDataContainer::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		THROW_IF(!_obj.pushFunction("setUserData"),"No implementation for abstract function osg::UserDataContainer::setUserData");
		_obj.pushArg((osg::UserDataContainer*)this);
		_obj.pushArg(obj);
		return (_obj.callFunction<void>());
	};

	// osg::Referenced * osg::UserDataContainer::getUserData()
	osg::Referenced * getUserData() {
		THROW_IF(!_obj.pushFunction("getUserData"),"No implementation for abstract function osg::UserDataContainer::getUserData");
		_obj.pushArg((osg::UserDataContainer*)this);
		return (_obj.callFunction<osg::Referenced*>());
	};

	// const osg::Referenced * osg::UserDataContainer::getUserData() const
	const osg::Referenced * getUserData() const {
		THROW_IF(!_obj.pushFunction("getUserData"),"No implementation for abstract function osg::UserDataContainer::getUserData");
		_obj.pushArg((osg::UserDataContainer*)this);
		return (_obj.callFunction<osg::Referenced*>());
	};

	// unsigned int osg::UserDataContainer::addUserObject(osg::Object * obj)
	unsigned int addUserObject(osg::Object * obj) {
		THROW_IF(!_obj.pushFunction("addUserObject"),"No implementation for abstract function osg::UserDataContainer::addUserObject");
		_obj.pushArg((osg::UserDataContainer*)this);
		_obj.pushArg(obj);
		return (_obj.callFunction<unsigned int>());
	};

	// void osg::UserDataContainer::setUserObject(unsigned int i, osg::Object * obj)
	void setUserObject(unsigned int i, osg::Object * obj) {
		THROW_IF(!_obj.pushFunction("setUserObject"),"No implementation for abstract function osg::UserDataContainer::setUserObject");
		_obj.pushArg((osg::UserDataContainer*)this);
		_obj.pushArg(i);
		_obj.pushArg(obj);
		return (_obj.callFunction<void>());
	};

	// void osg::UserDataContainer::removeUserObject(unsigned int i)
	void removeUserObject(unsigned int i) {
		THROW_IF(!_obj.pushFunction("removeUserObject"),"No implementation for abstract function osg::UserDataContainer::removeUserObject");
		_obj.pushArg((osg::UserDataContainer*)this);
		_obj.pushArg(i);
		return (_obj.callFunction<void>());
	};

	// osg::Object * osg::UserDataContainer::getUserObject(unsigned int i)
	osg::Object * getUserObject(unsigned int i) {
		THROW_IF(!_obj.pushFunction("getUserObject"),"No implementation for abstract function osg::UserDataContainer::getUserObject");
		_obj.pushArg((osg::UserDataContainer*)this);
		_obj.pushArg(i);
		return (_obj.callFunction<osg::Object*>());
	};

	// const osg::Object * osg::UserDataContainer::getUserObject(unsigned int i) const
	const osg::Object * getUserObject(unsigned int i) const {
		THROW_IF(!_obj.pushFunction("getUserObject"),"No implementation for abstract function osg::UserDataContainer::getUserObject");
		_obj.pushArg((osg::UserDataContainer*)this);
		_obj.pushArg(i);
		return (_obj.callFunction<osg::Object*>());
	};

	// unsigned int osg::UserDataContainer::getNumUserObjects() const
	unsigned int getNumUserObjects() const {
		THROW_IF(!_obj.pushFunction("getNumUserObjects"),"No implementation for abstract function osg::UserDataContainer::getNumUserObjects");
		_obj.pushArg((osg::UserDataContainer*)this);
		return (_obj.callFunction<unsigned int>());
	};

	// unsigned int osg::UserDataContainer::getUserObjectIndex(const osg::Object * obj, unsigned int startPos = 0) const
	unsigned int getUserObjectIndex(const osg::Object * obj, unsigned int startPos = 0) const {
		THROW_IF(!_obj.pushFunction("getUserObjectIndex"),"No implementation for abstract function osg::UserDataContainer::getUserObjectIndex");
		_obj.pushArg((osg::UserDataContainer*)this);
		_obj.pushArg(obj);
		_obj.pushArg(startPos);
		return (_obj.callFunction<unsigned int>());
	};

	// unsigned int osg::UserDataContainer::getUserObjectIndex(const std::string & name, unsigned int startPos = 0) const
	unsigned int getUserObjectIndex(const std::string & name, unsigned int startPos = 0) const {
		THROW_IF(!_obj.pushFunction("getUserObjectIndex"),"No implementation for abstract function osg::UserDataContainer::getUserObjectIndex");
		_obj.pushArg((osg::UserDataContainer*)this);
		_obj.pushArg(name);
		_obj.pushArg(startPos);
		return (_obj.callFunction<unsigned int>());
	};

	// osg::Object * osg::UserDataContainer::getUserObject(const std::string & name, unsigned int startPos = 0)
	osg::Object * getUserObject(const std::string & name, unsigned int startPos = 0) {
		if(_obj.pushFunction("getUserObject")) {
			_obj.pushArg((osg::UserDataContainer*)this);
			_obj.pushArg(name);
			_obj.pushArg(startPos);
			return (_obj.callFunction<osg::Object*>());
		}

		return UserDataContainer::getUserObject(name, startPos);
	};

	// const osg::Object * osg::UserDataContainer::getUserObject(const std::string & name, unsigned int startPos = 0) const
	const osg::Object * getUserObject(const std::string & name, unsigned int startPos = 0) const {
		if(_obj.pushFunction("getUserObject")) {
			_obj.pushArg((osg::UserDataContainer*)this);
			_obj.pushArg(name);
			_obj.pushArg(startPos);
			return (_obj.callFunction<osg::Object*>());
		}

		return UserDataContainer::getUserObject(name, startPos);
	};

	// void osg::UserDataContainer::setDescriptions(const osg::UserDataContainer::DescriptionList & descriptions)
	void setDescriptions(const osg::UserDataContainer::DescriptionList & descriptions) {
		THROW_IF(!_obj.pushFunction("setDescriptions"),"No implementation for abstract function osg::UserDataContainer::setDescriptions");
		_obj.pushArg((osg::UserDataContainer*)this);
		_obj.pushArg(&descriptions);
		return (_obj.callFunction<void>());
	};

	// osg::UserDataContainer::DescriptionList & osg::UserDataContainer::getDescriptions()
	osg::UserDataContainer::DescriptionList & getDescriptions() {
		THROW_IF(!_obj.pushFunction("getDescriptions"),"No implementation for abstract function osg::UserDataContainer::getDescriptions");
		_obj.pushArg((osg::UserDataContainer*)this);
		return *(_obj.callFunction<osg::UserDataContainer::DescriptionList*>());
	};

	// const osg::UserDataContainer::DescriptionList & osg::UserDataContainer::getDescriptions() const
	const osg::UserDataContainer::DescriptionList & getDescriptions() const {
		THROW_IF(!_obj.pushFunction("getDescriptions"),"No implementation for abstract function osg::UserDataContainer::getDescriptions");
		_obj.pushArg((osg::UserDataContainer*)this);
		return *(_obj.callFunction<osg::UserDataContainer::DescriptionList*>());
	};

	// unsigned int osg::UserDataContainer::getNumDescriptions() const
	unsigned int getNumDescriptions() const {
		THROW_IF(!_obj.pushFunction("getNumDescriptions"),"No implementation for abstract function osg::UserDataContainer::getNumDescriptions");
		_obj.pushArg((osg::UserDataContainer*)this);
		return (_obj.callFunction<unsigned int>());
	};

	// void osg::UserDataContainer::addDescription(const std::string & desc)
	void addDescription(const std::string & desc) {
		THROW_IF(!_obj.pushFunction("addDescription"),"No implementation for abstract function osg::UserDataContainer::addDescription");
		_obj.pushArg((osg::UserDataContainer*)this);
		_obj.pushArg(desc);
		return (_obj.callFunction<void>());
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

		wrapper_osg_UserDataContainer* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_UserDataContainer >(L,1);
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


		wrapper_osg_UserDataContainer* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_UserDataContainer >(L,1);
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


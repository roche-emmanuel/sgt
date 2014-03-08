#ifndef _WRAPPERS_WRAPPER_OSG_SHADER_H_
#define _WRAPPERS_WRAPPER_OSG_SHADER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <osg/Shader>

class wrapper_osg_Shader : public osg::Shader, public luna_wrapper_base {

public:
		

	~wrapper_osg_Shader() {
		logDEBUG3("Calling delete function for wrapper osg_Shader");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osg::Shader*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_Shader(lua_State* L, lua_Table* dum, osg::Shader::Type type = osg::Shader::UNDEFINED) 
		: osg::Shader(type), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osg::Shader*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_osg_Shader(lua_State* L, lua_Table* dum, osg::Shader::Type type, const std::string & source) 
		: osg::Shader(type, source), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osg::Shader*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_osg_Shader(lua_State* L, lua_Table* dum, osg::Shader::Type type, osg::ShaderBinary * shaderBinary) 
		: osg::Shader(type, shaderBinary), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osg::Shader*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_osg_Shader(lua_State* L, lua_Table* dum, const osg::Shader & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) 
		: osg::Shader(rhs, copyop), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osg::Shader*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void osg::Object::setThreadSafeRefUnref(bool threadSafe)
	void setThreadSafeRefUnref(bool threadSafe) {
		if(_obj.pushFunction("setThreadSafeRefUnref")) {
			_obj.pushArg((osg::Shader*)this);
			_obj.pushArg(threadSafe);
			return (_obj.callFunction<void>());
		}

		return Shader::setThreadSafeRefUnref(threadSafe);
	};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg((osg::Shader*)this);
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return Shader::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			_obj.pushArg((osg::Shader*)this);
			return (_obj.callFunction<void>());
		}

		return Shader::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg((osg::Shader*)this);
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return Shader::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			_obj.pushArg((osg::Shader*)this);
			return (_obj.callFunction<osg::Referenced*>());
		}

		return Shader::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			_obj.pushArg((osg::Shader*)this);
			return (_obj.callFunction<osg::Referenced*>());
		}

		return Shader::getUserData();
	};

	// osg::Object * osg::Shader::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			_obj.pushArg((osg::Shader*)this);
			return (_obj.callFunction<osg::Object*>());
		}

		return Shader::cloneType();
	};

	// osg::Object * osg::Shader::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg((osg::Shader*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return Shader::clone(arg1);
	};

	// bool osg::Shader::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg((osg::Shader*)this);
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return Shader::isSameKindAs(obj);
	};

	// const char * osg::Shader::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			_obj.pushArg((osg::Shader*)this);
			return (_obj.callFunction<const char*>());
		}

		return Shader::libraryName();
	};

	// const char * osg::Shader::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			_obj.pushArg((osg::Shader*)this);
			return (_obj.callFunction<const char*>());
		}

		return Shader::className();
	};

	// void osg::Shader::releaseGLObjects(osg::State * state = 0) const
	void releaseGLObjects(osg::State * state = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg((osg::Shader*)this);
			_obj.pushArg(state);
			return (_obj.callFunction<void>());
		}

		return Shader::releaseGLObjects(state);
	};


	// Protected non-virtual methods:
	// bool osg::Shader::addProgramRef(osg::Program * program)
	bool public_addProgramRef(osg::Program * program) {
		return osg::Shader::addProgramRef(program);
	};

	// bool osg::Shader::removeProgramRef(osg::Program * program)
	bool public_removeProgramRef(osg::Program * program) {
		return osg::Shader::removeProgramRef(program);
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
	inline static bool _lg_typecheck_public_addProgramRef(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_removeProgramRef(lua_State *L) {
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
	// bool osg::Shader::public_addProgramRef(osg::Program * program)
	static int _bind_public_addProgramRef(lua_State *L) {
		if (!_lg_typecheck_public_addProgramRef(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Shader::public_addProgramRef(osg::Program * program) function, expected prototype:\nbool osg::Shader::public_addProgramRef(osg::Program * program)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Program* program=(Luna< osg::Referenced >::checkSubType< osg::Program >(L,2));

		wrapper_osg_Shader* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_Shader >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Shader::public_addProgramRef(osg::Program *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->public_addProgramRef(program);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Shader::public_removeProgramRef(osg::Program * program)
	static int _bind_public_removeProgramRef(lua_State *L) {
		if (!_lg_typecheck_public_removeProgramRef(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Shader::public_removeProgramRef(osg::Program * program) function, expected prototype:\nbool osg::Shader::public_removeProgramRef(osg::Program * program)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Program* program=(Luna< osg::Referenced >::checkSubType< osg::Program >(L,2));

		wrapper_osg_Shader* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_Shader >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Shader::public_removeProgramRef(osg::Program *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->public_removeProgramRef(program);
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

		wrapper_osg_Shader* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_Shader >(L,1);
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


		wrapper_osg_Shader* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_Shader >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_deleteUsingDeleteHandler() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_deleteUsingDeleteHandler();

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"addProgramRef",_bind_public_addProgramRef},
		{"removeProgramRef",_bind_public_removeProgramRef},
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


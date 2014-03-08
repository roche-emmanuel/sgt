#ifndef _WRAPPERS_WRAPPER_OSGDB_INPUTSTREAM_H_
#define _WRAPPERS_WRAPPER_OSGDB_INPUTSTREAM_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <osgDB/InputStream>

class wrapper_osgDB_InputStream : public osgDB::InputStream, public luna_wrapper_base {

public:
		

	~wrapper_osgDB_InputStream() {
		logDEBUG3("Calling delete function for wrapper osgDB_InputStream");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osgDB::InputStream*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgDB_InputStream(lua_State* L, lua_Table* dum, const osgDB::Options * options) 
		: osgDB::InputStream(options), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osgDB::InputStream*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:

	// Protected non-virtual methods:
	// void osgDB::InputStream::checkStream()
	void public_checkStream() {
		return osgDB::InputStream::checkStream();
	};

	// void osgDB::InputStream::setWrapperSchema(const std::string & name, const std::string & properties)
	void public_setWrapperSchema(const std::string & name, const std::string & properties) {
		return osgDB::InputStream::setWrapperSchema(name, properties);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_checkStream(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_setWrapperSchema(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void osgDB::InputStream::public_checkStream()
	static int _bind_public_checkStream(lua_State *L) {
		if (!_lg_typecheck_public_checkStream(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::InputStream::public_checkStream() function, expected prototype:\nvoid osgDB::InputStream::public_checkStream()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wrapper_osgDB_InputStream* self=Luna< osgDB::InputStream >::checkSubType< wrapper_osgDB_InputStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::InputStream::public_checkStream(). Got : '%s'\n%s",typeid(Luna< osgDB::InputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_checkStream();

		return 0;
	}

	// void osgDB::InputStream::public_setWrapperSchema(const std::string & name, const std::string & properties)
	static int _bind_public_setWrapperSchema(lua_State *L) {
		if (!_lg_typecheck_public_setWrapperSchema(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::InputStream::public_setWrapperSchema(const std::string & name, const std::string & properties) function, expected prototype:\nvoid osgDB::InputStream::public_setWrapperSchema(const std::string & name, const std::string & properties)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));
		std::string properties(lua_tostring(L,3),lua_objlen(L,3));

		wrapper_osgDB_InputStream* self=Luna< osgDB::InputStream >::checkSubType< wrapper_osgDB_InputStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::InputStream::public_setWrapperSchema(const std::string &, const std::string &). Got : '%s'\n%s",typeid(Luna< osgDB::InputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_setWrapperSchema(name, properties);

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"checkStream",_bind_public_checkStream},
		{"setWrapperSchema",_bind_public_setWrapperSchema},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif


#ifndef _WRAPPERS_WRAPPER_OSGDB_OUTPUTSTREAM_H_
#define _WRAPPERS_WRAPPER_OSGDB_OUTPUTSTREAM_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <osgDB/OutputStream>

class wrapper_osgDB_OutputStream : public osgDB::OutputStream, public luna_wrapper_base {

public:
		

	~wrapper_osgDB_OutputStream() {
		logDEBUG3("Calling delete function for wrapper osgDB_OutputStream");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osgDB::OutputStream*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgDB_OutputStream(lua_State* L, lua_Table* dum, const osgDB::Options * options) 
		: osgDB::OutputStream(options), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osgDB::OutputStream*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:

	// Protected non-virtual methods:
	// unsigned int osgDB::OutputStream::findOrCreateArrayID(const osg::Array * array, bool & newID)
	unsigned int public_findOrCreateArrayID(const osg::Array * array, bool & newID) {
		return osgDB::OutputStream::findOrCreateArrayID(array, newID);
	};

	// unsigned int osgDB::OutputStream::findOrCreateObjectID(const osg::Object * obj, bool & newID)
	unsigned int public_findOrCreateObjectID(const osg::Object * obj, bool & newID) {
		return osgDB::OutputStream::findOrCreateObjectID(obj, newID);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_findOrCreateArrayID(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_findOrCreateObjectID(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// unsigned int osgDB::OutputStream::public_findOrCreateArrayID(const osg::Array * array, bool & newID)
	static int _bind_public_findOrCreateArrayID(lua_State *L) {
		if (!_lg_typecheck_public_findOrCreateArrayID(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osgDB::OutputStream::public_findOrCreateArrayID(const osg::Array * array, bool & newID) function, expected prototype:\nunsigned int osgDB::OutputStream::public_findOrCreateArrayID(const osg::Array * array, bool & newID)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Array* array=(Luna< osg::Referenced >::checkSubType< osg::Array >(L,2));
		bool newID=(bool)(lua_toboolean(L,3)==1);

		wrapper_osgDB_OutputStream* self=Luna< osgDB::OutputStream >::checkSubType< wrapper_osgDB_OutputStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osgDB::OutputStream::public_findOrCreateArrayID(const osg::Array *, bool &). Got : '%s'\n%s",typeid(Luna< osgDB::OutputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->public_findOrCreateArrayID(array, newID);
		lua_pushnumber(L,lret);

		lua_pushboolean(L,newID?1:0);
		return 2;
	}

	// unsigned int osgDB::OutputStream::public_findOrCreateObjectID(const osg::Object * obj, bool & newID)
	static int _bind_public_findOrCreateObjectID(lua_State *L) {
		if (!_lg_typecheck_public_findOrCreateObjectID(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osgDB::OutputStream::public_findOrCreateObjectID(const osg::Object * obj, bool & newID) function, expected prototype:\nunsigned int osgDB::OutputStream::public_findOrCreateObjectID(const osg::Object * obj, bool & newID)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));
		bool newID=(bool)(lua_toboolean(L,3)==1);

		wrapper_osgDB_OutputStream* self=Luna< osgDB::OutputStream >::checkSubType< wrapper_osgDB_OutputStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osgDB::OutputStream::public_findOrCreateObjectID(const osg::Object *, bool &). Got : '%s'\n%s",typeid(Luna< osgDB::OutputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->public_findOrCreateObjectID(obj, newID);
		lua_pushnumber(L,lret);

		lua_pushboolean(L,newID?1:0);
		return 2;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"findOrCreateArrayID",_bind_public_findOrCreateArrayID},
		{"findOrCreateObjectID",_bind_public_findOrCreateObjectID},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif


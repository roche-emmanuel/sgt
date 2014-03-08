#ifndef _WRAPPERS_WRAPPER_OSGDB_FIELD_H_
#define _WRAPPERS_WRAPPER_OSGDB_FIELD_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <osgDB/Input>

class wrapper_osgDB_Field : public osgDB::Field, public luna_wrapper_base {

public:
		

	~wrapper_osgDB_Field() {
		logDEBUG3("Calling delete function for wrapper osgDB_Field");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osgDB::Field*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgDB_Field(lua_State* L, lua_Table* dum) 
		: osgDB::Field(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osgDB::Field*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_osgDB_Field(lua_State* L, lua_Table* dum, const osgDB::Field & field) 
		: osgDB::Field(field), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osgDB::Field*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// osgDB::Field & osgDB::Field::operator=(const osgDB::Field & ic)
	osgDB::Field & operator=(const osgDB::Field & ic) {
		if(_obj.pushFunction("op_assign")) {
			_obj.pushArg((osgDB::Field*)this);
			_obj.pushArg(&ic);
			return *(_obj.callFunction<osgDB::Field*>());
		}

		return Field::operator=(ic);
	};


	// Protected non-virtual methods:
	// void osgDB::Field::_init()
	void public__init() {
		return osgDB::Field::_init();
	};

	// void osgDB::Field::_free()
	void public__free() {
		return osgDB::Field::_free();
	};

	// void osgDB::Field::_copy(const osgDB::Field & ic)
	void public__copy(const osgDB::Field & ic) {
		return osgDB::Field::_copy(ic);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public__init(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public__free(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public__copy(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,7546407) ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void osgDB::Field::public__init()
	static int _bind_public__init(lua_State *L) {
		if (!_lg_typecheck_public__init(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::Field::public__init() function, expected prototype:\nvoid osgDB::Field::public__init()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wrapper_osgDB_Field* self=Luna< osgDB::Field >::checkSubType< wrapper_osgDB_Field >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::Field::public__init(). Got : '%s'\n%s",typeid(Luna< osgDB::Field >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public__init();

		return 0;
	}

	// void osgDB::Field::public__free()
	static int _bind_public__free(lua_State *L) {
		if (!_lg_typecheck_public__free(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::Field::public__free() function, expected prototype:\nvoid osgDB::Field::public__free()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wrapper_osgDB_Field* self=Luna< osgDB::Field >::checkSubType< wrapper_osgDB_Field >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::Field::public__free(). Got : '%s'\n%s",typeid(Luna< osgDB::Field >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public__free();

		return 0;
	}

	// void osgDB::Field::public__copy(const osgDB::Field & ic)
	static int _bind_public__copy(lua_State *L) {
		if (!_lg_typecheck_public__copy(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::Field::public__copy(const osgDB::Field & ic) function, expected prototype:\nvoid osgDB::Field::public__copy(const osgDB::Field & ic)\nClass arguments details:\narg 1 ID = 7546407\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgDB::Field* ic_ptr=(Luna< osgDB::Field >::check(L,2));
		if( !ic_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ic in osgDB::Field::public__copy function");
		}
		const osgDB::Field & ic=*ic_ptr;

		wrapper_osgDB_Field* self=Luna< osgDB::Field >::checkSubType< wrapper_osgDB_Field >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::Field::public__copy(const osgDB::Field &). Got : '%s'\n%s",typeid(Luna< osgDB::Field >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public__copy(ic);

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"_init",_bind_public__init},
		{"_free",_bind_public__free},
		{"_copy",_bind_public__copy},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif


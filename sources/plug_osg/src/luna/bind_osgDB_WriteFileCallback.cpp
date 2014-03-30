#include <plug_common.h>

#include <luna/wrappers/wrapper_osgDB_WriteFileCallback.h>

class luna_wrapper_osgDB_WriteFileCallback {
public:
	typedef Luna< osgDB::WriteFileCallback > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<osg::Referenced,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::WriteFileCallback* self= (osgDB::WriteFileCallback*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgDB::WriteFileCallback >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		//osgDB::WriteFileCallback* ptr= dynamic_cast< osgDB::WriteFileCallback* >(Luna< osg::Referenced >::check(L,1));
		osgDB::WriteFileCallback* ptr= luna_caster< osg::Referenced, osgDB::WriteFileCallback >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgDB::WriteFileCallback >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_writeObject(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeImage(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeHeightField(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeNode(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeShader(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_writeObject(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_writeImage(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_writeHeightField(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_writeNode(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_writeShader(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgDB::WriteFileCallback::WriteFileCallback()
	static osgDB::WriteFileCallback* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::WriteFileCallback::WriteFileCallback() function, expected prototype:\nosgDB::WriteFileCallback::WriteFileCallback()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osgDB::WriteFileCallback();
	}

	// osgDB::WriteFileCallback::WriteFileCallback(lua_Table * data)
	static osgDB::WriteFileCallback* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::WriteFileCallback::WriteFileCallback(lua_Table * data) function, expected prototype:\nosgDB::WriteFileCallback::WriteFileCallback(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgDB_WriteFileCallback(L,NULL);
	}

	// Overload binder for osgDB::WriteFileCallback::WriteFileCallback
	static osgDB::WriteFileCallback* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function WriteFileCallback, cannot match any of the overloads for function WriteFileCallback:\n  WriteFileCallback()\n  WriteFileCallback(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// osgDB::ReaderWriter::WriteResult osgDB::WriteFileCallback::writeObject(const osg::Object & obj, const std::string & fileName, const osgDB::Options * options)
	static int _bind_writeObject(lua_State *L) {
		if (!_lg_typecheck_writeObject(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::WriteResult osgDB::WriteFileCallback::writeObject(const osg::Object & obj, const std::string & fileName, const osgDB::Options * options) function, expected prototype:\nosgDB::ReaderWriter::WriteResult osgDB::WriteFileCallback::writeObject(const osg::Object & obj, const std::string & fileName, const osgDB::Options * options)\nClass arguments details:\narg 1 ID = 50169651\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj_ptr=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));
		if( !obj_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg obj in osgDB::WriteFileCallback::writeObject function");
		}
		const osg::Object & obj=*obj_ptr;
		std::string fileName(lua_tostring(L,3),lua_objlen(L,3));
		const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,4));

		osgDB::WriteFileCallback* self=Luna< osg::Referenced >::checkSubType< osgDB::WriteFileCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::WriteResult osgDB::WriteFileCallback::writeObject(const osg::Object &, const std::string &, const osgDB::Options *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::WriteResult stack_lret = self->writeObject(obj, fileName, options);
		osgDB::ReaderWriter::WriteResult* lret = new osgDB::ReaderWriter::WriteResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::WriteResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::WriteResult osgDB::WriteFileCallback::writeImage(const osg::Image & obj, const std::string & fileName, const osgDB::Options * options)
	static int _bind_writeImage(lua_State *L) {
		if (!_lg_typecheck_writeImage(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::WriteResult osgDB::WriteFileCallback::writeImage(const osg::Image & obj, const std::string & fileName, const osgDB::Options * options) function, expected prototype:\nosgDB::ReaderWriter::WriteResult osgDB::WriteFileCallback::writeImage(const osg::Image & obj, const std::string & fileName, const osgDB::Options * options)\nClass arguments details:\narg 1 ID = 50169651\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Image* obj_ptr=(Luna< osg::Referenced >::checkSubType< osg::Image >(L,2));
		if( !obj_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg obj in osgDB::WriteFileCallback::writeImage function");
		}
		const osg::Image & obj=*obj_ptr;
		std::string fileName(lua_tostring(L,3),lua_objlen(L,3));
		const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,4));

		osgDB::WriteFileCallback* self=Luna< osg::Referenced >::checkSubType< osgDB::WriteFileCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::WriteResult osgDB::WriteFileCallback::writeImage(const osg::Image &, const std::string &, const osgDB::Options *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::WriteResult stack_lret = self->writeImage(obj, fileName, options);
		osgDB::ReaderWriter::WriteResult* lret = new osgDB::ReaderWriter::WriteResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::WriteResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::WriteResult osgDB::WriteFileCallback::writeHeightField(const osg::HeightField & obj, const std::string & fileName, const osgDB::Options * options)
	static int _bind_writeHeightField(lua_State *L) {
		if (!_lg_typecheck_writeHeightField(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::WriteResult osgDB::WriteFileCallback::writeHeightField(const osg::HeightField & obj, const std::string & fileName, const osgDB::Options * options) function, expected prototype:\nosgDB::ReaderWriter::WriteResult osgDB::WriteFileCallback::writeHeightField(const osg::HeightField & obj, const std::string & fileName, const osgDB::Options * options)\nClass arguments details:\narg 1 ID = 50169651\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::HeightField* obj_ptr=(Luna< osg::Referenced >::checkSubType< osg::HeightField >(L,2));
		if( !obj_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg obj in osgDB::WriteFileCallback::writeHeightField function");
		}
		const osg::HeightField & obj=*obj_ptr;
		std::string fileName(lua_tostring(L,3),lua_objlen(L,3));
		const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,4));

		osgDB::WriteFileCallback* self=Luna< osg::Referenced >::checkSubType< osgDB::WriteFileCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::WriteResult osgDB::WriteFileCallback::writeHeightField(const osg::HeightField &, const std::string &, const osgDB::Options *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::WriteResult stack_lret = self->writeHeightField(obj, fileName, options);
		osgDB::ReaderWriter::WriteResult* lret = new osgDB::ReaderWriter::WriteResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::WriteResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::WriteResult osgDB::WriteFileCallback::writeNode(const osg::Node & obj, const std::string & fileName, const osgDB::Options * options)
	static int _bind_writeNode(lua_State *L) {
		if (!_lg_typecheck_writeNode(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::WriteResult osgDB::WriteFileCallback::writeNode(const osg::Node & obj, const std::string & fileName, const osgDB::Options * options) function, expected prototype:\nosgDB::ReaderWriter::WriteResult osgDB::WriteFileCallback::writeNode(const osg::Node & obj, const std::string & fileName, const osgDB::Options * options)\nClass arguments details:\narg 1 ID = 50169651\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Node* obj_ptr=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		if( !obj_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg obj in osgDB::WriteFileCallback::writeNode function");
		}
		const osg::Node & obj=*obj_ptr;
		std::string fileName(lua_tostring(L,3),lua_objlen(L,3));
		const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,4));

		osgDB::WriteFileCallback* self=Luna< osg::Referenced >::checkSubType< osgDB::WriteFileCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::WriteResult osgDB::WriteFileCallback::writeNode(const osg::Node &, const std::string &, const osgDB::Options *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::WriteResult stack_lret = self->writeNode(obj, fileName, options);
		osgDB::ReaderWriter::WriteResult* lret = new osgDB::ReaderWriter::WriteResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::WriteResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::WriteResult osgDB::WriteFileCallback::writeShader(const osg::Shader & obj, const std::string & fileName, const osgDB::Options * options)
	static int _bind_writeShader(lua_State *L) {
		if (!_lg_typecheck_writeShader(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::WriteResult osgDB::WriteFileCallback::writeShader(const osg::Shader & obj, const std::string & fileName, const osgDB::Options * options) function, expected prototype:\nosgDB::ReaderWriter::WriteResult osgDB::WriteFileCallback::writeShader(const osg::Shader & obj, const std::string & fileName, const osgDB::Options * options)\nClass arguments details:\narg 1 ID = 50169651\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Shader* obj_ptr=(Luna< osg::Referenced >::checkSubType< osg::Shader >(L,2));
		if( !obj_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg obj in osgDB::WriteFileCallback::writeShader function");
		}
		const osg::Shader & obj=*obj_ptr;
		std::string fileName(lua_tostring(L,3),lua_objlen(L,3));
		const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,4));

		osgDB::WriteFileCallback* self=Luna< osg::Referenced >::checkSubType< osgDB::WriteFileCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::WriteResult osgDB::WriteFileCallback::writeShader(const osg::Shader &, const std::string &, const osgDB::Options *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::WriteResult stack_lret = self->writeShader(obj, fileName, options);
		osgDB::ReaderWriter::WriteResult* lret = new osgDB::ReaderWriter::WriteResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::WriteResult >::push(L,lret,true);

		return 1;
	}

	// void osgDB::WriteFileCallback::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::WriteFileCallback::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgDB::WriteFileCallback::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgDB::WriteFileCallback* self=Luna< osg::Referenced >::checkSubType< osgDB::WriteFileCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::WriteFileCallback::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->WriteFileCallback::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// osgDB::ReaderWriter::WriteResult osgDB::WriteFileCallback::base_writeObject(const osg::Object & obj, const std::string & fileName, const osgDB::Options * options)
	static int _bind_base_writeObject(lua_State *L) {
		if (!_lg_typecheck_base_writeObject(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::WriteResult osgDB::WriteFileCallback::base_writeObject(const osg::Object & obj, const std::string & fileName, const osgDB::Options * options) function, expected prototype:\nosgDB::ReaderWriter::WriteResult osgDB::WriteFileCallback::base_writeObject(const osg::Object & obj, const std::string & fileName, const osgDB::Options * options)\nClass arguments details:\narg 1 ID = 50169651\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj_ptr=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));
		if( !obj_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg obj in osgDB::WriteFileCallback::base_writeObject function");
		}
		const osg::Object & obj=*obj_ptr;
		std::string fileName(lua_tostring(L,3),lua_objlen(L,3));
		const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,4));

		osgDB::WriteFileCallback* self=Luna< osg::Referenced >::checkSubType< osgDB::WriteFileCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::WriteResult osgDB::WriteFileCallback::base_writeObject(const osg::Object &, const std::string &, const osgDB::Options *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::WriteResult stack_lret = self->WriteFileCallback::writeObject(obj, fileName, options);
		osgDB::ReaderWriter::WriteResult* lret = new osgDB::ReaderWriter::WriteResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::WriteResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::WriteResult osgDB::WriteFileCallback::base_writeImage(const osg::Image & obj, const std::string & fileName, const osgDB::Options * options)
	static int _bind_base_writeImage(lua_State *L) {
		if (!_lg_typecheck_base_writeImage(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::WriteResult osgDB::WriteFileCallback::base_writeImage(const osg::Image & obj, const std::string & fileName, const osgDB::Options * options) function, expected prototype:\nosgDB::ReaderWriter::WriteResult osgDB::WriteFileCallback::base_writeImage(const osg::Image & obj, const std::string & fileName, const osgDB::Options * options)\nClass arguments details:\narg 1 ID = 50169651\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Image* obj_ptr=(Luna< osg::Referenced >::checkSubType< osg::Image >(L,2));
		if( !obj_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg obj in osgDB::WriteFileCallback::base_writeImage function");
		}
		const osg::Image & obj=*obj_ptr;
		std::string fileName(lua_tostring(L,3),lua_objlen(L,3));
		const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,4));

		osgDB::WriteFileCallback* self=Luna< osg::Referenced >::checkSubType< osgDB::WriteFileCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::WriteResult osgDB::WriteFileCallback::base_writeImage(const osg::Image &, const std::string &, const osgDB::Options *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::WriteResult stack_lret = self->WriteFileCallback::writeImage(obj, fileName, options);
		osgDB::ReaderWriter::WriteResult* lret = new osgDB::ReaderWriter::WriteResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::WriteResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::WriteResult osgDB::WriteFileCallback::base_writeHeightField(const osg::HeightField & obj, const std::string & fileName, const osgDB::Options * options)
	static int _bind_base_writeHeightField(lua_State *L) {
		if (!_lg_typecheck_base_writeHeightField(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::WriteResult osgDB::WriteFileCallback::base_writeHeightField(const osg::HeightField & obj, const std::string & fileName, const osgDB::Options * options) function, expected prototype:\nosgDB::ReaderWriter::WriteResult osgDB::WriteFileCallback::base_writeHeightField(const osg::HeightField & obj, const std::string & fileName, const osgDB::Options * options)\nClass arguments details:\narg 1 ID = 50169651\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::HeightField* obj_ptr=(Luna< osg::Referenced >::checkSubType< osg::HeightField >(L,2));
		if( !obj_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg obj in osgDB::WriteFileCallback::base_writeHeightField function");
		}
		const osg::HeightField & obj=*obj_ptr;
		std::string fileName(lua_tostring(L,3),lua_objlen(L,3));
		const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,4));

		osgDB::WriteFileCallback* self=Luna< osg::Referenced >::checkSubType< osgDB::WriteFileCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::WriteResult osgDB::WriteFileCallback::base_writeHeightField(const osg::HeightField &, const std::string &, const osgDB::Options *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::WriteResult stack_lret = self->WriteFileCallback::writeHeightField(obj, fileName, options);
		osgDB::ReaderWriter::WriteResult* lret = new osgDB::ReaderWriter::WriteResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::WriteResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::WriteResult osgDB::WriteFileCallback::base_writeNode(const osg::Node & obj, const std::string & fileName, const osgDB::Options * options)
	static int _bind_base_writeNode(lua_State *L) {
		if (!_lg_typecheck_base_writeNode(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::WriteResult osgDB::WriteFileCallback::base_writeNode(const osg::Node & obj, const std::string & fileName, const osgDB::Options * options) function, expected prototype:\nosgDB::ReaderWriter::WriteResult osgDB::WriteFileCallback::base_writeNode(const osg::Node & obj, const std::string & fileName, const osgDB::Options * options)\nClass arguments details:\narg 1 ID = 50169651\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Node* obj_ptr=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		if( !obj_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg obj in osgDB::WriteFileCallback::base_writeNode function");
		}
		const osg::Node & obj=*obj_ptr;
		std::string fileName(lua_tostring(L,3),lua_objlen(L,3));
		const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,4));

		osgDB::WriteFileCallback* self=Luna< osg::Referenced >::checkSubType< osgDB::WriteFileCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::WriteResult osgDB::WriteFileCallback::base_writeNode(const osg::Node &, const std::string &, const osgDB::Options *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::WriteResult stack_lret = self->WriteFileCallback::writeNode(obj, fileName, options);
		osgDB::ReaderWriter::WriteResult* lret = new osgDB::ReaderWriter::WriteResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::WriteResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::WriteResult osgDB::WriteFileCallback::base_writeShader(const osg::Shader & obj, const std::string & fileName, const osgDB::Options * options)
	static int _bind_base_writeShader(lua_State *L) {
		if (!_lg_typecheck_base_writeShader(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::WriteResult osgDB::WriteFileCallback::base_writeShader(const osg::Shader & obj, const std::string & fileName, const osgDB::Options * options) function, expected prototype:\nosgDB::ReaderWriter::WriteResult osgDB::WriteFileCallback::base_writeShader(const osg::Shader & obj, const std::string & fileName, const osgDB::Options * options)\nClass arguments details:\narg 1 ID = 50169651\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Shader* obj_ptr=(Luna< osg::Referenced >::checkSubType< osg::Shader >(L,2));
		if( !obj_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg obj in osgDB::WriteFileCallback::base_writeShader function");
		}
		const osg::Shader & obj=*obj_ptr;
		std::string fileName(lua_tostring(L,3),lua_objlen(L,3));
		const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,4));

		osgDB::WriteFileCallback* self=Luna< osg::Referenced >::checkSubType< osgDB::WriteFileCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::WriteResult osgDB::WriteFileCallback::base_writeShader(const osg::Shader &, const std::string &, const osgDB::Options *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::WriteResult stack_lret = self->WriteFileCallback::writeShader(obj, fileName, options);
		osgDB::ReaderWriter::WriteResult* lret = new osgDB::ReaderWriter::WriteResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::WriteResult >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

osgDB::WriteFileCallback* LunaTraits< osgDB::WriteFileCallback >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgDB_WriteFileCallback::_bind_ctor(L);
}

void LunaTraits< osgDB::WriteFileCallback >::_bind_dtor(osgDB::WriteFileCallback* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgDB::WriteFileCallback >::className[] = "WriteFileCallback";
const char LunaTraits< osgDB::WriteFileCallback >::fullName[] = "osgDB::WriteFileCallback";
const char LunaTraits< osgDB::WriteFileCallback >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::WriteFileCallback >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osgDB::WriteFileCallback >::hash = 34993429;
const int LunaTraits< osgDB::WriteFileCallback >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgDB::WriteFileCallback >::methods[] = {
	{"writeObject", &luna_wrapper_osgDB_WriteFileCallback::_bind_writeObject},
	{"writeImage", &luna_wrapper_osgDB_WriteFileCallback::_bind_writeImage},
	{"writeHeightField", &luna_wrapper_osgDB_WriteFileCallback::_bind_writeHeightField},
	{"writeNode", &luna_wrapper_osgDB_WriteFileCallback::_bind_writeNode},
	{"writeShader", &luna_wrapper_osgDB_WriteFileCallback::_bind_writeShader},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgDB_WriteFileCallback::_bind_base_setThreadSafeRefUnref},
	{"base_writeObject", &luna_wrapper_osgDB_WriteFileCallback::_bind_base_writeObject},
	{"base_writeImage", &luna_wrapper_osgDB_WriteFileCallback::_bind_base_writeImage},
	{"base_writeHeightField", &luna_wrapper_osgDB_WriteFileCallback::_bind_base_writeHeightField},
	{"base_writeNode", &luna_wrapper_osgDB_WriteFileCallback::_bind_base_writeNode},
	{"base_writeShader", &luna_wrapper_osgDB_WriteFileCallback::_bind_base_writeShader},
	{"fromVoid", &luna_wrapper_osgDB_WriteFileCallback::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgDB_WriteFileCallback::_bind_asVoid},
	{"getTable", &luna_wrapper_osgDB_WriteFileCallback::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::WriteFileCallback >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgDB_WriteFileCallback::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::WriteFileCallback >::enumValues[] = {
	{0,0}
};



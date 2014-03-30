#include <plug_common.h>

#include <luna/wrappers/wrapper_osgDB_BaseSerializer.h>

class luna_wrapper_osgDB_BaseSerializer {
public:
	typedef Luna< osgDB::BaseSerializer > luna_t;

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

		osgDB::BaseSerializer* self= (osgDB::BaseSerializer*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgDB::BaseSerializer >::push(L,self,false);
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
		//osgDB::BaseSerializer* ptr= dynamic_cast< osgDB::BaseSerializer* >(Luna< osg::Referenced >::check(L,1));
		osgDB::BaseSerializer* ptr= luna_caster< osg::Referenced, osgDB::BaseSerializer >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgDB::BaseSerializer >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_read(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,47918182) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_write(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,70071506) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgDB::BaseSerializer::BaseSerializer(lua_Table * data)
	static osgDB::BaseSerializer* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::BaseSerializer::BaseSerializer(lua_Table * data) function, expected prototype:\nosgDB::BaseSerializer::BaseSerializer(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgDB_BaseSerializer(L,NULL);
	}


	// Function binds:
	// bool osgDB::BaseSerializer::read(osgDB::InputStream & arg1, osg::Object & arg2)
	static int _bind_read(lua_State *L) {
		if (!_lg_typecheck_read(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::BaseSerializer::read(osgDB::InputStream & arg1, osg::Object & arg2) function, expected prototype:\nbool osgDB::BaseSerializer::read(osgDB::InputStream & arg1, osg::Object & arg2)\nClass arguments details:\narg 1 ID = 47918182\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::InputStream* _arg1_ptr=(Luna< osgDB::InputStream >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgDB::BaseSerializer::read function");
		}
		osgDB::InputStream & _arg1=*_arg1_ptr;
		osg::Object* _arg2_ptr=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osgDB::BaseSerializer::read function");
		}
		osg::Object & _arg2=*_arg2_ptr;

		osgDB::BaseSerializer* self=Luna< osg::Referenced >::checkSubType< osgDB::BaseSerializer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::BaseSerializer::read(osgDB::InputStream &, osg::Object &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->read(_arg1, _arg2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::BaseSerializer::write(osgDB::OutputStream & arg1, const osg::Object & arg2)
	static int _bind_write(lua_State *L) {
		if (!_lg_typecheck_write(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::BaseSerializer::write(osgDB::OutputStream & arg1, const osg::Object & arg2) function, expected prototype:\nbool osgDB::BaseSerializer::write(osgDB::OutputStream & arg1, const osg::Object & arg2)\nClass arguments details:\narg 1 ID = 70071506\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::OutputStream* _arg1_ptr=(Luna< osgDB::OutputStream >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgDB::BaseSerializer::write function");
		}
		osgDB::OutputStream & _arg1=*_arg1_ptr;
		const osg::Object* _arg2_ptr=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osgDB::BaseSerializer::write function");
		}
		const osg::Object & _arg2=*_arg2_ptr;

		osgDB::BaseSerializer* self=Luna< osg::Referenced >::checkSubType< osgDB::BaseSerializer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::BaseSerializer::write(osgDB::OutputStream &, const osg::Object &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->write(_arg1, _arg2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const std::string & osgDB::BaseSerializer::getName() const
	static int _bind_getName(lua_State *L) {
		if (!_lg_typecheck_getName(L)) {
			luaL_error(L, "luna typecheck failed in const std::string & osgDB::BaseSerializer::getName() const function, expected prototype:\nconst std::string & osgDB::BaseSerializer::getName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::BaseSerializer* self=Luna< osg::Referenced >::checkSubType< osgDB::BaseSerializer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const std::string & osgDB::BaseSerializer::getName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const std::string & lret = self->getName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void osgDB::BaseSerializer::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::BaseSerializer::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgDB::BaseSerializer::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgDB::BaseSerializer* self=Luna< osg::Referenced >::checkSubType< osgDB::BaseSerializer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::BaseSerializer::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->BaseSerializer::setThreadSafeRefUnref(threadSafe);

		return 0;
	}


	// Operator binds:

};

osgDB::BaseSerializer* LunaTraits< osgDB::BaseSerializer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgDB_BaseSerializer::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// bool osgDB::BaseSerializer::read(osgDB::InputStream & arg1, osg::Object & arg2)
	// bool osgDB::BaseSerializer::write(osgDB::OutputStream & arg1, const osg::Object & arg2)
	// const std::string & osgDB::BaseSerializer::getName() const
}

void LunaTraits< osgDB::BaseSerializer >::_bind_dtor(osgDB::BaseSerializer* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgDB::BaseSerializer >::className[] = "BaseSerializer";
const char LunaTraits< osgDB::BaseSerializer >::fullName[] = "osgDB::BaseSerializer";
const char LunaTraits< osgDB::BaseSerializer >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::BaseSerializer >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osgDB::BaseSerializer >::hash = 75447858;
const int LunaTraits< osgDB::BaseSerializer >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgDB::BaseSerializer >::methods[] = {
	{"read", &luna_wrapper_osgDB_BaseSerializer::_bind_read},
	{"write", &luna_wrapper_osgDB_BaseSerializer::_bind_write},
	{"getName", &luna_wrapper_osgDB_BaseSerializer::_bind_getName},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgDB_BaseSerializer::_bind_base_setThreadSafeRefUnref},
	{"fromVoid", &luna_wrapper_osgDB_BaseSerializer::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgDB_BaseSerializer::_bind_asVoid},
	{"getTable", &luna_wrapper_osgDB_BaseSerializer::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::BaseSerializer >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgDB_BaseSerializer::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::BaseSerializer >::enumValues[] = {
	{"RW_UNDEFINED", osgDB::BaseSerializer::RW_UNDEFINED},
	{"RW_USER", osgDB::BaseSerializer::RW_USER},
	{"RW_OBJECT", osgDB::BaseSerializer::RW_OBJECT},
	{"RW_IMAGE", osgDB::BaseSerializer::RW_IMAGE},
	{"RW_LIST", osgDB::BaseSerializer::RW_LIST},
	{"RW_BOOL", osgDB::BaseSerializer::RW_BOOL},
	{"RW_CHAR", osgDB::BaseSerializer::RW_CHAR},
	{"RW_UCHAR", osgDB::BaseSerializer::RW_UCHAR},
	{"RW_SHORT", osgDB::BaseSerializer::RW_SHORT},
	{"RW_USHORT", osgDB::BaseSerializer::RW_USHORT},
	{"RW_INT", osgDB::BaseSerializer::RW_INT},
	{"RW_UINT", osgDB::BaseSerializer::RW_UINT},
	{"RW_FLOAT", osgDB::BaseSerializer::RW_FLOAT},
	{"RW_DOUBLE", osgDB::BaseSerializer::RW_DOUBLE},
	{"RW_VEC2F", osgDB::BaseSerializer::RW_VEC2F},
	{"RW_VEC2D", osgDB::BaseSerializer::RW_VEC2D},
	{"RW_VEC3F", osgDB::BaseSerializer::RW_VEC3F},
	{"RW_VEC3D", osgDB::BaseSerializer::RW_VEC3D},
	{"RW_VEC4F", osgDB::BaseSerializer::RW_VEC4F},
	{"RW_VEC4D", osgDB::BaseSerializer::RW_VEC4D},
	{"RW_QUAT", osgDB::BaseSerializer::RW_QUAT},
	{"RW_PLANE", osgDB::BaseSerializer::RW_PLANE},
	{"RW_MATRIXF", osgDB::BaseSerializer::RW_MATRIXF},
	{"RW_MATRIXD", osgDB::BaseSerializer::RW_MATRIXD},
	{"RW_MATRIX", osgDB::BaseSerializer::RW_MATRIX},
	{"RW_GLENUM", osgDB::BaseSerializer::RW_GLENUM},
	{"RW_STRING", osgDB::BaseSerializer::RW_STRING},
	{"RW_ENUM", osgDB::BaseSerializer::RW_ENUM},
	{0,0}
};



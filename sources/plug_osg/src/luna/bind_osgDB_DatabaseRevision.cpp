#include <plug_common.h>

#include <luna/wrappers/wrapper_osgDB_DatabaseRevision.h>

class luna_wrapper_osgDB_DatabaseRevision {
public:
	typedef Luna< osgDB::DatabaseRevision > luna_t;

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

		osgDB::DatabaseRevision* self= (osgDB::DatabaseRevision*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgDB::DatabaseRevision >::push(L,self,false);
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
		//osgDB::DatabaseRevision* ptr= dynamic_cast< osgDB::DatabaseRevision* >(Luna< osg::Referenced >::check(L,1));
		osgDB::DatabaseRevision* ptr= luna_caster< osg::Referenced, osgDB::DatabaseRevision >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgDB::DatabaseRevision >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osgDB::DatabaseRevision >(L,1))) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( luatop>1 && (!(Luna< osg::CopyOp >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osgDB::DatabaseRevision >(L,2))) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,27134364) ) return false;
		if( luatop>2 && (!(Luna< osg::CopyOp >::check(L,3))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_cloneType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_clone(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isSameKindAs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDatabasePath(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDatabasePath(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setFilesAdded(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFilesAdded_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFilesAdded_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setFilesRemoved(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFilesRemoved_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFilesRemoved_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setFilesModified(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFilesModified_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFilesModified_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isFileBlackListed(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeFile(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_computeDataVariance(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setUserData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getUserData_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getUserData_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_releaseGLObjects(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_cloneType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_clone(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_isSameKindAs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgDB::DatabaseRevision::DatabaseRevision()
	static osgDB::DatabaseRevision* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::DatabaseRevision::DatabaseRevision() function, expected prototype:\nosgDB::DatabaseRevision::DatabaseRevision()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osgDB::DatabaseRevision();
	}

	// osgDB::DatabaseRevision::DatabaseRevision(const osgDB::DatabaseRevision & revision, const osg::CopyOp arg2 = osg::CopyOp::SHALLOW_COPY)
	static osgDB::DatabaseRevision* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::DatabaseRevision::DatabaseRevision(const osgDB::DatabaseRevision & revision, const osg::CopyOp arg2 = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgDB::DatabaseRevision::DatabaseRevision(const osgDB::DatabaseRevision & revision, const osg::CopyOp arg2 = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osgDB::DatabaseRevision* revision_ptr=(Luna< osg::Referenced >::checkSubType< osgDB::DatabaseRevision >(L,1));
		if( !revision_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg revision in osgDB::DatabaseRevision::DatabaseRevision function");
		}
		const osgDB::DatabaseRevision & revision=*revision_ptr;
		const osg::CopyOp* _arg2_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osgDB::DatabaseRevision::DatabaseRevision function");
		}
		const osg::CopyOp _arg2=luatop>1 ? *_arg2_ptr : (const osg::CopyOp)osg::CopyOp::SHALLOW_COPY;

		return new osgDB::DatabaseRevision(revision, _arg2);
	}

	// osgDB::DatabaseRevision::DatabaseRevision(lua_Table * data)
	static osgDB::DatabaseRevision* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::DatabaseRevision::DatabaseRevision(lua_Table * data) function, expected prototype:\nosgDB::DatabaseRevision::DatabaseRevision(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgDB_DatabaseRevision(L,NULL);
	}

	// osgDB::DatabaseRevision::DatabaseRevision(lua_Table * data, const osgDB::DatabaseRevision & revision, const osg::CopyOp arg3 = osg::CopyOp::SHALLOW_COPY)
	static osgDB::DatabaseRevision* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::DatabaseRevision::DatabaseRevision(lua_Table * data, const osgDB::DatabaseRevision & revision, const osg::CopyOp arg3 = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgDB::DatabaseRevision::DatabaseRevision(lua_Table * data, const osgDB::DatabaseRevision & revision, const osg::CopyOp arg3 = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osgDB::DatabaseRevision* revision_ptr=(Luna< osg::Referenced >::checkSubType< osgDB::DatabaseRevision >(L,2));
		if( !revision_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg revision in osgDB::DatabaseRevision::DatabaseRevision function");
		}
		const osgDB::DatabaseRevision & revision=*revision_ptr;
		const osg::CopyOp* _arg3_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !_arg3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg3 in osgDB::DatabaseRevision::DatabaseRevision function");
		}
		const osg::CopyOp _arg3=luatop>2 ? *_arg3_ptr : (const osg::CopyOp)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osgDB_DatabaseRevision(L,NULL, revision, _arg3);
	}

	// Overload binder for osgDB::DatabaseRevision::DatabaseRevision
	static osgDB::DatabaseRevision* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function DatabaseRevision, cannot match any of the overloads for function DatabaseRevision:\n  DatabaseRevision()\n  DatabaseRevision(const osgDB::DatabaseRevision &, const osg::CopyOp)\n  DatabaseRevision(lua_Table *)\n  DatabaseRevision(lua_Table *, const osgDB::DatabaseRevision &, const osg::CopyOp)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osgDB::DatabaseRevision::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgDB::DatabaseRevision::cloneType() const function, expected prototype:\nosg::Object * osgDB::DatabaseRevision::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::DatabaseRevision* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabaseRevision >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgDB::DatabaseRevision::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgDB::DatabaseRevision::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgDB::DatabaseRevision::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgDB::DatabaseRevision::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgDB::DatabaseRevision::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgDB::DatabaseRevision* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabaseRevision >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgDB::DatabaseRevision::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgDB::DatabaseRevision::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::DatabaseRevision::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgDB::DatabaseRevision::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgDB::DatabaseRevision* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabaseRevision >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::DatabaseRevision::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgDB::DatabaseRevision::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgDB::DatabaseRevision::libraryName() const function, expected prototype:\nconst char * osgDB::DatabaseRevision::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::DatabaseRevision* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabaseRevision >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgDB::DatabaseRevision::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgDB::DatabaseRevision::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgDB::DatabaseRevision::className() const function, expected prototype:\nconst char * osgDB::DatabaseRevision::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::DatabaseRevision* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabaseRevision >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgDB::DatabaseRevision::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgDB::DatabaseRevision::setDatabasePath(const std::string & path)
	static int _bind_setDatabasePath(lua_State *L) {
		if (!_lg_typecheck_setDatabasePath(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::DatabaseRevision::setDatabasePath(const std::string & path) function, expected prototype:\nvoid osgDB::DatabaseRevision::setDatabasePath(const std::string & path)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string path(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::DatabaseRevision* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabaseRevision >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::DatabaseRevision::setDatabasePath(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setDatabasePath(path);

		return 0;
	}

	// const std::string & osgDB::DatabaseRevision::getDatabasePath() const
	static int _bind_getDatabasePath(lua_State *L) {
		if (!_lg_typecheck_getDatabasePath(L)) {
			luaL_error(L, "luna typecheck failed in const std::string & osgDB::DatabaseRevision::getDatabasePath() const function, expected prototype:\nconst std::string & osgDB::DatabaseRevision::getDatabasePath() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::DatabaseRevision* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabaseRevision >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const std::string & osgDB::DatabaseRevision::getDatabasePath() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const std::string & lret = self->getDatabasePath();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void osgDB::DatabaseRevision::setFilesAdded(osgDB::FileList * fileList)
	static int _bind_setFilesAdded(lua_State *L) {
		if (!_lg_typecheck_setFilesAdded(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::DatabaseRevision::setFilesAdded(osgDB::FileList * fileList) function, expected prototype:\nvoid osgDB::DatabaseRevision::setFilesAdded(osgDB::FileList * fileList)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::FileList* fileList=(Luna< osg::Referenced >::checkSubType< osgDB::FileList >(L,2));

		osgDB::DatabaseRevision* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabaseRevision >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::DatabaseRevision::setFilesAdded(osgDB::FileList *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setFilesAdded(fileList);

		return 0;
	}

	// osgDB::FileList * osgDB::DatabaseRevision::getFilesAdded()
	static int _bind_getFilesAdded_overload_1(lua_State *L) {
		if (!_lg_typecheck_getFilesAdded_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::FileList * osgDB::DatabaseRevision::getFilesAdded() function, expected prototype:\nosgDB::FileList * osgDB::DatabaseRevision::getFilesAdded()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::DatabaseRevision* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabaseRevision >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::FileList * osgDB::DatabaseRevision::getFilesAdded(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::FileList * lret = self->getFilesAdded();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::FileList >::push(L,lret,false);

		return 1;
	}

	// const osgDB::FileList * osgDB::DatabaseRevision::getFilesAdded() const
	static int _bind_getFilesAdded_overload_2(lua_State *L) {
		if (!_lg_typecheck_getFilesAdded_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osgDB::FileList * osgDB::DatabaseRevision::getFilesAdded() const function, expected prototype:\nconst osgDB::FileList * osgDB::DatabaseRevision::getFilesAdded() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::DatabaseRevision* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabaseRevision >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgDB::FileList * osgDB::DatabaseRevision::getFilesAdded() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::FileList * lret = self->getFilesAdded();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::FileList >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgDB::DatabaseRevision::getFilesAdded
	static int _bind_getFilesAdded(lua_State *L) {
		if (_lg_typecheck_getFilesAdded_overload_1(L)) return _bind_getFilesAdded_overload_1(L);
		if (_lg_typecheck_getFilesAdded_overload_2(L)) return _bind_getFilesAdded_overload_2(L);

		luaL_error(L, "error in function getFilesAdded, cannot match any of the overloads for function getFilesAdded:\n  getFilesAdded()\n  getFilesAdded()\n");
		return 0;
	}

	// void osgDB::DatabaseRevision::setFilesRemoved(osgDB::FileList * fileList)
	static int _bind_setFilesRemoved(lua_State *L) {
		if (!_lg_typecheck_setFilesRemoved(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::DatabaseRevision::setFilesRemoved(osgDB::FileList * fileList) function, expected prototype:\nvoid osgDB::DatabaseRevision::setFilesRemoved(osgDB::FileList * fileList)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::FileList* fileList=(Luna< osg::Referenced >::checkSubType< osgDB::FileList >(L,2));

		osgDB::DatabaseRevision* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabaseRevision >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::DatabaseRevision::setFilesRemoved(osgDB::FileList *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setFilesRemoved(fileList);

		return 0;
	}

	// osgDB::FileList * osgDB::DatabaseRevision::getFilesRemoved()
	static int _bind_getFilesRemoved_overload_1(lua_State *L) {
		if (!_lg_typecheck_getFilesRemoved_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::FileList * osgDB::DatabaseRevision::getFilesRemoved() function, expected prototype:\nosgDB::FileList * osgDB::DatabaseRevision::getFilesRemoved()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::DatabaseRevision* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabaseRevision >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::FileList * osgDB::DatabaseRevision::getFilesRemoved(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::FileList * lret = self->getFilesRemoved();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::FileList >::push(L,lret,false);

		return 1;
	}

	// const osgDB::FileList * osgDB::DatabaseRevision::getFilesRemoved() const
	static int _bind_getFilesRemoved_overload_2(lua_State *L) {
		if (!_lg_typecheck_getFilesRemoved_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osgDB::FileList * osgDB::DatabaseRevision::getFilesRemoved() const function, expected prototype:\nconst osgDB::FileList * osgDB::DatabaseRevision::getFilesRemoved() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::DatabaseRevision* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabaseRevision >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgDB::FileList * osgDB::DatabaseRevision::getFilesRemoved() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::FileList * lret = self->getFilesRemoved();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::FileList >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgDB::DatabaseRevision::getFilesRemoved
	static int _bind_getFilesRemoved(lua_State *L) {
		if (_lg_typecheck_getFilesRemoved_overload_1(L)) return _bind_getFilesRemoved_overload_1(L);
		if (_lg_typecheck_getFilesRemoved_overload_2(L)) return _bind_getFilesRemoved_overload_2(L);

		luaL_error(L, "error in function getFilesRemoved, cannot match any of the overloads for function getFilesRemoved:\n  getFilesRemoved()\n  getFilesRemoved()\n");
		return 0;
	}

	// void osgDB::DatabaseRevision::setFilesModified(osgDB::FileList * fileList)
	static int _bind_setFilesModified(lua_State *L) {
		if (!_lg_typecheck_setFilesModified(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::DatabaseRevision::setFilesModified(osgDB::FileList * fileList) function, expected prototype:\nvoid osgDB::DatabaseRevision::setFilesModified(osgDB::FileList * fileList)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::FileList* fileList=(Luna< osg::Referenced >::checkSubType< osgDB::FileList >(L,2));

		osgDB::DatabaseRevision* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabaseRevision >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::DatabaseRevision::setFilesModified(osgDB::FileList *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setFilesModified(fileList);

		return 0;
	}

	// osgDB::FileList * osgDB::DatabaseRevision::getFilesModified()
	static int _bind_getFilesModified_overload_1(lua_State *L) {
		if (!_lg_typecheck_getFilesModified_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::FileList * osgDB::DatabaseRevision::getFilesModified() function, expected prototype:\nosgDB::FileList * osgDB::DatabaseRevision::getFilesModified()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::DatabaseRevision* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabaseRevision >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::FileList * osgDB::DatabaseRevision::getFilesModified(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::FileList * lret = self->getFilesModified();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::FileList >::push(L,lret,false);

		return 1;
	}

	// const osgDB::FileList * osgDB::DatabaseRevision::getFilesModified() const
	static int _bind_getFilesModified_overload_2(lua_State *L) {
		if (!_lg_typecheck_getFilesModified_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osgDB::FileList * osgDB::DatabaseRevision::getFilesModified() const function, expected prototype:\nconst osgDB::FileList * osgDB::DatabaseRevision::getFilesModified() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::DatabaseRevision* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabaseRevision >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgDB::FileList * osgDB::DatabaseRevision::getFilesModified() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::FileList * lret = self->getFilesModified();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::FileList >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgDB::DatabaseRevision::getFilesModified
	static int _bind_getFilesModified(lua_State *L) {
		if (_lg_typecheck_getFilesModified_overload_1(L)) return _bind_getFilesModified_overload_1(L);
		if (_lg_typecheck_getFilesModified_overload_2(L)) return _bind_getFilesModified_overload_2(L);

		luaL_error(L, "error in function getFilesModified, cannot match any of the overloads for function getFilesModified:\n  getFilesModified()\n  getFilesModified()\n");
		return 0;
	}

	// bool osgDB::DatabaseRevision::isFileBlackListed(const std::string & filename) const
	static int _bind_isFileBlackListed(lua_State *L) {
		if (!_lg_typecheck_isFileBlackListed(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::DatabaseRevision::isFileBlackListed(const std::string & filename) const function, expected prototype:\nbool osgDB::DatabaseRevision::isFileBlackListed(const std::string & filename) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string filename(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::DatabaseRevision* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabaseRevision >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::DatabaseRevision::isFileBlackListed(const std::string &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isFileBlackListed(filename);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::DatabaseRevision::removeFile(const std::string & filename)
	static int _bind_removeFile(lua_State *L) {
		if (!_lg_typecheck_removeFile(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::DatabaseRevision::removeFile(const std::string & filename) function, expected prototype:\nbool osgDB::DatabaseRevision::removeFile(const std::string & filename)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string filename(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::DatabaseRevision* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabaseRevision >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::DatabaseRevision::removeFile(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->removeFile(filename);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgDB::DatabaseRevision::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::DatabaseRevision::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgDB::DatabaseRevision::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgDB::DatabaseRevision* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabaseRevision >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::DatabaseRevision::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DatabaseRevision::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osgDB::DatabaseRevision::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::DatabaseRevision::base_setName(const std::string & name) function, expected prototype:\nvoid osgDB::DatabaseRevision::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::DatabaseRevision* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabaseRevision >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::DatabaseRevision::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DatabaseRevision::setName(name);

		return 0;
	}

	// void osgDB::DatabaseRevision::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::DatabaseRevision::base_computeDataVariance() function, expected prototype:\nvoid osgDB::DatabaseRevision::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::DatabaseRevision* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabaseRevision >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::DatabaseRevision::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DatabaseRevision::computeDataVariance();

		return 0;
	}

	// void osgDB::DatabaseRevision::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::DatabaseRevision::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osgDB::DatabaseRevision::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osgDB::DatabaseRevision* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabaseRevision >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::DatabaseRevision::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DatabaseRevision::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osgDB::DatabaseRevision::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osgDB::DatabaseRevision::base_getUserData() function, expected prototype:\nosg::Referenced * osgDB::DatabaseRevision::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::DatabaseRevision* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabaseRevision >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osgDB::DatabaseRevision::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->DatabaseRevision::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osgDB::DatabaseRevision::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osgDB::DatabaseRevision::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osgDB::DatabaseRevision::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::DatabaseRevision* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabaseRevision >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osgDB::DatabaseRevision::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->DatabaseRevision::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgDB::DatabaseRevision::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osgDB::DatabaseRevision::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::DatabaseRevision::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osgDB::DatabaseRevision::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osgDB::DatabaseRevision* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabaseRevision >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::DatabaseRevision::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DatabaseRevision::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osgDB::DatabaseRevision::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgDB::DatabaseRevision::base_cloneType() const function, expected prototype:\nosg::Object * osgDB::DatabaseRevision::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::DatabaseRevision* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabaseRevision >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgDB::DatabaseRevision::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->DatabaseRevision::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgDB::DatabaseRevision::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgDB::DatabaseRevision::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgDB::DatabaseRevision::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgDB::DatabaseRevision::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgDB::DatabaseRevision* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabaseRevision >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgDB::DatabaseRevision::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->DatabaseRevision::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgDB::DatabaseRevision::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::DatabaseRevision::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgDB::DatabaseRevision::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgDB::DatabaseRevision* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabaseRevision >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::DatabaseRevision::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->DatabaseRevision::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgDB::DatabaseRevision::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgDB::DatabaseRevision::base_libraryName() const function, expected prototype:\nconst char * osgDB::DatabaseRevision::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::DatabaseRevision* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabaseRevision >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgDB::DatabaseRevision::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->DatabaseRevision::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgDB::DatabaseRevision::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgDB::DatabaseRevision::base_className() const function, expected prototype:\nconst char * osgDB::DatabaseRevision::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::DatabaseRevision* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabaseRevision >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgDB::DatabaseRevision::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->DatabaseRevision::className();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

osgDB::DatabaseRevision* LunaTraits< osgDB::DatabaseRevision >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgDB_DatabaseRevision::_bind_ctor(L);
}

void LunaTraits< osgDB::DatabaseRevision >::_bind_dtor(osgDB::DatabaseRevision* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgDB::DatabaseRevision >::className[] = "DatabaseRevision";
const char LunaTraits< osgDB::DatabaseRevision >::fullName[] = "osgDB::DatabaseRevision";
const char LunaTraits< osgDB::DatabaseRevision >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::DatabaseRevision >::parents[] = {"osg.Object", 0};
const int LunaTraits< osgDB::DatabaseRevision >::hash = 8585549;
const int LunaTraits< osgDB::DatabaseRevision >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgDB::DatabaseRevision >::methods[] = {
	{"cloneType", &luna_wrapper_osgDB_DatabaseRevision::_bind_cloneType},
	{"clone", &luna_wrapper_osgDB_DatabaseRevision::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osgDB_DatabaseRevision::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osgDB_DatabaseRevision::_bind_libraryName},
	{"className", &luna_wrapper_osgDB_DatabaseRevision::_bind_className},
	{"setDatabasePath", &luna_wrapper_osgDB_DatabaseRevision::_bind_setDatabasePath},
	{"getDatabasePath", &luna_wrapper_osgDB_DatabaseRevision::_bind_getDatabasePath},
	{"setFilesAdded", &luna_wrapper_osgDB_DatabaseRevision::_bind_setFilesAdded},
	{"getFilesAdded", &luna_wrapper_osgDB_DatabaseRevision::_bind_getFilesAdded},
	{"setFilesRemoved", &luna_wrapper_osgDB_DatabaseRevision::_bind_setFilesRemoved},
	{"getFilesRemoved", &luna_wrapper_osgDB_DatabaseRevision::_bind_getFilesRemoved},
	{"setFilesModified", &luna_wrapper_osgDB_DatabaseRevision::_bind_setFilesModified},
	{"getFilesModified", &luna_wrapper_osgDB_DatabaseRevision::_bind_getFilesModified},
	{"isFileBlackListed", &luna_wrapper_osgDB_DatabaseRevision::_bind_isFileBlackListed},
	{"removeFile", &luna_wrapper_osgDB_DatabaseRevision::_bind_removeFile},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgDB_DatabaseRevision::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osgDB_DatabaseRevision::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osgDB_DatabaseRevision::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osgDB_DatabaseRevision::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osgDB_DatabaseRevision::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osgDB_DatabaseRevision::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osgDB_DatabaseRevision::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osgDB_DatabaseRevision::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osgDB_DatabaseRevision::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osgDB_DatabaseRevision::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osgDB_DatabaseRevision::_bind_base_className},
	{"fromVoid", &luna_wrapper_osgDB_DatabaseRevision::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgDB_DatabaseRevision::_bind_asVoid},
	{"getTable", &luna_wrapper_osgDB_DatabaseRevision::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::DatabaseRevision >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgDB_DatabaseRevision::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::DatabaseRevision >::enumValues[] = {
	{0,0}
};



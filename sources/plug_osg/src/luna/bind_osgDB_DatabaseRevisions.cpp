#include <plug_common.h>

#include <luna/wrappers/wrapper_osgDB_DatabaseRevisions.h>

class luna_wrapper_osgDB_DatabaseRevisions {
public:
	typedef Luna< osgDB::DatabaseRevisions > luna_t;

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

		osgDB::DatabaseRevisions* self= (osgDB::DatabaseRevisions*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgDB::DatabaseRevisions >::push(L,self,false);
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
		//osgDB::DatabaseRevisions* ptr= dynamic_cast< osgDB::DatabaseRevisions* >(Luna< osg::Referenced >::check(L,1));
		osgDB::DatabaseRevisions* ptr= luna_caster< osg::Referenced, osgDB::DatabaseRevisions >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgDB::DatabaseRevisions >::push(L,ptr,false);
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
		if( (!(Luna< osg::Referenced >::checkSubType< osgDB::DatabaseRevisions >(L,1))) ) return false;
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
		if( (!(Luna< osg::Referenced >::checkSubType< osgDB::DatabaseRevisions >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_addRevision(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeRevision(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDatabaseRevision(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
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
	// osgDB::DatabaseRevisions::DatabaseRevisions()
	static osgDB::DatabaseRevisions* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::DatabaseRevisions::DatabaseRevisions() function, expected prototype:\nosgDB::DatabaseRevisions::DatabaseRevisions()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osgDB::DatabaseRevisions();
	}

	// osgDB::DatabaseRevisions::DatabaseRevisions(const osgDB::DatabaseRevisions & revisions, const osg::CopyOp arg2 = osg::CopyOp::SHALLOW_COPY)
	static osgDB::DatabaseRevisions* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::DatabaseRevisions::DatabaseRevisions(const osgDB::DatabaseRevisions & revisions, const osg::CopyOp arg2 = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgDB::DatabaseRevisions::DatabaseRevisions(const osgDB::DatabaseRevisions & revisions, const osg::CopyOp arg2 = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osgDB::DatabaseRevisions* revisions_ptr=(Luna< osg::Referenced >::checkSubType< osgDB::DatabaseRevisions >(L,1));
		if( !revisions_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg revisions in osgDB::DatabaseRevisions::DatabaseRevisions function");
		}
		const osgDB::DatabaseRevisions & revisions=*revisions_ptr;
		const osg::CopyOp* _arg2_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osgDB::DatabaseRevisions::DatabaseRevisions function");
		}
		const osg::CopyOp _arg2=luatop>1 ? *_arg2_ptr : (const osg::CopyOp)osg::CopyOp::SHALLOW_COPY;

		return new osgDB::DatabaseRevisions(revisions, _arg2);
	}

	// osgDB::DatabaseRevisions::DatabaseRevisions(lua_Table * data)
	static osgDB::DatabaseRevisions* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::DatabaseRevisions::DatabaseRevisions(lua_Table * data) function, expected prototype:\nosgDB::DatabaseRevisions::DatabaseRevisions(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgDB_DatabaseRevisions(L,NULL);
	}

	// osgDB::DatabaseRevisions::DatabaseRevisions(lua_Table * data, const osgDB::DatabaseRevisions & revisions, const osg::CopyOp arg3 = osg::CopyOp::SHALLOW_COPY)
	static osgDB::DatabaseRevisions* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::DatabaseRevisions::DatabaseRevisions(lua_Table * data, const osgDB::DatabaseRevisions & revisions, const osg::CopyOp arg3 = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgDB::DatabaseRevisions::DatabaseRevisions(lua_Table * data, const osgDB::DatabaseRevisions & revisions, const osg::CopyOp arg3 = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osgDB::DatabaseRevisions* revisions_ptr=(Luna< osg::Referenced >::checkSubType< osgDB::DatabaseRevisions >(L,2));
		if( !revisions_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg revisions in osgDB::DatabaseRevisions::DatabaseRevisions function");
		}
		const osgDB::DatabaseRevisions & revisions=*revisions_ptr;
		const osg::CopyOp* _arg3_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !_arg3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg3 in osgDB::DatabaseRevisions::DatabaseRevisions function");
		}
		const osg::CopyOp _arg3=luatop>2 ? *_arg3_ptr : (const osg::CopyOp)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osgDB_DatabaseRevisions(L,NULL, revisions, _arg3);
	}

	// Overload binder for osgDB::DatabaseRevisions::DatabaseRevisions
	static osgDB::DatabaseRevisions* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function DatabaseRevisions, cannot match any of the overloads for function DatabaseRevisions:\n  DatabaseRevisions()\n  DatabaseRevisions(const osgDB::DatabaseRevisions &, const osg::CopyOp)\n  DatabaseRevisions(lua_Table *)\n  DatabaseRevisions(lua_Table *, const osgDB::DatabaseRevisions &, const osg::CopyOp)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osgDB::DatabaseRevisions::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgDB::DatabaseRevisions::cloneType() const function, expected prototype:\nosg::Object * osgDB::DatabaseRevisions::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::DatabaseRevisions* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabaseRevisions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgDB::DatabaseRevisions::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgDB::DatabaseRevisions::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgDB::DatabaseRevisions::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgDB::DatabaseRevisions::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgDB::DatabaseRevisions::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgDB::DatabaseRevisions* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabaseRevisions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgDB::DatabaseRevisions::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgDB::DatabaseRevisions::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::DatabaseRevisions::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgDB::DatabaseRevisions::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgDB::DatabaseRevisions* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabaseRevisions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::DatabaseRevisions::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgDB::DatabaseRevisions::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgDB::DatabaseRevisions::libraryName() const function, expected prototype:\nconst char * osgDB::DatabaseRevisions::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::DatabaseRevisions* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabaseRevisions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgDB::DatabaseRevisions::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgDB::DatabaseRevisions::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgDB::DatabaseRevisions::className() const function, expected prototype:\nconst char * osgDB::DatabaseRevisions::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::DatabaseRevisions* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabaseRevisions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgDB::DatabaseRevisions::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgDB::DatabaseRevisions::setDatabasePath(const std::string & path)
	static int _bind_setDatabasePath(lua_State *L) {
		if (!_lg_typecheck_setDatabasePath(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::DatabaseRevisions::setDatabasePath(const std::string & path) function, expected prototype:\nvoid osgDB::DatabaseRevisions::setDatabasePath(const std::string & path)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string path(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::DatabaseRevisions* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabaseRevisions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::DatabaseRevisions::setDatabasePath(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setDatabasePath(path);

		return 0;
	}

	// const std::string & osgDB::DatabaseRevisions::getDatabasePath() const
	static int _bind_getDatabasePath(lua_State *L) {
		if (!_lg_typecheck_getDatabasePath(L)) {
			luaL_error(L, "luna typecheck failed in const std::string & osgDB::DatabaseRevisions::getDatabasePath() const function, expected prototype:\nconst std::string & osgDB::DatabaseRevisions::getDatabasePath() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::DatabaseRevisions* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabaseRevisions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const std::string & osgDB::DatabaseRevisions::getDatabasePath() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const std::string & lret = self->getDatabasePath();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void osgDB::DatabaseRevisions::addRevision(osgDB::DatabaseRevision * revision)
	static int _bind_addRevision(lua_State *L) {
		if (!_lg_typecheck_addRevision(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::DatabaseRevisions::addRevision(osgDB::DatabaseRevision * revision) function, expected prototype:\nvoid osgDB::DatabaseRevisions::addRevision(osgDB::DatabaseRevision * revision)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::DatabaseRevision* revision=(Luna< osg::Referenced >::checkSubType< osgDB::DatabaseRevision >(L,2));

		osgDB::DatabaseRevisions* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabaseRevisions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::DatabaseRevisions::addRevision(osgDB::DatabaseRevision *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addRevision(revision);

		return 0;
	}

	// void osgDB::DatabaseRevisions::removeRevision(osgDB::DatabaseRevision * revision)
	static int _bind_removeRevision(lua_State *L) {
		if (!_lg_typecheck_removeRevision(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::DatabaseRevisions::removeRevision(osgDB::DatabaseRevision * revision) function, expected prototype:\nvoid osgDB::DatabaseRevisions::removeRevision(osgDB::DatabaseRevision * revision)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::DatabaseRevision* revision=(Luna< osg::Referenced >::checkSubType< osgDB::DatabaseRevision >(L,2));

		osgDB::DatabaseRevisions* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabaseRevisions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::DatabaseRevisions::removeRevision(osgDB::DatabaseRevision *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->removeRevision(revision);

		return 0;
	}

	// osgDB::DatabaseRevision * osgDB::DatabaseRevisions::getDatabaseRevision(unsigned int i)
	static int _bind_getDatabaseRevision(lua_State *L) {
		if (!_lg_typecheck_getDatabaseRevision(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::DatabaseRevision * osgDB::DatabaseRevisions::getDatabaseRevision(unsigned int i) function, expected prototype:\nosgDB::DatabaseRevision * osgDB::DatabaseRevisions::getDatabaseRevision(unsigned int i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osgDB::DatabaseRevisions* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabaseRevisions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::DatabaseRevision * osgDB::DatabaseRevisions::getDatabaseRevision(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::DatabaseRevision * lret = self->getDatabaseRevision(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::DatabaseRevision >::push(L,lret,false);

		return 1;
	}

	// bool osgDB::DatabaseRevisions::isFileBlackListed(const std::string & filename) const
	static int _bind_isFileBlackListed(lua_State *L) {
		if (!_lg_typecheck_isFileBlackListed(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::DatabaseRevisions::isFileBlackListed(const std::string & filename) const function, expected prototype:\nbool osgDB::DatabaseRevisions::isFileBlackListed(const std::string & filename) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string filename(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::DatabaseRevisions* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabaseRevisions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::DatabaseRevisions::isFileBlackListed(const std::string &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isFileBlackListed(filename);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::DatabaseRevisions::removeFile(const std::string & filename)
	static int _bind_removeFile(lua_State *L) {
		if (!_lg_typecheck_removeFile(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::DatabaseRevisions::removeFile(const std::string & filename) function, expected prototype:\nbool osgDB::DatabaseRevisions::removeFile(const std::string & filename)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string filename(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::DatabaseRevisions* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabaseRevisions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::DatabaseRevisions::removeFile(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->removeFile(filename);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgDB::DatabaseRevisions::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::DatabaseRevisions::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgDB::DatabaseRevisions::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgDB::DatabaseRevisions* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabaseRevisions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::DatabaseRevisions::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DatabaseRevisions::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osgDB::DatabaseRevisions::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::DatabaseRevisions::base_setName(const std::string & name) function, expected prototype:\nvoid osgDB::DatabaseRevisions::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::DatabaseRevisions* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabaseRevisions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::DatabaseRevisions::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DatabaseRevisions::setName(name);

		return 0;
	}

	// void osgDB::DatabaseRevisions::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::DatabaseRevisions::base_computeDataVariance() function, expected prototype:\nvoid osgDB::DatabaseRevisions::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::DatabaseRevisions* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabaseRevisions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::DatabaseRevisions::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DatabaseRevisions::computeDataVariance();

		return 0;
	}

	// void osgDB::DatabaseRevisions::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::DatabaseRevisions::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osgDB::DatabaseRevisions::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osgDB::DatabaseRevisions* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabaseRevisions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::DatabaseRevisions::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DatabaseRevisions::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osgDB::DatabaseRevisions::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osgDB::DatabaseRevisions::base_getUserData() function, expected prototype:\nosg::Referenced * osgDB::DatabaseRevisions::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::DatabaseRevisions* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabaseRevisions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osgDB::DatabaseRevisions::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->DatabaseRevisions::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osgDB::DatabaseRevisions::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osgDB::DatabaseRevisions::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osgDB::DatabaseRevisions::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::DatabaseRevisions* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabaseRevisions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osgDB::DatabaseRevisions::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->DatabaseRevisions::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgDB::DatabaseRevisions::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osgDB::DatabaseRevisions::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::DatabaseRevisions::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osgDB::DatabaseRevisions::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osgDB::DatabaseRevisions* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabaseRevisions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::DatabaseRevisions::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DatabaseRevisions::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osgDB::DatabaseRevisions::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgDB::DatabaseRevisions::base_cloneType() const function, expected prototype:\nosg::Object * osgDB::DatabaseRevisions::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::DatabaseRevisions* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabaseRevisions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgDB::DatabaseRevisions::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->DatabaseRevisions::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgDB::DatabaseRevisions::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgDB::DatabaseRevisions::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgDB::DatabaseRevisions::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgDB::DatabaseRevisions::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgDB::DatabaseRevisions* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabaseRevisions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgDB::DatabaseRevisions::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->DatabaseRevisions::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgDB::DatabaseRevisions::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::DatabaseRevisions::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgDB::DatabaseRevisions::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgDB::DatabaseRevisions* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabaseRevisions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::DatabaseRevisions::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->DatabaseRevisions::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgDB::DatabaseRevisions::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgDB::DatabaseRevisions::base_libraryName() const function, expected prototype:\nconst char * osgDB::DatabaseRevisions::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::DatabaseRevisions* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabaseRevisions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgDB::DatabaseRevisions::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->DatabaseRevisions::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgDB::DatabaseRevisions::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgDB::DatabaseRevisions::base_className() const function, expected prototype:\nconst char * osgDB::DatabaseRevisions::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::DatabaseRevisions* self=Luna< osg::Referenced >::checkSubType< osgDB::DatabaseRevisions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgDB::DatabaseRevisions::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->DatabaseRevisions::className();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

osgDB::DatabaseRevisions* LunaTraits< osgDB::DatabaseRevisions >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgDB_DatabaseRevisions::_bind_ctor(L);
}

void LunaTraits< osgDB::DatabaseRevisions >::_bind_dtor(osgDB::DatabaseRevisions* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgDB::DatabaseRevisions >::className[] = "DatabaseRevisions";
const char LunaTraits< osgDB::DatabaseRevisions >::fullName[] = "osgDB::DatabaseRevisions";
const char LunaTraits< osgDB::DatabaseRevisions >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::DatabaseRevisions >::parents[] = {"osg.Object", 0};
const int LunaTraits< osgDB::DatabaseRevisions >::hash = 66152086;
const int LunaTraits< osgDB::DatabaseRevisions >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgDB::DatabaseRevisions >::methods[] = {
	{"cloneType", &luna_wrapper_osgDB_DatabaseRevisions::_bind_cloneType},
	{"clone", &luna_wrapper_osgDB_DatabaseRevisions::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osgDB_DatabaseRevisions::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osgDB_DatabaseRevisions::_bind_libraryName},
	{"className", &luna_wrapper_osgDB_DatabaseRevisions::_bind_className},
	{"setDatabasePath", &luna_wrapper_osgDB_DatabaseRevisions::_bind_setDatabasePath},
	{"getDatabasePath", &luna_wrapper_osgDB_DatabaseRevisions::_bind_getDatabasePath},
	{"addRevision", &luna_wrapper_osgDB_DatabaseRevisions::_bind_addRevision},
	{"removeRevision", &luna_wrapper_osgDB_DatabaseRevisions::_bind_removeRevision},
	{"getDatabaseRevision", &luna_wrapper_osgDB_DatabaseRevisions::_bind_getDatabaseRevision},
	{"isFileBlackListed", &luna_wrapper_osgDB_DatabaseRevisions::_bind_isFileBlackListed},
	{"removeFile", &luna_wrapper_osgDB_DatabaseRevisions::_bind_removeFile},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgDB_DatabaseRevisions::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osgDB_DatabaseRevisions::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osgDB_DatabaseRevisions::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osgDB_DatabaseRevisions::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osgDB_DatabaseRevisions::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osgDB_DatabaseRevisions::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osgDB_DatabaseRevisions::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osgDB_DatabaseRevisions::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osgDB_DatabaseRevisions::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osgDB_DatabaseRevisions::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osgDB_DatabaseRevisions::_bind_base_className},
	{"fromVoid", &luna_wrapper_osgDB_DatabaseRevisions::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgDB_DatabaseRevisions::_bind_asVoid},
	{"getTable", &luna_wrapper_osgDB_DatabaseRevisions::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::DatabaseRevisions >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgDB_DatabaseRevisions::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::DatabaseRevisions >::enumValues[] = {
	{0,0}
};



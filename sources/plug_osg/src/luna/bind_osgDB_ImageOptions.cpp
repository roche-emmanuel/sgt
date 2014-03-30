#include <plug_common.h>

#include <luna/wrappers/wrapper_osgDB_ImageOptions.h>

class luna_wrapper_osgDB_ImageOptions {
public:
	typedef Luna< osgDB::ImageOptions > luna_t;

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

		osgDB::ImageOptions* self= (osgDB::ImageOptions*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgDB::ImageOptions >::push(L,self,false);
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
		//osgDB::ImageOptions* ptr= dynamic_cast< osgDB::ImageOptions* >(Luna< osg::Referenced >::check(L,1));
		osgDB::ImageOptions* ptr= luna_caster< osg::Referenced, osgDB::ImageOptions >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgDB::ImageOptions >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osgDB::ImageOptions >(L,1))) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( luatop>1 && (!(Luna< osg::CopyOp >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osgDB::ImageOptions >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_init(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSourceImageSamplingMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSourceImageWindowMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSourceRatioWindow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSourcePixelWindow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDestinationImage(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDestinationImageWindowMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDestinationRatioWindow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDestinationPixelWindow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDestinationDataType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDestinationPixelFormat(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setSourceImageSamplingMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSourceImageWindowMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSourceRatioWindow(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,44466488) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSourcePixelWindow(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,68659525) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDestinationImage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,15557275) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDestinationImageWindowMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDestinationRatioWindow(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,44466488) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDestinationPixelWindow(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,68659525) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDestinationDataType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDestinationPixelFormat(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
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
	// osgDB::ImageOptions::ImageOptions()
	static osgDB::ImageOptions* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ImageOptions::ImageOptions() function, expected prototype:\nosgDB::ImageOptions::ImageOptions()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osgDB::ImageOptions();
	}

	// osgDB::ImageOptions::ImageOptions(const std::string & str)
	static osgDB::ImageOptions* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ImageOptions::ImageOptions(const std::string & str) function, expected prototype:\nosgDB::ImageOptions::ImageOptions(const std::string & str)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string str(lua_tostring(L,1),lua_objlen(L,1));

		return new osgDB::ImageOptions(str);
	}

	// osgDB::ImageOptions::ImageOptions(const osgDB::ImageOptions & options, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgDB::ImageOptions* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ImageOptions::ImageOptions(const osgDB::ImageOptions & options, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgDB::ImageOptions::ImageOptions(const osgDB::ImageOptions & options, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osgDB::ImageOptions* options_ptr=(Luna< osg::Referenced >::checkSubType< osgDB::ImageOptions >(L,1));
		if( !options_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg options in osgDB::ImageOptions::ImageOptions function");
		}
		const osgDB::ImageOptions & options=*options_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgDB::ImageOptions::ImageOptions function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osgDB::ImageOptions(options, copyop);
	}

	// osgDB::ImageOptions::ImageOptions(lua_Table * data)
	static osgDB::ImageOptions* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ImageOptions::ImageOptions(lua_Table * data) function, expected prototype:\nosgDB::ImageOptions::ImageOptions(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgDB_ImageOptions(L,NULL);
	}

	// osgDB::ImageOptions::ImageOptions(lua_Table * data, const std::string & str)
	static osgDB::ImageOptions* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ImageOptions::ImageOptions(lua_Table * data, const std::string & str) function, expected prototype:\nosgDB::ImageOptions::ImageOptions(lua_Table * data, const std::string & str)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string str(lua_tostring(L,2),lua_objlen(L,2));

		return new wrapper_osgDB_ImageOptions(L,NULL, str);
	}

	// osgDB::ImageOptions::ImageOptions(lua_Table * data, const osgDB::ImageOptions & options, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgDB::ImageOptions* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ImageOptions::ImageOptions(lua_Table * data, const osgDB::ImageOptions & options, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgDB::ImageOptions::ImageOptions(lua_Table * data, const osgDB::ImageOptions & options, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osgDB::ImageOptions* options_ptr=(Luna< osg::Referenced >::checkSubType< osgDB::ImageOptions >(L,2));
		if( !options_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg options in osgDB::ImageOptions::ImageOptions function");
		}
		const osgDB::ImageOptions & options=*options_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgDB::ImageOptions::ImageOptions function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osgDB_ImageOptions(L,NULL, options, copyop);
	}

	// Overload binder for osgDB::ImageOptions::ImageOptions
	static osgDB::ImageOptions* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);

		luaL_error(L, "error in function ImageOptions, cannot match any of the overloads for function ImageOptions:\n  ImageOptions()\n  ImageOptions(const std::string &)\n  ImageOptions(const osgDB::ImageOptions &, const osg::CopyOp &)\n  ImageOptions(lua_Table *)\n  ImageOptions(lua_Table *, const std::string &)\n  ImageOptions(lua_Table *, const osgDB::ImageOptions &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osgDB::ImageOptions::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgDB::ImageOptions::cloneType() const function, expected prototype:\nosg::Object * osgDB::ImageOptions::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ImageOptions* self=Luna< osg::Referenced >::checkSubType< osgDB::ImageOptions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgDB::ImageOptions::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgDB::ImageOptions::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgDB::ImageOptions::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgDB::ImageOptions::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgDB::ImageOptions::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgDB::ImageOptions* self=Luna< osg::Referenced >::checkSubType< osgDB::ImageOptions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgDB::ImageOptions::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgDB::ImageOptions::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::ImageOptions::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgDB::ImageOptions::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgDB::ImageOptions* self=Luna< osg::Referenced >::checkSubType< osgDB::ImageOptions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::ImageOptions::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgDB::ImageOptions::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgDB::ImageOptions::libraryName() const function, expected prototype:\nconst char * osgDB::ImageOptions::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ImageOptions* self=Luna< osg::Referenced >::checkSubType< osgDB::ImageOptions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgDB::ImageOptions::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgDB::ImageOptions::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgDB::ImageOptions::className() const function, expected prototype:\nconst char * osgDB::ImageOptions::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ImageOptions* self=Luna< osg::Referenced >::checkSubType< osgDB::ImageOptions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgDB::ImageOptions::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgDB::ImageOptions::init()
	static int _bind_init(lua_State *L) {
		if (!_lg_typecheck_init(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::ImageOptions::init() function, expected prototype:\nvoid osgDB::ImageOptions::init()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ImageOptions* self=Luna< osg::Referenced >::checkSubType< osgDB::ImageOptions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::ImageOptions::init(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->init();

		return 0;
	}

	// osgDB::ImageOptions::ImageSamplingMode osgDB::ImageOptions::_sourceImageSamplingMode()
	static int _bind_getSourceImageSamplingMode(lua_State *L) {
		if (!_lg_typecheck_getSourceImageSamplingMode(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ImageOptions::ImageSamplingMode osgDB::ImageOptions::_sourceImageSamplingMode() function, expected prototype:\nosgDB::ImageOptions::ImageSamplingMode osgDB::ImageOptions::_sourceImageSamplingMode()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ImageOptions* self=Luna< osg::Referenced >::checkSubType< osgDB::ImageOptions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ImageOptions::ImageSamplingMode osgDB::ImageOptions::_sourceImageSamplingMode(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ImageOptions::ImageSamplingMode lret = self->_sourceImageSamplingMode;
		lua_pushnumber(L,lret);

		return 1;
	}

	// osgDB::ImageOptions::ImageWindowMode osgDB::ImageOptions::_sourceImageWindowMode()
	static int _bind_getSourceImageWindowMode(lua_State *L) {
		if (!_lg_typecheck_getSourceImageWindowMode(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ImageOptions::ImageWindowMode osgDB::ImageOptions::_sourceImageWindowMode() function, expected prototype:\nosgDB::ImageOptions::ImageWindowMode osgDB::ImageOptions::_sourceImageWindowMode()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ImageOptions* self=Luna< osg::Referenced >::checkSubType< osgDB::ImageOptions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ImageOptions::ImageWindowMode osgDB::ImageOptions::_sourceImageWindowMode(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ImageOptions::ImageWindowMode lret = self->_sourceImageWindowMode;
		lua_pushnumber(L,lret);

		return 1;
	}

	// osgDB::ImageOptions::RatioWindow osgDB::ImageOptions::_sourceRatioWindow()
	static int _bind_getSourceRatioWindow(lua_State *L) {
		if (!_lg_typecheck_getSourceRatioWindow(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ImageOptions::RatioWindow osgDB::ImageOptions::_sourceRatioWindow() function, expected prototype:\nosgDB::ImageOptions::RatioWindow osgDB::ImageOptions::_sourceRatioWindow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ImageOptions* self=Luna< osg::Referenced >::checkSubType< osgDB::ImageOptions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ImageOptions::RatioWindow osgDB::ImageOptions::_sourceRatioWindow(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::ImageOptions::RatioWindow* lret = &self->_sourceRatioWindow;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ImageOptions::RatioWindow >::push(L,lret,false);

		return 1;
	}

	// osgDB::ImageOptions::PixelWindow osgDB::ImageOptions::_sourcePixelWindow()
	static int _bind_getSourcePixelWindow(lua_State *L) {
		if (!_lg_typecheck_getSourcePixelWindow(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ImageOptions::PixelWindow osgDB::ImageOptions::_sourcePixelWindow() function, expected prototype:\nosgDB::ImageOptions::PixelWindow osgDB::ImageOptions::_sourcePixelWindow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ImageOptions* self=Luna< osg::Referenced >::checkSubType< osgDB::ImageOptions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ImageOptions::PixelWindow osgDB::ImageOptions::_sourcePixelWindow(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::ImageOptions::PixelWindow* lret = &self->_sourcePixelWindow;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ImageOptions::PixelWindow >::push(L,lret,false);

		return 1;
	}

	// osg::ref_ptr< osg::Image > osgDB::ImageOptions::_destinationImage()
	static int _bind_getDestinationImage(lua_State *L) {
		if (!_lg_typecheck_getDestinationImage(L)) {
			luaL_error(L, "luna typecheck failed in osg::ref_ptr< osg::Image > osgDB::ImageOptions::_destinationImage() function, expected prototype:\nosg::ref_ptr< osg::Image > osgDB::ImageOptions::_destinationImage()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ImageOptions* self=Luna< osg::Referenced >::checkSubType< osgDB::ImageOptions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::ref_ptr< osg::Image > osgDB::ImageOptions::_destinationImage(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::ref_ptr< osg::Image > lret = self->_destinationImage;
		Luna< osg::Image >::push(L,lret.get(),false);

		return 1;
	}

	// osgDB::ImageOptions::ImageWindowMode osgDB::ImageOptions::_destinationImageWindowMode()
	static int _bind_getDestinationImageWindowMode(lua_State *L) {
		if (!_lg_typecheck_getDestinationImageWindowMode(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ImageOptions::ImageWindowMode osgDB::ImageOptions::_destinationImageWindowMode() function, expected prototype:\nosgDB::ImageOptions::ImageWindowMode osgDB::ImageOptions::_destinationImageWindowMode()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ImageOptions* self=Luna< osg::Referenced >::checkSubType< osgDB::ImageOptions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ImageOptions::ImageWindowMode osgDB::ImageOptions::_destinationImageWindowMode(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ImageOptions::ImageWindowMode lret = self->_destinationImageWindowMode;
		lua_pushnumber(L,lret);

		return 1;
	}

	// osgDB::ImageOptions::RatioWindow osgDB::ImageOptions::_destinationRatioWindow()
	static int _bind_getDestinationRatioWindow(lua_State *L) {
		if (!_lg_typecheck_getDestinationRatioWindow(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ImageOptions::RatioWindow osgDB::ImageOptions::_destinationRatioWindow() function, expected prototype:\nosgDB::ImageOptions::RatioWindow osgDB::ImageOptions::_destinationRatioWindow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ImageOptions* self=Luna< osg::Referenced >::checkSubType< osgDB::ImageOptions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ImageOptions::RatioWindow osgDB::ImageOptions::_destinationRatioWindow(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::ImageOptions::RatioWindow* lret = &self->_destinationRatioWindow;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ImageOptions::RatioWindow >::push(L,lret,false);

		return 1;
	}

	// osgDB::ImageOptions::PixelWindow osgDB::ImageOptions::_destinationPixelWindow()
	static int _bind_getDestinationPixelWindow(lua_State *L) {
		if (!_lg_typecheck_getDestinationPixelWindow(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ImageOptions::PixelWindow osgDB::ImageOptions::_destinationPixelWindow() function, expected prototype:\nosgDB::ImageOptions::PixelWindow osgDB::ImageOptions::_destinationPixelWindow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ImageOptions* self=Luna< osg::Referenced >::checkSubType< osgDB::ImageOptions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ImageOptions::PixelWindow osgDB::ImageOptions::_destinationPixelWindow(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::ImageOptions::PixelWindow* lret = &self->_destinationPixelWindow;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ImageOptions::PixelWindow >::push(L,lret,false);

		return 1;
	}

	// unsigned int osgDB::ImageOptions::_destinationDataType()
	static int _bind_getDestinationDataType(lua_State *L) {
		if (!_lg_typecheck_getDestinationDataType(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osgDB::ImageOptions::_destinationDataType() function, expected prototype:\nunsigned int osgDB::ImageOptions::_destinationDataType()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ImageOptions* self=Luna< osg::Referenced >::checkSubType< osgDB::ImageOptions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osgDB::ImageOptions::_destinationDataType(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->_destinationDataType;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osgDB::ImageOptions::_destinationPixelFormat()
	static int _bind_getDestinationPixelFormat(lua_State *L) {
		if (!_lg_typecheck_getDestinationPixelFormat(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osgDB::ImageOptions::_destinationPixelFormat() function, expected prototype:\nunsigned int osgDB::ImageOptions::_destinationPixelFormat()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ImageOptions* self=Luna< osg::Referenced >::checkSubType< osgDB::ImageOptions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osgDB::ImageOptions::_destinationPixelFormat(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->_destinationPixelFormat;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgDB::ImageOptions::_sourceImageSamplingMode(osgDB::ImageOptions::ImageSamplingMode value)
	static int _bind_setSourceImageSamplingMode(lua_State *L) {
		if (!_lg_typecheck_setSourceImageSamplingMode(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::ImageOptions::_sourceImageSamplingMode(osgDB::ImageOptions::ImageSamplingMode value) function, expected prototype:\nvoid osgDB::ImageOptions::_sourceImageSamplingMode(osgDB::ImageOptions::ImageSamplingMode value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::ImageOptions::ImageSamplingMode value=(osgDB::ImageOptions::ImageSamplingMode)lua_tointeger(L,2);

		osgDB::ImageOptions* self=Luna< osg::Referenced >::checkSubType< osgDB::ImageOptions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::ImageOptions::_sourceImageSamplingMode(osgDB::ImageOptions::ImageSamplingMode). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_sourceImageSamplingMode = value;

		return 0;
	}

	// void osgDB::ImageOptions::_sourceImageWindowMode(osgDB::ImageOptions::ImageWindowMode value)
	static int _bind_setSourceImageWindowMode(lua_State *L) {
		if (!_lg_typecheck_setSourceImageWindowMode(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::ImageOptions::_sourceImageWindowMode(osgDB::ImageOptions::ImageWindowMode value) function, expected prototype:\nvoid osgDB::ImageOptions::_sourceImageWindowMode(osgDB::ImageOptions::ImageWindowMode value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::ImageOptions::ImageWindowMode value=(osgDB::ImageOptions::ImageWindowMode)lua_tointeger(L,2);

		osgDB::ImageOptions* self=Luna< osg::Referenced >::checkSubType< osgDB::ImageOptions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::ImageOptions::_sourceImageWindowMode(osgDB::ImageOptions::ImageWindowMode). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_sourceImageWindowMode = value;

		return 0;
	}

	// void osgDB::ImageOptions::_sourceRatioWindow(osgDB::ImageOptions::RatioWindow value)
	static int _bind_setSourceRatioWindow(lua_State *L) {
		if (!_lg_typecheck_setSourceRatioWindow(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::ImageOptions::_sourceRatioWindow(osgDB::ImageOptions::RatioWindow value) function, expected prototype:\nvoid osgDB::ImageOptions::_sourceRatioWindow(osgDB::ImageOptions::RatioWindow value)\nClass arguments details:\narg 1 ID = 44466488\n\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::ImageOptions::RatioWindow* value_ptr=(Luna< osgDB::ImageOptions::RatioWindow >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgDB::ImageOptions::_sourceRatioWindow function");
		}
		osgDB::ImageOptions::RatioWindow value=*value_ptr;

		osgDB::ImageOptions* self=Luna< osg::Referenced >::checkSubType< osgDB::ImageOptions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::ImageOptions::_sourceRatioWindow(osgDB::ImageOptions::RatioWindow). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_sourceRatioWindow = value;

		return 0;
	}

	// void osgDB::ImageOptions::_sourcePixelWindow(osgDB::ImageOptions::PixelWindow value)
	static int _bind_setSourcePixelWindow(lua_State *L) {
		if (!_lg_typecheck_setSourcePixelWindow(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::ImageOptions::_sourcePixelWindow(osgDB::ImageOptions::PixelWindow value) function, expected prototype:\nvoid osgDB::ImageOptions::_sourcePixelWindow(osgDB::ImageOptions::PixelWindow value)\nClass arguments details:\narg 1 ID = 68659525\n\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::ImageOptions::PixelWindow* value_ptr=(Luna< osgDB::ImageOptions::PixelWindow >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgDB::ImageOptions::_sourcePixelWindow function");
		}
		osgDB::ImageOptions::PixelWindow value=*value_ptr;

		osgDB::ImageOptions* self=Luna< osg::Referenced >::checkSubType< osgDB::ImageOptions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::ImageOptions::_sourcePixelWindow(osgDB::ImageOptions::PixelWindow). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_sourcePixelWindow = value;

		return 0;
	}

	// void osgDB::ImageOptions::_destinationImage(osg::ref_ptr< osg::Image > value)
	static int _bind_setDestinationImage(lua_State *L) {
		if (!_lg_typecheck_setDestinationImage(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::ImageOptions::_destinationImage(osg::ref_ptr< osg::Image > value) function, expected prototype:\nvoid osgDB::ImageOptions::_destinationImage(osg::ref_ptr< osg::Image > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ref_ptr< osg::Image > value = dynamic_cast< osg::Image* >(Luna< osg::Referenced >::check(L,2));

		osgDB::ImageOptions* self=Luna< osg::Referenced >::checkSubType< osgDB::ImageOptions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::ImageOptions::_destinationImage(osg::ref_ptr< osg::Image >). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_destinationImage = value;

		return 0;
	}

	// void osgDB::ImageOptions::_destinationImageWindowMode(osgDB::ImageOptions::ImageWindowMode value)
	static int _bind_setDestinationImageWindowMode(lua_State *L) {
		if (!_lg_typecheck_setDestinationImageWindowMode(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::ImageOptions::_destinationImageWindowMode(osgDB::ImageOptions::ImageWindowMode value) function, expected prototype:\nvoid osgDB::ImageOptions::_destinationImageWindowMode(osgDB::ImageOptions::ImageWindowMode value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::ImageOptions::ImageWindowMode value=(osgDB::ImageOptions::ImageWindowMode)lua_tointeger(L,2);

		osgDB::ImageOptions* self=Luna< osg::Referenced >::checkSubType< osgDB::ImageOptions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::ImageOptions::_destinationImageWindowMode(osgDB::ImageOptions::ImageWindowMode). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_destinationImageWindowMode = value;

		return 0;
	}

	// void osgDB::ImageOptions::_destinationRatioWindow(osgDB::ImageOptions::RatioWindow value)
	static int _bind_setDestinationRatioWindow(lua_State *L) {
		if (!_lg_typecheck_setDestinationRatioWindow(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::ImageOptions::_destinationRatioWindow(osgDB::ImageOptions::RatioWindow value) function, expected prototype:\nvoid osgDB::ImageOptions::_destinationRatioWindow(osgDB::ImageOptions::RatioWindow value)\nClass arguments details:\narg 1 ID = 44466488\n\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::ImageOptions::RatioWindow* value_ptr=(Luna< osgDB::ImageOptions::RatioWindow >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgDB::ImageOptions::_destinationRatioWindow function");
		}
		osgDB::ImageOptions::RatioWindow value=*value_ptr;

		osgDB::ImageOptions* self=Luna< osg::Referenced >::checkSubType< osgDB::ImageOptions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::ImageOptions::_destinationRatioWindow(osgDB::ImageOptions::RatioWindow). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_destinationRatioWindow = value;

		return 0;
	}

	// void osgDB::ImageOptions::_destinationPixelWindow(osgDB::ImageOptions::PixelWindow value)
	static int _bind_setDestinationPixelWindow(lua_State *L) {
		if (!_lg_typecheck_setDestinationPixelWindow(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::ImageOptions::_destinationPixelWindow(osgDB::ImageOptions::PixelWindow value) function, expected prototype:\nvoid osgDB::ImageOptions::_destinationPixelWindow(osgDB::ImageOptions::PixelWindow value)\nClass arguments details:\narg 1 ID = 68659525\n\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::ImageOptions::PixelWindow* value_ptr=(Luna< osgDB::ImageOptions::PixelWindow >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgDB::ImageOptions::_destinationPixelWindow function");
		}
		osgDB::ImageOptions::PixelWindow value=*value_ptr;

		osgDB::ImageOptions* self=Luna< osg::Referenced >::checkSubType< osgDB::ImageOptions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::ImageOptions::_destinationPixelWindow(osgDB::ImageOptions::PixelWindow). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_destinationPixelWindow = value;

		return 0;
	}

	// void osgDB::ImageOptions::_destinationDataType(unsigned int value)
	static int _bind_setDestinationDataType(lua_State *L) {
		if (!_lg_typecheck_setDestinationDataType(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::ImageOptions::_destinationDataType(unsigned int value) function, expected prototype:\nvoid osgDB::ImageOptions::_destinationDataType(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osgDB::ImageOptions* self=Luna< osg::Referenced >::checkSubType< osgDB::ImageOptions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::ImageOptions::_destinationDataType(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_destinationDataType = value;

		return 0;
	}

	// void osgDB::ImageOptions::_destinationPixelFormat(unsigned int value)
	static int _bind_setDestinationPixelFormat(lua_State *L) {
		if (!_lg_typecheck_setDestinationPixelFormat(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::ImageOptions::_destinationPixelFormat(unsigned int value) function, expected prototype:\nvoid osgDB::ImageOptions::_destinationPixelFormat(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osgDB::ImageOptions* self=Luna< osg::Referenced >::checkSubType< osgDB::ImageOptions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::ImageOptions::_destinationPixelFormat(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_destinationPixelFormat = value;

		return 0;
	}

	// void osgDB::ImageOptions::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::ImageOptions::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgDB::ImageOptions::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgDB::ImageOptions* self=Luna< osg::Referenced >::checkSubType< osgDB::ImageOptions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::ImageOptions::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ImageOptions::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osgDB::ImageOptions::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::ImageOptions::base_setName(const std::string & name) function, expected prototype:\nvoid osgDB::ImageOptions::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::ImageOptions* self=Luna< osg::Referenced >::checkSubType< osgDB::ImageOptions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::ImageOptions::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ImageOptions::setName(name);

		return 0;
	}

	// void osgDB::ImageOptions::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::ImageOptions::base_computeDataVariance() function, expected prototype:\nvoid osgDB::ImageOptions::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ImageOptions* self=Luna< osg::Referenced >::checkSubType< osgDB::ImageOptions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::ImageOptions::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ImageOptions::computeDataVariance();

		return 0;
	}

	// void osgDB::ImageOptions::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::ImageOptions::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osgDB::ImageOptions::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osgDB::ImageOptions* self=Luna< osg::Referenced >::checkSubType< osgDB::ImageOptions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::ImageOptions::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ImageOptions::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osgDB::ImageOptions::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osgDB::ImageOptions::base_getUserData() function, expected prototype:\nosg::Referenced * osgDB::ImageOptions::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ImageOptions* self=Luna< osg::Referenced >::checkSubType< osgDB::ImageOptions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osgDB::ImageOptions::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->ImageOptions::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osgDB::ImageOptions::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osgDB::ImageOptions::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osgDB::ImageOptions::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ImageOptions* self=Luna< osg::Referenced >::checkSubType< osgDB::ImageOptions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osgDB::ImageOptions::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->ImageOptions::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgDB::ImageOptions::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osgDB::ImageOptions::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::ImageOptions::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osgDB::ImageOptions::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osgDB::ImageOptions* self=Luna< osg::Referenced >::checkSubType< osgDB::ImageOptions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::ImageOptions::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ImageOptions::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osgDB::ImageOptions::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgDB::ImageOptions::base_cloneType() const function, expected prototype:\nosg::Object * osgDB::ImageOptions::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ImageOptions* self=Luna< osg::Referenced >::checkSubType< osgDB::ImageOptions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgDB::ImageOptions::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->ImageOptions::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgDB::ImageOptions::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgDB::ImageOptions::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgDB::ImageOptions::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgDB::ImageOptions::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgDB::ImageOptions* self=Luna< osg::Referenced >::checkSubType< osgDB::ImageOptions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgDB::ImageOptions::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->ImageOptions::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgDB::ImageOptions::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::ImageOptions::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgDB::ImageOptions::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgDB::ImageOptions* self=Luna< osg::Referenced >::checkSubType< osgDB::ImageOptions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::ImageOptions::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ImageOptions::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgDB::ImageOptions::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgDB::ImageOptions::base_libraryName() const function, expected prototype:\nconst char * osgDB::ImageOptions::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ImageOptions* self=Luna< osg::Referenced >::checkSubType< osgDB::ImageOptions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgDB::ImageOptions::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->ImageOptions::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgDB::ImageOptions::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgDB::ImageOptions::base_className() const function, expected prototype:\nconst char * osgDB::ImageOptions::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ImageOptions* self=Luna< osg::Referenced >::checkSubType< osgDB::ImageOptions >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgDB::ImageOptions::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->ImageOptions::className();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

osgDB::ImageOptions* LunaTraits< osgDB::ImageOptions >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgDB_ImageOptions::_bind_ctor(L);
}

void LunaTraits< osgDB::ImageOptions >::_bind_dtor(osgDB::ImageOptions* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgDB::ImageOptions >::className[] = "ImageOptions";
const char LunaTraits< osgDB::ImageOptions >::fullName[] = "osgDB::ImageOptions";
const char LunaTraits< osgDB::ImageOptions >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::ImageOptions >::parents[] = {"osgDB.Options", 0};
const int LunaTraits< osgDB::ImageOptions >::hash = 23411000;
const int LunaTraits< osgDB::ImageOptions >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgDB::ImageOptions >::methods[] = {
	{"cloneType", &luna_wrapper_osgDB_ImageOptions::_bind_cloneType},
	{"clone", &luna_wrapper_osgDB_ImageOptions::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osgDB_ImageOptions::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osgDB_ImageOptions::_bind_libraryName},
	{"className", &luna_wrapper_osgDB_ImageOptions::_bind_className},
	{"init", &luna_wrapper_osgDB_ImageOptions::_bind_init},
	{"getSourceImageSamplingMode", &luna_wrapper_osgDB_ImageOptions::_bind_getSourceImageSamplingMode},
	{"getSourceImageWindowMode", &luna_wrapper_osgDB_ImageOptions::_bind_getSourceImageWindowMode},
	{"getSourceRatioWindow", &luna_wrapper_osgDB_ImageOptions::_bind_getSourceRatioWindow},
	{"getSourcePixelWindow", &luna_wrapper_osgDB_ImageOptions::_bind_getSourcePixelWindow},
	{"getDestinationImage", &luna_wrapper_osgDB_ImageOptions::_bind_getDestinationImage},
	{"getDestinationImageWindowMode", &luna_wrapper_osgDB_ImageOptions::_bind_getDestinationImageWindowMode},
	{"getDestinationRatioWindow", &luna_wrapper_osgDB_ImageOptions::_bind_getDestinationRatioWindow},
	{"getDestinationPixelWindow", &luna_wrapper_osgDB_ImageOptions::_bind_getDestinationPixelWindow},
	{"getDestinationDataType", &luna_wrapper_osgDB_ImageOptions::_bind_getDestinationDataType},
	{"getDestinationPixelFormat", &luna_wrapper_osgDB_ImageOptions::_bind_getDestinationPixelFormat},
	{"setSourceImageSamplingMode", &luna_wrapper_osgDB_ImageOptions::_bind_setSourceImageSamplingMode},
	{"setSourceImageWindowMode", &luna_wrapper_osgDB_ImageOptions::_bind_setSourceImageWindowMode},
	{"setSourceRatioWindow", &luna_wrapper_osgDB_ImageOptions::_bind_setSourceRatioWindow},
	{"setSourcePixelWindow", &luna_wrapper_osgDB_ImageOptions::_bind_setSourcePixelWindow},
	{"setDestinationImage", &luna_wrapper_osgDB_ImageOptions::_bind_setDestinationImage},
	{"setDestinationImageWindowMode", &luna_wrapper_osgDB_ImageOptions::_bind_setDestinationImageWindowMode},
	{"setDestinationRatioWindow", &luna_wrapper_osgDB_ImageOptions::_bind_setDestinationRatioWindow},
	{"setDestinationPixelWindow", &luna_wrapper_osgDB_ImageOptions::_bind_setDestinationPixelWindow},
	{"setDestinationDataType", &luna_wrapper_osgDB_ImageOptions::_bind_setDestinationDataType},
	{"setDestinationPixelFormat", &luna_wrapper_osgDB_ImageOptions::_bind_setDestinationPixelFormat},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgDB_ImageOptions::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osgDB_ImageOptions::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osgDB_ImageOptions::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osgDB_ImageOptions::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osgDB_ImageOptions::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osgDB_ImageOptions::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osgDB_ImageOptions::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osgDB_ImageOptions::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osgDB_ImageOptions::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osgDB_ImageOptions::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osgDB_ImageOptions::_bind_base_className},
	{"fromVoid", &luna_wrapper_osgDB_ImageOptions::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgDB_ImageOptions::_bind_asVoid},
	{"getTable", &luna_wrapper_osgDB_ImageOptions::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::ImageOptions >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgDB_ImageOptions::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::ImageOptions >::enumValues[] = {
	{"ALL_IMAGE", osgDB::ImageOptions::ALL_IMAGE},
	{"RATIO_WINDOW", osgDB::ImageOptions::RATIO_WINDOW},
	{"PIXEL_WINDOW", osgDB::ImageOptions::PIXEL_WINDOW},
	{"NEAREST", osgDB::ImageOptions::NEAREST},
	{"LINEAR", osgDB::ImageOptions::LINEAR},
	{"CUBIC", osgDB::ImageOptions::CUBIC},
	{0,0}
};



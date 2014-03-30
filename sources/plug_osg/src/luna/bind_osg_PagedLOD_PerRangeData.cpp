#include <plug_common.h>

class luna_wrapper_osg_PagedLOD_PerRangeData {
public:
	typedef Luna< osg::PagedLOD::PerRangeData > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,17496146) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::PagedLOD::PerRangeData*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::PagedLOD::PerRangeData* rhs =(Luna< osg::PagedLOD::PerRangeData >::check(L,2));
		osg::PagedLOD::PerRangeData* self=(Luna< osg::PagedLOD::PerRangeData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		lua_pushboolean(L,self==rhs?1:0);

		return 1;
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

		osg::PagedLOD::PerRangeData* self= (osg::PagedLOD::PerRangeData*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::PagedLOD::PerRangeData >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,17496146) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osg::PagedLOD::PerRangeData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::PagedLOD::PerRangeData* self=(Luna< osg::PagedLOD::PerRangeData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::PagedLOD::PerRangeData");
		
		return luna_dynamicCast(L,converters,"osg::PagedLOD::PerRangeData",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,17496146) ) return false;
		if( (!(Luna< osg::PagedLOD::PerRangeData >::check(L,1))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getFilename(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPriorityOffset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPriorityScale(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMinExpiryTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMinExpiryFrames(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTimeStamp(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFrameNumber(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFrameNumberOfLastReleaseGLObjects(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDatabaseRequest(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setFilename(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPriorityOffset(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPriorityScale(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMinExpiryTime(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMinExpiryFrames(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTimeStamp(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFrameNumber(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFrameNumberOfLastReleaseGLObjects(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDatabaseRequest(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,84922662) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck_op_assign(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,17496146) ) return false;
		return true;
	}


	// Constructor binds:
	// osg::PagedLOD::PerRangeData::PerRangeData()
	static osg::PagedLOD::PerRangeData* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::PagedLOD::PerRangeData::PerRangeData() function, expected prototype:\nosg::PagedLOD::PerRangeData::PerRangeData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::PagedLOD::PerRangeData();
	}

	// osg::PagedLOD::PerRangeData::PerRangeData(const osg::PagedLOD::PerRangeData & prd)
	static osg::PagedLOD::PerRangeData* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::PagedLOD::PerRangeData::PerRangeData(const osg::PagedLOD::PerRangeData & prd) function, expected prototype:\nosg::PagedLOD::PerRangeData::PerRangeData(const osg::PagedLOD::PerRangeData & prd)\nClass arguments details:\narg 1 ID = 17496146\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::PagedLOD::PerRangeData* prd_ptr=(Luna< osg::PagedLOD::PerRangeData >::check(L,1));
		if( !prd_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg prd in osg::PagedLOD::PerRangeData::PerRangeData function");
		}
		const osg::PagedLOD::PerRangeData & prd=*prd_ptr;

		return new osg::PagedLOD::PerRangeData(prd);
	}

	// Overload binder for osg::PagedLOD::PerRangeData::PerRangeData
	static osg::PagedLOD::PerRangeData* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function PerRangeData, cannot match any of the overloads for function PerRangeData:\n  PerRangeData()\n  PerRangeData(const osg::PagedLOD::PerRangeData &)\n");
		return NULL;
	}


	// Function binds:
	// std::string osg::PagedLOD::PerRangeData::_filename()
	static int _bind_getFilename(lua_State *L) {
		if (!_lg_typecheck_getFilename(L)) {
			luaL_error(L, "luna typecheck failed in std::string osg::PagedLOD::PerRangeData::_filename() function, expected prototype:\nstd::string osg::PagedLOD::PerRangeData::_filename()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PagedLOD::PerRangeData* self=(Luna< osg::PagedLOD::PerRangeData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call std::string osg::PagedLOD::PerRangeData::_filename(). Got : '%s'\n%s",typeid(Luna< osg::PagedLOD::PerRangeData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		std::string lret = self->_filename;
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// float osg::PagedLOD::PerRangeData::_priorityOffset()
	static int _bind_getPriorityOffset(lua_State *L) {
		if (!_lg_typecheck_getPriorityOffset(L)) {
			luaL_error(L, "luna typecheck failed in float osg::PagedLOD::PerRangeData::_priorityOffset() function, expected prototype:\nfloat osg::PagedLOD::PerRangeData::_priorityOffset()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PagedLOD::PerRangeData* self=(Luna< osg::PagedLOD::PerRangeData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float osg::PagedLOD::PerRangeData::_priorityOffset(). Got : '%s'\n%s",typeid(Luna< osg::PagedLOD::PerRangeData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->_priorityOffset;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osg::PagedLOD::PerRangeData::_priorityScale()
	static int _bind_getPriorityScale(lua_State *L) {
		if (!_lg_typecheck_getPriorityScale(L)) {
			luaL_error(L, "luna typecheck failed in float osg::PagedLOD::PerRangeData::_priorityScale() function, expected prototype:\nfloat osg::PagedLOD::PerRangeData::_priorityScale()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PagedLOD::PerRangeData* self=(Luna< osg::PagedLOD::PerRangeData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float osg::PagedLOD::PerRangeData::_priorityScale(). Got : '%s'\n%s",typeid(Luna< osg::PagedLOD::PerRangeData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->_priorityScale;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double osg::PagedLOD::PerRangeData::_minExpiryTime()
	static int _bind_getMinExpiryTime(lua_State *L) {
		if (!_lg_typecheck_getMinExpiryTime(L)) {
			luaL_error(L, "luna typecheck failed in double osg::PagedLOD::PerRangeData::_minExpiryTime() function, expected prototype:\ndouble osg::PagedLOD::PerRangeData::_minExpiryTime()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PagedLOD::PerRangeData* self=(Luna< osg::PagedLOD::PerRangeData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double osg::PagedLOD::PerRangeData::_minExpiryTime(). Got : '%s'\n%s",typeid(Luna< osg::PagedLOD::PerRangeData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->_minExpiryTime;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::PagedLOD::PerRangeData::_minExpiryFrames()
	static int _bind_getMinExpiryFrames(lua_State *L) {
		if (!_lg_typecheck_getMinExpiryFrames(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::PagedLOD::PerRangeData::_minExpiryFrames() function, expected prototype:\nunsigned int osg::PagedLOD::PerRangeData::_minExpiryFrames()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PagedLOD::PerRangeData* self=(Luna< osg::PagedLOD::PerRangeData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::PagedLOD::PerRangeData::_minExpiryFrames(). Got : '%s'\n%s",typeid(Luna< osg::PagedLOD::PerRangeData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->_minExpiryFrames;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double osg::PagedLOD::PerRangeData::_timeStamp()
	static int _bind_getTimeStamp(lua_State *L) {
		if (!_lg_typecheck_getTimeStamp(L)) {
			luaL_error(L, "luna typecheck failed in double osg::PagedLOD::PerRangeData::_timeStamp() function, expected prototype:\ndouble osg::PagedLOD::PerRangeData::_timeStamp()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PagedLOD::PerRangeData* self=(Luna< osg::PagedLOD::PerRangeData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double osg::PagedLOD::PerRangeData::_timeStamp(). Got : '%s'\n%s",typeid(Luna< osg::PagedLOD::PerRangeData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->_timeStamp;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::PagedLOD::PerRangeData::_frameNumber()
	static int _bind_getFrameNumber(lua_State *L) {
		if (!_lg_typecheck_getFrameNumber(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::PagedLOD::PerRangeData::_frameNumber() function, expected prototype:\nunsigned int osg::PagedLOD::PerRangeData::_frameNumber()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PagedLOD::PerRangeData* self=(Luna< osg::PagedLOD::PerRangeData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::PagedLOD::PerRangeData::_frameNumber(). Got : '%s'\n%s",typeid(Luna< osg::PagedLOD::PerRangeData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->_frameNumber;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::PagedLOD::PerRangeData::_frameNumberOfLastReleaseGLObjects()
	static int _bind_getFrameNumberOfLastReleaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_getFrameNumberOfLastReleaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::PagedLOD::PerRangeData::_frameNumberOfLastReleaseGLObjects() function, expected prototype:\nunsigned int osg::PagedLOD::PerRangeData::_frameNumberOfLastReleaseGLObjects()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PagedLOD::PerRangeData* self=(Luna< osg::PagedLOD::PerRangeData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::PagedLOD::PerRangeData::_frameNumberOfLastReleaseGLObjects(). Got : '%s'\n%s",typeid(Luna< osg::PagedLOD::PerRangeData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->_frameNumberOfLastReleaseGLObjects;
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::ref_ptr< osg::Referenced > osg::PagedLOD::PerRangeData::_databaseRequest()
	static int _bind_getDatabaseRequest(lua_State *L) {
		if (!_lg_typecheck_getDatabaseRequest(L)) {
			luaL_error(L, "luna typecheck failed in osg::ref_ptr< osg::Referenced > osg::PagedLOD::PerRangeData::_databaseRequest() function, expected prototype:\nosg::ref_ptr< osg::Referenced > osg::PagedLOD::PerRangeData::_databaseRequest()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PagedLOD::PerRangeData* self=(Luna< osg::PagedLOD::PerRangeData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::ref_ptr< osg::Referenced > osg::PagedLOD::PerRangeData::_databaseRequest(). Got : '%s'\n%s",typeid(Luna< osg::PagedLOD::PerRangeData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::ref_ptr< osg::Referenced > lret = self->_databaseRequest;
		Luna< osg::Referenced >::push(L,lret.get(),false);

		return 1;
	}

	// void osg::PagedLOD::PerRangeData::_filename(std::string value)
	static int _bind_setFilename(lua_State *L) {
		if (!_lg_typecheck_setFilename(L)) {
			luaL_error(L, "luna typecheck failed in void osg::PagedLOD::PerRangeData::_filename(std::string value) function, expected prototype:\nvoid osg::PagedLOD::PerRangeData::_filename(std::string value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string value(lua_tostring(L,2),lua_objlen(L,2));

		osg::PagedLOD::PerRangeData* self=(Luna< osg::PagedLOD::PerRangeData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::PagedLOD::PerRangeData::_filename(std::string). Got : '%s'\n%s",typeid(Luna< osg::PagedLOD::PerRangeData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_filename = value;

		return 0;
	}

	// void osg::PagedLOD::PerRangeData::_priorityOffset(float value)
	static int _bind_setPriorityOffset(lua_State *L) {
		if (!_lg_typecheck_setPriorityOffset(L)) {
			luaL_error(L, "luna typecheck failed in void osg::PagedLOD::PerRangeData::_priorityOffset(float value) function, expected prototype:\nvoid osg::PagedLOD::PerRangeData::_priorityOffset(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		osg::PagedLOD::PerRangeData* self=(Luna< osg::PagedLOD::PerRangeData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::PagedLOD::PerRangeData::_priorityOffset(float). Got : '%s'\n%s",typeid(Luna< osg::PagedLOD::PerRangeData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_priorityOffset = value;

		return 0;
	}

	// void osg::PagedLOD::PerRangeData::_priorityScale(float value)
	static int _bind_setPriorityScale(lua_State *L) {
		if (!_lg_typecheck_setPriorityScale(L)) {
			luaL_error(L, "luna typecheck failed in void osg::PagedLOD::PerRangeData::_priorityScale(float value) function, expected prototype:\nvoid osg::PagedLOD::PerRangeData::_priorityScale(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		osg::PagedLOD::PerRangeData* self=(Luna< osg::PagedLOD::PerRangeData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::PagedLOD::PerRangeData::_priorityScale(float). Got : '%s'\n%s",typeid(Luna< osg::PagedLOD::PerRangeData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_priorityScale = value;

		return 0;
	}

	// void osg::PagedLOD::PerRangeData::_minExpiryTime(double value)
	static int _bind_setMinExpiryTime(lua_State *L) {
		if (!_lg_typecheck_setMinExpiryTime(L)) {
			luaL_error(L, "luna typecheck failed in void osg::PagedLOD::PerRangeData::_minExpiryTime(double value) function, expected prototype:\nvoid osg::PagedLOD::PerRangeData::_minExpiryTime(double value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double value=(double)lua_tonumber(L,2);

		osg::PagedLOD::PerRangeData* self=(Luna< osg::PagedLOD::PerRangeData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::PagedLOD::PerRangeData::_minExpiryTime(double). Got : '%s'\n%s",typeid(Luna< osg::PagedLOD::PerRangeData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_minExpiryTime = value;

		return 0;
	}

	// void osg::PagedLOD::PerRangeData::_minExpiryFrames(unsigned int value)
	static int _bind_setMinExpiryFrames(lua_State *L) {
		if (!_lg_typecheck_setMinExpiryFrames(L)) {
			luaL_error(L, "luna typecheck failed in void osg::PagedLOD::PerRangeData::_minExpiryFrames(unsigned int value) function, expected prototype:\nvoid osg::PagedLOD::PerRangeData::_minExpiryFrames(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osg::PagedLOD::PerRangeData* self=(Luna< osg::PagedLOD::PerRangeData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::PagedLOD::PerRangeData::_minExpiryFrames(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::PagedLOD::PerRangeData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_minExpiryFrames = value;

		return 0;
	}

	// void osg::PagedLOD::PerRangeData::_timeStamp(double value)
	static int _bind_setTimeStamp(lua_State *L) {
		if (!_lg_typecheck_setTimeStamp(L)) {
			luaL_error(L, "luna typecheck failed in void osg::PagedLOD::PerRangeData::_timeStamp(double value) function, expected prototype:\nvoid osg::PagedLOD::PerRangeData::_timeStamp(double value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double value=(double)lua_tonumber(L,2);

		osg::PagedLOD::PerRangeData* self=(Luna< osg::PagedLOD::PerRangeData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::PagedLOD::PerRangeData::_timeStamp(double). Got : '%s'\n%s",typeid(Luna< osg::PagedLOD::PerRangeData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_timeStamp = value;

		return 0;
	}

	// void osg::PagedLOD::PerRangeData::_frameNumber(unsigned int value)
	static int _bind_setFrameNumber(lua_State *L) {
		if (!_lg_typecheck_setFrameNumber(L)) {
			luaL_error(L, "luna typecheck failed in void osg::PagedLOD::PerRangeData::_frameNumber(unsigned int value) function, expected prototype:\nvoid osg::PagedLOD::PerRangeData::_frameNumber(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osg::PagedLOD::PerRangeData* self=(Luna< osg::PagedLOD::PerRangeData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::PagedLOD::PerRangeData::_frameNumber(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::PagedLOD::PerRangeData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_frameNumber = value;

		return 0;
	}

	// void osg::PagedLOD::PerRangeData::_frameNumberOfLastReleaseGLObjects(unsigned int value)
	static int _bind_setFrameNumberOfLastReleaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_setFrameNumberOfLastReleaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::PagedLOD::PerRangeData::_frameNumberOfLastReleaseGLObjects(unsigned int value) function, expected prototype:\nvoid osg::PagedLOD::PerRangeData::_frameNumberOfLastReleaseGLObjects(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osg::PagedLOD::PerRangeData* self=(Luna< osg::PagedLOD::PerRangeData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::PagedLOD::PerRangeData::_frameNumberOfLastReleaseGLObjects(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::PagedLOD::PerRangeData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_frameNumberOfLastReleaseGLObjects = value;

		return 0;
	}

	// void osg::PagedLOD::PerRangeData::_databaseRequest(osg::ref_ptr< osg::Referenced > value)
	static int _bind_setDatabaseRequest(lua_State *L) {
		if (!_lg_typecheck_setDatabaseRequest(L)) {
			luaL_error(L, "luna typecheck failed in void osg::PagedLOD::PerRangeData::_databaseRequest(osg::ref_ptr< osg::Referenced > value) function, expected prototype:\nvoid osg::PagedLOD::PerRangeData::_databaseRequest(osg::ref_ptr< osg::Referenced > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ref_ptr< osg::Referenced > value = dynamic_cast< osg::Referenced* >(Luna< osg::Referenced >::check(L,2));

		osg::PagedLOD::PerRangeData* self=(Luna< osg::PagedLOD::PerRangeData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::PagedLOD::PerRangeData::_databaseRequest(osg::ref_ptr< osg::Referenced >). Got : '%s'\n%s",typeid(Luna< osg::PagedLOD::PerRangeData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_databaseRequest = value;

		return 0;
	}


	// Operator binds:
	// osg::PagedLOD::PerRangeData & osg::PagedLOD::PerRangeData::operator=(const osg::PagedLOD::PerRangeData & prd)
	static int _bind_op_assign(lua_State *L) {
		if (!_lg_typecheck_op_assign(L)) {
			luaL_error(L, "luna typecheck failed in osg::PagedLOD::PerRangeData & osg::PagedLOD::PerRangeData::operator=(const osg::PagedLOD::PerRangeData & prd) function, expected prototype:\nosg::PagedLOD::PerRangeData & osg::PagedLOD::PerRangeData::operator=(const osg::PagedLOD::PerRangeData & prd)\nClass arguments details:\narg 1 ID = 17496146\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::PagedLOD::PerRangeData* prd_ptr=(Luna< osg::PagedLOD::PerRangeData >::check(L,2));
		if( !prd_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg prd in osg::PagedLOD::PerRangeData::operator= function");
		}
		const osg::PagedLOD::PerRangeData & prd=*prd_ptr;

		osg::PagedLOD::PerRangeData* self=(Luna< osg::PagedLOD::PerRangeData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::PagedLOD::PerRangeData & osg::PagedLOD::PerRangeData::operator=(const osg::PagedLOD::PerRangeData &). Got : '%s'\n%s",typeid(Luna< osg::PagedLOD::PerRangeData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::PagedLOD::PerRangeData* lret = &self->operator=(prd);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::PagedLOD::PerRangeData >::push(L,lret,false);

		return 1;
	}


};

osg::PagedLOD::PerRangeData* LunaTraits< osg::PagedLOD::PerRangeData >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_PagedLOD_PerRangeData::_bind_ctor(L);
}

void LunaTraits< osg::PagedLOD::PerRangeData >::_bind_dtor(osg::PagedLOD::PerRangeData* obj) {
	delete obj;
}

const char LunaTraits< osg::PagedLOD::PerRangeData >::className[] = "PagedLOD_PerRangeData";
const char LunaTraits< osg::PagedLOD::PerRangeData >::fullName[] = "osg::PagedLOD::PerRangeData";
const char LunaTraits< osg::PagedLOD::PerRangeData >::moduleName[] = "osg";
const char* LunaTraits< osg::PagedLOD::PerRangeData >::parents[] = {0};
const int LunaTraits< osg::PagedLOD::PerRangeData >::hash = 17496146;
const int LunaTraits< osg::PagedLOD::PerRangeData >::uniqueIDs[] = {17496146,0};

luna_RegType LunaTraits< osg::PagedLOD::PerRangeData >::methods[] = {
	{"getFilename", &luna_wrapper_osg_PagedLOD_PerRangeData::_bind_getFilename},
	{"getPriorityOffset", &luna_wrapper_osg_PagedLOD_PerRangeData::_bind_getPriorityOffset},
	{"getPriorityScale", &luna_wrapper_osg_PagedLOD_PerRangeData::_bind_getPriorityScale},
	{"getMinExpiryTime", &luna_wrapper_osg_PagedLOD_PerRangeData::_bind_getMinExpiryTime},
	{"getMinExpiryFrames", &luna_wrapper_osg_PagedLOD_PerRangeData::_bind_getMinExpiryFrames},
	{"getTimeStamp", &luna_wrapper_osg_PagedLOD_PerRangeData::_bind_getTimeStamp},
	{"getFrameNumber", &luna_wrapper_osg_PagedLOD_PerRangeData::_bind_getFrameNumber},
	{"getFrameNumberOfLastReleaseGLObjects", &luna_wrapper_osg_PagedLOD_PerRangeData::_bind_getFrameNumberOfLastReleaseGLObjects},
	{"getDatabaseRequest", &luna_wrapper_osg_PagedLOD_PerRangeData::_bind_getDatabaseRequest},
	{"setFilename", &luna_wrapper_osg_PagedLOD_PerRangeData::_bind_setFilename},
	{"setPriorityOffset", &luna_wrapper_osg_PagedLOD_PerRangeData::_bind_setPriorityOffset},
	{"setPriorityScale", &luna_wrapper_osg_PagedLOD_PerRangeData::_bind_setPriorityScale},
	{"setMinExpiryTime", &luna_wrapper_osg_PagedLOD_PerRangeData::_bind_setMinExpiryTime},
	{"setMinExpiryFrames", &luna_wrapper_osg_PagedLOD_PerRangeData::_bind_setMinExpiryFrames},
	{"setTimeStamp", &luna_wrapper_osg_PagedLOD_PerRangeData::_bind_setTimeStamp},
	{"setFrameNumber", &luna_wrapper_osg_PagedLOD_PerRangeData::_bind_setFrameNumber},
	{"setFrameNumberOfLastReleaseGLObjects", &luna_wrapper_osg_PagedLOD_PerRangeData::_bind_setFrameNumberOfLastReleaseGLObjects},
	{"setDatabaseRequest", &luna_wrapper_osg_PagedLOD_PerRangeData::_bind_setDatabaseRequest},
	{"op_assign", &luna_wrapper_osg_PagedLOD_PerRangeData::_bind_op_assign},
	{"dynCast", &luna_wrapper_osg_PagedLOD_PerRangeData::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_PagedLOD_PerRangeData::_bind___eq},
	{"fromVoid", &luna_wrapper_osg_PagedLOD_PerRangeData::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_PagedLOD_PerRangeData::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< osg::PagedLOD::PerRangeData >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::PagedLOD::PerRangeData >::enumValues[] = {
	{0,0}
};



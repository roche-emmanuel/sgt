#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_Stats.h>

class luna_wrapper_osg_Stats {
public:
	typedef Luna< osg::Stats > luna_t;

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

		osg::Stats* self= (osg::Stats*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::Stats >::push(L,self,false);
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
		//osg::Stats* ptr= dynamic_cast< osg::Stats* >(Luna< osg::Referenced >::check(L,1));
		osg::Stats* ptr= luna_caster< osg::Referenced, osg::Stats >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::Stats >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_setName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_allocate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getEarliestFrameNumber(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLatestFrameNumber(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setAttribute(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAttribute(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAveragedAttribute_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAveragedAttribute_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>6 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( luatop>5 && lua_isboolean(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_collectStats_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_collectStats_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_report_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2993706) ) return false;
		if( (!(Luna< std::ostream >::check(L,2))) ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_report_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2993706) ) return false;
		if( (!(Luna< std::ostream >::check(L,2))) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TSTRING ) return false;
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
	// osg::Stats::Stats(const std::string & name)
	static osg::Stats* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Stats::Stats(const std::string & name) function, expected prototype:\nosg::Stats::Stats(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,1),lua_objlen(L,1));

		return new osg::Stats(name);
	}

	// osg::Stats::Stats(const std::string & name, unsigned int numberOfFrames)
	static osg::Stats* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Stats::Stats(const std::string & name, unsigned int numberOfFrames) function, expected prototype:\nosg::Stats::Stats(const std::string & name, unsigned int numberOfFrames)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,1),lua_objlen(L,1));
		unsigned int numberOfFrames=(unsigned int)lua_tointeger(L,2);

		return new osg::Stats(name, numberOfFrames);
	}

	// osg::Stats::Stats(lua_Table * data, const std::string & name)
	static osg::Stats* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::Stats::Stats(lua_Table * data, const std::string & name) function, expected prototype:\nosg::Stats::Stats(lua_Table * data, const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		return new wrapper_osg_Stats(L,NULL, name);
	}

	// osg::Stats::Stats(lua_Table * data, const std::string & name, unsigned int numberOfFrames)
	static osg::Stats* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::Stats::Stats(lua_Table * data, const std::string & name, unsigned int numberOfFrames) function, expected prototype:\nosg::Stats::Stats(lua_Table * data, const std::string & name, unsigned int numberOfFrames)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));
		unsigned int numberOfFrames=(unsigned int)lua_tointeger(L,3);

		return new wrapper_osg_Stats(L,NULL, name, numberOfFrames);
	}

	// Overload binder for osg::Stats::Stats
	static osg::Stats* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function Stats, cannot match any of the overloads for function Stats:\n  Stats(const std::string &)\n  Stats(const std::string &, unsigned int)\n  Stats(lua_Table *, const std::string &)\n  Stats(lua_Table *, const std::string &, unsigned int)\n");
		return NULL;
	}


	// Function binds:
	// void osg::Stats::setName(const std::string & name)
	static int _bind_setName(lua_State *L) {
		if (!_lg_typecheck_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Stats::setName(const std::string & name) function, expected prototype:\nvoid osg::Stats::setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::Stats* self=Luna< osg::Referenced >::checkSubType< osg::Stats >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Stats::setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setName(name);

		return 0;
	}

	// const std::string & osg::Stats::getName() const
	static int _bind_getName(lua_State *L) {
		if (!_lg_typecheck_getName(L)) {
			luaL_error(L, "luna typecheck failed in const std::string & osg::Stats::getName() const function, expected prototype:\nconst std::string & osg::Stats::getName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Stats* self=Luna< osg::Referenced >::checkSubType< osg::Stats >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const std::string & osg::Stats::getName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const std::string & lret = self->getName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void osg::Stats::allocate(unsigned int numberOfFrames)
	static int _bind_allocate(lua_State *L) {
		if (!_lg_typecheck_allocate(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Stats::allocate(unsigned int numberOfFrames) function, expected prototype:\nvoid osg::Stats::allocate(unsigned int numberOfFrames)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int numberOfFrames=(unsigned int)lua_tointeger(L,2);

		osg::Stats* self=Luna< osg::Referenced >::checkSubType< osg::Stats >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Stats::allocate(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->allocate(numberOfFrames);

		return 0;
	}

	// unsigned int osg::Stats::getEarliestFrameNumber() const
	static int _bind_getEarliestFrameNumber(lua_State *L) {
		if (!_lg_typecheck_getEarliestFrameNumber(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Stats::getEarliestFrameNumber() const function, expected prototype:\nunsigned int osg::Stats::getEarliestFrameNumber() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Stats* self=Luna< osg::Referenced >::checkSubType< osg::Stats >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Stats::getEarliestFrameNumber() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getEarliestFrameNumber();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::Stats::getLatestFrameNumber() const
	static int _bind_getLatestFrameNumber(lua_State *L) {
		if (!_lg_typecheck_getLatestFrameNumber(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Stats::getLatestFrameNumber() const function, expected prototype:\nunsigned int osg::Stats::getLatestFrameNumber() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Stats* self=Luna< osg::Referenced >::checkSubType< osg::Stats >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Stats::getLatestFrameNumber() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getLatestFrameNumber();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::Stats::setAttribute(unsigned int frameNumber, const std::string & attributeName, double value)
	static int _bind_setAttribute(lua_State *L) {
		if (!_lg_typecheck_setAttribute(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Stats::setAttribute(unsigned int frameNumber, const std::string & attributeName, double value) function, expected prototype:\nbool osg::Stats::setAttribute(unsigned int frameNumber, const std::string & attributeName, double value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int frameNumber=(unsigned int)lua_tointeger(L,2);
		std::string attributeName(lua_tostring(L,3),lua_objlen(L,3));
		double value=(double)lua_tonumber(L,4);

		osg::Stats* self=Luna< osg::Referenced >::checkSubType< osg::Stats >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Stats::setAttribute(unsigned int, const std::string &, double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->setAttribute(frameNumber, attributeName, value);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Stats::getAttribute(unsigned int frameNumber, const std::string & attributeName, double & value) const
	static int _bind_getAttribute(lua_State *L) {
		if (!_lg_typecheck_getAttribute(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Stats::getAttribute(unsigned int frameNumber, const std::string & attributeName, double & value) const function, expected prototype:\nbool osg::Stats::getAttribute(unsigned int frameNumber, const std::string & attributeName, double & value) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int frameNumber=(unsigned int)lua_tointeger(L,2);
		std::string attributeName(lua_tostring(L,3),lua_objlen(L,3));
		double value=(double)lua_tonumber(L,4);

		osg::Stats* self=Luna< osg::Referenced >::checkSubType< osg::Stats >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Stats::getAttribute(unsigned int, const std::string &, double &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getAttribute(frameNumber, attributeName, value);
		lua_pushboolean(L,lret?1:0);

		lua_pushnumber(L,value);
		return 2;
	}

	// bool osg::Stats::getAveragedAttribute(const std::string & attributeName, double & value, bool averageInInverseSpace = false) const
	static int _bind_getAveragedAttribute_overload_1(lua_State *L) {
		if (!_lg_typecheck_getAveragedAttribute_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Stats::getAveragedAttribute(const std::string & attributeName, double & value, bool averageInInverseSpace = false) const function, expected prototype:\nbool osg::Stats::getAveragedAttribute(const std::string & attributeName, double & value, bool averageInInverseSpace = false) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		std::string attributeName(lua_tostring(L,2),lua_objlen(L,2));
		double value=(double)lua_tonumber(L,3);
		bool averageInInverseSpace=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)false;

		osg::Stats* self=Luna< osg::Referenced >::checkSubType< osg::Stats >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Stats::getAveragedAttribute(const std::string &, double &, bool) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getAveragedAttribute(attributeName, value, averageInInverseSpace);
		lua_pushboolean(L,lret?1:0);

		lua_pushnumber(L,value);
		return 2;
	}

	// bool osg::Stats::getAveragedAttribute(unsigned int startFrameNumber, unsigned int endFrameNumber, const std::string & attributeName, double & value, bool averageInInverseSpace = false) const
	static int _bind_getAveragedAttribute_overload_2(lua_State *L) {
		if (!_lg_typecheck_getAveragedAttribute_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Stats::getAveragedAttribute(unsigned int startFrameNumber, unsigned int endFrameNumber, const std::string & attributeName, double & value, bool averageInInverseSpace = false) const function, expected prototype:\nbool osg::Stats::getAveragedAttribute(unsigned int startFrameNumber, unsigned int endFrameNumber, const std::string & attributeName, double & value, bool averageInInverseSpace = false) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		unsigned int startFrameNumber=(unsigned int)lua_tointeger(L,2);
		unsigned int endFrameNumber=(unsigned int)lua_tointeger(L,3);
		std::string attributeName(lua_tostring(L,4),lua_objlen(L,4));
		double value=(double)lua_tonumber(L,5);
		bool averageInInverseSpace=luatop>5 ? (bool)(lua_toboolean(L,6)==1) : (bool)false;

		osg::Stats* self=Luna< osg::Referenced >::checkSubType< osg::Stats >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Stats::getAveragedAttribute(unsigned int, unsigned int, const std::string &, double &, bool) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getAveragedAttribute(startFrameNumber, endFrameNumber, attributeName, value, averageInInverseSpace);
		lua_pushboolean(L,lret?1:0);

		lua_pushnumber(L,value);
		return 2;
	}

	// Overload binder for osg::Stats::getAveragedAttribute
	static int _bind_getAveragedAttribute(lua_State *L) {
		if (_lg_typecheck_getAveragedAttribute_overload_1(L)) return _bind_getAveragedAttribute_overload_1(L);
		if (_lg_typecheck_getAveragedAttribute_overload_2(L)) return _bind_getAveragedAttribute_overload_2(L);

		luaL_error(L, "error in function getAveragedAttribute, cannot match any of the overloads for function getAveragedAttribute:\n  getAveragedAttribute(const std::string &, double &, bool)\n  getAveragedAttribute(unsigned int, unsigned int, const std::string &, double &, bool)\n");
		return 0;
	}

	// void osg::Stats::collectStats(const std::string & str, bool flag)
	static int _bind_collectStats_overload_1(lua_State *L) {
		if (!_lg_typecheck_collectStats_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Stats::collectStats(const std::string & str, bool flag) function, expected prototype:\nvoid osg::Stats::collectStats(const std::string & str, bool flag)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string str(lua_tostring(L,2),lua_objlen(L,2));
		bool flag=(bool)(lua_toboolean(L,3)==1);

		osg::Stats* self=Luna< osg::Referenced >::checkSubType< osg::Stats >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Stats::collectStats(const std::string &, bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->collectStats(str, flag);

		return 0;
	}

	// bool osg::Stats::collectStats(const std::string & str) const
	static int _bind_collectStats_overload_2(lua_State *L) {
		if (!_lg_typecheck_collectStats_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Stats::collectStats(const std::string & str) const function, expected prototype:\nbool osg::Stats::collectStats(const std::string & str) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string str(lua_tostring(L,2),lua_objlen(L,2));

		osg::Stats* self=Luna< osg::Referenced >::checkSubType< osg::Stats >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Stats::collectStats(const std::string &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->collectStats(str);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for osg::Stats::collectStats
	static int _bind_collectStats(lua_State *L) {
		if (_lg_typecheck_collectStats_overload_1(L)) return _bind_collectStats_overload_1(L);
		if (_lg_typecheck_collectStats_overload_2(L)) return _bind_collectStats_overload_2(L);

		luaL_error(L, "error in function collectStats, cannot match any of the overloads for function collectStats:\n  collectStats(const std::string &, bool)\n  collectStats(const std::string &)\n");
		return 0;
	}

	// void osg::Stats::report(std::ostream & out, const char * indent = 0) const
	static int _bind_report_overload_1(lua_State *L) {
		if (!_lg_typecheck_report_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Stats::report(std::ostream & out, const char * indent = 0) const function, expected prototype:\nvoid osg::Stats::report(std::ostream & out, const char * indent = 0) const\nClass arguments details:\narg 1 ID = 2993706\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		std::ostream* out_ptr=(Luna< std::ostream >::check(L,2));
		if( !out_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg out in osg::Stats::report function");
		}
		std::ostream & out=*out_ptr;
		const char * indent=luatop>2 ? (const char *)lua_tostring(L,3) : (const char*)0;

		osg::Stats* self=Luna< osg::Referenced >::checkSubType< osg::Stats >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Stats::report(std::ostream &, const char *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->report(out, indent);

		return 0;
	}

	// void osg::Stats::report(std::ostream & out, unsigned int frameNumber, const char * indent = 0) const
	static int _bind_report_overload_2(lua_State *L) {
		if (!_lg_typecheck_report_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Stats::report(std::ostream & out, unsigned int frameNumber, const char * indent = 0) const function, expected prototype:\nvoid osg::Stats::report(std::ostream & out, unsigned int frameNumber, const char * indent = 0) const\nClass arguments details:\narg 1 ID = 2993706\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		std::ostream* out_ptr=(Luna< std::ostream >::check(L,2));
		if( !out_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg out in osg::Stats::report function");
		}
		std::ostream & out=*out_ptr;
		unsigned int frameNumber=(unsigned int)lua_tointeger(L,3);
		const char * indent=luatop>3 ? (const char *)lua_tostring(L,4) : (const char*)0;

		osg::Stats* self=Luna< osg::Referenced >::checkSubType< osg::Stats >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Stats::report(std::ostream &, unsigned int, const char *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->report(out, frameNumber, indent);

		return 0;
	}

	// Overload binder for osg::Stats::report
	static int _bind_report(lua_State *L) {
		if (_lg_typecheck_report_overload_1(L)) return _bind_report_overload_1(L);
		if (_lg_typecheck_report_overload_2(L)) return _bind_report_overload_2(L);

		luaL_error(L, "error in function report, cannot match any of the overloads for function report:\n  report(std::ostream &, const char *)\n  report(std::ostream &, unsigned int, const char *)\n");
		return 0;
	}

	// void osg::Stats::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Stats::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::Stats::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::Stats* self=Luna< osg::Referenced >::checkSubType< osg::Stats >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Stats::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Stats::setThreadSafeRefUnref(threadSafe);

		return 0;
	}


	// Operator binds:

};

osg::Stats* LunaTraits< osg::Stats >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Stats::_bind_ctor(L);
}

void LunaTraits< osg::Stats >::_bind_dtor(osg::Stats* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::Stats >::className[] = "Stats";
const char LunaTraits< osg::Stats >::fullName[] = "osg::Stats";
const char LunaTraits< osg::Stats >::moduleName[] = "osg";
const char* LunaTraits< osg::Stats >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osg::Stats >::hash = 89979612;
const int LunaTraits< osg::Stats >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::Stats >::methods[] = {
	{"setName", &luna_wrapper_osg_Stats::_bind_setName},
	{"getName", &luna_wrapper_osg_Stats::_bind_getName},
	{"allocate", &luna_wrapper_osg_Stats::_bind_allocate},
	{"getEarliestFrameNumber", &luna_wrapper_osg_Stats::_bind_getEarliestFrameNumber},
	{"getLatestFrameNumber", &luna_wrapper_osg_Stats::_bind_getLatestFrameNumber},
	{"setAttribute", &luna_wrapper_osg_Stats::_bind_setAttribute},
	{"getAttribute", &luna_wrapper_osg_Stats::_bind_getAttribute},
	{"getAveragedAttribute", &luna_wrapper_osg_Stats::_bind_getAveragedAttribute},
	{"collectStats", &luna_wrapper_osg_Stats::_bind_collectStats},
	{"report", &luna_wrapper_osg_Stats::_bind_report},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_Stats::_bind_base_setThreadSafeRefUnref},
	{"fromVoid", &luna_wrapper_osg_Stats::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_Stats::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_Stats::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Stats >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_Stats::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Stats >::enumValues[] = {
	{0,0}
};



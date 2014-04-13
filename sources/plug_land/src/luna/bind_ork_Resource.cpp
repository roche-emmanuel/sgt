#include <plug_common.h>

#include <luna/wrappers/wrapper_ork_Resource.h>

class luna_wrapper_ork_Resource {
public:
	typedef Luna< ork::Resource > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::Resource* self=(Luna< ork::Resource >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<ork::Resource,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,95308202) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ork::Resource*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::Resource* rhs =(Luna< ork::Resource >::check(L,2));
		ork::Resource* self=(Luna< ork::Resource >::check(L,1));
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

		ork::Resource* self= (ork::Resource*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ork::Resource >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,95308202) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< ork::Resource >::check(L,1));
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

		ork::Resource* self=(Luna< ork::Resource >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ork::Resource");
		
		return luna_dynamicCast(L,converters,"ork::Resource",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::ResourceManager >(L,2) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,4,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::ResourceDescriptor >(L,4) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUpdateOrder(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_prepareUpdate(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_doUpdate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_changed(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_checkParameters(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::ResourceDescriptor >(L,1) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,89852901)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getIntParameter(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::ResourceDescriptor >(L,1) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,89852901)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFloatParameter(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::ResourceDescriptor >(L,1) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,89852901)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getParameter(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::ResourceDescriptor >(L,1) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,89852901)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_log_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Logger >(L,1) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::ResourceDescriptor >(L,2) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,89852901)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< TiXmlBase >::checkSubType< TiXmlElement >(L,3)) ) ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_log_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Logger >(L,1) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,89852901)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< TiXmlBase >::checkSubType< TiXmlElement >(L,2)) ) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,89852901)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< TiXmlBase >::checkSubType< TiXmlElement >(L,3)) ) ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_prepareUpdate(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_changed(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// ork::Resource::Resource(lua_Table * data, ork::ptr< ork::ResourceManager > manager, const std::string & name, ork::ptr< ork::ResourceDescriptor > desc)
	static ork::Resource* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in ork::Resource::Resource(lua_Table * data, ork::ptr< ork::ResourceManager > manager, const std::string & name, ork::ptr< ork::ResourceDescriptor > desc) function, expected prototype:\nork::Resource::Resource(lua_Table * data, ork::ptr< ork::ResourceManager > manager, const std::string & name, ork::ptr< ork::ResourceDescriptor > desc)\nClass arguments details:\narg 2 ID = [unknown]\narg 4 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::ResourceManager > manager = Luna< ork::Object >::checkSubType< ork::ResourceManager >(L,2);
		std::string name(lua_tostring(L,3),lua_objlen(L,3));
		ork::ptr< ork::ResourceDescriptor > desc = Luna< ork::Object >::checkSubType< ork::ResourceDescriptor >(L,4);

		return new wrapper_ork_Resource(L,NULL, manager, name, desc);
	}


	// Function binds:
	// std::string ork::Resource::getName()
	static int _bind_getName(lua_State *L) {
		if (!_lg_typecheck_getName(L)) {
			luaL_error(L, "luna typecheck failed in std::string ork::Resource::getName() function, expected prototype:\nstd::string ork::Resource::getName()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Resource* self=(Luna< ork::Resource >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call std::string ork::Resource::getName(). Got : '%s'\n%s",typeid(Luna< ork::Resource >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		std::string lret = self->getName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// int ork::Resource::getUpdateOrder()
	static int _bind_getUpdateOrder(lua_State *L) {
		if (!_lg_typecheck_getUpdateOrder(L)) {
			luaL_error(L, "luna typecheck failed in int ork::Resource::getUpdateOrder() function, expected prototype:\nint ork::Resource::getUpdateOrder()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Resource* self=(Luna< ork::Resource >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int ork::Resource::getUpdateOrder(). Got : '%s'\n%s",typeid(Luna< ork::Resource >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getUpdateOrder();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool ork::Resource::prepareUpdate()
	static int _bind_prepareUpdate(lua_State *L) {
		if (!_lg_typecheck_prepareUpdate(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::Resource::prepareUpdate() function, expected prototype:\nbool ork::Resource::prepareUpdate()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Resource* self=(Luna< ork::Resource >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::Resource::prepareUpdate(). Got : '%s'\n%s",typeid(Luna< ork::Resource >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->prepareUpdate();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void ork::Resource::doUpdate(bool commit)
	static int _bind_doUpdate(lua_State *L) {
		if (!_lg_typecheck_doUpdate(L)) {
			luaL_error(L, "luna typecheck failed in void ork::Resource::doUpdate(bool commit) function, expected prototype:\nvoid ork::Resource::doUpdate(bool commit)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool commit=(bool)(lua_toboolean(L,2)==1);

		ork::Resource* self=(Luna< ork::Resource >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::Resource::doUpdate(bool). Got : '%s'\n%s",typeid(Luna< ork::Resource >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->doUpdate(commit);

		return 0;
	}

	// bool ork::Resource::changed()
	static int _bind_changed(lua_State *L) {
		if (!_lg_typecheck_changed(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::Resource::changed() function, expected prototype:\nbool ork::Resource::changed()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Resource* self=(Luna< ork::Resource >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::Resource::changed(). Got : '%s'\n%s",typeid(Luna< ork::Resource >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->changed();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static void ork::Resource::checkParameters(const ork::ptr< ork::ResourceDescriptor > desc, const TiXmlElement * e, const std::string & params)
	static int _bind_checkParameters(lua_State *L) {
		if (!_lg_typecheck_checkParameters(L)) {
			luaL_error(L, "luna typecheck failed in static void ork::Resource::checkParameters(const ork::ptr< ork::ResourceDescriptor > desc, const TiXmlElement * e, const std::string & params) function, expected prototype:\nstatic void ork::Resource::checkParameters(const ork::ptr< ork::ResourceDescriptor > desc, const TiXmlElement * e, const std::string & params)\nClass arguments details:\narg 1 ID = [unknown]\narg 2 ID = 89852901\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::ResourceDescriptor > desc = Luna< ork::Object >::checkSubType< ork::ResourceDescriptor >(L,1);
		const TiXmlElement* e=(Luna< TiXmlBase >::checkSubType< TiXmlElement >(L,2));
		std::string params(lua_tostring(L,3),lua_objlen(L,3));

		ork::Resource::checkParameters(desc, e, params);

		return 0;
	}

	// static void ork::Resource::getIntParameter(const ork::ptr< ork::ResourceDescriptor > desc, const TiXmlElement * e, const std::string & name, int * i)
	static int _bind_getIntParameter(lua_State *L) {
		if (!_lg_typecheck_getIntParameter(L)) {
			luaL_error(L, "luna typecheck failed in static void ork::Resource::getIntParameter(const ork::ptr< ork::ResourceDescriptor > desc, const TiXmlElement * e, const std::string & name, int * i) function, expected prototype:\nstatic void ork::Resource::getIntParameter(const ork::ptr< ork::ResourceDescriptor > desc, const TiXmlElement * e, const std::string & name, int * i)\nClass arguments details:\narg 1 ID = [unknown]\narg 2 ID = 89852901\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::ResourceDescriptor > desc = Luna< ork::Object >::checkSubType< ork::ResourceDescriptor >(L,1);
		const TiXmlElement* e=(Luna< TiXmlBase >::checkSubType< TiXmlElement >(L,2));
		std::string name(lua_tostring(L,3),lua_objlen(L,3));
		int* i=(int*)Luna< void >::check(L,4);

		ork::Resource::getIntParameter(desc, e, name, i);

		return 0;
	}

	// static bool ork::Resource::getFloatParameter(const ork::ptr< ork::ResourceDescriptor > desc, const TiXmlElement * e, const std::string & name, float * value)
	static int _bind_getFloatParameter(lua_State *L) {
		if (!_lg_typecheck_getFloatParameter(L)) {
			luaL_error(L, "luna typecheck failed in static bool ork::Resource::getFloatParameter(const ork::ptr< ork::ResourceDescriptor > desc, const TiXmlElement * e, const std::string & name, float * value) function, expected prototype:\nstatic bool ork::Resource::getFloatParameter(const ork::ptr< ork::ResourceDescriptor > desc, const TiXmlElement * e, const std::string & name, float * value)\nClass arguments details:\narg 1 ID = [unknown]\narg 2 ID = 89852901\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::ResourceDescriptor > desc = Luna< ork::Object >::checkSubType< ork::ResourceDescriptor >(L,1);
		const TiXmlElement* e=(Luna< TiXmlBase >::checkSubType< TiXmlElement >(L,2));
		std::string name(lua_tostring(L,3),lua_objlen(L,3));
		float* value=(float*)Luna< void >::check(L,4);

		bool lret = ork::Resource::getFloatParameter(desc, e, name, value);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static std::string ork::Resource::getParameter(ork::ptr< ork::ResourceDescriptor > desc, const TiXmlElement * e, const char * name)
	static int _bind_getParameter(lua_State *L) {
		if (!_lg_typecheck_getParameter(L)) {
			luaL_error(L, "luna typecheck failed in static std::string ork::Resource::getParameter(ork::ptr< ork::ResourceDescriptor > desc, const TiXmlElement * e, const char * name) function, expected prototype:\nstatic std::string ork::Resource::getParameter(ork::ptr< ork::ResourceDescriptor > desc, const TiXmlElement * e, const char * name)\nClass arguments details:\narg 1 ID = [unknown]\narg 2 ID = 89852901\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::ResourceDescriptor > desc = Luna< ork::Object >::checkSubType< ork::ResourceDescriptor >(L,1);
		const TiXmlElement* e=(Luna< TiXmlBase >::checkSubType< TiXmlElement >(L,2));
		const char * name=(const char *)lua_tostring(L,3);

		std::string lret = ork::Resource::getParameter(desc, e, name);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// static void ork::Resource::log(ork::ptr< ork::Logger > logger, ork::ptr< ork::ResourceDescriptor > desc, const TiXmlElement * e, const std::string & msg)
	static int _bind_log_overload_1(lua_State *L) {
		if (!_lg_typecheck_log_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in static void ork::Resource::log(ork::ptr< ork::Logger > logger, ork::ptr< ork::ResourceDescriptor > desc, const TiXmlElement * e, const std::string & msg) function, expected prototype:\nstatic void ork::Resource::log(ork::ptr< ork::Logger > logger, ork::ptr< ork::ResourceDescriptor > desc, const TiXmlElement * e, const std::string & msg)\nClass arguments details:\narg 1 ID = [unknown]\narg 2 ID = [unknown]\narg 3 ID = 89852901\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Logger > logger = Luna< ork::Object >::checkSubType< ork::Logger >(L,1);
		ork::ptr< ork::ResourceDescriptor > desc = Luna< ork::Object >::checkSubType< ork::ResourceDescriptor >(L,2);
		const TiXmlElement* e=(Luna< TiXmlBase >::checkSubType< TiXmlElement >(L,3));
		std::string msg(lua_tostring(L,4),lua_objlen(L,4));

		ork::Resource::log(logger, desc, e, msg);

		return 0;
	}

	// static void ork::Resource::log(ork::ptr< ork::Logger > logger, const TiXmlElement * desc, const TiXmlElement * e, const std::string & msg)
	static int _bind_log_overload_2(lua_State *L) {
		if (!_lg_typecheck_log_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in static void ork::Resource::log(ork::ptr< ork::Logger > logger, const TiXmlElement * desc, const TiXmlElement * e, const std::string & msg) function, expected prototype:\nstatic void ork::Resource::log(ork::ptr< ork::Logger > logger, const TiXmlElement * desc, const TiXmlElement * e, const std::string & msg)\nClass arguments details:\narg 1 ID = [unknown]\narg 2 ID = 89852901\narg 3 ID = 89852901\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Logger > logger = Luna< ork::Object >::checkSubType< ork::Logger >(L,1);
		const TiXmlElement* desc=(Luna< TiXmlBase >::checkSubType< TiXmlElement >(L,2));
		const TiXmlElement* e=(Luna< TiXmlBase >::checkSubType< TiXmlElement >(L,3));
		std::string msg(lua_tostring(L,4),lua_objlen(L,4));

		ork::Resource::log(logger, desc, e, msg);

		return 0;
	}

	// Overload binder for ork::Resource::log
	static int _bind_log(lua_State *L) {
		if (_lg_typecheck_log_overload_1(L)) return _bind_log_overload_1(L);
		if (_lg_typecheck_log_overload_2(L)) return _bind_log_overload_2(L);

		luaL_error(L, "error in function log, cannot match any of the overloads for function log:\n  log(ork::ptr< ork::Logger >, ork::ptr< ork::ResourceDescriptor >, const TiXmlElement *, const std::string &)\n  log(ork::ptr< ork::Logger >, const TiXmlElement *, const TiXmlElement *, const std::string &)\n");
		return 0;
	}

	// std::string ork::Resource::base_getName()
	static int _bind_base_getName(lua_State *L) {
		if (!_lg_typecheck_base_getName(L)) {
			luaL_error(L, "luna typecheck failed in std::string ork::Resource::base_getName() function, expected prototype:\nstd::string ork::Resource::base_getName()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Resource* self=(Luna< ork::Resource >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call std::string ork::Resource::base_getName(). Got : '%s'\n%s",typeid(Luna< ork::Resource >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		std::string lret = self->Resource::getName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool ork::Resource::base_prepareUpdate()
	static int _bind_base_prepareUpdate(lua_State *L) {
		if (!_lg_typecheck_base_prepareUpdate(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::Resource::base_prepareUpdate() function, expected prototype:\nbool ork::Resource::base_prepareUpdate()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Resource* self=(Luna< ork::Resource >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::Resource::base_prepareUpdate(). Got : '%s'\n%s",typeid(Luna< ork::Resource >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Resource::prepareUpdate();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool ork::Resource::base_changed()
	static int _bind_base_changed(lua_State *L) {
		if (!_lg_typecheck_base_changed(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::Resource::base_changed() function, expected prototype:\nbool ork::Resource::base_changed()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Resource* self=(Luna< ork::Resource >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::Resource::base_changed(). Got : '%s'\n%s",typeid(Luna< ork::Resource >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Resource::changed();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

ork::Resource* LunaTraits< ork::Resource >::_bind_ctor(lua_State *L) {
	return luna_wrapper_ork_Resource::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// int ork::Resource::getUpdateOrder()
	// void ork::Resource::doUpdate(bool commit)
}

void LunaTraits< ork::Resource >::_bind_dtor(ork::Resource* obj) {
	delete obj;
}

const char LunaTraits< ork::Resource >::className[] = "Resource";
const char LunaTraits< ork::Resource >::fullName[] = "ork::Resource";
const char LunaTraits< ork::Resource >::moduleName[] = "ork";
const char* LunaTraits< ork::Resource >::parents[] = {0};
const int LunaTraits< ork::Resource >::hash = 95308202;
const int LunaTraits< ork::Resource >::uniqueIDs[] = {95308202,0};

luna_RegType LunaTraits< ork::Resource >::methods[] = {
	{"getName", &luna_wrapper_ork_Resource::_bind_getName},
	{"getUpdateOrder", &luna_wrapper_ork_Resource::_bind_getUpdateOrder},
	{"prepareUpdate", &luna_wrapper_ork_Resource::_bind_prepareUpdate},
	{"doUpdate", &luna_wrapper_ork_Resource::_bind_doUpdate},
	{"changed", &luna_wrapper_ork_Resource::_bind_changed},
	{"checkParameters", &luna_wrapper_ork_Resource::_bind_checkParameters},
	{"getIntParameter", &luna_wrapper_ork_Resource::_bind_getIntParameter},
	{"getFloatParameter", &luna_wrapper_ork_Resource::_bind_getFloatParameter},
	{"getParameter", &luna_wrapper_ork_Resource::_bind_getParameter},
	{"log", &luna_wrapper_ork_Resource::_bind_log},
	{"base_getName", &luna_wrapper_ork_Resource::_bind_base_getName},
	{"base_prepareUpdate", &luna_wrapper_ork_Resource::_bind_base_prepareUpdate},
	{"base_changed", &luna_wrapper_ork_Resource::_bind_base_changed},
	{"dynCast", &luna_wrapper_ork_Resource::_bind_dynCast},
	{"__eq", &luna_wrapper_ork_Resource::_bind___eq},
	{"fromVoid", &luna_wrapper_ork_Resource::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ork_Resource::_bind_asVoid},
	{"getTable", &luna_wrapper_ork_Resource::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< ork::Resource >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ork::Resource >::enumValues[] = {
	{0,0}
};



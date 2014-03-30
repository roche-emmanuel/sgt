#include <plug_common.h>

#include <luna/wrappers/wrapper_osgUtil_Optimizer.h>

class luna_wrapper_osgUtil_Optimizer {
public:
	typedef Luna< osgUtil::Optimizer > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::Optimizer* self=(Luna< osgUtil::Optimizer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<osgUtil::Optimizer,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,85233381) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgUtil::Optimizer*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::Optimizer* rhs =(Luna< osgUtil::Optimizer >::check(L,2));
		osgUtil::Optimizer* self=(Luna< osgUtil::Optimizer >::check(L,1));
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

		osgUtil::Optimizer* self= (osgUtil::Optimizer*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgUtil::Optimizer >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,85233381) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osgUtil::Optimizer >::check(L,1));
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

		osgUtil::Optimizer* self=(Luna< osgUtil::Optimizer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgUtil::Optimizer");
		
		return luna_dynamicCast(L,converters,"osgUtil::Optimizer",name);
	}


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
	inline static bool _lg_typecheck_reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_optimize_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_optimize_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2)) ) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPermissibleOptimizationsForObject(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPermissibleOptimizationsForObject(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isOperationPermissibleForObject_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,2)) ) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isOperationPermissibleForObject_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2)) ) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isOperationPermissibleForObject_overload_3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,2)) ) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isOperationPermissibleForObject_overload_4(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2)) ) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isOperationPermissibleForObjectImplementation_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,2)) ) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isOperationPermissibleForObjectImplementation_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2)) ) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isOperationPermissibleForObjectImplementation_overload_3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,2)) ) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isOperationPermissibleForObjectImplementation_overload_4(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2)) ) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_optimize(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgUtil::Optimizer::Optimizer()
	static osgUtil::Optimizer* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::Optimizer::Optimizer() function, expected prototype:\nosgUtil::Optimizer::Optimizer()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osgUtil::Optimizer();
	}

	// osgUtil::Optimizer::Optimizer(lua_Table * data)
	static osgUtil::Optimizer* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::Optimizer::Optimizer(lua_Table * data) function, expected prototype:\nosgUtil::Optimizer::Optimizer(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgUtil_Optimizer(L,NULL);
	}

	// Overload binder for osgUtil::Optimizer::Optimizer
	static osgUtil::Optimizer* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Optimizer, cannot match any of the overloads for function Optimizer:\n  Optimizer()\n  Optimizer(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void osgUtil::Optimizer::reset()
	static int _bind_reset(lua_State *L) {
		if (!_lg_typecheck_reset(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Optimizer::reset() function, expected prototype:\nvoid osgUtil::Optimizer::reset()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::Optimizer* self=(Luna< osgUtil::Optimizer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Optimizer::reset(). Got : '%s'\n%s",typeid(Luna< osgUtil::Optimizer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->reset();

		return 0;
	}

	// void osgUtil::Optimizer::optimize(osg::Node * node)
	static int _bind_optimize_overload_1(lua_State *L) {
		if (!_lg_typecheck_optimize_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Optimizer::optimize(osg::Node * node) function, expected prototype:\nvoid osgUtil::Optimizer::optimize(osg::Node * node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* node=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));

		osgUtil::Optimizer* self=(Luna< osgUtil::Optimizer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Optimizer::optimize(osg::Node *). Got : '%s'\n%s",typeid(Luna< osgUtil::Optimizer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->optimize(node);

		return 0;
	}

	// void osgUtil::Optimizer::optimize(osg::Node * node, unsigned int options)
	static int _bind_optimize_overload_2(lua_State *L) {
		if (!_lg_typecheck_optimize_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Optimizer::optimize(osg::Node * node, unsigned int options) function, expected prototype:\nvoid osgUtil::Optimizer::optimize(osg::Node * node, unsigned int options)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* node=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		unsigned int options=(unsigned int)lua_tointeger(L,3);

		osgUtil::Optimizer* self=(Luna< osgUtil::Optimizer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Optimizer::optimize(osg::Node *, unsigned int). Got : '%s'\n%s",typeid(Luna< osgUtil::Optimizer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->optimize(node, options);

		return 0;
	}

	// Overload binder for osgUtil::Optimizer::optimize
	static int _bind_optimize(lua_State *L) {
		if (_lg_typecheck_optimize_overload_1(L)) return _bind_optimize_overload_1(L);
		if (_lg_typecheck_optimize_overload_2(L)) return _bind_optimize_overload_2(L);

		luaL_error(L, "error in function optimize, cannot match any of the overloads for function optimize:\n  optimize(osg::Node *)\n  optimize(osg::Node *, unsigned int)\n");
		return 0;
	}

	// void osgUtil::Optimizer::setPermissibleOptimizationsForObject(const osg::Object * object, unsigned int options)
	static int _bind_setPermissibleOptimizationsForObject(lua_State *L) {
		if (!_lg_typecheck_setPermissibleOptimizationsForObject(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Optimizer::setPermissibleOptimizationsForObject(const osg::Object * object, unsigned int options) function, expected prototype:\nvoid osgUtil::Optimizer::setPermissibleOptimizationsForObject(const osg::Object * object, unsigned int options)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* object=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));
		unsigned int options=(unsigned int)lua_tointeger(L,3);

		osgUtil::Optimizer* self=(Luna< osgUtil::Optimizer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Optimizer::setPermissibleOptimizationsForObject(const osg::Object *, unsigned int). Got : '%s'\n%s",typeid(Luna< osgUtil::Optimizer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setPermissibleOptimizationsForObject(object, options);

		return 0;
	}

	// unsigned int osgUtil::Optimizer::getPermissibleOptimizationsForObject(const osg::Object * object) const
	static int _bind_getPermissibleOptimizationsForObject(lua_State *L) {
		if (!_lg_typecheck_getPermissibleOptimizationsForObject(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osgUtil::Optimizer::getPermissibleOptimizationsForObject(const osg::Object * object) const function, expected prototype:\nunsigned int osgUtil::Optimizer::getPermissibleOptimizationsForObject(const osg::Object * object) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* object=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgUtil::Optimizer* self=(Luna< osgUtil::Optimizer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osgUtil::Optimizer::getPermissibleOptimizationsForObject(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osgUtil::Optimizer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getPermissibleOptimizationsForObject(object);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osgUtil::Optimizer::isOperationPermissibleForObject(const osg::StateSet * object, unsigned int option) const
	static int _bind_isOperationPermissibleForObject_overload_1(lua_State *L) {
		if (!_lg_typecheck_isOperationPermissibleForObject_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool osgUtil::Optimizer::isOperationPermissibleForObject(const osg::StateSet * object, unsigned int option) const function, expected prototype:\nbool osgUtil::Optimizer::isOperationPermissibleForObject(const osg::StateSet * object, unsigned int option) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::StateSet* object=(Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,2));
		unsigned int option=(unsigned int)lua_tointeger(L,3);

		osgUtil::Optimizer* self=(Luna< osgUtil::Optimizer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgUtil::Optimizer::isOperationPermissibleForObject(const osg::StateSet *, unsigned int) const. Got : '%s'\n%s",typeid(Luna< osgUtil::Optimizer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isOperationPermissibleForObject(object, option);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgUtil::Optimizer::isOperationPermissibleForObject(const osg::StateAttribute * object, unsigned int option) const
	static int _bind_isOperationPermissibleForObject_overload_2(lua_State *L) {
		if (!_lg_typecheck_isOperationPermissibleForObject_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool osgUtil::Optimizer::isOperationPermissibleForObject(const osg::StateAttribute * object, unsigned int option) const function, expected prototype:\nbool osgUtil::Optimizer::isOperationPermissibleForObject(const osg::StateAttribute * object, unsigned int option) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::StateAttribute* object=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2));
		unsigned int option=(unsigned int)lua_tointeger(L,3);

		osgUtil::Optimizer* self=(Luna< osgUtil::Optimizer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgUtil::Optimizer::isOperationPermissibleForObject(const osg::StateAttribute *, unsigned int) const. Got : '%s'\n%s",typeid(Luna< osgUtil::Optimizer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isOperationPermissibleForObject(object, option);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgUtil::Optimizer::isOperationPermissibleForObject(const osg::Drawable * object, unsigned int option) const
	static int _bind_isOperationPermissibleForObject_overload_3(lua_State *L) {
		if (!_lg_typecheck_isOperationPermissibleForObject_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in bool osgUtil::Optimizer::isOperationPermissibleForObject(const osg::Drawable * object, unsigned int option) const function, expected prototype:\nbool osgUtil::Optimizer::isOperationPermissibleForObject(const osg::Drawable * object, unsigned int option) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Drawable* object=(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,2));
		unsigned int option=(unsigned int)lua_tointeger(L,3);

		osgUtil::Optimizer* self=(Luna< osgUtil::Optimizer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgUtil::Optimizer::isOperationPermissibleForObject(const osg::Drawable *, unsigned int) const. Got : '%s'\n%s",typeid(Luna< osgUtil::Optimizer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isOperationPermissibleForObject(object, option);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgUtil::Optimizer::isOperationPermissibleForObject(const osg::Node * object, unsigned int option) const
	static int _bind_isOperationPermissibleForObject_overload_4(lua_State *L) {
		if (!_lg_typecheck_isOperationPermissibleForObject_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in bool osgUtil::Optimizer::isOperationPermissibleForObject(const osg::Node * object, unsigned int option) const function, expected prototype:\nbool osgUtil::Optimizer::isOperationPermissibleForObject(const osg::Node * object, unsigned int option) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Node* object=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		unsigned int option=(unsigned int)lua_tointeger(L,3);

		osgUtil::Optimizer* self=(Luna< osgUtil::Optimizer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgUtil::Optimizer::isOperationPermissibleForObject(const osg::Node *, unsigned int) const. Got : '%s'\n%s",typeid(Luna< osgUtil::Optimizer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isOperationPermissibleForObject(object, option);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for osgUtil::Optimizer::isOperationPermissibleForObject
	static int _bind_isOperationPermissibleForObject(lua_State *L) {
		if (_lg_typecheck_isOperationPermissibleForObject_overload_1(L)) return _bind_isOperationPermissibleForObject_overload_1(L);
		if (_lg_typecheck_isOperationPermissibleForObject_overload_2(L)) return _bind_isOperationPermissibleForObject_overload_2(L);
		if (_lg_typecheck_isOperationPermissibleForObject_overload_3(L)) return _bind_isOperationPermissibleForObject_overload_3(L);
		if (_lg_typecheck_isOperationPermissibleForObject_overload_4(L)) return _bind_isOperationPermissibleForObject_overload_4(L);

		luaL_error(L, "error in function isOperationPermissibleForObject, cannot match any of the overloads for function isOperationPermissibleForObject:\n  isOperationPermissibleForObject(const osg::StateSet *, unsigned int)\n  isOperationPermissibleForObject(const osg::StateAttribute *, unsigned int)\n  isOperationPermissibleForObject(const osg::Drawable *, unsigned int)\n  isOperationPermissibleForObject(const osg::Node *, unsigned int)\n");
		return 0;
	}

	// bool osgUtil::Optimizer::isOperationPermissibleForObjectImplementation(const osg::StateSet * stateset, unsigned int option) const
	static int _bind_isOperationPermissibleForObjectImplementation_overload_1(lua_State *L) {
		if (!_lg_typecheck_isOperationPermissibleForObjectImplementation_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool osgUtil::Optimizer::isOperationPermissibleForObjectImplementation(const osg::StateSet * stateset, unsigned int option) const function, expected prototype:\nbool osgUtil::Optimizer::isOperationPermissibleForObjectImplementation(const osg::StateSet * stateset, unsigned int option) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::StateSet* stateset=(Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,2));
		unsigned int option=(unsigned int)lua_tointeger(L,3);

		osgUtil::Optimizer* self=(Luna< osgUtil::Optimizer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgUtil::Optimizer::isOperationPermissibleForObjectImplementation(const osg::StateSet *, unsigned int) const. Got : '%s'\n%s",typeid(Luna< osgUtil::Optimizer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isOperationPermissibleForObjectImplementation(stateset, option);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgUtil::Optimizer::isOperationPermissibleForObjectImplementation(const osg::StateAttribute * attribute, unsigned int option) const
	static int _bind_isOperationPermissibleForObjectImplementation_overload_2(lua_State *L) {
		if (!_lg_typecheck_isOperationPermissibleForObjectImplementation_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool osgUtil::Optimizer::isOperationPermissibleForObjectImplementation(const osg::StateAttribute * attribute, unsigned int option) const function, expected prototype:\nbool osgUtil::Optimizer::isOperationPermissibleForObjectImplementation(const osg::StateAttribute * attribute, unsigned int option) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::StateAttribute* attribute=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2));
		unsigned int option=(unsigned int)lua_tointeger(L,3);

		osgUtil::Optimizer* self=(Luna< osgUtil::Optimizer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgUtil::Optimizer::isOperationPermissibleForObjectImplementation(const osg::StateAttribute *, unsigned int) const. Got : '%s'\n%s",typeid(Luna< osgUtil::Optimizer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isOperationPermissibleForObjectImplementation(attribute, option);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgUtil::Optimizer::isOperationPermissibleForObjectImplementation(const osg::Drawable * drawable, unsigned int option) const
	static int _bind_isOperationPermissibleForObjectImplementation_overload_3(lua_State *L) {
		if (!_lg_typecheck_isOperationPermissibleForObjectImplementation_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in bool osgUtil::Optimizer::isOperationPermissibleForObjectImplementation(const osg::Drawable * drawable, unsigned int option) const function, expected prototype:\nbool osgUtil::Optimizer::isOperationPermissibleForObjectImplementation(const osg::Drawable * drawable, unsigned int option) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Drawable* drawable=(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,2));
		unsigned int option=(unsigned int)lua_tointeger(L,3);

		osgUtil::Optimizer* self=(Luna< osgUtil::Optimizer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgUtil::Optimizer::isOperationPermissibleForObjectImplementation(const osg::Drawable *, unsigned int) const. Got : '%s'\n%s",typeid(Luna< osgUtil::Optimizer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isOperationPermissibleForObjectImplementation(drawable, option);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgUtil::Optimizer::isOperationPermissibleForObjectImplementation(const osg::Node * node, unsigned int option) const
	static int _bind_isOperationPermissibleForObjectImplementation_overload_4(lua_State *L) {
		if (!_lg_typecheck_isOperationPermissibleForObjectImplementation_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in bool osgUtil::Optimizer::isOperationPermissibleForObjectImplementation(const osg::Node * node, unsigned int option) const function, expected prototype:\nbool osgUtil::Optimizer::isOperationPermissibleForObjectImplementation(const osg::Node * node, unsigned int option) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Node* node=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		unsigned int option=(unsigned int)lua_tointeger(L,3);

		osgUtil::Optimizer* self=(Luna< osgUtil::Optimizer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgUtil::Optimizer::isOperationPermissibleForObjectImplementation(const osg::Node *, unsigned int) const. Got : '%s'\n%s",typeid(Luna< osgUtil::Optimizer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isOperationPermissibleForObjectImplementation(node, option);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for osgUtil::Optimizer::isOperationPermissibleForObjectImplementation
	static int _bind_isOperationPermissibleForObjectImplementation(lua_State *L) {
		if (_lg_typecheck_isOperationPermissibleForObjectImplementation_overload_1(L)) return _bind_isOperationPermissibleForObjectImplementation_overload_1(L);
		if (_lg_typecheck_isOperationPermissibleForObjectImplementation_overload_2(L)) return _bind_isOperationPermissibleForObjectImplementation_overload_2(L);
		if (_lg_typecheck_isOperationPermissibleForObjectImplementation_overload_3(L)) return _bind_isOperationPermissibleForObjectImplementation_overload_3(L);
		if (_lg_typecheck_isOperationPermissibleForObjectImplementation_overload_4(L)) return _bind_isOperationPermissibleForObjectImplementation_overload_4(L);

		luaL_error(L, "error in function isOperationPermissibleForObjectImplementation, cannot match any of the overloads for function isOperationPermissibleForObjectImplementation:\n  isOperationPermissibleForObjectImplementation(const osg::StateSet *, unsigned int)\n  isOperationPermissibleForObjectImplementation(const osg::StateAttribute *, unsigned int)\n  isOperationPermissibleForObjectImplementation(const osg::Drawable *, unsigned int)\n  isOperationPermissibleForObjectImplementation(const osg::Node *, unsigned int)\n");
		return 0;
	}

	// void osgUtil::Optimizer::base_optimize(osg::Node * node, unsigned int options)
	static int _bind_base_optimize(lua_State *L) {
		if (!_lg_typecheck_base_optimize(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::Optimizer::base_optimize(osg::Node * node, unsigned int options) function, expected prototype:\nvoid osgUtil::Optimizer::base_optimize(osg::Node * node, unsigned int options)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* node=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		unsigned int options=(unsigned int)lua_tointeger(L,3);

		osgUtil::Optimizer* self=(Luna< osgUtil::Optimizer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::Optimizer::base_optimize(osg::Node *, unsigned int). Got : '%s'\n%s",typeid(Luna< osgUtil::Optimizer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Optimizer::optimize(node, options);

		return 0;
	}


	// Operator binds:

};

osgUtil::Optimizer* LunaTraits< osgUtil::Optimizer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_Optimizer::_bind_ctor(L);
}

void LunaTraits< osgUtil::Optimizer >::_bind_dtor(osgUtil::Optimizer* obj) {
	delete obj;
}

const char LunaTraits< osgUtil::Optimizer >::className[] = "Optimizer";
const char LunaTraits< osgUtil::Optimizer >::fullName[] = "osgUtil::Optimizer";
const char LunaTraits< osgUtil::Optimizer >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::Optimizer >::parents[] = {0};
const int LunaTraits< osgUtil::Optimizer >::hash = 85233381;
const int LunaTraits< osgUtil::Optimizer >::uniqueIDs[] = {85233381,0};

luna_RegType LunaTraits< osgUtil::Optimizer >::methods[] = {
	{"reset", &luna_wrapper_osgUtil_Optimizer::_bind_reset},
	{"optimize", &luna_wrapper_osgUtil_Optimizer::_bind_optimize},
	{"setPermissibleOptimizationsForObject", &luna_wrapper_osgUtil_Optimizer::_bind_setPermissibleOptimizationsForObject},
	{"getPermissibleOptimizationsForObject", &luna_wrapper_osgUtil_Optimizer::_bind_getPermissibleOptimizationsForObject},
	{"isOperationPermissibleForObject", &luna_wrapper_osgUtil_Optimizer::_bind_isOperationPermissibleForObject},
	{"isOperationPermissibleForObjectImplementation", &luna_wrapper_osgUtil_Optimizer::_bind_isOperationPermissibleForObjectImplementation},
	{"base_optimize", &luna_wrapper_osgUtil_Optimizer::_bind_base_optimize},
	{"dynCast", &luna_wrapper_osgUtil_Optimizer::_bind_dynCast},
	{"__eq", &luna_wrapper_osgUtil_Optimizer::_bind___eq},
	{"fromVoid", &luna_wrapper_osgUtil_Optimizer::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgUtil_Optimizer::_bind_asVoid},
	{"getTable", &luna_wrapper_osgUtil_Optimizer::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::Optimizer >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::Optimizer >::enumValues[] = {
	{"FLATTEN_STATIC_TRANSFORMS", osgUtil::Optimizer::FLATTEN_STATIC_TRANSFORMS},
	{"REMOVE_REDUNDANT_NODES", osgUtil::Optimizer::REMOVE_REDUNDANT_NODES},
	{"REMOVE_LOADED_PROXY_NODES", osgUtil::Optimizer::REMOVE_LOADED_PROXY_NODES},
	{"COMBINE_ADJACENT_LODS", osgUtil::Optimizer::COMBINE_ADJACENT_LODS},
	{"SHARE_DUPLICATE_STATE", osgUtil::Optimizer::SHARE_DUPLICATE_STATE},
	{"MERGE_GEOMETRY", osgUtil::Optimizer::MERGE_GEOMETRY},
	{"CHECK_GEOMETRY", osgUtil::Optimizer::CHECK_GEOMETRY},
	{"MAKE_FAST_GEOMETRY", osgUtil::Optimizer::MAKE_FAST_GEOMETRY},
	{"SPATIALIZE_GROUPS", osgUtil::Optimizer::SPATIALIZE_GROUPS},
	{"COPY_SHARED_NODES", osgUtil::Optimizer::COPY_SHARED_NODES},
	{"TRISTRIP_GEOMETRY", osgUtil::Optimizer::TRISTRIP_GEOMETRY},
	{"TESSELLATE_GEOMETRY", osgUtil::Optimizer::TESSELLATE_GEOMETRY},
	{"OPTIMIZE_TEXTURE_SETTINGS", osgUtil::Optimizer::OPTIMIZE_TEXTURE_SETTINGS},
	{"MERGE_GEODES", osgUtil::Optimizer::MERGE_GEODES},
	{"FLATTEN_BILLBOARDS", osgUtil::Optimizer::FLATTEN_BILLBOARDS},
	{"TEXTURE_ATLAS_BUILDER", osgUtil::Optimizer::TEXTURE_ATLAS_BUILDER},
	{"STATIC_OBJECT_DETECTION", osgUtil::Optimizer::STATIC_OBJECT_DETECTION},
	{"FLATTEN_STATIC_TRANSFORMS_DUPLICATING_SHARED_SUBGRAPHS", osgUtil::Optimizer::FLATTEN_STATIC_TRANSFORMS_DUPLICATING_SHARED_SUBGRAPHS},
	{"INDEX_MESH", osgUtil::Optimizer::INDEX_MESH},
	{"VERTEX_POSTTRANSFORM", osgUtil::Optimizer::VERTEX_POSTTRANSFORM},
	{"VERTEX_PRETRANSFORM", osgUtil::Optimizer::VERTEX_PRETRANSFORM},
	{"DEFAULT_OPTIMIZATIONS", osgUtil::Optimizer::DEFAULT_OPTIMIZATIONS},
	{"ALL_OPTIMIZATIONS", osgUtil::Optimizer::ALL_OPTIMIZATIONS},
	{0,0}
};



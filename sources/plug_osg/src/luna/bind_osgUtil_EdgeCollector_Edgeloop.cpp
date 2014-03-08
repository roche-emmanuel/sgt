#include <plug_common.h>

#include <luna/wrappers/wrapper_osgUtil_EdgeCollector_Edgeloop.h>

class luna_wrapper_osgUtil_EdgeCollector_Edgeloop {
public:
	typedef Luna< osgUtil::EdgeCollector::Edgeloop > luna_t;

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

		osgUtil::EdgeCollector::Edgeloop* self= (osgUtil::EdgeCollector::Edgeloop*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgUtil::EdgeCollector::Edgeloop >::push(L,self,false);
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
		//osgUtil::EdgeCollector::Edgeloop* ptr= dynamic_cast< osgUtil::EdgeCollector::Edgeloop* >(Luna< osg::Referenced >::check(L,1));
		osgUtil::EdgeCollector::Edgeloop* ptr= luna_caster< osg::Referenced, osgUtil::EdgeCollector::Edgeloop >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::EdgeCollector::Edgeloop >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_isClosed(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_toIndexArray(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getEdgeList(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setEdgeList(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,57514973) ) return false;
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
	// osgUtil::EdgeCollector::Edgeloop::Edgeloop()
	static osgUtil::EdgeCollector::Edgeloop* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::EdgeCollector::Edgeloop::Edgeloop() function, expected prototype:\nosgUtil::EdgeCollector::Edgeloop::Edgeloop()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osgUtil::EdgeCollector::Edgeloop();
	}

	// osgUtil::EdgeCollector::Edgeloop::Edgeloop(lua_Table * data)
	static osgUtil::EdgeCollector::Edgeloop* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::EdgeCollector::Edgeloop::Edgeloop(lua_Table * data) function, expected prototype:\nosgUtil::EdgeCollector::Edgeloop::Edgeloop(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgUtil_EdgeCollector_Edgeloop(L,NULL);
	}

	// Overload binder for osgUtil::EdgeCollector::Edgeloop::Edgeloop
	static osgUtil::EdgeCollector::Edgeloop* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Edgeloop, cannot match any of the overloads for function Edgeloop:\n  Edgeloop()\n  Edgeloop(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// bool osgUtil::EdgeCollector::Edgeloop::isClosed()
	static int _bind_isClosed(lua_State *L) {
		if (!_lg_typecheck_isClosed(L)) {
			luaL_error(L, "luna typecheck failed in bool osgUtil::EdgeCollector::Edgeloop::isClosed() function, expected prototype:\nbool osgUtil::EdgeCollector::Edgeloop::isClosed()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::EdgeCollector::Edgeloop* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Edgeloop >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgUtil::EdgeCollector::Edgeloop::isClosed(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isClosed();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// osg::UIntArray * osgUtil::EdgeCollector::Edgeloop::toIndexArray() const
	static int _bind_toIndexArray(lua_State *L) {
		if (!_lg_typecheck_toIndexArray(L)) {
			luaL_error(L, "luna typecheck failed in osg::UIntArray * osgUtil::EdgeCollector::Edgeloop::toIndexArray() const function, expected prototype:\nosg::UIntArray * osgUtil::EdgeCollector::Edgeloop::toIndexArray() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::EdgeCollector::Edgeloop* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Edgeloop >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::UIntArray * osgUtil::EdgeCollector::Edgeloop::toIndexArray() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::UIntArray * lret = self->toIndexArray();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::UIntArray >::push(L,lret,false);

		return 1;
	}

	// osgUtil::EdgeCollector::Edgeloop::EdgeList osgUtil::EdgeCollector::Edgeloop::_edgeList()
	static int _bind_getEdgeList(lua_State *L) {
		if (!_lg_typecheck_getEdgeList(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::EdgeCollector::Edgeloop::EdgeList osgUtil::EdgeCollector::Edgeloop::_edgeList() function, expected prototype:\nosgUtil::EdgeCollector::Edgeloop::EdgeList osgUtil::EdgeCollector::Edgeloop::_edgeList()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::EdgeCollector::Edgeloop* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Edgeloop >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgUtil::EdgeCollector::Edgeloop::EdgeList osgUtil::EdgeCollector::Edgeloop::_edgeList(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgUtil::EdgeCollector::Edgeloop::EdgeList* lret = &self->_edgeList;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::EdgeCollector::Edgeloop::EdgeList >::push(L,lret,false);

		return 1;
	}

	// void osgUtil::EdgeCollector::Edgeloop::_edgeList(osgUtil::EdgeCollector::Edgeloop::EdgeList value)
	static int _bind_setEdgeList(lua_State *L) {
		if (!_lg_typecheck_setEdgeList(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::EdgeCollector::Edgeloop::_edgeList(osgUtil::EdgeCollector::Edgeloop::EdgeList value) function, expected prototype:\nvoid osgUtil::EdgeCollector::Edgeloop::_edgeList(osgUtil::EdgeCollector::Edgeloop::EdgeList value)\nClass arguments details:\narg 1 ID = 72030032\n\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::EdgeCollector::Edgeloop::EdgeList* value_ptr=(Luna< std::vector< osg::ref_ptr< osgUtil::EdgeCollector::Edge > > >::checkSubType< osgUtil::EdgeCollector::Edgeloop::EdgeList >(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgUtil::EdgeCollector::Edgeloop::_edgeList function");
		}
		osgUtil::EdgeCollector::Edgeloop::EdgeList value=*value_ptr;

		osgUtil::EdgeCollector::Edgeloop* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Edgeloop >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::EdgeCollector::Edgeloop::_edgeList(osgUtil::EdgeCollector::Edgeloop::EdgeList). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_edgeList = value;

		return 0;
	}

	// void osgUtil::EdgeCollector::Edgeloop::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::EdgeCollector::Edgeloop::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgUtil::EdgeCollector::Edgeloop::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgUtil::EdgeCollector::Edgeloop* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Edgeloop >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::EdgeCollector::Edgeloop::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Edgeloop::setThreadSafeRefUnref(threadSafe);

		return 0;
	}


	// Operator binds:

};

osgUtil::EdgeCollector::Edgeloop* LunaTraits< osgUtil::EdgeCollector::Edgeloop >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_EdgeCollector_Edgeloop::_bind_ctor(L);
}

void LunaTraits< osgUtil::EdgeCollector::Edgeloop >::_bind_dtor(osgUtil::EdgeCollector::Edgeloop* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::EdgeCollector::Edgeloop >::className[] = "EdgeCollector_Edgeloop";
const char LunaTraits< osgUtil::EdgeCollector::Edgeloop >::fullName[] = "osgUtil::EdgeCollector::Edgeloop";
const char LunaTraits< osgUtil::EdgeCollector::Edgeloop >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::EdgeCollector::Edgeloop >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osgUtil::EdgeCollector::Edgeloop >::hash = 67127194;
const int LunaTraits< osgUtil::EdgeCollector::Edgeloop >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::EdgeCollector::Edgeloop >::methods[] = {
	{"isClosed", &luna_wrapper_osgUtil_EdgeCollector_Edgeloop::_bind_isClosed},
	{"toIndexArray", &luna_wrapper_osgUtil_EdgeCollector_Edgeloop::_bind_toIndexArray},
	{"getEdgeList", &luna_wrapper_osgUtil_EdgeCollector_Edgeloop::_bind_getEdgeList},
	{"setEdgeList", &luna_wrapper_osgUtil_EdgeCollector_Edgeloop::_bind_setEdgeList},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgUtil_EdgeCollector_Edgeloop::_bind_base_setThreadSafeRefUnref},
	{"fromVoid", &luna_wrapper_osgUtil_EdgeCollector_Edgeloop::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgUtil_EdgeCollector_Edgeloop::_bind_asVoid},
	{"getTable", &luna_wrapper_osgUtil_EdgeCollector_Edgeloop::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::EdgeCollector::Edgeloop >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_EdgeCollector_Edgeloop::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::EdgeCollector::Edgeloop >::enumValues[] = {
	{0,0}
};



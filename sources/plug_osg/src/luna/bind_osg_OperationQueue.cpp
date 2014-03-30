#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_OperationQueue.h>

class luna_wrapper_osg_OperationQueue {
public:
	typedef Luna< osg::OperationQueue > luna_t;

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

		osg::OperationQueue* self= (osg::OperationQueue*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::OperationQueue >::push(L,self,false);
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
		//osg::OperationQueue* ptr= dynamic_cast< osg::OperationQueue* >(Luna< osg::Referenced >::check(L,1));
		osg::OperationQueue* ptr= luna_caster< osg::Referenced, osg::OperationQueue >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::OperationQueue >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_getNextOperation(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_empty(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumOperationsInQueue(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_add(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_remove_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Operation >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_remove_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeAllOperations(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_runOperations(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_releaseAllOperations(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_releaseOperationsBlock(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getOperationThreads(lua_State *L) {
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
	// osg::OperationQueue::OperationQueue()
	static osg::OperationQueue* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::OperationQueue::OperationQueue() function, expected prototype:\nosg::OperationQueue::OperationQueue()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::OperationQueue();
	}

	// osg::OperationQueue::OperationQueue(lua_Table * data)
	static osg::OperationQueue* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::OperationQueue::OperationQueue(lua_Table * data) function, expected prototype:\nosg::OperationQueue::OperationQueue(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_OperationQueue(L,NULL);
	}

	// Overload binder for osg::OperationQueue::OperationQueue
	static osg::OperationQueue* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function OperationQueue, cannot match any of the overloads for function OperationQueue:\n  OperationQueue()\n  OperationQueue(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// osg::ref_ptr< osg::Operation > osg::OperationQueue::getNextOperation(bool blockIfEmpty = false)
	static int _bind_getNextOperation(lua_State *L) {
		if (!_lg_typecheck_getNextOperation(L)) {
			luaL_error(L, "luna typecheck failed in osg::ref_ptr< osg::Operation > osg::OperationQueue::getNextOperation(bool blockIfEmpty = false) function, expected prototype:\nosg::ref_ptr< osg::Operation > osg::OperationQueue::getNextOperation(bool blockIfEmpty = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool blockIfEmpty=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)false;

		osg::OperationQueue* self=Luna< osg::Referenced >::checkSubType< osg::OperationQueue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::ref_ptr< osg::Operation > osg::OperationQueue::getNextOperation(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::ref_ptr< osg::Operation > lret = self->getNextOperation(blockIfEmpty);
		Luna< osg::Operation >::push(L,lret.get(),false);

		return 1;
	}

	// bool osg::OperationQueue::empty()
	static int _bind_empty(lua_State *L) {
		if (!_lg_typecheck_empty(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::OperationQueue::empty() function, expected prototype:\nbool osg::OperationQueue::empty()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::OperationQueue* self=Luna< osg::Referenced >::checkSubType< osg::OperationQueue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::OperationQueue::empty(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->empty();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// unsigned int osg::OperationQueue::getNumOperationsInQueue()
	static int _bind_getNumOperationsInQueue(lua_State *L) {
		if (!_lg_typecheck_getNumOperationsInQueue(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::OperationQueue::getNumOperationsInQueue() function, expected prototype:\nunsigned int osg::OperationQueue::getNumOperationsInQueue()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::OperationQueue* self=Luna< osg::Referenced >::checkSubType< osg::OperationQueue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::OperationQueue::getNumOperationsInQueue(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getNumOperationsInQueue();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::OperationQueue::add(osg::Operation * operation)
	static int _bind_add(lua_State *L) {
		if (!_lg_typecheck_add(L)) {
			luaL_error(L, "luna typecheck failed in void osg::OperationQueue::add(osg::Operation * operation) function, expected prototype:\nvoid osg::OperationQueue::add(osg::Operation * operation)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Operation* operation=(Luna< osg::Referenced >::checkSubType< osg::Operation >(L,2));

		osg::OperationQueue* self=Luna< osg::Referenced >::checkSubType< osg::OperationQueue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::OperationQueue::add(osg::Operation *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->add(operation);

		return 0;
	}

	// void osg::OperationQueue::remove(osg::Operation * operation)
	static int _bind_remove_overload_1(lua_State *L) {
		if (!_lg_typecheck_remove_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::OperationQueue::remove(osg::Operation * operation) function, expected prototype:\nvoid osg::OperationQueue::remove(osg::Operation * operation)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Operation* operation=(Luna< osg::Referenced >::checkSubType< osg::Operation >(L,2));

		osg::OperationQueue* self=Luna< osg::Referenced >::checkSubType< osg::OperationQueue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::OperationQueue::remove(osg::Operation *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->remove(operation);

		return 0;
	}

	// void osg::OperationQueue::remove(const std::string & name)
	static int _bind_remove_overload_2(lua_State *L) {
		if (!_lg_typecheck_remove_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::OperationQueue::remove(const std::string & name) function, expected prototype:\nvoid osg::OperationQueue::remove(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::OperationQueue* self=Luna< osg::Referenced >::checkSubType< osg::OperationQueue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::OperationQueue::remove(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->remove(name);

		return 0;
	}

	// Overload binder for osg::OperationQueue::remove
	static int _bind_remove(lua_State *L) {
		if (_lg_typecheck_remove_overload_1(L)) return _bind_remove_overload_1(L);
		if (_lg_typecheck_remove_overload_2(L)) return _bind_remove_overload_2(L);

		luaL_error(L, "error in function remove, cannot match any of the overloads for function remove:\n  remove(osg::Operation *)\n  remove(const std::string &)\n");
		return 0;
	}

	// void osg::OperationQueue::removeAllOperations()
	static int _bind_removeAllOperations(lua_State *L) {
		if (!_lg_typecheck_removeAllOperations(L)) {
			luaL_error(L, "luna typecheck failed in void osg::OperationQueue::removeAllOperations() function, expected prototype:\nvoid osg::OperationQueue::removeAllOperations()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::OperationQueue* self=Luna< osg::Referenced >::checkSubType< osg::OperationQueue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::OperationQueue::removeAllOperations(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->removeAllOperations();

		return 0;
	}

	// void osg::OperationQueue::runOperations(osg::Object * callingObject = 0)
	static int _bind_runOperations(lua_State *L) {
		if (!_lg_typecheck_runOperations(L)) {
			luaL_error(L, "luna typecheck failed in void osg::OperationQueue::runOperations(osg::Object * callingObject = 0) function, expected prototype:\nvoid osg::OperationQueue::runOperations(osg::Object * callingObject = 0)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::Object* callingObject=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::Object >(L,2)) : (osg::Object*)0;

		osg::OperationQueue* self=Luna< osg::Referenced >::checkSubType< osg::OperationQueue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::OperationQueue::runOperations(osg::Object *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->runOperations(callingObject);

		return 0;
	}

	// void osg::OperationQueue::releaseAllOperations()
	static int _bind_releaseAllOperations(lua_State *L) {
		if (!_lg_typecheck_releaseAllOperations(L)) {
			luaL_error(L, "luna typecheck failed in void osg::OperationQueue::releaseAllOperations() function, expected prototype:\nvoid osg::OperationQueue::releaseAllOperations()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::OperationQueue* self=Luna< osg::Referenced >::checkSubType< osg::OperationQueue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::OperationQueue::releaseAllOperations(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->releaseAllOperations();

		return 0;
	}

	// void osg::OperationQueue::releaseOperationsBlock()
	static int _bind_releaseOperationsBlock(lua_State *L) {
		if (!_lg_typecheck_releaseOperationsBlock(L)) {
			luaL_error(L, "luna typecheck failed in void osg::OperationQueue::releaseOperationsBlock() function, expected prototype:\nvoid osg::OperationQueue::releaseOperationsBlock()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::OperationQueue* self=Luna< osg::Referenced >::checkSubType< osg::OperationQueue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::OperationQueue::releaseOperationsBlock(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->releaseOperationsBlock();

		return 0;
	}

	// const osg::OperationQueue::OperationThreads & osg::OperationQueue::getOperationThreads() const
	static int _bind_getOperationThreads(lua_State *L) {
		if (!_lg_typecheck_getOperationThreads(L)) {
			luaL_error(L, "luna typecheck failed in const osg::OperationQueue::OperationThreads & osg::OperationQueue::getOperationThreads() const function, expected prototype:\nconst osg::OperationQueue::OperationThreads & osg::OperationQueue::getOperationThreads() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::OperationQueue* self=Luna< osg::Referenced >::checkSubType< osg::OperationQueue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::OperationQueue::OperationThreads & osg::OperationQueue::getOperationThreads() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::OperationQueue::OperationThreads* lret = &self->getOperationThreads();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::OperationQueue::OperationThreads >::push(L,lret,false);

		return 1;
	}

	// void osg::OperationQueue::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::OperationQueue::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::OperationQueue::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::OperationQueue* self=Luna< osg::Referenced >::checkSubType< osg::OperationQueue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::OperationQueue::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OperationQueue::setThreadSafeRefUnref(threadSafe);

		return 0;
	}


	// Operator binds:

};

osg::OperationQueue* LunaTraits< osg::OperationQueue >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_OperationQueue::_bind_ctor(L);
}

void LunaTraits< osg::OperationQueue >::_bind_dtor(osg::OperationQueue* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::OperationQueue >::className[] = "OperationQueue";
const char LunaTraits< osg::OperationQueue >::fullName[] = "osg::OperationQueue";
const char LunaTraits< osg::OperationQueue >::moduleName[] = "osg";
const char* LunaTraits< osg::OperationQueue >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osg::OperationQueue >::hash = 40733701;
const int LunaTraits< osg::OperationQueue >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::OperationQueue >::methods[] = {
	{"getNextOperation", &luna_wrapper_osg_OperationQueue::_bind_getNextOperation},
	{"empty", &luna_wrapper_osg_OperationQueue::_bind_empty},
	{"getNumOperationsInQueue", &luna_wrapper_osg_OperationQueue::_bind_getNumOperationsInQueue},
	{"add", &luna_wrapper_osg_OperationQueue::_bind_add},
	{"remove", &luna_wrapper_osg_OperationQueue::_bind_remove},
	{"removeAllOperations", &luna_wrapper_osg_OperationQueue::_bind_removeAllOperations},
	{"runOperations", &luna_wrapper_osg_OperationQueue::_bind_runOperations},
	{"releaseAllOperations", &luna_wrapper_osg_OperationQueue::_bind_releaseAllOperations},
	{"releaseOperationsBlock", &luna_wrapper_osg_OperationQueue::_bind_releaseOperationsBlock},
	{"getOperationThreads", &luna_wrapper_osg_OperationQueue::_bind_getOperationThreads},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_OperationQueue::_bind_base_setThreadSafeRefUnref},
	{"fromVoid", &luna_wrapper_osg_OperationQueue::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_OperationQueue::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_OperationQueue::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::OperationQueue >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_OperationQueue::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::OperationQueue >::enumValues[] = {
	{0,0}
};



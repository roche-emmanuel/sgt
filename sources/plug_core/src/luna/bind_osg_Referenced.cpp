#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_Referenced.h>

class luna_wrapper_osg_Referenced {
public:
	typedef Luna< osg::Referenced > luna_t;

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

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::Referenced*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* rhs =(Luna< osg::Referenced >::check(L,2));
		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
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

		osg::Referenced* self= (osg::Referenced*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::Referenced >::push(L,self,false);
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

		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::Referenced");
		
		return luna_dynamicCast(L,converters,"osg::Referenced",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isboolean(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::check(L,1))) ) return false;
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
		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRefMutex(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ref(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_unref(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_unref_nodelete(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_referenceCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getObserverSet(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getOrCreateObserverSet(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_addObserver(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,58375525)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeObserver(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,58375525)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getGlobalReferencedMutex(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setThreadSafeReferenceCounting(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isboolean(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getThreadSafeReferenceCounting(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDeleteHandler(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,1576447)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDeleteHandler(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck_op_assign(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}


	// Constructor binds:
	// osg::Referenced::Referenced()
	static osg::Referenced* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced::Referenced() function, expected prototype:\nosg::Referenced::Referenced()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::Referenced();
	}

	// osg::Referenced::Referenced(bool threadSafeRefUnref)
	static osg::Referenced* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced::Referenced(bool threadSafeRefUnref) function, expected prototype:\nosg::Referenced::Referenced(bool threadSafeRefUnref)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafeRefUnref=(bool)(lua_toboolean(L,1)==1);

		return new osg::Referenced(threadSafeRefUnref);
	}

	// osg::Referenced::Referenced(const osg::Referenced & arg1)
	static osg::Referenced* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced::Referenced(const osg::Referenced & arg1) function, expected prototype:\nosg::Referenced::Referenced(const osg::Referenced & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Referenced* _arg1_ptr=(Luna< osg::Referenced >::check(L,1));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Referenced::Referenced function");
		}
		const osg::Referenced & _arg1=*_arg1_ptr;

		return new osg::Referenced(_arg1);
	}

	// osg::Referenced::Referenced(lua_Table * data)
	static osg::Referenced* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced::Referenced(lua_Table * data) function, expected prototype:\nosg::Referenced::Referenced(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_Referenced(L,NULL);
	}

	// osg::Referenced::Referenced(lua_Table * data, bool threadSafeRefUnref)
	static osg::Referenced* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced::Referenced(lua_Table * data, bool threadSafeRefUnref) function, expected prototype:\nosg::Referenced::Referenced(lua_Table * data, bool threadSafeRefUnref)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafeRefUnref=(bool)(lua_toboolean(L,2)==1);

		return new wrapper_osg_Referenced(L,NULL, threadSafeRefUnref);
	}

	// osg::Referenced::Referenced(lua_Table * data, const osg::Referenced & arg2)
	static osg::Referenced* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced::Referenced(lua_Table * data, const osg::Referenced & arg2) function, expected prototype:\nosg::Referenced::Referenced(lua_Table * data, const osg::Referenced & arg2)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Referenced* _arg2_ptr=(Luna< osg::Referenced >::check(L,2));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osg::Referenced::Referenced function");
		}
		const osg::Referenced & _arg2=*_arg2_ptr;

		return new wrapper_osg_Referenced(L,NULL, _arg2);
	}

	// Overload binder for osg::Referenced::Referenced
	static osg::Referenced* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);

		luaL_error(L, "error in function Referenced, cannot match any of the overloads for function Referenced:\n  Referenced()\n  Referenced(bool)\n  Referenced(const osg::Referenced &)\n  Referenced(lua_Table *)\n  Referenced(lua_Table *, bool)\n  Referenced(lua_Table *, const osg::Referenced &)\n");
		return NULL;
	}


	// Function binds:
	// void osg::Referenced::setThreadSafeRefUnref(bool threadSafe)
	static int _bind_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Referenced::setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::Referenced::setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Referenced::setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// bool osg::Referenced::getThreadSafeRefUnref() const
	static int _bind_getThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_getThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Referenced::getThreadSafeRefUnref() const function, expected prototype:\nbool osg::Referenced::getThreadSafeRefUnref() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Referenced::getThreadSafeRefUnref() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getThreadSafeRefUnref();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// OpenThreads::Mutex * osg::Referenced::getRefMutex() const
	static int _bind_getRefMutex(lua_State *L) {
		if (!_lg_typecheck_getRefMutex(L)) {
			luaL_error(L, "luna typecheck failed in OpenThreads::Mutex * osg::Referenced::getRefMutex() const function, expected prototype:\nOpenThreads::Mutex * osg::Referenced::getRefMutex() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call OpenThreads::Mutex * osg::Referenced::getRefMutex() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		OpenThreads::Mutex * lret = self->getRefMutex();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< OpenThreads::Mutex >::push(L,lret,false);

		return 1;
	}

	// int osg::Referenced::ref() const
	static int _bind_ref(lua_State *L) {
		if (!_lg_typecheck_ref(L)) {
			luaL_error(L, "luna typecheck failed in int osg::Referenced::ref() const function, expected prototype:\nint osg::Referenced::ref() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::Referenced::ref() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->ref();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Referenced::unref() const
	static int _bind_unref(lua_State *L) {
		if (!_lg_typecheck_unref(L)) {
			luaL_error(L, "luna typecheck failed in int osg::Referenced::unref() const function, expected prototype:\nint osg::Referenced::unref() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::Referenced::unref() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->unref();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Referenced::unref_nodelete() const
	static int _bind_unref_nodelete(lua_State *L) {
		if (!_lg_typecheck_unref_nodelete(L)) {
			luaL_error(L, "luna typecheck failed in int osg::Referenced::unref_nodelete() const function, expected prototype:\nint osg::Referenced::unref_nodelete() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::Referenced::unref_nodelete() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->unref_nodelete();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Referenced::referenceCount() const
	static int _bind_referenceCount(lua_State *L) {
		if (!_lg_typecheck_referenceCount(L)) {
			luaL_error(L, "luna typecheck failed in int osg::Referenced::referenceCount() const function, expected prototype:\nint osg::Referenced::referenceCount() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::Referenced::referenceCount() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->referenceCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::ObserverSet * osg::Referenced::getObserverSet() const
	static int _bind_getObserverSet(lua_State *L) {
		if (!_lg_typecheck_getObserverSet(L)) {
			luaL_error(L, "luna typecheck failed in osg::ObserverSet * osg::Referenced::getObserverSet() const function, expected prototype:\nosg::ObserverSet * osg::Referenced::getObserverSet() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::ObserverSet * osg::Referenced::getObserverSet() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::ObserverSet * lret = self->getObserverSet();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::ObserverSet >::push(L,lret,false);

		return 1;
	}

	// osg::ObserverSet * osg::Referenced::getOrCreateObserverSet() const
	static int _bind_getOrCreateObserverSet(lua_State *L) {
		if (!_lg_typecheck_getOrCreateObserverSet(L)) {
			luaL_error(L, "luna typecheck failed in osg::ObserverSet * osg::Referenced::getOrCreateObserverSet() const function, expected prototype:\nosg::ObserverSet * osg::Referenced::getOrCreateObserverSet() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::ObserverSet * osg::Referenced::getOrCreateObserverSet() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::ObserverSet * lret = self->getOrCreateObserverSet();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::ObserverSet >::push(L,lret,false);

		return 1;
	}

	// void osg::Referenced::addObserver(osg::Observer * observer) const
	static int _bind_addObserver(lua_State *L) {
		if (!_lg_typecheck_addObserver(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Referenced::addObserver(osg::Observer * observer) const function, expected prototype:\nvoid osg::Referenced::addObserver(osg::Observer * observer) const\nClass arguments details:\narg 1 ID = 58375525\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Observer* observer=(Luna< osg::Observer >::check(L,2));

		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Referenced::addObserver(osg::Observer *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addObserver(observer);

		return 0;
	}

	// void osg::Referenced::removeObserver(osg::Observer * observer) const
	static int _bind_removeObserver(lua_State *L) {
		if (!_lg_typecheck_removeObserver(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Referenced::removeObserver(osg::Observer * observer) const function, expected prototype:\nvoid osg::Referenced::removeObserver(osg::Observer * observer) const\nClass arguments details:\narg 1 ID = 58375525\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Observer* observer=(Luna< osg::Observer >::check(L,2));

		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Referenced::removeObserver(osg::Observer *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->removeObserver(observer);

		return 0;
	}

	// static OpenThreads::Mutex * osg::Referenced::getGlobalReferencedMutex()
	static int _bind_getGlobalReferencedMutex(lua_State *L) {
		if (!_lg_typecheck_getGlobalReferencedMutex(L)) {
			luaL_error(L, "luna typecheck failed in static OpenThreads::Mutex * osg::Referenced::getGlobalReferencedMutex() function, expected prototype:\nstatic OpenThreads::Mutex * osg::Referenced::getGlobalReferencedMutex()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		OpenThreads::Mutex * lret = osg::Referenced::getGlobalReferencedMutex();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< OpenThreads::Mutex >::push(L,lret,false);

		return 1;
	}

	// static void osg::Referenced::setThreadSafeReferenceCounting(bool enableThreadSafeReferenceCounting)
	static int _bind_setThreadSafeReferenceCounting(lua_State *L) {
		if (!_lg_typecheck_setThreadSafeReferenceCounting(L)) {
			luaL_error(L, "luna typecheck failed in static void osg::Referenced::setThreadSafeReferenceCounting(bool enableThreadSafeReferenceCounting) function, expected prototype:\nstatic void osg::Referenced::setThreadSafeReferenceCounting(bool enableThreadSafeReferenceCounting)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool enableThreadSafeReferenceCounting=(bool)(lua_toboolean(L,1)==1);

		osg::Referenced::setThreadSafeReferenceCounting(enableThreadSafeReferenceCounting);

		return 0;
	}

	// static bool osg::Referenced::getThreadSafeReferenceCounting()
	static int _bind_getThreadSafeReferenceCounting(lua_State *L) {
		if (!_lg_typecheck_getThreadSafeReferenceCounting(L)) {
			luaL_error(L, "luna typecheck failed in static bool osg::Referenced::getThreadSafeReferenceCounting() function, expected prototype:\nstatic bool osg::Referenced::getThreadSafeReferenceCounting()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		bool lret = osg::Referenced::getThreadSafeReferenceCounting();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static void osg::Referenced::setDeleteHandler(osg::DeleteHandler * handler)
	static int _bind_setDeleteHandler(lua_State *L) {
		if (!_lg_typecheck_setDeleteHandler(L)) {
			luaL_error(L, "luna typecheck failed in static void osg::Referenced::setDeleteHandler(osg::DeleteHandler * handler) function, expected prototype:\nstatic void osg::Referenced::setDeleteHandler(osg::DeleteHandler * handler)\nClass arguments details:\narg 1 ID = 1576447\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::DeleteHandler* handler=(Luna< osg::DeleteHandler >::check(L,1));

		osg::Referenced::setDeleteHandler(handler);

		return 0;
	}

	// static osg::DeleteHandler * osg::Referenced::getDeleteHandler()
	static int _bind_getDeleteHandler(lua_State *L) {
		if (!_lg_typecheck_getDeleteHandler(L)) {
			luaL_error(L, "luna typecheck failed in static osg::DeleteHandler * osg::Referenced::getDeleteHandler() function, expected prototype:\nstatic osg::DeleteHandler * osg::Referenced::getDeleteHandler()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::DeleteHandler * lret = osg::Referenced::getDeleteHandler();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::DeleteHandler >::push(L,lret,false);

		return 1;
	}

	// void osg::Referenced::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Referenced::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::Referenced::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Referenced::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Referenced::setThreadSafeRefUnref(threadSafe);

		return 0;
	}


	// Operator binds:
	// osg::Referenced & osg::Referenced::operator=(const osg::Referenced & arg1)
	static int _bind_op_assign(lua_State *L) {
		if (!_lg_typecheck_op_assign(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced & osg::Referenced::operator=(const osg::Referenced & arg1) function, expected prototype:\nosg::Referenced & osg::Referenced::operator=(const osg::Referenced & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Referenced* _arg1_ptr=(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Referenced::operator= function");
		}
		const osg::Referenced & _arg1=*_arg1_ptr;

		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced & osg::Referenced::operator=(const osg::Referenced &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced* lret = &self->operator=(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}


};

osg::Referenced* LunaTraits< osg::Referenced >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Referenced::_bind_ctor(L);
}

void LunaTraits< osg::Referenced >::_bind_dtor(osg::Referenced* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::Referenced >::className[] = "Referenced";
const char LunaTraits< osg::Referenced >::fullName[] = "osg::Referenced";
const char LunaTraits< osg::Referenced >::moduleName[] = "osg";
const char* LunaTraits< osg::Referenced >::parents[] = {0};
const int LunaTraits< osg::Referenced >::hash = 50169651;
const int LunaTraits< osg::Referenced >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::Referenced >::methods[] = {
	{"setThreadSafeRefUnref", &luna_wrapper_osg_Referenced::_bind_setThreadSafeRefUnref},
	{"getThreadSafeRefUnref", &luna_wrapper_osg_Referenced::_bind_getThreadSafeRefUnref},
	{"getRefMutex", &luna_wrapper_osg_Referenced::_bind_getRefMutex},
	{"ref", &luna_wrapper_osg_Referenced::_bind_ref},
	{"unref", &luna_wrapper_osg_Referenced::_bind_unref},
	{"unref_nodelete", &luna_wrapper_osg_Referenced::_bind_unref_nodelete},
	{"referenceCount", &luna_wrapper_osg_Referenced::_bind_referenceCount},
	{"getObserverSet", &luna_wrapper_osg_Referenced::_bind_getObserverSet},
	{"getOrCreateObserverSet", &luna_wrapper_osg_Referenced::_bind_getOrCreateObserverSet},
	{"addObserver", &luna_wrapper_osg_Referenced::_bind_addObserver},
	{"removeObserver", &luna_wrapper_osg_Referenced::_bind_removeObserver},
	{"getGlobalReferencedMutex", &luna_wrapper_osg_Referenced::_bind_getGlobalReferencedMutex},
	{"setThreadSafeReferenceCounting", &luna_wrapper_osg_Referenced::_bind_setThreadSafeReferenceCounting},
	{"getThreadSafeReferenceCounting", &luna_wrapper_osg_Referenced::_bind_getThreadSafeReferenceCounting},
	{"setDeleteHandler", &luna_wrapper_osg_Referenced::_bind_setDeleteHandler},
	{"getDeleteHandler", &luna_wrapper_osg_Referenced::_bind_getDeleteHandler},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_Referenced::_bind_base_setThreadSafeRefUnref},
	{"op_assign", &luna_wrapper_osg_Referenced::_bind_op_assign},
	{"dynCast", &luna_wrapper_osg_Referenced::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_Referenced::_bind___eq},
	{"fromVoid", &luna_wrapper_osg_Referenced::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_Referenced::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_Referenced::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Referenced >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Referenced >::enumValues[] = {
	{0,0}
};



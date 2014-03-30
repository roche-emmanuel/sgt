#include <plug_common.h>

class luna_wrapper_osg_RenderInfo {
public:
	typedef Luna< osg::RenderInfo > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,2286263) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::RenderInfo*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::RenderInfo* rhs =(Luna< osg::RenderInfo >::check(L,2));
		osg::RenderInfo* self=(Luna< osg::RenderInfo >::check(L,1));
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

		osg::RenderInfo* self= (osg::RenderInfo*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::RenderInfo >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,2286263) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osg::RenderInfo >::check(L,1));
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

		osg::RenderInfo* self=(Luna< osg::RenderInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::RenderInfo");
		
		return luna_dynamicCast(L,converters,"osg::RenderInfo",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,2286263) ) return false;
		if( (!(Luna< osg::RenderInfo >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< osg::Referenced >::checkSubType< osg::State >(L,1)) ) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::View >(L,2)) ) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getContextID(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setState(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getState_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getState_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setView(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getView_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getView_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_pushCamera(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_popCamera(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCurrentCamera(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setUserData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUserData_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUserData_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck_op_assign(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2286263) ) return false;
		return true;
	}


	// Constructor binds:
	// osg::RenderInfo::RenderInfo()
	static osg::RenderInfo* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::RenderInfo::RenderInfo() function, expected prototype:\nosg::RenderInfo::RenderInfo()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::RenderInfo();
	}

	// osg::RenderInfo::RenderInfo(const osg::RenderInfo & rhs)
	static osg::RenderInfo* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::RenderInfo::RenderInfo(const osg::RenderInfo & rhs) function, expected prototype:\nosg::RenderInfo::RenderInfo(const osg::RenderInfo & rhs)\nClass arguments details:\narg 1 ID = 2286263\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::RenderInfo* rhs_ptr=(Luna< osg::RenderInfo >::check(L,1));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::RenderInfo::RenderInfo function");
		}
		const osg::RenderInfo & rhs=*rhs_ptr;

		return new osg::RenderInfo(rhs);
	}

	// osg::RenderInfo::RenderInfo(osg::State * state, osg::View * view)
	static osg::RenderInfo* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::RenderInfo::RenderInfo(osg::State * state, osg::View * view) function, expected prototype:\nosg::RenderInfo::RenderInfo(osg::State * state, osg::View * view)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* state=(Luna< osg::Referenced >::checkSubType< osg::State >(L,1));
		osg::View* view=(Luna< osg::Referenced >::checkSubType< osg::View >(L,2));

		return new osg::RenderInfo(state, view);
	}

	// Overload binder for osg::RenderInfo::RenderInfo
	static osg::RenderInfo* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function RenderInfo, cannot match any of the overloads for function RenderInfo:\n  RenderInfo()\n  RenderInfo(const osg::RenderInfo &)\n  RenderInfo(osg::State *, osg::View *)\n");
		return NULL;
	}


	// Function binds:
	// unsigned int osg::RenderInfo::getContextID() const
	static int _bind_getContextID(lua_State *L) {
		if (!_lg_typecheck_getContextID(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::RenderInfo::getContextID() const function, expected prototype:\nunsigned int osg::RenderInfo::getContextID() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::RenderInfo* self=(Luna< osg::RenderInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::RenderInfo::getContextID() const. Got : '%s'\n%s",typeid(Luna< osg::RenderInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getContextID();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::RenderInfo::setState(osg::State * state)
	static int _bind_setState(lua_State *L) {
		if (!_lg_typecheck_setState(L)) {
			luaL_error(L, "luna typecheck failed in void osg::RenderInfo::setState(osg::State * state) function, expected prototype:\nvoid osg::RenderInfo::setState(osg::State * state)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* state=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));

		osg::RenderInfo* self=(Luna< osg::RenderInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::RenderInfo::setState(osg::State *). Got : '%s'\n%s",typeid(Luna< osg::RenderInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setState(state);

		return 0;
	}

	// osg::State * osg::RenderInfo::getState()
	static int _bind_getState_overload_1(lua_State *L) {
		if (!_lg_typecheck_getState_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::State * osg::RenderInfo::getState() function, expected prototype:\nosg::State * osg::RenderInfo::getState()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::RenderInfo* self=(Luna< osg::RenderInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::State * osg::RenderInfo::getState(). Got : '%s'\n%s",typeid(Luna< osg::RenderInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::State * lret = self->getState();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::State >::push(L,lret,false);

		return 1;
	}

	// const osg::State * osg::RenderInfo::getState() const
	static int _bind_getState_overload_2(lua_State *L) {
		if (!_lg_typecheck_getState_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::State * osg::RenderInfo::getState() const function, expected prototype:\nconst osg::State * osg::RenderInfo::getState() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::RenderInfo* self=(Luna< osg::RenderInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::State * osg::RenderInfo::getState() const. Got : '%s'\n%s",typeid(Luna< osg::RenderInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::State * lret = self->getState();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::State >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::RenderInfo::getState
	static int _bind_getState(lua_State *L) {
		if (_lg_typecheck_getState_overload_1(L)) return _bind_getState_overload_1(L);
		if (_lg_typecheck_getState_overload_2(L)) return _bind_getState_overload_2(L);

		luaL_error(L, "error in function getState, cannot match any of the overloads for function getState:\n  getState()\n  getState()\n");
		return 0;
	}

	// void osg::RenderInfo::setView(osg::View * view)
	static int _bind_setView(lua_State *L) {
		if (!_lg_typecheck_setView(L)) {
			luaL_error(L, "luna typecheck failed in void osg::RenderInfo::setView(osg::View * view) function, expected prototype:\nvoid osg::RenderInfo::setView(osg::View * view)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::View* view=(Luna< osg::Referenced >::checkSubType< osg::View >(L,2));

		osg::RenderInfo* self=(Luna< osg::RenderInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::RenderInfo::setView(osg::View *). Got : '%s'\n%s",typeid(Luna< osg::RenderInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setView(view);

		return 0;
	}

	// osg::View * osg::RenderInfo::getView()
	static int _bind_getView_overload_1(lua_State *L) {
		if (!_lg_typecheck_getView_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::View * osg::RenderInfo::getView() function, expected prototype:\nosg::View * osg::RenderInfo::getView()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::RenderInfo* self=(Luna< osg::RenderInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::View * osg::RenderInfo::getView(). Got : '%s'\n%s",typeid(Luna< osg::RenderInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::View * lret = self->getView();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::View >::push(L,lret,false);

		return 1;
	}

	// const osg::View * osg::RenderInfo::getView() const
	static int _bind_getView_overload_2(lua_State *L) {
		if (!_lg_typecheck_getView_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::View * osg::RenderInfo::getView() const function, expected prototype:\nconst osg::View * osg::RenderInfo::getView() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::RenderInfo* self=(Luna< osg::RenderInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::View * osg::RenderInfo::getView() const. Got : '%s'\n%s",typeid(Luna< osg::RenderInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::View * lret = self->getView();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::View >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::RenderInfo::getView
	static int _bind_getView(lua_State *L) {
		if (_lg_typecheck_getView_overload_1(L)) return _bind_getView_overload_1(L);
		if (_lg_typecheck_getView_overload_2(L)) return _bind_getView_overload_2(L);

		luaL_error(L, "error in function getView, cannot match any of the overloads for function getView:\n  getView()\n  getView()\n");
		return 0;
	}

	// void osg::RenderInfo::pushCamera(osg::Camera * camera)
	static int _bind_pushCamera(lua_State *L) {
		if (!_lg_typecheck_pushCamera(L)) {
			luaL_error(L, "luna typecheck failed in void osg::RenderInfo::pushCamera(osg::Camera * camera) function, expected prototype:\nvoid osg::RenderInfo::pushCamera(osg::Camera * camera)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Camera* camera=(Luna< osg::Referenced >::checkSubType< osg::Camera >(L,2));

		osg::RenderInfo* self=(Luna< osg::RenderInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::RenderInfo::pushCamera(osg::Camera *). Got : '%s'\n%s",typeid(Luna< osg::RenderInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->pushCamera(camera);

		return 0;
	}

	// void osg::RenderInfo::popCamera()
	static int _bind_popCamera(lua_State *L) {
		if (!_lg_typecheck_popCamera(L)) {
			luaL_error(L, "luna typecheck failed in void osg::RenderInfo::popCamera() function, expected prototype:\nvoid osg::RenderInfo::popCamera()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::RenderInfo* self=(Luna< osg::RenderInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::RenderInfo::popCamera(). Got : '%s'\n%s",typeid(Luna< osg::RenderInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->popCamera();

		return 0;
	}

	// osg::Camera * osg::RenderInfo::getCurrentCamera()
	static int _bind_getCurrentCamera(lua_State *L) {
		if (!_lg_typecheck_getCurrentCamera(L)) {
			luaL_error(L, "luna typecheck failed in osg::Camera * osg::RenderInfo::getCurrentCamera() function, expected prototype:\nosg::Camera * osg::RenderInfo::getCurrentCamera()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::RenderInfo* self=(Luna< osg::RenderInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Camera * osg::RenderInfo::getCurrentCamera(). Got : '%s'\n%s",typeid(Luna< osg::RenderInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Camera * lret = self->getCurrentCamera();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera >::push(L,lret,false);

		return 1;
	}

	// void osg::RenderInfo::setUserData(osg::Referenced * userData)
	static int _bind_setUserData(lua_State *L) {
		if (!_lg_typecheck_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::RenderInfo::setUserData(osg::Referenced * userData) function, expected prototype:\nvoid osg::RenderInfo::setUserData(osg::Referenced * userData)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* userData=(Luna< osg::Referenced >::check(L,2));

		osg::RenderInfo* self=(Luna< osg::RenderInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::RenderInfo::setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::RenderInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setUserData(userData);

		return 0;
	}

	// osg::Referenced * osg::RenderInfo::getUserData()
	static int _bind_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::RenderInfo::getUserData() function, expected prototype:\nosg::Referenced * osg::RenderInfo::getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::RenderInfo* self=(Luna< osg::RenderInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::RenderInfo::getUserData(). Got : '%s'\n%s",typeid(Luna< osg::RenderInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::RenderInfo::getUserData() const
	static int _bind_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::RenderInfo::getUserData() const function, expected prototype:\nconst osg::Referenced * osg::RenderInfo::getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::RenderInfo* self=(Luna< osg::RenderInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::RenderInfo::getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::RenderInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::RenderInfo::getUserData
	static int _bind_getUserData(lua_State *L) {
		if (_lg_typecheck_getUserData_overload_1(L)) return _bind_getUserData_overload_1(L);
		if (_lg_typecheck_getUserData_overload_2(L)) return _bind_getUserData_overload_2(L);

		luaL_error(L, "error in function getUserData, cannot match any of the overloads for function getUserData:\n  getUserData()\n  getUserData()\n");
		return 0;
	}


	// Operator binds:
	// osg::RenderInfo & osg::RenderInfo::operator=(const osg::RenderInfo & rhs)
	static int _bind_op_assign(lua_State *L) {
		if (!_lg_typecheck_op_assign(L)) {
			luaL_error(L, "luna typecheck failed in osg::RenderInfo & osg::RenderInfo::operator=(const osg::RenderInfo & rhs) function, expected prototype:\nosg::RenderInfo & osg::RenderInfo::operator=(const osg::RenderInfo & rhs)\nClass arguments details:\narg 1 ID = 2286263\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::RenderInfo* rhs_ptr=(Luna< osg::RenderInfo >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::RenderInfo::operator= function");
		}
		const osg::RenderInfo & rhs=*rhs_ptr;

		osg::RenderInfo* self=(Luna< osg::RenderInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::RenderInfo & osg::RenderInfo::operator=(const osg::RenderInfo &). Got : '%s'\n%s",typeid(Luna< osg::RenderInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::RenderInfo* lret = &self->operator=(rhs);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::RenderInfo >::push(L,lret,false);

		return 1;
	}


};

osg::RenderInfo* LunaTraits< osg::RenderInfo >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_RenderInfo::_bind_ctor(L);
}

void LunaTraits< osg::RenderInfo >::_bind_dtor(osg::RenderInfo* obj) {
	delete obj;
}

const char LunaTraits< osg::RenderInfo >::className[] = "RenderInfo";
const char LunaTraits< osg::RenderInfo >::fullName[] = "osg::RenderInfo";
const char LunaTraits< osg::RenderInfo >::moduleName[] = "osg";
const char* LunaTraits< osg::RenderInfo >::parents[] = {0};
const int LunaTraits< osg::RenderInfo >::hash = 2286263;
const int LunaTraits< osg::RenderInfo >::uniqueIDs[] = {2286263,0};

luna_RegType LunaTraits< osg::RenderInfo >::methods[] = {
	{"getContextID", &luna_wrapper_osg_RenderInfo::_bind_getContextID},
	{"setState", &luna_wrapper_osg_RenderInfo::_bind_setState},
	{"getState", &luna_wrapper_osg_RenderInfo::_bind_getState},
	{"setView", &luna_wrapper_osg_RenderInfo::_bind_setView},
	{"getView", &luna_wrapper_osg_RenderInfo::_bind_getView},
	{"pushCamera", &luna_wrapper_osg_RenderInfo::_bind_pushCamera},
	{"popCamera", &luna_wrapper_osg_RenderInfo::_bind_popCamera},
	{"getCurrentCamera", &luna_wrapper_osg_RenderInfo::_bind_getCurrentCamera},
	{"setUserData", &luna_wrapper_osg_RenderInfo::_bind_setUserData},
	{"getUserData", &luna_wrapper_osg_RenderInfo::_bind_getUserData},
	{"op_assign", &luna_wrapper_osg_RenderInfo::_bind_op_assign},
	{"dynCast", &luna_wrapper_osg_RenderInfo::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_RenderInfo::_bind___eq},
	{"fromVoid", &luna_wrapper_osg_RenderInfo::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_RenderInfo::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< osg::RenderInfo >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::RenderInfo >::enumValues[] = {
	{0,0}
};



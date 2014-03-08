#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_LightSource.h>

class luna_wrapper_osg_LightSource {
public:
	typedef Luna< osg::LightSource > luna_t;

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

		osg::LightSource* self= (osg::LightSource*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::LightSource >::push(L,self,false);
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
		//osg::LightSource* ptr= dynamic_cast< osg::LightSource* >(Luna< osg::Referenced >::check(L,1));
		osg::LightSource* ptr= luna_caster< osg::Referenced, osg::LightSource >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::LightSource >::push(L,ptr,false);
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::LightSource >(L,1))) ) return false;
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::LightSource >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_accept(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setReferenceFrame(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getReferenceFrame(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setLight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getLight_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLight_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setStateSetModes(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLocalStateSetModes(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_computeBound(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_base_asTransform_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asTransform_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asCamera_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asCamera_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asSwitch_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asSwitch_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asGeode_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asGeode_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_ascend(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_asGroup_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asGroup_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_traverse(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_addChild(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_insertChild(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_removeChildren(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_replaceChild(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setChild(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
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

	inline static bool _lg_typecheck_base_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_accept(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_computeBound(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::LightSource::LightSource()
	static osg::LightSource* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::LightSource::LightSource() function, expected prototype:\nosg::LightSource::LightSource()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::LightSource();
	}

	// osg::LightSource::LightSource(const osg::LightSource & ls, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::LightSource* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::LightSource::LightSource(const osg::LightSource & ls, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::LightSource::LightSource(const osg::LightSource & ls, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::LightSource* ls_ptr=(Luna< osg::Referenced >::checkSubType< osg::LightSource >(L,1));
		if( !ls_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ls in osg::LightSource::LightSource function");
		}
		const osg::LightSource & ls=*ls_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::LightSource::LightSource function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osg::LightSource(ls, copyop);
	}

	// osg::LightSource::LightSource(lua_Table * data)
	static osg::LightSource* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::LightSource::LightSource(lua_Table * data) function, expected prototype:\nosg::LightSource::LightSource(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_LightSource(L,NULL);
	}

	// osg::LightSource::LightSource(lua_Table * data, const osg::LightSource & ls, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::LightSource* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::LightSource::LightSource(lua_Table * data, const osg::LightSource & ls, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::LightSource::LightSource(lua_Table * data, const osg::LightSource & ls, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::LightSource* ls_ptr=(Luna< osg::Referenced >::checkSubType< osg::LightSource >(L,2));
		if( !ls_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ls in osg::LightSource::LightSource function");
		}
		const osg::LightSource & ls=*ls_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::LightSource::LightSource function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_LightSource(L,NULL, ls, copyop);
	}

	// Overload binder for osg::LightSource::LightSource
	static osg::LightSource* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function LightSource, cannot match any of the overloads for function LightSource:\n  LightSource()\n  LightSource(const osg::LightSource &, const osg::CopyOp &)\n  LightSource(lua_Table *)\n  LightSource(lua_Table *, const osg::LightSource &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::LightSource::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::LightSource::cloneType() const function, expected prototype:\nosg::Object * osg::LightSource::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::LightSource* self=Luna< osg::Referenced >::checkSubType< osg::LightSource >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::LightSource::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::LightSource::clone(const osg::CopyOp & copyop) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::LightSource::clone(const osg::CopyOp & copyop) const function, expected prototype:\nosg::Object * osg::LightSource::clone(const osg::CopyOp & copyop) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::LightSource::clone function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		osg::LightSource* self=Luna< osg::Referenced >::checkSubType< osg::LightSource >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::LightSource::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(copyop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::LightSource::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::LightSource::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::LightSource::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::LightSource* self=Luna< osg::Referenced >::checkSubType< osg::LightSource >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::LightSource::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::LightSource::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::LightSource::className() const function, expected prototype:\nconst char * osg::LightSource::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::LightSource* self=Luna< osg::Referenced >::checkSubType< osg::LightSource >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::LightSource::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::LightSource::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::LightSource::libraryName() const function, expected prototype:\nconst char * osg::LightSource::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::LightSource* self=Luna< osg::Referenced >::checkSubType< osg::LightSource >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::LightSource::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::LightSource::accept(osg::NodeVisitor & nv)
	static int _bind_accept(lua_State *L) {
		if (!_lg_typecheck_accept(L)) {
			luaL_error(L, "luna typecheck failed in void osg::LightSource::accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osg::LightSource::accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osg::LightSource::accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osg::LightSource* self=Luna< osg::Referenced >::checkSubType< osg::LightSource >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::LightSource::accept(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->accept(nv);

		return 0;
	}

	// void osg::LightSource::setReferenceFrame(osg::LightSource::ReferenceFrame rf)
	static int _bind_setReferenceFrame(lua_State *L) {
		if (!_lg_typecheck_setReferenceFrame(L)) {
			luaL_error(L, "luna typecheck failed in void osg::LightSource::setReferenceFrame(osg::LightSource::ReferenceFrame rf) function, expected prototype:\nvoid osg::LightSource::setReferenceFrame(osg::LightSource::ReferenceFrame rf)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::LightSource::ReferenceFrame rf=(osg::LightSource::ReferenceFrame)lua_tointeger(L,2);

		osg::LightSource* self=Luna< osg::Referenced >::checkSubType< osg::LightSource >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::LightSource::setReferenceFrame(osg::LightSource::ReferenceFrame). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setReferenceFrame(rf);

		return 0;
	}

	// osg::LightSource::ReferenceFrame osg::LightSource::getReferenceFrame() const
	static int _bind_getReferenceFrame(lua_State *L) {
		if (!_lg_typecheck_getReferenceFrame(L)) {
			luaL_error(L, "luna typecheck failed in osg::LightSource::ReferenceFrame osg::LightSource::getReferenceFrame() const function, expected prototype:\nosg::LightSource::ReferenceFrame osg::LightSource::getReferenceFrame() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::LightSource* self=Luna< osg::Referenced >::checkSubType< osg::LightSource >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::LightSource::ReferenceFrame osg::LightSource::getReferenceFrame() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::LightSource::ReferenceFrame lret = self->getReferenceFrame();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::LightSource::setLight(osg::Light * light)
	static int _bind_setLight(lua_State *L) {
		if (!_lg_typecheck_setLight(L)) {
			luaL_error(L, "luna typecheck failed in void osg::LightSource::setLight(osg::Light * light) function, expected prototype:\nvoid osg::LightSource::setLight(osg::Light * light)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Light* light=(Luna< osg::Referenced >::checkSubType< osg::Light >(L,2));

		osg::LightSource* self=Luna< osg::Referenced >::checkSubType< osg::LightSource >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::LightSource::setLight(osg::Light *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setLight(light);

		return 0;
	}

	// osg::Light * osg::LightSource::getLight()
	static int _bind_getLight_overload_1(lua_State *L) {
		if (!_lg_typecheck_getLight_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Light * osg::LightSource::getLight() function, expected prototype:\nosg::Light * osg::LightSource::getLight()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::LightSource* self=Luna< osg::Referenced >::checkSubType< osg::LightSource >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Light * osg::LightSource::getLight(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Light * lret = self->getLight();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Light >::push(L,lret,false);

		return 1;
	}

	// const osg::Light * osg::LightSource::getLight() const
	static int _bind_getLight_overload_2(lua_State *L) {
		if (!_lg_typecheck_getLight_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Light * osg::LightSource::getLight() const function, expected prototype:\nconst osg::Light * osg::LightSource::getLight() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::LightSource* self=Luna< osg::Referenced >::checkSubType< osg::LightSource >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Light * osg::LightSource::getLight() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Light * lret = self->getLight();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Light >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::LightSource::getLight
	static int _bind_getLight(lua_State *L) {
		if (_lg_typecheck_getLight_overload_1(L)) return _bind_getLight_overload_1(L);
		if (_lg_typecheck_getLight_overload_2(L)) return _bind_getLight_overload_2(L);

		luaL_error(L, "error in function getLight, cannot match any of the overloads for function getLight:\n  getLight()\n  getLight()\n");
		return 0;
	}

	// void osg::LightSource::setStateSetModes(osg::StateSet & arg1, unsigned int arg2) const
	static int _bind_setStateSetModes(lua_State *L) {
		if (!_lg_typecheck_setStateSetModes(L)) {
			luaL_error(L, "luna typecheck failed in void osg::LightSource::setStateSetModes(osg::StateSet & arg1, unsigned int arg2) const function, expected prototype:\nvoid osg::LightSource::setStateSetModes(osg::StateSet & arg1, unsigned int arg2) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StateSet* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::LightSource::setStateSetModes function");
		}
		osg::StateSet & _arg1=*_arg1_ptr;
		unsigned int _arg2=(unsigned int)lua_tointeger(L,3);

		osg::LightSource* self=Luna< osg::Referenced >::checkSubType< osg::LightSource >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::LightSource::setStateSetModes(osg::StateSet &, unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setStateSetModes(_arg1, _arg2);

		return 0;
	}

	// void osg::LightSource::setLocalStateSetModes(unsigned int value = osg::StateAttribute::ON)
	static int _bind_setLocalStateSetModes(lua_State *L) {
		if (!_lg_typecheck_setLocalStateSetModes(L)) {
			luaL_error(L, "luna typecheck failed in void osg::LightSource::setLocalStateSetModes(unsigned int value = osg::StateAttribute::ON) function, expected prototype:\nvoid osg::LightSource::setLocalStateSetModes(unsigned int value = osg::StateAttribute::ON)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		unsigned int value=luatop>1 ? (unsigned int)lua_tointeger(L,2) : (unsigned int)osg::StateAttribute::ON;

		osg::LightSource* self=Luna< osg::Referenced >::checkSubType< osg::LightSource >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::LightSource::setLocalStateSetModes(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setLocalStateSetModes(value);

		return 0;
	}

	// void osg::LightSource::setThreadSafeRefUnref(bool threadSafe)
	static int _bind_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::LightSource::setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::LightSource::setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::LightSource* self=Luna< osg::Referenced >::checkSubType< osg::LightSource >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::LightSource::setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// osg::BoundingSphered osg::LightSource::computeBound() const
	static int _bind_computeBound(lua_State *L) {
		if (!_lg_typecheck_computeBound(L)) {
			luaL_error(L, "luna typecheck failed in osg::BoundingSphered osg::LightSource::computeBound() const function, expected prototype:\nosg::BoundingSphered osg::LightSource::computeBound() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::LightSource* self=Luna< osg::Referenced >::checkSubType< osg::LightSource >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::BoundingSphered osg::LightSource::computeBound() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::BoundingSphered stack_lret = self->computeBound();
		osg::BoundingSphered* lret = new osg::BoundingSphered(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingSphered >::push(L,lret,true);

		return 1;
	}

	// void osg::LightSource::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::LightSource::base_setName(const std::string & name) function, expected prototype:\nvoid osg::LightSource::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::LightSource* self=Luna< osg::Referenced >::checkSubType< osg::LightSource >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::LightSource::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LightSource::setName(name);

		return 0;
	}

	// void osg::LightSource::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::LightSource::base_computeDataVariance() function, expected prototype:\nvoid osg::LightSource::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::LightSource* self=Luna< osg::Referenced >::checkSubType< osg::LightSource >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::LightSource::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LightSource::computeDataVariance();

		return 0;
	}

	// void osg::LightSource::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::LightSource::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::LightSource::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::LightSource* self=Luna< osg::Referenced >::checkSubType< osg::LightSource >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::LightSource::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LightSource::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::LightSource::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::LightSource::base_getUserData() function, expected prototype:\nosg::Referenced * osg::LightSource::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::LightSource* self=Luna< osg::Referenced >::checkSubType< osg::LightSource >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::LightSource::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->LightSource::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::LightSource::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::LightSource::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::LightSource::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::LightSource* self=Luna< osg::Referenced >::checkSubType< osg::LightSource >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::LightSource::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->LightSource::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::LightSource::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// osg::Transform * osg::LightSource::base_asTransform()
	static int _bind_base_asTransform_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asTransform_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Transform * osg::LightSource::base_asTransform() function, expected prototype:\nosg::Transform * osg::LightSource::base_asTransform()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::LightSource* self=Luna< osg::Referenced >::checkSubType< osg::LightSource >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Transform * osg::LightSource::base_asTransform(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Transform * lret = self->LightSource::asTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Transform >::push(L,lret,false);

		return 1;
	}

	// const osg::Transform * osg::LightSource::base_asTransform() const
	static int _bind_base_asTransform_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asTransform_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Transform * osg::LightSource::base_asTransform() const function, expected prototype:\nconst osg::Transform * osg::LightSource::base_asTransform() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::LightSource* self=Luna< osg::Referenced >::checkSubType< osg::LightSource >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Transform * osg::LightSource::base_asTransform() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Transform * lret = self->LightSource::asTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Transform >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::LightSource::base_asTransform
	static int _bind_base_asTransform(lua_State *L) {
		if (_lg_typecheck_base_asTransform_overload_1(L)) return _bind_base_asTransform_overload_1(L);
		if (_lg_typecheck_base_asTransform_overload_2(L)) return _bind_base_asTransform_overload_2(L);

		luaL_error(L, "error in function base_asTransform, cannot match any of the overloads for function base_asTransform:\n  base_asTransform()\n  base_asTransform()\n");
		return 0;
	}

	// osg::Camera * osg::LightSource::base_asCamera()
	static int _bind_base_asCamera_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asCamera_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Camera * osg::LightSource::base_asCamera() function, expected prototype:\nosg::Camera * osg::LightSource::base_asCamera()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::LightSource* self=Luna< osg::Referenced >::checkSubType< osg::LightSource >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Camera * osg::LightSource::base_asCamera(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Camera * lret = self->LightSource::asCamera();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera >::push(L,lret,false);

		return 1;
	}

	// const osg::Camera * osg::LightSource::base_asCamera() const
	static int _bind_base_asCamera_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asCamera_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Camera * osg::LightSource::base_asCamera() const function, expected prototype:\nconst osg::Camera * osg::LightSource::base_asCamera() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::LightSource* self=Luna< osg::Referenced >::checkSubType< osg::LightSource >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Camera * osg::LightSource::base_asCamera() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Camera * lret = self->LightSource::asCamera();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::LightSource::base_asCamera
	static int _bind_base_asCamera(lua_State *L) {
		if (_lg_typecheck_base_asCamera_overload_1(L)) return _bind_base_asCamera_overload_1(L);
		if (_lg_typecheck_base_asCamera_overload_2(L)) return _bind_base_asCamera_overload_2(L);

		luaL_error(L, "error in function base_asCamera, cannot match any of the overloads for function base_asCamera:\n  base_asCamera()\n  base_asCamera()\n");
		return 0;
	}

	// osg::Switch * osg::LightSource::base_asSwitch()
	static int _bind_base_asSwitch_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asSwitch_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Switch * osg::LightSource::base_asSwitch() function, expected prototype:\nosg::Switch * osg::LightSource::base_asSwitch()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::LightSource* self=Luna< osg::Referenced >::checkSubType< osg::LightSource >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Switch * osg::LightSource::base_asSwitch(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Switch * lret = self->LightSource::asSwitch();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Switch >::push(L,lret,false);

		return 1;
	}

	// const osg::Switch * osg::LightSource::base_asSwitch() const
	static int _bind_base_asSwitch_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asSwitch_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Switch * osg::LightSource::base_asSwitch() const function, expected prototype:\nconst osg::Switch * osg::LightSource::base_asSwitch() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::LightSource* self=Luna< osg::Referenced >::checkSubType< osg::LightSource >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Switch * osg::LightSource::base_asSwitch() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Switch * lret = self->LightSource::asSwitch();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Switch >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::LightSource::base_asSwitch
	static int _bind_base_asSwitch(lua_State *L) {
		if (_lg_typecheck_base_asSwitch_overload_1(L)) return _bind_base_asSwitch_overload_1(L);
		if (_lg_typecheck_base_asSwitch_overload_2(L)) return _bind_base_asSwitch_overload_2(L);

		luaL_error(L, "error in function base_asSwitch, cannot match any of the overloads for function base_asSwitch:\n  base_asSwitch()\n  base_asSwitch()\n");
		return 0;
	}

	// osg::Geode * osg::LightSource::base_asGeode()
	static int _bind_base_asGeode_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asGeode_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Geode * osg::LightSource::base_asGeode() function, expected prototype:\nosg::Geode * osg::LightSource::base_asGeode()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::LightSource* self=Luna< osg::Referenced >::checkSubType< osg::LightSource >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Geode * osg::LightSource::base_asGeode(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Geode * lret = self->LightSource::asGeode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geode >::push(L,lret,false);

		return 1;
	}

	// const osg::Geode * osg::LightSource::base_asGeode() const
	static int _bind_base_asGeode_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asGeode_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Geode * osg::LightSource::base_asGeode() const function, expected prototype:\nconst osg::Geode * osg::LightSource::base_asGeode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::LightSource* self=Luna< osg::Referenced >::checkSubType< osg::LightSource >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Geode * osg::LightSource::base_asGeode() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Geode * lret = self->LightSource::asGeode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geode >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::LightSource::base_asGeode
	static int _bind_base_asGeode(lua_State *L) {
		if (_lg_typecheck_base_asGeode_overload_1(L)) return _bind_base_asGeode_overload_1(L);
		if (_lg_typecheck_base_asGeode_overload_2(L)) return _bind_base_asGeode_overload_2(L);

		luaL_error(L, "error in function base_asGeode, cannot match any of the overloads for function base_asGeode:\n  base_asGeode()\n  base_asGeode()\n");
		return 0;
	}

	// void osg::LightSource::base_ascend(osg::NodeVisitor & nv)
	static int _bind_base_ascend(lua_State *L) {
		if (!_lg_typecheck_base_ascend(L)) {
			luaL_error(L, "luna typecheck failed in void osg::LightSource::base_ascend(osg::NodeVisitor & nv) function, expected prototype:\nvoid osg::LightSource::base_ascend(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osg::LightSource::base_ascend function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osg::LightSource* self=Luna< osg::Referenced >::checkSubType< osg::LightSource >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::LightSource::base_ascend(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LightSource::ascend(nv);

		return 0;
	}

	// osg::Group * osg::LightSource::base_asGroup()
	static int _bind_base_asGroup_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asGroup_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Group * osg::LightSource::base_asGroup() function, expected prototype:\nosg::Group * osg::LightSource::base_asGroup()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::LightSource* self=Luna< osg::Referenced >::checkSubType< osg::LightSource >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Group * osg::LightSource::base_asGroup(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Group * lret = self->LightSource::asGroup();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Group >::push(L,lret,false);

		return 1;
	}

	// const osg::Group * osg::LightSource::base_asGroup() const
	static int _bind_base_asGroup_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asGroup_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Group * osg::LightSource::base_asGroup() const function, expected prototype:\nconst osg::Group * osg::LightSource::base_asGroup() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::LightSource* self=Luna< osg::Referenced >::checkSubType< osg::LightSource >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Group * osg::LightSource::base_asGroup() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Group * lret = self->LightSource::asGroup();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Group >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::LightSource::base_asGroup
	static int _bind_base_asGroup(lua_State *L) {
		if (_lg_typecheck_base_asGroup_overload_1(L)) return _bind_base_asGroup_overload_1(L);
		if (_lg_typecheck_base_asGroup_overload_2(L)) return _bind_base_asGroup_overload_2(L);

		luaL_error(L, "error in function base_asGroup, cannot match any of the overloads for function base_asGroup:\n  base_asGroup()\n  base_asGroup()\n");
		return 0;
	}

	// void osg::LightSource::base_traverse(osg::NodeVisitor & arg1)
	static int _bind_base_traverse(lua_State *L) {
		if (!_lg_typecheck_base_traverse(L)) {
			luaL_error(L, "luna typecheck failed in void osg::LightSource::base_traverse(osg::NodeVisitor & arg1) function, expected prototype:\nvoid osg::LightSource::base_traverse(osg::NodeVisitor & arg1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::LightSource::base_traverse function");
		}
		osg::NodeVisitor & _arg1=*_arg1_ptr;

		osg::LightSource* self=Luna< osg::Referenced >::checkSubType< osg::LightSource >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::LightSource::base_traverse(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LightSource::traverse(_arg1);

		return 0;
	}

	// bool osg::LightSource::base_addChild(osg::Node * child)
	static int _bind_base_addChild(lua_State *L) {
		if (!_lg_typecheck_base_addChild(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::LightSource::base_addChild(osg::Node * child) function, expected prototype:\nbool osg::LightSource::base_addChild(osg::Node * child)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* child=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));

		osg::LightSource* self=Luna< osg::Referenced >::checkSubType< osg::LightSource >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::LightSource::base_addChild(osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->LightSource::addChild(child);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::LightSource::base_insertChild(unsigned int index, osg::Node * child)
	static int _bind_base_insertChild(lua_State *L) {
		if (!_lg_typecheck_base_insertChild(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::LightSource::base_insertChild(unsigned int index, osg::Node * child) function, expected prototype:\nbool osg::LightSource::base_insertChild(unsigned int index, osg::Node * child)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		osg::Node* child=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,3));

		osg::LightSource* self=Luna< osg::Referenced >::checkSubType< osg::LightSource >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::LightSource::base_insertChild(unsigned int, osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->LightSource::insertChild(index, child);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::LightSource::base_removeChildren(unsigned int pos, unsigned int numChildrenToRemove)
	static int _bind_base_removeChildren(lua_State *L) {
		if (!_lg_typecheck_base_removeChildren(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::LightSource::base_removeChildren(unsigned int pos, unsigned int numChildrenToRemove) function, expected prototype:\nbool osg::LightSource::base_removeChildren(unsigned int pos, unsigned int numChildrenToRemove)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int pos=(unsigned int)lua_tointeger(L,2);
		unsigned int numChildrenToRemove=(unsigned int)lua_tointeger(L,3);

		osg::LightSource* self=Luna< osg::Referenced >::checkSubType< osg::LightSource >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::LightSource::base_removeChildren(unsigned int, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->LightSource::removeChildren(pos, numChildrenToRemove);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::LightSource::base_replaceChild(osg::Node * origChild, osg::Node * newChild)
	static int _bind_base_replaceChild(lua_State *L) {
		if (!_lg_typecheck_base_replaceChild(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::LightSource::base_replaceChild(osg::Node * origChild, osg::Node * newChild) function, expected prototype:\nbool osg::LightSource::base_replaceChild(osg::Node * origChild, osg::Node * newChild)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* origChild=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		osg::Node* newChild=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,3));

		osg::LightSource* self=Luna< osg::Referenced >::checkSubType< osg::LightSource >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::LightSource::base_replaceChild(osg::Node *, osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->LightSource::replaceChild(origChild, newChild);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::LightSource::base_setChild(unsigned int i, osg::Node * node)
	static int _bind_base_setChild(lua_State *L) {
		if (!_lg_typecheck_base_setChild(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::LightSource::base_setChild(unsigned int i, osg::Node * node) function, expected prototype:\nbool osg::LightSource::base_setChild(unsigned int i, osg::Node * node)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);
		osg::Node* node=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,3));

		osg::LightSource* self=Luna< osg::Referenced >::checkSubType< osg::LightSource >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::LightSource::base_setChild(unsigned int, osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->LightSource::setChild(i, node);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::LightSource::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::LightSource::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::LightSource::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::LightSource* self=Luna< osg::Referenced >::checkSubType< osg::LightSource >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::LightSource::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LightSource::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osg::LightSource::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::LightSource::base_cloneType() const function, expected prototype:\nosg::Object * osg::LightSource::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::LightSource* self=Luna< osg::Referenced >::checkSubType< osg::LightSource >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::LightSource::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->LightSource::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::LightSource::base_clone(const osg::CopyOp & copyop) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::LightSource::base_clone(const osg::CopyOp & copyop) const function, expected prototype:\nosg::Object * osg::LightSource::base_clone(const osg::CopyOp & copyop) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::LightSource::base_clone function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		osg::LightSource* self=Luna< osg::Referenced >::checkSubType< osg::LightSource >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::LightSource::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->LightSource::clone(copyop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::LightSource::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::LightSource::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::LightSource::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::LightSource* self=Luna< osg::Referenced >::checkSubType< osg::LightSource >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::LightSource::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->LightSource::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::LightSource::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::LightSource::base_className() const function, expected prototype:\nconst char * osg::LightSource::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::LightSource* self=Luna< osg::Referenced >::checkSubType< osg::LightSource >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::LightSource::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->LightSource::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::LightSource::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::LightSource::base_libraryName() const function, expected prototype:\nconst char * osg::LightSource::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::LightSource* self=Luna< osg::Referenced >::checkSubType< osg::LightSource >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::LightSource::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->LightSource::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::LightSource::base_accept(osg::NodeVisitor & nv)
	static int _bind_base_accept(lua_State *L) {
		if (!_lg_typecheck_base_accept(L)) {
			luaL_error(L, "luna typecheck failed in void osg::LightSource::base_accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osg::LightSource::base_accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osg::LightSource::base_accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osg::LightSource* self=Luna< osg::Referenced >::checkSubType< osg::LightSource >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::LightSource::base_accept(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LightSource::accept(nv);

		return 0;
	}

	// void osg::LightSource::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::LightSource::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::LightSource::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::LightSource* self=Luna< osg::Referenced >::checkSubType< osg::LightSource >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::LightSource::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LightSource::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// osg::BoundingSphered osg::LightSource::base_computeBound() const
	static int _bind_base_computeBound(lua_State *L) {
		if (!_lg_typecheck_base_computeBound(L)) {
			luaL_error(L, "luna typecheck failed in osg::BoundingSphered osg::LightSource::base_computeBound() const function, expected prototype:\nosg::BoundingSphered osg::LightSource::base_computeBound() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::LightSource* self=Luna< osg::Referenced >::checkSubType< osg::LightSource >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::BoundingSphered osg::LightSource::base_computeBound() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::BoundingSphered stack_lret = self->LightSource::computeBound();
		osg::BoundingSphered* lret = new osg::BoundingSphered(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingSphered >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

osg::LightSource* LunaTraits< osg::LightSource >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_LightSource::_bind_ctor(L);
}

void LunaTraits< osg::LightSource >::_bind_dtor(osg::LightSource* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::LightSource >::className[] = "LightSource";
const char LunaTraits< osg::LightSource >::fullName[] = "osg::LightSource";
const char LunaTraits< osg::LightSource >::moduleName[] = "osg";
const char* LunaTraits< osg::LightSource >::parents[] = {"osg.Group", 0};
const int LunaTraits< osg::LightSource >::hash = 32208268;
const int LunaTraits< osg::LightSource >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::LightSource >::methods[] = {
	{"cloneType", &luna_wrapper_osg_LightSource::_bind_cloneType},
	{"clone", &luna_wrapper_osg_LightSource::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_LightSource::_bind_isSameKindAs},
	{"className", &luna_wrapper_osg_LightSource::_bind_className},
	{"libraryName", &luna_wrapper_osg_LightSource::_bind_libraryName},
	{"accept", &luna_wrapper_osg_LightSource::_bind_accept},
	{"setReferenceFrame", &luna_wrapper_osg_LightSource::_bind_setReferenceFrame},
	{"getReferenceFrame", &luna_wrapper_osg_LightSource::_bind_getReferenceFrame},
	{"setLight", &luna_wrapper_osg_LightSource::_bind_setLight},
	{"getLight", &luna_wrapper_osg_LightSource::_bind_getLight},
	{"setStateSetModes", &luna_wrapper_osg_LightSource::_bind_setStateSetModes},
	{"setLocalStateSetModes", &luna_wrapper_osg_LightSource::_bind_setLocalStateSetModes},
	{"setThreadSafeRefUnref", &luna_wrapper_osg_LightSource::_bind_setThreadSafeRefUnref},
	{"computeBound", &luna_wrapper_osg_LightSource::_bind_computeBound},
	{"base_setName", &luna_wrapper_osg_LightSource::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_LightSource::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_LightSource::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_LightSource::_bind_base_getUserData},
	{"base_asTransform", &luna_wrapper_osg_LightSource::_bind_base_asTransform},
	{"base_asCamera", &luna_wrapper_osg_LightSource::_bind_base_asCamera},
	{"base_asSwitch", &luna_wrapper_osg_LightSource::_bind_base_asSwitch},
	{"base_asGeode", &luna_wrapper_osg_LightSource::_bind_base_asGeode},
	{"base_ascend", &luna_wrapper_osg_LightSource::_bind_base_ascend},
	{"base_asGroup", &luna_wrapper_osg_LightSource::_bind_base_asGroup},
	{"base_traverse", &luna_wrapper_osg_LightSource::_bind_base_traverse},
	{"base_addChild", &luna_wrapper_osg_LightSource::_bind_base_addChild},
	{"base_insertChild", &luna_wrapper_osg_LightSource::_bind_base_insertChild},
	{"base_removeChildren", &luna_wrapper_osg_LightSource::_bind_base_removeChildren},
	{"base_replaceChild", &luna_wrapper_osg_LightSource::_bind_base_replaceChild},
	{"base_setChild", &luna_wrapper_osg_LightSource::_bind_base_setChild},
	{"base_releaseGLObjects", &luna_wrapper_osg_LightSource::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osg_LightSource::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_LightSource::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_LightSource::_bind_base_isSameKindAs},
	{"base_className", &luna_wrapper_osg_LightSource::_bind_base_className},
	{"base_libraryName", &luna_wrapper_osg_LightSource::_bind_base_libraryName},
	{"base_accept", &luna_wrapper_osg_LightSource::_bind_base_accept},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_LightSource::_bind_base_setThreadSafeRefUnref},
	{"base_computeBound", &luna_wrapper_osg_LightSource::_bind_base_computeBound},
	{"fromVoid", &luna_wrapper_osg_LightSource::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_LightSource::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_LightSource::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::LightSource >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_LightSource::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::LightSource >::enumValues[] = {
	{"RELATIVE_RF", osg::LightSource::RELATIVE_RF},
	{"ABSOLUTE_RF", osg::LightSource::ABSOLUTE_RF},
	{0,0}
};



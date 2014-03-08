#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_PolygonOffset.h>

class luna_wrapper_osg_PolygonOffset {
public:
	typedef Luna< osg::PolygonOffset > luna_t;

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

		osg::PolygonOffset* self= (osg::PolygonOffset*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::PolygonOffset >::push(L,self,false);
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
		//osg::PolygonOffset* ptr= dynamic_cast< osg::PolygonOffset* >(Luna< osg::Referenced >::check(L,1));
		osg::PolygonOffset* ptr= luna_caster< osg::Referenced, osg::PolygonOffset >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::PolygonOffset >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,1)!=LUA_TNUMBER ) return false;
		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::PolygonOffset >(L,1))) ) return false;
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
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::PolygonOffset >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_getType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_compare(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getModeUsage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,48108040) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFactor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFactor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setUnits(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUnits(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_apply(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFactorMultiplier(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_type(L,1)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFactorMultiplier(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setUnitsMultiplier(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_type(L,1)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUnitsMultiplier(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_areFactorAndUnitsMultipliersSet(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setFactorAndUnitsMultipliersUsingBestGuessForDriver(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

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

	inline static bool _lg_typecheck_base_asTexture_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asTexture_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getMember(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_isTextureAttribute(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_checkValidityOfAssociatedModes(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_compileGLObjects(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
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

	inline static bool _lg_typecheck_base_getType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_compare(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getModeUsage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,48108040) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::PolygonOffset::PolygonOffset()
	static osg::PolygonOffset* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::PolygonOffset::PolygonOffset() function, expected prototype:\nosg::PolygonOffset::PolygonOffset()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::PolygonOffset();
	}

	// osg::PolygonOffset::PolygonOffset(float factor, float units)
	static osg::PolygonOffset* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::PolygonOffset::PolygonOffset(float factor, float units) function, expected prototype:\nosg::PolygonOffset::PolygonOffset(float factor, float units)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float factor=(float)lua_tonumber(L,1);
		float units=(float)lua_tonumber(L,2);

		return new osg::PolygonOffset(factor, units);
	}

	// osg::PolygonOffset::PolygonOffset(const osg::PolygonOffset & po, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::PolygonOffset* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::PolygonOffset::PolygonOffset(const osg::PolygonOffset & po, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::PolygonOffset::PolygonOffset(const osg::PolygonOffset & po, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::PolygonOffset* po_ptr=(Luna< osg::Referenced >::checkSubType< osg::PolygonOffset >(L,1));
		if( !po_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg po in osg::PolygonOffset::PolygonOffset function");
		}
		const osg::PolygonOffset & po=*po_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::PolygonOffset::PolygonOffset function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osg::PolygonOffset(po, copyop);
	}

	// osg::PolygonOffset::PolygonOffset(lua_Table * data)
	static osg::PolygonOffset* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::PolygonOffset::PolygonOffset(lua_Table * data) function, expected prototype:\nosg::PolygonOffset::PolygonOffset(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_PolygonOffset(L,NULL);
	}

	// osg::PolygonOffset::PolygonOffset(lua_Table * data, float factor, float units)
	static osg::PolygonOffset* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in osg::PolygonOffset::PolygonOffset(lua_Table * data, float factor, float units) function, expected prototype:\nosg::PolygonOffset::PolygonOffset(lua_Table * data, float factor, float units)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float factor=(float)lua_tonumber(L,2);
		float units=(float)lua_tonumber(L,3);

		return new wrapper_osg_PolygonOffset(L,NULL, factor, units);
	}

	// osg::PolygonOffset::PolygonOffset(lua_Table * data, const osg::PolygonOffset & po, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::PolygonOffset* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in osg::PolygonOffset::PolygonOffset(lua_Table * data, const osg::PolygonOffset & po, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::PolygonOffset::PolygonOffset(lua_Table * data, const osg::PolygonOffset & po, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::PolygonOffset* po_ptr=(Luna< osg::Referenced >::checkSubType< osg::PolygonOffset >(L,2));
		if( !po_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg po in osg::PolygonOffset::PolygonOffset function");
		}
		const osg::PolygonOffset & po=*po_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::PolygonOffset::PolygonOffset function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_PolygonOffset(L,NULL, po, copyop);
	}

	// Overload binder for osg::PolygonOffset::PolygonOffset
	static osg::PolygonOffset* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);

		luaL_error(L, "error in function PolygonOffset, cannot match any of the overloads for function PolygonOffset:\n  PolygonOffset()\n  PolygonOffset(float, float)\n  PolygonOffset(const osg::PolygonOffset &, const osg::CopyOp &)\n  PolygonOffset(lua_Table *)\n  PolygonOffset(lua_Table *, float, float)\n  PolygonOffset(lua_Table *, const osg::PolygonOffset &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::PolygonOffset::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::PolygonOffset::cloneType() const function, expected prototype:\nosg::Object * osg::PolygonOffset::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PolygonOffset* self=Luna< osg::Referenced >::checkSubType< osg::PolygonOffset >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::PolygonOffset::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::PolygonOffset::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::PolygonOffset::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::PolygonOffset::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::PolygonOffset::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::PolygonOffset* self=Luna< osg::Referenced >::checkSubType< osg::PolygonOffset >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::PolygonOffset::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::PolygonOffset::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::PolygonOffset::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::PolygonOffset::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::PolygonOffset* self=Luna< osg::Referenced >::checkSubType< osg::PolygonOffset >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::PolygonOffset::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::PolygonOffset::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::PolygonOffset::libraryName() const function, expected prototype:\nconst char * osg::PolygonOffset::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PolygonOffset* self=Luna< osg::Referenced >::checkSubType< osg::PolygonOffset >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::PolygonOffset::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::PolygonOffset::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::PolygonOffset::className() const function, expected prototype:\nconst char * osg::PolygonOffset::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PolygonOffset* self=Luna< osg::Referenced >::checkSubType< osg::PolygonOffset >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::PolygonOffset::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::PolygonOffset::getType() const
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::PolygonOffset::getType() const function, expected prototype:\nosg::StateAttribute::Type osg::PolygonOffset::getType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PolygonOffset* self=Luna< osg::Referenced >::checkSubType< osg::PolygonOffset >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::PolygonOffset::getType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::StateAttribute::Type lret = self->getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::PolygonOffset::compare(const osg::StateAttribute & sa) const
	static int _bind_compare(lua_State *L) {
		if (!_lg_typecheck_compare(L)) {
			luaL_error(L, "luna typecheck failed in int osg::PolygonOffset::compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::PolygonOffset::compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::StateAttribute* sa_ptr=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::PolygonOffset::compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::PolygonOffset* self=Luna< osg::Referenced >::checkSubType< osg::PolygonOffset >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::PolygonOffset::compare(const osg::StateAttribute &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::PolygonOffset::getModeUsage(osg::StateAttribute::ModeUsage & arg1) const
	static int _bind_getModeUsage(lua_State *L) {
		if (!_lg_typecheck_getModeUsage(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::PolygonOffset::getModeUsage(osg::StateAttribute::ModeUsage & arg1) const function, expected prototype:\nbool osg::PolygonOffset::getModeUsage(osg::StateAttribute::ModeUsage & arg1) const\nClass arguments details:\narg 1 ID = 48108040\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StateAttribute::ModeUsage* _arg1_ptr=(Luna< osg::StateAttribute::ModeUsage >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::PolygonOffset::getModeUsage function");
		}
		osg::StateAttribute::ModeUsage & _arg1=*_arg1_ptr;

		osg::PolygonOffset* self=Luna< osg::Referenced >::checkSubType< osg::PolygonOffset >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::PolygonOffset::getModeUsage(osg::StateAttribute::ModeUsage &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getModeUsage(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::PolygonOffset::setFactor(float factor)
	static int _bind_setFactor(lua_State *L) {
		if (!_lg_typecheck_setFactor(L)) {
			luaL_error(L, "luna typecheck failed in void osg::PolygonOffset::setFactor(float factor) function, expected prototype:\nvoid osg::PolygonOffset::setFactor(float factor)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float factor=(float)lua_tonumber(L,2);

		osg::PolygonOffset* self=Luna< osg::Referenced >::checkSubType< osg::PolygonOffset >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::PolygonOffset::setFactor(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setFactor(factor);

		return 0;
	}

	// float osg::PolygonOffset::getFactor() const
	static int _bind_getFactor(lua_State *L) {
		if (!_lg_typecheck_getFactor(L)) {
			luaL_error(L, "luna typecheck failed in float osg::PolygonOffset::getFactor() const function, expected prototype:\nfloat osg::PolygonOffset::getFactor() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PolygonOffset* self=Luna< osg::Referenced >::checkSubType< osg::PolygonOffset >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osg::PolygonOffset::getFactor() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getFactor();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::PolygonOffset::setUnits(float units)
	static int _bind_setUnits(lua_State *L) {
		if (!_lg_typecheck_setUnits(L)) {
			luaL_error(L, "luna typecheck failed in void osg::PolygonOffset::setUnits(float units) function, expected prototype:\nvoid osg::PolygonOffset::setUnits(float units)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float units=(float)lua_tonumber(L,2);

		osg::PolygonOffset* self=Luna< osg::Referenced >::checkSubType< osg::PolygonOffset >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::PolygonOffset::setUnits(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setUnits(units);

		return 0;
	}

	// float osg::PolygonOffset::getUnits() const
	static int _bind_getUnits(lua_State *L) {
		if (!_lg_typecheck_getUnits(L)) {
			luaL_error(L, "luna typecheck failed in float osg::PolygonOffset::getUnits() const function, expected prototype:\nfloat osg::PolygonOffset::getUnits() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PolygonOffset* self=Luna< osg::Referenced >::checkSubType< osg::PolygonOffset >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osg::PolygonOffset::getUnits() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getUnits();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::PolygonOffset::apply(osg::State & arg1) const
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luaL_error(L, "luna typecheck failed in void osg::PolygonOffset::apply(osg::State & arg1) const function, expected prototype:\nvoid osg::PolygonOffset::apply(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::PolygonOffset::apply function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::PolygonOffset* self=Luna< osg::Referenced >::checkSubType< osg::PolygonOffset >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::PolygonOffset::apply(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(_arg1);

		return 0;
	}

	// static void osg::PolygonOffset::setFactorMultiplier(float multiplier)
	static int _bind_setFactorMultiplier(lua_State *L) {
		if (!_lg_typecheck_setFactorMultiplier(L)) {
			luaL_error(L, "luna typecheck failed in static void osg::PolygonOffset::setFactorMultiplier(float multiplier) function, expected prototype:\nstatic void osg::PolygonOffset::setFactorMultiplier(float multiplier)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float multiplier=(float)lua_tonumber(L,1);

		osg::PolygonOffset::setFactorMultiplier(multiplier);

		return 0;
	}

	// static float osg::PolygonOffset::getFactorMultiplier()
	static int _bind_getFactorMultiplier(lua_State *L) {
		if (!_lg_typecheck_getFactorMultiplier(L)) {
			luaL_error(L, "luna typecheck failed in static float osg::PolygonOffset::getFactorMultiplier() function, expected prototype:\nstatic float osg::PolygonOffset::getFactorMultiplier()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		float lret = osg::PolygonOffset::getFactorMultiplier();
		lua_pushnumber(L,lret);

		return 1;
	}

	// static void osg::PolygonOffset::setUnitsMultiplier(float multiplier)
	static int _bind_setUnitsMultiplier(lua_State *L) {
		if (!_lg_typecheck_setUnitsMultiplier(L)) {
			luaL_error(L, "luna typecheck failed in static void osg::PolygonOffset::setUnitsMultiplier(float multiplier) function, expected prototype:\nstatic void osg::PolygonOffset::setUnitsMultiplier(float multiplier)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float multiplier=(float)lua_tonumber(L,1);

		osg::PolygonOffset::setUnitsMultiplier(multiplier);

		return 0;
	}

	// static float osg::PolygonOffset::getUnitsMultiplier()
	static int _bind_getUnitsMultiplier(lua_State *L) {
		if (!_lg_typecheck_getUnitsMultiplier(L)) {
			luaL_error(L, "luna typecheck failed in static float osg::PolygonOffset::getUnitsMultiplier() function, expected prototype:\nstatic float osg::PolygonOffset::getUnitsMultiplier()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		float lret = osg::PolygonOffset::getUnitsMultiplier();
		lua_pushnumber(L,lret);

		return 1;
	}

	// static bool osg::PolygonOffset::areFactorAndUnitsMultipliersSet()
	static int _bind_areFactorAndUnitsMultipliersSet(lua_State *L) {
		if (!_lg_typecheck_areFactorAndUnitsMultipliersSet(L)) {
			luaL_error(L, "luna typecheck failed in static bool osg::PolygonOffset::areFactorAndUnitsMultipliersSet() function, expected prototype:\nstatic bool osg::PolygonOffset::areFactorAndUnitsMultipliersSet()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		bool lret = osg::PolygonOffset::areFactorAndUnitsMultipliersSet();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static void osg::PolygonOffset::setFactorAndUnitsMultipliersUsingBestGuessForDriver()
	static int _bind_setFactorAndUnitsMultipliersUsingBestGuessForDriver(lua_State *L) {
		if (!_lg_typecheck_setFactorAndUnitsMultipliersUsingBestGuessForDriver(L)) {
			luaL_error(L, "luna typecheck failed in static void osg::PolygonOffset::setFactorAndUnitsMultipliersUsingBestGuessForDriver() function, expected prototype:\nstatic void osg::PolygonOffset::setFactorAndUnitsMultipliersUsingBestGuessForDriver()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PolygonOffset::setFactorAndUnitsMultipliersUsingBestGuessForDriver();

		return 0;
	}

	// void osg::PolygonOffset::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::PolygonOffset::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::PolygonOffset::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::PolygonOffset* self=Luna< osg::Referenced >::checkSubType< osg::PolygonOffset >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::PolygonOffset::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PolygonOffset::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::PolygonOffset::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::PolygonOffset::base_setName(const std::string & name) function, expected prototype:\nvoid osg::PolygonOffset::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::PolygonOffset* self=Luna< osg::Referenced >::checkSubType< osg::PolygonOffset >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::PolygonOffset::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PolygonOffset::setName(name);

		return 0;
	}

	// void osg::PolygonOffset::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::PolygonOffset::base_computeDataVariance() function, expected prototype:\nvoid osg::PolygonOffset::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PolygonOffset* self=Luna< osg::Referenced >::checkSubType< osg::PolygonOffset >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::PolygonOffset::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PolygonOffset::computeDataVariance();

		return 0;
	}

	// void osg::PolygonOffset::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::PolygonOffset::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::PolygonOffset::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::PolygonOffset* self=Luna< osg::Referenced >::checkSubType< osg::PolygonOffset >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::PolygonOffset::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PolygonOffset::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::PolygonOffset::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::PolygonOffset::base_getUserData() function, expected prototype:\nosg::Referenced * osg::PolygonOffset::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PolygonOffset* self=Luna< osg::Referenced >::checkSubType< osg::PolygonOffset >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::PolygonOffset::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->PolygonOffset::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::PolygonOffset::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::PolygonOffset::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::PolygonOffset::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PolygonOffset* self=Luna< osg::Referenced >::checkSubType< osg::PolygonOffset >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::PolygonOffset::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->PolygonOffset::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::PolygonOffset::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// osg::Texture * osg::PolygonOffset::base_asTexture()
	static int _bind_base_asTexture_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asTexture_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Texture * osg::PolygonOffset::base_asTexture() function, expected prototype:\nosg::Texture * osg::PolygonOffset::base_asTexture()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PolygonOffset* self=Luna< osg::Referenced >::checkSubType< osg::PolygonOffset >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Texture * osg::PolygonOffset::base_asTexture(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Texture * lret = self->PolygonOffset::asTexture();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture >::push(L,lret,false);

		return 1;
	}

	// const osg::Texture * osg::PolygonOffset::base_asTexture() const
	static int _bind_base_asTexture_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asTexture_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Texture * osg::PolygonOffset::base_asTexture() const function, expected prototype:\nconst osg::Texture * osg::PolygonOffset::base_asTexture() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PolygonOffset* self=Luna< osg::Referenced >::checkSubType< osg::PolygonOffset >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Texture * osg::PolygonOffset::base_asTexture() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Texture * lret = self->PolygonOffset::asTexture();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::PolygonOffset::base_asTexture
	static int _bind_base_asTexture(lua_State *L) {
		if (_lg_typecheck_base_asTexture_overload_1(L)) return _bind_base_asTexture_overload_1(L);
		if (_lg_typecheck_base_asTexture_overload_2(L)) return _bind_base_asTexture_overload_2(L);

		luaL_error(L, "error in function base_asTexture, cannot match any of the overloads for function base_asTexture:\n  base_asTexture()\n  base_asTexture()\n");
		return 0;
	}

	// unsigned int osg::PolygonOffset::base_getMember() const
	static int _bind_base_getMember(lua_State *L) {
		if (!_lg_typecheck_base_getMember(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::PolygonOffset::base_getMember() const function, expected prototype:\nunsigned int osg::PolygonOffset::base_getMember() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PolygonOffset* self=Luna< osg::Referenced >::checkSubType< osg::PolygonOffset >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::PolygonOffset::base_getMember() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->PolygonOffset::getMember();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::PolygonOffset::base_isTextureAttribute() const
	static int _bind_base_isTextureAttribute(lua_State *L) {
		if (!_lg_typecheck_base_isTextureAttribute(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::PolygonOffset::base_isTextureAttribute() const function, expected prototype:\nbool osg::PolygonOffset::base_isTextureAttribute() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PolygonOffset* self=Luna< osg::Referenced >::checkSubType< osg::PolygonOffset >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::PolygonOffset::base_isTextureAttribute() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->PolygonOffset::isTextureAttribute();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::PolygonOffset::base_checkValidityOfAssociatedModes(osg::State & arg1) const
	static int _bind_base_checkValidityOfAssociatedModes(lua_State *L) {
		if (!_lg_typecheck_base_checkValidityOfAssociatedModes(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::PolygonOffset::base_checkValidityOfAssociatedModes(osg::State & arg1) const function, expected prototype:\nbool osg::PolygonOffset::base_checkValidityOfAssociatedModes(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::PolygonOffset::base_checkValidityOfAssociatedModes function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::PolygonOffset* self=Luna< osg::Referenced >::checkSubType< osg::PolygonOffset >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::PolygonOffset::base_checkValidityOfAssociatedModes(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->PolygonOffset::checkValidityOfAssociatedModes(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::PolygonOffset::base_compileGLObjects(osg::State & arg1) const
	static int _bind_base_compileGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_compileGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::PolygonOffset::base_compileGLObjects(osg::State & arg1) const function, expected prototype:\nvoid osg::PolygonOffset::base_compileGLObjects(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::PolygonOffset::base_compileGLObjects function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::PolygonOffset* self=Luna< osg::Referenced >::checkSubType< osg::PolygonOffset >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::PolygonOffset::base_compileGLObjects(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PolygonOffset::compileGLObjects(_arg1);

		return 0;
	}

	// void osg::PolygonOffset::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::PolygonOffset::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::PolygonOffset::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::PolygonOffset* self=Luna< osg::Referenced >::checkSubType< osg::PolygonOffset >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::PolygonOffset::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PolygonOffset::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osg::PolygonOffset::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::PolygonOffset::base_cloneType() const function, expected prototype:\nosg::Object * osg::PolygonOffset::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PolygonOffset* self=Luna< osg::Referenced >::checkSubType< osg::PolygonOffset >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::PolygonOffset::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->PolygonOffset::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::PolygonOffset::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::PolygonOffset::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::PolygonOffset::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::PolygonOffset::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::PolygonOffset* self=Luna< osg::Referenced >::checkSubType< osg::PolygonOffset >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::PolygonOffset::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->PolygonOffset::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::PolygonOffset::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::PolygonOffset::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::PolygonOffset::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::PolygonOffset* self=Luna< osg::Referenced >::checkSubType< osg::PolygonOffset >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::PolygonOffset::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->PolygonOffset::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::PolygonOffset::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::PolygonOffset::base_libraryName() const function, expected prototype:\nconst char * osg::PolygonOffset::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PolygonOffset* self=Luna< osg::Referenced >::checkSubType< osg::PolygonOffset >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::PolygonOffset::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->PolygonOffset::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::PolygonOffset::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::PolygonOffset::base_className() const function, expected prototype:\nconst char * osg::PolygonOffset::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PolygonOffset* self=Luna< osg::Referenced >::checkSubType< osg::PolygonOffset >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::PolygonOffset::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->PolygonOffset::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::PolygonOffset::base_getType() const
	static int _bind_base_getType(lua_State *L) {
		if (!_lg_typecheck_base_getType(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::PolygonOffset::base_getType() const function, expected prototype:\nosg::StateAttribute::Type osg::PolygonOffset::base_getType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::PolygonOffset* self=Luna< osg::Referenced >::checkSubType< osg::PolygonOffset >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::PolygonOffset::base_getType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::StateAttribute::Type lret = self->PolygonOffset::getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::PolygonOffset::base_compare(const osg::StateAttribute & sa) const
	static int _bind_base_compare(lua_State *L) {
		if (!_lg_typecheck_base_compare(L)) {
			luaL_error(L, "luna typecheck failed in int osg::PolygonOffset::base_compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::PolygonOffset::base_compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::StateAttribute* sa_ptr=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::PolygonOffset::base_compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::PolygonOffset* self=Luna< osg::Referenced >::checkSubType< osg::PolygonOffset >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::PolygonOffset::base_compare(const osg::StateAttribute &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->PolygonOffset::compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::PolygonOffset::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const
	static int _bind_base_getModeUsage(lua_State *L) {
		if (!_lg_typecheck_base_getModeUsage(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::PolygonOffset::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const function, expected prototype:\nbool osg::PolygonOffset::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const\nClass arguments details:\narg 1 ID = 48108040\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StateAttribute::ModeUsage* _arg1_ptr=(Luna< osg::StateAttribute::ModeUsage >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::PolygonOffset::base_getModeUsage function");
		}
		osg::StateAttribute::ModeUsage & _arg1=*_arg1_ptr;

		osg::PolygonOffset* self=Luna< osg::Referenced >::checkSubType< osg::PolygonOffset >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::PolygonOffset::base_getModeUsage(osg::StateAttribute::ModeUsage &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->PolygonOffset::getModeUsage(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::PolygonOffset::base_apply(osg::State & arg1) const
	static int _bind_base_apply(lua_State *L) {
		if (!_lg_typecheck_base_apply(L)) {
			luaL_error(L, "luna typecheck failed in void osg::PolygonOffset::base_apply(osg::State & arg1) const function, expected prototype:\nvoid osg::PolygonOffset::base_apply(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::PolygonOffset::base_apply function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::PolygonOffset* self=Luna< osg::Referenced >::checkSubType< osg::PolygonOffset >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::PolygonOffset::base_apply(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PolygonOffset::apply(_arg1);

		return 0;
	}


	// Operator binds:

};

osg::PolygonOffset* LunaTraits< osg::PolygonOffset >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_PolygonOffset::_bind_ctor(L);
}

void LunaTraits< osg::PolygonOffset >::_bind_dtor(osg::PolygonOffset* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::PolygonOffset >::className[] = "PolygonOffset";
const char LunaTraits< osg::PolygonOffset >::fullName[] = "osg::PolygonOffset";
const char LunaTraits< osg::PolygonOffset >::moduleName[] = "osg";
const char* LunaTraits< osg::PolygonOffset >::parents[] = {"osg.StateAttribute", 0};
const int LunaTraits< osg::PolygonOffset >::hash = 56254867;
const int LunaTraits< osg::PolygonOffset >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::PolygonOffset >::methods[] = {
	{"cloneType", &luna_wrapper_osg_PolygonOffset::_bind_cloneType},
	{"clone", &luna_wrapper_osg_PolygonOffset::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_PolygonOffset::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_PolygonOffset::_bind_libraryName},
	{"className", &luna_wrapper_osg_PolygonOffset::_bind_className},
	{"getType", &luna_wrapper_osg_PolygonOffset::_bind_getType},
	{"compare", &luna_wrapper_osg_PolygonOffset::_bind_compare},
	{"getModeUsage", &luna_wrapper_osg_PolygonOffset::_bind_getModeUsage},
	{"setFactor", &luna_wrapper_osg_PolygonOffset::_bind_setFactor},
	{"getFactor", &luna_wrapper_osg_PolygonOffset::_bind_getFactor},
	{"setUnits", &luna_wrapper_osg_PolygonOffset::_bind_setUnits},
	{"getUnits", &luna_wrapper_osg_PolygonOffset::_bind_getUnits},
	{"apply", &luna_wrapper_osg_PolygonOffset::_bind_apply},
	{"setFactorMultiplier", &luna_wrapper_osg_PolygonOffset::_bind_setFactorMultiplier},
	{"getFactorMultiplier", &luna_wrapper_osg_PolygonOffset::_bind_getFactorMultiplier},
	{"setUnitsMultiplier", &luna_wrapper_osg_PolygonOffset::_bind_setUnitsMultiplier},
	{"getUnitsMultiplier", &luna_wrapper_osg_PolygonOffset::_bind_getUnitsMultiplier},
	{"areFactorAndUnitsMultipliersSet", &luna_wrapper_osg_PolygonOffset::_bind_areFactorAndUnitsMultipliersSet},
	{"setFactorAndUnitsMultipliersUsingBestGuessForDriver", &luna_wrapper_osg_PolygonOffset::_bind_setFactorAndUnitsMultipliersUsingBestGuessForDriver},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_PolygonOffset::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osg_PolygonOffset::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_PolygonOffset::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_PolygonOffset::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_PolygonOffset::_bind_base_getUserData},
	{"base_asTexture", &luna_wrapper_osg_PolygonOffset::_bind_base_asTexture},
	{"base_getMember", &luna_wrapper_osg_PolygonOffset::_bind_base_getMember},
	{"base_isTextureAttribute", &luna_wrapper_osg_PolygonOffset::_bind_base_isTextureAttribute},
	{"base_checkValidityOfAssociatedModes", &luna_wrapper_osg_PolygonOffset::_bind_base_checkValidityOfAssociatedModes},
	{"base_compileGLObjects", &luna_wrapper_osg_PolygonOffset::_bind_base_compileGLObjects},
	{"base_releaseGLObjects", &luna_wrapper_osg_PolygonOffset::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osg_PolygonOffset::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_PolygonOffset::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_PolygonOffset::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_PolygonOffset::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_PolygonOffset::_bind_base_className},
	{"base_getType", &luna_wrapper_osg_PolygonOffset::_bind_base_getType},
	{"base_compare", &luna_wrapper_osg_PolygonOffset::_bind_base_compare},
	{"base_getModeUsage", &luna_wrapper_osg_PolygonOffset::_bind_base_getModeUsage},
	{"base_apply", &luna_wrapper_osg_PolygonOffset::_bind_base_apply},
	{"fromVoid", &luna_wrapper_osg_PolygonOffset::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_PolygonOffset::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_PolygonOffset::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::PolygonOffset >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_PolygonOffset::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::PolygonOffset >::enumValues[] = {
	{0,0}
};



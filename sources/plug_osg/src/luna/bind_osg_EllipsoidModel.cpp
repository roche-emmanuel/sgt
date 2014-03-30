#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_EllipsoidModel.h>

class luna_wrapper_osg_EllipsoidModel {
public:
	typedef Luna< osg::EllipsoidModel > luna_t;

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

		osg::EllipsoidModel* self= (osg::EllipsoidModel*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::EllipsoidModel >::push(L,self,false);
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
		//osg::EllipsoidModel* ptr= dynamic_cast< osg::EllipsoidModel* >(Luna< osg::Referenced >::check(L,1));
		osg::EllipsoidModel* ptr= luna_caster< osg::Referenced, osg::EllipsoidModel >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::EllipsoidModel >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>2 ) return false;

		if( luatop>0 && lua_type(L,1)!=LUA_TNUMBER ) return false;
		if( luatop>1 && lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::EllipsoidModel >(L,1))) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( luatop>1 && (!(Luna< osg::CopyOp >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::EllipsoidModel >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_setRadiusEquator(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRadiusEquator(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setRadiusPolar(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRadiusPolar(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_convertLatLongHeightToXYZ(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( lua_type(L,6)!=LUA_TNUMBER ) return false;
		if( lua_type(L,7)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_convertXYZToLatLongHeight(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( lua_type(L,6)!=LUA_TNUMBER ) return false;
		if( lua_type(L,7)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_computeLocalToWorldTransformFromLatLongHeight(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,5,18903838) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_computeLocalToWorldTransformFromXYZ(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,5,18903838) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_computeCoordinateFrame(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,4,18903838) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_computeLocalUpVector(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isWGS84(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::EllipsoidModel::EllipsoidModel(double radiusEquator = osg::WGS_84_RADIUS_EQUATOR, double radiusPolar = osg::WGS_84_RADIUS_POLAR)
	static osg::EllipsoidModel* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::EllipsoidModel::EllipsoidModel(double radiusEquator = osg::WGS_84_RADIUS_EQUATOR, double radiusPolar = osg::WGS_84_RADIUS_POLAR) function, expected prototype:\nosg::EllipsoidModel::EllipsoidModel(double radiusEquator = osg::WGS_84_RADIUS_EQUATOR, double radiusPolar = osg::WGS_84_RADIUS_POLAR)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		double radiusEquator=luatop>0 ? (double)lua_tonumber(L,1) : (double)osg::WGS_84_RADIUS_EQUATOR;
		double radiusPolar=luatop>1 ? (double)lua_tonumber(L,2) : (double)osg::WGS_84_RADIUS_POLAR;

		return new osg::EllipsoidModel(radiusEquator, radiusPolar);
	}

	// osg::EllipsoidModel::EllipsoidModel(const osg::EllipsoidModel & et, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::EllipsoidModel* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::EllipsoidModel::EllipsoidModel(const osg::EllipsoidModel & et, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::EllipsoidModel::EllipsoidModel(const osg::EllipsoidModel & et, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::EllipsoidModel* et_ptr=(Luna< osg::Referenced >::checkSubType< osg::EllipsoidModel >(L,1));
		if( !et_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg et in osg::EllipsoidModel::EllipsoidModel function");
		}
		const osg::EllipsoidModel & et=*et_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::EllipsoidModel::EllipsoidModel function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osg::EllipsoidModel(et, copyop);
	}

	// osg::EllipsoidModel::EllipsoidModel(lua_Table * data, double radiusEquator = osg::WGS_84_RADIUS_EQUATOR, double radiusPolar = osg::WGS_84_RADIUS_POLAR)
	static osg::EllipsoidModel* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::EllipsoidModel::EllipsoidModel(lua_Table * data, double radiusEquator = osg::WGS_84_RADIUS_EQUATOR, double radiusPolar = osg::WGS_84_RADIUS_POLAR) function, expected prototype:\nosg::EllipsoidModel::EllipsoidModel(lua_Table * data, double radiusEquator = osg::WGS_84_RADIUS_EQUATOR, double radiusPolar = osg::WGS_84_RADIUS_POLAR)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		double radiusEquator=luatop>1 ? (double)lua_tonumber(L,2) : (double)osg::WGS_84_RADIUS_EQUATOR;
		double radiusPolar=luatop>2 ? (double)lua_tonumber(L,3) : (double)osg::WGS_84_RADIUS_POLAR;

		return new wrapper_osg_EllipsoidModel(L,NULL, radiusEquator, radiusPolar);
	}

	// osg::EllipsoidModel::EllipsoidModel(lua_Table * data, const osg::EllipsoidModel & et, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::EllipsoidModel* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::EllipsoidModel::EllipsoidModel(lua_Table * data, const osg::EllipsoidModel & et, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::EllipsoidModel::EllipsoidModel(lua_Table * data, const osg::EllipsoidModel & et, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::EllipsoidModel* et_ptr=(Luna< osg::Referenced >::checkSubType< osg::EllipsoidModel >(L,2));
		if( !et_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg et in osg::EllipsoidModel::EllipsoidModel function");
		}
		const osg::EllipsoidModel & et=*et_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::EllipsoidModel::EllipsoidModel function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_EllipsoidModel(L,NULL, et, copyop);
	}

	// Overload binder for osg::EllipsoidModel::EllipsoidModel
	static osg::EllipsoidModel* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function EllipsoidModel, cannot match any of the overloads for function EllipsoidModel:\n  EllipsoidModel(double, double)\n  EllipsoidModel(const osg::EllipsoidModel &, const osg::CopyOp &)\n  EllipsoidModel(lua_Table *, double, double)\n  EllipsoidModel(lua_Table *, const osg::EllipsoidModel &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::EllipsoidModel::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::EllipsoidModel::cloneType() const function, expected prototype:\nosg::Object * osg::EllipsoidModel::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::EllipsoidModel* self=Luna< osg::Referenced >::checkSubType< osg::EllipsoidModel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::EllipsoidModel::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::EllipsoidModel::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::EllipsoidModel::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::EllipsoidModel::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::EllipsoidModel::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::EllipsoidModel* self=Luna< osg::Referenced >::checkSubType< osg::EllipsoidModel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::EllipsoidModel::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::EllipsoidModel::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::EllipsoidModel::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::EllipsoidModel::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::EllipsoidModel* self=Luna< osg::Referenced >::checkSubType< osg::EllipsoidModel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::EllipsoidModel::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::EllipsoidModel::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::EllipsoidModel::libraryName() const function, expected prototype:\nconst char * osg::EllipsoidModel::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::EllipsoidModel* self=Luna< osg::Referenced >::checkSubType< osg::EllipsoidModel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::EllipsoidModel::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::EllipsoidModel::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::EllipsoidModel::className() const function, expected prototype:\nconst char * osg::EllipsoidModel::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::EllipsoidModel* self=Luna< osg::Referenced >::checkSubType< osg::EllipsoidModel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::EllipsoidModel::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::EllipsoidModel::setRadiusEquator(double radius)
	static int _bind_setRadiusEquator(lua_State *L) {
		if (!_lg_typecheck_setRadiusEquator(L)) {
			luaL_error(L, "luna typecheck failed in void osg::EllipsoidModel::setRadiusEquator(double radius) function, expected prototype:\nvoid osg::EllipsoidModel::setRadiusEquator(double radius)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double radius=(double)lua_tonumber(L,2);

		osg::EllipsoidModel* self=Luna< osg::Referenced >::checkSubType< osg::EllipsoidModel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::EllipsoidModel::setRadiusEquator(double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setRadiusEquator(radius);

		return 0;
	}

	// double osg::EllipsoidModel::getRadiusEquator() const
	static int _bind_getRadiusEquator(lua_State *L) {
		if (!_lg_typecheck_getRadiusEquator(L)) {
			luaL_error(L, "luna typecheck failed in double osg::EllipsoidModel::getRadiusEquator() const function, expected prototype:\ndouble osg::EllipsoidModel::getRadiusEquator() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::EllipsoidModel* self=Luna< osg::Referenced >::checkSubType< osg::EllipsoidModel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double osg::EllipsoidModel::getRadiusEquator() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getRadiusEquator();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::EllipsoidModel::setRadiusPolar(double radius)
	static int _bind_setRadiusPolar(lua_State *L) {
		if (!_lg_typecheck_setRadiusPolar(L)) {
			luaL_error(L, "luna typecheck failed in void osg::EllipsoidModel::setRadiusPolar(double radius) function, expected prototype:\nvoid osg::EllipsoidModel::setRadiusPolar(double radius)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double radius=(double)lua_tonumber(L,2);

		osg::EllipsoidModel* self=Luna< osg::Referenced >::checkSubType< osg::EllipsoidModel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::EllipsoidModel::setRadiusPolar(double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setRadiusPolar(radius);

		return 0;
	}

	// double osg::EllipsoidModel::getRadiusPolar() const
	static int _bind_getRadiusPolar(lua_State *L) {
		if (!_lg_typecheck_getRadiusPolar(L)) {
			luaL_error(L, "luna typecheck failed in double osg::EllipsoidModel::getRadiusPolar() const function, expected prototype:\ndouble osg::EllipsoidModel::getRadiusPolar() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::EllipsoidModel* self=Luna< osg::Referenced >::checkSubType< osg::EllipsoidModel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double osg::EllipsoidModel::getRadiusPolar() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getRadiusPolar();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::EllipsoidModel::convertLatLongHeightToXYZ(double latitude, double longitude, double height, double & X, double & Y, double & Z) const
	static int _bind_convertLatLongHeightToXYZ(lua_State *L) {
		if (!_lg_typecheck_convertLatLongHeightToXYZ(L)) {
			luaL_error(L, "luna typecheck failed in void osg::EllipsoidModel::convertLatLongHeightToXYZ(double latitude, double longitude, double height, double & X, double & Y, double & Z) const function, expected prototype:\nvoid osg::EllipsoidModel::convertLatLongHeightToXYZ(double latitude, double longitude, double height, double & X, double & Y, double & Z) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double latitude=(double)lua_tonumber(L,2);
		double longitude=(double)lua_tonumber(L,3);
		double height=(double)lua_tonumber(L,4);
		double X=(double)lua_tonumber(L,5);
		double Y=(double)lua_tonumber(L,6);
		double Z=(double)lua_tonumber(L,7);

		osg::EllipsoidModel* self=Luna< osg::Referenced >::checkSubType< osg::EllipsoidModel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::EllipsoidModel::convertLatLongHeightToXYZ(double, double, double, double &, double &, double &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->convertLatLongHeightToXYZ(latitude, longitude, height, X, Y, Z);

		lua_pushnumber(L,X);
		lua_pushnumber(L,Y);
		lua_pushnumber(L,Z);
		return 3;
	}

	// void osg::EllipsoidModel::convertXYZToLatLongHeight(double X, double Y, double Z, double & latitude, double & longitude, double & height) const
	static int _bind_convertXYZToLatLongHeight(lua_State *L) {
		if (!_lg_typecheck_convertXYZToLatLongHeight(L)) {
			luaL_error(L, "luna typecheck failed in void osg::EllipsoidModel::convertXYZToLatLongHeight(double X, double Y, double Z, double & latitude, double & longitude, double & height) const function, expected prototype:\nvoid osg::EllipsoidModel::convertXYZToLatLongHeight(double X, double Y, double Z, double & latitude, double & longitude, double & height) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double X=(double)lua_tonumber(L,2);
		double Y=(double)lua_tonumber(L,3);
		double Z=(double)lua_tonumber(L,4);
		double latitude=(double)lua_tonumber(L,5);
		double longitude=(double)lua_tonumber(L,6);
		double height=(double)lua_tonumber(L,7);

		osg::EllipsoidModel* self=Luna< osg::Referenced >::checkSubType< osg::EllipsoidModel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::EllipsoidModel::convertXYZToLatLongHeight(double, double, double, double &, double &, double &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->convertXYZToLatLongHeight(X, Y, Z, latitude, longitude, height);

		lua_pushnumber(L,latitude);
		lua_pushnumber(L,longitude);
		lua_pushnumber(L,height);
		return 3;
	}

	// void osg::EllipsoidModel::computeLocalToWorldTransformFromLatLongHeight(double latitude, double longitude, double height, osg::Matrixd & localToWorld) const
	static int _bind_computeLocalToWorldTransformFromLatLongHeight(lua_State *L) {
		if (!_lg_typecheck_computeLocalToWorldTransformFromLatLongHeight(L)) {
			luaL_error(L, "luna typecheck failed in void osg::EllipsoidModel::computeLocalToWorldTransformFromLatLongHeight(double latitude, double longitude, double height, osg::Matrixd & localToWorld) const function, expected prototype:\nvoid osg::EllipsoidModel::computeLocalToWorldTransformFromLatLongHeight(double latitude, double longitude, double height, osg::Matrixd & localToWorld) const\nClass arguments details:\narg 4 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		double latitude=(double)lua_tonumber(L,2);
		double longitude=(double)lua_tonumber(L,3);
		double height=(double)lua_tonumber(L,4);
		osg::Matrixd* localToWorld_ptr=(Luna< osg::Matrixd >::check(L,5));
		if( !localToWorld_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg localToWorld in osg::EllipsoidModel::computeLocalToWorldTransformFromLatLongHeight function");
		}
		osg::Matrixd & localToWorld=*localToWorld_ptr;

		osg::EllipsoidModel* self=Luna< osg::Referenced >::checkSubType< osg::EllipsoidModel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::EllipsoidModel::computeLocalToWorldTransformFromLatLongHeight(double, double, double, osg::Matrixd &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->computeLocalToWorldTransformFromLatLongHeight(latitude, longitude, height, localToWorld);

		return 0;
	}

	// void osg::EllipsoidModel::computeLocalToWorldTransformFromXYZ(double X, double Y, double Z, osg::Matrixd & localToWorld) const
	static int _bind_computeLocalToWorldTransformFromXYZ(lua_State *L) {
		if (!_lg_typecheck_computeLocalToWorldTransformFromXYZ(L)) {
			luaL_error(L, "luna typecheck failed in void osg::EllipsoidModel::computeLocalToWorldTransformFromXYZ(double X, double Y, double Z, osg::Matrixd & localToWorld) const function, expected prototype:\nvoid osg::EllipsoidModel::computeLocalToWorldTransformFromXYZ(double X, double Y, double Z, osg::Matrixd & localToWorld) const\nClass arguments details:\narg 4 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		double X=(double)lua_tonumber(L,2);
		double Y=(double)lua_tonumber(L,3);
		double Z=(double)lua_tonumber(L,4);
		osg::Matrixd* localToWorld_ptr=(Luna< osg::Matrixd >::check(L,5));
		if( !localToWorld_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg localToWorld in osg::EllipsoidModel::computeLocalToWorldTransformFromXYZ function");
		}
		osg::Matrixd & localToWorld=*localToWorld_ptr;

		osg::EllipsoidModel* self=Luna< osg::Referenced >::checkSubType< osg::EllipsoidModel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::EllipsoidModel::computeLocalToWorldTransformFromXYZ(double, double, double, osg::Matrixd &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->computeLocalToWorldTransformFromXYZ(X, Y, Z, localToWorld);

		return 0;
	}

	// void osg::EllipsoidModel::computeCoordinateFrame(double latitude, double longitude, osg::Matrixd & localToWorld) const
	static int _bind_computeCoordinateFrame(lua_State *L) {
		if (!_lg_typecheck_computeCoordinateFrame(L)) {
			luaL_error(L, "luna typecheck failed in void osg::EllipsoidModel::computeCoordinateFrame(double latitude, double longitude, osg::Matrixd & localToWorld) const function, expected prototype:\nvoid osg::EllipsoidModel::computeCoordinateFrame(double latitude, double longitude, osg::Matrixd & localToWorld) const\nClass arguments details:\narg 3 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		double latitude=(double)lua_tonumber(L,2);
		double longitude=(double)lua_tonumber(L,3);
		osg::Matrixd* localToWorld_ptr=(Luna< osg::Matrixd >::check(L,4));
		if( !localToWorld_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg localToWorld in osg::EllipsoidModel::computeCoordinateFrame function");
		}
		osg::Matrixd & localToWorld=*localToWorld_ptr;

		osg::EllipsoidModel* self=Luna< osg::Referenced >::checkSubType< osg::EllipsoidModel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::EllipsoidModel::computeCoordinateFrame(double, double, osg::Matrixd &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->computeCoordinateFrame(latitude, longitude, localToWorld);

		return 0;
	}

	// osg::Vec3d osg::EllipsoidModel::computeLocalUpVector(double X, double Y, double Z) const
	static int _bind_computeLocalUpVector(lua_State *L) {
		if (!_lg_typecheck_computeLocalUpVector(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3d osg::EllipsoidModel::computeLocalUpVector(double X, double Y, double Z) const function, expected prototype:\nosg::Vec3d osg::EllipsoidModel::computeLocalUpVector(double X, double Y, double Z) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double X=(double)lua_tonumber(L,2);
		double Y=(double)lua_tonumber(L,3);
		double Z=(double)lua_tonumber(L,4);

		osg::EllipsoidModel* self=Luna< osg::Referenced >::checkSubType< osg::EllipsoidModel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3d osg::EllipsoidModel::computeLocalUpVector(double, double, double) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec3d stack_lret = self->computeLocalUpVector(X, Y, Z);
		osg::Vec3d* lret = new osg::Vec3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3d >::push(L,lret,true);

		return 1;
	}

	// bool osg::EllipsoidModel::isWGS84() const
	static int _bind_isWGS84(lua_State *L) {
		if (!_lg_typecheck_isWGS84(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::EllipsoidModel::isWGS84() const function, expected prototype:\nbool osg::EllipsoidModel::isWGS84() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::EllipsoidModel* self=Luna< osg::Referenced >::checkSubType< osg::EllipsoidModel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::EllipsoidModel::isWGS84() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isWGS84();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::EllipsoidModel::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::EllipsoidModel::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::EllipsoidModel::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::EllipsoidModel* self=Luna< osg::Referenced >::checkSubType< osg::EllipsoidModel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::EllipsoidModel::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EllipsoidModel::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::EllipsoidModel::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::EllipsoidModel::base_setName(const std::string & name) function, expected prototype:\nvoid osg::EllipsoidModel::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::EllipsoidModel* self=Luna< osg::Referenced >::checkSubType< osg::EllipsoidModel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::EllipsoidModel::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EllipsoidModel::setName(name);

		return 0;
	}

	// void osg::EllipsoidModel::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::EllipsoidModel::base_computeDataVariance() function, expected prototype:\nvoid osg::EllipsoidModel::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::EllipsoidModel* self=Luna< osg::Referenced >::checkSubType< osg::EllipsoidModel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::EllipsoidModel::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EllipsoidModel::computeDataVariance();

		return 0;
	}

	// void osg::EllipsoidModel::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::EllipsoidModel::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::EllipsoidModel::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::EllipsoidModel* self=Luna< osg::Referenced >::checkSubType< osg::EllipsoidModel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::EllipsoidModel::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EllipsoidModel::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::EllipsoidModel::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::EllipsoidModel::base_getUserData() function, expected prototype:\nosg::Referenced * osg::EllipsoidModel::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::EllipsoidModel* self=Luna< osg::Referenced >::checkSubType< osg::EllipsoidModel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::EllipsoidModel::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->EllipsoidModel::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::EllipsoidModel::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::EllipsoidModel::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::EllipsoidModel::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::EllipsoidModel* self=Luna< osg::Referenced >::checkSubType< osg::EllipsoidModel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::EllipsoidModel::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->EllipsoidModel::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::EllipsoidModel::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osg::EllipsoidModel::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::EllipsoidModel::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::EllipsoidModel::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::EllipsoidModel* self=Luna< osg::Referenced >::checkSubType< osg::EllipsoidModel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::EllipsoidModel::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EllipsoidModel::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osg::EllipsoidModel::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::EllipsoidModel::base_cloneType() const function, expected prototype:\nosg::Object * osg::EllipsoidModel::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::EllipsoidModel* self=Luna< osg::Referenced >::checkSubType< osg::EllipsoidModel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::EllipsoidModel::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->EllipsoidModel::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::EllipsoidModel::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::EllipsoidModel::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::EllipsoidModel::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::EllipsoidModel::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::EllipsoidModel* self=Luna< osg::Referenced >::checkSubType< osg::EllipsoidModel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::EllipsoidModel::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->EllipsoidModel::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::EllipsoidModel::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::EllipsoidModel::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::EllipsoidModel::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::EllipsoidModel* self=Luna< osg::Referenced >::checkSubType< osg::EllipsoidModel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::EllipsoidModel::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->EllipsoidModel::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::EllipsoidModel::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::EllipsoidModel::base_libraryName() const function, expected prototype:\nconst char * osg::EllipsoidModel::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::EllipsoidModel* self=Luna< osg::Referenced >::checkSubType< osg::EllipsoidModel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::EllipsoidModel::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->EllipsoidModel::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::EllipsoidModel::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::EllipsoidModel::base_className() const function, expected prototype:\nconst char * osg::EllipsoidModel::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::EllipsoidModel* self=Luna< osg::Referenced >::checkSubType< osg::EllipsoidModel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::EllipsoidModel::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->EllipsoidModel::className();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

osg::EllipsoidModel* LunaTraits< osg::EllipsoidModel >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_EllipsoidModel::_bind_ctor(L);
}

void LunaTraits< osg::EllipsoidModel >::_bind_dtor(osg::EllipsoidModel* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::EllipsoidModel >::className[] = "EllipsoidModel";
const char LunaTraits< osg::EllipsoidModel >::fullName[] = "osg::EllipsoidModel";
const char LunaTraits< osg::EllipsoidModel >::moduleName[] = "osg";
const char* LunaTraits< osg::EllipsoidModel >::parents[] = {"osg.Object", 0};
const int LunaTraits< osg::EllipsoidModel >::hash = 38271934;
const int LunaTraits< osg::EllipsoidModel >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::EllipsoidModel >::methods[] = {
	{"cloneType", &luna_wrapper_osg_EllipsoidModel::_bind_cloneType},
	{"clone", &luna_wrapper_osg_EllipsoidModel::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_EllipsoidModel::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_EllipsoidModel::_bind_libraryName},
	{"className", &luna_wrapper_osg_EllipsoidModel::_bind_className},
	{"setRadiusEquator", &luna_wrapper_osg_EllipsoidModel::_bind_setRadiusEquator},
	{"getRadiusEquator", &luna_wrapper_osg_EllipsoidModel::_bind_getRadiusEquator},
	{"setRadiusPolar", &luna_wrapper_osg_EllipsoidModel::_bind_setRadiusPolar},
	{"getRadiusPolar", &luna_wrapper_osg_EllipsoidModel::_bind_getRadiusPolar},
	{"convertLatLongHeightToXYZ", &luna_wrapper_osg_EllipsoidModel::_bind_convertLatLongHeightToXYZ},
	{"convertXYZToLatLongHeight", &luna_wrapper_osg_EllipsoidModel::_bind_convertXYZToLatLongHeight},
	{"computeLocalToWorldTransformFromLatLongHeight", &luna_wrapper_osg_EllipsoidModel::_bind_computeLocalToWorldTransformFromLatLongHeight},
	{"computeLocalToWorldTransformFromXYZ", &luna_wrapper_osg_EllipsoidModel::_bind_computeLocalToWorldTransformFromXYZ},
	{"computeCoordinateFrame", &luna_wrapper_osg_EllipsoidModel::_bind_computeCoordinateFrame},
	{"computeLocalUpVector", &luna_wrapper_osg_EllipsoidModel::_bind_computeLocalUpVector},
	{"isWGS84", &luna_wrapper_osg_EllipsoidModel::_bind_isWGS84},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_EllipsoidModel::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osg_EllipsoidModel::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_EllipsoidModel::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_EllipsoidModel::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_EllipsoidModel::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osg_EllipsoidModel::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osg_EllipsoidModel::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_EllipsoidModel::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_EllipsoidModel::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_EllipsoidModel::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_EllipsoidModel::_bind_base_className},
	{"fromVoid", &luna_wrapper_osg_EllipsoidModel::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_EllipsoidModel::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_EllipsoidModel::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::EllipsoidModel >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_EllipsoidModel::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::EllipsoidModel >::enumValues[] = {
	{0,0}
};



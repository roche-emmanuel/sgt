#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_LightModel.h>

class luna_wrapper_osg_LightModel {
public:
	typedef Luna< osg::LightModel > luna_t;

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

		osg::LightModel* self= (osg::LightModel*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::LightModel >::push(L,self,false);
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
		//osg::LightModel* ptr= dynamic_cast< osg::LightModel* >(Luna< osg::Referenced >::check(L,1));
		osg::LightModel* ptr= luna_caster< osg::Referenced, osg::LightModel >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::LightModel >::push(L,ptr,false);
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::LightModel >(L,1))) ) return false;
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::LightModel >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_setAmbientIntensity(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303235) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAmbientIntensity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setColorControl(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getColorControl(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setLocalViewer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getLocalViewer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTwoSided(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTwoSided(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_apply(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
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

	inline static bool _lg_typecheck_base_getModeUsage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,48108040) ) return false;
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

	inline static bool _lg_typecheck_base_apply(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::LightModel::LightModel()
	static osg::LightModel* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::LightModel::LightModel() function, expected prototype:\nosg::LightModel::LightModel()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::LightModel();
	}

	// osg::LightModel::LightModel(const osg::LightModel & lw, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::LightModel* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::LightModel::LightModel(const osg::LightModel & lw, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::LightModel::LightModel(const osg::LightModel & lw, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::LightModel* lw_ptr=(Luna< osg::Referenced >::checkSubType< osg::LightModel >(L,1));
		if( !lw_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg lw in osg::LightModel::LightModel function");
		}
		const osg::LightModel & lw=*lw_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::LightModel::LightModel function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osg::LightModel(lw, copyop);
	}

	// osg::LightModel::LightModel(lua_Table * data)
	static osg::LightModel* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::LightModel::LightModel(lua_Table * data) function, expected prototype:\nosg::LightModel::LightModel(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_LightModel(L,NULL);
	}

	// osg::LightModel::LightModel(lua_Table * data, const osg::LightModel & lw, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::LightModel* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::LightModel::LightModel(lua_Table * data, const osg::LightModel & lw, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::LightModel::LightModel(lua_Table * data, const osg::LightModel & lw, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::LightModel* lw_ptr=(Luna< osg::Referenced >::checkSubType< osg::LightModel >(L,2));
		if( !lw_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg lw in osg::LightModel::LightModel function");
		}
		const osg::LightModel & lw=*lw_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::LightModel::LightModel function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_LightModel(L,NULL, lw, copyop);
	}

	// Overload binder for osg::LightModel::LightModel
	static osg::LightModel* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function LightModel, cannot match any of the overloads for function LightModel:\n  LightModel()\n  LightModel(const osg::LightModel &, const osg::CopyOp &)\n  LightModel(lua_Table *)\n  LightModel(lua_Table *, const osg::LightModel &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::LightModel::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::LightModel::cloneType() const function, expected prototype:\nosg::Object * osg::LightModel::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::LightModel* self=Luna< osg::Referenced >::checkSubType< osg::LightModel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::LightModel::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::LightModel::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::LightModel::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::LightModel::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::LightModel::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::LightModel* self=Luna< osg::Referenced >::checkSubType< osg::LightModel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::LightModel::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::LightModel::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::LightModel::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::LightModel::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::LightModel* self=Luna< osg::Referenced >::checkSubType< osg::LightModel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::LightModel::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::LightModel::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::LightModel::libraryName() const function, expected prototype:\nconst char * osg::LightModel::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::LightModel* self=Luna< osg::Referenced >::checkSubType< osg::LightModel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::LightModel::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::LightModel::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::LightModel::className() const function, expected prototype:\nconst char * osg::LightModel::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::LightModel* self=Luna< osg::Referenced >::checkSubType< osg::LightModel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::LightModel::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::LightModel::getType() const
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::LightModel::getType() const function, expected prototype:\nosg::StateAttribute::Type osg::LightModel::getType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::LightModel* self=Luna< osg::Referenced >::checkSubType< osg::LightModel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::LightModel::getType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::StateAttribute::Type lret = self->getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::LightModel::compare(const osg::StateAttribute & sa) const
	static int _bind_compare(lua_State *L) {
		if (!_lg_typecheck_compare(L)) {
			luaL_error(L, "luna typecheck failed in int osg::LightModel::compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::LightModel::compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::StateAttribute* sa_ptr=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::LightModel::compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::LightModel* self=Luna< osg::Referenced >::checkSubType< osg::LightModel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::LightModel::compare(const osg::StateAttribute &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::LightModel::setAmbientIntensity(const osg::Vec4f & ambient)
	static int _bind_setAmbientIntensity(lua_State *L) {
		if (!_lg_typecheck_setAmbientIntensity(L)) {
			luaL_error(L, "luna typecheck failed in void osg::LightModel::setAmbientIntensity(const osg::Vec4f & ambient) function, expected prototype:\nvoid osg::LightModel::setAmbientIntensity(const osg::Vec4f & ambient)\nClass arguments details:\narg 1 ID = 92303235\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec4f* ambient_ptr=(Luna< osg::Vec4f >::check(L,2));
		if( !ambient_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ambient in osg::LightModel::setAmbientIntensity function");
		}
		const osg::Vec4f & ambient=*ambient_ptr;

		osg::LightModel* self=Luna< osg::Referenced >::checkSubType< osg::LightModel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::LightModel::setAmbientIntensity(const osg::Vec4f &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setAmbientIntensity(ambient);

		return 0;
	}

	// const osg::Vec4f & osg::LightModel::getAmbientIntensity() const
	static int _bind_getAmbientIntensity(lua_State *L) {
		if (!_lg_typecheck_getAmbientIntensity(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec4f & osg::LightModel::getAmbientIntensity() const function, expected prototype:\nconst osg::Vec4f & osg::LightModel::getAmbientIntensity() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::LightModel* self=Luna< osg::Referenced >::checkSubType< osg::LightModel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec4f & osg::LightModel::getAmbientIntensity() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec4f* lret = &self->getAmbientIntensity();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4f >::push(L,lret,false);

		return 1;
	}

	// void osg::LightModel::setColorControl(osg::LightModel::ColorControl cc)
	static int _bind_setColorControl(lua_State *L) {
		if (!_lg_typecheck_setColorControl(L)) {
			luaL_error(L, "luna typecheck failed in void osg::LightModel::setColorControl(osg::LightModel::ColorControl cc) function, expected prototype:\nvoid osg::LightModel::setColorControl(osg::LightModel::ColorControl cc)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::LightModel::ColorControl cc=(osg::LightModel::ColorControl)lua_tointeger(L,2);

		osg::LightModel* self=Luna< osg::Referenced >::checkSubType< osg::LightModel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::LightModel::setColorControl(osg::LightModel::ColorControl). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setColorControl(cc);

		return 0;
	}

	// osg::LightModel::ColorControl osg::LightModel::getColorControl() const
	static int _bind_getColorControl(lua_State *L) {
		if (!_lg_typecheck_getColorControl(L)) {
			luaL_error(L, "luna typecheck failed in osg::LightModel::ColorControl osg::LightModel::getColorControl() const function, expected prototype:\nosg::LightModel::ColorControl osg::LightModel::getColorControl() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::LightModel* self=Luna< osg::Referenced >::checkSubType< osg::LightModel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::LightModel::ColorControl osg::LightModel::getColorControl() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::LightModel::ColorControl lret = self->getColorControl();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::LightModel::setLocalViewer(bool localViewer)
	static int _bind_setLocalViewer(lua_State *L) {
		if (!_lg_typecheck_setLocalViewer(L)) {
			luaL_error(L, "luna typecheck failed in void osg::LightModel::setLocalViewer(bool localViewer) function, expected prototype:\nvoid osg::LightModel::setLocalViewer(bool localViewer)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool localViewer=(bool)(lua_toboolean(L,2)==1);

		osg::LightModel* self=Luna< osg::Referenced >::checkSubType< osg::LightModel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::LightModel::setLocalViewer(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setLocalViewer(localViewer);

		return 0;
	}

	// bool osg::LightModel::getLocalViewer() const
	static int _bind_getLocalViewer(lua_State *L) {
		if (!_lg_typecheck_getLocalViewer(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::LightModel::getLocalViewer() const function, expected prototype:\nbool osg::LightModel::getLocalViewer() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::LightModel* self=Luna< osg::Referenced >::checkSubType< osg::LightModel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::LightModel::getLocalViewer() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getLocalViewer();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::LightModel::setTwoSided(bool twoSided)
	static int _bind_setTwoSided(lua_State *L) {
		if (!_lg_typecheck_setTwoSided(L)) {
			luaL_error(L, "luna typecheck failed in void osg::LightModel::setTwoSided(bool twoSided) function, expected prototype:\nvoid osg::LightModel::setTwoSided(bool twoSided)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool twoSided=(bool)(lua_toboolean(L,2)==1);

		osg::LightModel* self=Luna< osg::Referenced >::checkSubType< osg::LightModel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::LightModel::setTwoSided(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setTwoSided(twoSided);

		return 0;
	}

	// bool osg::LightModel::getTwoSided() const
	static int _bind_getTwoSided(lua_State *L) {
		if (!_lg_typecheck_getTwoSided(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::LightModel::getTwoSided() const function, expected prototype:\nbool osg::LightModel::getTwoSided() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::LightModel* self=Luna< osg::Referenced >::checkSubType< osg::LightModel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::LightModel::getTwoSided() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getTwoSided();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::LightModel::apply(osg::State & arg1) const
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luaL_error(L, "luna typecheck failed in void osg::LightModel::apply(osg::State & arg1) const function, expected prototype:\nvoid osg::LightModel::apply(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::LightModel::apply function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::LightModel* self=Luna< osg::Referenced >::checkSubType< osg::LightModel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::LightModel::apply(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::LightModel::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::LightModel::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::LightModel::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::LightModel* self=Luna< osg::Referenced >::checkSubType< osg::LightModel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::LightModel::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LightModel::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::LightModel::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::LightModel::base_setName(const std::string & name) function, expected prototype:\nvoid osg::LightModel::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::LightModel* self=Luna< osg::Referenced >::checkSubType< osg::LightModel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::LightModel::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LightModel::setName(name);

		return 0;
	}

	// void osg::LightModel::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::LightModel::base_computeDataVariance() function, expected prototype:\nvoid osg::LightModel::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::LightModel* self=Luna< osg::Referenced >::checkSubType< osg::LightModel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::LightModel::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LightModel::computeDataVariance();

		return 0;
	}

	// void osg::LightModel::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::LightModel::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::LightModel::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::LightModel* self=Luna< osg::Referenced >::checkSubType< osg::LightModel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::LightModel::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LightModel::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::LightModel::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::LightModel::base_getUserData() function, expected prototype:\nosg::Referenced * osg::LightModel::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::LightModel* self=Luna< osg::Referenced >::checkSubType< osg::LightModel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::LightModel::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->LightModel::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::LightModel::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::LightModel::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::LightModel::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::LightModel* self=Luna< osg::Referenced >::checkSubType< osg::LightModel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::LightModel::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->LightModel::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::LightModel::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// osg::Texture * osg::LightModel::base_asTexture()
	static int _bind_base_asTexture_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asTexture_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Texture * osg::LightModel::base_asTexture() function, expected prototype:\nosg::Texture * osg::LightModel::base_asTexture()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::LightModel* self=Luna< osg::Referenced >::checkSubType< osg::LightModel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Texture * osg::LightModel::base_asTexture(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Texture * lret = self->LightModel::asTexture();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture >::push(L,lret,false);

		return 1;
	}

	// const osg::Texture * osg::LightModel::base_asTexture() const
	static int _bind_base_asTexture_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asTexture_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Texture * osg::LightModel::base_asTexture() const function, expected prototype:\nconst osg::Texture * osg::LightModel::base_asTexture() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::LightModel* self=Luna< osg::Referenced >::checkSubType< osg::LightModel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Texture * osg::LightModel::base_asTexture() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Texture * lret = self->LightModel::asTexture();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::LightModel::base_asTexture
	static int _bind_base_asTexture(lua_State *L) {
		if (_lg_typecheck_base_asTexture_overload_1(L)) return _bind_base_asTexture_overload_1(L);
		if (_lg_typecheck_base_asTexture_overload_2(L)) return _bind_base_asTexture_overload_2(L);

		luaL_error(L, "error in function base_asTexture, cannot match any of the overloads for function base_asTexture:\n  base_asTexture()\n  base_asTexture()\n");
		return 0;
	}

	// unsigned int osg::LightModel::base_getMember() const
	static int _bind_base_getMember(lua_State *L) {
		if (!_lg_typecheck_base_getMember(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::LightModel::base_getMember() const function, expected prototype:\nunsigned int osg::LightModel::base_getMember() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::LightModel* self=Luna< osg::Referenced >::checkSubType< osg::LightModel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::LightModel::base_getMember() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->LightModel::getMember();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::LightModel::base_isTextureAttribute() const
	static int _bind_base_isTextureAttribute(lua_State *L) {
		if (!_lg_typecheck_base_isTextureAttribute(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::LightModel::base_isTextureAttribute() const function, expected prototype:\nbool osg::LightModel::base_isTextureAttribute() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::LightModel* self=Luna< osg::Referenced >::checkSubType< osg::LightModel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::LightModel::base_isTextureAttribute() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->LightModel::isTextureAttribute();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::LightModel::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const
	static int _bind_base_getModeUsage(lua_State *L) {
		if (!_lg_typecheck_base_getModeUsage(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::LightModel::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const function, expected prototype:\nbool osg::LightModel::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const\nClass arguments details:\narg 1 ID = 48108040\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StateAttribute::ModeUsage* _arg1_ptr=(Luna< osg::StateAttribute::ModeUsage >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::LightModel::base_getModeUsage function");
		}
		osg::StateAttribute::ModeUsage & _arg1=*_arg1_ptr;

		osg::LightModel* self=Luna< osg::Referenced >::checkSubType< osg::LightModel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::LightModel::base_getModeUsage(osg::StateAttribute::ModeUsage &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->LightModel::getModeUsage(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::LightModel::base_checkValidityOfAssociatedModes(osg::State & arg1) const
	static int _bind_base_checkValidityOfAssociatedModes(lua_State *L) {
		if (!_lg_typecheck_base_checkValidityOfAssociatedModes(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::LightModel::base_checkValidityOfAssociatedModes(osg::State & arg1) const function, expected prototype:\nbool osg::LightModel::base_checkValidityOfAssociatedModes(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::LightModel::base_checkValidityOfAssociatedModes function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::LightModel* self=Luna< osg::Referenced >::checkSubType< osg::LightModel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::LightModel::base_checkValidityOfAssociatedModes(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->LightModel::checkValidityOfAssociatedModes(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::LightModel::base_compileGLObjects(osg::State & arg1) const
	static int _bind_base_compileGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_compileGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::LightModel::base_compileGLObjects(osg::State & arg1) const function, expected prototype:\nvoid osg::LightModel::base_compileGLObjects(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::LightModel::base_compileGLObjects function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::LightModel* self=Luna< osg::Referenced >::checkSubType< osg::LightModel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::LightModel::base_compileGLObjects(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LightModel::compileGLObjects(_arg1);

		return 0;
	}

	// void osg::LightModel::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::LightModel::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::LightModel::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::LightModel* self=Luna< osg::Referenced >::checkSubType< osg::LightModel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::LightModel::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LightModel::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osg::LightModel::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::LightModel::base_cloneType() const function, expected prototype:\nosg::Object * osg::LightModel::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::LightModel* self=Luna< osg::Referenced >::checkSubType< osg::LightModel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::LightModel::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->LightModel::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::LightModel::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::LightModel::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::LightModel::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::LightModel::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::LightModel* self=Luna< osg::Referenced >::checkSubType< osg::LightModel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::LightModel::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->LightModel::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::LightModel::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::LightModel::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::LightModel::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::LightModel* self=Luna< osg::Referenced >::checkSubType< osg::LightModel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::LightModel::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->LightModel::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::LightModel::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::LightModel::base_libraryName() const function, expected prototype:\nconst char * osg::LightModel::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::LightModel* self=Luna< osg::Referenced >::checkSubType< osg::LightModel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::LightModel::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->LightModel::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::LightModel::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::LightModel::base_className() const function, expected prototype:\nconst char * osg::LightModel::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::LightModel* self=Luna< osg::Referenced >::checkSubType< osg::LightModel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::LightModel::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->LightModel::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::LightModel::base_getType() const
	static int _bind_base_getType(lua_State *L) {
		if (!_lg_typecheck_base_getType(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::LightModel::base_getType() const function, expected prototype:\nosg::StateAttribute::Type osg::LightModel::base_getType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::LightModel* self=Luna< osg::Referenced >::checkSubType< osg::LightModel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::LightModel::base_getType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::StateAttribute::Type lret = self->LightModel::getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::LightModel::base_compare(const osg::StateAttribute & sa) const
	static int _bind_base_compare(lua_State *L) {
		if (!_lg_typecheck_base_compare(L)) {
			luaL_error(L, "luna typecheck failed in int osg::LightModel::base_compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::LightModel::base_compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::StateAttribute* sa_ptr=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::LightModel::base_compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::LightModel* self=Luna< osg::Referenced >::checkSubType< osg::LightModel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::LightModel::base_compare(const osg::StateAttribute &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->LightModel::compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::LightModel::base_apply(osg::State & arg1) const
	static int _bind_base_apply(lua_State *L) {
		if (!_lg_typecheck_base_apply(L)) {
			luaL_error(L, "luna typecheck failed in void osg::LightModel::base_apply(osg::State & arg1) const function, expected prototype:\nvoid osg::LightModel::base_apply(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::LightModel::base_apply function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::LightModel* self=Luna< osg::Referenced >::checkSubType< osg::LightModel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::LightModel::base_apply(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LightModel::apply(_arg1);

		return 0;
	}


	// Operator binds:

};

osg::LightModel* LunaTraits< osg::LightModel >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_LightModel::_bind_ctor(L);
}

void LunaTraits< osg::LightModel >::_bind_dtor(osg::LightModel* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::LightModel >::className[] = "LightModel";
const char LunaTraits< osg::LightModel >::fullName[] = "osg::LightModel";
const char LunaTraits< osg::LightModel >::moduleName[] = "osg";
const char* LunaTraits< osg::LightModel >::parents[] = {"osg.StateAttribute", 0};
const int LunaTraits< osg::LightModel >::hash = 8384344;
const int LunaTraits< osg::LightModel >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::LightModel >::methods[] = {
	{"cloneType", &luna_wrapper_osg_LightModel::_bind_cloneType},
	{"clone", &luna_wrapper_osg_LightModel::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_LightModel::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_LightModel::_bind_libraryName},
	{"className", &luna_wrapper_osg_LightModel::_bind_className},
	{"getType", &luna_wrapper_osg_LightModel::_bind_getType},
	{"compare", &luna_wrapper_osg_LightModel::_bind_compare},
	{"setAmbientIntensity", &luna_wrapper_osg_LightModel::_bind_setAmbientIntensity},
	{"getAmbientIntensity", &luna_wrapper_osg_LightModel::_bind_getAmbientIntensity},
	{"setColorControl", &luna_wrapper_osg_LightModel::_bind_setColorControl},
	{"getColorControl", &luna_wrapper_osg_LightModel::_bind_getColorControl},
	{"setLocalViewer", &luna_wrapper_osg_LightModel::_bind_setLocalViewer},
	{"getLocalViewer", &luna_wrapper_osg_LightModel::_bind_getLocalViewer},
	{"setTwoSided", &luna_wrapper_osg_LightModel::_bind_setTwoSided},
	{"getTwoSided", &luna_wrapper_osg_LightModel::_bind_getTwoSided},
	{"apply", &luna_wrapper_osg_LightModel::_bind_apply},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_LightModel::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osg_LightModel::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_LightModel::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_LightModel::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_LightModel::_bind_base_getUserData},
	{"base_asTexture", &luna_wrapper_osg_LightModel::_bind_base_asTexture},
	{"base_getMember", &luna_wrapper_osg_LightModel::_bind_base_getMember},
	{"base_isTextureAttribute", &luna_wrapper_osg_LightModel::_bind_base_isTextureAttribute},
	{"base_getModeUsage", &luna_wrapper_osg_LightModel::_bind_base_getModeUsage},
	{"base_checkValidityOfAssociatedModes", &luna_wrapper_osg_LightModel::_bind_base_checkValidityOfAssociatedModes},
	{"base_compileGLObjects", &luna_wrapper_osg_LightModel::_bind_base_compileGLObjects},
	{"base_releaseGLObjects", &luna_wrapper_osg_LightModel::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osg_LightModel::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_LightModel::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_LightModel::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_LightModel::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_LightModel::_bind_base_className},
	{"base_getType", &luna_wrapper_osg_LightModel::_bind_base_getType},
	{"base_compare", &luna_wrapper_osg_LightModel::_bind_base_compare},
	{"base_apply", &luna_wrapper_osg_LightModel::_bind_base_apply},
	{"fromVoid", &luna_wrapper_osg_LightModel::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_LightModel::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_LightModel::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::LightModel >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_LightModel::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::LightModel >::enumValues[] = {
	{"SEPARATE_SPECULAR_COLOR", osg::LightModel::SEPARATE_SPECULAR_COLOR},
	{"SINGLE_COLOR", osg::LightModel::SINGLE_COLOR},
	{0,0}
};



#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_ColorMask.h>

class luna_wrapper_osg_ColorMask {
public:
	typedef Luna< osg::ColorMask > luna_t;

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

		osg::ColorMask* self= (osg::ColorMask*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::ColorMask >::push(L,self,false);
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
		//osg::ColorMask* ptr= dynamic_cast< osg::ColorMask* >(Luna< osg::Referenced >::check(L,1));
		osg::ColorMask* ptr= luna_caster< osg::Referenced, osg::ColorMask >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::ColorMask >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_isboolean(L,1)==0 ) return false;
		if( lua_isboolean(L,2)==0 ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		if( lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::ColorMask >(L,1))) ) return false;
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
		if( lua_gettop(L)!=5 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_isboolean(L,2)==0 ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		if( lua_isboolean(L,4)==0 ) return false;
		if( lua_isboolean(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::ColorMask >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_setMask(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		if( lua_isboolean(L,4)==0 ) return false;
		if( lua_isboolean(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRedMask(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRedMask(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setGreenMask(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getGreenMask(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setBlueMask(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getBlueMask(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setAlphaMask(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAlphaMask(lua_State *L) {
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
	// osg::ColorMask::ColorMask()
	static osg::ColorMask* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::ColorMask::ColorMask() function, expected prototype:\nosg::ColorMask::ColorMask()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::ColorMask();
	}

	// osg::ColorMask::ColorMask(bool red, bool green, bool blue, bool alpha)
	static osg::ColorMask* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::ColorMask::ColorMask(bool red, bool green, bool blue, bool alpha) function, expected prototype:\nosg::ColorMask::ColorMask(bool red, bool green, bool blue, bool alpha)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool red=(bool)(lua_toboolean(L,1)==1);
		bool green=(bool)(lua_toboolean(L,2)==1);
		bool blue=(bool)(lua_toboolean(L,3)==1);
		bool alpha=(bool)(lua_toboolean(L,4)==1);

		return new osg::ColorMask(red, green, blue, alpha);
	}

	// osg::ColorMask::ColorMask(const osg::ColorMask & cm, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::ColorMask* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::ColorMask::ColorMask(const osg::ColorMask & cm, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::ColorMask::ColorMask(const osg::ColorMask & cm, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::ColorMask* cm_ptr=(Luna< osg::Referenced >::checkSubType< osg::ColorMask >(L,1));
		if( !cm_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cm in osg::ColorMask::ColorMask function");
		}
		const osg::ColorMask & cm=*cm_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::ColorMask::ColorMask function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osg::ColorMask(cm, copyop);
	}

	// osg::ColorMask::ColorMask(lua_Table * data)
	static osg::ColorMask* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::ColorMask::ColorMask(lua_Table * data) function, expected prototype:\nosg::ColorMask::ColorMask(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_ColorMask(L,NULL);
	}

	// osg::ColorMask::ColorMask(lua_Table * data, bool red, bool green, bool blue, bool alpha)
	static osg::ColorMask* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in osg::ColorMask::ColorMask(lua_Table * data, bool red, bool green, bool blue, bool alpha) function, expected prototype:\nosg::ColorMask::ColorMask(lua_Table * data, bool red, bool green, bool blue, bool alpha)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool red=(bool)(lua_toboolean(L,2)==1);
		bool green=(bool)(lua_toboolean(L,3)==1);
		bool blue=(bool)(lua_toboolean(L,4)==1);
		bool alpha=(bool)(lua_toboolean(L,5)==1);

		return new wrapper_osg_ColorMask(L,NULL, red, green, blue, alpha);
	}

	// osg::ColorMask::ColorMask(lua_Table * data, const osg::ColorMask & cm, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::ColorMask* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in osg::ColorMask::ColorMask(lua_Table * data, const osg::ColorMask & cm, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::ColorMask::ColorMask(lua_Table * data, const osg::ColorMask & cm, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::ColorMask* cm_ptr=(Luna< osg::Referenced >::checkSubType< osg::ColorMask >(L,2));
		if( !cm_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cm in osg::ColorMask::ColorMask function");
		}
		const osg::ColorMask & cm=*cm_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::ColorMask::ColorMask function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_ColorMask(L,NULL, cm, copyop);
	}

	// Overload binder for osg::ColorMask::ColorMask
	static osg::ColorMask* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);

		luaL_error(L, "error in function ColorMask, cannot match any of the overloads for function ColorMask:\n  ColorMask()\n  ColorMask(bool, bool, bool, bool)\n  ColorMask(const osg::ColorMask &, const osg::CopyOp &)\n  ColorMask(lua_Table *)\n  ColorMask(lua_Table *, bool, bool, bool, bool)\n  ColorMask(lua_Table *, const osg::ColorMask &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::ColorMask::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::ColorMask::cloneType() const function, expected prototype:\nosg::Object * osg::ColorMask::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ColorMask* self=Luna< osg::Referenced >::checkSubType< osg::ColorMask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::ColorMask::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::ColorMask::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::ColorMask::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::ColorMask::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ColorMask::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::ColorMask* self=Luna< osg::Referenced >::checkSubType< osg::ColorMask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::ColorMask::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::ColorMask::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::ColorMask::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::ColorMask::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::ColorMask* self=Luna< osg::Referenced >::checkSubType< osg::ColorMask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::ColorMask::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::ColorMask::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::ColorMask::libraryName() const function, expected prototype:\nconst char * osg::ColorMask::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ColorMask* self=Luna< osg::Referenced >::checkSubType< osg::ColorMask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::ColorMask::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::ColorMask::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::ColorMask::className() const function, expected prototype:\nconst char * osg::ColorMask::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ColorMask* self=Luna< osg::Referenced >::checkSubType< osg::ColorMask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::ColorMask::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::ColorMask::getType() const
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::ColorMask::getType() const function, expected prototype:\nosg::StateAttribute::Type osg::ColorMask::getType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ColorMask* self=Luna< osg::Referenced >::checkSubType< osg::ColorMask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::ColorMask::getType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::StateAttribute::Type lret = self->getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::ColorMask::compare(const osg::StateAttribute & sa) const
	static int _bind_compare(lua_State *L) {
		if (!_lg_typecheck_compare(L)) {
			luaL_error(L, "luna typecheck failed in int osg::ColorMask::compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::ColorMask::compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::StateAttribute* sa_ptr=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::ColorMask::compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::ColorMask* self=Luna< osg::Referenced >::checkSubType< osg::ColorMask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::ColorMask::compare(const osg::StateAttribute &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::ColorMask::setMask(bool red, bool green, bool blue, bool alpha)
	static int _bind_setMask(lua_State *L) {
		if (!_lg_typecheck_setMask(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ColorMask::setMask(bool red, bool green, bool blue, bool alpha) function, expected prototype:\nvoid osg::ColorMask::setMask(bool red, bool green, bool blue, bool alpha)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool red=(bool)(lua_toboolean(L,2)==1);
		bool green=(bool)(lua_toboolean(L,3)==1);
		bool blue=(bool)(lua_toboolean(L,4)==1);
		bool alpha=(bool)(lua_toboolean(L,5)==1);

		osg::ColorMask* self=Luna< osg::Referenced >::checkSubType< osg::ColorMask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ColorMask::setMask(bool, bool, bool, bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setMask(red, green, blue, alpha);

		return 0;
	}

	// void osg::ColorMask::setRedMask(bool mask)
	static int _bind_setRedMask(lua_State *L) {
		if (!_lg_typecheck_setRedMask(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ColorMask::setRedMask(bool mask) function, expected prototype:\nvoid osg::ColorMask::setRedMask(bool mask)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool mask=(bool)(lua_toboolean(L,2)==1);

		osg::ColorMask* self=Luna< osg::Referenced >::checkSubType< osg::ColorMask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ColorMask::setRedMask(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setRedMask(mask);

		return 0;
	}

	// bool osg::ColorMask::getRedMask() const
	static int _bind_getRedMask(lua_State *L) {
		if (!_lg_typecheck_getRedMask(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::ColorMask::getRedMask() const function, expected prototype:\nbool osg::ColorMask::getRedMask() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ColorMask* self=Luna< osg::Referenced >::checkSubType< osg::ColorMask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::ColorMask::getRedMask() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getRedMask();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::ColorMask::setGreenMask(bool mask)
	static int _bind_setGreenMask(lua_State *L) {
		if (!_lg_typecheck_setGreenMask(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ColorMask::setGreenMask(bool mask) function, expected prototype:\nvoid osg::ColorMask::setGreenMask(bool mask)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool mask=(bool)(lua_toboolean(L,2)==1);

		osg::ColorMask* self=Luna< osg::Referenced >::checkSubType< osg::ColorMask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ColorMask::setGreenMask(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setGreenMask(mask);

		return 0;
	}

	// bool osg::ColorMask::getGreenMask() const
	static int _bind_getGreenMask(lua_State *L) {
		if (!_lg_typecheck_getGreenMask(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::ColorMask::getGreenMask() const function, expected prototype:\nbool osg::ColorMask::getGreenMask() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ColorMask* self=Luna< osg::Referenced >::checkSubType< osg::ColorMask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::ColorMask::getGreenMask() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getGreenMask();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::ColorMask::setBlueMask(bool mask)
	static int _bind_setBlueMask(lua_State *L) {
		if (!_lg_typecheck_setBlueMask(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ColorMask::setBlueMask(bool mask) function, expected prototype:\nvoid osg::ColorMask::setBlueMask(bool mask)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool mask=(bool)(lua_toboolean(L,2)==1);

		osg::ColorMask* self=Luna< osg::Referenced >::checkSubType< osg::ColorMask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ColorMask::setBlueMask(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setBlueMask(mask);

		return 0;
	}

	// bool osg::ColorMask::getBlueMask() const
	static int _bind_getBlueMask(lua_State *L) {
		if (!_lg_typecheck_getBlueMask(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::ColorMask::getBlueMask() const function, expected prototype:\nbool osg::ColorMask::getBlueMask() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ColorMask* self=Luna< osg::Referenced >::checkSubType< osg::ColorMask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::ColorMask::getBlueMask() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getBlueMask();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::ColorMask::setAlphaMask(bool mask)
	static int _bind_setAlphaMask(lua_State *L) {
		if (!_lg_typecheck_setAlphaMask(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ColorMask::setAlphaMask(bool mask) function, expected prototype:\nvoid osg::ColorMask::setAlphaMask(bool mask)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool mask=(bool)(lua_toboolean(L,2)==1);

		osg::ColorMask* self=Luna< osg::Referenced >::checkSubType< osg::ColorMask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ColorMask::setAlphaMask(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setAlphaMask(mask);

		return 0;
	}

	// bool osg::ColorMask::getAlphaMask() const
	static int _bind_getAlphaMask(lua_State *L) {
		if (!_lg_typecheck_getAlphaMask(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::ColorMask::getAlphaMask() const function, expected prototype:\nbool osg::ColorMask::getAlphaMask() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ColorMask* self=Luna< osg::Referenced >::checkSubType< osg::ColorMask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::ColorMask::getAlphaMask() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getAlphaMask();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::ColorMask::apply(osg::State & arg1) const
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ColorMask::apply(osg::State & arg1) const function, expected prototype:\nvoid osg::ColorMask::apply(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ColorMask::apply function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::ColorMask* self=Luna< osg::Referenced >::checkSubType< osg::ColorMask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ColorMask::apply(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ColorMask::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ColorMask::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::ColorMask::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::ColorMask* self=Luna< osg::Referenced >::checkSubType< osg::ColorMask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ColorMask::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ColorMask::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::ColorMask::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ColorMask::base_setName(const std::string & name) function, expected prototype:\nvoid osg::ColorMask::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::ColorMask* self=Luna< osg::Referenced >::checkSubType< osg::ColorMask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ColorMask::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ColorMask::setName(name);

		return 0;
	}

	// void osg::ColorMask::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ColorMask::base_computeDataVariance() function, expected prototype:\nvoid osg::ColorMask::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ColorMask* self=Luna< osg::Referenced >::checkSubType< osg::ColorMask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ColorMask::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ColorMask::computeDataVariance();

		return 0;
	}

	// void osg::ColorMask::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ColorMask::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::ColorMask::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::ColorMask* self=Luna< osg::Referenced >::checkSubType< osg::ColorMask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ColorMask::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ColorMask::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::ColorMask::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::ColorMask::base_getUserData() function, expected prototype:\nosg::Referenced * osg::ColorMask::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ColorMask* self=Luna< osg::Referenced >::checkSubType< osg::ColorMask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::ColorMask::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->ColorMask::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::ColorMask::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::ColorMask::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::ColorMask::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ColorMask* self=Luna< osg::Referenced >::checkSubType< osg::ColorMask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::ColorMask::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->ColorMask::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::ColorMask::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// osg::Texture * osg::ColorMask::base_asTexture()
	static int _bind_base_asTexture_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asTexture_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Texture * osg::ColorMask::base_asTexture() function, expected prototype:\nosg::Texture * osg::ColorMask::base_asTexture()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ColorMask* self=Luna< osg::Referenced >::checkSubType< osg::ColorMask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Texture * osg::ColorMask::base_asTexture(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Texture * lret = self->ColorMask::asTexture();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture >::push(L,lret,false);

		return 1;
	}

	// const osg::Texture * osg::ColorMask::base_asTexture() const
	static int _bind_base_asTexture_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asTexture_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Texture * osg::ColorMask::base_asTexture() const function, expected prototype:\nconst osg::Texture * osg::ColorMask::base_asTexture() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ColorMask* self=Luna< osg::Referenced >::checkSubType< osg::ColorMask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Texture * osg::ColorMask::base_asTexture() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Texture * lret = self->ColorMask::asTexture();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::ColorMask::base_asTexture
	static int _bind_base_asTexture(lua_State *L) {
		if (_lg_typecheck_base_asTexture_overload_1(L)) return _bind_base_asTexture_overload_1(L);
		if (_lg_typecheck_base_asTexture_overload_2(L)) return _bind_base_asTexture_overload_2(L);

		luaL_error(L, "error in function base_asTexture, cannot match any of the overloads for function base_asTexture:\n  base_asTexture()\n  base_asTexture()\n");
		return 0;
	}

	// unsigned int osg::ColorMask::base_getMember() const
	static int _bind_base_getMember(lua_State *L) {
		if (!_lg_typecheck_base_getMember(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::ColorMask::base_getMember() const function, expected prototype:\nunsigned int osg::ColorMask::base_getMember() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ColorMask* self=Luna< osg::Referenced >::checkSubType< osg::ColorMask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::ColorMask::base_getMember() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->ColorMask::getMember();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::ColorMask::base_isTextureAttribute() const
	static int _bind_base_isTextureAttribute(lua_State *L) {
		if (!_lg_typecheck_base_isTextureAttribute(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::ColorMask::base_isTextureAttribute() const function, expected prototype:\nbool osg::ColorMask::base_isTextureAttribute() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ColorMask* self=Luna< osg::Referenced >::checkSubType< osg::ColorMask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::ColorMask::base_isTextureAttribute() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ColorMask::isTextureAttribute();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::ColorMask::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const
	static int _bind_base_getModeUsage(lua_State *L) {
		if (!_lg_typecheck_base_getModeUsage(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::ColorMask::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const function, expected prototype:\nbool osg::ColorMask::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const\nClass arguments details:\narg 1 ID = 48108040\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StateAttribute::ModeUsage* _arg1_ptr=(Luna< osg::StateAttribute::ModeUsage >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ColorMask::base_getModeUsage function");
		}
		osg::StateAttribute::ModeUsage & _arg1=*_arg1_ptr;

		osg::ColorMask* self=Luna< osg::Referenced >::checkSubType< osg::ColorMask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::ColorMask::base_getModeUsage(osg::StateAttribute::ModeUsage &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ColorMask::getModeUsage(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::ColorMask::base_checkValidityOfAssociatedModes(osg::State & arg1) const
	static int _bind_base_checkValidityOfAssociatedModes(lua_State *L) {
		if (!_lg_typecheck_base_checkValidityOfAssociatedModes(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::ColorMask::base_checkValidityOfAssociatedModes(osg::State & arg1) const function, expected prototype:\nbool osg::ColorMask::base_checkValidityOfAssociatedModes(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ColorMask::base_checkValidityOfAssociatedModes function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::ColorMask* self=Luna< osg::Referenced >::checkSubType< osg::ColorMask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::ColorMask::base_checkValidityOfAssociatedModes(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ColorMask::checkValidityOfAssociatedModes(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::ColorMask::base_compileGLObjects(osg::State & arg1) const
	static int _bind_base_compileGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_compileGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ColorMask::base_compileGLObjects(osg::State & arg1) const function, expected prototype:\nvoid osg::ColorMask::base_compileGLObjects(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ColorMask::base_compileGLObjects function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::ColorMask* self=Luna< osg::Referenced >::checkSubType< osg::ColorMask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ColorMask::base_compileGLObjects(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ColorMask::compileGLObjects(_arg1);

		return 0;
	}

	// void osg::ColorMask::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ColorMask::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::ColorMask::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::ColorMask* self=Luna< osg::Referenced >::checkSubType< osg::ColorMask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ColorMask::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ColorMask::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osg::ColorMask::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::ColorMask::base_cloneType() const function, expected prototype:\nosg::Object * osg::ColorMask::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ColorMask* self=Luna< osg::Referenced >::checkSubType< osg::ColorMask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::ColorMask::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->ColorMask::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::ColorMask::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::ColorMask::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::ColorMask::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ColorMask::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::ColorMask* self=Luna< osg::Referenced >::checkSubType< osg::ColorMask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::ColorMask::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->ColorMask::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::ColorMask::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::ColorMask::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::ColorMask::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::ColorMask* self=Luna< osg::Referenced >::checkSubType< osg::ColorMask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::ColorMask::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ColorMask::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::ColorMask::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::ColorMask::base_libraryName() const function, expected prototype:\nconst char * osg::ColorMask::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ColorMask* self=Luna< osg::Referenced >::checkSubType< osg::ColorMask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::ColorMask::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->ColorMask::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::ColorMask::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::ColorMask::base_className() const function, expected prototype:\nconst char * osg::ColorMask::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ColorMask* self=Luna< osg::Referenced >::checkSubType< osg::ColorMask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::ColorMask::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->ColorMask::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::ColorMask::base_getType() const
	static int _bind_base_getType(lua_State *L) {
		if (!_lg_typecheck_base_getType(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::ColorMask::base_getType() const function, expected prototype:\nosg::StateAttribute::Type osg::ColorMask::base_getType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ColorMask* self=Luna< osg::Referenced >::checkSubType< osg::ColorMask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::ColorMask::base_getType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::StateAttribute::Type lret = self->ColorMask::getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::ColorMask::base_compare(const osg::StateAttribute & sa) const
	static int _bind_base_compare(lua_State *L) {
		if (!_lg_typecheck_base_compare(L)) {
			luaL_error(L, "luna typecheck failed in int osg::ColorMask::base_compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::ColorMask::base_compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::StateAttribute* sa_ptr=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::ColorMask::base_compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::ColorMask* self=Luna< osg::Referenced >::checkSubType< osg::ColorMask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::ColorMask::base_compare(const osg::StateAttribute &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->ColorMask::compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::ColorMask::base_apply(osg::State & arg1) const
	static int _bind_base_apply(lua_State *L) {
		if (!_lg_typecheck_base_apply(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ColorMask::base_apply(osg::State & arg1) const function, expected prototype:\nvoid osg::ColorMask::base_apply(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ColorMask::base_apply function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::ColorMask* self=Luna< osg::Referenced >::checkSubType< osg::ColorMask >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ColorMask::base_apply(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ColorMask::apply(_arg1);

		return 0;
	}


	// Operator binds:

};

osg::ColorMask* LunaTraits< osg::ColorMask >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_ColorMask::_bind_ctor(L);
}

void LunaTraits< osg::ColorMask >::_bind_dtor(osg::ColorMask* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::ColorMask >::className[] = "ColorMask";
const char LunaTraits< osg::ColorMask >::fullName[] = "osg::ColorMask";
const char LunaTraits< osg::ColorMask >::moduleName[] = "osg";
const char* LunaTraits< osg::ColorMask >::parents[] = {"osg.StateAttribute", 0};
const int LunaTraits< osg::ColorMask >::hash = 54812216;
const int LunaTraits< osg::ColorMask >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::ColorMask >::methods[] = {
	{"cloneType", &luna_wrapper_osg_ColorMask::_bind_cloneType},
	{"clone", &luna_wrapper_osg_ColorMask::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_ColorMask::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_ColorMask::_bind_libraryName},
	{"className", &luna_wrapper_osg_ColorMask::_bind_className},
	{"getType", &luna_wrapper_osg_ColorMask::_bind_getType},
	{"compare", &luna_wrapper_osg_ColorMask::_bind_compare},
	{"setMask", &luna_wrapper_osg_ColorMask::_bind_setMask},
	{"setRedMask", &luna_wrapper_osg_ColorMask::_bind_setRedMask},
	{"getRedMask", &luna_wrapper_osg_ColorMask::_bind_getRedMask},
	{"setGreenMask", &luna_wrapper_osg_ColorMask::_bind_setGreenMask},
	{"getGreenMask", &luna_wrapper_osg_ColorMask::_bind_getGreenMask},
	{"setBlueMask", &luna_wrapper_osg_ColorMask::_bind_setBlueMask},
	{"getBlueMask", &luna_wrapper_osg_ColorMask::_bind_getBlueMask},
	{"setAlphaMask", &luna_wrapper_osg_ColorMask::_bind_setAlphaMask},
	{"getAlphaMask", &luna_wrapper_osg_ColorMask::_bind_getAlphaMask},
	{"apply", &luna_wrapper_osg_ColorMask::_bind_apply},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_ColorMask::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osg_ColorMask::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_ColorMask::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_ColorMask::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_ColorMask::_bind_base_getUserData},
	{"base_asTexture", &luna_wrapper_osg_ColorMask::_bind_base_asTexture},
	{"base_getMember", &luna_wrapper_osg_ColorMask::_bind_base_getMember},
	{"base_isTextureAttribute", &luna_wrapper_osg_ColorMask::_bind_base_isTextureAttribute},
	{"base_getModeUsage", &luna_wrapper_osg_ColorMask::_bind_base_getModeUsage},
	{"base_checkValidityOfAssociatedModes", &luna_wrapper_osg_ColorMask::_bind_base_checkValidityOfAssociatedModes},
	{"base_compileGLObjects", &luna_wrapper_osg_ColorMask::_bind_base_compileGLObjects},
	{"base_releaseGLObjects", &luna_wrapper_osg_ColorMask::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osg_ColorMask::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_ColorMask::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_ColorMask::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_ColorMask::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_ColorMask::_bind_base_className},
	{"base_getType", &luna_wrapper_osg_ColorMask::_bind_base_getType},
	{"base_compare", &luna_wrapper_osg_ColorMask::_bind_base_compare},
	{"base_apply", &luna_wrapper_osg_ColorMask::_bind_base_apply},
	{"fromVoid", &luna_wrapper_osg_ColorMask::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_ColorMask::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_ColorMask::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ColorMask >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_ColorMask::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ColorMask >::enumValues[] = {
	{0,0}
};



#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_BlendColor.h>

class luna_wrapper_osg_BlendColor {
public:
	typedef Luna< osg::BlendColor > luna_t;

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

		osg::BlendColor* self= (osg::BlendColor*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::BlendColor >::push(L,self,false);
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
		//osg::BlendColor* ptr= dynamic_cast< osg::BlendColor* >(Luna< osg::Referenced >::check(L,1));
		osg::BlendColor* ptr= luna_caster< osg::Referenced, osg::BlendColor >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::BlendColor >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92303235) ) return false;
		if( (!(Luna< osg::Vec4f >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::BlendColor >(L,1))) ) return false;
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
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,92303235) ) return false;
		if( (!(Luna< osg::Vec4f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::BlendColor >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_setConstantColor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303235) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getConstantColor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getConstantColor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_apply(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getExtensions(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setExtensions(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
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
	// osg::BlendColor::BlendColor()
	static osg::BlendColor* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::BlendColor::BlendColor() function, expected prototype:\nosg::BlendColor::BlendColor()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::BlendColor();
	}

	// osg::BlendColor::BlendColor(const osg::Vec4f & constantColor)
	static osg::BlendColor* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::BlendColor::BlendColor(const osg::Vec4f & constantColor) function, expected prototype:\nosg::BlendColor::BlendColor(const osg::Vec4f & constantColor)\nClass arguments details:\narg 1 ID = 92303235\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec4f* constantColor_ptr=(Luna< osg::Vec4f >::check(L,1));
		if( !constantColor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg constantColor in osg::BlendColor::BlendColor function");
		}
		const osg::Vec4f & constantColor=*constantColor_ptr;

		return new osg::BlendColor(constantColor);
	}

	// osg::BlendColor::BlendColor(const osg::BlendColor & trans, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::BlendColor* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::BlendColor::BlendColor(const osg::BlendColor & trans, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::BlendColor::BlendColor(const osg::BlendColor & trans, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::BlendColor* trans_ptr=(Luna< osg::Referenced >::checkSubType< osg::BlendColor >(L,1));
		if( !trans_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg trans in osg::BlendColor::BlendColor function");
		}
		const osg::BlendColor & trans=*trans_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::BlendColor::BlendColor function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osg::BlendColor(trans, copyop);
	}

	// osg::BlendColor::BlendColor(lua_Table * data)
	static osg::BlendColor* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::BlendColor::BlendColor(lua_Table * data) function, expected prototype:\nosg::BlendColor::BlendColor(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_BlendColor(L,NULL);
	}

	// osg::BlendColor::BlendColor(lua_Table * data, const osg::Vec4f & constantColor)
	static osg::BlendColor* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in osg::BlendColor::BlendColor(lua_Table * data, const osg::Vec4f & constantColor) function, expected prototype:\nosg::BlendColor::BlendColor(lua_Table * data, const osg::Vec4f & constantColor)\nClass arguments details:\narg 2 ID = 92303235\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec4f* constantColor_ptr=(Luna< osg::Vec4f >::check(L,2));
		if( !constantColor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg constantColor in osg::BlendColor::BlendColor function");
		}
		const osg::Vec4f & constantColor=*constantColor_ptr;

		return new wrapper_osg_BlendColor(L,NULL, constantColor);
	}

	// osg::BlendColor::BlendColor(lua_Table * data, const osg::BlendColor & trans, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::BlendColor* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in osg::BlendColor::BlendColor(lua_Table * data, const osg::BlendColor & trans, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::BlendColor::BlendColor(lua_Table * data, const osg::BlendColor & trans, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::BlendColor* trans_ptr=(Luna< osg::Referenced >::checkSubType< osg::BlendColor >(L,2));
		if( !trans_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg trans in osg::BlendColor::BlendColor function");
		}
		const osg::BlendColor & trans=*trans_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::BlendColor::BlendColor function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_BlendColor(L,NULL, trans, copyop);
	}

	// Overload binder for osg::BlendColor::BlendColor
	static osg::BlendColor* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);

		luaL_error(L, "error in function BlendColor, cannot match any of the overloads for function BlendColor:\n  BlendColor()\n  BlendColor(const osg::Vec4f &)\n  BlendColor(const osg::BlendColor &, const osg::CopyOp &)\n  BlendColor(lua_Table *)\n  BlendColor(lua_Table *, const osg::Vec4f &)\n  BlendColor(lua_Table *, const osg::BlendColor &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::BlendColor::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::BlendColor::cloneType() const function, expected prototype:\nosg::Object * osg::BlendColor::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::BlendColor* self=Luna< osg::Referenced >::checkSubType< osg::BlendColor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::BlendColor::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::BlendColor::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::BlendColor::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::BlendColor::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::BlendColor::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::BlendColor* self=Luna< osg::Referenced >::checkSubType< osg::BlendColor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::BlendColor::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::BlendColor::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::BlendColor::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::BlendColor::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::BlendColor* self=Luna< osg::Referenced >::checkSubType< osg::BlendColor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::BlendColor::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::BlendColor::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::BlendColor::libraryName() const function, expected prototype:\nconst char * osg::BlendColor::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::BlendColor* self=Luna< osg::Referenced >::checkSubType< osg::BlendColor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::BlendColor::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::BlendColor::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::BlendColor::className() const function, expected prototype:\nconst char * osg::BlendColor::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::BlendColor* self=Luna< osg::Referenced >::checkSubType< osg::BlendColor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::BlendColor::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::BlendColor::getType() const
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::BlendColor::getType() const function, expected prototype:\nosg::StateAttribute::Type osg::BlendColor::getType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::BlendColor* self=Luna< osg::Referenced >::checkSubType< osg::BlendColor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::BlendColor::getType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::StateAttribute::Type lret = self->getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::BlendColor::compare(const osg::StateAttribute & sa) const
	static int _bind_compare(lua_State *L) {
		if (!_lg_typecheck_compare(L)) {
			luaL_error(L, "luna typecheck failed in int osg::BlendColor::compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::BlendColor::compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::StateAttribute* sa_ptr=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::BlendColor::compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::BlendColor* self=Luna< osg::Referenced >::checkSubType< osg::BlendColor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::BlendColor::compare(const osg::StateAttribute &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::BlendColor::getModeUsage(osg::StateAttribute::ModeUsage & arg1) const
	static int _bind_getModeUsage(lua_State *L) {
		if (!_lg_typecheck_getModeUsage(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::BlendColor::getModeUsage(osg::StateAttribute::ModeUsage & arg1) const function, expected prototype:\nbool osg::BlendColor::getModeUsage(osg::StateAttribute::ModeUsage & arg1) const\nClass arguments details:\narg 1 ID = 48108040\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StateAttribute::ModeUsage* _arg1_ptr=(Luna< osg::StateAttribute::ModeUsage >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::BlendColor::getModeUsage function");
		}
		osg::StateAttribute::ModeUsage & _arg1=*_arg1_ptr;

		osg::BlendColor* self=Luna< osg::Referenced >::checkSubType< osg::BlendColor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::BlendColor::getModeUsage(osg::StateAttribute::ModeUsage &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getModeUsage(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::BlendColor::setConstantColor(const osg::Vec4f & color)
	static int _bind_setConstantColor(lua_State *L) {
		if (!_lg_typecheck_setConstantColor(L)) {
			luaL_error(L, "luna typecheck failed in void osg::BlendColor::setConstantColor(const osg::Vec4f & color) function, expected prototype:\nvoid osg::BlendColor::setConstantColor(const osg::Vec4f & color)\nClass arguments details:\narg 1 ID = 92303235\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec4f* color_ptr=(Luna< osg::Vec4f >::check(L,2));
		if( !color_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg color in osg::BlendColor::setConstantColor function");
		}
		const osg::Vec4f & color=*color_ptr;

		osg::BlendColor* self=Luna< osg::Referenced >::checkSubType< osg::BlendColor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::BlendColor::setConstantColor(const osg::Vec4f &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setConstantColor(color);

		return 0;
	}

	// osg::Vec4f & osg::BlendColor::getConstantColor()
	static int _bind_getConstantColor_overload_1(lua_State *L) {
		if (!_lg_typecheck_getConstantColor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec4f & osg::BlendColor::getConstantColor() function, expected prototype:\nosg::Vec4f & osg::BlendColor::getConstantColor()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::BlendColor* self=Luna< osg::Referenced >::checkSubType< osg::BlendColor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec4f & osg::BlendColor::getConstantColor(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec4f* lret = &self->getConstantColor();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4f >::push(L,lret,false);

		return 1;
	}

	// const osg::Vec4f & osg::BlendColor::getConstantColor() const
	static int _bind_getConstantColor_overload_2(lua_State *L) {
		if (!_lg_typecheck_getConstantColor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec4f & osg::BlendColor::getConstantColor() const function, expected prototype:\nconst osg::Vec4f & osg::BlendColor::getConstantColor() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::BlendColor* self=Luna< osg::Referenced >::checkSubType< osg::BlendColor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec4f & osg::BlendColor::getConstantColor() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec4f* lret = &self->getConstantColor();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4f >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::BlendColor::getConstantColor
	static int _bind_getConstantColor(lua_State *L) {
		if (_lg_typecheck_getConstantColor_overload_1(L)) return _bind_getConstantColor_overload_1(L);
		if (_lg_typecheck_getConstantColor_overload_2(L)) return _bind_getConstantColor_overload_2(L);

		luaL_error(L, "error in function getConstantColor, cannot match any of the overloads for function getConstantColor:\n  getConstantColor()\n  getConstantColor()\n");
		return 0;
	}

	// void osg::BlendColor::apply(osg::State & arg1) const
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luaL_error(L, "luna typecheck failed in void osg::BlendColor::apply(osg::State & arg1) const function, expected prototype:\nvoid osg::BlendColor::apply(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::BlendColor::apply function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::BlendColor* self=Luna< osg::Referenced >::checkSubType< osg::BlendColor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::BlendColor::apply(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(_arg1);

		return 0;
	}

	// static osg::BlendColor::Extensions * osg::BlendColor::getExtensions(unsigned int contextID, bool createIfNotInitalized)
	static int _bind_getExtensions(lua_State *L) {
		if (!_lg_typecheck_getExtensions(L)) {
			luaL_error(L, "luna typecheck failed in static osg::BlendColor::Extensions * osg::BlendColor::getExtensions(unsigned int contextID, bool createIfNotInitalized) function, expected prototype:\nstatic osg::BlendColor::Extensions * osg::BlendColor::getExtensions(unsigned int contextID, bool createIfNotInitalized)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);
		bool createIfNotInitalized=(bool)(lua_toboolean(L,2)==1);

		osg::BlendColor::Extensions * lret = osg::BlendColor::getExtensions(contextID, createIfNotInitalized);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BlendColor::Extensions >::push(L,lret,false);

		return 1;
	}

	// static void osg::BlendColor::setExtensions(unsigned int contextID, osg::BlendColor::Extensions * extensions)
	static int _bind_setExtensions(lua_State *L) {
		if (!_lg_typecheck_setExtensions(L)) {
			luaL_error(L, "luna typecheck failed in static void osg::BlendColor::setExtensions(unsigned int contextID, osg::BlendColor::Extensions * extensions) function, expected prototype:\nstatic void osg::BlendColor::setExtensions(unsigned int contextID, osg::BlendColor::Extensions * extensions)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);
		osg::BlendColor::Extensions* extensions=(Luna< osg::Referenced >::checkSubType< osg::BlendColor::Extensions >(L,2));

		osg::BlendColor::setExtensions(contextID, extensions);

		return 0;
	}

	// void osg::BlendColor::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::BlendColor::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::BlendColor::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::BlendColor* self=Luna< osg::Referenced >::checkSubType< osg::BlendColor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::BlendColor::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->BlendColor::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::BlendColor::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::BlendColor::base_setName(const std::string & name) function, expected prototype:\nvoid osg::BlendColor::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::BlendColor* self=Luna< osg::Referenced >::checkSubType< osg::BlendColor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::BlendColor::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->BlendColor::setName(name);

		return 0;
	}

	// void osg::BlendColor::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::BlendColor::base_computeDataVariance() function, expected prototype:\nvoid osg::BlendColor::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::BlendColor* self=Luna< osg::Referenced >::checkSubType< osg::BlendColor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::BlendColor::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->BlendColor::computeDataVariance();

		return 0;
	}

	// void osg::BlendColor::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::BlendColor::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::BlendColor::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::BlendColor* self=Luna< osg::Referenced >::checkSubType< osg::BlendColor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::BlendColor::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->BlendColor::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::BlendColor::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::BlendColor::base_getUserData() function, expected prototype:\nosg::Referenced * osg::BlendColor::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::BlendColor* self=Luna< osg::Referenced >::checkSubType< osg::BlendColor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::BlendColor::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->BlendColor::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::BlendColor::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::BlendColor::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::BlendColor::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::BlendColor* self=Luna< osg::Referenced >::checkSubType< osg::BlendColor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::BlendColor::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->BlendColor::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::BlendColor::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// osg::Texture * osg::BlendColor::base_asTexture()
	static int _bind_base_asTexture_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asTexture_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Texture * osg::BlendColor::base_asTexture() function, expected prototype:\nosg::Texture * osg::BlendColor::base_asTexture()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::BlendColor* self=Luna< osg::Referenced >::checkSubType< osg::BlendColor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Texture * osg::BlendColor::base_asTexture(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Texture * lret = self->BlendColor::asTexture();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture >::push(L,lret,false);

		return 1;
	}

	// const osg::Texture * osg::BlendColor::base_asTexture() const
	static int _bind_base_asTexture_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asTexture_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Texture * osg::BlendColor::base_asTexture() const function, expected prototype:\nconst osg::Texture * osg::BlendColor::base_asTexture() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::BlendColor* self=Luna< osg::Referenced >::checkSubType< osg::BlendColor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Texture * osg::BlendColor::base_asTexture() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Texture * lret = self->BlendColor::asTexture();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::BlendColor::base_asTexture
	static int _bind_base_asTexture(lua_State *L) {
		if (_lg_typecheck_base_asTexture_overload_1(L)) return _bind_base_asTexture_overload_1(L);
		if (_lg_typecheck_base_asTexture_overload_2(L)) return _bind_base_asTexture_overload_2(L);

		luaL_error(L, "error in function base_asTexture, cannot match any of the overloads for function base_asTexture:\n  base_asTexture()\n  base_asTexture()\n");
		return 0;
	}

	// unsigned int osg::BlendColor::base_getMember() const
	static int _bind_base_getMember(lua_State *L) {
		if (!_lg_typecheck_base_getMember(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::BlendColor::base_getMember() const function, expected prototype:\nunsigned int osg::BlendColor::base_getMember() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::BlendColor* self=Luna< osg::Referenced >::checkSubType< osg::BlendColor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::BlendColor::base_getMember() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->BlendColor::getMember();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::BlendColor::base_isTextureAttribute() const
	static int _bind_base_isTextureAttribute(lua_State *L) {
		if (!_lg_typecheck_base_isTextureAttribute(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::BlendColor::base_isTextureAttribute() const function, expected prototype:\nbool osg::BlendColor::base_isTextureAttribute() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::BlendColor* self=Luna< osg::Referenced >::checkSubType< osg::BlendColor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::BlendColor::base_isTextureAttribute() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->BlendColor::isTextureAttribute();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::BlendColor::base_checkValidityOfAssociatedModes(osg::State & arg1) const
	static int _bind_base_checkValidityOfAssociatedModes(lua_State *L) {
		if (!_lg_typecheck_base_checkValidityOfAssociatedModes(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::BlendColor::base_checkValidityOfAssociatedModes(osg::State & arg1) const function, expected prototype:\nbool osg::BlendColor::base_checkValidityOfAssociatedModes(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::BlendColor::base_checkValidityOfAssociatedModes function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::BlendColor* self=Luna< osg::Referenced >::checkSubType< osg::BlendColor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::BlendColor::base_checkValidityOfAssociatedModes(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->BlendColor::checkValidityOfAssociatedModes(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::BlendColor::base_compileGLObjects(osg::State & arg1) const
	static int _bind_base_compileGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_compileGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::BlendColor::base_compileGLObjects(osg::State & arg1) const function, expected prototype:\nvoid osg::BlendColor::base_compileGLObjects(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::BlendColor::base_compileGLObjects function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::BlendColor* self=Luna< osg::Referenced >::checkSubType< osg::BlendColor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::BlendColor::base_compileGLObjects(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->BlendColor::compileGLObjects(_arg1);

		return 0;
	}

	// void osg::BlendColor::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::BlendColor::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::BlendColor::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::BlendColor* self=Luna< osg::Referenced >::checkSubType< osg::BlendColor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::BlendColor::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->BlendColor::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osg::BlendColor::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::BlendColor::base_cloneType() const function, expected prototype:\nosg::Object * osg::BlendColor::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::BlendColor* self=Luna< osg::Referenced >::checkSubType< osg::BlendColor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::BlendColor::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->BlendColor::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::BlendColor::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::BlendColor::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::BlendColor::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::BlendColor::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::BlendColor* self=Luna< osg::Referenced >::checkSubType< osg::BlendColor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::BlendColor::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->BlendColor::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::BlendColor::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::BlendColor::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::BlendColor::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::BlendColor* self=Luna< osg::Referenced >::checkSubType< osg::BlendColor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::BlendColor::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->BlendColor::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::BlendColor::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::BlendColor::base_libraryName() const function, expected prototype:\nconst char * osg::BlendColor::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::BlendColor* self=Luna< osg::Referenced >::checkSubType< osg::BlendColor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::BlendColor::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->BlendColor::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::BlendColor::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::BlendColor::base_className() const function, expected prototype:\nconst char * osg::BlendColor::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::BlendColor* self=Luna< osg::Referenced >::checkSubType< osg::BlendColor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::BlendColor::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->BlendColor::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::BlendColor::base_getType() const
	static int _bind_base_getType(lua_State *L) {
		if (!_lg_typecheck_base_getType(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::BlendColor::base_getType() const function, expected prototype:\nosg::StateAttribute::Type osg::BlendColor::base_getType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::BlendColor* self=Luna< osg::Referenced >::checkSubType< osg::BlendColor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::BlendColor::base_getType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::StateAttribute::Type lret = self->BlendColor::getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::BlendColor::base_compare(const osg::StateAttribute & sa) const
	static int _bind_base_compare(lua_State *L) {
		if (!_lg_typecheck_base_compare(L)) {
			luaL_error(L, "luna typecheck failed in int osg::BlendColor::base_compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::BlendColor::base_compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::StateAttribute* sa_ptr=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::BlendColor::base_compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::BlendColor* self=Luna< osg::Referenced >::checkSubType< osg::BlendColor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::BlendColor::base_compare(const osg::StateAttribute &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->BlendColor::compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::BlendColor::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const
	static int _bind_base_getModeUsage(lua_State *L) {
		if (!_lg_typecheck_base_getModeUsage(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::BlendColor::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const function, expected prototype:\nbool osg::BlendColor::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const\nClass arguments details:\narg 1 ID = 48108040\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StateAttribute::ModeUsage* _arg1_ptr=(Luna< osg::StateAttribute::ModeUsage >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::BlendColor::base_getModeUsage function");
		}
		osg::StateAttribute::ModeUsage & _arg1=*_arg1_ptr;

		osg::BlendColor* self=Luna< osg::Referenced >::checkSubType< osg::BlendColor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::BlendColor::base_getModeUsage(osg::StateAttribute::ModeUsage &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->BlendColor::getModeUsage(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::BlendColor::base_apply(osg::State & arg1) const
	static int _bind_base_apply(lua_State *L) {
		if (!_lg_typecheck_base_apply(L)) {
			luaL_error(L, "luna typecheck failed in void osg::BlendColor::base_apply(osg::State & arg1) const function, expected prototype:\nvoid osg::BlendColor::base_apply(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::BlendColor::base_apply function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::BlendColor* self=Luna< osg::Referenced >::checkSubType< osg::BlendColor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::BlendColor::base_apply(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->BlendColor::apply(_arg1);

		return 0;
	}


	// Operator binds:

};

osg::BlendColor* LunaTraits< osg::BlendColor >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_BlendColor::_bind_ctor(L);
}

void LunaTraits< osg::BlendColor >::_bind_dtor(osg::BlendColor* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::BlendColor >::className[] = "BlendColor";
const char LunaTraits< osg::BlendColor >::fullName[] = "osg::BlendColor";
const char LunaTraits< osg::BlendColor >::moduleName[] = "osg";
const char* LunaTraits< osg::BlendColor >::parents[] = {"osg.StateAttribute", 0};
const int LunaTraits< osg::BlendColor >::hash = 21043578;
const int LunaTraits< osg::BlendColor >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::BlendColor >::methods[] = {
	{"cloneType", &luna_wrapper_osg_BlendColor::_bind_cloneType},
	{"clone", &luna_wrapper_osg_BlendColor::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_BlendColor::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_BlendColor::_bind_libraryName},
	{"className", &luna_wrapper_osg_BlendColor::_bind_className},
	{"getType", &luna_wrapper_osg_BlendColor::_bind_getType},
	{"compare", &luna_wrapper_osg_BlendColor::_bind_compare},
	{"getModeUsage", &luna_wrapper_osg_BlendColor::_bind_getModeUsage},
	{"setConstantColor", &luna_wrapper_osg_BlendColor::_bind_setConstantColor},
	{"getConstantColor", &luna_wrapper_osg_BlendColor::_bind_getConstantColor},
	{"apply", &luna_wrapper_osg_BlendColor::_bind_apply},
	{"getExtensions", &luna_wrapper_osg_BlendColor::_bind_getExtensions},
	{"setExtensions", &luna_wrapper_osg_BlendColor::_bind_setExtensions},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_BlendColor::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osg_BlendColor::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_BlendColor::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_BlendColor::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_BlendColor::_bind_base_getUserData},
	{"base_asTexture", &luna_wrapper_osg_BlendColor::_bind_base_asTexture},
	{"base_getMember", &luna_wrapper_osg_BlendColor::_bind_base_getMember},
	{"base_isTextureAttribute", &luna_wrapper_osg_BlendColor::_bind_base_isTextureAttribute},
	{"base_checkValidityOfAssociatedModes", &luna_wrapper_osg_BlendColor::_bind_base_checkValidityOfAssociatedModes},
	{"base_compileGLObjects", &luna_wrapper_osg_BlendColor::_bind_base_compileGLObjects},
	{"base_releaseGLObjects", &luna_wrapper_osg_BlendColor::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osg_BlendColor::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_BlendColor::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_BlendColor::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_BlendColor::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_BlendColor::_bind_base_className},
	{"base_getType", &luna_wrapper_osg_BlendColor::_bind_base_getType},
	{"base_compare", &luna_wrapper_osg_BlendColor::_bind_base_compare},
	{"base_getModeUsage", &luna_wrapper_osg_BlendColor::_bind_base_getModeUsage},
	{"base_apply", &luna_wrapper_osg_BlendColor::_bind_base_apply},
	{"fromVoid", &luna_wrapper_osg_BlendColor::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_BlendColor::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_BlendColor::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::BlendColor >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_BlendColor::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::BlendColor >::enumValues[] = {
	{0,0}
};



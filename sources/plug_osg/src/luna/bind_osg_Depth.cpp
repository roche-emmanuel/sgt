#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_Depth.h>

class luna_wrapper_osg_Depth {
public:
	typedef Luna< osg::Depth > luna_t;

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

		osg::Depth* self= (osg::Depth*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::Depth >::push(L,self,false);
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
		//osg::Depth* ptr= dynamic_cast< osg::Depth* >(Luna< osg::Referenced >::check(L,1));
		osg::Depth* ptr= luna_caster< osg::Referenced, osg::Depth >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::Depth >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>4 ) return false;

		if( luatop>0 && (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( luatop>1 && lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Depth >(L,1))) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( luatop>1 && (!(Luna< osg::CopyOp >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>5 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( luatop>4 && lua_isboolean(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Depth >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_setFunction(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFunction(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setRange(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setZNear(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getZNear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setZFar(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getZFar(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setWriteMask(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getWriteMask(lua_State *L) {
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
	// osg::Depth::Depth(osg::Depth::Function func = osg::Depth::LESS, double zNear = 0.0, double zFar = 1.0, bool writeMask = true)
	static osg::Depth* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Depth::Depth(osg::Depth::Function func = osg::Depth::LESS, double zNear = 0.0, double zFar = 1.0, bool writeMask = true) function, expected prototype:\nosg::Depth::Depth(osg::Depth::Function func = osg::Depth::LESS, double zNear = 0.0, double zFar = 1.0, bool writeMask = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::Depth::Function func=luatop>0 ? (osg::Depth::Function)lua_tointeger(L,1) : (osg::Depth::Function)osg::Depth::LESS;
		double zNear=luatop>1 ? (double)lua_tonumber(L,2) : (double)0.0;
		double zFar=luatop>2 ? (double)lua_tonumber(L,3) : (double)1.0;
		bool writeMask=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)true;

		return new osg::Depth(func, zNear, zFar, writeMask);
	}

	// osg::Depth::Depth(const osg::Depth & dp, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::Depth* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Depth::Depth(const osg::Depth & dp, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::Depth::Depth(const osg::Depth & dp, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::Depth* dp_ptr=(Luna< osg::Referenced >::checkSubType< osg::Depth >(L,1));
		if( !dp_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dp in osg::Depth::Depth function");
		}
		const osg::Depth & dp=*dp_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Depth::Depth function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osg::Depth(dp, copyop);
	}

	// osg::Depth::Depth(lua_Table * data, osg::Depth::Function func = osg::Depth::LESS, double zNear = 0.0, double zFar = 1.0, bool writeMask = true)
	static osg::Depth* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::Depth::Depth(lua_Table * data, osg::Depth::Function func = osg::Depth::LESS, double zNear = 0.0, double zFar = 1.0, bool writeMask = true) function, expected prototype:\nosg::Depth::Depth(lua_Table * data, osg::Depth::Function func = osg::Depth::LESS, double zNear = 0.0, double zFar = 1.0, bool writeMask = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::Depth::Function func=luatop>1 ? (osg::Depth::Function)lua_tointeger(L,2) : (osg::Depth::Function)osg::Depth::LESS;
		double zNear=luatop>2 ? (double)lua_tonumber(L,3) : (double)0.0;
		double zFar=luatop>3 ? (double)lua_tonumber(L,4) : (double)1.0;
		bool writeMask=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : (bool)true;

		return new wrapper_osg_Depth(L,NULL, func, zNear, zFar, writeMask);
	}

	// osg::Depth::Depth(lua_Table * data, const osg::Depth & dp, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::Depth* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::Depth::Depth(lua_Table * data, const osg::Depth & dp, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::Depth::Depth(lua_Table * data, const osg::Depth & dp, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::Depth* dp_ptr=(Luna< osg::Referenced >::checkSubType< osg::Depth >(L,2));
		if( !dp_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dp in osg::Depth::Depth function");
		}
		const osg::Depth & dp=*dp_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Depth::Depth function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_Depth(L,NULL, dp, copyop);
	}

	// Overload binder for osg::Depth::Depth
	static osg::Depth* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function Depth, cannot match any of the overloads for function Depth:\n  Depth(osg::Depth::Function, double, double, bool)\n  Depth(const osg::Depth &, const osg::CopyOp &)\n  Depth(lua_Table *, osg::Depth::Function, double, double, bool)\n  Depth(lua_Table *, const osg::Depth &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::Depth::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Depth::cloneType() const function, expected prototype:\nosg::Object * osg::Depth::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Depth* self=Luna< osg::Referenced >::checkSubType< osg::Depth >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Depth::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Depth::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Depth::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::Depth::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Depth::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::Depth* self=Luna< osg::Referenced >::checkSubType< osg::Depth >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Depth::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::Depth::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Depth::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Depth::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::Depth* self=Luna< osg::Referenced >::checkSubType< osg::Depth >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Depth::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Depth::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Depth::libraryName() const function, expected prototype:\nconst char * osg::Depth::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Depth* self=Luna< osg::Referenced >::checkSubType< osg::Depth >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Depth::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Depth::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Depth::className() const function, expected prototype:\nconst char * osg::Depth::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Depth* self=Luna< osg::Referenced >::checkSubType< osg::Depth >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Depth::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::Depth::getType() const
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::Depth::getType() const function, expected prototype:\nosg::StateAttribute::Type osg::Depth::getType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Depth* self=Luna< osg::Referenced >::checkSubType< osg::Depth >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::Depth::getType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::StateAttribute::Type lret = self->getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Depth::compare(const osg::StateAttribute & sa) const
	static int _bind_compare(lua_State *L) {
		if (!_lg_typecheck_compare(L)) {
			luaL_error(L, "luna typecheck failed in int osg::Depth::compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::Depth::compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::StateAttribute* sa_ptr=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::Depth::compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::Depth* self=Luna< osg::Referenced >::checkSubType< osg::Depth >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::Depth::compare(const osg::StateAttribute &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::Depth::getModeUsage(osg::StateAttribute::ModeUsage & arg1) const
	static int _bind_getModeUsage(lua_State *L) {
		if (!_lg_typecheck_getModeUsage(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Depth::getModeUsage(osg::StateAttribute::ModeUsage & arg1) const function, expected prototype:\nbool osg::Depth::getModeUsage(osg::StateAttribute::ModeUsage & arg1) const\nClass arguments details:\narg 1 ID = 48108040\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StateAttribute::ModeUsage* _arg1_ptr=(Luna< osg::StateAttribute::ModeUsage >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Depth::getModeUsage function");
		}
		osg::StateAttribute::ModeUsage & _arg1=*_arg1_ptr;

		osg::Depth* self=Luna< osg::Referenced >::checkSubType< osg::Depth >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Depth::getModeUsage(osg::StateAttribute::ModeUsage &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getModeUsage(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Depth::setFunction(osg::Depth::Function func)
	static int _bind_setFunction(lua_State *L) {
		if (!_lg_typecheck_setFunction(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Depth::setFunction(osg::Depth::Function func) function, expected prototype:\nvoid osg::Depth::setFunction(osg::Depth::Function func)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Depth::Function func=(osg::Depth::Function)lua_tointeger(L,2);

		osg::Depth* self=Luna< osg::Referenced >::checkSubType< osg::Depth >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Depth::setFunction(osg::Depth::Function). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setFunction(func);

		return 0;
	}

	// osg::Depth::Function osg::Depth::getFunction() const
	static int _bind_getFunction(lua_State *L) {
		if (!_lg_typecheck_getFunction(L)) {
			luaL_error(L, "luna typecheck failed in osg::Depth::Function osg::Depth::getFunction() const function, expected prototype:\nosg::Depth::Function osg::Depth::getFunction() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Depth* self=Luna< osg::Referenced >::checkSubType< osg::Depth >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Depth::Function osg::Depth::getFunction() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Depth::Function lret = self->getFunction();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Depth::setRange(double zNear, double zFar)
	static int _bind_setRange(lua_State *L) {
		if (!_lg_typecheck_setRange(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Depth::setRange(double zNear, double zFar) function, expected prototype:\nvoid osg::Depth::setRange(double zNear, double zFar)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double zNear=(double)lua_tonumber(L,2);
		double zFar=(double)lua_tonumber(L,3);

		osg::Depth* self=Luna< osg::Referenced >::checkSubType< osg::Depth >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Depth::setRange(double, double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setRange(zNear, zFar);

		return 0;
	}

	// void osg::Depth::setZNear(double zNear)
	static int _bind_setZNear(lua_State *L) {
		if (!_lg_typecheck_setZNear(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Depth::setZNear(double zNear) function, expected prototype:\nvoid osg::Depth::setZNear(double zNear)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double zNear=(double)lua_tonumber(L,2);

		osg::Depth* self=Luna< osg::Referenced >::checkSubType< osg::Depth >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Depth::setZNear(double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setZNear(zNear);

		return 0;
	}

	// double osg::Depth::getZNear() const
	static int _bind_getZNear(lua_State *L) {
		if (!_lg_typecheck_getZNear(L)) {
			luaL_error(L, "luna typecheck failed in double osg::Depth::getZNear() const function, expected prototype:\ndouble osg::Depth::getZNear() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Depth* self=Luna< osg::Referenced >::checkSubType< osg::Depth >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double osg::Depth::getZNear() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getZNear();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Depth::setZFar(double zFar)
	static int _bind_setZFar(lua_State *L) {
		if (!_lg_typecheck_setZFar(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Depth::setZFar(double zFar) function, expected prototype:\nvoid osg::Depth::setZFar(double zFar)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double zFar=(double)lua_tonumber(L,2);

		osg::Depth* self=Luna< osg::Referenced >::checkSubType< osg::Depth >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Depth::setZFar(double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setZFar(zFar);

		return 0;
	}

	// double osg::Depth::getZFar() const
	static int _bind_getZFar(lua_State *L) {
		if (!_lg_typecheck_getZFar(L)) {
			luaL_error(L, "luna typecheck failed in double osg::Depth::getZFar() const function, expected prototype:\ndouble osg::Depth::getZFar() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Depth* self=Luna< osg::Referenced >::checkSubType< osg::Depth >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double osg::Depth::getZFar() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getZFar();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Depth::setWriteMask(bool mask)
	static int _bind_setWriteMask(lua_State *L) {
		if (!_lg_typecheck_setWriteMask(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Depth::setWriteMask(bool mask) function, expected prototype:\nvoid osg::Depth::setWriteMask(bool mask)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool mask=(bool)(lua_toboolean(L,2)==1);

		osg::Depth* self=Luna< osg::Referenced >::checkSubType< osg::Depth >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Depth::setWriteMask(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setWriteMask(mask);

		return 0;
	}

	// bool osg::Depth::getWriteMask() const
	static int _bind_getWriteMask(lua_State *L) {
		if (!_lg_typecheck_getWriteMask(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Depth::getWriteMask() const function, expected prototype:\nbool osg::Depth::getWriteMask() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Depth* self=Luna< osg::Referenced >::checkSubType< osg::Depth >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Depth::getWriteMask() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getWriteMask();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Depth::apply(osg::State & arg1) const
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Depth::apply(osg::State & arg1) const function, expected prototype:\nvoid osg::Depth::apply(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Depth::apply function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::Depth* self=Luna< osg::Referenced >::checkSubType< osg::Depth >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Depth::apply(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::Depth::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Depth::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::Depth::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::Depth* self=Luna< osg::Referenced >::checkSubType< osg::Depth >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Depth::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Depth::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::Depth::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Depth::base_setName(const std::string & name) function, expected prototype:\nvoid osg::Depth::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::Depth* self=Luna< osg::Referenced >::checkSubType< osg::Depth >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Depth::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Depth::setName(name);

		return 0;
	}

	// void osg::Depth::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Depth::base_computeDataVariance() function, expected prototype:\nvoid osg::Depth::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Depth* self=Luna< osg::Referenced >::checkSubType< osg::Depth >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Depth::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Depth::computeDataVariance();

		return 0;
	}

	// void osg::Depth::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Depth::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::Depth::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::Depth* self=Luna< osg::Referenced >::checkSubType< osg::Depth >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Depth::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Depth::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::Depth::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::Depth::base_getUserData() function, expected prototype:\nosg::Referenced * osg::Depth::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Depth* self=Luna< osg::Referenced >::checkSubType< osg::Depth >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::Depth::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->Depth::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::Depth::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::Depth::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::Depth::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Depth* self=Luna< osg::Referenced >::checkSubType< osg::Depth >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::Depth::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->Depth::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Depth::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// osg::Texture * osg::Depth::base_asTexture()
	static int _bind_base_asTexture_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asTexture_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Texture * osg::Depth::base_asTexture() function, expected prototype:\nosg::Texture * osg::Depth::base_asTexture()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Depth* self=Luna< osg::Referenced >::checkSubType< osg::Depth >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Texture * osg::Depth::base_asTexture(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Texture * lret = self->Depth::asTexture();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture >::push(L,lret,false);

		return 1;
	}

	// const osg::Texture * osg::Depth::base_asTexture() const
	static int _bind_base_asTexture_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asTexture_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Texture * osg::Depth::base_asTexture() const function, expected prototype:\nconst osg::Texture * osg::Depth::base_asTexture() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Depth* self=Luna< osg::Referenced >::checkSubType< osg::Depth >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Texture * osg::Depth::base_asTexture() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Texture * lret = self->Depth::asTexture();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Depth::base_asTexture
	static int _bind_base_asTexture(lua_State *L) {
		if (_lg_typecheck_base_asTexture_overload_1(L)) return _bind_base_asTexture_overload_1(L);
		if (_lg_typecheck_base_asTexture_overload_2(L)) return _bind_base_asTexture_overload_2(L);

		luaL_error(L, "error in function base_asTexture, cannot match any of the overloads for function base_asTexture:\n  base_asTexture()\n  base_asTexture()\n");
		return 0;
	}

	// unsigned int osg::Depth::base_getMember() const
	static int _bind_base_getMember(lua_State *L) {
		if (!_lg_typecheck_base_getMember(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Depth::base_getMember() const function, expected prototype:\nunsigned int osg::Depth::base_getMember() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Depth* self=Luna< osg::Referenced >::checkSubType< osg::Depth >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Depth::base_getMember() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->Depth::getMember();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::Depth::base_isTextureAttribute() const
	static int _bind_base_isTextureAttribute(lua_State *L) {
		if (!_lg_typecheck_base_isTextureAttribute(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Depth::base_isTextureAttribute() const function, expected prototype:\nbool osg::Depth::base_isTextureAttribute() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Depth* self=Luna< osg::Referenced >::checkSubType< osg::Depth >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Depth::base_isTextureAttribute() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Depth::isTextureAttribute();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Depth::base_checkValidityOfAssociatedModes(osg::State & arg1) const
	static int _bind_base_checkValidityOfAssociatedModes(lua_State *L) {
		if (!_lg_typecheck_base_checkValidityOfAssociatedModes(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Depth::base_checkValidityOfAssociatedModes(osg::State & arg1) const function, expected prototype:\nbool osg::Depth::base_checkValidityOfAssociatedModes(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Depth::base_checkValidityOfAssociatedModes function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::Depth* self=Luna< osg::Referenced >::checkSubType< osg::Depth >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Depth::base_checkValidityOfAssociatedModes(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Depth::checkValidityOfAssociatedModes(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Depth::base_compileGLObjects(osg::State & arg1) const
	static int _bind_base_compileGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_compileGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Depth::base_compileGLObjects(osg::State & arg1) const function, expected prototype:\nvoid osg::Depth::base_compileGLObjects(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Depth::base_compileGLObjects function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::Depth* self=Luna< osg::Referenced >::checkSubType< osg::Depth >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Depth::base_compileGLObjects(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Depth::compileGLObjects(_arg1);

		return 0;
	}

	// void osg::Depth::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Depth::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::Depth::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::Depth* self=Luna< osg::Referenced >::checkSubType< osg::Depth >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Depth::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Depth::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osg::Depth::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Depth::base_cloneType() const function, expected prototype:\nosg::Object * osg::Depth::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Depth* self=Luna< osg::Referenced >::checkSubType< osg::Depth >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Depth::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->Depth::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Depth::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Depth::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::Depth::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Depth::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::Depth* self=Luna< osg::Referenced >::checkSubType< osg::Depth >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Depth::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->Depth::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::Depth::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Depth::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Depth::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::Depth* self=Luna< osg::Referenced >::checkSubType< osg::Depth >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Depth::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Depth::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Depth::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Depth::base_libraryName() const function, expected prototype:\nconst char * osg::Depth::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Depth* self=Luna< osg::Referenced >::checkSubType< osg::Depth >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Depth::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Depth::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Depth::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Depth::base_className() const function, expected prototype:\nconst char * osg::Depth::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Depth* self=Luna< osg::Referenced >::checkSubType< osg::Depth >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Depth::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Depth::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::Depth::base_getType() const
	static int _bind_base_getType(lua_State *L) {
		if (!_lg_typecheck_base_getType(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::Depth::base_getType() const function, expected prototype:\nosg::StateAttribute::Type osg::Depth::base_getType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Depth* self=Luna< osg::Referenced >::checkSubType< osg::Depth >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::Depth::base_getType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::StateAttribute::Type lret = self->Depth::getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Depth::base_compare(const osg::StateAttribute & sa) const
	static int _bind_base_compare(lua_State *L) {
		if (!_lg_typecheck_base_compare(L)) {
			luaL_error(L, "luna typecheck failed in int osg::Depth::base_compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::Depth::base_compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::StateAttribute* sa_ptr=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::Depth::base_compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::Depth* self=Luna< osg::Referenced >::checkSubType< osg::Depth >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::Depth::base_compare(const osg::StateAttribute &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->Depth::compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::Depth::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const
	static int _bind_base_getModeUsage(lua_State *L) {
		if (!_lg_typecheck_base_getModeUsage(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Depth::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const function, expected prototype:\nbool osg::Depth::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const\nClass arguments details:\narg 1 ID = 48108040\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StateAttribute::ModeUsage* _arg1_ptr=(Luna< osg::StateAttribute::ModeUsage >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Depth::base_getModeUsage function");
		}
		osg::StateAttribute::ModeUsage & _arg1=*_arg1_ptr;

		osg::Depth* self=Luna< osg::Referenced >::checkSubType< osg::Depth >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Depth::base_getModeUsage(osg::StateAttribute::ModeUsage &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Depth::getModeUsage(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Depth::base_apply(osg::State & arg1) const
	static int _bind_base_apply(lua_State *L) {
		if (!_lg_typecheck_base_apply(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Depth::base_apply(osg::State & arg1) const function, expected prototype:\nvoid osg::Depth::base_apply(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Depth::base_apply function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::Depth* self=Luna< osg::Referenced >::checkSubType< osg::Depth >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Depth::base_apply(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Depth::apply(_arg1);

		return 0;
	}


	// Operator binds:

};

osg::Depth* LunaTraits< osg::Depth >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Depth::_bind_ctor(L);
}

void LunaTraits< osg::Depth >::_bind_dtor(osg::Depth* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::Depth >::className[] = "Depth";
const char LunaTraits< osg::Depth >::fullName[] = "osg::Depth";
const char LunaTraits< osg::Depth >::moduleName[] = "osg";
const char* LunaTraits< osg::Depth >::parents[] = {"osg.StateAttribute", 0};
const int LunaTraits< osg::Depth >::hash = 75694336;
const int LunaTraits< osg::Depth >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::Depth >::methods[] = {
	{"cloneType", &luna_wrapper_osg_Depth::_bind_cloneType},
	{"clone", &luna_wrapper_osg_Depth::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_Depth::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_Depth::_bind_libraryName},
	{"className", &luna_wrapper_osg_Depth::_bind_className},
	{"getType", &luna_wrapper_osg_Depth::_bind_getType},
	{"compare", &luna_wrapper_osg_Depth::_bind_compare},
	{"getModeUsage", &luna_wrapper_osg_Depth::_bind_getModeUsage},
	{"setFunction", &luna_wrapper_osg_Depth::_bind_setFunction},
	{"getFunction", &luna_wrapper_osg_Depth::_bind_getFunction},
	{"setRange", &luna_wrapper_osg_Depth::_bind_setRange},
	{"setZNear", &luna_wrapper_osg_Depth::_bind_setZNear},
	{"getZNear", &luna_wrapper_osg_Depth::_bind_getZNear},
	{"setZFar", &luna_wrapper_osg_Depth::_bind_setZFar},
	{"getZFar", &luna_wrapper_osg_Depth::_bind_getZFar},
	{"setWriteMask", &luna_wrapper_osg_Depth::_bind_setWriteMask},
	{"getWriteMask", &luna_wrapper_osg_Depth::_bind_getWriteMask},
	{"apply", &luna_wrapper_osg_Depth::_bind_apply},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_Depth::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osg_Depth::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_Depth::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_Depth::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_Depth::_bind_base_getUserData},
	{"base_asTexture", &luna_wrapper_osg_Depth::_bind_base_asTexture},
	{"base_getMember", &luna_wrapper_osg_Depth::_bind_base_getMember},
	{"base_isTextureAttribute", &luna_wrapper_osg_Depth::_bind_base_isTextureAttribute},
	{"base_checkValidityOfAssociatedModes", &luna_wrapper_osg_Depth::_bind_base_checkValidityOfAssociatedModes},
	{"base_compileGLObjects", &luna_wrapper_osg_Depth::_bind_base_compileGLObjects},
	{"base_releaseGLObjects", &luna_wrapper_osg_Depth::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osg_Depth::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_Depth::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_Depth::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_Depth::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_Depth::_bind_base_className},
	{"base_getType", &luna_wrapper_osg_Depth::_bind_base_getType},
	{"base_compare", &luna_wrapper_osg_Depth::_bind_base_compare},
	{"base_getModeUsage", &luna_wrapper_osg_Depth::_bind_base_getModeUsage},
	{"base_apply", &luna_wrapper_osg_Depth::_bind_base_apply},
	{"fromVoid", &luna_wrapper_osg_Depth::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_Depth::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_Depth::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Depth >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_Depth::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Depth >::enumValues[] = {
	{"NEVER", osg::Depth::NEVER},
	{"LESS", osg::Depth::LESS},
	{"EQUAL", osg::Depth::EQUAL},
	{"LEQUAL", osg::Depth::LEQUAL},
	{"GREATER", osg::Depth::GREATER},
	{"NOTEQUAL", osg::Depth::NOTEQUAL},
	{"GEQUAL", osg::Depth::GEQUAL},
	{"ALWAYS", osg::Depth::ALWAYS},
	{0,0}
};



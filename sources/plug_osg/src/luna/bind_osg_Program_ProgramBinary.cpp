#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_Program_ProgramBinary.h>

class luna_wrapper_osg_Program_ProgramBinary {
public:
	typedef Luna< osg::Program::ProgramBinary > luna_t;

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

		osg::Program::ProgramBinary* self= (osg::Program::ProgramBinary*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::Program::ProgramBinary >::push(L,self,false);
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
		//osg::Program::ProgramBinary* ptr= dynamic_cast< osg::Program::ProgramBinary* >(Luna< osg::Referenced >::check(L,1));
		osg::Program::ProgramBinary* ptr= luna_caster< osg::Referenced, osg::Program::ProgramBinary >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::Program::ProgramBinary >::push(L,ptr,false);
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Program::ProgramBinary >(L,1))) ) return false;
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Program::ProgramBinary >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_assign(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFormat(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFormat(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getData_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getData_overload_2(lua_State *L) {
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
	// osg::Program::ProgramBinary::ProgramBinary()
	static osg::Program::ProgramBinary* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Program::ProgramBinary::ProgramBinary() function, expected prototype:\nosg::Program::ProgramBinary::ProgramBinary()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::Program::ProgramBinary();
	}

	// osg::Program::ProgramBinary::ProgramBinary(const osg::Program::ProgramBinary & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::Program::ProgramBinary* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Program::ProgramBinary::ProgramBinary(const osg::Program::ProgramBinary & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::Program::ProgramBinary::ProgramBinary(const osg::Program::ProgramBinary & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::Program::ProgramBinary* rhs_ptr=(Luna< osg::Referenced >::checkSubType< osg::Program::ProgramBinary >(L,1));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Program::ProgramBinary::ProgramBinary function");
		}
		const osg::Program::ProgramBinary & rhs=*rhs_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Program::ProgramBinary::ProgramBinary function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osg::Program::ProgramBinary(rhs, copyop);
	}

	// osg::Program::ProgramBinary::ProgramBinary(lua_Table * data)
	static osg::Program::ProgramBinary* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::Program::ProgramBinary::ProgramBinary(lua_Table * data) function, expected prototype:\nosg::Program::ProgramBinary::ProgramBinary(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_Program_ProgramBinary(L,NULL);
	}

	// osg::Program::ProgramBinary::ProgramBinary(lua_Table * data, const osg::Program::ProgramBinary & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::Program::ProgramBinary* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::Program::ProgramBinary::ProgramBinary(lua_Table * data, const osg::Program::ProgramBinary & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::Program::ProgramBinary::ProgramBinary(lua_Table * data, const osg::Program::ProgramBinary & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::Program::ProgramBinary* rhs_ptr=(Luna< osg::Referenced >::checkSubType< osg::Program::ProgramBinary >(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Program::ProgramBinary::ProgramBinary function");
		}
		const osg::Program::ProgramBinary & rhs=*rhs_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Program::ProgramBinary::ProgramBinary function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_Program_ProgramBinary(L,NULL, rhs, copyop);
	}

	// Overload binder for osg::Program::ProgramBinary::ProgramBinary
	static osg::Program::ProgramBinary* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function ProgramBinary, cannot match any of the overloads for function ProgramBinary:\n  ProgramBinary()\n  ProgramBinary(const osg::Program::ProgramBinary &, const osg::CopyOp &)\n  ProgramBinary(lua_Table *)\n  ProgramBinary(lua_Table *, const osg::Program::ProgramBinary &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::Program::ProgramBinary::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Program::ProgramBinary::cloneType() const function, expected prototype:\nosg::Object * osg::Program::ProgramBinary::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Program::ProgramBinary* self=Luna< osg::Referenced >::checkSubType< osg::Program::ProgramBinary >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Program::ProgramBinary::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Program::ProgramBinary::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Program::ProgramBinary::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::Program::ProgramBinary::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Program::ProgramBinary::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::Program::ProgramBinary* self=Luna< osg::Referenced >::checkSubType< osg::Program::ProgramBinary >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Program::ProgramBinary::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::Program::ProgramBinary::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Program::ProgramBinary::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Program::ProgramBinary::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::Program::ProgramBinary* self=Luna< osg::Referenced >::checkSubType< osg::Program::ProgramBinary >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Program::ProgramBinary::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Program::ProgramBinary::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Program::ProgramBinary::libraryName() const function, expected prototype:\nconst char * osg::Program::ProgramBinary::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Program::ProgramBinary* self=Luna< osg::Referenced >::checkSubType< osg::Program::ProgramBinary >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Program::ProgramBinary::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Program::ProgramBinary::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Program::ProgramBinary::className() const function, expected prototype:\nconst char * osg::Program::ProgramBinary::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Program::ProgramBinary* self=Luna< osg::Referenced >::checkSubType< osg::Program::ProgramBinary >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Program::ProgramBinary::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::Program::ProgramBinary::assign(unsigned int size, const unsigned char * data)
	static int _bind_assign(lua_State *L) {
		if (!_lg_typecheck_assign(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Program::ProgramBinary::assign(unsigned int size, const unsigned char * data) function, expected prototype:\nvoid osg::Program::ProgramBinary::assign(unsigned int size, const unsigned char * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int size=(unsigned int)lua_tointeger(L,2);
		unsigned char data = (unsigned char)(lua_tointeger(L,3));

		osg::Program::ProgramBinary* self=Luna< osg::Referenced >::checkSubType< osg::Program::ProgramBinary >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Program::ProgramBinary::assign(unsigned int, const unsigned char *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->assign(size, &data);

		return 0;
	}

	// void osg::Program::ProgramBinary::setFormat(unsigned int format)
	static int _bind_setFormat(lua_State *L) {
		if (!_lg_typecheck_setFormat(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Program::ProgramBinary::setFormat(unsigned int format) function, expected prototype:\nvoid osg::Program::ProgramBinary::setFormat(unsigned int format)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int format=(unsigned int)lua_tointeger(L,2);

		osg::Program::ProgramBinary* self=Luna< osg::Referenced >::checkSubType< osg::Program::ProgramBinary >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Program::ProgramBinary::setFormat(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setFormat(format);

		return 0;
	}

	// unsigned int osg::Program::ProgramBinary::getFormat() const
	static int _bind_getFormat(lua_State *L) {
		if (!_lg_typecheck_getFormat(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Program::ProgramBinary::getFormat() const function, expected prototype:\nunsigned int osg::Program::ProgramBinary::getFormat() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Program::ProgramBinary* self=Luna< osg::Referenced >::checkSubType< osg::Program::ProgramBinary >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Program::ProgramBinary::getFormat() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getFormat();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::Program::ProgramBinary::getSize() const
	static int _bind_getSize(lua_State *L) {
		if (!_lg_typecheck_getSize(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Program::ProgramBinary::getSize() const function, expected prototype:\nunsigned int osg::Program::ProgramBinary::getSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Program::ProgramBinary* self=Luna< osg::Referenced >::checkSubType< osg::Program::ProgramBinary >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Program::ProgramBinary::getSize() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned char * osg::Program::ProgramBinary::getData()
	static int _bind_getData_overload_1(lua_State *L) {
		if (!_lg_typecheck_getData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char * osg::Program::ProgramBinary::getData() function, expected prototype:\nunsigned char * osg::Program::ProgramBinary::getData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Program::ProgramBinary* self=Luna< osg::Referenced >::checkSubType< osg::Program::ProgramBinary >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char * osg::Program::ProgramBinary::getData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char * lret = self->getData();
		luaL_error(L,"Trying to convert pointer on unsigned char lret to lua. This usage should be clarifierd.");

		return 1;
	}

	// const unsigned char * osg::Program::ProgramBinary::getData() const
	static int _bind_getData_overload_2(lua_State *L) {
		if (!_lg_typecheck_getData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const unsigned char * osg::Program::ProgramBinary::getData() const function, expected prototype:\nconst unsigned char * osg::Program::ProgramBinary::getData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Program::ProgramBinary* self=Luna< osg::Referenced >::checkSubType< osg::Program::ProgramBinary >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const unsigned char * osg::Program::ProgramBinary::getData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const unsigned char * lret = self->getData();
		luaL_error(L,"Trying to convert pointer on unsigned char lret to lua. This usage should be clarifierd.");

		return 1;
	}

	// Overload binder for osg::Program::ProgramBinary::getData
	static int _bind_getData(lua_State *L) {
		if (_lg_typecheck_getData_overload_1(L)) return _bind_getData_overload_1(L);
		if (_lg_typecheck_getData_overload_2(L)) return _bind_getData_overload_2(L);

		luaL_error(L, "error in function getData, cannot match any of the overloads for function getData:\n  getData()\n  getData()\n");
		return 0;
	}

	// void osg::Program::ProgramBinary::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Program::ProgramBinary::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::Program::ProgramBinary::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::Program::ProgramBinary* self=Luna< osg::Referenced >::checkSubType< osg::Program::ProgramBinary >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Program::ProgramBinary::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ProgramBinary::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::Program::ProgramBinary::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Program::ProgramBinary::base_setName(const std::string & name) function, expected prototype:\nvoid osg::Program::ProgramBinary::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::Program::ProgramBinary* self=Luna< osg::Referenced >::checkSubType< osg::Program::ProgramBinary >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Program::ProgramBinary::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ProgramBinary::setName(name);

		return 0;
	}

	// void osg::Program::ProgramBinary::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Program::ProgramBinary::base_computeDataVariance() function, expected prototype:\nvoid osg::Program::ProgramBinary::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Program::ProgramBinary* self=Luna< osg::Referenced >::checkSubType< osg::Program::ProgramBinary >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Program::ProgramBinary::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ProgramBinary::computeDataVariance();

		return 0;
	}

	// void osg::Program::ProgramBinary::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Program::ProgramBinary::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::Program::ProgramBinary::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::Program::ProgramBinary* self=Luna< osg::Referenced >::checkSubType< osg::Program::ProgramBinary >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Program::ProgramBinary::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ProgramBinary::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::Program::ProgramBinary::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::Program::ProgramBinary::base_getUserData() function, expected prototype:\nosg::Referenced * osg::Program::ProgramBinary::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Program::ProgramBinary* self=Luna< osg::Referenced >::checkSubType< osg::Program::ProgramBinary >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::Program::ProgramBinary::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->ProgramBinary::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::Program::ProgramBinary::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::Program::ProgramBinary::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::Program::ProgramBinary::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Program::ProgramBinary* self=Luna< osg::Referenced >::checkSubType< osg::Program::ProgramBinary >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::Program::ProgramBinary::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->ProgramBinary::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Program::ProgramBinary::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osg::Program::ProgramBinary::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Program::ProgramBinary::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::Program::ProgramBinary::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::Program::ProgramBinary* self=Luna< osg::Referenced >::checkSubType< osg::Program::ProgramBinary >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Program::ProgramBinary::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ProgramBinary::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osg::Program::ProgramBinary::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Program::ProgramBinary::base_cloneType() const function, expected prototype:\nosg::Object * osg::Program::ProgramBinary::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Program::ProgramBinary* self=Luna< osg::Referenced >::checkSubType< osg::Program::ProgramBinary >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Program::ProgramBinary::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->ProgramBinary::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Program::ProgramBinary::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Program::ProgramBinary::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::Program::ProgramBinary::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Program::ProgramBinary::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::Program::ProgramBinary* self=Luna< osg::Referenced >::checkSubType< osg::Program::ProgramBinary >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::Program::ProgramBinary::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->ProgramBinary::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::Program::ProgramBinary::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Program::ProgramBinary::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Program::ProgramBinary::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::Program::ProgramBinary* self=Luna< osg::Referenced >::checkSubType< osg::Program::ProgramBinary >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Program::ProgramBinary::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ProgramBinary::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Program::ProgramBinary::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Program::ProgramBinary::base_libraryName() const function, expected prototype:\nconst char * osg::Program::ProgramBinary::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Program::ProgramBinary* self=Luna< osg::Referenced >::checkSubType< osg::Program::ProgramBinary >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Program::ProgramBinary::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->ProgramBinary::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Program::ProgramBinary::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::Program::ProgramBinary::base_className() const function, expected prototype:\nconst char * osg::Program::ProgramBinary::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Program::ProgramBinary* self=Luna< osg::Referenced >::checkSubType< osg::Program::ProgramBinary >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::Program::ProgramBinary::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->ProgramBinary::className();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

osg::Program::ProgramBinary* LunaTraits< osg::Program::ProgramBinary >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Program_ProgramBinary::_bind_ctor(L);
}

void LunaTraits< osg::Program::ProgramBinary >::_bind_dtor(osg::Program::ProgramBinary* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::Program::ProgramBinary >::className[] = "Program_ProgramBinary";
const char LunaTraits< osg::Program::ProgramBinary >::fullName[] = "osg::Program::ProgramBinary";
const char LunaTraits< osg::Program::ProgramBinary >::moduleName[] = "osg";
const char* LunaTraits< osg::Program::ProgramBinary >::parents[] = {"osg.Object", 0};
const int LunaTraits< osg::Program::ProgramBinary >::hash = 72344532;
const int LunaTraits< osg::Program::ProgramBinary >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::Program::ProgramBinary >::methods[] = {
	{"cloneType", &luna_wrapper_osg_Program_ProgramBinary::_bind_cloneType},
	{"clone", &luna_wrapper_osg_Program_ProgramBinary::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_Program_ProgramBinary::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_Program_ProgramBinary::_bind_libraryName},
	{"className", &luna_wrapper_osg_Program_ProgramBinary::_bind_className},
	{"assign", &luna_wrapper_osg_Program_ProgramBinary::_bind_assign},
	{"setFormat", &luna_wrapper_osg_Program_ProgramBinary::_bind_setFormat},
	{"getFormat", &luna_wrapper_osg_Program_ProgramBinary::_bind_getFormat},
	{"getSize", &luna_wrapper_osg_Program_ProgramBinary::_bind_getSize},
	{"getData", &luna_wrapper_osg_Program_ProgramBinary::_bind_getData},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_Program_ProgramBinary::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osg_Program_ProgramBinary::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_Program_ProgramBinary::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_Program_ProgramBinary::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_Program_ProgramBinary::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osg_Program_ProgramBinary::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osg_Program_ProgramBinary::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_Program_ProgramBinary::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_Program_ProgramBinary::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_Program_ProgramBinary::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_Program_ProgramBinary::_bind_base_className},
	{"fromVoid", &luna_wrapper_osg_Program_ProgramBinary::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_Program_ProgramBinary::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_Program_ProgramBinary::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Program::ProgramBinary >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_Program_ProgramBinary::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Program::ProgramBinary >::enumValues[] = {
	{0,0}
};



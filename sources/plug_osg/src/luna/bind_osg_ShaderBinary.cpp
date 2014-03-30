#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_ShaderBinary.h>

class luna_wrapper_osg_ShaderBinary {
public:
	typedef Luna< osg::ShaderBinary > luna_t;

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

		osg::ShaderBinary* self= (osg::ShaderBinary*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::ShaderBinary >::push(L,self,false);
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
		//osg::ShaderBinary* ptr= dynamic_cast< osg::ShaderBinary* >(Luna< osg::Referenced >::check(L,1));
		osg::ShaderBinary* ptr= luna_caster< osg::Referenced, osg::ShaderBinary >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::ShaderBinary >::push(L,ptr,false);
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::ShaderBinary >(L,1))) ) return false;
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::ShaderBinary >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_readShaderBinaryFile(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
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
	// osg::ShaderBinary::ShaderBinary()
	static osg::ShaderBinary* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::ShaderBinary::ShaderBinary() function, expected prototype:\nosg::ShaderBinary::ShaderBinary()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::ShaderBinary();
	}

	// osg::ShaderBinary::ShaderBinary(const osg::ShaderBinary & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::ShaderBinary* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::ShaderBinary::ShaderBinary(const osg::ShaderBinary & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::ShaderBinary::ShaderBinary(const osg::ShaderBinary & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::ShaderBinary* rhs_ptr=(Luna< osg::Referenced >::checkSubType< osg::ShaderBinary >(L,1));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::ShaderBinary::ShaderBinary function");
		}
		const osg::ShaderBinary & rhs=*rhs_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::ShaderBinary::ShaderBinary function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osg::ShaderBinary(rhs, copyop);
	}

	// osg::ShaderBinary::ShaderBinary(lua_Table * data)
	static osg::ShaderBinary* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::ShaderBinary::ShaderBinary(lua_Table * data) function, expected prototype:\nosg::ShaderBinary::ShaderBinary(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_ShaderBinary(L,NULL);
	}

	// osg::ShaderBinary::ShaderBinary(lua_Table * data, const osg::ShaderBinary & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::ShaderBinary* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::ShaderBinary::ShaderBinary(lua_Table * data, const osg::ShaderBinary & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::ShaderBinary::ShaderBinary(lua_Table * data, const osg::ShaderBinary & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::ShaderBinary* rhs_ptr=(Luna< osg::Referenced >::checkSubType< osg::ShaderBinary >(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::ShaderBinary::ShaderBinary function");
		}
		const osg::ShaderBinary & rhs=*rhs_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::ShaderBinary::ShaderBinary function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_ShaderBinary(L,NULL, rhs, copyop);
	}

	// Overload binder for osg::ShaderBinary::ShaderBinary
	static osg::ShaderBinary* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function ShaderBinary, cannot match any of the overloads for function ShaderBinary:\n  ShaderBinary()\n  ShaderBinary(const osg::ShaderBinary &, const osg::CopyOp &)\n  ShaderBinary(lua_Table *)\n  ShaderBinary(lua_Table *, const osg::ShaderBinary &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::ShaderBinary::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::ShaderBinary::cloneType() const function, expected prototype:\nosg::Object * osg::ShaderBinary::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ShaderBinary* self=Luna< osg::Referenced >::checkSubType< osg::ShaderBinary >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::ShaderBinary::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::ShaderBinary::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::ShaderBinary::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::ShaderBinary::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ShaderBinary::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::ShaderBinary* self=Luna< osg::Referenced >::checkSubType< osg::ShaderBinary >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::ShaderBinary::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::ShaderBinary::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::ShaderBinary::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::ShaderBinary::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::ShaderBinary* self=Luna< osg::Referenced >::checkSubType< osg::ShaderBinary >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::ShaderBinary::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::ShaderBinary::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::ShaderBinary::libraryName() const function, expected prototype:\nconst char * osg::ShaderBinary::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ShaderBinary* self=Luna< osg::Referenced >::checkSubType< osg::ShaderBinary >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::ShaderBinary::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::ShaderBinary::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::ShaderBinary::className() const function, expected prototype:\nconst char * osg::ShaderBinary::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ShaderBinary* self=Luna< osg::Referenced >::checkSubType< osg::ShaderBinary >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::ShaderBinary::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::ShaderBinary::assign(unsigned int size, const unsigned char * data)
	static int _bind_assign(lua_State *L) {
		if (!_lg_typecheck_assign(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ShaderBinary::assign(unsigned int size, const unsigned char * data) function, expected prototype:\nvoid osg::ShaderBinary::assign(unsigned int size, const unsigned char * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int size=(unsigned int)lua_tointeger(L,2);
		unsigned char data = (unsigned char)(lua_tointeger(L,3));

		osg::ShaderBinary* self=Luna< osg::Referenced >::checkSubType< osg::ShaderBinary >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ShaderBinary::assign(unsigned int, const unsigned char *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->assign(size, &data);

		return 0;
	}

	// unsigned int osg::ShaderBinary::getSize() const
	static int _bind_getSize(lua_State *L) {
		if (!_lg_typecheck_getSize(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::ShaderBinary::getSize() const function, expected prototype:\nunsigned int osg::ShaderBinary::getSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ShaderBinary* self=Luna< osg::Referenced >::checkSubType< osg::ShaderBinary >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::ShaderBinary::getSize() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned char * osg::ShaderBinary::getData()
	static int _bind_getData_overload_1(lua_State *L) {
		if (!_lg_typecheck_getData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char * osg::ShaderBinary::getData() function, expected prototype:\nunsigned char * osg::ShaderBinary::getData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ShaderBinary* self=Luna< osg::Referenced >::checkSubType< osg::ShaderBinary >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char * osg::ShaderBinary::getData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char * lret = self->getData();
		luaL_error(L,"Trying to convert pointer on unsigned char lret to lua. This usage should be clarifierd.");

		return 1;
	}

	// const unsigned char * osg::ShaderBinary::getData() const
	static int _bind_getData_overload_2(lua_State *L) {
		if (!_lg_typecheck_getData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const unsigned char * osg::ShaderBinary::getData() const function, expected prototype:\nconst unsigned char * osg::ShaderBinary::getData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ShaderBinary* self=Luna< osg::Referenced >::checkSubType< osg::ShaderBinary >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const unsigned char * osg::ShaderBinary::getData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const unsigned char * lret = self->getData();
		luaL_error(L,"Trying to convert pointer on unsigned char lret to lua. This usage should be clarifierd.");

		return 1;
	}

	// Overload binder for osg::ShaderBinary::getData
	static int _bind_getData(lua_State *L) {
		if (_lg_typecheck_getData_overload_1(L)) return _bind_getData_overload_1(L);
		if (_lg_typecheck_getData_overload_2(L)) return _bind_getData_overload_2(L);

		luaL_error(L, "error in function getData, cannot match any of the overloads for function getData:\n  getData()\n  getData()\n");
		return 0;
	}

	// static osg::ShaderBinary * osg::ShaderBinary::readShaderBinaryFile(const std::string & fileName)
	static int _bind_readShaderBinaryFile(lua_State *L) {
		if (!_lg_typecheck_readShaderBinaryFile(L)) {
			luaL_error(L, "luna typecheck failed in static osg::ShaderBinary * osg::ShaderBinary::readShaderBinaryFile(const std::string & fileName) function, expected prototype:\nstatic osg::ShaderBinary * osg::ShaderBinary::readShaderBinaryFile(const std::string & fileName)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string fileName(lua_tostring(L,1),lua_objlen(L,1));

		osg::ShaderBinary * lret = osg::ShaderBinary::readShaderBinaryFile(fileName);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::ShaderBinary >::push(L,lret,false);

		return 1;
	}

	// void osg::ShaderBinary::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ShaderBinary::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::ShaderBinary::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::ShaderBinary* self=Luna< osg::Referenced >::checkSubType< osg::ShaderBinary >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ShaderBinary::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ShaderBinary::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::ShaderBinary::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ShaderBinary::base_setName(const std::string & name) function, expected prototype:\nvoid osg::ShaderBinary::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::ShaderBinary* self=Luna< osg::Referenced >::checkSubType< osg::ShaderBinary >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ShaderBinary::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ShaderBinary::setName(name);

		return 0;
	}

	// void osg::ShaderBinary::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ShaderBinary::base_computeDataVariance() function, expected prototype:\nvoid osg::ShaderBinary::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ShaderBinary* self=Luna< osg::Referenced >::checkSubType< osg::ShaderBinary >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ShaderBinary::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ShaderBinary::computeDataVariance();

		return 0;
	}

	// void osg::ShaderBinary::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ShaderBinary::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::ShaderBinary::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::ShaderBinary* self=Luna< osg::Referenced >::checkSubType< osg::ShaderBinary >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ShaderBinary::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ShaderBinary::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::ShaderBinary::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::ShaderBinary::base_getUserData() function, expected prototype:\nosg::Referenced * osg::ShaderBinary::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ShaderBinary* self=Luna< osg::Referenced >::checkSubType< osg::ShaderBinary >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::ShaderBinary::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->ShaderBinary::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::ShaderBinary::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::ShaderBinary::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::ShaderBinary::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ShaderBinary* self=Luna< osg::Referenced >::checkSubType< osg::ShaderBinary >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::ShaderBinary::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->ShaderBinary::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::ShaderBinary::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osg::ShaderBinary::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ShaderBinary::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::ShaderBinary::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::ShaderBinary* self=Luna< osg::Referenced >::checkSubType< osg::ShaderBinary >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ShaderBinary::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ShaderBinary::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osg::ShaderBinary::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::ShaderBinary::base_cloneType() const function, expected prototype:\nosg::Object * osg::ShaderBinary::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ShaderBinary* self=Luna< osg::Referenced >::checkSubType< osg::ShaderBinary >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::ShaderBinary::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->ShaderBinary::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::ShaderBinary::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::ShaderBinary::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::ShaderBinary::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ShaderBinary::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::ShaderBinary* self=Luna< osg::Referenced >::checkSubType< osg::ShaderBinary >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::ShaderBinary::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->ShaderBinary::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::ShaderBinary::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::ShaderBinary::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::ShaderBinary::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::ShaderBinary* self=Luna< osg::Referenced >::checkSubType< osg::ShaderBinary >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::ShaderBinary::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ShaderBinary::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::ShaderBinary::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::ShaderBinary::base_libraryName() const function, expected prototype:\nconst char * osg::ShaderBinary::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ShaderBinary* self=Luna< osg::Referenced >::checkSubType< osg::ShaderBinary >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::ShaderBinary::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->ShaderBinary::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::ShaderBinary::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::ShaderBinary::base_className() const function, expected prototype:\nconst char * osg::ShaderBinary::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ShaderBinary* self=Luna< osg::Referenced >::checkSubType< osg::ShaderBinary >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::ShaderBinary::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->ShaderBinary::className();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

osg::ShaderBinary* LunaTraits< osg::ShaderBinary >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_ShaderBinary::_bind_ctor(L);
}

void LunaTraits< osg::ShaderBinary >::_bind_dtor(osg::ShaderBinary* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::ShaderBinary >::className[] = "ShaderBinary";
const char LunaTraits< osg::ShaderBinary >::fullName[] = "osg::ShaderBinary";
const char LunaTraits< osg::ShaderBinary >::moduleName[] = "osg";
const char* LunaTraits< osg::ShaderBinary >::parents[] = {"osg.Object", 0};
const int LunaTraits< osg::ShaderBinary >::hash = 69756848;
const int LunaTraits< osg::ShaderBinary >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::ShaderBinary >::methods[] = {
	{"cloneType", &luna_wrapper_osg_ShaderBinary::_bind_cloneType},
	{"clone", &luna_wrapper_osg_ShaderBinary::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_ShaderBinary::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_ShaderBinary::_bind_libraryName},
	{"className", &luna_wrapper_osg_ShaderBinary::_bind_className},
	{"assign", &luna_wrapper_osg_ShaderBinary::_bind_assign},
	{"getSize", &luna_wrapper_osg_ShaderBinary::_bind_getSize},
	{"getData", &luna_wrapper_osg_ShaderBinary::_bind_getData},
	{"readShaderBinaryFile", &luna_wrapper_osg_ShaderBinary::_bind_readShaderBinaryFile},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_ShaderBinary::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osg_ShaderBinary::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_ShaderBinary::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_ShaderBinary::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_ShaderBinary::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osg_ShaderBinary::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osg_ShaderBinary::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_ShaderBinary::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_ShaderBinary::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_ShaderBinary::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_ShaderBinary::_bind_base_className},
	{"fromVoid", &luna_wrapper_osg_ShaderBinary::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_ShaderBinary::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_ShaderBinary::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ShaderBinary >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_ShaderBinary::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ShaderBinary >::enumValues[] = {
	{0,0}
};



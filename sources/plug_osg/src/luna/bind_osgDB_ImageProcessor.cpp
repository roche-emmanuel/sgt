#include <plug_common.h>

#include <luna/wrappers/wrapper_osgDB_ImageProcessor.h>

class luna_wrapper_osgDB_ImageProcessor {
public:
	typedef Luna< osgDB::ImageProcessor > luna_t;

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

		osgDB::ImageProcessor* self= (osgDB::ImageProcessor*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgDB::ImageProcessor >::push(L,self,false);
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
		//osgDB::ImageProcessor* ptr= dynamic_cast< osgDB::ImageProcessor* >(Luna< osg::Referenced >::check(L,1));
		osgDB::ImageProcessor* ptr= luna_caster< osg::Referenced, osgDB::ImageProcessor >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgDB::ImageProcessor >::push(L,ptr,false);
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
		if( (!(Luna< osg::Referenced >::checkSubType< osgDB::ImageProcessor >(L,1))) ) return false;
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
		if( (!(Luna< osg::Referenced >::checkSubType< osgDB::ImageProcessor >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_compress(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_isboolean(L,4)==0 ) return false;
		if( lua_isboolean(L,5)==0 ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_generateMipMap(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
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

	inline static bool _lg_typecheck_base_compress(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_isboolean(L,4)==0 ) return false;
		if( lua_isboolean(L,5)==0 ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_generateMipMap(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgDB::ImageProcessor::ImageProcessor()
	static osgDB::ImageProcessor* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ImageProcessor::ImageProcessor() function, expected prototype:\nosgDB::ImageProcessor::ImageProcessor()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osgDB::ImageProcessor();
	}

	// osgDB::ImageProcessor::ImageProcessor(const osgDB::ImageProcessor & rw, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgDB::ImageProcessor* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ImageProcessor::ImageProcessor(const osgDB::ImageProcessor & rw, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgDB::ImageProcessor::ImageProcessor(const osgDB::ImageProcessor & rw, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osgDB::ImageProcessor* rw_ptr=(Luna< osg::Referenced >::checkSubType< osgDB::ImageProcessor >(L,1));
		if( !rw_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rw in osgDB::ImageProcessor::ImageProcessor function");
		}
		const osgDB::ImageProcessor & rw=*rw_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgDB::ImageProcessor::ImageProcessor function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osgDB::ImageProcessor(rw, copyop);
	}

	// osgDB::ImageProcessor::ImageProcessor(lua_Table * data)
	static osgDB::ImageProcessor* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ImageProcessor::ImageProcessor(lua_Table * data) function, expected prototype:\nosgDB::ImageProcessor::ImageProcessor(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgDB_ImageProcessor(L,NULL);
	}

	// osgDB::ImageProcessor::ImageProcessor(lua_Table * data, const osgDB::ImageProcessor & rw, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgDB::ImageProcessor* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ImageProcessor::ImageProcessor(lua_Table * data, const osgDB::ImageProcessor & rw, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgDB::ImageProcessor::ImageProcessor(lua_Table * data, const osgDB::ImageProcessor & rw, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osgDB::ImageProcessor* rw_ptr=(Luna< osg::Referenced >::checkSubType< osgDB::ImageProcessor >(L,2));
		if( !rw_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rw in osgDB::ImageProcessor::ImageProcessor function");
		}
		const osgDB::ImageProcessor & rw=*rw_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgDB::ImageProcessor::ImageProcessor function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osgDB_ImageProcessor(L,NULL, rw, copyop);
	}

	// Overload binder for osgDB::ImageProcessor::ImageProcessor
	static osgDB::ImageProcessor* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function ImageProcessor, cannot match any of the overloads for function ImageProcessor:\n  ImageProcessor()\n  ImageProcessor(const osgDB::ImageProcessor &, const osg::CopyOp &)\n  ImageProcessor(lua_Table *)\n  ImageProcessor(lua_Table *, const osgDB::ImageProcessor &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osgDB::ImageProcessor::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgDB::ImageProcessor::cloneType() const function, expected prototype:\nosg::Object * osgDB::ImageProcessor::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ImageProcessor* self=Luna< osg::Referenced >::checkSubType< osgDB::ImageProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgDB::ImageProcessor::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgDB::ImageProcessor::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgDB::ImageProcessor::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgDB::ImageProcessor::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgDB::ImageProcessor::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgDB::ImageProcessor* self=Luna< osg::Referenced >::checkSubType< osgDB::ImageProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgDB::ImageProcessor::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgDB::ImageProcessor::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::ImageProcessor::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgDB::ImageProcessor::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgDB::ImageProcessor* self=Luna< osg::Referenced >::checkSubType< osgDB::ImageProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::ImageProcessor::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgDB::ImageProcessor::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgDB::ImageProcessor::libraryName() const function, expected prototype:\nconst char * osgDB::ImageProcessor::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ImageProcessor* self=Luna< osg::Referenced >::checkSubType< osgDB::ImageProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgDB::ImageProcessor::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgDB::ImageProcessor::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgDB::ImageProcessor::className() const function, expected prototype:\nconst char * osgDB::ImageProcessor::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ImageProcessor* self=Luna< osg::Referenced >::checkSubType< osgDB::ImageProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgDB::ImageProcessor::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgDB::ImageProcessor::compress(osg::Image & arg1, osg::Texture::InternalFormatMode arg2, bool arg3, bool arg4, osgDB::ImageProcessor::CompressionMethod arg5, osgDB::ImageProcessor::CompressionQuality arg6)
	static int _bind_compress(lua_State *L) {
		if (!_lg_typecheck_compress(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::ImageProcessor::compress(osg::Image & arg1, osg::Texture::InternalFormatMode arg2, bool arg3, bool arg4, osgDB::ImageProcessor::CompressionMethod arg5, osgDB::ImageProcessor::CompressionQuality arg6) function, expected prototype:\nvoid osgDB::ImageProcessor::compress(osg::Image & arg1, osg::Texture::InternalFormatMode arg2, bool arg3, bool arg4, osgDB::ImageProcessor::CompressionMethod arg5, osgDB::ImageProcessor::CompressionQuality arg6)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Image* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::Image >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgDB::ImageProcessor::compress function");
		}
		osg::Image & _arg1=*_arg1_ptr;
		osg::Texture::InternalFormatMode _arg2=(osg::Texture::InternalFormatMode)lua_tointeger(L,3);
		bool _arg3=(bool)(lua_toboolean(L,4)==1);
		bool _arg4=(bool)(lua_toboolean(L,5)==1);
		osgDB::ImageProcessor::CompressionMethod _arg5=(osgDB::ImageProcessor::CompressionMethod)lua_tointeger(L,6);
		osgDB::ImageProcessor::CompressionQuality _arg6=(osgDB::ImageProcessor::CompressionQuality)lua_tointeger(L,7);

		osgDB::ImageProcessor* self=Luna< osg::Referenced >::checkSubType< osgDB::ImageProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::ImageProcessor::compress(osg::Image &, osg::Texture::InternalFormatMode, bool, bool, osgDB::ImageProcessor::CompressionMethod, osgDB::ImageProcessor::CompressionQuality). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->compress(_arg1, _arg2, _arg3, _arg4, _arg5, _arg6);

		return 0;
	}

	// void osgDB::ImageProcessor::generateMipMap(osg::Image & arg1, bool arg2, osgDB::ImageProcessor::CompressionMethod arg3)
	static int _bind_generateMipMap(lua_State *L) {
		if (!_lg_typecheck_generateMipMap(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::ImageProcessor::generateMipMap(osg::Image & arg1, bool arg2, osgDB::ImageProcessor::CompressionMethod arg3) function, expected prototype:\nvoid osgDB::ImageProcessor::generateMipMap(osg::Image & arg1, bool arg2, osgDB::ImageProcessor::CompressionMethod arg3)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Image* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::Image >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgDB::ImageProcessor::generateMipMap function");
		}
		osg::Image & _arg1=*_arg1_ptr;
		bool _arg2=(bool)(lua_toboolean(L,3)==1);
		osgDB::ImageProcessor::CompressionMethod _arg3=(osgDB::ImageProcessor::CompressionMethod)lua_tointeger(L,4);

		osgDB::ImageProcessor* self=Luna< osg::Referenced >::checkSubType< osgDB::ImageProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::ImageProcessor::generateMipMap(osg::Image &, bool, osgDB::ImageProcessor::CompressionMethod). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->generateMipMap(_arg1, _arg2, _arg3);

		return 0;
	}

	// void osgDB::ImageProcessor::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::ImageProcessor::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgDB::ImageProcessor::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgDB::ImageProcessor* self=Luna< osg::Referenced >::checkSubType< osgDB::ImageProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::ImageProcessor::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ImageProcessor::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osgDB::ImageProcessor::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::ImageProcessor::base_setName(const std::string & name) function, expected prototype:\nvoid osgDB::ImageProcessor::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::ImageProcessor* self=Luna< osg::Referenced >::checkSubType< osgDB::ImageProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::ImageProcessor::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ImageProcessor::setName(name);

		return 0;
	}

	// void osgDB::ImageProcessor::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::ImageProcessor::base_computeDataVariance() function, expected prototype:\nvoid osgDB::ImageProcessor::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ImageProcessor* self=Luna< osg::Referenced >::checkSubType< osgDB::ImageProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::ImageProcessor::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ImageProcessor::computeDataVariance();

		return 0;
	}

	// void osgDB::ImageProcessor::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::ImageProcessor::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osgDB::ImageProcessor::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osgDB::ImageProcessor* self=Luna< osg::Referenced >::checkSubType< osgDB::ImageProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::ImageProcessor::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ImageProcessor::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osgDB::ImageProcessor::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osgDB::ImageProcessor::base_getUserData() function, expected prototype:\nosg::Referenced * osgDB::ImageProcessor::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ImageProcessor* self=Luna< osg::Referenced >::checkSubType< osgDB::ImageProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osgDB::ImageProcessor::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->ImageProcessor::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osgDB::ImageProcessor::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osgDB::ImageProcessor::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osgDB::ImageProcessor::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ImageProcessor* self=Luna< osg::Referenced >::checkSubType< osgDB::ImageProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osgDB::ImageProcessor::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->ImageProcessor::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgDB::ImageProcessor::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osgDB::ImageProcessor::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::ImageProcessor::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osgDB::ImageProcessor::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osgDB::ImageProcessor* self=Luna< osg::Referenced >::checkSubType< osgDB::ImageProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::ImageProcessor::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ImageProcessor::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osgDB::ImageProcessor::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgDB::ImageProcessor::base_cloneType() const function, expected prototype:\nosg::Object * osgDB::ImageProcessor::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ImageProcessor* self=Luna< osg::Referenced >::checkSubType< osgDB::ImageProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgDB::ImageProcessor::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->ImageProcessor::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgDB::ImageProcessor::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgDB::ImageProcessor::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgDB::ImageProcessor::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgDB::ImageProcessor::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgDB::ImageProcessor* self=Luna< osg::Referenced >::checkSubType< osgDB::ImageProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgDB::ImageProcessor::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->ImageProcessor::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgDB::ImageProcessor::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::ImageProcessor::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgDB::ImageProcessor::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgDB::ImageProcessor* self=Luna< osg::Referenced >::checkSubType< osgDB::ImageProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::ImageProcessor::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ImageProcessor::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgDB::ImageProcessor::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgDB::ImageProcessor::base_libraryName() const function, expected prototype:\nconst char * osgDB::ImageProcessor::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ImageProcessor* self=Luna< osg::Referenced >::checkSubType< osgDB::ImageProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgDB::ImageProcessor::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->ImageProcessor::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgDB::ImageProcessor::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgDB::ImageProcessor::base_className() const function, expected prototype:\nconst char * osgDB::ImageProcessor::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ImageProcessor* self=Luna< osg::Referenced >::checkSubType< osgDB::ImageProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgDB::ImageProcessor::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->ImageProcessor::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgDB::ImageProcessor::base_compress(osg::Image & arg1, osg::Texture::InternalFormatMode arg2, bool arg3, bool arg4, osgDB::ImageProcessor::CompressionMethod arg5, osgDB::ImageProcessor::CompressionQuality arg6)
	static int _bind_base_compress(lua_State *L) {
		if (!_lg_typecheck_base_compress(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::ImageProcessor::base_compress(osg::Image & arg1, osg::Texture::InternalFormatMode arg2, bool arg3, bool arg4, osgDB::ImageProcessor::CompressionMethod arg5, osgDB::ImageProcessor::CompressionQuality arg6) function, expected prototype:\nvoid osgDB::ImageProcessor::base_compress(osg::Image & arg1, osg::Texture::InternalFormatMode arg2, bool arg3, bool arg4, osgDB::ImageProcessor::CompressionMethod arg5, osgDB::ImageProcessor::CompressionQuality arg6)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Image* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::Image >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgDB::ImageProcessor::base_compress function");
		}
		osg::Image & _arg1=*_arg1_ptr;
		osg::Texture::InternalFormatMode _arg2=(osg::Texture::InternalFormatMode)lua_tointeger(L,3);
		bool _arg3=(bool)(lua_toboolean(L,4)==1);
		bool _arg4=(bool)(lua_toboolean(L,5)==1);
		osgDB::ImageProcessor::CompressionMethod _arg5=(osgDB::ImageProcessor::CompressionMethod)lua_tointeger(L,6);
		osgDB::ImageProcessor::CompressionQuality _arg6=(osgDB::ImageProcessor::CompressionQuality)lua_tointeger(L,7);

		osgDB::ImageProcessor* self=Luna< osg::Referenced >::checkSubType< osgDB::ImageProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::ImageProcessor::base_compress(osg::Image &, osg::Texture::InternalFormatMode, bool, bool, osgDB::ImageProcessor::CompressionMethod, osgDB::ImageProcessor::CompressionQuality). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ImageProcessor::compress(_arg1, _arg2, _arg3, _arg4, _arg5, _arg6);

		return 0;
	}

	// void osgDB::ImageProcessor::base_generateMipMap(osg::Image & arg1, bool arg2, osgDB::ImageProcessor::CompressionMethod arg3)
	static int _bind_base_generateMipMap(lua_State *L) {
		if (!_lg_typecheck_base_generateMipMap(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::ImageProcessor::base_generateMipMap(osg::Image & arg1, bool arg2, osgDB::ImageProcessor::CompressionMethod arg3) function, expected prototype:\nvoid osgDB::ImageProcessor::base_generateMipMap(osg::Image & arg1, bool arg2, osgDB::ImageProcessor::CompressionMethod arg3)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Image* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::Image >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgDB::ImageProcessor::base_generateMipMap function");
		}
		osg::Image & _arg1=*_arg1_ptr;
		bool _arg2=(bool)(lua_toboolean(L,3)==1);
		osgDB::ImageProcessor::CompressionMethod _arg3=(osgDB::ImageProcessor::CompressionMethod)lua_tointeger(L,4);

		osgDB::ImageProcessor* self=Luna< osg::Referenced >::checkSubType< osgDB::ImageProcessor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::ImageProcessor::base_generateMipMap(osg::Image &, bool, osgDB::ImageProcessor::CompressionMethod). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ImageProcessor::generateMipMap(_arg1, _arg2, _arg3);

		return 0;
	}


	// Operator binds:

};

osgDB::ImageProcessor* LunaTraits< osgDB::ImageProcessor >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgDB_ImageProcessor::_bind_ctor(L);
}

void LunaTraits< osgDB::ImageProcessor >::_bind_dtor(osgDB::ImageProcessor* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgDB::ImageProcessor >::className[] = "ImageProcessor";
const char LunaTraits< osgDB::ImageProcessor >::fullName[] = "osgDB::ImageProcessor";
const char LunaTraits< osgDB::ImageProcessor >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::ImageProcessor >::parents[] = {"osg.Object", 0};
const int LunaTraits< osgDB::ImageProcessor >::hash = 95684142;
const int LunaTraits< osgDB::ImageProcessor >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgDB::ImageProcessor >::methods[] = {
	{"cloneType", &luna_wrapper_osgDB_ImageProcessor::_bind_cloneType},
	{"clone", &luna_wrapper_osgDB_ImageProcessor::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osgDB_ImageProcessor::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osgDB_ImageProcessor::_bind_libraryName},
	{"className", &luna_wrapper_osgDB_ImageProcessor::_bind_className},
	{"compress", &luna_wrapper_osgDB_ImageProcessor::_bind_compress},
	{"generateMipMap", &luna_wrapper_osgDB_ImageProcessor::_bind_generateMipMap},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgDB_ImageProcessor::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osgDB_ImageProcessor::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osgDB_ImageProcessor::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osgDB_ImageProcessor::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osgDB_ImageProcessor::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osgDB_ImageProcessor::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osgDB_ImageProcessor::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osgDB_ImageProcessor::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osgDB_ImageProcessor::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osgDB_ImageProcessor::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osgDB_ImageProcessor::_bind_base_className},
	{"base_compress", &luna_wrapper_osgDB_ImageProcessor::_bind_base_compress},
	{"base_generateMipMap", &luna_wrapper_osgDB_ImageProcessor::_bind_base_generateMipMap},
	{"fromVoid", &luna_wrapper_osgDB_ImageProcessor::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgDB_ImageProcessor::_bind_asVoid},
	{"getTable", &luna_wrapper_osgDB_ImageProcessor::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::ImageProcessor >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgDB_ImageProcessor::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::ImageProcessor >::enumValues[] = {
	{"USE_CPU", osgDB::ImageProcessor::USE_CPU},
	{"USE_GPU", osgDB::ImageProcessor::USE_GPU},
	{"FASTEST", osgDB::ImageProcessor::FASTEST},
	{"NORMAL", osgDB::ImageProcessor::NORMAL},
	{"PRODUCTION", osgDB::ImageProcessor::PRODUCTION},
	{"HIGHEST", osgDB::ImageProcessor::HIGHEST},
	{0,0}
};



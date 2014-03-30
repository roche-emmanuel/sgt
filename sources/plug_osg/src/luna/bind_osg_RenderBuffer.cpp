#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_RenderBuffer.h>

class luna_wrapper_osg_RenderBuffer {
public:
	typedef Luna< osg::RenderBuffer > luna_t;

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

		osg::RenderBuffer* self= (osg::RenderBuffer*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::RenderBuffer >::push(L,self,false);
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
		//osg::RenderBuffer* ptr= dynamic_cast< osg::RenderBuffer* >(Luna< osg::Referenced >::check(L,1));
		osg::RenderBuffer* ptr= luna_caster< osg::Referenced, osg::RenderBuffer >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::RenderBuffer >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::RenderBuffer >(L,1))) ) return false;
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
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>6 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::RenderBuffer >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_getWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setWidth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setHeight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSize(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getInternalFormat(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setInternalFormat(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSamples(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getColorSamples(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setSamples(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setColorSamples(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getObjectID(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_compare(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_releaseGLObjects(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_deleteRenderBuffer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_flushDeletedRenderBuffers(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_discardDeletedRenderBuffers(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMaxSamples(lua_State *L) {
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

	inline static bool _lg_typecheck_base_releaseGLObjects(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::RenderBuffer::RenderBuffer()
	static osg::RenderBuffer* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::RenderBuffer::RenderBuffer() function, expected prototype:\nosg::RenderBuffer::RenderBuffer()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::RenderBuffer();
	}

	// osg::RenderBuffer::RenderBuffer(int width, int height, unsigned int internalFormat, int samples = 0, int colorSamples = 0)
	static osg::RenderBuffer* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::RenderBuffer::RenderBuffer(int width, int height, unsigned int internalFormat, int samples = 0, int colorSamples = 0) function, expected prototype:\nosg::RenderBuffer::RenderBuffer(int width, int height, unsigned int internalFormat, int samples = 0, int colorSamples = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int width=(int)lua_tointeger(L,1);
		int height=(int)lua_tointeger(L,2);
		unsigned int internalFormat=(unsigned int)lua_tointeger(L,3);
		int samples=luatop>3 ? (int)lua_tointeger(L,4) : (int)0;
		int colorSamples=luatop>4 ? (int)lua_tointeger(L,5) : (int)0;

		return new osg::RenderBuffer(width, height, internalFormat, samples, colorSamples);
	}

	// osg::RenderBuffer::RenderBuffer(const osg::RenderBuffer & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::RenderBuffer* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::RenderBuffer::RenderBuffer(const osg::RenderBuffer & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::RenderBuffer::RenderBuffer(const osg::RenderBuffer & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::RenderBuffer* copy_ptr=(Luna< osg::Referenced >::checkSubType< osg::RenderBuffer >(L,1));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osg::RenderBuffer::RenderBuffer function");
		}
		const osg::RenderBuffer & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::RenderBuffer::RenderBuffer function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osg::RenderBuffer(copy, copyop);
	}

	// osg::RenderBuffer::RenderBuffer(lua_Table * data)
	static osg::RenderBuffer* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::RenderBuffer::RenderBuffer(lua_Table * data) function, expected prototype:\nosg::RenderBuffer::RenderBuffer(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_RenderBuffer(L,NULL);
	}

	// osg::RenderBuffer::RenderBuffer(lua_Table * data, int width, int height, unsigned int internalFormat, int samples = 0, int colorSamples = 0)
	static osg::RenderBuffer* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in osg::RenderBuffer::RenderBuffer(lua_Table * data, int width, int height, unsigned int internalFormat, int samples = 0, int colorSamples = 0) function, expected prototype:\nosg::RenderBuffer::RenderBuffer(lua_Table * data, int width, int height, unsigned int internalFormat, int samples = 0, int colorSamples = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int width=(int)lua_tointeger(L,2);
		int height=(int)lua_tointeger(L,3);
		unsigned int internalFormat=(unsigned int)lua_tointeger(L,4);
		int samples=luatop>4 ? (int)lua_tointeger(L,5) : (int)0;
		int colorSamples=luatop>5 ? (int)lua_tointeger(L,6) : (int)0;

		return new wrapper_osg_RenderBuffer(L,NULL, width, height, internalFormat, samples, colorSamples);
	}

	// osg::RenderBuffer::RenderBuffer(lua_Table * data, const osg::RenderBuffer & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::RenderBuffer* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in osg::RenderBuffer::RenderBuffer(lua_Table * data, const osg::RenderBuffer & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::RenderBuffer::RenderBuffer(lua_Table * data, const osg::RenderBuffer & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::RenderBuffer* copy_ptr=(Luna< osg::Referenced >::checkSubType< osg::RenderBuffer >(L,2));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osg::RenderBuffer::RenderBuffer function");
		}
		const osg::RenderBuffer & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::RenderBuffer::RenderBuffer function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_RenderBuffer(L,NULL, copy, copyop);
	}

	// Overload binder for osg::RenderBuffer::RenderBuffer
	static osg::RenderBuffer* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);

		luaL_error(L, "error in function RenderBuffer, cannot match any of the overloads for function RenderBuffer:\n  RenderBuffer()\n  RenderBuffer(int, int, unsigned int, int, int)\n  RenderBuffer(const osg::RenderBuffer &, const osg::CopyOp &)\n  RenderBuffer(lua_Table *)\n  RenderBuffer(lua_Table *, int, int, unsigned int, int, int)\n  RenderBuffer(lua_Table *, const osg::RenderBuffer &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::RenderBuffer::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::RenderBuffer::cloneType() const function, expected prototype:\nosg::Object * osg::RenderBuffer::cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::RenderBuffer* self=Luna< osg::Referenced >::checkSubType< osg::RenderBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::RenderBuffer::cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::RenderBuffer::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::RenderBuffer::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::RenderBuffer::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::RenderBuffer::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::RenderBuffer* self=Luna< osg::Referenced >::checkSubType< osg::RenderBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::RenderBuffer::clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::RenderBuffer::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::RenderBuffer::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::RenderBuffer::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::RenderBuffer* self=Luna< osg::Referenced >::checkSubType< osg::RenderBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::RenderBuffer::isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::RenderBuffer::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::RenderBuffer::libraryName() const function, expected prototype:\nconst char * osg::RenderBuffer::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::RenderBuffer* self=Luna< osg::Referenced >::checkSubType< osg::RenderBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::RenderBuffer::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::RenderBuffer::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::RenderBuffer::className() const function, expected prototype:\nconst char * osg::RenderBuffer::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::RenderBuffer* self=Luna< osg::Referenced >::checkSubType< osg::RenderBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::RenderBuffer::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// int osg::RenderBuffer::getWidth() const
	static int _bind_getWidth(lua_State *L) {
		if (!_lg_typecheck_getWidth(L)) {
			luaL_error(L, "luna typecheck failed in int osg::RenderBuffer::getWidth() const function, expected prototype:\nint osg::RenderBuffer::getWidth() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::RenderBuffer* self=Luna< osg::Referenced >::checkSubType< osg::RenderBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::RenderBuffer::getWidth() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::RenderBuffer::getHeight() const
	static int _bind_getHeight(lua_State *L) {
		if (!_lg_typecheck_getHeight(L)) {
			luaL_error(L, "luna typecheck failed in int osg::RenderBuffer::getHeight() const function, expected prototype:\nint osg::RenderBuffer::getHeight() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::RenderBuffer* self=Luna< osg::Referenced >::checkSubType< osg::RenderBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::RenderBuffer::getHeight() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::RenderBuffer::setWidth(int w)
	static int _bind_setWidth(lua_State *L) {
		if (!_lg_typecheck_setWidth(L)) {
			luaL_error(L, "luna typecheck failed in void osg::RenderBuffer::setWidth(int w) function, expected prototype:\nvoid osg::RenderBuffer::setWidth(int w)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int w=(int)lua_tointeger(L,2);

		osg::RenderBuffer* self=Luna< osg::Referenced >::checkSubType< osg::RenderBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::RenderBuffer::setWidth(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setWidth(w);

		return 0;
	}

	// void osg::RenderBuffer::setHeight(int h)
	static int _bind_setHeight(lua_State *L) {
		if (!_lg_typecheck_setHeight(L)) {
			luaL_error(L, "luna typecheck failed in void osg::RenderBuffer::setHeight(int h) function, expected prototype:\nvoid osg::RenderBuffer::setHeight(int h)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int h=(int)lua_tointeger(L,2);

		osg::RenderBuffer* self=Luna< osg::Referenced >::checkSubType< osg::RenderBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::RenderBuffer::setHeight(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setHeight(h);

		return 0;
	}

	// void osg::RenderBuffer::setSize(int w, int h)
	static int _bind_setSize(lua_State *L) {
		if (!_lg_typecheck_setSize(L)) {
			luaL_error(L, "luna typecheck failed in void osg::RenderBuffer::setSize(int w, int h) function, expected prototype:\nvoid osg::RenderBuffer::setSize(int w, int h)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int w=(int)lua_tointeger(L,2);
		int h=(int)lua_tointeger(L,3);

		osg::RenderBuffer* self=Luna< osg::Referenced >::checkSubType< osg::RenderBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::RenderBuffer::setSize(int, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setSize(w, h);

		return 0;
	}

	// unsigned int osg::RenderBuffer::getInternalFormat() const
	static int _bind_getInternalFormat(lua_State *L) {
		if (!_lg_typecheck_getInternalFormat(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::RenderBuffer::getInternalFormat() const function, expected prototype:\nunsigned int osg::RenderBuffer::getInternalFormat() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::RenderBuffer* self=Luna< osg::Referenced >::checkSubType< osg::RenderBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::RenderBuffer::getInternalFormat() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getInternalFormat();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::RenderBuffer::setInternalFormat(unsigned int format)
	static int _bind_setInternalFormat(lua_State *L) {
		if (!_lg_typecheck_setInternalFormat(L)) {
			luaL_error(L, "luna typecheck failed in void osg::RenderBuffer::setInternalFormat(unsigned int format) function, expected prototype:\nvoid osg::RenderBuffer::setInternalFormat(unsigned int format)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int format=(unsigned int)lua_tointeger(L,2);

		osg::RenderBuffer* self=Luna< osg::Referenced >::checkSubType< osg::RenderBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::RenderBuffer::setInternalFormat(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setInternalFormat(format);

		return 0;
	}

	// int osg::RenderBuffer::getSamples() const
	static int _bind_getSamples(lua_State *L) {
		if (!_lg_typecheck_getSamples(L)) {
			luaL_error(L, "luna typecheck failed in int osg::RenderBuffer::getSamples() const function, expected prototype:\nint osg::RenderBuffer::getSamples() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::RenderBuffer* self=Luna< osg::Referenced >::checkSubType< osg::RenderBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::RenderBuffer::getSamples() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getSamples();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::RenderBuffer::getColorSamples() const
	static int _bind_getColorSamples(lua_State *L) {
		if (!_lg_typecheck_getColorSamples(L)) {
			luaL_error(L, "luna typecheck failed in int osg::RenderBuffer::getColorSamples() const function, expected prototype:\nint osg::RenderBuffer::getColorSamples() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::RenderBuffer* self=Luna< osg::Referenced >::checkSubType< osg::RenderBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::RenderBuffer::getColorSamples() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getColorSamples();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::RenderBuffer::setSamples(int samples)
	static int _bind_setSamples(lua_State *L) {
		if (!_lg_typecheck_setSamples(L)) {
			luaL_error(L, "luna typecheck failed in void osg::RenderBuffer::setSamples(int samples) function, expected prototype:\nvoid osg::RenderBuffer::setSamples(int samples)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int samples=(int)lua_tointeger(L,2);

		osg::RenderBuffer* self=Luna< osg::Referenced >::checkSubType< osg::RenderBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::RenderBuffer::setSamples(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setSamples(samples);

		return 0;
	}

	// void osg::RenderBuffer::setColorSamples(int colorSamples)
	static int _bind_setColorSamples(lua_State *L) {
		if (!_lg_typecheck_setColorSamples(L)) {
			luaL_error(L, "luna typecheck failed in void osg::RenderBuffer::setColorSamples(int colorSamples) function, expected prototype:\nvoid osg::RenderBuffer::setColorSamples(int colorSamples)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int colorSamples=(int)lua_tointeger(L,2);

		osg::RenderBuffer* self=Luna< osg::Referenced >::checkSubType< osg::RenderBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::RenderBuffer::setColorSamples(int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setColorSamples(colorSamples);

		return 0;
	}

	// unsigned int osg::RenderBuffer::getObjectID(unsigned int contextID, const osg::FBOExtensions * ext) const
	static int _bind_getObjectID(lua_State *L) {
		if (!_lg_typecheck_getObjectID(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::RenderBuffer::getObjectID(unsigned int contextID, const osg::FBOExtensions * ext) const function, expected prototype:\nunsigned int osg::RenderBuffer::getObjectID(unsigned int contextID, const osg::FBOExtensions * ext) const\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,2);
		const osg::FBOExtensions* ext=(Luna< osg::Referenced >::checkSubType< osg::FBOExtensions >(L,3));

		osg::RenderBuffer* self=Luna< osg::Referenced >::checkSubType< osg::RenderBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::RenderBuffer::getObjectID(unsigned int, const osg::FBOExtensions *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getObjectID(contextID, ext);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::RenderBuffer::compare(const osg::RenderBuffer & rb) const
	static int _bind_compare(lua_State *L) {
		if (!_lg_typecheck_compare(L)) {
			luaL_error(L, "luna typecheck failed in int osg::RenderBuffer::compare(const osg::RenderBuffer & rb) const function, expected prototype:\nint osg::RenderBuffer::compare(const osg::RenderBuffer & rb) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::RenderBuffer* rb_ptr=(Luna< osg::Referenced >::checkSubType< osg::RenderBuffer >(L,2));
		if( !rb_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rb in osg::RenderBuffer::compare function");
		}
		const osg::RenderBuffer & rb=*rb_ptr;

		osg::RenderBuffer* self=Luna< osg::Referenced >::checkSubType< osg::RenderBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::RenderBuffer::compare(const osg::RenderBuffer &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->compare(rb);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::RenderBuffer::releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::RenderBuffer::releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::RenderBuffer::releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::RenderBuffer* self=Luna< osg::Referenced >::checkSubType< osg::RenderBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::RenderBuffer::releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->releaseGLObjects(_arg1);

		return 0;
	}

	// static void osg::RenderBuffer::deleteRenderBuffer(unsigned int contextID, unsigned int rb)
	static int _bind_deleteRenderBuffer(lua_State *L) {
		if (!_lg_typecheck_deleteRenderBuffer(L)) {
			luaL_error(L, "luna typecheck failed in static void osg::RenderBuffer::deleteRenderBuffer(unsigned int contextID, unsigned int rb) function, expected prototype:\nstatic void osg::RenderBuffer::deleteRenderBuffer(unsigned int contextID, unsigned int rb)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);
		unsigned int rb=(unsigned int)lua_tointeger(L,2);

		osg::RenderBuffer::deleteRenderBuffer(contextID, rb);

		return 0;
	}

	// static void osg::RenderBuffer::flushDeletedRenderBuffers(unsigned int contextID, double currentTime, double & availableTime)
	static int _bind_flushDeletedRenderBuffers(lua_State *L) {
		if (!_lg_typecheck_flushDeletedRenderBuffers(L)) {
			luaL_error(L, "luna typecheck failed in static void osg::RenderBuffer::flushDeletedRenderBuffers(unsigned int contextID, double currentTime, double & availableTime) function, expected prototype:\nstatic void osg::RenderBuffer::flushDeletedRenderBuffers(unsigned int contextID, double currentTime, double & availableTime)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);
		double currentTime=(double)lua_tonumber(L,2);
		double availableTime=(double)lua_tonumber(L,3);

		osg::RenderBuffer::flushDeletedRenderBuffers(contextID, currentTime, availableTime);

		lua_pushnumber(L,availableTime);
		return 1;
	}

	// static void osg::RenderBuffer::discardDeletedRenderBuffers(unsigned int contextID)
	static int _bind_discardDeletedRenderBuffers(lua_State *L) {
		if (!_lg_typecheck_discardDeletedRenderBuffers(L)) {
			luaL_error(L, "luna typecheck failed in static void osg::RenderBuffer::discardDeletedRenderBuffers(unsigned int contextID) function, expected prototype:\nstatic void osg::RenderBuffer::discardDeletedRenderBuffers(unsigned int contextID)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);

		osg::RenderBuffer::discardDeletedRenderBuffers(contextID);

		return 0;
	}

	// static int osg::RenderBuffer::getMaxSamples(unsigned int contextID, const osg::FBOExtensions * ext)
	static int _bind_getMaxSamples(lua_State *L) {
		if (!_lg_typecheck_getMaxSamples(L)) {
			luaL_error(L, "luna typecheck failed in static int osg::RenderBuffer::getMaxSamples(unsigned int contextID, const osg::FBOExtensions * ext) function, expected prototype:\nstatic int osg::RenderBuffer::getMaxSamples(unsigned int contextID, const osg::FBOExtensions * ext)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);
		const osg::FBOExtensions* ext=(Luna< osg::Referenced >::checkSubType< osg::FBOExtensions >(L,2));

		int lret = osg::RenderBuffer::getMaxSamples(contextID, ext);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::RenderBuffer::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::RenderBuffer::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::RenderBuffer::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::RenderBuffer* self=Luna< osg::Referenced >::checkSubType< osg::RenderBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::RenderBuffer::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RenderBuffer::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::RenderBuffer::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::RenderBuffer::base_setName(const std::string & name) function, expected prototype:\nvoid osg::RenderBuffer::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::RenderBuffer* self=Luna< osg::Referenced >::checkSubType< osg::RenderBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::RenderBuffer::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RenderBuffer::setName(name);

		return 0;
	}

	// void osg::RenderBuffer::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::RenderBuffer::base_computeDataVariance() function, expected prototype:\nvoid osg::RenderBuffer::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::RenderBuffer* self=Luna< osg::Referenced >::checkSubType< osg::RenderBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::RenderBuffer::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RenderBuffer::computeDataVariance();

		return 0;
	}

	// void osg::RenderBuffer::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::RenderBuffer::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::RenderBuffer::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::RenderBuffer* self=Luna< osg::Referenced >::checkSubType< osg::RenderBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::RenderBuffer::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RenderBuffer::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::RenderBuffer::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::RenderBuffer::base_getUserData() function, expected prototype:\nosg::Referenced * osg::RenderBuffer::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::RenderBuffer* self=Luna< osg::Referenced >::checkSubType< osg::RenderBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::RenderBuffer::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->RenderBuffer::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::RenderBuffer::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::RenderBuffer::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::RenderBuffer::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::RenderBuffer* self=Luna< osg::Referenced >::checkSubType< osg::RenderBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::RenderBuffer::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->RenderBuffer::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::RenderBuffer::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// osg::Object * osg::RenderBuffer::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::RenderBuffer::base_cloneType() const function, expected prototype:\nosg::Object * osg::RenderBuffer::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::RenderBuffer* self=Luna< osg::Referenced >::checkSubType< osg::RenderBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::RenderBuffer::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->RenderBuffer::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::RenderBuffer::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::RenderBuffer::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::RenderBuffer::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::RenderBuffer::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::RenderBuffer* self=Luna< osg::Referenced >::checkSubType< osg::RenderBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::RenderBuffer::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->RenderBuffer::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::RenderBuffer::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::RenderBuffer::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::RenderBuffer::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::RenderBuffer* self=Luna< osg::Referenced >::checkSubType< osg::RenderBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::RenderBuffer::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->RenderBuffer::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::RenderBuffer::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::RenderBuffer::base_libraryName() const function, expected prototype:\nconst char * osg::RenderBuffer::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::RenderBuffer* self=Luna< osg::Referenced >::checkSubType< osg::RenderBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::RenderBuffer::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->RenderBuffer::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::RenderBuffer::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::RenderBuffer::base_className() const function, expected prototype:\nconst char * osg::RenderBuffer::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::RenderBuffer* self=Luna< osg::Referenced >::checkSubType< osg::RenderBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::RenderBuffer::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->RenderBuffer::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::RenderBuffer::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::RenderBuffer::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::RenderBuffer::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::RenderBuffer* self=Luna< osg::Referenced >::checkSubType< osg::RenderBuffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::RenderBuffer::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RenderBuffer::releaseGLObjects(_arg1);

		return 0;
	}


	// Operator binds:

};

osg::RenderBuffer* LunaTraits< osg::RenderBuffer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_RenderBuffer::_bind_ctor(L);
}

void LunaTraits< osg::RenderBuffer >::_bind_dtor(osg::RenderBuffer* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::RenderBuffer >::className[] = "RenderBuffer";
const char LunaTraits< osg::RenderBuffer >::fullName[] = "osg::RenderBuffer";
const char LunaTraits< osg::RenderBuffer >::moduleName[] = "osg";
const char* LunaTraits< osg::RenderBuffer >::parents[] = {"osg.Object", 0};
const int LunaTraits< osg::RenderBuffer >::hash = 3153589;
const int LunaTraits< osg::RenderBuffer >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::RenderBuffer >::methods[] = {
	{"cloneType", &luna_wrapper_osg_RenderBuffer::_bind_cloneType},
	{"clone", &luna_wrapper_osg_RenderBuffer::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_RenderBuffer::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_RenderBuffer::_bind_libraryName},
	{"className", &luna_wrapper_osg_RenderBuffer::_bind_className},
	{"getWidth", &luna_wrapper_osg_RenderBuffer::_bind_getWidth},
	{"getHeight", &luna_wrapper_osg_RenderBuffer::_bind_getHeight},
	{"setWidth", &luna_wrapper_osg_RenderBuffer::_bind_setWidth},
	{"setHeight", &luna_wrapper_osg_RenderBuffer::_bind_setHeight},
	{"setSize", &luna_wrapper_osg_RenderBuffer::_bind_setSize},
	{"getInternalFormat", &luna_wrapper_osg_RenderBuffer::_bind_getInternalFormat},
	{"setInternalFormat", &luna_wrapper_osg_RenderBuffer::_bind_setInternalFormat},
	{"getSamples", &luna_wrapper_osg_RenderBuffer::_bind_getSamples},
	{"getColorSamples", &luna_wrapper_osg_RenderBuffer::_bind_getColorSamples},
	{"setSamples", &luna_wrapper_osg_RenderBuffer::_bind_setSamples},
	{"setColorSamples", &luna_wrapper_osg_RenderBuffer::_bind_setColorSamples},
	{"getObjectID", &luna_wrapper_osg_RenderBuffer::_bind_getObjectID},
	{"compare", &luna_wrapper_osg_RenderBuffer::_bind_compare},
	{"releaseGLObjects", &luna_wrapper_osg_RenderBuffer::_bind_releaseGLObjects},
	{"deleteRenderBuffer", &luna_wrapper_osg_RenderBuffer::_bind_deleteRenderBuffer},
	{"flushDeletedRenderBuffers", &luna_wrapper_osg_RenderBuffer::_bind_flushDeletedRenderBuffers},
	{"discardDeletedRenderBuffers", &luna_wrapper_osg_RenderBuffer::_bind_discardDeletedRenderBuffers},
	{"getMaxSamples", &luna_wrapper_osg_RenderBuffer::_bind_getMaxSamples},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_RenderBuffer::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osg_RenderBuffer::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_RenderBuffer::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_RenderBuffer::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_RenderBuffer::_bind_base_getUserData},
	{"base_cloneType", &luna_wrapper_osg_RenderBuffer::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_RenderBuffer::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_RenderBuffer::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_RenderBuffer::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_RenderBuffer::_bind_base_className},
	{"base_releaseGLObjects", &luna_wrapper_osg_RenderBuffer::_bind_base_releaseGLObjects},
	{"fromVoid", &luna_wrapper_osg_RenderBuffer::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_RenderBuffer::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_RenderBuffer::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::RenderBuffer >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_RenderBuffer::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::RenderBuffer >::enumValues[] = {
	{0,0}
};



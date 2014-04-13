#include <plug_common.h>

#include <luna/wrappers/wrapper_ork_TransformFeedback.h>

class luna_wrapper_ork_TransformFeedback {
public:
	typedef Luna< ork::TransformFeedback > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::Object* self=(Luna< ork::Object >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<ork::Object,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
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

		ork::TransformFeedback* self= (ork::TransformFeedback*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ork::TransformFeedback >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,1381405) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< ork::Object >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_Object(lua_State *L) {
		// all checked are already performed before reaching this point.
		//ork::TransformFeedback* ptr= dynamic_cast< ork::TransformFeedback* >(Luna< ork::Object >::check(L,1));
		ork::TransformFeedback* ptr= luna_caster< ork::Object, ork::TransformFeedback >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< ork::TransformFeedback >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setVertexBuffer_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::GPUBuffer >(L,3) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setVertexBuffer_overload_2(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::GPUBuffer >(L,3) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_transformFeedback(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDefault(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_begin(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,2) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::TransformFeedback >(L,4) ) return false;
		if( lua_isboolean(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_transform(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,1381405) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_multiTransform(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,1381405) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_transformIndirect(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,1381405) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_pause(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_resume(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::TransformFeedback >(L,1) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_end(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_toString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// ork::TransformFeedback::TransformFeedback()
	static ork::TransformFeedback* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::TransformFeedback::TransformFeedback() function, expected prototype:\nork::TransformFeedback::TransformFeedback()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new ork::TransformFeedback();
	}

	// ork::TransformFeedback::TransformFeedback(lua_Table * data)
	static ork::TransformFeedback* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::TransformFeedback::TransformFeedback(lua_Table * data) function, expected prototype:\nork::TransformFeedback::TransformFeedback(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_ork_TransformFeedback(L,NULL);
	}

	// Overload binder for ork::TransformFeedback::TransformFeedback
	static ork::TransformFeedback* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function TransformFeedback, cannot match any of the overloads for function TransformFeedback:\n  TransformFeedback()\n  TransformFeedback(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void ork::TransformFeedback::reset()
	static int _bind_reset(lua_State *L) {
		if (!_lg_typecheck_reset(L)) {
			luaL_error(L, "luna typecheck failed in void ork::TransformFeedback::reset() function, expected prototype:\nvoid ork::TransformFeedback::reset()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::TransformFeedback* self=Luna< ork::Object >::checkSubType< ork::TransformFeedback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::TransformFeedback::reset(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->reset();

		return 0;
	}

	// void ork::TransformFeedback::setVertexBuffer(int index, ork::ptr< ork::GPUBuffer > b)
	static int _bind_setVertexBuffer_overload_1(lua_State *L) {
		if (!_lg_typecheck_setVertexBuffer_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void ork::TransformFeedback::setVertexBuffer(int index, ork::ptr< ork::GPUBuffer > b) function, expected prototype:\nvoid ork::TransformFeedback::setVertexBuffer(int index, ork::ptr< ork::GPUBuffer > b)\nClass arguments details:\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);
		ork::ptr< ork::GPUBuffer > b = Luna< ork::Object >::checkSubType< ork::GPUBuffer >(L,3);

		ork::TransformFeedback* self=Luna< ork::Object >::checkSubType< ork::TransformFeedback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::TransformFeedback::setVertexBuffer(int, ork::ptr< ork::GPUBuffer >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setVertexBuffer(index, b);

		return 0;
	}

	// void ork::TransformFeedback::setVertexBuffer(int index, ork::ptr< ork::GPUBuffer > b, unsigned int offset, unsigned int size)
	static int _bind_setVertexBuffer_overload_2(lua_State *L) {
		if (!_lg_typecheck_setVertexBuffer_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void ork::TransformFeedback::setVertexBuffer(int index, ork::ptr< ork::GPUBuffer > b, unsigned int offset, unsigned int size) function, expected prototype:\nvoid ork::TransformFeedback::setVertexBuffer(int index, ork::ptr< ork::GPUBuffer > b, unsigned int offset, unsigned int size)\nClass arguments details:\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);
		ork::ptr< ork::GPUBuffer > b = Luna< ork::Object >::checkSubType< ork::GPUBuffer >(L,3);
		unsigned int offset=(unsigned int)lua_tointeger(L,4);
		unsigned int size=(unsigned int)lua_tointeger(L,5);

		ork::TransformFeedback* self=Luna< ork::Object >::checkSubType< ork::TransformFeedback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::TransformFeedback::setVertexBuffer(int, ork::ptr< ork::GPUBuffer >, unsigned int, unsigned int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setVertexBuffer(index, b, offset, size);

		return 0;
	}

	// Overload binder for ork::TransformFeedback::setVertexBuffer
	static int _bind_setVertexBuffer(lua_State *L) {
		if (_lg_typecheck_setVertexBuffer_overload_1(L)) return _bind_setVertexBuffer_overload_1(L);
		if (_lg_typecheck_setVertexBuffer_overload_2(L)) return _bind_setVertexBuffer_overload_2(L);

		luaL_error(L, "error in function setVertexBuffer, cannot match any of the overloads for function setVertexBuffer:\n  setVertexBuffer(int, ork::ptr< ork::GPUBuffer >)\n  setVertexBuffer(int, ork::ptr< ork::GPUBuffer >, unsigned int, unsigned int)\n");
		return 0;
	}

	// void ork::TransformFeedback::transformFeedback(const ork::MeshBuffers & mesh, const ork::TransformFeedback & tfb, int stream = 0)
	static int _bind_transformFeedback(lua_State *L) {
		if (!_lg_typecheck_transformFeedback(L)) {
			luaL_error(L, "luna typecheck failed in void ork::TransformFeedback::transformFeedback(const ork::MeshBuffers & mesh, const ork::TransformFeedback & tfb, int stream = 0) function, expected prototype:\nvoid ork::TransformFeedback::transformFeedback(const ork::MeshBuffers & mesh, const ork::TransformFeedback & tfb, int stream = 0)\nClass arguments details:\narg 1 ID = 1381405\narg 2 ID = 1381405\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const ork::MeshBuffers* mesh_ptr=(Luna< ork::Object >::checkSubType< ork::MeshBuffers >(L,2));
		if( !mesh_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mesh in ork::TransformFeedback::transformFeedback function");
		}
		const ork::MeshBuffers & mesh=*mesh_ptr;
		const ork::TransformFeedback* tfb_ptr=(Luna< ork::Object >::checkSubType< ork::TransformFeedback >(L,3));
		if( !tfb_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg tfb in ork::TransformFeedback::transformFeedback function");
		}
		const ork::TransformFeedback & tfb=*tfb_ptr;
		int stream=luatop>3 ? (int)lua_tointeger(L,4) : (int)0;

		ork::TransformFeedback* self=Luna< ork::Object >::checkSubType< ork::TransformFeedback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::TransformFeedback::transformFeedback(const ork::MeshBuffers &, const ork::TransformFeedback &, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->transformFeedback(mesh, tfb, stream);

		return 0;
	}

	// static ork::ptr< ork::TransformFeedback > ork::TransformFeedback::getDefault()
	static int _bind_getDefault(lua_State *L) {
		if (!_lg_typecheck_getDefault(L)) {
			luaL_error(L, "luna typecheck failed in static ork::ptr< ork::TransformFeedback > ork::TransformFeedback::getDefault() function, expected prototype:\nstatic ork::ptr< ork::TransformFeedback > ork::TransformFeedback::getDefault()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::ptr< ork::TransformFeedback > lret = ork::TransformFeedback::getDefault();
		Luna< ork::TransformFeedback >::push(L,lret.get(),false);

		return 1;
	}

	// static void ork::TransformFeedback::begin(ork::ptr< ork::FrameBuffer > fb, ork::ptr< ork::Program > transform, ork::MeshMode m, ork::ptr< ork::TransformFeedback > tfb, bool rasterize)
	static int _bind_begin(lua_State *L) {
		if (!_lg_typecheck_begin(L)) {
			luaL_error(L, "luna typecheck failed in static void ork::TransformFeedback::begin(ork::ptr< ork::FrameBuffer > fb, ork::ptr< ork::Program > transform, ork::MeshMode m, ork::ptr< ork::TransformFeedback > tfb, bool rasterize) function, expected prototype:\nstatic void ork::TransformFeedback::begin(ork::ptr< ork::FrameBuffer > fb, ork::ptr< ork::Program > transform, ork::MeshMode m, ork::ptr< ork::TransformFeedback > tfb, bool rasterize)\nClass arguments details:\narg 1 ID = [unknown]\narg 2 ID = [unknown]\narg 4 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::FrameBuffer > fb = Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);
		ork::ptr< ork::Program > transform = Luna< ork::Object >::checkSubType< ork::Program >(L,2);
		ork::MeshMode m=(ork::MeshMode)lua_tointeger(L,3);
		ork::ptr< ork::TransformFeedback > tfb = Luna< ork::Object >::checkSubType< ork::TransformFeedback >(L,4);
		bool rasterize=(bool)(lua_toboolean(L,5)==1);

		ork::TransformFeedback::begin(fb, transform, m, tfb, rasterize);

		return 0;
	}

	// static void ork::TransformFeedback::transform(const ork::MeshBuffers & mesh, int first, int count, int primCount = 1, int base = 0)
	static int _bind_transform(lua_State *L) {
		if (!_lg_typecheck_transform(L)) {
			luaL_error(L, "luna typecheck failed in static void ork::TransformFeedback::transform(const ork::MeshBuffers & mesh, int first, int count, int primCount = 1, int base = 0) function, expected prototype:\nstatic void ork::TransformFeedback::transform(const ork::MeshBuffers & mesh, int first, int count, int primCount = 1, int base = 0)\nClass arguments details:\narg 1 ID = 1381405\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const ork::MeshBuffers* mesh_ptr=(Luna< ork::Object >::checkSubType< ork::MeshBuffers >(L,1));
		if( !mesh_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mesh in ork::TransformFeedback::transform function");
		}
		const ork::MeshBuffers & mesh=*mesh_ptr;
		int first=(int)lua_tointeger(L,2);
		int count=(int)lua_tointeger(L,3);
		int primCount=luatop>3 ? (int)lua_tointeger(L,4) : (int)1;
		int base=luatop>4 ? (int)lua_tointeger(L,5) : (int)0;

		ork::TransformFeedback::transform(mesh, first, count, primCount, base);

		return 0;
	}

	// static void ork::TransformFeedback::multiTransform(const ork::MeshBuffers & mesh, int * firsts, int * counts, int primCount, int * bases = 0)
	static int _bind_multiTransform(lua_State *L) {
		if (!_lg_typecheck_multiTransform(L)) {
			luaL_error(L, "luna typecheck failed in static void ork::TransformFeedback::multiTransform(const ork::MeshBuffers & mesh, int * firsts, int * counts, int primCount, int * bases = 0) function, expected prototype:\nstatic void ork::TransformFeedback::multiTransform(const ork::MeshBuffers & mesh, int * firsts, int * counts, int primCount, int * bases = 0)\nClass arguments details:\narg 1 ID = 1381405\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const ork::MeshBuffers* mesh_ptr=(Luna< ork::Object >::checkSubType< ork::MeshBuffers >(L,1));
		if( !mesh_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mesh in ork::TransformFeedback::multiTransform function");
		}
		const ork::MeshBuffers & mesh=*mesh_ptr;
		int* firsts=(int*)Luna< void >::check(L,2);
		int* counts=(int*)Luna< void >::check(L,3);
		int primCount=(int)lua_tointeger(L,4);
		int* bases=luatop>4 ? (int*)Luna< void >::check(L,5) : (int*)0;

		ork::TransformFeedback::multiTransform(mesh, firsts, counts, primCount, bases);

		return 0;
	}

	// static void ork::TransformFeedback::transformIndirect(const ork::MeshBuffers & mesh, const ork::Buffer & buf)
	static int _bind_transformIndirect(lua_State *L) {
		if (!_lg_typecheck_transformIndirect(L)) {
			luaL_error(L, "luna typecheck failed in static void ork::TransformFeedback::transformIndirect(const ork::MeshBuffers & mesh, const ork::Buffer & buf) function, expected prototype:\nstatic void ork::TransformFeedback::transformIndirect(const ork::MeshBuffers & mesh, const ork::Buffer & buf)\nClass arguments details:\narg 1 ID = 1381405\narg 2 ID = 1381405\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::MeshBuffers* mesh_ptr=(Luna< ork::Object >::checkSubType< ork::MeshBuffers >(L,1));
		if( !mesh_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mesh in ork::TransformFeedback::transformIndirect function");
		}
		const ork::MeshBuffers & mesh=*mesh_ptr;
		const ork::Buffer* buf_ptr=(Luna< ork::Object >::checkSubType< ork::Buffer >(L,2));
		if( !buf_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg buf in ork::TransformFeedback::transformIndirect function");
		}
		const ork::Buffer & buf=*buf_ptr;

		ork::TransformFeedback::transformIndirect(mesh, buf);

		return 0;
	}

	// static void ork::TransformFeedback::pause()
	static int _bind_pause(lua_State *L) {
		if (!_lg_typecheck_pause(L)) {
			luaL_error(L, "luna typecheck failed in static void ork::TransformFeedback::pause() function, expected prototype:\nstatic void ork::TransformFeedback::pause()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::TransformFeedback::pause();

		return 0;
	}

	// static void ork::TransformFeedback::resume(ork::ptr< ork::TransformFeedback > tfb)
	static int _bind_resume(lua_State *L) {
		if (!_lg_typecheck_resume(L)) {
			luaL_error(L, "luna typecheck failed in static void ork::TransformFeedback::resume(ork::ptr< ork::TransformFeedback > tfb) function, expected prototype:\nstatic void ork::TransformFeedback::resume(ork::ptr< ork::TransformFeedback > tfb)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::TransformFeedback > tfb = Luna< ork::Object >::checkSubType< ork::TransformFeedback >(L,1);

		ork::TransformFeedback::resume(tfb);

		return 0;
	}

	// static void ork::TransformFeedback::end()
	static int _bind_end(lua_State *L) {
		if (!_lg_typecheck_end(L)) {
			luaL_error(L, "luna typecheck failed in static void ork::TransformFeedback::end() function, expected prototype:\nstatic void ork::TransformFeedback::end()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::TransformFeedback::end();

		return 0;
	}

	// const char * ork::TransformFeedback::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * ork::TransformFeedback::base_toString() function, expected prototype:\nconst char * ork::TransformFeedback::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::TransformFeedback* self=Luna< ork::Object >::checkSubType< ork::TransformFeedback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * ork::TransformFeedback::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->TransformFeedback::toString();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

ork::TransformFeedback* LunaTraits< ork::TransformFeedback >::_bind_ctor(lua_State *L) {
	return luna_wrapper_ork_TransformFeedback::_bind_ctor(L);
}

void LunaTraits< ork::TransformFeedback >::_bind_dtor(ork::TransformFeedback* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< ork::TransformFeedback >::className[] = "TransformFeedback";
const char LunaTraits< ork::TransformFeedback >::fullName[] = "ork::TransformFeedback";
const char LunaTraits< ork::TransformFeedback >::moduleName[] = "ork";
const char* LunaTraits< ork::TransformFeedback >::parents[] = {"ork.Object", 0};
const int LunaTraits< ork::TransformFeedback >::hash = 96645382;
const int LunaTraits< ork::TransformFeedback >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< ork::TransformFeedback >::methods[] = {
	{"reset", &luna_wrapper_ork_TransformFeedback::_bind_reset},
	{"setVertexBuffer", &luna_wrapper_ork_TransformFeedback::_bind_setVertexBuffer},
	{"transformFeedback", &luna_wrapper_ork_TransformFeedback::_bind_transformFeedback},
	{"getDefault", &luna_wrapper_ork_TransformFeedback::_bind_getDefault},
	{"begin", &luna_wrapper_ork_TransformFeedback::_bind_begin},
	{"transform", &luna_wrapper_ork_TransformFeedback::_bind_transform},
	{"multiTransform", &luna_wrapper_ork_TransformFeedback::_bind_multiTransform},
	{"transformIndirect", &luna_wrapper_ork_TransformFeedback::_bind_transformIndirect},
	{"pause", &luna_wrapper_ork_TransformFeedback::_bind_pause},
	{"resume", &luna_wrapper_ork_TransformFeedback::_bind_resume},
	{"end", &luna_wrapper_ork_TransformFeedback::_bind_end},
	{"base_toString", &luna_wrapper_ork_TransformFeedback::_bind_base_toString},
	{"fromVoid", &luna_wrapper_ork_TransformFeedback::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ork_TransformFeedback::_bind_asVoid},
	{"getTable", &luna_wrapper_ork_TransformFeedback::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< ork::TransformFeedback >::converters[] = {
	{"ork::Object", &luna_wrapper_ork_TransformFeedback::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< ork::TransformFeedback >::enumValues[] = {
	{0,0}
};



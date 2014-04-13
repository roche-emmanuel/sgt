#include <plug_common.h>

#include <luna/wrappers/wrapper_ork_MeshBuffers.h>

class luna_wrapper_ork_MeshBuffers {
public:
	typedef Luna< ork::MeshBuffers > luna_t;

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

		ork::MeshBuffers* self= (ork::MeshBuffers*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ork::MeshBuffers >::push(L,self,false);
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
		//ork::MeshBuffers* ptr= dynamic_cast< ork::MeshBuffers* >(Luna< ork::Object >::check(L,1));
		ork::MeshBuffers* ptr= luna_caster< ork::Object, ork::MeshBuffers >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< ork::MeshBuffers >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_getAttributeCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAttributeBuffer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getIndiceBuffer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_addAttributeBuffer_overload_1(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( lua_isboolean(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addAttributeBuffer_overload_2(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( lua_isboolean(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addAttributeBuffer_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::AttributeBuffer >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setIndicesBuffer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::AttributeBuffer >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDefaultAttributeP1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDefaultAttributeP2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDefaultAttributeP3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDefaultAttributeP4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDefaultAttributeP(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		if( lua_isboolean(L,4)==0 ) return false;
		if( luatop>4 && lua_isboolean(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNvertices(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNindices(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getBounds(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPrimitiveRestart(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPatchVertices(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNvertices(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNindices(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setBounds(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,63151942) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPrimitiveRestart(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPatchVertices(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_toString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// ork::MeshBuffers::MeshBuffers()
	static ork::MeshBuffers* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::MeshBuffers::MeshBuffers() function, expected prototype:\nork::MeshBuffers::MeshBuffers()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new ork::MeshBuffers();
	}

	// ork::MeshBuffers::MeshBuffers(lua_Table * data)
	static ork::MeshBuffers* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::MeshBuffers::MeshBuffers(lua_Table * data) function, expected prototype:\nork::MeshBuffers::MeshBuffers(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_ork_MeshBuffers(L,NULL);
	}

	// Overload binder for ork::MeshBuffers::MeshBuffers
	static ork::MeshBuffers* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function MeshBuffers, cannot match any of the overloads for function MeshBuffers:\n  MeshBuffers()\n  MeshBuffers(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// int ork::MeshBuffers::getAttributeCount() const
	static int _bind_getAttributeCount(lua_State *L) {
		if (!_lg_typecheck_getAttributeCount(L)) {
			luaL_error(L, "luna typecheck failed in int ork::MeshBuffers::getAttributeCount() const function, expected prototype:\nint ork::MeshBuffers::getAttributeCount() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::MeshBuffers* self=Luna< ork::Object >::checkSubType< ork::MeshBuffers >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int ork::MeshBuffers::getAttributeCount() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getAttributeCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// ork::ptr< ork::AttributeBuffer > ork::MeshBuffers::getAttributeBuffer(int index) const
	static int _bind_getAttributeBuffer(lua_State *L) {
		if (!_lg_typecheck_getAttributeBuffer(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::AttributeBuffer > ork::MeshBuffers::getAttributeBuffer(int index) const function, expected prototype:\nork::ptr< ork::AttributeBuffer > ork::MeshBuffers::getAttributeBuffer(int index) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);

		ork::MeshBuffers* self=Luna< ork::Object >::checkSubType< ork::MeshBuffers >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::AttributeBuffer > ork::MeshBuffers::getAttributeBuffer(int) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::AttributeBuffer > lret = self->getAttributeBuffer(index);
		Luna< ork::AttributeBuffer >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::AttributeBuffer > ork::MeshBuffers::getIndiceBuffer() const
	static int _bind_getIndiceBuffer(lua_State *L) {
		if (!_lg_typecheck_getIndiceBuffer(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::AttributeBuffer > ork::MeshBuffers::getIndiceBuffer() const function, expected prototype:\nork::ptr< ork::AttributeBuffer > ork::MeshBuffers::getIndiceBuffer() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::MeshBuffers* self=Luna< ork::Object >::checkSubType< ork::MeshBuffers >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::AttributeBuffer > ork::MeshBuffers::getIndiceBuffer() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::AttributeBuffer > lret = self->getIndiceBuffer();
		Luna< ork::AttributeBuffer >::push(L,lret.get(),false);

		return 1;
	}

	// void ork::MeshBuffers::addAttributeBuffer(int index, int size, ork::AttributeType type, bool norm)
	static int _bind_addAttributeBuffer_overload_1(lua_State *L) {
		if (!_lg_typecheck_addAttributeBuffer_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void ork::MeshBuffers::addAttributeBuffer(int index, int size, ork::AttributeType type, bool norm) function, expected prototype:\nvoid ork::MeshBuffers::addAttributeBuffer(int index, int size, ork::AttributeType type, bool norm)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);
		int size=(int)lua_tointeger(L,3);
		ork::AttributeType type=(ork::AttributeType)lua_tointeger(L,4);
		bool norm=(bool)(lua_toboolean(L,5)==1);

		ork::MeshBuffers* self=Luna< ork::Object >::checkSubType< ork::MeshBuffers >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::MeshBuffers::addAttributeBuffer(int, int, ork::AttributeType, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addAttributeBuffer(index, size, type, norm);

		return 0;
	}

	// void ork::MeshBuffers::addAttributeBuffer(int index, int size, int vertexsize, ork::AttributeType type, bool norm)
	static int _bind_addAttributeBuffer_overload_2(lua_State *L) {
		if (!_lg_typecheck_addAttributeBuffer_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void ork::MeshBuffers::addAttributeBuffer(int index, int size, int vertexsize, ork::AttributeType type, bool norm) function, expected prototype:\nvoid ork::MeshBuffers::addAttributeBuffer(int index, int size, int vertexsize, ork::AttributeType type, bool norm)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);
		int size=(int)lua_tointeger(L,3);
		int vertexsize=(int)lua_tointeger(L,4);
		ork::AttributeType type=(ork::AttributeType)lua_tointeger(L,5);
		bool norm=(bool)(lua_toboolean(L,6)==1);

		ork::MeshBuffers* self=Luna< ork::Object >::checkSubType< ork::MeshBuffers >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::MeshBuffers::addAttributeBuffer(int, int, int, ork::AttributeType, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addAttributeBuffer(index, size, vertexsize, type, norm);

		return 0;
	}

	// void ork::MeshBuffers::addAttributeBuffer(ork::ptr< ork::AttributeBuffer > buffer)
	static int _bind_addAttributeBuffer_overload_3(lua_State *L) {
		if (!_lg_typecheck_addAttributeBuffer_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in void ork::MeshBuffers::addAttributeBuffer(ork::ptr< ork::AttributeBuffer > buffer) function, expected prototype:\nvoid ork::MeshBuffers::addAttributeBuffer(ork::ptr< ork::AttributeBuffer > buffer)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::AttributeBuffer > buffer = Luna< ork::Object >::checkSubType< ork::AttributeBuffer >(L,2);

		ork::MeshBuffers* self=Luna< ork::Object >::checkSubType< ork::MeshBuffers >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::MeshBuffers::addAttributeBuffer(ork::ptr< ork::AttributeBuffer >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addAttributeBuffer(buffer);

		return 0;
	}

	// Overload binder for ork::MeshBuffers::addAttributeBuffer
	static int _bind_addAttributeBuffer(lua_State *L) {
		if (_lg_typecheck_addAttributeBuffer_overload_1(L)) return _bind_addAttributeBuffer_overload_1(L);
		if (_lg_typecheck_addAttributeBuffer_overload_2(L)) return _bind_addAttributeBuffer_overload_2(L);
		if (_lg_typecheck_addAttributeBuffer_overload_3(L)) return _bind_addAttributeBuffer_overload_3(L);

		luaL_error(L, "error in function addAttributeBuffer, cannot match any of the overloads for function addAttributeBuffer:\n  addAttributeBuffer(int, int, ork::AttributeType, bool)\n  addAttributeBuffer(int, int, int, ork::AttributeType, bool)\n  addAttributeBuffer(ork::ptr< ork::AttributeBuffer >)\n");
		return 0;
	}

	// void ork::MeshBuffers::setIndicesBuffer(ork::ptr< ork::AttributeBuffer > indices)
	static int _bind_setIndicesBuffer(lua_State *L) {
		if (!_lg_typecheck_setIndicesBuffer(L)) {
			luaL_error(L, "luna typecheck failed in void ork::MeshBuffers::setIndicesBuffer(ork::ptr< ork::AttributeBuffer > indices) function, expected prototype:\nvoid ork::MeshBuffers::setIndicesBuffer(ork::ptr< ork::AttributeBuffer > indices)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::AttributeBuffer > indices = Luna< ork::Object >::checkSubType< ork::AttributeBuffer >(L,2);

		ork::MeshBuffers* self=Luna< ork::Object >::checkSubType< ork::MeshBuffers >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::MeshBuffers::setIndicesBuffer(ork::ptr< ork::AttributeBuffer >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setIndicesBuffer(indices);

		return 0;
	}

	// void ork::MeshBuffers::reset() const
	static int _bind_reset(lua_State *L) {
		if (!_lg_typecheck_reset(L)) {
			luaL_error(L, "luna typecheck failed in void ork::MeshBuffers::reset() const function, expected prototype:\nvoid ork::MeshBuffers::reset() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::MeshBuffers* self=Luna< ork::Object >::checkSubType< ork::MeshBuffers >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::MeshBuffers::reset() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->reset();

		return 0;
	}

	// static void ork::MeshBuffers::setDefaultAttributeP1(unsigned int index, unsigned int defaultValue, bool isSigned, bool normalize = false)
	static int _bind_setDefaultAttributeP1(lua_State *L) {
		if (!_lg_typecheck_setDefaultAttributeP1(L)) {
			luaL_error(L, "luna typecheck failed in static void ork::MeshBuffers::setDefaultAttributeP1(unsigned int index, unsigned int defaultValue, bool isSigned, bool normalize = false) function, expected prototype:\nstatic void ork::MeshBuffers::setDefaultAttributeP1(unsigned int index, unsigned int defaultValue, bool isSigned, bool normalize = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		unsigned int index=(unsigned int)lua_tointeger(L,1);
		unsigned int defaultValue=(unsigned int)lua_tointeger(L,2);
		bool isSigned=(bool)(lua_toboolean(L,3)==1);
		bool normalize=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)false;

		ork::MeshBuffers::setDefaultAttributeP1(index, defaultValue, isSigned, normalize);

		return 0;
	}

	// static void ork::MeshBuffers::setDefaultAttributeP2(unsigned int index, unsigned int defaultValue, bool isSigned, bool normalize = false)
	static int _bind_setDefaultAttributeP2(lua_State *L) {
		if (!_lg_typecheck_setDefaultAttributeP2(L)) {
			luaL_error(L, "luna typecheck failed in static void ork::MeshBuffers::setDefaultAttributeP2(unsigned int index, unsigned int defaultValue, bool isSigned, bool normalize = false) function, expected prototype:\nstatic void ork::MeshBuffers::setDefaultAttributeP2(unsigned int index, unsigned int defaultValue, bool isSigned, bool normalize = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		unsigned int index=(unsigned int)lua_tointeger(L,1);
		unsigned int defaultValue=(unsigned int)lua_tointeger(L,2);
		bool isSigned=(bool)(lua_toboolean(L,3)==1);
		bool normalize=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)false;

		ork::MeshBuffers::setDefaultAttributeP2(index, defaultValue, isSigned, normalize);

		return 0;
	}

	// static void ork::MeshBuffers::setDefaultAttributeP3(unsigned int index, unsigned int defaultValue, bool isSigned, bool normalize = false)
	static int _bind_setDefaultAttributeP3(lua_State *L) {
		if (!_lg_typecheck_setDefaultAttributeP3(L)) {
			luaL_error(L, "luna typecheck failed in static void ork::MeshBuffers::setDefaultAttributeP3(unsigned int index, unsigned int defaultValue, bool isSigned, bool normalize = false) function, expected prototype:\nstatic void ork::MeshBuffers::setDefaultAttributeP3(unsigned int index, unsigned int defaultValue, bool isSigned, bool normalize = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		unsigned int index=(unsigned int)lua_tointeger(L,1);
		unsigned int defaultValue=(unsigned int)lua_tointeger(L,2);
		bool isSigned=(bool)(lua_toboolean(L,3)==1);
		bool normalize=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)false;

		ork::MeshBuffers::setDefaultAttributeP3(index, defaultValue, isSigned, normalize);

		return 0;
	}

	// static void ork::MeshBuffers::setDefaultAttributeP4(unsigned int index, unsigned int defaultValue, bool isSigned, bool normalize = false)
	static int _bind_setDefaultAttributeP4(lua_State *L) {
		if (!_lg_typecheck_setDefaultAttributeP4(L)) {
			luaL_error(L, "luna typecheck failed in static void ork::MeshBuffers::setDefaultAttributeP4(unsigned int index, unsigned int defaultValue, bool isSigned, bool normalize = false) function, expected prototype:\nstatic void ork::MeshBuffers::setDefaultAttributeP4(unsigned int index, unsigned int defaultValue, bool isSigned, bool normalize = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		unsigned int index=(unsigned int)lua_tointeger(L,1);
		unsigned int defaultValue=(unsigned int)lua_tointeger(L,2);
		bool isSigned=(bool)(lua_toboolean(L,3)==1);
		bool normalize=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)false;

		ork::MeshBuffers::setDefaultAttributeP4(index, defaultValue, isSigned, normalize);

		return 0;
	}

	// static void ork::MeshBuffers::setDefaultAttributeP(unsigned int index, int count, unsigned int * defaultValue, bool isSigned, bool normalize = false)
	static int _bind_setDefaultAttributeP(lua_State *L) {
		if (!_lg_typecheck_setDefaultAttributeP(L)) {
			luaL_error(L, "luna typecheck failed in static void ork::MeshBuffers::setDefaultAttributeP(unsigned int index, int count, unsigned int * defaultValue, bool isSigned, bool normalize = false) function, expected prototype:\nstatic void ork::MeshBuffers::setDefaultAttributeP(unsigned int index, int count, unsigned int * defaultValue, bool isSigned, bool normalize = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		unsigned int index=(unsigned int)lua_tointeger(L,1);
		int count=(int)lua_tointeger(L,2);
		unsigned int* defaultValue=(unsigned int*)Luna< void >::check(L,3);
		bool isSigned=(bool)(lua_toboolean(L,4)==1);
		bool normalize=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : (bool)false;

		ork::MeshBuffers::setDefaultAttributeP(index, count, defaultValue, isSigned, normalize);

		return 0;
	}

	// ork::MeshMode ork::MeshBuffers::mode()
	static int _bind_getMode(lua_State *L) {
		if (!_lg_typecheck_getMode(L)) {
			luaL_error(L, "luna typecheck failed in ork::MeshMode ork::MeshBuffers::mode() function, expected prototype:\nork::MeshMode ork::MeshBuffers::mode()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::MeshBuffers* self=Luna< ork::Object >::checkSubType< ork::MeshBuffers >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::MeshMode ork::MeshBuffers::mode(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::MeshMode lret = self->mode;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int ork::MeshBuffers::nvertices()
	static int _bind_getNvertices(lua_State *L) {
		if (!_lg_typecheck_getNvertices(L)) {
			luaL_error(L, "luna typecheck failed in int ork::MeshBuffers::nvertices() function, expected prototype:\nint ork::MeshBuffers::nvertices()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::MeshBuffers* self=Luna< ork::Object >::checkSubType< ork::MeshBuffers >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int ork::MeshBuffers::nvertices(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->nvertices;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int ork::MeshBuffers::nindices()
	static int _bind_getNindices(lua_State *L) {
		if (!_lg_typecheck_getNindices(L)) {
			luaL_error(L, "luna typecheck failed in int ork::MeshBuffers::nindices() function, expected prototype:\nint ork::MeshBuffers::nindices()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::MeshBuffers* self=Luna< ork::Object >::checkSubType< ork::MeshBuffers >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int ork::MeshBuffers::nindices(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->nindices;
		lua_pushnumber(L,lret);

		return 1;
	}

	// ork::box3f ork::MeshBuffers::bounds()
	static int _bind_getBounds(lua_State *L) {
		if (!_lg_typecheck_getBounds(L)) {
			luaL_error(L, "luna typecheck failed in ork::box3f ork::MeshBuffers::bounds() function, expected prototype:\nork::box3f ork::MeshBuffers::bounds()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::MeshBuffers* self=Luna< ork::Object >::checkSubType< ork::MeshBuffers >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::box3f ork::MeshBuffers::bounds(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const ork::box3f* lret = &self->bounds;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::box3f >::push(L,lret,false);

		return 1;
	}

	// int ork::MeshBuffers::primitiveRestart()
	static int _bind_getPrimitiveRestart(lua_State *L) {
		if (!_lg_typecheck_getPrimitiveRestart(L)) {
			luaL_error(L, "luna typecheck failed in int ork::MeshBuffers::primitiveRestart() function, expected prototype:\nint ork::MeshBuffers::primitiveRestart()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::MeshBuffers* self=Luna< ork::Object >::checkSubType< ork::MeshBuffers >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int ork::MeshBuffers::primitiveRestart(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->primitiveRestart;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int ork::MeshBuffers::patchVertices()
	static int _bind_getPatchVertices(lua_State *L) {
		if (!_lg_typecheck_getPatchVertices(L)) {
			luaL_error(L, "luna typecheck failed in int ork::MeshBuffers::patchVertices() function, expected prototype:\nint ork::MeshBuffers::patchVertices()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::MeshBuffers* self=Luna< ork::Object >::checkSubType< ork::MeshBuffers >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int ork::MeshBuffers::patchVertices(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->patchVertices;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void ork::MeshBuffers::mode(ork::MeshMode value)
	static int _bind_setMode(lua_State *L) {
		if (!_lg_typecheck_setMode(L)) {
			luaL_error(L, "luna typecheck failed in void ork::MeshBuffers::mode(ork::MeshMode value) function, expected prototype:\nvoid ork::MeshBuffers::mode(ork::MeshMode value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::MeshMode value=(ork::MeshMode)lua_tointeger(L,2);

		ork::MeshBuffers* self=Luna< ork::Object >::checkSubType< ork::MeshBuffers >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::MeshBuffers::mode(ork::MeshMode). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->mode = value;

		return 0;
	}

	// void ork::MeshBuffers::nvertices(int value)
	static int _bind_setNvertices(lua_State *L) {
		if (!_lg_typecheck_setNvertices(L)) {
			luaL_error(L, "luna typecheck failed in void ork::MeshBuffers::nvertices(int value) function, expected prototype:\nvoid ork::MeshBuffers::nvertices(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		ork::MeshBuffers* self=Luna< ork::Object >::checkSubType< ork::MeshBuffers >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::MeshBuffers::nvertices(int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->nvertices = value;

		return 0;
	}

	// void ork::MeshBuffers::nindices(int value)
	static int _bind_setNindices(lua_State *L) {
		if (!_lg_typecheck_setNindices(L)) {
			luaL_error(L, "luna typecheck failed in void ork::MeshBuffers::nindices(int value) function, expected prototype:\nvoid ork::MeshBuffers::nindices(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		ork::MeshBuffers* self=Luna< ork::Object >::checkSubType< ork::MeshBuffers >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::MeshBuffers::nindices(int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->nindices = value;

		return 0;
	}

	// void ork::MeshBuffers::bounds(ork::box3f value)
	static int _bind_setBounds(lua_State *L) {
		if (!_lg_typecheck_setBounds(L)) {
			luaL_error(L, "luna typecheck failed in void ork::MeshBuffers::bounds(ork::box3f value) function, expected prototype:\nvoid ork::MeshBuffers::bounds(ork::box3f value)\nClass arguments details:\narg 1 ID = 63151942\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::box3f* value_ptr=(Luna< ork::box3f >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in ork::MeshBuffers::bounds function");
		}
		ork::box3f value=*value_ptr;

		ork::MeshBuffers* self=Luna< ork::Object >::checkSubType< ork::MeshBuffers >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::MeshBuffers::bounds(ork::box3f). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->bounds = value;

		return 0;
	}

	// void ork::MeshBuffers::primitiveRestart(int value)
	static int _bind_setPrimitiveRestart(lua_State *L) {
		if (!_lg_typecheck_setPrimitiveRestart(L)) {
			luaL_error(L, "luna typecheck failed in void ork::MeshBuffers::primitiveRestart(int value) function, expected prototype:\nvoid ork::MeshBuffers::primitiveRestart(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		ork::MeshBuffers* self=Luna< ork::Object >::checkSubType< ork::MeshBuffers >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::MeshBuffers::primitiveRestart(int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->primitiveRestart = value;

		return 0;
	}

	// void ork::MeshBuffers::patchVertices(int value)
	static int _bind_setPatchVertices(lua_State *L) {
		if (!_lg_typecheck_setPatchVertices(L)) {
			luaL_error(L, "luna typecheck failed in void ork::MeshBuffers::patchVertices(int value) function, expected prototype:\nvoid ork::MeshBuffers::patchVertices(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		ork::MeshBuffers* self=Luna< ork::Object >::checkSubType< ork::MeshBuffers >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::MeshBuffers::patchVertices(int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->patchVertices = value;

		return 0;
	}

	// const char * ork::MeshBuffers::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * ork::MeshBuffers::base_toString() function, expected prototype:\nconst char * ork::MeshBuffers::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::MeshBuffers* self=Luna< ork::Object >::checkSubType< ork::MeshBuffers >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * ork::MeshBuffers::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->MeshBuffers::toString();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

ork::MeshBuffers* LunaTraits< ork::MeshBuffers >::_bind_ctor(lua_State *L) {
	return luna_wrapper_ork_MeshBuffers::_bind_ctor(L);
}

void LunaTraits< ork::MeshBuffers >::_bind_dtor(ork::MeshBuffers* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< ork::MeshBuffers >::className[] = "MeshBuffers";
const char LunaTraits< ork::MeshBuffers >::fullName[] = "ork::MeshBuffers";
const char LunaTraits< ork::MeshBuffers >::moduleName[] = "ork";
const char* LunaTraits< ork::MeshBuffers >::parents[] = {"ork.Object", 0};
const int LunaTraits< ork::MeshBuffers >::hash = 92692106;
const int LunaTraits< ork::MeshBuffers >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< ork::MeshBuffers >::methods[] = {
	{"getAttributeCount", &luna_wrapper_ork_MeshBuffers::_bind_getAttributeCount},
	{"getAttributeBuffer", &luna_wrapper_ork_MeshBuffers::_bind_getAttributeBuffer},
	{"getIndiceBuffer", &luna_wrapper_ork_MeshBuffers::_bind_getIndiceBuffer},
	{"addAttributeBuffer", &luna_wrapper_ork_MeshBuffers::_bind_addAttributeBuffer},
	{"setIndicesBuffer", &luna_wrapper_ork_MeshBuffers::_bind_setIndicesBuffer},
	{"reset", &luna_wrapper_ork_MeshBuffers::_bind_reset},
	{"setDefaultAttributeP1", &luna_wrapper_ork_MeshBuffers::_bind_setDefaultAttributeP1},
	{"setDefaultAttributeP2", &luna_wrapper_ork_MeshBuffers::_bind_setDefaultAttributeP2},
	{"setDefaultAttributeP3", &luna_wrapper_ork_MeshBuffers::_bind_setDefaultAttributeP3},
	{"setDefaultAttributeP4", &luna_wrapper_ork_MeshBuffers::_bind_setDefaultAttributeP4},
	{"setDefaultAttributeP", &luna_wrapper_ork_MeshBuffers::_bind_setDefaultAttributeP},
	{"getMode", &luna_wrapper_ork_MeshBuffers::_bind_getMode},
	{"getNvertices", &luna_wrapper_ork_MeshBuffers::_bind_getNvertices},
	{"getNindices", &luna_wrapper_ork_MeshBuffers::_bind_getNindices},
	{"getBounds", &luna_wrapper_ork_MeshBuffers::_bind_getBounds},
	{"getPrimitiveRestart", &luna_wrapper_ork_MeshBuffers::_bind_getPrimitiveRestart},
	{"getPatchVertices", &luna_wrapper_ork_MeshBuffers::_bind_getPatchVertices},
	{"setMode", &luna_wrapper_ork_MeshBuffers::_bind_setMode},
	{"setNvertices", &luna_wrapper_ork_MeshBuffers::_bind_setNvertices},
	{"setNindices", &luna_wrapper_ork_MeshBuffers::_bind_setNindices},
	{"setBounds", &luna_wrapper_ork_MeshBuffers::_bind_setBounds},
	{"setPrimitiveRestart", &luna_wrapper_ork_MeshBuffers::_bind_setPrimitiveRestart},
	{"setPatchVertices", &luna_wrapper_ork_MeshBuffers::_bind_setPatchVertices},
	{"base_toString", &luna_wrapper_ork_MeshBuffers::_bind_base_toString},
	{"fromVoid", &luna_wrapper_ork_MeshBuffers::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ork_MeshBuffers::_bind_asVoid},
	{"getTable", &luna_wrapper_ork_MeshBuffers::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< ork::MeshBuffers >::converters[] = {
	{"ork::Object", &luna_wrapper_ork_MeshBuffers::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< ork::MeshBuffers >::enumValues[] = {
	{0,0}
};



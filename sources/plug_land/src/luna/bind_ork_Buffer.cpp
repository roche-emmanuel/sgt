#include <plug_common.h>

#include <luna/wrappers/wrapper_ork_Buffer.h>

class luna_wrapper_ork_Buffer {
public:
	typedef Luna< ork::Buffer > luna_t;

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

		ork::Buffer* self= (ork::Buffer*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ork::Buffer >::push(L,self,false);
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
		//ork::Buffer* ptr= dynamic_cast< ork::Buffer* >(Luna< ork::Object >::check(L,1));
		ork::Buffer* ptr= luna_caster< ork::Object, ork::Buffer >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< ork::Buffer >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_base_toString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// ork::Buffer::Buffer(lua_Table * data)
	static ork::Buffer* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in ork::Buffer::Buffer(lua_Table * data) function, expected prototype:\nork::Buffer::Buffer(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_ork_Buffer(L,NULL);
	}


	// Function binds:
	// const char * ork::Buffer::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * ork::Buffer::base_toString() function, expected prototype:\nconst char * ork::Buffer::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::Buffer* self=Luna< ork::Object >::checkSubType< ork::Buffer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * ork::Buffer::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Buffer::toString();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

ork::Buffer* LunaTraits< ork::Buffer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_ork_Buffer::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void ork::Buffer::bind(int target) const
	// void * ork::Buffer::data(int offset) const
	// void ork::Buffer::unbind(int target) const
	// void ork::Buffer::dirty() const
}

void LunaTraits< ork::Buffer >::_bind_dtor(ork::Buffer* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< ork::Buffer >::className[] = "Buffer";
const char LunaTraits< ork::Buffer >::fullName[] = "ork::Buffer";
const char LunaTraits< ork::Buffer >::moduleName[] = "ork";
const char* LunaTraits< ork::Buffer >::parents[] = {"ork.Object", 0};
const int LunaTraits< ork::Buffer >::hash = 46631242;
const int LunaTraits< ork::Buffer >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< ork::Buffer >::methods[] = {
	{"base_toString", &luna_wrapper_ork_Buffer::_bind_base_toString},
	{"fromVoid", &luna_wrapper_ork_Buffer::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ork_Buffer::_bind_asVoid},
	{"getTable", &luna_wrapper_ork_Buffer::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< ork::Buffer >::converters[] = {
	{"ork::Object", &luna_wrapper_ork_Buffer::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< ork::Buffer >::enumValues[] = {
	{0,0}
};



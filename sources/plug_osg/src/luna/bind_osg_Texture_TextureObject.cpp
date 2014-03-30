#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_Texture_TextureObject.h>

class luna_wrapper_osg_Texture_TextureObject {
public:
	typedef Luna< osg::Texture::TextureObject > luna_t;

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

		osg::Texture::TextureObject* self= (osg::Texture::TextureObject*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::Texture::TextureObject >::push(L,self,false);
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
		//osg::Texture::TextureObject* ptr= dynamic_cast< osg::Texture::TextureObject* >(Luna< osg::Referenced >::check(L,1));
		osg::Texture::TextureObject* ptr= luna_caster< osg::Referenced, osg::Texture::TextureObject >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::Texture::TextureObject >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Texture >(L,1)) ) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Texture >(L,1)) ) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,69361645) ) return false;
		if( (!(Luna< osg::Texture::TextureProfile >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=9 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Texture >(L,1)) ) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( (lua_type(L,8)!=LUA_TNUMBER || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		if( (lua_type(L,9)!=LUA_TNUMBER || lua_tointeger(L,9) != lua_tonumber(L,9)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Texture >(L,2)) ) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Texture >(L,2)) ) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,69361645) ) return false;
		if( (!(Luna< osg::Texture::TextureProfile >::check(L,4))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		if( lua_gettop(L)!=10 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Texture >(L,2)) ) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( (lua_type(L,8)!=LUA_TNUMBER || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		if( (lua_type(L,9)!=LUA_TNUMBER || lua_tointeger(L,9) != lua_tonumber(L,9)) ) return false;
		if( (lua_type(L,10)!=LUA_TNUMBER || lua_tointeger(L,10) != lua_tonumber(L,10)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_match(lua_State *L) {
		if( lua_gettop(L)!=8 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( (lua_type(L,8)!=LUA_TNUMBER || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_bind(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_id(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_target(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_size(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTexture(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTexture(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTimeStamp(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTimeStamp(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setAllocated_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAllocated_overload_2(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isAllocated(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isReusable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getProfile(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSet(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPrevious(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNext(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAllocated(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFrameLastUsed(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setId(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setProfile(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,69361645) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSet(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPrevious(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNext(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFrameLastUsed(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::Texture::TextureObject::TextureObject(osg::Texture * texture, unsigned int id, unsigned int target)
	static osg::Texture::TextureObject* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Texture::TextureObject::TextureObject(osg::Texture * texture, unsigned int id, unsigned int target) function, expected prototype:\nosg::Texture::TextureObject::TextureObject(osg::Texture * texture, unsigned int id, unsigned int target)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Texture* texture=(Luna< osg::Referenced >::checkSubType< osg::Texture >(L,1));
		unsigned int id=(unsigned int)lua_tointeger(L,2);
		unsigned int target=(unsigned int)lua_tointeger(L,3);

		return new osg::Texture::TextureObject(texture, id, target);
	}

	// osg::Texture::TextureObject::TextureObject(osg::Texture * texture, unsigned int id, const osg::Texture::TextureProfile & profile)
	static osg::Texture::TextureObject* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Texture::TextureObject::TextureObject(osg::Texture * texture, unsigned int id, const osg::Texture::TextureProfile & profile) function, expected prototype:\nosg::Texture::TextureObject::TextureObject(osg::Texture * texture, unsigned int id, const osg::Texture::TextureProfile & profile)\nClass arguments details:\narg 1 ID = 50169651\narg 3 ID = 69361645\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Texture* texture=(Luna< osg::Referenced >::checkSubType< osg::Texture >(L,1));
		unsigned int id=(unsigned int)lua_tointeger(L,2);
		const osg::Texture::TextureProfile* profile_ptr=(Luna< osg::Texture::TextureProfile >::check(L,3));
		if( !profile_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg profile in osg::Texture::TextureObject::TextureObject function");
		}
		const osg::Texture::TextureProfile & profile=*profile_ptr;

		return new osg::Texture::TextureObject(texture, id, profile);
	}

	// osg::Texture::TextureObject::TextureObject(osg::Texture * texture, unsigned int id, unsigned int target, int numMipmapLevels, unsigned int internalFormat, int width, int height, int depth, int border)
	static osg::Texture::TextureObject* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::Texture::TextureObject::TextureObject(osg::Texture * texture, unsigned int id, unsigned int target, int numMipmapLevels, unsigned int internalFormat, int width, int height, int depth, int border) function, expected prototype:\nosg::Texture::TextureObject::TextureObject(osg::Texture * texture, unsigned int id, unsigned int target, int numMipmapLevels, unsigned int internalFormat, int width, int height, int depth, int border)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Texture* texture=(Luna< osg::Referenced >::checkSubType< osg::Texture >(L,1));
		unsigned int id=(unsigned int)lua_tointeger(L,2);
		unsigned int target=(unsigned int)lua_tointeger(L,3);
		int numMipmapLevels=(int)lua_tointeger(L,4);
		unsigned int internalFormat=(unsigned int)lua_tointeger(L,5);
		int width=(int)lua_tointeger(L,6);
		int height=(int)lua_tointeger(L,7);
		int depth=(int)lua_tointeger(L,8);
		int border=(int)lua_tointeger(L,9);

		return new osg::Texture::TextureObject(texture, id, target, numMipmapLevels, internalFormat, width, height, depth, border);
	}

	// osg::Texture::TextureObject::TextureObject(lua_Table * data, osg::Texture * texture, unsigned int id, unsigned int target)
	static osg::Texture::TextureObject* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::Texture::TextureObject::TextureObject(lua_Table * data, osg::Texture * texture, unsigned int id, unsigned int target) function, expected prototype:\nosg::Texture::TextureObject::TextureObject(lua_Table * data, osg::Texture * texture, unsigned int id, unsigned int target)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Texture* texture=(Luna< osg::Referenced >::checkSubType< osg::Texture >(L,2));
		unsigned int id=(unsigned int)lua_tointeger(L,3);
		unsigned int target=(unsigned int)lua_tointeger(L,4);

		return new wrapper_osg_Texture_TextureObject(L,NULL, texture, id, target);
	}

	// osg::Texture::TextureObject::TextureObject(lua_Table * data, osg::Texture * texture, unsigned int id, const osg::Texture::TextureProfile & profile)
	static osg::Texture::TextureObject* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in osg::Texture::TextureObject::TextureObject(lua_Table * data, osg::Texture * texture, unsigned int id, const osg::Texture::TextureProfile & profile) function, expected prototype:\nosg::Texture::TextureObject::TextureObject(lua_Table * data, osg::Texture * texture, unsigned int id, const osg::Texture::TextureProfile & profile)\nClass arguments details:\narg 2 ID = 50169651\narg 4 ID = 69361645\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Texture* texture=(Luna< osg::Referenced >::checkSubType< osg::Texture >(L,2));
		unsigned int id=(unsigned int)lua_tointeger(L,3);
		const osg::Texture::TextureProfile* profile_ptr=(Luna< osg::Texture::TextureProfile >::check(L,4));
		if( !profile_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg profile in osg::Texture::TextureObject::TextureObject function");
		}
		const osg::Texture::TextureProfile & profile=*profile_ptr;

		return new wrapper_osg_Texture_TextureObject(L,NULL, texture, id, profile);
	}

	// osg::Texture::TextureObject::TextureObject(lua_Table * data, osg::Texture * texture, unsigned int id, unsigned int target, int numMipmapLevels, unsigned int internalFormat, int width, int height, int depth, int border)
	static osg::Texture::TextureObject* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in osg::Texture::TextureObject::TextureObject(lua_Table * data, osg::Texture * texture, unsigned int id, unsigned int target, int numMipmapLevels, unsigned int internalFormat, int width, int height, int depth, int border) function, expected prototype:\nosg::Texture::TextureObject::TextureObject(lua_Table * data, osg::Texture * texture, unsigned int id, unsigned int target, int numMipmapLevels, unsigned int internalFormat, int width, int height, int depth, int border)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Texture* texture=(Luna< osg::Referenced >::checkSubType< osg::Texture >(L,2));
		unsigned int id=(unsigned int)lua_tointeger(L,3);
		unsigned int target=(unsigned int)lua_tointeger(L,4);
		int numMipmapLevels=(int)lua_tointeger(L,5);
		unsigned int internalFormat=(unsigned int)lua_tointeger(L,6);
		int width=(int)lua_tointeger(L,7);
		int height=(int)lua_tointeger(L,8);
		int depth=(int)lua_tointeger(L,9);
		int border=(int)lua_tointeger(L,10);

		return new wrapper_osg_Texture_TextureObject(L,NULL, texture, id, target, numMipmapLevels, internalFormat, width, height, depth, border);
	}

	// Overload binder for osg::Texture::TextureObject::TextureObject
	static osg::Texture::TextureObject* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);

		luaL_error(L, "error in function TextureObject, cannot match any of the overloads for function TextureObject:\n  TextureObject(osg::Texture *, unsigned int, unsigned int)\n  TextureObject(osg::Texture *, unsigned int, const osg::Texture::TextureProfile &)\n  TextureObject(osg::Texture *, unsigned int, unsigned int, int, unsigned int, int, int, int, int)\n  TextureObject(lua_Table *, osg::Texture *, unsigned int, unsigned int)\n  TextureObject(lua_Table *, osg::Texture *, unsigned int, const osg::Texture::TextureProfile &)\n  TextureObject(lua_Table *, osg::Texture *, unsigned int, unsigned int, int, unsigned int, int, int, int, int)\n");
		return NULL;
	}


	// Function binds:
	// bool osg::Texture::TextureObject::match(unsigned int target, int numMipmapLevels, unsigned int internalFormat, int width, int height, int depth, int border)
	static int _bind_match(lua_State *L) {
		if (!_lg_typecheck_match(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Texture::TextureObject::match(unsigned int target, int numMipmapLevels, unsigned int internalFormat, int width, int height, int depth, int border) function, expected prototype:\nbool osg::Texture::TextureObject::match(unsigned int target, int numMipmapLevels, unsigned int internalFormat, int width, int height, int depth, int border)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int target=(unsigned int)lua_tointeger(L,2);
		int numMipmapLevels=(int)lua_tointeger(L,3);
		unsigned int internalFormat=(unsigned int)lua_tointeger(L,4);
		int width=(int)lua_tointeger(L,5);
		int height=(int)lua_tointeger(L,6);
		int depth=(int)lua_tointeger(L,7);
		int border=(int)lua_tointeger(L,8);

		osg::Texture::TextureObject* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Texture::TextureObject::match(unsigned int, int, unsigned int, int, int, int, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->match(target, numMipmapLevels, internalFormat, width, height, depth, border);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Texture::TextureObject::bind()
	static int _bind_bind(lua_State *L) {
		if (!_lg_typecheck_bind(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Texture::TextureObject::bind() function, expected prototype:\nvoid osg::Texture::TextureObject::bind()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Texture::TextureObject* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Texture::TextureObject::bind(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->bind();

		return 0;
	}

	// unsigned int osg::Texture::TextureObject::id() const
	static int _bind_id(lua_State *L) {
		if (!_lg_typecheck_id(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Texture::TextureObject::id() const function, expected prototype:\nunsigned int osg::Texture::TextureObject::id() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Texture::TextureObject* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Texture::TextureObject::id() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->id();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::Texture::TextureObject::target() const
	static int _bind_target(lua_State *L) {
		if (!_lg_typecheck_target(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Texture::TextureObject::target() const function, expected prototype:\nunsigned int osg::Texture::TextureObject::target() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Texture::TextureObject* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Texture::TextureObject::target() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->target();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::Texture::TextureObject::size() const
	static int _bind_size(lua_State *L) {
		if (!_lg_typecheck_size(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Texture::TextureObject::size() const function, expected prototype:\nunsigned int osg::Texture::TextureObject::size() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Texture::TextureObject* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Texture::TextureObject::size() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->size();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Texture::TextureObject::setTexture(osg::Texture * texture)
	static int _bind_setTexture(lua_State *L) {
		if (!_lg_typecheck_setTexture(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Texture::TextureObject::setTexture(osg::Texture * texture) function, expected prototype:\nvoid osg::Texture::TextureObject::setTexture(osg::Texture * texture)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Texture* texture=(Luna< osg::Referenced >::checkSubType< osg::Texture >(L,2));

		osg::Texture::TextureObject* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Texture::TextureObject::setTexture(osg::Texture *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setTexture(texture);

		return 0;
	}

	// osg::Texture * osg::Texture::TextureObject::getTexture() const
	static int _bind_getTexture(lua_State *L) {
		if (!_lg_typecheck_getTexture(L)) {
			luaL_error(L, "luna typecheck failed in osg::Texture * osg::Texture::TextureObject::getTexture() const function, expected prototype:\nosg::Texture * osg::Texture::TextureObject::getTexture() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Texture::TextureObject* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Texture * osg::Texture::TextureObject::getTexture() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Texture * lret = self->getTexture();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture >::push(L,lret,false);

		return 1;
	}

	// void osg::Texture::TextureObject::setTimeStamp(double timestamp)
	static int _bind_setTimeStamp(lua_State *L) {
		if (!_lg_typecheck_setTimeStamp(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Texture::TextureObject::setTimeStamp(double timestamp) function, expected prototype:\nvoid osg::Texture::TextureObject::setTimeStamp(double timestamp)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double timestamp=(double)lua_tonumber(L,2);

		osg::Texture::TextureObject* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Texture::TextureObject::setTimeStamp(double). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setTimeStamp(timestamp);

		return 0;
	}

	// double osg::Texture::TextureObject::getTimeStamp() const
	static int _bind_getTimeStamp(lua_State *L) {
		if (!_lg_typecheck_getTimeStamp(L)) {
			luaL_error(L, "luna typecheck failed in double osg::Texture::TextureObject::getTimeStamp() const function, expected prototype:\ndouble osg::Texture::TextureObject::getTimeStamp() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Texture::TextureObject* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double osg::Texture::TextureObject::getTimeStamp() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getTimeStamp();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Texture::TextureObject::setAllocated(bool allocated = true)
	static int _bind_setAllocated_overload_1(lua_State *L) {
		if (!_lg_typecheck_setAllocated_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Texture::TextureObject::setAllocated(bool allocated = true) function, expected prototype:\nvoid osg::Texture::TextureObject::setAllocated(bool allocated = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool allocated=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		osg::Texture::TextureObject* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Texture::TextureObject::setAllocated(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setAllocated(allocated);

		return 0;
	}

	// void osg::Texture::TextureObject::setAllocated(int numMipmapLevels, unsigned int internalFormat, int width, int height, int depth, int border)
	static int _bind_setAllocated_overload_2(lua_State *L) {
		if (!_lg_typecheck_setAllocated_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Texture::TextureObject::setAllocated(int numMipmapLevels, unsigned int internalFormat, int width, int height, int depth, int border) function, expected prototype:\nvoid osg::Texture::TextureObject::setAllocated(int numMipmapLevels, unsigned int internalFormat, int width, int height, int depth, int border)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int numMipmapLevels=(int)lua_tointeger(L,2);
		unsigned int internalFormat=(unsigned int)lua_tointeger(L,3);
		int width=(int)lua_tointeger(L,4);
		int height=(int)lua_tointeger(L,5);
		int depth=(int)lua_tointeger(L,6);
		int border=(int)lua_tointeger(L,7);

		osg::Texture::TextureObject* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Texture::TextureObject::setAllocated(int, unsigned int, int, int, int, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setAllocated(numMipmapLevels, internalFormat, width, height, depth, border);

		return 0;
	}

	// Overload binder for osg::Texture::TextureObject::setAllocated
	static int _bind_setAllocated(lua_State *L) {
		if (_lg_typecheck_setAllocated_overload_1(L)) return _bind_setAllocated_overload_1(L);
		if (_lg_typecheck_setAllocated_overload_2(L)) return _bind_setAllocated_overload_2(L);

		luaL_error(L, "error in function setAllocated, cannot match any of the overloads for function setAllocated:\n  setAllocated(bool)\n  setAllocated(int, unsigned int, int, int, int, int)\n");
		return 0;
	}

	// bool osg::Texture::TextureObject::isAllocated() const
	static int _bind_isAllocated(lua_State *L) {
		if (!_lg_typecheck_isAllocated(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Texture::TextureObject::isAllocated() const function, expected prototype:\nbool osg::Texture::TextureObject::isAllocated() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Texture::TextureObject* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Texture::TextureObject::isAllocated() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isAllocated();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Texture::TextureObject::isReusable() const
	static int _bind_isReusable(lua_State *L) {
		if (!_lg_typecheck_isReusable(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Texture::TextureObject::isReusable() const function, expected prototype:\nbool osg::Texture::TextureObject::isReusable() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Texture::TextureObject* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Texture::TextureObject::isReusable() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isReusable();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// unsigned int osg::Texture::TextureObject::_id()
	static int _bind_getId(lua_State *L) {
		if (!_lg_typecheck_getId(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Texture::TextureObject::_id() function, expected prototype:\nunsigned int osg::Texture::TextureObject::_id()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Texture::TextureObject* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Texture::TextureObject::_id(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->_id;
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::Texture::TextureProfile osg::Texture::TextureObject::_profile()
	static int _bind_getProfile(lua_State *L) {
		if (!_lg_typecheck_getProfile(L)) {
			luaL_error(L, "luna typecheck failed in osg::Texture::TextureProfile osg::Texture::TextureObject::_profile() function, expected prototype:\nosg::Texture::TextureProfile osg::Texture::TextureObject::_profile()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Texture::TextureObject* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Texture::TextureProfile osg::Texture::TextureObject::_profile(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Texture::TextureProfile* lret = &self->_profile;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture::TextureProfile >::push(L,lret,false);

		return 1;
	}

	// osg::Texture::TextureObjectSet * osg::Texture::TextureObject::_set()
	static int _bind_getSet(lua_State *L) {
		if (!_lg_typecheck_getSet(L)) {
			luaL_error(L, "luna typecheck failed in osg::Texture::TextureObjectSet * osg::Texture::TextureObject::_set() function, expected prototype:\nosg::Texture::TextureObjectSet * osg::Texture::TextureObject::_set()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Texture::TextureObject* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Texture::TextureObjectSet * osg::Texture::TextureObject::_set(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Texture::TextureObjectSet * lret = self->_set;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture::TextureObjectSet >::push(L,lret,false);

		return 1;
	}

	// osg::Texture::TextureObject * osg::Texture::TextureObject::_previous()
	static int _bind_getPrevious(lua_State *L) {
		if (!_lg_typecheck_getPrevious(L)) {
			luaL_error(L, "luna typecheck failed in osg::Texture::TextureObject * osg::Texture::TextureObject::_previous() function, expected prototype:\nosg::Texture::TextureObject * osg::Texture::TextureObject::_previous()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Texture::TextureObject* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Texture::TextureObject * osg::Texture::TextureObject::_previous(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Texture::TextureObject * lret = self->_previous;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture::TextureObject >::push(L,lret,false);

		return 1;
	}

	// osg::Texture::TextureObject * osg::Texture::TextureObject::_next()
	static int _bind_getNext(lua_State *L) {
		if (!_lg_typecheck_getNext(L)) {
			luaL_error(L, "luna typecheck failed in osg::Texture::TextureObject * osg::Texture::TextureObject::_next() function, expected prototype:\nosg::Texture::TextureObject * osg::Texture::TextureObject::_next()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Texture::TextureObject* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Texture::TextureObject * osg::Texture::TextureObject::_next(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Texture::TextureObject * lret = self->_next;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture::TextureObject >::push(L,lret,false);

		return 1;
	}

	// bool osg::Texture::TextureObject::_allocated()
	static int _bind_getAllocated(lua_State *L) {
		if (!_lg_typecheck_getAllocated(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Texture::TextureObject::_allocated() function, expected prototype:\nbool osg::Texture::TextureObject::_allocated()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Texture::TextureObject* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Texture::TextureObject::_allocated(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->_allocated;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// unsigned int osg::Texture::TextureObject::_frameLastUsed()
	static int _bind_getFrameLastUsed(lua_State *L) {
		if (!_lg_typecheck_getFrameLastUsed(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Texture::TextureObject::_frameLastUsed() function, expected prototype:\nunsigned int osg::Texture::TextureObject::_frameLastUsed()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Texture::TextureObject* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Texture::TextureObject::_frameLastUsed(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->_frameLastUsed;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Texture::TextureObject::_id(unsigned int value)
	static int _bind_setId(lua_State *L) {
		if (!_lg_typecheck_setId(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Texture::TextureObject::_id(unsigned int value) function, expected prototype:\nvoid osg::Texture::TextureObject::_id(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osg::Texture::TextureObject* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Texture::TextureObject::_id(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_id = value;

		return 0;
	}

	// void osg::Texture::TextureObject::_profile(osg::Texture::TextureProfile value)
	static int _bind_setProfile(lua_State *L) {
		if (!_lg_typecheck_setProfile(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Texture::TextureObject::_profile(osg::Texture::TextureProfile value) function, expected prototype:\nvoid osg::Texture::TextureObject::_profile(osg::Texture::TextureProfile value)\nClass arguments details:\narg 1 ID = 69361645\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Texture::TextureProfile* value_ptr=(Luna< osg::Texture::TextureProfile >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osg::Texture::TextureObject::_profile function");
		}
		osg::Texture::TextureProfile value=*value_ptr;

		osg::Texture::TextureObject* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Texture::TextureObject::_profile(osg::Texture::TextureProfile). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_profile = value;

		return 0;
	}

	// void osg::Texture::TextureObject::_set(osg::Texture::TextureObjectSet * value)
	static int _bind_setSet(lua_State *L) {
		if (!_lg_typecheck_setSet(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Texture::TextureObject::_set(osg::Texture::TextureObjectSet * value) function, expected prototype:\nvoid osg::Texture::TextureObject::_set(osg::Texture::TextureObjectSet * value)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Texture::TextureObjectSet* value=(Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObjectSet >(L,2));

		osg::Texture::TextureObject* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Texture::TextureObject::_set(osg::Texture::TextureObjectSet *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_set = value;

		return 0;
	}

	// void osg::Texture::TextureObject::_previous(osg::Texture::TextureObject * value)
	static int _bind_setPrevious(lua_State *L) {
		if (!_lg_typecheck_setPrevious(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Texture::TextureObject::_previous(osg::Texture::TextureObject * value) function, expected prototype:\nvoid osg::Texture::TextureObject::_previous(osg::Texture::TextureObject * value)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Texture::TextureObject* value=(Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObject >(L,2));

		osg::Texture::TextureObject* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Texture::TextureObject::_previous(osg::Texture::TextureObject *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_previous = value;

		return 0;
	}

	// void osg::Texture::TextureObject::_next(osg::Texture::TextureObject * value)
	static int _bind_setNext(lua_State *L) {
		if (!_lg_typecheck_setNext(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Texture::TextureObject::_next(osg::Texture::TextureObject * value) function, expected prototype:\nvoid osg::Texture::TextureObject::_next(osg::Texture::TextureObject * value)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Texture::TextureObject* value=(Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObject >(L,2));

		osg::Texture::TextureObject* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Texture::TextureObject::_next(osg::Texture::TextureObject *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_next = value;

		return 0;
	}

	// void osg::Texture::TextureObject::_frameLastUsed(unsigned int value)
	static int _bind_setFrameLastUsed(lua_State *L) {
		if (!_lg_typecheck_setFrameLastUsed(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Texture::TextureObject::_frameLastUsed(unsigned int value) function, expected prototype:\nvoid osg::Texture::TextureObject::_frameLastUsed(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osg::Texture::TextureObject* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Texture::TextureObject::_frameLastUsed(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_frameLastUsed = value;

		return 0;
	}

	// void osg::Texture::TextureObject::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Texture::TextureObject::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::Texture::TextureObject::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::Texture::TextureObject* self=Luna< osg::Referenced >::checkSubType< osg::Texture::TextureObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Texture::TextureObject::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TextureObject::setThreadSafeRefUnref(threadSafe);

		return 0;
	}


	// Operator binds:

};

osg::Texture::TextureObject* LunaTraits< osg::Texture::TextureObject >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Texture_TextureObject::_bind_ctor(L);
}

void LunaTraits< osg::Texture::TextureObject >::_bind_dtor(osg::Texture::TextureObject* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::Texture::TextureObject >::className[] = "Texture_TextureObject";
const char LunaTraits< osg::Texture::TextureObject >::fullName[] = "osg::Texture::TextureObject";
const char LunaTraits< osg::Texture::TextureObject >::moduleName[] = "osg";
const char* LunaTraits< osg::Texture::TextureObject >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osg::Texture::TextureObject >::hash = 84488374;
const int LunaTraits< osg::Texture::TextureObject >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::Texture::TextureObject >::methods[] = {
	{"match", &luna_wrapper_osg_Texture_TextureObject::_bind_match},
	{"bind", &luna_wrapper_osg_Texture_TextureObject::_bind_bind},
	{"id", &luna_wrapper_osg_Texture_TextureObject::_bind_id},
	{"target", &luna_wrapper_osg_Texture_TextureObject::_bind_target},
	{"size", &luna_wrapper_osg_Texture_TextureObject::_bind_size},
	{"setTexture", &luna_wrapper_osg_Texture_TextureObject::_bind_setTexture},
	{"getTexture", &luna_wrapper_osg_Texture_TextureObject::_bind_getTexture},
	{"setTimeStamp", &luna_wrapper_osg_Texture_TextureObject::_bind_setTimeStamp},
	{"getTimeStamp", &luna_wrapper_osg_Texture_TextureObject::_bind_getTimeStamp},
	{"setAllocated", &luna_wrapper_osg_Texture_TextureObject::_bind_setAllocated},
	{"isAllocated", &luna_wrapper_osg_Texture_TextureObject::_bind_isAllocated},
	{"isReusable", &luna_wrapper_osg_Texture_TextureObject::_bind_isReusable},
	{"getId", &luna_wrapper_osg_Texture_TextureObject::_bind_getId},
	{"getProfile", &luna_wrapper_osg_Texture_TextureObject::_bind_getProfile},
	{"getSet", &luna_wrapper_osg_Texture_TextureObject::_bind_getSet},
	{"getPrevious", &luna_wrapper_osg_Texture_TextureObject::_bind_getPrevious},
	{"getNext", &luna_wrapper_osg_Texture_TextureObject::_bind_getNext},
	{"getAllocated", &luna_wrapper_osg_Texture_TextureObject::_bind_getAllocated},
	{"getFrameLastUsed", &luna_wrapper_osg_Texture_TextureObject::_bind_getFrameLastUsed},
	{"setId", &luna_wrapper_osg_Texture_TextureObject::_bind_setId},
	{"setProfile", &luna_wrapper_osg_Texture_TextureObject::_bind_setProfile},
	{"setSet", &luna_wrapper_osg_Texture_TextureObject::_bind_setSet},
	{"setPrevious", &luna_wrapper_osg_Texture_TextureObject::_bind_setPrevious},
	{"setNext", &luna_wrapper_osg_Texture_TextureObject::_bind_setNext},
	{"setFrameLastUsed", &luna_wrapper_osg_Texture_TextureObject::_bind_setFrameLastUsed},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_Texture_TextureObject::_bind_base_setThreadSafeRefUnref},
	{"fromVoid", &luna_wrapper_osg_Texture_TextureObject::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_Texture_TextureObject::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_Texture_TextureObject::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Texture::TextureObject >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_Texture_TextureObject::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Texture::TextureObject >::enumValues[] = {
	{0,0}
};



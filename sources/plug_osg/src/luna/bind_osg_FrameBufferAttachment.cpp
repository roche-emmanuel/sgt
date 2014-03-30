#include <plug_common.h>

class luna_wrapper_osg_FrameBufferAttachment {
public:
	typedef Luna< osg::FrameBufferAttachment > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,90669884) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::FrameBufferAttachment*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::FrameBufferAttachment* rhs =(Luna< osg::FrameBufferAttachment >::check(L,2));
		osg::FrameBufferAttachment* self=(Luna< osg::FrameBufferAttachment >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		lua_pushboolean(L,self==rhs?1:0);

		return 1;
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

		osg::FrameBufferAttachment* self= (osg::FrameBufferAttachment*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::FrameBufferAttachment >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,90669884) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osg::FrameBufferAttachment >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::FrameBufferAttachment* self=(Luna< osg::FrameBufferAttachment >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::FrameBufferAttachment");
		
		return luna_dynamicCast(L,converters,"osg::FrameBufferAttachment",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,90669884) ) return false;
		if( (!(Luna< osg::FrameBufferAttachment >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< osg::Referenced >::checkSubType< osg::RenderBuffer >(L,1)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Texture1D >(L,1)) ) ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Texture2D >(L,1)) ) ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Texture2DMultisample >(L,1)) ) ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_7(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Texture3D >(L,1)) ) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_8(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Texture2DArray >(L,1)) ) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_9(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< osg::Referenced >::checkSubType< osg::TextureCubeMap >(L,1)) ) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_10(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< osg::Referenced >::checkSubType< osg::TextureRectangle >(L,1)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_11(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,65796671) ) return false;
		if( (!(Luna< osg::Camera::Attachment >::check(L,1))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_isMultisample(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_createRequiredTexturesAndApplyGenerateMipMap(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_attach(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_compare(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,90669884) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRenderBuffer_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRenderBuffer_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTexture_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTexture_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCubeMapFace(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTextureLevel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTexture3DZOffset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTextureArrayLayer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck_op_assign(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,90669884) ) return false;
		return true;
	}


	// Constructor binds:
	// osg::FrameBufferAttachment::FrameBufferAttachment()
	static osg::FrameBufferAttachment* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::FrameBufferAttachment::FrameBufferAttachment() function, expected prototype:\nosg::FrameBufferAttachment::FrameBufferAttachment()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::FrameBufferAttachment();
	}

	// osg::FrameBufferAttachment::FrameBufferAttachment(const osg::FrameBufferAttachment & copy)
	static osg::FrameBufferAttachment* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::FrameBufferAttachment::FrameBufferAttachment(const osg::FrameBufferAttachment & copy) function, expected prototype:\nosg::FrameBufferAttachment::FrameBufferAttachment(const osg::FrameBufferAttachment & copy)\nClass arguments details:\narg 1 ID = 90669884\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::FrameBufferAttachment* copy_ptr=(Luna< osg::FrameBufferAttachment >::check(L,1));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osg::FrameBufferAttachment::FrameBufferAttachment function");
		}
		const osg::FrameBufferAttachment & copy=*copy_ptr;

		return new osg::FrameBufferAttachment(copy);
	}

	// osg::FrameBufferAttachment::FrameBufferAttachment(osg::RenderBuffer * target)
	static osg::FrameBufferAttachment* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::FrameBufferAttachment::FrameBufferAttachment(osg::RenderBuffer * target) function, expected prototype:\nosg::FrameBufferAttachment::FrameBufferAttachment(osg::RenderBuffer * target)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::RenderBuffer* target=(Luna< osg::Referenced >::checkSubType< osg::RenderBuffer >(L,1));

		return new osg::FrameBufferAttachment(target);
	}

	// osg::FrameBufferAttachment::FrameBufferAttachment(osg::Texture1D * target, unsigned int level = 0)
	static osg::FrameBufferAttachment* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osg::FrameBufferAttachment::FrameBufferAttachment(osg::Texture1D * target, unsigned int level = 0) function, expected prototype:\nosg::FrameBufferAttachment::FrameBufferAttachment(osg::Texture1D * target, unsigned int level = 0)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::Texture1D* target=(Luna< osg::Referenced >::checkSubType< osg::Texture1D >(L,1));
		unsigned int level=luatop>1 ? (unsigned int)lua_tointeger(L,2) : (unsigned int)0;

		return new osg::FrameBufferAttachment(target, level);
	}

	// osg::FrameBufferAttachment::FrameBufferAttachment(osg::Texture2D * target, unsigned int level = 0)
	static osg::FrameBufferAttachment* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in osg::FrameBufferAttachment::FrameBufferAttachment(osg::Texture2D * target, unsigned int level = 0) function, expected prototype:\nosg::FrameBufferAttachment::FrameBufferAttachment(osg::Texture2D * target, unsigned int level = 0)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::Texture2D* target=(Luna< osg::Referenced >::checkSubType< osg::Texture2D >(L,1));
		unsigned int level=luatop>1 ? (unsigned int)lua_tointeger(L,2) : (unsigned int)0;

		return new osg::FrameBufferAttachment(target, level);
	}

	// osg::FrameBufferAttachment::FrameBufferAttachment(osg::Texture2DMultisample * target, unsigned int level = 0)
	static osg::FrameBufferAttachment* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in osg::FrameBufferAttachment::FrameBufferAttachment(osg::Texture2DMultisample * target, unsigned int level = 0) function, expected prototype:\nosg::FrameBufferAttachment::FrameBufferAttachment(osg::Texture2DMultisample * target, unsigned int level = 0)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::Texture2DMultisample* target=(Luna< osg::Referenced >::checkSubType< osg::Texture2DMultisample >(L,1));
		unsigned int level=luatop>1 ? (unsigned int)lua_tointeger(L,2) : (unsigned int)0;

		return new osg::FrameBufferAttachment(target, level);
	}

	// osg::FrameBufferAttachment::FrameBufferAttachment(osg::Texture3D * target, unsigned int zoffset, unsigned int level = 0)
	static osg::FrameBufferAttachment* _bind_ctor_overload_7(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_7(L)) {
			luaL_error(L, "luna typecheck failed in osg::FrameBufferAttachment::FrameBufferAttachment(osg::Texture3D * target, unsigned int zoffset, unsigned int level = 0) function, expected prototype:\nosg::FrameBufferAttachment::FrameBufferAttachment(osg::Texture3D * target, unsigned int zoffset, unsigned int level = 0)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::Texture3D* target=(Luna< osg::Referenced >::checkSubType< osg::Texture3D >(L,1));
		unsigned int zoffset=(unsigned int)lua_tointeger(L,2);
		unsigned int level=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)0;

		return new osg::FrameBufferAttachment(target, zoffset, level);
	}

	// osg::FrameBufferAttachment::FrameBufferAttachment(osg::Texture2DArray * target, unsigned int layer, unsigned int level = 0)
	static osg::FrameBufferAttachment* _bind_ctor_overload_8(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_8(L)) {
			luaL_error(L, "luna typecheck failed in osg::FrameBufferAttachment::FrameBufferAttachment(osg::Texture2DArray * target, unsigned int layer, unsigned int level = 0) function, expected prototype:\nosg::FrameBufferAttachment::FrameBufferAttachment(osg::Texture2DArray * target, unsigned int layer, unsigned int level = 0)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::Texture2DArray* target=(Luna< osg::Referenced >::checkSubType< osg::Texture2DArray >(L,1));
		unsigned int layer=(unsigned int)lua_tointeger(L,2);
		unsigned int level=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)0;

		return new osg::FrameBufferAttachment(target, layer, level);
	}

	// osg::FrameBufferAttachment::FrameBufferAttachment(osg::TextureCubeMap * target, unsigned int face, unsigned int level = 0)
	static osg::FrameBufferAttachment* _bind_ctor_overload_9(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_9(L)) {
			luaL_error(L, "luna typecheck failed in osg::FrameBufferAttachment::FrameBufferAttachment(osg::TextureCubeMap * target, unsigned int face, unsigned int level = 0) function, expected prototype:\nosg::FrameBufferAttachment::FrameBufferAttachment(osg::TextureCubeMap * target, unsigned int face, unsigned int level = 0)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::TextureCubeMap* target=(Luna< osg::Referenced >::checkSubType< osg::TextureCubeMap >(L,1));
		unsigned int face=(unsigned int)lua_tointeger(L,2);
		unsigned int level=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)0;

		return new osg::FrameBufferAttachment(target, face, level);
	}

	// osg::FrameBufferAttachment::FrameBufferAttachment(osg::TextureRectangle * target)
	static osg::FrameBufferAttachment* _bind_ctor_overload_10(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_10(L)) {
			luaL_error(L, "luna typecheck failed in osg::FrameBufferAttachment::FrameBufferAttachment(osg::TextureRectangle * target) function, expected prototype:\nosg::FrameBufferAttachment::FrameBufferAttachment(osg::TextureRectangle * target)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::TextureRectangle* target=(Luna< osg::Referenced >::checkSubType< osg::TextureRectangle >(L,1));

		return new osg::FrameBufferAttachment(target);
	}

	// osg::FrameBufferAttachment::FrameBufferAttachment(osg::Camera::Attachment & attachment)
	static osg::FrameBufferAttachment* _bind_ctor_overload_11(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_11(L)) {
			luaL_error(L, "luna typecheck failed in osg::FrameBufferAttachment::FrameBufferAttachment(osg::Camera::Attachment & attachment) function, expected prototype:\nosg::FrameBufferAttachment::FrameBufferAttachment(osg::Camera::Attachment & attachment)\nClass arguments details:\narg 1 ID = 65796671\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Camera::Attachment* attachment_ptr=(Luna< osg::Camera::Attachment >::check(L,1));
		if( !attachment_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg attachment in osg::FrameBufferAttachment::FrameBufferAttachment function");
		}
		osg::Camera::Attachment & attachment=*attachment_ptr;

		return new osg::FrameBufferAttachment(attachment);
	}

	// Overload binder for osg::FrameBufferAttachment::FrameBufferAttachment
	static osg::FrameBufferAttachment* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);
		if (_lg_typecheck_ctor_overload_7(L)) return _bind_ctor_overload_7(L);
		if (_lg_typecheck_ctor_overload_8(L)) return _bind_ctor_overload_8(L);
		if (_lg_typecheck_ctor_overload_9(L)) return _bind_ctor_overload_9(L);
		if (_lg_typecheck_ctor_overload_10(L)) return _bind_ctor_overload_10(L);
		if (_lg_typecheck_ctor_overload_11(L)) return _bind_ctor_overload_11(L);

		luaL_error(L, "error in function FrameBufferAttachment, cannot match any of the overloads for function FrameBufferAttachment:\n  FrameBufferAttachment()\n  FrameBufferAttachment(const osg::FrameBufferAttachment &)\n  FrameBufferAttachment(osg::RenderBuffer *)\n  FrameBufferAttachment(osg::Texture1D *, unsigned int)\n  FrameBufferAttachment(osg::Texture2D *, unsigned int)\n  FrameBufferAttachment(osg::Texture2DMultisample *, unsigned int)\n  FrameBufferAttachment(osg::Texture3D *, unsigned int, unsigned int)\n  FrameBufferAttachment(osg::Texture2DArray *, unsigned int, unsigned int)\n  FrameBufferAttachment(osg::TextureCubeMap *, unsigned int, unsigned int)\n  FrameBufferAttachment(osg::TextureRectangle *)\n  FrameBufferAttachment(osg::Camera::Attachment &)\n");
		return NULL;
	}


	// Function binds:
	// bool osg::FrameBufferAttachment::isMultisample() const
	static int _bind_isMultisample(lua_State *L) {
		if (!_lg_typecheck_isMultisample(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::FrameBufferAttachment::isMultisample() const function, expected prototype:\nbool osg::FrameBufferAttachment::isMultisample() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::FrameBufferAttachment* self=(Luna< osg::FrameBufferAttachment >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::FrameBufferAttachment::isMultisample() const. Got : '%s'\n%s",typeid(Luna< osg::FrameBufferAttachment >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isMultisample();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::FrameBufferAttachment::createRequiredTexturesAndApplyGenerateMipMap(osg::State & state, const osg::FBOExtensions * ext) const
	static int _bind_createRequiredTexturesAndApplyGenerateMipMap(lua_State *L) {
		if (!_lg_typecheck_createRequiredTexturesAndApplyGenerateMipMap(L)) {
			luaL_error(L, "luna typecheck failed in void osg::FrameBufferAttachment::createRequiredTexturesAndApplyGenerateMipMap(osg::State & state, const osg::FBOExtensions * ext) const function, expected prototype:\nvoid osg::FrameBufferAttachment::createRequiredTexturesAndApplyGenerateMipMap(osg::State & state, const osg::FBOExtensions * ext) const\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* state_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osg::FrameBufferAttachment::createRequiredTexturesAndApplyGenerateMipMap function");
		}
		osg::State & state=*state_ptr;
		const osg::FBOExtensions* ext=(Luna< osg::Referenced >::checkSubType< osg::FBOExtensions >(L,3));

		osg::FrameBufferAttachment* self=(Luna< osg::FrameBufferAttachment >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::FrameBufferAttachment::createRequiredTexturesAndApplyGenerateMipMap(osg::State &, const osg::FBOExtensions *) const. Got : '%s'\n%s",typeid(Luna< osg::FrameBufferAttachment >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->createRequiredTexturesAndApplyGenerateMipMap(state, ext);

		return 0;
	}

	// void osg::FrameBufferAttachment::attach(osg::State & state, unsigned int target, unsigned int attachment_point, const osg::FBOExtensions * ext) const
	static int _bind_attach(lua_State *L) {
		if (!_lg_typecheck_attach(L)) {
			luaL_error(L, "luna typecheck failed in void osg::FrameBufferAttachment::attach(osg::State & state, unsigned int target, unsigned int attachment_point, const osg::FBOExtensions * ext) const function, expected prototype:\nvoid osg::FrameBufferAttachment::attach(osg::State & state, unsigned int target, unsigned int attachment_point, const osg::FBOExtensions * ext) const\nClass arguments details:\narg 1 ID = 50169651\narg 4 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* state_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osg::FrameBufferAttachment::attach function");
		}
		osg::State & state=*state_ptr;
		unsigned int target=(unsigned int)lua_tointeger(L,3);
		unsigned int attachment_point=(unsigned int)lua_tointeger(L,4);
		const osg::FBOExtensions* ext=(Luna< osg::Referenced >::checkSubType< osg::FBOExtensions >(L,5));

		osg::FrameBufferAttachment* self=(Luna< osg::FrameBufferAttachment >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::FrameBufferAttachment::attach(osg::State &, unsigned int, unsigned int, const osg::FBOExtensions *) const. Got : '%s'\n%s",typeid(Luna< osg::FrameBufferAttachment >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->attach(state, target, attachment_point, ext);

		return 0;
	}

	// int osg::FrameBufferAttachment::compare(const osg::FrameBufferAttachment & fa) const
	static int _bind_compare(lua_State *L) {
		if (!_lg_typecheck_compare(L)) {
			luaL_error(L, "luna typecheck failed in int osg::FrameBufferAttachment::compare(const osg::FrameBufferAttachment & fa) const function, expected prototype:\nint osg::FrameBufferAttachment::compare(const osg::FrameBufferAttachment & fa) const\nClass arguments details:\narg 1 ID = 90669884\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::FrameBufferAttachment* fa_ptr=(Luna< osg::FrameBufferAttachment >::check(L,2));
		if( !fa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg fa in osg::FrameBufferAttachment::compare function");
		}
		const osg::FrameBufferAttachment & fa=*fa_ptr;

		osg::FrameBufferAttachment* self=(Luna< osg::FrameBufferAttachment >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::FrameBufferAttachment::compare(const osg::FrameBufferAttachment &) const. Got : '%s'\n%s",typeid(Luna< osg::FrameBufferAttachment >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->compare(fa);
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::RenderBuffer * osg::FrameBufferAttachment::getRenderBuffer()
	static int _bind_getRenderBuffer_overload_1(lua_State *L) {
		if (!_lg_typecheck_getRenderBuffer_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::RenderBuffer * osg::FrameBufferAttachment::getRenderBuffer() function, expected prototype:\nosg::RenderBuffer * osg::FrameBufferAttachment::getRenderBuffer()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::FrameBufferAttachment* self=(Luna< osg::FrameBufferAttachment >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::RenderBuffer * osg::FrameBufferAttachment::getRenderBuffer(). Got : '%s'\n%s",typeid(Luna< osg::FrameBufferAttachment >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::RenderBuffer * lret = self->getRenderBuffer();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::RenderBuffer >::push(L,lret,false);

		return 1;
	}

	// const osg::RenderBuffer * osg::FrameBufferAttachment::getRenderBuffer() const
	static int _bind_getRenderBuffer_overload_2(lua_State *L) {
		if (!_lg_typecheck_getRenderBuffer_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::RenderBuffer * osg::FrameBufferAttachment::getRenderBuffer() const function, expected prototype:\nconst osg::RenderBuffer * osg::FrameBufferAttachment::getRenderBuffer() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::FrameBufferAttachment* self=(Luna< osg::FrameBufferAttachment >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::RenderBuffer * osg::FrameBufferAttachment::getRenderBuffer() const. Got : '%s'\n%s",typeid(Luna< osg::FrameBufferAttachment >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::RenderBuffer * lret = self->getRenderBuffer();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::RenderBuffer >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::FrameBufferAttachment::getRenderBuffer
	static int _bind_getRenderBuffer(lua_State *L) {
		if (_lg_typecheck_getRenderBuffer_overload_1(L)) return _bind_getRenderBuffer_overload_1(L);
		if (_lg_typecheck_getRenderBuffer_overload_2(L)) return _bind_getRenderBuffer_overload_2(L);

		luaL_error(L, "error in function getRenderBuffer, cannot match any of the overloads for function getRenderBuffer:\n  getRenderBuffer()\n  getRenderBuffer()\n");
		return 0;
	}

	// osg::Texture * osg::FrameBufferAttachment::getTexture()
	static int _bind_getTexture_overload_1(lua_State *L) {
		if (!_lg_typecheck_getTexture_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Texture * osg::FrameBufferAttachment::getTexture() function, expected prototype:\nosg::Texture * osg::FrameBufferAttachment::getTexture()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::FrameBufferAttachment* self=(Luna< osg::FrameBufferAttachment >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Texture * osg::FrameBufferAttachment::getTexture(). Got : '%s'\n%s",typeid(Luna< osg::FrameBufferAttachment >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Texture * lret = self->getTexture();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture >::push(L,lret,false);

		return 1;
	}

	// const osg::Texture * osg::FrameBufferAttachment::getTexture() const
	static int _bind_getTexture_overload_2(lua_State *L) {
		if (!_lg_typecheck_getTexture_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Texture * osg::FrameBufferAttachment::getTexture() const function, expected prototype:\nconst osg::Texture * osg::FrameBufferAttachment::getTexture() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::FrameBufferAttachment* self=(Luna< osg::FrameBufferAttachment >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Texture * osg::FrameBufferAttachment::getTexture() const. Got : '%s'\n%s",typeid(Luna< osg::FrameBufferAttachment >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Texture * lret = self->getTexture();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::FrameBufferAttachment::getTexture
	static int _bind_getTexture(lua_State *L) {
		if (_lg_typecheck_getTexture_overload_1(L)) return _bind_getTexture_overload_1(L);
		if (_lg_typecheck_getTexture_overload_2(L)) return _bind_getTexture_overload_2(L);

		luaL_error(L, "error in function getTexture, cannot match any of the overloads for function getTexture:\n  getTexture()\n  getTexture()\n");
		return 0;
	}

	// unsigned int osg::FrameBufferAttachment::getCubeMapFace() const
	static int _bind_getCubeMapFace(lua_State *L) {
		if (!_lg_typecheck_getCubeMapFace(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::FrameBufferAttachment::getCubeMapFace() const function, expected prototype:\nunsigned int osg::FrameBufferAttachment::getCubeMapFace() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::FrameBufferAttachment* self=(Luna< osg::FrameBufferAttachment >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::FrameBufferAttachment::getCubeMapFace() const. Got : '%s'\n%s",typeid(Luna< osg::FrameBufferAttachment >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getCubeMapFace();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::FrameBufferAttachment::getTextureLevel() const
	static int _bind_getTextureLevel(lua_State *L) {
		if (!_lg_typecheck_getTextureLevel(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::FrameBufferAttachment::getTextureLevel() const function, expected prototype:\nunsigned int osg::FrameBufferAttachment::getTextureLevel() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::FrameBufferAttachment* self=(Luna< osg::FrameBufferAttachment >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::FrameBufferAttachment::getTextureLevel() const. Got : '%s'\n%s",typeid(Luna< osg::FrameBufferAttachment >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getTextureLevel();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::FrameBufferAttachment::getTexture3DZOffset() const
	static int _bind_getTexture3DZOffset(lua_State *L) {
		if (!_lg_typecheck_getTexture3DZOffset(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::FrameBufferAttachment::getTexture3DZOffset() const function, expected prototype:\nunsigned int osg::FrameBufferAttachment::getTexture3DZOffset() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::FrameBufferAttachment* self=(Luna< osg::FrameBufferAttachment >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::FrameBufferAttachment::getTexture3DZOffset() const. Got : '%s'\n%s",typeid(Luna< osg::FrameBufferAttachment >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getTexture3DZOffset();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::FrameBufferAttachment::getTextureArrayLayer() const
	static int _bind_getTextureArrayLayer(lua_State *L) {
		if (!_lg_typecheck_getTextureArrayLayer(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::FrameBufferAttachment::getTextureArrayLayer() const function, expected prototype:\nunsigned int osg::FrameBufferAttachment::getTextureArrayLayer() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::FrameBufferAttachment* self=(Luna< osg::FrameBufferAttachment >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::FrameBufferAttachment::getTextureArrayLayer() const. Got : '%s'\n%s",typeid(Luna< osg::FrameBufferAttachment >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getTextureArrayLayer();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:
	// osg::FrameBufferAttachment & osg::FrameBufferAttachment::operator=(const osg::FrameBufferAttachment & copy)
	static int _bind_op_assign(lua_State *L) {
		if (!_lg_typecheck_op_assign(L)) {
			luaL_error(L, "luna typecheck failed in osg::FrameBufferAttachment & osg::FrameBufferAttachment::operator=(const osg::FrameBufferAttachment & copy) function, expected prototype:\nosg::FrameBufferAttachment & osg::FrameBufferAttachment::operator=(const osg::FrameBufferAttachment & copy)\nClass arguments details:\narg 1 ID = 90669884\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::FrameBufferAttachment* copy_ptr=(Luna< osg::FrameBufferAttachment >::check(L,2));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osg::FrameBufferAttachment::operator= function");
		}
		const osg::FrameBufferAttachment & copy=*copy_ptr;

		osg::FrameBufferAttachment* self=(Luna< osg::FrameBufferAttachment >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::FrameBufferAttachment & osg::FrameBufferAttachment::operator=(const osg::FrameBufferAttachment &). Got : '%s'\n%s",typeid(Luna< osg::FrameBufferAttachment >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::FrameBufferAttachment* lret = &self->operator=(copy);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::FrameBufferAttachment >::push(L,lret,false);

		return 1;
	}


};

osg::FrameBufferAttachment* LunaTraits< osg::FrameBufferAttachment >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_FrameBufferAttachment::_bind_ctor(L);
}

void LunaTraits< osg::FrameBufferAttachment >::_bind_dtor(osg::FrameBufferAttachment* obj) {
	delete obj;
}

const char LunaTraits< osg::FrameBufferAttachment >::className[] = "FrameBufferAttachment";
const char LunaTraits< osg::FrameBufferAttachment >::fullName[] = "osg::FrameBufferAttachment";
const char LunaTraits< osg::FrameBufferAttachment >::moduleName[] = "osg";
const char* LunaTraits< osg::FrameBufferAttachment >::parents[] = {0};
const int LunaTraits< osg::FrameBufferAttachment >::hash = 90669884;
const int LunaTraits< osg::FrameBufferAttachment >::uniqueIDs[] = {90669884,0};

luna_RegType LunaTraits< osg::FrameBufferAttachment >::methods[] = {
	{"isMultisample", &luna_wrapper_osg_FrameBufferAttachment::_bind_isMultisample},
	{"createRequiredTexturesAndApplyGenerateMipMap", &luna_wrapper_osg_FrameBufferAttachment::_bind_createRequiredTexturesAndApplyGenerateMipMap},
	{"attach", &luna_wrapper_osg_FrameBufferAttachment::_bind_attach},
	{"compare", &luna_wrapper_osg_FrameBufferAttachment::_bind_compare},
	{"getRenderBuffer", &luna_wrapper_osg_FrameBufferAttachment::_bind_getRenderBuffer},
	{"getTexture", &luna_wrapper_osg_FrameBufferAttachment::_bind_getTexture},
	{"getCubeMapFace", &luna_wrapper_osg_FrameBufferAttachment::_bind_getCubeMapFace},
	{"getTextureLevel", &luna_wrapper_osg_FrameBufferAttachment::_bind_getTextureLevel},
	{"getTexture3DZOffset", &luna_wrapper_osg_FrameBufferAttachment::_bind_getTexture3DZOffset},
	{"getTextureArrayLayer", &luna_wrapper_osg_FrameBufferAttachment::_bind_getTextureArrayLayer},
	{"op_assign", &luna_wrapper_osg_FrameBufferAttachment::_bind_op_assign},
	{"dynCast", &luna_wrapper_osg_FrameBufferAttachment::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_FrameBufferAttachment::_bind___eq},
	{"fromVoid", &luna_wrapper_osg_FrameBufferAttachment::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_FrameBufferAttachment::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< osg::FrameBufferAttachment >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::FrameBufferAttachment >::enumValues[] = {
	{0,0}
};



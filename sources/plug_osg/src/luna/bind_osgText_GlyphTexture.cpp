#include <plug_common.h>

#include <luna/wrappers/wrapper_osgText_GlyphTexture.h>

class luna_wrapper_osgText_GlyphTexture {
public:
	typedef Luna< osgText::GlyphTexture > luna_t;

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

		osgText::GlyphTexture* self= (osgText::GlyphTexture*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgText::GlyphTexture >::push(L,self,false);
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
		//osgText::GlyphTexture* ptr= dynamic_cast< osgText::GlyphTexture* >(Luna< osg::Referenced >::check(L,1));
		osgText::GlyphTexture* ptr= luna_caster< osg::Referenced, osgText::GlyphTexture >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgText::GlyphTexture >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_compare(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setGlyphImageMargin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getGlyphImageMargin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setGlyphImageMarginRatio(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getGlyphImageMarginRatio(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSpaceForGlyph(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addGlyph(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_createImage(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_base_getMember(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_checkValidityOfAssociatedModes(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
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

	inline static bool _lg_typecheck_base_isTextureAttribute(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getModeUsage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,48108040) ) return false;
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

	inline static bool _lg_typecheck_base_getType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getTextureTarget(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setImage(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getImage_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getImage_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getNumImages(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getTextureWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getTextureHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getTextureDepth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_compare(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
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
	// osgText::GlyphTexture::GlyphTexture()
	static osgText::GlyphTexture* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgText::GlyphTexture::GlyphTexture() function, expected prototype:\nosgText::GlyphTexture::GlyphTexture()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osgText::GlyphTexture();
	}

	// osgText::GlyphTexture::GlyphTexture(lua_Table * data)
	static osgText::GlyphTexture* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgText::GlyphTexture::GlyphTexture(lua_Table * data) function, expected prototype:\nosgText::GlyphTexture::GlyphTexture(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgText_GlyphTexture(L,NULL);
	}

	// Overload binder for osgText::GlyphTexture::GlyphTexture
	static osgText::GlyphTexture* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function GlyphTexture, cannot match any of the overloads for function GlyphTexture:\n  GlyphTexture()\n  GlyphTexture(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// const char * osgText::GlyphTexture::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgText::GlyphTexture::className() const function, expected prototype:\nconst char * osgText::GlyphTexture::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::GlyphTexture* self=Luna< osg::Referenced >::checkSubType< osgText::GlyphTexture >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgText::GlyphTexture::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// int osgText::GlyphTexture::compare(const osg::StateAttribute & rhs) const
	static int _bind_compare(lua_State *L) {
		if (!_lg_typecheck_compare(L)) {
			luaL_error(L, "luna typecheck failed in int osgText::GlyphTexture::compare(const osg::StateAttribute & rhs) const function, expected prototype:\nint osgText::GlyphTexture::compare(const osg::StateAttribute & rhs) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::StateAttribute* rhs_ptr=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osgText::GlyphTexture::compare function");
		}
		const osg::StateAttribute & rhs=*rhs_ptr;

		osgText::GlyphTexture* self=Luna< osg::Referenced >::checkSubType< osgText::GlyphTexture >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osgText::GlyphTexture::compare(const osg::StateAttribute &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->compare(rhs);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgText::GlyphTexture::setGlyphImageMargin(unsigned int margin)
	static int _bind_setGlyphImageMargin(lua_State *L) {
		if (!_lg_typecheck_setGlyphImageMargin(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::GlyphTexture::setGlyphImageMargin(unsigned int margin) function, expected prototype:\nvoid osgText::GlyphTexture::setGlyphImageMargin(unsigned int margin)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int margin=(unsigned int)lua_tointeger(L,2);

		osgText::GlyphTexture* self=Luna< osg::Referenced >::checkSubType< osgText::GlyphTexture >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::GlyphTexture::setGlyphImageMargin(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setGlyphImageMargin(margin);

		return 0;
	}

	// unsigned int osgText::GlyphTexture::getGlyphImageMargin() const
	static int _bind_getGlyphImageMargin(lua_State *L) {
		if (!_lg_typecheck_getGlyphImageMargin(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osgText::GlyphTexture::getGlyphImageMargin() const function, expected prototype:\nunsigned int osgText::GlyphTexture::getGlyphImageMargin() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::GlyphTexture* self=Luna< osg::Referenced >::checkSubType< osgText::GlyphTexture >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osgText::GlyphTexture::getGlyphImageMargin() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getGlyphImageMargin();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgText::GlyphTexture::setGlyphImageMarginRatio(float margin)
	static int _bind_setGlyphImageMarginRatio(lua_State *L) {
		if (!_lg_typecheck_setGlyphImageMarginRatio(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::GlyphTexture::setGlyphImageMarginRatio(float margin) function, expected prototype:\nvoid osgText::GlyphTexture::setGlyphImageMarginRatio(float margin)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float margin=(float)lua_tonumber(L,2);

		osgText::GlyphTexture* self=Luna< osg::Referenced >::checkSubType< osgText::GlyphTexture >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::GlyphTexture::setGlyphImageMarginRatio(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setGlyphImageMarginRatio(margin);

		return 0;
	}

	// float osgText::GlyphTexture::getGlyphImageMarginRatio() const
	static int _bind_getGlyphImageMarginRatio(lua_State *L) {
		if (!_lg_typecheck_getGlyphImageMarginRatio(L)) {
			luaL_error(L, "luna typecheck failed in float osgText::GlyphTexture::getGlyphImageMarginRatio() const function, expected prototype:\nfloat osgText::GlyphTexture::getGlyphImageMarginRatio() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::GlyphTexture* self=Luna< osg::Referenced >::checkSubType< osgText::GlyphTexture >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgText::GlyphTexture::getGlyphImageMarginRatio() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getGlyphImageMarginRatio();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osgText::GlyphTexture::getSpaceForGlyph(osgText::Glyph * glyph, int & posX, int & posY)
	static int _bind_getSpaceForGlyph(lua_State *L) {
		if (!_lg_typecheck_getSpaceForGlyph(L)) {
			luaL_error(L, "luna typecheck failed in bool osgText::GlyphTexture::getSpaceForGlyph(osgText::Glyph * glyph, int & posX, int & posY) function, expected prototype:\nbool osgText::GlyphTexture::getSpaceForGlyph(osgText::Glyph * glyph, int & posX, int & posY)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgText::Glyph* glyph=(Luna< osg::Referenced >::checkSubType< osgText::Glyph >(L,2));
		int posX=(int)lua_tointeger(L,3);
		int posY=(int)lua_tointeger(L,4);

		osgText::GlyphTexture* self=Luna< osg::Referenced >::checkSubType< osgText::GlyphTexture >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgText::GlyphTexture::getSpaceForGlyph(osgText::Glyph *, int &, int &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getSpaceForGlyph(glyph, posX, posY);
		lua_pushboolean(L,lret?1:0);

		lua_pushnumber(L,posX);
		lua_pushnumber(L,posY);
		return 3;
	}

	// void osgText::GlyphTexture::addGlyph(osgText::Glyph * glyph, int posX, int posY)
	static int _bind_addGlyph(lua_State *L) {
		if (!_lg_typecheck_addGlyph(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::GlyphTexture::addGlyph(osgText::Glyph * glyph, int posX, int posY) function, expected prototype:\nvoid osgText::GlyphTexture::addGlyph(osgText::Glyph * glyph, int posX, int posY)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgText::Glyph* glyph=(Luna< osg::Referenced >::checkSubType< osgText::Glyph >(L,2));
		int posX=(int)lua_tointeger(L,3);
		int posY=(int)lua_tointeger(L,4);

		osgText::GlyphTexture* self=Luna< osg::Referenced >::checkSubType< osgText::GlyphTexture >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::GlyphTexture::addGlyph(osgText::Glyph *, int, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addGlyph(glyph, posX, posY);

		return 0;
	}

	// void osgText::GlyphTexture::apply(osg::State & state) const
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::GlyphTexture::apply(osg::State & state) const function, expected prototype:\nvoid osgText::GlyphTexture::apply(osg::State & state) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* state_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osgText::GlyphTexture::apply function");
		}
		osg::State & state=*state_ptr;

		osgText::GlyphTexture* self=Luna< osg::Referenced >::checkSubType< osgText::GlyphTexture >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::GlyphTexture::apply(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(state);

		return 0;
	}

	// void osgText::GlyphTexture::setThreadSafeRefUnref(bool threadSafe)
	static int _bind_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::GlyphTexture::setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgText::GlyphTexture::setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgText::GlyphTexture* self=Luna< osg::Referenced >::checkSubType< osgText::GlyphTexture >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::GlyphTexture::setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// osg::Image * osgText::GlyphTexture::createImage()
	static int _bind_createImage(lua_State *L) {
		if (!_lg_typecheck_createImage(L)) {
			luaL_error(L, "luna typecheck failed in osg::Image * osgText::GlyphTexture::createImage() function, expected prototype:\nosg::Image * osgText::GlyphTexture::createImage()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::GlyphTexture* self=Luna< osg::Referenced >::checkSubType< osgText::GlyphTexture >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Image * osgText::GlyphTexture::createImage(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Image * lret = self->createImage();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Image >::push(L,lret,false);

		return 1;
	}

	// void osgText::GlyphTexture::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::GlyphTexture::base_setName(const std::string & name) function, expected prototype:\nvoid osgText::GlyphTexture::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgText::GlyphTexture* self=Luna< osg::Referenced >::checkSubType< osgText::GlyphTexture >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::GlyphTexture::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GlyphTexture::setName(name);

		return 0;
	}

	// void osgText::GlyphTexture::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::GlyphTexture::base_computeDataVariance() function, expected prototype:\nvoid osgText::GlyphTexture::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::GlyphTexture* self=Luna< osg::Referenced >::checkSubType< osgText::GlyphTexture >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::GlyphTexture::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GlyphTexture::computeDataVariance();

		return 0;
	}

	// void osgText::GlyphTexture::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::GlyphTexture::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osgText::GlyphTexture::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osgText::GlyphTexture* self=Luna< osg::Referenced >::checkSubType< osgText::GlyphTexture >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::GlyphTexture::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GlyphTexture::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osgText::GlyphTexture::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osgText::GlyphTexture::base_getUserData() function, expected prototype:\nosg::Referenced * osgText::GlyphTexture::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::GlyphTexture* self=Luna< osg::Referenced >::checkSubType< osgText::GlyphTexture >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osgText::GlyphTexture::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->GlyphTexture::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osgText::GlyphTexture::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osgText::GlyphTexture::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osgText::GlyphTexture::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::GlyphTexture* self=Luna< osg::Referenced >::checkSubType< osgText::GlyphTexture >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osgText::GlyphTexture::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->GlyphTexture::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgText::GlyphTexture::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// unsigned int osgText::GlyphTexture::base_getMember() const
	static int _bind_base_getMember(lua_State *L) {
		if (!_lg_typecheck_base_getMember(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osgText::GlyphTexture::base_getMember() const function, expected prototype:\nunsigned int osgText::GlyphTexture::base_getMember() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::GlyphTexture* self=Luna< osg::Referenced >::checkSubType< osgText::GlyphTexture >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osgText::GlyphTexture::base_getMember() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->GlyphTexture::getMember();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osgText::GlyphTexture::base_checkValidityOfAssociatedModes(osg::State & arg1) const
	static int _bind_base_checkValidityOfAssociatedModes(lua_State *L) {
		if (!_lg_typecheck_base_checkValidityOfAssociatedModes(L)) {
			luaL_error(L, "luna typecheck failed in bool osgText::GlyphTexture::base_checkValidityOfAssociatedModes(osg::State & arg1) const function, expected prototype:\nbool osgText::GlyphTexture::base_checkValidityOfAssociatedModes(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgText::GlyphTexture::base_checkValidityOfAssociatedModes function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osgText::GlyphTexture* self=Luna< osg::Referenced >::checkSubType< osgText::GlyphTexture >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgText::GlyphTexture::base_checkValidityOfAssociatedModes(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GlyphTexture::checkValidityOfAssociatedModes(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// osg::Texture * osgText::GlyphTexture::base_asTexture()
	static int _bind_base_asTexture_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asTexture_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Texture * osgText::GlyphTexture::base_asTexture() function, expected prototype:\nosg::Texture * osgText::GlyphTexture::base_asTexture()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::GlyphTexture* self=Luna< osg::Referenced >::checkSubType< osgText::GlyphTexture >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Texture * osgText::GlyphTexture::base_asTexture(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Texture * lret = self->GlyphTexture::asTexture();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture >::push(L,lret,false);

		return 1;
	}

	// const osg::Texture * osgText::GlyphTexture::base_asTexture() const
	static int _bind_base_asTexture_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asTexture_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Texture * osgText::GlyphTexture::base_asTexture() const function, expected prototype:\nconst osg::Texture * osgText::GlyphTexture::base_asTexture() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::GlyphTexture* self=Luna< osg::Referenced >::checkSubType< osgText::GlyphTexture >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Texture * osgText::GlyphTexture::base_asTexture() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Texture * lret = self->GlyphTexture::asTexture();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgText::GlyphTexture::base_asTexture
	static int _bind_base_asTexture(lua_State *L) {
		if (_lg_typecheck_base_asTexture_overload_1(L)) return _bind_base_asTexture_overload_1(L);
		if (_lg_typecheck_base_asTexture_overload_2(L)) return _bind_base_asTexture_overload_2(L);

		luaL_error(L, "error in function base_asTexture, cannot match any of the overloads for function base_asTexture:\n  base_asTexture()\n  base_asTexture()\n");
		return 0;
	}

	// bool osgText::GlyphTexture::base_isTextureAttribute() const
	static int _bind_base_isTextureAttribute(lua_State *L) {
		if (!_lg_typecheck_base_isTextureAttribute(L)) {
			luaL_error(L, "luna typecheck failed in bool osgText::GlyphTexture::base_isTextureAttribute() const function, expected prototype:\nbool osgText::GlyphTexture::base_isTextureAttribute() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::GlyphTexture* self=Luna< osg::Referenced >::checkSubType< osgText::GlyphTexture >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgText::GlyphTexture::base_isTextureAttribute() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GlyphTexture::isTextureAttribute();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgText::GlyphTexture::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const
	static int _bind_base_getModeUsage(lua_State *L) {
		if (!_lg_typecheck_base_getModeUsage(L)) {
			luaL_error(L, "luna typecheck failed in bool osgText::GlyphTexture::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const function, expected prototype:\nbool osgText::GlyphTexture::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const\nClass arguments details:\narg 1 ID = 48108040\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StateAttribute::ModeUsage* _arg1_ptr=(Luna< osg::StateAttribute::ModeUsage >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgText::GlyphTexture::base_getModeUsage function");
		}
		osg::StateAttribute::ModeUsage & _arg1=*_arg1_ptr;

		osgText::GlyphTexture* self=Luna< osg::Referenced >::checkSubType< osgText::GlyphTexture >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgText::GlyphTexture::base_getModeUsage(osg::StateAttribute::ModeUsage &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GlyphTexture::getModeUsage(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgText::GlyphTexture::base_compileGLObjects(osg::State & state) const
	static int _bind_base_compileGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_compileGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::GlyphTexture::base_compileGLObjects(osg::State & state) const function, expected prototype:\nvoid osgText::GlyphTexture::base_compileGLObjects(osg::State & state) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* state_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osgText::GlyphTexture::base_compileGLObjects function");
		}
		osg::State & state=*state_ptr;

		osgText::GlyphTexture* self=Luna< osg::Referenced >::checkSubType< osgText::GlyphTexture >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::GlyphTexture::base_compileGLObjects(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GlyphTexture::compileGLObjects(state);

		return 0;
	}

	// void osgText::GlyphTexture::base_releaseGLObjects(osg::State * state = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::GlyphTexture::base_releaseGLObjects(osg::State * state = 0) const function, expected prototype:\nvoid osgText::GlyphTexture::base_releaseGLObjects(osg::State * state = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* state=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osgText::GlyphTexture* self=Luna< osg::Referenced >::checkSubType< osgText::GlyphTexture >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::GlyphTexture::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GlyphTexture::releaseGLObjects(state);

		return 0;
	}

	// osg::Object * osgText::GlyphTexture::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgText::GlyphTexture::base_cloneType() const function, expected prototype:\nosg::Object * osgText::GlyphTexture::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::GlyphTexture* self=Luna< osg::Referenced >::checkSubType< osgText::GlyphTexture >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgText::GlyphTexture::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->GlyphTexture::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgText::GlyphTexture::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgText::GlyphTexture::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgText::GlyphTexture::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgText::GlyphTexture::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgText::GlyphTexture* self=Luna< osg::Referenced >::checkSubType< osgText::GlyphTexture >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgText::GlyphTexture::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->GlyphTexture::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgText::GlyphTexture::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgText::GlyphTexture::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgText::GlyphTexture::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgText::GlyphTexture* self=Luna< osg::Referenced >::checkSubType< osgText::GlyphTexture >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgText::GlyphTexture::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GlyphTexture::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgText::GlyphTexture::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgText::GlyphTexture::base_libraryName() const function, expected prototype:\nconst char * osgText::GlyphTexture::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::GlyphTexture* self=Luna< osg::Referenced >::checkSubType< osgText::GlyphTexture >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgText::GlyphTexture::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->GlyphTexture::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osgText::GlyphTexture::base_getType() const
	static int _bind_base_getType(lua_State *L) {
		if (!_lg_typecheck_base_getType(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osgText::GlyphTexture::base_getType() const function, expected prototype:\nosg::StateAttribute::Type osgText::GlyphTexture::base_getType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::GlyphTexture* self=Luna< osg::Referenced >::checkSubType< osgText::GlyphTexture >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osgText::GlyphTexture::base_getType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::StateAttribute::Type lret = self->GlyphTexture::getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osgText::GlyphTexture::base_getTextureTarget() const
	static int _bind_base_getTextureTarget(lua_State *L) {
		if (!_lg_typecheck_base_getTextureTarget(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osgText::GlyphTexture::base_getTextureTarget() const function, expected prototype:\nunsigned int osgText::GlyphTexture::base_getTextureTarget() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::GlyphTexture* self=Luna< osg::Referenced >::checkSubType< osgText::GlyphTexture >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osgText::GlyphTexture::base_getTextureTarget() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->GlyphTexture::getTextureTarget();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgText::GlyphTexture::base_setImage(unsigned int arg1, osg::Image * image)
	static int _bind_base_setImage(lua_State *L) {
		if (!_lg_typecheck_base_setImage(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::GlyphTexture::base_setImage(unsigned int arg1, osg::Image * image) function, expected prototype:\nvoid osgText::GlyphTexture::base_setImage(unsigned int arg1, osg::Image * image)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned _arg1=(unsigned)lua_tointeger(L,2);
		osg::Image* image=(Luna< osg::Referenced >::checkSubType< osg::Image >(L,3));

		osgText::GlyphTexture* self=Luna< osg::Referenced >::checkSubType< osgText::GlyphTexture >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::GlyphTexture::base_setImage(unsigned int, osg::Image *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GlyphTexture::setImage(_arg1, image);

		return 0;
	}

	// osg::Image * osgText::GlyphTexture::base_getImage(unsigned int arg1)
	static int _bind_base_getImage_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getImage_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Image * osgText::GlyphTexture::base_getImage(unsigned int arg1) function, expected prototype:\nosg::Image * osgText::GlyphTexture::base_getImage(unsigned int arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned _arg1=(unsigned)lua_tointeger(L,2);

		osgText::GlyphTexture* self=Luna< osg::Referenced >::checkSubType< osgText::GlyphTexture >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Image * osgText::GlyphTexture::base_getImage(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Image * lret = self->GlyphTexture::getImage(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Image >::push(L,lret,false);

		return 1;
	}

	// const osg::Image * osgText::GlyphTexture::base_getImage(unsigned int arg1) const
	static int _bind_base_getImage_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getImage_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Image * osgText::GlyphTexture::base_getImage(unsigned int arg1) const function, expected prototype:\nconst osg::Image * osgText::GlyphTexture::base_getImage(unsigned int arg1) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned _arg1=(unsigned)lua_tointeger(L,2);

		osgText::GlyphTexture* self=Luna< osg::Referenced >::checkSubType< osgText::GlyphTexture >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Image * osgText::GlyphTexture::base_getImage(unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Image * lret = self->GlyphTexture::getImage(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Image >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgText::GlyphTexture::base_getImage
	static int _bind_base_getImage(lua_State *L) {
		if (_lg_typecheck_base_getImage_overload_1(L)) return _bind_base_getImage_overload_1(L);
		if (_lg_typecheck_base_getImage_overload_2(L)) return _bind_base_getImage_overload_2(L);

		luaL_error(L, "error in function base_getImage, cannot match any of the overloads for function base_getImage:\n  base_getImage(unsigned int)\n  base_getImage(unsigned int)\n");
		return 0;
	}

	// unsigned int osgText::GlyphTexture::base_getNumImages() const
	static int _bind_base_getNumImages(lua_State *L) {
		if (!_lg_typecheck_base_getNumImages(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osgText::GlyphTexture::base_getNumImages() const function, expected prototype:\nunsigned int osgText::GlyphTexture::base_getNumImages() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::GlyphTexture* self=Luna< osg::Referenced >::checkSubType< osgText::GlyphTexture >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osgText::GlyphTexture::base_getNumImages() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->GlyphTexture::getNumImages();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osgText::GlyphTexture::base_getTextureWidth() const
	static int _bind_base_getTextureWidth(lua_State *L) {
		if (!_lg_typecheck_base_getTextureWidth(L)) {
			luaL_error(L, "luna typecheck failed in int osgText::GlyphTexture::base_getTextureWidth() const function, expected prototype:\nint osgText::GlyphTexture::base_getTextureWidth() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::GlyphTexture* self=Luna< osg::Referenced >::checkSubType< osgText::GlyphTexture >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osgText::GlyphTexture::base_getTextureWidth() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GlyphTexture::getTextureWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osgText::GlyphTexture::base_getTextureHeight() const
	static int _bind_base_getTextureHeight(lua_State *L) {
		if (!_lg_typecheck_base_getTextureHeight(L)) {
			luaL_error(L, "luna typecheck failed in int osgText::GlyphTexture::base_getTextureHeight() const function, expected prototype:\nint osgText::GlyphTexture::base_getTextureHeight() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::GlyphTexture* self=Luna< osg::Referenced >::checkSubType< osgText::GlyphTexture >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osgText::GlyphTexture::base_getTextureHeight() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GlyphTexture::getTextureHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osgText::GlyphTexture::base_getTextureDepth() const
	static int _bind_base_getTextureDepth(lua_State *L) {
		if (!_lg_typecheck_base_getTextureDepth(L)) {
			luaL_error(L, "luna typecheck failed in int osgText::GlyphTexture::base_getTextureDepth() const function, expected prototype:\nint osgText::GlyphTexture::base_getTextureDepth() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::GlyphTexture* self=Luna< osg::Referenced >::checkSubType< osgText::GlyphTexture >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osgText::GlyphTexture::base_getTextureDepth() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GlyphTexture::getTextureDepth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const char * osgText::GlyphTexture::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgText::GlyphTexture::base_className() const function, expected prototype:\nconst char * osgText::GlyphTexture::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::GlyphTexture* self=Luna< osg::Referenced >::checkSubType< osgText::GlyphTexture >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgText::GlyphTexture::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->GlyphTexture::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// int osgText::GlyphTexture::base_compare(const osg::StateAttribute & rhs) const
	static int _bind_base_compare(lua_State *L) {
		if (!_lg_typecheck_base_compare(L)) {
			luaL_error(L, "luna typecheck failed in int osgText::GlyphTexture::base_compare(const osg::StateAttribute & rhs) const function, expected prototype:\nint osgText::GlyphTexture::base_compare(const osg::StateAttribute & rhs) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::StateAttribute* rhs_ptr=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osgText::GlyphTexture::base_compare function");
		}
		const osg::StateAttribute & rhs=*rhs_ptr;

		osgText::GlyphTexture* self=Luna< osg::Referenced >::checkSubType< osgText::GlyphTexture >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osgText::GlyphTexture::base_compare(const osg::StateAttribute &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GlyphTexture::compare(rhs);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgText::GlyphTexture::base_apply(osg::State & state) const
	static int _bind_base_apply(lua_State *L) {
		if (!_lg_typecheck_base_apply(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::GlyphTexture::base_apply(osg::State & state) const function, expected prototype:\nvoid osgText::GlyphTexture::base_apply(osg::State & state) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* state_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osgText::GlyphTexture::base_apply function");
		}
		osg::State & state=*state_ptr;

		osgText::GlyphTexture* self=Luna< osg::Referenced >::checkSubType< osgText::GlyphTexture >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::GlyphTexture::base_apply(osg::State &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GlyphTexture::apply(state);

		return 0;
	}

	// void osgText::GlyphTexture::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::GlyphTexture::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgText::GlyphTexture::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgText::GlyphTexture* self=Luna< osg::Referenced >::checkSubType< osgText::GlyphTexture >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::GlyphTexture::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GlyphTexture::setThreadSafeRefUnref(threadSafe);

		return 0;
	}


	// Operator binds:

};

osgText::GlyphTexture* LunaTraits< osgText::GlyphTexture >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgText_GlyphTexture::_bind_ctor(L);
}

void LunaTraits< osgText::GlyphTexture >::_bind_dtor(osgText::GlyphTexture* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgText::GlyphTexture >::className[] = "GlyphTexture";
const char LunaTraits< osgText::GlyphTexture >::fullName[] = "osgText::GlyphTexture";
const char LunaTraits< osgText::GlyphTexture >::moduleName[] = "osgText";
const char* LunaTraits< osgText::GlyphTexture >::parents[] = {"osg.Texture2D", 0};
const int LunaTraits< osgText::GlyphTexture >::hash = 31969951;
const int LunaTraits< osgText::GlyphTexture >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgText::GlyphTexture >::methods[] = {
	{"className", &luna_wrapper_osgText_GlyphTexture::_bind_className},
	{"compare", &luna_wrapper_osgText_GlyphTexture::_bind_compare},
	{"setGlyphImageMargin", &luna_wrapper_osgText_GlyphTexture::_bind_setGlyphImageMargin},
	{"getGlyphImageMargin", &luna_wrapper_osgText_GlyphTexture::_bind_getGlyphImageMargin},
	{"setGlyphImageMarginRatio", &luna_wrapper_osgText_GlyphTexture::_bind_setGlyphImageMarginRatio},
	{"getGlyphImageMarginRatio", &luna_wrapper_osgText_GlyphTexture::_bind_getGlyphImageMarginRatio},
	{"getSpaceForGlyph", &luna_wrapper_osgText_GlyphTexture::_bind_getSpaceForGlyph},
	{"addGlyph", &luna_wrapper_osgText_GlyphTexture::_bind_addGlyph},
	{"apply", &luna_wrapper_osgText_GlyphTexture::_bind_apply},
	{"setThreadSafeRefUnref", &luna_wrapper_osgText_GlyphTexture::_bind_setThreadSafeRefUnref},
	{"createImage", &luna_wrapper_osgText_GlyphTexture::_bind_createImage},
	{"base_setName", &luna_wrapper_osgText_GlyphTexture::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osgText_GlyphTexture::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osgText_GlyphTexture::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osgText_GlyphTexture::_bind_base_getUserData},
	{"base_getMember", &luna_wrapper_osgText_GlyphTexture::_bind_base_getMember},
	{"base_checkValidityOfAssociatedModes", &luna_wrapper_osgText_GlyphTexture::_bind_base_checkValidityOfAssociatedModes},
	{"base_asTexture", &luna_wrapper_osgText_GlyphTexture::_bind_base_asTexture},
	{"base_isTextureAttribute", &luna_wrapper_osgText_GlyphTexture::_bind_base_isTextureAttribute},
	{"base_getModeUsage", &luna_wrapper_osgText_GlyphTexture::_bind_base_getModeUsage},
	{"base_compileGLObjects", &luna_wrapper_osgText_GlyphTexture::_bind_base_compileGLObjects},
	{"base_releaseGLObjects", &luna_wrapper_osgText_GlyphTexture::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osgText_GlyphTexture::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osgText_GlyphTexture::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osgText_GlyphTexture::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osgText_GlyphTexture::_bind_base_libraryName},
	{"base_getType", &luna_wrapper_osgText_GlyphTexture::_bind_base_getType},
	{"base_getTextureTarget", &luna_wrapper_osgText_GlyphTexture::_bind_base_getTextureTarget},
	{"base_setImage", &luna_wrapper_osgText_GlyphTexture::_bind_base_setImage},
	{"base_getImage", &luna_wrapper_osgText_GlyphTexture::_bind_base_getImage},
	{"base_getNumImages", &luna_wrapper_osgText_GlyphTexture::_bind_base_getNumImages},
	{"base_getTextureWidth", &luna_wrapper_osgText_GlyphTexture::_bind_base_getTextureWidth},
	{"base_getTextureHeight", &luna_wrapper_osgText_GlyphTexture::_bind_base_getTextureHeight},
	{"base_getTextureDepth", &luna_wrapper_osgText_GlyphTexture::_bind_base_getTextureDepth},
	{"base_className", &luna_wrapper_osgText_GlyphTexture::_bind_base_className},
	{"base_compare", &luna_wrapper_osgText_GlyphTexture::_bind_base_compare},
	{"base_apply", &luna_wrapper_osgText_GlyphTexture::_bind_base_apply},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgText_GlyphTexture::_bind_base_setThreadSafeRefUnref},
	{"fromVoid", &luna_wrapper_osgText_GlyphTexture::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgText_GlyphTexture::_bind_asVoid},
	{"getTable", &luna_wrapper_osgText_GlyphTexture::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgText::GlyphTexture >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgText_GlyphTexture::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgText::GlyphTexture >::enumValues[] = {
	{0,0}
};



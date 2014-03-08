#include <plug_common.h>

#include <luna/wrappers/wrapper_osgText_Font_FontImplementation.h>

class luna_wrapper_osgText_Font_FontImplementation {
public:
	typedef Luna< osgText::Font::FontImplementation > luna_t;

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

		osgText::Font::FontImplementation* self= (osgText::Font::FontImplementation*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgText::Font::FontImplementation >::push(L,self,false);
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
		//osgText::Font::FontImplementation* ptr= dynamic_cast< osgText::Font::FontImplementation* >(Luna< osg::Referenced >::check(L,1));
		osgText::Font::FontImplementation* ptr= luna_caster< osg::Referenced, osgText::Font::FontImplementation >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgText::Font::FontImplementation >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getFileName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_supportsMultipleFontResolutions(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getGlyph(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,52265949) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getGlyph3D(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getKerning(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_hasVertical(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_addGlyph(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,52265949) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getVerticalSize(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFacade(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setFacade(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getVerticalSize(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgText::Font::FontImplementation::FontImplementation(lua_Table * data)
	static osgText::Font::FontImplementation* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in osgText::Font::FontImplementation::FontImplementation(lua_Table * data) function, expected prototype:\nosgText::Font::FontImplementation::FontImplementation(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgText_Font_FontImplementation(L,NULL);
	}


	// Function binds:
	// std::string osgText::Font::FontImplementation::getFileName() const
	static int _bind_getFileName(lua_State *L) {
		if (!_lg_typecheck_getFileName(L)) {
			luaL_error(L, "luna typecheck failed in std::string osgText::Font::FontImplementation::getFileName() const function, expected prototype:\nstd::string osgText::Font::FontImplementation::getFileName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::Font::FontImplementation* self=Luna< osg::Referenced >::checkSubType< osgText::Font::FontImplementation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call std::string osgText::Font::FontImplementation::getFileName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		std::string lret = self->getFileName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool osgText::Font::FontImplementation::supportsMultipleFontResolutions() const
	static int _bind_supportsMultipleFontResolutions(lua_State *L) {
		if (!_lg_typecheck_supportsMultipleFontResolutions(L)) {
			luaL_error(L, "luna typecheck failed in bool osgText::Font::FontImplementation::supportsMultipleFontResolutions() const function, expected prototype:\nbool osgText::Font::FontImplementation::supportsMultipleFontResolutions() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::Font::FontImplementation* self=Luna< osg::Referenced >::checkSubType< osgText::Font::FontImplementation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgText::Font::FontImplementation::supportsMultipleFontResolutions() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->supportsMultipleFontResolutions();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// osgText::Glyph * osgText::Font::FontImplementation::getGlyph(const osgText::FontResolution & fontRes, unsigned int charcode)
	static int _bind_getGlyph(lua_State *L) {
		if (!_lg_typecheck_getGlyph(L)) {
			luaL_error(L, "luna typecheck failed in osgText::Glyph * osgText::Font::FontImplementation::getGlyph(const osgText::FontResolution & fontRes, unsigned int charcode) function, expected prototype:\nosgText::Glyph * osgText::Font::FontImplementation::getGlyph(const osgText::FontResolution & fontRes, unsigned int charcode)\nClass arguments details:\narg 1 ID = 17799265\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgText::FontResolution* fontRes_ptr=(Luna< std::pair< unsigned int, unsigned int > >::checkSubType< osgText::FontResolution >(L,2));
		if( !fontRes_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg fontRes in osgText::Font::FontImplementation::getGlyph function");
		}
		const osgText::FontResolution & fontRes=*fontRes_ptr;
		unsigned int charcode=(unsigned int)lua_tointeger(L,3);

		osgText::Font::FontImplementation* self=Luna< osg::Referenced >::checkSubType< osgText::Font::FontImplementation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgText::Glyph * osgText::Font::FontImplementation::getGlyph(const osgText::FontResolution &, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgText::Glyph * lret = self->getGlyph(fontRes, charcode);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgText::Glyph >::push(L,lret,false);

		return 1;
	}

	// osgText::Glyph3D * osgText::Font::FontImplementation::getGlyph3D(unsigned int charcode)
	static int _bind_getGlyph3D(lua_State *L) {
		if (!_lg_typecheck_getGlyph3D(L)) {
			luaL_error(L, "luna typecheck failed in osgText::Glyph3D * osgText::Font::FontImplementation::getGlyph3D(unsigned int charcode) function, expected prototype:\nosgText::Glyph3D * osgText::Font::FontImplementation::getGlyph3D(unsigned int charcode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int charcode=(unsigned int)lua_tointeger(L,2);

		osgText::Font::FontImplementation* self=Luna< osg::Referenced >::checkSubType< osgText::Font::FontImplementation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgText::Glyph3D * osgText::Font::FontImplementation::getGlyph3D(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgText::Glyph3D * lret = self->getGlyph3D(charcode);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgText::Glyph3D >::push(L,lret,false);

		return 1;
	}

	// osg::Vec2f osgText::Font::FontImplementation::getKerning(unsigned int leftcharcode, unsigned int rightcharcode, osgText::KerningType kerningType)
	static int _bind_getKerning(lua_State *L) {
		if (!_lg_typecheck_getKerning(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec2f osgText::Font::FontImplementation::getKerning(unsigned int leftcharcode, unsigned int rightcharcode, osgText::KerningType kerningType) function, expected prototype:\nosg::Vec2f osgText::Font::FontImplementation::getKerning(unsigned int leftcharcode, unsigned int rightcharcode, osgText::KerningType kerningType)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int leftcharcode=(unsigned int)lua_tointeger(L,2);
		unsigned int rightcharcode=(unsigned int)lua_tointeger(L,3);
		osgText::KerningType kerningType=(osgText::KerningType)lua_tointeger(L,4);

		osgText::Font::FontImplementation* self=Luna< osg::Referenced >::checkSubType< osgText::Font::FontImplementation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec2f osgText::Font::FontImplementation::getKerning(unsigned int, unsigned int, osgText::KerningType). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec2f stack_lret = self->getKerning(leftcharcode, rightcharcode, kerningType);
		osg::Vec2f* lret = new osg::Vec2f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec2f >::push(L,lret,true);

		return 1;
	}

	// bool osgText::Font::FontImplementation::hasVertical() const
	static int _bind_hasVertical(lua_State *L) {
		if (!_lg_typecheck_hasVertical(L)) {
			luaL_error(L, "luna typecheck failed in bool osgText::Font::FontImplementation::hasVertical() const function, expected prototype:\nbool osgText::Font::FontImplementation::hasVertical() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::Font::FontImplementation* self=Luna< osg::Referenced >::checkSubType< osgText::Font::FontImplementation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgText::Font::FontImplementation::hasVertical() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->hasVertical();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgText::Font::FontImplementation::addGlyph(const osgText::FontResolution & fontRes, unsigned int charcode, osgText::Glyph * glyph)
	static int _bind_addGlyph(lua_State *L) {
		if (!_lg_typecheck_addGlyph(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::Font::FontImplementation::addGlyph(const osgText::FontResolution & fontRes, unsigned int charcode, osgText::Glyph * glyph) function, expected prototype:\nvoid osgText::Font::FontImplementation::addGlyph(const osgText::FontResolution & fontRes, unsigned int charcode, osgText::Glyph * glyph)\nClass arguments details:\narg 1 ID = 17799265\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgText::FontResolution* fontRes_ptr=(Luna< std::pair< unsigned int, unsigned int > >::checkSubType< osgText::FontResolution >(L,2));
		if( !fontRes_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg fontRes in osgText::Font::FontImplementation::addGlyph function");
		}
		const osgText::FontResolution & fontRes=*fontRes_ptr;
		unsigned int charcode=(unsigned int)lua_tointeger(L,3);
		osgText::Glyph* glyph=(Luna< osg::Referenced >::checkSubType< osgText::Glyph >(L,4));

		osgText::Font::FontImplementation* self=Luna< osg::Referenced >::checkSubType< osgText::Font::FontImplementation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::Font::FontImplementation::addGlyph(const osgText::FontResolution &, unsigned int, osgText::Glyph *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addGlyph(fontRes, charcode, glyph);

		return 0;
	}

	// bool osgText::Font::FontImplementation::getVerticalSize(float & ascender, float & descender) const
	static int _bind_getVerticalSize(lua_State *L) {
		if (!_lg_typecheck_getVerticalSize(L)) {
			luaL_error(L, "luna typecheck failed in bool osgText::Font::FontImplementation::getVerticalSize(float & ascender, float & descender) const function, expected prototype:\nbool osgText::Font::FontImplementation::getVerticalSize(float & ascender, float & descender) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float ascender=(float)lua_tonumber(L,2);
		float descender=(float)lua_tonumber(L,3);

		osgText::Font::FontImplementation* self=Luna< osg::Referenced >::checkSubType< osgText::Font::FontImplementation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgText::Font::FontImplementation::getVerticalSize(float &, float &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getVerticalSize(ascender, descender);
		lua_pushboolean(L,lret?1:0);

		lua_pushnumber(L,ascender);
		lua_pushnumber(L,descender);
		return 3;
	}

	// osgText::Font * osgText::Font::FontImplementation::_facade()
	static int _bind_getFacade(lua_State *L) {
		if (!_lg_typecheck_getFacade(L)) {
			luaL_error(L, "luna typecheck failed in osgText::Font * osgText::Font::FontImplementation::_facade() function, expected prototype:\nosgText::Font * osgText::Font::FontImplementation::_facade()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::Font::FontImplementation* self=Luna< osg::Referenced >::checkSubType< osgText::Font::FontImplementation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgText::Font * osgText::Font::FontImplementation::_facade(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgText::Font * lret = self->_facade;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgText::Font >::push(L,lret,false);

		return 1;
	}

	// void osgText::Font::FontImplementation::_facade(osgText::Font * value)
	static int _bind_setFacade(lua_State *L) {
		if (!_lg_typecheck_setFacade(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::Font::FontImplementation::_facade(osgText::Font * value) function, expected prototype:\nvoid osgText::Font::FontImplementation::_facade(osgText::Font * value)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgText::Font* value=(Luna< osg::Referenced >::checkSubType< osgText::Font >(L,2));

		osgText::Font::FontImplementation* self=Luna< osg::Referenced >::checkSubType< osgText::Font::FontImplementation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::Font::FontImplementation::_facade(osgText::Font *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_facade = value;

		return 0;
	}

	// void osgText::Font::FontImplementation::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::Font::FontImplementation::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgText::Font::FontImplementation::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgText::Font::FontImplementation* self=Luna< osg::Referenced >::checkSubType< osgText::Font::FontImplementation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::Font::FontImplementation::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->FontImplementation::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// bool osgText::Font::FontImplementation::base_getVerticalSize(float & ascender, float & descender) const
	static int _bind_base_getVerticalSize(lua_State *L) {
		if (!_lg_typecheck_base_getVerticalSize(L)) {
			luaL_error(L, "luna typecheck failed in bool osgText::Font::FontImplementation::base_getVerticalSize(float & ascender, float & descender) const function, expected prototype:\nbool osgText::Font::FontImplementation::base_getVerticalSize(float & ascender, float & descender) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float ascender=(float)lua_tonumber(L,2);
		float descender=(float)lua_tonumber(L,3);

		osgText::Font::FontImplementation* self=Luna< osg::Referenced >::checkSubType< osgText::Font::FontImplementation >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgText::Font::FontImplementation::base_getVerticalSize(float &, float &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->FontImplementation::getVerticalSize(ascender, descender);
		lua_pushboolean(L,lret?1:0);

		lua_pushnumber(L,ascender);
		lua_pushnumber(L,descender);
		return 3;
	}


	// Operator binds:

};

osgText::Font::FontImplementation* LunaTraits< osgText::Font::FontImplementation >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgText_Font_FontImplementation::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// std::string osgText::Font::FontImplementation::getFileName() const
	// bool osgText::Font::FontImplementation::supportsMultipleFontResolutions() const
	// osgText::Glyph * osgText::Font::FontImplementation::getGlyph(const osgText::FontResolution & fontRes, unsigned int charcode)
	// osgText::Glyph3D * osgText::Font::FontImplementation::getGlyph3D(unsigned int charcode)
	// osg::Vec2f osgText::Font::FontImplementation::getKerning(unsigned int leftcharcode, unsigned int rightcharcode, osgText::KerningType kerningType)
	// bool osgText::Font::FontImplementation::hasVertical() const
}

void LunaTraits< osgText::Font::FontImplementation >::_bind_dtor(osgText::Font::FontImplementation* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgText::Font::FontImplementation >::className[] = "Font_FontImplementation";
const char LunaTraits< osgText::Font::FontImplementation >::fullName[] = "osgText::Font::FontImplementation";
const char LunaTraits< osgText::Font::FontImplementation >::moduleName[] = "osgText";
const char* LunaTraits< osgText::Font::FontImplementation >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osgText::Font::FontImplementation >::hash = 12538320;
const int LunaTraits< osgText::Font::FontImplementation >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgText::Font::FontImplementation >::methods[] = {
	{"getFileName", &luna_wrapper_osgText_Font_FontImplementation::_bind_getFileName},
	{"supportsMultipleFontResolutions", &luna_wrapper_osgText_Font_FontImplementation::_bind_supportsMultipleFontResolutions},
	{"getGlyph", &luna_wrapper_osgText_Font_FontImplementation::_bind_getGlyph},
	{"getGlyph3D", &luna_wrapper_osgText_Font_FontImplementation::_bind_getGlyph3D},
	{"getKerning", &luna_wrapper_osgText_Font_FontImplementation::_bind_getKerning},
	{"hasVertical", &luna_wrapper_osgText_Font_FontImplementation::_bind_hasVertical},
	{"addGlyph", &luna_wrapper_osgText_Font_FontImplementation::_bind_addGlyph},
	{"getVerticalSize", &luna_wrapper_osgText_Font_FontImplementation::_bind_getVerticalSize},
	{"getFacade", &luna_wrapper_osgText_Font_FontImplementation::_bind_getFacade},
	{"setFacade", &luna_wrapper_osgText_Font_FontImplementation::_bind_setFacade},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgText_Font_FontImplementation::_bind_base_setThreadSafeRefUnref},
	{"base_getVerticalSize", &luna_wrapper_osgText_Font_FontImplementation::_bind_base_getVerticalSize},
	{"fromVoid", &luna_wrapper_osgText_Font_FontImplementation::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgText_Font_FontImplementation::_bind_asVoid},
	{"getTable", &luna_wrapper_osgText_Font_FontImplementation::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgText::Font::FontImplementation >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgText_Font_FontImplementation::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgText::Font::FontImplementation >::enumValues[] = {
	{0,0}
};



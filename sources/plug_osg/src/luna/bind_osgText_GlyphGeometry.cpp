#include <plug_common.h>

#include <luna/wrappers/wrapper_osgText_GlyphGeometry.h>

class luna_wrapper_osgText_GlyphGeometry {
public:
	typedef Luna< osgText::GlyphGeometry > luna_t;

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

		osgText::GlyphGeometry* self= (osgText::GlyphGeometry*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgText::GlyphGeometry >::push(L,self,false);
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
		//osgText::GlyphGeometry* ptr= dynamic_cast< osgText::GlyphGeometry* >(Luna< osg::Referenced >::check(L,1));
		osgText::GlyphGeometry* ptr= luna_caster< osg::Referenced, osgText::GlyphGeometry >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgText::GlyphGeometry >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_setup(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_match(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getGeode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getGeometry(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setVertexArray(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getVertexArray(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setNormalArray(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNormalArray(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
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
	// osgText::GlyphGeometry::GlyphGeometry()
	static osgText::GlyphGeometry* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgText::GlyphGeometry::GlyphGeometry() function, expected prototype:\nosgText::GlyphGeometry::GlyphGeometry()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osgText::GlyphGeometry();
	}

	// osgText::GlyphGeometry::GlyphGeometry(lua_Table * data)
	static osgText::GlyphGeometry* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgText::GlyphGeometry::GlyphGeometry(lua_Table * data) function, expected prototype:\nosgText::GlyphGeometry::GlyphGeometry(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgText_GlyphGeometry(L,NULL);
	}

	// Overload binder for osgText::GlyphGeometry::GlyphGeometry
	static osgText::GlyphGeometry* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function GlyphGeometry, cannot match any of the overloads for function GlyphGeometry:\n  GlyphGeometry()\n  GlyphGeometry(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void osgText::GlyphGeometry::setup(const osgText::Glyph3D * glyph, const osgText::Style * style)
	static int _bind_setup(lua_State *L) {
		if (!_lg_typecheck_setup(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::GlyphGeometry::setup(const osgText::Glyph3D * glyph, const osgText::Style * style) function, expected prototype:\nvoid osgText::GlyphGeometry::setup(const osgText::Glyph3D * glyph, const osgText::Style * style)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgText::Glyph3D* glyph=(Luna< osg::Referenced >::checkSubType< osgText::Glyph3D >(L,2));
		const osgText::Style* style=(Luna< osg::Referenced >::checkSubType< osgText::Style >(L,3));

		osgText::GlyphGeometry* self=Luna< osg::Referenced >::checkSubType< osgText::GlyphGeometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::GlyphGeometry::setup(const osgText::Glyph3D *, const osgText::Style *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setup(glyph, style);

		return 0;
	}

	// bool osgText::GlyphGeometry::match(const osgText::Style * style) const
	static int _bind_match(lua_State *L) {
		if (!_lg_typecheck_match(L)) {
			luaL_error(L, "luna typecheck failed in bool osgText::GlyphGeometry::match(const osgText::Style * style) const function, expected prototype:\nbool osgText::GlyphGeometry::match(const osgText::Style * style) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgText::Style* style=(Luna< osg::Referenced >::checkSubType< osgText::Style >(L,2));

		osgText::GlyphGeometry* self=Luna< osg::Referenced >::checkSubType< osgText::GlyphGeometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgText::GlyphGeometry::match(const osgText::Style *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->match(style);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// osg::Geode * osgText::GlyphGeometry::getGeode() const
	static int _bind_getGeode(lua_State *L) {
		if (!_lg_typecheck_getGeode(L)) {
			luaL_error(L, "luna typecheck failed in osg::Geode * osgText::GlyphGeometry::getGeode() const function, expected prototype:\nosg::Geode * osgText::GlyphGeometry::getGeode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::GlyphGeometry* self=Luna< osg::Referenced >::checkSubType< osgText::GlyphGeometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Geode * osgText::GlyphGeometry::getGeode() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Geode * lret = self->getGeode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geode >::push(L,lret,false);

		return 1;
	}

	// osg::Geometry * osgText::GlyphGeometry::getGeometry() const
	static int _bind_getGeometry(lua_State *L) {
		if (!_lg_typecheck_getGeometry(L)) {
			luaL_error(L, "luna typecheck failed in osg::Geometry * osgText::GlyphGeometry::getGeometry() const function, expected prototype:\nosg::Geometry * osgText::GlyphGeometry::getGeometry() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::GlyphGeometry* self=Luna< osg::Referenced >::checkSubType< osgText::GlyphGeometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Geometry * osgText::GlyphGeometry::getGeometry() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Geometry * lret = self->getGeometry();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geometry >::push(L,lret,false);

		return 1;
	}

	// void osgText::GlyphGeometry::setVertexArray(osg::Vec3Array * va)
	static int _bind_setVertexArray(lua_State *L) {
		if (!_lg_typecheck_setVertexArray(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::GlyphGeometry::setVertexArray(osg::Vec3Array * va) function, expected prototype:\nvoid osgText::GlyphGeometry::setVertexArray(osg::Vec3Array * va)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec3Array* va=(Luna< osg::Referenced >::checkSubType< osg::Vec3Array >(L,2));

		osgText::GlyphGeometry* self=Luna< osg::Referenced >::checkSubType< osgText::GlyphGeometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::GlyphGeometry::setVertexArray(osg::Vec3Array *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setVertexArray(va);

		return 0;
	}

	// osg::Vec3Array * osgText::GlyphGeometry::getVertexArray() const
	static int _bind_getVertexArray(lua_State *L) {
		if (!_lg_typecheck_getVertexArray(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3Array * osgText::GlyphGeometry::getVertexArray() const function, expected prototype:\nosg::Vec3Array * osgText::GlyphGeometry::getVertexArray() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::GlyphGeometry* self=Luna< osg::Referenced >::checkSubType< osgText::GlyphGeometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3Array * osgText::GlyphGeometry::getVertexArray() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec3Array * lret = self->getVertexArray();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3Array >::push(L,lret,false);

		return 1;
	}

	// void osgText::GlyphGeometry::setNormalArray(osg::Vec3Array * na)
	static int _bind_setNormalArray(lua_State *L) {
		if (!_lg_typecheck_setNormalArray(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::GlyphGeometry::setNormalArray(osg::Vec3Array * na) function, expected prototype:\nvoid osgText::GlyphGeometry::setNormalArray(osg::Vec3Array * na)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec3Array* na=(Luna< osg::Referenced >::checkSubType< osg::Vec3Array >(L,2));

		osgText::GlyphGeometry* self=Luna< osg::Referenced >::checkSubType< osgText::GlyphGeometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::GlyphGeometry::setNormalArray(osg::Vec3Array *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setNormalArray(na);

		return 0;
	}

	// osg::Vec3Array * osgText::GlyphGeometry::getNormalArray() const
	static int _bind_getNormalArray(lua_State *L) {
		if (!_lg_typecheck_getNormalArray(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3Array * osgText::GlyphGeometry::getNormalArray() const function, expected prototype:\nosg::Vec3Array * osgText::GlyphGeometry::getNormalArray() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::GlyphGeometry* self=Luna< osg::Referenced >::checkSubType< osgText::GlyphGeometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3Array * osgText::GlyphGeometry::getNormalArray() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec3Array * lret = self->getNormalArray();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3Array >::push(L,lret,false);

		return 1;
	}

	// void osgText::GlyphGeometry::setThreadSafeRefUnref(bool threadSafe)
	static int _bind_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::GlyphGeometry::setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgText::GlyphGeometry::setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgText::GlyphGeometry* self=Luna< osg::Referenced >::checkSubType< osgText::GlyphGeometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::GlyphGeometry::setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osgText::GlyphGeometry::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::GlyphGeometry::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgText::GlyphGeometry::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgText::GlyphGeometry* self=Luna< osg::Referenced >::checkSubType< osgText::GlyphGeometry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::GlyphGeometry::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GlyphGeometry::setThreadSafeRefUnref(threadSafe);

		return 0;
	}


	// Operator binds:

};

osgText::GlyphGeometry* LunaTraits< osgText::GlyphGeometry >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgText_GlyphGeometry::_bind_ctor(L);
}

void LunaTraits< osgText::GlyphGeometry >::_bind_dtor(osgText::GlyphGeometry* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgText::GlyphGeometry >::className[] = "GlyphGeometry";
const char LunaTraits< osgText::GlyphGeometry >::fullName[] = "osgText::GlyphGeometry";
const char LunaTraits< osgText::GlyphGeometry >::moduleName[] = "osgText";
const char* LunaTraits< osgText::GlyphGeometry >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osgText::GlyphGeometry >::hash = 62554922;
const int LunaTraits< osgText::GlyphGeometry >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgText::GlyphGeometry >::methods[] = {
	{"setup", &luna_wrapper_osgText_GlyphGeometry::_bind_setup},
	{"match", &luna_wrapper_osgText_GlyphGeometry::_bind_match},
	{"getGeode", &luna_wrapper_osgText_GlyphGeometry::_bind_getGeode},
	{"getGeometry", &luna_wrapper_osgText_GlyphGeometry::_bind_getGeometry},
	{"setVertexArray", &luna_wrapper_osgText_GlyphGeometry::_bind_setVertexArray},
	{"getVertexArray", &luna_wrapper_osgText_GlyphGeometry::_bind_getVertexArray},
	{"setNormalArray", &luna_wrapper_osgText_GlyphGeometry::_bind_setNormalArray},
	{"getNormalArray", &luna_wrapper_osgText_GlyphGeometry::_bind_getNormalArray},
	{"setThreadSafeRefUnref", &luna_wrapper_osgText_GlyphGeometry::_bind_setThreadSafeRefUnref},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgText_GlyphGeometry::_bind_base_setThreadSafeRefUnref},
	{"fromVoid", &luna_wrapper_osgText_GlyphGeometry::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgText_GlyphGeometry::_bind_asVoid},
	{"getTable", &luna_wrapper_osgText_GlyphGeometry::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgText::GlyphGeometry >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgText_GlyphGeometry::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgText::GlyphGeometry >::enumValues[] = {
	{0,0}
};



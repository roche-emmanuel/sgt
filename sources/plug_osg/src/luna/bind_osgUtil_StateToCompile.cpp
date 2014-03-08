#include <plug_common.h>

#include <luna/wrappers/wrapper_osgUtil_StateToCompile.h>

class luna_wrapper_osgUtil_StateToCompile {
public:
	typedef Luna< osgUtil::StateToCompile > luna_t;

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

		osgUtil::StateToCompile* self= (osgUtil::StateToCompile*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgUtil::StateToCompile >::push(L,self,false);
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
		//osgUtil::StateToCompile* ptr= dynamic_cast< osgUtil::StateToCompile* >(Luna< osg::Referenced >::check(L,1));
		osgUtil::StateToCompile* ptr= luna_caster< osg::Referenced, osgUtil::StateToCompile >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::StateToCompile >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_empty(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_apply_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Geode >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Texture >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDrawablesHandled(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getStatesetsHandled(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDrawables(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTextures(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPrograms(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAssignPBOToImages(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPbo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDrawablesHandled(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76374875) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setStatesetsHandled(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,97002577) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDrawables(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76374875) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTextures(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,55546203) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPrograms(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,89238351) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAssignPBOToImages(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPbo(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,84032264) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
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

	inline static bool _lg_typecheck_base_reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getEyePoint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getViewPoint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getDistanceToEyePoint(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getDistanceFromEyePoint(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getDistanceToViewPoint(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Geode >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Texture >(L,2))) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgUtil::StateToCompile::StateToCompile(unsigned int mode)
	static osgUtil::StateToCompile* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::StateToCompile::StateToCompile(unsigned int mode) function, expected prototype:\nosgUtil::StateToCompile::StateToCompile(unsigned int mode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int mode=(unsigned int)lua_tointeger(L,1);

		return new osgUtil::StateToCompile(mode);
	}

	// osgUtil::StateToCompile::StateToCompile(lua_Table * data, unsigned int mode)
	static osgUtil::StateToCompile* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::StateToCompile::StateToCompile(lua_Table * data, unsigned int mode) function, expected prototype:\nosgUtil::StateToCompile::StateToCompile(lua_Table * data, unsigned int mode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int mode=(unsigned int)lua_tointeger(L,2);

		return new wrapper_osgUtil_StateToCompile(L,NULL, mode);
	}

	// Overload binder for osgUtil::StateToCompile::StateToCompile
	static osgUtil::StateToCompile* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function StateToCompile, cannot match any of the overloads for function StateToCompile:\n  StateToCompile(unsigned int)\n  StateToCompile(lua_Table *, unsigned int)\n");
		return NULL;
	}


	// Function binds:
	// bool osgUtil::StateToCompile::empty() const
	static int _bind_empty(lua_State *L) {
		if (!_lg_typecheck_empty(L)) {
			luaL_error(L, "luna typecheck failed in bool osgUtil::StateToCompile::empty() const function, expected prototype:\nbool osgUtil::StateToCompile::empty() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::StateToCompile* self=Luna< osg::Referenced >::checkSubType< osgUtil::StateToCompile >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgUtil::StateToCompile::empty() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->empty();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgUtil::StateToCompile::apply(osg::Node & node)
	static int _bind_apply_overload_1(lua_State *L) {
		if (!_lg_typecheck_apply_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::StateToCompile::apply(osg::Node & node) function, expected prototype:\nvoid osgUtil::StateToCompile::apply(osg::Node & node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::StateToCompile::apply function");
		}
		osg::Node & node=*node_ptr;

		osgUtil::StateToCompile* self=Luna< osg::Referenced >::checkSubType< osgUtil::StateToCompile >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::StateToCompile::apply(osg::Node &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(node);

		return 0;
	}

	// void osgUtil::StateToCompile::apply(osg::Geode & node)
	static int _bind_apply_overload_2(lua_State *L) {
		if (!_lg_typecheck_apply_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::StateToCompile::apply(osg::Geode & node) function, expected prototype:\nvoid osgUtil::StateToCompile::apply(osg::Geode & node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Geode* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Geode >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::StateToCompile::apply function");
		}
		osg::Geode & node=*node_ptr;

		osgUtil::StateToCompile* self=Luna< osg::Referenced >::checkSubType< osgUtil::StateToCompile >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::StateToCompile::apply(osg::Geode &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(node);

		return 0;
	}

	// void osgUtil::StateToCompile::apply(osg::Drawable & drawable)
	static int _bind_apply_overload_3(lua_State *L) {
		if (!_lg_typecheck_apply_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::StateToCompile::apply(osg::Drawable & drawable) function, expected prototype:\nvoid osgUtil::StateToCompile::apply(osg::Drawable & drawable)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Drawable* drawable_ptr=(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,2));
		if( !drawable_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg drawable in osgUtil::StateToCompile::apply function");
		}
		osg::Drawable & drawable=*drawable_ptr;

		osgUtil::StateToCompile* self=Luna< osg::Referenced >::checkSubType< osgUtil::StateToCompile >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::StateToCompile::apply(osg::Drawable &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(drawable);

		return 0;
	}

	// void osgUtil::StateToCompile::apply(osg::StateSet & stateset)
	static int _bind_apply_overload_4(lua_State *L) {
		if (!_lg_typecheck_apply_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::StateToCompile::apply(osg::StateSet & stateset) function, expected prototype:\nvoid osgUtil::StateToCompile::apply(osg::StateSet & stateset)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StateSet* stateset_ptr=(Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,2));
		if( !stateset_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg stateset in osgUtil::StateToCompile::apply function");
		}
		osg::StateSet & stateset=*stateset_ptr;

		osgUtil::StateToCompile* self=Luna< osg::Referenced >::checkSubType< osgUtil::StateToCompile >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::StateToCompile::apply(osg::StateSet &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(stateset);

		return 0;
	}

	// void osgUtil::StateToCompile::apply(osg::Texture & texture)
	static int _bind_apply_overload_5(lua_State *L) {
		if (!_lg_typecheck_apply_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::StateToCompile::apply(osg::Texture & texture) function, expected prototype:\nvoid osgUtil::StateToCompile::apply(osg::Texture & texture)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Texture* texture_ptr=(Luna< osg::Referenced >::checkSubType< osg::Texture >(L,2));
		if( !texture_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg texture in osgUtil::StateToCompile::apply function");
		}
		osg::Texture & texture=*texture_ptr;

		osgUtil::StateToCompile* self=Luna< osg::Referenced >::checkSubType< osgUtil::StateToCompile >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::StateToCompile::apply(osg::Texture &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(texture);

		return 0;
	}

	// Overload binder for osgUtil::StateToCompile::apply
	static int _bind_apply(lua_State *L) {
		if (_lg_typecheck_apply_overload_1(L)) return _bind_apply_overload_1(L);
		if (_lg_typecheck_apply_overload_2(L)) return _bind_apply_overload_2(L);
		if (_lg_typecheck_apply_overload_3(L)) return _bind_apply_overload_3(L);
		if (_lg_typecheck_apply_overload_4(L)) return _bind_apply_overload_4(L);
		if (_lg_typecheck_apply_overload_5(L)) return _bind_apply_overload_5(L);

		luaL_error(L, "error in function apply, cannot match any of the overloads for function apply:\n  apply(osg::Node &)\n  apply(osg::Geode &)\n  apply(osg::Drawable &)\n  apply(osg::StateSet &)\n  apply(osg::Texture &)\n");
		return 0;
	}

	// osgUtil::StateToCompile::DrawableSet osgUtil::StateToCompile::_drawablesHandled()
	static int _bind_getDrawablesHandled(lua_State *L) {
		if (!_lg_typecheck_getDrawablesHandled(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::StateToCompile::DrawableSet osgUtil::StateToCompile::_drawablesHandled() function, expected prototype:\nosgUtil::StateToCompile::DrawableSet osgUtil::StateToCompile::_drawablesHandled()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::StateToCompile* self=Luna< osg::Referenced >::checkSubType< osgUtil::StateToCompile >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgUtil::StateToCompile::DrawableSet osgUtil::StateToCompile::_drawablesHandled(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgUtil::StateToCompile::DrawableSet* lret = &self->_drawablesHandled;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::StateToCompile::DrawableSet >::push(L,lret,false);

		return 1;
	}

	// osgUtil::StateToCompile::StateSetSet osgUtil::StateToCompile::_statesetsHandled()
	static int _bind_getStatesetsHandled(lua_State *L) {
		if (!_lg_typecheck_getStatesetsHandled(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::StateToCompile::StateSetSet osgUtil::StateToCompile::_statesetsHandled() function, expected prototype:\nosgUtil::StateToCompile::StateSetSet osgUtil::StateToCompile::_statesetsHandled()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::StateToCompile* self=Luna< osg::Referenced >::checkSubType< osgUtil::StateToCompile >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgUtil::StateToCompile::StateSetSet osgUtil::StateToCompile::_statesetsHandled(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgUtil::StateToCompile::StateSetSet* lret = &self->_statesetsHandled;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::StateToCompile::StateSetSet >::push(L,lret,false);

		return 1;
	}

	// unsigned int osgUtil::StateToCompile::_mode()
	static int _bind_getMode(lua_State *L) {
		if (!_lg_typecheck_getMode(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osgUtil::StateToCompile::_mode() function, expected prototype:\nunsigned int osgUtil::StateToCompile::_mode()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::StateToCompile* self=Luna< osg::Referenced >::checkSubType< osgUtil::StateToCompile >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osgUtil::StateToCompile::_mode(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->_mode;
		lua_pushnumber(L,lret);

		return 1;
	}

	// osgUtil::StateToCompile::DrawableSet osgUtil::StateToCompile::_drawables()
	static int _bind_getDrawables(lua_State *L) {
		if (!_lg_typecheck_getDrawables(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::StateToCompile::DrawableSet osgUtil::StateToCompile::_drawables() function, expected prototype:\nosgUtil::StateToCompile::DrawableSet osgUtil::StateToCompile::_drawables()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::StateToCompile* self=Luna< osg::Referenced >::checkSubType< osgUtil::StateToCompile >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgUtil::StateToCompile::DrawableSet osgUtil::StateToCompile::_drawables(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgUtil::StateToCompile::DrawableSet* lret = &self->_drawables;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::StateToCompile::DrawableSet >::push(L,lret,false);

		return 1;
	}

	// osgUtil::StateToCompile::TextureSet osgUtil::StateToCompile::_textures()
	static int _bind_getTextures(lua_State *L) {
		if (!_lg_typecheck_getTextures(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::StateToCompile::TextureSet osgUtil::StateToCompile::_textures() function, expected prototype:\nosgUtil::StateToCompile::TextureSet osgUtil::StateToCompile::_textures()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::StateToCompile* self=Luna< osg::Referenced >::checkSubType< osgUtil::StateToCompile >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgUtil::StateToCompile::TextureSet osgUtil::StateToCompile::_textures(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgUtil::StateToCompile::TextureSet* lret = &self->_textures;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::StateToCompile::TextureSet >::push(L,lret,false);

		return 1;
	}

	// osgUtil::StateToCompile::ProgramSet osgUtil::StateToCompile::_programs()
	static int _bind_getPrograms(lua_State *L) {
		if (!_lg_typecheck_getPrograms(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::StateToCompile::ProgramSet osgUtil::StateToCompile::_programs() function, expected prototype:\nosgUtil::StateToCompile::ProgramSet osgUtil::StateToCompile::_programs()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::StateToCompile* self=Luna< osg::Referenced >::checkSubType< osgUtil::StateToCompile >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgUtil::StateToCompile::ProgramSet osgUtil::StateToCompile::_programs(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgUtil::StateToCompile::ProgramSet* lret = &self->_programs;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::StateToCompile::ProgramSet >::push(L,lret,false);

		return 1;
	}

	// bool osgUtil::StateToCompile::_assignPBOToImages()
	static int _bind_getAssignPBOToImages(lua_State *L) {
		if (!_lg_typecheck_getAssignPBOToImages(L)) {
			luaL_error(L, "luna typecheck failed in bool osgUtil::StateToCompile::_assignPBOToImages() function, expected prototype:\nbool osgUtil::StateToCompile::_assignPBOToImages()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::StateToCompile* self=Luna< osg::Referenced >::checkSubType< osgUtil::StateToCompile >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgUtil::StateToCompile::_assignPBOToImages(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->_assignPBOToImages;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// osg::ref_ptr< osg::PixelBufferObject > osgUtil::StateToCompile::_pbo()
	static int _bind_getPbo(lua_State *L) {
		if (!_lg_typecheck_getPbo(L)) {
			luaL_error(L, "luna typecheck failed in osg::ref_ptr< osg::PixelBufferObject > osgUtil::StateToCompile::_pbo() function, expected prototype:\nosg::ref_ptr< osg::PixelBufferObject > osgUtil::StateToCompile::_pbo()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::StateToCompile* self=Luna< osg::Referenced >::checkSubType< osgUtil::StateToCompile >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::ref_ptr< osg::PixelBufferObject > osgUtil::StateToCompile::_pbo(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::ref_ptr< osg::PixelBufferObject > lret = self->_pbo;
		Luna< osg::PixelBufferObject >::push(L,lret.get(),false);

		return 1;
	}

	// void osgUtil::StateToCompile::_drawablesHandled(osgUtil::StateToCompile::DrawableSet value)
	static int _bind_setDrawablesHandled(lua_State *L) {
		if (!_lg_typecheck_setDrawablesHandled(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::StateToCompile::_drawablesHandled(osgUtil::StateToCompile::DrawableSet value) function, expected prototype:\nvoid osgUtil::StateToCompile::_drawablesHandled(osgUtil::StateToCompile::DrawableSet value)\nClass arguments details:\narg 1 ID = 70884799\n\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::StateToCompile::DrawableSet* value_ptr=(Luna< std::set< osg::Drawable * > >::checkSubType< osgUtil::StateToCompile::DrawableSet >(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgUtil::StateToCompile::_drawablesHandled function");
		}
		osgUtil::StateToCompile::DrawableSet value=*value_ptr;

		osgUtil::StateToCompile* self=Luna< osg::Referenced >::checkSubType< osgUtil::StateToCompile >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::StateToCompile::_drawablesHandled(osgUtil::StateToCompile::DrawableSet). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_drawablesHandled = value;

		return 0;
	}

	// void osgUtil::StateToCompile::_statesetsHandled(osgUtil::StateToCompile::StateSetSet value)
	static int _bind_setStatesetsHandled(lua_State *L) {
		if (!_lg_typecheck_setStatesetsHandled(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::StateToCompile::_statesetsHandled(osgUtil::StateToCompile::StateSetSet value) function, expected prototype:\nvoid osgUtil::StateToCompile::_statesetsHandled(osgUtil::StateToCompile::StateSetSet value)\nClass arguments details:\narg 1 ID = 88961844\n\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::StateToCompile::StateSetSet* value_ptr=(Luna< std::set< osg::StateSet * > >::checkSubType< osgUtil::StateToCompile::StateSetSet >(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgUtil::StateToCompile::_statesetsHandled function");
		}
		osgUtil::StateToCompile::StateSetSet value=*value_ptr;

		osgUtil::StateToCompile* self=Luna< osg::Referenced >::checkSubType< osgUtil::StateToCompile >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::StateToCompile::_statesetsHandled(osgUtil::StateToCompile::StateSetSet). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_statesetsHandled = value;

		return 0;
	}

	// void osgUtil::StateToCompile::_mode(unsigned int value)
	static int _bind_setMode(lua_State *L) {
		if (!_lg_typecheck_setMode(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::StateToCompile::_mode(unsigned int value) function, expected prototype:\nvoid osgUtil::StateToCompile::_mode(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osgUtil::StateToCompile* self=Luna< osg::Referenced >::checkSubType< osgUtil::StateToCompile >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::StateToCompile::_mode(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_mode = value;

		return 0;
	}

	// void osgUtil::StateToCompile::_drawables(osgUtil::StateToCompile::DrawableSet value)
	static int _bind_setDrawables(lua_State *L) {
		if (!_lg_typecheck_setDrawables(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::StateToCompile::_drawables(osgUtil::StateToCompile::DrawableSet value) function, expected prototype:\nvoid osgUtil::StateToCompile::_drawables(osgUtil::StateToCompile::DrawableSet value)\nClass arguments details:\narg 1 ID = 70884799\n\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::StateToCompile::DrawableSet* value_ptr=(Luna< std::set< osg::Drawable * > >::checkSubType< osgUtil::StateToCompile::DrawableSet >(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgUtil::StateToCompile::_drawables function");
		}
		osgUtil::StateToCompile::DrawableSet value=*value_ptr;

		osgUtil::StateToCompile* self=Luna< osg::Referenced >::checkSubType< osgUtil::StateToCompile >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::StateToCompile::_drawables(osgUtil::StateToCompile::DrawableSet). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_drawables = value;

		return 0;
	}

	// void osgUtil::StateToCompile::_textures(osgUtil::StateToCompile::TextureSet value)
	static int _bind_setTextures(lua_State *L) {
		if (!_lg_typecheck_setTextures(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::StateToCompile::_textures(osgUtil::StateToCompile::TextureSet value) function, expected prototype:\nvoid osgUtil::StateToCompile::_textures(osgUtil::StateToCompile::TextureSet value)\nClass arguments details:\narg 1 ID = 41341545\n\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::StateToCompile::TextureSet* value_ptr=(Luna< std::set< osg::Texture * > >::checkSubType< osgUtil::StateToCompile::TextureSet >(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgUtil::StateToCompile::_textures function");
		}
		osgUtil::StateToCompile::TextureSet value=*value_ptr;

		osgUtil::StateToCompile* self=Luna< osg::Referenced >::checkSubType< osgUtil::StateToCompile >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::StateToCompile::_textures(osgUtil::StateToCompile::TextureSet). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_textures = value;

		return 0;
	}

	// void osgUtil::StateToCompile::_programs(osgUtil::StateToCompile::ProgramSet value)
	static int _bind_setPrograms(lua_State *L) {
		if (!_lg_typecheck_setPrograms(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::StateToCompile::_programs(osgUtil::StateToCompile::ProgramSet value) function, expected prototype:\nvoid osgUtil::StateToCompile::_programs(osgUtil::StateToCompile::ProgramSet value)\nClass arguments details:\narg 1 ID = 13242464\n\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::StateToCompile::ProgramSet* value_ptr=(Luna< std::set< osg::Program * > >::checkSubType< osgUtil::StateToCompile::ProgramSet >(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgUtil::StateToCompile::_programs function");
		}
		osgUtil::StateToCompile::ProgramSet value=*value_ptr;

		osgUtil::StateToCompile* self=Luna< osg::Referenced >::checkSubType< osgUtil::StateToCompile >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::StateToCompile::_programs(osgUtil::StateToCompile::ProgramSet). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_programs = value;

		return 0;
	}

	// void osgUtil::StateToCompile::_assignPBOToImages(bool value)
	static int _bind_setAssignPBOToImages(lua_State *L) {
		if (!_lg_typecheck_setAssignPBOToImages(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::StateToCompile::_assignPBOToImages(bool value) function, expected prototype:\nvoid osgUtil::StateToCompile::_assignPBOToImages(bool value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		osgUtil::StateToCompile* self=Luna< osg::Referenced >::checkSubType< osgUtil::StateToCompile >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::StateToCompile::_assignPBOToImages(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_assignPBOToImages = value;

		return 0;
	}

	// void osgUtil::StateToCompile::_pbo(osg::ref_ptr< osg::PixelBufferObject > value)
	static int _bind_setPbo(lua_State *L) {
		if (!_lg_typecheck_setPbo(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::StateToCompile::_pbo(osg::ref_ptr< osg::PixelBufferObject > value) function, expected prototype:\nvoid osgUtil::StateToCompile::_pbo(osg::ref_ptr< osg::PixelBufferObject > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ref_ptr< osg::PixelBufferObject > value = dynamic_cast< osg::PixelBufferObject* >(Luna< osg::Referenced >::check(L,2));

		osgUtil::StateToCompile* self=Luna< osg::Referenced >::checkSubType< osgUtil::StateToCompile >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::StateToCompile::_pbo(osg::ref_ptr< osg::PixelBufferObject >). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_pbo = value;

		return 0;
	}

	// void osgUtil::StateToCompile::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::StateToCompile::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgUtil::StateToCompile::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgUtil::StateToCompile* self=Luna< osg::Referenced >::checkSubType< osgUtil::StateToCompile >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::StateToCompile::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->StateToCompile::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// const char * osgUtil::StateToCompile::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgUtil::StateToCompile::base_libraryName() const function, expected prototype:\nconst char * osgUtil::StateToCompile::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::StateToCompile* self=Luna< osg::Referenced >::checkSubType< osgUtil::StateToCompile >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgUtil::StateToCompile::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->StateToCompile::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgUtil::StateToCompile::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgUtil::StateToCompile::base_className() const function, expected prototype:\nconst char * osgUtil::StateToCompile::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::StateToCompile* self=Luna< osg::Referenced >::checkSubType< osgUtil::StateToCompile >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgUtil::StateToCompile::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->StateToCompile::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgUtil::StateToCompile::base_reset()
	static int _bind_base_reset(lua_State *L) {
		if (!_lg_typecheck_base_reset(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::StateToCompile::base_reset() function, expected prototype:\nvoid osgUtil::StateToCompile::base_reset()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::StateToCompile* self=Luna< osg::Referenced >::checkSubType< osgUtil::StateToCompile >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::StateToCompile::base_reset(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->StateToCompile::reset();

		return 0;
	}

	// osg::Vec3f osgUtil::StateToCompile::base_getEyePoint() const
	static int _bind_base_getEyePoint(lua_State *L) {
		if (!_lg_typecheck_base_getEyePoint(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3f osgUtil::StateToCompile::base_getEyePoint() const function, expected prototype:\nosg::Vec3f osgUtil::StateToCompile::base_getEyePoint() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::StateToCompile* self=Luna< osg::Referenced >::checkSubType< osgUtil::StateToCompile >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3f osgUtil::StateToCompile::base_getEyePoint() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec3f stack_lret = self->StateToCompile::getEyePoint();
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// osg::Vec3f osgUtil::StateToCompile::base_getViewPoint() const
	static int _bind_base_getViewPoint(lua_State *L) {
		if (!_lg_typecheck_base_getViewPoint(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3f osgUtil::StateToCompile::base_getViewPoint() const function, expected prototype:\nosg::Vec3f osgUtil::StateToCompile::base_getViewPoint() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::StateToCompile* self=Luna< osg::Referenced >::checkSubType< osgUtil::StateToCompile >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3f osgUtil::StateToCompile::base_getViewPoint() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec3f stack_lret = self->StateToCompile::getViewPoint();
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// float osgUtil::StateToCompile::base_getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const
	static int _bind_base_getDistanceToEyePoint(lua_State *L) {
		if (!_lg_typecheck_base_getDistanceToEyePoint(L)) {
			luaL_error(L, "luna typecheck failed in float osgUtil::StateToCompile::base_getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const function, expected prototype:\nfloat osgUtil::StateToCompile::base_getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgUtil::StateToCompile::base_getDistanceToEyePoint function");
		}
		const osg::Vec3f & _arg1=*_arg1_ptr;
		bool _arg2=(bool)(lua_toboolean(L,3)==1);

		osgUtil::StateToCompile* self=Luna< osg::Referenced >::checkSubType< osgUtil::StateToCompile >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgUtil::StateToCompile::base_getDistanceToEyePoint(const osg::Vec3f &, bool) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->StateToCompile::getDistanceToEyePoint(_arg1, _arg2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osgUtil::StateToCompile::base_getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const
	static int _bind_base_getDistanceFromEyePoint(lua_State *L) {
		if (!_lg_typecheck_base_getDistanceFromEyePoint(L)) {
			luaL_error(L, "luna typecheck failed in float osgUtil::StateToCompile::base_getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const function, expected prototype:\nfloat osgUtil::StateToCompile::base_getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgUtil::StateToCompile::base_getDistanceFromEyePoint function");
		}
		const osg::Vec3f & _arg1=*_arg1_ptr;
		bool _arg2=(bool)(lua_toboolean(L,3)==1);

		osgUtil::StateToCompile* self=Luna< osg::Referenced >::checkSubType< osgUtil::StateToCompile >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgUtil::StateToCompile::base_getDistanceFromEyePoint(const osg::Vec3f &, bool) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->StateToCompile::getDistanceFromEyePoint(_arg1, _arg2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osgUtil::StateToCompile::base_getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const
	static int _bind_base_getDistanceToViewPoint(lua_State *L) {
		if (!_lg_typecheck_base_getDistanceToViewPoint(L)) {
			luaL_error(L, "luna typecheck failed in float osgUtil::StateToCompile::base_getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const function, expected prototype:\nfloat osgUtil::StateToCompile::base_getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgUtil::StateToCompile::base_getDistanceToViewPoint function");
		}
		const osg::Vec3f & _arg1=*_arg1_ptr;
		bool _arg2=(bool)(lua_toboolean(L,3)==1);

		osgUtil::StateToCompile* self=Luna< osg::Referenced >::checkSubType< osgUtil::StateToCompile >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgUtil::StateToCompile::base_getDistanceToViewPoint(const osg::Vec3f &, bool) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->StateToCompile::getDistanceToViewPoint(_arg1, _arg2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgUtil::StateToCompile::base_apply(osg::Node & node)
	static int _bind_base_apply_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::StateToCompile::base_apply(osg::Node & node) function, expected prototype:\nvoid osgUtil::StateToCompile::base_apply(osg::Node & node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::StateToCompile::base_apply function");
		}
		osg::Node & node=*node_ptr;

		osgUtil::StateToCompile* self=Luna< osg::Referenced >::checkSubType< osgUtil::StateToCompile >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::StateToCompile::base_apply(osg::Node &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->StateToCompile::apply(node);

		return 0;
	}

	// void osgUtil::StateToCompile::base_apply(osg::Geode & node)
	static int _bind_base_apply_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::StateToCompile::base_apply(osg::Geode & node) function, expected prototype:\nvoid osgUtil::StateToCompile::base_apply(osg::Geode & node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Geode* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Geode >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::StateToCompile::base_apply function");
		}
		osg::Geode & node=*node_ptr;

		osgUtil::StateToCompile* self=Luna< osg::Referenced >::checkSubType< osgUtil::StateToCompile >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::StateToCompile::base_apply(osg::Geode &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->StateToCompile::apply(node);

		return 0;
	}

	// void osgUtil::StateToCompile::base_apply(osg::Drawable & drawable)
	static int _bind_base_apply_overload_3(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::StateToCompile::base_apply(osg::Drawable & drawable) function, expected prototype:\nvoid osgUtil::StateToCompile::base_apply(osg::Drawable & drawable)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Drawable* drawable_ptr=(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,2));
		if( !drawable_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg drawable in osgUtil::StateToCompile::base_apply function");
		}
		osg::Drawable & drawable=*drawable_ptr;

		osgUtil::StateToCompile* self=Luna< osg::Referenced >::checkSubType< osgUtil::StateToCompile >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::StateToCompile::base_apply(osg::Drawable &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->StateToCompile::apply(drawable);

		return 0;
	}

	// void osgUtil::StateToCompile::base_apply(osg::StateSet & stateset)
	static int _bind_base_apply_overload_4(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::StateToCompile::base_apply(osg::StateSet & stateset) function, expected prototype:\nvoid osgUtil::StateToCompile::base_apply(osg::StateSet & stateset)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StateSet* stateset_ptr=(Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,2));
		if( !stateset_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg stateset in osgUtil::StateToCompile::base_apply function");
		}
		osg::StateSet & stateset=*stateset_ptr;

		osgUtil::StateToCompile* self=Luna< osg::Referenced >::checkSubType< osgUtil::StateToCompile >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::StateToCompile::base_apply(osg::StateSet &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->StateToCompile::apply(stateset);

		return 0;
	}

	// void osgUtil::StateToCompile::base_apply(osg::Texture & texture)
	static int _bind_base_apply_overload_5(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::StateToCompile::base_apply(osg::Texture & texture) function, expected prototype:\nvoid osgUtil::StateToCompile::base_apply(osg::Texture & texture)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Texture* texture_ptr=(Luna< osg::Referenced >::checkSubType< osg::Texture >(L,2));
		if( !texture_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg texture in osgUtil::StateToCompile::base_apply function");
		}
		osg::Texture & texture=*texture_ptr;

		osgUtil::StateToCompile* self=Luna< osg::Referenced >::checkSubType< osgUtil::StateToCompile >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::StateToCompile::base_apply(osg::Texture &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->StateToCompile::apply(texture);

		return 0;
	}

	// Overload binder for osgUtil::StateToCompile::base_apply
	static int _bind_base_apply(lua_State *L) {
		if (_lg_typecheck_base_apply_overload_1(L)) return _bind_base_apply_overload_1(L);
		if (_lg_typecheck_base_apply_overload_2(L)) return _bind_base_apply_overload_2(L);
		if (_lg_typecheck_base_apply_overload_3(L)) return _bind_base_apply_overload_3(L);
		if (_lg_typecheck_base_apply_overload_4(L)) return _bind_base_apply_overload_4(L);
		if (_lg_typecheck_base_apply_overload_5(L)) return _bind_base_apply_overload_5(L);

		luaL_error(L, "error in function base_apply, cannot match any of the overloads for function base_apply:\n  base_apply(osg::Node &)\n  base_apply(osg::Geode &)\n  base_apply(osg::Drawable &)\n  base_apply(osg::StateSet &)\n  base_apply(osg::Texture &)\n");
		return 0;
	}


	// Operator binds:

};

osgUtil::StateToCompile* LunaTraits< osgUtil::StateToCompile >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_StateToCompile::_bind_ctor(L);
}

void LunaTraits< osgUtil::StateToCompile >::_bind_dtor(osgUtil::StateToCompile* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::StateToCompile >::className[] = "StateToCompile";
const char LunaTraits< osgUtil::StateToCompile >::fullName[] = "osgUtil::StateToCompile";
const char LunaTraits< osgUtil::StateToCompile >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::StateToCompile >::parents[] = {"osg.NodeVisitor", 0};
const int LunaTraits< osgUtil::StateToCompile >::hash = 49506188;
const int LunaTraits< osgUtil::StateToCompile >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::StateToCompile >::methods[] = {
	{"empty", &luna_wrapper_osgUtil_StateToCompile::_bind_empty},
	{"apply", &luna_wrapper_osgUtil_StateToCompile::_bind_apply},
	{"getDrawablesHandled", &luna_wrapper_osgUtil_StateToCompile::_bind_getDrawablesHandled},
	{"getStatesetsHandled", &luna_wrapper_osgUtil_StateToCompile::_bind_getStatesetsHandled},
	{"getMode", &luna_wrapper_osgUtil_StateToCompile::_bind_getMode},
	{"getDrawables", &luna_wrapper_osgUtil_StateToCompile::_bind_getDrawables},
	{"getTextures", &luna_wrapper_osgUtil_StateToCompile::_bind_getTextures},
	{"getPrograms", &luna_wrapper_osgUtil_StateToCompile::_bind_getPrograms},
	{"getAssignPBOToImages", &luna_wrapper_osgUtil_StateToCompile::_bind_getAssignPBOToImages},
	{"getPbo", &luna_wrapper_osgUtil_StateToCompile::_bind_getPbo},
	{"setDrawablesHandled", &luna_wrapper_osgUtil_StateToCompile::_bind_setDrawablesHandled},
	{"setStatesetsHandled", &luna_wrapper_osgUtil_StateToCompile::_bind_setStatesetsHandled},
	{"setMode", &luna_wrapper_osgUtil_StateToCompile::_bind_setMode},
	{"setDrawables", &luna_wrapper_osgUtil_StateToCompile::_bind_setDrawables},
	{"setTextures", &luna_wrapper_osgUtil_StateToCompile::_bind_setTextures},
	{"setPrograms", &luna_wrapper_osgUtil_StateToCompile::_bind_setPrograms},
	{"setAssignPBOToImages", &luna_wrapper_osgUtil_StateToCompile::_bind_setAssignPBOToImages},
	{"setPbo", &luna_wrapper_osgUtil_StateToCompile::_bind_setPbo},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgUtil_StateToCompile::_bind_base_setThreadSafeRefUnref},
	{"base_libraryName", &luna_wrapper_osgUtil_StateToCompile::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osgUtil_StateToCompile::_bind_base_className},
	{"base_reset", &luna_wrapper_osgUtil_StateToCompile::_bind_base_reset},
	{"base_getEyePoint", &luna_wrapper_osgUtil_StateToCompile::_bind_base_getEyePoint},
	{"base_getViewPoint", &luna_wrapper_osgUtil_StateToCompile::_bind_base_getViewPoint},
	{"base_getDistanceToEyePoint", &luna_wrapper_osgUtil_StateToCompile::_bind_base_getDistanceToEyePoint},
	{"base_getDistanceFromEyePoint", &luna_wrapper_osgUtil_StateToCompile::_bind_base_getDistanceFromEyePoint},
	{"base_getDistanceToViewPoint", &luna_wrapper_osgUtil_StateToCompile::_bind_base_getDistanceToViewPoint},
	{"base_apply", &luna_wrapper_osgUtil_StateToCompile::_bind_base_apply},
	{"fromVoid", &luna_wrapper_osgUtil_StateToCompile::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgUtil_StateToCompile::_bind_asVoid},
	{"getTable", &luna_wrapper_osgUtil_StateToCompile::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::StateToCompile >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_StateToCompile::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::StateToCompile >::enumValues[] = {
	{0,0}
};



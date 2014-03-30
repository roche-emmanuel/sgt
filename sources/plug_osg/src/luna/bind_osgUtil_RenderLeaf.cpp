#include <plug_common.h>

#include <luna/wrappers/wrapper_osgUtil_RenderLeaf.h>

class luna_wrapper_osgUtil_RenderLeaf {
public:
	typedef Luna< osgUtil::RenderLeaf > luna_t;

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

		osgUtil::RenderLeaf* self= (osgUtil::RenderLeaf*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgUtil::RenderLeaf >::push(L,self,false);
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
		//osgUtil::RenderLeaf* ptr= dynamic_cast< osgUtil::RenderLeaf* >(Luna< osg::Referenced >::check(L,1));
		osgUtil::RenderLeaf* ptr= luna_caster< osg::Referenced, osgUtil::RenderLeaf >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::RenderLeaf >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,1)) ) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::RefMatrixd >(L,2)) ) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< osg::Referenced >::checkSubType< osg::RefMatrixd >(L,3)) ) ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>6 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,2)) ) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< osg::Referenced >::checkSubType< osg::RefMatrixd >(L,3)) ) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		if( (lua_isnil(L,4)==0 && !(Luna< osg::Referenced >::checkSubType< osg::RefMatrixd >(L,4)) ) ) return false;
		if( luatop>4 && lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( luatop>5 && (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_set(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>6 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		if( luatop>4 && lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( luatop>5 && (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_render(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2286263) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDrawable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getParent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getProjection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getModelview(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDepth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDynamic(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTraversalNumber(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setParent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDrawable(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91334477) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setProjection(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,24622227) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setModelview(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,24622227) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDepth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDynamic(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTraversalNumber(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_render(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2286263) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgUtil::RenderLeaf::RenderLeaf(osg::Drawable * drawable, osg::RefMatrixd * projection, osg::RefMatrixd * modelview, float depth = 0.0f, unsigned int traversalNumber = 0)
	static osgUtil::RenderLeaf* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::RenderLeaf::RenderLeaf(osg::Drawable * drawable, osg::RefMatrixd * projection, osg::RefMatrixd * modelview, float depth = 0.0f, unsigned int traversalNumber = 0) function, expected prototype:\nosgUtil::RenderLeaf::RenderLeaf(osg::Drawable * drawable, osg::RefMatrixd * projection, osg::RefMatrixd * modelview, float depth = 0.0f, unsigned int traversalNumber = 0)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::Drawable* drawable=(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,1));
		osg::RefMatrixd* projection=(Luna< osg::Referenced >::checkSubType< osg::RefMatrixd >(L,2));
		osg::RefMatrixd* modelview=(Luna< osg::Referenced >::checkSubType< osg::RefMatrixd >(L,3));
		float depth=luatop>3 ? (float)lua_tonumber(L,4) : (float)0.0f;
		unsigned int traversalNumber=luatop>4 ? (unsigned int)lua_tointeger(L,5) : (unsigned int)0;

		return new osgUtil::RenderLeaf(drawable, projection, modelview, depth, traversalNumber);
	}

	// osgUtil::RenderLeaf::RenderLeaf(lua_Table * data, osg::Drawable * drawable, osg::RefMatrixd * projection, osg::RefMatrixd * modelview, float depth = 0.0f, unsigned int traversalNumber = 0)
	static osgUtil::RenderLeaf* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::RenderLeaf::RenderLeaf(lua_Table * data, osg::Drawable * drawable, osg::RefMatrixd * projection, osg::RefMatrixd * modelview, float depth = 0.0f, unsigned int traversalNumber = 0) function, expected prototype:\nosgUtil::RenderLeaf::RenderLeaf(lua_Table * data, osg::Drawable * drawable, osg::RefMatrixd * projection, osg::RefMatrixd * modelview, float depth = 0.0f, unsigned int traversalNumber = 0)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 50169651\narg 4 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::Drawable* drawable=(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,2));
		osg::RefMatrixd* projection=(Luna< osg::Referenced >::checkSubType< osg::RefMatrixd >(L,3));
		osg::RefMatrixd* modelview=(Luna< osg::Referenced >::checkSubType< osg::RefMatrixd >(L,4));
		float depth=luatop>4 ? (float)lua_tonumber(L,5) : (float)0.0f;
		unsigned int traversalNumber=luatop>5 ? (unsigned int)lua_tointeger(L,6) : (unsigned int)0;

		return new wrapper_osgUtil_RenderLeaf(L,NULL, drawable, projection, modelview, depth, traversalNumber);
	}

	// Overload binder for osgUtil::RenderLeaf::RenderLeaf
	static osgUtil::RenderLeaf* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function RenderLeaf, cannot match any of the overloads for function RenderLeaf:\n  RenderLeaf(osg::Drawable *, osg::RefMatrixd *, osg::RefMatrixd *, float, unsigned int)\n  RenderLeaf(lua_Table *, osg::Drawable *, osg::RefMatrixd *, osg::RefMatrixd *, float, unsigned int)\n");
		return NULL;
	}


	// Function binds:
	// void osgUtil::RenderLeaf::set(osg::Drawable * drawable, osg::RefMatrixd * projection, osg::RefMatrixd * modelview, float depth = 0.0f, unsigned int traversalNumber = 0)
	static int _bind_set(lua_State *L) {
		if (!_lg_typecheck_set(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderLeaf::set(osg::Drawable * drawable, osg::RefMatrixd * projection, osg::RefMatrixd * modelview, float depth = 0.0f, unsigned int traversalNumber = 0) function, expected prototype:\nvoid osgUtil::RenderLeaf::set(osg::Drawable * drawable, osg::RefMatrixd * projection, osg::RefMatrixd * modelview, float depth = 0.0f, unsigned int traversalNumber = 0)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::Drawable* drawable=(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,2));
		osg::RefMatrixd* projection=(Luna< osg::Referenced >::checkSubType< osg::RefMatrixd >(L,3));
		osg::RefMatrixd* modelview=(Luna< osg::Referenced >::checkSubType< osg::RefMatrixd >(L,4));
		float depth=luatop>4 ? (float)lua_tonumber(L,5) : (float)0.0f;
		unsigned int traversalNumber=luatop>5 ? (unsigned int)lua_tointeger(L,6) : (unsigned int)0;

		osgUtil::RenderLeaf* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderLeaf >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::RenderLeaf::set(osg::Drawable *, osg::RefMatrixd *, osg::RefMatrixd *, float, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set(drawable, projection, modelview, depth, traversalNumber);

		return 0;
	}

	// void osgUtil::RenderLeaf::reset()
	static int _bind_reset(lua_State *L) {
		if (!_lg_typecheck_reset(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderLeaf::reset() function, expected prototype:\nvoid osgUtil::RenderLeaf::reset()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::RenderLeaf* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderLeaf >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::RenderLeaf::reset(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->reset();

		return 0;
	}

	// void osgUtil::RenderLeaf::render(osg::RenderInfo & renderInfo, osgUtil::RenderLeaf * previous)
	static int _bind_render(lua_State *L) {
		if (!_lg_typecheck_render(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderLeaf::render(osg::RenderInfo & renderInfo, osgUtil::RenderLeaf * previous) function, expected prototype:\nvoid osgUtil::RenderLeaf::render(osg::RenderInfo & renderInfo, osgUtil::RenderLeaf * previous)\nClass arguments details:\narg 1 ID = 2286263\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::RenderInfo* renderInfo_ptr=(Luna< osg::RenderInfo >::check(L,2));
		if( !renderInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg renderInfo in osgUtil::RenderLeaf::render function");
		}
		osg::RenderInfo & renderInfo=*renderInfo_ptr;
		osgUtil::RenderLeaf* previous=(Luna< osg::Referenced >::checkSubType< osgUtil::RenderLeaf >(L,3));

		osgUtil::RenderLeaf* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderLeaf >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::RenderLeaf::render(osg::RenderInfo &, osgUtil::RenderLeaf *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->render(renderInfo, previous);

		return 0;
	}

	// const osg::Drawable * osgUtil::RenderLeaf::getDrawable() const
	static int _bind_getDrawable(lua_State *L) {
		if (!_lg_typecheck_getDrawable(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Drawable * osgUtil::RenderLeaf::getDrawable() const function, expected prototype:\nconst osg::Drawable * osgUtil::RenderLeaf::getDrawable() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::RenderLeaf* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderLeaf >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Drawable * osgUtil::RenderLeaf::getDrawable() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Drawable * lret = self->getDrawable();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Drawable >::push(L,lret,false);

		return 1;
	}

	// osgUtil::StateGraph * osgUtil::RenderLeaf::_parent()
	static int _bind_getParent(lua_State *L) {
		if (!_lg_typecheck_getParent(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::StateGraph * osgUtil::RenderLeaf::_parent() function, expected prototype:\nosgUtil::StateGraph * osgUtil::RenderLeaf::_parent()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::RenderLeaf* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderLeaf >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgUtil::StateGraph * osgUtil::RenderLeaf::_parent(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgUtil::StateGraph * lret = self->_parent;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::StateGraph >::push(L,lret,false);

		return 1;
	}

	// osg::ref_ptr< osg::RefMatrixd > osgUtil::RenderLeaf::_projection()
	static int _bind_getProjection(lua_State *L) {
		if (!_lg_typecheck_getProjection(L)) {
			luaL_error(L, "luna typecheck failed in osg::ref_ptr< osg::RefMatrixd > osgUtil::RenderLeaf::_projection() function, expected prototype:\nosg::ref_ptr< osg::RefMatrixd > osgUtil::RenderLeaf::_projection()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::RenderLeaf* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderLeaf >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::ref_ptr< osg::RefMatrixd > osgUtil::RenderLeaf::_projection(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::ref_ptr< osg::RefMatrixd > lret = self->_projection;
		Luna< osg::RefMatrixd >::push(L,lret.get(),false);

		return 1;
	}

	// osg::ref_ptr< osg::RefMatrixd > osgUtil::RenderLeaf::_modelview()
	static int _bind_getModelview(lua_State *L) {
		if (!_lg_typecheck_getModelview(L)) {
			luaL_error(L, "luna typecheck failed in osg::ref_ptr< osg::RefMatrixd > osgUtil::RenderLeaf::_modelview() function, expected prototype:\nosg::ref_ptr< osg::RefMatrixd > osgUtil::RenderLeaf::_modelview()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::RenderLeaf* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderLeaf >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::ref_ptr< osg::RefMatrixd > osgUtil::RenderLeaf::_modelview(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::ref_ptr< osg::RefMatrixd > lret = self->_modelview;
		Luna< osg::RefMatrixd >::push(L,lret.get(),false);

		return 1;
	}

	// float osgUtil::RenderLeaf::_depth()
	static int _bind_getDepth(lua_State *L) {
		if (!_lg_typecheck_getDepth(L)) {
			luaL_error(L, "luna typecheck failed in float osgUtil::RenderLeaf::_depth() function, expected prototype:\nfloat osgUtil::RenderLeaf::_depth()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::RenderLeaf* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderLeaf >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgUtil::RenderLeaf::_depth(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->_depth;
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osgUtil::RenderLeaf::_dynamic()
	static int _bind_getDynamic(lua_State *L) {
		if (!_lg_typecheck_getDynamic(L)) {
			luaL_error(L, "luna typecheck failed in bool osgUtil::RenderLeaf::_dynamic() function, expected prototype:\nbool osgUtil::RenderLeaf::_dynamic()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::RenderLeaf* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderLeaf >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgUtil::RenderLeaf::_dynamic(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->_dynamic;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// unsigned int osgUtil::RenderLeaf::_traversalNumber()
	static int _bind_getTraversalNumber(lua_State *L) {
		if (!_lg_typecheck_getTraversalNumber(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osgUtil::RenderLeaf::_traversalNumber() function, expected prototype:\nunsigned int osgUtil::RenderLeaf::_traversalNumber()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::RenderLeaf* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderLeaf >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osgUtil::RenderLeaf::_traversalNumber(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->_traversalNumber;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgUtil::RenderLeaf::_parent(osgUtil::StateGraph * value)
	static int _bind_setParent(lua_State *L) {
		if (!_lg_typecheck_setParent(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderLeaf::_parent(osgUtil::StateGraph * value) function, expected prototype:\nvoid osgUtil::RenderLeaf::_parent(osgUtil::StateGraph * value)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::StateGraph* value=(Luna< osg::Referenced >::checkSubType< osgUtil::StateGraph >(L,2));

		osgUtil::RenderLeaf* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderLeaf >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::RenderLeaf::_parent(osgUtil::StateGraph *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_parent = value;

		return 0;
	}

	// void osgUtil::RenderLeaf::_drawable(osg::ref_ptr< osg::Drawable > value)
	static int _bind_setDrawable(lua_State *L) {
		if (!_lg_typecheck_setDrawable(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderLeaf::_drawable(osg::ref_ptr< osg::Drawable > value) function, expected prototype:\nvoid osgUtil::RenderLeaf::_drawable(osg::ref_ptr< osg::Drawable > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ref_ptr< osg::Drawable > value = dynamic_cast< osg::Drawable* >(Luna< osg::Referenced >::check(L,2));

		osgUtil::RenderLeaf* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderLeaf >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::RenderLeaf::_drawable(osg::ref_ptr< osg::Drawable >). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_drawable = value;

		return 0;
	}

	// void osgUtil::RenderLeaf::_projection(osg::ref_ptr< osg::RefMatrixd > value)
	static int _bind_setProjection(lua_State *L) {
		if (!_lg_typecheck_setProjection(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderLeaf::_projection(osg::ref_ptr< osg::RefMatrixd > value) function, expected prototype:\nvoid osgUtil::RenderLeaf::_projection(osg::ref_ptr< osg::RefMatrixd > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ref_ptr< osg::RefMatrixd > value = dynamic_cast< osg::RefMatrixd* >(Luna< osg::Referenced >::check(L,2));

		osgUtil::RenderLeaf* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderLeaf >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::RenderLeaf::_projection(osg::ref_ptr< osg::RefMatrixd >). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_projection = value;

		return 0;
	}

	// void osgUtil::RenderLeaf::_modelview(osg::ref_ptr< osg::RefMatrixd > value)
	static int _bind_setModelview(lua_State *L) {
		if (!_lg_typecheck_setModelview(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderLeaf::_modelview(osg::ref_ptr< osg::RefMatrixd > value) function, expected prototype:\nvoid osgUtil::RenderLeaf::_modelview(osg::ref_ptr< osg::RefMatrixd > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ref_ptr< osg::RefMatrixd > value = dynamic_cast< osg::RefMatrixd* >(Luna< osg::Referenced >::check(L,2));

		osgUtil::RenderLeaf* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderLeaf >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::RenderLeaf::_modelview(osg::ref_ptr< osg::RefMatrixd >). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_modelview = value;

		return 0;
	}

	// void osgUtil::RenderLeaf::_depth(float value)
	static int _bind_setDepth(lua_State *L) {
		if (!_lg_typecheck_setDepth(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderLeaf::_depth(float value) function, expected prototype:\nvoid osgUtil::RenderLeaf::_depth(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		osgUtil::RenderLeaf* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderLeaf >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::RenderLeaf::_depth(float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_depth = value;

		return 0;
	}

	// void osgUtil::RenderLeaf::_dynamic(bool value)
	static int _bind_setDynamic(lua_State *L) {
		if (!_lg_typecheck_setDynamic(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderLeaf::_dynamic(bool value) function, expected prototype:\nvoid osgUtil::RenderLeaf::_dynamic(bool value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		osgUtil::RenderLeaf* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderLeaf >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::RenderLeaf::_dynamic(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_dynamic = value;

		return 0;
	}

	// void osgUtil::RenderLeaf::_traversalNumber(unsigned int value)
	static int _bind_setTraversalNumber(lua_State *L) {
		if (!_lg_typecheck_setTraversalNumber(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderLeaf::_traversalNumber(unsigned int value) function, expected prototype:\nvoid osgUtil::RenderLeaf::_traversalNumber(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osgUtil::RenderLeaf* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderLeaf >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::RenderLeaf::_traversalNumber(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_traversalNumber = value;

		return 0;
	}

	// void osgUtil::RenderLeaf::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderLeaf::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgUtil::RenderLeaf::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgUtil::RenderLeaf* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderLeaf >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::RenderLeaf::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RenderLeaf::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osgUtil::RenderLeaf::base_render(osg::RenderInfo & renderInfo, osgUtil::RenderLeaf * previous)
	static int _bind_base_render(lua_State *L) {
		if (!_lg_typecheck_base_render(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderLeaf::base_render(osg::RenderInfo & renderInfo, osgUtil::RenderLeaf * previous) function, expected prototype:\nvoid osgUtil::RenderLeaf::base_render(osg::RenderInfo & renderInfo, osgUtil::RenderLeaf * previous)\nClass arguments details:\narg 1 ID = 2286263\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::RenderInfo* renderInfo_ptr=(Luna< osg::RenderInfo >::check(L,2));
		if( !renderInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg renderInfo in osgUtil::RenderLeaf::base_render function");
		}
		osg::RenderInfo & renderInfo=*renderInfo_ptr;
		osgUtil::RenderLeaf* previous=(Luna< osg::Referenced >::checkSubType< osgUtil::RenderLeaf >(L,3));

		osgUtil::RenderLeaf* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderLeaf >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::RenderLeaf::base_render(osg::RenderInfo &, osgUtil::RenderLeaf *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RenderLeaf::render(renderInfo, previous);

		return 0;
	}


	// Operator binds:

};

osgUtil::RenderLeaf* LunaTraits< osgUtil::RenderLeaf >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_RenderLeaf::_bind_ctor(L);
}

void LunaTraits< osgUtil::RenderLeaf >::_bind_dtor(osgUtil::RenderLeaf* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::RenderLeaf >::className[] = "RenderLeaf";
const char LunaTraits< osgUtil::RenderLeaf >::fullName[] = "osgUtil::RenderLeaf";
const char LunaTraits< osgUtil::RenderLeaf >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::RenderLeaf >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osgUtil::RenderLeaf >::hash = 60833856;
const int LunaTraits< osgUtil::RenderLeaf >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::RenderLeaf >::methods[] = {
	{"set", &luna_wrapper_osgUtil_RenderLeaf::_bind_set},
	{"reset", &luna_wrapper_osgUtil_RenderLeaf::_bind_reset},
	{"render", &luna_wrapper_osgUtil_RenderLeaf::_bind_render},
	{"getDrawable", &luna_wrapper_osgUtil_RenderLeaf::_bind_getDrawable},
	{"getParent", &luna_wrapper_osgUtil_RenderLeaf::_bind_getParent},
	{"getProjection", &luna_wrapper_osgUtil_RenderLeaf::_bind_getProjection},
	{"getModelview", &luna_wrapper_osgUtil_RenderLeaf::_bind_getModelview},
	{"getDepth", &luna_wrapper_osgUtil_RenderLeaf::_bind_getDepth},
	{"getDynamic", &luna_wrapper_osgUtil_RenderLeaf::_bind_getDynamic},
	{"getTraversalNumber", &luna_wrapper_osgUtil_RenderLeaf::_bind_getTraversalNumber},
	{"setParent", &luna_wrapper_osgUtil_RenderLeaf::_bind_setParent},
	{"setDrawable", &luna_wrapper_osgUtil_RenderLeaf::_bind_setDrawable},
	{"setProjection", &luna_wrapper_osgUtil_RenderLeaf::_bind_setProjection},
	{"setModelview", &luna_wrapper_osgUtil_RenderLeaf::_bind_setModelview},
	{"setDepth", &luna_wrapper_osgUtil_RenderLeaf::_bind_setDepth},
	{"setDynamic", &luna_wrapper_osgUtil_RenderLeaf::_bind_setDynamic},
	{"setTraversalNumber", &luna_wrapper_osgUtil_RenderLeaf::_bind_setTraversalNumber},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgUtil_RenderLeaf::_bind_base_setThreadSafeRefUnref},
	{"base_render", &luna_wrapper_osgUtil_RenderLeaf::_bind_base_render},
	{"fromVoid", &luna_wrapper_osgUtil_RenderLeaf::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgUtil_RenderLeaf::_bind_asVoid},
	{"getTable", &luna_wrapper_osgUtil_RenderLeaf::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::RenderLeaf >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_RenderLeaf::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::RenderLeaf >::enumValues[] = {
	{0,0}
};



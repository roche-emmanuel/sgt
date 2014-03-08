#include <plug_common.h>

#include <luna/wrappers/wrapper_osgViewer_Renderer.h>

class luna_wrapper_osgViewer_Renderer {
public:
	typedef Luna< osgViewer::Renderer > luna_t;

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

		osgViewer::Renderer* self= (osgViewer::Renderer*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgViewer::Renderer >::push(L,self,false);
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
		//osgViewer::Renderer* ptr= dynamic_cast< osgViewer::Renderer* >(Luna< osg::Referenced >::check(L,1));
		osgViewer::Renderer* ptr= luna_caster< osg::Referenced, osgViewer::Renderer >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgViewer::Renderer >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Camera >(L,2)) ) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getSceneView_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSceneView_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDone(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDone(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setGraphicsThreadDoesCull(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getGraphicsThreadDoesCull(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_cull(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_draw(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_cull_draw(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_compile(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCompileOnNextDraw(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCompileOnNextDraw(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_release(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCameraRequiresSetUp(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCameraRequiresSetUp(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_cull(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_draw(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_cull_draw(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_compile(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_release(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 2 valid operators)
	inline static bool _lg_typecheck_op_call_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_call_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,2)) ) ) return false;
		return true;
	}


	// Constructor binds:
	// osgViewer::Renderer::Renderer(osg::Camera * camera)
	static osgViewer::Renderer* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgViewer::Renderer::Renderer(osg::Camera * camera) function, expected prototype:\nosgViewer::Renderer::Renderer(osg::Camera * camera)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Camera* camera=(Luna< osg::Referenced >::checkSubType< osg::Camera >(L,1));

		return new osgViewer::Renderer(camera);
	}

	// osgViewer::Renderer::Renderer(lua_Table * data, osg::Camera * camera)
	static osgViewer::Renderer* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgViewer::Renderer::Renderer(lua_Table * data, osg::Camera * camera) function, expected prototype:\nosgViewer::Renderer::Renderer(lua_Table * data, osg::Camera * camera)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Camera* camera=(Luna< osg::Referenced >::checkSubType< osg::Camera >(L,2));

		return new wrapper_osgViewer_Renderer(L,NULL, camera);
	}

	// Overload binder for osgViewer::Renderer::Renderer
	static osgViewer::Renderer* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Renderer, cannot match any of the overloads for function Renderer:\n  Renderer(osg::Camera *)\n  Renderer(lua_Table *, osg::Camera *)\n");
		return NULL;
	}


	// Function binds:
	// osgUtil::SceneView * osgViewer::Renderer::getSceneView(unsigned int i)
	static int _bind_getSceneView_overload_1(lua_State *L) {
		if (!_lg_typecheck_getSceneView_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::SceneView * osgViewer::Renderer::getSceneView(unsigned int i) function, expected prototype:\nosgUtil::SceneView * osgViewer::Renderer::getSceneView(unsigned int i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osgViewer::Renderer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Renderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgUtil::SceneView * osgViewer::Renderer::getSceneView(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgUtil::SceneView * lret = self->getSceneView(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::SceneView >::push(L,lret,false);

		return 1;
	}

	// const osgUtil::SceneView * osgViewer::Renderer::getSceneView(unsigned int i) const
	static int _bind_getSceneView_overload_2(lua_State *L) {
		if (!_lg_typecheck_getSceneView_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osgUtil::SceneView * osgViewer::Renderer::getSceneView(unsigned int i) const function, expected prototype:\nconst osgUtil::SceneView * osgViewer::Renderer::getSceneView(unsigned int i) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osgViewer::Renderer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Renderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgUtil::SceneView * osgViewer::Renderer::getSceneView(unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgUtil::SceneView * lret = self->getSceneView(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::SceneView >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgViewer::Renderer::getSceneView
	static int _bind_getSceneView(lua_State *L) {
		if (_lg_typecheck_getSceneView_overload_1(L)) return _bind_getSceneView_overload_1(L);
		if (_lg_typecheck_getSceneView_overload_2(L)) return _bind_getSceneView_overload_2(L);

		luaL_error(L, "error in function getSceneView, cannot match any of the overloads for function getSceneView:\n  getSceneView(unsigned int)\n  getSceneView(unsigned int)\n");
		return 0;
	}

	// void osgViewer::Renderer::setDone(bool done)
	static int _bind_setDone(lua_State *L) {
		if (!_lg_typecheck_setDone(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::Renderer::setDone(bool done) function, expected prototype:\nvoid osgViewer::Renderer::setDone(bool done)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool done=(bool)(lua_toboolean(L,2)==1);

		osgViewer::Renderer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Renderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::Renderer::setDone(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setDone(done);

		return 0;
	}

	// bool osgViewer::Renderer::getDone()
	static int _bind_getDone(lua_State *L) {
		if (!_lg_typecheck_getDone(L)) {
			luaL_error(L, "luna typecheck failed in bool osgViewer::Renderer::getDone() function, expected prototype:\nbool osgViewer::Renderer::getDone()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::Renderer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Renderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgViewer::Renderer::getDone(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getDone();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgViewer::Renderer::setGraphicsThreadDoesCull(bool flag)
	static int _bind_setGraphicsThreadDoesCull(lua_State *L) {
		if (!_lg_typecheck_setGraphicsThreadDoesCull(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::Renderer::setGraphicsThreadDoesCull(bool flag) function, expected prototype:\nvoid osgViewer::Renderer::setGraphicsThreadDoesCull(bool flag)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osgViewer::Renderer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Renderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::Renderer::setGraphicsThreadDoesCull(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setGraphicsThreadDoesCull(flag);

		return 0;
	}

	// bool osgViewer::Renderer::getGraphicsThreadDoesCull() const
	static int _bind_getGraphicsThreadDoesCull(lua_State *L) {
		if (!_lg_typecheck_getGraphicsThreadDoesCull(L)) {
			luaL_error(L, "luna typecheck failed in bool osgViewer::Renderer::getGraphicsThreadDoesCull() const function, expected prototype:\nbool osgViewer::Renderer::getGraphicsThreadDoesCull() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::Renderer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Renderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgViewer::Renderer::getGraphicsThreadDoesCull() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getGraphicsThreadDoesCull();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgViewer::Renderer::cull()
	static int _bind_cull(lua_State *L) {
		if (!_lg_typecheck_cull(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::Renderer::cull() function, expected prototype:\nvoid osgViewer::Renderer::cull()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::Renderer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Renderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::Renderer::cull(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->cull();

		return 0;
	}

	// void osgViewer::Renderer::draw()
	static int _bind_draw(lua_State *L) {
		if (!_lg_typecheck_draw(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::Renderer::draw() function, expected prototype:\nvoid osgViewer::Renderer::draw()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::Renderer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Renderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::Renderer::draw(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->draw();

		return 0;
	}

	// void osgViewer::Renderer::cull_draw()
	static int _bind_cull_draw(lua_State *L) {
		if (!_lg_typecheck_cull_draw(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::Renderer::cull_draw() function, expected prototype:\nvoid osgViewer::Renderer::cull_draw()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::Renderer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Renderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::Renderer::cull_draw(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->cull_draw();

		return 0;
	}

	// void osgViewer::Renderer::compile()
	static int _bind_compile(lua_State *L) {
		if (!_lg_typecheck_compile(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::Renderer::compile() function, expected prototype:\nvoid osgViewer::Renderer::compile()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::Renderer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Renderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::Renderer::compile(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->compile();

		return 0;
	}

	// void osgViewer::Renderer::setCompileOnNextDraw(bool flag)
	static int _bind_setCompileOnNextDraw(lua_State *L) {
		if (!_lg_typecheck_setCompileOnNextDraw(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::Renderer::setCompileOnNextDraw(bool flag) function, expected prototype:\nvoid osgViewer::Renderer::setCompileOnNextDraw(bool flag)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osgViewer::Renderer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Renderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::Renderer::setCompileOnNextDraw(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setCompileOnNextDraw(flag);

		return 0;
	}

	// bool osgViewer::Renderer::getCompileOnNextDraw() const
	static int _bind_getCompileOnNextDraw(lua_State *L) {
		if (!_lg_typecheck_getCompileOnNextDraw(L)) {
			luaL_error(L, "luna typecheck failed in bool osgViewer::Renderer::getCompileOnNextDraw() const function, expected prototype:\nbool osgViewer::Renderer::getCompileOnNextDraw() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::Renderer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Renderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgViewer::Renderer::getCompileOnNextDraw() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getCompileOnNextDraw();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgViewer::Renderer::release()
	static int _bind_release(lua_State *L) {
		if (!_lg_typecheck_release(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::Renderer::release() function, expected prototype:\nvoid osgViewer::Renderer::release()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::Renderer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Renderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::Renderer::release(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->release();

		return 0;
	}

	// void osgViewer::Renderer::reset()
	static int _bind_reset(lua_State *L) {
		if (!_lg_typecheck_reset(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::Renderer::reset() function, expected prototype:\nvoid osgViewer::Renderer::reset()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::Renderer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Renderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::Renderer::reset(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->reset();

		return 0;
	}

	// void osgViewer::Renderer::setCameraRequiresSetUp(bool flag)
	static int _bind_setCameraRequiresSetUp(lua_State *L) {
		if (!_lg_typecheck_setCameraRequiresSetUp(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::Renderer::setCameraRequiresSetUp(bool flag) function, expected prototype:\nvoid osgViewer::Renderer::setCameraRequiresSetUp(bool flag)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osgViewer::Renderer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Renderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::Renderer::setCameraRequiresSetUp(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setCameraRequiresSetUp(flag);

		return 0;
	}

	// bool osgViewer::Renderer::getCameraRequiresSetUp() const
	static int _bind_getCameraRequiresSetUp(lua_State *L) {
		if (!_lg_typecheck_getCameraRequiresSetUp(L)) {
			luaL_error(L, "luna typecheck failed in bool osgViewer::Renderer::getCameraRequiresSetUp() const function, expected prototype:\nbool osgViewer::Renderer::getCameraRequiresSetUp() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::Renderer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Renderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgViewer::Renderer::getCameraRequiresSetUp() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getCameraRequiresSetUp();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgViewer::Renderer::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::Renderer::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgViewer::Renderer::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgViewer::Renderer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Renderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::Renderer::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Renderer::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osgViewer::Renderer::base_cull()
	static int _bind_base_cull(lua_State *L) {
		if (!_lg_typecheck_base_cull(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::Renderer::base_cull() function, expected prototype:\nvoid osgViewer::Renderer::base_cull()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::Renderer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Renderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::Renderer::base_cull(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Renderer::cull();

		return 0;
	}

	// void osgViewer::Renderer::base_draw()
	static int _bind_base_draw(lua_State *L) {
		if (!_lg_typecheck_base_draw(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::Renderer::base_draw() function, expected prototype:\nvoid osgViewer::Renderer::base_draw()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::Renderer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Renderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::Renderer::base_draw(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Renderer::draw();

		return 0;
	}

	// void osgViewer::Renderer::base_cull_draw()
	static int _bind_base_cull_draw(lua_State *L) {
		if (!_lg_typecheck_base_cull_draw(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::Renderer::base_cull_draw() function, expected prototype:\nvoid osgViewer::Renderer::base_cull_draw()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::Renderer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Renderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::Renderer::base_cull_draw(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Renderer::cull_draw();

		return 0;
	}

	// void osgViewer::Renderer::base_compile()
	static int _bind_base_compile(lua_State *L) {
		if (!_lg_typecheck_base_compile(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::Renderer::base_compile() function, expected prototype:\nvoid osgViewer::Renderer::base_compile()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::Renderer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Renderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::Renderer::base_compile(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Renderer::compile();

		return 0;
	}

	// void osgViewer::Renderer::base_release()
	static int _bind_base_release(lua_State *L) {
		if (!_lg_typecheck_base_release(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::Renderer::base_release() function, expected prototype:\nvoid osgViewer::Renderer::base_release()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::Renderer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Renderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::Renderer::base_release(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Renderer::release();

		return 0;
	}

	// void osgViewer::Renderer::base_reset()
	static int _bind_base_reset(lua_State *L) {
		if (!_lg_typecheck_base_reset(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::Renderer::base_reset() function, expected prototype:\nvoid osgViewer::Renderer::base_reset()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::Renderer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Renderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::Renderer::base_reset(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Renderer::reset();

		return 0;
	}


	// Operator binds:
	// void osgViewer::Renderer::operator()(osg::Object * object)
	static int _bind_op_call_overload_1(lua_State *L) {
		if (!_lg_typecheck_op_call_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::Renderer::operator()(osg::Object * object) function, expected prototype:\nvoid osgViewer::Renderer::operator()(osg::Object * object)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Object* object=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgViewer::Renderer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Renderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::Renderer::operator()(osg::Object *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->operator()(object);

		return 0;
	}

	// void osgViewer::Renderer::operator()(osg::GraphicsContext * context)
	static int _bind_op_call_overload_2(lua_State *L) {
		if (!_lg_typecheck_op_call_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::Renderer::operator()(osg::GraphicsContext * context) function, expected prototype:\nvoid osgViewer::Renderer::operator()(osg::GraphicsContext * context)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::GraphicsContext* context=(Luna< osg::Referenced >::checkSubType< osg::GraphicsContext >(L,2));

		osgViewer::Renderer* self=Luna< osg::Referenced >::checkSubType< osgViewer::Renderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::Renderer::operator()(osg::GraphicsContext *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->operator()(context);

		return 0;
	}

	// Overload binder for osgViewer::Renderer::operator()
	static int _bind_op_call(lua_State *L) {
		if (_lg_typecheck_op_call_overload_1(L)) return _bind_op_call_overload_1(L);
		if (_lg_typecheck_op_call_overload_2(L)) return _bind_op_call_overload_2(L);

		luaL_error(L, "error in function operator(), cannot match any of the overloads for function operator():\n  operator()(osg::Object *)\n  operator()(osg::GraphicsContext *)\n");
		return 0;
	}


};

osgViewer::Renderer* LunaTraits< osgViewer::Renderer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgViewer_Renderer::_bind_ctor(L);
}

void LunaTraits< osgViewer::Renderer >::_bind_dtor(osgViewer::Renderer* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgViewer::Renderer >::className[] = "Renderer";
const char LunaTraits< osgViewer::Renderer >::fullName[] = "osgViewer::Renderer";
const char LunaTraits< osgViewer::Renderer >::moduleName[] = "osgViewer";
const char* LunaTraits< osgViewer::Renderer >::parents[] = {"osg.GraphicsOperation", 0};
const int LunaTraits< osgViewer::Renderer >::hash = 70949417;
const int LunaTraits< osgViewer::Renderer >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgViewer::Renderer >::methods[] = {
	{"getSceneView", &luna_wrapper_osgViewer_Renderer::_bind_getSceneView},
	{"setDone", &luna_wrapper_osgViewer_Renderer::_bind_setDone},
	{"getDone", &luna_wrapper_osgViewer_Renderer::_bind_getDone},
	{"setGraphicsThreadDoesCull", &luna_wrapper_osgViewer_Renderer::_bind_setGraphicsThreadDoesCull},
	{"getGraphicsThreadDoesCull", &luna_wrapper_osgViewer_Renderer::_bind_getGraphicsThreadDoesCull},
	{"cull", &luna_wrapper_osgViewer_Renderer::_bind_cull},
	{"draw", &luna_wrapper_osgViewer_Renderer::_bind_draw},
	{"cull_draw", &luna_wrapper_osgViewer_Renderer::_bind_cull_draw},
	{"compile", &luna_wrapper_osgViewer_Renderer::_bind_compile},
	{"setCompileOnNextDraw", &luna_wrapper_osgViewer_Renderer::_bind_setCompileOnNextDraw},
	{"getCompileOnNextDraw", &luna_wrapper_osgViewer_Renderer::_bind_getCompileOnNextDraw},
	{"release", &luna_wrapper_osgViewer_Renderer::_bind_release},
	{"reset", &luna_wrapper_osgViewer_Renderer::_bind_reset},
	{"setCameraRequiresSetUp", &luna_wrapper_osgViewer_Renderer::_bind_setCameraRequiresSetUp},
	{"getCameraRequiresSetUp", &luna_wrapper_osgViewer_Renderer::_bind_getCameraRequiresSetUp},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgViewer_Renderer::_bind_base_setThreadSafeRefUnref},
	{"base_cull", &luna_wrapper_osgViewer_Renderer::_bind_base_cull},
	{"base_draw", &luna_wrapper_osgViewer_Renderer::_bind_base_draw},
	{"base_cull_draw", &luna_wrapper_osgViewer_Renderer::_bind_base_cull_draw},
	{"base_compile", &luna_wrapper_osgViewer_Renderer::_bind_base_compile},
	{"base_release", &luna_wrapper_osgViewer_Renderer::_bind_base_release},
	{"base_reset", &luna_wrapper_osgViewer_Renderer::_bind_base_reset},
	{"op_call", &luna_wrapper_osgViewer_Renderer::_bind_op_call},
	{"fromVoid", &luna_wrapper_osgViewer_Renderer::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgViewer_Renderer::_bind_asVoid},
	{"getTable", &luna_wrapper_osgViewer_Renderer::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgViewer::Renderer >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgViewer_Renderer::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgViewer::Renderer >::enumValues[] = {
	{0,0}
};



#include <plug_common.h>

#include <luna/wrappers/wrapper_GraphicsWindowWX.h>

class luna_wrapper_GraphicsWindowWX {
public:
	typedef Luna< GraphicsWindowWX > luna_t;

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

		GraphicsWindowWX* self= (GraphicsWindowWX*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< GraphicsWindowWX >::push(L,self,false);
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
		//GraphicsWindowWX* ptr= dynamic_cast< GraphicsWindowWX* >(Luna< osg::Referenced >::check(L,1));
		GraphicsWindowWX* ptr= luna_caster< osg::Referenced, GraphicsWindowWX >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< GraphicsWindowWX >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< wxObject >::checkSubType< wxGLCanvas >(L,1)) ) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxGLContext >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxGLCanvas >(L,2)) ) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< wxObject >::checkSubType< wxGLContext >(L,3)) ) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_init(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_grabFocus(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_grabFocusIfPointerInWindow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_useCursor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_makeCurrentImplementation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_swapBuffersImplementation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_valid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_realizeImplementation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isRealizedImplementation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_closeImplementation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_releaseContextImplementation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_invalidate(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_valid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_realizeImplementation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_isRealizedImplementation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_closeImplementation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_releaseContextImplementation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_invalidate(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// GraphicsWindowWX::GraphicsWindowWX(wxGLCanvas * canvas, wxGLContext * context)
	static GraphicsWindowWX* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in GraphicsWindowWX::GraphicsWindowWX(wxGLCanvas * canvas, wxGLContext * context) function, expected prototype:\nGraphicsWindowWX::GraphicsWindowWX(wxGLCanvas * canvas, wxGLContext * context)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxGLCanvas* canvas=(Luna< wxObject >::checkSubType< wxGLCanvas >(L,1));
		wxGLContext* context=(Luna< wxObject >::checkSubType< wxGLContext >(L,2));

		return new GraphicsWindowWX(canvas, context);
	}

	// GraphicsWindowWX::GraphicsWindowWX(lua_Table * data, wxGLCanvas * canvas, wxGLContext * context)
	static GraphicsWindowWX* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in GraphicsWindowWX::GraphicsWindowWX(lua_Table * data, wxGLCanvas * canvas, wxGLContext * context) function, expected prototype:\nGraphicsWindowWX::GraphicsWindowWX(lua_Table * data, wxGLCanvas * canvas, wxGLContext * context)\nClass arguments details:\narg 2 ID = 56813631\narg 3 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxGLCanvas* canvas=(Luna< wxObject >::checkSubType< wxGLCanvas >(L,2));
		wxGLContext* context=(Luna< wxObject >::checkSubType< wxGLContext >(L,3));

		return new wrapper_GraphicsWindowWX(L,NULL, canvas, context);
	}

	// Overload binder for GraphicsWindowWX::GraphicsWindowWX
	static GraphicsWindowWX* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function GraphicsWindowWX, cannot match any of the overloads for function GraphicsWindowWX:\n  GraphicsWindowWX(wxGLCanvas *, wxGLContext *)\n  GraphicsWindowWX(lua_Table *, wxGLCanvas *, wxGLContext *)\n");
		return NULL;
	}


	// Function binds:
	// void GraphicsWindowWX::init()
	static int _bind_init(lua_State *L) {
		if (!_lg_typecheck_init(L)) {
			luaL_error(L, "luna typecheck failed in void GraphicsWindowWX::init() function, expected prototype:\nvoid GraphicsWindowWX::init()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		GraphicsWindowWX* self=Luna< osg::Referenced >::checkSubType< GraphicsWindowWX >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void GraphicsWindowWX::init(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->init();

		return 0;
	}

	// void GraphicsWindowWX::grabFocus()
	static int _bind_grabFocus(lua_State *L) {
		if (!_lg_typecheck_grabFocus(L)) {
			luaL_error(L, "luna typecheck failed in void GraphicsWindowWX::grabFocus() function, expected prototype:\nvoid GraphicsWindowWX::grabFocus()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		GraphicsWindowWX* self=Luna< osg::Referenced >::checkSubType< GraphicsWindowWX >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void GraphicsWindowWX::grabFocus(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->grabFocus();

		return 0;
	}

	// void GraphicsWindowWX::grabFocusIfPointerInWindow()
	static int _bind_grabFocusIfPointerInWindow(lua_State *L) {
		if (!_lg_typecheck_grabFocusIfPointerInWindow(L)) {
			luaL_error(L, "luna typecheck failed in void GraphicsWindowWX::grabFocusIfPointerInWindow() function, expected prototype:\nvoid GraphicsWindowWX::grabFocusIfPointerInWindow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		GraphicsWindowWX* self=Luna< osg::Referenced >::checkSubType< GraphicsWindowWX >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void GraphicsWindowWX::grabFocusIfPointerInWindow(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->grabFocusIfPointerInWindow();

		return 0;
	}

	// void GraphicsWindowWX::useCursor(bool cursorOn)
	static int _bind_useCursor(lua_State *L) {
		if (!_lg_typecheck_useCursor(L)) {
			luaL_error(L, "luna typecheck failed in void GraphicsWindowWX::useCursor(bool cursorOn) function, expected prototype:\nvoid GraphicsWindowWX::useCursor(bool cursorOn)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool cursorOn=(bool)(lua_toboolean(L,2)==1);

		GraphicsWindowWX* self=Luna< osg::Referenced >::checkSubType< GraphicsWindowWX >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void GraphicsWindowWX::useCursor(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->useCursor(cursorOn);

		return 0;
	}

	// bool GraphicsWindowWX::makeCurrentImplementation()
	static int _bind_makeCurrentImplementation(lua_State *L) {
		if (!_lg_typecheck_makeCurrentImplementation(L)) {
			luaL_error(L, "luna typecheck failed in bool GraphicsWindowWX::makeCurrentImplementation() function, expected prototype:\nbool GraphicsWindowWX::makeCurrentImplementation()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		GraphicsWindowWX* self=Luna< osg::Referenced >::checkSubType< GraphicsWindowWX >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool GraphicsWindowWX::makeCurrentImplementation(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->makeCurrentImplementation();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void GraphicsWindowWX::swapBuffersImplementation()
	static int _bind_swapBuffersImplementation(lua_State *L) {
		if (!_lg_typecheck_swapBuffersImplementation(L)) {
			luaL_error(L, "luna typecheck failed in void GraphicsWindowWX::swapBuffersImplementation() function, expected prototype:\nvoid GraphicsWindowWX::swapBuffersImplementation()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		GraphicsWindowWX* self=Luna< osg::Referenced >::checkSubType< GraphicsWindowWX >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void GraphicsWindowWX::swapBuffersImplementation(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->swapBuffersImplementation();

		return 0;
	}

	// bool GraphicsWindowWX::valid() const
	static int _bind_valid(lua_State *L) {
		if (!_lg_typecheck_valid(L)) {
			luaL_error(L, "luna typecheck failed in bool GraphicsWindowWX::valid() const function, expected prototype:\nbool GraphicsWindowWX::valid() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		GraphicsWindowWX* self=Luna< osg::Referenced >::checkSubType< GraphicsWindowWX >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool GraphicsWindowWX::valid() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->valid();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool GraphicsWindowWX::realizeImplementation()
	static int _bind_realizeImplementation(lua_State *L) {
		if (!_lg_typecheck_realizeImplementation(L)) {
			luaL_error(L, "luna typecheck failed in bool GraphicsWindowWX::realizeImplementation() function, expected prototype:\nbool GraphicsWindowWX::realizeImplementation()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		GraphicsWindowWX* self=Luna< osg::Referenced >::checkSubType< GraphicsWindowWX >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool GraphicsWindowWX::realizeImplementation(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->realizeImplementation();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool GraphicsWindowWX::isRealizedImplementation() const
	static int _bind_isRealizedImplementation(lua_State *L) {
		if (!_lg_typecheck_isRealizedImplementation(L)) {
			luaL_error(L, "luna typecheck failed in bool GraphicsWindowWX::isRealizedImplementation() const function, expected prototype:\nbool GraphicsWindowWX::isRealizedImplementation() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		GraphicsWindowWX* self=Luna< osg::Referenced >::checkSubType< GraphicsWindowWX >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool GraphicsWindowWX::isRealizedImplementation() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isRealizedImplementation();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void GraphicsWindowWX::closeImplementation()
	static int _bind_closeImplementation(lua_State *L) {
		if (!_lg_typecheck_closeImplementation(L)) {
			luaL_error(L, "luna typecheck failed in void GraphicsWindowWX::closeImplementation() function, expected prototype:\nvoid GraphicsWindowWX::closeImplementation()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		GraphicsWindowWX* self=Luna< osg::Referenced >::checkSubType< GraphicsWindowWX >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void GraphicsWindowWX::closeImplementation(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->closeImplementation();

		return 0;
	}

	// bool GraphicsWindowWX::releaseContextImplementation()
	static int _bind_releaseContextImplementation(lua_State *L) {
		if (!_lg_typecheck_releaseContextImplementation(L)) {
			luaL_error(L, "luna typecheck failed in bool GraphicsWindowWX::releaseContextImplementation() function, expected prototype:\nbool GraphicsWindowWX::releaseContextImplementation()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		GraphicsWindowWX* self=Luna< osg::Referenced >::checkSubType< GraphicsWindowWX >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool GraphicsWindowWX::releaseContextImplementation(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->releaseContextImplementation();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void GraphicsWindowWX::invalidate()
	static int _bind_invalidate(lua_State *L) {
		if (!_lg_typecheck_invalidate(L)) {
			luaL_error(L, "luna typecheck failed in void GraphicsWindowWX::invalidate() function, expected prototype:\nvoid GraphicsWindowWX::invalidate()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		GraphicsWindowWX* self=Luna< osg::Referenced >::checkSubType< GraphicsWindowWX >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void GraphicsWindowWX::invalidate(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->invalidate();

		return 0;
	}

	// bool GraphicsWindowWX::base_valid() const
	static int _bind_base_valid(lua_State *L) {
		if (!_lg_typecheck_base_valid(L)) {
			luaL_error(L, "luna typecheck failed in bool GraphicsWindowWX::base_valid() const function, expected prototype:\nbool GraphicsWindowWX::base_valid() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		GraphicsWindowWX* self=Luna< osg::Referenced >::checkSubType< GraphicsWindowWX >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool GraphicsWindowWX::base_valid() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GraphicsWindowWX::valid();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool GraphicsWindowWX::base_realizeImplementation()
	static int _bind_base_realizeImplementation(lua_State *L) {
		if (!_lg_typecheck_base_realizeImplementation(L)) {
			luaL_error(L, "luna typecheck failed in bool GraphicsWindowWX::base_realizeImplementation() function, expected prototype:\nbool GraphicsWindowWX::base_realizeImplementation()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		GraphicsWindowWX* self=Luna< osg::Referenced >::checkSubType< GraphicsWindowWX >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool GraphicsWindowWX::base_realizeImplementation(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GraphicsWindowWX::realizeImplementation();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool GraphicsWindowWX::base_isRealizedImplementation() const
	static int _bind_base_isRealizedImplementation(lua_State *L) {
		if (!_lg_typecheck_base_isRealizedImplementation(L)) {
			luaL_error(L, "luna typecheck failed in bool GraphicsWindowWX::base_isRealizedImplementation() const function, expected prototype:\nbool GraphicsWindowWX::base_isRealizedImplementation() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		GraphicsWindowWX* self=Luna< osg::Referenced >::checkSubType< GraphicsWindowWX >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool GraphicsWindowWX::base_isRealizedImplementation() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GraphicsWindowWX::isRealizedImplementation();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void GraphicsWindowWX::base_closeImplementation()
	static int _bind_base_closeImplementation(lua_State *L) {
		if (!_lg_typecheck_base_closeImplementation(L)) {
			luaL_error(L, "luna typecheck failed in void GraphicsWindowWX::base_closeImplementation() function, expected prototype:\nvoid GraphicsWindowWX::base_closeImplementation()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		GraphicsWindowWX* self=Luna< osg::Referenced >::checkSubType< GraphicsWindowWX >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void GraphicsWindowWX::base_closeImplementation(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GraphicsWindowWX::closeImplementation();

		return 0;
	}

	// bool GraphicsWindowWX::base_releaseContextImplementation()
	static int _bind_base_releaseContextImplementation(lua_State *L) {
		if (!_lg_typecheck_base_releaseContextImplementation(L)) {
			luaL_error(L, "luna typecheck failed in bool GraphicsWindowWX::base_releaseContextImplementation() function, expected prototype:\nbool GraphicsWindowWX::base_releaseContextImplementation()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		GraphicsWindowWX* self=Luna< osg::Referenced >::checkSubType< GraphicsWindowWX >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool GraphicsWindowWX::base_releaseContextImplementation(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GraphicsWindowWX::releaseContextImplementation();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void GraphicsWindowWX::base_invalidate()
	static int _bind_base_invalidate(lua_State *L) {
		if (!_lg_typecheck_base_invalidate(L)) {
			luaL_error(L, "luna typecheck failed in void GraphicsWindowWX::base_invalidate() function, expected prototype:\nvoid GraphicsWindowWX::base_invalidate()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		GraphicsWindowWX* self=Luna< osg::Referenced >::checkSubType< GraphicsWindowWX >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void GraphicsWindowWX::base_invalidate(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GraphicsWindowWX::invalidate();

		return 0;
	}


	// Operator binds:

};

GraphicsWindowWX* LunaTraits< GraphicsWindowWX >::_bind_ctor(lua_State *L) {
	return luna_wrapper_GraphicsWindowWX::_bind_ctor(L);
}

void LunaTraits< GraphicsWindowWX >::_bind_dtor(GraphicsWindowWX* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< GraphicsWindowWX >::className[] = "GraphicsWindowWX";
const char LunaTraits< GraphicsWindowWX >::fullName[] = "GraphicsWindowWX";
const char LunaTraits< GraphicsWindowWX >::moduleName[] = "osgWX";
const char* LunaTraits< GraphicsWindowWX >::parents[] = {"osgViewer.GraphicsWindow", 0};
const int LunaTraits< GraphicsWindowWX >::hash = 43283849;
const int LunaTraits< GraphicsWindowWX >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< GraphicsWindowWX >::methods[] = {
	{"init", &luna_wrapper_GraphicsWindowWX::_bind_init},
	{"grabFocus", &luna_wrapper_GraphicsWindowWX::_bind_grabFocus},
	{"grabFocusIfPointerInWindow", &luna_wrapper_GraphicsWindowWX::_bind_grabFocusIfPointerInWindow},
	{"useCursor", &luna_wrapper_GraphicsWindowWX::_bind_useCursor},
	{"makeCurrentImplementation", &luna_wrapper_GraphicsWindowWX::_bind_makeCurrentImplementation},
	{"swapBuffersImplementation", &luna_wrapper_GraphicsWindowWX::_bind_swapBuffersImplementation},
	{"valid", &luna_wrapper_GraphicsWindowWX::_bind_valid},
	{"realizeImplementation", &luna_wrapper_GraphicsWindowWX::_bind_realizeImplementation},
	{"isRealizedImplementation", &luna_wrapper_GraphicsWindowWX::_bind_isRealizedImplementation},
	{"closeImplementation", &luna_wrapper_GraphicsWindowWX::_bind_closeImplementation},
	{"releaseContextImplementation", &luna_wrapper_GraphicsWindowWX::_bind_releaseContextImplementation},
	{"invalidate", &luna_wrapper_GraphicsWindowWX::_bind_invalidate},
	{"base_valid", &luna_wrapper_GraphicsWindowWX::_bind_base_valid},
	{"base_realizeImplementation", &luna_wrapper_GraphicsWindowWX::_bind_base_realizeImplementation},
	{"base_isRealizedImplementation", &luna_wrapper_GraphicsWindowWX::_bind_base_isRealizedImplementation},
	{"base_closeImplementation", &luna_wrapper_GraphicsWindowWX::_bind_base_closeImplementation},
	{"base_releaseContextImplementation", &luna_wrapper_GraphicsWindowWX::_bind_base_releaseContextImplementation},
	{"base_invalidate", &luna_wrapper_GraphicsWindowWX::_bind_base_invalidate},
	{"fromVoid", &luna_wrapper_GraphicsWindowWX::_bind_fromVoid},
	{"asVoid", &luna_wrapper_GraphicsWindowWX::_bind_asVoid},
	{"getTable", &luna_wrapper_GraphicsWindowWX::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< GraphicsWindowWX >::converters[] = {
	{"osg::Referenced", &luna_wrapper_GraphicsWindowWX::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< GraphicsWindowWX >::enumValues[] = {
	{0,0}
};



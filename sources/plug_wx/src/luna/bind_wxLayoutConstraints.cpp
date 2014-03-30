#include <plug_common.h>

#include <luna/wrappers/wrapper_wxLayoutConstraints.h>

class luna_wrapper_wxLayoutConstraints {
public:
	typedef Luna< wxLayoutConstraints > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxObject* self=(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<wxObject,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
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

		wxLayoutConstraints* self= (wxLayoutConstraints*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxLayoutConstraints >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		//wxLayoutConstraints* ptr= dynamic_cast< wxLayoutConstraints* >(Luna< wxObject >::check(L,1));
		wxLayoutConstraints* ptr= luna_caster< wxObject, wxLayoutConstraints >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxLayoutConstraints >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_SatisfyConstraints(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AreSatisfied(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLeft(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTop(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getBottom(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCentreX(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCentreY(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setLeft(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTop(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setBottom(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setWidth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setHeight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCentreX(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCentreY(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxLayoutConstraints::wxLayoutConstraints()
	static wxLayoutConstraints* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxLayoutConstraints::wxLayoutConstraints() function, expected prototype:\nwxLayoutConstraints::wxLayoutConstraints()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxLayoutConstraints();
	}

	// wxLayoutConstraints::wxLayoutConstraints(lua_Table * data)
	static wxLayoutConstraints* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxLayoutConstraints::wxLayoutConstraints(lua_Table * data) function, expected prototype:\nwxLayoutConstraints::wxLayoutConstraints(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxLayoutConstraints(L,NULL);
	}

	// Overload binder for wxLayoutConstraints::wxLayoutConstraints
	static wxLayoutConstraints* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxLayoutConstraints, cannot match any of the overloads for function wxLayoutConstraints:\n  wxLayoutConstraints()\n  wxLayoutConstraints(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// bool wxLayoutConstraints::SatisfyConstraints(wxWindow * win, int * noChanges)
	static int _bind_SatisfyConstraints(lua_State *L) {
		if (!_lg_typecheck_SatisfyConstraints(L)) {
			luaL_error(L, "luna typecheck failed in bool wxLayoutConstraints::SatisfyConstraints(wxWindow * win, int * noChanges) function, expected prototype:\nbool wxLayoutConstraints::SatisfyConstraints(wxWindow * win, int * noChanges)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* win=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		int* noChanges=(int*)Luna< void >::check(L,3);

		wxLayoutConstraints* self=Luna< wxObject >::checkSubType< wxLayoutConstraints >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxLayoutConstraints::SatisfyConstraints(wxWindow *, int *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SatisfyConstraints(win, noChanges);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxLayoutConstraints::AreSatisfied() const
	static int _bind_AreSatisfied(lua_State *L) {
		if (!_lg_typecheck_AreSatisfied(L)) {
			luaL_error(L, "luna typecheck failed in bool wxLayoutConstraints::AreSatisfied() const function, expected prototype:\nbool wxLayoutConstraints::AreSatisfied() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxLayoutConstraints* self=Luna< wxObject >::checkSubType< wxLayoutConstraints >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxLayoutConstraints::AreSatisfied() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->AreSatisfied();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxIndividualLayoutConstraint wxLayoutConstraints::left()
	static int _bind_getLeft(lua_State *L) {
		if (!_lg_typecheck_getLeft(L)) {
			luaL_error(L, "luna typecheck failed in wxIndividualLayoutConstraint wxLayoutConstraints::left() function, expected prototype:\nwxIndividualLayoutConstraint wxLayoutConstraints::left()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxLayoutConstraints* self=Luna< wxObject >::checkSubType< wxLayoutConstraints >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxIndividualLayoutConstraint wxLayoutConstraints::left(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxIndividualLayoutConstraint* lret = &self->left;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxIndividualLayoutConstraint >::push(L,lret,false);

		return 1;
	}

	// wxIndividualLayoutConstraint wxLayoutConstraints::top()
	static int _bind_getTop(lua_State *L) {
		if (!_lg_typecheck_getTop(L)) {
			luaL_error(L, "luna typecheck failed in wxIndividualLayoutConstraint wxLayoutConstraints::top() function, expected prototype:\nwxIndividualLayoutConstraint wxLayoutConstraints::top()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxLayoutConstraints* self=Luna< wxObject >::checkSubType< wxLayoutConstraints >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxIndividualLayoutConstraint wxLayoutConstraints::top(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxIndividualLayoutConstraint* lret = &self->top;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxIndividualLayoutConstraint >::push(L,lret,false);

		return 1;
	}

	// wxIndividualLayoutConstraint wxLayoutConstraints::right()
	static int _bind_getRight(lua_State *L) {
		if (!_lg_typecheck_getRight(L)) {
			luaL_error(L, "luna typecheck failed in wxIndividualLayoutConstraint wxLayoutConstraints::right() function, expected prototype:\nwxIndividualLayoutConstraint wxLayoutConstraints::right()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxLayoutConstraints* self=Luna< wxObject >::checkSubType< wxLayoutConstraints >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxIndividualLayoutConstraint wxLayoutConstraints::right(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxIndividualLayoutConstraint* lret = &self->right;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxIndividualLayoutConstraint >::push(L,lret,false);

		return 1;
	}

	// wxIndividualLayoutConstraint wxLayoutConstraints::bottom()
	static int _bind_getBottom(lua_State *L) {
		if (!_lg_typecheck_getBottom(L)) {
			luaL_error(L, "luna typecheck failed in wxIndividualLayoutConstraint wxLayoutConstraints::bottom() function, expected prototype:\nwxIndividualLayoutConstraint wxLayoutConstraints::bottom()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxLayoutConstraints* self=Luna< wxObject >::checkSubType< wxLayoutConstraints >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxIndividualLayoutConstraint wxLayoutConstraints::bottom(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxIndividualLayoutConstraint* lret = &self->bottom;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxIndividualLayoutConstraint >::push(L,lret,false);

		return 1;
	}

	// wxIndividualLayoutConstraint wxLayoutConstraints::width()
	static int _bind_getWidth(lua_State *L) {
		if (!_lg_typecheck_getWidth(L)) {
			luaL_error(L, "luna typecheck failed in wxIndividualLayoutConstraint wxLayoutConstraints::width() function, expected prototype:\nwxIndividualLayoutConstraint wxLayoutConstraints::width()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxLayoutConstraints* self=Luna< wxObject >::checkSubType< wxLayoutConstraints >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxIndividualLayoutConstraint wxLayoutConstraints::width(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxIndividualLayoutConstraint* lret = &self->width;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxIndividualLayoutConstraint >::push(L,lret,false);

		return 1;
	}

	// wxIndividualLayoutConstraint wxLayoutConstraints::height()
	static int _bind_getHeight(lua_State *L) {
		if (!_lg_typecheck_getHeight(L)) {
			luaL_error(L, "luna typecheck failed in wxIndividualLayoutConstraint wxLayoutConstraints::height() function, expected prototype:\nwxIndividualLayoutConstraint wxLayoutConstraints::height()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxLayoutConstraints* self=Luna< wxObject >::checkSubType< wxLayoutConstraints >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxIndividualLayoutConstraint wxLayoutConstraints::height(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxIndividualLayoutConstraint* lret = &self->height;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxIndividualLayoutConstraint >::push(L,lret,false);

		return 1;
	}

	// wxIndividualLayoutConstraint wxLayoutConstraints::centreX()
	static int _bind_getCentreX(lua_State *L) {
		if (!_lg_typecheck_getCentreX(L)) {
			luaL_error(L, "luna typecheck failed in wxIndividualLayoutConstraint wxLayoutConstraints::centreX() function, expected prototype:\nwxIndividualLayoutConstraint wxLayoutConstraints::centreX()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxLayoutConstraints* self=Luna< wxObject >::checkSubType< wxLayoutConstraints >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxIndividualLayoutConstraint wxLayoutConstraints::centreX(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxIndividualLayoutConstraint* lret = &self->centreX;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxIndividualLayoutConstraint >::push(L,lret,false);

		return 1;
	}

	// wxIndividualLayoutConstraint wxLayoutConstraints::centreY()
	static int _bind_getCentreY(lua_State *L) {
		if (!_lg_typecheck_getCentreY(L)) {
			luaL_error(L, "luna typecheck failed in wxIndividualLayoutConstraint wxLayoutConstraints::centreY() function, expected prototype:\nwxIndividualLayoutConstraint wxLayoutConstraints::centreY()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxLayoutConstraints* self=Luna< wxObject >::checkSubType< wxLayoutConstraints >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxIndividualLayoutConstraint wxLayoutConstraints::centreY(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxIndividualLayoutConstraint* lret = &self->centreY;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxIndividualLayoutConstraint >::push(L,lret,false);

		return 1;
	}

	// void wxLayoutConstraints::left(wxIndividualLayoutConstraint value)
	static int _bind_setLeft(lua_State *L) {
		if (!_lg_typecheck_setLeft(L)) {
			luaL_error(L, "luna typecheck failed in void wxLayoutConstraints::left(wxIndividualLayoutConstraint value) function, expected prototype:\nvoid wxLayoutConstraints::left(wxIndividualLayoutConstraint value)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxIndividualLayoutConstraint* value_ptr=(Luna< wxObject >::checkSubType< wxIndividualLayoutConstraint >(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in wxLayoutConstraints::left function");
		}
		wxIndividualLayoutConstraint value=*value_ptr;

		wxLayoutConstraints* self=Luna< wxObject >::checkSubType< wxLayoutConstraints >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxLayoutConstraints::left(wxIndividualLayoutConstraint). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->left = value;

		return 0;
	}

	// void wxLayoutConstraints::top(wxIndividualLayoutConstraint value)
	static int _bind_setTop(lua_State *L) {
		if (!_lg_typecheck_setTop(L)) {
			luaL_error(L, "luna typecheck failed in void wxLayoutConstraints::top(wxIndividualLayoutConstraint value) function, expected prototype:\nvoid wxLayoutConstraints::top(wxIndividualLayoutConstraint value)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxIndividualLayoutConstraint* value_ptr=(Luna< wxObject >::checkSubType< wxIndividualLayoutConstraint >(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in wxLayoutConstraints::top function");
		}
		wxIndividualLayoutConstraint value=*value_ptr;

		wxLayoutConstraints* self=Luna< wxObject >::checkSubType< wxLayoutConstraints >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxLayoutConstraints::top(wxIndividualLayoutConstraint). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->top = value;

		return 0;
	}

	// void wxLayoutConstraints::right(wxIndividualLayoutConstraint value)
	static int _bind_setRight(lua_State *L) {
		if (!_lg_typecheck_setRight(L)) {
			luaL_error(L, "luna typecheck failed in void wxLayoutConstraints::right(wxIndividualLayoutConstraint value) function, expected prototype:\nvoid wxLayoutConstraints::right(wxIndividualLayoutConstraint value)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxIndividualLayoutConstraint* value_ptr=(Luna< wxObject >::checkSubType< wxIndividualLayoutConstraint >(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in wxLayoutConstraints::right function");
		}
		wxIndividualLayoutConstraint value=*value_ptr;

		wxLayoutConstraints* self=Luna< wxObject >::checkSubType< wxLayoutConstraints >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxLayoutConstraints::right(wxIndividualLayoutConstraint). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->right = value;

		return 0;
	}

	// void wxLayoutConstraints::bottom(wxIndividualLayoutConstraint value)
	static int _bind_setBottom(lua_State *L) {
		if (!_lg_typecheck_setBottom(L)) {
			luaL_error(L, "luna typecheck failed in void wxLayoutConstraints::bottom(wxIndividualLayoutConstraint value) function, expected prototype:\nvoid wxLayoutConstraints::bottom(wxIndividualLayoutConstraint value)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxIndividualLayoutConstraint* value_ptr=(Luna< wxObject >::checkSubType< wxIndividualLayoutConstraint >(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in wxLayoutConstraints::bottom function");
		}
		wxIndividualLayoutConstraint value=*value_ptr;

		wxLayoutConstraints* self=Luna< wxObject >::checkSubType< wxLayoutConstraints >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxLayoutConstraints::bottom(wxIndividualLayoutConstraint). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->bottom = value;

		return 0;
	}

	// void wxLayoutConstraints::width(wxIndividualLayoutConstraint value)
	static int _bind_setWidth(lua_State *L) {
		if (!_lg_typecheck_setWidth(L)) {
			luaL_error(L, "luna typecheck failed in void wxLayoutConstraints::width(wxIndividualLayoutConstraint value) function, expected prototype:\nvoid wxLayoutConstraints::width(wxIndividualLayoutConstraint value)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxIndividualLayoutConstraint* value_ptr=(Luna< wxObject >::checkSubType< wxIndividualLayoutConstraint >(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in wxLayoutConstraints::width function");
		}
		wxIndividualLayoutConstraint value=*value_ptr;

		wxLayoutConstraints* self=Luna< wxObject >::checkSubType< wxLayoutConstraints >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxLayoutConstraints::width(wxIndividualLayoutConstraint). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->width = value;

		return 0;
	}

	// void wxLayoutConstraints::height(wxIndividualLayoutConstraint value)
	static int _bind_setHeight(lua_State *L) {
		if (!_lg_typecheck_setHeight(L)) {
			luaL_error(L, "luna typecheck failed in void wxLayoutConstraints::height(wxIndividualLayoutConstraint value) function, expected prototype:\nvoid wxLayoutConstraints::height(wxIndividualLayoutConstraint value)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxIndividualLayoutConstraint* value_ptr=(Luna< wxObject >::checkSubType< wxIndividualLayoutConstraint >(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in wxLayoutConstraints::height function");
		}
		wxIndividualLayoutConstraint value=*value_ptr;

		wxLayoutConstraints* self=Luna< wxObject >::checkSubType< wxLayoutConstraints >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxLayoutConstraints::height(wxIndividualLayoutConstraint). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->height = value;

		return 0;
	}

	// void wxLayoutConstraints::centreX(wxIndividualLayoutConstraint value)
	static int _bind_setCentreX(lua_State *L) {
		if (!_lg_typecheck_setCentreX(L)) {
			luaL_error(L, "luna typecheck failed in void wxLayoutConstraints::centreX(wxIndividualLayoutConstraint value) function, expected prototype:\nvoid wxLayoutConstraints::centreX(wxIndividualLayoutConstraint value)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxIndividualLayoutConstraint* value_ptr=(Luna< wxObject >::checkSubType< wxIndividualLayoutConstraint >(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in wxLayoutConstraints::centreX function");
		}
		wxIndividualLayoutConstraint value=*value_ptr;

		wxLayoutConstraints* self=Luna< wxObject >::checkSubType< wxLayoutConstraints >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxLayoutConstraints::centreX(wxIndividualLayoutConstraint). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->centreX = value;

		return 0;
	}

	// void wxLayoutConstraints::centreY(wxIndividualLayoutConstraint value)
	static int _bind_setCentreY(lua_State *L) {
		if (!_lg_typecheck_setCentreY(L)) {
			luaL_error(L, "luna typecheck failed in void wxLayoutConstraints::centreY(wxIndividualLayoutConstraint value) function, expected prototype:\nvoid wxLayoutConstraints::centreY(wxIndividualLayoutConstraint value)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxIndividualLayoutConstraint* value_ptr=(Luna< wxObject >::checkSubType< wxIndividualLayoutConstraint >(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in wxLayoutConstraints::centreY function");
		}
		wxIndividualLayoutConstraint value=*value_ptr;

		wxLayoutConstraints* self=Luna< wxObject >::checkSubType< wxLayoutConstraints >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxLayoutConstraints::centreY(wxIndividualLayoutConstraint). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->centreY = value;

		return 0;
	}

	// wxClassInfo * wxLayoutConstraints::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxLayoutConstraints::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxLayoutConstraints::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxLayoutConstraints* self=Luna< wxObject >::checkSubType< wxLayoutConstraints >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxLayoutConstraints::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxLayoutConstraints::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxLayoutConstraints* LunaTraits< wxLayoutConstraints >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxLayoutConstraints::_bind_ctor(L);
}

void LunaTraits< wxLayoutConstraints >::_bind_dtor(wxLayoutConstraints* obj) {
	delete obj;
}

const char LunaTraits< wxLayoutConstraints >::className[] = "wxLayoutConstraints";
const char LunaTraits< wxLayoutConstraints >::fullName[] = "wxLayoutConstraints";
const char LunaTraits< wxLayoutConstraints >::moduleName[] = "wx";
const char* LunaTraits< wxLayoutConstraints >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxLayoutConstraints >::hash = 86137086;
const int LunaTraits< wxLayoutConstraints >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxLayoutConstraints >::methods[] = {
	{"SatisfyConstraints", &luna_wrapper_wxLayoutConstraints::_bind_SatisfyConstraints},
	{"AreSatisfied", &luna_wrapper_wxLayoutConstraints::_bind_AreSatisfied},
	{"getLeft", &luna_wrapper_wxLayoutConstraints::_bind_getLeft},
	{"getTop", &luna_wrapper_wxLayoutConstraints::_bind_getTop},
	{"getRight", &luna_wrapper_wxLayoutConstraints::_bind_getRight},
	{"getBottom", &luna_wrapper_wxLayoutConstraints::_bind_getBottom},
	{"getWidth", &luna_wrapper_wxLayoutConstraints::_bind_getWidth},
	{"getHeight", &luna_wrapper_wxLayoutConstraints::_bind_getHeight},
	{"getCentreX", &luna_wrapper_wxLayoutConstraints::_bind_getCentreX},
	{"getCentreY", &luna_wrapper_wxLayoutConstraints::_bind_getCentreY},
	{"setLeft", &luna_wrapper_wxLayoutConstraints::_bind_setLeft},
	{"setTop", &luna_wrapper_wxLayoutConstraints::_bind_setTop},
	{"setRight", &luna_wrapper_wxLayoutConstraints::_bind_setRight},
	{"setBottom", &luna_wrapper_wxLayoutConstraints::_bind_setBottom},
	{"setWidth", &luna_wrapper_wxLayoutConstraints::_bind_setWidth},
	{"setHeight", &luna_wrapper_wxLayoutConstraints::_bind_setHeight},
	{"setCentreX", &luna_wrapper_wxLayoutConstraints::_bind_setCentreX},
	{"setCentreY", &luna_wrapper_wxLayoutConstraints::_bind_setCentreY},
	{"base_GetClassInfo", &luna_wrapper_wxLayoutConstraints::_bind_base_GetClassInfo},
	{"fromVoid", &luna_wrapper_wxLayoutConstraints::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxLayoutConstraints::_bind_asVoid},
	{"getTable", &luna_wrapper_wxLayoutConstraints::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxLayoutConstraints >::converters[] = {
	{"wxObject", &luna_wrapper_wxLayoutConstraints::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxLayoutConstraints >::enumValues[] = {
	{0,0}
};



#include <plug_common.h>

#include <luna/wrappers/wrapper_wxTransform2D.h>

class luna_wrapper_wxTransform2D {
public:
	typedef Luna< wxTransform2D > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxTransform2D* self=(Luna< wxTransform2D >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<wxTransform2D,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,13863894) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxTransform2D*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxTransform2D* rhs =(Luna< wxTransform2D >::check(L,2));
		wxTransform2D* self=(Luna< wxTransform2D >::check(L,1));
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

		wxTransform2D* self= (wxTransform2D*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxTransform2D >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,13863894) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxTransform2D >::check(L,1));
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

		wxTransform2D* self=(Luna< wxTransform2D >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxTransform2D");
		
		return luna_dynamicCast(L,converters,"wxTransform2D",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_Transform_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,81619599)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxPoint2DInt >::check(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Transform_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,15778700)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxRect2DInt >::check(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Transform_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81619599) ) return false;
		if( (!(Luna< wxPoint2DInt >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Transform_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,15778700) ) return false;
		if( (!(Luna< wxRect2DInt >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_InverseTransform_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,81619599)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxPoint2DInt >::check(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_InverseTransform_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,15778700)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxRect2DInt >::check(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_InverseTransform_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81619599) ) return false;
		if( (!(Luna< wxPoint2DInt >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_InverseTransform_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,15778700) ) return false;
		if( (!(Luna< wxRect2DInt >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Transform_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,15778700)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxRect2DInt >::check(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Transform_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81619599) ) return false;
		if( (!(Luna< wxPoint2DInt >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Transform_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,15778700) ) return false;
		if( (!(Luna< wxRect2DInt >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_InverseTransform_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,15778700)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxRect2DInt >::check(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_InverseTransform_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81619599) ) return false;
		if( (!(Luna< wxPoint2DInt >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_InverseTransform_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,15778700) ) return false;
		if( (!(Luna< wxRect2DInt >::check(L,2))) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// void wxTransform2D::Transform(wxPoint2DInt * pt) const
	static int _bind_Transform_overload_1(lua_State *L) {
		if (!_lg_typecheck_Transform_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxTransform2D::Transform(wxPoint2DInt * pt) const function, expected prototype:\nvoid wxTransform2D::Transform(wxPoint2DInt * pt) const\nClass arguments details:\narg 1 ID = 81619599\n\n%s",luna_dumpStack(L).c_str());
		}

		wxPoint2DInt* pt=(Luna< wxPoint2DInt >::check(L,2));

		wxTransform2D* self=(Luna< wxTransform2D >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTransform2D::Transform(wxPoint2DInt *) const. Got : '%s'\n%s",typeid(Luna< wxTransform2D >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Transform(pt);

		return 0;
	}

	// void wxTransform2D::Transform(wxRect2DInt * r) const
	static int _bind_Transform_overload_2(lua_State *L) {
		if (!_lg_typecheck_Transform_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxTransform2D::Transform(wxRect2DInt * r) const function, expected prototype:\nvoid wxTransform2D::Transform(wxRect2DInt * r) const\nClass arguments details:\narg 1 ID = 15778700\n\n%s",luna_dumpStack(L).c_str());
		}

		wxRect2DInt* r=(Luna< wxRect2DInt >::check(L,2));

		wxTransform2D* self=(Luna< wxTransform2D >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTransform2D::Transform(wxRect2DInt *) const. Got : '%s'\n%s",typeid(Luna< wxTransform2D >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Transform(r);

		return 0;
	}

	// wxPoint2DInt wxTransform2D::Transform(const wxPoint2DInt & pt) const
	static int _bind_Transform_overload_3(lua_State *L) {
		if (!_lg_typecheck_Transform_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in wxPoint2DInt wxTransform2D::Transform(const wxPoint2DInt & pt) const function, expected prototype:\nwxPoint2DInt wxTransform2D::Transform(const wxPoint2DInt & pt) const\nClass arguments details:\narg 1 ID = 81619599\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint2DInt* pt_ptr=(Luna< wxPoint2DInt >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxTransform2D::Transform function");
		}
		const wxPoint2DInt & pt=*pt_ptr;

		wxTransform2D* self=(Luna< wxTransform2D >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPoint2DInt wxTransform2D::Transform(const wxPoint2DInt &) const. Got : '%s'\n%s",typeid(Luna< wxTransform2D >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPoint2DInt stack_lret = self->Transform(pt);
		wxPoint2DInt* lret = new wxPoint2DInt(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint2DInt >::push(L,lret,true);

		return 1;
	}

	// wxRect2DInt wxTransform2D::Transform(const wxRect2DInt & r) const
	static int _bind_Transform_overload_4(lua_State *L) {
		if (!_lg_typecheck_Transform_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in wxRect2DInt wxTransform2D::Transform(const wxRect2DInt & r) const function, expected prototype:\nwxRect2DInt wxTransform2D::Transform(const wxRect2DInt & r) const\nClass arguments details:\narg 1 ID = 15778700\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxRect2DInt* r_ptr=(Luna< wxRect2DInt >::check(L,2));
		if( !r_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg r in wxTransform2D::Transform function");
		}
		const wxRect2DInt & r=*r_ptr;

		wxTransform2D* self=(Luna< wxTransform2D >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxRect2DInt wxTransform2D::Transform(const wxRect2DInt &) const. Got : '%s'\n%s",typeid(Luna< wxTransform2D >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxRect2DInt stack_lret = self->Transform(r);
		wxRect2DInt* lret = new wxRect2DInt(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRect2DInt >::push(L,lret,true);

		return 1;
	}

	// Overload binder for wxTransform2D::Transform
	static int _bind_Transform(lua_State *L) {
		if (_lg_typecheck_Transform_overload_1(L)) return _bind_Transform_overload_1(L);
		if (_lg_typecheck_Transform_overload_2(L)) return _bind_Transform_overload_2(L);
		if (_lg_typecheck_Transform_overload_3(L)) return _bind_Transform_overload_3(L);
		if (_lg_typecheck_Transform_overload_4(L)) return _bind_Transform_overload_4(L);

		luaL_error(L, "error in function Transform, cannot match any of the overloads for function Transform:\n  Transform(wxPoint2DInt *)\n  Transform(wxRect2DInt *)\n  Transform(const wxPoint2DInt &)\n  Transform(const wxRect2DInt &)\n");
		return 0;
	}

	// void wxTransform2D::InverseTransform(wxPoint2DInt * pt) const
	static int _bind_InverseTransform_overload_1(lua_State *L) {
		if (!_lg_typecheck_InverseTransform_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxTransform2D::InverseTransform(wxPoint2DInt * pt) const function, expected prototype:\nvoid wxTransform2D::InverseTransform(wxPoint2DInt * pt) const\nClass arguments details:\narg 1 ID = 81619599\n\n%s",luna_dumpStack(L).c_str());
		}

		wxPoint2DInt* pt=(Luna< wxPoint2DInt >::check(L,2));

		wxTransform2D* self=(Luna< wxTransform2D >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTransform2D::InverseTransform(wxPoint2DInt *) const. Got : '%s'\n%s",typeid(Luna< wxTransform2D >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->InverseTransform(pt);

		return 0;
	}

	// void wxTransform2D::InverseTransform(wxRect2DInt * r) const
	static int _bind_InverseTransform_overload_2(lua_State *L) {
		if (!_lg_typecheck_InverseTransform_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxTransform2D::InverseTransform(wxRect2DInt * r) const function, expected prototype:\nvoid wxTransform2D::InverseTransform(wxRect2DInt * r) const\nClass arguments details:\narg 1 ID = 15778700\n\n%s",luna_dumpStack(L).c_str());
		}

		wxRect2DInt* r=(Luna< wxRect2DInt >::check(L,2));

		wxTransform2D* self=(Luna< wxTransform2D >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTransform2D::InverseTransform(wxRect2DInt *) const. Got : '%s'\n%s",typeid(Luna< wxTransform2D >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->InverseTransform(r);

		return 0;
	}

	// wxPoint2DInt wxTransform2D::InverseTransform(const wxPoint2DInt & pt) const
	static int _bind_InverseTransform_overload_3(lua_State *L) {
		if (!_lg_typecheck_InverseTransform_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in wxPoint2DInt wxTransform2D::InverseTransform(const wxPoint2DInt & pt) const function, expected prototype:\nwxPoint2DInt wxTransform2D::InverseTransform(const wxPoint2DInt & pt) const\nClass arguments details:\narg 1 ID = 81619599\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint2DInt* pt_ptr=(Luna< wxPoint2DInt >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxTransform2D::InverseTransform function");
		}
		const wxPoint2DInt & pt=*pt_ptr;

		wxTransform2D* self=(Luna< wxTransform2D >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPoint2DInt wxTransform2D::InverseTransform(const wxPoint2DInt &) const. Got : '%s'\n%s",typeid(Luna< wxTransform2D >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPoint2DInt stack_lret = self->InverseTransform(pt);
		wxPoint2DInt* lret = new wxPoint2DInt(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint2DInt >::push(L,lret,true);

		return 1;
	}

	// wxRect2DInt wxTransform2D::InverseTransform(const wxRect2DInt & r) const
	static int _bind_InverseTransform_overload_4(lua_State *L) {
		if (!_lg_typecheck_InverseTransform_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in wxRect2DInt wxTransform2D::InverseTransform(const wxRect2DInt & r) const function, expected prototype:\nwxRect2DInt wxTransform2D::InverseTransform(const wxRect2DInt & r) const\nClass arguments details:\narg 1 ID = 15778700\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxRect2DInt* r_ptr=(Luna< wxRect2DInt >::check(L,2));
		if( !r_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg r in wxTransform2D::InverseTransform function");
		}
		const wxRect2DInt & r=*r_ptr;

		wxTransform2D* self=(Luna< wxTransform2D >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxRect2DInt wxTransform2D::InverseTransform(const wxRect2DInt &) const. Got : '%s'\n%s",typeid(Luna< wxTransform2D >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxRect2DInt stack_lret = self->InverseTransform(r);
		wxRect2DInt* lret = new wxRect2DInt(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRect2DInt >::push(L,lret,true);

		return 1;
	}

	// Overload binder for wxTransform2D::InverseTransform
	static int _bind_InverseTransform(lua_State *L) {
		if (_lg_typecheck_InverseTransform_overload_1(L)) return _bind_InverseTransform_overload_1(L);
		if (_lg_typecheck_InverseTransform_overload_2(L)) return _bind_InverseTransform_overload_2(L);
		if (_lg_typecheck_InverseTransform_overload_3(L)) return _bind_InverseTransform_overload_3(L);
		if (_lg_typecheck_InverseTransform_overload_4(L)) return _bind_InverseTransform_overload_4(L);

		luaL_error(L, "error in function InverseTransform, cannot match any of the overloads for function InverseTransform:\n  InverseTransform(wxPoint2DInt *)\n  InverseTransform(wxRect2DInt *)\n  InverseTransform(const wxPoint2DInt &)\n  InverseTransform(const wxRect2DInt &)\n");
		return 0;
	}

	// void wxTransform2D::base_Transform(wxRect2DInt * r) const
	static int _bind_base_Transform_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_Transform_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxTransform2D::base_Transform(wxRect2DInt * r) const function, expected prototype:\nvoid wxTransform2D::base_Transform(wxRect2DInt * r) const\nClass arguments details:\narg 1 ID = 15778700\n\n%s",luna_dumpStack(L).c_str());
		}

		wxRect2DInt* r=(Luna< wxRect2DInt >::check(L,2));

		wxTransform2D* self=(Luna< wxTransform2D >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTransform2D::base_Transform(wxRect2DInt *) const. Got : '%s'\n%s",typeid(Luna< wxTransform2D >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTransform2D::Transform(r);

		return 0;
	}

	// wxPoint2DInt wxTransform2D::base_Transform(const wxPoint2DInt & pt) const
	static int _bind_base_Transform_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_Transform_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxPoint2DInt wxTransform2D::base_Transform(const wxPoint2DInt & pt) const function, expected prototype:\nwxPoint2DInt wxTransform2D::base_Transform(const wxPoint2DInt & pt) const\nClass arguments details:\narg 1 ID = 81619599\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint2DInt* pt_ptr=(Luna< wxPoint2DInt >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxTransform2D::base_Transform function");
		}
		const wxPoint2DInt & pt=*pt_ptr;

		wxTransform2D* self=(Luna< wxTransform2D >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPoint2DInt wxTransform2D::base_Transform(const wxPoint2DInt &) const. Got : '%s'\n%s",typeid(Luna< wxTransform2D >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPoint2DInt stack_lret = self->wxTransform2D::Transform(pt);
		wxPoint2DInt* lret = new wxPoint2DInt(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint2DInt >::push(L,lret,true);

		return 1;
	}

	// wxRect2DInt wxTransform2D::base_Transform(const wxRect2DInt & r) const
	static int _bind_base_Transform_overload_3(lua_State *L) {
		if (!_lg_typecheck_base_Transform_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in wxRect2DInt wxTransform2D::base_Transform(const wxRect2DInt & r) const function, expected prototype:\nwxRect2DInt wxTransform2D::base_Transform(const wxRect2DInt & r) const\nClass arguments details:\narg 1 ID = 15778700\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxRect2DInt* r_ptr=(Luna< wxRect2DInt >::check(L,2));
		if( !r_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg r in wxTransform2D::base_Transform function");
		}
		const wxRect2DInt & r=*r_ptr;

		wxTransform2D* self=(Luna< wxTransform2D >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxRect2DInt wxTransform2D::base_Transform(const wxRect2DInt &) const. Got : '%s'\n%s",typeid(Luna< wxTransform2D >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxRect2DInt stack_lret = self->wxTransform2D::Transform(r);
		wxRect2DInt* lret = new wxRect2DInt(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRect2DInt >::push(L,lret,true);

		return 1;
	}

	// Overload binder for wxTransform2D::base_Transform
	static int _bind_base_Transform(lua_State *L) {
		if (_lg_typecheck_base_Transform_overload_1(L)) return _bind_base_Transform_overload_1(L);
		if (_lg_typecheck_base_Transform_overload_2(L)) return _bind_base_Transform_overload_2(L);
		if (_lg_typecheck_base_Transform_overload_3(L)) return _bind_base_Transform_overload_3(L);

		luaL_error(L, "error in function base_Transform, cannot match any of the overloads for function base_Transform:\n  base_Transform(wxRect2DInt *)\n  base_Transform(const wxPoint2DInt &)\n  base_Transform(const wxRect2DInt &)\n");
		return 0;
	}

	// void wxTransform2D::base_InverseTransform(wxRect2DInt * r) const
	static int _bind_base_InverseTransform_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_InverseTransform_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxTransform2D::base_InverseTransform(wxRect2DInt * r) const function, expected prototype:\nvoid wxTransform2D::base_InverseTransform(wxRect2DInt * r) const\nClass arguments details:\narg 1 ID = 15778700\n\n%s",luna_dumpStack(L).c_str());
		}

		wxRect2DInt* r=(Luna< wxRect2DInt >::check(L,2));

		wxTransform2D* self=(Luna< wxTransform2D >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTransform2D::base_InverseTransform(wxRect2DInt *) const. Got : '%s'\n%s",typeid(Luna< wxTransform2D >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTransform2D::InverseTransform(r);

		return 0;
	}

	// wxPoint2DInt wxTransform2D::base_InverseTransform(const wxPoint2DInt & pt) const
	static int _bind_base_InverseTransform_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_InverseTransform_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxPoint2DInt wxTransform2D::base_InverseTransform(const wxPoint2DInt & pt) const function, expected prototype:\nwxPoint2DInt wxTransform2D::base_InverseTransform(const wxPoint2DInt & pt) const\nClass arguments details:\narg 1 ID = 81619599\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint2DInt* pt_ptr=(Luna< wxPoint2DInt >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxTransform2D::base_InverseTransform function");
		}
		const wxPoint2DInt & pt=*pt_ptr;

		wxTransform2D* self=(Luna< wxTransform2D >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPoint2DInt wxTransform2D::base_InverseTransform(const wxPoint2DInt &) const. Got : '%s'\n%s",typeid(Luna< wxTransform2D >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPoint2DInt stack_lret = self->wxTransform2D::InverseTransform(pt);
		wxPoint2DInt* lret = new wxPoint2DInt(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint2DInt >::push(L,lret,true);

		return 1;
	}

	// wxRect2DInt wxTransform2D::base_InverseTransform(const wxRect2DInt & r) const
	static int _bind_base_InverseTransform_overload_3(lua_State *L) {
		if (!_lg_typecheck_base_InverseTransform_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in wxRect2DInt wxTransform2D::base_InverseTransform(const wxRect2DInt & r) const function, expected prototype:\nwxRect2DInt wxTransform2D::base_InverseTransform(const wxRect2DInt & r) const\nClass arguments details:\narg 1 ID = 15778700\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxRect2DInt* r_ptr=(Luna< wxRect2DInt >::check(L,2));
		if( !r_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg r in wxTransform2D::base_InverseTransform function");
		}
		const wxRect2DInt & r=*r_ptr;

		wxTransform2D* self=(Luna< wxTransform2D >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxRect2DInt wxTransform2D::base_InverseTransform(const wxRect2DInt &) const. Got : '%s'\n%s",typeid(Luna< wxTransform2D >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxRect2DInt stack_lret = self->wxTransform2D::InverseTransform(r);
		wxRect2DInt* lret = new wxRect2DInt(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRect2DInt >::push(L,lret,true);

		return 1;
	}

	// Overload binder for wxTransform2D::base_InverseTransform
	static int _bind_base_InverseTransform(lua_State *L) {
		if (_lg_typecheck_base_InverseTransform_overload_1(L)) return _bind_base_InverseTransform_overload_1(L);
		if (_lg_typecheck_base_InverseTransform_overload_2(L)) return _bind_base_InverseTransform_overload_2(L);
		if (_lg_typecheck_base_InverseTransform_overload_3(L)) return _bind_base_InverseTransform_overload_3(L);

		luaL_error(L, "error in function base_InverseTransform, cannot match any of the overloads for function base_InverseTransform:\n  base_InverseTransform(wxRect2DInt *)\n  base_InverseTransform(const wxPoint2DInt &)\n  base_InverseTransform(const wxRect2DInt &)\n");
		return 0;
	}


	// Operator binds:

};

wxTransform2D* LunaTraits< wxTransform2D >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void wxTransform2D::Transform(wxPoint2DInt * pt) const
	// void wxTransform2D::InverseTransform(wxPoint2DInt * pt) const
}

void LunaTraits< wxTransform2D >::_bind_dtor(wxTransform2D* obj) {
	delete obj;
}

const char LunaTraits< wxTransform2D >::className[] = "wxTransform2D";
const char LunaTraits< wxTransform2D >::fullName[] = "wxTransform2D";
const char LunaTraits< wxTransform2D >::moduleName[] = "wx";
const char* LunaTraits< wxTransform2D >::parents[] = {0};
const int LunaTraits< wxTransform2D >::hash = 13863894;
const int LunaTraits< wxTransform2D >::uniqueIDs[] = {13863894,0};

luna_RegType LunaTraits< wxTransform2D >::methods[] = {
	{"Transform", &luna_wrapper_wxTransform2D::_bind_Transform},
	{"InverseTransform", &luna_wrapper_wxTransform2D::_bind_InverseTransform},
	{"base_Transform", &luna_wrapper_wxTransform2D::_bind_base_Transform},
	{"base_InverseTransform", &luna_wrapper_wxTransform2D::_bind_base_InverseTransform},
	{"dynCast", &luna_wrapper_wxTransform2D::_bind_dynCast},
	{"__eq", &luna_wrapper_wxTransform2D::_bind___eq},
	{"fromVoid", &luna_wrapper_wxTransform2D::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxTransform2D::_bind_asVoid},
	{"getTable", &luna_wrapper_wxTransform2D::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxTransform2D >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxTransform2D >::enumValues[] = {
	{0,0}
};



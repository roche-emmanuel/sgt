#include <plug_common.h>

class luna_wrapper_wxAffineMatrix2D {
public:
	typedef Luna< wxAffineMatrix2D > luna_t;

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxAffineMatrix2D* self= (wxAffineMatrix2D*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxAffineMatrix2D >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,87852021) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxAffineMatrix2D >::check(L,1));
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

		wxAffineMatrix2D* self=(Luna< wxAffineMatrix2D >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxAffineMatrix2D");
		
		return luna_dynamicCast(L,converters,"wxAffineMatrix2D",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Get(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,83648097)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,87062627)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Set(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,83648097) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,87062627) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Concat(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,74549152) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Invert(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsIdentity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsEqual(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,74549152) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Translate(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Scale(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Mirror(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Rotate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_TransformPoint_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,87062627) ) return false;
		if( (!(Luna< wxPoint2DDouble >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_TransformPoint_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_TransformDistance_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,87062627) ) return false;
		if( (!(Luna< wxPoint2DDouble >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_TransformDistance_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 2 valid operators)
	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,74549152) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_neq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,74549152) ) return false;
		return true;
	}


	// Constructor binds:
	// wxAffineMatrix2D::wxAffineMatrix2D()
	static wxAffineMatrix2D* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxAffineMatrix2D::wxAffineMatrix2D() function, expected prototype:\nwxAffineMatrix2D::wxAffineMatrix2D()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxAffineMatrix2D();
	}


	// Function binds:
	// void wxAffineMatrix2D::Get(wxMatrix2D * mat2D, wxPoint2DDouble * tr) const
	static int _bind_Get(lua_State *L) {
		if (!_lg_typecheck_Get(L)) {
			luaL_error(L, "luna typecheck failed in void wxAffineMatrix2D::Get(wxMatrix2D * mat2D, wxPoint2DDouble * tr) const function, expected prototype:\nvoid wxAffineMatrix2D::Get(wxMatrix2D * mat2D, wxPoint2DDouble * tr) const\nClass arguments details:\narg 1 ID = 83648097\narg 2 ID = 87062627\n\n%s",luna_dumpStack(L).c_str());
		}

		wxMatrix2D* mat2D=(Luna< wxMatrix2D >::check(L,2));
		wxPoint2DDouble* tr=(Luna< wxPoint2DDouble >::check(L,3));

		wxAffineMatrix2D* self=(Luna< wxAffineMatrix2D >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAffineMatrix2D::Get(wxMatrix2D *, wxPoint2DDouble *) const. Got : '%s'\n%s",typeid(Luna< wxAffineMatrix2D >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Get(mat2D, tr);

		return 0;
	}

	// void wxAffineMatrix2D::Set(const wxMatrix2D & mat2D, const wxPoint2DDouble & tr)
	static int _bind_Set(lua_State *L) {
		if (!_lg_typecheck_Set(L)) {
			luaL_error(L, "luna typecheck failed in void wxAffineMatrix2D::Set(const wxMatrix2D & mat2D, const wxPoint2DDouble & tr) function, expected prototype:\nvoid wxAffineMatrix2D::Set(const wxMatrix2D & mat2D, const wxPoint2DDouble & tr)\nClass arguments details:\narg 1 ID = 83648097\narg 2 ID = 87062627\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxMatrix2D* mat2D_ptr=(Luna< wxMatrix2D >::check(L,2));
		if( !mat2D_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mat2D in wxAffineMatrix2D::Set function");
		}
		const wxMatrix2D & mat2D=*mat2D_ptr;
		const wxPoint2DDouble* tr_ptr=(Luna< wxPoint2DDouble >::check(L,3));
		if( !tr_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg tr in wxAffineMatrix2D::Set function");
		}
		const wxPoint2DDouble & tr=*tr_ptr;

		wxAffineMatrix2D* self=(Luna< wxAffineMatrix2D >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAffineMatrix2D::Set(const wxMatrix2D &, const wxPoint2DDouble &). Got : '%s'\n%s",typeid(Luna< wxAffineMatrix2D >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Set(mat2D, tr);

		return 0;
	}

	// void wxAffineMatrix2D::Concat(const wxAffineMatrix2DBase & t)
	static int _bind_Concat(lua_State *L) {
		if (!_lg_typecheck_Concat(L)) {
			luaL_error(L, "luna typecheck failed in void wxAffineMatrix2D::Concat(const wxAffineMatrix2DBase & t) function, expected prototype:\nvoid wxAffineMatrix2D::Concat(const wxAffineMatrix2DBase & t)\nClass arguments details:\narg 1 ID = 74549152\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxAffineMatrix2DBase* t_ptr=(Luna< wxAffineMatrix2DBase >::check(L,2));
		if( !t_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t in wxAffineMatrix2D::Concat function");
		}
		const wxAffineMatrix2DBase & t=*t_ptr;

		wxAffineMatrix2D* self=(Luna< wxAffineMatrix2D >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAffineMatrix2D::Concat(const wxAffineMatrix2DBase &). Got : '%s'\n%s",typeid(Luna< wxAffineMatrix2D >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Concat(t);

		return 0;
	}

	// bool wxAffineMatrix2D::Invert()
	static int _bind_Invert(lua_State *L) {
		if (!_lg_typecheck_Invert(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAffineMatrix2D::Invert() function, expected prototype:\nbool wxAffineMatrix2D::Invert()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAffineMatrix2D* self=(Luna< wxAffineMatrix2D >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAffineMatrix2D::Invert(). Got : '%s'\n%s",typeid(Luna< wxAffineMatrix2D >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Invert();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAffineMatrix2D::IsIdentity() const
	static int _bind_IsIdentity(lua_State *L) {
		if (!_lg_typecheck_IsIdentity(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAffineMatrix2D::IsIdentity() const function, expected prototype:\nbool wxAffineMatrix2D::IsIdentity() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAffineMatrix2D* self=(Luna< wxAffineMatrix2D >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAffineMatrix2D::IsIdentity() const. Got : '%s'\n%s",typeid(Luna< wxAffineMatrix2D >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsIdentity();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxAffineMatrix2D::IsEqual(const wxAffineMatrix2DBase & t)
	static int _bind_IsEqual(lua_State *L) {
		if (!_lg_typecheck_IsEqual(L)) {
			luaL_error(L, "luna typecheck failed in void wxAffineMatrix2D::IsEqual(const wxAffineMatrix2DBase & t) function, expected prototype:\nvoid wxAffineMatrix2D::IsEqual(const wxAffineMatrix2DBase & t)\nClass arguments details:\narg 1 ID = 74549152\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxAffineMatrix2DBase* t_ptr=(Luna< wxAffineMatrix2DBase >::check(L,2));
		if( !t_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t in wxAffineMatrix2D::IsEqual function");
		}
		const wxAffineMatrix2DBase & t=*t_ptr;

		wxAffineMatrix2D* self=(Luna< wxAffineMatrix2D >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAffineMatrix2D::IsEqual(const wxAffineMatrix2DBase &). Got : '%s'\n%s",typeid(Luna< wxAffineMatrix2D >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->IsEqual(t);

		return 0;
	}

	// void wxAffineMatrix2D::Translate(double dx, double dy)
	static int _bind_Translate(lua_State *L) {
		if (!_lg_typecheck_Translate(L)) {
			luaL_error(L, "luna typecheck failed in void wxAffineMatrix2D::Translate(double dx, double dy) function, expected prototype:\nvoid wxAffineMatrix2D::Translate(double dx, double dy)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double dx=(double)lua_tonumber(L,2);
		double dy=(double)lua_tonumber(L,3);

		wxAffineMatrix2D* self=(Luna< wxAffineMatrix2D >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAffineMatrix2D::Translate(double, double). Got : '%s'\n%s",typeid(Luna< wxAffineMatrix2D >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Translate(dx, dy);

		return 0;
	}

	// void wxAffineMatrix2D::Scale(double xScale, double yScale)
	static int _bind_Scale(lua_State *L) {
		if (!_lg_typecheck_Scale(L)) {
			luaL_error(L, "luna typecheck failed in void wxAffineMatrix2D::Scale(double xScale, double yScale) function, expected prototype:\nvoid wxAffineMatrix2D::Scale(double xScale, double yScale)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double xScale=(double)lua_tonumber(L,2);
		double yScale=(double)lua_tonumber(L,3);

		wxAffineMatrix2D* self=(Luna< wxAffineMatrix2D >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAffineMatrix2D::Scale(double, double). Got : '%s'\n%s",typeid(Luna< wxAffineMatrix2D >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Scale(xScale, yScale);

		return 0;
	}

	// void wxAffineMatrix2D::Mirror(int direction = ::wxHORIZONTAL)
	static int _bind_Mirror(lua_State *L) {
		if (!_lg_typecheck_Mirror(L)) {
			luaL_error(L, "luna typecheck failed in void wxAffineMatrix2D::Mirror(int direction = ::wxHORIZONTAL) function, expected prototype:\nvoid wxAffineMatrix2D::Mirror(int direction = ::wxHORIZONTAL)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int direction=luatop>1 ? (int)lua_tointeger(L,2) : (int)::wxHORIZONTAL;

		wxAffineMatrix2D* self=(Luna< wxAffineMatrix2D >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAffineMatrix2D::Mirror(int). Got : '%s'\n%s",typeid(Luna< wxAffineMatrix2D >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Mirror(direction);

		return 0;
	}

	// void wxAffineMatrix2D::Rotate(double ccRadians)
	static int _bind_Rotate(lua_State *L) {
		if (!_lg_typecheck_Rotate(L)) {
			luaL_error(L, "luna typecheck failed in void wxAffineMatrix2D::Rotate(double ccRadians) function, expected prototype:\nvoid wxAffineMatrix2D::Rotate(double ccRadians)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double ccRadians=(double)lua_tonumber(L,2);

		wxAffineMatrix2D* self=(Luna< wxAffineMatrix2D >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAffineMatrix2D::Rotate(double). Got : '%s'\n%s",typeid(Luna< wxAffineMatrix2D >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Rotate(ccRadians);

		return 0;
	}

	// wxPoint2DDouble wxAffineMatrix2D::TransformPoint(const wxPoint2DDouble & p) const
	static int _bind_TransformPoint_overload_1(lua_State *L) {
		if (!_lg_typecheck_TransformPoint_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxPoint2DDouble wxAffineMatrix2D::TransformPoint(const wxPoint2DDouble & p) const function, expected prototype:\nwxPoint2DDouble wxAffineMatrix2D::TransformPoint(const wxPoint2DDouble & p) const\nClass arguments details:\narg 1 ID = 87062627\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint2DDouble* p_ptr=(Luna< wxPoint2DDouble >::check(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in wxAffineMatrix2D::TransformPoint function");
		}
		const wxPoint2DDouble & p=*p_ptr;

		wxAffineMatrix2D* self=(Luna< wxAffineMatrix2D >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPoint2DDouble wxAffineMatrix2D::TransformPoint(const wxPoint2DDouble &) const. Got : '%s'\n%s",typeid(Luna< wxAffineMatrix2D >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPoint2DDouble stack_lret = self->TransformPoint(p);
		wxPoint2DDouble* lret = new wxPoint2DDouble(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint2DDouble >::push(L,lret,true);

		return 1;
	}

	// void wxAffineMatrix2D::TransformPoint(double * x, double * y) const
	static int _bind_TransformPoint_overload_2(lua_State *L) {
		if (!_lg_typecheck_TransformPoint_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxAffineMatrix2D::TransformPoint(double * x, double * y) const function, expected prototype:\nvoid wxAffineMatrix2D::TransformPoint(double * x, double * y) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double* x=(double*)Luna< void >::check(L,2);
		double* y=(double*)Luna< void >::check(L,3);

		wxAffineMatrix2D* self=(Luna< wxAffineMatrix2D >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAffineMatrix2D::TransformPoint(double *, double *) const. Got : '%s'\n%s",typeid(Luna< wxAffineMatrix2D >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TransformPoint(x, y);

		return 0;
	}

	// Overload binder for wxAffineMatrix2D::TransformPoint
	static int _bind_TransformPoint(lua_State *L) {
		if (_lg_typecheck_TransformPoint_overload_1(L)) return _bind_TransformPoint_overload_1(L);
		if (_lg_typecheck_TransformPoint_overload_2(L)) return _bind_TransformPoint_overload_2(L);

		luaL_error(L, "error in function TransformPoint, cannot match any of the overloads for function TransformPoint:\n  TransformPoint(const wxPoint2DDouble &)\n  TransformPoint(double *, double *)\n");
		return 0;
	}

	// wxPoint2DDouble wxAffineMatrix2D::TransformDistance(const wxPoint2DDouble & p) const
	static int _bind_TransformDistance_overload_1(lua_State *L) {
		if (!_lg_typecheck_TransformDistance_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxPoint2DDouble wxAffineMatrix2D::TransformDistance(const wxPoint2DDouble & p) const function, expected prototype:\nwxPoint2DDouble wxAffineMatrix2D::TransformDistance(const wxPoint2DDouble & p) const\nClass arguments details:\narg 1 ID = 87062627\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint2DDouble* p_ptr=(Luna< wxPoint2DDouble >::check(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in wxAffineMatrix2D::TransformDistance function");
		}
		const wxPoint2DDouble & p=*p_ptr;

		wxAffineMatrix2D* self=(Luna< wxAffineMatrix2D >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPoint2DDouble wxAffineMatrix2D::TransformDistance(const wxPoint2DDouble &) const. Got : '%s'\n%s",typeid(Luna< wxAffineMatrix2D >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPoint2DDouble stack_lret = self->TransformDistance(p);
		wxPoint2DDouble* lret = new wxPoint2DDouble(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint2DDouble >::push(L,lret,true);

		return 1;
	}

	// void wxAffineMatrix2D::TransformDistance(double * dx, double * dy) const
	static int _bind_TransformDistance_overload_2(lua_State *L) {
		if (!_lg_typecheck_TransformDistance_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxAffineMatrix2D::TransformDistance(double * dx, double * dy) const function, expected prototype:\nvoid wxAffineMatrix2D::TransformDistance(double * dx, double * dy) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double* dx=(double*)Luna< void >::check(L,2);
		double* dy=(double*)Luna< void >::check(L,3);

		wxAffineMatrix2D* self=(Luna< wxAffineMatrix2D >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAffineMatrix2D::TransformDistance(double *, double *) const. Got : '%s'\n%s",typeid(Luna< wxAffineMatrix2D >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TransformDistance(dx, dy);

		return 0;
	}

	// Overload binder for wxAffineMatrix2D::TransformDistance
	static int _bind_TransformDistance(lua_State *L) {
		if (_lg_typecheck_TransformDistance_overload_1(L)) return _bind_TransformDistance_overload_1(L);
		if (_lg_typecheck_TransformDistance_overload_2(L)) return _bind_TransformDistance_overload_2(L);

		luaL_error(L, "error in function TransformDistance, cannot match any of the overloads for function TransformDistance:\n  TransformDistance(const wxPoint2DDouble &)\n  TransformDistance(double *, double *)\n");
		return 0;
	}


	// Operator binds:
	// bool wxAffineMatrix2D::operator==(const wxAffineMatrix2DBase & t) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAffineMatrix2D::operator==(const wxAffineMatrix2DBase & t) const function, expected prototype:\nbool wxAffineMatrix2D::operator==(const wxAffineMatrix2DBase & t) const\nClass arguments details:\narg 1 ID = 74549152\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxAffineMatrix2DBase* t_ptr=(Luna< wxAffineMatrix2DBase >::check(L,2));
		if( !t_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t in wxAffineMatrix2D::operator== function");
		}
		const wxAffineMatrix2DBase & t=*t_ptr;

		wxAffineMatrix2D* self=(Luna< wxAffineMatrix2D >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAffineMatrix2D::operator==(const wxAffineMatrix2DBase &) const. Got : '%s'\n%s",typeid(Luna< wxAffineMatrix2D >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator==(t);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAffineMatrix2D::operator!=(const wxAffineMatrix2DBase & t) const
	static int _bind_op_neq(lua_State *L) {
		if (!_lg_typecheck_op_neq(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAffineMatrix2D::operator!=(const wxAffineMatrix2DBase & t) const function, expected prototype:\nbool wxAffineMatrix2D::operator!=(const wxAffineMatrix2DBase & t) const\nClass arguments details:\narg 1 ID = 74549152\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxAffineMatrix2DBase* t_ptr=(Luna< wxAffineMatrix2DBase >::check(L,2));
		if( !t_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg t in wxAffineMatrix2D::operator!= function");
		}
		const wxAffineMatrix2DBase & t=*t_ptr;

		wxAffineMatrix2D* self=(Luna< wxAffineMatrix2D >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAffineMatrix2D::operator!=(const wxAffineMatrix2DBase &) const. Got : '%s'\n%s",typeid(Luna< wxAffineMatrix2D >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator!=(t);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

wxAffineMatrix2D* LunaTraits< wxAffineMatrix2D >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxAffineMatrix2D::_bind_ctor(L);
}

void LunaTraits< wxAffineMatrix2D >::_bind_dtor(wxAffineMatrix2D* obj) {
	delete obj;
}

const char LunaTraits< wxAffineMatrix2D >::className[] = "wxAffineMatrix2D";
const char LunaTraits< wxAffineMatrix2D >::fullName[] = "wxAffineMatrix2D";
const char LunaTraits< wxAffineMatrix2D >::moduleName[] = "wx";
const char* LunaTraits< wxAffineMatrix2D >::parents[] = {0};
const int LunaTraits< wxAffineMatrix2D >::hash = 87852021;
const int LunaTraits< wxAffineMatrix2D >::uniqueIDs[] = {87852021,0};

luna_RegType LunaTraits< wxAffineMatrix2D >::methods[] = {
	{"Get", &luna_wrapper_wxAffineMatrix2D::_bind_Get},
	{"Set", &luna_wrapper_wxAffineMatrix2D::_bind_Set},
	{"Concat", &luna_wrapper_wxAffineMatrix2D::_bind_Concat},
	{"Invert", &luna_wrapper_wxAffineMatrix2D::_bind_Invert},
	{"IsIdentity", &luna_wrapper_wxAffineMatrix2D::_bind_IsIdentity},
	{"IsEqual", &luna_wrapper_wxAffineMatrix2D::_bind_IsEqual},
	{"Translate", &luna_wrapper_wxAffineMatrix2D::_bind_Translate},
	{"Scale", &luna_wrapper_wxAffineMatrix2D::_bind_Scale},
	{"Mirror", &luna_wrapper_wxAffineMatrix2D::_bind_Mirror},
	{"Rotate", &luna_wrapper_wxAffineMatrix2D::_bind_Rotate},
	{"TransformPoint", &luna_wrapper_wxAffineMatrix2D::_bind_TransformPoint},
	{"TransformDistance", &luna_wrapper_wxAffineMatrix2D::_bind_TransformDistance},
	{"__eq", &luna_wrapper_wxAffineMatrix2D::_bind___eq},
	{"op_neq", &luna_wrapper_wxAffineMatrix2D::_bind_op_neq},
	{"dynCast", &luna_wrapper_wxAffineMatrix2D::_bind_dynCast},
	{"fromVoid", &luna_wrapper_wxAffineMatrix2D::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxAffineMatrix2D::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< wxAffineMatrix2D >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxAffineMatrix2D >::enumValues[] = {
	{0,0}
};



#include <plug_common.h>

#include <luna/wrappers/wrapper_wxGraphicsContext.h>

class luna_wrapper_wxGraphicsContext {
public:
	typedef Luna< wxGraphicsContext > luna_t;

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

		wxGraphicsContext* self= (wxGraphicsContext*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxGraphicsContext >::push(L,self,false);
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
		//wxGraphicsContext* ptr= dynamic_cast< wxGraphicsContext* >(Luna< wxObject >::check(L,1));
		wxGraphicsContext* ptr= luna_caster< wxObject, wxGraphicsContext >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxGraphicsContext >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

wxGraphicsContext* LunaTraits< wxGraphicsContext >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void wxGraphicsContext::Clip(const wxRegion & region)
	// void wxGraphicsContext::Clip(double x, double y, double w, double h)
	// void wxGraphicsContext::ConcatTransform(const wxGraphicsMatrix & matrix)
	// wxGraphicsBitmap wxGraphicsContext::CreateBitmap(const wxBitmap & bitmap)
	// wxGraphicsBitmap wxGraphicsContext::CreateSubBitmap(const wxGraphicsBitmap & bitmap, double x, double y, double w, double h)
	// wxGraphicsBrush wxGraphicsContext::CreateRadialGradientBrush(double xo, double yo, double xc, double yc, double radius, const wxGraphicsGradientStops & stops)
	// void wxGraphicsContext::DrawBitmap(const wxGraphicsBitmap & bmp, double x, double y, double w, double h)
	// void wxGraphicsContext::DrawBitmap(const wxBitmap & bmp, double x, double y, double w, double h)
	// void wxGraphicsContext::DrawIcon(const wxIcon & icon, double x, double y, double w, double h)
	// void wxGraphicsContext::FillPath(const wxGraphicsPath & path, wxPolygonFillMode fillStyle = ::wxODDEVEN_RULE)
	// void * wxGraphicsContext::GetNativeContext()
	// void wxGraphicsContext::GetPartialTextExtents(const wxString & text, wxArrayDouble & widths) const
	// void wxGraphicsContext::GetTextExtent(const wxString & text, double * width, double * height, double * descent, double * externalLeading) const
	// wxGraphicsMatrix wxGraphicsContext::GetTransform() const
	// void wxGraphicsContext::ResetClip()
	// void wxGraphicsContext::Rotate(double angle)
	// void wxGraphicsContext::Scale(double xScale, double yScale)
	// void wxGraphicsContext::SetTransform(const wxGraphicsMatrix & matrix)
	// void wxGraphicsContext::StrokePath(const wxGraphicsPath & path)
	// void wxGraphicsContext::Translate(double dx, double dy)
	// void wxGraphicsContext::BeginLayer(double opacity)
	// void wxGraphicsContext::EndLayer()
	// bool wxGraphicsContext::SetAntialiasMode(wxAntialiasMode antialias)
	// bool wxGraphicsContext::SetInterpolationQuality(wxInterpolationQuality interpolation)
	// bool wxGraphicsContext::SetCompositionMode(wxCompositionMode op)
}

void LunaTraits< wxGraphicsContext >::_bind_dtor(wxGraphicsContext* obj) {
	delete obj;
}

const char LunaTraits< wxGraphicsContext >::className[] = "wxGraphicsContext";
const char LunaTraits< wxGraphicsContext >::fullName[] = "wxGraphicsContext";
const char LunaTraits< wxGraphicsContext >::moduleName[] = "wx";
const char* LunaTraits< wxGraphicsContext >::parents[] = {"wx.wxGraphicsObject", 0};
const int LunaTraits< wxGraphicsContext >::hash = 50225448;
const int LunaTraits< wxGraphicsContext >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxGraphicsContext >::methods[] = {
	{"fromVoid", &luna_wrapper_wxGraphicsContext::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxGraphicsContext::_bind_asVoid},
	{"getTable", &luna_wrapper_wxGraphicsContext::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxGraphicsContext >::converters[] = {
	{"wxObject", &luna_wrapper_wxGraphicsContext::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxGraphicsContext >::enumValues[] = {
	{0,0}
};



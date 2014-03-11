#include <plug_common.h>

#include <luna/wrappers/wrapper_wxGraphicsRenderer.h>

class luna_wrapper_wxGraphicsRenderer {
public:
	typedef Luna< wxGraphicsRenderer > luna_t;

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

		wxGraphicsRenderer* self= (wxGraphicsRenderer*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxGraphicsRenderer >::push(L,self,false);
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
		//wxGraphicsRenderer* ptr= dynamic_cast< wxGraphicsRenderer* >(Luna< wxObject >::check(L,1));
		wxGraphicsRenderer* ptr= luna_caster< wxObject, wxGraphicsRenderer >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxGraphicsRenderer >::push(L,ptr,false);
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

wxGraphicsRenderer* LunaTraits< wxGraphicsRenderer >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// wxGraphicsBitmap wxGraphicsRenderer::CreateBitmap(const wxBitmap & bitmap)
	// wxGraphicsBitmap wxGraphicsRenderer::CreateBitmapFromImage(const wxImage & image)
	// wxImage wxGraphicsRenderer::CreateImageFromBitmap(const wxGraphicsBitmap & bmp)
	// wxGraphicsBitmap wxGraphicsRenderer::CreateBitmapFromNativeBitmap(void * bitmap)
	// wxGraphicsContext * wxGraphicsRenderer::CreateContext(wxWindow * window)
	// wxGraphicsContext * wxGraphicsRenderer::CreateContext(const wxWindowDC & windowDC)
	// wxGraphicsContext * wxGraphicsRenderer::CreateContext(const wxMemoryDC & memoryDC)
	// wxGraphicsContext * wxGraphicsRenderer::CreateContext(const wxPrinterDC & printerDC)
	// wxGraphicsContext * wxGraphicsRenderer::CreateContext(const wxEnhMetaFileDC & metaFileDC)
	// wxGraphicsBrush wxGraphicsRenderer::CreateBrush(const wxBrush & brush)
	// wxGraphicsContext * wxGraphicsRenderer::CreateContextFromNativeContext(void * context)
	// wxGraphicsContext * wxGraphicsRenderer::CreateContextFromNativeWindow(void * window)
	// wxGraphicsContext * wxGraphicsRenderer::CreateMeasuringContext()
	// wxGraphicsFont wxGraphicsRenderer::CreateFont(const wxFont & font, const wxColour & col = * wxBLACK)
	// wxGraphicsFont wxGraphicsRenderer::CreateFont(double sizeInPixels, const wxString & facename, int flags = ::wxFONTFLAG_DEFAULT, const wxColour & col = * wxBLACK)
	// wxGraphicsBrush wxGraphicsRenderer::CreateLinearGradientBrush(double x1, double y1, double x2, double y2, const wxGraphicsGradientStops & stops)
	// wxGraphicsMatrix wxGraphicsRenderer::CreateMatrix(double a = 1.0, double b = 0.0, double c = 0.0, double d = 1.0, double tx = 0.0, double ty = 0.0)
	// wxGraphicsPath wxGraphicsRenderer::CreatePath()
	// wxGraphicsPen wxGraphicsRenderer::CreatePen(const wxPen & pen)
	// wxGraphicsBrush wxGraphicsRenderer::CreateRadialGradientBrush(double xo, double yo, double xc, double yc, double radius, const wxGraphicsGradientStops & stops)
	// wxGraphicsBitmap wxGraphicsRenderer::CreateSubBitmap(const wxGraphicsBitmap & bitmap, double x, double y, double w, double h)
}

void LunaTraits< wxGraphicsRenderer >::_bind_dtor(wxGraphicsRenderer* obj) {
	delete obj;
}

const char LunaTraits< wxGraphicsRenderer >::className[] = "wxGraphicsRenderer";
const char LunaTraits< wxGraphicsRenderer >::fullName[] = "wxGraphicsRenderer";
const char LunaTraits< wxGraphicsRenderer >::moduleName[] = "wx";
const char* LunaTraits< wxGraphicsRenderer >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxGraphicsRenderer >::hash = 56316210;
const int LunaTraits< wxGraphicsRenderer >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxGraphicsRenderer >::methods[] = {
	{"fromVoid", &luna_wrapper_wxGraphicsRenderer::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxGraphicsRenderer::_bind_asVoid},
	{"getTable", &luna_wrapper_wxGraphicsRenderer::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxGraphicsRenderer >::converters[] = {
	{"wxObject", &luna_wrapper_wxGraphicsRenderer::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxGraphicsRenderer >::enumValues[] = {
	{0,0}
};



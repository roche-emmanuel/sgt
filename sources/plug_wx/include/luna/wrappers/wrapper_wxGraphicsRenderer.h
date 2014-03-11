#ifndef _WRAPPERS_WRAPPER_WXGRAPHICSRENDERER_H_
#define _WRAPPERS_WRAPPER_WXGRAPHICSRENDERER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/graphics.h>

class wrapper_wxGraphicsRenderer : public wxGraphicsRenderer, public luna_wrapper_base {

public:
		

	~wrapper_wxGraphicsRenderer() {
		logDEBUG3("Calling delete function for wrapper wxGraphicsRenderer");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxGraphicsRenderer*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxGraphicsRenderer*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxGraphicsRenderer::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxGraphicsRenderer*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxGraphicsRenderer::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxGraphicsRenderer*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxGraphicsRenderer::GetClassInfo();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


public:
// wxGraphicsBitmap wxGraphicsRenderer::CreateBitmap(const wxBitmap & bitmap)
wxGraphicsBitmap CreateBitmap(const wxBitmap &) {
	THROW_IF(true,"The function call wxGraphicsBitmap wxGraphicsRenderer::CreateBitmap(const wxBitmap &) is not implemented in wrapper.");
	return wxGraphicsBitmap();
};

public:
// wxGraphicsBitmap wxGraphicsRenderer::CreateBitmapFromImage(const wxImage & image)
wxGraphicsBitmap CreateBitmapFromImage(const wxImage &) {
	THROW_IF(true,"The function call wxGraphicsBitmap wxGraphicsRenderer::CreateBitmapFromImage(const wxImage &) is not implemented in wrapper.");
	return wxGraphicsBitmap();
};

public:
// wxImage wxGraphicsRenderer::CreateImageFromBitmap(const wxGraphicsBitmap & bmp)
wxImage CreateImageFromBitmap(const wxGraphicsBitmap &) {
	THROW_IF(true,"The function call wxImage wxGraphicsRenderer::CreateImageFromBitmap(const wxGraphicsBitmap &) is not implemented in wrapper.");
	return wxImage();
};

public:
// wxGraphicsBitmap wxGraphicsRenderer::CreateBitmapFromNativeBitmap(void * bitmap)
wxGraphicsBitmap CreateBitmapFromNativeBitmap(void *) {
	THROW_IF(true,"The function call wxGraphicsBitmap wxGraphicsRenderer::CreateBitmapFromNativeBitmap(void *) is not implemented in wrapper.");
	return wxGraphicsBitmap();
};

public:
// wxGraphicsContext * wxGraphicsRenderer::CreateContext(wxWindow * window)
wxGraphicsContext * CreateContext(wxWindow *) {
	THROW_IF(true,"The function call wxGraphicsContext * wxGraphicsRenderer::CreateContext(wxWindow *) is not implemented in wrapper.");
	return NULL;
};

public:
// wxGraphicsContext * wxGraphicsRenderer::CreateContext(const wxWindowDC & windowDC)
wxGraphicsContext * CreateContext(const wxWindowDC &) {
	THROW_IF(true,"The function call wxGraphicsContext * wxGraphicsRenderer::CreateContext(const wxWindowDC &) is not implemented in wrapper.");
	return NULL;
};

public:
// wxGraphicsContext * wxGraphicsRenderer::CreateContext(const wxMemoryDC & memoryDC)
wxGraphicsContext * CreateContext(const wxMemoryDC &) {
	THROW_IF(true,"The function call wxGraphicsContext * wxGraphicsRenderer::CreateContext(const wxMemoryDC &) is not implemented in wrapper.");
	return NULL;
};

public:
// wxGraphicsContext * wxGraphicsRenderer::CreateContext(const wxPrinterDC & printerDC)
wxGraphicsContext * CreateContext(const wxPrinterDC &) {
	THROW_IF(true,"The function call wxGraphicsContext * wxGraphicsRenderer::CreateContext(const wxPrinterDC &) is not implemented in wrapper.");
	return NULL;
};

public:
// wxGraphicsContext * wxGraphicsRenderer::CreateContext(const wxEnhMetaFileDC & metaFileDC)
wxGraphicsContext * CreateContext(const wxEnhMetaFileDC &) {
	THROW_IF(true,"The function call wxGraphicsContext * wxGraphicsRenderer::CreateContext(const wxEnhMetaFileDC &) is not implemented in wrapper.");
	return NULL;
};

public:
// wxGraphicsBrush wxGraphicsRenderer::CreateBrush(const wxBrush & brush)
wxGraphicsBrush CreateBrush(const wxBrush &) {
	THROW_IF(true,"The function call wxGraphicsBrush wxGraphicsRenderer::CreateBrush(const wxBrush &) is not implemented in wrapper.");
	return wxGraphicsBrush();
};

public:
// wxGraphicsContext * wxGraphicsRenderer::CreateContextFromNativeContext(void * context)
wxGraphicsContext * CreateContextFromNativeContext(void *) {
	THROW_IF(true,"The function call wxGraphicsContext * wxGraphicsRenderer::CreateContextFromNativeContext(void *) is not implemented in wrapper.");
	return NULL;
};

public:
// wxGraphicsContext * wxGraphicsRenderer::CreateContextFromNativeWindow(void * window)
wxGraphicsContext * CreateContextFromNativeWindow(void *) {
	THROW_IF(true,"The function call wxGraphicsContext * wxGraphicsRenderer::CreateContextFromNativeWindow(void *) is not implemented in wrapper.");
	return NULL;
};

public:
// wxGraphicsContext * wxGraphicsRenderer::CreateMeasuringContext()
wxGraphicsContext * CreateMeasuringContext() {
	THROW_IF(true,"The function call wxGraphicsContext * wxGraphicsRenderer::CreateMeasuringContext() is not implemented in wrapper.");
	return NULL;
};

public:
// wxGraphicsFont wxGraphicsRenderer::CreateFont(const wxFont & font, const wxColour & col = * wxBLACK)
wxGraphicsFont CreateFont(const wxFont &, const wxColour &) {
	THROW_IF(true,"The function call wxGraphicsFont wxGraphicsRenderer::CreateFont(const wxFont &, const wxColour &) is not implemented in wrapper.");
	return wxGraphicsFont();
};

public:
// wxGraphicsFont wxGraphicsRenderer::CreateFont(double sizeInPixels, const wxString & facename, int flags = ::wxFONTFLAG_DEFAULT, const wxColour & col = * wxBLACK)
wxGraphicsFont CreateFont(double, const wxString &, int, const wxColour &) {
	THROW_IF(true,"The function call wxGraphicsFont wxGraphicsRenderer::CreateFont(double, const wxString &, int, const wxColour &) is not implemented in wrapper.");
	return wxGraphicsFont();
};

public:
// wxGraphicsBrush wxGraphicsRenderer::CreateLinearGradientBrush(double x1, double y1, double x2, double y2, const wxGraphicsGradientStops & stops)
wxGraphicsBrush CreateLinearGradientBrush(double, double, double, double, const wxGraphicsGradientStops &) {
	THROW_IF(true,"The function call wxGraphicsBrush wxGraphicsRenderer::CreateLinearGradientBrush(double, double, double, double, const wxGraphicsGradientStops &) is not implemented in wrapper.");
	return wxGraphicsBrush();
};

public:
// wxGraphicsMatrix wxGraphicsRenderer::CreateMatrix(double a = 1.0, double b = 0.0, double c = 0.0, double d = 1.0, double tx = 0.0, double ty = 0.0)
wxGraphicsMatrix CreateMatrix(double, double, double, double, double, double) {
	THROW_IF(true,"The function call wxGraphicsMatrix wxGraphicsRenderer::CreateMatrix(double, double, double, double, double, double) is not implemented in wrapper.");
	return wxGraphicsMatrix();
};

public:
// wxGraphicsPath wxGraphicsRenderer::CreatePath()
wxGraphicsPath CreatePath() {
	THROW_IF(true,"The function call wxGraphicsPath wxGraphicsRenderer::CreatePath() is not implemented in wrapper.");
	return wxGraphicsPath();
};

public:
// wxGraphicsPen wxGraphicsRenderer::CreatePen(const wxPen & pen)
wxGraphicsPen CreatePen(const wxPen &) {
	THROW_IF(true,"The function call wxGraphicsPen wxGraphicsRenderer::CreatePen(const wxPen &) is not implemented in wrapper.");
	return wxGraphicsPen();
};

public:
// wxGraphicsBrush wxGraphicsRenderer::CreateRadialGradientBrush(double xo, double yo, double xc, double yc, double radius, const wxGraphicsGradientStops & stops)
wxGraphicsBrush CreateRadialGradientBrush(double, double, double, double, double, const wxGraphicsGradientStops &) {
	THROW_IF(true,"The function call wxGraphicsBrush wxGraphicsRenderer::CreateRadialGradientBrush(double, double, double, double, double, const wxGraphicsGradientStops &) is not implemented in wrapper.");
	return wxGraphicsBrush();
};

public:
// wxGraphicsBitmap wxGraphicsRenderer::CreateSubBitmap(const wxGraphicsBitmap & bitmap, double x, double y, double w, double h)
wxGraphicsBitmap CreateSubBitmap(const wxGraphicsBitmap &, double, double, double, double) {
	THROW_IF(true,"The function call wxGraphicsBitmap wxGraphicsRenderer::CreateSubBitmap(const wxGraphicsBitmap &, double, double, double, double) is not implemented in wrapper.");
	return wxGraphicsBitmap();
};

};




#endif


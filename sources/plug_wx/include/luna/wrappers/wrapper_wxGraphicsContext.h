#ifndef _WRAPPERS_WRAPPER_WXGRAPHICSCONTEXT_H_
#define _WRAPPERS_WRAPPER_WXGRAPHICSCONTEXT_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/graphics.h>

class wrapper_wxGraphicsContext : public wxGraphicsContext, public luna_wrapper_base {

public:
		

	~wrapper_wxGraphicsContext() {
		logDEBUG3("Calling delete function for wrapper wxGraphicsContext");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxGraphicsContext*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxGraphicsContext*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxGraphicsContext::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxGraphicsContext*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxGraphicsContext::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxGraphicsContext*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxGraphicsContext::GetClassInfo();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


public:
// void wxGraphicsContext::Clip(const wxRegion & region)
void Clip(const wxRegion &) {
	THROW_IF(true,"The function call void wxGraphicsContext::Clip(const wxRegion &) is not implemented in wrapper.");
};

public:
// void wxGraphicsContext::Clip(double x, double y, double w, double h)
void Clip(double, double, double, double) {
	THROW_IF(true,"The function call void wxGraphicsContext::Clip(double, double, double, double) is not implemented in wrapper.");
};

public:
// void wxGraphicsContext::ConcatTransform(const wxGraphicsMatrix & matrix)
void ConcatTransform(const wxGraphicsMatrix &) {
	THROW_IF(true,"The function call void wxGraphicsContext::ConcatTransform(const wxGraphicsMatrix &) is not implemented in wrapper.");
};

public:
// wxGraphicsBitmap wxGraphicsContext::CreateBitmap(const wxBitmap & bitmap)
wxGraphicsBitmap CreateBitmap(const wxBitmap &) {
	THROW_IF(true,"The function call wxGraphicsBitmap wxGraphicsContext::CreateBitmap(const wxBitmap &) is not implemented in wrapper.");
	return wxGraphicsBitmap();
};

public:
// wxGraphicsBitmap wxGraphicsContext::CreateSubBitmap(const wxGraphicsBitmap & bitmap, double x, double y, double w, double h)
wxGraphicsBitmap CreateSubBitmap(const wxGraphicsBitmap &, double, double, double, double) {
	THROW_IF(true,"The function call wxGraphicsBitmap wxGraphicsContext::CreateSubBitmap(const wxGraphicsBitmap &, double, double, double, double) is not implemented in wrapper.");
	return wxGraphicsBitmap();
};

public:
// wxGraphicsBrush wxGraphicsContext::CreateRadialGradientBrush(double xo, double yo, double xc, double yc, double radius, const wxGraphicsGradientStops & stops)
wxGraphicsBrush CreateRadialGradientBrush(double, double, double, double, double, const wxGraphicsGradientStops &) {
	THROW_IF(true,"The function call wxGraphicsBrush wxGraphicsContext::CreateRadialGradientBrush(double, double, double, double, double, const wxGraphicsGradientStops &) is not implemented in wrapper.");
	return wxGraphicsBrush();
};

public:
// void wxGraphicsContext::DrawBitmap(const wxGraphicsBitmap & bmp, double x, double y, double w, double h)
void DrawBitmap(const wxGraphicsBitmap &, double, double, double, double) {
	THROW_IF(true,"The function call void wxGraphicsContext::DrawBitmap(const wxGraphicsBitmap &, double, double, double, double) is not implemented in wrapper.");
};

public:
// void wxGraphicsContext::DrawBitmap(const wxBitmap & bmp, double x, double y, double w, double h)
void DrawBitmap(const wxBitmap &, double, double, double, double) {
	THROW_IF(true,"The function call void wxGraphicsContext::DrawBitmap(const wxBitmap &, double, double, double, double) is not implemented in wrapper.");
};

public:
// void wxGraphicsContext::DrawIcon(const wxIcon & icon, double x, double y, double w, double h)
void DrawIcon(const wxIcon &, double, double, double, double) {
	THROW_IF(true,"The function call void wxGraphicsContext::DrawIcon(const wxIcon &, double, double, double, double) is not implemented in wrapper.");
};

public:
// void wxGraphicsContext::FillPath(const wxGraphicsPath & path, wxPolygonFillMode fillStyle = ::wxODDEVEN_RULE)
void FillPath(const wxGraphicsPath &, wxPolygonFillMode) {
	THROW_IF(true,"The function call void wxGraphicsContext::FillPath(const wxGraphicsPath &, wxPolygonFillMode) is not implemented in wrapper.");
};

public:
// void * wxGraphicsContext::GetNativeContext()
void * GetNativeContext() {
	THROW_IF(true,"The function call void * wxGraphicsContext::GetNativeContext() is not implemented in wrapper.");
};

public:
// void wxGraphicsContext::GetPartialTextExtents(const wxString & text, wxArrayDouble & widths) const
void GetPartialTextExtents(const wxString &, wxArrayDouble &) const {
	THROW_IF(true,"The function call void wxGraphicsContext::GetPartialTextExtents(const wxString &, wxArrayDouble &) const is not implemented in wrapper.");
};

public:
// void wxGraphicsContext::GetTextExtent(const wxString & text, double * width, double * height, double * descent, double * externalLeading) const
void GetTextExtent(const wxString &, double *, double *, double *, double *) const {
	THROW_IF(true,"The function call void wxGraphicsContext::GetTextExtent(const wxString &, double *, double *, double *, double *) const is not implemented in wrapper.");
};

public:
// wxGraphicsMatrix wxGraphicsContext::GetTransform() const
wxGraphicsMatrix GetTransform() const {
	THROW_IF(true,"The function call wxGraphicsMatrix wxGraphicsContext::GetTransform() const is not implemented in wrapper.");
	return wxGraphicsMatrix();
};

public:
// void wxGraphicsContext::ResetClip()
void ResetClip() {
	THROW_IF(true,"The function call void wxGraphicsContext::ResetClip() is not implemented in wrapper.");
};

public:
// void wxGraphicsContext::Rotate(double angle)
void Rotate(double) {
	THROW_IF(true,"The function call void wxGraphicsContext::Rotate(double) is not implemented in wrapper.");
};

public:
// void wxGraphicsContext::Scale(double xScale, double yScale)
void Scale(double, double) {
	THROW_IF(true,"The function call void wxGraphicsContext::Scale(double, double) is not implemented in wrapper.");
};

public:
// void wxGraphicsContext::SetTransform(const wxGraphicsMatrix & matrix)
void SetTransform(const wxGraphicsMatrix &) {
	THROW_IF(true,"The function call void wxGraphicsContext::SetTransform(const wxGraphicsMatrix &) is not implemented in wrapper.");
};

public:
// void wxGraphicsContext::StrokePath(const wxGraphicsPath & path)
void StrokePath(const wxGraphicsPath &) {
	THROW_IF(true,"The function call void wxGraphicsContext::StrokePath(const wxGraphicsPath &) is not implemented in wrapper.");
};

public:
// void wxGraphicsContext::Translate(double dx, double dy)
void Translate(double, double) {
	THROW_IF(true,"The function call void wxGraphicsContext::Translate(double, double) is not implemented in wrapper.");
};

public:
// void wxGraphicsContext::BeginLayer(double opacity)
void BeginLayer(double) {
	THROW_IF(true,"The function call void wxGraphicsContext::BeginLayer(double) is not implemented in wrapper.");
};

public:
// void wxGraphicsContext::EndLayer()
void EndLayer() {
	THROW_IF(true,"The function call void wxGraphicsContext::EndLayer() is not implemented in wrapper.");
};

public:
// bool wxGraphicsContext::SetAntialiasMode(wxAntialiasMode antialias)
bool SetAntialiasMode(wxAntialiasMode) {
	THROW_IF(true,"The function call bool wxGraphicsContext::SetAntialiasMode(wxAntialiasMode) is not implemented in wrapper.");
	return bool();
};

public:
// bool wxGraphicsContext::SetInterpolationQuality(wxInterpolationQuality interpolation)
bool SetInterpolationQuality(wxInterpolationQuality) {
	THROW_IF(true,"The function call bool wxGraphicsContext::SetInterpolationQuality(wxInterpolationQuality) is not implemented in wrapper.");
	return bool();
};

public:
// bool wxGraphicsContext::SetCompositionMode(wxCompositionMode op)
bool SetCompositionMode(wxCompositionMode) {
	THROW_IF(true,"The function call bool wxGraphicsContext::SetCompositionMode(wxCompositionMode) is not implemented in wrapper.");
	return bool();
};

};




#endif


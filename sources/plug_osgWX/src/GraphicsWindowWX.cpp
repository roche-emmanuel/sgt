#include "plug_common.h"

#include "GraphicsWindowWX.h"

GraphicsWindowWX::GraphicsWindowWX(wxGLCanvas *canvas, wxGLContext* context)
{
    _canvas = canvas;
	_context = context;
	CHECK(_canvas,"Invalid wxGLCanvas.")
	CHECK(_context,"Invalid wxGLContext.")
	
    _traits = new GraphicsContext::Traits;

    wxPoint pos = _canvas->GetPosition();
    wxSize  size = _canvas->GetSize();

    _traits->x = pos.x;
    _traits->y = pos.y;
    _traits->width = size.x;
    _traits->height = size.y;

    init();
}

GraphicsWindowWX::~GraphicsWindowWX()
{
	trDEBUG("GraphicsWindowWX","Deleting graphics window.");
}

void GraphicsWindowWX::init()
{
    if (valid())
    {
        setState( new osg::State );
        getState()->setGraphicsContext(this);

        if (_traits.valid() && _traits->sharedContext.valid())
        {
            getState()->setContextID( _traits->sharedContext->getState()->getContextID() );
            incrementContextIDUsageCount( getState()->getContextID() );
        }
        else
        {
            getState()->setContextID( osg::GraphicsContext::createNewContextID() );
        }
		
		trDEBUG("GraphicsWindowWX","Using GL context ID: "<<getState()->getContextID());
    }
}

void GraphicsWindowWX::grabFocus()
{
    // focus the canvas
	if(_canvas){
		_canvas->SetFocus();
	}
}

void GraphicsWindowWX::grabFocusIfPointerInWindow()
{
    // focus this window, if the pointer is in the window
    wxPoint pos = wxGetMousePosition();
    if (_canvas && wxFindWindowAtPoint(pos) == _canvas)
        _canvas->SetFocus();
}

void GraphicsWindowWX::useCursor(bool cursorOn)
{
	if(_canvas){
		_canvas->SetCursor(cursorOn?wxNullCursor:wxCursor(wxCURSOR_BLANK));
	}
}

bool GraphicsWindowWX::makeCurrentImplementation()
{
	if(_canvas && _context) {
		return _canvas->SetCurrent(*_context);
	}
	return false;
}

void GraphicsWindowWX::swapBuffersImplementation()
{
	if(_canvas) {
		_canvas->SwapBuffers();
	}
}

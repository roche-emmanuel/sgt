#ifndef _GRAPHICSWINDOWWX_H_
#define _GRAPHICSWINDOWWX_H_

#include "plug_common.h"

class GraphicsWindowWX : public osgViewer::GraphicsWindow
{
public:
    GraphicsWindowWX(wxGLCanvas *canvas, wxGLContext* context);
    ~GraphicsWindowWX();

    void init();

    //
    // GraphicsWindow interface
    //
    void grabFocus();
    void grabFocusIfPointerInWindow();
    void useCursor(bool cursorOn);

    bool makeCurrentImplementation();
    void swapBuffersImplementation();

    // not implemented yet...just use dummy implementation to get working.
    virtual bool valid() const { return true; }
    virtual bool realizeImplementation() { return true; }
    //virtual bool isRealizedImplementation() const  { return _canvas ? _canvas->IsShownOnScreen() : false; }
    virtual bool isRealizedImplementation() const  { return _canvas ? true : false; }
    virtual void closeImplementation() {}
    virtual bool releaseContextImplementation() { return true; }

	virtual void invalidate() { 
		_canvas = NULL;
		_context = NULL;
	};
private:
    // XXX need to set _canvas to NULL when the canvas is deleted by
    // its parent. for this, need to add event handler in OSGCanvas
    wxGLCanvas*  _canvas;
	
	wxGLContext* _context;
};

#endif

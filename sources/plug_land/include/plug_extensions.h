#ifndef _PLUG_EXTENSION_H_
#define _PLUG_EXTENSION_H_

#include "luna/luna.h"
#include "osg/Drawable"

namespace land {

class ProlandDrawable : public osg::Drawable
{
public:
  ProlandDrawable() {
  	logDEBUG("Creating proland drawable object.")
  }

  /** LUNA_IGNORED */
  ProlandDrawable(const ProlandDrawable& pld,const osg::CopyOp& copyop=osg::CopyOp::SHALLOW_COPY): osg::Drawable(pld,copyop) {}

  /** LUNA_IGNORED */
  META_Object(land,ProlandDrawable)


  // the draw immediate mode method is where the OSG wraps up the drawing of
  // of OpenGL primitives.
  virtual void drawImplementation(osg::RenderInfo&) const
  {
    // teapot(..) doens't use vertex arrays at all so we don't need to toggle their state
    // if we did we'd need to something like following call
    // state.disableAllVertexArrays(), see src/osg/Geometry.cpp for the low down.

    // just call the OpenGL code.
    //teapot(14,GL_FILL);
  }
  
  
  // we need to set up the bounding box of the data too, so that the scene graph knows where this
  // objects is, for both positioning the camera at start up, and most importantly for culling.
  virtual osg::BoundingBox computeBound() const
  {
    osg::BoundingBox bbox;

    return bbox;
  }

protected:
	~ProlandDrawable() {};
};

};

#endif

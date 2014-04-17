#ifndef _PLUG_EXTENSION_H_
#define _PLUG_EXTENSION_H_

#include "luna/luna.h"
#include <GL/glew.h>

#include "osg/Drawable"

#include "ork/math/vec2.h"
#include "ork/math/vec3.h"
#include "ork/math/vec4.h"

#include "ork/render/FrameBuffer.h"
#include "ork/resource/XMLResourceLoader.h"
#include "ork/scenegraph/SceneManager.h"

namespace ork {
typedef vec2<bool> vec2b;
typedef vec3<bool> vec3b;
typedef vec4<bool> vec4b;
}

namespace land {

inline void initGlew() {
  logDEBUG("Trying to initialize Glew...")
  assert(glGetError() == 0);
  glewExperimental = GL_TRUE;
  CHECK(glewInit()==GLEW_OK,"Glew initialization failed.");
  int err = glGetError();
  if (err != GL_NO_ERROR) {
      THROW("OpenGL error " << err << ", returned string '" << gluErrorString(err) << "'")
  }
  logDEBUG("Glew initialized.")  
}

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

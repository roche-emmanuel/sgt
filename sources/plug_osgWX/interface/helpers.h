/** LUNA_EXTERNAL wx */
class wxGLCanvas {
};

/** LUNA_EXTERNAL wx */
class wxGLContext {
};

/** LUNA_EXTERNAL wx */
class wxWindow {
};

namespace osg {
class Referenced {};

}

namespace osgViewer {

class GraphicsWindow : public osg::Referenced {
public:
	void invalidate();
};

};

typedef int wxWindowID;


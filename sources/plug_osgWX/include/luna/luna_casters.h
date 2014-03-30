#ifndef _LUNA_CASTERS_H_
#define _LUNA_CASTERS_H_

#include <plug_common.h>

template <typename dstType>
struct luna_caster<osg::Referenced,dstType> {
	static inline dstType* cast(osg::Referenced* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osgViewer::GraphicsWindow,dstType> {
	static inline dstType* cast(osgViewer::GraphicsWindow* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxGLCanvas,dstType> {
	static inline dstType* cast(wxGLCanvas* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxGLContext,dstType> {
	static inline dstType* cast(wxGLContext* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<wxWindow,dstType> {
	static inline dstType* cast(wxWindow* ptr) {
		return static_cast<dstType*>(ptr);
	};
};


#endif


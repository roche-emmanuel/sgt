#ifndef _PLUG_COMMON_H_
#define _PLUG_COMMON_H_

#if defined(_MSC_VER) || defined(__CYGWIN__) || defined(__MINGW32__) || defined( __BCPLUSPLUS__)  || defined( __MWERKS__)
#  if defined( PLUG_LIBRARY_STATIC )
#    define PLUG_EXPORT
#  elif defined( PLUG_LIBRARY )
#    define PLUG_EXPORT   __declspec(dllexport)
#  else
#    define PLUG_EXPORT   __declspec(dllimport)
#  endif
#else
#  define PLUG_EXPORT
#endif

#pragma warning( disable: 4251 )

#include <lua.hpp>
#include <iostream> 

#include <osg/Vec2d>
#include <osg/Vec3d>
#include <osg/Vec4d>
#include <osg/RenderInfo>
#include <osgDB/XmlParser>
#include <OpenThreads/Block>

namespace osg {

typedef std::vector<osg::Vec2d> Vec2dVector;
typedef std::vector<osg::Vec3d> Vec3dVector;
typedef std::vector<osg::Vec4d> Vec4dVector;

}

#include "plug_extensions.h"

#include <luna/luna.h>
#include <luna/luna_types.h>

template <typename dstType>
struct luna_caster<osg::RenderInfo,dstType> {
	static inline dstType* cast(osg::RenderInfo* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osgDB::XmlNode::ControlMap,dstType> {
	static inline dstType* cast(osgDB::XmlNode::ControlMap* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<OpenThreads::Block,dstType> {
	static inline dstType* cast(OpenThreads::Block* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<OpenThreads::BlockCount,dstType> {
	static inline dstType* cast(OpenThreads::BlockCount* ptr) {
		return (dstType*)(ptr);
	};
};


#endif

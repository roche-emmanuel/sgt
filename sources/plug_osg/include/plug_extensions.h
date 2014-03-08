#ifndef _PLUG_EXTENSION_H_
#define _PLUG_EXTENSION_H_

#include "luna/luna.h"

#include <osg/State>
#include <osg/StateAttribute>
#include <osg/Uniform>
#include <osg/Program>
#include <osgDB/InputStream>
#include <osgDB/OutputStream>

namespace osg {

	typedef std::vector< osg::Vec3d > Vec3dList;
	typedef std::vector< osg::StateSet const *> StateSetList;
	typedef std::vector< std::pair<osg::StateAttribute const *,unsigned int> > StateAttributeUIntPairList;

};

/** LUNA_CLASS_EXTENSION  LUNA_RENAME postmult */
inline osg::Vec3d vec3d_premult(osg::Vec3d* vec, osg::Matrixd* mat) {
	return mat->preMult(*vec);
}

/** LUNA_CLASS_EXTENSION  LUNA_RENAME postmult */
inline osg::Vec3f vec3f_premult(osg::Vec3f* vec, osg::Matrixd* mat) {
	return mat->preMult(*vec);
}

/** LUNA_CLASS_EXTENSION  LUNA_RENAME postmult */
inline osg::Vec4d vec4d_premult(osg::Vec4d* vec, osg::Matrixd* mat) {
	return mat->preMult(*vec);
}

/** LUNA_CLASS_EXTENSION  LUNA_RENAME postmult */
inline osg::Vec4f vec4f_premult(osg::Vec4f* vec, osg::Matrixd* mat) {
	return mat->preMult(*vec);
}

/** LUNA_CLASS_EXTENSION  LUNA_RENAME __eq */
inline float matrix3f_eq(osg::Matrix3* mat, osg::Matrix3* rhs) {
	if(mat == rhs)
		return true;
		
	for(int i =0; i<16; ++i) {
		if( (*mat)[i] != (*rhs)[i] ) {
			return false;
		}
	}
	return true;
}

/** LUNA_CLASS_EXTENSION  */
inline void setInt(osg::Uniform* unif, int val) {
	unif->set(val);
}

/** LUNA_CLASS_EXTENSION  */
inline void setFloat(osg::Uniform* unif, float val) {
	unif->set(val);
}

/** LUNA_CLASS_EXTENSION  */
double readDouble(osgDB::InputStream& is);

/** LUNA_CLASS_EXTENSION  */
int readInt(osgDB::InputStream& is);

/** LUNA_CLASS_EXTENSION  */
std::string readString(osgDB::InputStream& is);

/** LUNA_CLASS_EXTENSION  */
bool readBool(osgDB::InputStream& is);

/** LUNA_CLASS_EXTENSION  */
osg::Matrixd writeMatrixd(osgDB::InputStream& is);

/** LUNA_CLASS_EXTENSION  */
osg::Vec2d writeVec2d(osgDB::InputStream& is);

/** LUNA_CLASS_EXTENSION  */
osg::Vec2f writeVec2f(osgDB::InputStream& is);

/** LUNA_CLASS_EXTENSION  */
osg::Vec3d writeVec3d(osgDB::InputStream& is);

/** LUNA_CLASS_EXTENSION  */
osg::Vec3f writeVec3f(osgDB::InputStream& is);

/** LUNA_CLASS_EXTENSION  */
osg::Vec4d writeVec4d(osgDB::InputStream& is);

/** LUNA_CLASS_EXTENSION  */
osg::Vec4f writeVec4f(osgDB::InputStream& is);

/** LUNA_CLASS_EXTENSION  */
osg::Quat writeQuat(osgDB::InputStream& is);

/** LUNA_CLASS_EXTENSION  */
osgDB::InputStream& useHexMode(osgDB::InputStream& is);

/** LUNA_CLASS_EXTENSION  */
osgDB::InputStream& useDecMode(osgDB::InputStream& is);

/** LUNA_CLASS_EXTENSION  */
osgDB::InputStream& beginBracket(osgDB::InputStream& is);

/** LUNA_CLASS_EXTENSION  */
osgDB::InputStream& endBracket(osgDB::InputStream& is);


/** LUNA_CLASS_EXTENSION  */
osgDB::OutputStream& writeDouble(osgDB::OutputStream& os, double val);

/** LUNA_CLASS_EXTENSION  */
osgDB::OutputStream& writeInt(osgDB::OutputStream& os, int val);

/** LUNA_CLASS_EXTENSION  */
osgDB::OutputStream& writeString(osgDB::OutputStream& os, const std::string& val);

/** LUNA_CLASS_EXTENSION  */
osgDB::OutputStream& writeBool(osgDB::OutputStream& os, bool val);

/** LUNA_CLASS_EXTENSION  */
osgDB::OutputStream& writeProperty(osgDB::OutputStream& os, const std::string& val);

/** LUNA_CLASS_EXTENSION  */
osgDB::OutputStream& writeMatrixd(osgDB::OutputStream& os, const osg::Matrixd& val);

/** LUNA_CLASS_EXTENSION  */
osgDB::OutputStream& writeVec2d(osgDB::OutputStream& os, const osg::Vec2d& val);

/** LUNA_CLASS_EXTENSION  */
osgDB::OutputStream& writeVec2f(osgDB::OutputStream& os, const osg::Vec2f& val);

/** LUNA_CLASS_EXTENSION  */
osgDB::OutputStream& writeVec3d(osgDB::OutputStream& os, const osg::Vec3d& val);

/** LUNA_CLASS_EXTENSION  */
osgDB::OutputStream& writeVec3f(osgDB::OutputStream& os, const osg::Vec3f& val);

/** LUNA_CLASS_EXTENSION  */
osgDB::OutputStream& writeVec4d(osgDB::OutputStream& os, const osg::Vec4d& val);

/** LUNA_CLASS_EXTENSION  */
osgDB::OutputStream& writeVec4f(osgDB::OutputStream& os, const osg::Vec4f& val);

/** LUNA_CLASS_EXTENSION  */
osgDB::OutputStream& writeQuat(osgDB::OutputStream& os, const osg::Quat& val);

/** LUNA_CLASS_EXTENSION  */
osgDB::OutputStream& endl(osgDB::OutputStream& os);

/** LUNA_CLASS_EXTENSION  */
osgDB::OutputStream& useHexMode(osgDB::OutputStream& os);

/** LUNA_CLASS_EXTENSION  */
osgDB::OutputStream& useDecMode(osgDB::OutputStream& os);

/** LUNA_CLASS_EXTENSION  */
osgDB::OutputStream& beginBracket(osgDB::OutputStream& os);

/** LUNA_CLASS_EXTENSION  */
osgDB::OutputStream& endBracket(osgDB::OutputStream& os);

#endif

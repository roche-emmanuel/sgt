#include "plug_extensions.h"

double readDouble(osgDB::InputStream& is) {
	double res;
	is >> res;
	return res;
}

int readInt(osgDB::InputStream& is) {
	int res;
	is >> res;
	return res;
}

std::string readString(osgDB::InputStream& is) {
	std::string res;
	is >> res;
	return res;
}

bool readBool(osgDB::InputStream& is) {
	bool res;
	is >> res;
	return res;
}

osg::Matrixd writeMatrixd(osgDB::InputStream& is) {
	osg::Matrixd res;
	is >> res;
	return res;
}

osg::Vec2d writeVec2d(osgDB::InputStream& is) {
	osg::Vec2d res;
	is >> res;
	return res;
}

osg::Vec2f writeVec2f(osgDB::InputStream& is) {
	osg::Vec2f res;
	is >> res;
	return res;
}

osg::Vec3d writeVec3d(osgDB::InputStream& is) {
	osg::Vec3d res;
	is >> res;
	return res;
}

osg::Vec3f writeVec3f(osgDB::InputStream& is) {
	osg::Vec3f res;
	is >> res;
	return res;
}

osg::Vec4d writeVec4d(osgDB::InputStream& is) {
	osg::Vec4d res;
	is >> res;
	return res;
}

osg::Vec4f writeVec4f(osgDB::InputStream& is) {
	osg::Vec4f res;
	is >> res;
	return res;
}

osg::Quat writeQuat(osgDB::InputStream& is) {
	osg::Quat res;
	is >> res;
	return res;
}

osgDB::InputStream& useHexMode(osgDB::InputStream& is) {
	is >> std::hex;
	return is;
}

osgDB::InputStream& useDecMode(osgDB::InputStream& is) {
	is >> std::dec;
	return is;
}

osgDB::InputStream& beginBracket(osgDB::InputStream& is) {
	is >> is.BEGIN_BRACKET;
	return is;
}

osgDB::InputStream& endBracket(osgDB::InputStream& is) {
	is >> is.END_BRACKET;
	return is;
}

osgDB::OutputStream& writeDouble(osgDB::OutputStream& os, double val) {
	os << val;
	return os;
}

osgDB::OutputStream& writeInt(osgDB::OutputStream& os, int val) {
	os << val;
	return os;
}

osgDB::OutputStream& writeString(osgDB::OutputStream& os, const std::string& val) {
	os << val;
	return os;
}

osgDB::OutputStream& writeBool(osgDB::OutputStream& os, bool val) {
	os << val;
	return os;
}

osgDB::OutputStream& writeMatrixd(osgDB::OutputStream& os, const osg::Matrixd& val) {
	os << val;
	return os;
}

osgDB::OutputStream& writeVec2d(osgDB::OutputStream& os, const osg::Vec2d& val) {
	os << val;
	return os;
}

osgDB::OutputStream& writeVec2f(osgDB::OutputStream& os, const osg::Vec2f& val) {
	os << val;
	return os;
}

osgDB::OutputStream& writeVec3d(osgDB::OutputStream& os, const osg::Vec3d& val) {
	os << val;
	return os;
}

osgDB::OutputStream& writeVec3f(osgDB::OutputStream& os, const osg::Vec3f& val) {
	os << val;
	return os;
}

osgDB::OutputStream& writeVec4d(osgDB::OutputStream& os, const osg::Vec4d& val) {
	os << val;
	return os;
}

osgDB::OutputStream& writeVec4f(osgDB::OutputStream& os, const osg::Vec4f& val) {
	os << val;
	return os;
}

osgDB::OutputStream& writeQuat(osgDB::OutputStream& os, const osg::Quat& val) {
	os << val;
	return os;
}

osgDB::OutputStream& writeProperty(osgDB::OutputStream& os, const std::string& val) {
	os << os.PROPERTY(val.c_str());
	return os;
}

osgDB::OutputStream& useHexMode(osgDB::OutputStream& os) {
	os << std::hex;
	return os;
}

osgDB::OutputStream& useDecMode(osgDB::OutputStream& os) {
	os << std::dec;
	return os;
}
osgDB::OutputStream& beginBracket(osgDB::OutputStream& os) {
	os << os.BEGIN_BRACKET;
	return os;
}

osgDB::OutputStream& endBracket(osgDB::OutputStream& os) {
	os << os.END_BRACKET;
	return os;
}

osgDB::OutputStream& endl(osgDB::OutputStream& os) {
	os << std::endl;
	return os;
}


typedef unsigned int GLenum;
typedef unsigned char GLboolean;
typedef unsigned int GLbitfield;
typedef signed char GLbyte;
typedef short GLshort;
typedef int GLint;
typedef int GLsizei;
typedef unsigned char GLubyte;
typedef unsigned short GLushort;
typedef unsigned int GLuint;
typedef float GLfloat;
typedef float GLclampf;
typedef double GLdouble;
typedef double GLclampd;
typedef void GLvoid;

class __int64 {
};


class GLUtesselator {
protected:
	~GLUtesselator();
};

typedef GLUtesselator GLUtesselatorObj;
typedef GLUtesselator GLUtriangulatorObj;

namespace std {

class istream {
protected:
	istream();
	~istream();
};

class ostream {
protected:
	ostream();
	~ostream();
};

}

class osg::ref_ptr<osg::Array> {
};

class osg::ref_ptr<osg::Image> {
};

class osg::ref_ptr<osg::PrimitiveSet> {
};

class osg::ref_ptr<osg::AnimationPath> {
};

namespace osg {


typedef NodeList RefNodePath;

class Vec2Array : public osg::Array {
public:
	Vec2Array();
	
	// void push_back(const osg::Vec2& vec);
	// unsigned int size();
	
	void accept(osg::ArrayVisitor & arg1);
	void accept(osg::ConstArrayVisitor & arg1) const;
	void accept(unsigned int index, osg::ValueVisitor & arg2);
	void accept(unsigned int index, osg::ConstValueVisitor & arg2) const;
	int compare(unsigned int lhs, unsigned int rhs) const;
	const void * getDataPointer() const;
	unsigned int getTotalDataSize() const;
	unsigned int getNumElements() const;
	const void * getDataPointer() const;
	unsigned int getTotalDataSize() const;
	osg::Object * cloneType() const;
	osg::Object * clone(const osg::CopyOp & arg1) const;
	
protected:
	~Vec2Array();
};

class Vec3Array : public osg::Array {
public:
	Vec3Array();
	
	// void push_back(const osg::Vec3& vec);
	// unsigned int size();
	
	void accept(osg::ArrayVisitor & arg1);
	void accept(osg::ConstArrayVisitor & arg1) const;
	void accept(unsigned int index, osg::ValueVisitor & arg2);
	void accept(unsigned int index, osg::ConstValueVisitor & arg2) const;
	int compare(unsigned int lhs, unsigned int rhs) const;
	const void * getDataPointer() const;
	unsigned int getTotalDataSize() const;
	unsigned int getNumElements() const;
	const void * getDataPointer() const;
	unsigned int getTotalDataSize() const;
	osg::Object * cloneType() const;
	osg::Object * clone(const osg::CopyOp & arg1) const;
	
protected:
	~Vec3Array();
};

class Vec4Array : public osg::Array {
public:
	Vec4Array();
	
	// void push_back(const osg::Vec4& vec);
	// unsigned int size();

	void accept(osg::ArrayVisitor & arg1);
	void accept(osg::ConstArrayVisitor & arg1) const;
	void accept(unsigned int index, osg::ValueVisitor & arg2);
	void accept(unsigned int index, osg::ConstValueVisitor & arg2) const;
	int compare(unsigned int lhs, unsigned int rhs) const;
	const void * getDataPointer() const;
	unsigned int getTotalDataSize() const;
	unsigned int getNumElements() const;
	const void * getDataPointer() const;
	unsigned int getTotalDataSize() const;
	osg::Object * cloneType() const;
	osg::Object * clone(const osg::CopyOp & arg1) const;
	
protected:
	~Vec4Array();
};

class MatrixList {
public:
	MatrixList();
	
};

class NodePath {
public:
	NodePath();
};

class NodePathList {
public:
	NodePathList();
};

class Polytope {
public:
	class PlaneList {
	public: 
		PlaneList();
	};
};

#define MAT3_CLASS(mat3,type) \
class mat3 { \
public: \
	mat3(type a00, type a01, type a02, type a10, type a11, type a12, type a20, type a21, type a22); \
	type operator[](int i); \
	type operator() (int row, int col); \
	void set(const mat3& rhs); \
	void set(type a00, type a01, type a02, type a10, type a11, type a12, type a20, type a21, type a22); \
	void makeIdentity (); \
};

MAT3_CLASS(Matrix3,float);
MAT3_CLASS(Matrix3d,double);

class Vec2dVector {};
class Vec3dVector {};
class Vec4dVector {};

};


LUNA_IMPLEMENT_VECTOR(osg::Vec2f,osg::Vec2Array);
LUNA_IMPLEMENT_VECTOR(osg::Vec3f,osg::Vec3Array);
LUNA_IMPLEMENT_VECTOR(osg::Vec4f,osg::Vec4Array);

LUNA_IMPLEMENT_VECTOR(osg::Vec2d,osg::Vec2dVector);
LUNA_IMPLEMENT_VECTOR(osg::Vec3d,osg::Vec3dVector);
LUNA_IMPLEMENT_VECTOR(osg::Vec4d,osg::Vec4dVector);

LUNA_IMPLEMENT_VECTOR(osg::Matrixd,osg::MatrixList);
LUNA_IMPLEMENT_VECTOR(osg::Node*,osg::NodePath);
LUNA_IMPLEMENT_VECTOR(osg::NodePath,osg::NodePathList);
LUNA_IMPLEMENT_VECTOR(osg::Plane,osg::Polytope::PlaneList);

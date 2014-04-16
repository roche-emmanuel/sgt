
namespace std {

class type_info {};

}

namespace proland {

class CurveId {};
class NodeId {};
class AreaId {};

}

namespace ork {

class Mesh<vec3f, unsigned int> {};

}
class TwBar {};

#define VEC2_CLASS(cname,type) class cname { \
public: \
    type x; \
    type y; \
	 \
	cname(); \
    cname(type xi, type yi); \
    cname(const cname& v); \
 \
    type& operator[](const int i); \
 \
    bool operator==(const cname& v) const; \
    bool operator!=(const cname& v) const; \
    cname operator+(const cname& v) const; \
    cname operator-(const cname& v) const; \
    cname operator*(const cname& v) const; \
    cname operator*(const type scalar) const; \
    cname operator/(const cname& v) const; \
    cname operator/(const type scalar) const; \
    cname operator-() const; \
	 \
    bool operator<(const cname& v) const; \
	 \
	type length() const; \
	type squaredLength() const; \
    cname normalize() const; \
    cname normalize(type l) const; \
	type distanceTo(const cname& v) const; \
	type squaredDistanceTo(const cname& v) const; \
    type dot(const cname& v) const; \
};


#define VEC3_CLASS(cname,type,cname2) class cname { \
public: \
    type x; \
    type y; \
    type z; \
	 \
	cname(); \
    cname(type xi, type yi, type zi); \
    cname(const cname& v); \
 \
    type& operator[](const int i); \
 \
    bool operator==(const cname& v) const; \
    bool operator!=(const cname& v) const; \
    cname operator+(const cname& v) const; \
    cname operator-(const cname& v) const; \
    cname operator*(const cname& v) const; \
    cname operator*(const type scalar) const; \
    cname operator/(const cname& v) const; \
    cname operator/(const type scalar) const; \
    cname operator-() const; \
	 \
    bool operator<(const cname& v) const; \
	 \
	type length() const; \
	type squaredLength() const; \
    cname normalize() const; \
    cname normalize(type l) const; \
    cname2 xy() const;\
};

/*
	type distanceTo(const cname& v) const; \
	type squaredDistanceTo(const cname& v) const; \
    type dot(const cname& v) const; \
	cname cross(const cname& v) const; \
*/

#define VEC4_CLASS(cname,type,cname2,cname3) class cname { \
public: \
    type x; \
    type y; \
    type z; \
    type w; \
	 \
	cname(); \
    cname(type xi, type yi, type zi, type wi); \
    cname(const cname& v); \
    cname(const cname3& v); \
    cname(const cname3& v, type wi); \
 \
    type& operator[](const int i); \
 \
    bool operator==(const cname& v) const; \
    bool operator!=(const cname& v) const; \
    cname operator+(const cname& v) const; \
    cname operator-(const cname& v) const; \
    cname operator*(const cname& v) const; \
    cname operator*(const type scalar) const; \
    cname operator/(const cname& v) const; \
    cname operator/(const type scalar) const; \
    cname operator-() const; \
	 \
    bool operator<(const cname& v) const; \
	 \
	cname3 xyzw() const; \
    cname3 xyz() const; \
    cname2 xy() const;\
};

/*
    type dot(const cname& v) const; \
    type dot(const cname3& v) const; \
*/

#define BOX2_CLASS(box2,type,vec2) struct box2 { \
public: \
    type xmin; \
    type xmax; \
    type ymin; \
    type ymax; \
 \
    box2(); \
    box2(type xmin, type xmax, type ymin, type ymax); \
    box2(const vec2 &p, const vec2 &q); \
    vec2 center() const; \
    type width() const; \
    type height() const; \
    type area() const; \
    box2 enlarge(type w) const; \
    box2 enlarge(const vec2 &p) const; \
    box2 enlarge(const box2 &r) const; \
    bool contains(const vec2 &p) const; \
    bool contains(const box2& bb) const; \
    bool intersects(const box2 &a) const; \
    vec2 nearestInnerPoint(vec2 a) const; \
    type distanceTo(vec2 a) const; \
    type squaredDistanceTo(vec2 a) const; \
    bool operator==(const box2& b) const; \
    bool operator!=(const box2& b) const; \
};

#define BOX3_CLASS(box3,type,vec3) struct box3 { \
public: \
    type xmin; \
    type xmax; \
    type ymin; \
    type ymax; \
    type zmin; \
    type zmax; \
    box3(); \
    box3(type xmin, type xmax, type ymin, type ymax, type zmin, type zmax); \
    box3(const vec3 &p, const vec3 &q); \
    vec3 center() const; \
    box3 enlarge(const vec3 &p) const; \
    box3 enlarge(const box3 &r) const; \
    bool contains(const vec3 &p) const; \
};

#define MAT2_CLASS(mat2,type,vec2) class mat2 { \
public: \
    mat2(); \
    mat2(type m00, type m01, \
         type m10, type m11); \
    mat2(const mat2& mat); \
    const type* coefficients() const; \
    type* operator[](int iRow); \
    vec2 getColumn(int iCol) const; \
    void setColumn(int iCol, const vec2& v); \
    mat2& operator=(const mat2& mat); \
    bool operator==(const mat2& mat) const; \
    bool operator!=(const mat2& mat) const; \
    mat2 operator+(const mat2& mat) const; \
    mat2 operator-(const mat2& mat) const; \
    mat2 operator*(const mat2& mat) const; \
    vec2 operator*(const vec2 &v) const; \
    mat2 operator*(const type scalar) const; \
    mat2 operator-() const; \
    mat2 transpose() const; \
    bool inverse(mat2& mInv, type tolerance = 1e-06) const; \
    mat2 inverse(type tolerance = 1e-06) const; \
    type determinant() const; \
    type trace() const; \
};

#define MAT3_CLASS(mat3,type,vec3,box3,vec2) class mat3 { \
public: \
    mat3(); \
    mat3(type m00, type m01, type m02, \
         type m10, type m11, type m12, \
         type m20, type m21, type m22); \
    mat3(const type *array); \
    mat3(const mat3& mat); \
    const type* coefficients() const; \
    type* operator[](int iRow); \
    vec3 getColumn(int iCol) const; \
    void setColumn(int iCol, const vec3& v); \
    void fromAxes(const vec3& xAxis, const vec3& yAxis, const vec3& zAxis); \
    mat3& operator=(const mat3& mat); \
    bool operator==(const mat3& mat) const; \
    bool operator!=(const mat3& mat) const; \
    mat3 operator+(const mat3& mat) const; \
    mat3 operator-(const mat3& mat) const; \
    mat3 operator*(const mat3& mat) const; \
    vec3 operator*(const vec3 &v) const; \
    vec2 operator*(const vec2& v) const; \
    box3 operator*(const box3 &b) const; \
    mat3 operator*(const type scalar) const; \
    mat3 operator-() const; \
    mat3 transpose() const; \
    bool inverse(mat3& mInv, type tolerance = 1e-06) const; \
    mat3 inverse(type tolerance = 1e-06) const; \
    type determinant() const; \
    type trace() const; \
};

#define MAT4_CLASS(mat4,type,vec4,vec3,box3,mat3) class mat4 { \
public: \
    mat4(); \
    mat4(type m00, type m01, type m02, type m03, \
         type m10, type m11, type m12, type m13, \
         type m20, type m21, type m22, type m23, \
         type m30, type m31, type m32, type m33); \
    mat4(const type *array); \
    mat4(const type array[4][4]); \
    mat4(const mat3& m3x3); \
    mat4(const osg::Matrixd& mat); \
    const type* coefficients() const; \
    const type* operator[](int iRow) const; \
    type *operator[](int iRow); \
    void operator=(const mat3& m3); \
    bool operator==(const mat4& m2) const; \
    bool operator!=(const mat4& m2) const; \
    mat4 operator+(const mat4& m2) const; \
    mat4 operator-(const mat4& m2) const; \
    mat4 operator*(const mat4& m2) const; \
    vec4 operator*(const vec4& v) const; \
    vec3 operator*(const vec3& v) const; \
    box3 operator*(const box3& b) const; \
    mat4 operator*(type f) const; \
    mat4 transpose(void) const; \
    mat4 adjoint() const; \
    mat4 inverse() const; \
    mat3 mat3x3() const; \
    osg::Matrixd toMatrixd() const; \
    void fromMatrixd(const osg::Matrixd& mat); \
    type determinant() const; \
    static mat4 translate(const vec3& v); \
    static mat4 rotatex(type angle); \
    static mat4 rotatey(type angle); \
    static mat4 rotatez(type angle); \
    static mat4 perspectiveProjection(type fovy, type aspect, type zNear, type zFar); \
    static mat4 orthoProjection(type xRight, type xLeft, type yTop, type yBottom, type zNear, type zFar); \
};

#define QUAT_CLASS(quat,type,vec3,mat4,mat3) class quat { \
public: \
    type x; \
    type y; \
    type z; \
    type w; \
    quat(); \
    quat(type x, type y, type z, type w); \
    quat(const type v[4]); \
    quat(const quat& v); \
    quat(const vec3& axis, type angle); \
    quat(const vec3& to, const vec3& from); \
    quat(const mat3 &m); \
    quat operator*(const quat &a) const; \
    vec3 operator*(const vec3& a) const; \
    quat inverse() const; \
    type length() const; \
    quat normalize() const; \
    mat3 toMat3() const; \
    mat4 toMat4() const; \
    vec3 getAxis() const; \
    type getAngle() const; \
};

// bool isNaN(float x);
// bool isNaN(double x);
// bool isFinite(float x);
bool isFinite(double x);
// bool isInf(float x);
bool isInf(double x);
// bool isSubnormal(float x);
bool isSubnormal(double x);

namespace ork {

VEC2_CLASS(vec2h,half);
VEC2_CLASS(vec2f,float);
VEC2_CLASS(vec2d,double);
VEC2_CLASS(vec2i,int);
VEC2_CLASS(vec2b,bool);
// VEC2_CLASS(vec2pm,ork::PolygonMode);

VEC3_CLASS(vec3h,half,vec2h);
VEC3_CLASS(vec3f,float,vec2f);
VEC3_CLASS(vec3d,double,vec2d);
VEC3_CLASS(vec3i,int,vec2i);
VEC3_CLASS(vec3b,bool,vec2b);

VEC4_CLASS(vec4h,half,vec2h,vec3h);
VEC4_CLASS(vec4f,float,vec2f,vec3f);
VEC4_CLASS(vec4d,double,vec2d,vec3d);
VEC4_CLASS(vec4i,int,vec2i,vec3i);
VEC4_CLASS(vec4b,bool,vec2b,vec3b);

BOX2_CLASS(box2f,float,vec2f);
BOX2_CLASS(box2d,double,vec2d);
BOX2_CLASS(box2i,int,vec2i);

BOX3_CLASS(box3f,float,vec3f);
BOX3_CLASS(box3d,double,vec3d);
BOX3_CLASS(box3i,int,vec3i);

MAT2_CLASS(mat2f,float,vec2f);
MAT2_CLASS(mat2d,double,vec2d);

MAT3_CLASS(mat3f,float,vec3f,box3f,vec2f);
MAT3_CLASS(mat3d,double,vec3d,box3d,vec2d);

MAT4_CLASS(mat4f,float,vec4f,vec3f,box3f,mat3f);
MAT4_CLASS(mat4d,double,vec4d,vec3d,box3d,mat3d);

QUAT_CLASS(quatf,float,vec3f,mat4f,mat3f);
QUAT_CLASS(quatd,double,vec3d,mat4d,mat3d);

};

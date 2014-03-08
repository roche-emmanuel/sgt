#ifndef _LUNA_CASTERS_H_
#define _LUNA_CASTERS_H_

#include <plug_common.h>

template <typename dstType>
struct luna_caster<__int64,dstType> {
	static inline dstType* cast(__int64* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::AnimationPath::ControlPoint,dstType> {
	static inline dstType* cast(osg::AnimationPath::ControlPoint* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::vector< osg::ref_ptr< osgUtil::EdgeCollector::Edge > >,dstType> {
	static inline dstType* cast(std::vector< osg::ref_ptr< osgUtil::EdgeCollector::Edge > >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<GLUtesselator,dstType> {
	static inline dstType* cast(GLUtesselator* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::KdTree::LineSegmentIntersection,dstType> {
	static inline dstType* cast(osg::KdTree::LineSegmentIntersection* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::vector< unsigned int >,dstType> {
	static inline dstType* cast(std::vector< unsigned int >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::vector< double >,dstType> {
	static inline dstType* cast(std::vector< double >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osgDB::ExternalFileWriter::ObjectData,dstType> {
	static inline dstType* cast(osgDB::ExternalFileWriter::ObjectData* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::ArgumentParser::Parameter,dstType> {
	static inline dstType* cast(osg::ArgumentParser::Parameter* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::PagedLOD::PerRangeData,dstType> {
	static inline dstType* cast(osg::PagedLOD::PerRangeData* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osgDB::ImageOptions::PixelWindow,dstType> {
	static inline dstType* cast(osgDB::ImageOptions::PixelWindow* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osgDB::ImageOptions::RatioWindow,dstType> {
	static inline dstType* cast(osgDB::ImageOptions::RatioWindow* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osgDB::ReaderWriter::ReadResult,dstType> {
	static inline dstType* cast(osgDB::ReaderWriter::ReadResult* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::GraphicsContext::ScreenIdentifier,dstType> {
	static inline dstType* cast(osg::GraphicsContext::ScreenIdentifier* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::GraphicsContext::ScreenSettings,dstType> {
	static inline dstType* cast(osg::GraphicsContext::ScreenSettings* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::Texture::TextureProfile,dstType> {
	static inline dstType* cast(osg::Texture::TextureProfile* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::vector< osgGA::GUIEventAdapter::TouchData::TouchPoint >,dstType> {
	static inline dstType* cast(std::vector< osgGA::GUIEventAdapter::TouchData::TouchPoint >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osgGA::GUIEventAdapter::TouchData::TouchPoint,dstType> {
	static inline dstType* cast(osgGA::GUIEventAdapter::TouchData::TouchPoint* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::KdTree::Triangle,dstType> {
	static inline dstType* cast(osg::KdTree::Triangle* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::Program::UniformBlockInfo,dstType> {
	static inline dstType* cast(osg::Program::UniformBlockInfo* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::Geometry::Vec3ArrayData,dstType> {
	static inline dstType* cast(osg::Geometry::Vec3ArrayData* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osgDB::ReaderWriter::WriteResult,dstType> {
	static inline dstType* cast(osgDB::ReaderWriter::WriteResult* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<OpenThreads::Atomic,dstType> {
	static inline dstType* cast(OpenThreads::Atomic* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<OpenThreads::AtomicPtr,dstType> {
	static inline dstType* cast(OpenThreads::AtomicPtr* ptr) {
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
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<OpenThreads::ScopedReadLock,dstType> {
	static inline dstType* cast(OpenThreads::ScopedReadLock* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<OpenThreads::ScopedWriteLock,dstType> {
	static inline dstType* cast(OpenThreads::ScopedWriteLock* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::TemplateIndexArray< signed char, osg::Array::ByteArrayType, 1, GL_BYTE >,dstType> {
	static inline dstType* cast(osg::TemplateIndexArray< signed char, osg::Array::ByteArrayType, 1, GL_BYTE >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::TemplateIndexArray< short, osg::Array::ShortArrayType, 1, GL_SHORT >,dstType> {
	static inline dstType* cast(osg::TemplateIndexArray< short, osg::Array::ShortArrayType, 1, GL_SHORT >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::TemplateIndexArray< int, osg::Array::IntArrayType, 1, 0x1404 >,dstType> {
	static inline dstType* cast(osg::TemplateIndexArray< int, osg::Array::IntArrayType, 1, 0x1404 >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::TemplateIndexArray< unsigned char, osg::Array::UByteArrayType, 1, GL_UNSIGNED_BYTE >,dstType> {
	static inline dstType* cast(osg::TemplateIndexArray< unsigned char, osg::Array::UByteArrayType, 1, GL_UNSIGNED_BYTE >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::TemplateIndexArray< unsigned short, osg::Array::UShortArrayType, 1, GL_UNSIGNED_SHORT >,dstType> {
	static inline dstType* cast(osg::TemplateIndexArray< unsigned short, osg::Array::UShortArrayType, 1, GL_UNSIGNED_SHORT >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::TemplateIndexArray< unsigned int, osg::Array::UIntArrayType, 1, 0x1405 >,dstType> {
	static inline dstType* cast(osg::TemplateIndexArray< unsigned int, osg::Array::UIntArrayType, 1, 0x1405 >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::TemplateArray< float, osg::Array::FloatArrayType, 1, GL_FLOAT >,dstType> {
	static inline dstType* cast(osg::TemplateArray< float, osg::Array::FloatArrayType, 1, GL_FLOAT >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::TemplateArray< osg::Vec4ub, osg::Array::Vec4ubArrayType, 4, GL_UNSIGNED_BYTE >,dstType> {
	static inline dstType* cast(osg::TemplateArray< osg::Vec4ub, osg::Array::Vec4ubArrayType, 4, GL_UNSIGNED_BYTE >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::TemplateArray< osg::Vec2s, osg::Array::Vec2sArrayType, 2, GL_SHORT >,dstType> {
	static inline dstType* cast(osg::TemplateArray< osg::Vec2s, osg::Array::Vec2sArrayType, 2, GL_SHORT >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::TemplateArray< osg::Vec3s, osg::Array::Vec3sArrayType, 3, GL_SHORT >,dstType> {
	static inline dstType* cast(osg::TemplateArray< osg::Vec3s, osg::Array::Vec3sArrayType, 3, GL_SHORT >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::TemplateArray< osg::Vec4s, osg::Array::Vec4sArrayType, 4, GL_SHORT >,dstType> {
	static inline dstType* cast(osg::TemplateArray< osg::Vec4s, osg::Array::Vec4sArrayType, 4, GL_SHORT >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::TemplateArray< osg::Vec2b, osg::Array::Vec2bArrayType, 2, GL_BYTE >,dstType> {
	static inline dstType* cast(osg::TemplateArray< osg::Vec2b, osg::Array::Vec2bArrayType, 2, GL_BYTE >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::TemplateArray< osg::Vec3b, osg::Array::Vec3bArrayType, 3, GL_BYTE >,dstType> {
	static inline dstType* cast(osg::TemplateArray< osg::Vec3b, osg::Array::Vec3bArrayType, 3, GL_BYTE >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::TemplateArray< osg::Vec4b, osg::Array::Vec4bArrayType, 4, GL_BYTE >,dstType> {
	static inline dstType* cast(osg::TemplateArray< osg::Vec4b, osg::Array::Vec4bArrayType, 4, GL_BYTE >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::TemplateArray< double, osg::Array::DoubleArrayType, 1, 0x140A >,dstType> {
	static inline dstType* cast(osg::TemplateArray< double, osg::Array::DoubleArrayType, 1, 0x140A >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::TemplateArray< osg::Vec2d, osg::Array::Vec2dArrayType, 2, 0x140A >,dstType> {
	static inline dstType* cast(osg::TemplateArray< osg::Vec2d, osg::Array::Vec2dArrayType, 2, 0x140A >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::TemplateArray< osg::Vec3d, osg::Array::Vec3dArrayType, 3, 0x140A >,dstType> {
	static inline dstType* cast(osg::TemplateArray< osg::Vec3d, osg::Array::Vec3dArrayType, 3, 0x140A >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::TemplateArray< osg::Vec4d, osg::Array::Vec4dArrayType, 4, 0x140A >,dstType> {
	static inline dstType* cast(osg::TemplateArray< osg::Vec4d, osg::Array::Vec4dArrayType, 4, 0x140A >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::TemplateArray< osg::Matrixf, osg::Array::MatrixArrayType, 16, GL_FLOAT >,dstType> {
	static inline dstType* cast(osg::TemplateArray< osg::Matrixf, osg::Array::MatrixArrayType, 16, GL_FLOAT >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::BoundingBoxImpl< osg::Vec3f >,dstType> {
	static inline dstType* cast(osg::BoundingBoxImpl< osg::Vec3f >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::BoundingBoxImpl< osg::Vec3d >,dstType> {
	static inline dstType* cast(osg::BoundingBoxImpl< osg::Vec3d >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::BoundingSphereImpl< osg::Vec3f >,dstType> {
	static inline dstType* cast(osg::BoundingSphereImpl< osg::Vec3f >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::BoundingSphereImpl< osg::Vec3d >,dstType> {
	static inline dstType* cast(osg::BoundingSphereImpl< osg::Vec3d >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::list< osg::ref_ptr< osg::GLBufferObject > >,dstType> {
	static inline dstType* cast(std::list< osg::ref_ptr< osg::GLBufferObject > >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::pair< double, double >,dstType> {
	static inline dstType* cast(std::pair< double, double >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::vector< osg::ref_ptr< osg::Node > >,dstType> {
	static inline dstType* cast(std::vector< osg::ref_ptr< osg::Node > >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::vector< osg::ref_ptr< osg::Image > >,dstType> {
	static inline dstType* cast(std::vector< osg::ref_ptr< osg::Image > >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::MixinVector< int >,dstType> {
	static inline dstType* cast(osg::MixinVector< int >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::MixinVector< unsigned char >,dstType> {
	static inline dstType* cast(osg::MixinVector< unsigned char >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::MixinVector< unsigned short >,dstType> {
	static inline dstType* cast(osg::MixinVector< unsigned short >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::MixinVector< unsigned int >,dstType> {
	static inline dstType* cast(osg::MixinVector< unsigned int >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::vector< osg::ShaderComponent * >,dstType> {
	static inline dstType* cast(std::vector< osg::ShaderComponent * >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::vector< osg::ShadowVolumeOccluder >,dstType> {
	static inline dstType* cast(std::vector< osg::ShadowVolumeOccluder >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::Matrix2Template< float >,dstType> {
	static inline dstType* cast(osg::Matrix2Template< float >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::Matrix2x3Template< float >,dstType> {
	static inline dstType* cast(osg::Matrix2x3Template< float >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::Matrix2x4Template< float >,dstType> {
	static inline dstType* cast(osg::Matrix2x4Template< float >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::Matrix3x2Template< float >,dstType> {
	static inline dstType* cast(osg::Matrix3x2Template< float >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::Matrix3x4Template< float >,dstType> {
	static inline dstType* cast(osg::Matrix3x4Template< float >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::Matrix4x2Template< float >,dstType> {
	static inline dstType* cast(osg::Matrix4x2Template< float >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::Matrix4x3Template< float >,dstType> {
	static inline dstType* cast(osg::Matrix4x3Template< float >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::Matrix2Template< double >,dstType> {
	static inline dstType* cast(osg::Matrix2Template< double >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::Matrix2x3Template< double >,dstType> {
	static inline dstType* cast(osg::Matrix2x3Template< double >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::Matrix2x4Template< double >,dstType> {
	static inline dstType* cast(osg::Matrix2x4Template< double >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::Matrix3x2Template< double >,dstType> {
	static inline dstType* cast(osg::Matrix3x2Template< double >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::Matrix3x4Template< double >,dstType> {
	static inline dstType* cast(osg::Matrix3x4Template< double >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::Matrix4x2Template< double >,dstType> {
	static inline dstType* cast(osg::Matrix4x2Template< double >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::Matrix4x3Template< double >,dstType> {
	static inline dstType* cast(osg::Matrix4x3Template< double >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::TemplateValueObject< std::string >,dstType> {
	static inline dstType* cast(osg::TemplateValueObject< std::string >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::TemplateValueObject< bool >,dstType> {
	static inline dstType* cast(osg::TemplateValueObject< bool >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::TemplateValueObject< char >,dstType> {
	static inline dstType* cast(osg::TemplateValueObject< char >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::TemplateValueObject< unsigned char >,dstType> {
	static inline dstType* cast(osg::TemplateValueObject< unsigned char >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::TemplateValueObject< short >,dstType> {
	static inline dstType* cast(osg::TemplateValueObject< short >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::TemplateValueObject< unsigned short >,dstType> {
	static inline dstType* cast(osg::TemplateValueObject< unsigned short >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::TemplateValueObject< int >,dstType> {
	static inline dstType* cast(osg::TemplateValueObject< int >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::TemplateValueObject< unsigned int >,dstType> {
	static inline dstType* cast(osg::TemplateValueObject< unsigned int >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::TemplateValueObject< float >,dstType> {
	static inline dstType* cast(osg::TemplateValueObject< float >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::TemplateValueObject< double >,dstType> {
	static inline dstType* cast(osg::TemplateValueObject< double >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::TemplateValueObject< osg::Vec2f >,dstType> {
	static inline dstType* cast(osg::TemplateValueObject< osg::Vec2f >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::TemplateValueObject< osg::Vec3f >,dstType> {
	static inline dstType* cast(osg::TemplateValueObject< osg::Vec3f >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::TemplateValueObject< osg::Vec4f >,dstType> {
	static inline dstType* cast(osg::TemplateValueObject< osg::Vec4f >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::TemplateValueObject< osg::Vec2d >,dstType> {
	static inline dstType* cast(osg::TemplateValueObject< osg::Vec2d >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::TemplateValueObject< osg::Vec3d >,dstType> {
	static inline dstType* cast(osg::TemplateValueObject< osg::Vec3d >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::TemplateValueObject< osg::Vec4d >,dstType> {
	static inline dstType* cast(osg::TemplateValueObject< osg::Vec4d >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::TemplateValueObject< osg::Quat >,dstType> {
	static inline dstType* cast(osg::TemplateValueObject< osg::Quat >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::TemplateValueObject< osg::Plane >,dstType> {
	static inline dstType* cast(osg::TemplateValueObject< osg::Plane >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::TemplateValueObject< osg::Matrixf >,dstType> {
	static inline dstType* cast(osg::TemplateValueObject< osg::Matrixf >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::TemplateValueObject< osg::Matrixd >,dstType> {
	static inline dstType* cast(osg::TemplateValueObject< osg::Matrixd >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::vector< osg::StateSet const * >,dstType> {
	static inline dstType* cast(std::vector< osg::StateSet const * >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::map< double, osg::AnimationPath::ControlPoint >,dstType> {
	static inline dstType* cast(std::map< double, osg::AnimationPath::ControlPoint >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::map< std::string, std::string >,dstType> {
	static inline dstType* cast(std::map< std::string, std::string >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::ApplicationUsageProxy,dstType> {
	static inline dstType* cast(osg::ApplicationUsageProxy* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::ArgumentParser,dstType> {
	static inline dstType* cast(osg::ArgumentParser* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::map< std::string, osg::ArgumentParser::ErrorSeverity >,dstType> {
	static inline dstType* cast(std::map< std::string, osg::ArgumentParser::ErrorSeverity >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::vector< osg::Vec3f >,dstType> {
	static inline dstType* cast(std::vector< osg::Vec3f >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::BufferObjectProfile,dstType> {
	static inline dstType* cast(osg::BufferObjectProfile* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::GLBufferObject::BufferEntry,dstType> {
	static inline dstType* cast(osg::GLBufferObject::BufferEntry* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::map< osg::Camera::BufferComponent, osg::Camera::Attachment >,dstType> {
	static inline dstType* cast(std::map< osg::Camera::BufferComponent, osg::Camera::Attachment >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::Camera::Attachment,dstType> {
	static inline dstType* cast(osg::Camera::Attachment* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::vector< osg::ref_ptr< osg::ClipPlane > >,dstType> {
	static inline dstType* cast(std::vector< osg::ref_ptr< osg::ClipPlane > >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::set< osg::ShadowVolumeOccluder >,dstType> {
	static inline dstType* cast(std::set< osg::ShadowVolumeOccluder >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::vector< osg::ConvexPlanarPolygon >,dstType> {
	static inline dstType* cast(std::vector< osg::ConvexPlanarPolygon >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::ConvexPlanarPolygon,dstType> {
	static inline dstType* cast(osg::ConvexPlanarPolygon* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::pair< osg::ref_ptr< osg::StateSet >, osg::Polytope >,dstType> {
	static inline dstType* cast(std::pair< osg::ref_ptr< osg::StateSet >, osg::Polytope >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::vector< osg::CullingSet::StateFrustumPair >,dstType> {
	static inline dstType* cast(std::vector< osg::CullingSet::StateFrustumPair >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::vector< osg::CullingSet >,dstType> {
	static inline dstType* cast(std::vector< osg::CullingSet >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::pair< unsigned int, const osg::Referenced * >,dstType> {
	static inline dstType* cast(std::pair< unsigned int, const osg::Referenced * >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::list< osg::DeleteHandler::FrameNumberObjectPair >,dstType> {
	static inline dstType* cast(std::list< osg::DeleteHandler::FrameNumberObjectPair >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::map< unsigned int, osg::Vec4f >,dstType> {
	static inline dstType* cast(std::map< unsigned int, osg::Vec4f >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::map< unsigned int, osg::Matrixd >,dstType> {
	static inline dstType* cast(std::map< unsigned int, osg::Matrixd >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::FrameBufferAttachment,dstType> {
	static inline dstType* cast(osg::FrameBufferAttachment* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::map< osg::Camera::BufferComponent, osg::FrameBufferAttachment >,dstType> {
	static inline dstType* cast(std::map< osg::Camera::BufferComponent, osg::FrameBufferAttachment >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::vector< osg::ref_ptr< osg::Drawable > >,dstType> {
	static inline dstType* cast(std::vector< osg::ref_ptr< osg::Drawable > >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::vector< osg::Geometry::ArrayData >,dstType> {
	static inline dstType* cast(std::vector< osg::Geometry::ArrayData >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::vector< osg::ref_ptr< osg::PrimitiveSet > >,dstType> {
	static inline dstType* cast(std::vector< osg::ref_ptr< osg::PrimitiveSet > >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::vector< osg::Array * >,dstType> {
	static inline dstType* cast(std::vector< osg::Array * >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::vector< osg::DrawElements * >,dstType> {
	static inline dstType* cast(std::vector< osg::DrawElements * >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::Geometry::ArrayData,dstType> {
	static inline dstType* cast(osg::Geometry::ArrayData* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::GLBeginEndAdapter,dstType> {
	static inline dstType* cast(osg::GLBeginEndAdapter* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::PixelStorageModes,dstType> {
	static inline dstType* cast(osg::PixelStorageModes* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::vector< osg::GraphicsContext::ScreenSettings >,dstType> {
	static inline dstType* cast(std::vector< osg::GraphicsContext::ScreenSettings >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::vector< osg::GraphicsContext * >,dstType> {
	static inline dstType* cast(std::vector< osg::GraphicsContext * >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::list< osg::ref_ptr< osg::Operation > >,dstType> {
	static inline dstType* cast(std::list< osg::ref_ptr< osg::Operation > >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::list< osg::Camera * >,dstType> {
	static inline dstType* cast(std::list< osg::Camera * >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::ClampedLinearCostFunction1D,dstType> {
	static inline dstType* cast(osg::ClampedLinearCostFunction1D* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::vector< osg::ref_ptr< osg::Image::DimensionsChangedCallback > >,dstType> {
	static inline dstType* cast(std::vector< osg::ref_ptr< osg::Image::DimensionsChangedCallback > >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::Image::DataIterator,dstType> {
	static inline dstType* cast(osg::Image::DataIterator* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::vector< osg::ImageSequence::ImageData >,dstType> {
	static inline dstType* cast(std::vector< osg::ImageSequence::ImageData >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::ImageSequence::ImageData,dstType> {
	static inline dstType* cast(osg::ImageSequence::ImageData* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::vector< osg::ref_ptr< osg::AudioStream > >,dstType> {
	static inline dstType* cast(std::vector< osg::ref_ptr< osg::AudioStream > >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::vector< osg::KdTree::LineSegmentIntersection >,dstType> {
	static inline dstType* cast(std::vector< osg::KdTree::LineSegmentIntersection >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::vector< osg::KdTree::KdNode >,dstType> {
	static inline dstType* cast(std::vector< osg::KdTree::KdNode >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::vector< osg::KdTree::Triangle >,dstType> {
	static inline dstType* cast(std::vector< osg::KdTree::Triangle >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::KdTree::BuildOptions,dstType> {
	static inline dstType* cast(osg::KdTree::BuildOptions* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::KdTree::KdNode,dstType> {
	static inline dstType* cast(osg::KdTree::KdNode* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::pair< float, float >,dstType> {
	static inline dstType* cast(std::pair< float, float >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::vector< osg::LOD::MinMaxPair >,dstType> {
	static inline dstType* cast(std::vector< osg::LOD::MinMaxPair >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::Matrixd,dstType> {
	static inline dstType* cast(osg::Matrixd* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::Matrixf,dstType> {
	static inline dstType* cast(osg::Matrixf* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::vector< osg::Group * >,dstType> {
	static inline dstType* cast(std::vector< osg::Group * >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::vector< std::string >,dstType> {
	static inline dstType* cast(std::vector< std::string >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::NodeAcceptOp,dstType> {
	static inline dstType* cast(osg::NodeAcceptOp* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::set< osg::Observer * >,dstType> {
	static inline dstType* cast(std::set< osg::Observer * >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::ObserverNodePath,dstType> {
	static inline dstType* cast(osg::ObserverNodePath* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::set< osg::OperationThread * >,dstType> {
	static inline dstType* cast(std::set< osg::OperationThread * >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::vector< osg::PagedLOD::PerRangeData >,dstType> {
	static inline dstType* cast(std::vector< osg::PagedLOD::PerRangeData >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::Plane,dstType> {
	static inline dstType* cast(osg::Plane* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::Polytope,dstType> {
	static inline dstType* cast(osg::Polytope* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::fast_back_stack< unsigned int >,dstType> {
	static inline dstType* cast(osg::fast_back_stack< unsigned int >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::Polytope::PlaneList,dstType> {
	static inline dstType* cast(osg::Polytope::PlaneList* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::map< std::string, unsigned int >,dstType> {
	static inline dstType* cast(std::map< std::string, unsigned int >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::map< unsigned int, osg::Program::ActiveVarInfo >,dstType> {
	static inline dstType* cast(std::map< unsigned int, osg::Program::ActiveVarInfo >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::map< std::string, osg::Program::ActiveVarInfo >,dstType> {
	static inline dstType* cast(std::map< std::string, osg::Program::ActiveVarInfo >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::map< std::string, osg::Program::UniformBlockInfo >,dstType> {
	static inline dstType* cast(std::map< std::string, osg::Program::UniformBlockInfo >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::Program::ActiveVarInfo,dstType> {
	static inline dstType* cast(osg::Program::ActiveVarInfo* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::Quat,dstType> {
	static inline dstType* cast(osg::Quat* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::RenderInfo,dstType> {
	static inline dstType* cast(osg::RenderInfo* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::multimap< float, std::string >,dstType> {
	static inline dstType* cast(std::multimap< float, std::string >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::vector< const osg::Shader * >,dstType> {
	static inline dstType* cast(std::vector< const osg::Shader * >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::ShadowVolumeOccluder,dstType> {
	static inline dstType* cast(osg::ShadowVolumeOccluder* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::vector< osg::Polytope >,dstType> {
	static inline dstType* cast(std::vector< osg::Polytope >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::vector< float >,dstType> {
	static inline dstType* cast(std::vector< float >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::vector< osg::ref_ptr< osg::Shape > >,dstType> {
	static inline dstType* cast(std::vector< osg::ref_ptr< osg::Shape > >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::VertexAttribAlias,dstType> {
	static inline dstType* cast(osg::VertexAttribAlias* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::pair< osg::StateAttribute::Type, unsigned int >,dstType> {
	static inline dstType* cast(std::pair< osg::StateAttribute::Type, unsigned int >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::vector< osg::StateSet * >,dstType> {
	static inline dstType* cast(std::vector< osg::StateSet * >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::vector< osg::Object * >,dstType> {
	static inline dstType* cast(std::vector< osg::Object * >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::map< unsigned int, unsigned int >,dstType> {
	static inline dstType* cast(std::map< unsigned int, unsigned int >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::pair< osg::ref_ptr< osg::StateAttribute >, unsigned int >,dstType> {
	static inline dstType* cast(std::pair< osg::ref_ptr< osg::StateAttribute >, unsigned int >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::map< osg::StateAttribute::TypeMemberPair, osg::StateSet::RefAttributePair >,dstType> {
	static inline dstType* cast(std::map< osg::StateAttribute::TypeMemberPair, osg::StateSet::RefAttributePair >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::vector< osg::StateSet::ModeList >,dstType> {
	static inline dstType* cast(std::vector< osg::StateSet::ModeList >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::vector< osg::StateSet::AttributeList >,dstType> {
	static inline dstType* cast(std::vector< osg::StateSet::AttributeList >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::pair< osg::ref_ptr< osg::Uniform >, unsigned int >,dstType> {
	static inline dstType* cast(std::pair< osg::ref_ptr< osg::Uniform >, unsigned int >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::map< std::string, osg::StateSet::RefUniformPair >,dstType> {
	static inline dstType* cast(std::map< std::string, osg::StateSet::RefUniformPair >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::map< std::string, double >,dstType> {
	static inline dstType* cast(std::map< std::string, double >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::vector< osg::Stats::AttributeMap >,dstType> {
	static inline dstType* cast(std::vector< osg::Stats::AttributeMap >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::map< std::string, bool >,dstType> {
	static inline dstType* cast(std::map< std::string, bool >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::vector< bool >,dstType> {
	static inline dstType* cast(std::vector< bool >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::list< osg::ref_ptr< osg::Texture::TextureObject > >,dstType> {
	static inline dstType* cast(std::list< osg::ref_ptr< osg::Texture::TextureObject > >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::Texture::ImageAttachment,dstType> {
	static inline dstType* cast(osg::Texture::ImageAttachment* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::Timer,dstType> {
	static inline dstType* cast(osg::Timer* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::ElapsedTime,dstType> {
	static inline dstType* cast(osg::ElapsedTime* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::map< float, osg::Vec4f >,dstType> {
	static inline dstType* cast(std::map< float, osg::Vec4f >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::ValueObjectClassNameTrait< std::string >,dstType> {
	static inline dstType* cast(osg::ValueObjectClassNameTrait< std::string >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::ValueObjectClassNameTrait< bool >,dstType> {
	static inline dstType* cast(osg::ValueObjectClassNameTrait< bool >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::ValueObjectClassNameTrait< char >,dstType> {
	static inline dstType* cast(osg::ValueObjectClassNameTrait< char >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::ValueObjectClassNameTrait< unsigned char >,dstType> {
	static inline dstType* cast(osg::ValueObjectClassNameTrait< unsigned char >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::ValueObjectClassNameTrait< short >,dstType> {
	static inline dstType* cast(osg::ValueObjectClassNameTrait< short >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::ValueObjectClassNameTrait< unsigned short >,dstType> {
	static inline dstType* cast(osg::ValueObjectClassNameTrait< unsigned short >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::ValueObjectClassNameTrait< int >,dstType> {
	static inline dstType* cast(osg::ValueObjectClassNameTrait< int >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::ValueObjectClassNameTrait< unsigned int >,dstType> {
	static inline dstType* cast(osg::ValueObjectClassNameTrait< unsigned int >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::ValueObjectClassNameTrait< float >,dstType> {
	static inline dstType* cast(osg::ValueObjectClassNameTrait< float >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::ValueObjectClassNameTrait< double >,dstType> {
	static inline dstType* cast(osg::ValueObjectClassNameTrait< double >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::ValueObjectClassNameTrait< Vec2f >,dstType> {
	static inline dstType* cast(osg::ValueObjectClassNameTrait< Vec2f >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::ValueObjectClassNameTrait< Vec3f >,dstType> {
	static inline dstType* cast(osg::ValueObjectClassNameTrait< Vec3f >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::ValueObjectClassNameTrait< Vec4f >,dstType> {
	static inline dstType* cast(osg::ValueObjectClassNameTrait< Vec4f >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::ValueObjectClassNameTrait< Vec2d >,dstType> {
	static inline dstType* cast(osg::ValueObjectClassNameTrait< Vec2d >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::ValueObjectClassNameTrait< Vec3d >,dstType> {
	static inline dstType* cast(osg::ValueObjectClassNameTrait< Vec3d >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::ValueObjectClassNameTrait< Vec4d >,dstType> {
	static inline dstType* cast(osg::ValueObjectClassNameTrait< Vec4d >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::ValueObjectClassNameTrait< Quat >,dstType> {
	static inline dstType* cast(osg::ValueObjectClassNameTrait< Quat >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::ValueObjectClassNameTrait< Plane >,dstType> {
	static inline dstType* cast(osg::ValueObjectClassNameTrait< Plane >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::ValueObjectClassNameTrait< Matrixf >,dstType> {
	static inline dstType* cast(osg::ValueObjectClassNameTrait< Matrixf >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::ValueObjectClassNameTrait< Matrixd >,dstType> {
	static inline dstType* cast(osg::ValueObjectClassNameTrait< Matrixd >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::Vec2b,dstType> {
	static inline dstType* cast(osg::Vec2b* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::Vec2d,dstType> {
	static inline dstType* cast(osg::Vec2d* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::Vec2f,dstType> {
	static inline dstType* cast(osg::Vec2f* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::Vec2s,dstType> {
	static inline dstType* cast(osg::Vec2s* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::Vec3b,dstType> {
	static inline dstType* cast(osg::Vec3b* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::Vec3d,dstType> {
	static inline dstType* cast(osg::Vec3d* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::Vec3f,dstType> {
	static inline dstType* cast(osg::Vec3f* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::Vec3s,dstType> {
	static inline dstType* cast(osg::Vec3s* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::Vec4b,dstType> {
	static inline dstType* cast(osg::Vec4b* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::Vec4d,dstType> {
	static inline dstType* cast(osg::Vec4d* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::Vec4f,dstType> {
	static inline dstType* cast(osg::Vec4f* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::Vec4s,dstType> {
	static inline dstType* cast(osg::Vec4s* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::Vec4ub,dstType> {
	static inline dstType* cast(osg::Vec4ub* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::ref_ptr< osg::Array >,dstType> {
	static inline dstType* cast(osg::ref_ptr< osg::Array >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::ref_ptr< osg::Image >,dstType> {
	static inline dstType* cast(osg::ref_ptr< osg::Image >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::ref_ptr< osg::PrimitiveSet >,dstType> {
	static inline dstType* cast(osg::ref_ptr< osg::PrimitiveSet >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::ref_ptr< osg::AnimationPath >,dstType> {
	static inline dstType* cast(osg::ref_ptr< osg::AnimationPath >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::MatrixList,dstType> {
	static inline dstType* cast(osg::MatrixList* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::NodePath,dstType> {
	static inline dstType* cast(osg::NodePath* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::NodePathList,dstType> {
	static inline dstType* cast(osg::NodePathList* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::Matrix3,dstType> {
	static inline dstType* cast(osg::Matrix3* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::Matrix3d,dstType> {
	static inline dstType* cast(osg::Matrix3d* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::Vec2dVector,dstType> {
	static inline dstType* cast(osg::Vec2dVector* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::Vec3dVector,dstType> {
	static inline dstType* cast(osg::Vec3dVector* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osg::Vec4dVector,dstType> {
	static inline dstType* cast(osg::Vec4dVector* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::deque< std::string >,dstType> {
	static inline dstType* cast(std::deque< std::string >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::list< std::string >,dstType> {
	static inline dstType* cast(std::list< std::string >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::list< osg::ref_ptr< osgDB::ReaderWriterInfo > >,dstType> {
	static inline dstType* cast(std::list< osg::ref_ptr< osgDB::ReaderWriterInfo > >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::set< std::string >,dstType> {
	static inline dstType* cast(std::set< std::string >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::vector< osg::ref_ptr< osgDB::DatabaseRevision > >,dstType> {
	static inline dstType* cast(std::vector< osg::ref_ptr< osgDB::DatabaseRevision > >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osgDB::ObjectGLenum,dstType> {
	static inline dstType* cast(osgDB::ObjectGLenum* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osgDB::ObjectProperty,dstType> {
	static inline dstType* cast(osgDB::ObjectProperty* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osgDB::ObjectMark,dstType> {
	static inline dstType* cast(osgDB::ObjectMark* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osgDB::RegisterDotOsgWrapperProxy,dstType> {
	static inline dstType* cast(osgDB::RegisterDotOsgWrapperProxy* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osgDB::ExternalFileWriter,dstType> {
	static inline dstType* cast(osgDB::ExternalFileWriter* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::map< const osg::Object *, osgDB::ExternalFileWriter::ObjectData >,dstType> {
	static inline dstType* cast(std::map< const osg::Object *, osgDB::ExternalFileWriter::ObjectData >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::list< osg::ref_ptr< osgDB::DatabaseRevisions > >,dstType> {
	static inline dstType* cast(std::list< osg::ref_ptr< osgDB::DatabaseRevisions > >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osgDB::FileNameComparator,dstType> {
	static inline dstType* cast(osgDB::FileNameComparator* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osgDB::fstream,dstType> {
	static inline dstType* cast(osgDB::fstream* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osgDB::ifstream,dstType> {
	static inline dstType* cast(osgDB::ifstream* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osgDB::ofstream,dstType> {
	static inline dstType* cast(osgDB::ofstream* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::map< unsigned int, osg::ref_ptr< osg::Array > >,dstType> {
	static inline dstType* cast(std::map< unsigned int, osg::ref_ptr< osg::Array > >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::map< unsigned int, osg::ref_ptr< osg::Object > >,dstType> {
	static inline dstType* cast(std::map< unsigned int, osg::ref_ptr< osg::Object > >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::vector< osg::ref_ptr< osgDB::BaseSerializer > >,dstType> {
	static inline dstType* cast(std::vector< osg::ref_ptr< osgDB::BaseSerializer > >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::vector< osg::ref_ptr< osgDB::FinishedObjectReadCallback > >,dstType> {
	static inline dstType* cast(std::vector< osg::ref_ptr< osgDB::FinishedObjectReadCallback > >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osgDB::UpdateWrapperVersionProxy,dstType> {
	static inline dstType* cast(osgDB::UpdateWrapperVersionProxy* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::map< std::string, osg::ref_ptr< osgDB::ObjectWrapper > >,dstType> {
	static inline dstType* cast(std::map< std::string, osg::ref_ptr< osgDB::ObjectWrapper > >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::map< std::string, osg::ref_ptr< osgDB::BaseCompressor > >,dstType> {
	static inline dstType* cast(std::map< std::string, osg::ref_ptr< osgDB::BaseCompressor > >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::map< std::string, osgDB::IntLookup >,dstType> {
	static inline dstType* cast(std::map< std::string, osgDB::IntLookup >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osgDB::RegisterCompressorProxy,dstType> {
	static inline dstType* cast(osgDB::RegisterCompressorProxy* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::map< const osg::Array *, unsigned int >,dstType> {
	static inline dstType* cast(std::map< const osg::Array *, unsigned int >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::map< const osg::Object *, unsigned int >,dstType> {
	static inline dstType* cast(std::map< const osg::Object *, unsigned int >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osgDB::ParameterOutput,dstType> {
	static inline dstType* cast(osgDB::ParameterOutput* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::vector< osg::ref_ptr< osgDB::ReaderWriter > >,dstType> {
	static inline dstType* cast(std::vector< osg::ref_ptr< osgDB::ReaderWriter > >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::vector< osg::ref_ptr< osgDB::ImageProcessor > >,dstType> {
	static inline dstType* cast(std::vector< osg::ref_ptr< osgDB::ImageProcessor > >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osgDB::PluginFunctionProxy,dstType> {
	static inline dstType* cast(osgDB::PluginFunctionProxy* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osgDB::IntLookup,dstType> {
	static inline dstType* cast(osgDB::IntLookup* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::map< std::string, int >,dstType> {
	static inline dstType* cast(std::map< std::string, int >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::map< int, std::string >,dstType> {
	static inline dstType* cast(std::map< int, std::string >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osgDB::UserLookupTableProxy,dstType> {
	static inline dstType* cast(osgDB::UserLookupTableProxy* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::vector< osg::ref_ptr< osgDB::XmlNode > >,dstType> {
	static inline dstType* cast(std::vector< osg::ref_ptr< osgDB::XmlNode > >* ptr) {
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
struct luna_caster<osgDB::XmlNode::Input,dstType> {
	static inline dstType* cast(osgDB::XmlNode::Input* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::vector< osg::ref_ptr< osg::CameraView > >,dstType> {
	static inline dstType* cast(std::vector< osg::ref_ptr< osg::CameraView > >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::list< osg::ref_ptr< osgGA::GUIEventAdapter > >,dstType> {
	static inline dstType* cast(std::list< osg::ref_ptr< osgGA::GUIEventAdapter > >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osgGA::GUIEventHandlerVisitor,dstType> {
	static inline dstType* cast(osgGA::GUIEventHandlerVisitor* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::pair< std::string, osg::ref_ptr< osgGA::CameraManipulator > >,dstType> {
	static inline dstType* cast(std::pair< std::string, osg::ref_ptr< osgGA::CameraManipulator > >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::map< int, osgGA::KeySwitchMatrixManipulator::NamedManipulator >,dstType> {
	static inline dstType* cast(std::map< int, osgGA::KeySwitchMatrixManipulator::NamedManipulator >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osgParticle::range< float >,dstType> {
	static inline dstType* cast(osgParticle::range< float >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osgParticle::range< osg::Vec2f >,dstType> {
	static inline dstType* cast(osgParticle::range< osg::Vec2f >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osgParticle::range< osg::Vec3f >,dstType> {
	static inline dstType* cast(osgParticle::range< osg::Vec3f >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osgParticle::range< osg::Vec4f >,dstType> {
	static inline dstType* cast(osgParticle::range< osg::Vec4f >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osgParticle::DomainOperator::Domain,dstType> {
	static inline dstType* cast(osgParticle::DomainOperator::Domain* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osgParticle::Particle,dstType> {
	static inline dstType* cast(osgParticle::Particle* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<OpenThreads::ScopedLock< OpenThreads::Mutex >,dstType> {
	static inline dstType* cast(OpenThreads::ScopedLock< OpenThreads::Mutex >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::map< osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell, osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime >,dstType> {
	static inline dstType* cast(std::map< osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell, osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell,dstType> {
	static inline dstType* cast(osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime,dstType> {
	static inline dstType* cast(osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::pair< unsigned int, unsigned int >,dstType> {
	static inline dstType* cast(std::pair< unsigned int, unsigned int >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::vector< osg::ref_ptr< osgText::GlyphTexture > >,dstType> {
	static inline dstType* cast(std::vector< osg::ref_ptr< osgText::GlyphTexture > >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osgText::String,dstType> {
	static inline dstType* cast(osgText::String* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::vector< osg::Vec2f >,dstType> {
	static inline dstType* cast(std::vector< osg::Vec2f >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::map< osg::ref_ptr< osgText::GlyphTexture >, osgText::Text::GlyphQuads >,dstType> {
	static inline dstType* cast(std::map< osg::ref_ptr< osgText::GlyphTexture >, osgText::Text::GlyphQuads >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osgText::Text::GlyphQuads,dstType> {
	static inline dstType* cast(osgText::Text::GlyphQuads* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::vector< osgText::Glyph * >,dstType> {
	static inline dstType* cast(std::vector< osgText::Glyph * >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::vector< osg::Vec4f >,dstType> {
	static inline dstType* cast(std::vector< osg::Vec4f >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::vector< osg::ref_ptr< osgUtil::DelaunayConstraint > >,dstType> {
	static inline dstType* cast(std::vector< osg::ref_ptr< osgUtil::DelaunayConstraint > >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osgUtil::DrawElementTypeSimplifier,dstType> {
	static inline dstType* cast(osgUtil::DrawElementTypeSimplifier* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osgUtil::dereference_less,dstType> {
	static inline dstType* cast(osgUtil::dereference_less* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osgUtil::dereference_clear,dstType> {
	static inline dstType* cast(osgUtil::dereference_clear* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osgUtil::EdgeCollector,dstType> {
	static inline dstType* cast(osgUtil::EdgeCollector* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::list< osg::ref_ptr< osg::UIntArray > >,dstType> {
	static inline dstType* cast(std::list< osg::ref_ptr< osg::UIntArray > >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::set< osg::ref_ptr< osgUtil::EdgeCollector::Edge >, osgUtil::dereference_less >,dstType> {
	static inline dstType* cast(std::set< osg::ref_ptr< osgUtil::EdgeCollector::Edge >, osgUtil::dereference_less >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::list< osg::ref_ptr< osgUtil::EdgeCollector::Edgeloop > >,dstType> {
	static inline dstType* cast(std::list< osg::ref_ptr< osgUtil::EdgeCollector::Edgeloop > >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::set< osg::ref_ptr< osgUtil::EdgeCollector::Point >, osgUtil::dereference_less >,dstType> {
	static inline dstType* cast(std::set< osg::ref_ptr< osgUtil::EdgeCollector::Point >, osgUtil::dereference_less >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::vector< osg::ref_ptr< osgUtil::EdgeCollector::Point > >,dstType> {
	static inline dstType* cast(std::vector< osg::ref_ptr< osgUtil::EdgeCollector::Point > >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::list< osg::ref_ptr< osgUtil::EdgeCollector::Triangle > >,dstType> {
	static inline dstType* cast(std::list< osg::ref_ptr< osgUtil::EdgeCollector::Triangle > >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::set< osg::ref_ptr< osgUtil::EdgeCollector::Triangle > >,dstType> {
	static inline dstType* cast(std::set< osg::ref_ptr< osgUtil::EdgeCollector::Triangle > >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::map< osg::ref_ptr< osgUtil::EdgeCollector::Triangle >, unsigned int, osgUtil::dereference_less >,dstType> {
	static inline dstType* cast(std::map< osg::ref_ptr< osgUtil::EdgeCollector::Triangle >, unsigned int, osgUtil::dereference_less >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::set< osg::Drawable * >,dstType> {
	static inline dstType* cast(std::set< osg::Drawable * >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::set< osg::StateSet * >,dstType> {
	static inline dstType* cast(std::set< osg::StateSet * >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::set< osg::Texture * >,dstType> {
	static inline dstType* cast(std::set< osg::Texture * >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::set< osg::Program * >,dstType> {
	static inline dstType* cast(std::set< osg::Program * >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::set< osg::GraphicsContext * >,dstType> {
	static inline dstType* cast(std::set< osg::GraphicsContext * >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::list< osg::ref_ptr< osgUtil::IncrementalCompileOperation::CompileSet > >,dstType> {
	static inline dstType* cast(std::list< osg::ref_ptr< osgUtil::IncrementalCompileOperation::CompileSet > >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osgUtil::IncrementalCompileOperation::CompileInfo,dstType> {
	static inline dstType* cast(osgUtil::IncrementalCompileOperation::CompileInfo* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osgUtil::IncrementalCompileOperation::CompileList,dstType> {
	static inline dstType* cast(osgUtil::IncrementalCompileOperation::CompileList* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::list< osg::ref_ptr< osgUtil::IncrementalCompileOperation::CompileOp > >,dstType> {
	static inline dstType* cast(std::list< osg::ref_ptr< osgUtil::IncrementalCompileOperation::CompileOp > >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::map< osg::GraphicsContext *, osgUtil::IncrementalCompileOperation::CompileList >,dstType> {
	static inline dstType* cast(std::map< osg::GraphicsContext *, osgUtil::IncrementalCompileOperation::CompileList >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::vector< osg::ref_ptr< osgUtil::Intersector > >,dstType> {
	static inline dstType* cast(std::vector< osg::ref_ptr< osgUtil::Intersector > >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osgUtil::Hit,dstType> {
	static inline dstType* cast(osgUtil::Hit* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::vector< int >,dstType> {
	static inline dstType* cast(std::vector< int >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::multiset< osgUtil::LineSegmentIntersector::Intersection >,dstType> {
	static inline dstType* cast(std::multiset< osgUtil::LineSegmentIntersector::Intersection >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osgUtil::LineSegmentIntersector::Intersection,dstType> {
	static inline dstType* cast(osgUtil::LineSegmentIntersector::Intersection* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::set< osg::Geometry * >,dstType> {
	static inline dstType* cast(std::set< osg::Geometry * >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osgUtil::AddRangeOperator,dstType> {
	static inline dstType* cast(osgUtil::AddRangeOperator* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osgUtil::MultiplyRangeOperator,dstType> {
	static inline dstType* cast(osgUtil::MultiplyRangeOperator* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osgUtil::PerlinNoise,dstType> {
	static inline dstType* cast(osgUtil::PerlinNoise* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::vector< osgUtil::PlaneIntersector::Intersection >,dstType> {
	static inline dstType* cast(std::vector< osgUtil::PlaneIntersector::Intersection >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osgUtil::PlaneIntersector::Intersection,dstType> {
	static inline dstType* cast(osgUtil::PlaneIntersector::Intersection* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::set< osgUtil::PolytopeIntersector::Intersection >,dstType> {
	static inline dstType* cast(std::set< osgUtil::PolytopeIntersector::Intersection >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osgUtil::PolytopeIntersector::Intersection,dstType> {
	static inline dstType* cast(osgUtil::PolytopeIntersector::Intersection* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::pair< osg::ref_ptr< const osg::StateAttribute >, osg::ref_ptr< osg::RefMatrixd > >,dstType> {
	static inline dstType* cast(std::pair< osg::ref_ptr< const osg::StateAttribute >, osg::ref_ptr< osg::RefMatrixd > >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::vector< osgUtil::PositionalStateContainer::AttrMatrixPair >,dstType> {
	static inline dstType* cast(std::vector< osgUtil::PositionalStateContainer::AttrMatrixPair >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::map< unsigned int, osgUtil::PositionalStateContainer::AttrMatrixList >,dstType> {
	static inline dstType* cast(std::map< unsigned int, osgUtil::PositionalStateContainer::AttrMatrixList >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::vector< osgUtil::RenderLeaf * >,dstType> {
	static inline dstType* cast(std::vector< osgUtil::RenderLeaf * >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::vector< osgUtil::StateGraph * >,dstType> {
	static inline dstType* cast(std::vector< osgUtil::StateGraph * >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::map< int, osg::ref_ptr< osgUtil::RenderBin > >,dstType> {
	static inline dstType* cast(std::map< int, osg::ref_ptr< osgUtil::RenderBin > >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osgUtil::RenderStage::Attachment,dstType> {
	static inline dstType* cast(osgUtil::RenderStage::Attachment* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osgUtil::SceneGraphBuilder,dstType> {
	static inline dstType* cast(osgUtil::SceneGraphBuilder* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::map< int, osg::ref_ptr< osg::StateSet > >,dstType> {
	static inline dstType* cast(std::map< int, osg::ref_ptr< osg::StateSet > >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::map< const osg::StateSet *, osg::ref_ptr< osgUtil::StateGraph > >,dstType> {
	static inline dstType* cast(std::map< const osg::StateSet *, osg::ref_ptr< osgUtil::StateGraph > >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::vector< osg::ref_ptr< osgUtil::RenderLeaf > >,dstType> {
	static inline dstType* cast(std::vector< osg::ref_ptr< osgUtil::RenderLeaf > >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::map< unsigned int, osgUtil::Statistics::PrimitivePair >,dstType> {
	static inline dstType* cast(std::map< unsigned int, osgUtil::Statistics::PrimitivePair >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::set< osg::Node * >,dstType> {
	static inline dstType* cast(std::set< osg::Node * >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::list< osgViewer::View * >,dstType> {
	static inline dstType* cast(std::list< osgViewer::View * >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<osgViewer::GraphicsWindowFunctionProxy,dstType> {
	static inline dstType* cast(osgViewer::GraphicsWindowFunctionProxy* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::list< osg::ref_ptr< osgGA::GUIEventHandler > >,dstType> {
	static inline dstType* cast(std::list< osg::ref_ptr< osgGA::GUIEventHandler > >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::vector< osg::Camera * >,dstType> {
	static inline dstType* cast(std::vector< osg::Camera * >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::vector< osgViewer::GraphicsWindow * >,dstType> {
	static inline dstType* cast(std::vector< osgViewer::GraphicsWindow * >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::vector< OpenThreads::Thread * >,dstType> {
	static inline dstType* cast(std::vector< OpenThreads::Thread * >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::vector< osg::OperationThread * >,dstType> {
	static inline dstType* cast(std::vector< osg::OperationThread * >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::vector< osgViewer::Scene * >,dstType> {
	static inline dstType* cast(std::vector< osgViewer::Scene * >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::vector< osgViewer::View * >,dstType> {
	static inline dstType* cast(std::vector< osgViewer::View * >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::istream,dstType> {
	static inline dstType* cast(std::istream* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::ostream,dstType> {
	static inline dstType* cast(std::ostream* ptr) {
		return static_cast<dstType*>(ptr);
	};
};


#endif


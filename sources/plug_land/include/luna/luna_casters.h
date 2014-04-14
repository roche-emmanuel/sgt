#ifndef _LUNA_CASTERS_H_
#define _LUNA_CASTERS_H_

#include <plug_common.h>

template <typename dstType>
struct luna_caster<ork::Buffer::Parameters,dstType> {
	static inline dstType* cast(ork::Buffer::Parameters* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::FrameBuffer::Parameters,dstType> {
	static inline dstType* cast(ork::FrameBuffer::Parameters* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::SetTargetTask::Target,dstType> {
	static inline dstType* cast(ork::SetTargetTask::Target* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<TiXmlAttributeSet,dstType> {
	static inline dstType* cast(TiXmlAttributeSet* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<TiXmlCursor,dstType> {
	static inline dstType* cast(TiXmlCursor* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<TiXmlHandle,dstType> {
	static inline dstType* cast(TiXmlHandle* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::Font::Vertex,dstType> {
	static inline dstType* cast(ork::Font::Vertex* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::Uniform1< ork::VEC1F, float, float, ork::uniform1f, ork::value1f >,dstType> {
	static inline dstType* cast(ork::Uniform1< ork::VEC1F, float, float, ork::uniform1f, ork::value1f >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::Uniform1< ork::VEC1D, double, double, ork::uniform1d, ork::value1d >,dstType> {
	static inline dstType* cast(ork::Uniform1< ork::VEC1D, double, double, ork::uniform1d, ork::value1d >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::Uniform1< ork::VEC1I, int, int, ork::uniform1i, ork::value1i >,dstType> {
	static inline dstType* cast(ork::Uniform1< ork::VEC1I, int, int, ork::uniform1i, ork::value1i >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::Uniform1< ork::VEC1UI, unsigned int, unsigned int, ork::uniform1ui, ork::value1ui >,dstType> {
	static inline dstType* cast(ork::Uniform1< ork::VEC1UI, unsigned int, unsigned int, ork::uniform1ui, ork::value1ui >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::Uniform1< ork::VEC1B, bool, unsigned int, ork::uniform1b, ork::value1b >,dstType> {
	static inline dstType* cast(ork::Uniform1< ork::VEC1B, bool, unsigned int, ork::uniform1b, ork::value1b >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::Uniform2< ork::VEC2F, float, float, ork::uniform2f, ork::value2f >,dstType> {
	static inline dstType* cast(ork::Uniform2< ork::VEC2F, float, float, ork::uniform2f, ork::value2f >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::Uniform2< ork::VEC2B, double, double, ork::uniform2d, ork::value2d >,dstType> {
	static inline dstType* cast(ork::Uniform2< ork::VEC2B, double, double, ork::uniform2d, ork::value2d >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::Uniform2< ork::VEC2I, int, int, ork::uniform2i, ork::value2i >,dstType> {
	static inline dstType* cast(ork::Uniform2< ork::VEC2I, int, int, ork::uniform2i, ork::value2i >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::Uniform2< ork::VEC2UI, unsigned int, unsigned int, ork::uniform2ui, ork::value2ui >,dstType> {
	static inline dstType* cast(ork::Uniform2< ork::VEC2UI, unsigned int, unsigned int, ork::uniform2ui, ork::value2ui >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::Uniform2< ork::VEC2B, bool, unsigned int, ork::uniform2b, ork::value2b >,dstType> {
	static inline dstType* cast(ork::Uniform2< ork::VEC2B, bool, unsigned int, ork::uniform2b, ork::value2b >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::Uniform3< ork::VEC3F, float, float, ork::uniform3f, ork::value3f >,dstType> {
	static inline dstType* cast(ork::Uniform3< ork::VEC3F, float, float, ork::uniform3f, ork::value3f >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::Uniform3< ork::VEC3D, double, double, ork::uniform3d, ork::value3d >,dstType> {
	static inline dstType* cast(ork::Uniform3< ork::VEC3D, double, double, ork::uniform3d, ork::value3d >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::Uniform3< ork::VEC3I, int, int, ork::uniform3i, ork::value3i >,dstType> {
	static inline dstType* cast(ork::Uniform3< ork::VEC3I, int, int, ork::uniform3i, ork::value3i >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::Uniform3< ork::VEC3UI, unsigned int, unsigned int, ork::uniform3ui, ork::value3ui >,dstType> {
	static inline dstType* cast(ork::Uniform3< ork::VEC3UI, unsigned int, unsigned int, ork::uniform3ui, ork::value3ui >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::Uniform3< ork::VEC3B, bool, unsigned int, ork::uniform3b, ork::value3b >,dstType> {
	static inline dstType* cast(ork::Uniform3< ork::VEC3B, bool, unsigned int, ork::uniform3b, ork::value3b >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::Uniform4< ork::VEC4F, float, float, ork::uniform4f, ork::value4f >,dstType> {
	static inline dstType* cast(ork::Uniform4< ork::VEC4F, float, float, ork::uniform4f, ork::value4f >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::Uniform4< ork::VEC4D, double, double, ork::uniform4d, ork::value4d >,dstType> {
	static inline dstType* cast(ork::Uniform4< ork::VEC4D, double, double, ork::uniform4d, ork::value4d >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::Uniform4< ork::VEC4I, int, int, ork::uniform4i, ork::value4i >,dstType> {
	static inline dstType* cast(ork::Uniform4< ork::VEC4I, int, int, ork::uniform4i, ork::value4i >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::Uniform4< ork::VEC4UI, unsigned int, unsigned int, ork::uniform4ui, ork::value4ui >,dstType> {
	static inline dstType* cast(ork::Uniform4< ork::VEC4UI, unsigned int, unsigned int, ork::uniform4ui, ork::value4ui >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::Uniform4< ork::VEC4B, bool, unsigned int, ork::uniform4b, ork::value4b >,dstType> {
	static inline dstType* cast(ork::Uniform4< ork::VEC4B, bool, unsigned int, ork::uniform4b, ork::value4b >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::UniformMatrix< ork::MAT2F, float, 2, 2, ork::uniformMatrix2f, ork::valueMatrix2f >,dstType> {
	static inline dstType* cast(ork::UniformMatrix< ork::MAT2F, float, 2, 2, ork::uniformMatrix2f, ork::valueMatrix2f >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::UniformMatrix3< ork::MAT3F, float, ork::uniformMatrix3f, ork::valueMatrix3f >,dstType> {
	static inline dstType* cast(ork::UniformMatrix3< ork::MAT3F, float, ork::uniformMatrix3f, ork::valueMatrix3f >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::UniformMatrix4< ork::MAT4F, float, ork::uniformMatrix4f, ork::valueMatrix4f >,dstType> {
	static inline dstType* cast(ork::UniformMatrix4< ork::MAT4F, float, ork::uniformMatrix4f, ork::valueMatrix4f >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::UniformMatrix< ork::MAT2x3F, float, 2, 3, ork::uniformMatrix2x3f, ork::valueMatrix2x3f >,dstType> {
	static inline dstType* cast(ork::UniformMatrix< ork::MAT2x3F, float, 2, 3, ork::uniformMatrix2x3f, ork::valueMatrix2x3f >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::UniformMatrix< ork::MAT2x4F, float, 2, 4, ork::uniformMatrix2x4f, ork::valueMatrix2x4f >,dstType> {
	static inline dstType* cast(ork::UniformMatrix< ork::MAT2x4F, float, 2, 4, ork::uniformMatrix2x4f, ork::valueMatrix2x4f >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::UniformMatrix< ork::MAT3x2F, float, 3, 2, ork::uniformMatrix3x2f, ork::valueMatrix3x2f >,dstType> {
	static inline dstType* cast(ork::UniformMatrix< ork::MAT3x2F, float, 3, 2, ork::uniformMatrix3x2f, ork::valueMatrix3x2f >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::UniformMatrix< ork::MAT3x4F, float, 3, 4, ork::uniformMatrix3x4f, ork::valueMatrix3x4f >,dstType> {
	static inline dstType* cast(ork::UniformMatrix< ork::MAT3x4F, float, 3, 4, ork::uniformMatrix3x4f, ork::valueMatrix3x4f >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::UniformMatrix< ork::MAT4x2F, float, 4, 2, ork::uniformMatrix4x2f, ork::valueMatrix4x2f >,dstType> {
	static inline dstType* cast(ork::UniformMatrix< ork::MAT4x2F, float, 4, 2, ork::uniformMatrix4x2f, ork::valueMatrix4x2f >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::UniformMatrix< ork::MAT4x3F, float, 4, 3, ork::uniformMatrix4x3f, ork::valueMatrix4x3f >,dstType> {
	static inline dstType* cast(ork::UniformMatrix< ork::MAT4x3F, float, 4, 3, ork::uniformMatrix4x3f, ork::valueMatrix4x3f >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::UniformMatrix< ork::MAT2D, double, 2, 2, ork::uniformMatrix2d, ork::valueMatrix2d >,dstType> {
	static inline dstType* cast(ork::UniformMatrix< ork::MAT2D, double, 2, 2, ork::uniformMatrix2d, ork::valueMatrix2d >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::UniformMatrix3< ork::MAT3D, double, ork::uniformMatrix3d, ork::valueMatrix3d >,dstType> {
	static inline dstType* cast(ork::UniformMatrix3< ork::MAT3D, double, ork::uniformMatrix3d, ork::valueMatrix3d >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::UniformMatrix4< ork::MAT4D, double, ork::uniformMatrix4d, ork::valueMatrix4d >,dstType> {
	static inline dstType* cast(ork::UniformMatrix4< ork::MAT4D, double, ork::uniformMatrix4d, ork::valueMatrix4d >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::UniformMatrix< ork::MAT2x3D, double, 2, 3, ork::uniformMatrix2x3d, ork::valueMatrix2x3d >,dstType> {
	static inline dstType* cast(ork::UniformMatrix< ork::MAT2x3D, double, 2, 3, ork::uniformMatrix2x3d, ork::valueMatrix2x3d >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::UniformMatrix< ork::MAT2x4D, double, 2, 4, ork::uniformMatrix2x4d, ork::valueMatrix2x4d >,dstType> {
	static inline dstType* cast(ork::UniformMatrix< ork::MAT2x4D, double, 2, 4, ork::uniformMatrix2x4d, ork::valueMatrix2x4d >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::UniformMatrix< ork::MAT3x2D, double, 3, 2, ork::uniformMatrix3x2d, ork::valueMatrix3x2d >,dstType> {
	static inline dstType* cast(ork::UniformMatrix< ork::MAT3x2D, double, 3, 2, ork::uniformMatrix3x2d, ork::valueMatrix3x2d >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::UniformMatrix< ork::MAT3x4D, double, 3, 4, ork::uniformMatrix3x4d, ork::valueMatrix3x4d >,dstType> {
	static inline dstType* cast(ork::UniformMatrix< ork::MAT3x4D, double, 3, 4, ork::uniformMatrix3x4d, ork::valueMatrix3x4d >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::UniformMatrix< ork::MAT4x2D, double, 4, 2, ork::uniformMatrix4x2d, ork::valueMatrix4x2d >,dstType> {
	static inline dstType* cast(ork::UniformMatrix< ork::MAT4x2D, double, 4, 2, ork::uniformMatrix4x2d, ork::valueMatrix4x2d >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::UniformMatrix< ork::MAT4x3D, double, 4, 3, ork::uniformMatrix4x3d, ork::valueMatrix4x3d >,dstType> {
	static inline dstType* cast(ork::UniformMatrix< ork::MAT4x3D, double, 4, 3, ork::uniformMatrix4x3d, ork::valueMatrix4x3d >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::Value1< ork::VEC1F, float, ork::value1f >,dstType> {
	static inline dstType* cast(ork::Value1< ork::VEC1F, float, ork::value1f >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::Value1< ork::VEC1D, double, ork::value1d >,dstType> {
	static inline dstType* cast(ork::Value1< ork::VEC1D, double, ork::value1d >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::Value1< ork::VEC1I, int, ork::value1i >,dstType> {
	static inline dstType* cast(ork::Value1< ork::VEC1I, int, ork::value1i >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::Value1< ork::VEC1UI, unsigned int, ork::value1ui >,dstType> {
	static inline dstType* cast(ork::Value1< ork::VEC1UI, unsigned int, ork::value1ui >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::Value1< ork::VEC1B, bool, ork::value1b >,dstType> {
	static inline dstType* cast(ork::Value1< ork::VEC1B, bool, ork::value1b >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::Value2< ork::VEC2F, float, ork::value2f >,dstType> {
	static inline dstType* cast(ork::Value2< ork::VEC2F, float, ork::value2f >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::Value2< ork::VEC2B, double, ork::value2d >,dstType> {
	static inline dstType* cast(ork::Value2< ork::VEC2B, double, ork::value2d >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::Value2< ork::VEC2I, int, ork::value2i >,dstType> {
	static inline dstType* cast(ork::Value2< ork::VEC2I, int, ork::value2i >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::Value2< ork::VEC2UI, unsigned int, ork::value2ui >,dstType> {
	static inline dstType* cast(ork::Value2< ork::VEC2UI, unsigned int, ork::value2ui >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::Value2< ork::VEC2B, bool, ork::value2b >,dstType> {
	static inline dstType* cast(ork::Value2< ork::VEC2B, bool, ork::value2b >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::Value3< ork::VEC3F, float, ork::value3f >,dstType> {
	static inline dstType* cast(ork::Value3< ork::VEC3F, float, ork::value3f >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::Value3< ork::VEC3B, double, ork::value3d >,dstType> {
	static inline dstType* cast(ork::Value3< ork::VEC3B, double, ork::value3d >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::Value3< ork::VEC3I, int, ork::value3i >,dstType> {
	static inline dstType* cast(ork::Value3< ork::VEC3I, int, ork::value3i >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::Value3< ork::VEC3UI, unsigned int, ork::value3ui >,dstType> {
	static inline dstType* cast(ork::Value3< ork::VEC3UI, unsigned int, ork::value3ui >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::Value3< ork::VEC3B, bool, ork::value3b >,dstType> {
	static inline dstType* cast(ork::Value3< ork::VEC3B, bool, ork::value3b >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::Value4< ork::VEC4F, float, ork::value4f >,dstType> {
	static inline dstType* cast(ork::Value4< ork::VEC4F, float, ork::value4f >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::Value4< ork::VEC4B, double, ork::value4d >,dstType> {
	static inline dstType* cast(ork::Value4< ork::VEC4B, double, ork::value4d >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::Value4< ork::VEC4I, int, ork::value4i >,dstType> {
	static inline dstType* cast(ork::Value4< ork::VEC4I, int, ork::value4i >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::Value4< ork::VEC4UI, unsigned int, ork::value4ui >,dstType> {
	static inline dstType* cast(ork::Value4< ork::VEC4UI, unsigned int, ork::value4ui >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::Value4< ork::VEC4B, bool, ork::value4b >,dstType> {
	static inline dstType* cast(ork::Value4< ork::VEC4B, bool, ork::value4b >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::ValueMatrix< ork::MAT2F, float, 2, 2, ork::valueMatrix2f >,dstType> {
	static inline dstType* cast(ork::ValueMatrix< ork::MAT2F, float, 2, 2, ork::valueMatrix2f >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::ValueMatrix3< ork::MAT3F, float, ork::valueMatrix3f >,dstType> {
	static inline dstType* cast(ork::ValueMatrix3< ork::MAT3F, float, ork::valueMatrix3f >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::ValueMatrix4< ork::MAT4F, float, ork::valueMatrix4f >,dstType> {
	static inline dstType* cast(ork::ValueMatrix4< ork::MAT4F, float, ork::valueMatrix4f >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::ValueMatrix< ork::MAT2x3F, float, 2, 3, ork::valueMatrix2x3f >,dstType> {
	static inline dstType* cast(ork::ValueMatrix< ork::MAT2x3F, float, 2, 3, ork::valueMatrix2x3f >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::ValueMatrix< ork::MAT2x4F, float, 2, 4, ork::valueMatrix2x4f >,dstType> {
	static inline dstType* cast(ork::ValueMatrix< ork::MAT2x4F, float, 2, 4, ork::valueMatrix2x4f >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::ValueMatrix< ork::MAT3x2F, float, 3, 2, ork::valueMatrix3x2f >,dstType> {
	static inline dstType* cast(ork::ValueMatrix< ork::MAT3x2F, float, 3, 2, ork::valueMatrix3x2f >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::ValueMatrix< ork::MAT3x4F, float, 3, 4, ork::valueMatrix3x4f >,dstType> {
	static inline dstType* cast(ork::ValueMatrix< ork::MAT3x4F, float, 3, 4, ork::valueMatrix3x4f >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::ValueMatrix< ork::MAT4x2F, float, 4, 2, ork::valueMatrix4x2f >,dstType> {
	static inline dstType* cast(ork::ValueMatrix< ork::MAT4x2F, float, 4, 2, ork::valueMatrix4x2f >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::ValueMatrix< ork::MAT4x3F, float, 4, 3, ork::valueMatrix4x3f >,dstType> {
	static inline dstType* cast(ork::ValueMatrix< ork::MAT4x3F, float, 4, 3, ork::valueMatrix4x3f >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::ValueMatrix< ork::MAT2D, double, 2, 2, ork::valueMatrix2d >,dstType> {
	static inline dstType* cast(ork::ValueMatrix< ork::MAT2D, double, 2, 2, ork::valueMatrix2d >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::ValueMatrix3< ork::MAT3D, double, ork::valueMatrix3d >,dstType> {
	static inline dstType* cast(ork::ValueMatrix3< ork::MAT3D, double, ork::valueMatrix3d >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::ValueMatrix4< ork::MAT4D, double, ork::valueMatrix4d >,dstType> {
	static inline dstType* cast(ork::ValueMatrix4< ork::MAT4D, double, ork::valueMatrix4d >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::ValueMatrix< ork::MAT2x3D, double, 2, 3, ork::valueMatrix2x3d >,dstType> {
	static inline dstType* cast(ork::ValueMatrix< ork::MAT2x3D, double, 2, 3, ork::valueMatrix2x3d >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::ValueMatrix< ork::MAT2x4D, double, 2, 4, ork::valueMatrix2x4d >,dstType> {
	static inline dstType* cast(ork::ValueMatrix< ork::MAT2x4D, double, 2, 4, ork::valueMatrix2x4d >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::ValueMatrix< ork::MAT3x2D, double, 3, 2, ork::valueMatrix3x2d >,dstType> {
	static inline dstType* cast(ork::ValueMatrix< ork::MAT3x2D, double, 3, 2, ork::valueMatrix3x2d >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::ValueMatrix< ork::MAT3x4D, double, 3, 4, ork::valueMatrix3x4d >,dstType> {
	static inline dstType* cast(ork::ValueMatrix< ork::MAT3x4D, double, 3, 4, ork::valueMatrix3x4d >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::ValueMatrix< ork::MAT4x2D, double, 4, 2, ork::valueMatrix4x2d >,dstType> {
	static inline dstType* cast(ork::ValueMatrix< ork::MAT4x2D, double, 4, 2, ork::valueMatrix4x2d >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::ValueMatrix< ork::MAT4x3D, double, 4, 3, ork::valueMatrix4x3d >,dstType> {
	static inline dstType* cast(ork::ValueMatrix< ork::MAT4x3D, double, 4, 3, ork::valueMatrix4x3d >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::FileLogger::File,dstType> {
	static inline dstType* cast(ork::FileLogger::File* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::half,dstType> {
	static inline dstType* cast(ork::half* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::ResourceFactory,dstType> {
	static inline dstType* cast(ork::ResourceFactory* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::SetIterator< ork::ptr< ork::Task > >,dstType> {
	static inline dstType* cast(ork::SetIterator< ork::ptr< ork::Task > >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::MultiMapIterator< std::string, ork::ptr< ork::SceneNode > >,dstType> {
	static inline dstType* cast(ork::MultiMapIterator< std::string, ork::ptr< ork::SceneNode > >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::SetIterator< std::string >,dstType> {
	static inline dstType* cast(ork::SetIterator< std::string >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::MapIterator< std::string, ork::ptr< ork::Value > >,dstType> {
	static inline dstType* cast(ork::MapIterator< std::string, ork::ptr< ork::Value > >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::MapIterator< std::string, ork::ptr< ork::Module > >,dstType> {
	static inline dstType* cast(ork::MapIterator< std::string, ork::ptr< ork::Module > >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::MapIterator< std::string, ork::ptr< ork::MeshBuffers > >,dstType> {
	static inline dstType* cast(ork::MapIterator< std::string, ork::ptr< ork::MeshBuffers > >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::MapIterator< std::string, ork::ptr< ork::Object > >,dstType> {
	static inline dstType* cast(ork::MapIterator< std::string, ork::ptr< ork::Object > >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::MapIterator< std::string, ork::ptr< ork::Method > >,dstType> {
	static inline dstType* cast(ork::MapIterator< std::string, ork::ptr< ork::Method > >* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::vec2h,dstType> {
	static inline dstType* cast(ork::vec2h* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::vec2f,dstType> {
	static inline dstType* cast(ork::vec2f* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::vec2d,dstType> {
	static inline dstType* cast(ork::vec2d* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::vec2i,dstType> {
	static inline dstType* cast(ork::vec2i* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::vec2b,dstType> {
	static inline dstType* cast(ork::vec2b* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::vec3h,dstType> {
	static inline dstType* cast(ork::vec3h* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::vec3f,dstType> {
	static inline dstType* cast(ork::vec3f* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::vec3d,dstType> {
	static inline dstType* cast(ork::vec3d* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::vec3i,dstType> {
	static inline dstType* cast(ork::vec3i* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::vec3b,dstType> {
	static inline dstType* cast(ork::vec3b* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::vec4h,dstType> {
	static inline dstType* cast(ork::vec4h* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::vec4f,dstType> {
	static inline dstType* cast(ork::vec4f* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::vec4d,dstType> {
	static inline dstType* cast(ork::vec4d* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::vec4i,dstType> {
	static inline dstType* cast(ork::vec4i* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::vec4b,dstType> {
	static inline dstType* cast(ork::vec4b* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::box2f,dstType> {
	static inline dstType* cast(ork::box2f* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::box2d,dstType> {
	static inline dstType* cast(ork::box2d* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::box2i,dstType> {
	static inline dstType* cast(ork::box2i* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::box3f,dstType> {
	static inline dstType* cast(ork::box3f* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::box3d,dstType> {
	static inline dstType* cast(ork::box3d* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::box3i,dstType> {
	static inline dstType* cast(ork::box3i* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::mat2f,dstType> {
	static inline dstType* cast(ork::mat2f* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::mat2d,dstType> {
	static inline dstType* cast(ork::mat2d* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::mat3f,dstType> {
	static inline dstType* cast(ork::mat3f* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::mat3d,dstType> {
	static inline dstType* cast(ork::mat3d* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::mat4f,dstType> {
	static inline dstType* cast(ork::mat4f* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::mat4d,dstType> {
	static inline dstType* cast(ork::mat4d* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::quatf,dstType> {
	static inline dstType* cast(ork::quatf* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<ork::quatd,dstType> {
	static inline dstType* cast(ork::quatd* ptr) {
		return static_cast<dstType*>(ptr);
	};
};

template <typename dstType>
struct luna_caster<std::type_info,dstType> {
	static inline dstType* cast(std::type_info* ptr) {
		return static_cast<dstType*>(ptr);
	};
};


#endif

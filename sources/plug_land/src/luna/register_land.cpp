#include <plug_common.h>

#ifdef __cplusplus
extern "C" {
#endif

extern void register_defines(lua_State* L);
extern void register_enums(lua_State* L);
extern void register_global_functions(lua_State* L);

	
	
int PLUG_EXPORT luaopen_land(lua_State* L) {
	luna_open(L);

	luna_pushModule(L,"ork");
	Luna< ork::Object >::Register(L);
	Luna< ork::Buffer::Parameters >::Register(L);
	Luna< ork::FrameBuffer::Parameters >::Register(L);
	Luna< ork::Object::static_ref >::Register(L);
	Luna< ork::ResourceDescriptor >::Register(L);
	Luna< ork::CompiledResourceLoader::StaticResourceDescriptor >::Register(L);
	luna_popModule(L);
	luna_pushModule(L,"land");
	Luna< TiXmlBase >::Register(L);
	Luna< TiXmlAttribute >::Register(L);
	Luna< TiXmlAttributeSet >::Register(L);
	Luna< TiXmlNode >::Register(L);
	Luna< TiXmlComment >::Register(L);
	Luna< TiXmlCursor >::Register(L);
	Luna< TiXmlDeclaration >::Register(L);
	Luna< TiXmlDocument >::Register(L);
	Luna< TiXmlElement >::Register(L);
	Luna< TiXmlHandle >::Register(L);
	Luna< TiXmlVisitor >::Register(L);
	Luna< TiXmlPrinter >::Register(L);
	Luna< TiXmlText >::Register(L);
	Luna< TiXmlUnknown >::Register(L);
	luna_popModule(L);
	luna_pushModule(L,"ork");
	Luna< ork::Font::Vertex >::Register(L);
	luna_popModule(L);
	luna_pushModule(L,"land");
	Luna< land::ProlandDrawable >::Register(L);
	Luna< ork::Uniform1< ork::VEC1F, float, float, ork::uniform1f, ork::value1f > >::Register(L);
	Luna< ork::Uniform1< ork::VEC1D, double, double, ork::uniform1d, ork::value1d > >::Register(L);
	Luna< ork::Uniform1< ork::VEC1I, int, int, ork::uniform1i, ork::value1i > >::Register(L);
	Luna< ork::Uniform1< ork::VEC1UI, unsigned int, unsigned int, ork::uniform1ui, ork::value1ui > >::Register(L);
	Luna< ork::Uniform1< ork::VEC1B, bool, unsigned int, ork::uniform1b, ork::value1b > >::Register(L);
	Luna< ork::Uniform2< ork::VEC2F, float, float, ork::uniform2f, ork::value2f > >::Register(L);
	Luna< ork::Uniform2< ork::VEC2B, double, double, ork::uniform2d, ork::value2d > >::Register(L);
	Luna< ork::Uniform2< ork::VEC2I, int, int, ork::uniform2i, ork::value2i > >::Register(L);
	Luna< ork::Uniform2< ork::VEC2UI, unsigned int, unsigned int, ork::uniform2ui, ork::value2ui > >::Register(L);
	Luna< ork::Uniform2< ork::VEC2B, bool, unsigned int, ork::uniform2b, ork::value2b > >::Register(L);
	Luna< ork::Uniform3< ork::VEC3F, float, float, ork::uniform3f, ork::value3f > >::Register(L);
	Luna< ork::Uniform3< ork::VEC3D, double, double, ork::uniform3d, ork::value3d > >::Register(L);
	Luna< ork::Uniform3< ork::VEC3I, int, int, ork::uniform3i, ork::value3i > >::Register(L);
	Luna< ork::Uniform3< ork::VEC3UI, unsigned int, unsigned int, ork::uniform3ui, ork::value3ui > >::Register(L);
	Luna< ork::Uniform3< ork::VEC3B, bool, unsigned int, ork::uniform3b, ork::value3b > >::Register(L);
	Luna< ork::Uniform4< ork::VEC4F, float, float, ork::uniform4f, ork::value4f > >::Register(L);
	Luna< ork::Uniform4< ork::VEC4D, double, double, ork::uniform4d, ork::value4d > >::Register(L);
	Luna< ork::Uniform4< ork::VEC4I, int, int, ork::uniform4i, ork::value4i > >::Register(L);
	Luna< ork::Uniform4< ork::VEC4UI, unsigned int, unsigned int, ork::uniform4ui, ork::value4ui > >::Register(L);
	Luna< ork::Uniform4< ork::VEC4B, bool, unsigned int, ork::uniform4b, ork::value4b > >::Register(L);
	Luna< ork::UniformMatrix< ork::MAT2F, float, 2, 2, ork::uniformMatrix2f, ork::valueMatrix2f > >::Register(L);
	Luna< ork::UniformMatrix3< ork::MAT3F, float, ork::uniformMatrix3f, ork::valueMatrix3f > >::Register(L);
	Luna< ork::UniformMatrix4< ork::MAT4F, float, ork::uniformMatrix4f, ork::valueMatrix4f > >::Register(L);
	Luna< ork::UniformMatrix< ork::MAT2x3F, float, 2, 3, ork::uniformMatrix2x3f, ork::valueMatrix2x3f > >::Register(L);
	Luna< ork::UniformMatrix< ork::MAT2x4F, float, 2, 4, ork::uniformMatrix2x4f, ork::valueMatrix2x4f > >::Register(L);
	Luna< ork::UniformMatrix< ork::MAT3x2F, float, 3, 2, ork::uniformMatrix3x2f, ork::valueMatrix3x2f > >::Register(L);
	Luna< ork::UniformMatrix< ork::MAT3x4F, float, 3, 4, ork::uniformMatrix3x4f, ork::valueMatrix3x4f > >::Register(L);
	Luna< ork::UniformMatrix< ork::MAT4x2F, float, 4, 2, ork::uniformMatrix4x2f, ork::valueMatrix4x2f > >::Register(L);
	Luna< ork::UniformMatrix< ork::MAT4x3F, float, 4, 3, ork::uniformMatrix4x3f, ork::valueMatrix4x3f > >::Register(L);
	Luna< ork::UniformMatrix< ork::MAT2D, double, 2, 2, ork::uniformMatrix2d, ork::valueMatrix2d > >::Register(L);
	Luna< ork::UniformMatrix3< ork::MAT3D, double, ork::uniformMatrix3d, ork::valueMatrix3d > >::Register(L);
	Luna< ork::UniformMatrix4< ork::MAT4D, double, ork::uniformMatrix4d, ork::valueMatrix4d > >::Register(L);
	Luna< ork::UniformMatrix< ork::MAT2x3D, double, 2, 3, ork::uniformMatrix2x3d, ork::valueMatrix2x3d > >::Register(L);
	Luna< ork::UniformMatrix< ork::MAT2x4D, double, 2, 4, ork::uniformMatrix2x4d, ork::valueMatrix2x4d > >::Register(L);
	Luna< ork::UniformMatrix< ork::MAT3x2D, double, 3, 2, ork::uniformMatrix3x2d, ork::valueMatrix3x2d > >::Register(L);
	Luna< ork::UniformMatrix< ork::MAT3x4D, double, 3, 4, ork::uniformMatrix3x4d, ork::valueMatrix3x4d > >::Register(L);
	Luna< ork::UniformMatrix< ork::MAT4x2D, double, 4, 2, ork::uniformMatrix4x2d, ork::valueMatrix4x2d > >::Register(L);
	Luna< ork::UniformMatrix< ork::MAT4x3D, double, 4, 3, ork::uniformMatrix4x3d, ork::valueMatrix4x3d > >::Register(L);
	Luna< ork::Value1< ork::VEC1F, float, ork::value1f > >::Register(L);
	Luna< ork::Value1< ork::VEC1D, double, ork::value1d > >::Register(L);
	Luna< ork::Value1< ork::VEC1I, int, ork::value1i > >::Register(L);
	Luna< ork::Value1< ork::VEC1UI, unsigned int, ork::value1ui > >::Register(L);
	Luna< ork::Value1< ork::VEC1B, bool, ork::value1b > >::Register(L);
	Luna< ork::Value2< ork::VEC2F, float, ork::value2f > >::Register(L);
	Luna< ork::Value2< ork::VEC2B, double, ork::value2d > >::Register(L);
	Luna< ork::Value2< ork::VEC2I, int, ork::value2i > >::Register(L);
	Luna< ork::Value2< ork::VEC2UI, unsigned int, ork::value2ui > >::Register(L);
	Luna< ork::Value2< ork::VEC2B, bool, ork::value2b > >::Register(L);
	Luna< ork::Value3< ork::VEC3F, float, ork::value3f > >::Register(L);
	Luna< ork::Value3< ork::VEC3B, double, ork::value3d > >::Register(L);
	Luna< ork::Value3< ork::VEC3I, int, ork::value3i > >::Register(L);
	Luna< ork::Value3< ork::VEC3UI, unsigned int, ork::value3ui > >::Register(L);
	Luna< ork::Value3< ork::VEC3B, bool, ork::value3b > >::Register(L);
	Luna< ork::Value4< ork::VEC4F, float, ork::value4f > >::Register(L);
	Luna< ork::Value4< ork::VEC4B, double, ork::value4d > >::Register(L);
	Luna< ork::Value4< ork::VEC4I, int, ork::value4i > >::Register(L);
	Luna< ork::Value4< ork::VEC4UI, unsigned int, ork::value4ui > >::Register(L);
	Luna< ork::Value4< ork::VEC4B, bool, ork::value4b > >::Register(L);
	Luna< ork::ValueMatrix< ork::MAT2F, float, 2, 2, ork::valueMatrix2f > >::Register(L);
	Luna< ork::ValueMatrix3< ork::MAT3F, float, ork::valueMatrix3f > >::Register(L);
	Luna< ork::ValueMatrix4< ork::MAT4F, float, ork::valueMatrix4f > >::Register(L);
	Luna< ork::ValueMatrix< ork::MAT2x3F, float, 2, 3, ork::valueMatrix2x3f > >::Register(L);
	Luna< ork::ValueMatrix< ork::MAT2x4F, float, 2, 4, ork::valueMatrix2x4f > >::Register(L);
	Luna< ork::ValueMatrix< ork::MAT3x2F, float, 3, 2, ork::valueMatrix3x2f > >::Register(L);
	Luna< ork::ValueMatrix< ork::MAT3x4F, float, 3, 4, ork::valueMatrix3x4f > >::Register(L);
	Luna< ork::ValueMatrix< ork::MAT4x2F, float, 4, 2, ork::valueMatrix4x2f > >::Register(L);
	Luna< ork::ValueMatrix< ork::MAT4x3F, float, 4, 3, ork::valueMatrix4x3f > >::Register(L);
	Luna< ork::ValueMatrix< ork::MAT2D, double, 2, 2, ork::valueMatrix2d > >::Register(L);
	Luna< ork::ValueMatrix3< ork::MAT3D, double, ork::valueMatrix3d > >::Register(L);
	Luna< ork::ValueMatrix4< ork::MAT4D, double, ork::valueMatrix4d > >::Register(L);
	Luna< ork::ValueMatrix< ork::MAT2x3D, double, 2, 3, ork::valueMatrix2x3d > >::Register(L);
	Luna< ork::ValueMatrix< ork::MAT2x4D, double, 2, 4, ork::valueMatrix2x4d > >::Register(L);
	Luna< ork::ValueMatrix< ork::MAT3x2D, double, 3, 2, ork::valueMatrix3x2d > >::Register(L);
	Luna< ork::ValueMatrix< ork::MAT3x4D, double, 3, 4, ork::valueMatrix3x4d > >::Register(L);
	Luna< ork::ValueMatrix< ork::MAT4x2D, double, 4, 2, ork::valueMatrix4x2d > >::Register(L);
	Luna< ork::ValueMatrix< ork::MAT4x3D, double, 4, 3, ork::valueMatrix4x3d > >::Register(L);
	luna_popModule(L);
	luna_pushModule(L,"ork");
	Luna< ork::Logger >::Register(L);
	Luna< ork::FileLogger >::Register(L);
	Luna< ork::FileLogger::File >::Register(L);
	Luna< ork::Timer >::Register(L);
	Luna< ork::GPUTimer >::Register(L);
	Luna< ork::half >::Register(L);
	Luna< ork::AttributeBuffer >::Register(L);
	Luna< ork::Buffer >::Register(L);
	Luna< ork::CPUBuffer >::Register(L);
	Luna< ork::FrameBuffer >::Register(L);
	Luna< ork::GPUBuffer >::Register(L);
	Luna< ork::MeshBuffers >::Register(L);
	Luna< ork::Module >::Register(L);
	Luna< ork::Program >::Register(L);
	Luna< ork::Query >::Register(L);
	Luna< ork::RenderBuffer >::Register(L);
	Luna< ork::Sampler >::Register(L);
	Luna< ork::Sampler::Parameters >::Register(L);
	Luna< ork::Texture >::Register(L);
	Luna< ork::Texture::Parameters >::Register(L);
	Luna< ork::Texture1D >::Register(L);
	Luna< ork::Texture1DArray >::Register(L);
	Luna< ork::Texture2D >::Register(L);
	Luna< ork::Texture2DArray >::Register(L);
	Luna< ork::Texture2DMultisample >::Register(L);
	Luna< ork::Texture2DMultisampleArray >::Register(L);
	Luna< ork::Texture3D >::Register(L);
	Luna< ork::TextureBuffer >::Register(L);
	Luna< ork::TextureCube >::Register(L);
	Luna< ork::TextureCubeArray >::Register(L);
	Luna< ork::TextureRectangle >::Register(L);
	Luna< ork::TransformFeedback >::Register(L);
	Luna< ork::Uniform >::Register(L);
	Luna< ork::UniformSampler >::Register(L);
	Luna< ork::UniformSubroutine >::Register(L);
	Luna< ork::UniformBlock >::Register(L);
	Luna< ork::Value >::Register(L);
	Luna< ork::ValueSampler >::Register(L);
	Luna< ork::ValueSubroutine >::Register(L);
	Luna< ork::Font >::Register(L);
	Luna< ork::ResourceLoader >::Register(L);
	Luna< ork::CompiledResourceLoader >::Register(L);
	Luna< ork::Resource >::Register(L);
	Luna< ork::XMLResourceLoader >::Register(L);
	Luna< ork::ResourceCompiler >::Register(L);
	Luna< ork::ResourceFactory >::Register(L);
	Luna< ork::ResourceManager >::Register(L);
	Luna< ork::vec2h >::Register(L);
	Luna< ork::vec2f >::Register(L);
	Luna< ork::vec2d >::Register(L);
	Luna< ork::vec2i >::Register(L);
	Luna< ork::vec2b >::Register(L);
	Luna< ork::vec3h >::Register(L);
	Luna< ork::vec3f >::Register(L);
	Luna< ork::vec3d >::Register(L);
	Luna< ork::vec3i >::Register(L);
	Luna< ork::vec3b >::Register(L);
	Luna< ork::vec4h >::Register(L);
	Luna< ork::vec4f >::Register(L);
	Luna< ork::vec4d >::Register(L);
	Luna< ork::vec4i >::Register(L);
	Luna< ork::vec4b >::Register(L);
	Luna< ork::box2f >::Register(L);
	Luna< ork::box2d >::Register(L);
	Luna< ork::box2i >::Register(L);
	Luna< ork::box3f >::Register(L);
	Luna< ork::box3d >::Register(L);
	Luna< ork::box3i >::Register(L);
	Luna< ork::mat2f >::Register(L);
	Luna< ork::mat2d >::Register(L);
	Luna< ork::mat3f >::Register(L);
	Luna< ork::mat3d >::Register(L);
	Luna< ork::mat4f >::Register(L);
	Luna< ork::mat4d >::Register(L);
	Luna< ork::quatf >::Register(L);
	Luna< ork::quatd >::Register(L);
	luna_popModule(L);
	luna_pushModule(L,"land");
	Luna< std::vector< ork::ptr< ork::Module > > >::Register(L);
	Luna< osg::BoundingBox >::Register(L);
	Luna< ork::static_ptr< ork::Logger > >::Register(L);
	Luna< std::set< ork::Program * > >::Register(L);
	Luna< std::vector< ork::ptr< ork::Uniform > > >::Register(L);
	Luna< uint64_t >::Register(L);
	luna_popModule(L);

	luna_pushModule(L,"land");

	register_defines(L);

	register_enums(L);

	luna_popModule(L);

	register_global_functions(L);

	luna_copyParents(L,"ork");
	luna_copyParents(L,"land");

	luna_pushModule(L,"land");
	return 1;
}

#ifdef __cplusplus
}
#endif


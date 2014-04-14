#ifndef _LUNA_TYPES_H_
#define _LUNA_TYPES_H_

#include <plug_common.h>

#include <ork/core/Object.h>
#include <ork/taskgraph/Task.h>
#include <ork/render/Buffer.h>
#include <ork/render/FrameBuffer.h>
#include <ork/resource/ResourceDescriptor.h>
#include <ork/resource/CompiledResourceLoader.h>
#include <ork/scenegraph/SetTargetTask.h>
#include <ork/resource/tinyxml.h>
#include <ork/util/Font.h>
#include <plug_extensions.h>
#include <ork/math/box2.h>
#include <ork/math/box3.h>
#include <ork/math/mat2.h>
#include <ork/math/mat3.h>
#include <ork/math/mat4.h>
#include <ork/math/quat.h>
#include <ork/math/vec2.h>
#include <ork/math/vec3.h>
#include <ork/math/vec4.h>
#include <ork/render/Uniform.h>
#include <ork/render/Value.h>
#include <ork/core/Logger.h>
#include <ork/core/FileLogger.h>
#include <ork/core/Timer.h>
#include <ork/core/GPUTimer.h>
#include <ork/math/half.h>
#include <ork/render/AttributeBuffer.h>
#include <ork/render/CPUBuffer.h>
#include <ork/render/GPUBuffer.h>
#include <ork/render/MeshBuffers.h>
#include <ork/render/Module.h>
#include <ork/render/Program.h>
#include <ork/render/Query.h>
#include <ork/render/RenderBuffer.h>
#include <ork/render/Sampler.h>
#include <ork/render/Texture.h>
#include <ork/render/Texture1D.h>
#include <ork/render/Texture1DArray.h>
#include <ork/render/Texture2D.h>
#include <ork/render/Texture2DArray.h>
#include <ork/render/Texture2DMultisample.h>
#include <ork/render/Texture2DMultisampleArray.h>
#include <ork/render/Texture3D.h>
#include <ork/render/TextureBuffer.h>
#include <ork/render/TextureCube.h>
#include <ork/render/TextureCubeArray.h>
#include <ork/render/TextureRectangle.h>
#include <ork/render/TransformFeedback.h>
#include <ork/resource/ResourceLoader.h>
#include <ork/resource/Resource.h>
#include <ork/resource/XMLResourceLoader.h>
#include <ork/resource/ResourceCompiler.h>
#include <ork/resource/ResourceFactory.h>
#include <ork/resource/ResourceManager.h>
#include <ork/taskgraph/Scheduler.h>
#include <ork/taskgraph/MultithreadScheduler.h>
#include <ork/taskgraph/TaskFactory.h>
#include <ork/taskgraph/TaskGraph.h>
#include <ork/scenegraph/AbstractTask.h>
#include <ork/scenegraph/CallMethodTask.h>
#include <ork/scenegraph/DrawMeshTask.h>
#include <ork/scenegraph/LoopTask.h>
#include <ork/scenegraph/Method.h>
#include <ork/scenegraph/SceneManager.h>
#include <ork/scenegraph/SceneNode.h>
#include <ork/scenegraph/SequenceTask.h>
#include <ork/scenegraph/SetProgramTask.h>
#include <ork/scenegraph/SetStateTask.h>
#include <ork/scenegraph/SetTransformsTask.h>
#include <ork/scenegraph/ShowInfoTask.h>
#include <ork/scenegraph/ShowLogTask.h>

// Class: ork::Object
template<>
class LunaTraits< ork::Object > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Object* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Object* obj);
	typedef ork::Object parent_t;
	typedef ork::Object base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Task
template<>
class LunaTraits< ork::Task > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Task* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Task* obj);
	typedef ork::Object parent_t;
	typedef ork::Task base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Buffer::Parameters
template<>
class LunaTraits< ork::Buffer::Parameters > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Buffer::Parameters* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Buffer::Parameters* obj);
	typedef ork::Buffer::Parameters parent_t;
	typedef ork::Buffer::Parameters base_t;
	static luna_ConverterType converters[];
};

// Class: ork::FrameBuffer::Parameters
template<>
class LunaTraits< ork::FrameBuffer::Parameters > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::FrameBuffer::Parameters* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::FrameBuffer::Parameters* obj);
	typedef ork::FrameBuffer::Parameters parent_t;
	typedef ork::FrameBuffer::Parameters base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Object::static_ref
template<>
class LunaTraits< ork::Object::static_ref > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Object::static_ref* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Object::static_ref* obj);
	typedef ork::Object::static_ref parent_t;
	typedef ork::Object::static_ref base_t;
	static luna_ConverterType converters[];
};

// Class: ork::ResourceDescriptor
template<>
class LunaTraits< ork::ResourceDescriptor > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::ResourceDescriptor* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::ResourceDescriptor* obj);
	typedef ork::Object parent_t;
	typedef ork::ResourceDescriptor base_t;
	static luna_ConverterType converters[];
};

// Class: ork::CompiledResourceLoader::StaticResourceDescriptor
template<>
class LunaTraits< ork::CompiledResourceLoader::StaticResourceDescriptor > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::CompiledResourceLoader::StaticResourceDescriptor* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::CompiledResourceLoader::StaticResourceDescriptor* obj);
	typedef ork::Object parent_t;
	typedef ork::CompiledResourceLoader::StaticResourceDescriptor base_t;
	static luna_ConverterType converters[];
};

// Class: ork::SetTargetTask::Target
template<>
class LunaTraits< ork::SetTargetTask::Target > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::SetTargetTask::Target* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::SetTargetTask::Target* obj);
	typedef ork::SetTargetTask::Target parent_t;
	typedef ork::SetTargetTask::Target base_t;
	static luna_ConverterType converters[];
};

// Class: TiXmlBase
template<>
class LunaTraits< TiXmlBase > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static TiXmlBase* _bind_ctor(lua_State *L);
	static void _bind_dtor(TiXmlBase* obj);
	typedef TiXmlBase parent_t;
	typedef TiXmlBase base_t;
	static luna_ConverterType converters[];
};

// Class: TiXmlAttribute
template<>
class LunaTraits< TiXmlAttribute > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static TiXmlAttribute* _bind_ctor(lua_State *L);
	static void _bind_dtor(TiXmlAttribute* obj);
	typedef TiXmlBase parent_t;
	typedef TiXmlAttribute base_t;
	static luna_ConverterType converters[];
};

// Class: TiXmlAttributeSet
template<>
class LunaTraits< TiXmlAttributeSet > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static TiXmlAttributeSet* _bind_ctor(lua_State *L);
	static void _bind_dtor(TiXmlAttributeSet* obj);
	typedef TiXmlAttributeSet parent_t;
	typedef TiXmlAttributeSet base_t;
	static luna_ConverterType converters[];
};

// Class: TiXmlNode
template<>
class LunaTraits< TiXmlNode > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static TiXmlNode* _bind_ctor(lua_State *L);
	static void _bind_dtor(TiXmlNode* obj);
	typedef TiXmlBase parent_t;
	typedef TiXmlNode base_t;
	static luna_ConverterType converters[];
};

// Class: TiXmlComment
template<>
class LunaTraits< TiXmlComment > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static TiXmlComment* _bind_ctor(lua_State *L);
	static void _bind_dtor(TiXmlComment* obj);
	typedef TiXmlBase parent_t;
	typedef TiXmlComment base_t;
	static luna_ConverterType converters[];
};

// Class: TiXmlCursor
template<>
class LunaTraits< TiXmlCursor > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static TiXmlCursor* _bind_ctor(lua_State *L);
	static void _bind_dtor(TiXmlCursor* obj);
	typedef TiXmlCursor parent_t;
	typedef TiXmlCursor base_t;
	static luna_ConverterType converters[];
};

// Class: TiXmlDeclaration
template<>
class LunaTraits< TiXmlDeclaration > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static TiXmlDeclaration* _bind_ctor(lua_State *L);
	static void _bind_dtor(TiXmlDeclaration* obj);
	typedef TiXmlBase parent_t;
	typedef TiXmlDeclaration base_t;
	static luna_ConverterType converters[];
};

// Class: TiXmlDocument
template<>
class LunaTraits< TiXmlDocument > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static TiXmlDocument* _bind_ctor(lua_State *L);
	static void _bind_dtor(TiXmlDocument* obj);
	typedef TiXmlBase parent_t;
	typedef TiXmlDocument base_t;
	static luna_ConverterType converters[];
};

// Class: TiXmlElement
template<>
class LunaTraits< TiXmlElement > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static TiXmlElement* _bind_ctor(lua_State *L);
	static void _bind_dtor(TiXmlElement* obj);
	typedef TiXmlBase parent_t;
	typedef TiXmlElement base_t;
	static luna_ConverterType converters[];
};

// Class: TiXmlHandle
template<>
class LunaTraits< TiXmlHandle > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static TiXmlHandle* _bind_ctor(lua_State *L);
	static void _bind_dtor(TiXmlHandle* obj);
	typedef TiXmlHandle parent_t;
	typedef TiXmlHandle base_t;
	static luna_ConverterType converters[];
};

// Class: TiXmlVisitor
template<>
class LunaTraits< TiXmlVisitor > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static TiXmlVisitor* _bind_ctor(lua_State *L);
	static void _bind_dtor(TiXmlVisitor* obj);
	typedef TiXmlVisitor parent_t;
	typedef TiXmlVisitor base_t;
	static luna_ConverterType converters[];
};

// Class: TiXmlPrinter
template<>
class LunaTraits< TiXmlPrinter > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static TiXmlPrinter* _bind_ctor(lua_State *L);
	static void _bind_dtor(TiXmlPrinter* obj);
	typedef TiXmlVisitor parent_t;
	typedef TiXmlPrinter base_t;
	static luna_ConverterType converters[];
};

// Class: TiXmlText
template<>
class LunaTraits< TiXmlText > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static TiXmlText* _bind_ctor(lua_State *L);
	static void _bind_dtor(TiXmlText* obj);
	typedef TiXmlBase parent_t;
	typedef TiXmlText base_t;
	static luna_ConverterType converters[];
};

// Class: TiXmlUnknown
template<>
class LunaTraits< TiXmlUnknown > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static TiXmlUnknown* _bind_ctor(lua_State *L);
	static void _bind_dtor(TiXmlUnknown* obj);
	typedef TiXmlBase parent_t;
	typedef TiXmlUnknown base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Font::Vertex
template<>
class LunaTraits< ork::Font::Vertex > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Font::Vertex* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Font::Vertex* obj);
	typedef ork::Font::Vertex parent_t;
	typedef ork::Font::Vertex base_t;
	static luna_ConverterType converters[];
};

// Class: land::ProlandDrawable
template<>
class LunaTraits< land::ProlandDrawable > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static land::ProlandDrawable* _bind_ctor(lua_State *L);
	static void _bind_dtor(land::ProlandDrawable* obj);
	typedef land::ProlandDrawable parent_t;
	typedef land::ProlandDrawable base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Uniform1< ork::VEC1F, float, float, ork::uniform1f, ork::value1f >
template<>
class LunaTraits< ork::Uniform1< ork::VEC1F, float, float, ork::uniform1f, ork::value1f > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Uniform1< ork::VEC1F, float, float, ork::uniform1f, ork::value1f >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Uniform1< ork::VEC1F, float, float, ork::uniform1f, ork::value1f >* obj);
	typedef ork::Uniform1< ork::VEC1F, float, float, ork::uniform1f, ork::value1f > parent_t;
	typedef ork::Uniform1< ork::VEC1F, float, float, ork::uniform1f, ork::value1f > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Uniform1< ork::VEC1D, double, double, ork::uniform1d, ork::value1d >
template<>
class LunaTraits< ork::Uniform1< ork::VEC1D, double, double, ork::uniform1d, ork::value1d > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Uniform1< ork::VEC1D, double, double, ork::uniform1d, ork::value1d >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Uniform1< ork::VEC1D, double, double, ork::uniform1d, ork::value1d >* obj);
	typedef ork::Uniform1< ork::VEC1D, double, double, ork::uniform1d, ork::value1d > parent_t;
	typedef ork::Uniform1< ork::VEC1D, double, double, ork::uniform1d, ork::value1d > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Uniform1< ork::VEC1I, int, int, ork::uniform1i, ork::value1i >
template<>
class LunaTraits< ork::Uniform1< ork::VEC1I, int, int, ork::uniform1i, ork::value1i > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Uniform1< ork::VEC1I, int, int, ork::uniform1i, ork::value1i >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Uniform1< ork::VEC1I, int, int, ork::uniform1i, ork::value1i >* obj);
	typedef ork::Uniform1< ork::VEC1I, int, int, ork::uniform1i, ork::value1i > parent_t;
	typedef ork::Uniform1< ork::VEC1I, int, int, ork::uniform1i, ork::value1i > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Uniform1< ork::VEC1UI, unsigned int, unsigned int, ork::uniform1ui, ork::value1ui >
template<>
class LunaTraits< ork::Uniform1< ork::VEC1UI, unsigned int, unsigned int, ork::uniform1ui, ork::value1ui > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Uniform1< ork::VEC1UI, unsigned int, unsigned int, ork::uniform1ui, ork::value1ui >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Uniform1< ork::VEC1UI, unsigned int, unsigned int, ork::uniform1ui, ork::value1ui >* obj);
	typedef ork::Uniform1< ork::VEC1UI, unsigned int, unsigned int, ork::uniform1ui, ork::value1ui > parent_t;
	typedef ork::Uniform1< ork::VEC1UI, unsigned int, unsigned int, ork::uniform1ui, ork::value1ui > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Uniform1< ork::VEC1B, bool, unsigned int, ork::uniform1b, ork::value1b >
template<>
class LunaTraits< ork::Uniform1< ork::VEC1B, bool, unsigned int, ork::uniform1b, ork::value1b > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Uniform1< ork::VEC1B, bool, unsigned int, ork::uniform1b, ork::value1b >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Uniform1< ork::VEC1B, bool, unsigned int, ork::uniform1b, ork::value1b >* obj);
	typedef ork::Uniform1< ork::VEC1B, bool, unsigned int, ork::uniform1b, ork::value1b > parent_t;
	typedef ork::Uniform1< ork::VEC1B, bool, unsigned int, ork::uniform1b, ork::value1b > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Uniform2< ork::VEC2F, float, float, ork::uniform2f, ork::value2f >
template<>
class LunaTraits< ork::Uniform2< ork::VEC2F, float, float, ork::uniform2f, ork::value2f > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Uniform2< ork::VEC2F, float, float, ork::uniform2f, ork::value2f >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Uniform2< ork::VEC2F, float, float, ork::uniform2f, ork::value2f >* obj);
	typedef ork::Uniform2< ork::VEC2F, float, float, ork::uniform2f, ork::value2f > parent_t;
	typedef ork::Uniform2< ork::VEC2F, float, float, ork::uniform2f, ork::value2f > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Uniform2< ork::VEC2B, double, double, ork::uniform2d, ork::value2d >
template<>
class LunaTraits< ork::Uniform2< ork::VEC2B, double, double, ork::uniform2d, ork::value2d > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Uniform2< ork::VEC2B, double, double, ork::uniform2d, ork::value2d >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Uniform2< ork::VEC2B, double, double, ork::uniform2d, ork::value2d >* obj);
	typedef ork::Uniform2< ork::VEC2B, double, double, ork::uniform2d, ork::value2d > parent_t;
	typedef ork::Uniform2< ork::VEC2B, double, double, ork::uniform2d, ork::value2d > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Uniform2< ork::VEC2I, int, int, ork::uniform2i, ork::value2i >
template<>
class LunaTraits< ork::Uniform2< ork::VEC2I, int, int, ork::uniform2i, ork::value2i > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Uniform2< ork::VEC2I, int, int, ork::uniform2i, ork::value2i >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Uniform2< ork::VEC2I, int, int, ork::uniform2i, ork::value2i >* obj);
	typedef ork::Uniform2< ork::VEC2I, int, int, ork::uniform2i, ork::value2i > parent_t;
	typedef ork::Uniform2< ork::VEC2I, int, int, ork::uniform2i, ork::value2i > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Uniform2< ork::VEC2UI, unsigned int, unsigned int, ork::uniform2ui, ork::value2ui >
template<>
class LunaTraits< ork::Uniform2< ork::VEC2UI, unsigned int, unsigned int, ork::uniform2ui, ork::value2ui > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Uniform2< ork::VEC2UI, unsigned int, unsigned int, ork::uniform2ui, ork::value2ui >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Uniform2< ork::VEC2UI, unsigned int, unsigned int, ork::uniform2ui, ork::value2ui >* obj);
	typedef ork::Uniform2< ork::VEC2UI, unsigned int, unsigned int, ork::uniform2ui, ork::value2ui > parent_t;
	typedef ork::Uniform2< ork::VEC2UI, unsigned int, unsigned int, ork::uniform2ui, ork::value2ui > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Uniform2< ork::VEC2B, bool, unsigned int, ork::uniform2b, ork::value2b >
template<>
class LunaTraits< ork::Uniform2< ork::VEC2B, bool, unsigned int, ork::uniform2b, ork::value2b > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Uniform2< ork::VEC2B, bool, unsigned int, ork::uniform2b, ork::value2b >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Uniform2< ork::VEC2B, bool, unsigned int, ork::uniform2b, ork::value2b >* obj);
	typedef ork::Uniform2< ork::VEC2B, bool, unsigned int, ork::uniform2b, ork::value2b > parent_t;
	typedef ork::Uniform2< ork::VEC2B, bool, unsigned int, ork::uniform2b, ork::value2b > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Uniform3< ork::VEC3F, float, float, ork::uniform3f, ork::value3f >
template<>
class LunaTraits< ork::Uniform3< ork::VEC3F, float, float, ork::uniform3f, ork::value3f > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Uniform3< ork::VEC3F, float, float, ork::uniform3f, ork::value3f >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Uniform3< ork::VEC3F, float, float, ork::uniform3f, ork::value3f >* obj);
	typedef ork::Uniform3< ork::VEC3F, float, float, ork::uniform3f, ork::value3f > parent_t;
	typedef ork::Uniform3< ork::VEC3F, float, float, ork::uniform3f, ork::value3f > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Uniform3< ork::VEC3D, double, double, ork::uniform3d, ork::value3d >
template<>
class LunaTraits< ork::Uniform3< ork::VEC3D, double, double, ork::uniform3d, ork::value3d > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Uniform3< ork::VEC3D, double, double, ork::uniform3d, ork::value3d >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Uniform3< ork::VEC3D, double, double, ork::uniform3d, ork::value3d >* obj);
	typedef ork::Uniform3< ork::VEC3D, double, double, ork::uniform3d, ork::value3d > parent_t;
	typedef ork::Uniform3< ork::VEC3D, double, double, ork::uniform3d, ork::value3d > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Uniform3< ork::VEC3I, int, int, ork::uniform3i, ork::value3i >
template<>
class LunaTraits< ork::Uniform3< ork::VEC3I, int, int, ork::uniform3i, ork::value3i > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Uniform3< ork::VEC3I, int, int, ork::uniform3i, ork::value3i >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Uniform3< ork::VEC3I, int, int, ork::uniform3i, ork::value3i >* obj);
	typedef ork::Uniform3< ork::VEC3I, int, int, ork::uniform3i, ork::value3i > parent_t;
	typedef ork::Uniform3< ork::VEC3I, int, int, ork::uniform3i, ork::value3i > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Uniform3< ork::VEC3UI, unsigned int, unsigned int, ork::uniform3ui, ork::value3ui >
template<>
class LunaTraits< ork::Uniform3< ork::VEC3UI, unsigned int, unsigned int, ork::uniform3ui, ork::value3ui > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Uniform3< ork::VEC3UI, unsigned int, unsigned int, ork::uniform3ui, ork::value3ui >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Uniform3< ork::VEC3UI, unsigned int, unsigned int, ork::uniform3ui, ork::value3ui >* obj);
	typedef ork::Uniform3< ork::VEC3UI, unsigned int, unsigned int, ork::uniform3ui, ork::value3ui > parent_t;
	typedef ork::Uniform3< ork::VEC3UI, unsigned int, unsigned int, ork::uniform3ui, ork::value3ui > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Uniform3< ork::VEC3B, bool, unsigned int, ork::uniform3b, ork::value3b >
template<>
class LunaTraits< ork::Uniform3< ork::VEC3B, bool, unsigned int, ork::uniform3b, ork::value3b > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Uniform3< ork::VEC3B, bool, unsigned int, ork::uniform3b, ork::value3b >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Uniform3< ork::VEC3B, bool, unsigned int, ork::uniform3b, ork::value3b >* obj);
	typedef ork::Uniform3< ork::VEC3B, bool, unsigned int, ork::uniform3b, ork::value3b > parent_t;
	typedef ork::Uniform3< ork::VEC3B, bool, unsigned int, ork::uniform3b, ork::value3b > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Uniform4< ork::VEC4F, float, float, ork::uniform4f, ork::value4f >
template<>
class LunaTraits< ork::Uniform4< ork::VEC4F, float, float, ork::uniform4f, ork::value4f > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Uniform4< ork::VEC4F, float, float, ork::uniform4f, ork::value4f >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Uniform4< ork::VEC4F, float, float, ork::uniform4f, ork::value4f >* obj);
	typedef ork::Uniform4< ork::VEC4F, float, float, ork::uniform4f, ork::value4f > parent_t;
	typedef ork::Uniform4< ork::VEC4F, float, float, ork::uniform4f, ork::value4f > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Uniform4< ork::VEC4D, double, double, ork::uniform4d, ork::value4d >
template<>
class LunaTraits< ork::Uniform4< ork::VEC4D, double, double, ork::uniform4d, ork::value4d > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Uniform4< ork::VEC4D, double, double, ork::uniform4d, ork::value4d >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Uniform4< ork::VEC4D, double, double, ork::uniform4d, ork::value4d >* obj);
	typedef ork::Uniform4< ork::VEC4D, double, double, ork::uniform4d, ork::value4d > parent_t;
	typedef ork::Uniform4< ork::VEC4D, double, double, ork::uniform4d, ork::value4d > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Uniform4< ork::VEC4I, int, int, ork::uniform4i, ork::value4i >
template<>
class LunaTraits< ork::Uniform4< ork::VEC4I, int, int, ork::uniform4i, ork::value4i > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Uniform4< ork::VEC4I, int, int, ork::uniform4i, ork::value4i >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Uniform4< ork::VEC4I, int, int, ork::uniform4i, ork::value4i >* obj);
	typedef ork::Uniform4< ork::VEC4I, int, int, ork::uniform4i, ork::value4i > parent_t;
	typedef ork::Uniform4< ork::VEC4I, int, int, ork::uniform4i, ork::value4i > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Uniform4< ork::VEC4UI, unsigned int, unsigned int, ork::uniform4ui, ork::value4ui >
template<>
class LunaTraits< ork::Uniform4< ork::VEC4UI, unsigned int, unsigned int, ork::uniform4ui, ork::value4ui > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Uniform4< ork::VEC4UI, unsigned int, unsigned int, ork::uniform4ui, ork::value4ui >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Uniform4< ork::VEC4UI, unsigned int, unsigned int, ork::uniform4ui, ork::value4ui >* obj);
	typedef ork::Uniform4< ork::VEC4UI, unsigned int, unsigned int, ork::uniform4ui, ork::value4ui > parent_t;
	typedef ork::Uniform4< ork::VEC4UI, unsigned int, unsigned int, ork::uniform4ui, ork::value4ui > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Uniform4< ork::VEC4B, bool, unsigned int, ork::uniform4b, ork::value4b >
template<>
class LunaTraits< ork::Uniform4< ork::VEC4B, bool, unsigned int, ork::uniform4b, ork::value4b > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Uniform4< ork::VEC4B, bool, unsigned int, ork::uniform4b, ork::value4b >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Uniform4< ork::VEC4B, bool, unsigned int, ork::uniform4b, ork::value4b >* obj);
	typedef ork::Uniform4< ork::VEC4B, bool, unsigned int, ork::uniform4b, ork::value4b > parent_t;
	typedef ork::Uniform4< ork::VEC4B, bool, unsigned int, ork::uniform4b, ork::value4b > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::UniformMatrix< ork::MAT2F, float, 2, 2, ork::uniformMatrix2f, ork::valueMatrix2f >
template<>
class LunaTraits< ork::UniformMatrix< ork::MAT2F, float, 2, 2, ork::uniformMatrix2f, ork::valueMatrix2f > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::UniformMatrix< ork::MAT2F, float, 2, 2, ork::uniformMatrix2f, ork::valueMatrix2f >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::UniformMatrix< ork::MAT2F, float, 2, 2, ork::uniformMatrix2f, ork::valueMatrix2f >* obj);
	typedef ork::UniformMatrix< ork::MAT2F, float, 2, 2, ork::uniformMatrix2f, ork::valueMatrix2f > parent_t;
	typedef ork::UniformMatrix< ork::MAT2F, float, 2, 2, ork::uniformMatrix2f, ork::valueMatrix2f > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::UniformMatrix3< ork::MAT3F, float, ork::uniformMatrix3f, ork::valueMatrix3f >
template<>
class LunaTraits< ork::UniformMatrix3< ork::MAT3F, float, ork::uniformMatrix3f, ork::valueMatrix3f > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::UniformMatrix3< ork::MAT3F, float, ork::uniformMatrix3f, ork::valueMatrix3f >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::UniformMatrix3< ork::MAT3F, float, ork::uniformMatrix3f, ork::valueMatrix3f >* obj);
	typedef ork::UniformMatrix3< ork::MAT3F, float, ork::uniformMatrix3f, ork::valueMatrix3f > parent_t;
	typedef ork::UniformMatrix3< ork::MAT3F, float, ork::uniformMatrix3f, ork::valueMatrix3f > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::UniformMatrix4< ork::MAT4F, float, ork::uniformMatrix4f, ork::valueMatrix4f >
template<>
class LunaTraits< ork::UniformMatrix4< ork::MAT4F, float, ork::uniformMatrix4f, ork::valueMatrix4f > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::UniformMatrix4< ork::MAT4F, float, ork::uniformMatrix4f, ork::valueMatrix4f >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::UniformMatrix4< ork::MAT4F, float, ork::uniformMatrix4f, ork::valueMatrix4f >* obj);
	typedef ork::UniformMatrix4< ork::MAT4F, float, ork::uniformMatrix4f, ork::valueMatrix4f > parent_t;
	typedef ork::UniformMatrix4< ork::MAT4F, float, ork::uniformMatrix4f, ork::valueMatrix4f > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::UniformMatrix< ork::MAT2x3F, float, 2, 3, ork::uniformMatrix2x3f, ork::valueMatrix2x3f >
template<>
class LunaTraits< ork::UniformMatrix< ork::MAT2x3F, float, 2, 3, ork::uniformMatrix2x3f, ork::valueMatrix2x3f > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::UniformMatrix< ork::MAT2x3F, float, 2, 3, ork::uniformMatrix2x3f, ork::valueMatrix2x3f >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::UniformMatrix< ork::MAT2x3F, float, 2, 3, ork::uniformMatrix2x3f, ork::valueMatrix2x3f >* obj);
	typedef ork::UniformMatrix< ork::MAT2x3F, float, 2, 3, ork::uniformMatrix2x3f, ork::valueMatrix2x3f > parent_t;
	typedef ork::UniformMatrix< ork::MAT2x3F, float, 2, 3, ork::uniformMatrix2x3f, ork::valueMatrix2x3f > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::UniformMatrix< ork::MAT2x4F, float, 2, 4, ork::uniformMatrix2x4f, ork::valueMatrix2x4f >
template<>
class LunaTraits< ork::UniformMatrix< ork::MAT2x4F, float, 2, 4, ork::uniformMatrix2x4f, ork::valueMatrix2x4f > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::UniformMatrix< ork::MAT2x4F, float, 2, 4, ork::uniformMatrix2x4f, ork::valueMatrix2x4f >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::UniformMatrix< ork::MAT2x4F, float, 2, 4, ork::uniformMatrix2x4f, ork::valueMatrix2x4f >* obj);
	typedef ork::UniformMatrix< ork::MAT2x4F, float, 2, 4, ork::uniformMatrix2x4f, ork::valueMatrix2x4f > parent_t;
	typedef ork::UniformMatrix< ork::MAT2x4F, float, 2, 4, ork::uniformMatrix2x4f, ork::valueMatrix2x4f > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::UniformMatrix< ork::MAT3x2F, float, 3, 2, ork::uniformMatrix3x2f, ork::valueMatrix3x2f >
template<>
class LunaTraits< ork::UniformMatrix< ork::MAT3x2F, float, 3, 2, ork::uniformMatrix3x2f, ork::valueMatrix3x2f > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::UniformMatrix< ork::MAT3x2F, float, 3, 2, ork::uniformMatrix3x2f, ork::valueMatrix3x2f >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::UniformMatrix< ork::MAT3x2F, float, 3, 2, ork::uniformMatrix3x2f, ork::valueMatrix3x2f >* obj);
	typedef ork::UniformMatrix< ork::MAT3x2F, float, 3, 2, ork::uniformMatrix3x2f, ork::valueMatrix3x2f > parent_t;
	typedef ork::UniformMatrix< ork::MAT3x2F, float, 3, 2, ork::uniformMatrix3x2f, ork::valueMatrix3x2f > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::UniformMatrix< ork::MAT3x4F, float, 3, 4, ork::uniformMatrix3x4f, ork::valueMatrix3x4f >
template<>
class LunaTraits< ork::UniformMatrix< ork::MAT3x4F, float, 3, 4, ork::uniformMatrix3x4f, ork::valueMatrix3x4f > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::UniformMatrix< ork::MAT3x4F, float, 3, 4, ork::uniformMatrix3x4f, ork::valueMatrix3x4f >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::UniformMatrix< ork::MAT3x4F, float, 3, 4, ork::uniformMatrix3x4f, ork::valueMatrix3x4f >* obj);
	typedef ork::UniformMatrix< ork::MAT3x4F, float, 3, 4, ork::uniformMatrix3x4f, ork::valueMatrix3x4f > parent_t;
	typedef ork::UniformMatrix< ork::MAT3x4F, float, 3, 4, ork::uniformMatrix3x4f, ork::valueMatrix3x4f > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::UniformMatrix< ork::MAT4x2F, float, 4, 2, ork::uniformMatrix4x2f, ork::valueMatrix4x2f >
template<>
class LunaTraits< ork::UniformMatrix< ork::MAT4x2F, float, 4, 2, ork::uniformMatrix4x2f, ork::valueMatrix4x2f > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::UniformMatrix< ork::MAT4x2F, float, 4, 2, ork::uniformMatrix4x2f, ork::valueMatrix4x2f >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::UniformMatrix< ork::MAT4x2F, float, 4, 2, ork::uniformMatrix4x2f, ork::valueMatrix4x2f >* obj);
	typedef ork::UniformMatrix< ork::MAT4x2F, float, 4, 2, ork::uniformMatrix4x2f, ork::valueMatrix4x2f > parent_t;
	typedef ork::UniformMatrix< ork::MAT4x2F, float, 4, 2, ork::uniformMatrix4x2f, ork::valueMatrix4x2f > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::UniformMatrix< ork::MAT4x3F, float, 4, 3, ork::uniformMatrix4x3f, ork::valueMatrix4x3f >
template<>
class LunaTraits< ork::UniformMatrix< ork::MAT4x3F, float, 4, 3, ork::uniformMatrix4x3f, ork::valueMatrix4x3f > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::UniformMatrix< ork::MAT4x3F, float, 4, 3, ork::uniformMatrix4x3f, ork::valueMatrix4x3f >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::UniformMatrix< ork::MAT4x3F, float, 4, 3, ork::uniformMatrix4x3f, ork::valueMatrix4x3f >* obj);
	typedef ork::UniformMatrix< ork::MAT4x3F, float, 4, 3, ork::uniformMatrix4x3f, ork::valueMatrix4x3f > parent_t;
	typedef ork::UniformMatrix< ork::MAT4x3F, float, 4, 3, ork::uniformMatrix4x3f, ork::valueMatrix4x3f > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::UniformMatrix< ork::MAT2D, double, 2, 2, ork::uniformMatrix2d, ork::valueMatrix2d >
template<>
class LunaTraits< ork::UniformMatrix< ork::MAT2D, double, 2, 2, ork::uniformMatrix2d, ork::valueMatrix2d > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::UniformMatrix< ork::MAT2D, double, 2, 2, ork::uniformMatrix2d, ork::valueMatrix2d >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::UniformMatrix< ork::MAT2D, double, 2, 2, ork::uniformMatrix2d, ork::valueMatrix2d >* obj);
	typedef ork::UniformMatrix< ork::MAT2D, double, 2, 2, ork::uniformMatrix2d, ork::valueMatrix2d > parent_t;
	typedef ork::UniformMatrix< ork::MAT2D, double, 2, 2, ork::uniformMatrix2d, ork::valueMatrix2d > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::UniformMatrix3< ork::MAT3D, double, ork::uniformMatrix3d, ork::valueMatrix3d >
template<>
class LunaTraits< ork::UniformMatrix3< ork::MAT3D, double, ork::uniformMatrix3d, ork::valueMatrix3d > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::UniformMatrix3< ork::MAT3D, double, ork::uniformMatrix3d, ork::valueMatrix3d >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::UniformMatrix3< ork::MAT3D, double, ork::uniformMatrix3d, ork::valueMatrix3d >* obj);
	typedef ork::UniformMatrix3< ork::MAT3D, double, ork::uniformMatrix3d, ork::valueMatrix3d > parent_t;
	typedef ork::UniformMatrix3< ork::MAT3D, double, ork::uniformMatrix3d, ork::valueMatrix3d > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::UniformMatrix4< ork::MAT4D, double, ork::uniformMatrix4d, ork::valueMatrix4d >
template<>
class LunaTraits< ork::UniformMatrix4< ork::MAT4D, double, ork::uniformMatrix4d, ork::valueMatrix4d > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::UniformMatrix4< ork::MAT4D, double, ork::uniformMatrix4d, ork::valueMatrix4d >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::UniformMatrix4< ork::MAT4D, double, ork::uniformMatrix4d, ork::valueMatrix4d >* obj);
	typedef ork::UniformMatrix4< ork::MAT4D, double, ork::uniformMatrix4d, ork::valueMatrix4d > parent_t;
	typedef ork::UniformMatrix4< ork::MAT4D, double, ork::uniformMatrix4d, ork::valueMatrix4d > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::UniformMatrix< ork::MAT2x3D, double, 2, 3, ork::uniformMatrix2x3d, ork::valueMatrix2x3d >
template<>
class LunaTraits< ork::UniformMatrix< ork::MAT2x3D, double, 2, 3, ork::uniformMatrix2x3d, ork::valueMatrix2x3d > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::UniformMatrix< ork::MAT2x3D, double, 2, 3, ork::uniformMatrix2x3d, ork::valueMatrix2x3d >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::UniformMatrix< ork::MAT2x3D, double, 2, 3, ork::uniformMatrix2x3d, ork::valueMatrix2x3d >* obj);
	typedef ork::UniformMatrix< ork::MAT2x3D, double, 2, 3, ork::uniformMatrix2x3d, ork::valueMatrix2x3d > parent_t;
	typedef ork::UniformMatrix< ork::MAT2x3D, double, 2, 3, ork::uniformMatrix2x3d, ork::valueMatrix2x3d > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::UniformMatrix< ork::MAT2x4D, double, 2, 4, ork::uniformMatrix2x4d, ork::valueMatrix2x4d >
template<>
class LunaTraits< ork::UniformMatrix< ork::MAT2x4D, double, 2, 4, ork::uniformMatrix2x4d, ork::valueMatrix2x4d > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::UniformMatrix< ork::MAT2x4D, double, 2, 4, ork::uniformMatrix2x4d, ork::valueMatrix2x4d >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::UniformMatrix< ork::MAT2x4D, double, 2, 4, ork::uniformMatrix2x4d, ork::valueMatrix2x4d >* obj);
	typedef ork::UniformMatrix< ork::MAT2x4D, double, 2, 4, ork::uniformMatrix2x4d, ork::valueMatrix2x4d > parent_t;
	typedef ork::UniformMatrix< ork::MAT2x4D, double, 2, 4, ork::uniformMatrix2x4d, ork::valueMatrix2x4d > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::UniformMatrix< ork::MAT3x2D, double, 3, 2, ork::uniformMatrix3x2d, ork::valueMatrix3x2d >
template<>
class LunaTraits< ork::UniformMatrix< ork::MAT3x2D, double, 3, 2, ork::uniformMatrix3x2d, ork::valueMatrix3x2d > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::UniformMatrix< ork::MAT3x2D, double, 3, 2, ork::uniformMatrix3x2d, ork::valueMatrix3x2d >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::UniformMatrix< ork::MAT3x2D, double, 3, 2, ork::uniformMatrix3x2d, ork::valueMatrix3x2d >* obj);
	typedef ork::UniformMatrix< ork::MAT3x2D, double, 3, 2, ork::uniformMatrix3x2d, ork::valueMatrix3x2d > parent_t;
	typedef ork::UniformMatrix< ork::MAT3x2D, double, 3, 2, ork::uniformMatrix3x2d, ork::valueMatrix3x2d > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::UniformMatrix< ork::MAT3x4D, double, 3, 4, ork::uniformMatrix3x4d, ork::valueMatrix3x4d >
template<>
class LunaTraits< ork::UniformMatrix< ork::MAT3x4D, double, 3, 4, ork::uniformMatrix3x4d, ork::valueMatrix3x4d > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::UniformMatrix< ork::MAT3x4D, double, 3, 4, ork::uniformMatrix3x4d, ork::valueMatrix3x4d >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::UniformMatrix< ork::MAT3x4D, double, 3, 4, ork::uniformMatrix3x4d, ork::valueMatrix3x4d >* obj);
	typedef ork::UniformMatrix< ork::MAT3x4D, double, 3, 4, ork::uniformMatrix3x4d, ork::valueMatrix3x4d > parent_t;
	typedef ork::UniformMatrix< ork::MAT3x4D, double, 3, 4, ork::uniformMatrix3x4d, ork::valueMatrix3x4d > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::UniformMatrix< ork::MAT4x2D, double, 4, 2, ork::uniformMatrix4x2d, ork::valueMatrix4x2d >
template<>
class LunaTraits< ork::UniformMatrix< ork::MAT4x2D, double, 4, 2, ork::uniformMatrix4x2d, ork::valueMatrix4x2d > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::UniformMatrix< ork::MAT4x2D, double, 4, 2, ork::uniformMatrix4x2d, ork::valueMatrix4x2d >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::UniformMatrix< ork::MAT4x2D, double, 4, 2, ork::uniformMatrix4x2d, ork::valueMatrix4x2d >* obj);
	typedef ork::UniformMatrix< ork::MAT4x2D, double, 4, 2, ork::uniformMatrix4x2d, ork::valueMatrix4x2d > parent_t;
	typedef ork::UniformMatrix< ork::MAT4x2D, double, 4, 2, ork::uniformMatrix4x2d, ork::valueMatrix4x2d > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::UniformMatrix< ork::MAT4x3D, double, 4, 3, ork::uniformMatrix4x3d, ork::valueMatrix4x3d >
template<>
class LunaTraits< ork::UniformMatrix< ork::MAT4x3D, double, 4, 3, ork::uniformMatrix4x3d, ork::valueMatrix4x3d > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::UniformMatrix< ork::MAT4x3D, double, 4, 3, ork::uniformMatrix4x3d, ork::valueMatrix4x3d >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::UniformMatrix< ork::MAT4x3D, double, 4, 3, ork::uniformMatrix4x3d, ork::valueMatrix4x3d >* obj);
	typedef ork::UniformMatrix< ork::MAT4x3D, double, 4, 3, ork::uniformMatrix4x3d, ork::valueMatrix4x3d > parent_t;
	typedef ork::UniformMatrix< ork::MAT4x3D, double, 4, 3, ork::uniformMatrix4x3d, ork::valueMatrix4x3d > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Value1< ork::VEC1F, float, ork::value1f >
template<>
class LunaTraits< ork::Value1< ork::VEC1F, float, ork::value1f > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Value1< ork::VEC1F, float, ork::value1f >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Value1< ork::VEC1F, float, ork::value1f >* obj);
	typedef ork::Value1< ork::VEC1F, float, ork::value1f > parent_t;
	typedef ork::Value1< ork::VEC1F, float, ork::value1f > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Value1< ork::VEC1D, double, ork::value1d >
template<>
class LunaTraits< ork::Value1< ork::VEC1D, double, ork::value1d > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Value1< ork::VEC1D, double, ork::value1d >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Value1< ork::VEC1D, double, ork::value1d >* obj);
	typedef ork::Value1< ork::VEC1D, double, ork::value1d > parent_t;
	typedef ork::Value1< ork::VEC1D, double, ork::value1d > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Value1< ork::VEC1I, int, ork::value1i >
template<>
class LunaTraits< ork::Value1< ork::VEC1I, int, ork::value1i > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Value1< ork::VEC1I, int, ork::value1i >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Value1< ork::VEC1I, int, ork::value1i >* obj);
	typedef ork::Value1< ork::VEC1I, int, ork::value1i > parent_t;
	typedef ork::Value1< ork::VEC1I, int, ork::value1i > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Value1< ork::VEC1UI, unsigned int, ork::value1ui >
template<>
class LunaTraits< ork::Value1< ork::VEC1UI, unsigned int, ork::value1ui > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Value1< ork::VEC1UI, unsigned int, ork::value1ui >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Value1< ork::VEC1UI, unsigned int, ork::value1ui >* obj);
	typedef ork::Value1< ork::VEC1UI, unsigned int, ork::value1ui > parent_t;
	typedef ork::Value1< ork::VEC1UI, unsigned int, ork::value1ui > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Value1< ork::VEC1B, bool, ork::value1b >
template<>
class LunaTraits< ork::Value1< ork::VEC1B, bool, ork::value1b > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Value1< ork::VEC1B, bool, ork::value1b >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Value1< ork::VEC1B, bool, ork::value1b >* obj);
	typedef ork::Value1< ork::VEC1B, bool, ork::value1b > parent_t;
	typedef ork::Value1< ork::VEC1B, bool, ork::value1b > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Value2< ork::VEC2F, float, ork::value2f >
template<>
class LunaTraits< ork::Value2< ork::VEC2F, float, ork::value2f > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Value2< ork::VEC2F, float, ork::value2f >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Value2< ork::VEC2F, float, ork::value2f >* obj);
	typedef ork::Value2< ork::VEC2F, float, ork::value2f > parent_t;
	typedef ork::Value2< ork::VEC2F, float, ork::value2f > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Value2< ork::VEC2B, double, ork::value2d >
template<>
class LunaTraits< ork::Value2< ork::VEC2B, double, ork::value2d > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Value2< ork::VEC2B, double, ork::value2d >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Value2< ork::VEC2B, double, ork::value2d >* obj);
	typedef ork::Value2< ork::VEC2B, double, ork::value2d > parent_t;
	typedef ork::Value2< ork::VEC2B, double, ork::value2d > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Value2< ork::VEC2I, int, ork::value2i >
template<>
class LunaTraits< ork::Value2< ork::VEC2I, int, ork::value2i > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Value2< ork::VEC2I, int, ork::value2i >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Value2< ork::VEC2I, int, ork::value2i >* obj);
	typedef ork::Value2< ork::VEC2I, int, ork::value2i > parent_t;
	typedef ork::Value2< ork::VEC2I, int, ork::value2i > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Value2< ork::VEC2UI, unsigned int, ork::value2ui >
template<>
class LunaTraits< ork::Value2< ork::VEC2UI, unsigned int, ork::value2ui > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Value2< ork::VEC2UI, unsigned int, ork::value2ui >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Value2< ork::VEC2UI, unsigned int, ork::value2ui >* obj);
	typedef ork::Value2< ork::VEC2UI, unsigned int, ork::value2ui > parent_t;
	typedef ork::Value2< ork::VEC2UI, unsigned int, ork::value2ui > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Value2< ork::VEC2B, bool, ork::value2b >
template<>
class LunaTraits< ork::Value2< ork::VEC2B, bool, ork::value2b > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Value2< ork::VEC2B, bool, ork::value2b >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Value2< ork::VEC2B, bool, ork::value2b >* obj);
	typedef ork::Value2< ork::VEC2B, bool, ork::value2b > parent_t;
	typedef ork::Value2< ork::VEC2B, bool, ork::value2b > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Value3< ork::VEC3F, float, ork::value3f >
template<>
class LunaTraits< ork::Value3< ork::VEC3F, float, ork::value3f > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Value3< ork::VEC3F, float, ork::value3f >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Value3< ork::VEC3F, float, ork::value3f >* obj);
	typedef ork::Value3< ork::VEC3F, float, ork::value3f > parent_t;
	typedef ork::Value3< ork::VEC3F, float, ork::value3f > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Value3< ork::VEC3B, double, ork::value3d >
template<>
class LunaTraits< ork::Value3< ork::VEC3B, double, ork::value3d > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Value3< ork::VEC3B, double, ork::value3d >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Value3< ork::VEC3B, double, ork::value3d >* obj);
	typedef ork::Value3< ork::VEC3B, double, ork::value3d > parent_t;
	typedef ork::Value3< ork::VEC3B, double, ork::value3d > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Value3< ork::VEC3I, int, ork::value3i >
template<>
class LunaTraits< ork::Value3< ork::VEC3I, int, ork::value3i > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Value3< ork::VEC3I, int, ork::value3i >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Value3< ork::VEC3I, int, ork::value3i >* obj);
	typedef ork::Value3< ork::VEC3I, int, ork::value3i > parent_t;
	typedef ork::Value3< ork::VEC3I, int, ork::value3i > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Value3< ork::VEC3UI, unsigned int, ork::value3ui >
template<>
class LunaTraits< ork::Value3< ork::VEC3UI, unsigned int, ork::value3ui > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Value3< ork::VEC3UI, unsigned int, ork::value3ui >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Value3< ork::VEC3UI, unsigned int, ork::value3ui >* obj);
	typedef ork::Value3< ork::VEC3UI, unsigned int, ork::value3ui > parent_t;
	typedef ork::Value3< ork::VEC3UI, unsigned int, ork::value3ui > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Value3< ork::VEC3B, bool, ork::value3b >
template<>
class LunaTraits< ork::Value3< ork::VEC3B, bool, ork::value3b > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Value3< ork::VEC3B, bool, ork::value3b >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Value3< ork::VEC3B, bool, ork::value3b >* obj);
	typedef ork::Value3< ork::VEC3B, bool, ork::value3b > parent_t;
	typedef ork::Value3< ork::VEC3B, bool, ork::value3b > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Value4< ork::VEC4F, float, ork::value4f >
template<>
class LunaTraits< ork::Value4< ork::VEC4F, float, ork::value4f > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Value4< ork::VEC4F, float, ork::value4f >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Value4< ork::VEC4F, float, ork::value4f >* obj);
	typedef ork::Value4< ork::VEC4F, float, ork::value4f > parent_t;
	typedef ork::Value4< ork::VEC4F, float, ork::value4f > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Value4< ork::VEC4B, double, ork::value4d >
template<>
class LunaTraits< ork::Value4< ork::VEC4B, double, ork::value4d > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Value4< ork::VEC4B, double, ork::value4d >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Value4< ork::VEC4B, double, ork::value4d >* obj);
	typedef ork::Value4< ork::VEC4B, double, ork::value4d > parent_t;
	typedef ork::Value4< ork::VEC4B, double, ork::value4d > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Value4< ork::VEC4I, int, ork::value4i >
template<>
class LunaTraits< ork::Value4< ork::VEC4I, int, ork::value4i > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Value4< ork::VEC4I, int, ork::value4i >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Value4< ork::VEC4I, int, ork::value4i >* obj);
	typedef ork::Value4< ork::VEC4I, int, ork::value4i > parent_t;
	typedef ork::Value4< ork::VEC4I, int, ork::value4i > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Value4< ork::VEC4UI, unsigned int, ork::value4ui >
template<>
class LunaTraits< ork::Value4< ork::VEC4UI, unsigned int, ork::value4ui > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Value4< ork::VEC4UI, unsigned int, ork::value4ui >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Value4< ork::VEC4UI, unsigned int, ork::value4ui >* obj);
	typedef ork::Value4< ork::VEC4UI, unsigned int, ork::value4ui > parent_t;
	typedef ork::Value4< ork::VEC4UI, unsigned int, ork::value4ui > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Value4< ork::VEC4B, bool, ork::value4b >
template<>
class LunaTraits< ork::Value4< ork::VEC4B, bool, ork::value4b > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Value4< ork::VEC4B, bool, ork::value4b >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Value4< ork::VEC4B, bool, ork::value4b >* obj);
	typedef ork::Value4< ork::VEC4B, bool, ork::value4b > parent_t;
	typedef ork::Value4< ork::VEC4B, bool, ork::value4b > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::ValueMatrix< ork::MAT2F, float, 2, 2, ork::valueMatrix2f >
template<>
class LunaTraits< ork::ValueMatrix< ork::MAT2F, float, 2, 2, ork::valueMatrix2f > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::ValueMatrix< ork::MAT2F, float, 2, 2, ork::valueMatrix2f >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::ValueMatrix< ork::MAT2F, float, 2, 2, ork::valueMatrix2f >* obj);
	typedef ork::ValueMatrix< ork::MAT2F, float, 2, 2, ork::valueMatrix2f > parent_t;
	typedef ork::ValueMatrix< ork::MAT2F, float, 2, 2, ork::valueMatrix2f > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::ValueMatrix3< ork::MAT3F, float, ork::valueMatrix3f >
template<>
class LunaTraits< ork::ValueMatrix3< ork::MAT3F, float, ork::valueMatrix3f > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::ValueMatrix3< ork::MAT3F, float, ork::valueMatrix3f >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::ValueMatrix3< ork::MAT3F, float, ork::valueMatrix3f >* obj);
	typedef ork::ValueMatrix3< ork::MAT3F, float, ork::valueMatrix3f > parent_t;
	typedef ork::ValueMatrix3< ork::MAT3F, float, ork::valueMatrix3f > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::ValueMatrix4< ork::MAT4F, float, ork::valueMatrix4f >
template<>
class LunaTraits< ork::ValueMatrix4< ork::MAT4F, float, ork::valueMatrix4f > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::ValueMatrix4< ork::MAT4F, float, ork::valueMatrix4f >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::ValueMatrix4< ork::MAT4F, float, ork::valueMatrix4f >* obj);
	typedef ork::ValueMatrix4< ork::MAT4F, float, ork::valueMatrix4f > parent_t;
	typedef ork::ValueMatrix4< ork::MAT4F, float, ork::valueMatrix4f > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::ValueMatrix< ork::MAT2x3F, float, 2, 3, ork::valueMatrix2x3f >
template<>
class LunaTraits< ork::ValueMatrix< ork::MAT2x3F, float, 2, 3, ork::valueMatrix2x3f > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::ValueMatrix< ork::MAT2x3F, float, 2, 3, ork::valueMatrix2x3f >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::ValueMatrix< ork::MAT2x3F, float, 2, 3, ork::valueMatrix2x3f >* obj);
	typedef ork::ValueMatrix< ork::MAT2x3F, float, 2, 3, ork::valueMatrix2x3f > parent_t;
	typedef ork::ValueMatrix< ork::MAT2x3F, float, 2, 3, ork::valueMatrix2x3f > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::ValueMatrix< ork::MAT2x4F, float, 2, 4, ork::valueMatrix2x4f >
template<>
class LunaTraits< ork::ValueMatrix< ork::MAT2x4F, float, 2, 4, ork::valueMatrix2x4f > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::ValueMatrix< ork::MAT2x4F, float, 2, 4, ork::valueMatrix2x4f >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::ValueMatrix< ork::MAT2x4F, float, 2, 4, ork::valueMatrix2x4f >* obj);
	typedef ork::ValueMatrix< ork::MAT2x4F, float, 2, 4, ork::valueMatrix2x4f > parent_t;
	typedef ork::ValueMatrix< ork::MAT2x4F, float, 2, 4, ork::valueMatrix2x4f > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::ValueMatrix< ork::MAT3x2F, float, 3, 2, ork::valueMatrix3x2f >
template<>
class LunaTraits< ork::ValueMatrix< ork::MAT3x2F, float, 3, 2, ork::valueMatrix3x2f > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::ValueMatrix< ork::MAT3x2F, float, 3, 2, ork::valueMatrix3x2f >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::ValueMatrix< ork::MAT3x2F, float, 3, 2, ork::valueMatrix3x2f >* obj);
	typedef ork::ValueMatrix< ork::MAT3x2F, float, 3, 2, ork::valueMatrix3x2f > parent_t;
	typedef ork::ValueMatrix< ork::MAT3x2F, float, 3, 2, ork::valueMatrix3x2f > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::ValueMatrix< ork::MAT3x4F, float, 3, 4, ork::valueMatrix3x4f >
template<>
class LunaTraits< ork::ValueMatrix< ork::MAT3x4F, float, 3, 4, ork::valueMatrix3x4f > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::ValueMatrix< ork::MAT3x4F, float, 3, 4, ork::valueMatrix3x4f >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::ValueMatrix< ork::MAT3x4F, float, 3, 4, ork::valueMatrix3x4f >* obj);
	typedef ork::ValueMatrix< ork::MAT3x4F, float, 3, 4, ork::valueMatrix3x4f > parent_t;
	typedef ork::ValueMatrix< ork::MAT3x4F, float, 3, 4, ork::valueMatrix3x4f > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::ValueMatrix< ork::MAT4x2F, float, 4, 2, ork::valueMatrix4x2f >
template<>
class LunaTraits< ork::ValueMatrix< ork::MAT4x2F, float, 4, 2, ork::valueMatrix4x2f > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::ValueMatrix< ork::MAT4x2F, float, 4, 2, ork::valueMatrix4x2f >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::ValueMatrix< ork::MAT4x2F, float, 4, 2, ork::valueMatrix4x2f >* obj);
	typedef ork::ValueMatrix< ork::MAT4x2F, float, 4, 2, ork::valueMatrix4x2f > parent_t;
	typedef ork::ValueMatrix< ork::MAT4x2F, float, 4, 2, ork::valueMatrix4x2f > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::ValueMatrix< ork::MAT4x3F, float, 4, 3, ork::valueMatrix4x3f >
template<>
class LunaTraits< ork::ValueMatrix< ork::MAT4x3F, float, 4, 3, ork::valueMatrix4x3f > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::ValueMatrix< ork::MAT4x3F, float, 4, 3, ork::valueMatrix4x3f >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::ValueMatrix< ork::MAT4x3F, float, 4, 3, ork::valueMatrix4x3f >* obj);
	typedef ork::ValueMatrix< ork::MAT4x3F, float, 4, 3, ork::valueMatrix4x3f > parent_t;
	typedef ork::ValueMatrix< ork::MAT4x3F, float, 4, 3, ork::valueMatrix4x3f > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::ValueMatrix< ork::MAT2D, double, 2, 2, ork::valueMatrix2d >
template<>
class LunaTraits< ork::ValueMatrix< ork::MAT2D, double, 2, 2, ork::valueMatrix2d > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::ValueMatrix< ork::MAT2D, double, 2, 2, ork::valueMatrix2d >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::ValueMatrix< ork::MAT2D, double, 2, 2, ork::valueMatrix2d >* obj);
	typedef ork::ValueMatrix< ork::MAT2D, double, 2, 2, ork::valueMatrix2d > parent_t;
	typedef ork::ValueMatrix< ork::MAT2D, double, 2, 2, ork::valueMatrix2d > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::ValueMatrix3< ork::MAT3D, double, ork::valueMatrix3d >
template<>
class LunaTraits< ork::ValueMatrix3< ork::MAT3D, double, ork::valueMatrix3d > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::ValueMatrix3< ork::MAT3D, double, ork::valueMatrix3d >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::ValueMatrix3< ork::MAT3D, double, ork::valueMatrix3d >* obj);
	typedef ork::ValueMatrix3< ork::MAT3D, double, ork::valueMatrix3d > parent_t;
	typedef ork::ValueMatrix3< ork::MAT3D, double, ork::valueMatrix3d > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::ValueMatrix4< ork::MAT4D, double, ork::valueMatrix4d >
template<>
class LunaTraits< ork::ValueMatrix4< ork::MAT4D, double, ork::valueMatrix4d > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::ValueMatrix4< ork::MAT4D, double, ork::valueMatrix4d >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::ValueMatrix4< ork::MAT4D, double, ork::valueMatrix4d >* obj);
	typedef ork::ValueMatrix4< ork::MAT4D, double, ork::valueMatrix4d > parent_t;
	typedef ork::ValueMatrix4< ork::MAT4D, double, ork::valueMatrix4d > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::ValueMatrix< ork::MAT2x3D, double, 2, 3, ork::valueMatrix2x3d >
template<>
class LunaTraits< ork::ValueMatrix< ork::MAT2x3D, double, 2, 3, ork::valueMatrix2x3d > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::ValueMatrix< ork::MAT2x3D, double, 2, 3, ork::valueMatrix2x3d >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::ValueMatrix< ork::MAT2x3D, double, 2, 3, ork::valueMatrix2x3d >* obj);
	typedef ork::ValueMatrix< ork::MAT2x3D, double, 2, 3, ork::valueMatrix2x3d > parent_t;
	typedef ork::ValueMatrix< ork::MAT2x3D, double, 2, 3, ork::valueMatrix2x3d > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::ValueMatrix< ork::MAT2x4D, double, 2, 4, ork::valueMatrix2x4d >
template<>
class LunaTraits< ork::ValueMatrix< ork::MAT2x4D, double, 2, 4, ork::valueMatrix2x4d > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::ValueMatrix< ork::MAT2x4D, double, 2, 4, ork::valueMatrix2x4d >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::ValueMatrix< ork::MAT2x4D, double, 2, 4, ork::valueMatrix2x4d >* obj);
	typedef ork::ValueMatrix< ork::MAT2x4D, double, 2, 4, ork::valueMatrix2x4d > parent_t;
	typedef ork::ValueMatrix< ork::MAT2x4D, double, 2, 4, ork::valueMatrix2x4d > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::ValueMatrix< ork::MAT3x2D, double, 3, 2, ork::valueMatrix3x2d >
template<>
class LunaTraits< ork::ValueMatrix< ork::MAT3x2D, double, 3, 2, ork::valueMatrix3x2d > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::ValueMatrix< ork::MAT3x2D, double, 3, 2, ork::valueMatrix3x2d >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::ValueMatrix< ork::MAT3x2D, double, 3, 2, ork::valueMatrix3x2d >* obj);
	typedef ork::ValueMatrix< ork::MAT3x2D, double, 3, 2, ork::valueMatrix3x2d > parent_t;
	typedef ork::ValueMatrix< ork::MAT3x2D, double, 3, 2, ork::valueMatrix3x2d > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::ValueMatrix< ork::MAT3x4D, double, 3, 4, ork::valueMatrix3x4d >
template<>
class LunaTraits< ork::ValueMatrix< ork::MAT3x4D, double, 3, 4, ork::valueMatrix3x4d > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::ValueMatrix< ork::MAT3x4D, double, 3, 4, ork::valueMatrix3x4d >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::ValueMatrix< ork::MAT3x4D, double, 3, 4, ork::valueMatrix3x4d >* obj);
	typedef ork::ValueMatrix< ork::MAT3x4D, double, 3, 4, ork::valueMatrix3x4d > parent_t;
	typedef ork::ValueMatrix< ork::MAT3x4D, double, 3, 4, ork::valueMatrix3x4d > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::ValueMatrix< ork::MAT4x2D, double, 4, 2, ork::valueMatrix4x2d >
template<>
class LunaTraits< ork::ValueMatrix< ork::MAT4x2D, double, 4, 2, ork::valueMatrix4x2d > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::ValueMatrix< ork::MAT4x2D, double, 4, 2, ork::valueMatrix4x2d >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::ValueMatrix< ork::MAT4x2D, double, 4, 2, ork::valueMatrix4x2d >* obj);
	typedef ork::ValueMatrix< ork::MAT4x2D, double, 4, 2, ork::valueMatrix4x2d > parent_t;
	typedef ork::ValueMatrix< ork::MAT4x2D, double, 4, 2, ork::valueMatrix4x2d > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::ValueMatrix< ork::MAT4x3D, double, 4, 3, ork::valueMatrix4x3d >
template<>
class LunaTraits< ork::ValueMatrix< ork::MAT4x3D, double, 4, 3, ork::valueMatrix4x3d > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::ValueMatrix< ork::MAT4x3D, double, 4, 3, ork::valueMatrix4x3d >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::ValueMatrix< ork::MAT4x3D, double, 4, 3, ork::valueMatrix4x3d >* obj);
	typedef ork::ValueMatrix< ork::MAT4x3D, double, 4, 3, ork::valueMatrix4x3d > parent_t;
	typedef ork::ValueMatrix< ork::MAT4x3D, double, 4, 3, ork::valueMatrix4x3d > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Logger
template<>
class LunaTraits< ork::Logger > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Logger* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Logger* obj);
	typedef ork::Object parent_t;
	typedef ork::Logger base_t;
	static luna_ConverterType converters[];
};

// Class: ork::FileLogger
template<>
class LunaTraits< ork::FileLogger > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::FileLogger* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::FileLogger* obj);
	typedef ork::Object parent_t;
	typedef ork::FileLogger base_t;
	static luna_ConverterType converters[];
};

// Class: ork::FileLogger::File
template<>
class LunaTraits< ork::FileLogger::File > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::FileLogger::File* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::FileLogger::File* obj);
	typedef ork::FileLogger::File parent_t;
	typedef ork::FileLogger::File base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Timer
template<>
class LunaTraits< ork::Timer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Timer* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Timer* obj);
	typedef ork::Timer parent_t;
	typedef ork::Timer base_t;
	static luna_ConverterType converters[];
};

// Class: ork::GPUTimer
template<>
class LunaTraits< ork::GPUTimer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::GPUTimer* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::GPUTimer* obj);
	typedef ork::Timer parent_t;
	typedef ork::GPUTimer base_t;
	static luna_ConverterType converters[];
};

// Class: ork::half
template<>
class LunaTraits< ork::half > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::half* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::half* obj);
	typedef ork::half parent_t;
	typedef ork::half base_t;
	static luna_ConverterType converters[];
};

// Class: ork::AttributeBuffer
template<>
class LunaTraits< ork::AttributeBuffer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::AttributeBuffer* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::AttributeBuffer* obj);
	typedef ork::Object parent_t;
	typedef ork::AttributeBuffer base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Buffer
template<>
class LunaTraits< ork::Buffer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Buffer* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Buffer* obj);
	typedef ork::Object parent_t;
	typedef ork::Buffer base_t;
	static luna_ConverterType converters[];
};

// Class: ork::CPUBuffer
template<>
class LunaTraits< ork::CPUBuffer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::CPUBuffer* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::CPUBuffer* obj);
	typedef ork::Object parent_t;
	typedef ork::CPUBuffer base_t;
	static luna_ConverterType converters[];
};

// Class: ork::FrameBuffer
template<>
class LunaTraits< ork::FrameBuffer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::FrameBuffer* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::FrameBuffer* obj);
	typedef ork::Object parent_t;
	typedef ork::FrameBuffer base_t;
	static luna_ConverterType converters[];
};

// Class: ork::GPUBuffer
template<>
class LunaTraits< ork::GPUBuffer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::GPUBuffer* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::GPUBuffer* obj);
	typedef ork::Object parent_t;
	typedef ork::GPUBuffer base_t;
	static luna_ConverterType converters[];
};

// Class: ork::MeshBuffers
template<>
class LunaTraits< ork::MeshBuffers > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::MeshBuffers* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::MeshBuffers* obj);
	typedef ork::Object parent_t;
	typedef ork::MeshBuffers base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Module
template<>
class LunaTraits< ork::Module > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Module* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Module* obj);
	typedef ork::Object parent_t;
	typedef ork::Module base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Program
template<>
class LunaTraits< ork::Program > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Program* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Program* obj);
	typedef ork::Object parent_t;
	typedef ork::Program base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Query
template<>
class LunaTraits< ork::Query > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Query* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Query* obj);
	typedef ork::Object parent_t;
	typedef ork::Query base_t;
	static luna_ConverterType converters[];
};

// Class: ork::RenderBuffer
template<>
class LunaTraits< ork::RenderBuffer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::RenderBuffer* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::RenderBuffer* obj);
	typedef ork::Object parent_t;
	typedef ork::RenderBuffer base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Sampler
template<>
class LunaTraits< ork::Sampler > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Sampler* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Sampler* obj);
	typedef ork::Object parent_t;
	typedef ork::Sampler base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Sampler::Parameters
template<>
class LunaTraits< ork::Sampler::Parameters > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Sampler::Parameters* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Sampler::Parameters* obj);
	typedef ork::Sampler::Parameters parent_t;
	typedef ork::Sampler::Parameters base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Texture
template<>
class LunaTraits< ork::Texture > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Texture* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Texture* obj);
	typedef ork::Object parent_t;
	typedef ork::Texture base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Texture::Parameters
template<>
class LunaTraits< ork::Texture::Parameters > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Texture::Parameters* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Texture::Parameters* obj);
	typedef ork::Sampler::Parameters parent_t;
	typedef ork::Texture::Parameters base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Texture1D
template<>
class LunaTraits< ork::Texture1D > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Texture1D* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Texture1D* obj);
	typedef ork::Object parent_t;
	typedef ork::Texture1D base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Texture1DArray
template<>
class LunaTraits< ork::Texture1DArray > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Texture1DArray* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Texture1DArray* obj);
	typedef ork::Object parent_t;
	typedef ork::Texture1DArray base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Texture2D
template<>
class LunaTraits< ork::Texture2D > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Texture2D* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Texture2D* obj);
	typedef ork::Object parent_t;
	typedef ork::Texture2D base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Texture2DArray
template<>
class LunaTraits< ork::Texture2DArray > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Texture2DArray* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Texture2DArray* obj);
	typedef ork::Object parent_t;
	typedef ork::Texture2DArray base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Texture2DMultisample
template<>
class LunaTraits< ork::Texture2DMultisample > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Texture2DMultisample* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Texture2DMultisample* obj);
	typedef ork::Object parent_t;
	typedef ork::Texture2DMultisample base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Texture2DMultisampleArray
template<>
class LunaTraits< ork::Texture2DMultisampleArray > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Texture2DMultisampleArray* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Texture2DMultisampleArray* obj);
	typedef ork::Object parent_t;
	typedef ork::Texture2DMultisampleArray base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Texture3D
template<>
class LunaTraits< ork::Texture3D > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Texture3D* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Texture3D* obj);
	typedef ork::Object parent_t;
	typedef ork::Texture3D base_t;
	static luna_ConverterType converters[];
};

// Class: ork::TextureBuffer
template<>
class LunaTraits< ork::TextureBuffer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::TextureBuffer* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::TextureBuffer* obj);
	typedef ork::Object parent_t;
	typedef ork::TextureBuffer base_t;
	static luna_ConverterType converters[];
};

// Class: ork::TextureCube
template<>
class LunaTraits< ork::TextureCube > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::TextureCube* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::TextureCube* obj);
	typedef ork::Object parent_t;
	typedef ork::TextureCube base_t;
	static luna_ConverterType converters[];
};

// Class: ork::TextureCubeArray
template<>
class LunaTraits< ork::TextureCubeArray > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::TextureCubeArray* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::TextureCubeArray* obj);
	typedef ork::Object parent_t;
	typedef ork::TextureCubeArray base_t;
	static luna_ConverterType converters[];
};

// Class: ork::TextureRectangle
template<>
class LunaTraits< ork::TextureRectangle > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::TextureRectangle* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::TextureRectangle* obj);
	typedef ork::Object parent_t;
	typedef ork::TextureRectangle base_t;
	static luna_ConverterType converters[];
};

// Class: ork::TransformFeedback
template<>
class LunaTraits< ork::TransformFeedback > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::TransformFeedback* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::TransformFeedback* obj);
	typedef ork::Object parent_t;
	typedef ork::TransformFeedback base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Uniform
template<>
class LunaTraits< ork::Uniform > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Uniform* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Uniform* obj);
	typedef ork::Object parent_t;
	typedef ork::Uniform base_t;
	static luna_ConverterType converters[];
};

// Class: ork::UniformSampler
template<>
class LunaTraits< ork::UniformSampler > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::UniformSampler* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::UniformSampler* obj);
	typedef ork::Object parent_t;
	typedef ork::UniformSampler base_t;
	static luna_ConverterType converters[];
};

// Class: ork::UniformSubroutine
template<>
class LunaTraits< ork::UniformSubroutine > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::UniformSubroutine* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::UniformSubroutine* obj);
	typedef ork::Object parent_t;
	typedef ork::UniformSubroutine base_t;
	static luna_ConverterType converters[];
};

// Class: ork::UniformBlock
template<>
class LunaTraits< ork::UniformBlock > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::UniformBlock* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::UniformBlock* obj);
	typedef ork::Object parent_t;
	typedef ork::UniformBlock base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Value
template<>
class LunaTraits< ork::Value > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Value* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Value* obj);
	typedef ork::Object parent_t;
	typedef ork::Value base_t;
	static luna_ConverterType converters[];
};

// Class: ork::ValueSampler
template<>
class LunaTraits< ork::ValueSampler > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::ValueSampler* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::ValueSampler* obj);
	typedef ork::Object parent_t;
	typedef ork::ValueSampler base_t;
	static luna_ConverterType converters[];
};

// Class: ork::ValueSubroutine
template<>
class LunaTraits< ork::ValueSubroutine > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::ValueSubroutine* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::ValueSubroutine* obj);
	typedef ork::Object parent_t;
	typedef ork::ValueSubroutine base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Font
template<>
class LunaTraits< ork::Font > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Font* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Font* obj);
	typedef ork::Object parent_t;
	typedef ork::Font base_t;
	static luna_ConverterType converters[];
};

// Class: ork::ResourceLoader
template<>
class LunaTraits< ork::ResourceLoader > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::ResourceLoader* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::ResourceLoader* obj);
	typedef ork::Object parent_t;
	typedef ork::ResourceLoader base_t;
	static luna_ConverterType converters[];
};

// Class: ork::CompiledResourceLoader
template<>
class LunaTraits< ork::CompiledResourceLoader > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::CompiledResourceLoader* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::CompiledResourceLoader* obj);
	typedef ork::Object parent_t;
	typedef ork::CompiledResourceLoader base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Resource
template<>
class LunaTraits< ork::Resource > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Resource* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Resource* obj);
	typedef ork::Resource parent_t;
	typedef ork::Resource base_t;
	static luna_ConverterType converters[];
};

// Class: ork::XMLResourceLoader
template<>
class LunaTraits< ork::XMLResourceLoader > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::XMLResourceLoader* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::XMLResourceLoader* obj);
	typedef ork::Object parent_t;
	typedef ork::XMLResourceLoader base_t;
	static luna_ConverterType converters[];
};

// Class: ork::ResourceCompiler
template<>
class LunaTraits< ork::ResourceCompiler > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::ResourceCompiler* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::ResourceCompiler* obj);
	typedef ork::Object parent_t;
	typedef ork::ResourceCompiler base_t;
	static luna_ConverterType converters[];
};

// Class: ork::ResourceFactory
template<>
class LunaTraits< ork::ResourceFactory > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::ResourceFactory* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::ResourceFactory* obj);
	typedef ork::ResourceFactory parent_t;
	typedef ork::ResourceFactory base_t;
	static luna_ConverterType converters[];
};

// Class: ork::ResourceManager
template<>
class LunaTraits< ork::ResourceManager > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::ResourceManager* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::ResourceManager* obj);
	typedef ork::Object parent_t;
	typedef ork::ResourceManager base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Scheduler
template<>
class LunaTraits< ork::Scheduler > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Scheduler* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Scheduler* obj);
	typedef ork::Object parent_t;
	typedef ork::Scheduler base_t;
	static luna_ConverterType converters[];
};

// Class: ork::MultithreadScheduler
template<>
class LunaTraits< ork::MultithreadScheduler > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::MultithreadScheduler* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::MultithreadScheduler* obj);
	typedef ork::Object parent_t;
	typedef ork::MultithreadScheduler base_t;
	static luna_ConverterType converters[];
};

// Class: ork::TaskListener
template<>
class LunaTraits< ork::TaskListener > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::TaskListener* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::TaskListener* obj);
	typedef ork::TaskListener parent_t;
	typedef ork::TaskListener base_t;
	static luna_ConverterType converters[];
};

// Class: ork::TaskFactory
template<>
class LunaTraits< ork::TaskFactory > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::TaskFactory* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::TaskFactory* obj);
	typedef ork::Object parent_t;
	typedef ork::TaskFactory base_t;
	static luna_ConverterType converters[];
};

// Class: ork::TaskGraph
template<>
class LunaTraits< ork::TaskGraph > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::TaskGraph* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::TaskGraph* obj);
	typedef ork::Object parent_t;
	typedef ork::TaskGraph base_t;
	static luna_ConverterType converters[];
};

// Class: ork::SetIterator< ork::ptr< ork::Task > >
template<>
class LunaTraits< ork::SetIterator< ork::ptr< ork::Task > > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::SetIterator< ork::ptr< ork::Task > >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::SetIterator< ork::ptr< ork::Task > >* obj);
	typedef ork::SetIterator< ork::ptr< ork::Task > > parent_t;
	typedef ork::SetIterator< ork::ptr< ork::Task > > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::AbstractTask
template<>
class LunaTraits< ork::AbstractTask > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::AbstractTask* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::AbstractTask* obj);
	typedef ork::Object parent_t;
	typedef ork::AbstractTask base_t;
	static luna_ConverterType converters[];
};

// Class: ork::CallMethodTask
template<>
class LunaTraits< ork::CallMethodTask > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::CallMethodTask* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::CallMethodTask* obj);
	typedef ork::Object parent_t;
	typedef ork::CallMethodTask base_t;
	static luna_ConverterType converters[];
};

// Class: ork::DrawMeshTask
template<>
class LunaTraits< ork::DrawMeshTask > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::DrawMeshTask* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::DrawMeshTask* obj);
	typedef ork::Object parent_t;
	typedef ork::DrawMeshTask base_t;
	static luna_ConverterType converters[];
};

// Class: ork::LoopTask
template<>
class LunaTraits< ork::LoopTask > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::LoopTask* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::LoopTask* obj);
	typedef ork::Object parent_t;
	typedef ork::LoopTask base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Method
template<>
class LunaTraits< ork::Method > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Method* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Method* obj);
	typedef ork::Object parent_t;
	typedef ork::Method base_t;
	static luna_ConverterType converters[];
};

// Class: ork::SceneManager
template<>
class LunaTraits< ork::SceneManager > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::SceneManager* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::SceneManager* obj);
	typedef ork::Object parent_t;
	typedef ork::SceneManager base_t;
	static luna_ConverterType converters[];
};

// Class: ork::MultiMapIterator< std::string, ork::ptr< ork::SceneNode > >
template<>
class LunaTraits< ork::MultiMapIterator< std::string, ork::ptr< ork::SceneNode > > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::MultiMapIterator< std::string, ork::ptr< ork::SceneNode > >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::MultiMapIterator< std::string, ork::ptr< ork::SceneNode > >* obj);
	typedef ork::MultiMapIterator< std::string, ork::ptr< ork::SceneNode > > parent_t;
	typedef ork::MultiMapIterator< std::string, ork::ptr< ork::SceneNode > > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::SceneNode
template<>
class LunaTraits< ork::SceneNode > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::SceneNode* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::SceneNode* obj);
	typedef ork::Object parent_t;
	typedef ork::SceneNode base_t;
	static luna_ConverterType converters[];
};

// Class: ork::SetIterator< std::string >
template<>
class LunaTraits< ork::SetIterator< std::string > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::SetIterator< std::string >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::SetIterator< std::string >* obj);
	typedef ork::SetIterator< std::string > parent_t;
	typedef ork::SetIterator< std::string > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::MapIterator< std::string, ork::ptr< ork::Value > >
template<>
class LunaTraits< ork::MapIterator< std::string, ork::ptr< ork::Value > > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::MapIterator< std::string, ork::ptr< ork::Value > >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::MapIterator< std::string, ork::ptr< ork::Value > >* obj);
	typedef ork::MapIterator< std::string, ork::ptr< ork::Value > > parent_t;
	typedef ork::MapIterator< std::string, ork::ptr< ork::Value > > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::MapIterator< std::string, ork::ptr< ork::Module > >
template<>
class LunaTraits< ork::MapIterator< std::string, ork::ptr< ork::Module > > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::MapIterator< std::string, ork::ptr< ork::Module > >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::MapIterator< std::string, ork::ptr< ork::Module > >* obj);
	typedef ork::MapIterator< std::string, ork::ptr< ork::Module > > parent_t;
	typedef ork::MapIterator< std::string, ork::ptr< ork::Module > > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::MapIterator< std::string, ork::ptr< ork::MeshBuffers > >
template<>
class LunaTraits< ork::MapIterator< std::string, ork::ptr< ork::MeshBuffers > > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::MapIterator< std::string, ork::ptr< ork::MeshBuffers > >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::MapIterator< std::string, ork::ptr< ork::MeshBuffers > >* obj);
	typedef ork::MapIterator< std::string, ork::ptr< ork::MeshBuffers > > parent_t;
	typedef ork::MapIterator< std::string, ork::ptr< ork::MeshBuffers > > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::MapIterator< std::string, ork::ptr< ork::Object > >
template<>
class LunaTraits< ork::MapIterator< std::string, ork::ptr< ork::Object > > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::MapIterator< std::string, ork::ptr< ork::Object > >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::MapIterator< std::string, ork::ptr< ork::Object > >* obj);
	typedef ork::MapIterator< std::string, ork::ptr< ork::Object > > parent_t;
	typedef ork::MapIterator< std::string, ork::ptr< ork::Object > > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::MapIterator< std::string, ork::ptr< ork::Method > >
template<>
class LunaTraits< ork::MapIterator< std::string, ork::ptr< ork::Method > > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::MapIterator< std::string, ork::ptr< ork::Method > >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::MapIterator< std::string, ork::ptr< ork::Method > >* obj);
	typedef ork::MapIterator< std::string, ork::ptr< ork::Method > > parent_t;
	typedef ork::MapIterator< std::string, ork::ptr< ork::Method > > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::SequenceTask
template<>
class LunaTraits< ork::SequenceTask > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::SequenceTask* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::SequenceTask* obj);
	typedef ork::Object parent_t;
	typedef ork::SequenceTask base_t;
	static luna_ConverterType converters[];
};

// Class: ork::SetProgramTask
template<>
class LunaTraits< ork::SetProgramTask > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::SetProgramTask* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::SetProgramTask* obj);
	typedef ork::Object parent_t;
	typedef ork::SetProgramTask base_t;
	static luna_ConverterType converters[];
};

// Class: ork::SetStateTask
template<>
class LunaTraits< ork::SetStateTask > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::SetStateTask* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::SetStateTask* obj);
	typedef ork::Object parent_t;
	typedef ork::SetStateTask base_t;
	static luna_ConverterType converters[];
};

// Class: ork::SetStateTask::Runnable
template<>
class LunaTraits< ork::SetStateTask::Runnable > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::SetStateTask::Runnable* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::SetStateTask::Runnable* obj);
	typedef ork::SetStateTask::Runnable parent_t;
	typedef ork::SetStateTask::Runnable base_t;
	static luna_ConverterType converters[];
};

// Class: ork::SetTargetTask
template<>
class LunaTraits< ork::SetTargetTask > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::SetTargetTask* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::SetTargetTask* obj);
	typedef ork::Object parent_t;
	typedef ork::SetTargetTask base_t;
	static luna_ConverterType converters[];
};

// Class: ork::SetTransformsTask
template<>
class LunaTraits< ork::SetTransformsTask > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::SetTransformsTask* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::SetTransformsTask* obj);
	typedef ork::Object parent_t;
	typedef ork::SetTransformsTask base_t;
	static luna_ConverterType converters[];
};

// Class: ork::ShowInfoTask
template<>
class LunaTraits< ork::ShowInfoTask > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::ShowInfoTask* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::ShowInfoTask* obj);
	typedef ork::Object parent_t;
	typedef ork::ShowInfoTask base_t;
	static luna_ConverterType converters[];
};

// Class: ork::ShowLogTask
template<>
class LunaTraits< ork::ShowLogTask > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::ShowLogTask* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::ShowLogTask* obj);
	typedef ork::Object parent_t;
	typedef ork::ShowLogTask base_t;
	static luna_ConverterType converters[];
};

// Class: ork::vec2h
template<>
class LunaTraits< ork::vec2h > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::vec2h* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::vec2h* obj);
	typedef ork::vec2h parent_t;
	typedef ork::vec2h base_t;
	static luna_ConverterType converters[];
};

// Class: ork::vec2f
template<>
class LunaTraits< ork::vec2f > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::vec2f* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::vec2f* obj);
	typedef ork::vec2f parent_t;
	typedef ork::vec2f base_t;
	static luna_ConverterType converters[];
};

// Class: ork::vec2d
template<>
class LunaTraits< ork::vec2d > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::vec2d* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::vec2d* obj);
	typedef ork::vec2d parent_t;
	typedef ork::vec2d base_t;
	static luna_ConverterType converters[];
};

// Class: ork::vec2i
template<>
class LunaTraits< ork::vec2i > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::vec2i* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::vec2i* obj);
	typedef ork::vec2i parent_t;
	typedef ork::vec2i base_t;
	static luna_ConverterType converters[];
};

// Class: ork::vec2b
template<>
class LunaTraits< ork::vec2b > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::vec2b* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::vec2b* obj);
	typedef ork::vec2b parent_t;
	typedef ork::vec2b base_t;
	static luna_ConverterType converters[];
};

// Class: ork::vec3h
template<>
class LunaTraits< ork::vec3h > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::vec3h* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::vec3h* obj);
	typedef ork::vec3h parent_t;
	typedef ork::vec3h base_t;
	static luna_ConverterType converters[];
};

// Class: ork::vec3f
template<>
class LunaTraits< ork::vec3f > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::vec3f* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::vec3f* obj);
	typedef ork::vec3f parent_t;
	typedef ork::vec3f base_t;
	static luna_ConverterType converters[];
};

// Class: ork::vec3d
template<>
class LunaTraits< ork::vec3d > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::vec3d* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::vec3d* obj);
	typedef ork::vec3d parent_t;
	typedef ork::vec3d base_t;
	static luna_ConverterType converters[];
};

// Class: ork::vec3i
template<>
class LunaTraits< ork::vec3i > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::vec3i* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::vec3i* obj);
	typedef ork::vec3i parent_t;
	typedef ork::vec3i base_t;
	static luna_ConverterType converters[];
};

// Class: ork::vec3b
template<>
class LunaTraits< ork::vec3b > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::vec3b* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::vec3b* obj);
	typedef ork::vec3b parent_t;
	typedef ork::vec3b base_t;
	static luna_ConverterType converters[];
};

// Class: ork::vec4h
template<>
class LunaTraits< ork::vec4h > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::vec4h* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::vec4h* obj);
	typedef ork::vec4h parent_t;
	typedef ork::vec4h base_t;
	static luna_ConverterType converters[];
};

// Class: ork::vec4f
template<>
class LunaTraits< ork::vec4f > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::vec4f* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::vec4f* obj);
	typedef ork::vec4f parent_t;
	typedef ork::vec4f base_t;
	static luna_ConverterType converters[];
};

// Class: ork::vec4d
template<>
class LunaTraits< ork::vec4d > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::vec4d* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::vec4d* obj);
	typedef ork::vec4d parent_t;
	typedef ork::vec4d base_t;
	static luna_ConverterType converters[];
};

// Class: ork::vec4i
template<>
class LunaTraits< ork::vec4i > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::vec4i* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::vec4i* obj);
	typedef ork::vec4i parent_t;
	typedef ork::vec4i base_t;
	static luna_ConverterType converters[];
};

// Class: ork::vec4b
template<>
class LunaTraits< ork::vec4b > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::vec4b* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::vec4b* obj);
	typedef ork::vec4b parent_t;
	typedef ork::vec4b base_t;
	static luna_ConverterType converters[];
};

// Class: ork::box2f
template<>
class LunaTraits< ork::box2f > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::box2f* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::box2f* obj);
	typedef ork::box2f parent_t;
	typedef ork::box2f base_t;
	static luna_ConverterType converters[];
};

// Class: ork::box2d
template<>
class LunaTraits< ork::box2d > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::box2d* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::box2d* obj);
	typedef ork::box2d parent_t;
	typedef ork::box2d base_t;
	static luna_ConverterType converters[];
};

// Class: ork::box2i
template<>
class LunaTraits< ork::box2i > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::box2i* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::box2i* obj);
	typedef ork::box2i parent_t;
	typedef ork::box2i base_t;
	static luna_ConverterType converters[];
};

// Class: ork::box3f
template<>
class LunaTraits< ork::box3f > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::box3f* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::box3f* obj);
	typedef ork::box3f parent_t;
	typedef ork::box3f base_t;
	static luna_ConverterType converters[];
};

// Class: ork::box3d
template<>
class LunaTraits< ork::box3d > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::box3d* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::box3d* obj);
	typedef ork::box3d parent_t;
	typedef ork::box3d base_t;
	static luna_ConverterType converters[];
};

// Class: ork::box3i
template<>
class LunaTraits< ork::box3i > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::box3i* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::box3i* obj);
	typedef ork::box3i parent_t;
	typedef ork::box3i base_t;
	static luna_ConverterType converters[];
};

// Class: ork::mat2f
template<>
class LunaTraits< ork::mat2f > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::mat2f* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::mat2f* obj);
	typedef ork::mat2f parent_t;
	typedef ork::mat2f base_t;
	static luna_ConverterType converters[];
};

// Class: ork::mat2d
template<>
class LunaTraits< ork::mat2d > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::mat2d* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::mat2d* obj);
	typedef ork::mat2d parent_t;
	typedef ork::mat2d base_t;
	static luna_ConverterType converters[];
};

// Class: ork::mat3f
template<>
class LunaTraits< ork::mat3f > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::mat3f* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::mat3f* obj);
	typedef ork::mat3f parent_t;
	typedef ork::mat3f base_t;
	static luna_ConverterType converters[];
};

// Class: ork::mat3d
template<>
class LunaTraits< ork::mat3d > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::mat3d* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::mat3d* obj);
	typedef ork::mat3d parent_t;
	typedef ork::mat3d base_t;
	static luna_ConverterType converters[];
};

// Class: ork::mat4f
template<>
class LunaTraits< ork::mat4f > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::mat4f* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::mat4f* obj);
	typedef ork::mat4f parent_t;
	typedef ork::mat4f base_t;
	static luna_ConverterType converters[];
};

// Class: ork::mat4d
template<>
class LunaTraits< ork::mat4d > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::mat4d* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::mat4d* obj);
	typedef ork::mat4d parent_t;
	typedef ork::mat4d base_t;
	static luna_ConverterType converters[];
};

// Class: ork::quatf
template<>
class LunaTraits< ork::quatf > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::quatf* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::quatf* obj);
	typedef ork::quatf parent_t;
	typedef ork::quatf base_t;
	static luna_ConverterType converters[];
};

// Class: ork::quatd
template<>
class LunaTraits< ork::quatd > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::quatd* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::quatd* obj);
	typedef ork::quatd parent_t;
	typedef ork::quatd base_t;
	static luna_ConverterType converters[];
};

// Class: std::type_info
template<>
class LunaTraits< std::type_info > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::type_info* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::type_info* obj);
	typedef std::type_info parent_t;
	typedef std::type_info base_t;
	static luna_ConverterType converters[];
};


// Mapped type: std::vector< ork::ptr< ork::Module > >
template<>
class LunaTraits< std::vector< ork::ptr< ork::Module > > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< ork::ptr< ork::Module > >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< ork::ptr< ork::Module > >* obj);
	typedef std::vector< ork::ptr< ork::Module > > parent_t;
	typedef std::vector< ork::ptr< ork::Module > > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: std::vector< ork::ptr< ork::TaskFactory > >
template<>
class LunaTraits< std::vector< ork::ptr< ork::TaskFactory > > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< ork::ptr< ork::TaskFactory > >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< ork::ptr< ork::TaskFactory > >* obj);
	typedef std::vector< ork::ptr< ork::TaskFactory > > parent_t;
	typedef std::vector< ork::ptr< ork::TaskFactory > > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: std::vector< ork::SetTargetTask::Target >
template<>
class LunaTraits< std::vector< ork::SetTargetTask::Target > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< ork::SetTargetTask::Target >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< ork::SetTargetTask::Target >* obj);
	typedef std::vector< ork::SetTargetTask::Target > parent_t;
	typedef std::vector< ork::SetTargetTask::Target > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: std::set< ork::Task * >
template<>
class LunaTraits< std::set< ork::Task * > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::set< ork::Task * >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::set< ork::Task * >* obj);
	typedef std::set< ork::Task * > parent_t;
	typedef std::set< ork::Task * > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: osg::BoundingBox
template<>
class LunaTraits< osg::BoundingBox > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::BoundingBox* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::BoundingBox* obj);
	typedef osg::BoundingBox parent_t;
	typedef osg::BoundingBox base_t;
	static luna_ConverterType converters[];
};

// Mapped type: ork::static_ptr< ork::Logger >
template<>
class LunaTraits< ork::static_ptr< ork::Logger > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::static_ptr< ork::Logger >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::static_ptr< ork::Logger >* obj);
	typedef ork::static_ptr< ork::Logger > parent_t;
	typedef ork::static_ptr< ork::Logger > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: std::set< ork::Program * >
template<>
class LunaTraits< std::set< ork::Program * > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::set< ork::Program * >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::set< ork::Program * >* obj);
	typedef std::set< ork::Program * > parent_t;
	typedef std::set< ork::Program * > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: std::vector< ork::ptr< ork::Uniform > >
template<>
class LunaTraits< std::vector< ork::ptr< ork::Uniform > > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< ork::ptr< ork::Uniform > >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< ork::ptr< ork::Uniform > >* obj);
	typedef std::vector< ork::ptr< ork::Uniform > > parent_t;
	typedef std::vector< ork::ptr< ork::Uniform > > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: uint64_t
template<>
class LunaTraits< uint64_t > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static uint64_t* _bind_ctor(lua_State *L);
	static void _bind_dtor(uint64_t* obj);
	typedef uint64_t parent_t;
	typedef uint64_t base_t;
	static luna_ConverterType converters[];
};

// Mapped type: std::set< ork::ptr< ork::Task > >
template<>
class LunaTraits< std::set< ork::ptr< ork::Task > > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::set< ork::ptr< ork::Task > >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::set< ork::ptr< ork::Task > >* obj);
	typedef std::set< ork::ptr< ork::Task > > parent_t;
	typedef std::set< ork::ptr< ork::Task > > base_t;
	static luna_ConverterType converters[];
};


// Referenced external: void
template<>
class LunaTraits< void > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static void* _bind_ctor(lua_State *L);
	static void _bind_dtor(void* obj);
	typedef void parent_t;
	typedef void base_t;
	static luna_ConverterType converters[];
};

// Referenced external: std::vector< unsigned int >
template<>
class LunaTraits< std::vector< unsigned int > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< unsigned int >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< unsigned int >* obj);
	typedef std::vector< unsigned int > parent_t;
	typedef std::vector< unsigned int > base_t;
	static luna_ConverterType converters[];
};

// Referenced external: std::vector< int >
template<>
class LunaTraits< std::vector< int > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< int >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< int >* obj);
	typedef std::vector< int > parent_t;
	typedef std::vector< int > base_t;
	static luna_ConverterType converters[];
};

// Referenced external: std::vector< std::string >
template<>
class LunaTraits< std::vector< std::string > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< std::string >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< std::string >* obj);
	typedef std::vector< std::string > parent_t;
	typedef std::vector< std::string > base_t;
	static luna_ConverterType converters[];
};

// Referenced external: osg::Matrixd
template<>
class LunaTraits< osg::Matrixd > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Matrixd* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Matrixd* obj);
	typedef osg::Matrixd parent_t;
	typedef osg::Matrixd base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaType< 1381405 > {
public:
	typedef ork::Object type;
	
};

template<>
class LunaType< 85004853 > {
public:
	typedef ork::Buffer::Parameters type;
	
};

template<>
class LunaType< 72789067 > {
public:
	typedef ork::FrameBuffer::Parameters type;
	
};

template<>
class LunaType< 68271247 > {
public:
	typedef ork::Object::static_ref type;
	
};

template<>
class LunaType< 89018139 > {
public:
	typedef ork::SetTargetTask::Target type;
	
};

template<>
class LunaType< 89852901 > {
public:
	typedef TiXmlBase type;
	
};

template<>
class LunaType< 40561291 > {
public:
	typedef TiXmlAttributeSet type;
	
};

template<>
class LunaType< 95715994 > {
public:
	typedef TiXmlCursor type;
	
};

template<>
class LunaType< 20257622 > {
public:
	typedef TiXmlHandle type;
	
};

template<>
class LunaType< 86845197 > {
public:
	typedef TiXmlVisitor type;
	
};

template<>
class LunaType< 35303943 > {
public:
	typedef ork::Font::Vertex type;
	
};

template<>
class LunaType< 34744539 > {
public:
	typedef land::ProlandDrawable type;
	
};

template<>
class LunaType< 63151914 > {
public:
	typedef ork::box2i type;
	
};

template<>
class LunaType< 63151911 > {
public:
	typedef ork::box2f type;
	
};

template<>
class LunaType< 63151909 > {
public:
	typedef ork::box2d type;
	
};

template<>
class LunaType< 63151945 > {
public:
	typedef ork::box3i type;
	
};

template<>
class LunaType< 63151942 > {
public:
	typedef ork::box3f type;
	
};

template<>
class LunaType< 63151940 > {
public:
	typedef ork::box3d type;
	
};

template<>
class LunaType< 72889724 > {
public:
	typedef ork::mat2f type;
	
};

template<>
class LunaType< 72889722 > {
public:
	typedef ork::mat2d type;
	
};

template<>
class LunaType< 72889755 > {
public:
	typedef ork::mat3f type;
	
};

template<>
class LunaType< 72889753 > {
public:
	typedef ork::mat3d type;
	
};

template<>
class LunaType< 72889786 > {
public:
	typedef ork::mat4f type;
	
};

template<>
class LunaType< 72889784 > {
public:
	typedef ork::mat4d type;
	
};

template<>
class LunaType< 77163415 > {
public:
	typedef ork::quatf type;
	
};

template<>
class LunaType< 77163413 > {
public:
	typedef ork::quatd type;
	
};

template<>
class LunaType< 81304242 > {
public:
	typedef ork::vec2h type;
	
};

template<>
class LunaType< 81304240 > {
public:
	typedef ork::vec2f type;
	
};

template<>
class LunaType< 81304238 > {
public:
	typedef ork::vec2d type;
	
};

template<>
class LunaType< 81304243 > {
public:
	typedef ork::vec2i type;
	
};

template<>
class LunaType< 81304273 > {
public:
	typedef ork::vec3h type;
	
};

template<>
class LunaType< 81304271 > {
public:
	typedef ork::vec3f type;
	
};

template<>
class LunaType< 81304269 > {
public:
	typedef ork::vec3d type;
	
};

template<>
class LunaType< 81304274 > {
public:
	typedef ork::vec3i type;
	
};

template<>
class LunaType< 81304304 > {
public:
	typedef ork::vec4h type;
	
};

template<>
class LunaType< 81304302 > {
public:
	typedef ork::vec4f type;
	
};

template<>
class LunaType< 81304300 > {
public:
	typedef ork::vec4d type;
	
};

template<>
class LunaType< 81304305 > {
public:
	typedef ork::vec4i type;
	
};

template<>
class LunaType< 2655989 > {
public:
	typedef ork::Uniform1f type;
	
};

template<>
class LunaType< 2655987 > {
public:
	typedef ork::Uniform1d type;
	
};

template<>
class LunaType< 2655992 > {
public:
	typedef ork::Uniform1i type;
	
};

template<>
class LunaType< 82336229 > {
public:
	typedef ork::Uniform1ui type;
	
};

template<>
class LunaType< 2655985 > {
public:
	typedef ork::Uniform1b type;
	
};

template<>
class LunaType< 2656020 > {
public:
	typedef ork::Uniform2f type;
	
};

template<>
class LunaType< 2656018 > {
public:
	typedef ork::Uniform2d type;
	
};

template<>
class LunaType< 2656023 > {
public:
	typedef ork::Uniform2i type;
	
};

template<>
class LunaType< 82337190 > {
public:
	typedef ork::Uniform2ui type;
	
};

template<>
class LunaType< 2656016 > {
public:
	typedef ork::Uniform2b type;
	
};

template<>
class LunaType< 2656051 > {
public:
	typedef ork::Uniform3f type;
	
};

template<>
class LunaType< 2656049 > {
public:
	typedef ork::Uniform3d type;
	
};

template<>
class LunaType< 2656054 > {
public:
	typedef ork::Uniform3i type;
	
};

template<>
class LunaType< 82338151 > {
public:
	typedef ork::Uniform3ui type;
	
};

template<>
class LunaType< 2656047 > {
public:
	typedef ork::Uniform3b type;
	
};

template<>
class LunaType< 2656082 > {
public:
	typedef ork::Uniform4f type;
	
};

template<>
class LunaType< 2656080 > {
public:
	typedef ork::Uniform4d type;
	
};

template<>
class LunaType< 2656085 > {
public:
	typedef ork::Uniform4i type;
	
};

template<>
class LunaType< 82339112 > {
public:
	typedef ork::Uniform4ui type;
	
};

template<>
class LunaType< 2656078 > {
public:
	typedef ork::Uniform4b type;
	
};

template<>
class LunaType< 81597856 > {
public:
	typedef ork::UniformMatrix2f type;
	
};

template<>
class LunaType< 81597887 > {
public:
	typedef ork::UniformMatrix3f type;
	
};

template<>
class LunaType< 81597918 > {
public:
	typedef ork::UniformMatrix4f type;
	
};

template<>
class LunaType< 15542124 > {
public:
	typedef ork::UniformMatrix2x3f type;
	
};

template<>
class LunaType< 15542155 > {
public:
	typedef ork::UniformMatrix2x4f type;
	
};

template<>
class LunaType< 15571884 > {
public:
	typedef ork::UniformMatrix3x2f type;
	
};

template<>
class LunaType< 15571946 > {
public:
	typedef ork::UniformMatrix3x4f type;
	
};

template<>
class LunaType< 15601675 > {
public:
	typedef ork::UniformMatrix4x2f type;
	
};

template<>
class LunaType< 15601706 > {
public:
	typedef ork::UniformMatrix4x3f type;
	
};

template<>
class LunaType< 81597854 > {
public:
	typedef ork::UniformMatrix2d type;
	
};

template<>
class LunaType< 81597885 > {
public:
	typedef ork::UniformMatrix3d type;
	
};

template<>
class LunaType< 81597916 > {
public:
	typedef ork::UniformMatrix4d type;
	
};

template<>
class LunaType< 15542122 > {
public:
	typedef ork::UniformMatrix2x3d type;
	
};

template<>
class LunaType< 15542153 > {
public:
	typedef ork::UniformMatrix2x4d type;
	
};

template<>
class LunaType< 15571882 > {
public:
	typedef ork::UniformMatrix3x2d type;
	
};

template<>
class LunaType< 15571944 > {
public:
	typedef ork::UniformMatrix3x4d type;
	
};

template<>
class LunaType< 15601673 > {
public:
	typedef ork::UniformMatrix4x2d type;
	
};

template<>
class LunaType< 15601704 > {
public:
	typedef ork::UniformMatrix4x3d type;
	
};

template<>
class LunaType< 29043134 > {
public:
	typedef ork::Value1f type;
	
};

template<>
class LunaType< 29043132 > {
public:
	typedef ork::Value1d type;
	
};

template<>
class LunaType< 29043137 > {
public:
	typedef ork::Value1i type;
	
};

template<>
class LunaType< 337607 > {
public:
	typedef ork::Value1ui type;
	
};

template<>
class LunaType< 29043130 > {
public:
	typedef ork::Value1b type;
	
};

template<>
class LunaType< 29043165 > {
public:
	typedef ork::Value2f type;
	
};

template<>
class LunaType< 29043163 > {
public:
	typedef ork::Value2d type;
	
};

template<>
class LunaType< 29043168 > {
public:
	typedef ork::Value2i type;
	
};

template<>
class LunaType< 338568 > {
public:
	typedef ork::Value2ui type;
	
};

template<>
class LunaType< 29043161 > {
public:
	typedef ork::Value2b type;
	
};

template<>
class LunaType< 29043196 > {
public:
	typedef ork::Value3f type;
	
};

template<>
class LunaType< 29043194 > {
public:
	typedef ork::Value3d type;
	
};

template<>
class LunaType< 29043199 > {
public:
	typedef ork::Value3i type;
	
};

template<>
class LunaType< 339529 > {
public:
	typedef ork::Value3ui type;
	
};

template<>
class LunaType< 29043192 > {
public:
	typedef ork::Value3b type;
	
};

template<>
class LunaType< 29043227 > {
public:
	typedef ork::Value4f type;
	
};

template<>
class LunaType< 29043225 > {
public:
	typedef ork::Value4d type;
	
};

template<>
class LunaType< 29043230 > {
public:
	typedef ork::Value4i type;
	
};

template<>
class LunaType< 340490 > {
public:
	typedef ork::Value4ui type;
	
};

template<>
class LunaType< 29043223 > {
public:
	typedef ork::Value4b type;
	
};

template<>
class LunaType< 26772236 > {
public:
	typedef ork::ValueMatrix2f type;
	
};

template<>
class LunaType< 26772267 > {
public:
	typedef ork::ValueMatrix3f type;
	
};

template<>
class LunaType< 26772298 > {
public:
	typedef ork::ValueMatrix4f type;
	
};

template<>
class LunaType< 28132885 > {
public:
	typedef ork::ValueMatrix2x3f type;
	
};

template<>
class LunaType< 28132916 > {
public:
	typedef ork::ValueMatrix2x4f type;
	
};

template<>
class LunaType< 28162645 > {
public:
	typedef ork::ValueMatrix3x2f type;
	
};

template<>
class LunaType< 28162707 > {
public:
	typedef ork::ValueMatrix3x4f type;
	
};

template<>
class LunaType< 28192436 > {
public:
	typedef ork::ValueMatrix4x2f type;
	
};

template<>
class LunaType< 28192467 > {
public:
	typedef ork::ValueMatrix4x3f type;
	
};

template<>
class LunaType< 26772234 > {
public:
	typedef ork::ValueMatrix2d type;
	
};

template<>
class LunaType< 26772265 > {
public:
	typedef ork::ValueMatrix3d type;
	
};

template<>
class LunaType< 26772296 > {
public:
	typedef ork::ValueMatrix4d type;
	
};

template<>
class LunaType< 28132883 > {
public:
	typedef ork::ValueMatrix2x3d type;
	
};

template<>
class LunaType< 28132914 > {
public:
	typedef ork::ValueMatrix2x4d type;
	
};

template<>
class LunaType< 28162643 > {
public:
	typedef ork::ValueMatrix3x2d type;
	
};

template<>
class LunaType< 28162705 > {
public:
	typedef ork::ValueMatrix3x4d type;
	
};

template<>
class LunaType< 28192434 > {
public:
	typedef ork::ValueMatrix4x2d type;
	
};

template<>
class LunaType< 28192465 > {
public:
	typedef ork::ValueMatrix4x3d type;
	
};

template<>
class LunaType< 81304236 > {
public:
	typedef ork::vec2b type;
	
};

template<>
class LunaType< 81304267 > {
public:
	typedef ork::vec3b type;
	
};

template<>
class LunaType< 81304298 > {
public:
	typedef ork::vec4b type;
	
};

template<>
class LunaType< 23966078 > {
public:
	typedef ork::FileLogger::File type;
	
};

template<>
class LunaType< 50034893 > {
public:
	typedef ork::Timer type;
	
};

template<>
class LunaType< 18331161 > {
public:
	typedef ork::half type;
	
};

template<>
class LunaType< 84580371 > {
public:
	typedef ork::Sampler::Parameters type;
	
};

template<>
class LunaType< 95308202 > {
public:
	typedef ork::Resource type;
	
};

template<>
class LunaType< 21152746 > {
public:
	typedef ork::ResourceFactory type;
	
};

template<>
class LunaType< 59816505 > {
public:
	typedef ork::TaskListener type;
	
};

template<>
class LunaType< 78577615 > {
public:
	typedef ork::TaskGraph::TaskIterator type;
	
};

template<>
class LunaType< 34309417 > {
public:
	typedef ork::SceneManager::NodeIterator type;
	
};

template<>
class LunaType< 4424 > {
public:
	typedef ork::SceneNode::FlagIterator type;
	
};

template<>
class LunaType< 16772875 > {
public:
	typedef ork::SceneNode::ValueIterator type;
	
};

template<>
class LunaType< 91055201 > {
public:
	typedef ork::SceneNode::ModuleIterator type;
	
};

template<>
class LunaType< 25036990 > {
public:
	typedef ork::SceneNode::MeshIterator type;
	
};

template<>
class LunaType< 7296908 > {
public:
	typedef ork::SceneNode::FieldIterator type;
	
};

template<>
class LunaType< 70636246 > {
public:
	typedef ork::SceneNode::MethodIterator type;
	
};

template<>
class LunaType< 52646128 > {
public:
	typedef ork::SetStateTask::Runnable type;
	
};

template<>
class LunaType< 79829375 > {
public:
	typedef std::type_info type;
	
};

template<>
class LunaType< 4487619 > {
public:
	typedef ork::Uniform1< ork::VEC1F, float, float, ork::uniform1f, ork::value1f > type;
	
};

template<>
class LunaType< 61340212 > {
public:
	typedef ork::Uniform1< ork::VEC1D, double, double, ork::uniform1d, ork::value1d > type;
	
};

template<>
class LunaType< 86556118 > {
public:
	typedef ork::Uniform1< ork::VEC1I, int, int, ork::uniform1i, ork::value1i > type;
	
};

template<>
class LunaType< 86009686 > {
public:
	typedef ork::Uniform1< ork::VEC1UI, unsigned int, unsigned int, ork::uniform1ui, ork::value1ui > type;
	
};

template<>
class LunaType< 63958889 > {
public:
	typedef ork::Uniform1< ork::VEC1B, bool, unsigned int, ork::uniform1b, ork::value1b > type;
	
};

template<>
class LunaType< 48312837 > {
public:
	typedef ork::Uniform2< ork::VEC2F, float, float, ork::uniform2f, ork::value2f > type;
	
};

template<>
class LunaType< 61308482 > {
public:
	typedef ork::Uniform2< ork::VEC2B, double, double, ork::uniform2d, ork::value2d > type;
	
};

template<>
class LunaType< 87244058 > {
public:
	typedef ork::Uniform2< ork::VEC2I, int, int, ork::uniform2i, ork::value2i > type;
	
};

template<>
class LunaType< 88468408 > {
public:
	typedef ork::Uniform2< ork::VEC2UI, unsigned int, unsigned int, ork::uniform2ui, ork::value2ui > type;
	
};

template<>
class LunaType< 96441088 > {
public:
	typedef ork::Uniform2< ork::VEC2B, bool, unsigned int, ork::uniform2b, ork::value2b > type;
	
};

template<>
class LunaType< 98586650 > {
public:
	typedef ork::Uniform3< ork::VEC3F, float, float, ork::uniform3f, ork::value3f > type;
	
};

template<>
class LunaType< 22715475 > {
public:
	typedef ork::Uniform3< ork::VEC3D, double, double, ork::uniform3d, ork::value3d > type;
	
};

template<>
class LunaType< 39147308 > {
public:
	typedef ork::Uniform3< ork::VEC3I, int, int, ork::uniform3i, ork::value3i > type;
	
};

template<>
class LunaType< 99677561 > {
public:
	typedef ork::Uniform3< ork::VEC3UI, unsigned int, unsigned int, ork::uniform3ui, ork::value3ui > type;
	
};

template<>
class LunaType< 6716174 > {
public:
	typedef ork::Uniform3< ork::VEC3B, bool, unsigned int, ork::uniform3b, ork::value3b > type;
	
};

template<>
class LunaType< 38928813 > {
public:
	typedef ork::Uniform4< ork::VEC4F, float, float, ork::uniform4f, ork::value4f > type;
	
};

template<>
class LunaType< 11698505 > {
public:
	typedef ork::Uniform4< ork::VEC4D, double, double, ork::uniform4d, ork::value4d > type;
	
};

template<>
class LunaType< 9726470 > {
public:
	typedef ork::Uniform4< ork::VEC4I, int, int, ork::uniform4i, ork::value4i > type;
	
};

template<>
class LunaType< 91878054 > {
public:
	typedef ork::Uniform4< ork::VEC4UI, unsigned int, unsigned int, ork::uniform4ui, ork::value4ui > type;
	
};

template<>
class LunaType< 70077972 > {
public:
	typedef ork::Uniform4< ork::VEC4B, bool, unsigned int, ork::uniform4b, ork::value4b > type;
	
};

template<>
class LunaType< 32569719 > {
public:
	typedef ork::UniformMatrix< ork::MAT2F, float, 2, 2, ork::uniformMatrix2f, ork::valueMatrix2f > type;
	
};

template<>
class LunaType< 37059227 > {
public:
	typedef ork::UniformMatrix3< ork::MAT3F, float, ork::uniformMatrix3f, ork::valueMatrix3f > type;
	
};

template<>
class LunaType< 10941070 > {
public:
	typedef ork::UniformMatrix4< ork::MAT4F, float, ork::uniformMatrix4f, ork::valueMatrix4f > type;
	
};

template<>
class LunaType< 60894471 > {
public:
	typedef ork::UniformMatrix< ork::MAT2x3F, float, 2, 3, ork::uniformMatrix2x3f, ork::valueMatrix2x3f > type;
	
};

template<>
class LunaType< 64377736 > {
public:
	typedef ork::UniformMatrix< ork::MAT2x4F, float, 2, 4, ork::uniformMatrix2x4f, ork::valueMatrix2x4f > type;
	
};

template<>
class LunaType< 79780545 > {
public:
	typedef ork::UniformMatrix< ork::MAT3x2F, float, 3, 2, ork::uniformMatrix3x2f, ork::valueMatrix3x2f > type;
	
};

template<>
class LunaType< 29881578 > {
public:
	typedef ork::UniformMatrix< ork::MAT3x4F, float, 3, 4, ork::uniformMatrix3x4f, ork::valueMatrix3x4f > type;
	
};

template<>
class LunaType< 75749038 > {
public:
	typedef ork::UniformMatrix< ork::MAT4x2F, float, 4, 2, ork::uniformMatrix4x2f, ork::valueMatrix4x2f > type;
	
};

template<>
class LunaType< 28974449 > {
public:
	typedef ork::UniformMatrix< ork::MAT4x3F, float, 4, 3, ork::uniformMatrix4x3f, ork::valueMatrix4x3f > type;
	
};

template<>
class LunaType< 6641800 > {
public:
	typedef ork::UniformMatrix< ork::MAT2D, double, 2, 2, ork::uniformMatrix2d, ork::valueMatrix2d > type;
	
};

template<>
class LunaType< 32338425 > {
public:
	typedef ork::UniformMatrix3< ork::MAT3D, double, ork::uniformMatrix3d, ork::valueMatrix3d > type;
	
};

template<>
class LunaType< 34846828 > {
public:
	typedef ork::UniformMatrix4< ork::MAT4D, double, ork::uniformMatrix4d, ork::valueMatrix4d > type;
	
};

template<>
class LunaType< 1250961 > {
public:
	typedef ork::UniformMatrix< ork::MAT2x3D, double, 2, 3, ork::uniformMatrix2x3d, ork::valueMatrix2x3d > type;
	
};

template<>
class LunaType< 7990000 > {
public:
	typedef ork::UniformMatrix< ork::MAT2x4D, double, 2, 4, ork::uniformMatrix2x4d, ork::valueMatrix2x4d > type;
	
};

template<>
class LunaType< 57783004 > {
public:
	typedef ork::UniformMatrix< ork::MAT3x2D, double, 3, 2, ork::uniformMatrix3x2d, ork::valueMatrix3x2d > type;
	
};

template<>
class LunaType< 63635106 > {
public:
	typedef ork::UniformMatrix< ork::MAT3x4D, double, 3, 4, ork::uniformMatrix3x4d, ork::valueMatrix3x4d > type;
	
};

template<>
class LunaType< 95699040 > {
public:
	typedef ork::UniformMatrix< ork::MAT4x2D, double, 4, 2, ork::uniformMatrix4x2d, ork::valueMatrix4x2d > type;
	
};

template<>
class LunaType< 67217448 > {
public:
	typedef ork::UniformMatrix< ork::MAT4x3D, double, 4, 3, ork::uniformMatrix4x3d, ork::valueMatrix4x3d > type;
	
};

template<>
class LunaType< 77192586 > {
public:
	typedef ork::Value1< ork::VEC1F, float, ork::value1f > type;
	
};

template<>
class LunaType< 64085620 > {
public:
	typedef ork::Value1< ork::VEC1D, double, ork::value1d > type;
	
};

template<>
class LunaType< 76679364 > {
public:
	typedef ork::Value1< ork::VEC1I, int, ork::value1i > type;
	
};

template<>
class LunaType< 39735841 > {
public:
	typedef ork::Value1< ork::VEC1UI, unsigned int, ork::value1ui > type;
	
};

template<>
class LunaType< 2609407 > {
public:
	typedef ork::Value1< ork::VEC1B, bool, ork::value1b > type;
	
};

template<>
class LunaType< 56249770 > {
public:
	typedef ork::Value2< ork::VEC2F, float, ork::value2f > type;
	
};

template<>
class LunaType< 87392890 > {
public:
	typedef ork::Value2< ork::VEC2B, double, ork::value2d > type;
	
};

template<>
class LunaType< 19150398 > {
public:
	typedef ork::Value2< ork::VEC2I, int, ork::value2i > type;
	
};

template<>
class LunaType< 86655271 > {
public:
	typedef ork::Value2< ork::VEC2UI, unsigned int, ork::value2ui > type;
	
};

template<>
class LunaType< 45607006 > {
public:
	typedef ork::Value2< ork::VEC2B, bool, ork::value2b > type;
	
};

template<>
class LunaType< 68132243 > {
public:
	typedef ork::Value3< ork::VEC3F, float, ork::value3f > type;
	
};

template<>
class LunaType< 53162750 > {
public:
	typedef ork::Value3< ork::VEC3B, double, ork::value3d > type;
	
};

template<>
class LunaType< 52796636 > {
public:
	typedef ork::Value3< ork::VEC3I, int, ork::value3i > type;
	
};

template<>
class LunaType< 64391245 > {
public:
	typedef ork::Value3< ork::VEC3UI, unsigned int, ork::value3ui > type;
	
};

template<>
class LunaType< 29354763 > {
public:
	typedef ork::Value3< ork::VEC3B, bool, ork::value3b > type;
	
};

template<>
class LunaType< 66604303 > {
public:
	typedef ork::Value4< ork::VEC4F, float, ork::value4f > type;
	
};

template<>
class LunaType< 91515427 > {
public:
	typedef ork::Value4< ork::VEC4B, double, ork::value4d > type;
	
};

template<>
class LunaType< 34553147 > {
public:
	typedef ork::Value4< ork::VEC4I, int, ork::value4i > type;
	
};

template<>
class LunaType< 70212555 > {
public:
	typedef ork::Value4< ork::VEC4UI, unsigned int, ork::value4ui > type;
	
};

template<>
class LunaType< 14375118 > {
public:
	typedef ork::Value4< ork::VEC4B, bool, ork::value4b > type;
	
};

template<>
class LunaType< 45019609 > {
public:
	typedef ork::ValueMatrix< ork::MAT2F, float, 2, 2, ork::valueMatrix2f > type;
	
};

template<>
class LunaType< 27913274 > {
public:
	typedef ork::ValueMatrix3< ork::MAT3F, float, ork::valueMatrix3f > type;
	
};

template<>
class LunaType< 36543238 > {
public:
	typedef ork::ValueMatrix4< ork::MAT4F, float, ork::valueMatrix4f > type;
	
};

template<>
class LunaType< 43912679 > {
public:
	typedef ork::ValueMatrix< ork::MAT2x3F, float, 2, 3, ork::valueMatrix2x3f > type;
	
};

template<>
class LunaType< 8858344 > {
public:
	typedef ork::ValueMatrix< ork::MAT2x4F, float, 2, 4, ork::valueMatrix2x4f > type;
	
};

template<>
class LunaType< 6138673 > {
public:
	typedef ork::ValueMatrix< ork::MAT3x2F, float, 3, 2, ork::valueMatrix3x2f > type;
	
};

template<>
class LunaType< 11426488 > {
public:
	typedef ork::ValueMatrix< ork::MAT3x4F, float, 3, 4, ork::valueMatrix3x4f > type;
	
};

template<>
class LunaType< 96745795 > {
public:
	typedef ork::ValueMatrix< ork::MAT4x2F, float, 4, 2, ork::valueMatrix4x2f > type;
	
};

template<>
class LunaType< 51518099 > {
public:
	typedef ork::ValueMatrix< ork::MAT4x3F, float, 4, 3, ork::valueMatrix4x3f > type;
	
};

template<>
class LunaType< 64854228 > {
public:
	typedef ork::ValueMatrix< ork::MAT2D, double, 2, 2, ork::valueMatrix2d > type;
	
};

template<>
class LunaType< 9639623 > {
public:
	typedef ork::ValueMatrix3< ork::MAT3D, double, ork::valueMatrix3d > type;
	
};

template<>
class LunaType< 54835792 > {
public:
	typedef ork::ValueMatrix4< ork::MAT4D, double, ork::valueMatrix4d > type;
	
};

template<>
class LunaType< 98762883 > {
public:
	typedef ork::ValueMatrix< ork::MAT2x3D, double, 2, 3, ork::valueMatrix2x3d > type;
	
};

template<>
class LunaType< 29588304 > {
public:
	typedef ork::ValueMatrix< ork::MAT2x4D, double, 2, 4, ork::valueMatrix2x4d > type;
	
};

template<>
class LunaType< 14095432 > {
public:
	typedef ork::ValueMatrix< ork::MAT3x2D, double, 3, 2, ork::valueMatrix3x2d > type;
	
};

template<>
class LunaType< 1106228 > {
public:
	typedef ork::ValueMatrix< ork::MAT3x4D, double, 3, 4, ork::valueMatrix3x4d > type;
	
};

template<>
class LunaType< 27158095 > {
public:
	typedef ork::ValueMatrix< ork::MAT4x2D, double, 4, 2, ork::valueMatrix4x2d > type;
	
};

template<>
class LunaType< 33131964 > {
public:
	typedef ork::ValueMatrix< ork::MAT4x3D, double, 4, 3, ork::valueMatrix4x3d > type;
	
};

template<>
class LunaType< 16689971 > {
public:
	typedef ork::SetIterator< ork::ptr< ork::Task > > type;
	
};

template<>
class LunaType< 94394620 > {
public:
	typedef ork::MultiMapIterator< std::string, ork::ptr< ork::SceneNode > > type;
	
};

template<>
class LunaType< 82903998 > {
public:
	typedef ork::SetIterator< std::string > type;
	
};

template<>
class LunaType< 26450461 > {
public:
	typedef ork::MapIterator< std::string, ork::ptr< ork::Value > > type;
	
};

template<>
class LunaType< 46817549 > {
public:
	typedef ork::MapIterator< std::string, ork::ptr< ork::Module > > type;
	
};

template<>
class LunaType< 99850653 > {
public:
	typedef ork::MapIterator< std::string, ork::ptr< ork::MeshBuffers > > type;
	
};

template<>
class LunaType< 17237157 > {
public:
	typedef ork::MapIterator< std::string, ork::ptr< ork::Object > > type;
	
};

template<>
class LunaType< 89970006 > {
public:
	typedef ork::MapIterator< std::string, ork::ptr< ork::Method > > type;
	
};

template<>
class LunaType< 8893137 > {
public:
	typedef std::vector< ork::ptr< ork::Module > > type;
	
};

template<>
class LunaType< 41801658 > {
public:
	typedef std::vector< ork::ptr< ork::TaskFactory > > type;
	
};

template<>
class LunaType< 35026174 > {
public:
	typedef std::vector< ork::SetTargetTask::Target > type;
	
};

template<>
class LunaType< 86321452 > {
public:
	typedef std::set< ork::Task * > type;
	
};

template<>
class LunaType< 51056292 > {
public:
	typedef osg::BoundingBox type;
	
};

template<>
class LunaType< 30439254 > {
public:
	typedef ork::static_ptr< ork::Logger > type;
	
};

template<>
class LunaType< 31285358 > {
public:
	typedef std::set< ork::Program * > type;
	
};

template<>
class LunaType< 90701920 > {
public:
	typedef std::vector< ork::ptr< ork::Uniform > > type;
	
};

template<>
class LunaType< 21564657 > {
public:
	typedef uint64_t type;
	
};

template<>
class LunaType< 71786532 > {
public:
	typedef std::set< ork::ptr< ork::Task > > type;
	
};

template<>
class LunaType< 3625364 > {
public:
	typedef void type;
	
};

template<>
class LunaType< 27834872 > {
public:
	typedef std::vector< unsigned int > type;
	
};

template<>
class LunaType< 92299338 > {
public:
	typedef std::vector< int > type;
	
};

template<>
class LunaType< 95416160 > {
public:
	typedef std::vector< std::string > type;
	
};

template<>
class LunaType< 18903838 > {
public:
	typedef osg::Matrixd type;
	
};


#endif


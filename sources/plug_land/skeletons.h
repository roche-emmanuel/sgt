#ifndef _land_SKELETONS_H_
#define _land_SKELETONS_H_

class FrameBufferMap: public ork::Object {
};

class Impl: public ork::Task {
};

class Parameters {
};

class Parameters {
};

class static_ref {
};

class StaticResourceDescriptor: public ork::ResourceDescriptor {
};

class Target {
};

class taskKeySort {
};

class taskSort {
};

class TaskStatistics {
};

class TiXmlAttribute: public TiXmlBase {
};

class TiXmlAttributeSet {
};

class TiXmlBase {
public:
	class Entity {
	};

};

class TiXmlComment: public TiXmlNode {
};

class TiXmlCursor {
};

class TiXmlDeclaration: public TiXmlNode {
};

class TiXmlDocument: public TiXmlNode {
};

class TiXmlElement: public TiXmlNode {
};

class TiXmlHandle {
};

class TiXmlNode: public TiXmlBase {
};

class TiXmlPrinter: public TiXmlVisitor {
};

class TiXmlText: public TiXmlNode {
};

class TiXmlUnknown: public TiXmlNode {
};

class TiXmlVisitor {
};

class Type {
};

class TypeInfoSort {
};

class Vertex {
};

namespace land {
	class ProlandDrawable {
	};

};

namespace ork {
	class box2i {
	};

	class box2f {
	};

	class box2d {
	};

	class box3i {
	};

	class box3f {
	};

	class box3d {
	};

	class mat2f {
	};

	class mat2d {
	};

	class mat3f {
	};

	class mat3d {
	};

	class mat4f {
	};

	class mat4d {
	};

	class quatf {
	};

	class quatd {
	};

	class vec2h {
	};

	class vec2f {
	};

	class vec2d {
	};

	class vec2i {
	};

	class vec3h {
	};

	class vec3f {
	};

	class vec3d {
	};

	class vec3i {
	};

	class vec4h {
	};

	class vec4f {
	};

	class vec4d {
	};

	class vec4i {
	};

	class Uniform1f {
	};

	class Uniform1d {
	};

	class Uniform1i {
	};

	class Uniform1ui {
	};

	class Uniform1b {
	};

	class Uniform2f {
	};

	class Uniform2d {
	};

	class Uniform2i {
	};

	class Uniform2ui {
	};

	class Uniform2b {
	};

	class Uniform3f {
	};

	class Uniform3d {
	};

	class Uniform3i {
	};

	class Uniform3ui {
	};

	class Uniform3b {
	};

	class Uniform4f {
	};

	class Uniform4d {
	};

	class Uniform4i {
	};

	class Uniform4ui {
	};

	class Uniform4b {
	};

	class UniformMatrix2f {
	};

	class UniformMatrix3f {
	};

	class UniformMatrix4f {
	};

	class UniformMatrix2x3f {
	};

	class UniformMatrix2x4f {
	};

	class UniformMatrix3x2f {
	};

	class UniformMatrix3x4f {
	};

	class UniformMatrix4x2f {
	};

	class UniformMatrix4x3f {
	};

	class UniformMatrix2d {
	};

	class UniformMatrix3d {
	};

	class UniformMatrix4d {
	};

	class UniformMatrix2x3d {
	};

	class UniformMatrix2x4d {
	};

	class UniformMatrix3x2d {
	};

	class UniformMatrix3x4d {
	};

	class UniformMatrix4x2d {
	};

	class UniformMatrix4x3d {
	};

	class Value1f {
	};

	class Value1d {
	};

	class Value1i {
	};

	class Value1ui {
	};

	class Value1b {
	};

	class Value2f {
	};

	class Value2d {
	};

	class Value2i {
	};

	class Value2ui {
	};

	class Value2b {
	};

	class Value3f {
	};

	class Value3d {
	};

	class Value3i {
	};

	class Value3ui {
	};

	class Value3b {
	};

	class Value4f {
	};

	class Value4d {
	};

	class Value4i {
	};

	class Value4ui {
	};

	class Value4b {
	};

	class ValueMatrix2f {
	};

	class ValueMatrix3f {
	};

	class ValueMatrix4f {
	};

	class ValueMatrix2x3f {
	};

	class ValueMatrix2x4f {
	};

	class ValueMatrix3x2f {
	};

	class ValueMatrix3x4f {
	};

	class ValueMatrix4x2f {
	};

	class ValueMatrix4x3f {
	};

	class ValueMatrix2d {
	};

	class ValueMatrix3d {
	};

	class ValueMatrix4d {
	};

	class ValueMatrix2x3d {
	};

	class ValueMatrix2x4d {
	};

	class ValueMatrix3x2d {
	};

	class ValueMatrix3x4d {
	};

	class ValueMatrix4x2d {
	};

	class ValueMatrix4x3d {
	};

	class vec2b {
	};

	class vec3b {
	};

	class vec4b {
	};

	class Factory: public ork::Object {
	};

	class FileLogger: public ork::Logger {
	public:
		class File {
		};

	};

	class GPUTimer: public ork::Timer {
	};

	class SetIterator {
	};

	class MapIterator {
	};

	class MultiMapIterator {
	};

	class Logger: public ork::Object {
	};

	class Object {
	public:
	};

	class ptr {
	};

	class static_ptr: public ork::ptr {
	};

	class Timer {
	};

	class box2 {
	};

	class box3 {
	};

	class half {
	};

	class mat2 {
	};

	class mat3 {
	};

	class mat4 {
	};

	class quat {
	};

	class vec2 {
	};

	class vec3 {
	};

	class vec4 {
	};

	class AttributeBuffer: public ork::Object {
	};

	class Buffer: public ork::Object {
	public:
	};

	class CPUBuffer: public ork::Buffer {
	};

	class FrameBuffer: public ork::Object {
	public:
	};

	class GPUBuffer: public ork::Buffer {
	};

	class Mesh: public ork::Object {
	};

	class MeshBuffers: public ork::Object {
	};

	class Module: public ork::Object {
	};

	class Program: public ork::Object {
	};

	class Query: public ork::Object {
	};

	class RenderBuffer: public ork::Object {
	};

	class Sampler: public ork::Object {
	public:
		class Parameters {
		};

	};

	class Texture: public ork::Object {
	public:
		class Parameters: public ork::Sampler::Parameters {
		};

	};

	class Texture1D: public ork::Texture {
	};

	class Texture1DArray: public ork::Texture {
	};

	class Texture2D: public ork::Texture {
	};

	class Texture2DArray: public ork::Texture {
	};

	class Texture2DMultisample: public ork::Texture {
	};

	class Texture2DMultisampleArray: public ork::Texture {
	};

	class Texture3D: public ork::Texture {
	};

	class TextureBuffer: public ork::Texture {
	};

	class TextureCube: public ork::Texture {
	};

	class TextureCubeArray: public ork::Texture {
	};

	class TextureRectangle: public ork::Texture {
	};

	class TransformFeedback: public ork::Object {
	};

	class Uniform: public ork::Object {
	};

	class Uniform1: public ork::Uniform {
	};

	class Uniform2: public ork::Uniform {
	};

	class Uniform3: public ork::Uniform {
	};

	class Uniform4: public ork::Uniform {
	};

	class UniformMatrix: public ork::Uniform {
	};

	class UniformMatrix3: public ork::UniformMatrix {
	};

	class UniformMatrix4: public ork::UniformMatrix {
	};

	class UniformSampler: public ork::Uniform {
	};

	class UniformSubroutine: public ork::Uniform {
	};

	class UniformBlock: public ork::Object {
	};

	class Value: public ork::Object {
	};

	class Value1: public ork::Value {
	};

	class Value2: public ork::Value {
	};

	class Value3: public ork::Value {
	};

	class Value4: public ork::Value {
	};

	class ValueMatrix: public ork::Value {
	};

	class ValueMatrix3: public ork::ValueMatrix {
	};

	class ValueMatrix4: public ork::ValueMatrix {
	};

	class ValueSampler: public ork::Value {
	};

	class ValueSubroutine: public ork::Value {
	};

	class Font: public ork::Object {
	public:
	};

	class CompiledResourceLoader: public ork::ResourceLoader {
	public:
	};

	class Resource {
	};

	class ResourceCompiler: public ork::XMLResourceLoader {
	};

	class ResourceDescriptor: public ork::Object {
	};

	class ResourceFactory {
	public:
		class createFunc {
		};

	};

	class ResourceLoader: public ork::Object {
	};

	class ResourceManager: public ork::Object {
	};

	class ResourceTemplate: public ork::Resource {
	};

	class XMLResourceLoader: public ork::ResourceLoader {
	};

	class MultithreadScheduler: public ork::Scheduler {
	public:
	};

	class Scheduler: public ork::Object {
	};

	class Task: public ork::Object {
	public:
	};

	class TaskListener {
	};

	class TaskFactory: public ork::Object {
	};

	class TaskGraph: public ork::Task, public ork::TaskListener {
	public:
		class TaskIterator {
		};

	};

	class AbstractTask: public ork::TaskFactory {
	};

	class CallMethodTask: public ork::AbstractTask {
	};

	class DrawMeshTask: public ork::AbstractTask {
	public:
	};

	class LoopTask: public ork::AbstractTask {
	};

	class Method: public ork::Object {
	};

	class SceneManager: public ork::Object {
	public:
		class NodeIterator {
		};

	};

	class SceneNode: public ork::Object {
	public:
		class FlagIterator {
		};

		class ValueIterator {
		};

		class ModuleIterator {
		};

		class MeshIterator {
		};

		class FieldIterator {
		};

		class MethodIterator {
		};

	};

	class SequenceTask: public ork::AbstractTask {
	};

	class SetProgramTask: public ork::AbstractTask {
	public:
		class Impl: public ork::Task {
		};

	};

	class SetStateTask: public ork::AbstractTask {
	public:
		class Impl: public ork::Task {
		};

		class Runnable {
		};

	};

	class SetTargetTask: public ork::AbstractTask {
	public:
		class Impl: public ork::Task {
		};

	};

	class SetTransformsTask: public ork::AbstractTask {
	public:
		class Impl: public ork::Task {
		};

	};

	class ShowInfoTask: public ork::AbstractTask {
	public:
		class Impl: public ork::Task {
		};

	};

	class ShowLogTask: public ork::ShowInfoTask {
	};

	class vec2h {
	};

	class vec2f {
	};

	class vec2d {
	};

	class vec2i {
	};

	class vec2b {
	};

	class vec3h {
	};

	class vec3f {
	};

	class vec3d {
	};

	class vec3i {
	};

	class vec3b {
	};

	class vec4h {
	};

	class vec4f {
	};

	class vec4d {
	};

	class vec4i {
	};

	class vec4b {
	};

	class box2f {
	};

	class box2d {
	};

	class box2i {
	};

	class box3f {
	};

	class box3d {
	};

	class box3i {
	};

	class mat2f {
	};

	class mat2d {
	};

	class mat3f {
	};

	class mat3d {
	};

	class mat4f {
	};

	class mat4d {
	};

	class quatf {
	};

	class quatd {
	};

};

namespace std {
	class type_info {
	};

};


#endif

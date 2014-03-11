#ifndef _osg_SKELETONS_H_
#define _osg_SKELETONS_H_

class ControlPoint {
};

class CoordinateFrameCallback: public osg::Referenced {
};

class DatabaseRequest: public osg::Referenced {
};

class DatabaseThread: public osg::Referenced, public OpenThreads::Thread {
};

class DrawCallback: public osg::Object {
};

class DrawCallback: public osg::Object {
};

class Edgeloop: public osg::Referenced {
public:
	class EdgeList {
	};

};

class EventCallback: public osg::Object {
};

class Extensions: public osg::Referenced {
};

class Extensions: public osg::Referenced {
};

class Extensions: public osg::Referenced {
};

class Extensions: public osg::Referenced {
};

class Extensions: public osg::Referenced {
};

class FontImplementation: public osg::Referenced {
};

class GLUtesselator {
};

class Identifier: public osg::Referenced {
};

class ImageRequest: public osg::Referenced {
};

class ImageThread: public osg::Referenced, public OpenThreads::Thread {
};

class LineSegmentIntersection {
public:
	class IndexList {
	};

};

class MatrixPlanesDrawables {
};

class ModifiedCallback: public osg::Object {
};

class ObjectData {
};

class PagedLODList: public osg::Referenced {
};

class Parameter {
};

class PerRangeData {
};

class PixelWindow {
};

class Point: public osg::Referenced {
};

class ProgramBinary: public osg::Object {
};

class RatioWindow {
};

class ReadCallback: public osg::Referenced {
};

class ReadQueue: public osgDB::DatabasePager::RequestQueue {
};

class ReadQueue: public osgDB::ImagePager::RequestQueue {
};

class ReadResult {
};

class RemoveEmptyNodesVisitor: public osgUtil::BaseOptimizerVisitor {
public:
	class NodeList {
	};

};

class RemoveLoadedProxyNodesVisitor: public osgUtil::BaseOptimizerVisitor {
public:
	class NodeList {
	};

};

class RemoveRedundantNodesVisitor: public osgUtil::BaseOptimizerVisitor {
public:
	class NodeList {
	};

};

class RequestQueue: public osg::Referenced {
public:
	class RequestList {
	};

};

class RequestQueue: public osg::Referenced {
public:
	class RequestList {
	};

};

class ResizedCallback: public osg::Referenced {
};

class ScreenIdentifier {
};

class ScreenSettings {
};

class Scrolling {
};

class SortCallback: public osg::Referenced {
};

class Source: public osg::Referenced {
};

class SpatializeGroupsVisitor: public osgUtil::BaseOptimizerVisitor {
public:
	class GroupsToDivideList {
	};

	class GeodesToDivideList {
	};

};

class StateVisitor: public osgUtil::BaseOptimizerVisitor {
};

class StaticObjectDetectionVisitor: public osgUtil::BaseOptimizerVisitor {
};

class SwapCallback: public osg::Referenced {
};

class TabletPen {
};

class TessellateVisitor: public osgUtil::BaseOptimizerVisitor {
public:
	class GroupList {
	};

};

class TexCoordRange: public osg::Referenced {
};

class TextureAtlasBuilder {
public:
	class Atlas: public osg::Referenced {
	};

	class CompareSrc {
	};

};

class TextureAtlasVisitor: public osgUtil::BaseOptimizerVisitor {
};

class TextureObject: public osg::Referenced {
};

class TextureObjectManager: public osg::Referenced {
};

class TextureObjectSet: public osg::Referenced {
};

class TextureProfile {
};

class TextureVisitor: public osgUtil::BaseOptimizerVisitor {
};

class ThreadSafeQueue {
public:
	class SceneViewList {
	};

};

class TouchData: public osg::Object {
public:
	class TouchSet {
	};

	class TouchPoint {
	};

};

class Traits: public osg::Referenced, public osg::GraphicsContext::ScreenIdentifier {
};

class Triangle: public osg::Referenced {
};

class Triangle {
};

class UniformBlockInfo {
};

class UniformStack {
public:
	class UniformPair {
	};

	class UniformVec {
	};

};

class UpdateCallback: public osg::Object {
};

class UpdateCallback: public osg::StateAttributeCallback {
};

class UpdateSlaveCallback: public osg::Referenced {
};

class UserStatsLine {
};

class Vec3ArrayData {
};

class Vec3d {
};

class WindowingSystemInterface: public osg::Referenced {
};

class WriteResult {
};

class WriteToFile: public osgViewer::ScreenCaptureHandler::CaptureOperation {
};

namespace OpenThreads {
	class Atomic {
	};

	class AtomicPtr {
	};

	class Barrier {
	};

	class Block {
	};

	class BlockCount {
	};

	class Condition {
	};

	class ReadWriteMutex {
	};

	class ScopedReadLock {
	};

	class ScopedWriteLock {
	};

	class ReentrantMutex: public OpenThreads::Mutex {
	};

	class ScopedLock {
	};

	class ReverseScopedLock {
	};

	class ScopedPointerLock {
	};

	class ReverseScopedPointerLock {
	};

	class Thread {
	};

};

namespace osg {
	class ByteArray {
	};

	class ShortArray {
	};

	class IntArray {
	};

	class UByteArray {
	};

	class UShortArray {
	};

	class UIntArray {
	};

	class FloatArray {
	};

	class Vec2Array {
	};

	class Vec3Array {
	};

	class Vec4Array {
	};

	class Vec4ubArray {
	};

	class Vec2sArray {
	};

	class Vec3sArray {
	};

	class Vec4sArray {
	};

	class Vec2bArray {
	};

	class Vec3bArray {
	};

	class Vec4bArray {
	};

	class DoubleArray {
	};

	class Vec2dArray {
	};

	class Vec3dArray {
	};

	class Vec4dArray {
	};

	class MatrixfArray {
	};

	class BoundingBoxf {
	};

	class BoundingBoxd {
	};

	class BoundingSpheref {
	};

	class BoundingSphered {
	};

	class GLBufferObjectList {
	};

	class CostPair {
	};

	class NodeList {
	};

	class ImageList {
	};

	class NodePath {
	};

	class NodePathList {
	};

	class MatrixList {
	};

	class RefNodePath {
	};

	class VectorGLsizei {
	};

	class VectorGLubyte {
	};

	class VectorGLushort {
	};

	class VectorGLuint {
	};

	class ShaderComponents {
	};

	class ShadowVolumeOccluderList {
	};

	class Matrix2 {
	};

	class Matrix2x3 {
	};

	class Matrix2x4 {
	};

	class Matrix3x2 {
	};

	class Matrix3 {
	};

	class Matrix3x4 {
	};

	class Matrix4x2 {
	};

	class Matrix4x3 {
	};

	class Matrix2d {
	};

	class Matrix2x3d {
	};

	class Matrix2x4d {
	};

	class Matrix3x2d {
	};

	class Matrix3d {
	};

	class Matrix3x4d {
	};

	class Matrix4x2d {
	};

	class Matrix4x3d {
	};

	class StringValueObject {
	};

	class BoolValueObject {
	};

	class CharValueObject {
	};

	class UCharValueObject {
	};

	class ShortValueObject {
	};

	class UShortValueObject {
	};

	class IntValueObject {
	};

	class UIntValueObject {
	};

	class FloatValueObject {
	};

	class DoubleValueObject {
	};

	class Vec2fValueObject {
	};

	class Vec3fValueObject {
	};

	class Vec4fValueObject {
	};

	class Vec2dValueObject {
	};

	class Vec3dValueObject {
	};

	class Vec4dValueObject {
	};

	class QuatValueObject {
	};

	class PlaneValueObject {
	};

	class MatrixfValueObject {
	};

	class MatrixdValueObject {
	};

	class Vec3dList {
	};

	class StateSetList {
	};

	class StateAttributeUIntPairList {
	};

	class AlphaFunc: public osg::StateAttribute {
	};

	class AnimationPath: public osg::Object {
	public:
		class TimeControlPointMap {
		};

	};

	class AnimationPathCallback: public osg::NodeCallback {
	};

	class ApplicationUsage: public osg::Referenced {
	public:
		class UsageMap {
		};

	};

	class ApplicationUsageProxy {
	};

	class ArgumentParser {
	public:
		class ErrorMessageMap {
		};

	};

	class Array: public osg::BufferData {
	};

	class TemplateArray: public osg::Array, public osg::MixinVector {
	};

	class IndexArray: public osg::Array {
	};

	class TemplateIndexArray: public osg::IndexArray, public osg::MixinVector {
	};

	class ArrayVisitor {
	};

	class ConstArrayVisitor {
	};

	class ValueVisitor {
	};

	class ConstValueVisitor {
	};

	class AttributeDispatch: public osg::Referenced {
	};

	class ArrayDispatchers: public osg::Referenced {
	};

	class AudioSink: public osg::Object {
	};

	class AudioStream: public osg::Object {
	};

	class AutoTransform: public osg::Transform {
	};

	class Billboard: public osg::Geode {
	public:
		class PositionList {
		};

	};

	class BlendColor: public osg::StateAttribute {
	public:
	};

	class BlendEquation: public osg::StateAttribute {
	public:
	};

	class BlendFunc: public osg::StateAttribute {
	public:
	};

	class BoundingBoxImpl {
	};

	class BoundingSphereImpl {
	};

	class buffered_value {
	};

	class buffered_object {
	};

	class BufferIndexBinding: public osg::StateAttribute {
	};

	class UniformBufferBinding: public osg::BufferIndexBinding {
	};

	class TransformFeedbackBufferBinding: public osg::BufferIndexBinding {
	};

	class AtomicCounterBufferBinding: public osg::BufferIndexBinding {
	};

	class BufferObjectProfile {
	};

	class GLBufferObject: public osg::Referenced {
	public:
		class BufferEntry {
		};

		class Extensions: public osg::Referenced {
		};

	};

	class GLBufferObjectSet: public osg::Referenced {
	};

	class GLBufferObjectManager: public osg::Referenced {
	};

	class BufferObject: public osg::Object {
	};

	class BufferData: public osg::Object {
	public:
	};

	class VertexBufferObject: public osg::BufferObject {
	};

	class ElementBufferObject: public osg::BufferObject {
	};

	class PixelBufferObject: public osg::BufferObject {
	};

	class PixelDataBufferObject: public osg::BufferObject {
	};

	class UniformBufferObject: public osg::BufferObject {
	};

	class AtomicCounterBufferObject: public osg::BufferObject {
	};

	class Camera: public osg::Transform, public osg::CullSettings {
	public:
		class BufferAttachmentMap {
		};

		class Attachment {
		};

	};

	class CameraView: public osg::Transform {
	};

	class ClampColor: public osg::StateAttribute {
	public:
	};

	class ClearNode: public osg::Group {
	};

	class ClipNode: public osg::Group {
	public:
		class ClipPlaneList {
		};

	};

	class ClipPlane: public osg::StateAttribute {
	};

	class ClusterCullingCallback: public osg::Drawable::CullCallback, public osg::NodeCallback {
	};

	class CollectOccludersVisitor: public osg::NodeVisitor, public osg::CullStack {
	public:
		class ShadowVolumeOccluderSet {
		};

	};

	class ColorMask: public osg::StateAttribute {
	};

	class ColorMatrix: public osg::StateAttribute {
	};

	class ComputeBoundsVisitor: public osg::NodeVisitor {
	};

	class ConvexPlanarOccluder: public osg::Object {
	public:
		class HoleList {
		};

	};

	class ConvexPlanarPolygon {
	public:
		class VertexList {
		};

	};

	class EllipsoidModel: public osg::Object {
	};

	class CoordinateSystemNode: public osg::Group {
	};

	class CopyOp {
	};

	class CullFace: public osg::StateAttribute {
	};

	class CullingSet: public osg::Referenced {
	public:
		class StateFrustumPair {
		};

		class StateFrustumList {
		};

		class OccluderList {
		};

	};

	class CullSettings {
	public:
		class ClampProjectionMatrixCallback: public osg::Referenced {
		};

	};

	class CullStack: public osg::CullSettings {
	public:
		class OccluderList {
		};

		class CullingStack {
		};

	};

	class DeleteHandler {
	public:
		class FrameNumberObjectPair {
		};

		class ObjectsToDeleteList {
		};

	};

	class Depth: public osg::StateAttribute {
	};

	class DisplaySettings: public osg::Referenced {
	};

	class Drawable: public osg::Object {
	public:
		class ParentList {
		};

		class ComputeBoundingBoxCallback: public osg::Object {
		};

		class CullCallback: public osg::Object {
		};

	};

	class DrawPixels: public osg::Drawable {
	};

	class fast_back_stack {
	};

	class Fog: public osg::StateAttribute {
	};

	class FragmentProgram: public osg::StateAttribute {
	public:
		class LocalParamList {
		};

		class MatrixList {
		};

		class Extensions: public osg::Referenced {
		};

	};

	class FBOExtensions: public osg::Referenced {
	};

	class RenderBuffer: public osg::Object {
	};

	class FrameBufferAttachment {
	};

	class FrameBufferObject: public osg::StateAttribute {
	public:
		class AttachmentMap {
		};

		class MultipleRenderingTargets {
		};

	};

	class FrameStamp: public osg::Referenced {
	};

	class FrontFace: public osg::StateAttribute {
	};

	class Geode: public osg::Node {
	public:
		class DrawableList {
		};

	};

	class Geometry: public osg::Drawable {
	public:
		class ArrayDataList {
		};

		class PrimitiveSetList {
		};

		class ArrayList {
		};

		class DrawElementsList {
		};

		class ArrayData {
		};

	};

	class GL2Extensions: public osg::Referenced {
	};

	class GLBeginEndAdapter {
	};

	class PixelStorageModes {
	};

	class GraphicsContext: public osg::Object {
	public:
		class ScreenSettingsList {
		};

		class GraphicsContexts {
		};

		class GraphicsOperationQueue {
		};

		class Cameras {
		};

	};

	class ClampedLinearCostFunction1D {
	};

	class GeometryCostEstimator: public osg::Referenced {
	};

	class TextureCostEstimator: public osg::Referenced {
	};

	class ProgramCostEstimator: public osg::Referenced {
	};

	class GraphicsCostEstimator: public osg::Referenced {
	};

	class GraphicsThread: public osg::OperationThread {
	};

	class GraphicsOperation: public osg::Operation {
	};

	class SwapBuffersOperation: public osg::GraphicsOperation {
	};

	class BarrierOperation: public osg::Operation, public OpenThreads::Barrier {
	};

	class ReleaseContext_Block_MakeCurrentOperation: public osg::GraphicsOperation, public osg::RefBlock {
	};

	class BlockAndFlushOperation: public osg::GraphicsOperation, public OpenThreads::Block {
	};

	class FlushDeletedGLObjectsOperation: public osg::GraphicsOperation {
	};

	class RunOperations: public osg::GraphicsOperation {
	};

	class EndOfDynamicDrawBlock: public OpenThreads::BlockCount, public osg::State::DynamicObjectRenderingCompletedCallback {
	};

	class Group: public osg::Node {
	};

	class Hint: public osg::StateAttribute {
	};

	class Image: public osg::BufferData {
	public:
		class MipmapDataType {
		};

		class DimensionsChangedCallbackVector {
		};

		class DataIterator {
		};

		class DimensionsChangedCallback: public osg::Referenced {
		};

	};

	class ImageSequence: public osg::ImageStream {
	public:
		class ImageDataList {
		};

		class ImageData {
		};

	};

	class ImageStream: public osg::Image {
	public:
		class AudioStreams {
		};

	};

	class KdTree: public osg::Shape {
	public:
		class LineSegmentIntersections {
		};

		class KdNodeList {
		};

		class TriangleList {
		};

		class BuildOptions {
		};

		class KdNode {
		};

	};

	class KdTreeBuilder: public osg::NodeVisitor {
	};

	class Light: public osg::StateAttribute {
	};

	class LightModel: public osg::StateAttribute {
	};

	class LightSource: public osg::Group {
	};

	class LineSegment: public osg::Referenced {
	};

	class LineStipple: public osg::StateAttribute {
	};

	class LineWidth: public osg::StateAttribute {
	};

	class LOD: public osg::Group {
	public:
		class MinMaxPair {
		};

		class RangeList {
		};

	};

	class LogicOp: public osg::StateAttribute {
	};

	class Material: public osg::StateAttribute {
	};

	class Matrixd {
	};

	class RefMatrixd: public osg::Object, public osg::Matrixd {
	};

	class Matrixf {
	};

	class RefMatrixf: public osg::Object, public osg::Matrixf {
	};

	class MatrixTransform: public osg::Transform {
	};

	class MixinVector {
	};

	class Multisample: public osg::StateAttribute {
	public:
		class Extensions: public osg::Referenced {
		};

	};

	class Node: public osg::Object {
	public:
		class ParentList {
		};

		class ComputeBoundingSphereCallback: public osg::Object {
		};

	};

	class NodeCallback: public osg::Object {
	};

	class NodeTrackerCallback: public osg::NodeCallback {
	};

	class NodeVisitor: public osg::Referenced {
	public:
		class DatabaseRequestHandler: public osg::Referenced {
		};

		class ImageRequestHandler: public osg::Referenced {
		};

	};

	class NodeAcceptOp {
	};

	class NotifyHandler: public osg::Referenced {
	};

	class StandardNotifyHandler: public osg::NotifyHandler {
	};

	class Object: public osg::Referenced {
	};

	class Observer {
	};

	class ObserverSet: public osg::Referenced {
	public:
		class Observers {
		};

	};

	class observer_ptr {
	};

	class ObserverNodePath {
	};

	class OccluderNode: public osg::Group {
	};

	class TestResult: public osg::Referenced {
	};

	class QueryGeometry: public osg::Geometry {
	};

	class OcclusionQueryNode: public osg::Group {
	};

	class RefBlock: public osg::Referenced, public OpenThreads::Block {
	};

	class RefBlockCount: public osg::Referenced, public OpenThreads::BlockCount {
	};

	class Operation: public osg::Referenced {
	};

	class OperationQueue: public osg::Referenced {
	public:
		class OperationThreads {
		};

	};

	class OperationThread: public osg::Referenced, public OpenThreads::Thread {
	};

	class PagedLOD: public osg::LOD {
	public:
		class PerRangeDataList {
		};

	};

	class Plane {
	};

	class Point: public osg::StateAttribute {
	public:
		class Extensions: public osg::Referenced {
		};

	};

	class PointSprite: public osg::StateAttribute {
	};

	class PolygonMode: public osg::StateAttribute {
	};

	class PolygonOffset: public osg::StateAttribute {
	};

	class PolygonStipple: public osg::StateAttribute {
	};

	class Polytope {
	public:
		class PlaneList {
		};

		class VertexList {
		};

		class MaskStack {
		};

		class PlaneList {
		};

	};

	class PositionAttitudeTransform: public osg::Transform {
	};

	class PrimitiveSet: public osg::BufferData {
	};

	class DrawArrays: public osg::PrimitiveSet {
	};

	class DrawArrayLengths: public osg::PrimitiveSet, public osg::MixinVector {
	};

	class DrawElements: public osg::PrimitiveSet {
	};

	class DrawElementsUByte: public osg::DrawElements, public osg::MixinVector {
	};

	class DrawElementsUShort: public osg::DrawElements, public osg::MixinVector {
	};

	class DrawElementsUInt: public osg::DrawElements, public osg::MixinVector {
	};

	class Program: public osg::StateAttribute {
	public:
		class AttribBindingList {
		};

		class FragDataBindingList {
		};

		class UniformBlockBindingList {
		};

		class ActiveUniformMap {
		};

		class ActiveVarInfoMap {
		};

		class UniformBlockMap {
		};

		class ActiveVarInfo {
		};

		class PerContextProgram: public osg::Referenced {
		};

	};

	class Projection: public osg::Group {
	};

	class ProxyNode: public osg::Group {
	};

	class Quat {
	};

	class ref_ptr {
	};

	class depends_on {
	};

	class RenderInfo {
	};

	class SampleMaski: public osg::StateAttribute {
	public:
		class Extensions: public osg::Referenced {
		};

	};

	class Scissor: public osg::StateAttribute {
	};

	class Sequence: public osg::Group {
	};

	class ShadeModel: public osg::StateAttribute {
	};

	class ShaderBinary: public osg::Object {
	};

	class Shader: public osg::Object {
	public:
		class CodeInjectionMap {
		};

		class PerContextShader: public osg::Referenced {
		};

	};

	class ShaderComponent: public osg::Object {
	};

	class ShaderAttribute: public osg::StateAttribute {
	};

	class ShaderComposer: public osg::Object {
	public:
		class Shaders {
		};

	};

	class ShadowVolumeOccluder {
	public:
		class HoleList {
		};

	};

	class Shape: public osg::Object {
	};

	class ShapeVisitor {
	};

	class ConstShapeVisitor {
	};

	class Sphere: public osg::Shape {
	};

	class Box: public osg::Shape {
	};

	class Cone: public osg::Shape {
	};

	class Cylinder: public osg::Shape {
	};

	class Capsule: public osg::Shape {
	};

	class InfinitePlane: public osg::Shape, public osg::Plane {
	};

	class TriangleMesh: public osg::Shape {
	};

	class ConvexHull: public osg::TriangleMesh {
	};

	class HeightField: public osg::Shape {
	public:
	};

	class CompositeShape: public osg::Shape {
	public:
		class ChildList {
		};

	};

	class TessellationHints: public osg::Object {
	};

	class ShapeDrawable: public osg::Drawable {
	};

	class VertexAttribAlias {
	};

	class State: public osg::Referenced, public osg::Observer {
	public:
		class StateSetStack {
		};

		class VertexAttribAliasList {
		};

		class IndicesGLushort {
		};

		class IndicesGLuint {
		};

		class AttributePair {
		};

		class AttributeVec {
		};

		class AttributeStack {
		};

		class DynamicObjectRenderingCompletedCallback: public osg::Referenced {
		};

		class EnabledArrayPair {
		};

		class ModeStack {
		public:
			class ValueVec {
			};

		};

	};

	class StateAttribute: public osg::Object {
	public:
		class TypeMemberPair {
		};

		class ParentList {
		};

		class ModeUsage {
		};

	};

	class StateAttributeCallback: public osg::Object {
	};

	class StateSet: public osg::Object {
	public:
		class ParentList {
		};

		class ModeList {
		};

		class RefAttributePair {
		};

		class AttributeList {
		};

		class TextureModeList {
		};

		class TextureAttributeList {
		};

		class RefUniformPair {
		};

		class UniformList {
		};

		class Callback: public osg::Object {
		};

	};

	class Stats: public osg::Referenced {
	public:
		class AttributeMap {
		};

		class AttributeMapList {
		};

		class CollectMap {
		};

	};

	class Stencil: public osg::StateAttribute {
	public:
		class Extensions: public osg::Referenced {
		};

	};

	class StencilTwoSided: public osg::StateAttribute {
	public:
		class Extensions: public osg::Referenced {
		};

	};

	class Switch: public osg::Group {
	public:
		class ValueList {
		};

	};

	class TexEnv: public osg::StateAttribute {
	};

	class TexEnvCombine: public osg::StateAttribute {
	};

	class TexEnvFilter: public osg::StateAttribute {
	};

	class TexGen: public osg::StateAttribute {
	};

	class TexGenNode: public osg::Group {
	};

	class TexMat: public osg::StateAttribute {
	};

	class Texture: public osg::StateAttribute {
	public:
		class TextureObjectList {
		};

		class Extensions: public osg::Referenced {
		};

		class ImageAttachment {
		};

	};

	class Texture1D: public osg::Texture {
	public:
		class SubloadCallback: public osg::Referenced {
		};

	};

	class Texture2D: public osg::Texture {
	public:
		class SubloadCallback: public osg::Referenced {
		};

	};

	class Texture2DArray: public osg::Texture {
	public:
		class Extensions: public osg::Referenced {
		};

		class SubloadCallback: public osg::Referenced {
		};

	};

	class Texture2DMultisample: public osg::Texture {
	};

	class Texture3D: public osg::Texture {
	public:
		class Extensions: public osg::Referenced {
		};

		class SubloadCallback: public osg::Referenced {
		};

	};

	class TextureCubeMap: public osg::Texture {
	public:
		class Extensions: public osg::Referenced {
		};

		class SubloadCallback: public osg::Referenced {
		};

	};

	class TextureRectangle: public osg::Texture {
	public:
		class SubloadCallback: public osg::Referenced {
		};

	};

	class Timer {
	};

	class ElapsedTime {
	};

	class TransferFunction: public osg::Object {
	};

	class TransferFunction1D: public osg::TransferFunction {
	public:
		class ColorMap {
		};

	};

	class Transform: public osg::Group {
	};

	class MatrixTemplate {
	};

	class Matrix2Template: public osg::MatrixTemplate {
	public:
		class base_class {
		};

	};

	class Matrix2x3Template: public osg::MatrixTemplate {
	public:
		class base_class {
		};

	};

	class Matrix2x4Template: public osg::MatrixTemplate {
	public:
		class base_class {
		};

	};

	class Matrix3x2Template: public osg::MatrixTemplate {
	public:
		class base_class {
		};

	};

	class Matrix3Template: public osg::MatrixTemplate {
	public:
		class base_class {
		};

	};

	class Matrix3x4Template: public osg::MatrixTemplate {
	public:
		class base_class {
		};

	};

	class Matrix4x2Template: public osg::MatrixTemplate {
	public:
		class base_class {
		};

	};

	class Matrix4x3Template: public osg::MatrixTemplate {
	public:
		class base_class {
		};

	};

	class Uniform: public osg::Object {
	public:
		class ParentList {
		};

		class Callback: public osg::Object {
		};

	};

	class UserDataContainer: public osg::Object {
	public:
	};

	class DefaultUserDataContainer: public osg::UserDataContainer {
	};

	class ValueObject: public osg::Object {
	public:
		class GetValueVisitor {
		};

		class SetValueVisitor {
		};

	};

	class ValueObjectClassNameTrait {
	};

	class TemplateValueObject: public osg::ValueObject {
	};

	class ValueObjectClassNameTrait< std::string > {
	};

	class ValueObjectClassNameTrait< bool > {
	};

	class ValueObjectClassNameTrait< char > {
	};

	class ValueObjectClassNameTrait< unsigned char > {
	};

	class ValueObjectClassNameTrait< short > {
	};

	class ValueObjectClassNameTrait< unsigned short > {
	};

	class ValueObjectClassNameTrait< int > {
	};

	class ValueObjectClassNameTrait< unsigned int > {
	};

	class ValueObjectClassNameTrait< float > {
	};

	class ValueObjectClassNameTrait< double > {
	};

	class ValueObjectClassNameTrait< Vec2f > {
	};

	class ValueObjectClassNameTrait< Vec3f > {
	};

	class ValueObjectClassNameTrait< Vec4f > {
	};

	class ValueObjectClassNameTrait< Vec2d > {
	};

	class ValueObjectClassNameTrait< Vec3d > {
	};

	class ValueObjectClassNameTrait< Vec4d > {
	};

	class ValueObjectClassNameTrait< Quat > {
	};

	class ValueObjectClassNameTrait< Plane > {
	};

	class ValueObjectClassNameTrait< Matrixf > {
	};

	class ValueObjectClassNameTrait< Matrixd > {
	};

	class Vec2b {
	};

	class Vec2d {
	};

	class Vec2f {
	};

	class Vec2s {
	};

	class Vec3b {
	};

	class Vec3d {
	};

	class Vec3f {
	};

	class Vec3s {
	};

	class Vec4b {
	};

	class Vec4d {
	};

	class Vec4f {
	};

	class Vec4s {
	};

	class Vec4ub {
	};

	class VertexProgram: public osg::StateAttribute {
	public:
		class LocalParamList {
		};

		class MatrixList {
		};

		class Extensions: public osg::Referenced {
		};

	};

	class View: public osg::Object {
	public:
		class Slave {
		public:
		};

	};

	class Viewport: public osg::StateAttribute {
	};

	class ref_ptr< osg::Array > {
	};

	class ref_ptr< osg::Image > {
	};

	class ref_ptr< osg::PrimitiveSet > {
	};

	class ref_ptr< osg::AnimationPath > {
	};

	class Vec2Array: public osg::Array {
	};

	class Vec3Array: public osg::Array {
	};

	class Vec4Array: public osg::Array {
	};

	class MatrixList {
	};

	class NodePath {
	};

	class NodePathList {
	};

	class Matrix3 {
	};

	class Matrix3d {
	};

	class Vec2dVector {
	};

	class Vec3dVector {
	};

	class Vec4dVector {
	};

};

namespace osgDB {
	class FilePathList {
	};

	class FileNameList {
	};

	class ReaderWriterInfoList {
	};

	class Archive: public osgDB::ReaderWriter {
	};

	class AuthenticationDetails: public osg::Referenced {
	};

	class AuthenticationMap: public osg::Referenced {
	};

	class FindFileCallback: public osg::Referenced {
	};

	class ReadFileCallback: public osg::Referenced {
	};

	class WriteFileCallback: public osg::Referenced {
	};

	class FileLocationCallback: public osg::Referenced {
	};

	class DatabasePager: public osg::NodeVisitor::DatabaseRequestHandler {
	public:
		class StateSetList {
		};

		class DrawableList {
		};

		class ObjectList {
		};

	};

	class FileList: public osg::Object {
	public:
	};

	class DatabaseRevision: public osg::Object {
	public:
	};

	class DatabaseRevisions: public osg::Object {
	public:
		class DatabaseRevisionList {
		};

	};

	class ObjectGLenum {
	};

	class ObjectProperty {
	};

	class ObjectMark {
	};

	class DotOsgWrapper: public osg::Referenced {
	public:
	};

	class DeprecatedDotOsgWrapperManager: public osg::Referenced {
	public:
		class FileNames {
		};

	};

	class RegisterDotOsgWrapperProxy {
	};

	class TemplateRegisterDotOsgWrapperProxy: public osgDB::RegisterDotOsgWrapperProxy {
	};

	class DynamicLibrary: public osg::Referenced {
	};

	class ExternalFileWriter {
	public:
		class ObjectsSet {
		};

	};

	class FileCache: public osg::Referenced {
	public:
		class DatabaseRevisionsList {
		};

	};

	class FileNameComparator {
	};

	class fstream {
	};

	class ifstream {
	};

	class ofstream {
	};

	class ImageOptions: public osgDB::Options {
	public:
	};

	class ImagePager: public osg::NodeVisitor::ImageRequestHandler {
	public:
	};

	class ImageProcessor: public osg::Object {
	};

	class basic_type_wrapper {
	};

	class type_wrapper: public osgDB::basic_type_wrapper {
	};

	class Field {
	};

	class FieldReader {
	};

	class FieldReaderIterator {
	};

	class Input: public osgDB::FieldReaderIterator {
	};

	class InputException: public osg::Referenced {
	};

	class InputStream {
	public:
		class ArrayMap {
		};

		class IdentifierMap {
		};

	};

	class BaseCompressor: public osg::Referenced {
	};

	class FinishedObjectReadCallback: public osg::Referenced {
	};

	class ObjectWrapper: public osg::Referenced {
	public:
		class SerializerList {
		};

		class FinishedObjectReadCallbackList {
		};

	};

	class UpdateWrapperVersionProxy {
	};

	class ObjectWrapperManager: public osg::Referenced {
	public:
		class WrapperMap {
		};

		class CompressorMap {
		};

		class IntLookupMap {
		};

	};

	class RegisterWrapperProxy {
	};

	class RegisterCompressorProxy {
	};

	class Options: public osg::Object {
	};

	class Output: public osgDB::ofstream {
	};

	class OutputException: public osg::Referenced {
	};

	class OutputStream {
	public:
		class ArrayMap {
		};

		class ObjectMap {
		};

	};

	class ParameterOutput {
	};

	class ReaderWriterInfo: public osg::Referenced {
	};

	class ReaderWriter: public osg::Object {
	public:
		class FormatDescriptionMap {
		};

		class FeatureList {
		};

	};

	class Registry: public osg::Referenced {
	public:
		class MimeTypeExtensionMap {
		};

		class ReaderWriterList {
		};

		class ImageProcessorList {
		};

	};

	class RegisterReaderWriterProxy {
	};

	class RegisterImageProcessorProxy {
	};

	class PluginFunctionProxy {
	};

	class IntLookup {
	public:
		class ValueToString {
		};

	};

	class UserLookupTableProxy {
	};

	class BaseSerializer: public osg::Referenced {
	};

	class UserSerializer: public osgDB::BaseSerializer {
	};

	class TemplateSerializer: public osgDB::BaseSerializer {
	};

	class PropByValSerializer: public osgDB::TemplateSerializer {
	public:
		class ParentType {
		};

	};

	class PropByRefSerializer: public osgDB::TemplateSerializer {
	public:
		class ParentType {
		};

	};

	class MatrixSerializer: public osgDB::TemplateSerializer {
	public:
		class ParentType {
		};

	};

	class GLenumSerializer: public osgDB::TemplateSerializer {
	public:
		class ParentType {
		};

	};

	class StringSerializer: public osgDB::TemplateSerializer {
	public:
		class ParentType {
		};

	};

	class ObjectSerializer: public osgDB::TemplateSerializer {
	public:
		class ParentType {
		};

	};

	class ImageSerializer: public osgDB::TemplateSerializer {
	public:
		class ParentType {
		};

	};

	class EnumSerializer: public osgDB::TemplateSerializer {
	public:
		class ParentType {
		};

	};

	class ListSerializer: public osgDB::BaseSerializer {
	};

	class SharedStateManager: public osg::NodeVisitor {
	public:
		class CompareStateAttributes {
		};

		class CompareStateSets {
		};

	};

	class OutputIterator: public osg::Referenced {
	};

	class InputIterator: public osg::Referenced {
	};

	class XmlNode: public osg::Referenced {
	public:
		class Properties {
		};

		class Children {
		};

		class ControlMap {
		public:
			class CharacterToControlMap {
			};

		};

		class Input: public osgDB::XmlNode::ControlMap {
		};

	};

	namespace FileOpResult {
	};

};

namespace osgGA {
	class AnimationPathManipulator: public osgGA::CameraManipulator {
	public:
		class AnimationCompletedCallback: public osg::Referenced {
		};

	};

	class CameraManipulator: public osgGA::GUIEventHandler {
	public:
	};

	class CameraViewSwitchManipulator: public osgGA::CameraManipulator {
	public:
		class CameraViewList {
		};

	};

	class Device: public osg::Object {
	};

	class DriveManipulator: public osgGA::CameraManipulator {
	};

	class EventQueue: public osg::Referenced {
	public:
		class Events {
		};

	};

	class EventVisitor: public osg::NodeVisitor {
	public:
		class EventList {
		};

	};

	class FirstPersonManipulator: public osgGA::StandardManipulator {
	public:
		class FirstPersonAnimationData {
		};

	};

	class FlightManipulator: public osgGA::FirstPersonManipulator {
	};

	class GUIActionAdapter {
	};

	class GUIEventAdapter: public osg::Object {
	public:
	};

	class GUIEventHandler: public osg::NodeCallback, public osg::Drawable::EventCallback {
	};

	class GUIEventHandlerVisitor {
	};

	class KeySwitchMatrixManipulator: public osgGA::CameraManipulator {
	public:
		class NamedManipulator {
		};

		class KeyManipMap {
		};

	};

	class MultiTouchTrackballManipulator: public osgGA::TrackballManipulator {
	};

	class NodeTrackerManipulator: public osgGA::OrbitManipulator {
	};

	class OrbitManipulator: public osgGA::StandardManipulator {
	public:
		class OrbitAnimationData {
		};

	};

	class SphericalManipulator: public osgGA::CameraManipulator {
	};

	class StandardManipulator: public osgGA::CameraManipulator {
	public:
		class AnimationData: public osg::Referenced {
		};

	};

	class StateSetManipulator: public osgGA::GUIEventHandler {
	};

	class TerrainManipulator: public osgGA::OrbitManipulator {
	};

	class TrackballManipulator: public osgGA::OrbitManipulator {
	};

	class UFOManipulator: public osgGA::CameraManipulator {
	};

};

namespace osgParticle {
	class rangef {
	};

	class rangev2 {
	};

	class rangev3 {
	};

	class rangev4 {
	};

	class AccelOperator: public osgParticle::Operator {
	};

	class AngularAccelOperator: public osgParticle::Operator {
	};

	class AngularDampingOperator: public osgParticle::Operator {
	};

	class BounceOperator: public osgParticle::DomainOperator {
	};

	class BoxPlacer: public osgParticle::CenteredPlacer {
	};

	class CenteredPlacer: public osgParticle::Placer {
	};

	class CompositePlacer: public osgParticle::Placer {
	};

	class ConnectedParticleSystem: public osgParticle::ParticleSystem {
	};

	class ConstantRateCounter: public osgParticle::Counter {
	};

	class Counter: public osg::Object {
	};

	class DampingOperator: public osgParticle::Operator {
	};

	class DomainOperator: public osgParticle::Operator {
	public:
		class Domain {
		};

	};

	class Emitter: public osgParticle::ParticleProcessor {
	};

	class ExplosionDebrisEffect: public osgParticle::ParticleEffect {
	};

	class ExplosionEffect: public osgParticle::ParticleEffect {
	};

	class ExplosionOperator: public osgParticle::Operator {
	};

	class FireEffect: public osgParticle::ParticleEffect {
	};

	class FluidFrictionOperator: public osgParticle::Operator {
	};

	class FluidProgram: public osgParticle::Program {
	};

	class ForceOperator: public osgParticle::Operator {
	};

	class Interpolator: public osg::Object {
	};

	class LinearInterpolator: public osgParticle::Interpolator {
	};

	class ModularEmitter: public osgParticle::Emitter {
	};

	class ModularProgram: public osgParticle::Program {
	};

	class MultiSegmentPlacer: public osgParticle::Placer {
	};

	class Operator: public osg::Object {
	};

	class OrbitOperator: public osgParticle::Operator {
	};

	class Particle {
	};

	class ParticleEffect: public osg::Group {
	};

	class ParticleProcessor: public osg::Node {
	};

	class ParticleSystem: public osg::Drawable {
	public:
	};

	class ParticleSystemUpdater: public osg::Node {
	};

	class Placer: public osg::Object {
	};

	class PointPlacer: public osgParticle::CenteredPlacer {
	};

	class PrecipitationEffect: public osg::Node {
	public:
		class PrecipitationDrawable: public osg::Drawable {
		public:
			class CellMatrixMap {
			};

			class Cell {
			};

			class DepthMatrixStartTime {
			};

		};

		class PrecipitationDrawableSet {
		};

	};

	class Program: public osgParticle::ParticleProcessor {
	};

	class RadialShooter: public osgParticle::Shooter {
	};

	class RandomRateCounter: public osgParticle::VariableRateCounter {
	};

	class range {
	};

	class SectorPlacer: public osgParticle::CenteredPlacer {
	};

	class SegmentPlacer: public osgParticle::Placer {
	};

	class Shooter: public osg::Object {
	};

	class SinkOperator: public osgParticle::DomainOperator {
	};

	class SmokeEffect: public osgParticle::ParticleEffect {
	};

	class SmokeTrailEffect: public osgParticle::ParticleEffect {
	};

	class VariableRateCounter: public osgParticle::Counter {
	};

};

namespace osgTerrain {
};

namespace osgText {
	class FontResolution {
	};

	class FadeText: public osgText::Text {
	};

	class Font: public osg::Object {
	public:
		class GlyphTextureList {
		};

	};

	class Glyph: public osg::Image {
	};

	class GlyphGeometry: public osg::Referenced {
	};

	class Glyph3D: public osg::Referenced {
	};

	class GlyphTexture: public osg::Texture2D {
	};

	class String {
	};

	class Bevel: public osg::Object {
	public:
		class Vertices {
		};

	};

	class Style: public osg::Object {
	};

	class Text: public osgText::TextBase {
	public:
		class TextureGlyphQuadMap {
		};

		class GlyphQuads {
		public:
			class Glyphs {
			};

			class LineNumbers {
			};

			class Coords2 {
			};

			class Coords3 {
			};

			class TexCoords {
			};

			class ColorCoords {
			};

		};

	};

	class Text3D: public osgText::TextBase {
	public:
		class GlyphRenderInfo {
		};

	};

	class TextBase: public osg::Drawable {
	public:
		class AutoTransformCache {
		};

	};

};

namespace osgUtil {
	class AddRangeFunctor {
	};

	class MultiplyRangeFunctor {
	};

	class ConvertVec {
	};

	class ConvertVec< InType, OutType, 2, 2 > {
	};

	class ConvertVec< InType, OutType, 2, 3 > {
	};

	class ConvertVec< InType, OutType, 2, 4 > {
	};

	class ConvertVec< InType, OutType, 3, 2 > {
	};

	class ConvertVec< InType, OutType, 3, 3 > {
	};

	class ConvertVec< InType, OutType, 3, 4 > {
	};

	class ConvertVec< InType, OutType, 4, 2 > {
	};

	class ConvertVec< InType, OutType, 4, 3 > {
	};

	class ConvertVec< InType, OutType, 4, 4 > {
	};

	class CubeMapGenerator: public osg::Referenced {
	};

	class CullVisitor: public osg::NodeVisitor, public osg::CullStack {
	public:
	};

	class DelaunayConstraint: public osg::Geometry {
	};

	class DelaunayTriangulator: public osg::Referenced {
	public:
		class linelist {
		};

	};

	class DisplayRequirementsVisitor: public osg::NodeVisitor {
	};

	class DrawElementTypeSimplifier {
	};

	class DrawElementTypeSimplifierVisitor: public osg::NodeVisitor {
	};

	class dereference_less {
	};

	class dereference_clear {
	};

	class EdgeCollector {
	public:
		class IndexArrayList {
		};

		class EdgeSet {
		};

		class EdgeList {
		};

		class EdgeloopList {
		};

		class PointSet {
		};

		class PointList {
		};

		class TriangleList {
		};

		class TriangleSet {
		};

		class TriangleMap {
		};

		class Edge: public osg::Referenced {
		};

	};

	class GLObjectsVisitor: public osg::NodeVisitor {
	};

	class GLObjectsOperation: public osg::GraphicsOperation {
	};

	class HalfWayMapGenerator: public osgUtil::CubeMapGenerator {
	};

	class HighlightMapGenerator: public osgUtil::CubeMapGenerator {
	};

	class StateToCompile: public osg::NodeVisitor {
	public:
		class DrawableSet {
		};

		class StateSetSet {
		};

		class TextureSet {
		};

		class ProgramSet {
		};

	};

	class IncrementalCompileOperation: public osg::GraphicsOperation {
	public:
		class Contexts {
		};

		class ContextSet {
		};

		class CompileSets {
		};

		class CompileCompletedCallback: public osg::Referenced {
		};

		class CompileDrawableOp: public osgUtil::IncrementalCompileOperation::CompileOp {
		};

		class CompileInfo: public osg::RenderInfo {
		};

		class CompileList {
		public:
			class CompileOps {
			};

		};

		class CompileOp: public osg::Referenced {
		};

		class CompileProgramOp: public osgUtil::IncrementalCompileOperation::CompileOp {
		};

		class CompileSet: public osg::Referenced {
		public:
			class CompileMap {
			};

		};

		class CompileTextureOp: public osgUtil::IncrementalCompileOperation::CompileOp {
		};

	};

	class Intersector: public osg::Referenced {
	};

	class IntersectorGroup: public osgUtil::Intersector {
	public:
		class Intersectors {
		};

	};

	class IntersectionVisitor: public osg::NodeVisitor {
	public:
	};

	class Hit {
	public:
	};

	class IntersectVisitor: public osg::NodeVisitor {
	public:
		class HitList {
		};

		class LineSegmentHitListMap {
		};

		class IntersectState: public osg::Referenced {
		public:
			class LineSegmentPair {
			};

			class LineSegmentList {
			};

			class LineSegmentMaskStack {
			};

		};

	};

	class PickVisitor: public osgUtil::IntersectVisitor {
	};

	class LineSegmentIntersector: public osgUtil::Intersector {
	public:
		class Intersections {
		};

		class Intersection {
		public:
			class IndexList {
			};

		};

	};

	class GeometryCollector: public osgUtil::BaseOptimizerVisitor {
	public:
		class GeometryList {
		};

	};

	class IndexMeshVisitor: public osgUtil::GeometryCollector {
	};

	class VertexCacheVisitor: public osgUtil::GeometryCollector {
	};

	class VertexCacheMissVisitor: public osg::NodeVisitor {
	};

	class VertexAccessOrderVisitor: public osgUtil::GeometryCollector {
	};

	class AddRangeOperator {
	};

	class MultiplyRangeOperator {
	};

	class BaseOptimizerVisitor: public osg::NodeVisitor {
	};

	class Optimizer {
	public:
		class CheckGeometryVisitor: public osgUtil::BaseOptimizerVisitor {
		};

		class CombineLODsVisitor: public osgUtil::BaseOptimizerVisitor {
		public:
			class GroupList {
			};

		};

		class CombineStaticTransformsVisitor: public osgUtil::BaseOptimizerVisitor {
		};

		class CopySharedSubgraphsVisitor: public osgUtil::BaseOptimizerVisitor {
		public:
			class SharedNodeList {
			};

		};

		class FlattenBillboardVisitor: public osgUtil::BaseOptimizerVisitor {
		public:
			class NodePathList {
			};

			class BillboardNodePathMap {
			};

		};

		class FlattenStaticTransformsDuplicatingSharedSubgraphsVisitor: public osgUtil::BaseOptimizerVisitor {
		};

		class FlattenStaticTransformsVisitor: public osgUtil::BaseOptimizerVisitor {
		};

		class IsOperationPermissibleForObjectCallback: public osg::Referenced {
		};

		class MakeFastGeometryVisitor: public osgUtil::BaseOptimizerVisitor {
		};

		class MergeGeodesVisitor: public osgUtil::BaseOptimizerVisitor {
		};

		class MergeGeometryVisitor: public osgUtil::BaseOptimizerVisitor {
		};

	};

	class PerlinNoise {
	};

	class PlaneIntersector: public osgUtil::Intersector {
	public:
		class Intersections {
		};

		class Intersection {
		public:
			class Polyline {
			};

		};

	};

	class PolytopeIntersector: public osgUtil::Intersector {
	public:
		class Intersections {
		};

		class Intersection {
		};

	};

	class PositionalStateContainer: public osg::Object {
	public:
		class AttrMatrixPair {
		};

		class AttrMatrixList {
		};

		class TexUnitAttrMatrixListMap {
		};

	};

	class PrintVisitor: public osg::NodeVisitor {
	};

	class ReflectionMapGenerator: public osgUtil::CubeMapGenerator {
	};

	class RenderBin: public osg::Object {
	public:
		class RenderLeafList {
		};

		class StateGraphList {
		};

		class RenderBinList {
		};

		class DrawCallback: public osg::Referenced {
		};

	};

	class RenderLeaf: public osg::Referenced {
	};

	class RenderStage: public osgUtil::RenderBin {
	public:
		class Attachment {
		};

	};

	class SceneGraphBuilder {
	public:
		class QuadricState {
		};

	};

	class SceneView: public osg::Object, public osg::CullSettings {
	public:
		class ComputeStereoMatricesCallback: public osg::Referenced {
		};

	};

	class ShaderGenCache: public osg::Referenced {
	public:
		class StateSetMap {
		};

	};

	class ShaderGenVisitor: public osg::NodeVisitor {
	};

	class Simplifier: public osg::NodeVisitor {
	public:
		class IndexList {
		};

		class ContinueSimplificationCallback: public osg::Referenced {
		};

	};

	class SmoothingVisitor: public osg::NodeVisitor {
	};

	class StateGraph: public osg::Referenced {
	public:
		class ChildList {
		};

		class LeafList {
		};

	};

	class Statistics {
	public:
		class PrimitivePair {
		};

		class PrimitiveValueMap {
		};

		class PrimitiveCountMap {
		};

	};

	class StatsVisitor: public osg::NodeVisitor {
	public:
		class NodeSet {
		};

		class DrawableSet {
		};

		class StateSetSet {
		};

	};

	class TangentSpaceGenerator: public osg::Referenced {
	};

	class Tessellator: public osg::Referenced {
	public:
		class PrimList {
		};

		class NewVertex {
		};

		class Prim: public osg::Referenced {
		public:
			class VecList {
			};

		};

	};

	class TransformCallback: public osg::NodeCallback {
	};

	class TriStripVisitor: public osgUtil::BaseOptimizerVisitor {
	};

	class UpdateVisitor: public osg::NodeVisitor {
	};

};

namespace osgViewer {
	class CompositeViewer: public osgViewer::ViewerBase {
	};

	class GraphicsWindow: public osg::GraphicsContext, public osgGA::GUIActionAdapter {
	public:
		class Views {
		};

	};

	class GraphicsWindowEmbedded: public osgViewer::GraphicsWindow {
	};

	class GraphicsWindowFunctionProxy {
	};

	class OpenGLQuerySupport: public osg::Referenced {
	};

	class Renderer: public osg::GraphicsOperation {
	public:
	};

	class Scene: public osg::Referenced {
	};

	class DepthPartitionSettings: public osg::Referenced {
	};

	class View: public osg::View, public osgGA::GUIActionAdapter {
	public:
		class EventHandlers {
		};

	};

	class Viewer: public osgViewer::ViewerBase, public osgViewer::View {
	};

	class ViewerBase: public osg::Object {
	public:
		class Cameras {
		};

		class Contexts {
		};

		class Windows {
		};

		class Threads {
		};

		class OperationThreads {
		};

		class Scenes {
		};

		class Views {
		};

	};

	class HelpHandler: public osgGA::GUIEventHandler {
	};

	class StatsHandler: public osgGA::GUIEventHandler {
	public:
	};

	class WindowSizeHandler: public osgGA::GUIEventHandler {
	};

	class ThreadingHandler: public osgGA::GUIEventHandler {
	};

	class RecordCameraPathHandler: public osgGA::GUIEventHandler {
	};

	class LODScaleHandler: public osgGA::GUIEventHandler {
	};

	class ToggleSyncToVBlankHandler: public osgGA::GUIEventHandler {
	};

	class ScreenCaptureHandler: public osgGA::GUIEventHandler {
	public:
		class CaptureOperation: public osg::Referenced {
		};

	};

	class InteractiveImageHandler: public osgGA::GUIEventHandler, public osg::Drawable::CullCallback {
	};

};

namespace std {
};


#endif
